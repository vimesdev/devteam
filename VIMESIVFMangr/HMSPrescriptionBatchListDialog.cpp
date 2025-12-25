#include "HMSPrescriptionBatchListDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSPrescriptionBatchListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchListDialog*)pWnd)->OnListDeleteItem();
} 
/*static void _OnAppointmentChangeFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchListDialog *)pWnd)->OnAppointmentChange();
} */
/*static void _OnAppointmentSetfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchListDialog *)pWnd)->OnAppointmentSetfocus();} */ 
/*static void _OnAppointmentKillfocusFnc(CWnd *pWnd){
	((CHMSPrescriptionBatchListDialog *)pWnd)->OnAppointmentKillfocus();
} */
static int _OnAppointmentCheckValueFnc(CWnd *pWnd){
	return ((CHMSPrescriptionBatchListDialog *)pWnd)->OnAppointmentCheckValue();
} 
static void _OnUpdateAppointmentSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchListDialog *pVw = (CHMSPrescriptionBatchListDialog *)pWnd;
	pVw->OnUpdateAppointmentSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchListDialog *pVw = (CHMSPrescriptionBatchListDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchListDialog *pVw = (CHMSPrescriptionBatchListDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchListDialog *pVw = (CHMSPrescriptionBatchListDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchListDialog *pVw = (CHMSPrescriptionBatchListDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSPrescriptionBatchListDialog *pVw = (CHMSPrescriptionBatchListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSPrescriptionBatchListDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchListDialog*)pWnd)->OnAddHMSPrescriptionBatchListDialog();
} 
static int _OnEditHMSPrescriptionBatchListDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchListDialog*)pWnd)->OnEditHMSPrescriptionBatchListDialog();
} 
static int _OnDeleteHMSPrescriptionBatchListDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchListDialog*)pWnd)->OnDeleteHMSPrescriptionBatchListDialog();
} 
static int _OnSaveHMSPrescriptionBatchListDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchListDialog*)pWnd)->OnSaveHMSPrescriptionBatchListDialog();
} 
static int _OnCancelHMSPrescriptionBatchListDialogFnc(CWnd *pWnd){
	 return ((CHMSPrescriptionBatchListDialog*)pWnd)->OnCancelHMSPrescriptionBatchListDialog();
} 
CHMSPrescriptionBatchListDialog::CHMSPrescriptionBatchListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSPrescriptionBatchListDialog::~CHMSPrescriptionBatchListDialog(){
}
void CHMSPrescriptionBatchListDialog::OnCreateComponents(){
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
void CHMSPrescriptionBatchListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndAppointment.SetLimitText(35);
	m_wndAppointment.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 90);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(4, _T("Quantity for day"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(5, _T("Indication"), CFMT_TEXT, 300);

}
void CHMSPrescriptionBatchListDialog::OnSetWindowEvents(){
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
	SetMode(VM_NONE);

}
void CHMSPrescriptionBatchListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndAppointment.GetDlgCtrlID(), m_szAppointment);

}
void CHMSPrescriptionBatchListDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Appointment")] =  m_szAppointment;
	}
	else
	{
			
	m_jData[_T("Appointment")].GetValue(m_szAppointment);
	}

}
void CHMSPrescriptionBatchListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSPrescriptionBatchListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSPrescriptionBatchListDialog::SetDefaultValues(){

	m_szAppointment.Empty();

}
int CHMSPrescriptionBatchListDialog::SetMode(int nMode){
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
void CHMSPrescriptionBatchListDialog::OnListDblClick(){
	
} 
void CHMSPrescriptionBatchListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionBatchListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSPrescriptionBatchListDialog::OnListLoadData(){
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
/*void CHMSPrescriptionBatchListDialog::OnAppointmentChange(){
	
} */
/*void CHMSPrescriptionBatchListDialog::OnAppointmentSetfocus(){
	
} */
/*void CHMSPrescriptionBatchListDialog::OnAppointmentKillfocus(){
	
} */
int CHMSPrescriptionBatchListDialog::OnAppointmentCheckValue(){
	return 0;
} 
void CHMSPrescriptionBatchListDialog::OnUpdateAppointmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionBatchListDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->IsActiveDocument())
		return;
	
} 
void CHMSPrescriptionBatchListDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->IsActiveDocument())
		return;
} 
void CHMSPrescriptionBatchListDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->IsActiveDocument())
		return;
} 
void CHMSPrescriptionBatchListDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSPrescriptionBatchListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSPrescriptionBatchListDialog::OnAddHMSPrescriptionBatchListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSPrescriptionBatchListDialog::OnEditHMSPrescriptionBatchListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSPrescriptionBatchListDialog::OnDeleteHMSPrescriptionBatchListDialog(){
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
 		OnCancelHMSPrescriptionBatchListDialog();
 	}
	return 0;
}
int CHMSPrescriptionBatchListDialog::OnSaveHMSPrescriptionBatchListDialog(){
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
 		//OnHMSPrescriptionBatchListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSPrescriptionBatchListDialog::OnCancelHMSPrescriptionBatchListDialog(){
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
int CHMSPrescriptionBatchListDialog::OnHMSPrescriptionBatchListDialogListLoadData(){
	return 0;
}
