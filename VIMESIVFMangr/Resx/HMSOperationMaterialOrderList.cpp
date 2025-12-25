#include "HMSOperationMaterialOrderList.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrderList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrderList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrderList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrderList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrderList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrderList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrderList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrderList *)pWnd)->OnToDateCheckValue();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrderList*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrderList*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationMaterialOrderList*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrderList*)pWnd)->OnOrderListDeleteItem();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationMaterialOrderList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSOperationMaterialOrderList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationMaterialOrderList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrderList*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrderList *pVw = (CHMSOperationMaterialOrderList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrderList *pVw = (CHMSOperationMaterialOrderList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrderList *pVw = (CHMSOperationMaterialOrderList *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrderList *pVw = (CHMSOperationMaterialOrderList *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSOperationMaterialOrderList *pVw = (CHMSOperationMaterialOrderList *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSOperationMaterialOrderListFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrderList*)pWnd)->OnAddHMSOperationMaterialOrderList();
} 
static int _OnEditHMSOperationMaterialOrderListFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrderList*)pWnd)->OnEditHMSOperationMaterialOrderList();
} 
static int _OnDeleteHMSOperationMaterialOrderListFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrderList*)pWnd)->OnDeleteHMSOperationMaterialOrderList();
} 
static int _OnSaveHMSOperationMaterialOrderListFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrderList*)pWnd)->OnSaveHMSOperationMaterialOrderList();
} 
static int _OnCancelHMSOperationMaterialOrderListFnc(CWnd *pWnd){
	 return ((CHMSOperationMaterialOrderList*)pWnd)->OnCancelHMSOperationMaterialOrderList();
} 
CHMSOperationMaterialOrderList::CHMSOperationMaterialOrderList(){

	m_nDlgWidth = 460;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CHMSOperationMaterialOrderList::~CHMSOperationMaterialOrderList(){
}
void CHMSOperationMaterialOrderList::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 445, 55); 
	m_wndPatientListInfo.Create(this, _T("Patient List"), 5, 5, 450, 590);
	m_wndOrderList.Create(this,10, 60, 445, 180); 
	m_wndList.Create(this,10, 185, 445, 585); 
	m_wndAdd.Create(this, _T("&Add"), 4, 595, 89, 620);
	m_wndDelete.Create(this, _T("&Delete"), 94, 595, 179, 620);
	m_wndConfirm.Create(this, _T("Confirm"), 184, 595, 269, 620);
	m_wndDiscard.Create(this, _T("Discard"), 274, 595, 359, 620);
	m_wndPrint.Create(this, _T("Print"), 364, 595, 449, 620);

}
void CHMSOperationMaterialOrderList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);


	m_wndOrderList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndOrderList.InsertColumn(1, _T("Order No"), CFMT_NUMBER, 90);
	m_wndOrderList.InsertColumn(2, _T("Order Date"), CFMT_DATE, 100);
	m_wndOrderList.InsertColumn(3, _T("Department"), CFMT_TEXT, 70);
	m_wndOrderList.InsertColumn(4, _T("Status"), CFMT_TEXT, 50);
	m_wndOrderList.InsertColumn(5, _T("Created By"), CFMT_TEXT, 80);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Doc No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 130);
	m_wndList.InsertColumn(3, _T("Operation Name"), CFMT_TEXT, 160);

}
void CHMSOperationMaterialOrderList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOperationMaterialOrderListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOperationMaterialOrderListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOperationMaterialOrderListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOperationMaterialOrderListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOperationMaterialOrderListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSOperationMaterialOrderList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSOperationMaterialOrderList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSOperationMaterialOrderList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOperationMaterialOrderList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSOperationMaterialOrderList::SetMode(int nMode){
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
/*void CHMSOperationMaterialOrderList::OnFromDateChange(){
	
} */
/*void CHMSOperationMaterialOrderList::OnFromDateSetfocus(){
	
} */
/*void CHMSOperationMaterialOrderList::OnFromDateKillfocus(){
	
} */
int CHMSOperationMaterialOrderList::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSOperationMaterialOrderList::OnToDateChange(){
	
} */
/*void CHMSOperationMaterialOrderList::OnToDateSetfocus(){
	
} */
/*void CHMSOperationMaterialOrderList::OnToDateKillfocus(){
	
} */
int CHMSOperationMaterialOrderList::OnToDateCheckValue(){
	return 0;
} 
void CHMSOperationMaterialOrderList::OnOrderListDblClick(){
	
} 
void CHMSOperationMaterialOrderList::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationMaterialOrderList::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationMaterialOrderList::OnOrderListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOrderList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("OrderNo")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("Department")), 
			rs.GetValue(_T("Status")), 
			rs.GetValue(_T("CreatedBy")), NULL);
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSOperationMaterialOrderList::OnListDblClick(){
	
} 
void CHMSOperationMaterialOrderList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationMaterialOrderList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSOperationMaterialOrderList::OnListLoadData(){
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
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("OperationName")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSOperationMaterialOrderList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrderList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrderList::OnConfirmSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrderList::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSOperationMaterialOrderList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSOperationMaterialOrderList::OnAddHMSOperationMaterialOrderList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationMaterialOrderList::OnEditHMSOperationMaterialOrderList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationMaterialOrderList::OnDeleteHMSOperationMaterialOrderList(){
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
 		OnCancelHMSOperationMaterialOrderList();
 	}
	return 0;
}
int CHMSOperationMaterialOrderList::OnSaveHMSOperationMaterialOrderList(){
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
 		//OnHMSOperationMaterialOrderListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationMaterialOrderList::OnCancelHMSOperationMaterialOrderList(){
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
int CHMSOperationMaterialOrderList::OnHMSOperationMaterialOrderListListLoadData(){
	return 0;
}
