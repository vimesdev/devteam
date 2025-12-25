// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "resource.h"
#include ".\mainfrm.h"
#include "VIMESLISPermissionDialog.h"
#include "SYSPasswordChangeDialog.h"
#include "PMSDailyDrugOrder.h"
#include "HMSReportForms\HMSReportFormDialog.h"


void ParseResultFields(LPCTSTR lpszData, LPCTSTR lpszSeperators, CStringArray& fields){
	bool bFlag = false;
	CString tmpStr;
	LPCTSTR pstr = lpszData;
	fields.RemoveAll();
	tmpStr.Empty();
	if(*pstr == NULL)
		return;
	while(*pstr != NULL){
		bFlag = false;
		for (int i =0; i < _tcslen(lpszSeperators); i++){
			if(*pstr == lpszSeperators[i]){
				fields.Add(tmpStr);
				tmpStr.Empty();
				bFlag = true;
				break;
			}
		}
		if(!bFlag)
			tmpStr += *pstr;
		pstr++;
	}
	fields.Add(tmpStr);
}



IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
//	ON_WM_SIZE()
	ON_COMMAND(ID_SETUP_DESCRIBEGROUPSETUP, OnSetupDescribegroupsetup)
	ON_COMMAND(ID_SETUP_DESCRIBEENTRYSETUP, OnSetupDescribeentrysetup)
	ON_COMMAND(ID_SETUP_PERMISSIONSETUP, OnSetupPermissionsetup)
	ON_WM_TIMER()
	ON_COMMAND(ID_SETUP_INSTRUMENTPROTOCOL, OnSetupInstrumentprotocol)
	ON_COMMAND(ID_SETUP_INSTRUMENTSETTING, OnSetupInstrumentsetting)
	ON_COMMAND(ID_FILE_CLEANUPTEMPLATE, OnFileCleanuptemplate)
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_COMMAND(ID_SETUP_PARSESAMPLERESULT, OnSetupParsesampleresult)
	ON_COMMAND(ID_FILE_CONNECTRS232, OnFileConnectrs232)
	ON_COMMAND(ID_COMMAND_PREVIEWRESULT, OnCommandPreviewresult)
	//ON_COMMAND(ID_COMMAND_DRUGMATERIALORDERSHEET, OnCommandDrugmaterialordersheet)		
	//ON_COMMAND(ID_FILE_MEDICALCABINETMANAGER, OnFileMedicalcabinetmanager)	
	ON_COMMAND(ID_FILE_REPORTS32804, OnFileReports32804)
	//ON_COMMAND(ID_FILE_CREATEDRUGMATERIALORDER, OnFileCreatedrugmaterialorder)
	//ON_COMMAND(ID_FILE_MEDICALCABINETMANAGEMENT, OnFileMedicalcabinetmanagement)
	//ON_COMMAND(ID_FILE_AUTOPRINT, OnFileAutoprint)
	//ON_COMMAND(ID_FILE_SETUPGROUP, OnFileSetupOperationGroup)
	//ON_COMMAND(ID_FILE_SETUPSMARTPRESCRIPTIONLIST, OnFileSetupSmartPrescriptionList)
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
//	SetEnableLogin(FALSE);
	SetLocalLang(1);
	m_szModuleName = _T("SAMPLING AND RECEIVING MANAGEMENT SYSTEM");
	m_szModuleID = _T("LIMS");
	m_szSize = CSize(1024, 760);
	m_szVersion = _T("1.0");
	SetLayoutStyle(LAYOUT_TABCTRL);
	m_bHISReference = false;
	m_bExternalInput = TRUE;
	m_szInPatient = _T("E");
	m_bAutoPrint = FALSE;
}

CMainFrame::~CMainFrame()
{
//	m_LocalDb.Close();

}

//#include "ReportUtils.h"
int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;	

//	m_LocalDb.Init(_T("Log"), 0, DBTYPE_SQLITE);
//	m_LocalDb.Open(_T("vimes_lims.s3db"), _T(""), _T(""));

//	CreateToolBar();
//	ModifyStyle(WS_MAXIMIZEBOX|WS_SIZEBOX, 0);
//	CWnd *pWnd = GetPane();
//	pWnd->ShowWindow(SW_HIDE);	
	
	//m_wndPatientProfile.Create(GetPane());
