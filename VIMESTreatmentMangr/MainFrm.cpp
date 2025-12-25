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
#include "HMSCardEntryDialog.h"
#include "CabinetDialog.h"
#include "HMSFormInfo.h"
#include "HMSInteractionView.h"
#include "HMSDoctorInfo.h"
#include "NutritionExam\HMSSEOrderDialog.h"
#include "HMSGetOrgDeptInfo.h"
#include "HMSTreatmentHtmlDialog.h"
#include "MFCCaptionBarEx.h"
#include "MFCWidget.h"
#include "fml.h"
#include "HMSMedicalRecordSettingDialog.h"
#include "HMSMedicalRecordSettingItemDialog.h"
#include "GuiManager.h"
#include "ATMCardReader.h"
#include <Gdiplus.h>
#include <sstream>

#include "StringToken.h"
#include "rapidjson/document.h"
#include <windows.h>
#include <tlhelp32.h>
#include <tchar.h>
#include <string>
#include "HMSHelper.h"
#include "ImageCategoryDialog.h"

/*
#include "PatientHandover/AdWorkshiftDialog.h"
*/
//#include "PatientHandover/TMPatientHandoverDialog2.h"

#pragma comment(lib, "../lib/HMSCORE.lib")
#pragma comment(lib, "../lib/HMSExt.lib")
#pragma comment(lib, "../Lib/HMSReportForms.lib" )

#include "ServiceManager.h"

using namespace rapidjson;
using namespace Gdiplus;
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

#include <atlimage.h>  // CImage for image handling
#include <GdiPlus.h>   // GDI+ for better image quality

using namespace std;
using namespace Gdiplus;

HANDLE kThread = INVALID_HANDLE_VALUE;


IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_SETUPPRESCRIPTIONLIST, OnFileSetupprescriptionlist)
	ON_COMMAND(ID_COMMAND_MEDICALCABINET, OnCommandMedicalcabinet)
	ON_COMMAND(ID_COMMAND_DAILYDRUGORDER, OnCommandDailydrugorder)
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)	
	ON_COMMAND(ID_FILE_CHANGEDEPARTMENT, OnChangeDepartment)
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
	ON_COMMAND(ID_FILE_BLOOD_ORDER_SHEET, OnFileOrderSheet)
	ON_COMMAND(ID_COMMAND_EXPORTTOHL7, OnFileExporttohl7)
	ON_COMMAND(ID_FILE_OPERATIONGROUPSETUP, OnFileOperationgroupsetup)
	ON_COMMAND(ID_FILE_BEDTRACKING, OnFileBedTracking)
	ON_COMMAND(ID_FILE_BOSUNG_HOANTRAKHONGCOBENHNHAN, OnFileBosungHoantrakhongcobenhnhan)
	ON_COMMAND(ID_COMMAND_FORMINFOSETUP, OnCommandForminfosetup)
	ON_COMMAND(ID_ORDER_RETAILORDER, OnOrderRetailorder)
	ON_COMMAND(ID_COMMAND_DOCTORINFO, OnCommandDoctorinfo)
	ON_COMMAND(ID_SETTINGS_ORGDEPTINFOR, OnSettingsOrgDeptinfo)
	/*
	ON_COMMAND(ID_SETUP_WORKSHIFT, OnSetupWorkshift)
	*/
	ON_COMMAND(ID_ORDER_PATIENTHANDOVER, OnOrderPatientHandover)
	
	ON_COMMAND(ID_FILE_COMMAND_APPLYTT32FORMS, OnFileCommandApplytt32forms)
	ON_COMMAND(ID_COMMAND_NUTRITIONEXAM, OnCommandNutritionexam)
	ON_COMMAND(ID_COMMAND_PRICESCHEDULESETUP, &CMainFrame::OnCommandPriceschedulesetup)
	ON_COMMAND(ID_FILE_USECCCDMACHINE, OnCommandUseCCCDMachine)
	ON_WM_SIZE()
	ON_COMMAND(ID_COMMAND_SETTUPMEDICALRECORDS, &CMainFrame::OnCommandSettupmedicalrecords)
	ON_COMMAND(ID_SETTING_SETUPTEMPLATES, &CMainFrame::OnSettingSetuptemplates)
    ON_WM_TIMER()
    ON_WM_DESTROY()
    ON_COMMAND(ID_SETTINGS_SURGERYIMAGECATALOG,
               &CMainFrame::OnSettingsSurgeryimagecatalog)
    END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	SetEnableLogin(TRUE);
	//SetLocalLang(0);
	m_szModuleName = _T("INPATIENT MANAGEMENT MODULE");
	m_szModuleID = _T("TM");
	m_szSize = CSize(1024, 600);
	m_szVersion = _T("9.6");
	//version A11
	//m_szVersion = _T("8.5");
	m_szClosed = _T("N");
	m_bAllowLoadICD10 = true;
	
	m_nInsOffLinePayment = 0;
	m_bConfirm = true;
	m_bIsSurgeryExamination = false;
	m_bAllowLoadOperation = true;
	m_bPrivateNoneView =false;

	m_nDocumentNo = 0;
	m_nPatientNo = 0;
	//m_pCardInfo = NULL;
    kThread = INVALID_HANDLE_VALUE;
    m_pWndNotification = NULL;
}

CMainFrame::~CMainFrame()
{
	
}


#define CMD_DAILYFOOD ID_FILE_DAILYFOOD
#define CMD_OPERATIONSCHEDULES ID_FILE_OPERATIONSCHEDULES
#define CMD_SERVICEPACKAGE	CMD_USER + 3
#define CMD_TREATMENT	CMD_USER + 4
#define CMD_CARE	CMD_USER + 5
#define CMD_RECORD	CMD_USER + 6
#define CMD_SIGNATURE	CMD_USER + 7

