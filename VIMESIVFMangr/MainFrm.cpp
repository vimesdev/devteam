// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "HMSTreatmentDocument.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include ".\mainfrm.h"
#include "HMSReportForms\HMSReportFormDialog.h"
#include "Resource.h"
#include "HMSPrescriptionGroupItemsDialog.h"
#include "HMSDailyOrderView.h"
#include "HMSMedicalCabinet.h"
#include "SYSPasswordChangeDialog.h"
#include "PMSReturnOrder.h"
#include "PMSDailyDrugOrder.h"
#include "HMSSetupFood.h"
#include "HMSTreatmentHistory.h"
#include "ReportDocument.h"
#include "HMSRetailDialog.h"
#include "WardMedicalCabinetDialog.h"
#include "WardDeliveryOrderDialog.h"
#include "WardReturnOrderDialog.h"
#include "HMSTreatmentTestProfileDialog.h"
#include "HMSTrackingPatientFeeDialog.h"
#include "HMSOperationOrderDiaglog.h"
#include "HMSDailyDrugMaterialOrderBedDialog.h"
#include "HMSDailyOperationMaterialDialog.h"
#include "HMSOperationGroupSetup.h"
#include "CabinetDialog.h"
#include "HMSFormInfo.h"
#include "IVFMapIndex.h"
#include "IVFStorageListSetupDialog.h"
#include "IVFSetupList.h"
#include "IVFMapItemType.h"
#include "StringToken.h"
#include "HMSDoctorInfo.h"
#include "MFCCaptionBarEx.h"
#include "MFCWidget.h"

#pragma comment(lib, "../lib/HMSCORE.lib")
#pragma comment(lib, "../Lib/HMSReportForms.lib" )


// CMainFrame

bool _showMessage = false;
//controlling function header
static UINT StartThread (LPVOID param);

//structure for passing to the controlling function
typedef struct THREADSTRUCT
{
    CMainFrame*		_this;
	CNotification*	_notice;
    //you can add here other parameters you might be interested on
} THREADSTRUCT;

IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_COMMAND_MAPINDEX, OnCommandMapIndex)
	ON_COMMAND(ID_COMMAND_MAPITEMTYPE, OnCommandMapItemType)
	ON_COMMAND(ID_FILE_SETUPPRESCRIPTIONLIST, OnFileSetupprescriptionlist)
	ON_COMMAND(ID_COMMAND_MEDICALCABINET, OnCommandMedicalcabinet)
	ON_COMMAND(ID_COMMAND_DAILYDRUGORDER, OnCommandDailydrugorder)
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)	
	ON_COMMAND(ID_COMMAND_RETURNDRUGORDER, OnCommandReturndrugorder)
	ON_COMMAND(ID_DRUGANDMATERIALORDERSHEET, OnDrugandmaterialordersheet)	
	ON_COMMAND(ID_COMMAND_SEARCHINFORMATIONPATIENT, OnCommandSearchinformationpatient)
	ON_COMMAND(ID_FILE_HELP, OnFileHelp)
	ON_COMMAND(ID_FILE_REPORT32825, OnFileReport32825)	
	ON_COMMAND(ID_COMMAND_SETUPFOOD32826, OnCommandSetupfood32826)
	ON_COMMAND(ID_FILE_KEEPTRACKOFPATIENTFEE, OnFileKeeptrackofpatientfee)
	ON_COMMAND(ID_COMMAND_SETUPTESTPROFILE, OnCommandSetuptestprofile)
	ON_COMMAND(ID_FILE_DAILYFOOD, OnFileDailyfood)
	ON_COMMAND(ID_FILE_OPERATIONFROMDEPT, OnFileOperationfromdept)
	ON_COMMAND(ID_FILE_DAILYMATERIALORDERSHEETTHEBED, OnFileDailymaterialordersheetthebed)
	ON_COMMAND(ID_DRUG_DAILYMATERIALORDERSHEETTHEOPERATION, OnDrugDailymaterialordersheettheoperation)
	ON_COMMAND(ID_FILE_OPERATIONSCHEDULES, OnFileOperationschedules)
	ON_COMMAND(ID_COMMAND_EXPORTTOHL7, OnFileExporttohl7)
	ON_COMMAND(ID_FILE_OPERATIONGROUPSETUP, OnFileOperationgroupsetup)
	ON_COMMAND(ID_FILE_BEDTRACKING, OnFileBedTracking)
	ON_COMMAND(ID_FILE_BOSUNG_HOANTRAKHONGCOBENHNHAN, OnFileBosungHoantrakhongcobenhnhan)
	ON_COMMAND(ID_COMMAND_FORMINFOSETUP, OnCommandForminfosetup)
	ON_COMMAND(ID_ORDER_RETAILORDER, OnOrderRetailorder)
	ON_COMMAND(ID_COMMAND_STORAGE_SETUP, OnCommandStorageSetup)
	ON_COMMAND(ID_COMMAND_SELECTIONSETUP, OnCommandSelectionSetup)
	ON_COMMAND(ID_COMMAND_DOCTORINFO, OnCommandDoctorinfo)

END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	//SetLocalLang(0);
	m_szModuleName = _T("QUẢN LÝ ĐIỀU TRỊ HIẾM MUỘN");
	m_szModuleID = _T("IVF");
	m_szSize = CSize(1020, 720);
	m_szVersion = _T("2.0");
	m_szClosed = _T("N");
	m_bAllowLoadICD10 = true;
//	m_pWndNotification = new CNotification();
	m_pWndNotification = NULL;
	m_nInsOffLinePayment = 0;
	m_bConfirm = true;
	m_bIsSurgeryExamination = false;
	m_bAllowLoadOperation = true;
	m_bPrivateNoneView =false;
}

CMainFrame::~CMainFrame()
{
	
}

static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew)
{
    ((CMainFrame *)pWnd)->OnTabSelectChange(nOld, nNew);
}
#define CMD_SIGNATURE CMD_USER + 12

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	if(m_UserInfo.su_deptid != _T("TTDTHM"))
	{
		ShowMessageBox(_T("Tên đăng nhập không thuộc trung tâm điều trị hiếm muộn (IVF)"));
		exit(0);
		return -1;

	}

	((CGuiTabCtrl *)GetPane())->SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
    m_pAppBar->SetCaptionHeight(30);
    m_pAppBar->m_szItemSize = CSize(125, 30);
    m_pAppBar->Add(new CWidgetItem(CMD_SIGNATURE, icons::collections_bookmark,
                                   L"EMR", L"Hồ sơ bệnh án điện tử EMR"));

	
	m_wndPatientDocument.Create(GetPane());
	m_wndTreatmentQueue.Create(GetPane());

	m_wndDailyDrugOrder.Create(GetPane());
	m_wndMedicalCabinetDrug.Create(GetPane());
	m_wndServicePackageView.Create(GetPane());
	m_wndAppointmentList.Create(GetPane());
	//m_wndLabList.Create(GetPane());
	//m_wndStorageView_v2.Create(GetPane());