//	m_wndWorkorder.Create(GetPane());


	CRecord rs(&m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT sd_type FROM sys_dept where sd_id='%s' "), GetDepartmentID());
	rs.ExecSQL(szSQL);
	m_szDeptType = _T("DT");
	if(!rs.IsEOF())
	{
		CString tmpStr;
		rs.GetValue(_T("sd_type"), m_szDeptType);
		
	}



	if (CheckPermission(_T("06")))
	{
		m_wndPatientList.Create(GetPane());
		AddView(_T("Order List"), &m_wndPatientList);
	}
	bool hasBatch = false;
	if (CheckPermission(_T("07")))
	{
		m_wndPatientProfile.Create(GetPane());
		AddView(_T("Quản lý Lấy mẫu"), &m_wndPatientProfile);
		hasBatch = true;
	}

	if (CheckPermission(_T("08")))
	{
		m_wndPatientProfile_ex.Create(GetPane());
		AddView(_T("Quản lý Nhận mẫu"), &m_wndPatientProfile_ex);
		hasBatch = true;
	}
	if (CheckPermission(_T("09")))
	{
		m_wndSurgerySchedule.Create(GetPane());
		AddView(_T("Lịch trực lấy máu"), &m_wndSurgerySchedule);
	}	

	if(hasBatch)
	{
		m_wndBatchView.Create(GetPane());
		AddView(_T("Batch"), &m_wndBatchView);
	}
	


//	AddView(_T("Work order"), &m_wndWorkorder);
	CenterWindow();

	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	//TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	//szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	//szStatus.AppendFormat(_T(" - Host:%s"), GetHost(), GetDatabase());
	szStatus.Format(_T("%s - %s - %s"), GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy), GetHost());
	SetStatusText(szStatus, 1);

	SetForegroundWindow();


	m_lims_orderTbl.SetTableName(_T("lims_order"));
	m_lims_orderTbl.EnableTimestamp(false);
	m_lims_orderTbl.AddField(_T("limso_createddate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_docno"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_oid"), dfLong); 
	m_lims_orderTbl.AddField(_T("limso_barcode"), dfText, 35); 
	m_lims_orderTbl.AddField(_T("limso_instid"), dfInteger); 
	m_lims_orderTbl.AddField(_T("limso_groupid"), dfText); 
	m_lims_orderTbl.AddField(_T("limso_orderdate"), dfDateTime); 
	m_lims_orderTbl.AddField(_T("limso_orderdept"), dfText, 7); 
	m_lims_orderTbl.AddField(_T("limso_orderroom"), dfInteger); 
	m_lims_orderTbl.AddField(_T("limso_status"), dfText, 1); 
	m_lims_orderTbl.AddField(_T("limso_class"), dfText, 1); 
	m_lims_orderTbl.AddField(_T("limso_pname"), dfText, 65); 

	m_lims_order_lineTbl.SetTableName(_T("lims_order_line"));
	m_lims_order_lineTbl.EnableTimestamp(false);
	m_lims_order_lineTbl.AddField(_T("limsol_docno"), dfLong); 
	m_lims_order_lineTbl.AddField(_T("limsol_oid"), dfLong); 
	m_lims_order_lineTbl.AddField(_T("limsol_itemid"), dfText, 15); 
	m_lims_order_lineTbl.AddField(_T("limsol_instcode"), dfText, 15); 
	m_lims_order_lineTbl.AddField(_T("limsol_code_out"), dfText, 15); 
	m_lims_order_lineTbl.AddField(_T("limsol_instid"), dfInteger); 
	m_lims_order_lineTbl.AddField(_T("limsol_result"), dfText, 15); 
	m_lims_order_lineTbl.AddField(_T("limsol_result2"), dfText, 15); 
	m_lims_order_lineTbl.AddField(_T("limsol_result3"), dfText, 15); 
	m_lims_order_lineTbl.AddField(_T("limsol_result4"), dfText, 15); 
	m_lims_order_lineTbl.AddField(_T("limsol_note"), dfText, 15); 
	m_lims_order_lineTbl.AddField(_T("limsol_status"), dfText, 1); 
	m_lims_order_lineTbl.AddField(_T("limsol_barcode"), dfInteger); 


	m_bAutoPrint = AfxGetApp()->GetProfileInt(_T("SETTINGS"), _T("AUTOPRINT"), 0);
	if (m_bAutoPrint) {
		m_pMainMenu->CheckMenuItem(ID_FILE_AUTOPRINT, MF_CHECKED | MF_BYCOMMAND);
    } else {
        m_pMainMenu->CheckMenuItem(ID_FILE_AUTOPRINT, MF_UNCHECKED | MF_BYCOMMAND);
    }

	

	
	return 0;
}


void CMainFrame::OnInitializes(){
	CHMSMainFrame::OnInitializes();
/*
	if(!m_wndSplitterV.CreateStatic(this, 1, 2))
		return;
//Sleep(15000);
	m_wndPatientList.Create(&m_wndSplitterV);
	m_wndSplitterV.CreateViewEx(0,0, CSize(390, 700), &m_wndPatientList);

	m_wndTest.Create(&m_wndSplitterV);
	m_wndSplitterV.CreateViewEx(0,1, CSize(420, 700), &m_wndTest);

	CenterWindow();
	m_wndPatientList.SetActiveWindow();
*/


	CRecord rs(&m_db);
	CString szSQL;
	CString tmpStr;
	szSQL.Format(_T("SELECT su_deptid, su_roomid, su_groupid FROM sys_user WHERE lower(su_userid)=lower('%s') "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("su_deptid"), m_szDeptID);
		rs.GetValue(_T("su_roomid"), m_nRoomID);
		rs.GetValue(_T("su_groupid"), m_nUserGroup);
		rs.GetValue(_T("su_groupid"), m_nUserGroup);
	}
	//Quyền chỉ user xét nghiệm mới được chạy module này//
	/*szSQL.Format(_T("SELECT sd_type FROM sys_dept WHERE sd_id='%s' "), m_szDeptID);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);

	
	bool bExit = false;
	

	if(rs.IsEOF())
		bExit = true;
	else
	{
		
		rs.GetValue(_T("sd_type"), tmpStr);		
		if (tmpStr != _T("XN"))
			bExit = true;		
	}	

	tmpStr = GetCurrentUser();
	tmpStr.MakeLower();
	if(bExit && tmpStr != _T("admin"))
	{
		ShowMessageBox(_T("Permission Denied."));
		exit(0);
	}*/

	szSQL.Format(_T("SELECT * FROM hms_config "));
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("lims_autoprint"), m_szAutoPrint);

		rs.GetValue(_T("lims_confirm_result"), m_szConfirmResult);		
	}


	
	m_szTestGroup = _T("'B0000'");
	szSQL.Format(_T("SELECT hfg_id FROM hms_fee_group where hfg_deptid='%s' "), m_szDeptID);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hfg_id"), tmpStr);
		if(!m_szTestGroup.IsEmpty())
			m_szTestGroup += _T(",");

		m_szTestGroup.AppendFormat(_T("'%s'"), tmpStr);
		rs.MoveNext();
	}



}

