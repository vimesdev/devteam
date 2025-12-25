// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "HMSExaminationDocument.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "Resource.h"
#include "ReportDocument.h"
#include "HMSPrescriptionGroupItemsDialog.h"
#include "HMSMedicalCabinet.h"
#include "PMSDailyDrugOrder.h"
#include "SYSPasswordChangeDialog.h"
#include "HMSTreatmentHistory.h"
#include "HMSReportFormDialog.h"
#include ".\mainfrm.h"
#include "HMSExamTestProfileDialog.h"
#include "HospitalFee/FMHealthExamList.h"
#include "EMParaclinicalListSetup.h"
#include "AdBusinessPartnerListDialog.h"
#include "HMSRetailDialog.h"
#include "HMS_APPOINMENTA20.h"
#include "HMSDoctorInfo.h"
#include "WardReturnOrderDialog.h"
#include "HESettingExamSchedule.h"
#include "HMSGetOrgDeptInfo.h"
#include "SYSDepartmentChangeDialog.h"
#include "MFCCaptionBarEx.h"
#include "MFCWidget.h"
#include "HMSOperationDataGridInput.h"

// CMainFrame
IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_SETUPPRESCRIPTIONLIST, OnFileSetupprescriptionlist)
	ON_COMMAND(ID_COMMAND_MEDICALCABINET, OnCommandMedicalcabinet)
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_COMMAND(ID_FILE_CHANGEDEPARTMENT, OnChangeDepartment)
	ON_COMMAND(ID_COMMAND_DRUGMATERIALORDERSHEET, OnCommandDrugmaterialordersheet)	
	ON_COMMAND(ID_COMMAND_SEARCHINFORMATIONPATIENT, OnCommandSearchinformationpatient)
	ON_WM_SIZE()
	ON_COMMAND(ID_REPORTFORMS, OnMenuReportForms)
	ON_COMMAND(ID_COMMAND_TESTPROFILESETUP, OnCommandTestprofilesetup)
	ON_COMMAND(ID_COMMAND_TESTPROFILESETUP32826, CMainFrame::OnCommandTestprofilesetup32826)
	ON_COMMAND(ID_COMMAND_SETUPDIAGNOSTIC, OnCommandSetupdiagnostic)	
//	ON_COMMAND(ID_FILE_HEALTHEXAMLIST, OnFileHealthexamlist)
	ON_COMMAND(ID_FILE_SELECTWORKINGZONE, OnFileSelectworkingzone)
	ON_COMMAND(ID_FILE_INVENTORYMANAGER, OnFileInventorymanager)
	ON_COMMAND(ID_SETTINGS_SETUPREPORTPARAMETER, OnSettingsSetupreportparameter)
	ON_COMMAND(ID_SETTINGS_SETUPPARTNERLIST, OnFileSetuppartnerlist)
	ON_COMMAND(ID_SETTINGS_SMARTCARD, OnSettingsSmartCard)	

	ON_COMMAND(ID_ORDER_RETAILORDER, CMainFrame::OnOrderRetailorder)
	ON_COMMAND(ID_SETTINGS_SETUPAPPOINTMENTA20, OnSetUpAppointmentA20)
	ON_COMMAND(ID_FILE_BOSUNG_HOANTRAKHONGCOBENHNHAN, OnFileBosungHoanTraKhongcobenhnhan)
	ON_COMMAND(ID_FILE_DAILYFOOD, OnFileDailyfood)
	ON_COMMAND(ID_COMMAND_RETURNDRUGORDER, OnCommandReturndrugorder)
	
	ON_COMMAND(ID_SETTINGS_DOCTORINFO, OnSettingsDoctorinfo)
	ON_COMMAND(ID_SETTINGS_EXAMSCHEDULE, OnSettingsExamschedule)
	ON_COMMAND(ID_FILE_OPERATIONSCHEDULES, OnFileOperationschedules)
	ON_COMMAND(ID_SETTINGS_ORGDEPTINFOR, OnSettingsOrgDeptinfo)
	
ON_WM_DESTROY()
    END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	//SetLocalLang(0);
	m_szModuleName = _T("QUẢN LÝ KHÁM BỆNH");
	m_szModuleID = _T("EM");
	m_szSize = CSize(1024, 700);
	//version A11
	//m_szVersion = _T("9.5");
	m_szVersion = _T("9.8");
	m_szHaveLed.Empty();
	m_bAllowLoadICD10 = true;	
	m_bAllowLoadOperation = true;
	m_bUseLCD = false;
	m_szRecordNo.Empty();
}

CMainFrame::~CMainFrame()
{
	
}

void ResizeFrame(CWnd *pFrame, float xper, float yper)
{
	
	if(pFrame == NULL)
		return;
	CWnd *pWnd = pFrame;
	CRect rect, rc;
	float x, y;

	pWnd = pWnd->GetWindow(GW_CHILD);
	while(pWnd){
		pWnd->GetWindowRect(&rect);
		rc = rect;
		rect.left*= xper;
		rect.right *= xper;
		x = (float)rect.Width()/rc.Width();
		y = (float)rect.Height()/rc.Height();
		pFrame->ClientToScreen(&rect);
		pWnd->MoveWindow(rect);

		//ResizeFrame(pWnd, x, y);
		
		pWnd = pWnd->GetWindow(GW_HWNDNEXT);
	}
	
}


