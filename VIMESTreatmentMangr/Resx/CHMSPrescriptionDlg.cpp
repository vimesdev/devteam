#include "CHMSPrescriptionDlg.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSPrescriptionDlg*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CCHMSPrescriptionDlg*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSPrescriptionDlg*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSPrescriptionDlg*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CCHMSPrescriptionDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CCHMSPrescriptionDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CCHMSPrescriptionDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CCHMSPrescriptionDlg*)pWnd)->OnListDeleteItem();
} 
/*static void _OnAdviceChangeFnc(CWnd *pWnd){
	((CCHMSPrescriptionDlg *)pWnd)->OnAdviceChange();
} */
/*static void _OnAdviceSetfocusFnc(CWnd *pWnd){
	((CCHMSPrescriptionDlg *)pWnd)->OnAdviceSetfocus();} */ 
/*static void _OnAdviceKillfocusFnc(CWnd *pWnd){
	((CCHMSPrescriptionDlg *)pWnd)->OnAdviceKillfocus();
} */
static int _OnAdviceCheckValueFnc(CWnd *pWnd){
	return ((CCHMSPrescriptionDlg *)pWnd)->OnAdviceCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CCHMSPrescriptionDlg *pVw = (CCHMSPrescriptionDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CCHMSPrescriptionDlg *pVw = (CCHMSPrescriptionDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CCHMSPrescriptionDlg *pVw = (CCHMSPrescriptionDlg *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CCHMSPrescriptionDlg *pVw = (CCHMSPrescriptionDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddCHMSPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CCHMSPrescriptionDlg*)pWnd)->OnAddCHMSPrescriptionDlg();
} 
static int _OnEditCHMSPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CCHMSPrescriptionDlg*)pWnd)->OnEditCHMSPrescriptionDlg();
} 
static int _OnDeleteCHMSPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CCHMSPrescriptionDlg*)pWnd)->OnDeleteCHMSPrescriptionDlg();
} 
static int _OnSaveCHMSPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CCHMSPrescriptionDlg*)pWnd)->OnSaveCHMSPrescriptionDlg();
} 
static int _OnCancelCHMSPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CCHMSPrescriptionDlg*)pWnd)->OnCancelCHMSPrescriptionDlg();
} 
CCHMSPrescriptionDlg::CCHMSPrescriptionDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CCHMSPrescriptionDlg::~CCHMSPrescriptionDlg(){
}
void CCHMSPrescriptionDlg::OnCreateComponents(){
	m_wndPrescriptionInformation.Create(this, _T("Prescription Information"), 5, 5, 800, 540);
	m_wndOrderList.Create(this,10, 30, 795, 160); 
	m_wndList.Create(this,10, 165, 795, 535); 
	m_wndAdviceLabel.Create(this, _T("Advice"), 10, 545, 80, 570);
	m_wndAdvice.Create(this,85, 545, 795, 570); 
	m_wndAdd.Create(this, _T("&Add"), 425, 575, 515, 600);
	m_wndDelete.Create(this, _T("&Delete"), 520, 575, 610, 600);
	m_wndSend.Create(this, _T("&Confirm"), 615, 575, 700, 600);
	m_wndPrint.Create(this, _T("&Print"), 705, 575, 795, 600);

}
void CCHMSPrescriptionDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdvice.SetLimitText(1024);
	m_wndAdvice.SetCheckValue(true);





}
void CCHMSPrescriptionDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndAdvice.SetEvent(WE_CHANGE, _OnAdviceChangeFnc);
	//m_wndAdvice.SetEvent(WE_SETFOCUS, _OnAdviceSetfocusFnc);
	//m_wndAdvice.SetEvent(WE_KILLFOCUS, _OnAdviceKillfocusFnc);
	m_wndAdvice.SetEvent(WE_CHECKVALUE, _OnAdviceCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSend.SetEvent(WE_CLICK, _OnSendSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	SetMode(VM_NONE);

}
void CCHMSPrescriptionDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAdvice.GetDlgCtrlID(), m_szAdvice);

}
void CCHMSPrescriptionDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSPrescriptionDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSPrescriptionDlg::SetDefaultValues(){

	m_szAdvice.Empty();

}
int CCHMSPrescriptionDlg::SetMode(int nMode){
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
void CCHMSPrescriptionDlg::OnOrderListDblClick(){
	
} 
void CCHMSPrescriptionDlg::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSPrescriptionDlg::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSPrescriptionDlg::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CCHMSPrescriptionDlg::OnListDblClick(){
	
} 
void CCHMSPrescriptionDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSPrescriptionDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CCHMSPrescriptionDlg::OnListLoadData(){
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
/*void CCHMSPrescriptionDlg::OnAdviceChange(){
	
} */
/*void CCHMSPrescriptionDlg::OnAdviceSetfocus(){
	
} */
/*void CCHMSPrescriptionDlg::OnAdviceKillfocus(){
	
} */
int CCHMSPrescriptionDlg::OnAdviceCheckValue(){
	return 0;
} 
void CCHMSPrescriptionDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSPrescriptionDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSPrescriptionDlg::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSPrescriptionDlg::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSPrescriptionDlg::OnAddCHMSPrescriptionDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSPrescriptionDlg::OnEditCHMSPrescriptionDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSPrescriptionDlg::OnDeleteCHMSPrescriptionDlg(){
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
 		OnCancelCHMSPrescriptionDlg();
 	}
	return 0;
}
int CCHMSPrescriptionDlg::OnSaveCHMSPrescriptionDlg(){
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
 		//OnCHMSPrescriptionDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSPrescriptionDlg::OnCancelCHMSPrescriptionDlg(){
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
int CCHMSPrescriptionDlg::OnCHMSPrescriptionDlgListLoadData(){
	return 0;
}
