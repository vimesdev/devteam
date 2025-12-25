#include "HMSParaclinicalResultDialog.h"
#include "MainFrm.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalResultDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalResultDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnSpecialFilterSelectFnc(CWnd *pWnd){
	 ((CHMSParaclinicalResultDialog*)pWnd)->OnSpecialFilterSelect();
}
static long _OnItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalResultDialog*)pWnd)->OnItemLoadData();
} 
static void _OnItemDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog*)pWnd)->OnItemDblClick();
} 
static void _OnItemSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalResultDialog*)pWnd)->OnItemSelectChange(nOldItem, nNewItem);
} 
static int _OnItemDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalResultDialog*)pWnd)->OnItemDeleteItem();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalResultDialog *)pWnd)->OnDescriptionCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalResultDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalResultDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalResultDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalResultDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnMarkAllSelectFnc(CWnd *pWnd){
	CHMSParaclinicalResultDialog *pVw = (CHMSParaclinicalResultDialog *)pWnd;
	pVw->OnMarkAllSelect();
} 
static void _OnUnMarkSelectFnc(CWnd *pWnd){
	CHMSParaclinicalResultDialog *pVw = (CHMSParaclinicalResultDialog *)pWnd;
	pVw->OnUnMarkSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSParaclinicalResultDialog *pVw = (CHMSParaclinicalResultDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSParaclinicalResultDialog *pVw = (CHMSParaclinicalResultDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSParaclinicalResultDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalResultDialog*)pWnd)->OnAddHMSParaclinicalResultDialog();
} 
static int _OnEditHMSParaclinicalResultDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalResultDialog*)pWnd)->OnEditHMSParaclinicalResultDialog();
} 
static int _OnDeleteHMSParaclinicalResultDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalResultDialog*)pWnd)->OnDeleteHMSParaclinicalResultDialog();
} 
static int _OnSaveHMSParaclinicalResultDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalResultDialog*)pWnd)->OnSaveHMSParaclinicalResultDialog();
} 
static int _OnCancelHMSParaclinicalResultDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalResultDialog*)pWnd)->OnCancelHMSParaclinicalResultDialog();
} 
CHMSParaclinicalResultDialog::CHMSParaclinicalResultDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSParaclinicalResultDialog::~CHMSParaclinicalResultDialog(){
}
void CHMSParaclinicalResultDialog::OnCreateComponents(){
	m_wndFromDateLabel.Create(this, _T("From Date"), 5, 5, 85, 30);
	m_wndFromDate.Create(this,90, 5, 170, 30); 
	m_wndToDateLabel.Create(this, _T("To Date"), 175, 5, 255, 30);
	m_wndToDate.Create(this,260, 5, 340, 30); 
	m_wndSpecialFilter.Create(this, _T("Special Filter"), 345, 5, 475, 30);
	m_wndItem.Create(this,5, 35, 475, 515); 
	m_wndDescription.Create(this,5, 520, 475, 570); 
	m_wndList.Create(this,480, 35, 950, 570); 
	m_wndMarkAll.Create(this, _T("&Mark All"), 4, 575, 84, 600);
	m_wndUnMark.Create(this, _T("&UnMark"), 89, 575, 169, 600);
	m_wndApply.Create(this, _T("&Apply"), 785, 575, 865, 600);
	m_wndClose.Create(this, _T("&Close"), 870, 575, 950, 600);

}
void CHMSParaclinicalResultDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndDescription.SetLimitText(35);


	m_wndItem.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndItem.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndItem.InsertColumn(2, _T("Result"), CFMT_TEXT, 100);
	m_wndItem.InsertColumn(3, _T("Note"), CFMT_TEXT, 100);


	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Result"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Note"), CFMT_TEXT, 100);

}
void CHMSParaclinicalResultDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndSpecialFilter.SetEvent(WE_CLICK, _OnSpecialFilterSelectFnc);
	m_wndItem.SetEvent(WE_SELCHANGE, _OnItemSelectChangeFnc);
	m_wndItem.SetEvent(WE_LOADDATA, _OnItemLoadDataFnc);
	m_wndItem.SetEvent(WE_DBLCLICK, _OnItemDblClickFnc);
	m_wndItem.AddEvent(1, _T("Delete"), _OnItemDeleteItemFnc, 0, VK_DELETE, 0);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndMarkAll.SetEvent(WE_CLICK, _OnMarkAllSelectFnc);
	m_wndUnMark.SetEvent(WE_CLICK, _OnUnMarkSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSParaclinicalResultDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_Check(pDX, m_wndSpecialFilter.GetDlgCtrlID(), m_bSpecialFilter);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSParaclinicalResultDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("SpecialFilter")] =  m_bSpecialFilter;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("SpecialFilter")].GetValue(m_bSpecialFilter);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CHMSParaclinicalResultDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSParaclinicalResultDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSParaclinicalResultDialog::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_bSpecialFilter=FALSE;
	m_szDescription.Empty();

}
int CHMSParaclinicalResultDialog::SetMode(int nMode){
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
/*void CHMSParaclinicalResultDialog::OnFromDateChange(){
	
} */
/*void CHMSParaclinicalResultDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSParaclinicalResultDialog::OnFromDateKillfocus(){
	
} */
int CHMSParaclinicalResultDialog::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSParaclinicalResultDialog::OnToDateChange(){
	
} */
/*void CHMSParaclinicalResultDialog::OnToDateSetfocus(){
	
} */
/*void CHMSParaclinicalResultDialog::OnToDateKillfocus(){
	
} */
int CHMSParaclinicalResultDialog::OnToDateCheckValue(){
	return 0;
} 
	void CHMSParaclinicalResultDialog::OnSpecialFilterSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSParaclinicalResultDialog::OnItemDblClick(){
	
} 
void CHMSParaclinicalResultDialog::OnItemSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalResultDialog::OnItemDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSParaclinicalResultDialog::OnItemLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndItem.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndItem.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Result")), 
			rs.GetValue(_T("Note")), NULL);
		rs.MoveNext();
	}
	m_wndItem.EndLoad(); 
	return nCount;
*/
	return 0;
}
/*void CHMSParaclinicalResultDialog::OnDescriptionChange(){
	
} */
/*void CHMSParaclinicalResultDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSParaclinicalResultDialog::OnDescriptionKillfocus(){
	
} */
int CHMSParaclinicalResultDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSParaclinicalResultDialog::OnListDblClick(){
	
} 
void CHMSParaclinicalResultDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalResultDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSParaclinicalResultDialog::OnListLoadData(){
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
			rs.GetValue(_T("Description")), 
			rs.GetValue(_T("Result")), 
			rs.GetValue(_T("Note")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSParaclinicalResultDialog::OnMarkAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalResultDialog::OnUnMarkSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalResultDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalResultDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalResultDialog::OnAddHMSParaclinicalResultDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSParaclinicalResultDialog::OnEditHMSParaclinicalResultDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSParaclinicalResultDialog::OnDeleteHMSParaclinicalResultDialog(){
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
 		OnCancelHMSParaclinicalResultDialog();
 	}
	return 0;
}
int CHMSParaclinicalResultDialog::OnSaveHMSParaclinicalResultDialog(){
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
 		//OnHMSParaclinicalResultDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSParaclinicalResultDialog::OnCancelHMSParaclinicalResultDialog(){
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
int CHMSParaclinicalResultDialog::OnHMSParaclinicalResultDialogListLoadData(){
	return 0;
}