//	m_wndStorageView.Create(NULL, NULL, WS_CHILD|WS_VISIBLE, CRect(0, 0,0,0), GetPane(), 0);
//	m_wndStorageView.ShowWindow(SW_HIDE);
	AddView(_T("DANH SÁCH"), &m_wndTreatmentQueue);
	AddView(_T("HỒ SƠ"), &m_wndPatientDocument);
	AddView(_T("DỰ TRÙ"), &m_wndDailyDrugOrder);
	AddView(_T("TỦ TRỰC"), &m_wndMedicalCabinetDrug);


	if(CheckPermission(_T("17.01")))
	{
	//	m_wndPatientDocumentEx.Create(GetPane());
	//	AddView(_T("THỦ THUẬT PK"), &m_wndPatientDocumentEx);
	}

	AddView(_T("GÓI DỊCH VỤ"), &m_wndServicePackageView);
	AddView(_T("LỊCH HẸN"), &m_wndAppointmentList);
	
	m_wndLabView.Create(GetPane(), CRect(0, 0, 0,0));
	AddView(_T("LAB"), &m_wndLabView);
	//AddView(_T("LAB"), &m_wndLabList);
	//AddView(_T("KHO TRỮ"), &m_wndStorageView_v2);

	bool sign_perm = CheckPermission(_T("EMR.KLD"));
    // Tam thoi gai = true de test
    sign_perm = true;
	if (GetProp(_T("hms_emr_enable")) == _T("Y") && sign_perm)
    {
        // m_wndSignatureView.SetViewType(1);
        // m_wndSignatureView.Create(this, CRect(0,0,0,0));
        // AddView(_T("Electric medical record"), &m_wndSignatureView);

        // lay form trinh ky ra 21/12/2022 longpt
        m_wndSignatureTransView.Create(GetPane());
        AddView(_T("Trình ký"), &m_wndSignatureTransView);

        m_wndSendRecord.Create(GetPane());
        AddView(_T("Gửi hồ sơ KHTH"), &m_wndSendRecord);
    }

	SetActivePane(0);

	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	szStatus.AppendFormat(_T(" - Host:%s"), GetHost(), GetDatabase());
	SetStatusText(szStatus, 1);

	
	CString szFileName;
	CString szChecksum;
	CString szPath;
	::GetCurrentDirectory(MAX_PATH, szPath.GetBufferSetLength(MAX_PATH));
	szPath.ReleaseBuffer();
	szFileName.Format(_T("%s\\VIMES.DLL"), szPath);
	
	//::ChecksumFile(szFileName, szChecksum);
	

	return 0;
}


