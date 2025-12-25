#include "HMSUpdateChildItemDialog.h"
#include "MainFrm.h"
/*static void _OnMucphiChangeFnc(CWnd *pWnd){
	((CHMSUpdateChildItemDialog *)pWnd)->OnMucphiChange();
} */
/*static void _OnMucphiSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateChildItemDialog *)pWnd)->OnMucphiSetfocus();} */ 
/*static void _OnMucphiKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateChildItemDialog *)pWnd)->OnMucphiKillfocus();
} */
static int _OnMucphiCheckValueFnc(CWnd *pWnd){
	return ((CHMSUpdateChildItemDialog *)pWnd)->OnMucphiCheckValue();
} 
static void _OnPacsGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSUpdateChildItemDialog* )pWnd)->OnPacsGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPacsGroupSelendokFnc(CWnd *pWnd){
	((CHMSUpdateChildItemDialog *)pWnd)->OnPacsGroupSelendok();
}
/*static void _OnPacsGroupSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateChildItemDialog *)pWnd)->OnPacsGroupKillfocus();
}*/
/*static void _OnPacsGroupKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateChildItemDialog *)pWnd)->OnPacsGroupKillfocus();
}*/
static long _OnPacsGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSUpdateChildItemDialog *)pWnd)->OnPacsGroupLoadData();
}
/*static void _OnPacsGroupAddNewFnc(CWnd *pWnd){
	((CHMSUpdateChildItemDialog *)pWnd)->OnPacsGroupAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSUpdateChildItemDialog *pVw = (CHMSUpdateChildItemDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSUpdateChildItemDialog *pVw = (CHMSUpdateChildItemDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddCHMSUpdateChildItemDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateChildItemDialog*)pWnd)->OnAddCHMSUpdateChildItemDialog();
} 
static int _OnEditCHMSUpdateChildItemDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateChildItemDialog*)pWnd)->OnEditCHMSUpdateChildItemDialog();
} 
static int _OnDeleteCHMSUpdateChildItemDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateChildItemDialog*)pWnd)->OnDeleteCHMSUpdateChildItemDialog();
} 
static int _OnSaveCHMSUpdateChildItemDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateChildItemDialog*)pWnd)->OnSaveCHMSUpdateChildItemDialog();
} 
static int _OnCancelCHMSUpdateChildItemDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateChildItemDialog*)pWnd)->OnCancelCHMSUpdateChildItemDialog();
}
static long _OnChildItemListLoadDataFnc(CWnd *pWnd)
{
	return ((CHMSUpdateChildItemDialog*)pWnd)->OnChildItemListLoadData();
}
static long _OnChildItemLoadDataFnc(CWnd *pWnd)
{
	return ((CHMSUpdateChildItemDialog *)pWnd)->OnChildItemLoadData();
}
static int _OnEditChildItemDataFnc(CWnd* pWnd){
	((CHMSUpdateChildItemDialog*)pWnd)->OnEditChildItemData();
	return 0;
}
CHMSUpdateChildItemDialog::CHMSUpdateChildItemDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSUpdateChildItemDialog::~CHMSUpdateChildItemDialog()
{
}
void CHMSUpdateChildItemDialog::OnCreateComponents()
{
	m_wndMucphi.Create(this,151, 28, 554, 124); 
	m_wndMucphiLabel.Create(this, _T("Đề mục phí"), 10, 29, 139, 125);
	m_wndChildItemListlabel.Create(this, _T("Danh mục phí đi kèm"), 5, 129, 559, 301);
	m_wndDescGroupBox.Create(this, _T("Thông tin đề mục phí"), 5, 4, 559, 129);
	m_wndChildItemList.Create(this,10, 150, 554, 296); 
	m_wndAddChildItemLabel.Create(this, _T("Thêm mục con"), 10, 307, 139, 335);
	m_wndChildItem.Create(this,151, 307, 554, 335); 
	m_wndSave.Create(this, _T("Save"), 388, 340, 468, 365);
	m_wndCancel.Create(this, _T("Close"), 473, 340, 553, 365);
	m_wndMucphi.EnableWindow(false);

	m_wndPhannhomLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndPhannhomLabel.ShowWindow(SW_HIDE);
	m_wndPhannhomLabel.EnableWindow(FALSE);
	m_wndPacsGroup.Create(this, 0, 0, 0, 0);
	m_wndPacsGroup.ShowWindow(SW_HIDE);
	m_wndPacsGroup.EnableWindow(FALSE);
}
void CHMSUpdateChildItemDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMucphi.SetLimitText(1024);
	m_wndMucphi.SetCheckValue(true);
	m_wndPacsGroup.SetCheckValue(true);
	m_wndPacsGroup.LimitText(1024);
	m_wndMucphi.SetMultiLine(TRUE);

	m_wndChildItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 120);
	m_wndChildItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 500);

	m_wndChildItemList.InsertColumn(0, _T("STT"), CFMT_NUMBER | CFMT_CENTER, 50);
	m_wndChildItemList.InsertColumn(1, _T("Item"), CFMT_TEXT, 100);
	m_wndChildItemList.InsertColumn(2, _T("Tên xét nghiệm"), CFMT_TEXT, 500);


}
void CHMSUpdateChildItemDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndMucphi.SetEvent(WE_CHANGE, _OnMucphiChangeFnc);
	//m_wndMucphi.SetEvent(WE_SETFOCUS, _OnMucphiSetfocusFnc);
	//m_wndMucphi.SetEvent(WE_KILLFOCUS, _OnMucphiKillfocusFnc);
	m_wndMucphi.SetEvent(WE_CHECKVALUE, _OnMucphiCheckValueFnc);
	m_wndPacsGroup.SetEvent(WE_SELENDOK, _OnPacsGroupSelendokFnc);
	//m_wndPacsGroup.SetEvent(WE_SETFOCUS, _OnPacsGroupSetfocusFnc);
	//m_wndPacsGroup.SetEvent(WE_KILLFOCUS, _OnPacsGroupKillfocusFnc);
	m_wndPacsGroup.SetEvent(WE_SELCHANGE, _OnPacsGroupSelectChangeFnc);
	m_wndPacsGroup.SetEvent(WE_LOADDATA, _OnPacsGroupLoadDataFnc);
	//m_wndPacsGroup.SetEvent(WE_ADDNEW, _OnPacsGroupAddNewFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndChildItemList.SetEvent(WE_LOADDATA, _OnChildItemListLoadDataFnc);
	m_wndChildItem.SetEvent(WE_LOADDATA, _OnChildItemLoadDataFnc);
	m_wndChildItemList.AddEvent(0, _T("-"), NULL);
	m_wndChildItemList.AddEvent(1, _T("Xóa đề mục"), _OnEditChildItemDataFnc);
	//SetMode(VM_NONE);
	GetDataToScreen();
	OnChildItemListLoadData();
	OnChildItemLoadData();
}
void CHMSUpdateChildItemDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndMucphi.GetDlgCtrlID(), m_szMucphi);
	DDX_TextEx(pDX, m_wndPacsGroup.GetDlgCtrlID(), m_szPacsGroupKey);
	DDX_TextEx(pDX, m_wndChildItem.GetDlgCtrlID(), m_szChildItemKey);

}
void CHMSUpdateChildItemDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Mucphi")] =  m_szMucphi;
	m_jData[_T("PacsGroup")] =  m_szPacsGroupKey;
	}
	else
	{
			
	m_jData[_T("Mucphi")].GetValue(m_szMucphi);
	m_jData[_T("PacsGroup")].GetValue(m_szPacsGroupKey);
	}

}
long CHMSUpdateChildItemDialog::OnChildItemLoadData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndChildItem.IsSearchKey())
	{
		szWhere.Format(_T(" AND hfl_feeid='%s' "), m_szChildItemKey);
	};
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name ") \
		_T(" FROM hms_fee_list") \
		_T(" WHERE hfl_groupid IN ('B1B00', 'B1E00', 'B1200') AND NVL(hfl_mother_group, 'X') = 'X' and hfl_active='Y' %s") \
		_T(" ORDER BY hfl_groupid, hfl_feeid "), szWhere);

	m_wndChildItem.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF())
	{ 
		m_wndChildItem.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
long CHMSUpdateChildItemDialog::OnChildItemListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	int nCount = 0;
	int nItem = 1;
	CString szSQL, szWhere, tmpStr;	
	
	szSQL.Format(_T(" SELECT hfl_feeid as feeitem,") \
	_T(" hfl_name as feename") \
	_T(" FROM hms_fee_list") \
	_T(" WHERE hfl_mother_group='%s'") \
	_T(" AND hfl_active='Y'") \
	_T(" ORDER BY hfl_feeid"), m_szID);
	
	nCount = rs.ExecSQL(szSQL);	
	m_wndChildItemList.BeginLoad();	

	while(!rs.IsEOF())
	{ 
		tmpStr.Format(_T("%d"), nItem++);   
		 int nItem = m_wndChildItemList.AddItems
			(
			tmpStr,
			rs.GetValue(_T("feeitem")), 
			rs.GetValue(_T("feename")), 
			NULL);
		rs.MoveNext();
	}
	m_wndChildItemList.EndLoad();
	UpdateData(false);
	return nCount;
	return 0;
}
void CHMSUpdateChildItemDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hfl_feeid as feeid, hfl_name as feename, HFL_PACSNAME as pacsname FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("feename"),  m_szMucphi); 
		rs.GetValue(_T("pacsname"),  m_szPacsGroupKey);		
	}
	SetMode(VM_EDIT);	

}
void CHMSUpdateChildItemDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSUpdateChildItemDialog::SetDefaultValues(){

	m_szMucphi.Empty();
	m_szPacsGroupKey.Empty();

}
int CHMSUpdateChildItemDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
			
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
		m_wndMucphi.EnableWindow(false);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSUpdateChildItemDialog::OnMucphiChange(){
	
} */
/*void CHMSUpdateChildItemDialog::OnMucphiSetfocus(){
	
} */
/*void CHMSUpdateChildItemDialog::OnMucphiKillfocus(){
	
} */
int CHMSUpdateChildItemDialog::OnMucphiCheckValue()
{
	return 0;
} 
void CHMSUpdateChildItemDialog::OnPacsGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSUpdateChildItemDialog::OnPacsGroupSelendok(){
	 
}
/*void CHMSUpdateChildItemDialog::OnPacsGroupSetfocus(){
	
}*/
/*void CHMSUpdateChildItemDialog::OnPacsGroupKillfocus(){
	
}*/
long CHMSUpdateChildItemDialog::OnPacsGroupLoadData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPacsGroup.IsSearchKey())
	{
		szWhere.Format(_T(" AND sd_code='%s' "), m_szPacsGroupKey);
	};
	szSQL.Format(_T("SELECT  ss_code as id, ss_desc as name ") \
		_T(" FROM sys_sel") \
		_T(" WHERE SS_ID='hms_phanloai_pacs'") \
		_T(" ORDER BY ss_code "), szWhere);

	m_wndPacsGroup.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndPacsGroup.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSUpdateChildItemDialog::OnPacsGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSUpdateChildItemDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCHMSUpdateChildItemDialog();
	
} 
void CHMSUpdateChildItemDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
	
} 
int CHMSUpdateChildItemDialog::OnAddCHMSUpdateChildItemDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSUpdateChildItemDialog::OnEditCHMSUpdateChildItemDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUpdateChildItemDialog::OnDeleteCHMSUpdateChildItemDialog(){
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
 		OnCancelCHMSUpdateChildItemDialog();
 	}
	return 0;
}
int CHMSUpdateChildItemDialog::OnSaveCHMSUpdateChildItemDialog()
{
 	UpdateData(true);
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, tmpStr;
	CRecord rs(&pMF->m_db);	
	szSQL.Format(_T("UPDATE hms_fee_list SET hfl_mother_group ='%s' WHERE hfl_feeid='%s'"), m_szID, m_szChildItemKey);	   
	int nRet = pMF->ExecSQL(szSQL);

	szSQL.Format(_T("UPDATE hms_fee_list SET hfl_is_mother_group ='Y' WHERE hfl_feeid='%s' AND NVL(hfl_is_mother_group, 'X') <> 'Y'"), m_szID);	   
	int nRet1 = pMF->ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	if (nRet > 0)
		OnChildItemListLoadData();
		_msg(_T("OK, JOB DONE"));
	//CGuiDialog::OnOK();	
	return 0;
}
int CHMSUpdateChildItemDialog::OnCancelCHMSUpdateChildItemDialog(){
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
int CHMSUpdateChildItemDialog::OnCHMSUpdateChildItemDialogListLoadData(){
	return 0;
}
int CHMSUpdateChildItemDialog::OnEditChildItemData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, tmpStr; 
	CRecord rs(&pMF->m_db);

	int nSel = m_wndChildItemList.GetCurSel();
	if(nSel < 0) return 0;
	CString szID = m_wndChildItemList.GetItemText(nSel, 1);
	
	int ret = ShowMessageBox(_T("Chức năng này sẽ xóa mục con khỏi mục mẹ, OK?"),MB_YESNO);
		if(ret == IDNO)
		return -1;
		else
	pMF->BeginTransaction();
	{
		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_mother_group ='' WHERE hfl_feeid='%s'"), szID);
	    pMF->ExecSQL(szSQL);		
	}
	pMF->Commit();
	
	OnChildItemListLoadData();
	return 0;
}