#include "PMSUomList.h"
#include "MainFrm.h"
#include "PMSUomPopup.h"

/*static void _OnSearchNameChangeFnc(CWnd *pWnd){
	((CPMSUomList *)pWnd)->OnSearchNameChange();
} */
/*static void _OnSearchNameSetfocusFnc(CWnd *pWnd){
	((CPMSUomList *)pWnd)->OnSearchNameSetfocus();} */ 
/*static void _OnSearchNameKillfocusFnc(CWnd *pWnd){
	((CPMSUomList *)pWnd)->OnSearchNameKillfocus();
} */
static int _OnSearchNameCheckValueFnc(CWnd *pWnd){
	return ((CPMSUomList *)pWnd)->OnSearchNameCheckValue();
} 
static void _OnSearchSelectFnc(CWnd *pWnd){
	CPMSUomList *pVw = (CPMSUomList *)pWnd;
	pVw->OnSearchSelect();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CPMSUomList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CPMSUomList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSUomList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSUomList*)pWnd)->OnListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CPMSUomList *pVw = (CPMSUomList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CPMSUomList *pVw = (CPMSUomList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CPMSUomList *pVw = (CPMSUomList *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddPMSUomListFnc(CWnd *pWnd){
	 return ((CPMSUomList*)pWnd)->OnAddPMSUomList();
} 
static int _OnEditPMSUomListFnc(CWnd *pWnd){
	 return ((CPMSUomList*)pWnd)->OnEditPMSUomList();
} 
static int _OnDeletePMSUomListFnc(CWnd *pWnd){
	 return ((CPMSUomList*)pWnd)->OnDeletePMSUomList();
} 
static int _OnSavePMSUomListFnc(CWnd *pWnd){
	 return ((CPMSUomList*)pWnd)->OnSavePMSUomList();
} 
static int _OnCancelPMSUomListFnc(CWnd *pWnd){
	 return ((CPMSUomList*)pWnd)->OnCancelPMSUomList();
} 
CPMSUomList::CPMSUomList(){

	m_nDlgWidth = 820;
	m_nDlgHeight = 625;
	SetDefaultValues();
}
CPMSUomList::~CPMSUomList(){
}
void CPMSUomList::OnCreateComponents(){
	m_wndSearchInformation.Create(this, _T("Search Information"), 5, 5, 810, 60);
	m_wndUnitOfMeasure.Create(this, _T("Unit of measure"), 5, 65, 810, 590);
	m_wndSearchNameLabel.Create(this, _T("Search Name"), 11, 30, 91, 55);
	m_wndSearchName.Create(this,96, 30, 709, 55); 
	m_wndSearch.Create(this, _T("@Search"), 714, 30, 804, 55);
	m_wndList.Create(this,10, 90, 805, 585); 
	m_wndAdd.Create(this, _T("&Add"), 530, 595, 620, 620);
	m_wndEdit.Create(this, _T("&Edit"), 625, 595, 715, 620);
	m_wndDelete.Create(this, _T("&Delete"), 720, 595, 810, 620);

}
void CPMSUomList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndSearchName.SetLimitText(35);
	//m_wndSearchName.SetCheckValue(true);
	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 300);
}

void CPMSUomList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearchName.SetEvent(WE_CHANGE, _OnSearchNameChangeFnc);
	//m_wndSearchName.SetEvent(WE_SETFOCUS, _OnSearchNameSetfocusFnc);
	//m_wndSearchName.SetEvent(WE_KILLFOCUS, _OnSearchNameKillfocusFnc);
	m_wndSearchName.SetEvent(WE_CHECKVALUE, _OnSearchNameCheckValueFnc);
	m_wndSearch.SetEvent(WE_CLICK, _OnSearchSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPMSUomListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPMSUomListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePMSUomListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePMSUomListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPMSUomListFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);

}
void CPMSUomList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearchName.GetDlgCtrlID(), m_szSearchName);

}
void CPMSUomList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_VIEW);
}

void CPMSUomList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}

void CPMSUomList::SetDefaultValues(){

	m_szSearchName.Empty();

}