void _OnTabChangeFnc(CWnd *pWnd, int nOld, int nNew)
{
	CMainFrame *pMF = (CMainFrame*) pWnd;

	CGuiTabCtrl* pTab;// = (CGuiTabCtrl*) GetPane();
	
	pTab = DYNAMIC_DOWNCAST(CGuiTabCtrl, pMF->GetPane());
	
	if(pTab->GetActiveTab() == 0 )
	{
		int nSel  = pMF->m_wndExaminationQueue.m_nRowSel;
		pMF->m_wndExaminationQueue.OnPatientListLoadData();
		pMF->m_wndExaminationQueue.m_nRowSel = nSel;
	}
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{

	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	
	CRect rect;
	GetDesktopWindow()->GetWindowRect(&rect);

	if (rect.Width() > 1024)
	{
		m_pAppBar->m_szItemSize = CSize(115, 35);
	}
	else
	{
		m_pAppBar->m_szItemSize = CSize(100, 35);
	}


	m_pAppBar->Add(new CWidgetItem(CMD_USER + 1, icons::collections_bookmark, L"Ký số", L"Hồ sơ bệnh án điện tử"));
	//m_pAppBar->Add(new CWidgetItem(ID_COMMAND_COMPANYSETTING, icons::accessibility, L"Khám sức khỏe", L"Gói khám sức khỏe"));
	
	//m_pAppBar->Add(new CWidgetItem(CMD_USER + 2, icons::bookmark, L"Mẫu biểu", L"Mẫu biểu hành chính"));
	m_pAppBar->Add(new CWidgetItem(CMD_USER + 3, icons::calendar_today, L"Lịch hẹn", L"Tạo lịch hẹn"));

	//m_pAppBar->Add(new CWidgetItem(CMD_USER + 2, icons::chevron_left, L"Chức năng sống", L"Nhập chức năng sống"));
	//m_pAppBar->Add(new CWidgetItem(ID_COMMAND_UPLOADFILE, icons::search, L"Upload", L"Tải lên file tài liệu"));
	m_pAppBar->Add(new CWidgetItem(ID_COMMAND_SEARCHINFORMATIONPATIENT, icons::search, L"Tìm kiếm", L"Tìm kiếm thông tin bệnh nhân"));



	
	CRecord rs(&m_db);
	CString szSQL, szCert;
	szSQL.Format(_T("BEGIN") \
				_T("	DBMS_SESSION.SET_IDENTIFIER('%s');") \
				_T("	DBMS_APPLICATION_INFO.SET_MODULE ('%s', '');") \
				_T(" END;"), GetCurrentUser(), GetModuleID());
	ExecSQL(szSQL);
	CString tmpStr;

	//Kiem tra quyen duoc in tong ket kham va sua don thuoc.
	if(CheckPermission(_T("15")) || CheckPermission(_T("16")))
	{
		m_bPrintSummarize = true;
		m_pMainMenu->LoadMenu(IDR_MENU1);
		CString szTitle;
		TranslateString(_T("DRUG ISSUE"), szTitle);
		SetWindowText(szTitle);
	}
	else
	{
		TranslateString(_T("EXAMINATION MANAGER"), tmpStr);
		SetWindowText(tmpStr);
	}

	m_wndPatientDocument.Create(GetPane());
	m_wndExaminationQueue.Create(GetPane());




	//m_wndOperationMaterial.Create(GetPane());


	AddView(_T("Examination List"), &m_wndExaminationQueue);
	AddView(_T("Clinical Record"), &m_wndPatientDocument);
	//AddView(_T("Operation Order"), &m_wndOperationMaterial);
	/*
	if(m_szDept == _T("C1.2") || m_UserInfo.su_hms_xdept == _T("C1.2"))
	{	
		m_wndAppointment.Create(GetPane());
		AddView(_T("Appointment"), &m_wndAppointment);
	}
	*/
	if(m_szDept == _T("TYC") || m_UserInfo.su_hms_xdept == _T("TYC") || m_szDept == _T("PTTYC") || m_UserInfo.su_hms_xdept == _T("PTTYC"))
	{	
		m_wndAppointmentScheduleList.Create(GetPane());
		AddView(_T("Lịch hẹn"), &m_wndAppointmentScheduleList);
	}
	if (m_szDept == _T("C1.1") || m_szDept == _T("C1.3") || m_szDept == _T("AB")
		|| m_szDept == _T("C1.2") || m_UserInfo.su_hms_xdept == _T("C1.2"))
	{
		m_wndAppointment_V2.Create(GetPane());
		AddView(_T("Appointment"), &m_wndAppointment_V2);
	}
	
	if (CheckPermission(_T("17")))
	{
//		m_wndCommanderExam.Create(GetPane());
//		AddView(_T("Commander Examination"), &m_wndCommanderExam);
	}

	bool sign_perm = CheckPermission(_T("EMR.KLD"));
	//Tam thoi gai = true de test
	//sign_perm = true;
	if (GetProp(_T("hms_emr_enable")) == _T("Y") && sign_perm)
	{
		m_wndSignatureView.SetViewType(1);
		m_wndSignatureView.Create(this, CRect(0, 0, 0, 0));
		AddView(_T("Electric medical record"), &m_wndSignatureView);
	}
    m_wndSignatureTransView.Create(GetPane());
    AddView(_T("Trình ký"), &m_wndSignatureTransView);

	SetActivePane(0);

	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	szStatus.AppendFormat(_T(" - Host:%s"), GetHost(), GetDatabase());
	SetStatusText(szStatus, 1);

	//m_CompanyInfo.sc_id = _T("58620");

	CGuiTabCtrl *pTab = (CGuiTabCtrl *) GetPane();
	if (pTab)
	{
		pTab->SetItemSize(CSize(150, 30));
		//pTab->SetEvent(WE_SELCHANGE, _OnTabChangeFnc);
	}
	
	if(m_szDept == _T("TYC") || m_szDept == _T("C1.2") || m_szDept == _T("C1.1"))
	{
		OnInitSmartCard();
	}
	else
	{
		CString tmpStr;
		CMenu* pMenu = m_pMainMenu->GetSubMenu(0);
		for (int i =0; i < pMenu->GetMenuItemCount(); i++)
		{
			UINT nID = pMenu->GetMenuString(i, tmpStr, MF_BYPOSITION);
			if(tmpStr == _T("Settings"))
			{
				printf("\r\n%d", pMenu->GetMenuItemCount());
		//		pMenu->DeleteMenu(ID_SETTINGS_SMARTCARD, MF_BYCOMMAND);
			}
		}
		

	}
	//Copy system.conf from server
	/*CString szRemotePath, szLocalPath;
	TCHAR Buffer[MAX_PATH];
	::GetCurrentDirectory(MAX_PATH, Buffer);
	szLocalPath = Buffer;
	szLocalPath.AppendFormat(_T("\\system.conf"));
	szRemotePath = _T("\\\\10.0.0.95\\c\\VIMES_NOITRU\\system.conf");
	CopyFile(szRemotePath, szLocalPath, FALSE);*/
	return 0;
}


void CMainFrame::OnInitializes()
{
	CHMSMainFrame::OnInitializes();
	if (CheckCoreVersion() == false)
	{
		exit(0);
	}
//	CHMSMainFrame::OnInitData();
//Neu nhom nguoi su dung la bac si
	if(GetUserGroup() == _T("D") || GetUserGroup() == _T("P")){
		m_szDoctor = GetCurrentUser();
	}
	else
		m_szDoctor.Empty();	
	m_szTreatDeptID = m_szDept;

	m_szDept = m_UserInfo.su_hms_xdept;
	CString szSQL, tmpStr, szCert, szOrgDept, szSoBHXH;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT * FROM hms_config "));
	rs.ExecSQL(szSQL);
	m_szPaymentExamFeeRequest = m_szRequestConfirm = _T("N");
	m_szHaveLed = _T("N");
	m_szRequestCreateAdmissionVote = _T("N");
	
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("he_requestconfirm"), m_szRequestConfirm);
		rs.GetValue(_T("he_examfee_payment_request"), m_szPaymentExamFeeRequest);
		rs.GetValue(_T("he_have_led"), m_szHaveLed);
		rs.GetValue(_T("he_request_create_admissionvote"), m_szRequestCreateAdmissionVote);
		rs.GetValue(_T("em_limitnumberdoctorexday"), m_nLimitNumberDoctorExaminedDay);		
	}

	m_bConfirm = false;
	if(m_szRequestConfirm == _T("Y") && m_szDept == _T("C1.3"))
	{
		m_bConfirm = true;
	}

	
	//m_szPaymentExamFeeRequest = m_szFree_PaymentCostExam;
