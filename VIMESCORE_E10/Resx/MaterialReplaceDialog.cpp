#include "MaterialReplaceDialog.h"
#include "MainFrm.h"
/*static void _OnOriginalNameChangeFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnOriginalNameChange();
} */
/*static void _OnOriginalNameSetfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnOriginalNameSetfocus();} */ 
/*static void _OnOriginalNameKillfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnOriginalNameKillfocus();
} */
static int _OnOriginalNameCheckValueFnc(CWnd *pWnd){
	return ((CMaterialReplaceDialog *)pWnd)->OnOriginalNameCheckValue();
} 
/*static void _OnOnHandChangeFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnOnHandChange();
} */
/*static void _OnOnHandSetfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnOnHandSetfocus();} */ 
/*static void _OnOnHandKillfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnOnHandKillfocus();
} */
static int _OnOnHandCheckValueFnc(CWnd *pWnd){
	return ((CMaterialReplaceDialog *)pWnd)->OnOnHandCheckValue();
} 
static void _OnReplaceName1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMaterialReplaceDialog* )pWnd)->OnReplaceName1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReplaceName1SelendokFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnReplaceName1Selendok();
}
/*static void _OnReplaceName1SetfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnReplaceName1Killfocus();
}*/
/*static void _OnReplaceName1KillfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnReplaceName1Killfocus();
}*/
static long _OnReplaceName1LoadDataFnc(CWnd *pWnd){
	return ((CMaterialReplaceDialog *)pWnd)->OnReplaceName1LoadData();
}
/*static void _OnReplaceName1AddNewFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnReplaceName1AddNew();
}*/
/*static void _OnQtyReplace1ChangeFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnQtyReplace1Change();
} */
/*static void _OnQtyReplace1SetfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnQtyReplace1Setfocus();} */ 
/*static void _OnQtyReplace1KillfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnQtyReplace1Killfocus();
} */
static int _OnQtyReplace1CheckValueFnc(CWnd *pWnd){
	return ((CMaterialReplaceDialog *)pWnd)->OnQtyReplace1CheckValue();
} 
static void _OnReplaceName2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CMaterialReplaceDialog* )pWnd)->OnReplaceName2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReplaceName2SelendokFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnReplaceName2Selendok();
}
/*static void _OnReplaceName2SetfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnReplaceName2Killfocus();
}*/
/*static void _OnReplaceName2KillfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnReplaceName2Killfocus();
}*/
static long _OnReplaceName2LoadDataFnc(CWnd *pWnd){
	return ((CMaterialReplaceDialog *)pWnd)->OnReplaceName2LoadData();
}
/*static void _OnReplaceName2AddNewFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnReplaceName2AddNew();
}*/
/*static void _OnQtyReplace2ChangeFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnQtyReplace2Change();
} */
/*static void _OnQtyReplace2SetfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnQtyReplace2Setfocus();} */ 
/*static void _OnQtyReplace2KillfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnQtyReplace2Killfocus();
} */
static int _OnQtyReplace2CheckValueFnc(CWnd *pWnd){
	return ((CMaterialReplaceDialog *)pWnd)->OnQtyReplace2CheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CMaterialReplaceDialog *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnRemainQtyChangeFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnRemainQtyChange();
} */
/*static void _OnRemainQtySetfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnRemainQtySetfocus();} */ 
/*static void _OnRemainQtyKillfocusFnc(CWnd *pWnd){
	((CMaterialReplaceDialog *)pWnd)->OnRemainQtyKillfocus();
} */
static int _OnRemainQtyCheckValueFnc(CWnd *pWnd){
	return ((CMaterialReplaceDialog *)pWnd)->OnRemainQtyCheckValue();
} 
static void _OnClearSelectFnc(CWnd *pWnd){
	CMaterialReplaceDialog *pVw = (CMaterialReplaceDialog *)pWnd;
	pVw->OnClearSelect();
} 
static void _OnOKSelectFnc(CWnd *pWnd){
	CMaterialReplaceDialog *pVw = (CMaterialReplaceDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CMaterialReplaceDialog *pVw = (CMaterialReplaceDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddMaterialReplaceDialogFnc(CWnd *pWnd){
	 return ((CMaterialReplaceDialog*)pWnd)->OnAddMaterialReplaceDialog();
} 
static int _OnEditMaterialReplaceDialogFnc(CWnd *pWnd){
	 return ((CMaterialReplaceDialog*)pWnd)->OnEditMaterialReplaceDialog();
} 
static int _OnDeleteMaterialReplaceDialogFnc(CWnd *pWnd){
	 return ((CMaterialReplaceDialog*)pWnd)->OnDeleteMaterialReplaceDialog();
} 
static int _OnSaveMaterialReplaceDialogFnc(CWnd *pWnd){
	 return ((CMaterialReplaceDialog*)pWnd)->OnSaveMaterialReplaceDialog();
} 
static int _OnCancelMaterialReplaceDialogFnc(CWnd *pWnd){
	 return ((CMaterialReplaceDialog*)pWnd)->OnCancelMaterialReplaceDialog();
} 
CMaterialReplaceDialog::CMaterialReplaceDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 185;
	SetDefaultValues();
}
CMaterialReplaceDialog::~CMaterialReplaceDialog(){
}
void CMaterialReplaceDialog::OnCreateComponents(){
	m_wndReplaceInformation.Create(this, _T("Replace Information"), 5, 5, 640, 150);
	m_wndOriginNameLabel.Create(this, _T("Original Name"), 10, 30, 110, 55);
	m_wndOriginalName.Create(this,115, 30, 455, 55); 
	m_wndOrderQtyLabel.Create(this, _T("Order Quantity"), 460, 30, 560, 55);
	m_wndOnHand.Create(this,565, 30, 635, 55); 
	m_wndReplaceName1Label.Create(this, _T("Replace Name1"), 10, 60, 110, 85);
	m_wndReplaceName1.Create(this,115, 60, 455, 85); 
	m_wndQtyReplace1Label.Create(this, _T("Quantity"), 460, 60, 560, 85);
	m_wndQtyReplace1.Create(this,565, 60, 635, 85); 
	m_wndReplaceName2Label.Create(this, _T("Replace Name2"), 10, 90, 110, 115);
	m_wndReplaceName2.Create(this,115, 90, 455, 115); 
	m_wndQtyReplace2.Create(this, _T("Quantity"), 460, 90, 560, 115);
	m_wndQtyReplace2.Create(this,565, 90, 635, 115); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 120, 110, 145);
	m_wndNote.Create(this,115, 120, 455, 145); 
	m_wndRemainQtyLabel.Create(this, _T("Remain Quantity"), 460, 120, 560, 145);
	m_wndRemainQty.Create(this,565, 120, 635, 145); 
	m_wndClear.Create(this, _T("Clear"), 5, 155, 90, 180);
	m_wndOK.Create(this, _T("&OK"), 465, 155, 550, 180);
	m_wndCancel.Create(this, _T("&Cancel"), 555, 155, 640, 180);

}
void CMaterialReplaceDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOriginalName.SetLimitText(1024);
	m_wndOriginalName.SetCheckValue(true);
	m_wndOnHand.SetLimitText(1024);
	m_wndOnHand.SetCheckValue(true);
	m_wndReplaceName1.SetCheckValue(true);
	m_wndReplaceName1.LimitText(1024);
	m_wndQtyReplace1.SetLimitText(1024);
	m_wndQtyReplace1.SetCheckValue(true);
	m_wndReplaceName2.SetCheckValue(true);
	m_wndReplaceName2.LimitText(1024);
	m_wndQtyReplace2.SetLimitText(1024);
	m_wndQtyReplace2.SetCheckValue(true);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);
	m_wndRemainQty.SetLimitText(16);
	m_wndRemainQty.SetCheckValue(true);





}
void CMaterialReplaceDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndOriginalName.SetEvent(WE_CHANGE, _OnOriginalNameChangeFnc);
	//m_wndOriginalName.SetEvent(WE_SETFOCUS, _OnOriginalNameSetfocusFnc);
	//m_wndOriginalName.SetEvent(WE_KILLFOCUS, _OnOriginalNameKillfocusFnc);
	m_wndOriginalName.SetEvent(WE_CHECKVALUE, _OnOriginalNameCheckValueFnc);
	//m_wndOnHand.SetEvent(WE_CHANGE, _OnOnHandChangeFnc);
	//m_wndOnHand.SetEvent(WE_SETFOCUS, _OnOnHandSetfocusFnc);
	//m_wndOnHand.SetEvent(WE_KILLFOCUS, _OnOnHandKillfocusFnc);
	m_wndOnHand.SetEvent(WE_CHECKVALUE, _OnOnHandCheckValueFnc);
	m_wndReplaceName1.SetEvent(WE_SELENDOK, _OnReplaceName1SelendokFnc);
	//m_wndReplaceName1.SetEvent(WE_SETFOCUS, _OnReplaceName1SetfocusFnc);
	//m_wndReplaceName1.SetEvent(WE_KILLFOCUS, _OnReplaceName1KillfocusFnc);
	m_wndReplaceName1.SetEvent(WE_SELCHANGE, _OnReplaceName1SelectChangeFnc);
	m_wndReplaceName1.SetEvent(WE_LOADDATA, _OnReplaceName1LoadDataFnc);
	//m_wndReplaceName1.SetEvent(WE_ADDNEW, _OnReplaceName1AddNewFnc);
	//m_wndQtyReplace1.SetEvent(WE_CHANGE, _OnQtyReplace1ChangeFnc);
	//m_wndQtyReplace1.SetEvent(WE_SETFOCUS, _OnQtyReplace1SetfocusFnc);
	//m_wndQtyReplace1.SetEvent(WE_KILLFOCUS, _OnQtyReplace1KillfocusFnc);
	m_wndQtyReplace1.SetEvent(WE_CHECKVALUE, _OnQtyReplace1CheckValueFnc);
	m_wndReplaceName2.SetEvent(WE_SELENDOK, _OnReplaceName2SelendokFnc);
	//m_wndReplaceName2.SetEvent(WE_SETFOCUS, _OnReplaceName2SetfocusFnc);
	//m_wndReplaceName2.SetEvent(WE_KILLFOCUS, _OnReplaceName2KillfocusFnc);
	m_wndReplaceName2.SetEvent(WE_SELCHANGE, _OnReplaceName2SelectChangeFnc);
	m_wndReplaceName2.SetEvent(WE_LOADDATA, _OnReplaceName2LoadDataFnc);
	//m_wndReplaceName2.SetEvent(WE_ADDNEW, _OnReplaceName2AddNewFnc);
	//m_wndQtyReplace2.SetEvent(WE_CHANGE, _OnQtyReplace2ChangeFnc);
	//m_wndQtyReplace2.SetEvent(WE_SETFOCUS, _OnQtyReplace2SetfocusFnc);
	//m_wndQtyReplace2.SetEvent(WE_KILLFOCUS, _OnQtyReplace2KillfocusFnc);
	m_wndQtyReplace2.SetEvent(WE_CHECKVALUE, _OnQtyReplace2CheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndRemainQty.SetEvent(WE_CHANGE, _OnRemainQtyChangeFnc);
	//m_wndRemainQty.SetEvent(WE_SETFOCUS, _OnRemainQtySetfocusFnc);
	//m_wndRemainQty.SetEvent(WE_KILLFOCUS, _OnRemainQtyKillfocusFnc);
	m_wndRemainQty.SetEvent(WE_CHECKVALUE, _OnRemainQtyCheckValueFnc);
	m_wndClear.SetEvent(WE_CLICK, _OnClearSelectFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	SetMode(VM_NONE);

}
void CMaterialReplaceDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndOriginalName.GetDlgCtrlID(), m_szOriginalName);
	DDX_Text(pDX, m_wndOnHand.GetDlgCtrlID(), m_nOnHand);
	DDX_TextEx(pDX, m_wndReplaceName1.GetDlgCtrlID(), m_szReplaceName1Key);
	DDX_Text(pDX, m_wndQtyReplace1.GetDlgCtrlID(), m_nQtyReplace1);
	DDX_TextEx(pDX, m_wndReplaceName2.GetDlgCtrlID(), m_szReplaceName2Key);
	DDX_Text(pDX, m_wndQtyReplace2.GetDlgCtrlID(), m_nQtyReplace2);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndRemainQty.GetDlgCtrlID(), m_nRemainQty);

}
void CMaterialReplaceDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CMaterialReplaceDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CMaterialReplaceDialog::SetDefaultValues(){

	m_szOriginalName.Empty();
	m_nOnHand=0;
	m_szReplaceName1Key.Empty();
	m_nQtyReplace1=0;
	m_szReplaceName2Key.Empty();
	m_nQtyReplace2=0;
	m_szNote.Empty();
	m_nRemainQty=0;

}
int CMaterialReplaceDialog::SetMode(int nMode){
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
/*void CMaterialReplaceDialog::OnOriginalNameChange(){
	
} */
/*void CMaterialReplaceDialog::OnOriginalNameSetfocus(){
	
} */
/*void CMaterialReplaceDialog::OnOriginalNameKillfocus(){
	
} */
int CMaterialReplaceDialog::OnOriginalNameCheckValue(){
	return 0;
} 
/*void CMaterialReplaceDialog::OnOnHandChange(){
	
} */
/*void CMaterialReplaceDialog::OnOnHandSetfocus(){
	
} */
/*void CMaterialReplaceDialog::OnOnHandKillfocus(){
	
} */
int CMaterialReplaceDialog::OnOnHandCheckValue(){
	return 0;
} 
void CMaterialReplaceDialog::OnReplaceName1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMaterialReplaceDialog::OnReplaceName1Selendok(){
	 
}
/*void CMaterialReplaceDialog::OnReplaceName1Setfocus(){
	
}*/
/*void CMaterialReplaceDialog::OnReplaceName1Killfocus(){
	
}*/
long CMaterialReplaceDialog::OnReplaceName1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReplaceName1.IsSearchKey() && !m_szReplaceName1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReplaceName1Key
};
	m_wndReplaceName1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReplaceName1.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CMaterialReplaceDialog::OnReplaceName1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CMaterialReplaceDialog::OnQtyReplace1Change(){
	
} */
/*void CMaterialReplaceDialog::OnQtyReplace1Setfocus(){
	
} */
/*void CMaterialReplaceDialog::OnQtyReplace1Killfocus(){
	
} */
int CMaterialReplaceDialog::OnQtyReplace1CheckValue(){
	return 0;
} 
void CMaterialReplaceDialog::OnReplaceName2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMaterialReplaceDialog::OnReplaceName2Selendok(){
	 
}
/*void CMaterialReplaceDialog::OnReplaceName2Setfocus(){
	
}*/
/*void CMaterialReplaceDialog::OnReplaceName2Killfocus(){
	
}*/
long CMaterialReplaceDialog::OnReplaceName2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReplaceName2.IsSearchKey() && !m_szReplaceName2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szReplaceName2Key
};
	m_wndReplaceName2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReplaceName2.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CMaterialReplaceDialog::OnReplaceName2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CMaterialReplaceDialog::OnQtyReplace2Change(){
	
} */
/*void CMaterialReplaceDialog::OnQtyReplace2Setfocus(){
	
} */
/*void CMaterialReplaceDialog::OnQtyReplace2Killfocus(){
	
} */
int CMaterialReplaceDialog::OnQtyReplace2CheckValue(){
	return 0;
} 
/*void CMaterialReplaceDialog::OnNoteChange(){
	
} */
/*void CMaterialReplaceDialog::OnNoteSetfocus(){
	
} */
/*void CMaterialReplaceDialog::OnNoteKillfocus(){
	
} */
int CMaterialReplaceDialog::OnNoteCheckValue(){
	return 0;
} 
/*void CMaterialReplaceDialog::OnRemainQtyChange(){
	
} */
/*void CMaterialReplaceDialog::OnRemainQtySetfocus(){
	
} */
/*void CMaterialReplaceDialog::OnRemainQtyKillfocus(){
	
} */
int CMaterialReplaceDialog::OnRemainQtyCheckValue(){
	return 0;
} 
void CMaterialReplaceDialog::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMaterialReplaceDialog::OnOKSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CMaterialReplaceDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CMaterialReplaceDialog::OnAddMaterialReplaceDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CMaterialReplaceDialog::OnEditMaterialReplaceDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CMaterialReplaceDialog::OnDeleteMaterialReplaceDialog(){
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
 		OnCancelMaterialReplaceDialog();
 	}
	return 0;
}
int CMaterialReplaceDialog::OnSaveMaterialReplaceDialog(){
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
 		//OnMaterialReplaceDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CMaterialReplaceDialog::OnCancelMaterialReplaceDialog(){
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
int CMaterialReplaceDialog::OnMaterialReplaceDialogListLoadData(){
	return 0;
}