BOOL CMainFrame::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	return CFrameWnd::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}

BOOL CMainFrame::OnCommand(WPARAM wParam, LPARAM lParam)
{
	return CHMSMainFrame::OnCommand(wParam, lParam);
}



void CMainFrame::OnSize(UINT nType, int cx, int cy)
{
	CFrameWnd::OnSize(nType, cx, cy);
	// TODO: Add your message handler code here
}

void CMainFrame::OnSetupDescribegroupsetup()
{
}

void CMainFrame::OnSetupDescribeentrysetup()
{

}


CString CMainFrame::GetDeptName(){
	CRecord rs(&m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT sd_name FROM sys_dept Where sd_id='%s' "), m_szDeptID);
	rs.ExecSQL(szSQL);
	return rs.GetStringValue();
}


void CMainFrame::OnSetupPermissionsetup()
{
	CString szUser = GetCurrentUser();
	if(szUser.CompareNoCase(_T("admin")) != 0)
	{
		ShowMessageBox(_T("Permission is denied"), MB_OK);
		return;
	}

//	CVIMESLISPermissionDialog dlg(this);
//	dlg.DoModal();
}


void CMainFrame::OnTimer(UINT nIDEvent)
{
	if(nIDEvent == 1){
	//	if(m_wndTaskbarNotifier.GetSafeHwnd() && !m_wndTaskbarNotifier.IsWindowVisible())
	//	m_wndTaskbarNotifier.Show(_T("Notification"));
	}

	CHMSMainFrame::OnTimer(nIDEvent);
}


void CMainFrame::OnSetupInstrumentprotocol()
{
//	CRS232PortConfigureDialog dlg;
//	CSelectionEntryDialog dlg("");
//	dlg.DoModal();
//	CInterfaceProtocolDialog dlg(this);
//	dlg.DoModal();
}

void CMainFrame::OnSetupInstrumentsetting()
{
//	CVIMESLISInstrumentSetting dlg(this);
//	dlg.DoModal();	
}

BOOL CMainFrame::PreTranslateMessage(MSG* pMsg)
{
	return CHMSMainFrame::PreTranslateMessage(pMsg);
}

void CMainFrame::OnFileCleanuptemplate()
{
	WIN32_FILE_ATTRIBUTE_DATA wfa;
/*
	CFileFind finder;
	BOOL bWorking = finder.FindFile(_T("*.*"));
	while (bWorking)
	{
		bWorking = finder.FindNextFile();
	//TRACE(_T("%s\n"), (LPCTSTR)finder.GetFileName());
		::GetFileAttributesEx(finder.GetFileName(), NULL, &wfa);
		_msg(_T("%s"), wfa.ftCreationTime);
	} 
*/
}

void CMainFrame::OnFileChangepassword()
{
	return;
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();

}

void CMainFrame::OnSetupParsesampleresult()
{
	//CParseSampleDialog dlg;
	//dlg.DoModal();
}

void CMainFrame::OnFileConnectrs232()
{
	
}

void CMainFrame::OnCommandPreviewresult()
{
//	m_wndTest.OnViewTestOrderResult();
}

void CMainFrame::OnCommandDrugmaterialordersheet()
{
	if(!CheckPermission(_T("03"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}
	CPMSDailyDrugOrderDialog dlg(this);
	dlg.DoModal();
}



#include "HMSMedicalCabinet.h"
#include "CabinetDialog.h"

void CMainFrame::OnFileMedicalcabinetmanager()
{
	CCabinetDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
//	CHMSMedicalCabinet	dlg(this);
//	dlg.m_wndMedicalCabinetOrder.m_szDeptID = m_szDept;
//	dlg.DoModal();
}


void CMainFrame::OnFileReports32804()
{
	// TODO: Add your command handler code here
	return;
	BeginWaitCursor();	
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
	EndWaitCursor();

}


void CMainFrame::SetModuleID(LPCTSTR lpszMod){
	m_szModuleID = lpszMod;
}

long CMainFrame::LoadTestGroup(CWnd *pWnd, CString szKey, CString szFilter){
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	CGuiComboBox* pCB = (CGuiComboBox*) pWnd;

	if(pCB->IsSearchKey() && !szKey.IsEmpty())
	{
		szWhere.Format(_T(" AND hfg_id='%s' "), szKey);
	}

	szWhere.AppendFormat(_T(" and hfg_id in(select sup_permid from sys_userperm where sup_userid='%s' ) "), GetCurrentUser());

	if(!szFilter.IsEmpty())
		szWhere.AppendFormat(_T(" %s "), szFilter);

	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name FROM hms_fee_group ") \
		_T("WHERE (substr(hfg_id, 1, 2) IN('B1')) %s ORDER BY hfg_id"), szWhere);
	//_fmsg(_T("%s"), szSQL);		
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}


void CMainFrame::OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData){
	CString szName = lpszName;
	CString szData = lpszData;
	szName.MakeLower();
	szData.Trim();

	if(szName == _T("mapbarcode") && szData == _T("Y")){
		m_bMap = true;
	}
	if(szName == _T("inpatient")){
		m_szInPatient = szData;

	}
}

#include "CabinetDialog.h"
#include "WardDeliveryOrderDialog.h"

void CMainFrame::OnFileCreatedrugmaterialorder()
{
	if(!CheckPermission(_T("03"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	CWardDeliveryOrderDialog dlg(this);
	dlg.DoModal();}

void CMainFrame::OnFileMedicalcabinetmanagement()
{
	if(!CheckPermission(_T("03"))){
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}
	CCabinetDialog dlg(this);
	dlg.DoModal(); }

void CMainFrame::OnFileAutoprint()
{

	m_bAutoPrint = !m_bAutoPrint;
	if(m_pMainMenu == NULL)
		return;

    if (m_bAutoPrint) {
		m_pMainMenu->CheckMenuItem(ID_FILE_AUTOPRINT, MF_CHECKED | MF_BYCOMMAND);
    } else {
        m_pMainMenu->CheckMenuItem(ID_FILE_AUTOPRINT, MF_UNCHECKED | MF_BYCOMMAND);
    }

	AfxGetApp()->WriteProfileInt(_T("SETTINGS"), _T("AUTOPRINT"), m_bAutoPrint);

}

#include "HMSOperationGroupSetup.h"

void CMainFrame::OnFileSetupOperationGroup()
{
	CHMSOperationGroupSetup dlg(this);
	dlg.DoModal();

}

#include "HMSPrescriptionGroupItemsDialog.h"

void CMainFrame::OnFileSetupSmartPrescriptionList()
{
	CHMSPrescriptionGroupItemsDialog dlg(this);
	dlg.DoModal();
}
CString CMainFrame::GetDoctorName(CString szUserId, bool bFirstName)
{
	CString szUserName, szSQL;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT su_name FROM sys_user WHERE lower(su_userid)=lower('%s') "), szUserId);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return _T("");
	rs.GetValue(_T("su_name"), szUserName);
	if (bFirstName)
	{
		CString szSurName, szMidName, szLastName;
		SplitName(szUserName, szSurName, szMidName, szLastName);
		szUserName.Format(_T("%s %s"), szMidName, szLastName);	
	}
	return szUserName;
}