#include "HMSPrescriptionBatchList.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionBatchList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchList*)pWnd)->OnListDeleteItem();
} 
/*static void _OnAppointmentChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchList *)pWnd)->OnAppointmentChange();
} */
/*static void _OnAppointmentSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchList *)pWnd)->OnAppointmentSetfocus();} */ 
/*static void _OnAppointmentKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchList *)pWnd)->OnAppointmentKillfocus();
} */
static int _OnAppointmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchList *)pWnd)->OnAppointmentCheckValue();
} 
static void _OnUpdateAppointmentSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchList *pVw = (CHMSPrescriptionBatchList *)pWnd;
	pVw->OnUpdateAppointmentSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchList *pVw = (CHMSPrescriptionBatchList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchList *pVw = (CHMSPrescriptionBatchList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchList *pVw = (CHMSPrescriptionBatchList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchList *pVw = (CHMSPrescriptionBatchList *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchList *pVw = (CHMSPrescriptionBatchList *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPrescriptionBatchListFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchList*)pWnd)->OnAddHMSPrescriptionBatchList();
} 
static int _OnEditHMSPrescriptionBatchListFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchList*)pWnd)->OnEditHMSPrescriptionBatchList();
} 
static int _OnDeleteHMSPrescriptionBatchListFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchList*)pWnd)->OnDeleteHMSPrescriptionBatchList();
} 
static int _OnSaveHMSPrescriptionBatchListFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchList*)pWnd)->OnSaveHMSPrescriptionBatchList();
} 
static int _OnCancelHMSPrescriptionBatchListFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchList*)pWnd)->OnCancelHMSPrescriptionBatchList();
} 
CHMSPrescriptionBatchList::CHMSPrescriptionBatchList(){

	m_nDlgWidth = 805;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSPrescriptionBatchList::~CHMSPrescriptionBatchList(){
}
void CHMSPrescriptionBatchList::OnCreateComponents(){
	m_wndList.Create(this,5, 5, 798, 418); 
	m_wndAppointmentLabel.Create(this, _T("Appointment"), 5, 423, 85, 448);
	m_wndAppointment.Create(this,90, 423, 742, 448); 
	m_wndUpdateAppointment.Create(this, _T("..."), 747, 423, 798, 448);
	m_wndAdd.Create(this, _T("&Add"), 380, 453, 460, 478);
	m_wndEdit.Create(this, _T("&Edit"), 465, 453, 545, 478);
	m_wndDelete.Create(this, _T("&Delete"), 550, 453, 630, 478);
	m_wndPrint.Create(this, _T("&Print"), 635, 453, 715, 478);
	m_wndClose.Create(this, _T("&Close"), 720, 453, 800, 478);

}
void CHMSPrescriptionBatchList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAppointment.SetLimitText(35);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Quantity for day"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(5, _T("Indication"), CFMT_TEXT, 300);

}
void CHMSPrescriptionBatchList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndAppointment.SetEvent(WE_CHANGE, _OnAppointmentChangeFnc);
	//m_wndAppointment.SetEvent(WE_SETFOCUS, _OnAppointmentSetfocusFnc);
	//m_wndAppointment.SetEvent(WE_KILLFOCUS, _OnAppointmentKillfocusFnc);
	m_wndAppointment.SetEvent(WE_CHECKVALUE, _OnAppointmentCheckValueFnc);
	m_wndUpdateAppointment.SetEvent(WE_CLICK, _OnUpdateAppointmentSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSPrescriptionBatchListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSPrescriptionBatchListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSPrescriptionBatchListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSPrescriptionBatchListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSPrescriptionBatchListFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CHMSPrescriptionBatchList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAppointment.GetDlgCtrlID(), m_szAppointment);

}
void CHMSPrescriptionBatchList::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Appointment")] =  m_szAppointment;
	}
	else
	{
			
	m_jData[_T("Appointment")].GetValue(m_szAppointment);
	}

}
void CHMSPrescriptionBatchList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionBatchList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescriptionBatchList::SetDefaultValues(){

	m_szAppointment.Empty();

}
int CHMSPrescriptionBatchList::SetMode(int nMode){
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
void CHMSPrescriptionBatchList::OnListDblClick(){
	
} 
void CHMSPrescriptionBatchList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionBatchList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionBatchList::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("Idx")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("Quantity")), 
			rs.GetValue(_T("Quantityforday")), 
			rs.GetValue(_T("Indication")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSPrescriptionBatchList::OnAppointmentChange(){
	
} */
/*void CHMSPrescriptionBatchList::OnAppointmentSetfocus(){
	
} */
/*void CHMSPrescriptionBatchList::OnAppointmentKillfocus(){
	
} */
int CHMSPrescriptionBatchList::OnAppointmentCheckValue(){
	return 0;
} 
void CHMSPrescriptionBatchList::OnUpdateAppointmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionBatchList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionBatchList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionBatchList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionBatchList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionBatchList::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionBatchList::OnAddHMSPrescriptionBatchList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionBatchList::OnEditHMSPrescriptionBatchList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionBatchList::OnDeleteHMSPrescriptionBatchList(){
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
 		OnCancelHMSPrescriptionBatchList();
 	}
	return 0;
}
int CHMSPrescriptionBatchList::OnSaveHMSPrescriptionBatchList(){
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
 		//OnHMSPrescriptionBatchListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionBatchList::OnCancelHMSPrescriptionBatchList(){
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
int CHMSPrescriptionBatchList::OnHMSPrescriptionBatchListListLoadData(){
	return 0;
}
