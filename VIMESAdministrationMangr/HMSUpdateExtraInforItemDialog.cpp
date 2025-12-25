#include "HMSUpdateExtraInforItemDialog.h"
#include "MainFrm.h"
/*static void _OnMucphiChangeFnc(CWnd *pWnd){
	((CHMSUpdateExtraInforItemDialog *)pWnd)->OnMucphiChange();
} */
/*static void _OnMucphiSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateExtraInforItemDialog *)pWnd)->OnMucphiSetfocus();} */ 
/*static void _OnMucphiKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateExtraInforItemDialog *)pWnd)->OnMucphiKillfocus();
} */
static int _OnMucphiCheckValueFnc(CWnd *pWnd){
	return ((CHMSUpdateExtraInforItemDialog *)pWnd)->OnMucphiCheckValue();
} 
static void _OnPacsGroupSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSUpdateExtraInforItemDialog* )pWnd)->OnPacsGroupSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPacsGroupSelendokFnc(CWnd *pWnd){
	((CHMSUpdateExtraInforItemDialog *)pWnd)->OnPacsGroupSelendok();
}
/*static void _OnPacsGroupSetfocusFnc(CWnd *pWnd){
	((CHMSUpdateExtraInforItemDialog *)pWnd)->OnPacsGroupKillfocus();
}*/
/*static void _OnPacsGroupKillfocusFnc(CWnd *pWnd){
	((CHMSUpdateExtraInforItemDialog *)pWnd)->OnPacsGroupKillfocus();
}*/
static long _OnPacsGroupLoadDataFnc(CWnd *pWnd){
	return ((CHMSUpdateExtraInforItemDialog *)pWnd)->OnPacsGroupLoadData();
}
/*static void _OnPacsGroupAddNewFnc(CWnd *pWnd){
	((CHMSUpdateExtraInforItemDialog *)pWnd)->OnPacsGroupAddNew();
}*/
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSUpdateExtraInforItemDialog *pVw = (CHMSUpdateExtraInforItemDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSUpdateExtraInforItemDialog *pVw = (CHMSUpdateExtraInforItemDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddCHMSUpdateExtraInforItemDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateExtraInforItemDialog*)pWnd)->OnAddCHMSUpdateExtraInforItemDialog();
} 
static int _OnEditCHMSUpdateExtraInforItemDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateExtraInforItemDialog*)pWnd)->OnEditCHMSUpdateExtraInforItemDialog();
} 
static int _OnDeleteCHMSUpdateExtraInforItemDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateExtraInforItemDialog*)pWnd)->OnDeleteCHMSUpdateExtraInforItemDialog();
} 
static int _OnSaveCHMSUpdateExtraInforItemDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateExtraInforItemDialog*)pWnd)->OnSaveCHMSUpdateExtraInforItemDialog();
} 
static int _OnCancelCHMSUpdateExtraInforItemDialogFnc(CWnd *pWnd){
	 return ((CHMSUpdateExtraInforItemDialog*)pWnd)->OnCancelCHMSUpdateExtraInforItemDialog();
}

static int _OnEditChildItemDataFnc(CWnd* pWnd){
	((CHMSUpdateExtraInforItemDialog*)pWnd)->OnEditChildItemData();
	return 0;
}

static int _OnDefaultQtyCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSUpdateExtraInforItemDialog *)pWnd)->OnDefaultQtyCheckValue();
}
static int _OnCommentCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSUpdateExtraInforItemDialog *)pWnd)->OnCommentCheckValue();
} 

