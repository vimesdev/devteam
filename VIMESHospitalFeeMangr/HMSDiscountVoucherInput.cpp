#include "HMSDiscountVoucherInput.h"
#include "MainFrm.h"
static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDiscountVoucherInput* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CHMSDiscountVoucherInput *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherInput *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherInput *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherInput *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CHMSDiscountVoucherInput *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSDiscountVoucherInput *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherInput *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSDiscountVoucherInput *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiscountVoucherInput *)pWnd)->OnAmountCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDiscountVoucherInput *pVw = (CHMSDiscountVoucherInput *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddHMSDiscountVoucherInputFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherInput*)pWnd)->OnAddHMSDiscountVoucherInput();
} 
static int _OnEditHMSDiscountVoucherInputFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherInput*)pWnd)->OnEditHMSDiscountVoucherInput();
} 
static int _OnDeleteHMSDiscountVoucherInputFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherInput*)pWnd)->OnDeleteHMSDiscountVoucherInput();
} 
static int _OnSaveHMSDiscountVoucherInputFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherInput*)pWnd)->OnSaveHMSDiscountVoucherInput();
} 
static int _OnCancelHMSDiscountVoucherInputFnc(CWnd *pWnd){
	 return ((CHMSDiscountVoucherInput*)pWnd)->OnCancelHMSDiscountVoucherInput();
} 
CHMSDiscountVoucherInput::CHMSDiscountVoucherInput(CWnd *pParent):
	CGuiPopup(pParent){

	m_nDlgWidth = 690;
	m_nDlgHeight = 70;
	SetDefaultValues();
}
CHMSDiscountVoucherInput::~CHMSDiscountVoucherInput(){
}
void CHMSDiscountVoucherInput::OnCreateComponents(){
	m_wndInput.Create(this, _T("Input"), 5, 5, 790, 60);
	m_wndItemNameLabel.Create(this, _T("Item Name"), 10, 30, 90, 55);
	m_wndItemName.Create(this,95, 30, 555, 55); 
	m_wndAmountLabel.Create(this, _T("Amount"), 560, 30, 640, 55);
	m_wndAmount.Create(this,645, 30, 725, 55); 
	m_wndSave.Create(this, _T("&Save"), 730, 30, 780, 55);
}
void CHMSDiscountVoucherInput::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(35);
	m_wndAmount.SetLimitText(16);
	m_wndAmount.SetCheckValue(true);


	m_wndItemName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndItemName.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndItemName.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndItemName.InsertColumn(3, _T("Qty"), CFMT_TEXT, 70);
	m_wndItemName.InsertColumn(4, _T("Amount"), CFMT_TEXT, 80);

}
void CHMSDiscountVoucherInput::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetEvent(WE_SELENDOK, _OnItemNameSelendokFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	//m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_SELCHANGE, _OnItemNameSelectChangeFnc);
	m_wndItemName.SetEvent(WE_LOADDATA, _OnItemNameLoadDataFnc);
	//m_wndItemName.SetEvent(WE_ADDNEW, _OnItemNameAddNewFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	SetMode(VM_ADD);

}
void CHMSDiscountVoucherInput::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);

}
void CHMSDiscountVoucherInput::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDiscountVoucherInput::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDiscountVoucherInput::SetDefaultValues(){

	m_szItemNameKey.Empty();
	m_nAmount=0;

}
int CHMSDiscountVoucherInput::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiPopup::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
			m_wndItemName.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, -1);
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
void CHMSDiscountVoucherInput::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiscountVoucherInput::OnItemNameSelendok(){
	 
}
/*void CHMSDiscountVoucherInput::OnItemNameSetfocus(){
	
}*/
/*void CHMSDiscountVoucherInput::OnItemNameKillfocus(){
	
}*/
long CHMSDiscountVoucherInput::OnItemNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndItemName.IsSearchKey() && !m_szItemNameKey.IsEmpty()){
	 szWhere.Format(_T(" and hfe_itemid='%s' "), m_szItemNameKey);
	};
	m_wndItemName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT hfe_type     AS ftype,") \
_T("   hfe_desc          AS fdesc,") \
_T("   hfe_unit          AS funit,") \
_T("   hfe_itemid        AS fitemid,") \
_T("   SUM(hfe_quantity) AS fqty,") \
_T("   SUM(hfe_patpaid+hfe_patdebt)  AS famount") \
_T(" FROM hms_fee") \
_T(" WHERE hfe_docno = %ld %s ") \
_T(" GROUP BY hfe_type,") \
_T("   hfe_desc,") \
_T("   hfe_unit,") \
_T("   hfe_itemid") \
_T(" ORDER BY hfe_type,") \
_T("   hfe_desc"),
m_nDocumentNo, szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItemName.AddItems(
			rs.GetValue(_T("fitemid")), 
			rs.GetValue(_T("fdesc")), 
			rs.GetValue(_T("funit")), 
			rs.GetValue(_T("fqty")), 
			rs.GetValue(_T("famount")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSDiscountVoucherInput::OnItemNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDiscountVoucherInput::OnAmountChange(){
	
} */
/*void CHMSDiscountVoucherInput::OnAmountSetfocus(){
	
} */
/*void CHMSDiscountVoucherInput::OnAmountKillfocus(){
	
} */
int CHMSDiscountVoucherInput::OnAmountCheckValue(){
	return 0;
} 
void CHMSDiscountVoucherInput::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiscountVoucherInput::OnAddHMSDiscountVoucherInput(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDiscountVoucherInput::OnEditHMSDiscountVoucherInput(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiscountVoucherInput::OnDeleteHMSDiscountVoucherInput(){
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
 		OnCancelHMSDiscountVoucherInput();
 	}
	return 0;
}
int CHMSDiscountVoucherInput::OnSaveHMSDiscountVoucherInput(){
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
 		//OnHMSDiscountVoucherInputListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSDiscountVoucherInput::OnCancelHMSDiscountVoucherInput(){
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
int CHMSDiscountVoucherInput::OnHMSDiscountVoucherInputListLoadData(){
	return 0;
}