#define IDT_CHECK_CARD_READER 1

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	
	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	CRect rect;
    m_pWndNotification = new CNotification();
	

	GetDesktopWindow()->GetWindowRect(&rect);
    

	m_pAppBar->m_szItemSize = CSize(95, 35);
	
	

	m_pAppBar->Add(new CWidgetItem(CMD_DAILYFOOD, icons::restaurant_menu, L"Báo ăn", L"Phiếu báo ăn"));
	m_pAppBar->Add(new CWidgetItem(CMD_OPERATIONSCHEDULES, icons::exposure, L"Báo mổ", L"Phiếu báo mổ"));
	m_pAppBar->Add(new CWidgetItem(CMD_SERVICEPACKAGE, icons::room_service, L"Gói dịch vụ", L"Gói dịch vụ"));
	m_pAppBar->Add(new CWidgetItem(CMD_TREATMENT, icons::person, L"Bệnh trình", L"Tạo bệnh trình điều trị"));
	m_pAppBar->Add(new CWidgetItem(CMD_CARE, icons::add_shopping_cart, L"Chăm sóc", L"Tạo phiếu chăm sóc"));
	//m_pAppBar->Add(new CWidgetItem(CMD_USER + 4, icons::bookmark, L"Mẫu biểu", L"Mẫu biểu chuyên môn"));
	m_pAppBar->Add(new CWidgetItem(CMD_RECORD, icons::book, L"Bệnh án", L"Thông tin bệnh án"));
	m_pAppBar->Add(new CWidgetItem(CMD_SIGNATURE, icons::collections_bookmark, L"Ký số", L"Hồ sơ bệnh án điện tử EMR"));
	
	m_bUseCCCDMachine =
        AfxGetApp()->GetProfileInt(_T("Settings"), _T("USECCCDMACHINE"), 0);
    if (m_bUseCCCDMachine)
    {
        m_pMainMenu->CheckMenuItem(ID_FILE_USECCCDMACHINE,
                                   MF_CHECKED | MF_BYCOMMAND);
    }
    else
    {
        m_pMainMenu->CheckMenuItem(ID_FILE_USECCCDMACHINE,
                                   MF_UNCHECKED | MF_BYCOMMAND);
    }

	CRecord rs(&m_db);
	CString szdeptid, szxdeptid, szactivedept, szSQL;

	szSQL.Format(_T("SELECT NVL(su_deptid, 'XX') as deptid, NVL(SU_HMS_XDEPT, 'XX') as xdeptid from sys_user where su_userid='%s'"), GetCurrentUser());
	rs.ExecSQL(szSQL);	
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), szdeptid);
		rs.GetValue(_T("xdeptid"), szxdeptid);
	}	
	szSQL.Format(_T("SELECT NVL(SD_ISACTIVE,'N') as activedept from sys_dept WHERE (sd_id = '%s')"), szdeptid);
	rs.ExecSQL(szSQL);
	
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("activedept"), szactivedept);		
	}
	
	if (szactivedept == _T("N"))
	{
		ShowMessageBox(_T("Khoa đăng nhập đã để không hoạt động, không cho phép đăng nhập!"), MB_ICONERROR | MB_OK);		
		return -1;
	}
	
	szSQL.Format(_T("BEGIN") \
				_T("	DBMS_SESSION.SET_IDENTIFIER('%s');") \
				_T("	DBMS_APPLICATION_INFO.SET_MODULE ('%s', '');") \
				_T(" END;"), GetCurrentUser(), GetModuleID());
	ExecSQL(szSQL);
	
    m_wndTreatmentQueue.Create(GetPane());
    AddView(_T("Patient List"), &m_wndTreatmentQueue);

	m_wndPatientDocument.Create(GetPane());
    AddView(_T("Clinical Record"), &m_wndPatientDocument);
    
    m_wndDailyDrugOrder.Create(GetPane());
	AddView(_T("Drug && Material Order"), &m_wndDailyDrugOrder);
    
    m_wndMedicalCabinetDrug.Create(GetPane());
	AddView(_T("Medical Cabinet Drug"), &m_wndMedicalCabinetDrug);
    
	if(CheckPermission(_T("17.01")))
	{
		m_wndPatientDocumentEx.Create(GetPane());
		AddView(_T("Operation Clinic"), &m_wndPatientDocumentEx);
	}
   
    m_wndServicePackageView.Create(GetPane());
	AddView(_T("Service Package"), &m_wndServicePackageView);
    
    m_wndTrackingPatientFeeView.Create(GetPane());
	AddView(_T("Theo dõi chi phí"), &m_wndTrackingPatientFeeView);
    
	m_wndAppointmentView.Create(GetPane());
	AddView(_T("Hẹn khám lại"), &m_wndAppointmentView);
    
	bool sign_perm = CheckPermission(_T("EMR.KLD"));
	//Tam thoi gai = true de test
	sign_perm = true;
	if (GetProp(_T("hms_emr_enable")) == _T("Y") && sign_perm)
	{
		//m_wndSignatureView.SetViewType(1);
		//m_wndSignatureView.Create(this, CRect(0,0,0,0));
		//AddView(_T("Electric medical record"), &m_wndSignatureView);

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
	//cho phép copy file system.conf từ server về máy trạm
	//Copy system.conf from server
	/*TCHAR Buffer[MAX_PATH];
	::GetCurrentDirectory(MAX_PATH, Buffer);
	szLocalPath = Buffer;
	szLocalPath.AppendFormat(_T("\\system.conf"));
	szRemotePath = _T("\\\\10.0.0.95\\c\\VIMES_EMR_108\\system.conf");
	CopyFile(szRemotePath, szLocalPath, FALSE);	
	if (m_pMainMenu)
	{
		CString szSettings = AfxGetApp()->GetProfileString(L"Settings", L"apply_tt32_forms");
		AddProp(L"apply_tt32_forms", szSettings);
		m_pMainMenu->CheckMenuItem(ID_FILE_COMMAND_APPLYTT32FORMS, (szSettings==_T("Y")?MF_CHECKED:MF_UNCHECKED) | MF_BYCOMMAND);
	}	
	*/

	//m_bUseCCCDMachine = false;
	if (m_bUseCCCDMachine)
	{

		StartServiceEx(L"cef", L"sio_cardreader.exe");

		StartPipeService(L"card_named");
	}
	
	return 0;
}


