#include "PatientProfile.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CPatientProfile *)pWnd)->OnPatientNameCheckValue();
} 
/*static void _OnDocnoChangeFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnDocnoChange();
} */
/*static void _OnDocnoSetfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnDocnoSetfocus();} */ 
/*static void _OnDocnoKillfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnDocnoKillfocus();
} */
static int _OnDocnoCheckValueFnc(CWnd *pWnd){
	return ((CPatientProfile *)pWnd)->OnDocnoCheckValue();
} 
/*static void _OnAdmitdateChangeFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnAdmitdateChange();
} */
/*static void _OnAdmitdateSetfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnAdmitdateSetfocus();} */ 
/*static void _OnAdmitdateKillfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnAdmitdateKillfocus();
} */
static int _OnAdmitdateCheckValueFnc(CWnd *pWnd){
	return ((CPatientProfile *)pWnd)->OnAdmitdateCheckValue();
} 
/*static void _OnDischargeDateChangeFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnDischargeDateChange();
} */
/*static void _OnDischargeDateSetfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnDischargeDateSetfocus();} */ 
/*static void _OnDischargeDateKillfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnDischargeDateKillfocus();
} */
static int _OnDischargeDateCheckValueFnc(CWnd *pWnd){
	return ((CPatientProfile *)pWnd)->OnDischargeDateCheckValue();
} 
/*static void _OnDianosticChangeFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnDianosticChange();
} */
/*static void _OnDianosticSetfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnDianosticSetfocus();} */ 
/*static void _OnDianosticKillfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnDianosticKillfocus();
} */
static int _OnDianosticCheckValueFnc(CWnd *pWnd){
	return ((CPatientProfile *)pWnd)->OnDianosticCheckValue();
} 
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CPatientProfile *)pWnd)->OnCardNoCheckValue();
} 
/*static void _OnTotalAmountChangeFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnTotalAmountChange();
} */
/*static void _OnTotalAmountSetfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnTotalAmountSetfocus();} */ 
/*static void _OnTotalAmountKillfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnTotalAmountKillfocus();
} */
static int _OnTotalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPatientProfile *)pWnd)->OnTotalAmountCheckValue();
} 
/*static void _OnInspaidChangeFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnInspaidChange();
} */
/*static void _OnInspaidSetfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnInspaidSetfocus();} */ 
/*static void _OnInspaidKillfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnInspaidKillfocus();
} */
static int _OnInspaidCheckValueFnc(CWnd *pWnd){
	return ((CPatientProfile *)pWnd)->OnInspaidCheckValue();
} 
/*static void _OnPatpaidChangeFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnPatpaidChange();
} */
/*static void _OnPatpaidSetfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnPatpaidSetfocus();} */ 
/*static void _OnPatpaidKillfocusFnc(CWnd *pWnd){
	((CPatientProfile *)pWnd)->OnPatpaidKillfocus();
} */
static int _OnPatpaidCheckValueFnc(CWnd *pWnd){
	return ((CPatientProfile *)pWnd)->OnPatpaidCheckValue();
} 
static int _OnAddPatientProfileFnc(CWnd *pWnd){
	 return ((CPatientProfile*)pWnd)->OnAddPatientProfile();
} 
static int _OnEditPatientProfileFnc(CWnd *pWnd){
	 return ((CPatientProfile*)pWnd)->OnEditPatientProfile();
} 
static int _OnDeletePatientProfileFnc(CWnd *pWnd){
	 return ((CPatientProfile*)pWnd)->OnDeletePatientProfile();
} 
static int _OnSavePatientProfileFnc(CWnd *pWnd){
	 return ((CPatientProfile*)pWnd)->OnSavePatientProfile();
} 
static int _OnCancelPatientProfileFnc(CWnd *pWnd){
	 return ((CPatientProfile*)pWnd)->OnCancelPatientProfile();
}
static int _OnUpdateDrugOrderDay(CWnd *pWnd)
{
	return ((CPatientProfile*)pWnd)->OnUpdateDrugOrderDay();
}

