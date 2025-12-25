#include "VPMPackageCategorySetup.h"
#include "HMSMainFrame.h"

static void _OnNameChangeFnc(CWnd *pWnd){
	((CVPMPackageCategorySetup *)pWnd)->OnNameChange();
}
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CVPMPackageCategorySetup *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CVPMPackageCategorySetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CVPMPackageCategorySetup *)pWnd)->OnNameCheckValue();
}
static void _OnLoadDataSelectFnc(CWnd *pWnd){
	CVPMPackageCategorySetup *pVw = (CVPMPackageCategorySetup *)pWnd;
	pVw->OnLoadDataSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CVPMPackageCategorySetup *pVw = (CVPMPackageCategorySetup *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CVPMPackageCategorySetup *pVw = (CVPMPackageCategorySetup *)pWnd;
	pVw->OnCloseSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CVPMPackageCategorySetup*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CVPMPackageCategorySetup*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CVPMPackageCategorySetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CVPMPackageCategorySetup*)pWnd)->OnListDeleteItem();
} 
static int _OnAddAdDeptIndexSetupFnc(CWnd *pWnd){
	 return ((CVPMPackageCategorySetup*)pWnd)->OnAddAdDeptIndexSetup();
} 
static int _OnEditAdDeptIndexSetupFnc(CWnd *pWnd){
	 return ((CVPMPackageCategorySetup*)pWnd)->OnEditAdDeptIndexSetup();
} 
static int _OnDeleteAdDeptIndexSetupFnc(CWnd *pWnd){
	 return ((CVPMPackageCategorySetup*)pWnd)->OnDeleteAdDeptIndexSetup();
} 
static int _OnSaveAdDeptIndexSetupFnc(CWnd *pWnd){
	 return ((CVPMPackageCategorySetup*)pWnd)->OnSaveAdDeptIndexSetup();
} 
static int _OnCancelAdDeptIndexSetupFnc(CWnd *pWnd){
	 return ((CVPMPackageCategorySetup*)pWnd)->OnCancelAdDeptIndexSetup();
} 
static int _OnInputCheckValueFnc(CWnd *pWnd){
	return ((CVPMPackageCategorySetup*)pWnd->GetParent())->OnInputCheckValue();
}
CVPMPackageCategorySetup::CVPMPackageCategorySetup(){

	m_nDlgWidth = 820;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CVPMPackageCategorySetup::~CVPMPackageCategorySetup(){
}
void CVPMPackageCategorySetup::OnCreateComponents(){
	m_wndDetailInformation.Create(this, _T("Detail Information"), 5, 5, 810, 590);
	m_wndNameLabel.Create(this, _T("Name"), 10, 30, 110, 55);
	m_wndName.Create(this,115, 30, 285, 55); 
	m_wndLoadData.Create(this, _T("Load Data"), 290, 30, 370, 55);
	m_wndApply.Create(this, _T("&Apply"), 730, 595, 810, 620);
	m_wndList.Create(this,9, 60, 804, 585); 

}
void CVPMPackageCategorySetup::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndName.SetLimitText(1024);

	m_wndList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 500);
	m_wndList.InsertColumn(3, _T("Category"), CFMT_TEXT, 100);
	m_wndList.SetEditLabel(3, GUI_TEXTCTRL);

}
void CVPMPackageCategorySetup::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndLoadData.SetEvent(WE_CLICK, _OnLoadDataSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	CGuiTextCtrl* pCtrl = (CGuiTextCtrl*) m_wndList.GetEditControl(3);
	if (pCtrl)
	{
		//pCtrl->SetEvent(WE_CHECKVALUE, _OnInputCheckValueFnc);
	}
	OnListLoadData();

}
void CVPMPackageCategorySetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CVPMPackageCategorySetup::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVPMPackageCategorySetup::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CVPMPackageCategorySetup::SetDefaultValues(){

	m_szName.Empty();

}
int CVPMPackageCategorySetup::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
void CVPMPackageCategorySetup::OnNameChange(){
	UpdateData(true);
	m_wndList.Search(2, m_szName, SEARCH_LIKE);
}
/*void CVPMPackageCategorySetup::OnNameSetfocus(){
	
} */
/*void CVPMPackageCategorySetup::OnNameKillfocus(){
	
} */
int CVPMPackageCategorySetup::OnNameCheckValue(){
	return 0;
}
void CVPMPackageCategorySetup::OnLoadDataSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 

void CVPMPackageCategorySetup::OnApplySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szId, szCat;
	int nRet = 0;
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		szCat = m_wndList.GetItemText(i, 3);
		szId = m_wndList.GetItemText(i, 1);
		szSQL.Format(_T("UPDATE sys_sel SET ss_default = '%s' WHERE ss_id = 'HMS_SERVICE_PACKAGE' AND ss_code = '%s'"), szCat, szId);
		nRet += pMF->ExecSQL(szSQL);
	}
	if (nRet > 0)
	{
		ShowMessageBox(_T("Apply Successfully!"));
	}
} 
void CVPMPackageCategorySetup::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CVPMPackageCategorySetup::OnListDblClick(){
	
} 
void CVPMPackageCategorySetup::OnListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CVPMPackageCategorySetup::OnListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CVPMPackageCategorySetup::OnListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIdx = 1;
	if (!m_szName.IsEmpty())
		szWhere.Format(_T(" AND lower(ss_desc) LIKE chr(37)||lower('%s')||chr(37)"), m_szName);
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name, ss_default as cat FROM sys_sel WHERE ss_id = 'HMS_SERVICE_PACKAGE' %s"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			int2str(nIdx++),
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("cat")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

int CVPMPackageCategorySetup::OnInputCheckValue(){
	return 0;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0) return 0;
	CString tmpStr;
	double nIndex  = 0;
	CGuiNumberCtrl *pCtrl = (CGuiNumberCtrl*) m_wndList.GetEditControl(3);
	if (pCtrl == NULL) return 0;
	pCtrl->GetWindowText(tmpStr);
	nIndex = str2double(tmpStr);
	if (nIndex < 0) return -1;
	return 0;
}

int CVPMPackageCategorySetup::OnAddAdDeptIndexSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CVPMPackageCategorySetup::OnEditAdDeptIndexSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CVPMPackageCategorySetup::OnDeleteAdDeptIndexSetup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelAdDeptIndexSetup();
 	}
	return 0;
}
int CVPMPackageCategorySetup::OnSaveAdDeptIndexSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnAdDeptIndexSetupListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CVPMPackageCategorySetup::OnCancelAdDeptIndexSetup(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CVPMPackageCategorySetup::OnAdDeptIndexSetupListLoadData(){
	return 0;
}