void CMainFrame::OnInitializes(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSMainFrame::OnInitializes();
	//if (CheckCoreVersion() == false)
	//{
	//	exit(0);
	//}
	//Neu nhom nguoi su dung la bac si
	
	if(GetUserGroup() == _T("D")){
		m_szDoctor = GetCurrentUser();
	}
	else
		m_szDoctor.Empty();	

	//Lat thong so config
	CString szSQL, szCert, szOrgDept;
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
			CString tmpStr;
			TranslateString(_T("Notification"), tmpStr);
			m_pWndNotification->m_szHost = pMF->GetHost();
			m_pWndNotification->m_szPort = pMF->GetPort();
			m_pWndNotification->m_szDbUserName = pMF->m_szUser;
			m_pWndNotification->m_szDatabase = pMF->GetDatabase();
			m_pWndNotification->m_szPassword = pMF->m_szPassword;
			m_pWndNotification->m_pDb = &m_db;
            if (m_pWndNotification->Create(StrClassName, tmpStr,
                                           WS_POPUP | WS_CAPTION | WS_SYSMENU |
                                               MFS_BLOCKSYSMENU,
                                           CRect(0, 0, 400, 600)))
            {

                m_pWndNotification->m_szModuleID = pMF->GetModuleID();
                m_pWndNotification->m_szUserID = pMF->GetCurrentUser();
                m_pWndNotification->ShowWindow(SW_HIDE);
                m_pWndNotification->UpdateWindow();
            }
			THREADSTRUCT *_param = new THREADSTRUCT;
			_param->_this = this;
			AfxBeginThread (StartThread, _param);
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

	long ret = 10;	
	szSQL.Format(_T("HMS_GET_DOC_CER_INFOR('%s') "), GetCurrentUser());
	ret = str2long(ExecDML(szSQL));
	if (ret <=0)
	{
		ShowMessageBox(_T("Tài khoản đăng nhập có thông tin chứng chỉ hành nghề chưa hợp lệ, hãy cập nhật thông tin đúng để sử dụng chương trình!"),MB_ICONWARNING);
		CHMSDoctorInfo dlg(this);		
	    dlg.DoModal();
		szCert = dlg.m_szCertificate;
		szCert.Trim();
	    if((szCert.IsEmpty()) || (szCert.GetLength() <5))
		{
			ShowMessageBox(_T("Chứng chỉ hành nghề phải có độ dài >=5 ký tự"),MB_ICONERROR);
			exit(0);
		}
		
	}

		//Check thông tin khoa gốc	
	long vret = 10;	
	szSQL.Format(_T("HMS_GET_ORG_DEPT_INFOR('%s') "), GetCurrentUser());
	vret = str2long(ExecDML(szSQL));

	if (vret <=0)
	{
		ShowMessageBox(_T("Tài khoản đăng nhập chưa có thông tin khoa gốc, hãy cập nhật thông tin đúng để sử dụng chương trình!"),MB_ICONWARNING);
		CHMSGetOrgDeptInfor dlg(this);		
	    dlg.DoModal();
		szOrgDept = dlg.m_szOrgDeptKey;
		
	    if(szOrgDept.IsEmpty())
		{
			ShowMessageBox(_T("Thông tin khoa gốc đang để trống!"),MB_ICONERROR);
			exit(0);
		}		
	}

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
CString CMainFrame::GetDocumentStatus()
{
	if(m_nDocumentNo < 0)
		 return _T("");
	CString szSQL, szStatus;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT htr_status FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d"), m_nDocumentNo, m_nRefIndex);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("htr_status"), szStatus);
	return szStatus;
}

bool CMainFrame::IsActiveDocument()
{
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
#include "HMS108BloodOrderDialog.h"
void CMainFrame::OnFileOrderSheet()
{

	// TODO: Add your command handler code here
	CHMS108BloodOrderDialog dlg(this);
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
    if (m_pWndNotification && m_pWndNotification->GetSafeHwnd())
	{
		m_pWndNotification->ShowWindow(SW_SHOW);
		m_pWndNotification->UpdateWindow();
		m_pWndNotification->BringWindowToTop();
	}
}
void CMainFrame::OnReceiptMessage()
{
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

#include <fstream>
#include <iostream>

bool writeToFile(const string& fileName, const string& data) {
	// Mở tệp với chế độ ghi (ios::out)
	std::ofstream outFile(fileName, ios::out);

	// Kiểm tra xem tệp đã được mở thành công chưa
	if (!outFile) {
		cerr << "Error opening file for writing: " << fileName << endl;
		return false;
	}

	// Ghi dữ liệu vào tệp
	outFile << data;

	// Đóng tệp sau khi ghi
	outFile.close();

	return true;
}


bool is_base64(unsigned char c);
// Hàm giải mã base64
bool base64Decode(const string& base64_data, vector<BYTE>& decoded_data) {
	const string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

	int len = base64_data.size();
	int i = 0, j = 0;
	int in_ = 0;
	unsigned char char_array_4[4], char_array_3[3];

	while (len-- && (base64_data[in_] != '=' && is_base64(base64_data[in_]))) {
		char_array_4[i++] = base64_data[in_]; in_++;
		if (i == 4) {
			for (i = 0; i < 4; i++)
				char_array_4[i] = base64_chars.find(char_array_4[i]);

			char_array_3[0] = (char_array_4[0] << 2) | (char_array_4[1] >> 4);
			char_array_3[1] = ((char_array_4[1] & 15) << 4) | (char_array_4[2] >> 2);
			char_array_3[2] = ((char_array_4[2] & 3) << 6) | char_array_4[3];

			for (i = 0; (i < 3); i++)
				decoded_data.push_back(char_array_3[i]);
			i = 0;
		}
	}

	if (i) {
		for (j = i; j < 4; j++)
			char_array_4[j] = 0;

		for (j = 0; j < 4; j++)
			char_array_4[j] = base64_chars.find(char_array_4[j]);

		char_array_3[0] = (char_array_4[0] << 2) | (char_array_4[1] >> 4);
		char_array_3[1] = ((char_array_4[1] & 15) << 4) | (char_array_4[2] >> 2);
		char_array_3[2] = ((char_array_4[2] & 3) << 6) | char_array_4[3];

		for (j = 0; (j < i - 1); j++)
			decoded_data.push_back(char_array_3[j]);
	}

	return true;
}

// Hàm kiểm tra ký tự base64 hợp lệ
bool is_base64(unsigned char c) {
	return (isalnum(c) || (c == '+') || (c == '/'));
}

// Hàm lưu dữ liệu nhị phân vào tệp tạm
bool saveToTempFile(const vector<BYTE>& data, const CString& tempFileName) {
	ofstream outFile(tempFileName, ios::binary);
	if (!outFile) {
		cerr << "Error opening temporary file!" << endl;
		return false;
	}

	outFile.write(reinterpret_cast<const char*>(data.data()), data.size());
	outFile.close();
	return true;
}


// Hàm load ảnh từ dữ liệu base64 và lưu dưới dạng JPEG sử dụng CImage
bool loadAndSaveImageFromBase64(const string& base64_data, const CString& output_file) {
	// Giải mã base64 thành dữ liệu nhị phân
	vector<BYTE> decoded_data;
	if (!base64Decode(base64_data, decoded_data)) {
		cerr << "Error decoding base64 data!" << endl;
		return false;
	}

	// Lưu dữ liệu nhị phân vào tệp tạm
	CString tempFileName = _T("temp_image.bmp");
	if (!saveToTempFile(decoded_data, tempFileName)) {
		cerr << "Error saving temporary file!" << endl;
		return false;
	}

	// Tạo đối tượng CImage
	CImage image;

	// Đọc ảnh từ tệp tạm
	HRESULT hr = image.Load(tempFileName);
	if (FAILED(hr)) {
		cerr << "Error loading image from temporary file!" << endl;
		return false;
	}

	// Lưu ảnh dưới dạng JPEG
	hr = image.Save(output_file, Gdiplus::ImageFormatJPEG);
	if (FAILED(hr)) {
		cerr << "Error saving image as JPEG!" << endl;
		return false;
	}

	// Xóa tệp tạm sau khi sử dụng
	DeleteFile(tempFileName);

	return true;
}



CString parseIDCard0(CGuiMainFrame* pMF, Document& document)
{
	// Trích xuất các giá trị từ JSON
	CDbfMap cardTbl;
	cardTbl.AddField(L"idCode", dfText, 20);
	cardTbl.AddField(L"oldIdCode", dfText, 20);
	cardTbl.AddField(L"personName", dfText, 64);
	cardTbl.AddField(L"dateOfBirth", dfText, 10);
	cardTbl.AddField(L"gender", dfText, 10);
	cardTbl.AddField(L"residencePlace", dfText, 254);
	cardTbl.AddField(L"issueDate", dfText, 10);
	cardTbl.AddField(L"race", dfText, 32);
	cardTbl.AddField(L"nationality", dfText, 128);
	cardTbl.AddField(L"ethnic", dfText, 128);
	cardTbl.AddField(L"religion", dfText, 128);
	cardTbl.AddField(L"rowdata", dfText, 2048);
	cardTbl.AddField(L"faceimage", dfText, 32767);


	CString idCard;
	const Value& data = document;


	// Accessing basic fields
	if (document.HasMember("newIdCard")) {
		cout << "newIdCard: " << document["newIdCard"].GetInt() << endl;
	}
	if (document.HasMember("idCardNo")) {
		cout << "idCardNo: " << document["idCardNo"].GetString() << endl;
		std::string idCode = document["idCardNo"].GetString();  // Corrected field to "idCardNo"
		idCard = fml::Utf8ToWideString(idCode).c_str();
		cardTbl.SetValue(L"idCode", idCard);  // Corrected: use "idCode"
	}
	if (document.HasMember("oldIdCardNumber")) {
		cout << "oldIdCardNumber: " << document["oldIdCardNumber"].GetString() << endl;
		std::string idCode = document["oldIdCardNumber"].GetString();  // Corrected field to "idCardNo"
		idCard = fml::Utf8ToWideString(idCode).c_str();
		cardTbl.SetValue(L"oldIdCode", idCard);  // Corrected: use "idCode"
	}

	if (document.HasMember("name")) {
		cout << "name: " << document["name"].GetString() << endl;
		std::string str = document["name"].GetString();  // Corrected field to "name"
		cardTbl.SetValue(L"personName", fml::Utf8ToWideString(str).c_str());  // Corrected: use "name" instead of "personName"
	}
	if (document.HasMember("gender")) {
		cout << "gender: " << document["gender"].GetString() << endl;
		std::string str = document["gender"].GetString();  // Corrected field to "gender"
		cardTbl.SetValue(L"gender", fml::Utf8ToWideString(str).c_str());
	}
	if (document.HasMember("dateOfBirth")) {
		cout << "dateOfBirth: " << document["dateOfBirth"].GetString() << endl;
		std::string dateOfBirth = document["dateOfBirth"].GetString();  // Corrected field to "dateOfBirth"
		//dateOfBirth = fml::ReplaceAll(dateOfBirth, "/", "");
		cardTbl.SetValue(L"dateOfBirth", fml::Utf8ToWideString(dateOfBirth).c_str());
	}
	if (document.HasMember("dateOfIssuance")) {
		cout << "dateOfIssuance: " << document["dateOfIssuance"].GetString() << endl;
		std::string str = document["dateOfIssuance"].GetString();  // Corrected field to "dateOfIssuance"
		//str = fml::ReplaceAll(str, "/", "");
		cardTbl.SetValue(L"issueDate", fml::Utf8ToWideString(str).c_str());
	}
	if (document.HasMember("dateOfExpiry")) {
		if (document["dateOfExpiry"].IsNull()) {
			cout << "dateOfExpiry: null" << endl;
		}
		else {
			cout << "dateOfExpiry: " << document["dateOfExpiry"].GetString() << endl;
		}
	}
	if (document.HasMember("residenceAddress")) {
		cout << "residenceAddress: " << document["residenceAddress"].GetString() << endl;
		std::string str = document["residenceAddress"].GetString();  // Corrected field to "residenceAddress"
		cardTbl.SetValue(L"residencePlace", fml::Utf8ToWideString(str).c_str());  // Corrected: use "residenceAddress"
	}

	// Access nested "dg13" object
	if (document.HasMember("dg13") && document["dg13"].IsObject()) {
		const Value& dg13 = document["dg13"];

		cout << "\ndg13:\n";
		if (dg13.HasMember("idCardNo")) {
			cout << "idCardNo: " << dg13["idCardNo"].GetString() << endl;
		}
		if (dg13.HasMember("name")) {
			cout << "name: " << dg13["name"].GetString() << endl;
		}
		if (dg13.HasMember("nationality")) {
			cout << "nationality: " << dg13["nationality"].GetString() << endl;
			std::string str = dg13["nationality"].GetString();
			cardTbl.SetValue(L"nationality", fml::Utf8ToWideString(str).c_str());
		}
		if (dg13.HasMember("ethnic")) {
			cout << "ethnic: " << dg13["ethnic"].GetString() << endl;
			std::string str = dg13["ethnic"].GetString();
			cardTbl.SetValue(L"ethnic", fml::Utf8ToWideString(str).c_str());
		}
		if (dg13.HasMember("religion")) {
			cout << "religion: " << dg13["religion"].GetString() << endl;
			std::string str = dg13["religion"].GetString();
			cardTbl.SetValue(L"religion", fml::Utf8ToWideString(str).c_str());
		}
	}


	if (document.HasMember("rowData")) {
		std::string str = document["rowData"].GetString();
		cardTbl.SetValue(L"rowData", fml::Utf8ToWideString(str).c_str());
		idCard.Format(L"%s", fml::Utf8ToWideString(str).c_str());
	}
	return idCard;

}

BOOL CMainFrame::OnCommand(WPARAM wParam, LPARAM lParam)
{
    UINT nCmd = LOWORD(wParam);
    UINT nEvent = HIWORD(wParam);

    if (m_bUseCCCDMachine && (nCmd == PM_CARD || wParam == PM_CARD))
    {
        Document document;
        int id = -1;
        std::string data;
        try
        {
            _tprintf(L"%s", (LPCTSTR)lParam);
            data = fml::WideStringToUtf8(std::wstring((LPCTSTR)lParam));

            document.Parse(data.c_str());

            if (document.HasMember("id"))
            {
                const Value &val = document["id"];
                id = val.GetInt();
            }
            else if (document.HasMember("idCardNo"))
            {
                id = 0;
            }
        }
        catch (exception &ex)
        {
            cout << ex.what() << endl;
            return FALSE;
        }

        cout << "id:" << id << endl;

        CString idCard;

        if (id == 0)
        {
            // Cwnd
            idCard = parseIDCard0(this, document);
            _tprintf(L"\r\nID Card: %s", (LPCTSTR)idCard);            
            if (!idCard.IsEmpty() && m_wndPatientDocument.IsWindowVisible())
            {
                m_wndPatientDocument.UpdateRelativeInfo(idCard);
            }
            return TRUE;
        }
        /*
        if (id == 1)
        {
            if (m_pCardInfo == nullptr)
            {
                m_pCardInfo = new CHMSCardEntryDialog(this, VM_ADD);
            }
            if (document.HasMember("data"))
            {
                data = document["data"].GetString();
                // if (m_pCardInfo && m_pCardInfo->GetSafeHwnd())
                //{

                //((CHMSCardEntryDialog*)m_pCardInfo)->CheckQrCode(fml::Utf8ToWideString(data).c_str());
                //((CHMSCardEntryDialog*)m_pCardInfo)->DoModal();
                //}
            }
            return TRUE;
        }

        if (id == 2)
        {
            // Trích xuất các giá trị từ JSON
            CDbfMap cardTbl;
            cardTbl.AddField(L"idCode", dfText, 20);
            cardTbl.AddField(L"oldIdCode", dfText, 20);
            cardTbl.AddField(L"personName", dfText, 64);
            cardTbl.AddField(L"dateOfBirth", dfText, 10);
            cardTbl.AddField(L"gender", dfText, 10);
            cardTbl.AddField(L"residencePlace", dfText, 254);
            cardTbl.AddField(L"issueDate", dfText, 10);
            cardTbl.AddField(L"race", dfText, 32);

            if (document.HasMember("data"))
            {
                const Value &data = document["data"];
                std::stringstream ss;

                if (data.HasMember("idCode") && data["idCode"].IsString())
                {
                    std::string idCode = data["idCode"].GetString();
                    ss << idCode << "|";
                    idCard = fml::Utf8ToWideString(idCode).c_str();
                    cardTbl.SetValue(L"idCode", idCard);
                }
                if (data.HasMember("oldIdCode") && data["oldIdCode"].IsString())
                {
                    std::string oldIdCode = data["oldIdCode"].GetString();
                    ss << oldIdCode << "|";
                    cardTbl.SetValue(L"oldIdCode",
                                     fml::Utf8ToWideString(oldIdCode).c_str());
                }
                if (data.HasMember("personName") &&
                    data["personName"].IsString())
                {
                    std::string str = data["personName"].GetString();
                    ss << str << "|";

                    cardTbl.SetValue(L"personName",
                                     fml::Utf8ToWideString(str).c_str());
                }

                if (data.HasMember("dateOfBirth") &&
                    data["dateOfBirth"].IsString())
                {
                    std::string dateOfBirth = data["dateOfBirth"].GetString();
                    dateOfBirth = fml::ReplaceAll(dateOfBirth, "/", "");
                    ss << dateOfBirth << "|";

                    cardTbl.SetValue(
                        L"dateOfBirth",
                        fml::Utf8ToWideString(dateOfBirth).c_str());
                }
                if (data.HasMember("gender") && data["gender"].IsString())
                {
                    std::string str = data["gender"].GetString();
                    ss << str << "|";
                    cardTbl.SetValue(L"gender",
                                     fml::Utf8ToWideString(str).c_str());
                }
                if (data.HasMember("residencePlace") &&
                    data["residencePlace"].IsString())
                {
                    std::string str = data["residencePlace"].GetString();
                    ss << str << "|";
                    cardTbl.SetValue(L"residencePlace",
                                     fml::Utf8ToWideString(str).c_str());
                }
                if (data.HasMember("issueDate") && data["issueDate"].IsString())
                {
                    std::string str = data["issueDate"].GetString();
                    str = fml::ReplaceAll(str, "/", "");
                    ss << str << "|";
                    cardTbl.SetValue(L"issueDate",
                                     fml::Utf8ToWideString(str).c_str());
                }
                if (data.HasMember("race") && data["race"].IsString())
                {
                    std::string str = data["race"].GetString();
                    ss << str;
                    cardTbl.SetValue(L"race",
                                     fml::Utf8ToWideString(str).c_str());
                }

                SetActiveWindow();

                CString szSQL;
                szSQL.Format(_T("person_card_update(%s) "),
                             cardTbl.FormatSQL());
                ExecDML(szSQL);
                idCard = fml::Utf8ToWideString(ss.str()).c_str();
                // m_wndPatientDocument.CheckCCCD(idCard);
            }

        }
*/
    }
    // TODO: Add your specialized code here and/or call the base class
    if (nCmd == CMD_NOTIFICATION && nEvent == BN_CLICKED)
    {
        if (m_pWndNotification != NULL && m_pWndNotification->GetSafeHwnd())
			m_pWndNotification->Show();
        return TRUE;
    }
    

    if (m_nDocumentNo > 0 && nEvent == BN_CLICKED)
    {

        switch (nCmd)
        {
        case CMD_SERVICEPACKAGE:
            m_wndPatientDocument.OnExtraInfoSelect();
            return TRUE;
        case CMD_TREATMENT:
            m_wndPatientDocument.OnTreatmentTrackingSelect();
            return TRUE;
        case CMD_CARE:
            m_wndPatientDocument.OnPatientCareSelect();
            return TRUE;
        case CMD_RECORD:
            m_wndPatientDocument.OnCreateClinicalRecordHtml();
            return TRUE;
        case CMD_SIGNATURE:
            m_wndPatientDocument.OnViewEMR();
            return TRUE;
        case CMD_USER + 10:
            m_wndPatientDocument.OnClinicalRecordSelect();
            return TRUE;
        case CMD_USER + 11:
            m_wndPatientDocument.OnElectronicRecordSelect();
            return TRUE;
        }
    }

	if (nCmd == SIGNATURE_NOTIFY)
    {
        if(m_wndSignatureTransView.GetSafeHwnd())
			m_wndSignatureTransView.OnListLoadData();
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

BOOL CMainFrame::IsOnceRollback(long nDocumentNo)
{
	CRecord rs(&m_db);
	CString szSQL, szRollback;
	szSQL.Format(_T("SELECT hcr_rollback FROM hms_clinical_record WHERE hcr_docno = %ld"), nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hcr_rollback"), szRollback);
	if (szRollback == _T("Y"))
		return true;
	return false;
}

CString CMainFrame::UserC13ExamTab()
{
	CString szSQL, szusec13examtab;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT NVL(usec13examtab, 'N') as usec13examtab FROM hms_config"));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("usec13examtab"), szusec13examtab);
	return szusec13examtab;
}

bool CMainFrame::IsMonDay()
{
	CString szDate;
	szDate = GetSysDate().Left(10);;
	CDate dte(szDate);
	int dayOfWeek = dte.GetDayOfWeek();

	if (dayOfWeek == 1)
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

int CMainFrame::CheckInteraction(long nDocumentNo, CString szOrderDate, long nProduct_id)
{
	CRecord rs(&m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT listagg(column_value, ',') within group (order by column_value) ") \
		_T(" FROM table(HMS_GET_INTERACTION_V2(%ld, to_date('%s', 'yyyy/mm/dd hh24:mi:ss')))")
		, nDocumentNo, szOrderDate);
	rs.ExecSQL(szSQL);
	tmpStr = rs.GetStringValue();
	if (!tmpStr.IsEmpty())
	{
		CHMSInteractionView dlg(this, m_nDocumentNo, tmpStr, nProduct_id);
		if (dlg.DoModal() == IDOK)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}
void CMainFrame::OnCommandDoctorinfo()
{
	// TODO: Add your command handler code here
	CHMSDoctorInfo dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupWorkshift()
{
	/*
	CAdWorkshiftDialog dlg(this);
	dlg.DoModal();
	*/
}

void CMainFrame::OnOrderPatientHandover()
{
	/*
	CTMPatientHandoverDialog2 dlg(this);
	dlg.DoModal();
	*/
}
void CMainFrame::OnSettingsOrgDeptinfo()
{
	// TODO: Add your command handler code here
	CHMSGetOrgDeptInfor dlg(this);

	dlg.DoModal();
}
void CMainFrame::OnFileCommandApplytt32forms()
{
	// TODO: Add your command handler code here
	UINT state = m_pMainMenu->GetMenuState(ID_FILE_COMMAND_APPLYTT32FORMS, MF_BYCOMMAND);
	ASSERT(state != 0xFFFFFFFF);

	if (state & MF_CHECKED)
	{
		m_pMainMenu->CheckMenuItem(ID_FILE_COMMAND_APPLYTT32FORMS, MF_UNCHECKED | MF_BYCOMMAND);
		AddProp(_T("apply_tt32_forms"), _T("N"));
		AfxGetApp()->WriteProfileString(L"Settings", L"apply_tt32_forms", L"N");
	}
	else
	{
		m_pMainMenu->CheckMenuItem(ID_FILE_COMMAND_APPLYTT32FORMS, MF_CHECKED | MF_BYCOMMAND);
		AddProp(_T("apply_tt32_forms"), _T("Y"));
		AfxGetApp()->WriteProfileString(L"Settings", L"apply_tt32_forms", L"Y");
	}
}

void CMainFrame::OnCommandNutritionexam()
{
	// TODO: Add your command handler code here
	CHMSSEOrderDialog dlg(this);
	dlg.DoModal();
}

int CMainFrame::CheckNutriExamSchedule()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int nRet = 0;
	szSQL.Format(_T("is_nutri_examdate('%s', %ld, %d)")
		, pMF->GetCurrentUser(), pMF->m_nDocumentNo, pMF->GetTreatTime());
	nRet = str2int(pMF->ExecDML(szSQL));
	if (nRet > 0)
	{
		CString szMsg;
		szMsg.Format(
			_T("Bệnh nhân cần được khám sàng lọc dinh dưỡng!\n ") \
			_T("(Yes) Thực hiện \n") \
			_T("(No) Không thực hiện \n") \
			_T("(Cancel) Hủy thao tác \n"));
		int nButtonID = ShowMessageBox(szMsg, MB_YESNOCANCEL);
		CHMSTreatmentHtmlDialog dlg(this, L"DT_DINHDUONG", VM_ADD, true);
		dlg.m_szType = L"DD";
		dlg.m_szFile = L"DT_DINHDUONG.HTML";
		//dlg.SetMode(VM_ADD);
		switch (nButtonID)
		{
		case IDYES:
			if (dlg.DoModal() == IDOK)
			{

			}
			break;
		case IDNO:
			nRet = 0;
			break;
		case IDCANCEL:
			break;
		}
	}
	return nRet;
}
#include "SYSDepartmentChangeDialog.h"
void CMainFrame::OnChangeDepartment()
{
	//ShowMessageBox(_T("Nếu user đã phân quyền xem lịch trực thì chức năng này không có hiệu lực!"), MB_ICONWARNING);	

	CSYSDepartmentChangeDialog dlg(this);
	if (GetModuleID() == _T("TM") && dlg.m_szDepartmentKey == _T("PTTYC"))
	{	
		ShowMessageBox(_T("Hãy đăng nhập vào module yêu cầu để sử dụng!"), MB_ICONWARNING);
		return;
	}

	dlg.m_szDepartmentKey = m_UserInfo.su_deptid;
	dlg.m_szDeptType = _T("I");

	if(dlg.DoModal()==IDOK)
	{
		m_szDept = dlg.m_szDepartmentNewKey;
		//m_wndTreatmentQueue.m_szDepartmentKey = m_szDept;
		m_wndTreatmentQueue.OnDeptNameRefresh(m_szDept);

		m_wndTreatmentQueue.OnPatientListLoadData();
		
		AddProp(L"sign_deptid", m_szDept);

		CString szFloor, szText;
		TranslateString(m_szModuleName, szText);		
		szText.AppendFormat(_T(" [%s]"), GetDepartmentName(m_szDept));
		SetWindowText(szText);

		m_wndPatientDocument.SetMode(VM_NONE);
		m_nDocumentNo = 0;
		SetActivePane(0);
	}
}

void CMainFrame::OnCommandPriceschedulesetup()
{
	// TODO: Add your command handler code here
	CString szLink;
	szLink.AppendFormat(L"?login=true&username=%s&password=%s",  m_szUser, m_szPassword);
	LaunchWeb(szLink);
}


void CMainFrame::OnSize(UINT nType, int cx, int cy)
{
	CHMSMainFrame::OnSize(nType, cx, cy);
}

CString CMainFrame::GetAdmitDeptID()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szSQL, szAdmitDeptID;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT HMS_GET_ADMITDEPT(%ld, %d) as AdmitDeptID FROM dual "), m_nDocumentNo, pMF->GetTreatTime());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("AdmitDeptID"), szAdmitDeptID);
	return szAdmitDeptID;

}


void CMainFrame::OnCommandSettupmedicalrecords()
{
    if (!CheckPermission(L"BA.01"))
    {
        ShowMessageBox(L"Không có quyền thiết lập bệnh án với mã [BA.01]");
        return;
    }
    CHMSMedicalRecordSettingDialog dlg(this);
    dlg.DoModal();
}

void CMainFrame::OnSettingSetuptemplates()
{
    if (!CheckPermission(L"BA.02"))
    {
        ShowMessageBox(L"Không có quyền thiết lập mẫu biểu với mã [BA.02]");
        return;
    }

    CHMSMedicalRecordSettingItemDialog dlg(this, L"Thiết lập mẫu biểu");
    dlg.m_szType = L"MB";
    dlg.DoModal();
}




bool KillProcessByName(const std::wstring& processName) {
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hSnap == INVALID_HANDLE_VALUE)
    {
        cout << "KillProcessByName::Invalid handle" << endl;
        return false;
    }

	PROCESSENTRY32 pe;
	pe.dwSize = sizeof(PROCESSENTRY32);
    
	if (Process32First(hSnap, &pe)) {
		do {
            if (processName == pe.szExeFile)
            {
				HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, pe.th32ProcessID);
				if (hProcess) {
					TerminateProcess(hProcess, 1);
					CloseHandle(hProcess);
                    std::wcout << L"Kill process:" << processName << std:: endl;
				}
			}
		} while (Process32Next(hSnap, &pe));
	}

	CloseHandle(hSnap);
	return true;
}

void CMainFrame::OnCommandUseCCCDMachine()
{
	UpdateData(true);

	m_bUseCCCDMachine = !m_bUseCCCDMachine;
	if (m_pMainMenu == NULL)
		return;

	if (m_bUseCCCDMachine)
	{
		m_pMainMenu->CheckMenuItem(ID_FILE_USECCCDMACHINE, MF_CHECKED | MF_BYCOMMAND);
	}
	else
	{
		m_pMainMenu->CheckMenuItem(ID_FILE_USECCCDMACHINE, MF_UNCHECKED | MF_BYCOMMAND);
	}

	AfxGetApp()->WriteProfileInt(_T("Settings"), _T("USECCCDMACHINE"), (int)m_bUseCCCDMachine);

}

int CMainFrame::ApplyInsuranceData(CString szCardNo, JSONVALUE& jData)
{
	CRecord rs(&m_db);
	CString szSQL, szFields;
	int nRet = 0;
	szSQL.Format(_T("select * from ss_examhist_view ") \
		_T(" where cardno = '%s'"), szCardNo);
	nRet = rs.ExecSQL(szSQL);
	szFields = _T("CardNo,PatientName,BirthDate,Sex,")\
		_T("Provill,District,Village,DetailAddress,RegistrationPlace,") \
		_T("RegistrationDate,ExpiryDate,Over5Years,ApplyDate5year,Age");
	CStringToken tk_field(szFields);
	if (rs.IsEOF())
		return 0;
	for (int i = 0; i < tk_field.GetSize(); i++)
	{
		tk_field.GetAt(i, szFields);
		jData[szFields] = rs.GetValue(szFields);
	}
	return nRet;
}

void CMainFrame::OnClose()
{
	
	CHMSMainFrame::OnClose();
}

void CMainFrame::OnTimer(UINT_PTR nIDEvent)
{
    // TODO: Add your message handler code here and/or call default
	if (nIDEvent == IDT_CHECK_CARD_READER)
	{
		if (!IsExistingProcess(L"sio_cardreader.exe"))
		{
            //StartServiceEx(L"cef", L"sio_cardreader.exe");
		}
	}

    CHMSMainFrame::OnTimer(nIDEvent);
}

void CMainFrame::OnDestroy()
{
    CHMSMainFrame::OnDestroy();    
}


void CMainFrame::LoadPatientProfile(long nPatientNo, long nDocumentNo, int nRefIdx)
{
    SetActivePane(1);
    m_nPatientNo = nPatientNo;
    m_nDocumentNo = nDocumentNo;
    m_nRefIndex = nRefIdx;
    m_wndPatientDocument.LoadData(m_nPatientNo, m_nDocumentNo, m_nRefIndex);
}
void CMainFrame::OnSettingsSurgeryimagecatalog()
{
    // TODO: Add your command handler code here
    CImageCategoryDialog dlg(this);
    if (dlg.DoModal() == IDOK)
    {
    }
}
