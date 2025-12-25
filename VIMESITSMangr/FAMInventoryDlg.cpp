#include "FAMInventoryDlg.h"
#include "MainFrm.h"
/*static void _OnInventoryDateChangeFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnInventoryDateChange();
} */
/*static void _OnInventoryDateSetfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnInventoryDateSetfocus();} */ 
/*static void _OnInventoryDateKillfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnInventoryDateKillfocus();
} */
static int _OnInventoryDateCheckValueFnc(CWnd *pWnd){
	return ((CFAMInventoryDlg *)pWnd)->OnInventoryDateCheckValue();
} 
/*static void _OnLevel1ChangeFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel1Change();
} */
/*static void _OnLevel1SetfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel1Setfocus();} */ 
/*static void _OnLevel1KillfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel1Killfocus();
} */
static int _OnLevel1CheckValueFnc(CWnd *pWnd){
	return ((CFAMInventoryDlg *)pWnd)->OnLevel1CheckValue();
} 
/*static void _OnLevel2ChangeFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel2Change();
} */
/*static void _OnLevel2SetfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel2Setfocus();} */ 
/*static void _OnLevel2KillfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel2Killfocus();
} */
static int _OnLevel2CheckValueFnc(CWnd *pWnd){
	return ((CFAMInventoryDlg *)pWnd)->OnLevel2CheckValue();
} 
/*static void _OnLevel3ChangeFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel3Change();
} */
/*static void _OnLevel3SetfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel3Setfocus();} */ 
/*static void _OnLevel3KillfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel3Killfocus();
} */
static int _OnLevel3CheckValueFnc(CWnd *pWnd){
	return ((CFAMInventoryDlg *)pWnd)->OnLevel3CheckValue();
} 
/*static void _OnLevel4ChangeFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel4Change();
} */
/*static void _OnLevel4SetfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel4Setfocus();} */ 
/*static void _OnLevel4KillfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel4Killfocus();
} */
static int _OnLevel4CheckValueFnc(CWnd *pWnd){
	return ((CFAMInventoryDlg *)pWnd)->OnLevel4CheckValue();
} 
/*static void _OnLevel5ChangeFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel5Change();
} */
/*static void _OnLevel5SetfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel5Setfocus();} */ 
/*static void _OnLevel5KillfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnLevel5Killfocus();
} */
static int _OnLevel5CheckValueFnc(CWnd *pWnd){
	return ((CFAMInventoryDlg *)pWnd)->OnLevel5CheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CFAMInventoryDlg *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CFAMInventoryDlg *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CFAMInventoryDlg *pVw = (CFAMInventoryDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CFAMInventoryDlg *pVw = (CFAMInventoryDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CFAMInventoryDlg *pVw = (CFAMInventoryDlg *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddFAMInventoryDlgFnc(CWnd *pWnd){
	 return ((CFAMInventoryDlg*)pWnd)->OnAddFAMInventoryDlg();
} 
static int _OnEditFAMInventoryDlgFnc(CWnd *pWnd){
	 return ((CFAMInventoryDlg*)pWnd)->OnEditFAMInventoryDlg();
} 
static int _OnDeleteFAMInventoryDlgFnc(CWnd *pWnd){
	 return ((CFAMInventoryDlg*)pWnd)->OnDeleteFAMInventoryDlg();
} 
static int _OnSaveFAMInventoryDlgFnc(CWnd *pWnd){
	 return ((CFAMInventoryDlg*)pWnd)->OnSaveFAMInventoryDlg();
} 
static int _OnCancelFAMInventoryDlgFnc(CWnd *pWnd){
	 return ((CFAMInventoryDlg*)pWnd)->OnCancelFAMInventoryDlg();
} 
CFAMInventoryDlg::CFAMInventoryDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 280;
	m_nDlgHeight = 375;
	SetDefaultValues();
}
CFAMInventoryDlg::~CFAMInventoryDlg(){
}
void CFAMInventoryDlg::OnCreateComponents(){
	m_wndInventoriedGroupLabel.Create(this, _T("Inventoried"), 5, 5, 270, 335);
	m_wndInventoryDateLabel.Create(this, _T("Inventory Date"), 10, 30, 110, 55);
	m_wndInventoryDate.Create(this,115, 30, 265, 55); 
	m_wndLevel1Label.Create(this, _T("Level_1"), 10, 60, 110, 85);
	m_wndLevel1.Create(this,115, 60, 265, 85); 
	m_wndLevel2Label.Create(this, _T("Level_2"), 10, 90, 110, 115);
	m_wndLevel2.Create(this,115, 90, 265, 115); 
	m_wndLevel3Label.Create(this, _T("Level_3"), 10, 120, 110, 145);
	m_wndLevel3.Create(this,115, 120, 265, 145); 
	m_wndLevel4Label.Create(this, _T("Level_4"), 10, 150, 110, 175);
	m_wndLevel4.Create(this,115, 150, 265, 175); 
	m_wndLevel5Label.Create(this, _T("Level_5"), 10, 180, 110, 205);
	m_wndLevel5.Create(this,115, 180, 265, 205); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 210, 110, 235);
	m_wndNote.Create(this,115, 210, 265, 330, 1, 0, 1); 
	m_wndSave.Create(this, _T("Save"), 20, 340, 100, 365);
	m_wndCancel.Create(this, _T("Cancel"), 105, 340, 185, 365);
	m_wndClose.Create(this, _T("Close"), 190, 340, 270, 365);

}
void CFAMInventoryDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndInventoryDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndInventoryDate.SetCheckValue(true);
	m_wndLevel1.SetLimitText(5);
	m_wndLevel1.SetCheckValue(false);
	m_wndLevel2.SetLimitText(5);
	m_wndLevel2.SetCheckValue(false);
	m_wndLevel3.SetLimitText(5);
	m_wndLevel3.SetCheckValue(false);
	m_wndLevel4.SetLimitText(5);
	m_wndLevel4.SetCheckValue(false);
	m_wndLevel5.SetLimitText(5);
	m_wndLevel5.SetCheckValue(false);
	m_wndNote.SetMultiLine(TRUE);
	m_wndNote.SetLimitText(2048);
	//m_wndNote.SetCheckValue(true);

	m_fam_inventory_tbl.SetTableName(_T("fam_inventoried"));
	m_fam_inventory_tbl.AddField(_T("fami_createdby"), dfText, 15); 
	m_fam_inventory_tbl.AddField(_T("fami_createddate"), dfDateTime); 
	m_fam_inventory_tbl.AddField(_T("fami_updatedby"), dfText, 15); 
	m_fam_inventory_tbl.AddField(_T("fami_updateddate"), dfDateTime); 
	m_fam_inventory_tbl.AddField(_T("fami_fid"), dfText, 30); 
	m_fam_inventory_tbl.AddField(_T("fami_idx"), dfLong); 
	m_fam_inventory_tbl.AddField(_T("fami_inventorieddate"), dfDate); 
	m_fam_inventory_tbl.AddField(_T("fami_level1"), dfInteger); 
	m_fam_inventory_tbl.AddField(_T("fami_level2"), dfInteger); 
	m_fam_inventory_tbl.AddField(_T("fami_level3"), dfInteger); 
	m_fam_inventory_tbl.AddField(_T("fami_level4"), dfInteger); 
	m_fam_inventory_tbl.AddField(_T("fami_level5"), dfInteger); 
	m_fam_inventory_tbl.AddField(_T("fami_note"), dfText, 512); 


}
void CFAMInventoryDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndInventoryDate.SetEvent(WE_CHANGE, _OnInventoryDateChangeFnc);
	//m_wndInventoryDate.SetEvent(WE_SETFOCUS, _OnInventoryDateSetfocusFnc);
	//m_wndInventoryDate.SetEvent(WE_KILLFOCUS, _OnInventoryDateKillfocusFnc);
	m_wndInventoryDate.SetEvent(WE_CHECKVALUE, _OnInventoryDateCheckValueFnc);
	//m_wndLevel1.SetEvent(WE_CHANGE, _OnLevel1ChangeFnc);
	//m_wndLevel1.SetEvent(WE_SETFOCUS, _OnLevel1SetfocusFnc);
	//m_wndLevel1.SetEvent(WE_KILLFOCUS, _OnLevel1KillfocusFnc);
	m_wndLevel1.SetEvent(WE_CHECKVALUE, _OnLevel1CheckValueFnc);
	//m_wndLevel2.SetEvent(WE_CHANGE, _OnLevel2ChangeFnc);
	//m_wndLevel2.SetEvent(WE_SETFOCUS, _OnLevel2SetfocusFnc);
	//m_wndLevel2.SetEvent(WE_KILLFOCUS, _OnLevel2KillfocusFnc);
	m_wndLevel2.SetEvent(WE_CHECKVALUE, _OnLevel2CheckValueFnc);
	//m_wndLevel3.SetEvent(WE_CHANGE, _OnLevel3ChangeFnc);
	//m_wndLevel3.SetEvent(WE_SETFOCUS, _OnLevel3SetfocusFnc);
	//m_wndLevel3.SetEvent(WE_KILLFOCUS, _OnLevel3KillfocusFnc);
	m_wndLevel3.SetEvent(WE_CHECKVALUE, _OnLevel3CheckValueFnc);
	//m_wndLevel4.SetEvent(WE_CHANGE, _OnLevel4ChangeFnc);
	//m_wndLevel4.SetEvent(WE_SETFOCUS, _OnLevel4SetfocusFnc);
	//m_wndLevel4.SetEvent(WE_KILLFOCUS, _OnLevel4KillfocusFnc);
	m_wndLevel4.SetEvent(WE_CHECKVALUE, _OnLevel4CheckValueFnc);
	//m_wndLevel5.SetEvent(WE_CHANGE, _OnLevel5ChangeFnc);
	//m_wndLevel5.SetEvent(WE_SETFOCUS, _OnLevel5SetfocusFnc);
	//m_wndLevel5.SetEvent(WE_KILLFOCUS, _OnLevel5KillfocusFnc);
	m_wndLevel5.SetEvent(WE_CHECKVALUE, _OnLevel5CheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	if(GetMode() == VM_EDIT)
	{
		GetDataToScreen();
	}else
		SetMode(VM_ADD);
	
}
void CFAMInventoryDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndInventoryDate.GetDlgCtrlID(), m_szInventoryDate);
	DDX_Text(pDX, m_wndLevel1.GetDlgCtrlID(), m_szLevel1);
	DDX_Text(pDX, m_wndLevel2.GetDlgCtrlID(), m_szLevel2);
	DDX_Text(pDX, m_wndLevel3.GetDlgCtrlID(), m_szLevel3);
	DDX_Text(pDX, m_wndLevel4.GetDlgCtrlID(), m_szLevel4);
	DDX_Text(pDX, m_wndLevel5.GetDlgCtrlID(), m_szLevel5);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CFAMInventoryDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM fam_inventoried WHERE fami_fid = '%s' and fami_idx = %ld"), szAssetNo, nIndex);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("fami_inventorieddate"), m_szInventoryDate);
		rs.GetValue(_T("fami_level1"), m_szLevel1);
		rs.GetValue(_T("fami_level2"), m_szLevel2);
		rs.GetValue(_T("fami_level3"), m_szLevel3);
		rs.GetValue(_T("fami_level4"), m_szLevel4);
		rs.GetValue(_T("fami_level5"), m_szLevel5);
		rs.GetValue(_T("fami_note"), m_szNote);
		UpdateData(FALSE);
	}

}
void CFAMInventoryDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(max(fami_idx), 0)+1 FROM fam_inventoried WHERE fami_fid='%s' "), pMF->m_szAssetNo);
		rs.ExecSQL(szSQL);
		nIndex = rs.GetIntValue();
	}
	m_fam_inventory_tbl.SetValue(_T("fami_createdby"), pMF->GetCurrentUser());
	m_fam_inventory_tbl.SetValue(_T("fami_createddate"), pMF->GetSysDateTime());
	m_fam_inventory_tbl.SetValue(_T("fami_updatedby"), pMF->GetCurrentUser());
	m_fam_inventory_tbl.SetValue(_T("fami_updateddate"), pMF->GetSysDateTime());
	m_fam_inventory_tbl.SetValue(_T("fami_fid"), pMF->m_szAssetNo);
	m_fam_inventory_tbl.SetValue(_T("fami_idx"), nIndex);
	m_fam_inventory_tbl.SetValue(_T("fami_inventorieddate"), m_szInventoryDate);
	m_fam_inventory_tbl.SetValue(_T("fami_level1"), m_szLevel1);
	m_fam_inventory_tbl.SetValue(_T("fami_level2"), m_szLevel2);
	m_fam_inventory_tbl.SetValue(_T("fami_level3"), m_szLevel3);
	m_fam_inventory_tbl.SetValue(_T("fami_level4"), m_szLevel4);
	m_fam_inventory_tbl.SetValue(_T("fami_level5"), m_szLevel5);
	m_fam_inventory_tbl.SetValue(_T("fami_note"), m_szNote);

}
void CFAMInventoryDlg::SetDefaultValues(){

	m_szInventoryDate.Empty();
	m_szLevel1.Empty();
	m_szLevel2.Empty();
	m_szLevel3.Empty();
	m_szLevel4.Empty();
	m_szLevel5.Empty();
	m_szNote.Empty();

}
int CFAMInventoryDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, 2, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, -1);
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
/*void CFAMInventoryDlg::OnInventoryDateChange(){
	
} */
/*void CFAMInventoryDlg::OnInventoryDateSetfocus(){
	
} */
/*void CFAMInventoryDlg::OnInventoryDateKillfocus(){
	
} */
int CFAMInventoryDlg::OnInventoryDateCheckValue(){
	return 0;
} 
/*void CFAMInventoryDlg::OnLevel1Change(){
	
} */
/*void CFAMInventoryDlg::OnLevel1Setfocus(){
	
} */
/*void CFAMInventoryDlg::OnLevel1Killfocus(){
	
} */
int CFAMInventoryDlg::OnLevel1CheckValue(){
	return 0;
} 
/*void CFAMInventoryDlg::OnLevel2Change(){
	
} */
/*void CFAMInventoryDlg::OnLevel2Setfocus(){
	
} */
/*void CFAMInventoryDlg::OnLevel2Killfocus(){
	
} */
int CFAMInventoryDlg::OnLevel2CheckValue(){
	return 0;
} 
/*void CFAMInventoryDlg::OnLevel3Change(){
	
} */
/*void CFAMInventoryDlg::OnLevel3Setfocus(){
	
} */
/*void CFAMInventoryDlg::OnLevel3Killfocus(){
	
} */
int CFAMInventoryDlg::OnLevel3CheckValue(){
	return 0;
} 
/*void CFAMInventoryDlg::OnLevel4Change(){
	
} */
/*void CFAMInventoryDlg::OnLevel4Setfocus(){
	
} */
/*void CFAMInventoryDlg::OnLevel4Killfocus(){
	
} */
int CFAMInventoryDlg::OnLevel4CheckValue(){
	return 0;
} 
/*void CFAMInventoryDlg::OnLevel5Change(){
	
} */
/*void CFAMInventoryDlg::OnLevel5Setfocus(){
	
} */
/*void CFAMInventoryDlg::OnLevel5Killfocus(){
	
} */
int CFAMInventoryDlg::OnLevel5CheckValue(){
	return 0;
} 
/*void CFAMInventoryDlg::OnNoteChange(){
	
} */
/*void CFAMInventoryDlg::OnNoteSetfocus(){
	
} */
/*void CFAMInventoryDlg::OnNoteKillfocus(){
	
} */
int CFAMInventoryDlg::OnNoteCheckValue(){
	return 0;
} 
void CFAMInventoryDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveFAMInventoryDlg();
} 
void CFAMInventoryDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelFAMInventoryDlg();
} 
void CFAMInventoryDlg::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
int CFAMInventoryDlg::OnAddFAMInventoryDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CFAMInventoryDlg::OnEditFAMInventoryDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CFAMInventoryDlg::OnDeleteFAMInventoryDlg(){
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
 		OnCancelFAMInventoryDlg();
 	}
	return 0;
}
int CFAMInventoryDlg::OnSaveFAMInventoryDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	if(szAssetNo.IsEmpty())
		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
		szSQL = m_fam_inventory_tbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE fami_fid = '%s' and fami_idx = %ld"), szAssetNo, nIndex);
 		szSQL = m_fam_inventory_tbl.GetUpdateSQL(_T("fami_fid, fami_idx"));
 		szSQL += szWhere;
 	}

 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		pMF->m_wndAsset.m_wndInventory.OnInventoriedLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
}
int CFAMInventoryDlg::OnCancelFAMInventoryDlg(){
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
int CFAMInventoryDlg::OnFAMInventoryDlgListLoadData(){
	return 0;
}
