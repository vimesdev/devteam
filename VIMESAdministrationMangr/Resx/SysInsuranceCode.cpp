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
static int _OnAddSysInsuranceCodeFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnAddSysInsuranceCode();
} 
static int _OnEditSysInsuranceCodeFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnEditSysInsuranceCode();
} 
static int _OnDeleteSysInsuranceCodeFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnDeleteSysInsuranceCode();
} 
static int _OnSaveSysInsuranceCodeFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnSaveSysInsuranceCode();
} 
static int _OnCancelSysInsuranceCodeFnc(CWnd *pWnd){
	 return ((CSysInsuranceCode*)pWnd)->OnCancelSysInsuranceCode();
} 
CSysInsuranceCode::CSysInsuranceCode(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 630;
	SetDefaultValues();
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

}
void CSysInsuranceCode::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetLimitText(1024);
	m_wndType.SetCheckValue(true);
	m_wndCardFormat.SetLimitText(1024);
	m_wndCardFormat.SetCheckValue(true);
	m_wndConditional.SetLimitText(1024);
	m_wndConditional.SetCheckValue(true);
	m_wndGroup.SetCheckValue(true);
	m_wndGroup.LimitText(1024);
	m_wndCode.SetLimitText(1024);
	m_wndCode.SetCheckValue(true);
	m_wndDiscount.SetLimitText(1024);
	m_wndDiscount.SetCheckValue(true);





}
void CSysInsuranceCode::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndType.SetEvent(WE_CHANGE, _OnTypeChangeFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_CHECKVALUE, _OnTypeCheckValueFnc);
	//m_wndCardFormat.SetEvent(WE_CHANGE, _OnCardFormatChangeFnc);
	//m_wndCardFormat.SetEvent(WE_SETFOCUS, _OnCardFormatSetfocusFnc);
	//m_wndCardFormat.SetEvent(WE_KILLFOCUS, _OnCardFormatKillfocusFnc);
	m_wndCardFormat.SetEvent(WE_CHECKVALUE, _OnCardFormatCheckValueFnc);
	//m_wndConditional.SetEvent(WE_CHANGE, _OnConditionalChangeFnc);
	//m_wndConditional.SetEvent(WE_SETFOCUS, _OnConditionalSetfocusFnc);
	//m_wndConditional.SetEvent(WE_KILLFOCUS, _OnConditionalKillfocusFnc);
	m_wndConditional.SetEvent(WE_CHECKVALUE, _OnConditionalCheckValueFnc);
	m_wndGroup.SetEvent(WE_SELENDOK, _OnGroupSelendokFnc);
	//m_wndGroup.SetEvent(WE_SETFOCUS, _OnGroupSetfocusFnc);
	//m_wndGroup.SetEvent(WE_KILLFOCUS, _OnGroupKillfocusFnc);
	m_wndGroup.SetEvent(WE_SELCHANGE, _OnGroupSelectChangeFnc);
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	//m_wndGroup.SetEvent(WE_ADDNEW, _OnGroupAddNewFnc);
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddSysInsuranceCodeFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditSysInsuranceCodeFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteSysInsuranceCodeFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveSysInsuranceCodeFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelSysInsuranceCodeFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CSysInsuranceCode::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndType.GetDlgCtrlID(), m_szType);
	DDX_Text(pDX, m_wndCardFormat.GetDlgCtrlID(), m_szCardFormat);
	DDX_Text(pDX, m_wndConditional.GetDlgCtrlID(), m_szConditional);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey);
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_Text(pDX, m_wndDiscount.GetDlgCtrlID(), m_nDiscount);

}
void CSysInsuranceCode::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CSysInsuranceCode::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSysInsuranceCode::SetDefaultValues(){

	m_szType.Empty();
	m_szCardFormat.Empty();
	m_szConditional.Empty();
	m_szGroupKey.Empty();
	m_szCode.Empty();
	m_nDiscount=0;

}
int CSysInsuranceCode::SetMode(int nMode){
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
void CSysInsuranceCode::OnListDblClick(){
	
} 
void CSysInsuranceCode::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysInsuranceCode::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CSysInsuranceCode::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CSysInsuranceCode::OnTypeChange(){
	
} */
/*void CSysInsuranceCode::OnTypeSetfocus(){
	
} */
/*void CSysInsuranceCode::OnTypeKillfocus(){
	
} */
int CSysInsuranceCode::OnTypeCheckValue(){
	return 0;
} 
/*void CSysInsuranceCode::OnCardFormatChange(){
	
} */
/*void CSysInsuranceCode::OnCardFormatSetfocus(){
	
} */
/*void CSysInsuranceCode::OnCardFormatKillfocus(){
	
} */
int CSysInsuranceCode::OnCardFormatCheckValue(){
	return 0;
} 
/*void CSysInsuranceCode::OnConditionalChange(){
	
} */
/*void CSysInsuranceCode::OnConditionalSetfocus(){
	
} */
/*void CSysInsuranceCode::OnConditionalKillfocus(){
	
} */
int CSysInsuranceCode::OnConditionalCheckValue(){
	return 0;
} 
void CSysInsuranceCode::OnGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysInsuranceCode::OnGroupSelendok(){
	 
}
/*void CSysInsuranceCode::OnGroupSetfocus(){
	
}*/
/*void CSysInsuranceCode::OnGroupKillfocus(){
	
}*/
long CSysInsuranceCode::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndGroup.IsSearchKey() && !m_szGroupKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szGroupKey
};
	m_wndGroup.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGroup.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSysInsuranceCode::OnGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
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
	return 0;
} 
void CSysInsuranceCode::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysInsuranceCode::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysInsuranceCode::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysInsuranceCode::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSysInsuranceCode::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CSysInsuranceCode::OnAddSysInsuranceCode(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSysInsuranceCode::OnEditSysInsuranceCode(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSysInsuranceCode::OnDeleteSysInsuranceCode(){
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
 		OnCancelSysInsuranceCode();
 	}
	return 0;
}
int CSysInsuranceCode::OnSaveSysInsuranceCode(){
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
 		//OnSysInsuranceCodeListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSysInsuranceCode::OnCancelSysInsuranceCode(){
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
int CSysInsuranceCode::OnSysInsuranceCodeListLoadData(){
	return 0;
}
