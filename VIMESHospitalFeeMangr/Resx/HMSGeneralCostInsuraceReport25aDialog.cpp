#include "HMSGeneralCostInsuraceReport25aDialog.h"
#include "MainFrm.h"
/*static void _OnYearChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnYearChange();
} */
/*static void _OnYearSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnYearSetfocus();} */ 
/*static void _OnYearKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnYearKillfocus();
} */
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnYearCheckValue();
} 
static void _OnReportPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSGeneralCostInsuraceReport25aDialog* )pWnd)->OnReportPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnReportPeriodSelendokFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnReportPeriodSelendok();
}
/*static void _OnReportPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
/*static void _OnReportPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnReportPeriodKillfocus();
}*/
static long _OnReportPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnReportPeriodLoadData();
}
/*static void _OnReportPeriodAddNewFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnReportPeriodAddNew();
}*/
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnClerkSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSGeneralCostInsuraceReport25aDialog* )pWnd)->OnClerkSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnClerkSelendokFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnClerkSelendok();
}
/*static void _OnClerkSetfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnClerkKillfocus();
}*/
/*static void _OnClerkKillfocusFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnClerkKillfocus();
}*/
static long _OnClerkLoadDataFnc(CWnd *pWnd){
	return ((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnClerkLoadData();
}
/*static void _OnClerkAddNewFnc(CWnd *pWnd){
	((CHMSGeneralCostInsuraceReport25aDialog *)pWnd)->OnClerkAddNew();
}*/
static void _OnInlineSelectFnc(CWnd *pWnd){
	 ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnInlineSelect();
}
static void _OnOfflineSelectFnc(CWnd *pWnd){
	 ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnOfflineSelect();
}
static void _OnNotIncludeEmergencySelectFnc(CWnd *pWnd){
	 ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnNotIncludeEmergencySelect();
}
static void _OnIncludeEmergencySelectFnc(CWnd *pWnd){
	 ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnIncludeEmergencySelect();
}
static void _OnPrintPreviewSelectFnc(CWnd *pWnd){
	CHMSGeneralCostInsuraceReport25aDialog *pVw = (CHMSGeneralCostInsuraceReport25aDialog *)pWnd;
	pVw->OnPrintPreviewSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSGeneralCostInsuraceReport25aDialog *pVw = (CHMSGeneralCostInsuraceReport25aDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSGeneralCostInsuraceReport25aDialog *pVw = (CHMSGeneralCostInsuraceReport25aDialog *)pWnd;
	pVw->OnExportSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSGeneralCostInsuraceReport25aDialog *pVw = (CHMSGeneralCostInsuraceReport25aDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSGeneralCostInsuraceReport25aDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnAddHMSGeneralCostInsuraceReport25aDialog();
} 
static int _OnEditHMSGeneralCostInsuraceReport25aDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnEditHMSGeneralCostInsuraceReport25aDialog();
} 
static int _OnDeleteHMSGeneralCostInsuraceReport25aDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnDeleteHMSGeneralCostInsuraceReport25aDialog();
} 
static int _OnSaveHMSGeneralCostInsuraceReport25aDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnSaveHMSGeneralCostInsuraceReport25aDialog();
} 
static int _OnCancelHMSGeneralCostInsuraceReport25aDialogFnc(CWnd *pWnd){
	 return ((CHMSGeneralCostInsuraceReport25aDialog*)pWnd)->OnCancelHMSGeneralCostInsuraceReport25aDialog();
} 
CHMSGeneralCostInsuraceReport25aDialog::CHMSGeneralCostInsuraceReport25aDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 430;
	m_nDlgHeight = 225;
	SetDefaultValues();
}
CHMSGeneralCostInsuraceReport25aDialog::~CHMSGeneralCostInsuraceReport25aDialog(){
}
void CHMSGeneralCostInsuraceReport25aDialog::OnCreateComponents(){
	m_wndReportFilter.Create(this, _T("Report Parameters"), 5, 5, 420, 180);
	m_wndYearLabel.Create(this, _T("Year"), 10, 30, 110, 55);
	m_wndYear.Create(this,115, 30, 210, 55); 
	m_wndReportPeriodLabel.Create(this, _T("Report Month"), 215, 30, 315, 55);
	m_wndReportPeriod.Create(this,320, 30, 415, 55); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 60, 110, 85);
	m_wndFromDate.Create(this,115, 60, 210, 85); 
	m_wndToDateLabel.Create(this, _T("To Date"), 215, 60, 315, 85);
	m_wndToDate.Create(this,320, 60, 415, 85); 
	m_wndClerkLabel.Create(this, _T("Clerk"), 10, 90, 110, 115);
	m_wndClerk.Create(this,115, 90, 415, 115); 
	m_wndInline.Create(this, _T("In-line"), 10, 120, 110, 145);
	m_wndOffline.Create(this, _T("Off-line"), 10, 150, 110, 175);
	m_wndNotIncludeEmergency.Create(this, _T("Not Include Emergency"), 115, 120, 415, 145);
	m_wndIncludeEmergency.Create(this, _T("Include Emergency"), 115, 150, 415, 175);
	m_wndPrintPreview.Create(this, _T("Print Pre&view"), 84, 185, 164, 210);
	m_wndPrint.Create(this, _T("&Print"), 169, 185, 249, 210);
	m_wndExport.Create(this, _T("&Export"), 254, 185, 334, 210);
	m_wndClose.Create(this, _T("&Close"), 339, 185, 419, 210);

}
void CHMSGeneralCostInsuraceReport25aDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(true);
	m_wndReportPeriod.SetCheckValue(true);
	m_wndReportPeriod.LimitText(35);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndClerk.SetCheckValue(true);
	m_wndClerk.LimitText(35);


	m_wndReportPeriod.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndReportPeriod.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndClerk.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndClerk.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);

}
void CHMSGeneralCostInsuraceReport25aDialog::OnSetWindowEvents(){
	//m_wndYear.SetEvent(WE_CHANGE, _OnYearChangeFnc);
	//m_wndYear.SetEvent(WE_SETFOCUS, _OnYearSetfocusFnc);
	//m_wndYear.SetEvent(WE_KILLFOCUS, _OnYearKillfocusFnc);
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndReportPeriod.SetEvent(WE_SELENDOK, _OnReportPeriodSelendokFnc);
	//m_wndReportPeriod.SetEvent(WE_SETFOCUS, _OnReportPeriodSetfocusFnc);
	//m_wndReportPeriod.SetEvent(WE_KILLFOCUS, _OnReportPeriodKillfocusFnc);
	m_wndReportPeriod.SetEvent(WE_SELCHANGE, _OnReportPeriodSelectChangeFnc);
	m_wndReportPeriod.SetEvent(WE_LOADDATA, _OnReportPeriodLoadDataFnc);
	//m_wndReportPeriod.SetEvent(WE_ADDNEW, _OnReportPeriodAddNewFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndClerk.SetEvent(WE_SELENDOK, _OnClerkSelendokFnc);
	//m_wndClerk.SetEvent(WE_SETFOCUS, _OnClerkSetfocusFnc);
	//m_wndClerk.SetEvent(WE_KILLFOCUS, _OnClerkKillfocusFnc);
	m_wndClerk.SetEvent(WE_SELCHANGE, _OnClerkSelectChangeFnc);
	m_wndClerk.SetEvent(WE_LOADDATA, _OnClerkLoadDataFnc);
	//m_wndClerk.SetEvent(WE_ADDNEW, _OnClerkAddNewFnc);
	m_wndInline.SetEvent(WE_CLICK, _OnInlineSelectFnc);
	m_wndOffline.SetEvent(WE_CLICK, _OnOfflineSelectFnc);
	m_wndNotIncludeEmergency.SetEvent(WE_CLICK, _OnNotIncludeEmergencySelectFnc);
	m_wndIncludeEmergency.SetEvent(WE_CLICK, _OnIncludeEmergencySelectFnc);
	m_wndPrintPreview.SetEvent(WE_CLICK, _OnPrintPreviewSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CHMSGeneralCostInsuraceReport25aDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_TextEx(pDX, m_wndReportPeriod.GetDlgCtrlID(), m_szReportPeriodKey);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndClerk.GetDlgCtrlID(), m_szClerkKey);
	DDX_Check(pDX, m_wndInline.GetDlgCtrlID(), m_bInline);
	DDX_Check(pDX, m_wndOffline.GetDlgCtrlID(), m_bOffline);
	DDX_Check(pDX, m_wndNotIncludeEmergency.GetDlgCtrlID(), m_bNotIncludeEmergency);
	DDX_Check(pDX, m_wndIncludeEmergency.GetDlgCtrlID(), m_bIncludeEmergency);

}
void CHMSGeneralCostInsuraceReport25aDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSGeneralCostInsuraceReport25aDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSGeneralCostInsuraceReport25aDialog::SetDefaultValues(){

	m_nYear=0;
	m_szReportPeriodKey.Empty();
	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szClerkKey.Empty();
	m_bInline=FALSE;
	m_bOffline=FALSE;
	m_bNotIncludeEmergency=FALSE;
	m_bIncludeEmergency=FALSE;

}
int CHMSGeneralCostInsuraceReport25aDialog::SetMode(int nMode){
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
/*void CHMSGeneralCostInsuraceReport25aDialog::OnYearChange(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnYearSetfocus(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnYearKillfocus(){
	
} */
int CHMSGeneralCostInsuraceReport25aDialog::OnYearCheckValue(){
	return 0;
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodSelendok(){
	 
}
/*void CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodSetfocus(){
	
}*/
/*void CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodKillfocus(){
	
}*/
long CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndReportPeriod.IsSearchKey() && !m_szReportPeriodKey.IsEmpty()){
	};
	m_wndReportPeriod.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndReportPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSGeneralCostInsuraceReport25aDialog::OnReportPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnFromDateChange(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnFromDateKillfocus(){
	
} */
int CHMSGeneralCostInsuraceReport25aDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSGeneralCostInsuraceReport25aDialog::OnToDateChange(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnToDateSetfocus(){
	
} */
/*void CHMSGeneralCostInsuraceReport25aDialog::OnToDateKillfocus(){
	
} */
int CHMSGeneralCostInsuraceReport25aDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnClerkSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnClerkSelendok(){
	 
}
/*void CHMSGeneralCostInsuraceReport25aDialog::OnClerkSetfocus(){
	
}*/
/*void CHMSGeneralCostInsuraceReport25aDialog::OnClerkKillfocus(){
	
}*/
long CHMSGeneralCostInsuraceReport25aDialog::OnClerkLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndClerk.IsSearchKey() && !m_szClerkKey.IsEmpty()){
	};
	m_wndClerk.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndClerk.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSGeneralCostInsuraceReport25aDialog::OnClerkAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSGeneralCostInsuraceReport25aDialog::OnInlineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSGeneralCostInsuraceReport25aDialog::OnOfflineSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSGeneralCostInsuraceReport25aDialog::OnNotIncludeEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMSGeneralCostInsuraceReport25aDialog::OnIncludeEmergencySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSGeneralCostInsuraceReport25aDialog::OnPrintPreviewSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSGeneralCostInsuraceReport25aDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSGeneralCostInsuraceReport25aDialog::OnAddHMSGeneralCostInsuraceReport25aDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSGeneralCostInsuraceReport25aDialog::OnEditHMSGeneralCostInsuraceReport25aDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSGeneralCostInsuraceReport25aDialog::OnDeleteHMSGeneralCostInsuraceReport25aDialog(){
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
 		OnCancelHMSGeneralCostInsuraceReport25aDialog(); 
 	}
	return 0;
}
int CHMSGeneralCostInsuraceReport25aDialog::OnSaveHMSGeneralCostInsuraceReport25aDialog(){
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
 		//OnHMSGeneralCostInsuraceReport25aDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSGeneralCostInsuraceReport25aDialog::OnCancelHMSGeneralCostInsuraceReport25aDialog(){
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
int CHMSGeneralCostInsuraceReport25aDialog::OnHMSGeneralCostInsuraceReport25aDialogListLoadData(){
	return 0;
}
