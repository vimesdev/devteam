#include "HMSPrescriptionDlg.h"
#include "MainFrm.h"
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDlg*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionDlg*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionDlg*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDlg*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDlg*)pWnd)->OnListDeleteItem();
} 
/*static void _OnAdviceChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionDlg *)pWnd)->OnAdviceChange();
} */
/*static void _OnAdviceSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDlg *)pWnd)->OnAdviceSetfocus();} */ 
/*static void _OnAdviceKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionDlg *)pWnd)->OnAdviceKillfocus();
} */
static int _OnAdviceCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionDlg *)pWnd)->OnAdviceCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPrescriptionDlg *pVw = (CHMSPrescriptionDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPrescriptionDlg *pVw = (CHMSPrescriptionDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSendSelectFnc(CWnd *pWnd){
	CHMSPrescriptionDlg *pVw = (CHMSPrescriptionDlg *)pWnd;
	pVw->OnSendSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPrescriptionDlg *pVw = (CHMSPrescriptionDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDlg*)pWnd)->OnAddHMSPrescriptionDlg();
} 
static int _OnEditHMSPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDlg*)pWnd)->OnEditHMSPrescriptionDlg();
} 
static int _OnDeleteHMSPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDlg*)pWnd)->OnDeleteHMSPrescriptionDlg();
} 
static int _OnSaveHMSPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDlg*)pWnd)->OnSaveHMSPrescriptionDlg();
} 
static int _OnCancelHMSPrescriptionDlgFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionDlg*)pWnd)->OnCancelHMSPrescriptionDlg();
} 
CHMSPrescriptionDlg::CHMSPrescriptionDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 635;
	m_nDlgHeight = 640;
	SetDefaultValues();
}
CHMSPrescriptionDlg::~CHMSPrescriptionDlg(){
}
void CHMSPrescriptionDlg::OnCreateComponents(){
	m_wndPrescriptionInformation.Create(this, _T("Prescription Information"), 5, 5, 625, 600);
	m_wndOrderList.Create(this,10, 30, 620, 130); 
	m_wndList.Create(this,10, 135, 620, 535); 
	m_wndAdviceLabel.Create(this, _T("Advice"), 10, 540, 80, 565);
	m_wndAdvice.Create(this,85, 540, 620, 595); 
	m_wndAdd.Create(this, _T("&Add"), 250, 605, 340, 630);
	m_wndDelete.Create(this, _T("&Delete"), 345, 605, 435, 630);
	m_wndSend.Create(this, _T("&Confirm"), 440, 605, 525, 630);
	m_wndPrint.Create(this, _T("&Print"), 530, 605, 620, 630);

}
void CHMSPrescriptionDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAdvice.SetLimitText(1024);
	m_wndAdvice.SetCheckValue(true);





}
void CHMSPrescriptionDlg::OnSetWindowEvents(){
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
void CHMSPrescriptionDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAdvice.GetDlgCtrlID(), m_szAdvice);

}
void CHMSPrescriptionDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescriptionDlg::SetDefaultValues(){

	m_szAdvice.Empty();

}
int CHMSPrescriptionDlg::SetMode(int nMode){
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
void CHMSPrescriptionDlg::OnOrderListDblClick(){
	
} 
void CHMSPrescriptionDlg::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionDlg::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionDlg::OnOrderListLoadData(){
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
void CHMSPrescriptionDlg::OnListDblClick(){
	
} 
void CHMSPrescriptionDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionDlg::OnListLoadData(){
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
/*void CHMSPrescriptionDlg::OnAdviceChange(){
	
} */
/*void CHMSPrescriptionDlg::OnAdviceSetfocus(){
	
} */
/*void CHMSPrescriptionDlg::OnAdviceKillfocus(){
	
} */
int CHMSPrescriptionDlg::OnAdviceCheckValue(){
	return 0;
} 
void CHMSPrescriptionDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionDlg::OnSendSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionDlg::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionDlg::OnAddHMSPrescriptionDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionDlg::OnEditHMSPrescriptionDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionDlg::OnDeleteHMSPrescriptionDlg(){
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
 		OnCancelHMSPrescriptionDlg();
 	}
	return 0;
}
int CHMSPrescriptionDlg::OnSaveHMSPrescriptionDlg(){
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
 		//OnHMSPrescriptionDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionDlg::OnCancelHMSPrescriptionDlg(){
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
int CHMSPrescriptionDlg::OnHMSPrescriptionDlgListLoadData(){
	return 0;
}
