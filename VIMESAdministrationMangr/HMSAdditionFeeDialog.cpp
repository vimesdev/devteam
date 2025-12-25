#include "HMSAdditionFeeDialog.h"
#include "MainFrm.h"
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeDialog *)pWnd)->OnDateCheckValue();
} 
static void _OnDescriptionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAdditionFeeDialog* )pWnd)->OnDescriptionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDescriptionSelendokFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnDescriptionSelendok();
}
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnDescriptionKillfocus();
}*/
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnDescriptionKillfocus();
}*/
static long _OnDescriptionLoadDataFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeDialog *)pWnd)->OnDescriptionLoadData();
}
/*static void _OnDescriptionAddNewFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnDescriptionAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSAdditionFeeDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSAdditionFeeDialog *)pWnd)->OnAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAdditionFeeDialog *pVw = (CHMSAdditionFeeDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAdditionFeeDialog *pVw = (CHMSAdditionFeeDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAdditionFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeDialog*)pWnd)->OnAddHMSAdditionFeeDialog();
} 
static int _OnEditHMSAdditionFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeDialog*)pWnd)->OnEditHMSAdditionFeeDialog();
} 
static int _OnDeleteHMSAdditionFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeDialog*)pWnd)->OnDeleteHMSAdditionFeeDialog();
} 
static int _OnSaveHMSAdditionFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeDialog*)pWnd)->OnSaveHMSAdditionFeeDialog();
} 
static int _OnCancelHMSAdditionFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSAdditionFeeDialog*)pWnd)->OnCancelHMSAdditionFeeDialog();
} 
CHMSAdditionFeeDialog::CHMSAdditionFeeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 385;
	m_nDlgHeight = 155;
	SetDefaultValues();
}
CHMSAdditionFeeDialog::~CHMSAdditionFeeDialog(){
}
void CHMSAdditionFeeDialog::OnCreateComponents(){
	m_wndFeeInformation.Create(this, _T("Fee Information"), 5, 5, 380, 120);
	m_wndDateLabel.Create(this, _T("Date"), 10, 30, 110, 55);
	m_wndDate.Create(this,115, 30, 205, 55); 
	m_wndDescription.Create(this,115, 60, 375, 85); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 10, 60, 110, 85);
	m_wndQuantityLabel.Create(this, _T("Quantity"), 10, 90, 110, 115);
	m_wndQuantity.Create(this,115, 90, 205, 115); 
	m_wndAmountLabel.Create(this, _T("Amount"), 210, 90, 280, 115);
	m_wndAmount.Create(this,285, 90, 375, 115); 
	m_wndSave.Create(this, _T("&Save"), 215, 125, 295, 150);
	m_wndClose.Create(this, _T("&Close"), 300, 125, 380, 150);

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 

	if(pMF->GetModuleID() == _T("TM"))
		m_szDeptType = _T("I");		
	else
		m_szDeptType = _T("E");


}
void CHMSAdditionFeeDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
//	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndDescription.SetCheckValue(true);
	m_wndDescription.LimitText(512);
	m_wndQuantity.SetLimitText(10);
	m_wndQuantity.SetCheckValue(true);
	m_wndAmount.SetLimitText(12);
	m_wndAmount.SetCheckValue(true);


	m_wndDescription.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDescription.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);
	m_wndDescription.InsertColumn(2, _T("Serv Price"), CFMT_NUMBER, 80);
	m_wndDescription.InsertColumn(3, _T("Ins Price"), CFMT_NUMBER, 80);
	m_wndDescription.InsertColumn(4, _T("Pol Price"), CFMT_NUMBER, 80);

	m_hms_other_feeTbl.SetTableName(_T("hms_other_fee"));
	m_hms_other_feeTbl.AddField(_T("hfe_createdby"), dfText, 15); 
	m_hms_other_feeTbl.AddField(_T("hfe_createddate"), dfDateTime); 
	m_hms_other_feeTbl.AddField(_T("hfe_updatedby"), dfText, 15); 
	m_hms_other_feeTbl.AddField(_T("hfe_updateddate"), dfDateTime); 
	m_hms_other_feeTbl.AddField(_T("hfe_deptid"), dfText, 7); 
	m_hms_other_feeTbl.AddField(_T("hfe_roomid"), dfLong); 
	m_hms_other_feeTbl.AddField(_T("hfe_patientno"), dfLong); 
	m_hms_other_feeTbl.AddField(_T("hfe_docno"), dfLong); 
	m_hms_other_feeTbl.AddField(_T("hfe_type"), dfText, 1); 
	m_hms_other_feeTbl.AddField(_T("hfe_group"), dfText, 7); 
	m_hms_other_feeTbl.AddField(_T("hfe_entrydate"), dfDate); 
	m_hms_other_feeTbl.AddField(_T("hfe_invoiceno"), dfLong); 
	m_hms_other_feeTbl.AddField(_T("hfe_status"), dfText, 1); 
	m_hms_other_feeTbl.AddField(_T("hfe_itemid"), dfText, 13); 
	m_hms_other_feeTbl.AddField(_T("hfe_quantity"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_unitprice"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_cost"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_discount"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_patdebt"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_patpaid"), dfDouble); 
	m_hms_other_feeTbl.AddField(_T("hfe_depttype"), dfText, 1); 
	m_hms_other_feeTbl.AddField(_T("hfe_fixed"), dfText, 1); 

}
void CHMSAdditionFeeDialog::OnSetWindowEvents(){
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wndDescription.SetEvent(WE_SELENDOK, _OnDescriptionSelendokFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_SELCHANGE, _OnDescriptionSelectChangeFnc);
	m_wndDescription.SetEvent(WE_LOADDATA, _OnDescriptionLoadDataFnc);
	//m_wndDescription.SetEvent(WE_ADDNEW, _OnDescriptionAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_ADD);

}
void CHMSAdditionFeeDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_TextEx(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescriptionKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CHMSAdditionFeeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hfe_entrydate"), m_szDate);
	rs.GetValue(_T("hfe_itemid"), m_szDescriptionKey);
	rs.GetValue(_T("hfe_quantity"), m_nQuantity);

}
void CHMSAdditionFeeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_hms_other_feeTbl.SetValue(_T("hfe_createdby"), pMF->GetCurrentUser());
	m_hms_other_feeTbl.SetValue(_T("hfe_createddate"), pMF->GetSysDateTime());
	m_hms_other_feeTbl.SetValue(_T("hfe_updatedby"), pMF->GetCurrentUser());
	m_hms_other_feeTbl.SetValue(_T("hfe_updateddate"), pMF->GetSysDateTime());
	m_hms_other_feeTbl.SetValue(_T("hfe_deptid"), pMF->m_szDept);
	m_hms_other_feeTbl.SetValue(_T("hfe_patientno"), pMF->m_nPatientNo);
	m_hms_other_feeTbl.SetValue(_T("hfe_docno"), pMF->m_nDocumentNo );
	m_hms_other_feeTbl.SetValue(_T("hfe_roomid"), pMF->m_nRoomID);
	m_hms_other_feeTbl.SetValue(_T("hfe_type"), _T("X"));
	m_hms_other_feeTbl.SetValue(_T("hfe_group"), _T("F0000"));
	m_hms_other_feeTbl.SetValue(_T("hfe_entrydate"), m_szDate);
	m_hms_other_feeTbl.SetValue(_T("hfe_itemid"), m_szDescriptionKey);
	m_hms_other_feeTbl.SetValue(_T("hfe_quantity"), m_nQuantity);
	m_hms_other_feeTbl.SetValue(_T("hfe_status"), _T("O"));
	m_hms_other_feeTbl.SetValue(_T("hfe_depttype"), m_szDeptType);

}
void CHMSAdditionFeeDialog::SetDefaultValues(){

	m_szDate.Empty();
	m_szDescriptionKey.Empty();
	m_nQuantity=1;
	m_nAmount=0;

}
int CHMSAdditionFeeDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			SetDefaultValues(); 
			m_szDate = pMF->GetSysDate();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0,  -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
/*void CHMSAdditionFeeDialog::OnDateChange(){
	
} */
/*void CHMSAdditionFeeDialog::OnDateSetfocus(){
	
} */
/*void CHMSAdditionFeeDialog::OnDateKillfocus(){
	
} */
int CHMSAdditionFeeDialog::OnDateCheckValue(){
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
	UpdateData(true);

	if(!pMF->IsActiveDocument())
		return -1;

	if(CompareDate(m_szDate, pMF->m_szEntryDate) < 0)
		return -1;

	if(CompareDate(m_szDate, pMF->GetSysDate()) > 0)
		return -1;

	return 0;
	
} 
void CHMSAdditionFeeDialog::OnDescriptionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CHMSAdditionFeeDialog::OnDescriptionSelendok(){
	UpdateData(true);
	m_nAmount = str2double(m_wndDescription.GetCurrent(2));
	UpdateData(false);	 
}
/*void CHMSAdditionFeeDialog::OnDescriptionSetfocus(){
	
}*/
/*void CHMSAdditionFeeDialog::OnDescriptionKillfocus(){
	
}*/
long CHMSAdditionFeeDialog::OnDescriptionLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDescription.IsSearchKey() && !m_szDescriptionKey.IsEmpty()){
		szWhere.Format(_T(" and hfl_feeid='%s' "), m_szDescriptionKey);
	};
	m_wndDescription.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name, hfl_servprice as servprice, hfl_insprice as insprice, hfl_polprice as polprice FROM hms_fee_list WHERE hfl_groupid='F0000' ORDER BY hfl_feeid"));

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDescription.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("servprice")), 
			rs.GetValue(_T("insprice")), 
			rs.GetValue(_T("polprice")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSAdditionFeeDialog::OnDescriptionAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */
/*void CHMSAdditionFeeDialog::OnQuantityChange(){
	
} */
/*void CHMSAdditionFeeDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSAdditionFeeDialog::OnQuantityKillfocus(){
	
} */
int CHMSAdditionFeeDialog::OnQuantityCheckValue(){
	UpdateData(true);
	if(m_nQuantity <= 0)
		return -1;

	m_nAmount  = str2double(m_wndDescription.GetCurrent(2))*m_nQuantity;
	UpdateData(false);
	return 0;
} 
/*void CHMSAdditionFeeDialog::OnAmountChange(){
	
} */
/*void CHMSAdditionFeeDialog::OnAmountSetfocus(){
	
} */
/*void CHMSAdditionFeeDialog::OnAmountKillfocus(){
	
} */
int CHMSAdditionFeeDialog::OnAmountCheckValue(){
	return 0;
} 
void CHMSAdditionFeeDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
		OnSaveHMSAdditionFeeDialog();
} 
void CHMSAdditionFeeDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
		CGuiDialog::OnCancel();
} 
int CHMSAdditionFeeDialog::OnAddHMSAdditionFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSAdditionFeeDialog::OnEditHMSAdditionFeeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAdditionFeeDialog::OnDeleteHMSAdditionFeeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM hms_other_fee WHERE hfe_docno=%ld and hfe_deptid='%s' and hfe_group='F0000' and hfe_feeid='%s' and hfe_status <>'P' "), pMF->m_nDocumentNo, pMF->m_szDept, m_szDescriptionKey ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 	}
	return 0;
}
int CHMSAdditionFeeDialog::OnSaveHMSAdditionFeeDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
	double nAmount = m_nAmount;
 	if(!IsValidateData()) 
 		return -1; 
	
	m_nAmount = nAmount;
	m_hms_other_feeTbl.SetValue(_T("hfe_unitprice"), m_nAmount/m_nQuantity);
	m_hms_other_feeTbl.SetValue(_T("hfe_cost"), m_nAmount);
	m_hms_other_feeTbl.SetValue(_T("hfe_patdebt"), m_nAmount);
	
	if(m_nQuantity*str2double(m_wndDescription.GetCurrent(2))==m_nAmount)
		m_hms_other_feeTbl.SetValue(_T("hfe_fixed"), _T("N"));	
	else
		m_hms_other_feeTbl.SetValue(_T("hfe_fixed"), _T("Y"));

	

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_other_feeTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		szSQL = m_hms_other_feeTbl.GetUpdateSQL(_T("hfe_createdby,hfe_createddate,hfe_deptid, hfe_roomid, hfe_patientno,hfe_docno,hfe_status")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		SetMode(VM_VIEW); 
		CGuiDialog::OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSAdditionFeeDialog::OnCancelHMSAdditionFeeDialog(){
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
int CHMSAdditionFeeDialog::OnHMSAdditionFeeDialogListLoadData(){
	return 0;
}
