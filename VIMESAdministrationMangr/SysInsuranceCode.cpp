#include "SysInsuranceCode.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSysInsuranceCode*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSysInsuranceCode*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSysInsuranceCode*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnListDeleteItem();
} 
static int _OnListUpdateGroupFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnListUpdateGroup();
} 
/*static void _OnTypeChangeFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnTypeChange();
} */
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnTypeSetfocus();} */ 
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnTypeKillfocus();
} */
static int _OnTypeCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceCode *)pWnd)->OnTypeCheckValue();
} 
static void _OnGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSysInsuranceCode* )pWnd)->OnGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGroupSelendokFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnGroupSelendok();
}
/*static void _OnGroupSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnGroupKillfocus();
}*/
/*static void _OnGroupKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnGroupKillfocus();
}*/
static long _OnGroupLoadDataFnc(CWnd *pWnd){
	return ((CSysInsuranceCode *)pWnd)->OnGroupLoadData();
}
/*static void _OnGroupAddNewFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnGroupAddNew();
}*/
/*static void _OnCardFormatChangeFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnCardFormatChange();
} */
/*static void _OnCardFormatSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnCardFormatSetfocus();} */ 
/*static void _OnCardFormatKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnCardFormatKillfocus();
} */
static int _OnCardFormatCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceCode *)pWnd)->OnCardFormatCheckValue();
} 
/*static void _OnConditionalChangeFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnConditionalChange();
} */
/*static void _OnConditionalSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnConditionalSetfocus();} */ 
/*static void _OnConditionalKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnConditionalKillfocus();
} */
static int _OnConditionalCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceCode *)pWnd)->OnConditionalCheckValue();
} 
/*static void _OnCodeChangeFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnCodeChange();
} */
/*static void _OnCodeSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnCodeSetfocus();} */ 
/*static void _OnCodeKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnCodeKillfocus();
} */
static int _OnCodeCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceCode *)pWnd)->OnCodeCheckValue();
} 
/*static void _OnDiscountChangeFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnDiscountChange();
} */
/*static void _OnDiscountSetfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnDiscountSetfocus();} */ 
/*static void _OnDiscountKillfocusFnc(CWnd *pWnd){
	((CSysInsuranceCode *)pWnd)->OnDiscountKillfocus();
} */
static int _OnDiscountCheckValueFnc(CWnd *pWnd){
	return ((CSysInsuranceCode *)pWnd)->OnDiscountCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CSysInsuranceCode *pVw = (CSysInsuranceCode *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CSysInsuranceCode *pVw = (CSysInsuranceCode *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CSysInsuranceCode *pVw = (CSysInsuranceCode *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSysInsuranceCode *pVw = (CSysInsuranceCode *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CSysInsuranceCode *pVw = (CSysInsuranceCode *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CSysInsuranceCode *pVw = (CSysInsuranceCode *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSInsuranceCodeDialogFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnAddHMSInsuranceCodeDialog();
} 
static int _OnEditHMSInsuranceCodeDialogFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnEditHMSInsuranceCodeDialog();
} 
static int _OnDeleteHMSInsuranceCodeDialogFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnDeleteHMSInsuranceCodeDialog();
} 
static int _OnSaveHMSInsuranceCodeDialogFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnSaveHMSInsuranceCodeDialog();
} 
static int _OnCancelHMSInsuranceCodeDialogFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnCancelHMSInsuranceCodeDialog();
} 
CSysInsuranceCode::CSysInsuranceCode(){

	m_nDlgWidth = 810;
	m_nDlgHeight = 620;
	SetDefaultValues();
	m_szType.Empty();
	m_szGroupKey.Empty();
	m_szCardFormat.Empty();
	m_szConditional.Empty();
}
CSysInsuranceCode::~CSysInsuranceCode(){
}
void CSysInsuranceCode::OnCreateComponents(){
	m_wndList.Create(this,10, 30, 800, 495); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 500, 110, 525);
	m_wndType.Create(this,115, 500, 195, 525); 
	m_wndCardFormatLabel.Create(this, _T("Card Format"), 10, 530, 110, 555);
	m_wndCardFormat.Create(this,115, 530, 400, 555); 
	m_wndConditionalLabel.Create(this, _T("Conditional"), 405, 530, 505, 555);
	m_wndConditional.Create(this,510, 530, 795, 555); 
	m_wndInsuranceConditionalGroupBox.Create(this, _T("Insurance Conditional"), 5, 5, 805, 590);
	m_wndGroupLabel.Create(this, _T("Group"), 10, 560, 110, 585);
	m_wndGroup.Create(this,115, 560, 505, 585); 
	m_wndCodeLabel.Create(this, _T("Code"), 510, 560, 540, 585);
	m_wndCode.Create(this,545, 560, 625, 585); 
	m_wndDiscount.Create(this,700, 560, 795, 585); 
	m_wndDiscountLabel.Create(this, _T("Discount"), 630, 560, 695, 586);
	m_wndAdd.Create(this, _T("&Add"), 410, 595, 485, 620);
	m_wndEdit.Create(this, _T("&Edit"), 490, 595, 565, 620);
	m_wndDelete.Create(this, _T("&Delete"), 570, 595, 645, 620);
	m_wndSave.Create(this, _T("&Save"), 650, 595, 725, 620);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 595, 805, 620);

	m_wndTypeDesc.Create(this, _T(""), 0, 0, 0, 0);
	m_wndTypeDesc.ShowWindow(SW_HIDE);
	m_wndTypeDesc.EnableWindow(FALSE);
	m_wndClose.Create(this, _T(""), 0, 0, 0, 0);
	m_wndClose.ShowWindow(SW_HIDE);
	m_wndClose.EnableWindow(FALSE);

}
void CSysInsuranceCode::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndType.SetLimitText(1);
	m_wndType.SetCheckValue(true);
	m_wndType.ModifyStyle(0, ES_UPPERCASE);
	m_wndGroup.SetCheckValue(true);
	m_wndCardFormat.SetLimitText(35);
	m_wndCardFormat.SetCheckValue(true);
	m_wndConditional.SetLimitText(35);
	m_wndConditional.SetCheckValue(true);
	m_wndCode.SetLimitText(3);
	m_wndCode.SetCheckValue(true);
	m_wndDiscount.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Type"), CFMT_TEXT, 30);
	m_wndList.InsertColumn(1, _T("Group"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(2, _T("Format"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(3, _T("Conditional"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(4, _T("Code"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(5, _T("Discount"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(6, _T("Active"), CFMT_TEXT, 50);


	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndGroup.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);

	m_hms_object_lineTbl.SetTableName(_T("hms_object_line"));
	m_hms_object_lineTbl.AddField(_T("hol_type"), dfText, 1); 
	m_hms_object_lineTbl.AddField(_T("hol_group"), dfLong); 
	m_hms_object_lineTbl.AddField(_T("hol_cardfmt"), dfText, 35); 
	m_hms_object_lineTbl.AddField(_T("hol_condition"), dfText, 35); 
	m_hms_object_lineTbl.AddField(_T("hol_code"), dfText, 3); 
	m_hms_object_lineTbl.AddField(_T("hol_discount"), dfLong); 

}
void CSysInsuranceCode::OnSetWindowEvents(){
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(2, _T("Update Group"), _OnListUpdateGroupFnc);
	//m_wndType.SetEvent(WE_CHANGE, _OnTypeChangeFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_CHECKVALUE, _OnTypeCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
	//m_wndCardFormat.SetEvent(WE_CHANGE, _OnCardFormatChangeFnc);
	//m_wndCardFormat.SetEvent(WE_SETFOCUS, _OnCardFormatSetfocusFnc);
	//m_wndCardFormat.SetEvent(WE_KILLFOCUS, _OnCardFormatKillfocusFnc);
	m_wndCardFormat.SetEvent(WE_CHECKVALUE, _OnCardFormatCheckValueFnc);
	//m_wndConditional.SetEvent(WE_CHANGE, _OnConditionalChangeFnc);
	//m_wndConditional.SetEvent(WE_SETFOCUS, _OnConditionalSetfocusFnc);
	//m_wndConditional.SetEvent(WE_KILLFOCUS, _OnConditionalKillfocusFnc);
	m_wndConditional.SetEvent(WE_CHECKVALUE, _OnConditionalCheckValueFnc);
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	//m_wndDiscount.SetEvent(WE_CHANGE, _OnDiscountChangeFnc);
	//m_wndDiscount.SetEvent(WE_SETFOCUS, _OnDiscountSetfocusFnc);
	//m_wndDiscount.SetEvent(WE_KILLFOCUS, _OnDiscountKillfocusFnc);
	m_wndDiscount.SetEvent(WE_CHECKVALUE, _OnDiscountCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	OnListLoadData();
	SetMode(VM_NONE);
}
void CSysInsuranceCode::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndType.GetDlgCtrlID(), m_szType);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndCardFormat.GetDlgCtrlID(), m_szCardFormat);
	DDX_Text(pDX, m_wndConditional.GetDlgCtrlID(), m_szConditional);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);

}
void CSysInsuranceCode::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_object_line WHERE hol_type='%s' AND hol_cardfmt='%s' AND hol_code='%s' "), m_szType, m_szCardFormat, m_szCode);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hol_type"), m_szType);
		rs.GetValue(_T("hol_group"), m_szGroupKey);
		rs.GetValue(_T("hol_cardfmt"), m_szCardFormat);
		rs.GetValue(_T("hol_condition"), m_szConditional);
		rs.GetValue(_T("hol_code"), m_szCode);
		rs.GetValue(_T("hol_discount"), m_nDiscount);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CSysInsuranceCode::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_hms_object_lineTbl.SetValue(_T("hol_type"), m_szType);
	m_hms_object_lineTbl.SetValue(_T("hol_group"), m_szGroupKey);
	m_hms_object_lineTbl.SetValue(_T("hol_cardfmt"), m_szCardFormat);
	m_hms_object_lineTbl.SetValue(_T("hol_condition"), m_szConditional);
	m_hms_object_lineTbl.SetValue(_T("hol_code"), m_szCode);
	m_hms_object_lineTbl.SetValue(_T("hol_discount"), m_nDiscount);

}
void CSysInsuranceCode::SetDefaultValues(){
	m_szCode.Empty();
	m_nDiscount=0;

}
int CSysInsuranceCode::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4,  5, -1); 
 			SetDefaultValues(); 
			if(m_szType.IsEmpty())
				m_wndType.SetFocus();
			else
				m_wndCode.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4,  5, -1); 
			m_wndDiscount.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4,  -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 5, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CSysInsuranceCode::OnListDblClick(){
} 
void CSysInsuranceCode::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	m_szType = m_wndList.GetItemText(nSel, 0);
	m_szCardFormat = m_wndList.GetItemText(nSel, 2);
	m_szCode = m_wndList.GetItemText(nSel, 4);
	GetDataToScreen();
} 
int CSysInsuranceCode::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSInsuranceCodeDialog();
	 return 0;
} 
int CSysInsuranceCode::OnListUpdateGroup(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	AfxGetApp()->BeginWaitCursor();
	CString szSQL;
	szSQL.Format(_T("SELECt hms_card_updategroup() "));
	pMF->ExecSQL(szSQL);
	AfxGetApp()->EndWaitCursor();
	 return 0;
} 
long CSysInsuranceCode::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_object_line ORDER BY hol_type,hol_cardfmt, hol_code"));
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hol_type")), 
			rs.GetValue(_T("hol_group")), 
			rs.GetValue(_T("hol_cardfmt")), 
			rs.GetValue(_T("hol_condition")), 
			rs.GetValue(_T("hol_code")), 
			rs.GetValue(_T("hol_discount")),
			rs.GetValue(_T("hol_active")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
/*void CSysInsuranceCode::OnTypeChange(){
	
} */
/*void CSysInsuranceCode::OnTypeSetfocus(){
	
} */
/*void CSysInsuranceCode::OnTypeKillfocus(){
	
} */
int CSysInsuranceCode::OnTypeCheckValue(){
	UpdateData(true);
	if(m_szType != _T("I") && m_szType != _T("C") && m_szType != _T("D"))
		return -1;
	if(m_szType == _T("I"))
	{
		m_wndGroup.EnableWindow(false);
	}
	return 0;
} 
void CSysInsuranceCode::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} 
void CSysInsuranceCode::OnGroupSelendok(){
	 
}
/*void CSysInsuranceCode::OnGroupSetfocus(){
	
}*/
/*void CSysInsuranceCode::OnGroupKillfocus(){
	
}*/
long CSysInsuranceCode::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && ToInt(m_szGroupKey) > 0){
		szWhere.Format(_T("WHERE hig_idx=%d "), ToInt(m_szGroupKey));
	};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_insurance_group %s ORDER BY hig_idx "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
			rs.GetValue(_T("hig_idx")), 
			rs.GetValue(_T("hig_name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CSysInsuranceCode::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
} */
/*void CSysInsuranceCode::OnCardFormatChange(){
	
} */
/*void CSysInsuranceCode::OnCardFormatSetfocus(){
	
} */
/*void CSysInsuranceCode::OnCardFormatKillfocus(){
	
} */
int CSysInsuranceCode::OnCardFormatCheckValue(){
	UpdateData(true);
	m_wndConditional.SetLimitText(m_szCardFormat.GetLength());
	return 0;
} 
/*void CSysInsuranceCode::OnConditionalChange(){
	
} */
/*void CSysInsuranceCode::OnConditionalSetfocus(){
	
} */
/*void CSysInsuranceCode::OnConditionalKillfocus(){
	
} */
int CSysInsuranceCode::OnConditionalCheckValue(){
	UpdateData(true);
	if(m_szCardFormat.GetLength() != m_szConditional.GetLength())
		return -1;
	return 0;
} 
/*void CSysInsuranceCode::OnCodeChange(){
	
} */
/*void CSysInsuranceCode::OnCodeSetfocus(){
	
} */
/*void CSysInsuranceCode::OnCodeKillfocus(){
	
} */
int CSysInsuranceCode::OnCodeCheckValue(){
	return 0;
} 
/*void CSysInsuranceCode::OnDiscountChange(){
	
} */
/*void CSysInsuranceCode::OnDiscountSetfocus(){
	
} */
/*void CSysInsuranceCode::OnDiscountKillfocus(){
	
} */
int CSysInsuranceCode::OnDiscountCheckValue(){
	UpdateData(true);
	if(m_nDiscount < 0 || m_nDiscount > 100)
		return -1;
	return 0;
} 
void CSysInsuranceCode::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSInsuranceCodeDialog();
	
} 
void CSysInsuranceCode::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditHMSInsuranceCodeDialog();
	
} 
void CSysInsuranceCode::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSInsuranceCodeDialog();
	
} 
void CSysInsuranceCode::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveHMSInsuranceCodeDialog();
} 
void CSysInsuranceCode::OnCancelSelect(){
	OnCancelHMSInsuranceCodeDialog();
}
void CSysInsuranceCode::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
} 
int CSysInsuranceCode::OnAddHMSInsuranceCodeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CSysInsuranceCode::OnEditHMSInsuranceCodeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysInsuranceCode::OnDeleteHMSInsuranceCodeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	m_szType = m_wndList.GetItemText(nSel, 0);
	m_szCardFormat = m_wndList.GetItemText(nSel, 2);
	m_szCode = m_wndList.GetItemText(nSel, 4);
 	szSQL.Format(_T("DELETE FROM  hms_object_line WHERE  hol_type='%s' AND hol_cardfmt='%s' AND hol_code='%s'"), m_szType, m_szCardFormat, m_szCode ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_ADD);  		
		m_wndList.DeleteItem(nSel);
 	}
	return 0;
}
int CSysInsuranceCode::OnSaveHMSInsuranceCodeDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_object_lineTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hol_type='%s' AND hol_cardfmt='%s' AND hol_code='%s'"), m_szType, m_szCardFormat, m_szCode); 
 		szSQL = m_hms_object_lineTbl.GetUpdateSQL(_T("hol_type,hol_cardfmt,hol_code")); 
 		szSQL += szWhere; 
 	} 
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if(GetMode() == VM_ADD)
		{
			OnListLoadData();
			SetMode(VM_ADD); 
		}
		else
		{
			m_wndList.Invalidate();
 			SetMode(VM_VIEW); 
		}
 	} 
 	return ret; 
}
int CSysInsuranceCode::OnCancelHMSInsuranceCodeDialog(){
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
int CSysInsuranceCode::OnHMSInsuranceCodeDialogListLoadData(){
	return 0;
}

void CSysInsuranceCode::Refresh(){
	OnListLoadData();
}