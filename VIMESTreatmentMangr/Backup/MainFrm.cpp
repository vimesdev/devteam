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
#include "HMSDailyDrugOrderDialog.h"
#include "HMSMedicalCabinet.h"
#include "SYSPasswordChangeDialog.h"
#include "PMSReturnOrder.h"
#include "PMSDailyDrugOrder.h"
#include "HMSSetupFood.h"
#include "HMSTreatmentHistory.h"
#include "ReportDocument.h"

// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
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
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	//SetLocalLang(0);
	m_szModuleName = _T("TREATMENT MANAGEMENT MODULE");
	m_szModuleID = _T("TM");
	m_szSize = CSize(1000, 720);
	m_szVersion = _T("5.0");
}

CMainFrame::~CMainFrame()
{

}



int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	m_wndPatientDocument.Create(GetPane());
//	m_wndMasterDocument.Create(GetPane());
	m_wndTreatmentQueue.Create(GetPane());
//	m_wndDailyOrder.Create(GetPane());
	m_wndDailyDrugOrder.Create(GetPane());
	m_wndMedicalCabinetDrug.Create(GetPane());

	AddView(_T("Patient List"), &m_wndTreatmentQueue);
	AddView(_T("Clinical Record"), &m_wndPatientDocument);
	AddView(_T("Drug && Material Order"), &m_wndDailyDrugOrder);
	AddView(_T("Medical Cabinet Drug"), &m_wndMedicalCabinetDrug);
	
//	AddView(_T("Clinical Record"), &m_wndMasterDocument);	
	
	
	SetActivePane(0);
//	ModifyStyle(WS_MAXIMIZEBOX|WS_MAXIMIZE|WS_SIZEBOX, 0);
//	SetActivePane(0);
//	ShowWindow(SW_MAXIMIZE);

	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	szStatus.AppendFormat(_T(" - Host:%s"), GetHost(), GetDatabase());
	SetStatusText(szStatus, 1);
	return 0;
}


void CMainFrame::OnInitializes(){
	CHMSMainFrame::OnInitializes();
//Neu nhom nguoi su dung la bac si
	
	if(GetUserGroup() == _T("D")){
		m_szDoctor = GetCurrentUser();
	}
	else
		m_szDoctor.Empty();	

	//Lat thong so config
	CString szSQL;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT * FROM hms_config "));
	rs.ExecSQL(szSQL);
	m_szDefaultStockID.Empty();
	if(!rs.IsEOF()){
		rs.GetValue(_T("pms_idefaultstockid"), m_szDefaultStockID);
		rs.GetValue(_T("ht_foodtravel"), m_szFoodTravel);
		rs.GetValue(_T("ht_increase_treatdate"), m_szIncTreatDateFlag);
		rs.GetValue(_T("mt_createnewtreantment"), m_szCreatenewtreantment);
		rs.GetValue(_T("hms_dailyser_deptid"), m_szDailyserdeptid);
	}
	szSQL.Format(_T("SELECT su_roomid FROM sys_user WHERE lower(su_userid) = lower('%s') "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	m_szWard.Empty();
	if(!rs.IsEOF())
	{
		CString szFloor, szText;
		TranslateString(_T("VIMES - HMSTreatment"), szText);

		rs.GetValue(_T("su_roomid"), m_szWard);
		szFloor = GetSelectionString(_T("hms_floor"), m_szWard);
		szText.AppendFormat(_T("     [%s]"), szFloor);
		SetWindowText(szText);

	}
}

bool CMainFrame::IsPaymentFee(CString szType, long nIdx){
	CString szSQL, tmpStr;
	CRecord rs(&m_db);
	if(szType == _T("P")){
		szSQL.Format(_T("SELECT pcmso_payment FROM pcms_order WHERE pcmso_docno=%ld AND pcmso_orderid=%ld"), m_nDocumentNo,  nIdx);
	}
	else if(szType == _T("O")){
		szSQL.Format(_T("SELECT ho_payment FROM hms_operation WHERE ho_docno=%ld AND ho_idx=%ld"), m_nDocumentNo, nIdx);
	}
	else if(szType == _T("D")){
		szSQL.Format(_T("SELECT hpo_payment FROM hms_pharmacyorder WHERE hpo_docno=%ld AND hpo_orderid=%ld"), m_nDocumentNo, nIdx);
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
	
	CString szStatus = GetDocumentStatus();
	if(szStatus==_T("I"))
		return true;
	return false;
}

bool CMainFrame::IsPaidFees(){
	CString szSQL;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT htrf_invoicefee FROM hms_treatment_record WHERE htr_docno=%ld and htr_idx=%d"), m_nDocumentNo, m_nRefIndex);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return false;
	long invoiceno;
	rs.GetValue(_T("htrf_invoicefee"), invoiceno);
	if(invoiceno > 0) 
		return true;	
	return false;
}

void CMainFrame::OnFileSetupprescriptionlist()
{
	CHMSPrescriptionGroupItemsDialog dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnCommandMedicalcabinet()
{
	CHMSMedicalCabinet	dlg(this);
	dlg.DoModal();
}


int CMainFrame::CreateFees(CString szType){
	CString szSQL;
	szSQL.Format(_T("SELECT hms_fee_create('%s', %ld) "), GetCurrentUser(), m_nDocumentNo);
	return ExecSQL(szSQL);
}

void CMainFrame::OnCommandDailydrugorder()
{
//	CHMSDailyDrugOrderDialog dlg(this);
//	dlg.DoModal();
}



void CMainFrame::OnFileChangepassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnCommandReturndrugorder()
{
	CPMSReturnOrder dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnDrugandmaterialordersheet()
{
	CPMSDailyDrugOrderDialog	dlg(this);
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
