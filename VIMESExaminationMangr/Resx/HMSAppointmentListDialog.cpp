#include "HMSAppointmentListDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSAppointmentListDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentListDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentListDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentListDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSAppointmentListDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSAppointmentListDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSAppointmentListDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSAppointmentListDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSAppointmentListDialog *pVw = (CHMSAppointmentListDialog *)pWnd;
	pVw->OnRefreshSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSAppointmentListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSAppointmentListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSAppointmentListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSAppointmentListDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnAppointmentSelectFnc(CWnd *pWnd){
	CHMSAppointmentListDialog *pVw = (CHMSAppointmentListDialog *)pWnd;
	pVw->OnAppointmentSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSAppointmentListDialog *pVw = (CHMSAppointmentListDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAppointmentListDialog *pVw = (CHMSAppointmentListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAppointmentListDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentListDialog*)pWnd)->OnAddHMSAppointmentListDialog();
} 
static int _OnEditHMSAppointmentListDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentListDialog*)pWnd)->OnEditHMSAppointmentListDialog();
} 
static int _OnDeleteHMSAppointmentListDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentListDialog*)pWnd)->OnDeleteHMSAppointmentListDialog();
} 
static int _OnSaveHMSAppointmentListDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentListDialog*)pWnd)->OnSaveHMSAppointmentListDialog();
} 
static int _OnCancelHMSAppointmentListDialogFnc(CWnd *pWnd){
	 return ((CHMSAppointmentListDialog*)pWnd)->OnCancelHMSAppointmentListDialog();
} 
CHMSAppointmentListDialog::CHMSAppointmentListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSAppointmentListDialog::~CHMSAppointmentListDialog(){
}
void CHMSAppointmentListDialog::OnCreateComponents(){
	m_wndAppointmentList.Create(this, _T("Appointment List"), 5, 5, 605, 560);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 195, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 200, 30, 290, 55);
	m_wndToDate.Create(this,295, 30, 385, 55); 
	m_wndRefresh.Create(this, _T("Refresh"), 390, 30, 470, 55);
	m_wndList.Create(this,10, 60, 600, 555); 
	m_wndAppointment.Create(this, _T("Appointment"), 326, 565, 416, 590);
	m_wndPrint.Create(this, _T("&Print"), 421, 565, 511, 590);
	m_wndClose.Create(this, _T("&Close"), 516, 565, 606, 590);

}
void CHMSAppointmentListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);



}
void CHMSAppointmentListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAppointment.SetEvent(WE_CLICK, _OnAppointmentSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSAppointmentListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSAppointmentListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAppointmentListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSAppointmentListDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSAppointmentListDialog::SetMode(int nMode){
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
/*void CHMSAppointmentListDialog::OnFromDateChange(){
	
} */
/*void CHMSAppointmentListDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSAppointmentListDialog::OnFromDateKillfocus(){
	
} */
int CHMSAppointmentListDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSAppointmentListDialog::OnToDateChange(){
	
} */
/*void CHMSAppointmentListDialog::OnToDateSetfocus(){
	
} */
/*void CHMSAppointmentListDialog::OnToDateKillfocus(){
	
} */
int CHMSAppointmentListDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSAppointmentListDialog::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAppointmentListDialog::OnListDblClick(){
	
} 
void CHMSAppointmentListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAppointmentListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSAppointmentListDialog::OnListLoadData(){
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
void CHMSAppointmentListDialog::OnAppointmentSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAppointmentListDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAppointmentListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSAppointmentListDialog::OnAddHMSAppointmentListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAppointmentListDialog::OnEditHMSAppointmentListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAppointmentListDialog::OnDeleteHMSAppointmentListDialog(){
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
 		OnCancelHMSAppointmentListDialog();
 	}
	return 0;
}
int CHMSAppointmentListDialog::OnSaveHMSAppointmentListDialog(){
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
 		//OnHMSAppointmentListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSAppointmentListDialog::OnCancelHMSAppointmentListDialog(){
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
int CHMSAppointmentListDialog::OnHMSAppointmentListDialogListLoadData(){
	return 0;
}
