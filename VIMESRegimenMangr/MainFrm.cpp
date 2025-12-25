// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "ReportDocument.h"
#include "HMSReportFormDialog.h"
#include "resource.h"
#include "SYSPasswordChangeDialog.h"
#include "DocPane.h"
#include ".\mainfrm.h"

IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
//	ON_WM_SIZE()
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_COMMAND(ID_SETTING_CUSTOMERLIST, OnSettingCustomersetup)
	ON_COMMAND(ID_FILE_COMPANYMEDICALEXAMINATION, OnCommandSetupCompany)
	ON_COMMAND(ID_SETTING_SERVICEPACKAGE, OnTestServicePackage)
	ON_COMMAND(ID_SETTING_GUIDELIST, OnGuideSetup)
	ON_COMMAND(ID_SETTING_COUNTRYLIST, OnCountrySetup)
	ON_COMMAND(ID_SETTING_SETUPFEELIST, OnSetUpFeeList)
	ON_COMMAND(ID_FILE_CHANGEZONEWORKING, OnSetZoneWorking)
	ON_COMMAND(ID_REPORTFORMS, OnMenuReportForms)
	
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	SetLocalLang(1);
	m_szModuleName = _T("QUẢN LÝ PHÁC ĐỒ ĐIỀU TRỊ");
	m_szModuleID = _T("ED");
	m_szSize = CSize(1024, 760);
	m_szVersion = _T("5.0");
	SetLayoutStyle(LAYOUT_DOCPANE);
}

CMainFrame::~CMainFrame()
{

}

//#include "ReportUtils.h"
int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDI_MAINFRAME);
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;	

	SetWindowText(m_szModuleName);
	
	CenterWindow();

	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();	
	szStatus.Format(_T("%s - %s - %s"), GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy), GetHost());
	SetStatusText(szStatus, 1);	
	return 0;
}

void CMainFrame::OnCreateComponents()
{
	CRect rect;
	GetClientRect(&rect);

	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj=NULL;
	pDocPane->SetItemHeight(40);
	pDocPane->SetPaneStyle(DPS_LEFT|DPS_OUTLOOK);

	OnEduCreateComponents();
	
	pDocPane->RecalcLayout();	
}

void CMainFrame::OnEduCreateComponents()
{

	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj=NULL;
	
	m_wndNotification.Create(pDocPane);
	pDocPane->AddDashboard(&m_wndNotification);	

	m_wndRegimenTab.Create(pDocPane);

	m_wndPhacDoSetting.Create(pDocPane);
	m_wndPhacDoSetting.ShowWindow(SW_HIDE);
	m_wndRegimen.Create(&m_wndRegimenTab);
	m_wndRegimenList.Create(&m_wndRegimenTab);
	//m_wndPhacDoSetting.Create(&m_wndRegimenTab);

	obj = NULL;
	obj= pDocPane->AddPane(_T("Quản lý phác đồ"), _T("Quản lý phác đồ"), NULL);
	if(obj)
	{
		obj->AddCaption(_T("Phác đồ điều trị"));		
		obj->Add(_T("Quản lý phác đồ"), _T(""), &m_wndRegimenTab);		
		m_wndRegimenTab.Add(_T("Danh sách phác đồ"), &m_wndRegimenList);
		m_wndRegimenTab.Add(_T("Thông tin phác đồ"), &m_wndRegimen);

		/*
		obj->AddCaption(_T("Đánh giá phác đồ"));
		obj->Add(_T("Thông tin phác đồ"), _T(""));
		//obj->Add(_T("Danh sách phác đồ"), _T(""));
		*/
	}

	obj= pDocPane->AddPane(_T("Thiết lập"), _T("Quản lý phác đồ"), NULL);
	if(obj)
	{
		obj->AddCaption(_T("Phác đồ điều trị"));
		obj->Add(_T("Thiết lập"),_T(" "), &m_wndPhacDoSetting);		
		//obj->Add(_T("Thông tin phác đồ"), _T(""));
		//obj->Add(_T("Danh sách phác đồ"), _T(""));
	}

}

void CMainFrame::OnInitializes(){
	CHMSMainFrame::OnInitializes();
	CString szSQL;	

	m_szZone = AfxGetApp()->GetProfileString(_T("ZONE"), _T("ZONE_WORKING"), _T(""));
	szSQL.Format(_T("Khu làm việc: %s"), m_szZone);
	SetStatusText(szSQL);
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
void CMainFrame::OnTimer(UINT nIDEvent)
{
	CHMSMainFrame::OnTimer(nIDEvent);
}


BOOL CMainFrame::PreTranslateMessage(MSG* pMsg)
{
	return CHMSMainFrame::PreTranslateMessage(pMsg);
}

void CMainFrame::OnFileChangepassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();

}

void CMainFrame::SetModuleID(LPCTSTR lpszMod){
	m_szModuleID = lpszMod;
}
void CMainFrame::OnMenuReportForms()
{	
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();	
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


CString CMainFrame::GetStudentName(long nStudentID){
	CRecord rs(&m_db);
	CString szSQL, tmpStr;
	CString szStudentName;	

	int nCount = 0;
	szSQL.Format(_T("SELECT es_student_id, es_surname, es_midname, es_firstname FROM edu_student WHERE es_id=%ld LIMIT 1"), nStudentID);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())	return _T("");

	rs.GetValue(_T("es_surname"), tmpStr);
	szStudentName = tmpStr;
	rs.GetValue(_T("es_midname"), tmpStr);
	if(!tmpStr.IsEmpty())
		szStudentName += _T(" ")+tmpStr;
	rs.GetValue(_T("es_firstname"), tmpStr); 
	if(!tmpStr.IsEmpty())
		szStudentName += _T(" ")+tmpStr;
	szStudentName.Trim();
	
	return szStudentName;
}

void CMainFrame::OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData){
	CString szName = lpszName;
	CString szData = lpszData;
	szName.MakeLower();
	szData.Trim();
	/*if(szName == _T("mapbarcode") && szData == _T("Y")){
		m_bMap = true;
	}

	if(szName == _T("labhost")){
		m_szLabConnHost = szData;
	}*/
}

void CMainFrame::OnSettingCustomersetup()
{
	// TODO: Add your command handler code here
}

void CMainFrame::OnCommandSetupCompany()
{

}

void CMainFrame::OnTestServicePackage()
{
}

void CMainFrame::OnCountrySetup()
{
	
}

void CMainFrame::OnGuideSetup()
{
	
}
void CMainFrame::OnSetUpFeeList()
{
		
}

void CMainFrame::OnSetZoneWorking()
{

}