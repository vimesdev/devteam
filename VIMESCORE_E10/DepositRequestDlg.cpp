#include "DepositRequestDlg.h"
#include "HMSMainFrame.h"

/*static void _OnDepositAmountChangeFnc(CWnd *pWnd){
	((CDepositRequestDlg *)pWnd)->OnDepositAmountChange();
} */
/*static void _OnDepositAmountSetfocusFnc(CWnd *pWnd){
	((CDepositRequestDlg *)pWnd)->OnDepositAmountSetfocus();} */ 
/*static void _OnDepositAmountKillfocusFnc(CWnd *pWnd){
	((CDepositRequestDlg *)pWnd)->OnDepositAmountKillfocus();
} */
static int _OnDepositAmountCheckValueFnc(CWnd *pWnd){
	return ((CDepositRequestDlg *)pWnd)->OnDepositAmountCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CDepositRequestDlg *pVw = (CDepositRequestDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddDepositRequestDlgFnc(CWnd *pWnd){
	 return ((CDepositRequestDlg*)pWnd)->OnAddDepositRequestDlg();
} 
static int _OnEditDepositRequestDlgFnc(CWnd *pWnd){
	 return ((CDepositRequestDlg*)pWnd)->OnEditDepositRequestDlg();
} 
static int _OnDeleteDepositRequestDlgFnc(CWnd *pWnd){
	 return ((CDepositRequestDlg*)pWnd)->OnDeleteDepositRequestDlg();
} 
static int _OnSaveDepositRequestDlgFnc(CWnd *pWnd){
	 return ((CDepositRequestDlg*)pWnd)->OnSaveDepositRequestDlg();
} 
static int _OnCancelDepositRequestDlgFnc(CWnd *pWnd){
	 return ((CDepositRequestDlg*)pWnd)->OnCancelDepositRequestDlg();
} 
CDepositRequestDlg::CDepositRequestDlg(CWnd *pParent):
	CGuiDialog(pParent){
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CDepositRequestDlg::~CDepositRequestDlg(){
}
void CDepositRequestDlg::OnCreateComponents(){
	m_wndDepositRequest.Create(this, _T("Deposit Request"), 5, 5, 210, 60);
	m_wndDepositAmountLabel.Create(this, _T("Deposit Amount"), 10, 30, 105, 55);
	m_wndDepositAmount.Create(this,110, 30, 205, 55); 
	m_wndPrint.Create(this, _T("&Print"), 130, 65, 210, 90);

}
void CDepositRequestDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDepositAmount.SetLimitText(16);
	m_wndDepositAmount.SetCheckValue(true);
	m_wndDepositAmount.SetCurrencyFormat(true);

}
void CDepositRequestDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndDepositAmount.SetEvent(WE_CHANGE, _OnDepositAmountChangeFnc);
	//m_wndDepositAmount.SetEvent(WE_SETFOCUS, _OnDepositAmountSetfocusFnc);
	//m_wndDepositAmount.SetEvent(WE_KILLFOCUS, _OnDepositAmountKillfocusFnc);
	m_wndDepositAmount.SetEvent(WE_CHECKVALUE, _OnDepositAmountCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);

}
void CDepositRequestDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDepositAmount.GetDlgCtrlID(), m_nDepositAmount);

}
void CDepositRequestDlg::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CDepositRequestDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CDepositRequestDlg::SetDefaultValues(){

	m_nDepositAmount=0;

}
int CDepositRequestDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
/*void CDepositRequestDlg::OnDepositAmountChange(){
	
} */
/*void CDepositRequestDlg::OnDepositAmountSetfocus(){
	
} */
/*void CDepositRequestDlg::OnDepositAmountKillfocus(){
	
} */
int CDepositRequestDlg::OnDepositAmountCheckValue(){
	return 0;
} 
void CDepositRequestDlg::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CReport rpt;
	CString tmpStr, szSQL, szDate = pMF->GetSysDate();
	CRecord rs(&pMF->m_db);
	tmpStr = _T("Reports\\HMS\\TM_GIAYYEUCAUTAMUNG.RPT");
	if (!rpt.Init(tmpStr))
		return;
	szSQL.Format(_T(" SELECT    Get_patientname(hd_docno)       patient_name, ") \
				_T("           hms_getagebydoc(hd_docno) age, ") \
				_T("		   get_syssel_desc('sys_sex', hp_sex) sex,") \
				_T("           Get_objectname(hd_object)       object_name, ") \
				_T("		   hd_cardno card_no,") \
				_T("           Hms_getaddress(hp_provid, hp_distid, hp_villid) ") \
				_T("           ||' ' ") \
				_T("           || hp_dtladdr                   addr ") \
				_T(" FROM      hms_doc ") \
				_T(" LEFT JOIN hms_patient ON ( hp_patientno = hd_patientno ) ") \
				_T(" WHERE hd_docno = %ld"), m_nDocNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rpt.GetReportHeader()->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
		rpt.GetReportHeader()->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
		tmpStr.Format(_T("%ld"), m_nDocNo);
		rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Department"), pMF->GetDepartmentName(m_szDeptID));
		rpt.GetReportHeader()->SetValue(_T("PatientName"), rs.GetValue(_T("patient_name")));
		rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
		rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
		rpt.GetReportHeader()->SetValue(_T("Address"), rs.GetValue(_T("addr")));
		rpt.GetReportHeader()->SetValue(_T("Object"), rs.GetValue(_T("object_name")));
		rpt.GetReportHeader()->SetValue(_T("CardNo"), rs.GetValue(_T("card_no")));
		rpt.GetReportHeader()->SetValue(_T("TotalAmount"), double2str(m_nDepositAmount));
		MoneyToString(double2str(m_nDepositAmount), tmpStr);
		tmpStr += _T(" \x111\x1ED3ng.");
		rpt.GetReportHeader()->SetValue(_T("SumInWord"), tmpStr);
		tmpStr.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), szDate.Mid(8,2), szDate.Mid(5, 2), szDate.Left(4));
		rpt.GetReportFooter()->SetValue(_T("PrintDate"), tmpStr);
	}
	rpt.PrintPreview();
	
} 
int CDepositRequestDlg::OnAddDepositRequestDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CDepositRequestDlg::OnEditDepositRequestDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CDepositRequestDlg::OnDeleteDepositRequestDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelDepositRequestDlg();
 	}
	return 0;
}
int CDepositRequestDlg::OnSaveDepositRequestDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnDepositRequestDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CDepositRequestDlg::OnCancelDepositRequestDlg(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CDepositRequestDlg::OnDepositRequestDlgListLoadData(){
	return 0;
}
