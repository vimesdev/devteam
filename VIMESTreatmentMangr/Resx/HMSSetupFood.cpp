#include "HMSSetupFood.h"
#include "MainFrm.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSetupFood* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSSetupFood *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnTypeAddNew();
}*/
static void _OnLeveSelectFnc(CWnd *pWnd){
	 ((CHMSSetupFood*)pWnd)->OnLeveSelect();
}
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupFood *)pWnd)->OnNameCheckValue();
} 
/*static void _OnPriceChangeFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnPriceChange();
} */
/*static void _OnPriceSetfocusFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnPriceSetfocus();} */ 
/*static void _OnPriceKillfocusFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnPriceKillfocus();
} */
static int _OnPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupFood *)pWnd)->OnPriceCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSetupFood *pVw = (CHMSSetupFood *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSSetupFood *pVw = (CHMSSetupFood *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSSetupFood *pVw = (CHMSSetupFood *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSetupFood *pVw = (CHMSSetupFood *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSetupFood *pVw = (CHMSSetupFood *)pWnd;
	pVw->OnCancelSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSetupFood*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSSetupFood*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSetupFood*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSetupFood*)pWnd)->OnListDeleteItem();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSSetupFood *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupFood *)pWnd)->OnIDCheckValue();
} 
static int _OnAddHMSSetupFoodFnc(CWnd *pWnd){
	 return ((CHMSSetupFood*)pWnd)->OnAddHMSSetupFood();
} 
static int _OnEditHMSSetupFoodFnc(CWnd *pWnd){
	 return ((CHMSSetupFood*)pWnd)->OnEditHMSSetupFood();
} 
static int _OnDeleteHMSSetupFoodFnc(CWnd *pWnd){
	 return ((CHMSSetupFood*)pWnd)->OnDeleteHMSSetupFood();
} 
static int _OnSaveHMSSetupFoodFnc(CWnd *pWnd){
	 return ((CHMSSetupFood*)pWnd)->OnSaveHMSSetupFood();
} 
static int _OnCancelHMSSetupFoodFnc(CWnd *pWnd){
	 return ((CHMSSetupFood*)pWnd)->OnCancelHMSSetupFood();
} 
CHMSSetupFood::CHMSSetupFood(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 505;
	m_nDlgHeight = 395;
	SetDefaultValues();
}
CHMSSetupFood::~CHMSSetupFood(){
}
void CHMSSetupFood::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 6, 495, 356);
	m_wndTypeLabel.Create(this, _T("Type"), 14, 235, 94, 260);
	m_wndType.Create(this,99, 235, 491, 260); 
	m_wndLeve.Create(this, _T("Duong di lai > 100 Km"), 287, 265, 491, 290);
	m_wndNameLabel.Create(this, _T("Name"), 14, 295, 94, 320);
	m_wndName.Create(this,99, 295, 491, 320); 
	m_wndPriceLabel.Create(this, _T("Price"), 14, 325, 94, 350);
	m_wndPrice.Create(this,99, 325, 198, 350); 
	m_wndAdd.Create(this, _T("&Add"), 98, 361, 173, 386);
	m_wndEdit.Create(this, _T("&Edit"), 178, 361, 253, 386);
	m_wndDelete.Create(this, _T("&Delete"), 258, 361, 333, 386);
	m_wndSave.Create(this, _T("&Save"), 338, 361, 413, 386);
	m_wndCancel.Create(this, _T("&Cancel"), 418, 361, 493, 386);
	m_wndList.Create(this,11, 30, 491, 230); 
	m_wndIDLabel.Create(this, _T("ID"), 14, 265, 94, 290);
	m_wndID.Create(this,99, 265, 282, 290); 

}
void CHMSSetupFood::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(3);
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndPrice.SetLimitText(786434);
	m_wndPrice.SetCheckValue(true);
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Stt"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("ItemID"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(2, _T("Disc"), CFMT_TEXT, 280);
	m_wndList.InsertColumn(3, _T("Type"), CFMT_TEXT, 60);
	m_hms_feelistTbl.SetTableName(_T("hms_feelist"));
	m_hms_feelistTbl.AddField(_T("hfl_createdby"), dfText, 15); 
	m_hms_feelistTbl.AddField(_T("hfl_createddate"), dfDateTime); 
	m_hms_feelistTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	m_hms_feelistTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	m_hms_feelistTbl.AddField(_T("hfl_feeid"), dfText, 13); 
	m_hms_feelistTbl.AddField(_T("hfl_idx"), dfLong); 
	m_hms_feelistTbl.AddField(_T("hfl_line"), dfLong); 
	m_hms_feelistTbl.AddField(_T("hfl_deptid"), dfText, 35); 
	m_hms_feelistTbl.AddField(_T("hfl_typeid"), dfText, 3); 
	m_hms_feelistTbl.AddField(_T("hfl_groupid"), dfText, 5); 
	m_hms_feelistTbl.AddField(_T("hfl_itype"), dfText, 1); 
	m_hms_feelistTbl.AddField(_T("hfl_subgroup"), dfText, 11); 
	m_hms_feelistTbl.AddField(_T("hfl_subitem"), dfText, 11); 
	m_hms_feelistTbl.AddField(_T("hfl_name"), dfText, 254); 
	m_hms_feelistTbl.AddField(_T("hfl_unit"), dfText, 15); 
	m_hms_feelistTbl.AddField(_T("hfl_index1"), dfText, 15); 
	m_hms_feelistTbl.AddField(_T("hfl_index2"), dfText, 15); 
	m_hms_feelistTbl.AddField(_T("hfl_servprice"), dfDouble); 
	m_hms_feelistTbl.AddField(_T("hfl_reqprice"), dfDouble); 
	m_hms_feelistTbl.AddField(_T("hfl_insprice"), dfDouble); 
	m_hms_feelistTbl.AddField(_T("hfl_polprice"), dfDouble); 
	m_hms_feelistTbl.AddField(_T("hfl_inspaid"), dfText, 1); 
	m_hms_feelistTbl.AddField(_T("hfl_polpaid"), dfText, 1); 
	m_hms_feelistTbl.AddField(_T("hfl_diffpaid"), dfText, 1); 
	m_hms_feelistTbl.AddField(_T("hfl_hitech"), dfText, 1); 
	m_hms_feelistTbl.AddField(_T("hfl_active"), dfText, 1); 

}
void CHMSSetupFood::OnSetWindowEvents(){
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndLeve.SetEvent(WE_CLICK, _OnLeveSelectFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndPrice.SetEvent(WE_CHANGE, _OnPriceChangeFnc);
	//m_wndPrice.SetEvent(WE_SETFOCUS, _OnPriceSetfocusFnc);
	//m_wndPrice.SetEvent(WE_KILLFOCUS, _OnPriceKillfocusFnc);
	m_wndPrice.SetEvent(WE_CHECKVALUE, _OnPriceCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);

}
void CHMSSetupFood::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Check(pDX, m_wndLeve.GetDlgCtrlID(), m_bLeve);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndPrice.GetDlgCtrlID(), m_nPrice);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);

}
void CHMSSetupFood::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hfl_typeid"), m_szTypeKey);
	rs.GetValue(_T("hfl_itype"), m_bLeve);
	rs.GetValue(_T("hfl_name"), m_szName);
	rs.GetValue(_T("hfl_servprice"), m_nPrice);

}
void CHMSSetupFood::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_feelistTbl.SetValue(_T("hfl_createdby"), pMF->GetCurrentUser());
	m_hms_feelistTbl.SetValue(_T("hfl_createddate"), pMF->GetSysDateTime());
	m_hms_feelistTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser());
	m_hms_feelistTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime());
	m_hms_feelistTbl.SetValue(_T("hfl_typeid"), m_szTypeKey);
	m_hms_feelistTbl.SetValue(_T("hfl_itype"), m_bLeve);
	m_hms_feelistTbl.SetValue(_T("hfl_name"), m_szName);
	m_hms_feelistTbl.SetValue(_T("hfl_servprice"), m_nPrice);

}
void CHMSSetupFood::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_bLeve=FALSE;
	m_szName.Empty();
	m_nPrice=0;
	m_szID.Empty();

}
int CHMSSetupFood::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
void CHMSSetupFood::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSetupFood::OnTypeSelendok(){
	 
}
/*void CHMSSetupFood::OnTypeSetfocus(){
	
}*/
/*void CHMSSetupFood::OnTypeKillfocus(){
	
}*/
long CHMSSetupFood::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSSetupFood::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSSetupFood::OnLeveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMSSetupFood::OnNameChange(){
	
} */
/*void CHMSSetupFood::OnNameSetfocus(){
	
} */
/*void CHMSSetupFood::OnNameKillfocus(){
	
} */
int CHMSSetupFood::OnNameCheckValue(){
	return 0;
} 
/*void CHMSSetupFood::OnPriceChange(){
	
} */
/*void CHMSSetupFood::OnPriceSetfocus(){
	
} */
/*void CHMSSetupFood::OnPriceKillfocus(){
	
} */
int CHMSSetupFood::OnPriceCheckValue(){
	return 0;
} 
void CHMSSetupFood::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSetupFood::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSetupFood::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSetupFood::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSetupFood::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSetupFood::OnListDblClick(){
	
} 
void CHMSSetupFood::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSSetupFood::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSSetupFood::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Stt")), 
			rs.GetValue(_T("ItemID")), 
			rs.GetValue(_T("Disc")), 
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSSetupFood::OnIDChange(){
	
} */
/*void CHMSSetupFood::OnIDSetfocus(){
	
} */
/*void CHMSSetupFood::OnIDKillfocus(){
	
} */
int CHMSSetupFood::OnIDCheckValue(){
	return 0;
} 
int CHMSSetupFood::OnAddHMSSetupFood(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSetupFood::OnEditHMSSetupFood(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSetupFood::OnDeleteHMSSetupFood(){
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
 		OnCancelHMSSetupFood(); 
 	}
	return 0;
}
int CHMSSetupFood::OnSaveHMSSetupFood(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_feelistTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_feelistTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSSetupFoodListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSetupFood::OnCancelHMSSetupFood(){
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
int CHMSSetupFood::OnHMSSetupFoodListLoadData(){
	return 0;
}