CHMSUpdateExtraInforItemDialog::CHMSUpdateExtraInforItemDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSUpdateExtraInforItemDialog::~CHMSUpdateExtraInforItemDialog()
{
}
void CHMSUpdateExtraInforItemDialog::OnCreateComponents()
{
	m_wndMucphi.Create(this,151, 29, 554, 125, 1, 0, 1); 
	m_wndDefaultQty.Create(this,151, 136, 554, 161); 
	m_wndComment.Create(this,151, 178, 554, 274, 1, 0, 1); 
	if (m_szType == _T("PFL"))
    {
		m_wndMucphiLabel.Create(this, _T("Mã phí"), 10, 30, 139, 126);
		m_wndNumberLabel.Create(this, _T("Tỷ lệ"), 10, 136, 139, 161);
		m_wndCommentLabel.Create(this, _T("Tên phí"), 10, 178, 139, 203);
		m_wndDescGroupBox.Create(this, _T("Thông tin chỉnh sửa"), 5, 5, 556, 277);
	}
	else if (m_szType == _T("PF"))
	{
		m_wndMucphiLabel.Create(this, _T("Tên phòng"), 10, 30, 139, 126);
		m_wndNumberLabel.Create(this, _T("Limited"), 10, 136, 139, 161);
		m_wndCommentLabel.Create(this, _T(""), 10, 178, 139, 203);
		m_wndDescGroupBox.Create(this, _T("Thông tin chỉnh sửa"), 5, 5, 556, 277);
	}
	else
	{
		m_wndMucphiLabel.Create(this, _T("Đề mục phí"), 10, 30, 139, 126);
		m_wndNumberLabel.Create(this, _T("Số lượng"), 10, 136, 139, 161);
		m_wndCommentLabel.Create(this, _T("Ghi chú"), 10, 178, 139, 203);
		m_wndDescGroupBox.Create(this, _T("Thông tin đề mục phí"), 5, 5, 556, 277);
	}
	
	m_wndSave.Create(this, _T("Save"), 388, 283, 468, 308);
	m_wndCancel.Create(this, _T("Close"), 473, 283, 553, 308);
	m_wndMucphi.EnableWindow(false);

	m_wndChildItemListlabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndChildItemListlabel.ShowWindow(SW_HIDE);
	m_wndChildItemListlabel.EnableWindow(FALSE);
	m_wndPhannhomLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndPhannhomLabel.ShowWindow(SW_HIDE);
	m_wndPhannhomLabel.EnableWindow(FALSE);
	m_wndPacsGroup.Create(this, 0, 0, 0, 0);
	m_wndPacsGroup.ShowWindow(SW_HIDE);
	m_wndPacsGroup.EnableWindow(FALSE);
	m_wndAddChildItemLabel.Create(this, _T(""), 0, 0, 0, 0);
	m_wndAddChildItemLabel.ShowWindow(SW_HIDE);
	m_wndAddChildItemLabel.EnableWindow(FALSE);
	m_wndChildItem.Create(this, 0, 0, 0, 0);
	m_wndChildItem.ShowWindow(SW_HIDE);
	m_wndChildItem.EnableWindow(FALSE);

}
void CHMSUpdateExtraInforItemDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMucphi.SetLimitText(1024);
	m_wndMucphi.SetCheckValue(true);
	m_wndPacsGroup.SetCheckValue(true);
	m_wndPacsGroup.LimitText(1024);
	m_wndMucphi.SetMultiLine(TRUE);

}
void CHMSUpdateExtraInforItemDialog::OnSetWindowEvents(){
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
	
	m_wndDefaultQty.SetEvent(WE_CHECKVALUE, _OnDefaultQtyCheckValueFnc);
	m_wndComment.SetEvent(WE_CHECKVALUE, _OnCommentCheckValueFnc);

	//SetMode(VM_NONE);
	if (m_szType == _T("PF") || m_szType == _T("PFL"))
		UpdateData(FALSE);
	else
		GetDataToScreen();
	
}
void CHMSUpdateExtraInforItemDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndMucphi.GetDlgCtrlID(), m_szMucphi);
	if (m_szType == _T("PFL"))
	{
		DDX_Text(pDX, m_wndDefaultQty.GetDlgCtrlID(), m_nRatio);
	}else
		DDX_Text(pDX, m_wndDefaultQty.GetDlgCtrlID(), m_nDefaultQty);
	DDX_Text(pDX, m_wndComment.GetDlgCtrlID(), m_szComment);
}
void CHMSUpdateExtraInforItemDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Mucphi")] =  m_szMucphi;
	m_jData[_T("DefaultQty")] =  m_nDefaultQty;
	m_jData[_T("Comment")] =  m_szComment;
	}
	else
	{
			
	m_jData[_T("Mucphi")].GetValue(m_szMucphi);
	m_jData[_T("DefaultQty")].GetValue(m_nDefaultQty);
	m_jData[_T("Comment")].GetValue(m_szComment);
	}
}

void CHMSUpdateExtraInforItemDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hfl_feeid as feeid, hfl_name as feename, HFL_DEFAULT_QTY as qty, HFL_COMMENT as note FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("feename"),  m_szMucphi); 
		rs.GetValue(_T("qty"),  m_nDefaultQty);
		rs.GetValue(_T("note"),  m_szComment);
	}
	SetMode(VM_EDIT);	

}
void CHMSUpdateExtraInforItemDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSUpdateExtraInforItemDialog::SetDefaultValues(){

	m_szMucphi.Empty();
	m_nDefaultQty=0;
	m_nRatio = 0.0;
	m_szComment.Empty();

}
int CHMSUpdateExtraInforItemDialog::SetMode(int nMode){
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
/*void CHMSUpdateExtraInforItemDialog::OnMucphiChange(){
	
} */
/*void CHMSUpdateExtraInforItemDialog::OnMucphiSetfocus(){
	
} */
/*void CHMSUpdateExtraInforItemDialog::OnMucphiKillfocus(){
	
} */
int CHMSUpdateExtraInforItemDialog::OnMucphiCheckValue()
{
	return 0;
}
int CHMSUpdateExtraInforItemDialog::OnDefaultQtyCheckValue()
{
	return 0;
}
int CHMSUpdateExtraInforItemDialog::OnCommentCheckValue()
{
	return 0;
}
void CHMSUpdateExtraInforItemDialog::OnPacsGroupSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSUpdateExtraInforItemDialog::OnPacsGroupSelendok(){
	 
}
/*void CHMSUpdateExtraInforItemDialog::OnPacsGroupSetfocus(){
	
}*/
/*void CHMSUpdateExtraInforItemDialog::OnPacsGroupKillfocus(){
	
}*/
long CHMSUpdateExtraInforItemDialog::OnPacsGroupLoadData()
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
/*void CHMSUpdateExtraInforItemDialog::OnPacsGroupAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSUpdateExtraInforItemDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCHMSUpdateExtraInforItemDialog();	
} 
void CHMSUpdateExtraInforItemDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
int CHMSUpdateExtraInforItemDialog::OnAddCHMSUpdateExtraInforItemDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSUpdateExtraInforItemDialog::OnEditCHMSUpdateExtraInforItemDialog()
{
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSUpdateExtraInforItemDialog::OnDeleteCHMSUpdateExtraInforItemDialog()
{
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
 		OnCancelCHMSUpdateExtraInforItemDialog();
 	}
	return 0;
}
int CHMSUpdateExtraInforItemDialog::OnSaveCHMSUpdateExtraInforItemDialog()
{
 	UpdateData(true);
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL, tmpStr, szTmp;
	CRecord rs(&pMF->m_db);	
	if(m_szType == _T("PFL"))
	{ 
		szSQL.Format(_T("UPDATE hms_fee_list SET hfl_ratio =%f WHERE hfl_feeid='%s'"), m_nRatio, m_szMucphi);
	}
	else if (m_szType == _T("PF"))
	{
		szSQL.Format(_T("UPDATE hms_roomlist SET hrl_limited =%ld WHERE hrl_id=%d and hrl_deptid ='%s'"), m_nDefaultQty, m_nRoomID, m_szDeptID);
	}else
		szSQL.Format(_T("UPDATE hms_fee_list SET HFL_DEFAULT_QTY =%ld, HFL_COMMENT = '%s' WHERE hfl_feeid='%s'"), m_nDefaultQty, m_szComment, m_szID);	   
	int nRet = pMF->ExecSQL(szSQL);

	_tprintf(_T("%s"), szSQL);

	if (nRet > 0)
		
		_msg(_T("OK, JOB DONE"));
	CGuiDialog::OnOK();	
	return 0;
}
int CHMSUpdateExtraInforItemDialog::OnCancelCHMSUpdateExtraInforItemDialog(){
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
int CHMSUpdateExtraInforItemDialog::OnCHMSUpdateExtraInforItemDialogListLoadData(){
	return 0;
}