//	OnMenuReportForms();

	AfxGetApp()->GetProfileInt(_T("USER"), _T("LCD"), (int)m_bUseLCD);

	long ret = 10;	
	szSQL.Format(_T("HMS_GET_DOC_CER_INFOR('%s') "), GetCurrentUser());
	ret = str2long(ExecDML(szSQL));

	if (ret <=0 && (GetUserGroup() == _T("D") || GetUserGroup() == _T("P")))
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

	if (ret <=0 && GetUserGroup() != _T("D") && GetUserGroup() != _T("P"))
	{
		ShowMessageBox(_T("Tài khoản đăng nhập có thông tin BHXH chưa hợp lệ, hãy cập nhật thông tin đúng để sử dụng chương trình!"),MB_ICONWARNING);
		CHMSDoctorInfo dlg(this);		
	    dlg.DoModal();
		szSoBHXH = dlg.m_szSoBHXH;
		szSoBHXH.Trim();
	    if((szSoBHXH.IsEmpty()) || (szSoBHXH.GetLength() <10))
		{
			ShowMessageBox(_T("Số BHXH phải có độ dài >=10 ký tự"),MB_ICONERROR);
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

bool CMainFrame::IsPaymentFee(CString szType, long nIdx)
{
	CString szSQL, tmpStr, szdeptid;
	int npriority, nroomid;
	CRecord rs(&m_db);
	
	//KIEM TRA NEU BENH NHAN KHAM SUC KHOE THEO HOP DONG.
	if(m_szHealthExam == _T("Y"))
	{
		return true;
	}
	szSQL.Format(_T("SELECT he_hasfee, hfe_refstatus,he_emergency, he_roomid, he_deptid, hrl_section, HFL_SERVPRICE, HD_PRIORITY ") \
				 _T("FROM hms_exam LEFT JOIN hms_fee_list ON (HE_EXAMTYPE = hfl_feeid)") \
				 _T("LEFT JOIN hms_roomlist ON(hrl_id=he_roomid and hrl_deptid=he_deptid) ") \
				 _T("LEFT JOIN hms_doc ON(hd_docno = he_docno) ") \
				 _T("WHERE he_docno=%ld AND he_receptidx=%d"), m_nDocumentNo, nIdx);

	//_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return false;
	//Thêm đối tượng phòng khám C16 = PK quốc tế thì không check nữa //

	rs.GetValue(_T("HD_PRIORITY"), npriority);
	rs.GetValue(_T("he_deptid"), szdeptid);
	rs.GetValue(_T("he_roomid"), nroomid);
	
	if (npriority == 1 && szdeptid == _T("C1.1") && nroomid == 58)
	return true;

	rs.GetValue(_T("he_emergency"), tmpStr);
	if(tmpStr == _T("Y"))
		return true;
	rs.GetValue(_T("hrl_section"), tmpStr);
	if(tmpStr == _T("R") || tmpStr == _T("C1.4"))
		return true;

	rs.GetValue(_T("HFL_SERVPRICE"), tmpStr);
	if(tmpStr == _T("0"))
		return true;
	
	if(szType==_T("E")){

		if(m_szDept == _T("C1.3") || m_szDept == _T("C15") || 
			m_szDept == _T("C6") || m_UserInfo.su_deptid == _T("C6") ||
			m_UserInfo.su_hms_xdept == _T("C1.3") || m_UserInfo.su_deptid == _T("C15"))
			return true;
		_tprintf(_T("\nm_szDept: %s|su_deptid: %s|su_hms_xdept:%s|hasfee:%s|refstatus:%s|emergency:%s")
			, m_szDept, m_UserInfo.su_deptid, m_UserInfo.su_hms_xdept,
			rs.GetValue(_T("he_hasfee")), rs.GetValue(_T("hfe_refstatus")), rs.GetValue(_T("he_emergency")));
		rs.GetValue(_T("he_hasfee"), tmpStr);
		if(tmpStr != _T("Y"))
			return true;

		rs.GetValue(_T("hfe_refstatus"), tmpStr);
		if(tmpStr == _T("P"))
			return true;
		else
		{
			rs.GetValue(_T("he_emergency"), tmpStr);
			if(tmpStr == _T("Y"))
				return true;
			else
			{
/*
				CString deptid;
				int roomid;
				rs.GetValue(_T("he_deptid"), deptid);
				rs.GetValue(_T("he_roomid"), roomid);
				szSQL.Format(_T("SELECT hrl_section FROM hms_roomlist WHERE hrl_deptid='%s' and hrl_id=%d"), deptid, roomid);

				rs.ExecSQL(szSQL);
				if(rs.IsEOF())
					return false;
				rs.GetValue(_T("hrl_section"), tmpStr);
				if(tmpStr == _T("R"))
					return true;
				else
*/
					return false;
			}
		}
		return false;
	}

	else if(szType == _T("P"))
	{
		szSQL.Format(_T("SELECT hpc_payment FROM hmsv_paraclinic WHERE hpc_docno=%ld AND hpc_orderid=%ld"), m_nDocumentNo,  nIdx);

	}
	else if(szType == _T("O"))
	{
		szSQL.Format(_T("SELECT ho_payment FROM hms_operation WHERE ho_docno=%ld AND ho_idx=%ld"), m_nDocumentNo, nIdx);
	}
	else if(szType == _T("D"))
	{
		szSQL.Format(_T("SELECT hpo_payment FROM hms_pharmaorder WHERE hpo_docno=%ld AND hpo_orderid=%ld"), m_nDocumentNo, nIdx);
	}

	rs.ExecSQL(szSQL);
	tmpStr = rs.GetStringValue();
	if(tmpStr == _T("P") || tmpStr == _T("Y"))
		return true;
	else
		return false;
	return false;
}
CString CMainFrame::GetDocumentStatus()
{
	CString szSQL, szStatus;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT hd_status FROM hms_doc WHERE hd_docno=%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_status"), szStatus);
	return szStatus;
}

CString CMainFrame::GetCertificateInfor()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szSertificate;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT NVL(su_certificate, 'XX') as certificate FROM sys_user WHERE su_userid='%s'"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("certificate"), szSertificate);
	return szSertificate;
}

bool CMainFrame::IsActiveDocument(){
	CString szSQL, szStatus, szOutpatient;
	CRecord rs(&m_db);
	
	if (m_nDocumentNo <= 0)
		return false;


	szSQL.Format(_T("select hd_status as status, hd_outpatient as outpatient from hms_doc where hd_docno=%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return false;
	rs.GetValue(_T("status"), szStatus);
	rs.GetValue(_T("outpatient"), szOutpatient);

	if(IsPaidFees())
		return false;

	
	if(szOutpatient == _T("Y") && szStatus == _T("T")){
		CString szOutStatus;
		szSQL.Format(_T("SELECT hop_status FROM hms_outpatient WHERE hop_docno=%ld"), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF()){
			rs.GetValue(_T("hop_status"), szOutStatus);
			if(szOutStatus == _T("O"))
				return true;
			else
				return false;
		}
		else
			return false;
	}
	if(szStatus == _T("O") || szStatus == _T("P") || szStatus == _T("R"))
		return true;
	return false;
}

bool CMainFrame::IsDocumentEmpty() {
	if (m_nDocumentNo > 0)
	{
		return false;
	}
	return true;
}

bool CMainFrame::IsPaidFees(){
	CString szSQL, szStatus;
	CRecord rs(&m_db);
//	if(IsActiveDocument())
//		return false;
	//kiem tra neu benh nhan kham suc khoe theo hop dong
	
	if(GetObjectType() == _T("D"))
		return false;
	if(GetObjectType() != _T("I") && GetObjectType() != _T("C") && GetObjectType() != _T("D"))
		return false;

	szSQL.Format(_T("SELECT hdf_invoicefee FROM hms_doc WHERE hd_docno=%ld"), m_nDocumentNo);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return false;
	long invoiceno;
	rs.GetValue(_T("hdf_invoicefee"), invoiceno);

	if(invoiceno > 0) 
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

								 
void CMainFrame::OnFileSetupprescriptionlist()
{
	CHMSPrescriptionGroupItemsDialog dlg(this);
	dlg.DoModal();
}

#include "WardMedicalCabinetDialog.h"

void CMainFrame::OnCommandMedicalcabinet()
{
	CWardMedicalCabinetDialog dlg(this);
	dlg.DoModal(); 
}

BOOL CMainFrame::OnCommand(WPARAM wParam, LPARAM lParam)
{
	UINT nCmd, nEvent;
	HWND hWnd;
	nCmd = LOWORD(wParam);
    nEvent = HIWORD(wParam);
	hWnd = (HWND)(lParam);
	
	
	if (nCmd == CMD_USER + 1)
	{
		m_wndPatientDocument.OnViewEMR();
		return TRUE;
	}

	//Mau bieu chuyen moi
	if (nCmd == CMD_USER + 2)
	{
		m_wndPatientDocument.OnCreateSpecificForm();
		return TRUE;
	}
	//Mau bieu chuyen moi
	if (nCmd == CMD_USER + 3)
	{
		m_wndPatientDocument.OnHenKhamLaiSelect();
		return TRUE;
	}
	return CHMSMainFrame::OnCommand(wParam, lParam);
}


void CMainFrame::OnFileChangepassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::PrintAdmissionPatientListReport(CString szFromDate, CString szToDate, CString szDeptID, CString szStatus, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame*) this;
	CRecord rs(&m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate; 
	szSysDate = GetSysDate();
	CReport rpt; 	
	
	if(!szDeptID.IsEmpty())
	{
		szWhere.Format(_T(" AND hd_indept='%s' "), szDeptID);
	}
	if(!szStatus.IsEmpty())
	{
		szWhere.AppendFormat(_T("AND hcr_status in(%s) "), szStatus);
	}
	
	szSQL.Format(_T(" SELECT hd_admitdate as admitdate,") \
		_T(" hd_docno as docno,") \
		_T(" trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T(" GET_SYSSEL_DESC('sys_sex', hp_sex) as sex,") \
		_T(" hp_dtladdr||'-'||hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as dtladdr,") \
		_T(" hd_diagnostic as diagnostic, ") \
		_T(" hd_doctor as doctor, ") \
		_T(" (select sd_name from sys_dept where sd_id=hd_indept) as deptid, ") \
		_T(" hcr_recordno as recordno ") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hp_patientno=hd_patientno)") \
		_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
		_T(" WHERE trunc_date(hd_enddate) BETWEEN to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND to_date('%s', 'yyyy/mm/dd hh24:mi:ss') AND hd_suggestion='A' and hd_status ='T' %s") \
		_T(" ORDER BY admitdate, docno,  patientname"), szFromDate, szToDate, szWhere);
	rs.ExecSQL(szSQL);
	
	_fmsg(_T("%s"), szSQL);
	if(!rpt.Init(_T("Reports/HMS/HE_ADMISSIONPATIENTLIST.RPT")) )
		return ;
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),
			CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), m_CompanyInfo.sc_name);
	//Page Header
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	CString szRecordNo;
	int nIdx=0;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();
		nIdx++;
		tmpStr.Format(_T("%d"),nIdx);
		rptDetail->SetValue(_T("0"),tmpStr);
		rs.GetValue(_T("admitdate"), tmpStr);
		rptDetail->SetValue(_T("1"), CDate::Convert(rs.GetValue(_T("admitdate")), yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("recordno"), tmpStr);
		rptDetail->SetValue(_T("recordno"), tmpStr);
		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("dtladdr"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("deptid"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);
		rs.GetValue(_T("doctor"), tmpStr);
		rptDetail->SetValue(_T("9"), GetDoctorName(tmpStr));
		rs.MoveNext();
	}
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);	
	if(bPreview) 
		rpt.PrintPreview();
	else
		rpt.Print();
	
}
void CMainFrame::PrintOperationPatientListReport(CString szFromDate, CString szToDate, CString szDoctor, bool bPreview){
	CMainFrame *pMF = (CMainFrame*) this;
	CRecord rs(&m_db);
	CString szSQL, tmpStr, szFromDateLabel, szToDateLabel, szWhere;
	CString szDate, szSysDate;
	szSysDate = GetSysDate(); 
	CReport rpt; 

	if(!szDoctor.IsEmpty())
	{
		szWhere.Format(_T(" AND ho_doctor='%s' "), szDoctor);
	}

	szSQL.Format(_T(" SELECT trim(hp_surname||' '||hp_midname||' '||hp_firstname) as patientname,") \
		_T(" hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T(" GET_SYSSEL_DESC('sys_sex', hp_sex) as sex,") \
		_T(" hc_cardno as cardno,") \
		_T(" hd_docno as docno, ") \
		_T(" hfl_name as name, ") \
		_T(" (select distinct hfg_name from hms_fee_group where hfg_id=hfl_groupid) as operatype, ") \
		_T(" hfe_cost as cost,") \
		_T(" ho_performdate as performdate, ") \
		_T(" ho_doctor as doctor") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON (hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_operation ON  (hd_docno = ho_docno)") \
		_T(" LEFT JOIN hms_fee_list ON (hfl_feeid=ho_itemid) ") \
		_T(" LEFT JOIN hms_card ON (hd_patientno=hc_patientno and hd_cardno=hc_cardno and hd_cardidx=hc_idx)") \
		_T(" WHERE trunc(ho_orderdate) BETWEEN TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH:MI:SS') AND ho_status <>'O' and ho_deptid='%s' %s ") \
		_T(" ORDER BY patientname"), szFromDate, szToDate, m_szDept, szWhere);

	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(!rpt.Init(_T("Reports/HMS/HMS_OPERATIONPATIENTLIST.RPT")))
	{
		return ;
	}
	//Report Header
	tmpStr = rpt.GetReportHeader()->GetValue(_T("ReportDate"));
	szDate.Format(tmpStr, CDate::Convert(szFromDate, yyyymmdd, ddmmyyyy),CDate::Convert(szToDate, yyyymmdd, ddmmyyyy));
	rpt.GetReportHeader()->SetValue(_T("ReportDate"), szDate);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), m_CompanyInfo.sc_name);
	//Report Detail
	CReportSection* rptDetail = rpt.GetDetail(); 
	int nIndex = 1;
	while(!rs.IsEOF())
	{
		rptDetail = rpt.AddDetail();	
		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);
		rs.GetValue(_T("patientname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);
		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);
		rs.GetValue(_T("name"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		rs.GetValue(_T("operatype"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);		
		rs.GetValue(_T("cost"), tmpStr);
		rptDetail->SetValue(_T("9"), tmpStr);
		rs.GetValue(_T("performdate"), tmpStr);
		rptDetail->SetValue(_T("10"), CDate::Convert(rs.GetValue(_T("performdate")), yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("doctor"), tmpStr);
		rptDetail->SetValue(_T("11"), GetDoctorName(tmpStr));
		rs.MoveNext();
	}
	//Page Footer
	//Report Footer
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")),szSysDate.Right(2),szSysDate.Mid(5,2),szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}

#include "WardDeliveryOrderDialog.h"

void CMainFrame::OnCommandDrugmaterialordersheet()
{
	CWardDeliveryOrderDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnCommandSearchinformationpatient()
{
	// Tim kiem thong tin benh nhan cu
	CHMSTreatmentHistory dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnSize(UINT nType, int cx, int cy)
{
	 CGuiMainFrame::OnSize(nType, cx, cy);
	
}

void CMainFrame::OnMenuReportForms()
{
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnCommandTestprofilesetup()
{
	
}

void CMainFrame::OnCommandTestprofilesetup32826()
{
	// TODO: Add your command handler code here
	CHMSExamTestProfileDialog dlg(this);
	dlg.DoModal();
}

#include "HMSICD10.h"
void CMainFrame::OnCommandSetupdiagnostic()
{
	// TODO: Add your command handler code here
	CHMSICD10Setup dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileHealthexamlist()
{
	CFMHealthExamList dlg(this);
	dlg.DoModal();
}


bool CMainFrame::IsUseLCD()
{
	return m_bUseLCD;
}

void CMainFrame::OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData)
{
	CHMSMainFrame::OnLoadSystemData(lpszName, lpszData);
	CString szName;
	CString szData;
	szName = lpszName;
	szData = lpszData;
	szName.Trim();
	szName.MakeUpper();
	
	if(szName == _T("USELCD"))
	{
		if(szData == _T("Y") || szData == _T("true"))
		{
			m_bUseLCD = true;
		}
		else
		{
			m_bUseLCD = false;
		}
	}
}

#include "HMSClinicZoneDialog.h"

void CMainFrame::OnFileSelectworkingzone()
{
	//ShowMessageBox(_T("Chức năng này đã được khóa lại theo yêu cầu của ban giám đốc!"), MB_ICONERROR);
	//return;

	if(m_UserInfo.su_deptid == _T("C1.1") || m_UserInfo.su_hms_xdept == _T("C1.1") || 
		m_UserInfo.su_deptid == _T("TYC") || m_UserInfo.su_hms_xdept == _T("TYC") || 
		m_UserInfo.su_deptid == _T("AB") || m_UserInfo.su_hms_xdept == _T("AB") )
	{
		CHMSClinicZoneDialog dlg(this);
		dlg.m_szZoneKey = m_szDept;
		dlg.m_szRoomKey.Format(_T("%d"), m_nRoomID);
		if(dlg.DoModal() == IDOK)
		{
			m_szDept = dlg.m_szZoneKey;
			m_nRoomID = str2int(dlg.m_szRoomKey);
			m_UserInfo.su_hms_xroom = dlg.m_szRoomKey;
		}
	}
}

#include "StorageInventoryDialog.h"
void CMainFrame::OnFileInventorymanager()
{
	/*
	if(m_szDept != _T("TYC") && GetCurrentUser().Left(5) != _T("bvtan"))
		return;

	CStorageInventoryDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
	*/
}

#include "HMSPrescriptionLockDialog.h"

BOOL CALLBACK _OnFindTopMost(HWND hwnd, LPARAM lparam)
{
	CWnd* pWnd = CWnd::FromHandle(hwnd);
	if (pWnd == NULL)
	{
		return TRUE;
	}
	
	//if (state == WS_EX_TOPMOST)
	if (pWnd->GetWindow(GW_OWNER) == AfxGetMainWnd())
	{
		if (pWnd != CWnd::GetFocus())
		{
			pWnd->SetFocus();
			return FALSE;
		}
		

	}
	return TRUE;
}

BOOL CMainFrame::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class

	if(pMsg->message == WM_KEYDOWN)
	{
		if (pMsg->wParam == VK_ESCAPE)
		{
			EnumWindows(_OnFindTopMost, (LPARAM)pMsg);
		}
		if(pMsg->wParam == VK_F9)
		{
			if(m_szDept != _T("TYC") || GetCurrentUser().Left(5) != _T("bvtan"))
				return TRUE;
			CHMSPrescriptionLockDialog dlg(this);
			if(dlg.DoModal() == IDOK)
			{
			}

	
		}

	}
	if (pMsg->message == WM_ON_CARD_CONNECTED)
	{
		CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(L"select hsc_patientno as patient_no, hsc_docno as doc_no from hms_smartcard where hsc_cardid = '%s'", pMF->GetCardId());
		rs.ExecSQL(szSQL);
		long nPatientNo = 0, nDocNo = 0;
		rs.GetValue(L"patient_no", nPatientNo);
		rs.GetValue(L"doc_no", nDocNo);
		m_wndPatientDocument.LoadData(nPatientNo, nDocNo, 0, 0);
		SetActivePane(1);
	}
	
	return CHMSMainFrame::PreTranslateMessage(pMsg);
}


void CMainFrame::PrintAppointmentSheet(long nDocumentNo)
{
	CRecord rs(&m_db);
	static CReport rpt;
	CString tmpStr;
	CString szSQL;


	szSQL.Format(_T(" SELECT TO_CHAR(ha_date,'DD/MM/YYYY HH24:MI') as appointment_date_, ") \
		_T("get_appointment_datestr_v2(hd_docno) as appointment_date,") \
		_T("   ha_roomid as roomid, ") \
		_T("   hd_patientno as patientno,") \
		_T("   trim(hp_surname") \
		_T("   ||' '") \
		_T("   ||hp_midname") \
		_T("   ||' '") \
		_T("   ||hp_firstname) AS pname,") \
		_T("  extract(year from  hp_birthdate) as yob, ") \
		_T(" hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address, ") \
		_T("   GET_USERNAME(hd_doctor) as doctor,") \
		_T("   ha_note as note, ") \
		_T(" hd_admitdate as examdate, ") \
		_T(" hd_conclusion  as conclusion, hd_recordno as recordno ") \
		_T(" FROM hms_appointment") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(hd_docno = ha_docno)") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" WHERE hd_docno=%ld "), nDocumentNo);

			rs.ExecSQL(szSQL);
			if(rs.IsEOF())
			{
				ShowMessageBox(_T("No data"));
				return;
			}

	if(!rpt.Init(_T("Reports/HMS/HR_PHIEUHENKHAM.RPT")) )
		return;
	tmpStr = m_CompanyInfo.sc_pname;
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	tmpStr = m_CompanyInfo.sc_name;
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	//Page Header
	
	rs.GetValue(_T("patientno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PatientNo"), tmpStr);
	rs.GetValue(_T("pname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), tmpStr);
	rs.GetValue(_T("yob"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("yearofbirth"), tmpStr);
	rs.GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	rs.GetValue(_T("conclusion"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
	
	rs.GetValue(_T("appointment_date"), tmpStr);

	//if(m_szDept != _T("C1.2"))
	//	rpt.GetReportHeader()->SetValue(_T("NgayHenKham"), tmpStr.Left(10));
	//else
		rpt.GetReportHeader()->SetValue(_T("NgayHenKham"), tmpStr);

	rs.GetValue(_T("roomid"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Room"), GetRoomName(m_szDept, str2int(tmpStr)));

	rs.GetValue(_T("recordno"),tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RecordNo"), tmpStr);

	tmpStr = GetSysDateTime();
	CString printDate;
	printDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(5, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);

	printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), printDate);

	//Report Detail
	//Page Footer
	//Report Footer
	rpt.PrintPreview();
}

void CMainFrame::OnSettingsSetupreportparameter()
{
	// TODO: Add your command handler code here
	CEMParaclinicalListSetup dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileSetuppartnerlist()
{
	// TODO: Add your command handler code here
	CAdBusinessPartnerListDialog dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnSmartCardConnected(CString szCardId)
{
	SetActivePane(1);
	CString szSQL;
	CRecord rs(&m_db);
	int nRoomId;
	nRoomId = m_nRoomID;

	long nPatientNo, nDocumentNo;
	szSQL.Format(_T("SELECT hsc_patientno,hsc_docno FROM hms_smartcard WHERE hsc_cardid='%s' "), szCardId);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hsc_patientno"), nPatientNo);
		rs.GetValue(_T("hsc_docno"), nDocumentNo);
		m_nDocumentNo = nDocumentNo;
		m_nPatientNo = nPatientNo;

		szSQL.Format(_T("select hd_patientno, he_roomid, he_receptidx from hms_doc left join hms_exam on(he_docno = hd_docno) where hd_docno=%ld and he_roomid=%d "),
			nDocumentNo, nRoomId);
		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
		{
			szSQL.Format(_T("select hd_patientno, he_roomid, he_receptidx from hms_doc left join hms_exam on(he_docno = hd_docno) where hd_docno=%ld and rownum=1"),
				nDocumentNo);
			rs.ExecSQL(szSQL);
		}
		if(!rs.IsEOF())
		{
			long nPatientNo;
			
			long nReceptIdx;
			rs.GetValue(_T("hd_patientno"), nPatientNo);
			rs.GetValue(_T("he_roomid"), nRoomId);
			rs.GetValue(_T("he_receptidx"), nReceptIdx);
			m_wndPatientDocument.LoadData(nPatientNo, nDocumentNo, nRoomId, nReceptIdx);
		}
	}
}

void CMainFrame::OnSmartCardDisconnect()
{
	//m_wndPatientDocument.SetMode(VM_NONE);
}


void CMainFrame::OnSettingsSmartCard()
{
	OnSmartCardConfig();

}

#include "HMSFoodOrderDiaglog_EM.h"
void CMainFrame::OnFileDailyfood()
{
	// TODO: Add your command handler code here
	CHMSFoodOrderDiaglog_EM dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnOrderRetailorder()
{
	// TODO: Add your command handler code here
	CHMSRetailDialog dlg;
	dlg.DoModal();
}
void CMainFrame::OnSetUpAppointmentA20()
{
	// TODO: Add your command handler code here

	if(!CheckPermission(_T("20.11")))
	{
		ShowMessageBox(_T("Không có quyền thiết lập lịch hẹn A20 (20.11) "));
		return;
	}

	CHMS_APPOINMENTA20 dlg(this);
	dlg.DoModal();
}

#include "CabinetDialog.h"
void CMainFrame::OnFileBosungHoanTraKhongcobenhnhan()
{
	if(!CheckPermission(_T("20.03")))
	{
		ShowMessageBox(_T("Permission denied"));
		return;
	}
	CCabinetDialog dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnSettingsDoctorinfo()
{
	// TODO: Add your command handler code here
	CHMSDoctorInfo dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnCommandReturndrugorder()
{
	CWardReturnOrderDialog dlg(this);
	
	dlg.DoModal();
}
void CMainFrame::OnSettingsExamschedule()
{
	// TODO: Add your command handler code here
	CHESettingExamSchedule dlg(this);
	dlg.DoModal();
}

#include "HMSOperationScheduleDialog_V2.h"
void CMainFrame::OnFileOperationschedules()
{

	// TODO: Add your command handler code here
	CHMSOperationScheduleDialog_V2 dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
}
void CMainFrame::OnSettingsOrgDeptinfo()
{
	// TODO: Add your command handler code here
	CHMSGetOrgDeptInfor dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnChangeDepartment()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CSYSDepartmentChangeDialog dlg(this);
	dlg.m_szDepartmentKey = m_UserInfo.su_deptid;
	dlg.m_szDeptType = _T("E");
	if(dlg.DoModal()==IDOK)
	{
		m_szDept = dlg.m_szDepartmentNewKey;		
		m_wndExaminationQueue.OnPatientListLoadData();
		m_wndExaminationQueue.OnDeptNameRefresh(m_szDept);		
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
CString CMainFrame::IsA11Patient()
{
	CString szSQL, szIsA11Patient;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT IS_A11_PATIENT(%ld) as IsA11Patient From dual"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	rs.GetValue(_T("IsA11Patient"), szIsA11Patient);
	return szIsA11Patient;
}


void CMainFrame::OnDestroy()
{
    CHMSMainFrame::OnDestroy();
    AfxGetApp()->WriteProfileInt(_T("USER"), _T("LCD"), (int)m_bUseLCD);
    // TODO: Add your message handler code here
}
