#include "ProductPriceSetupDialog.h"
#include "MainFrame_E10.h"
/*static void _OnSale1ChangeFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale1Change();
} */
/*static void _OnSale1SetfocusFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale1Setfocus();} */ 
/*static void _OnSale1KillfocusFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale1Killfocus();
} */
static int _OnSale1CheckValueFnc(CWnd *pWnd){
	return ((CProductPriceSetupDialog *)pWnd)->OnSale1CheckValue();
} 
/*static void _OnSale2ChangeFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale2Change();
} */
/*static void _OnSale2SetfocusFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale2Setfocus();} */ 
/*static void _OnSale2KillfocusFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale2Killfocus();
} */
static int _OnSale2CheckValueFnc(CWnd *pWnd){
	return ((CProductPriceSetupDialog *)pWnd)->OnSale2CheckValue();
} 
/*static void _OnSale3ChangeFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale3Change();
} */
/*static void _OnSale3SetfocusFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale3Setfocus();} */ 
/*static void _OnSale3KillfocusFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale3Killfocus();
} */
static int _OnSale3CheckValueFnc(CWnd *pWnd){
	return ((CProductPriceSetupDialog *)pWnd)->OnSale3CheckValue();
} 
/*static void _OnSale4ChangeFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale4Change();
} */
/*static void _OnSale4SetfocusFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale4Setfocus();} */ 
/*static void _OnSale4KillfocusFnc(CWnd *pWnd){
	((CProductPriceSetupDialog *)pWnd)->OnSale4Killfocus();
} */
static int _OnSale4CheckValueFnc(CWnd *pWnd){
	return ((CProductPriceSetupDialog *)pWnd)->OnSale4CheckValue();
} 
static void _OnApply1SelectFnc(CWnd *pWnd){
	 ((CProductPriceSetupDialog*)pWnd)->OnApply1Select();
}
static void _OnApply2SelectFnc(CWnd *pWnd){
	 ((CProductPriceSetupDialog*)pWnd)->OnApply2Select();
}
static void _OnApply3SelectFnc(CWnd *pWnd){
	 ((CProductPriceSetupDialog*)pWnd)->OnApply3Select();
}
static void _OnApply4SelectFnc(CWnd *pWnd){
	 ((CProductPriceSetupDialog*)pWnd)->OnApply4Select();
}
static void _OnOKSelectFnc(CWnd *pWnd){
	CProductPriceSetupDialog *pVw = (CProductPriceSetupDialog *)pWnd;
	pVw->OnOKSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CProductPriceSetupDialog *pVw = (CProductPriceSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddProductPriceSetupDialogFnc(CWnd *pWnd){
	 return ((CProductPriceSetupDialog*)pWnd)->OnAddProductPriceSetupDialog();
} 
static int _OnEditProductPriceSetupDialogFnc(CWnd *pWnd){
	 return ((CProductPriceSetupDialog*)pWnd)->OnEditProductPriceSetupDialog();
} 
static int _OnDeleteProductPriceSetupDialogFnc(CWnd *pWnd){
	 return ((CProductPriceSetupDialog*)pWnd)->OnDeleteProductPriceSetupDialog();
} 
static int _OnSaveProductPriceSetupDialogFnc(CWnd *pWnd){
	 return ((CProductPriceSetupDialog*)pWnd)->OnSaveProductPriceSetupDialog();
} 
static int _OnCancelProductPriceSetupDialogFnc(CWnd *pWnd){
	 return ((CProductPriceSetupDialog*)pWnd)->OnCancelProductPriceSetupDialog();
} 
CProductPriceSetupDialog::CProductPriceSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 275;
	m_nDlgHeight = 190;
	SetDefaultValues();
}
CProductPriceSetupDialog::~CProductPriceSetupDialog(){
}
void CProductPriceSetupDialog::OnCreateComponents(){
	m_wndPriceSetup.Create(this, _T("Price Setup"), 5, 5, 300, 150);
	m_wndSale1Label.Create(this, _T("Service Price"), 10, 30, 90, 55);
	m_wndSale1.Create(this,95, 30, 175, 55); 
	m_wndSale2Label.Create(this, _T("Insurance Price"), 11, 60, 91, 85);
	m_wndSale2.Create(this,96, 60, 176, 85); 
	m_wndSale3Label.Create(this, _T("Policy Price"), 11, 90, 91, 115);
	m_wndSale3.Create(this,96, 90, 176, 115); 
	m_wndSale4Label.Create(this, _T("Require Price"), 11, 120, 91, 145);
	m_wndSale4.Create(this,96, 120, 176, 145); 
	m_wndApply1.Create(this, _T("Apply"), 180, 30, 295, 55);
	m_wndApply2.Create(this, _T("Apply"), 180, 60, 295, 85);
	m_wndApply3.Create(this, _T("Apply"), 180, 90, 295, 115);
	m_wndApply4.Create(this, _T("Apply"), 180, 120, 295, 145);	
	//m_wndOK.Create(this, _T("&OK"), 120, 155, 210, 180);
	m_wndCancel.Create(this, _T("&Cancel"), 215, 155, 295, 180);


	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	if(pMF->GetModuleID() == _T("PM") || pMF->GetModuleID() == _T("MA"))
	{
		m_wndSale1Label.SetWindowText(_T("Service Price"));
		m_wndSale2Label.SetWindowText(_T("Insurance Price"));
		m_wndSale3Label.SetWindowText(_T("Policy Price"));
		m_wndSale4Label.SetWindowText(_T("Request Price"));
		m_wndApply1.SetWindowText(_T("Insurance Payment"));
		m_wndApply2.SetWindowText(_T("Policy Payment"));
		m_wndApply3.SetWindowText(_T("Balance Payment"));
		m_wndApply4.SetWindowText(_T("Surgery Payment"));
	}

}
void CProductPriceSetupDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndSale1.SetLimitText(16);
	m_wndSale1.SetCheckValue(true);
	m_wndSale1.SetCurrencyFormat();
	m_wndSale2.SetLimitText(16);
	m_wndSale2.SetCheckValue(true);
	m_wndSale2.SetCurrencyFormat();
	m_wndSale3.SetLimitText(16);
	m_wndSale3.SetCheckValue(true);
	m_wndSale3.SetCurrencyFormat();
	m_wndSale4.SetLimitText(16);
	m_wndSale4.SetCheckValue(true);
	m_wndSale4.SetCurrencyFormat();
	m_wndSale2.SetReadOnly(TRUE);
	m_wndSale3.SetReadOnly(TRUE);
	m_wndSale4.SetReadOnly(TRUE);
	m_wndSale4.ShowWindow(SW_HIDE);
	m_wndSale4Label.ShowWindow(SW_HIDE);

}
void CProductPriceSetupDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndSale1.SetEvent(WE_CHANGE, _OnSale1ChangeFnc);
	//m_wndSale1.SetEvent(WE_SETFOCUS, _OnSale1SetfocusFnc);
	//m_wndSale1.SetEvent(WE_KILLFOCUS, _OnSale1KillfocusFnc);
	m_wndSale1.SetEvent(WE_CHECKVALUE, _OnSale1CheckValueFnc);
	//m_wndSale2.SetEvent(WE_CHANGE, _OnSale2ChangeFnc);
	//m_wndSale2.SetEvent(WE_SETFOCUS, _OnSale2SetfocusFnc);
	//m_wndSale2.SetEvent(WE_KILLFOCUS, _OnSale2KillfocusFnc);
	m_wndSale2.SetEvent(WE_CHECKVALUE, _OnSale2CheckValueFnc);
	//m_wndSale3.SetEvent(WE_CHANGE, _OnSale3ChangeFnc);
	//m_wndSale3.SetEvent(WE_SETFOCUS, _OnSale3SetfocusFnc);
	//m_wndSale3.SetEvent(WE_KILLFOCUS, _OnSale3KillfocusFnc);
	m_wndSale3.SetEvent(WE_CHECKVALUE, _OnSale3CheckValueFnc);
	//m_wndSale4.SetEvent(WE_CHANGE, _OnSale4ChangeFnc);
	//m_wndSale4.SetEvent(WE_SETFOCUS, _OnSale4SetfocusFnc);
	//m_wndSale4.SetEvent(WE_KILLFOCUS, _OnSale4KillfocusFnc);
	m_wndSale4.SetEvent(WE_CHECKVALUE, _OnSale4CheckValueFnc);
	m_wndApply1.SetEvent(WE_CLICK, _OnApply1SelectFnc);
	m_wndApply2.SetEvent(WE_CLICK, _OnApply2SelectFnc);
	m_wndApply3.SetEvent(WE_CLICK, _OnApply3SelectFnc);
	m_wndApply4.SetEvent(WE_CLICK, _OnApply4SelectFnc);
	m_wndOK.SetEvent(WE_CLICK, _OnOKSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();
	SetMode(VM_VIEW);
}
void CProductPriceSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSale1.GetDlgCtrlID(), m_nSale1);
	DDX_Text(pDX, m_wndSale2.GetDlgCtrlID(), m_nSale2);
	DDX_Text(pDX, m_wndSale3.GetDlgCtrlID(), m_nSale3);
	DDX_Text(pDX, m_wndSale4.GetDlgCtrlID(), m_nSale4);
	DDX_Check(pDX, m_wndApply1.GetDlgCtrlID(), m_bApply1);
	DDX_Check(pDX, m_wndApply2.GetDlgCtrlID(), m_bApply2);
	DDX_Check(pDX, m_wndApply3.GetDlgCtrlID(), m_bApply3);
	DDX_Check(pDX, m_wndApply4.GetDlgCtrlID(), m_bApply4);
}
void CProductPriceSetupDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM m_product WHERE mp_product_id = %ld"), m_nProductID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		CString tmpStr;
		if (m_nSale1 <= 0)
			rs.GetValue(_T("mp_saleprice1"), m_nSale1);
		rs.GetValue(_T("mp_saleprice2"), m_nSale2);
		rs.GetValue(_T("mp_saleprice3"), m_nSale3);
		rs.GetValue(_T("mp_saleprice4"), m_nSale4);
		rs.GetValue(_T("mp_ispaid1"), tmpStr);
		STR2BOOL(tmpStr, m_bApply1);
		rs.GetValue(_T("mp_ispaid2"), tmpStr);
		STR2BOOL(tmpStr, m_bApply2);
		rs.GetValue(_T("mp_ispaid3"), tmpStr);
		STR2BOOL(tmpStr, m_bApply3);
		rs.GetValue(_T("mp_ispaid4"), tmpStr);
		STR2BOOL(tmpStr, m_bApply4);		
		UpdateData(false);
	}

}
void CProductPriceSetupDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductPriceSetupDialog::SetDefaultValues(){
	m_nSale2=0;
	m_nSale3=0;
	m_nSale4=0;
	m_bApply1=FALSE;
	m_bApply2=FALSE;
	m_bApply3=FALSE;
	m_bApply4=FALSE;

}
int CProductPriceSetupDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
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
		m_wndSale2.EnableWindow(FALSE);
		m_wndSale3.EnableWindow(FALSE);
		m_wndSale4.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CProductPriceSetupDialog::OnSale1Change(){
	
} */
/*void CProductPriceSetupDialog::OnSale1Setfocus(){
	
} */
/*void CProductPriceSetupDialog::OnSale1Killfocus(){
	
} */
int CProductPriceSetupDialog::OnSale1CheckValue(){
	return 0;
} 
/*void CProductPriceSetupDialog::OnSale2Change(){
	
} */
/*void CProductPriceSetupDialog::OnSale2Setfocus(){
	
} */
/*void CProductPriceSetupDialog::OnSale2Killfocus(){
	
} */
int CProductPriceSetupDialog::OnSale2CheckValue(){
	return 0;
} 
/*void CProductPriceSetupDialog::OnSale3Change(){
	
} */
/*void CProductPriceSetupDialog::OnSale3Setfocus(){
	
} */
/*void CProductPriceSetupDialog::OnSale3Killfocus(){
	
} */
int CProductPriceSetupDialog::OnSale3CheckValue(){
	return 0;
} 
/*void CProductPriceSetupDialog::OnSale4Change(){
	
} */
/*void CProductPriceSetupDialog::OnSale4Setfocus(){
	
} */
/*void CProductPriceSetupDialog::OnSale4Killfocus(){
	
} */
int CProductPriceSetupDialog::OnSale4CheckValue(){
	return 0;
} 
void CProductPriceSetupDialog::OnApply1Select(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CProductPriceSetupDialog::OnApply2Select(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CProductPriceSetupDialog::OnApply3Select(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
}
void CProductPriceSetupDialog::OnApply4Select(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
void CProductPriceSetupDialog::OnOKSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	OnOK();
} 
void CProductPriceSetupDialog::OnCancelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CProductPriceSetupDialog::OnAddProductPriceSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductPriceSetupDialog::OnEditProductPriceSetupDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductPriceSetupDialog::OnDeleteProductPriceSetupDialog(){
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
 		OnCancelProductPriceSetupDialog();
 	}
	return 0;
}
int CProductPriceSetupDialog::OnSaveProductPriceSetupDialog(){
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
 		//OnProductPriceSetupDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CProductPriceSetupDialog::OnCancelProductPriceSetupDialog(){
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
int CProductPriceSetupDialog::OnProductPriceSetupDialogListLoadData(){
	return 0;
}
