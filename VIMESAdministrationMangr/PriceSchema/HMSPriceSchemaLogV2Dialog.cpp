#include "HMSPriceSchemaLogV2Dialog.h"
#include "../MainFrm.h"
static void _OnCb1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPriceSchemaLogV2Dialog* )pWnd)->OnCb1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCb1SelendokFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnCb1Selendok();
}
/*static void _OnCb1SetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnCb1Killfocus();
}*/
/*static void _OnCb1KillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnCb1Killfocus();
}*/
static long _OnCb1LoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnCb1LoadData();
}
/*static void _OnCb1AddNewFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnCb1AddNew();
}*/
static void _OnCb2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSPriceSchemaLogV2Dialog* )pWnd)->OnCb2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCb2SelendokFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnCb2Selendok();
}
/*static void _OnCb2SetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnCb2Killfocus();
}*/
/*static void _OnCb2KillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnCb2Killfocus();
}*/
static long _OnCb2LoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnCb2LoadData();
}
/*static void _OnCb2AddNewFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnCb2AddNew();
}*/
static long _OnList1LoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnList1LoadData();
} 
static void _OnList1DblClickFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnList1DblClick();
} 
static void _OnList1SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnList1SelectChange(nOldItem, nNewItem);
} 
static int _OnList1DeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnList1DeleteItem();
} 
static long _OnList2LoadDataFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnList2LoadData();
} 
static void _OnList2DblClickFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnList2DblClick();
} 
static void _OnList2SelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnList2SelectChange(nOldItem, nNewItem);
} 
static int _OnList2DeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnList2DeleteItem();
} 
/*static void _OnTextChangeFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnTextChange();
} */
/*static void _OnTextSetfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnTextSetfocus();} */ 
/*static void _OnTextKillfocusFnc(CWnd *pWnd){
	((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnTextKillfocus();
} */
static int _OnTextCheckValueFnc(CWnd *pWnd){
	return ((CHMSPriceSchemaLogV2Dialog *)pWnd)->OnTextCheckValue();
} 
static int _OnAddHMSPriceSchemaLogV2DialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnAddHMSPriceSchemaLogV2Dialog();
} 
static int _OnEditHMSPriceSchemaLogV2DialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnEditHMSPriceSchemaLogV2Dialog();
} 
static int _OnDeleteHMSPriceSchemaLogV2DialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnDeleteHMSPriceSchemaLogV2Dialog();
} 
static int _OnSaveHMSPriceSchemaLogV2DialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnSaveHMSPriceSchemaLogV2Dialog();
} 
static int _OnCancelHMSPriceSchemaLogV2DialogFnc(CWnd *pWnd){
	 return ((CHMSPriceSchemaLogV2Dialog*)pWnd)->OnCancelHMSPriceSchemaLogV2Dialog();
} 
CHMSPriceSchemaLogV2Dialog::CHMSPriceSchemaLogV2Dialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 785;
	m_nDlgHeight = 450;
	SetDefaultValues();
}
CHMSPriceSchemaLogV2Dialog::~CHMSPriceSchemaLogV2Dialog(){
}
void CHMSPriceSchemaLogV2Dialog::OnCreateComponents(){
	m_wndGroup.Create(this, _T("Group"), 5, 5, 780, 445);
	m_wndCb1Label.Create(this, _T("Cb1"), 10, 80, 90, 105);
	m_wndCb1.Create(this,95, 80, 390, 105); 
	m_wndCb2Label.Create(this, _T("Cb2"), 395, 80, 475, 105);
	m_wndCb2.Create(this,480, 80, 775, 105); 
	m_wndList1.Create(this,10, 110, 390, 440); 
	m_wndList2.Create(this,395, 110, 775, 440); 
	m_wndText.Create(this,10, 30, 775, 75); 

}
void CHMSPriceSchemaLogV2Dialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCb1.SetCheckValue(true);
	m_wndCb1.LimitText(35);
	m_wndCb2.SetCheckValue(true);
	m_wndCb2.LimitText(35);
	m_wndText.SetLimitText(35);
	m_wndText.SetCheckValue(true);


	m_wndCb1.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCb1.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCb2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCb2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList1.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndList1.InsertColumn(1, _T("Name"), CFMT_TEXT, 140);
	m_wndList1.InsertColumn(2, _T("Qty"), CFMT_NUMBER, 40);
	m_wndList1.InsertColumn(3, _T("Price"), CFMT_NUMBER, 80);
	m_wndList1.InsertColumn(4, _T("Amount"), CFMT_NUMBER, 80);


	m_wndList2.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndList2.InsertColumn(1, _T("Name"), CFMT_TEXT, 140);
	m_wndList2.InsertColumn(2, _T("Qty"), CFMT_NUMBER, 60);
	m_wndList2.InsertColumn(3, _T("Price"), CFMT_NUMBER, 60);
	m_wndList2.InsertColumn(4, _T("Amount"), CFMT_NUMBER, 80);

}
void CHMSPriceSchemaLogV2Dialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndCb1.SetEvent(WE_SELENDOK, _OnCb1SelendokFnc);
	//m_wndCb1.SetEvent(WE_SETFOCUS, _OnCb1SetfocusFnc);
	//m_wndCb1.SetEvent(WE_KILLFOCUS, _OnCb1KillfocusFnc);
	m_wndCb1.SetEvent(WE_SELCHANGE, _OnCb1SelectChangeFnc);
	m_wndCb1.SetEvent(WE_LOADDATA, _OnCb1LoadDataFnc);
	//m_wndCb1.SetEvent(WE_ADDNEW, _OnCb1AddNewFnc);
	m_wndCb2.SetEvent(WE_SELENDOK, _OnCb2SelendokFnc);
	//m_wndCb2.SetEvent(WE_SETFOCUS, _OnCb2SetfocusFnc);
	//m_wndCb2.SetEvent(WE_KILLFOCUS, _OnCb2KillfocusFnc);
	m_wndCb2.SetEvent(WE_SELCHANGE, _OnCb2SelectChangeFnc);
	m_wndCb2.SetEvent(WE_LOADDATA, _OnCb2LoadDataFnc);
	//m_wndCb2.SetEvent(WE_ADDNEW, _OnCb2AddNewFnc);
	m_wndList1.SetEvent(WE_SELCHANGE, _OnList1SelectChangeFnc);
	m_wndList1.SetEvent(WE_LOADDATA, _OnList1LoadDataFnc);
	m_wndList1.SetEvent(WE_DBLCLICK, _OnList1DblClickFnc);
	m_wndList1.AddEvent(1, _T("Delete"), _OnList1DeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList2.SetEvent(WE_SELCHANGE, _OnList2SelectChangeFnc);
	m_wndList2.SetEvent(WE_LOADDATA, _OnList2LoadDataFnc);
	m_wndList2.SetEvent(WE_DBLCLICK, _OnList2DblClickFnc);
	m_wndList2.AddEvent(1, _T("Delete"), _OnList2DeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndText.SetEvent(WE_CHANGE, _OnTextChangeFnc);
	//m_wndText.SetEvent(WE_SETFOCUS, _OnTextSetfocusFnc);
	//m_wndText.SetEvent(WE_KILLFOCUS, _OnTextKillfocusFnc);
	m_wndText.SetEvent(WE_CHECKVALUE, _OnTextCheckValueFnc);
	SetMode(VM_NONE);

}
void CHMSPriceSchemaLogV2Dialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCb1.GetDlgCtrlID(), m_szCb1Key);
	DDX_TextEx(pDX, m_wndCb2.GetDlgCtrlID(), m_szCb2Key);
	DDX_Text(pDX, m_wndText.GetDlgCtrlID(), m_szText);

}
void CHMSPriceSchemaLogV2Dialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Cb1")] =  m_szCb1Key;
	m_jData[_T("Cb2")] =  m_szCb2Key;
	m_jData[_T("Text")] =  m_szText;
	}
	else
	{
			
	m_jData[_T("Cb1")].GetValue(m_szCb1Key);
	m_jData[_T("Cb2")].GetValue(m_szCb2Key);
	m_jData[_T("Text")].GetValue(m_szText);
	}

}
void CHMSPriceSchemaLogV2Dialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPriceSchemaLogV2Dialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPriceSchemaLogV2Dialog::SetDefaultValues(){

	m_szCb1Key.Empty();
	m_szCb2Key.Empty();
	m_szText.Empty();

}
int CHMSPriceSchemaLogV2Dialog::SetMode(int nMode){
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
void CHMSPriceSchemaLogV2Dialog::OnCb1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaLogV2Dialog::OnCb1Selendok(){
	 
}
/*void CHMSPriceSchemaLogV2Dialog::OnCb1Setfocus(){
	
}*/
/*void CHMSPriceSchemaLogV2Dialog::OnCb1Killfocus(){
	
}*/
long CHMSPriceSchemaLogV2Dialog::OnCb1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCb1.IsSearchKey() && !m_szCb1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCb1Key
};
	m_wndCb1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCb1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPriceSchemaLogV2Dialog::OnCb1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPriceSchemaLogV2Dialog::OnCb2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPriceSchemaLogV2Dialog::OnCb2Selendok(){
	 
}
/*void CHMSPriceSchemaLogV2Dialog::OnCb2Setfocus(){
	
}*/
/*void CHMSPriceSchemaLogV2Dialog::OnCb2Killfocus(){
	
}*/
long CHMSPriceSchemaLogV2Dialog::OnCb2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCb2.IsSearchKey() && !m_szCb2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCb2Key
};
	m_wndCb2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCb2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSPriceSchemaLogV2Dialog::OnCb2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSPriceSchemaLogV2Dialog::OnList1DblClick(){
	
} 
void CHMSPriceSchemaLogV2Dialog::OnList1SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPriceSchemaLogV2Dialog::OnList1DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPriceSchemaLogV2Dialog::OnList1LoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList1.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList1.AddItems(
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList1.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSPriceSchemaLogV2Dialog::OnList2DblClick(){
	
} 
void CHMSPriceSchemaLogV2Dialog::OnList2SelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPriceSchemaLogV2Dialog::OnList2DeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPriceSchemaLogV2Dialog::OnList2LoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList2.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList2.AddItems(
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("Price")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList2.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSPriceSchemaLogV2Dialog::OnTextChange(){
	
} */
/*void CHMSPriceSchemaLogV2Dialog::OnTextSetfocus(){
	
} */
/*void CHMSPriceSchemaLogV2Dialog::OnTextKillfocus(){
	
} */
int CHMSPriceSchemaLogV2Dialog::OnTextCheckValue(){
	return 0;
} 
int CHMSPriceSchemaLogV2Dialog::OnAddHMSPriceSchemaLogV2Dialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPriceSchemaLogV2Dialog::OnEditHMSPriceSchemaLogV2Dialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPriceSchemaLogV2Dialog::OnDeleteHMSPriceSchemaLogV2Dialog(){
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
 		OnCancelHMSPriceSchemaLogV2Dialog();
 	}
	return 0;
}
int CHMSPriceSchemaLogV2Dialog::OnSaveHMSPriceSchemaLogV2Dialog(){
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
 		//OnHMSPriceSchemaLogV2DialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPriceSchemaLogV2Dialog::OnCancelHMSPriceSchemaLogV2Dialog(){
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
int CHMSPriceSchemaLogV2Dialog::OnHMSPriceSchemaLogV2DialogListLoadData(){
	return 0;
}