CPatientProfile::CPatientProfile(){

	m_nDlgWidth = 515;
	m_nDlgHeight = 460;
	SetDefaultValues();
}
CPatientProfile::~CPatientProfile(){
}
void CPatientProfile::OnCreateComponents(){
	m_wndcontrol_18.Create(this, _T(""), 5, 5, 1000, 435);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 43, 71, 137, 96);
	m_wndPatientName.Create(this,142, 71, 478, 96); 
	m_wndDocnoLabel.Create(this, _T("Docno"), 43, 100, 137, 125);
	m_wndDocno.Create(this,142, 100, 478, 125); 
	m_wndAdmitdateLabel.Create(this, _T("Admitdate"), 43, 130, 137, 155);
	m_wndAdmitdate.Create(this,142, 130, 478, 155); 
	m_wndDischargeDateLabel.Create(this, _T("Discharge Date"), 43, 160, 137, 185);
	m_wndDischargeDate.Create(this,142, 160, 478, 185); 
	m_wndDianosticLabel.Create(this, _T("Dianostic"), 43, 190, 137, 215);
	m_wndDianostic.Create(this,142, 190, 478, 215); 
	m_wndCardNoLabel.Create(this, _T("CardNo"), 43, 220, 137, 245);
	m_wndCardNo.Create(this,142, 220, 478, 245); 
	m_wndTotalAmountLabel.Create(this, _T("TotalAmount"), 43, 250, 137, 275);
	m_wndTotalAmount.Create(this,142, 250, 478, 275); 
	m_wndInspaidLabel.Create(this, _T("Inspaid"), 43, 280, 137, 305);
	m_wndInspaid.Create(this,142, 280, 478, 305); 
	m_wndPatpaidLabel.Create(this, _T("Patpaid"), 43, 310, 137, 335);
	m_wndPatpaid.Create(this,142, 310, 478, 335); 

}
void CPatientProfile::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndPatientName.SetLimitText(512);
	m_wndPatientName.SetCheckValue(true);
	m_wndDocno.SetLimitText(35);
	m_wndDocno.SetCheckValue(true);
//	m_wndAdmitdate.SetMax(CDate(pMF->GetSysDate()));
	m_wndAdmitdate.SetCheckValue(true);
