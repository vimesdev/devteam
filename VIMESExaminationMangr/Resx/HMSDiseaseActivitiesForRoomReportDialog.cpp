#include "HMSDiseaseActivitiesForRoomReportDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDiseaseActivitiesForRoomReportDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CHMSDiseaseActivitiesForRoomReportDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSDiseaseActivitiesForRoomReportDialog *pVw = (CHMSDiseaseActivitiesForRoomReportDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDiseaseActivitiesForRoomReportDialog *pVw = (CHMSDiseaseActivitiesForRoomReportDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDiseaseActivitiesForRoomReportDialog *pVw = (CHMSDiseaseActivitiesForRoomReportDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDiseaseActivitiesForRoomReportDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseActivitiesForRoomReportDialog*)pWnd)->OnAddHMSDiseaseActivitiesForRoomReportDialog();
} 
static int _OnEditHMSDiseaseActivitiesForRoomReportDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseActivitiesForRoomReportDialog*)pWnd)->OnEditHMSDiseaseActivitiesForRoomReportDialog();
} 
static int _OnDeleteHMSDiseaseActivitiesForRoomReportDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseActivitiesForRoomReportDialog*)pWnd)->OnDeleteHMSDiseaseActivitiesForRoomReportDialog();
} 
static int _OnSaveHMSDiseaseActivitiesForRoomReportDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseActivitiesForRoomReportDialog*)pWnd)->OnSaveHMSDiseaseActivitiesForRoomReportDialog();
} 
static int _OnCancelHMSDiseaseActivitiesForRoomReportDialogFnc(CWnd *pWnd){
	 return ((CHMSDiseaseActivitiesForRoomReportDialog*)pWnd)->OnCancelHMSDiseaseActivitiesForRoomReportDialog();
} 
CHMSDiseaseActivitiesForRoomReportDialog::CHMSDiseaseActivitiesForRoomReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 409;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CHMSDiseaseActivitiesForRoomReportDialog::~CHMSDiseaseActivitiesForRoomReportDialog(){
}
void CHMSDiseaseActivitiesForRoomReportDialog::OnCreateComponents(){
	m_wndReportCondition.Create(this, _T("Report Condition"), 5, 5, 400, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 200, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 205, 30, 305, 55);
	m_wndToDate.Create(this,310, 30, 395, 55); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 60, 110, 85);
	m_wndRoom.Create(this,115, 60, 395, 85); 
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 150, 95, 230, 120);
	m_wndPrint.Create(this, _T("&Print"), 235, 95, 315, 120);
	m_wndClose.Create(this, _T("&Close"), 320, 95, 400, 120);

}
void CHMSDiseaseActivitiesForRoomReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSDiseaseActivitiesForRoomReportDialog::OnSetWindowEvents(){
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSDiseaseActivitiesForRoomReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void CHMSDiseaseActivitiesForRoomReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDiseaseActivitiesForRoomReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDiseaseActivitiesForRoomReportDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szRoomKey.Empty();

}
int CHMSDiseaseActivitiesForRoomReportDialog::SetMode(int nMode){
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
/*void CHMSDiseaseActivitiesForRoomReportDialog::OnFromDateChange(){
	
} */
/*void CHMSDiseaseActivitiesForRoomReportDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSDiseaseActivitiesForRoomReportDialog::OnFromDateKillfocus(){
	
} */
int CHMSDiseaseActivitiesForRoomReportDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSDiseaseActivitiesForRoomReportDialog::OnToDateChange(){
	
} */
/*void CHMSDiseaseActivitiesForRoomReportDialog::OnToDateSetfocus(){
	
} */
/*void CHMSDiseaseActivitiesForRoomReportDialog::OnToDateKillfocus(){
	
} */
int CHMSDiseaseActivitiesForRoomReportDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSDiseaseActivitiesForRoomReportDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiseaseActivitiesForRoomReportDialog::OnRoomSelendok(){
	 
}
/*void CHMSDiseaseActivitiesForRoomReportDialog::OnRoomSetfocus(){
	
}*/
/*void CHMSDiseaseActivitiesForRoomReportDialog::OnRoomKillfocus(){
	
}*/
long CHMSDiseaseActivitiesForRoomReportDialog::OnRoomLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndRoom.IsSearchKey() && !m_szRoomKey.IsEmpty()){
	};
	m_wndRoom.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndRoom.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSDiseaseActivitiesForRoomReportDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDiseaseActivitiesForRoomReportDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiseaseActivitiesForRoomReportDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDiseaseActivitiesForRoomReportDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSDiseaseActivitiesForRoomReportDialog::OnAddHMSDiseaseActivitiesForRoomReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDiseaseActivitiesForRoomReportDialog::OnEditHMSDiseaseActivitiesForRoomReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDiseaseActivitiesForRoomReportDialog::OnDeleteHMSDiseaseActivitiesForRoomReportDialog(){
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
 		OnCancelHMSDiseaseActivitiesForRoomReportDialog(); 
 	}
	return 0;
}
int CHMSDiseaseActivitiesForRoomReportDialog::OnSaveHMSDiseaseActivitiesForRoomReportDialog(){
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
 		//OnHMSDiseaseActivitiesForRoomReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDiseaseActivitiesForRoomReportDialog::OnCancelHMSDiseaseActivitiesForRoomReportDialog(){
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
int CHMSDiseaseActivitiesForRoomReportDialog::OnHMSDiseaseActivitiesForRoomReportDialogListLoadData(){
	return 0;
}
