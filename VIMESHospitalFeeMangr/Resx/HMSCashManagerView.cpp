#include "HMSCashManagerView.h"
#include "MainFrm.h"
static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSCashManagerView*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCashManagerView*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSCashManagerView*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCashManagerView*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnListDeleteItem();
} 
/*static void _OnSearchPatientInfoChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnSearchPatientInfoChange();
} */
/*static void _OnSearchPatientInfoSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnSearchPatientInfoSetfocus();} */ 
/*static void _OnSearchPatientInfoKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnSearchPatientInfoKillfocus();
} */
static int _OnSearchPatientInfoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView *)pWnd)->OnSearchPatientInfoCheckValue();
} 
static void _OnSearchPatientSelectFnc(CWnd *pWnd){
	CHMSCashManagerView *pVw = (CHMSCashManagerView *)pWnd;
	pVw->OnSearchPatientSelect();
} 
/*static void _OnTotalRecvAmountChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalRecvAmountChange();
} */
/*static void _OnTotalRecvAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalRecvAmountSetfocus();} */ 
/*static void _OnTotalRecvAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalRecvAmountKillfocus();
} */
static int _OnTotalRecvAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView *)pWnd)->OnTotalRecvAmountCheckValue();
} 
/*static void _OnTotalPayAmountChangeFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalPayAmountChange();
} */
/*static void _OnTotalPayAmountSetfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalPayAmountSetfocus();} */ 
/*static void _OnTotalPayAmountKillfocusFnc(CWnd *pWnd){
	((CHMSCashManagerView *)pWnd)->OnTotalPayAmountKillfocus();
} */
static int _OnTotalPayAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSCashManagerView *)pWnd)->OnTotalPayAmountCheckValue();
} 
static int _OnAddHMSCashManagerViewFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnAddHMSCashManagerView();
} 
static int _OnEditHMSCashManagerViewFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnEditHMSCashManagerView();
} 
static int _OnDeleteHMSCashManagerViewFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnDeleteHMSCashManagerView();
} 
static int _OnSaveHMSCashManagerViewFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnSaveHMSCashManagerView();
} 
static int _OnCancelHMSCashManagerViewFnc(CWnd *pWnd){
	 return ((CHMSCashManagerView*)pWnd)->OnCancelHMSCashManagerView();
} 
CHMSCashManagerView::CHMSCashManagerView(){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSCashManagerView::~CHMSCashManagerView(){
}
void CHMSCashManagerView::OnCreateComponents(){
	m_wndTab.Create(this,5, 5, 960, 265); 
	m_wndPatientReceiptPaymentList.Create(this, _T("Patient receipt && payment list"), 5, 270, 960, 590);
	m_wndList.Create(this,10, 295, 955, 555); 
	m_wndSearchPatientInfoLabel.Create(this, _T("Search Patient"), 10, 560, 110, 585);
	m_wndSearchPatientInfo.Create(this,115, 560, 315, 585); 
	m_wndSearchPatient.Create(this, _T("@"), 320, 560, 345, 585);
	m_wndTotalRecvAmountLabel.Create(this, _T("Total Recv Amount"), 540, 560, 640, 585);
	m_wndTotalRecvAmount.Create(this,645, 560, 745, 585); 
	m_wndTotalPayAmountLabel.Create(this, _T("Total Pay Amount"), 750, 560, 850, 585);
	m_wndTotalPayAmount.Create(this,855, 560, 955, 585); 

}
void CHMSCashManagerView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndSearchPatientInfo.SetLimitText(35);
	m_wndSearchPatientInfo.SetCheckValue(true);
	m_wndTotalRecvAmount.SetLimitText(16);
	m_wndTotalRecvAmount.SetCheckValue(true);
	m_wndTotalPayAmount.SetLimitText(16);
	m_wndTotalPayAmount.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(1, _T("Patient Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Document No"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(3, _T("Record No"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(4, _T("Department"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 120);

}
void CHMSCashManagerView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndSearchPatientInfo.SetEvent(WE_CHANGE, _OnSearchPatientInfoChangeFnc);
	//m_wndSearchPatientInfo.SetEvent(WE_SETFOCUS, _OnSearchPatientInfoSetfocusFnc);
	//m_wndSearchPatientInfo.SetEvent(WE_KILLFOCUS, _OnSearchPatientInfoKillfocusFnc);
	m_wndSearchPatientInfo.SetEvent(WE_CHECKVALUE, _OnSearchPatientInfoCheckValueFnc);
	m_wndSearchPatient.SetEvent(WE_CLICK, _OnSearchPatientSelectFnc);
	//m_wndTotalRecvAmount.SetEvent(WE_CHANGE, _OnTotalRecvAmountChangeFnc);
	//m_wndTotalRecvAmount.SetEvent(WE_SETFOCUS, _OnTotalRecvAmountSetfocusFnc);
	//m_wndTotalRecvAmount.SetEvent(WE_KILLFOCUS, _OnTotalRecvAmountKillfocusFnc);
	m_wndTotalRecvAmount.SetEvent(WE_CHECKVALUE, _OnTotalRecvAmountCheckValueFnc);
	//m_wndTotalPayAmount.SetEvent(WE_CHANGE, _OnTotalPayAmountChangeFnc);
	//m_wndTotalPayAmount.SetEvent(WE_SETFOCUS, _OnTotalPayAmountSetfocusFnc);
	//m_wndTotalPayAmount.SetEvent(WE_KILLFOCUS, _OnTotalPayAmountKillfocusFnc);
	m_wndTotalPayAmount.SetEvent(WE_CHECKVALUE, _OnTotalPayAmountCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSCashManagerViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSCashManagerViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSCashManagerViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSCashManagerViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSCashManagerViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSCashManagerView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearchPatientInfo.GetDlgCtrlID(), m_szSearchPatientInfo);
	DDX_Text(pDX, m_wndTotalRecvAmount.GetDlgCtrlID(), m_nTotalRecvAmount);
	DDX_Text(pDX, m_wndTotalPayAmount.GetDlgCtrlID(), m_nTotalPayAmount);

}
void CHMSCashManagerView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCashManagerView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCashManagerView::SetDefaultValues(){

	m_szSearchPatientInfo.Empty();
	m_nTotalRecvAmount=0;
	m_nTotalPayAmount=0;

}
int CHMSCashManagerView::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CHMSCashManagerView::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSCashManagerView::OnListDblClick(){
	
} 
void CHMSCashManagerView::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSCashManagerView::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSCashManagerView::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("RecordNo")), 
			rs.GetValue(_T("Department")), 
			rs.GetValue(_T("Amount")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSCashManagerView::OnSearchPatientInfoChange(){
	
} */
/*void CHMSCashManagerView::OnSearchPatientInfoSetfocus(){
	
} */
/*void CHMSCashManagerView::OnSearchPatientInfoKillfocus(){
	
} */
int CHMSCashManagerView::OnSearchPatientInfoCheckValue(){
	return 0;
} 
void CHMSCashManagerView::OnSearchPatientSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CHMSCashManagerView::OnTotalRecvAmountChange(){
	
} */
/*void CHMSCashManagerView::OnTotalRecvAmountSetfocus(){
	
} */
/*void CHMSCashManagerView::OnTotalRecvAmountKillfocus(){
	
} */
int CHMSCashManagerView::OnTotalRecvAmountCheckValue(){
	return 0;
} 
/*void CHMSCashManagerView::OnTotalPayAmountChange(){
	
} */
/*void CHMSCashManagerView::OnTotalPayAmountSetfocus(){
	
} */
/*void CHMSCashManagerView::OnTotalPayAmountKillfocus(){
	
} */
int CHMSCashManagerView::OnTotalPayAmountCheckValue(){
	return 0;
} 
int CHMSCashManagerView::OnAddHMSCashManagerView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCashManagerView::OnEditHMSCashManagerView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCashManagerView::OnDeleteHMSCashManagerView(){
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
 		OnCancelHMSCashManagerView();
 	}
	return 0;
}
int CHMSCashManagerView::OnSaveHMSCashManagerView(){
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
 		//OnHMSCashManagerViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCashManagerView::OnCancelHMSCashManagerView(){
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
int CHMSCashManagerView::OnHMSCashManagerViewListLoadData(){
	return 0;
}
