#include "PurchaseOrderMemo.h"
#include "MainFrame_E10.h"
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CPurchaseOrderMemo *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderMemo *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderMemo *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderMemo *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderMemo *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderMemo *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderMemo *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderMemo *)pWnd)->OnReferenceCheckValue();
} 
static void _OnPriceIncludingVATSelectFnc(CWnd *pWnd){
	 ((CPurchaseOrderMemo*)pWnd)->OnPriceIncludingVATSelect();
}
static int _OnAddPurchaseOrderMemoFnc(CWnd *pWnd){
	 return ((CPurchaseOrderMemo*)pWnd)->OnAddPurchaseOrderMemo();
} 
static int _OnEditPurchaseOrderMemoFnc(CWnd *pWnd){
	 return ((CPurchaseOrderMemo*)pWnd)->OnEditPurchaseOrderMemo();
} 
static int _OnDeletePurchaseOrderMemoFnc(CWnd *pWnd){
	 return ((CPurchaseOrderMemo*)pWnd)->OnDeletePurchaseOrderMemo();
} 
static int _OnSavePurchaseOrderMemoFnc(CWnd *pWnd){
	 return ((CPurchaseOrderMemo*)pWnd)->OnSavePurchaseOrderMemo();
} 
static int _OnCancelPurchaseOrderMemoFnc(CWnd *pWnd){
	 return ((CPurchaseOrderMemo*)pWnd)->OnCancelPurchaseOrderMemo();
} 
CPurchaseOrderMemo::CPurchaseOrderMemo(){

	m_nDlgWidth = 715;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CPurchaseOrderMemo::~CPurchaseOrderMemo(){
}
void CPurchaseOrderMemo::OnCreateComponents(){
	m_wndNoteLabel.Create(this, _T("Note"), 5, 5, 125, 30);
	m_wndNote.Create(this,130, 5, 705, 85); 
	m_wndReferenceLabel.Create(this, _T("Order Reference"), 5, 90, 125, 115);
	m_wndReference.Create(this,130, 90, 540, 115); 
	m_wndPriceIncludingVAT.Create(this, _T("Price Including VAT"), 545, 90, 705, 115);

}
void CPurchaseOrderMemo::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndNote.SetMultiLine(TRUE);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);
	m_wndReference.SetLimitText(35);
	m_wndReference.SetCheckValue(true);

}
void CPurchaseOrderMemo::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);
	m_wndPriceIncludingVAT.SetEvent(WE_CLICK, _OnPriceIncludingVATSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderMemoFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderMemoFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderMemoFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderMemoFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderMemoFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPurchaseOrderMemo::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_Check(pDX, m_wndPriceIncludingVAT.GetDlgCtrlID(), m_bPriceIncludingVAT);

}
void CPurchaseOrderMemo::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderMemo::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseOrderMemo::SetDefaultValues(){

	m_szNote.Empty();
	m_szReference.Empty();
	m_bPriceIncludingVAT=FALSE;

}
int CPurchaseOrderMemo::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
/*void CPurchaseOrderMemo::OnNoteChange(){
	
} */
/*void CPurchaseOrderMemo::OnNoteSetfocus(){
	
} */
/*void CPurchaseOrderMemo::OnNoteKillfocus(){
	
} */
int CPurchaseOrderMemo::OnNoteCheckValue(){
	return 0;
} 
/*void CPurchaseOrderMemo::OnReferenceChange(){
	
} */
/*void CPurchaseOrderMemo::OnReferenceSetfocus(){
	
} */
/*void CPurchaseOrderMemo::OnReferenceKillfocus(){
	
} */
int CPurchaseOrderMemo::OnReferenceCheckValue(){
	return 0;
} 
	void CPurchaseOrderMemo::OnPriceIncludingVATSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
int CPurchaseOrderMemo::OnAddPurchaseOrderMemo(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderMemo::OnEditPurchaseOrderMemo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderMemo::OnDeletePurchaseOrderMemo(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelPurchaseOrderMemo();
 	}
	return 0;
}
int CPurchaseOrderMemo::OnSavePurchaseOrderMemo(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPurchaseOrderMemoListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderMemo::OnCancelPurchaseOrderMemo(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CPurchaseOrderMemo::OnPurchaseOrderMemoListLoadData(){
	return 0;
}