//	m_wndDischargeDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDischargeDate.SetCheckValue(true);
	m_wndDianostic.SetLimitText(35);
	m_wndDianostic.SetCheckValue(true);
	m_wndCardNo.SetLimitText(35);
	m_wndCardNo.SetCheckValue(true);
	m_wndTotalAmount.SetLimitText(35);
	m_wndTotalAmount.SetCheckValue(true);
	m_wndInspaid.SetLimitText(35);
	m_wndInspaid.SetCheckValue(true);
	m_wndPatpaid.SetLimitText(35);
	m_wndPatpaid.SetCheckValue(true);
	

}
void CPatientProfile::OnSetWindowEvents(){
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	//m_wndDocno.SetEvent(WE_CHANGE, _OnDocnoChangeFnc);
	//m_wndDocno.SetEvent(WE_SETFOCUS, _OnDocnoSetfocusFnc);
	//m_wndDocno.SetEvent(WE_KILLFOCUS, _OnDocnoKillfocusFnc);
	m_wndDocno.SetEvent(WE_CHECKVALUE, _OnDocnoCheckValueFnc);
	//m_wndAdmitdate.SetEvent(WE_CHANGE, _OnAdmitdateChangeFnc);
	//m_wndAdmitdate.SetEvent(WE_SETFOCUS, _OnAdmitdateSetfocusFnc);
	//m_wndAdmitdate.SetEvent(WE_KILLFOCUS, _OnAdmitdateKillfocusFnc);
	m_wndAdmitdate.SetEvent(WE_CHECKVALUE, _OnAdmitdateCheckValueFnc);
	//m_wndDischargeDate.SetEvent(WE_CHANGE, _OnDischargeDateChangeFnc);
	//m_wndDischargeDate.SetEvent(WE_SETFOCUS, _OnDischargeDateSetfocusFnc);
	//m_wndDischargeDate.SetEvent(WE_KILLFOCUS, _OnDischargeDateKillfocusFnc);
	m_wndDischargeDate.SetEvent(WE_CHECKVALUE, _OnDischargeDateCheckValueFnc);
	//m_wndDianostic.SetEvent(WE_CHANGE, _OnDianosticChangeFnc);
	//m_wndDianostic.SetEvent(WE_SETFOCUS, _OnDianosticSetfocusFnc);
	//m_wndDianostic.SetEvent(WE_KILLFOCUS, _OnDianosticKillfocusFnc);
	m_wndDianostic.SetEvent(WE_CHECKVALUE, _OnDianosticCheckValueFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	//m_wndTotalAmount.SetEvent(WE_CHANGE, _OnTotalAmountChangeFnc);
	//m_wndTotalAmount.SetEvent(WE_SETFOCUS, _OnTotalAmountSetfocusFnc);
	//m_wndTotalAmount.SetEvent(WE_KILLFOCUS, _OnTotalAmountKillfocusFnc);
	m_wndTotalAmount.SetEvent(WE_CHECKVALUE, _OnTotalAmountCheckValueFnc);
	//m_wndInspaid.SetEvent(WE_CHANGE, _OnInspaidChangeFnc);
	//m_wndInspaid.SetEvent(WE_SETFOCUS, _OnInspaidSetfocusFnc);
	//m_wndInspaid.SetEvent(WE_KILLFOCUS, _OnInspaidKillfocusFnc);
	m_wndInspaid.SetEvent(WE_CHECKVALUE, _OnInspaidCheckValueFnc);
	//m_wndPatpaid.SetEvent(WE_CHANGE, _OnPatpaidChangeFnc);
	//m_wndPatpaid.SetEvent(WE_SETFOCUS, _OnPatpaidSetfocusFnc);
	//m_wndPatpaid.SetEvent(WE_KILLFOCUS, _OnPatpaidKillfocusFnc);
	m_wndPatpaid.SetEvent(WE_CHECKVALUE, _OnPatpaidCheckValueFnc);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddPatientProfileFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPatientProfileFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePatientProfileFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePatientProfileFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPatientProfileFnc, 0, 'T', VK_CONTROL);*/
	AddEvent(1,_T(" Cập nhật ngày y lệnh, gói vtyt>2 ký tự"),_OnUpdateDrugOrderDay,0,0,0);
	//SetMode(VM_NONE);
	GetDataToScreen();

}
void CPatientProfile::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_Text(pDX, m_wndDocno.GetDlgCtrlID(), m_szDocno);
	DDX_TextEx(pDX, m_wndAdmitdate.GetDlgCtrlID(), m_szAdmitdate);
	DDX_TextEx(pDX, m_wndDischargeDate.GetDlgCtrlID(), m_szDischargeDate);
	DDX_Text(pDX, m_wndDianostic.GetDlgCtrlID(), m_szDianostic);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_Text(pDX, m_wndTotalAmount.GetDlgCtrlID(), m_szTotalAmount);
	DDX_Text(pDX, m_wndInspaid.GetDlgCtrlID(), m_szInspaid);
	DDX_Text(pDX, m_wndPatpaid.GetDlgCtrlID(), m_szPatpaid);

}
void CPatientProfile::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	szSQL.Format(_T("select * from bh_thongtinchitiet_tonghop  where ma_lk='%s'"),m_szMa_lk);

	_fmsg(_T("%s"),szSQL);

	rs.ExecSQL(szSQL);
	m_szDocno=rs.GetValue(_T("ma_bn"));
	m_szPatientName=rs.GetValue(_T("ho_ten"));
	//m_szAdmitdate= pMF->GetSysDateTime();
	//tmpStr=rs.GetValue(_T("ngaygio_vao"));
	//_msg(_T("%s"),tmpStr);
	m_szAdmitdate=rs.GetValue(_T("ngaygio_vao")); 
	m_szDischargeDate= rs.GetValue(_T("ngaygio_ra"));
	m_szDianostic= rs.GetValue(_T("ma_benh")) + _T("( ") +  rs.GetValue(_T("ten_benh")) + _T(" )");
	m_szCardNo= rs.GetValue(_T("ma_the")) + rs.GetValue(_T("ma_dkbd")) ;
	m_szTotalAmount= rs.GetValue(_T("t_tongchi"));
	m_szInspaid= rs.GetValue(_T("t_bhtt"));
	m_szPatpaid= rs.GetValue(_T("t_bntt"));
	//_msg(_T("%s"),m_szAdmitdate);
	UpdateData(false);

}
void CPatientProfile::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPatientProfile::SetDefaultValues(){



	m_wndPatientName.EnableWindow(false);
	m_wndDocno.EnableWindow(false);
	m_wndAdmitdate.EnableWindow(false);
	m_wndDischargeDate.EnableWindow(false);
	m_wndDianostic.EnableWindow(false);
	m_wndCardNo.EnableWindow(false);
	m_wndTotalAmount.EnableWindow(false);
	m_wndInspaid.EnableWindow(false);
	m_wndPatpaid.EnableWindow(false);
		m_szPatientName.Empty();
	m_szDocno.Empty();
	m_szAdmitdate.Empty();
	m_szDischargeDate.Empty();
	m_szDianostic.Empty();
	m_szCardNo.Empty();
	m_szTotalAmount.Empty();
	m_szInspaid.Empty();
	m_szPatpaid.Empty();

}
int CPatientProfile::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CPatientProfile::OnPatientNameChange(){
	
} */
/*void CPatientProfile::OnPatientNameSetfocus(){
	
} */
/*void CPatientProfile::OnPatientNameKillfocus(){
	
} */
int CPatientProfile::OnPatientNameCheckValue(){
	return 0;
} 
/*void CPatientProfile::OnDocnoChange(){
	
} */
/*void CPatientProfile::OnDocnoSetfocus(){
	
} */
/*void CPatientProfile::OnDocnoKillfocus(){
	
} */
int CPatientProfile::OnDocnoCheckValue(){
	return 0;
} 
/*void CPatientProfile::OnAdmitdateChange(){
	
} */
/*void CPatientProfile::OnAdmitdateSetfocus(){
	
} */
/*void CPatientProfile::OnAdmitdateKillfocus(){
	
} */
int CPatientProfile::OnAdmitdateCheckValue(){
	return 0;
} 
/*void CPatientProfile::OnDischargeDateChange(){
	
} */
/*void CPatientProfile::OnDischargeDateSetfocus(){
	
} */
/*void CPatientProfile::OnDischargeDateKillfocus(){
	
} */
int CPatientProfile::OnDischargeDateCheckValue(){
	return 0;
} 
/*void CPatientProfile::OnDianosticChange(){
	
} */
/*void CPatientProfile::OnDianosticSetfocus(){
	
} */
/*void CPatientProfile::OnDianosticKillfocus(){
	
} */
int CPatientProfile::OnDianosticCheckValue(){
	return 0;
} 
/*void CPatientProfile::OnCardNoChange(){
	
} */
/*void CPatientProfile::OnCardNoSetfocus(){
	
} */
/*void CPatientProfile::OnCardNoKillfocus(){
	
} */
int CPatientProfile::OnCardNoCheckValue(){
	return 0;
} 
/*void CPatientProfile::OnTotalAmountChange(){
	
} */
/*void CPatientProfile::OnTotalAmountSetfocus(){
	
} */
/*void CPatientProfile::OnTotalAmountKillfocus(){
	
} */
int CPatientProfile::OnTotalAmountCheckValue(){
	return 0;
} 
/*void CPatientProfile::OnInspaidChange(){
	
} */
/*void CPatientProfile::OnInspaidSetfocus(){
	
} */
/*void CPatientProfile::OnInspaidKillfocus(){
	
} */
int CPatientProfile::OnInspaidCheckValue(){
	return 0;
} 
/*void CPatientProfile::OnPatpaidChange(){
	
} */
/*void CPatientProfile::OnPatpaidSetfocus(){
	
} */
/*void CPatientProfile::OnPatpaidKillfocus(){
	
} */
int CPatientProfile::OnPatpaidCheckValue(){
	return 0;
} 
int CPatientProfile::OnAddPatientProfile(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CPatientProfile::OnEditPatientProfile(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CPatientProfile::OnDeletePatientProfile(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelPatientProfile(); 
 	}
	return 0;
}
int CPatientProfile::OnSavePatientProfile(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_tblTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnPatientProfileListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CPatientProfile::OnCancelPatientProfile(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	return 0;
} 
int CPatientProfile::OnPatientProfileListLoadData(){
	return 0;
}
int CPatientProfile::OnUpdateDrugOrderDay()
{	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (pMF->GetCurrentUser() != _T("vhbinhkhqs"))
	{
		return -1;
	}

	CString szSQL,tmpStr, szMaLK;
	int nCount=0;	
	int ques = ShowMessageBox(_T("Chức năng này cập nhật lại ngày y lệnh trong dữ liệu bảo hiểm và gói VTYT > 2 ký tự "),MB_YESNO);
		if(ques == IDNO)
			return -1;
		else
		{
			szSQL.Format(_T("BH_FIX_NGAYYLENH('%s') "),m_szMa_lk);
			nCount = str2int(pMF->ExecDML(szSQL));
		}
	
	if (nCount <=0)
		ShowMessageBox(_T("Không có bản ghi nào được cập nhật "));
	else
		ShowMessageBox(_T("Job Done! "));

	return 0;
}
