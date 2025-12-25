#include "PurchaseOrderExtra.h"
#include "MainFrame_E10.h"
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CPurchaseOrderExtra *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderExtra *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderExtra *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderExtra *)pWnd)->OnNoteCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CPurchaseOrderExtra *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CPurchaseOrderExtra *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CPurchaseOrderExtra *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CPurchaseOrderExtra *)pWnd)->OnReferenceCheckValue();
} 
static void _OnPriceIncludingVATSelectFnc(CWnd *pWnd){
	 ((CPurchaseOrderExtra*)pWnd)->OnPriceIncludingVATSelect();
}
static int _OnAddPurchaseOrderExtraFnc(CWnd *pWnd){
	 return ((CPurchaseOrderExtra*)pWnd)->OnAddPurchaseOrderExtra();
} 
static int _OnEditPurchaseOrderExtraFnc(CWnd *pWnd){
	 return ((CPurchaseOrderExtra*)pWnd)->OnEditPurchaseOrderExtra();
} 
static int _OnDeletePurchaseOrderExtraFnc(CWnd *pWnd){
	 return ((CPurchaseOrderExtra*)pWnd)->OnDeletePurchaseOrderExtra();
} 
static int _OnSavePurchaseOrderExtraFnc(CWnd *pWnd){
	 return ((CPurchaseOrderExtra*)pWnd)->OnSavePurchaseOrderExtra();
} 
static int _OnCancelPurchaseOrderExtraFnc(CWnd *pWnd){
	 return ((CPurchaseOrderExtra*)pWnd)->OnCancelPurchaseOrderExtra();
} 
CPurchaseOrderExtra::CPurchaseOrderExtra(){

	m_nDlgWidth = 715;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CPurchaseOrderExtra::~CPurchaseOrderExtra(){
}
void CPurchaseOrderExtra::OnCreateComponents(){
	m_wndNoteLabel.Create(this, _T("Note"), 5, 5, 125, 30);
	m_wndNote.Create(this,130, 5, 705, 85); 
	m_wndReferenceLabel.Create(this, _T("Reference Documents"), 5, 90, 125, 115);
	m_wndReference.Create(this,130, 90, 540, 115); 
	m_wndPriceIncludingVAT.Create(this, _T("Price Including VAT"), 545, 90, 705, 115);

}
void CPurchaseOrderExtra::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndNote.SetMultiLine(TRUE);
	m_wndNote.SetLimitText(35);
	m_wndNote.SetCheckValue(true);
	m_wndReference.SetLimitText(35);
	m_wndReference.SetCheckValue(true);

}
void CPurchaseOrderExtra::OnSetWindowEvents(){
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
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPurchaseOrderExtraFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPurchaseOrderExtraFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePurchaseOrderExtraFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePurchaseOrderExtraFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPurchaseOrderExtraFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPurchaseOrderExtra::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_Check(pDX, m_wndPriceIncludingVAT.GetDlgCtrlID(), m_bPriceIncludingVAT);

}
void CPurchaseOrderExtra::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPurchaseOrderExtra::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPurchaseOrderExtra::SetDefaultValues(){

	m_szNote.Empty();
	m_szReference.Empty();
	m_bPriceIncludingVAT=FALSE;

}
int CPurchaseOrderExtra::SetMode(int nMode){
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
/*void CPurchaseOrderExtra::OnNoteChange(){
	
} */
/*void CPurchaseOrderExtra::OnNoteSetfocus(){
	
} */
/*void CPurchaseOrderExtra::OnNoteKillfocus(){
	
} */
int CPurchaseOrderExtra::OnNoteCheckValue(){
	return 0;
} 
/*void CPurchaseOrderExtra::OnReferenceChange(){
	
} */
/*void CPurchaseOrderExtra::OnReferenceSetfocus(){
	
} */
/*void CPurchaseOrderExtra::OnReferenceKillfocus(){
	
} */
int CPurchaseOrderExtra::OnReferenceCheckValue(){
	return 0;
} 
	void CPurchaseOrderExtra::OnPriceIncludingVATSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
int CPurchaseOrderExtra::OnAddPurchaseOrderExtra(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPurchaseOrderExtra::OnEditPurchaseOrderExtra(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPurchaseOrderExtra::OnDeletePurchaseOrderExtra(){
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
 		OnCancelPurchaseOrderExtra();
 	}
	return 0;
}
int CPurchaseOrderExtra::OnSavePurchaseOrderExtra(){
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
 		//OnPurchaseOrderExtraListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPurchaseOrderExtra::OnCancelPurchaseOrderExtra(){
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
int CPurchaseOrderExtra::OnPurchaseOrderExtraListLoadData(){
	return 0;
}
