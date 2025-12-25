#include "TakeCareServicePackageListView.h"
#include "MainFrm.h"
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CTakeCareServicePackageListView* )pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDepartmentSelendokFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDepartmentAddNew();
}*/
/*static void _OnCardNumberChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnCardNumberChange();
} */
/*static void _OnCardNumberSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnCardNumberSetfocus();} */ 
/*static void _OnCardNumberKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnCardNumberKillfocus();
} */
static int _OnCardNumberCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnCardNumberCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnOrderNoChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnOrderNoChange();
} */
/*static void _OnOrderNoSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnOrderNoSetfocus();} */ 
/*static void _OnOrderNoKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnOrderNoKillfocus();
} */
static int _OnOrderNoCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnOrderNoCheckValue();
} 
static void _OnPendingOptionSelectFnc(CWnd *pWnd){
	  ((CTakeCareServicePackageListView*)pWnd)->OnPendingOptionSelect();
}
static void _OnRegistedOptionSelectFnc(CWnd *pWnd){
	  ((CTakeCareServicePackageListView*)pWnd)->OnRegistedOptionSelect();
}
static void _OnTerminateOptionSelectFnc(CWnd *pWnd){
	  ((CTakeCareServicePackageListView*)pWnd)->OnTerminateOptionSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTakeCareServicePackageListView *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTakeCareServicePackageListView *)pWnd)->OnToDateCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CTakeCareServicePackageListView *pVw = (CTakeCareServicePackageListView *)pWnd;
	pVw->OnSearchSelect();
} 
static void _OnClearSelectFnc(CWnd *pWnd){
	CTakeCareServicePackageListView *pVw = (CTakeCareServicePackageListView *)pWnd;
	pVw->OnClearSelect();
} 
static int _OnAddTakeCareServicePackageListViewFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnAddTakeCareServicePackageListView();
} 
static int _OnEditTakeCareServicePackageListViewFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnEditTakeCareServicePackageListView();
} 
static int _OnDeleteTakeCareServicePackageListViewFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnDeleteTakeCareServicePackageListView();
} 
static int _OnSaveTakeCareServicePackageListViewFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnSaveTakeCareServicePackageListView();
} 
static int _OnCancelTakeCareServicePackageListViewFnc(CWnd *pWnd){
	 return ((CTakeCareServicePackageListView*)pWnd)->OnCancelTakeCareServicePackageListView();
} 
CTakeCareServicePackageListView::CTakeCareServicePackageListView(){

	m_nDlgWidth = 965;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CTakeCareServicePackageListView::~CTakeCareServicePackageListView(){
}
void CTakeCareServicePackageListView::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 4, 5, 794, 120);
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 30, 110, 55);
	m_wndPatientName.Create(this,115, 30, 420, 55); 
	m_wndDepartmentLabel.Create(this, _T("Department"), 425, 30, 525, 55);
	m_wndDepartment.Create(this,531, 31, 791, 56); 
	m_wndCardNumberLabel.Create(this, _T("Card Number"), 10, 60, 110, 85);
	m_wndCardNumber.Create(this,115, 60, 420, 85); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 425, 60, 525, 85);
	m_wndDocumentNo.Create(this,530, 60, 620, 85); 
	m_wndOrderNoLabel.Create(this, _T("Order No"), 625, 60, 700, 85);
	m_wndOrderNo.Create(this,705, 60, 791, 85); 
	m_wndStatus.Create(this, _T("Status"), 10, 90, 110, 115);
	m_wndPendingOption.Create(this, _T("Ðang d?i"), 115, 90, 210, 115);
	m_wndRegistedOption.Create(this, _T("Ðang th?c hi?n"), 215, 90, 325, 115);
	m_wndTerminateOption.Create(this, _T("Ðã k?t thúc"), 330, 90, 420, 115);
	m_wndFromDateLabel.Create(this, _T("From Date"), 425, 90, 525, 115);
	m_wndFromDate.Create(this,530, 90, 621, 115); 
	m_wndToDateLabel.Create(this, _T("To Date"), 626, 90, 701, 115);
	m_wndToDate.Create(this,706, 90, 792, 115); 
	m_wndSearch.Create(this, _T("Search"), 800, 30, 950, 55);
	m_wndClear.Create(this, _T("Clear"), 800, 60, 950, 85);

}
void CTakeCareServicePackageListView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientName.SetLimitText(1024);
	m_wndPatientName.SetCheckValue(true);
	m_wndDepartment.SetCheckValue(true);
	m_wndDepartment.LimitText(1024);
	m_wndCardNumber.SetLimitText(1024);
	m_wndCardNumber.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(1024);
	m_wndDocumentNo.SetCheckValue(true);
	m_wndOrderNo.SetLimitText(1024);
	m_wndOrderNo.SetCheckValue(true);
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);



}
void CTakeCareServicePackageListView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	//m_wndCardNumber.SetEvent(WE_CHANGE, _OnCardNumberChangeFnc);
	//m_wndCardNumber.SetEvent(WE_SETFOCUS, _OnCardNumberSetfocusFnc);
	//m_wndCardNumber.SetEvent(WE_KILLFOCUS, _OnCardNumberKillfocusFnc);
	m_wndCardNumber.SetEvent(WE_CHECKVALUE, _OnCardNumberCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndOrderNo.SetEvent(WE_CHANGE, _OnOrderNoChangeFnc);
	//m_wndOrderNo.SetEvent(WE_SETFOCUS, _OnOrderNoSetfocusFnc);
	//m_wndOrderNo.SetEvent(WE_KILLFOCUS, _OnOrderNoKillfocusFnc);
	m_wndOrderNo.SetEvent(WE_CHECKVALUE, _OnOrderNoCheckValueFnc);
	m_wndPendingOption.SetEvent(WE_CLICK, _OnPendingOptionSelectFnc);
	m_wndRegistedOption.SetEvent(WE_CLICK, _OnRegistedOptionSelectFnc);
	m_wndTerminateOption.SetEvent(WE_CLICK, _OnTerminateOptionSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndClear.SetEvent(WE_CLICK, _OnClearSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddTakeCareServicePackageListViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditTakeCareServicePackageListViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteTakeCareServicePackageListViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveTakeCareServicePackageListViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelTakeCareServicePackageListViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CTakeCareServicePackageListView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
	DDX_Text(pDX, m_wndCardNumber.GetDlgCtrlID(), m_szCardNumber);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndOrderNo.GetDlgCtrlID(), m_nOrderNo);
	DDX_Radio(pDX, m_wndPendingOption.GetDlgCtrlID(), m_nPendingOption);
	DDX_Radio(pDX, m_wndRegistedOption.GetDlgCtrlID(), m_nRegistedOption);
	DDX_Radio(pDX, m_wndTerminateOption.GetDlgCtrlID(), m_nTerminateOption);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CTakeCareServicePackageListView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Department")] =  m_szDepartmentKey;
	m_jData[_T("CardNumber")] =  m_szCardNumber;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("OrderNo")] =  m_nOrderNo;
	m_jData[_T("PendingOption")] =  m_nPendingOption;
	m_jData[_T("RegistedOption")] =  m_nRegistedOption;
	m_jData[_T("TerminateOption")] =  m_nTerminateOption;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	m_jData[_T("CardNumber")].GetValue(m_szCardNumber);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("OrderNo")].GetValue(m_nOrderNo);
	m_jData[_T("PendingOption")].GetValue(m_nPendingOption);
	m_jData[_T("RegistedOption")].GetValue(m_nRegistedOption);
	m_jData[_T("TerminateOption")].GetValue(m_nTerminateOption);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CTakeCareServicePackageListView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTakeCareServicePackageListView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CTakeCareServicePackageListView::SetDefaultValues(){

	m_szPatientName.Empty();
	m_szDepartmentKey.Empty();
	m_szCardNumber.Empty();
	m_nDocumentNo=0;
	m_nOrderNo=0;
	m_nPendingOption=0;
	m_nRegistedOption=0;
	m_nTerminateOption=0;
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CTakeCareServicePackageListView::SetMode(int nMode){
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
/*void CTakeCareServicePackageListView::OnPatientNameChange(){
	
} */
/*void CTakeCareServicePackageListView::OnPatientNameSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnPatientNameKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnPatientNameCheckValue(){
	return 0;
} 
void CTakeCareServicePackageListView::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTakeCareServicePackageListView::OnDepartmentSelendok(){
	 
}
/*void CTakeCareServicePackageListView::OnDepartmentSetfocus(){
	
}*/
/*void CTakeCareServicePackageListView::OnDepartmentKillfocus(){
	
}*/
long CTakeCareServicePackageListView::OnDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDepartmentKey
};
	m_wndDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDepartment.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CTakeCareServicePackageListView::OnDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CTakeCareServicePackageListView::OnCardNumberChange(){
	
} */
/*void CTakeCareServicePackageListView::OnCardNumberSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnCardNumberKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnCardNumberCheckValue(){
	return 0;
} 
/*void CTakeCareServicePackageListView::OnDocumentNoChange(){
	
} */
/*void CTakeCareServicePackageListView::OnDocumentNoSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnDocumentNoKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CTakeCareServicePackageListView::OnOrderNoChange(){
	
} */
/*void CTakeCareServicePackageListView::OnOrderNoSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnOrderNoKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnOrderNoCheckValue(){
	return 0;
} 
void CTakeCareServicePackageListView::OnPendingOptionSelect(){
	
}
void CTakeCareServicePackageListView::OnRegistedOptionSelect(){
	
}
void CTakeCareServicePackageListView::OnTerminateOptionSelect(){
	
}
/*void CTakeCareServicePackageListView::OnFromDateChange(){
	
} */
/*void CTakeCareServicePackageListView::OnFromDateSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnFromDateKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnFromDateCheckValue(){
	return 0;
} 
/*void CTakeCareServicePackageListView::OnToDateChange(){
	
} */
/*void CTakeCareServicePackageListView::OnToDateSetfocus(){
	
} */
/*void CTakeCareServicePackageListView::OnToDateKillfocus(){
	
} */
int CTakeCareServicePackageListView::OnToDateCheckValue(){
	return 0;
} 
void CTakeCareServicePackageListView::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CTakeCareServicePackageListView::OnClearSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CTakeCareServicePackageListView::OnAddTakeCareServicePackageListView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTakeCareServicePackageListView::OnEditTakeCareServicePackageListView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTakeCareServicePackageListView::OnDeleteTakeCareServicePackageListView(){
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
 		OnCancelTakeCareServicePackageListView();
 	}
	return 0;
}
int CTakeCareServicePackageListView::OnSaveTakeCareServicePackageListView(){
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
 		//OnTakeCareServicePackageListViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTakeCareServicePackageListView::OnCancelTakeCareServicePackageListView(){
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
int CTakeCareServicePackageListView::OnTakeCareServicePackageListViewListLoadData(){
	return 0;
}
