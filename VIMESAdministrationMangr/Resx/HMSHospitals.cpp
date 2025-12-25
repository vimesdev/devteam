#include "HMSHospitals.h"
#include "MainFrm.h"
static void _OnProvillSearchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitals* )pWnd)->OnProvillSearchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSearchSelendokFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnProvillSearchSelendok();
}
/*static void _OnProvillSearchSetfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnProvillSearchKillfocus();
}*/
/*static void _OnProvillSearchKillfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnProvillSearchKillfocus();
}*/
static long _OnProvillSearchLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitals *)pWnd)->OnProvillSearchLoadData();
}
/*static void _OnProvillSearchAddNewFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnProvillSearchAddNew();
}*/
static void _OnDistSearchSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitals* )pWnd)->OnDistSearchSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDistSearchSelendokFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnDistSearchSelendok();
}
/*static void _OnDistSearchSetfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnDistSearchKillfocus();
}*/
/*static void _OnDistSearchKillfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnDistSearchKillfocus();
}*/
static long _OnDistSearchLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitals *)pWnd)->OnDistSearchLoadData();
}
/*static void _OnDistSearchAddNewFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnDistSearchAddNew();
}*/
static void _OnHostpitalNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitals* )pWnd)->OnHostpitalNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHostpitalNameSelendokFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnHostpitalNameSelendok();
}
/*static void _OnHostpitalNameSetfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnHostpitalNameKillfocus();
}*/
/*static void _OnHostpitalNameKillfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnHostpitalNameKillfocus();
}*/
static long _OnHostpitalNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitals *)pWnd)->OnHostpitalNameLoadData();
}
/*static void _OnHostpitalNameAddNewFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnHostpitalNameAddNew();
}*/
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitals*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSHospitals*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSHospitals*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSHospitals*)pWnd)->OnListDeleteItem();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitals* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitals *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnTypeAddNew();
}*/
static void _OnProvillSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSHospitals* )pWnd)->OnProvillSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProvillSelendokFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnProvillSelendok();
}
/*static void _OnProvillSetfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnProvillKillfocus();
}*/
/*static void _OnProvillKillfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnProvillKillfocus();
}*/
static long _OnProvillLoadDataFnc(CWnd *pWnd){
	return ((CHMSHospitals *)pWnd)->OnProvillLoadData();
}
/*static void _OnProvillAddNewFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnProvillAddNew();
}*/
/*static void _OnDistChangeFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnDistChange();
} */
/*static void _OnDistSetfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnDistSetfocus();} */ 
/*static void _OnDistKillfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnDistKillfocus();
} */
static int _OnDistCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitals *)pWnd)->OnDistCheckValue();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitals *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSHospitals *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSHospitals *)pWnd)->OnNameCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSHospitals *pVw = (CHMSHospitals *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSHospitals *pVw = (CHMSHospitals *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSHospitals *pVw = (CHMSHospitals *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSHospitals *pVw = (CHMSHospitals *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSHospitals *pVw = (CHMSHospitals *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSHospitalsFnc(CWnd *pWnd){
	 return ((CHMSHospitals*)pWnd)->OnAddHMSHospitals();
} 
static int _OnEditHMSHospitalsFnc(CWnd *pWnd){
	 return ((CHMSHospitals*)pWnd)->OnEditHMSHospitals();
} 
static int _OnDeleteHMSHospitalsFnc(CWnd *pWnd){
	 return ((CHMSHospitals*)pWnd)->OnDeleteHMSHospitals();
} 
static int _OnSaveHMSHospitalsFnc(CWnd *pWnd){
	 return ((CHMSHospitals*)pWnd)->OnSaveHMSHospitals();
} 
static int _OnCancelHMSHospitalsFnc(CWnd *pWnd){
	 return ((CHMSHospitals*)pWnd)->OnCancelHMSHospitals();
} 
CHMSHospitals::CHMSHospitals(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CHMSHospitals::~CHMSHospitals(){
}
void CHMSHospitals::OnCreateComponents(){
	m_wndFilter.Create(this, _T("Filter"), 5, 5, 805, 60);
	m_wndProvillSearchLabel.Create(this, _T("Provill Search"), 10, 30, 90, 55);
	m_wndProvillSearch.Create(this,95, 30, 265, 55); 
	m_wndDistSearchLabel.Create(this, _T("Dist Search"), 270, 30, 350, 55);
	m_wndDistSearch.Create(this,355, 30, 525, 55); 
	m_wndHostpitalNameLabel.Create(this, _T("Hostpital Name"), 535, 30, 615, 55);
	m_wndHostpitalName.Create(this,620, 30, 800, 55); 
	m_wndHospitalList.Create(this, _T("Hospital List"), 5, 65, 805, 580);
	m_wndList.Create(this,10, 90, 800, 525); 
	m_wndTypeLabel.Create(this, _T("Type"), 10, 530, 60, 552);
	m_wndType.Create(this,65, 530, 165, 552); 
	m_wndProvillLabel.Create(this, _T("Provill"), 170, 530, 220, 552);
	m_wndProvill.Create(this,225, 530, 470, 552); 
	m_wndDistLabel.Create(this, _T("Dist"), 475, 530, 555, 552);
	m_wndDist.Create(this,560, 530, 800, 552); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 555, 60, 577);
	m_wndID.Create(this,65, 555, 165, 577); 
	m_wndNameLabel.Create(this, _T("Name"), 170, 555, 220, 577);
	m_wndName.Create(this,225, 555, 800, 577); 
	m_wndAdd.Create(this, _T("&Add"), 435, 585, 505, 607);
	m_wndEdit.Create(this, _T("&Edit"), 510, 585, 580, 607);
	m_wndDelete.Create(this, _T("&Delete"), 585, 585, 655, 607);
	m_wndSave.Create(this, _T("&Save"), 660, 585, 730, 607);
	m_wndCancel.Create(this, _T("&Cancel"), 735, 585, 805, 607);

}
void CHMSHospitals::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndProvillSearch.SetCheckValue(true);
	m_wndProvillSearch.LimitText(35);
	m_wndDistSearch.SetCheckValue(true);
	m_wndDistSearch.LimitText(35);
	m_wndHostpitalName.SetCheckValue(true);
	m_wndHostpitalName.LimitText(35);
	m_wndType.SetCheckValue(true);
	m_wndProvill.SetCheckValue(true);
	m_wndDist.SetLimitText(35);
	m_wndDist.SetCheckValue(true);
	m_wndID.SetLimitText(11);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);


	m_wndProvillSearch.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvillSearch.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDistSearch.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndDistSearch.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndHostpitalName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndHostpitalName.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Provill"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(3, _T("Dist"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Type"), CFMT_TEXT, 40);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndProvill.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProvill.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_hms_hospitalTbl.SetTableName(_T("hms_hospital"));
	m_hms_hospitalTbl.AddField(_T("hmsh_createdby"), dfText, 15); 
	m_hms_hospitalTbl.AddField(_T("hmsh_createddate"), dfText, 4); 
	m_hms_hospitalTbl.AddField(_T("hmsh_updatedby"), dfText, 15); 
	m_hms_hospitalTbl.AddField(_T("hmsh_updateddate"), dfText, 4); 
	m_hms_hospitalTbl.AddField(_T("hmsh_id"), dfText, 11); 
	m_hms_hospitalTbl.AddField(_T("hmsh_name"), dfText, 81); 
	m_hms_hospitalTbl.AddField(_T("hmsh_provid"), dfInteger); 
	m_hms_hospitalTbl.AddField(_T("hmsh_type"), dfInteger); 
	m_hms_hospitalTbl.AddField(_T("hmsh_code"), dfText, 7); 

}
void CHMSHospitals::OnSetWindowEvents(){
	m_wndProvillSearch.SetEvent(WE_SELENDOK, _OnProvillSearchSelendokFnc);
	//m_wndProvillSearch.SetEvent(WE_SETFOCUS, _OnProvillSearchSetfocusFnc);
	//m_wndProvillSearch.SetEvent(WE_KILLFOCUS, _OnProvillSearchKillfocusFnc);
	m_wndProvillSearch.SetEvent(WE_SELCHANGE, _OnProvillSearchSelectChangeFnc);
	m_wndProvillSearch.SetEvent(WE_LOADDATA, _OnProvillSearchLoadDataFnc);
	//m_wndProvillSearch.SetEvent(WE_ADDNEW, _OnProvillSearchAddNewFnc);
	m_wndDistSearch.SetEvent(WE_SELENDOK, _OnDistSearchSelendokFnc);
	//m_wndDistSearch.SetEvent(WE_SETFOCUS, _OnDistSearchSetfocusFnc);
	//m_wndDistSearch.SetEvent(WE_KILLFOCUS, _OnDistSearchKillfocusFnc);
	m_wndDistSearch.SetEvent(WE_SELCHANGE, _OnDistSearchSelectChangeFnc);
	m_wndDistSearch.SetEvent(WE_LOADDATA, _OnDistSearchLoadDataFnc);
	//m_wndDistSearch.SetEvent(WE_ADDNEW, _OnDistSearchAddNewFnc);
	m_wndHostpitalName.SetEvent(WE_SELENDOK, _OnHostpitalNameSelendokFnc);
	//m_wndHostpitalName.SetEvent(WE_SETFOCUS, _OnHostpitalNameSetfocusFnc);
	//m_wndHostpitalName.SetEvent(WE_KILLFOCUS, _OnHostpitalNameKillfocusFnc);
	m_wndHostpitalName.SetEvent(WE_SELCHANGE, _OnHostpitalNameSelectChangeFnc);
	m_wndHostpitalName.SetEvent(WE_LOADDATA, _OnHostpitalNameLoadDataFnc);
	//m_wndHostpitalName.SetEvent(WE_ADDNEW, _OnHostpitalNameAddNewFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	m_wndProvill.SetEvent(WE_SELENDOK, _OnProvillSelendokFnc);
	//m_wndProvill.SetEvent(WE_SETFOCUS, _OnProvillSetfocusFnc);
	//m_wndProvill.SetEvent(WE_KILLFOCUS, _OnProvillKillfocusFnc);
	m_wndProvill.SetEvent(WE_SELCHANGE, _OnProvillSelectChangeFnc);
	m_wndProvill.SetEvent(WE_LOADDATA, _OnProvillLoadDataFnc);
	//m_wndProvill.SetEvent(WE_ADDNEW, _OnProvillAddNewFnc);
	//m_wndDist.SetEvent(WE_CHANGE, _OnDistChangeFnc);
	//m_wndDist.SetEvent(WE_SETFOCUS, _OnDistSetfocusFnc);
	//m_wndDist.SetEvent(WE_KILLFOCUS, _OnDistKillfocusFnc);
	m_wndDist.SetEvent(WE_CHECKVALUE, _OnDistCheckValueFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSHospitalsFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSHospitalsFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSHospitalsFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSHospitalsFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSHospitalsFnc, 0, 'T', VK_CONTROL);

}
void CHMSHospitals::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProvillSearch.GetDlgCtrlID(), m_szProvillSearchKey);
	DDX_TextEx(pDX, m_wndDistSearch.GetDlgCtrlID(), m_szDistSearchKey);
	DDX_TextEx(pDX, m_wndHostpitalName.GetDlgCtrlID(), m_szHostpitalNameKey);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndProvill.GetDlgCtrlID(), m_szProvillKey);
	DDX_Text(pDX, m_wndDist.GetDlgCtrlID(), m_szDist);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);

}
void CHMSHospitals::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hmsh_id"), m_szID);
	rs.GetValue(_T("hmsh_name"), m_szName);
	rs.GetValue(_T("hmsh_provid"), m_szProvillKey);
	rs.GetValue(_T("hmsh_type"), m_szTypeKey);

}
void CHMSHospitals::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_hospitalTbl.SetValue(_T("hmsh_createdby"), pMF->GetCurrentUser());
	m_hms_hospitalTbl.SetValue(_T("hmsh_createddate"), pMF->GetSysDateTime());
	m_hms_hospitalTbl.SetValue(_T("hmsh_updatedby"), pMF->GetCurrentUser());
	m_hms_hospitalTbl.SetValue(_T("hmsh_updateddate"), pMF->GetSysDateTime());
	m_hms_hospitalTbl.SetValue(_T("hmsh_id"), m_szID);
	m_hms_hospitalTbl.SetValue(_T("hmsh_name"), m_szName);
	m_hms_hospitalTbl.SetValue(_T("hmsh_provid"), m_szProvillKey);
	m_hms_hospitalTbl.SetValue(_T("hmsh_type"), m_szTypeKey);

}
void CHMSHospitals::SetDefaultValues(){

	m_szProvillSearchKey.Empty();
	m_szDistSearchKey.Empty();
	m_szHostpitalNameKey.Empty();
	m_szTypeKey.Empty();
	m_szProvillKey.Empty();
	m_szDist.Empty();
	m_szID.Empty();
	m_szName.Empty();

}
int CHMSHospitals::SetMode(int nMode){
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
void CHMSHospitals::OnProvillSearchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitals::OnProvillSearchSelendok(){
	 
}
/*void CHMSHospitals::OnProvillSearchSetfocus(){
	
}*/
/*void CHMSHospitals::OnProvillSearchKillfocus(){
	
}*/
long CHMSHospitals::OnProvillSearchLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvillSearch.IsSearchKey() && !m_szProvillSearchKey.IsEmpty()){
	};
	m_wndProvillSearch.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvillSearch.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitals::OnProvillSearchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSHospitals::OnDistSearchSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitals::OnDistSearchSelendok(){
	 
}
/*void CHMSHospitals::OnDistSearchSetfocus(){
	
}*/
/*void CHMSHospitals::OnDistSearchKillfocus(){
	
}*/
long CHMSHospitals::OnDistSearchLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDistSearch.IsSearchKey() && !m_szDistSearchKey.IsEmpty()){
	};
	m_wndDistSearch.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDistSearch.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitals::OnDistSearchAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSHospitals::OnHostpitalNameSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitals::OnHostpitalNameSelendok(){
	 
}
/*void CHMSHospitals::OnHostpitalNameSetfocus(){
	
}*/
/*void CHMSHospitals::OnHostpitalNameKillfocus(){
	
}*/
long CHMSHospitals::OnHostpitalNameLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndHostpitalName.IsSearchKey() && !m_szHostpitalNameKey.IsEmpty()){
	};
	m_wndHostpitalName.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHostpitalName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitals::OnHostpitalNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSHospitals::OnListDblClick(){
	
} 
void CHMSHospitals::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSHospitals::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSHospitals::OnListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	m_wndList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("ID")), 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Provill")), 
			rs.GetValue(_T("Dist")), 
			rs.GetValue(_T("Type")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CHMSHospitals::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitals::OnTypeSelendok(){
	 
}
/*void CHMSHospitals::OnTypeSetfocus(){
	
}*/
/*void CHMSHospitals::OnTypeKillfocus(){
	
}*/
long CHMSHospitals::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitals::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSHospitals::OnProvillSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitals::OnProvillSelendok(){
	 
}
/*void CHMSHospitals::OnProvillSetfocus(){
	
}*/
/*void CHMSHospitals::OnProvillKillfocus(){
	
}*/
long CHMSHospitals::OnProvillLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProvill.IsSearchKey() && !m_szProvillKey.IsEmpty()){
	};
	m_wndProvill.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProvill.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSHospitals::OnProvillAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSHospitals::OnDistChange(){
	
} */
/*void CHMSHospitals::OnDistSetfocus(){
	
} */
/*void CHMSHospitals::OnDistKillfocus(){
	
} */
int CHMSHospitals::OnDistCheckValue(){
	return 0;
} 
/*void CHMSHospitals::OnIDChange(){
	
} */
/*void CHMSHospitals::OnIDSetfocus(){
	
} */
/*void CHMSHospitals::OnIDKillfocus(){
	
} */
int CHMSHospitals::OnIDCheckValue(){
	return 0;
} 
/*void CHMSHospitals::OnNameChange(){
	
} */
/*void CHMSHospitals::OnNameSetfocus(){
	
} */
/*void CHMSHospitals::OnNameKillfocus(){
	
} */
int CHMSHospitals::OnNameCheckValue(){
	return 0;
} 
void CHMSHospitals::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitals::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitals::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitals::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSHospitals::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSHospitals::OnAddHMSHospitals(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSHospitals::OnEditHMSHospitals(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSHospitals::OnDeleteHMSHospitals(){
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
 		OnCancelHMSHospitals(); 
 	}
	return 0;
}
int CHMSHospitals::OnSaveHMSHospitals(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_hms_hospitalTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_hms_hospitalTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSHospitalsListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSHospitals::OnCancelHMSHospitals(){
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
int CHMSHospitals::OnHMSHospitalsListLoadData(){
	return 0;
}