int CPMSUomList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE,  -1); 
 			SetDefaultValues(); 
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(FALSE, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
			m_wndSearchName.SetFocus();
 			break; 
 		case VM_NONE: 
 			EnableButtons(TRUE, 0, 1,  -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
		m_wndSearchName.EnableWindow(TRUE);
 		UpdateData(FALSE); 
 		return nOldMode; 
}

/*void CPMSUomList::OnSearchNameChange(){
	
} */
/*void CPMSUomList::OnSearchNameSetfocus(){
	
} */
/*void CPMSUomList::OnSearchNameKillfocus(){
	
} */
int CPMSUomList::OnSearchNameCheckValue(){
	return 0;
}
 
void CPMSUomList::OnSearchSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CPMSUomList::OnListDblClick(){
	
}
 
void CPMSUomList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	m_nID = str2long(m_wndList.GetItemText(nSel, 0));
	GetDataToScreen();
}
 
int CPMSUomList::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeletePMSUomList();
	return 0;
}
 
long CPMSUomList::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if (!m_szSearchName.IsEmpty())
		szWhere.Format(_T(" and lower(pmsu_name) LIKE (chr(37)||lower('%s')||chr(37))"), m_szSearchName);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT pmsu_uom_id, pmsu_name, pmsu_description ") \
		_T("FROM pms_uom WHERE pmsu_isactive='Y' %s ") \
		_T("ORDER BY pmsu_name "),  szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("pmsu_uom_id")), 
			rs.GetValue(_T("pmsu_name")), 
			rs.GetValue(_T("pmsu_description")), 
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

void CPMSUomList::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddPMSUomList();
}
 
void CPMSUomList::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditPMSUomList();
}
 
void CPMSUomList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeletePMSUomList();
}
 
int CPMSUomList::OnAddPMSUomList(){
 /*	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
*/
//	CPMSUomPopup *newPopup = new CPMSUomPopup(this, VM_ADD);
//	newPopup->SetMode(VM_ADD);
//	newPopup->ShowPopup(&m_wndList);
	CPMSUomPopup dlg(this, VM_ADD);
	dlg.DoModal();
	return 0; 
}

int CPMSUomList::OnEditPMSUomList(){
 	//if(GetMode() != VM_VIEW) 
 	//	return -1; 
 	//CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	//SetMode(VM_EDIT);
//	CPMSUomPopup *newPopup = new CPMSUomPopup(this, VM_EDIT);
//	newPopup->SetMode(VM_EDIT);
//	newPopup->m_nID = m_nID;
//	newPopup->ShowPopup(&m_wndList);

	CPMSUomPopup dlg(this, VM_EDIT);
	dlg.m_nID = m_nID;
	dlg.DoModal();

	return 0;  
}

int CPMSUomList::OnDeletePMSUomList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		return -1;
	
	m_nID = str2long(m_wndList.GetItemText(nSel, 0));
 	
	szSQL.Format(_T("SELECT COUNT(*) FROM pms_product WHERE pmsp_uom_id=%ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Cannot delete line"));
		return -1;
	}

	if(ShowMessageBox(_T("Do you want to delete item selected?(Y/N)"), MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	
 	szSQL.Format(_T("DELETE FROM pms_uom WHERE pmsu_uom_id=%ld "), m_nID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		SetMode(VM_VIEW);
		m_wndList.DeleteItem(nSel);
		m_wndList.SetCurSel(nSel-1);
 	}
	return 0;
}

int CPMSUomList::OnSavePMSUomList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_pms_uomTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_pms_uomTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnPMSUomListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}

int CPMSUomList::OnCancelPMSUomList(){
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
 
int CPMSUomList::OnPMSUomListListLoadData(){
	return 0;
}


void CPMSUomList::Refresh(LPCTSTR szActiveID){
	if(!IsWindowVisible())
		return;

	OnListLoadData();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		CString tmpStr = m_wndList.GetItemText(i, 0);
		if(tmpStr == szActiveID){
			m_wndList.SetItemTextColor(i, RGB(255, 255, 255), FALSE);
				m_wndList.SetItemBkColor(i, RGB(255, 128, 0), TRUE);
				if(i < m_wndList.GetItemCount()-1)
					m_wndList.SetCurSel(i+1);
				else if(i > 0)
					m_wndList.SetCurSel(i-1);
				else
					m_wndList.SetCurSel(i);
			break;
		}
	}
}