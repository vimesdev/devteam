#include "rptGeneralClinicalActivitiesReportDialog.h"
#include "MainFrm.h"
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnFromDateCheckValue();
} 
static void _OnRoomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CrptGeneralClinicalActivitiesReportDialog* )pWnd)->OnRoomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnRoomSelendokFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnRoomSelendok();
}
/*static void _OnRoomSetfocusFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnRoomKillfocus();
}*/
/*static void _OnRoomKillfocusFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnRoomKillfocus();
}*/
static long _OnRoomLoadDataFnc(CWnd *pWnd){
	return ((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnRoomLoadData();
}
/*static void _OnRoomAddNewFnc(CWnd *pWnd){
	((CrptGeneralClinicalActivitiesReportDialog *)pWnd)->OnRoomAddNew();
}*/
static void _OnPreviewSelectFnc(CWnd *pWnd){
	CrptGeneralClinicalActivitiesReportDialog *pVw = (CrptGeneralClinicalActivitiesReportDialog *)pWnd;
	pVw->OnPreviewSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CrptGeneralClinicalActivitiesReportDialog *pVw = (CrptGeneralClinicalActivitiesReportDialog *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddrptGeneralClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralClinicalActivitiesReportDialog*)pWnd)->OnAddrptGeneralClinicalActivitiesReportDialog();
} 
static int _OnEditrptGeneralClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralClinicalActivitiesReportDialog*)pWnd)->OnEditrptGeneralClinicalActivitiesReportDialog();
} 
static int _OnDeleterptGeneralClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralClinicalActivitiesReportDialog*)pWnd)->OnDeleterptGeneralClinicalActivitiesReportDialog();
} 
static int _OnSaverptGeneralClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralClinicalActivitiesReportDialog*)pWnd)->OnSaverptGeneralClinicalActivitiesReportDialog();
} 
static int _OnCancelrptGeneralClinicalActivitiesReportDialogFnc(CWnd *pWnd){
	 return ((CrptGeneralClinicalActivitiesReportDialog*)pWnd)->OnCancelrptGeneralClinicalActivitiesReportDialog();
} 
CrptGeneralClinicalActivitiesReportDialog::CrptGeneralClinicalActivitiesReportDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 355;
	m_nDlgHeight = 125;
	SetDefaultValues();
}
CrptGeneralClinicalActivitiesReportDialog::~CrptGeneralClinicalActivitiesReportDialog(){
}
void CrptGeneralClinicalActivitiesReportDialog::OnCreateComponents(){
	m_wndReportParameters.Create(this, _T("Report Parameters"), 5, 5, 350, 90);
	m_wndToDateLabel.Create(this, _T("To Date"), 180, 29, 260, 54);
	m_wndToDate.Create(this,265, 29, 345, 54); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 175, 55); 
	m_wndRoomLabel.Create(this, _T("Room"), 10, 59, 90, 84);
	m_wndRoom.Create(this,95, 59, 345, 84); 
	m_wndPreview.Create(this, _T("&Preview"), 185, 95, 265, 120);
	m_wndExport.Create(this, _T("&Export"), 270, 95, 350, 120);

}
void CrptGeneralClinicalActivitiesReportDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndRoom.SetCheckValue(true);
	m_wndRoom.LimitText(35);


	m_wndRoom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndRoom.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CrptGeneralClinicalActivitiesReportDialog::OnSetWindowEvents(){
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndRoom.SetEvent(WE_SELENDOK, _OnRoomSelendokFnc);
	//m_wndRoom.SetEvent(WE_SETFOCUS, _OnRoomSetfocusFnc);
	//m_wndRoom.SetEvent(WE_KILLFOCUS, _OnRoomKillfocusFnc);
	m_wndRoom.SetEvent(WE_SELCHANGE, _OnRoomSelectChangeFnc);
	m_wndRoom.SetEvent(WE_LOADDATA, _OnRoomLoadDataFnc);
	//m_wndRoom.SetEvent(WE_ADDNEW, _OnRoomAddNewFnc);
	m_wndPreview.SetEvent(WE_CLICK, _OnPreviewSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);

}
void CrptGeneralClinicalActivitiesReportDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndRoom.GetDlgCtrlID(), m_szRoomKey);

}
void CrptGeneralClinicalActivitiesReportDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CrptGeneralClinicalActivitiesReportDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CrptGeneralClinicalActivitiesReportDialog::SetDefaultValues(){

	m_szToDate.Empty();
	m_szFromDate.Empty();
	m_szRoomKey.Empty();

}
int CrptGeneralClinicalActivitiesReportDialog::SetMode(int nMode){
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
/*void CrptGeneralClinicalActivitiesReportDialog::OnToDateChange(){
	
} */
/*void CrptGeneralClinicalActivitiesReportDialog::OnToDateSetfocus(){
	
} */
/*void CrptGeneralClinicalActivitiesReportDialog::OnToDateKillfocus(){
	
} */
int CrptGeneralClinicalActivitiesReportDialog::OnToDateCheckValue(){
	return 0;
} 
/*void CrptGeneralClinicalActivitiesReportDialog::OnFromDateChange(){
	
} */
/*void CrptGeneralClinicalActivitiesReportDialog::OnFromDateSetfocus(){
	
} */
/*void CrptGeneralClinicalActivitiesReportDialog::OnFromDateKillfocus(){
	
} */
int CrptGeneralClinicalActivitiesReportDialog::OnFromDateCheckValue(){
	return 0;
} 
void CrptGeneralClinicalActivitiesReportDialog::OnRoomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptGeneralClinicalActivitiesReportDialog::OnRoomSelendok(){
	 
}
/*void CrptGeneralClinicalActivitiesReportDialog::OnRoomSetfocus(){
	
}*/
/*void CrptGeneralClinicalActivitiesReportDialog::OnRoomKillfocus(){
	
}*/
long CrptGeneralClinicalActivitiesReportDialog::OnRoomLoadData(){
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
/*void CrptGeneralClinicalActivitiesReportDialog::OnRoomAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CrptGeneralClinicalActivitiesReportDialog::OnPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CrptGeneralClinicalActivitiesReportDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CrptGeneralClinicalActivitiesReportDialog::OnAddrptGeneralClinicalActivitiesReportDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CrptGeneralClinicalActivitiesReportDialog::OnEditrptGeneralClinicalActivitiesReportDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CrptGeneralClinicalActivitiesReportDialog::OnDeleterptGeneralClinicalActivitiesReportDialog(){
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
 		OnCancelrptGeneralClinicalActivitiesReportDialog(); 
 	}
	return 0;
}
int CrptGeneralClinicalActivitiesReportDialog::OnSaverptGeneralClinicalActivitiesReportDialog(){
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
 		//OnrptGeneralClinicalActivitiesReportDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CrptGeneralClinicalActivitiesReportDialog::OnCancelrptGeneralClinicalActivitiesReportDialog(){
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
int CrptGeneralClinicalActivitiesReportDialog::OnrptGeneralClinicalActivitiesReportDialogListLoadData(){
	return 0;
}
