#include "HMSServicePackageCloseDataDialog.h"
#include "MainFrm.h"
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageCloseDataDialog *)pWnd)->OnToDateCheckValue();
} 
static void _OnPackageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSServicePackageCloseDataDialog* )pWnd)->OnPackageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPackageSelendokFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnPackageSelendok();
}
/*static void _OnPackageSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnPackageKillfocus();
}*/
/*static void _OnPackageKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnPackageKillfocus();
}*/
static long _OnPackageLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageCloseDataDialog *)pWnd)->OnPackageLoadData();
}
/*static void _OnPackageAddNewFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnPackageAddNew();
}*/
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CHMSServicePackageCloseDataDialog *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CHMSServicePackageCloseDataDialog *pVw = (CHMSServicePackageCloseDataDialog *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSServicePackageCloseDataDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSServicePackageCloseDataDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSServicePackageCloseDataDialog *pVw = (CHMSServicePackageCloseDataDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSServicePackageCloseDataDialog *pVw = (CHMSServicePackageCloseDataDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSServicePackageCloseDataDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnAddHMSServicePackageCloseDataDialog();
} 
static int _OnEditHMSServicePackageCloseDataDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnEditHMSServicePackageCloseDataDialog();
} 
static int _OnDeleteHMSServicePackageCloseDataDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnDeleteHMSServicePackageCloseDataDialog();
} 
static int _OnSaveHMSServicePackageCloseDataDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnSaveHMSServicePackageCloseDataDialog();
} 
static int _OnCancelHMSServicePackageCloseDataDialogFnc(CWnd *pWnd){
	 return ((CHMSServicePackageCloseDataDialog*)pWnd)->OnCancelHMSServicePackageCloseDataDialog();
} 
CHMSServicePackageCloseDataDialog::CHMSServicePackageCloseDataDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 905;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSServicePackageCloseDataDialog::~CHMSServicePackageCloseDataDialog(){
}
void CHMSServicePackageCloseDataDialog::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("SearchInformation"), 5, 5, 896, 60);
	m_wndToDateLabel.Create(this, _T("To Date"), 12, 30, 92, 55);
	m_wndToDate.Create(this,97, 30, 177, 55); 
	m_wndPackageLabel.Create(this, _T("Package"), 182, 30, 262, 55);
	m_wndPackage.Create(this,267, 30, 547, 55); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 552, 30, 632, 55);
	m_wndDescription.Create(this,637, 30, 807, 55); 
	m_wndSearch.Create(this, _T("Search"), 812, 30, 892, 55);
	m_wndList.Create(this,5, 65, 895, 570); 
	m_wndApply.Create(this, _T("&Apply"), 730, 575, 810, 600);
	m_wndClose.Create(this, _T("&Close"), 815, 575, 895, 600);

}
void CHMSServicePackageCloseDataDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndToDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndToDate.SetCheckValue(true);
	m_wndPackage.SetCheckValue(true);
	m_wndPackage.LimitText(35);
	m_wndDescription.SetLimitText(35);
	m_wndDescription.SetCheckValue(true);


	m_wndPackage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPackage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("Idx"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Document No"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(2, _T("Record No"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Patient Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(4, _T("Yob"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(5, _T("Sex"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(6, _T("Begin Date"), CFMT_DATETIME, 125);
	m_wndList.InsertColumn(7, _T("Order Date"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(8, _T("Qty"), CFMT_NUMBER, 70);
	m_wndList.InsertColumn(9, _T("Status"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(10, _T("Mark"), CFMT_TEXT, 50);

}
void CHMSServicePackageCloseDataDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndPackage.SetEvent(WE_SELENDOK, _OnPackageSelendokFnc);
	//m_wndPackage.SetEvent(WE_SETFOCUS, _OnPackageSetfocusFnc);
	//m_wndPackage.SetEvent(WE_KILLFOCUS, _OnPackageKillfocusFnc);
	m_wndPackage.SetEvent(WE_SELCHANGE, _OnPackageSelectChangeFnc);
	m_wndPackage.SetEvent(WE_LOADDATA, _OnPackageLoadDataFnc);
	//m_wndPackage.SetEvent(WE_ADDNEW, _OnPackageAddNewFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CHMSServicePackageCloseDataDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndPackage.GetDlgCtrlID(), m_szPackageKey);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CHMSServicePackageCloseDataDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Package")] =  m_szPackageKey;
	m_jData[_T("Description")] =  m_szDescription;
	}
	else
	{
			
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Package")].GetValue(m_szPackageKey);
	m_jData[_T("Description")].GetValue(m_szDescription);
	}

}
void CHMSServicePackageCloseDataDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSServicePackageCloseDataDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSServicePackageCloseDataDialog::SetDefaultValues(){

	m_szToDate.Empty();
	m_szPackageKey.Empty();
	m_szDescription.Empty();

}
int CHMSServicePackageCloseDataDialog::SetMode(int nMode){
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
/*void CHMSServicePackageCloseDataDialog::OnToDateChange(){
	
} */
/*void CHMSServicePackageCloseDataDialog::OnToDateSetfocus(){
	
} */
/*void CHMSServicePackageCloseDataDialog::OnToDateKillfocus(){
	
} */
int CHMSServicePackageCloseDataDialog::OnToDateCheckValue(){
	return 0;
} 
void CHMSServicePackageCloseDataDialog::OnPackageSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageCloseDataDialog::OnPackageSelendok(){
	 
}
/*void CHMSServicePackageCloseDataDialog::OnPackageSetfocus(){
	
}*/
/*void CHMSServicePackageCloseDataDialog::OnPackageKillfocus(){
	
}*/
long CHMSServicePackageCloseDataDialog::OnPackageLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPackage.IsSearchKey() && !m_szPackageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPackageKey
};
	m_wndPackage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPackage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSServicePackageCloseDataDialog::OnPackageAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSServicePackageCloseDataDialog::OnDescriptionChange(){
	
} */
/*void CHMSServicePackageCloseDataDialog::OnDescriptionSetfocus(){
	
} */
/*void CHMSServicePackageCloseDataDialog::OnDescriptionKillfocus(){
	
} */
int CHMSServicePackageCloseDataDialog::OnDescriptionCheckValue(){
	return 0;
} 
void CHMSServicePackageCloseDataDialog::OnSearchSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageCloseDataDialog::OnListDblClick(){
	
} 
void CHMSServicePackageCloseDataDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServicePackageCloseDataDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSServicePackageCloseDataDialog::OnListLoadData(){
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
			rs.GetValue(_T("DocumentNo")), 
			rs.GetValue(_T("RecordNo")), 
			rs.GetValue(_T("PatientName")), 
			rs.GetValue(_T("Yob")), 
			rs.GetValue(_T("Sex")), 
			rs.GetValue(_T("BeginDate")), 
			rs.GetValue(_T("OrderDate")), 
			rs.GetValue(_T("Qty")), 
			rs.GetValue(_T("Status")), 
			rs.GetValue(_T("Mark")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSServicePackageCloseDataDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSServicePackageCloseDataDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSServicePackageCloseDataDialog::OnAddHMSServicePackageCloseDataDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSServicePackageCloseDataDialog::OnEditHMSServicePackageCloseDataDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSServicePackageCloseDataDialog::OnDeleteHMSServicePackageCloseDataDialog(){
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
 		OnCancelHMSServicePackageCloseDataDialog();
 	}
	return 0;
}
int CHMSServicePackageCloseDataDialog::OnSaveHMSServicePackageCloseDataDialog(){
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
 		//OnHMSServicePackageCloseDataDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSServicePackageCloseDataDialog::OnCancelHMSServicePackageCloseDataDialog(){
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
int CHMSServicePackageCloseDataDialog::OnHMSServicePackageCloseDataDialogListLoadData(){
	return 0;
}