void CMainFrame::OnInitializes(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSMainFrame::OnInitializes();
	if (CheckCoreVersion() == false)
	{
		exit(0);
	}
//Neu nhom nguoi su dung la bac si
	
	if(GetUserGroup() == _T("D")){
		m_szDoctor = GetCurrentUser();
	}
	else
		m_szDoctor.Empty();	

	//Lat thong so config
	CString szSQL;
	CRecord rs(&m_db);
	CString szPharmaWardApproved;

	szSQL.Format(_T("SELECT * FROM hms_config "));
	rs.ExecSQL(szSQL);
	m_szDefaultStockID.Empty();
	if(!rs.IsEOF()){
		rs.GetValue(_T("pms_idefaultstockid"), m_szDefaultStockID);
		rs.GetValue(_T("ht_foodtravel"), m_szFoodTravel);
		rs.GetValue(_T("ht_increase_treatdate"), m_szIncTreatDateFlag);
		rs.GetValue(_T("mt_createnewtreantment"), m_szCreatenewtreantment);
		rs.GetValue(_T("hms_dailyser_deptid"), m_szDailyserdeptid);
		rs.GetValue(_T("hms_insoffline"), m_nInsOffLinePayment);
		rs.GetValue(_T("hc_pharma_wardapproved"), szPharmaWardApproved);

		CString tmpStr;
		tmpStr.Format(_T("[%s]"), pMF->GetDepartmentID());
		if(szPharmaWardApproved.Find(tmpStr) >= 0)
		{

				//Initilize the critical section
			CString StrClassName = AfxRegisterWndClass(CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS,
				              LoadCursor(AfxGetInstanceHandle(), IDC_ARROW),
			                      (HBRUSH)GetSysColorBrush(
							COLOR_BTNFACE),
	                                       LoadIcon(AfxGetInstanceHandle(), IDI_APPLICATION));

			CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
			if(m_pWndNotification)
			{
				CString tmpStr;
				TranslateString(_T("Notification"), tmpStr);
				m_pWndNotification->m_szHost = pMF->GetHost();
				m_pWndNotification->m_szPort = pMF->GetPort();
				m_pWndNotification->m_szDbUserName = pMF->m_szUser;
				m_pWndNotification->m_szDatabase = pMF->GetDatabase();
				m_pWndNotification->m_szPassword = pMF->m_szPassword;
				m_pWndNotification->m_pDb = &m_db;
				m_pWndNotification->Create(StrClassName, tmpStr,WS_POPUP | WS_CAPTION | WS_SYSMENU | MFS_BLOCKSYSMENU, CRect(0,0, 400, 600));
				
				m_pWndNotification->m_szModuleID = pMF->GetModuleID();
				m_pWndNotification->m_szUserID = pMF->GetCurrentUser();
				m_pWndNotification->ShowWindow(SW_HIDE);
				m_pWndNotification->UpdateWindow();

				THREADSTRUCT *_param = new THREADSTRUCT;
				_param->_this = this;
				AfxBeginThread (StartThread, _param);
			}
		}
	}
	
	szSQL.Format(_T("SELECT su_roomid FROM sys_user WHERE lower(su_userid) = lower('%s') "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	m_szWard.Empty();
	if(!rs.IsEOF())
	{
		CString szFloor, szText;
		TranslateString(m_szModuleName, szText);		
		szText.AppendFormat(_T(" [%s]"), m_szDept);
		SetWindowText(szText);

	}
	//Schedule Information
	//AfxBeginThread (ShowScheduleThread, pMF);

}

bool CMainFrame::IsPaymentFee(CString szType, long nIdx){
	CString szSQL, tmpStr;
	CRecord rs(&m_db);
	if(szType == _T("P")){
		szSQL.Format(_T("SELECT hpc_payment FROM hmsv_paraclinic WHERE hpc_docno=%ld AND hpc_orderid=%ld"), m_nDocumentNo,  nIdx);
	}
	else if(szType == _T("O")){
		szSQL.Format(_T("SELECT ho_payment FROM hms_operation WHERE ho_docno=%ld AND ho_idx=%ld"), m_nDocumentNo, nIdx);
	}
	else if(szType == _T("D")){
		szSQL.Format(_T("SELECT hpo_payment FROM hms_ipharmaorder WHERE hpo_docno=%ld AND hpo_orderid=%ld"), m_nDocumentNo, nIdx);
	}
	else if(szType == _T("B"))
		szSQL.Format(_T("SELECT hb_payment FROM hms_bed WHERE hb_docno=%ld AND hb_idx=%ld"), m_nDocumentNo, nIdx);

	rs.ExecSQL(szSQL);
	tmpStr = rs.GetStringValue();
	if(tmpStr == _T("P"))
		return true;
	else
		return false;
	return false;

}
CString CMainFrame::GetDocumentStatus(){
	if(m_nDocumentNo < 0)
		 return _T("");
	CString szSQL, szStatus;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT htr_status FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d"), m_nDocumentNo, m_nRefIndex);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("htr_status"), szStatus);
	return szStatus;
}

bool CMainFrame::IsActiveDocument(){
	 if(m_nDocumentNo < 0)
		 return false;
	 if(m_bPrivateNoneView)
		 return false;
	
	CString szStatus = GetDocumentStatus();
	if(szStatus==_T("I") || szStatus == _T(""))
		return true;
	return false;
}

bool CMainFrame::IsPaidFees(){
	CString szSQL;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT htrf_acceptedfee FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d"), m_nDocumentNo, m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return false;
	CString szIsPaid;
	rs.GetValue(_T("htrf_acceptedfee"), szIsPaid);
	if(szIsPaid==_T("P")) 
		return true;	
	return false;
}

void CMainFrame::OnFileSetupprescriptionlist()
{
	CHMSPrescriptionGroupItemsDialog dlg(this);
	dlg.DoModal();
}

//Bo sung hoan tra thuoc tu truc
void CMainFrame::OnCommandMedicalcabinet()
{
	//CHMSMedicalCabinet	dlg(this);
	CWardMedicalCabinetDialog dlg(this);
	dlg.DoModal(); 
}


int CMainFrame::CreateFees(CString szType){
	
	CString szSQL;
	if(IsOutPatient())
		szSQL.Format(_T("HMS_FEE_CREATE(%ld, '%s', 'EM') "), m_nDocumentNo, szType);
	else
		szSQL.Format(_T("HMS_INPATIENT_FEE_CREATE(%ld, '%s', 'TM') "), m_nDocumentNo, szType); 

	return str2int(ExecDML(szSQL));
}

void CMainFrame::OnCommandDailydrugorder()
{
//	CHMSDailyOrderView dlg(this);
//	dlg.DoModal();
}



void CMainFrame::OnFileChangepassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnCommandReturndrugorder()
{
	CWardReturnOrderDialog dlg(this);
	
	dlg.DoModal();
}

void CMainFrame::OnDrugandmaterialordersheet()
{
	CWardDeliveryOrderDialog dlg(this);
	dlg.DoModal();
}
/*
void CMainFrame::OnCommandSetupfood()
{
	// TODO: Thiet lap tien an va tien di lai
	if(!CheckPermission(_T("121.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return ;
	}

	CHMSSetupFood dlg(this);
	dlg.DoModal();
}
*/

void CMainFrame::OnCommandSearchinformationpatient()
{
	// Tim kiem thong tin tien su dieu tri cua benh nhan
	CHMSTreatmentHistory dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnFileHelp()
{
	// TODO: Add your command handler code here
	ShowNotification();
}

void CMainFrame::OnFileReport32825()
{
	// TODO: Add your command handler code here
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnCommandSetupfood32826()
{
	// TODO: Add your command handler code here
	// TODO: Thiet lap tien an va tien di lai
	if(!CheckPermission(_T("121.01")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return ;
	}

	CHMSSetupFood dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileKeeptrackofpatientfee()
{
	CHMSTrackingPatientFeeDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnCommandSetuptestprofile()
{
	// TODO: Add your command handler code here
	CHMSTreatmentTestProfileDialog dlg(this);
	dlg.DoModal();
}
#include "HMSFoodOrderDiaglog.h"
void CMainFrame::OnFileDailyfood()
{
	// TODO: Add your command handler code here
	CHMSFoodOrderDiaglog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileOperationfromdept()
{
	// TODO: Add your command handler code here
	CHMSOperationOrderDiaglog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileDailymaterialordersheetthebed()
{
	// TODO: Add your command handler code here
	CHMSDailyDrugMaterialOrderBedDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnDrugDailymaterialordersheettheoperation()
{
	// TODO: Add your command handler code here
	CHMSDailyOperationMaterialDialog dlg(this);
	dlg.DoModal();
}

bool CMainFrame::IsPatientDischarge(){
	CRecord rs(&m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT hcr_status FROM hms_clinical_record WHERE hcr_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return false;
	rs.GetValue(_T("hcr_status"), tmpStr);
	if(tmpStr == _T("T"))
		return true;
	return false;
}

#include "HMSOperationScheduleDialog.h"
void CMainFrame::OnFileOperationschedules()
{

	// TODO: Add your command handler code here
	CHMSOperationScheduleDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
}



bool CMainFrame::IsRecordClosed()
{
	if(m_szClosed == _T("Y"))
		return true;
	return false;
}


UINT CMainFrame::StartThread (LPVOID param)
{ 
    THREADSTRUCT*    ts = (THREADSTRUCT*)param;
	CMainFrame *pMF = (CMainFrame *) ts->_this;
	CString szSQL;
	for(;;)
	{
		if(!pMF->m_db.IsOpen())
			continue;
		CRecord* rs = new CRecord(&pMF->m_db);
		szSQL.Format(_T("SELECT count(*) FROM system_notice ") \
			_T("WHERE sn_org_id in('GL','%s') and sn_department_id='%s'  and sn_to_userid='%s' and sn_pending='Y' "), 
			pMF->GetModuleID(), pMF->GetDepartmentID(), pMF->GetCurrentUser());

		rs->ExecSQL(szSQL);
//		_tprintf(_T("\r\n%s: %d"), szSQL, rs->GetIntValue());
		if(rs->GetIntValue() > 0) 
		{
			pMF->SendMessage(WM_COMMAND, 0x01, 0xFF);
			//szSQL.Format(_T("DELETE FROM system_notice ") \
			//	_T("WHERE sn_org_id in('GL','%s') and sn_department_id='%s' and sn_to_userid='%s' and sn_pending='Y' "),
			//	pMF->GetModuleID(), pMF->GetDepartmentID(), pMF->GetCurrentUser());
			//pMF->ExecSQL(szSQL);
		}

		delete rs;

		Sleep(5000);
	}
    //you can also call AfxEndThread() here
	AfxEndThread(0, TRUE);
    return 1;
}


UINT CMainFrame::ShowScheduleThread(LPVOID pParam){
	CMainFrame *pMF = (CMainFrame*) pParam;
	CString tmpStr;
	CDateTime dtCurrent;
	CDateTime dtOn;
	CDateTime dtOff;
	tmpStr.Format(_T("%s 14:25:00"), pMF->GetSysDate());
	dtOn.ParseDateTime(tmpStr);
	tmpStr.Format(_T("%s 14:27:00"), pMF->GetSysDate());
	dtOff.ParseDateTime(tmpStr);
	for (;;)
	{
		dtCurrent.ParseDateTime(pMF->GetSysDateTime());
		if ((dtCurrent < dtOn) || (dtCurrent > dtOff))
		{
			//pMF->SetStatusText(_T("On"), 0);
		}
		else
		{
			//pMF->SetStatusText(_T("Off"), 0);
		}
		Sleep(5000);
	}
	//you can also call AfxEndThread() here
	AfxEndThread(0, TRUE);
	return 1;
}

void CMainFrame::ShowNotification()
{
	if(m_pWndNotification)
	{
		m_pWndNotification->ShowWindow(SW_SHOW);
		m_pWndNotification->UpdateWindow();
		m_pWndNotification->BringWindowToTop();
	}
}
void CMainFrame::OnReceiptMessage()
{
	if(m_pWndNotification == NULL)
		return;

	CRecord rs(&m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM system_notice WHERE sn_to_userid='%s' and sn_pending='Y' "), this->GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(rs.GetRecordCount() > 0)
	{
		m_pWndNotification->m_pDb = &m_db;
		
		m_pWndNotification->Show();
		szSQL.Format(_T("UPDATE system_notice SET sn_pending ='N' WHERE sn_to_userid='%s' and sn_pending='Y' "), GetCurrentUser());
		ExecSQL(szSQL);
	}
}
BOOL CMainFrame::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	if(wParam == 0x01 && lParam == 0xFF)
	{
		if(m_pWndNotification)
			m_pWndNotification->Show();
	}
    if (wParam == CMD_SIGNATURE && m_nDocumentNo > 0)
    {
        m_wndPatientDocument.OnViewEMR();
    }
	return CHMSMainFrame::OnCommand(wParam, lParam);
}

#include "HL7ExportDialog.h"

void CMainFrame::OnFileExporttohl7()
{
	// TODO: Add your command handler code here
	if(m_nDocumentNo <= 0)
		return;
	CHL7ExportDialog dlg(this, m_nDocumentNo);
	if(dlg.DoModal() == IDOK)
	{

	}
	return;
	CString szSQL;
	CString szMsg;
	CRecord rs(&m_db);
	long nPatientNo;
	CString szSurName, szMidName, szFirstName, szBirthDate, szSex, szAddress, szVillage, szDistrict, szProvill;

	CString szCardNo, szRegDate, szExpDate, szRegCode, szRegName, szCompany, szDiscount;
	CString szRoom, szBed, szDoctor;
	CString szFileName, tmpStr;


	CString szSysDate = GetSysDateTime();
	szSysDate.Replace(_T("-"), _T(""));
	szSysDate.Replace(_T("/"), _T(""));
	szSysDate.Replace(_T(" "), _T(""));
	szSysDate.Replace(_T(":"), _T(""));



	szMsg.Format(_T("MSH|^~\\&|BV108|%s|||%s||ADT^A01|MSGID%s|P|2.3\r\nEVN|A01\r\n"),
		m_szDept, szSysDate, szSysDate);
	
	//Thong tin benh nhan
	szSQL.Format(_T(" SELECT hp_patientno,") \
_T("   hp_surname,") \
_T("   hp_midname,") \
_T("   hp_firstname,") \
_T("   hp_birthdate,") \
_T("   hp_sex,") \
_T("   HP_DTLADDR,") \
_T("   (SELECT DISTINCT sp_name FROM sys_prov WHERE sp_id = hp_provid") \
_T("   ) AS provill,") \
_T("   (SELECT DISTINCT sd_name FROM sys_dist WHERE sd_id = hp_distid") \
_T("   ) AS district,") \
_T("   (SELECT DISTINCT sv_name FROM sys_vill WHERE sv_id = hp_villid") \
_T("   ) AS village") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_patientno = hp_patientno)") \
_T(" WHERE hd_docno  =%ld"), m_nDocumentNo);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hp_patientno"), nPatientNo);
		rs.GetValue(_T("hp_surname"), szSurName);
		rs.GetValue(_T("hp_midname"), szMidName);
		rs.GetValue(_T("hp_firstname"), szFirstName);
		rs.GetValue(_T("hp_birthdate"), tmpStr);
		rs.GetValue(_T("hp_sex"), szSex);
		rs.GetValue(_T("hp_dtladdr"), szAddress);
		rs.GetValue(_T("provill"), szProvill);
		rs.GetValue(_T("district"), szDistrict);
		rs.GetValue(_T("village"), szVillage);
	}

	szBirthDate = tmpStr.Left(10);
	szBirthDate.Replace(_T("-"), _T(""));
	szBirthDate.Replace(_T("/"), _T(""));
	szBirthDate.Replace(_T(" "), _T(""));
	szBirthDate.Replace(_T(":"), _T(""));


	szMsg.AppendFormat(_T("PID|||%ld||%s^%s^%s||%s|%s|||%s^%s^%s^%s^^||||||||||\r\n"),
		nPatientNo, szSurName, szMidName, szFirstName, szBirthDate, szSex,
		szAddress, szVillage, szDistrict, szProvill);



	szSQL.Format(_T(" SELECT hb_roomid,") \
_T("   hb_bedid,") \
_T("   GET_USERNAME(hb_doctor) AS doctor") \
_T(" FROM hms_bed") \
_T(" WHERE hb_docno = %ld") \
_T(" AND hb_deptid  ='%s'") \
_T(" AND rownum    <=1 "), m_nDocumentNo, m_szDept);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hb_roomid"), szRoom);
	rs.GetValue(_T("hb_bedid"), szBed);
	rs.GetValue(_T("doctor"), szDoctor);
	szMsg.AppendFormat(_T("PV1||I|%s^%s^%s||||^%s|^%s|^%s||||||||^%s\r\n"),
		m_szDept, szRoom, szBed, szDoctor, szDoctor, szDoctor, szDoctor);


	szSQL.Format(_T(" SELECT hc_cardno,") \
_T("   hc_discount,") \
_T("   hc_regcode,") \
_T("   (SELECT DISTINCT hh_name FROM hms_hospital WHERE hh_id=hc_regcode") \
_T("   ) AS hc_regname,") \
_T("   hc_regdate,") \
_T("   hc_expdate,") \
_T("   hc_company") \
_T(" FROM hms_doc") \
_T(" LEFT JOIN hms_card") \
_T(" ON(hc_patientno = hd_patientno") \
_T(" AND hc_idx      = hd_cardidx)") \
_T(" WHERE hd_docno=%ld") \
_T(" AND hd_cardidx  > 0"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hc_cardno"), szCardNo);
	rs.GetValue(_T("hc_regcode"), szRegCode);
	rs.GetValue(_T("hc_regname"), szRegName);
	rs.GetValue(_T("hc_expdate"), szExpDate);
	rs.GetValue(_T("hc_regdate"), szRegDate);
	rs.GetValue(_T("hc_company"), szCompany);
	rs.GetValue(_T("hc_discount"), szDiscount);

	szRegDate.Replace(_T("-"), _T(""));
	szRegDate.Replace(_T("/"), _T(""));
	szRegDate.Replace(_T(" "), _T(""));
	szRegDate.Replace(_T(":"), _T(""));


	szExpDate.Replace(_T("-"), _T(""));
	szExpDate.Replace(_T("/"), _T(""));
	szExpDate.Replace(_T(" "), _T(""));
	szExpDate.Replace(_T(":"), _T(""));


	szMsg.AppendFormat(_T("IN1|%s^%s|%s|%s|%s|^^^^^^|||||||%s|%s|\r\n"),
		szCardNo, szDiscount, szRegCode, szRegName, szCompany, szRegDate, szExpDate);



	CFile file;
	TCHAR szPath[MAX_PATH];
	::GetCurrentDirectory(MAX_PATH, szPath);
	szFileName.Format(_T("%s\\DATA\\PID_%ld.hl7"), szPath, nPatientNo);
	if(file.Open(szFileName, CFile::modeCreate|CFile::modeWrite|CFile::typeText))
	{
		char buf[4096];
		memset(buf, 0, 4096);
		::WideCharToMultiByte(CP_UTF8, 0, szMsg, szMsg.GetLength(), buf, 4096, 0, 0);
		file.Write(buf, strlen(buf));
		ShellExecute(NULL, _T("open"), szFileName, _T(""), _T(""), SW_SHOW);
		file.Close();
	}
	

}

void CMainFrame::OnFileOperationgroupsetup()
{
	// TODO: Add your command handler code here
	if (!CheckPermission(_T("17.02")))
	{
		AfxMessageBox(_T("Permission Denied!"));
		return;
	}
	CHMSOperationGroupSetup dlg(this);
	dlg.DoModal();
}

BOOL CMainFrame::IsOnceRollback(long nDocumentNo){
	CRecord rs(&m_db);
	CString szSQL, szRollback;
	szSQL.Format(_T("SELECT hcr_rollback FROM hms_clinical_record WHERE hcr_docno = %ld"), nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hcr_rollback"), szRollback);
	if (szRollback == _T("Y"))
		return true;
	return false;
}


#include "HMSBedTrackingDialog.h"

void CMainFrame::OnFileBedTracking()
{
	CHMSBedTrackingDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
}
void CMainFrame::OnFileBosungHoantrakhongcobenhnhan()
{
	if(!CheckPermission(_T("20.03")))
	{
		ShowMessageBox(_T("Permission denied"));
		return;
	}
	CCabinetDialog dlg(this);
	dlg.DoModal();

}

void CMainFrame::PrintMedicalFile(bool bPreview){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CReport rpt;
	int nCancerTime = 0;
_tprintf(_T("\r\nm_nDocumentNo : %ld"), m_nDocumentNo);
	if(m_nDocumentNo <= 0)
		return;
	CString szSQL, tmpStr, szReportName, szTemp, szNumber, szFoodMode, szDate;
	szSQL.Format(_T(" SELECT    Trunc(hfo_orderdate) orderdate, ") \
				_T("           hfl_name             modename, ") \
				_T("           hfol_type type") \
				_T(" FROM      hms_feefood ") \
				_T(" LEFT JOIN hms_feefoodline ON ( hfo_orderid = hfol_orderid ) ") \
				_T(" LEFT JOIN hms_fee_list ON ( hfl_feeid = hfol_itemid ) ") \
				_T(" WHERE     hfo_docno = %ld ") \
				_T("       AND hfo_deptid = '%s'"), m_nDocumentNo, pMF->m_szDept);
	rs.ExecSQL(szSQL);
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("type"), tmpStr);
		if (tmpStr == _T("T"))
		{
			rs.GetValue(_T("modename"), tmpStr);
			rs.GetValue(_T("orderdate"), szDate);
			szFoodMode.AppendFormat(_T("\x102n tr\x1B0\x61: %s %s"), CDate::Convert(szDate, yyyymmdd, ddmmyyyy).Left(5), tmpStr);
		}
		else if (tmpStr == _T("C"))
		{
			rs.GetValue(_T("modename"), tmpStr);
			rs.GetValue(_T("orderdate"), szDate);
			szFoodMode.AppendFormat(_T(" \x102n t\x1ED1i: %s %s"), CDate::Convert(szDate, yyyymmdd, ddmmyyyy).Left(5), tmpStr);
		}
		rs.MoveNext();
	}
	if (szFoodMode.IsEmpty())
		szFoodMode = _T("T\x1EF1 t\xFA\x63");
	szSQL.Format(_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
				_T("        extract(year from hp_birthdate) as yob, ") \
				_T("        (select ss_desc from sys_sel where ss_id= 'sys_sex' and ss_code =  hp_sex) as sex, ") \
				_T("        (select ss_desc from sys_sel where ss_id ='hms_rank' and cast(ss_code as integer)=hp_rank) as rank, ") \
				_T("        (select ss_desc from sys_sel where ss_id ='hms_position' and cast(ss_code as integer)=hp_position) as position, ") \
				_T("        hp_workplace as unit, ") \
				_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address, ") \
				_T("        nvl(hd_dtladdr, hp_dtladdr) as dtladdress, ") \
				_T("        hd_relative as relative, ") \
				_T("        (select ss_desc from sys_sel where ss_id = 'hrm_relation' and ss_code = hd_relation) as relation, ") \
				_T("        hd_contactaddr as reladdress, ") \
				_T("        hd_contacttel as relphone, ") \
				_T("        hd_transdiagn as trdisease, ") \
				_T("        (select hi_name from hms_icd where hi_icd=hd_transicd) as icd10, ") \
				_T("        hd_conclusion as disease, ") \
				_T("        hd_suggestion as suggestion, ") \
				_T("        trunc(hd_admitdate) as examdte, ") \
				_T("		htr_admitdate as admitdate,") \
				_T("        hd_indept as deptid, ") \
				_T("        (select sd_name from sys_dept where sd_id=hcr_admitdept) as facname, ") \
				_T("        hcr_recordno as numinward, hcr_treattime as inwardtime, ") \
				_T("        hcr_foodmode as foodmode, ") \
				_T("        (select ho_desc from hms_object where ho_id=hd_object) as policydesc, ") \
				_T("        (select hc_cardno from hms_card where hc_patientno=hd_patientno and hc_idx=hd_cardidx) as cardno, ") \
				_T("  hcr_cancer, ") \
				_T("  hcr_cancer_time, (select htr_deptid from hms_treatment_record where htr_docno = hcr_docno and htr_idx = hcr_refidx) treatment_dept, hp_patientno patientno ") \
				_T(" FROM hms_patient ") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record on (hcr_docno = htr_docno and hcr_refidx = htr_idx)") \
				_T(" WHERE hd_docno=%ld AND hd_suggestion IN ('C', 'D') and hd_status in('P','T')"), m_nDocumentNo);
_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Patient not found"));
		return;

	}

	CString szCancer;
	rs.GetValue(_T("hcr_cancer"), szCancer);

	if(szCancer == _T("Y"))
	{
		rs.GetValue(_T("hcr_cancer_time"), nCancerTime);
		szReportName.Format(_T("Reports\\HMS\\BENHAN\\BENHANUNGTHU.RPT"));
		if (nCancerTime > 1)
			szReportName.Format(_T("Reports\\HMS\\BENHAN\\BENHANUNGTHU_TULAN2.RPT"));
	}
	else
	{
		CString szDeptID, szRptName;
		rs.GetValue(_T("deptid"), szDeptID);
		szSQL.Format(_T("SELECT hafc_reportname as reportname, hafc_desc as reportdesc FROM hms_admissionfile_config WHERE hafc_deptid='%s' "), szDeptID);
		CRecord rsx(&pMF->m_db);
		rsx.ExecSQL(szSQL);
		if(!rsx.IsEOF()){
			if (rsx.GetRecordCount() == 1){
				rsx.GetValue(_T("reportname"), szRptName);
				if(szRptName.IsEmpty())
					szRptName = _T("BA.RPT");
				szReportName.Format(_T("Reports\\HMS\\BENHAN\\%s"), szRptName);
			}
			//else{
			//	CARReportOptionDlg dlg(this);
			//	dlg.m_szDeptID = szDeptID;
			//	m_szReportName.Empty();
			//	if (dlg.DoModal() == IDOK){
			//		szReportName.Format(_T("Reports\\HMS\\BENHAN\\%s"), m_szReportName);
			//	}
			//	else{
			//		return;
			//	}
			//	
			//}
		}
		else
			szReportName.Format(_T("Reports\\HMS\\BENHAN\\BA.RPT"));
	}
	//szReportName.Format(_T("Reports\\HMS\\BENHAN\\Khoa B4.m.RPT"));
	if(!rpt.Init(szReportName))
	{
		return;
	}
	//rpt.SetMargins(200, 200, 200, 200);

	rpt.GetReportHeader()->SetValue(_T("_health_service"), m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("_hospital_name"), m_szHospitalName);
	rpt.GetReportHeader()->SetValue(_T("_faculty_name"), rs.GetValue(_T("treatment_dept")));
	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_name"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_y_of_birth"), rs.GetValue(_T("yob")));
	rpt.GetReportHeader()->SetValue(_T("_sex"), rs.GetValue(_T("sex")));
	tmpStr.Format(_T("%s"), rs.GetValue(_T("dtladdress")));
	if(!tmpStr.IsEmpty())
		tmpStr.AppendFormat(_T(" - "));
	tmpStr.AppendFormat(_T("%s"), rs.GetValue(_T("address")));
	rpt.GetReportHeader()->SetValue(_T("_native_vill"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_unit"), rs.GetValue(_T("unit")));
	rpt.GetReportHeader()->SetValue(_T("_rank"), rs.GetValue(_T("rank")));
	rpt.GetReportHeader()->SetValue(_T("_position"), rs.GetValue(_T("position")));
	rs.GetValue(_T("examdte"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_infect_date"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	tmpStr.Format(_T("%s"), CDateTime::Convert(rs.GetValue(_T("admitdate")), yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	//rs.GetValue(_T("admitdate"), tmpStr);
	//_debug(_T("%s:%s"), rs.GetValue(_T("admitdate")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_enter_date"), tmpStr);
	szTemp = rs.GetValue(_T("suggestion"));
	tmpStr.Empty();
	//if (szTemp == _T("C"))
	//	tmpStr.Format(_T("NT- "));
	szTemp = rs.GetValue(_T("numinward"));
	if(szTemp == _T("0"))
		tmpStr.Empty();
	//else if(m_nPolicy == 7)
	//	tmpStr.AppendFormat(_T("%s- DV"), szTemp);
	else
		tmpStr += szTemp;
	rpt.GetReportHeader()->GetItem(_T("_number"))->SetFaceSize(9);
	
	if(szCancer == _T("Y"))
	{
		tmpStr.AppendFormat(_T(" - %.3dK"), nCancerTime);
	}

	rpt.GetReportHeader()->SetValue(_T("_number"), tmpStr);
	if (nCancerTime > 1)
	{
		tmpStr.Format(rpt.GetReportHeader()->GetValue(_T("ReportTitle")), nCancerTime);
		rpt.GetReportHeader()->SetValue(_T("ReportTitle"), tmpStr);

	}
	rs.GetValue(_T("inwardtime"), tmpStr);
	if(tmpStr == _T("0"))
		tmpStr.Empty();
	if(szCancer == _T("Y"))
	{
		int nCancerTime = 0;
		rs.GetValue(_T("hcr_cancer_time"), nCancerTime);
		tmpStr.Format(_T("%d"), nCancerTime);
	}
	rpt.GetReportHeader()->SetValue(_T("_times"), tmpStr);

	//tmpStr.Format(_T("%d"), m_nPatientNo);
	rpt.GetReportHeader()->SetValue(_T("_patientno"), rs.GetValue(_T("patientno")));

	tmpStr.Format(_T("%d"), m_nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("_docno"), tmpStr);
	tmpStr.Format(_T("%s"), rs.GetValue(_T("policydesc")));
	rpt.GetReportHeader()->SetValue(_T("_policydesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_relatives"), rs.GetValue(_T("relative")));
	rpt.GetReportHeader()->SetValue(_T("_relation"), rs.GetValue(_T("relation")));

	rpt.GetReportHeader()->SetValue(_T("_phone"), rs.GetValue(_T("relphone")));
	rpt.GetReportHeader()->SetValue(_T("_address"), rs.GetValue(_T("reladdress")));
	rpt.GetReportHeader()->SetValue(_T("_unit_diag.1"), rs.GetValue(_T("trdisease")));

	tmpStr.Format(_T("%s\r\n%s"), rs.GetValue(_T("icd10")), rs.GetValue(_T("disease")));
	rpt.GetReportHeader()->SetValue(_T("_exam_diag.1"), tmpStr);
	
	tmpStr.Empty();
	rs.GetValue(_T("cardno"), tmpStr);
	if(!tmpStr.IsEmpty())
	{
		CString szCardDesc;

		szCardDesc.Format(_T("S\x1ED1 th\x1EBB: %s"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("_cardno"), szCardDesc);
	}

	tmpStr = pMF->GetSysTime();
//	tmpStr.Format("Lµm bÖnh ¸n lóc: %s %s"), tmpStr.Left(5), pMF->getSysDte());
//	rpt.GetReportHeader()->SetValue(_T("_printdate"), tmpStr);
	CReportItem *obj = NULL;
	obj = rpt.GetReportHeader()->GetItem(_T("_foodmode"));
	if (obj)
		obj->SetFixedHeight(false);

	if(rs.GetValue(_T("inwardtime")) != _T("0") && rs.GetValue(_T("inwardtime")) != _T("1"))
		szFoodMode.Empty();
	rpt.GetReportHeader()->SetValue(_T("_foodmode"), szFoodMode);
	rpt.GetReportFooter()->Format(_T("PrintDate"), _T(""), _T("...."), _T("...."), _T("...."));

	//rpt.AddDetail();
	if (nCancerTime > 1)
	{
		CReportSection *rptGroup = NULL;
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(2));
		rptGroup->SetPageBreak();
		rptGroup = rpt.AddDetail(rpt.GetGroupHeader(1));
	}
	if(bPreview)
		rpt.PrintPreview();
	else 
		rpt.Print();
	//?
	//szSQL.Format(_T("UPDATE hms_doc SET hd_siflg='Y' WHERE hd_no=%ld"), m_nDocumentNo);
	//pMF->ExecSQL(szSQL);

//	PrintFoodSheet();
}
void CMainFrame::OnCommandForminfosetup()
{
	CHMSFormInfo dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnOrderRetailorder()
{
	// TODO: Add your command handler code here
	CHMSRetailDialog dlg;
	dlg.DoModal();
}


void CMainFrame::OnCommandMapIndex()
{
	CIVFMapIndex dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnCommandStorageSetup()
{
	CIVFStorageListSetupDialog dlg(this);
	//CIVFStorageListSetupDialog_v2 dlg(this);
	dlg.DoModal();
}


long CMainFrame::LoadComboBoxList(CGuiComboBox* pCB, CString szKey, CString szTable, CString szFilter){
	
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and %s_id='%s' "), szTable, szKey);
	};
	if(!szFilter.IsEmpty())
	{
		szWhere.AppendFormat(_T(" %s "), szFilter);
	}

	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT %s_id as id, description FROM %s ") \
		_T(" WHERE isactive='Y' %s ORDER BY %s_id "), szTable, szTable, szWhere, szTable);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

long	CMainFrame::LoadIVFSelectionList(CGuiComboBox* pWnd,CString szSelectionID,  CString szKey, CString szFilter){
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(pWnd->IsSearchKey() && !szKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ivs_code='%s' "), szKey);
	}
	szSQL.Format(_T("SELECT ivs_code as id, ivs_desc as name FROM ivf_sel WHERE ivs_id='%s' %s %s ORDER BY ivs_index, ivs_code "), szSelectionID, szWhere, szFilter);

	long ret  = rs.ExecSQL(szSQL);
	_tprintf(_T("\r\n%d: %s"), ret, szSQL);	
	pWnd->DeleteAllItems();
	while(!rs.IsEOF()){
		pWnd->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return pWnd->GetCount();
}

void CMainFrame::OnCommandSelectionSetup()
{
	CIVFSetupList dlg;
	dlg.DoModal();	
}

void CMainFrame::ShowStorageView()
{
	
}

void CMainFrame::ShowLabList()
{

}

void CMainFrame::OnCommandMapItemType()
{
	CIVFMapItemType dlg(this);
	dlg.DoModal();
}

int	CMainFrame::LoadIVFLabUser(CWnd* pWnd, CString szKey, CString szFilter){
	szFilter.AppendFormat(_T(" AND su_zone = 'IVF_LAB'"));
	return LoadUserList(pWnd, szKey, szFilter);
}

CString CMainFrame::GetIvfSel(CString szId, CString szCode)
{
	CRecord rs(&m_db);
	CString szSQL;
	szSQL.Format(_T("select ivs_desc from ivf_sel where ivs_id = '%s' and ivs_code = '%s'"), szId, szCode);
	rs.ExecSQL(szSQL);
	return rs.GetStringValue();
}

long CMainFrame::LoadNhanThanhList(CGuiComboBox* pWnd, CString szType, CString szKey, CString szFilter){
	CRecord rs(&m_db);
	CString szSQL, szWhere, szSelectionID = _T("ivf_nhan_cassette");
	szWhere.Empty();
	if(pWnd->IsSearchKey() && !szKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ivs_code='%s' "), szKey);
	}
	szSQL.Format(_T("SELECT ivs_code as id, ") \
				_T(" case '%s' when 'E' then ivs_desc else replace(ivs_desc, 'Cassette', 'Cryocane') end as name ") \
				_T(" FROM ivf_sel ") \
				_T(" WHERE ivs_id='%s' %s %s ") \
				_T(" ORDER BY ivs_index, ivs_code "), szType, szSelectionID, szWhere, szFilter);

	long ret  = rs.ExecSQL(szSQL);
	_tprintf(_T("\r\n%d: %s"), ret, szSQL);	
	pWnd->DeleteAllItems();
	while(!rs.IsEOF()){
		pWnd->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return pWnd->GetCount();
}

long CMainFrame::LoadNhanOngList(CGuiComboBox* pWnd, CString szType, CString szKey, CString szFilter){
	CRecord rs(&m_db);
	CString szSQL, szWhere, szSelectionID = _T("ivf_nhan_top");
	szWhere.Empty();
	if(pWnd->IsSearchKey() && !szKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ivs_code='%s' "), szKey);
	}
	szSQL.Format(_T("SELECT ivs_code as id, ") \
				_T(" case '%s' when 'E' then ivs_desc else replace(ivs_desc, 'Top', 'Cryotube') end as name ") \
				_T(" FROM ivf_sel ") \
				_T(" WHERE ivs_id='%s' %s %s ") \
				_T(" ORDER BY ivs_index, ivs_code "), szType, szSelectionID, szWhere, szFilter);

	long ret  = rs.ExecSQL(szSQL);
	_tprintf(_T("\r\n%d: %s"), ret, szSQL);	
	pWnd->DeleteAllItems();
	while(!rs.IsEOF()){
		pWnd->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return pWnd->GetCount();
}

int	CMainFrame::CreatePopupMenu(CGuiMenu* pMenu, CRect* pRect, CString szItemStr)
{
	if (pMenu == NULL)
	{
		return -1;
	}
	pMenu->CreatePopupMenu();
	CString tmpStr;
	CStringToken tok(szItemStr, _T("|"));
	for (int i = 0; i < tok.GetSize(); i++)
	{
		if (i > 0)
		{
			pMenu->AppendMenu(MF_SEPARATOR);
		}
		tok.GetAt(i, tmpStr);
		pMenu->AppendMenu(MF_BYPOSITION, i + 1, tmpStr);
	}
//_tprintf(_T("\nl:%ld|r:%ld|t:%ld|b:%ld\n"), pRect->left, pRect->right, pRect->top, pRect->bottom);
	int ret = pMenu->TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_BOTTOMALIGN|TPM_LEFTALIGN, pRect->left, pRect->top , this);
	return ret;
}

long CMainFrame::LoadThanhList(CGuiComboBox* pCB, CString szType, CString szKey, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere, szTable = _T("ivf_storage_cassette");
	
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and %s_id='%s' "), szTable, szKey);
	};
	if(!szFilter.IsEmpty())
	{
		szWhere.AppendFormat(_T(" %s "), szFilter);
	}

	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT %s_id as id, ") \
		_T(" case '%s' when 'E' then description else replace(description, 'Cassette', 'Cryocane') end as description ") \
		_T(" FROM %s ") \
		_T(" WHERE isactive='Y' %s ORDER BY %s_id "), szTable, szType, szTable, szWhere, szTable);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
long CMainFrame::LoadOngList(CGuiComboBox* pCB, CString szType, CString szKey, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere, szTable = _T("ivf_storage_top");
	
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and %s_id='%s' "), szTable, szKey);
	};
	if(!szFilter.IsEmpty())
	{
		szWhere.AppendFormat(_T(" %s "), szFilter);
	}

	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT %s_id as id, ") \
		_T(" case '%s' when 'E' then description else replace(description, 'Top', 'Cryotube') end as description ") \
		_T(" FROM %s ") \
		_T(" WHERE isactive='Y' %s ORDER BY %s_id "), szTable, szType, szTable, szWhere, szTable);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

void CMainFrame::PrintIVFAppointmentSheet(long nDocumentNo, long nOrderId)
{
	CRecord rs(&m_db);
	CReport rpt;
	CReportSection* rptHeader = NULL;
	CString szSQL, szFilePath, tmpStr;
	szFilePath.Format(_T("Reports\\HMS\\GIAYHEN_IVF.RPT"));
	if (!rpt.Init(szFilePath))
	{
		return;
	}
	rptHeader = rpt.GetReportHeader();
	szSQL.Format(_T(" SELECT '%s' as hospitalname, '%s' as department, ") \
			_T("	hcr_docno as documentno,") \
			_T("	hcr_patientno as patientno, hcr_recordno record_no, ") \
			_T("	get_patientname(hcr_docno) patientname, ") \
			_T("	extract(year from hp_birthdate) yearofbirth, ") \
			_T("    GET_SYSSEL_DESC('sys_sex', hp_sex) as sex, ") \
			_T("	hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) address, ") \
			_T("   hcr_maindisease diagnostic, to_char(appointment_date, 'hh24:mi dd/mm/yyyy') as appointtime, note as content") \
			_T(" FROM hms_clinical_record ") \
			_T(" LEFT JOIN hms_doc ON (hd_docno = hcr_docno)") \
			_T(" LEFT JOIN hms_patient ON (hcr_patientno = hp_patientno) ") \
			_T(" LEFT JOIN ivf_appointment ON (hcr_docno = docno AND ivf_appointment_id = %ld)") \
			_T(" WHERE hcr_docno = %ld"), m_CompanyInfo.sc_name, GetCurrentDepartmentName(), nOrderId, nDocumentNo);
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data."));
		return;
	}
	for (int i = 0; i < rs.GetFieldCount(); i++)
	{
		rptHeader->SetValue(rs.GetFieldName(i), rs.GetValue(i));
	}
	rs.GetValue(_T("documentno"), tmpStr);
	rptHeader->SetValue(_T("Barcode[128A]"),tmpStr);
	rptHeader->SetValue(_T("Barcode[128B]"), tmpStr);
	rptHeader->SetValue(_T("Barcode[128C]"), tmpStr);
	rptHeader->SetValue(_T("Barcode[39]"), tmpStr);
	rptHeader->SetValue(_T("Barcode[93]"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Printdate"), FormatPrintDate());
	rpt.PrintPreview();
}

CString CMainFrame::FormatPrintDate(bool bHaveTime)
{
	CString szPrintDate, szSysDate = GetSysDate(), szSysTime = GetSysTime(), tmpStr;
_tprintf(_T("\nszSysTime: %s"), szSysTime);
	szPrintDate.Empty();
	if (bHaveTime)
	{
		szPrintDate.Format(_T("%s, "), szSysTime);
	}
	tmpStr.Format(_T("Ngày %s tháng %s năm %s"), szSysDate.Mid(8, 2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	szPrintDate += tmpStr;
	return szPrintDate;
}

CString CMainFrame::DbfMap2Json(CDbfMap* pMap)
{
	CString szRet, tmpStr, szValue;
	JSONVALUE jsv;
	for (int i = 0; i < pMap->GetCount(); i++)
	{
		CDbField f;
		f = pMap->GetField(i);
	//_tprintf(_T("\nName:%s| Value: %s\n"), f.GetName(), f.ToString());
		szValue = f.ToString();
		if (szValue.Find(_T("'")) != -1)
		{
			szValue.Replace(_T("'"), _T("''"));
		}
		tmpStr.Format(_T("'%s'"), szValue);
		if (f.IsDateTime())
		{
			tmpStr.Format(_T("to_timestamp('%s', 'yyyy/mm/dd hh24:mi:ss')"), szValue);
		}
		if (f.IsDate())
		{
			tmpStr.Format(_T("to_date('%s', 'yyyy/mm/dd hh24:mi:ss')"), szValue);
		}
		if (f.IsNumber() || f.IsInt())
		{
			tmpStr = szValue;
		}
		jsv[f.GetName()] = tmpStr;
	}
	jsv.ToString(szRet);
	return szRet;
}
void CMainFrame::OnCommandDoctorinfo()
{
	// TODO: Add your command handler code here
	CHMSDoctorInfo dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnTabSelectChange(int nOld, int nNew)
{
    cout << nNew << endl;
    switch (nNew)
    {
    case 3:
        break;
    }
}