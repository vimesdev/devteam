#include "AdManufactureList.h"
#include "MainFrame_E10.h"
#include "AdManufactureDialog.h"
#include ".\admanufacturelist.h"
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdManufactureList *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdManufactureList *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdManufactureList *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdManufactureList *)pWnd)->OnNameCheckValue();
} 
static void _OnProducingCountrySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdManufactureList* )pWnd)->OnProducingCountrySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProducingCountrySelendokFnc(CWnd *pWnd){
	((CAdManufactureList *)pWnd)->OnProducingCountrySelendok();
}
/*static void _OnProducingCountrySetfocusFnc(CWnd *pWnd){
	((CAdManufactureList *)pWnd)->OnProducingCountryKillfocus();
}*/
/*static void _OnProducingCountryKillfocusFnc(CWnd *pWnd){
	((CAdManufactureList *)pWnd)->OnProducingCountryKillfocus();
}*/
static long _OnProducingCountryLoadDataFnc(CWnd *pWnd){
	return ((CAdManufactureList *)pWnd)->OnProducingCountryLoadData();
}
/*static void _OnProducingCountryAddNewFnc(CWnd *pWnd){
	((CAdManufactureList *)pWnd)->OnProducingCountryAddNew();
}*/
static void _OnFindSelectFnc(CWnd *pWnd){
	CAdManufactureList *pVw = (CAdManufactureList *)pWnd;
	pVw->OnFindSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CAdManufactureList *pVw = (CAdManufactureList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CAdManufactureList *pVw = (CAdManufactureList *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CAdManufactureList *pVw = (CAdManufactureList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnLoadInactiveSelectFnc(CWnd *pWnd){
	CAdManufactureList *pVw = (CAdManufactureList *)pWnd;
	pVw->OnLoadInactiveSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CAdManufactureList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CAdManufactureList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CAdManufactureList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListAddItemFnc(CWnd *pWnd){
	 return ((CAdManufactureList*)pWnd)->OnListAddItem();
} 
static int _OnListEditItemFnc(CWnd *pWnd){
	 return ((CAdManufactureList*)pWnd)->OnListEditItem();
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CAdManufactureList*)pWnd)->OnListDeleteItem();
} 
static int _OnAddAdManufactureListFnc(CWnd *pWnd){
	 return ((CAdManufactureList*)pWnd)->OnAddAdManufactureList();
} 
static int _OnEditAdManufactureListFnc(CWnd *pWnd){
	 return ((CAdManufactureList*)pWnd)->OnEditAdManufactureList();
} 
static int _OnDeleteAdManufactureListFnc(CWnd *pWnd){
	 return ((CAdManufactureList*)pWnd)->OnDeleteAdManufactureList();
} 
static int _OnSaveAdManufactureListFnc(CWnd *pWnd){
	 return ((CAdManufactureList*)pWnd)->OnSaveAdManufactureList();
} 
static int _OnCancelAdManufactureListFnc(CWnd *pWnd){
	 return ((CAdManufactureList*)pWnd)->OnCancelAdManufactureList();
} 
CAdManufactureList::CAdManufactureList(){

	m_nDlgWidth = 820;
	m_nDlgHeight = 630;
	SetDefaultValues();
}
CAdManufactureList::~CAdManufactureList(){
}
void CAdManufactureList::OnCreateComponents(){
	m_wndSearchInformations.Create(this, _T("Search Informations"), 5, 5, 810, 60);
	m_wndManufactureInformation.Create(this, _T("Manufacture Information"), 5, 65, 810, 590);
	m_wndProducingCountryLabel.Create(this, _T("Producing Country"), 10, 30, 155, 55);
	m_wndProducingCountry.Create(this,160, 30, 385, 55); 
	m_wndNameLabel.Create(this, _T("Manufacture"), 390, 30, 510, 55);
	m_wndName.Create(this,515, 30, 775, 55); 
	m_wndFind.Create(this, _T("@"), 780, 30, 805, 55);
	m_wndAdd.Create(this, _T("&Add"), 560, 595, 640, 620);
	m_wndEdit.Create(this, _T("&Edit"), 645, 595, 725, 620);
	m_wndDelete.Create(this, _T("&Delete"), 730, 595, 810, 620);
	m_wndLoadInactive.Create(this, _T("Load Inactive Item"), 5, 595, 150, 620);
	m_wndList.Create(this,10, 90, 805, 585); 

}
void CAdManufactureList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndName.SetLimitText(81);
	//m_wndName.SetCheckValue(true);
	//m_wndProducingCountry.SetCheckValue(true);
	m_wndProducingCountry.LimitText(5);


	m_wndProducingCountry.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndProducingCountry.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //id
	m_wndList.InsertColumn(1, _T("No."), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Name"), CFMT_TEXT, 430);
	m_wndList.InsertColumn(3, _T("Producing Country"), CFMT_TEXT, 220);

	m_manufactureTbl.SetTableName(_T("ad_manufacture"));
	m_manufactureTbl.AddField(_T("adm_manufacture_id"), dfText, 7); 
	m_manufactureTbl.AddField(_T("adm_country_id"), dfText, 5); 
	m_manufactureTbl.AddField(_T("adm_name"), dfText, 81); 

}
void CAdManufactureList::OnSetWindowEvents(){
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndProducingCountry.SetEvent(WE_SELENDOK, _OnProducingCountrySelendokFnc);
	//m_wndProducingCountry.SetEvent(WE_SETFOCUS, _OnProducingCountrySetfocusFnc);
	//m_wndProducingCountry.SetEvent(WE_KILLFOCUS, _OnProducingCountryKillfocusFnc);
	m_wndProducingCountry.SetEvent(WE_SELCHANGE, _OnProducingCountrySelectChangeFnc);
	m_wndProducingCountry.SetEvent(WE_LOADDATA, _OnProducingCountryLoadDataFnc);
	//m_wndProducingCountry.SetEvent(WE_ADDNEW, _OnProducingCountryAddNewFnc);
	m_wndFind.SetEvent(WE_CLICK, _OnFindSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndLoadInactive.SetEvent(WE_CLICK, _OnLoadInactiveSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Manufacture Entry"));
	m_wndList.AddEvent(1, _T("Add"), _OnListAddItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(2, _T("Edit"), _OnListEditItemFnc);
	m_wndList.AddEvent(0, _T("-"), NULL);
	m_wndList.AddEvent(3, _T("Delete"), _OnListDeleteItemFnc, 0);
	//Layout
	AddLayoutControl(&m_wndSearchInformations, WS_RESIZEX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndProducingCountry, WS_RESIZEX, 100, 100, 50, 100);
	AddLayoutControl(&m_wndNameLabel, WS_REPOSX, 50, 100, 100, 100);
	AddLayoutControl(&m_wndName, WS_REPOSX | WS_RESIZEX, 50, 100, 50, 50);
	AddLayoutControl(&m_wndFind, WS_REPOSX, 100, 100, 100, 100);
	AddLayoutControl(&m_wndManufactureInformation, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndList, WS_RESIZEX|WS_RESIZEY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndAdd, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndEdit, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
	AddLayoutControl(&m_wndDelete, WS_REPOSX|WS_REPOSY, 100, 100, 100, 100);
//	m_wndList.SetAutoColumnSize(true);
	SetMode(VM_VIEW);
//	OnListLoadData();
}
void CAdManufactureList::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndProducingCountry.GetDlgCtrlID(), m_szProducingCountryKey);
	DDX_Check(pDX, m_wndLoadInactive.GetDlgCtrlID(), m_bLoadInactive);
}
void CAdManufactureList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("adm_country_id"), m_szProducingCountryKey);
	rs.GetValue(_T("adm_name"), m_szName);

}
void CAdManufactureList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_manufactureTbl.SetValue(_T("adm_country_id"), m_szProducingCountryKey);
	m_manufactureTbl.SetValue(_T("adm_name"), m_szName);

}
void CAdManufactureList::SetDefaultValues(){

	m_szName.Empty();
	m_szProducingCountryKey.Empty();
	m_bLoadInactive = false;
}
int CAdManufactureList::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
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
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
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
/*void CAdManufactureList::OnNameChange(){
	
} */
/*void CAdManufactureList::OnNameSetfocus(){
	
} */
/*void CAdManufactureList::OnNameKillfocus(){
	
} */
int CAdManufactureList::OnNameCheckValue(){
	return 0;
} 
void CAdManufactureList::OnProducingCountrySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdManufactureList::OnProducingCountrySelendok(){
	OnListLoadData(); 
}
/*void CAdManufactureList::OnProducingCountrySetfocus(){
	
}*/
/*void CAdManufactureList::OnProducingCountryKillfocus(){
	
}*/
long CAdManufactureList::OnProducingCountryLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProducingCountry.IsSearchKey() && !m_szProducingCountryKey.IsEmpty()){
		szWhere.Format(_T(" WHERE adc_country_id='%s' "), m_szProducingCountryKey);
	};
	m_wndProducingCountry.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT adc_country_id, adc_name FROM ad_country %s ORDER BY adc_country_id "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProducingCountry.AddItems(
			rs.GetValue(_T("adc_country_id")), 
			rs.GetValue(_T("adc_name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CAdManufactureList::OnProducingCountryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdManufactureList::OnFindSelect(){
	_debug(_T("%s"), CString(typeid(this).name()));
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListLoadData();
} 
void CAdManufactureList::OnAddSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnAddAdManufactureList();
} 
void CAdManufactureList::OnEditSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnEditAdManufactureList();
} 
void CAdManufactureList::OnDeleteSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdManufactureList();
} 
void CAdManufactureList::OnLoadInactiveSelect(){
	OnListLoadData();
}
void CAdManufactureList::OnListDblClick(){
	OnEditSelect();
} 
void CAdManufactureList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();
	m_nID = str2long(m_wndList.GetItemText(nSel, 0));
} 
int CAdManufactureList::OnListAddItem(){
	OnAddAdManufactureList();
	return 0;
}
int CAdManufactureList::OnListEditItem(){
	OnEditAdManufactureList();
	return 0;
}
int CAdManufactureList::OnListDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnDeleteAdManufactureList();
	return 0;
} 
long CAdManufactureList::OnListLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	UpdateData(TRUE);
	
	if (!m_szProducingCountryKey.IsEmpty())
		szWhere.AppendFormat(_T(" AND adm_country_id = '%s'"), m_szProducingCountryKey);
	if (!m_szName.IsEmpty())
		szWhere.AppendFormat(_T(" AND lower(adm_name) LIKE (chr(37)||lower('%s')||chr(37))"), m_szName);
	if (m_bLoadInactive)
		szWhere.AppendFormat(_T(" AND adm_isactive = 'N'"));
	else
		szWhere.AppendFormat(_T(" AND adm_isactive = 'Y'"));

	if(pMF->GetModuleID() == _T("GLS"))
	{
		szWhere.AppendFormat(_T(" and adm_org_id='GLS' "));
	}

	m_wndList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT adm_manufacture_id,") \
		_T(" adm_code, ") \
		_T("   adm_name,") \
		_T("   adc_name AS adm_countryname") \
		_T(" FROM ad_manufacture") \
		_T(" LEFT JOIN ad_country") \
		_T(" ON(adc_country_id=adm_country_id)") \
		_T(" WHERE 1=1 %s ") \
		_T(" ORDER BY adm_manufacture_id") , szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("adm_manufacture_id")), 
			rs.GetValue(_T("adm_code")), 
			rs.GetValue(_T("adm_name")), 
			rs.GetValue(_T("adm_countryname")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CAdManufactureList::OnAddAdManufactureList(){
 	//if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 	//	return -1; 
 	//CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	//SetMode(VM_ADD);
	CAdManufactureDialog dlg(this, VM_ADD);
	if(dlg.DoModal() == IDOK){
	}
	return 0; 
}
int CAdManufactureList::OnEditAdManufactureList(){
 	//if(GetMode() != VM_VIEW) 
 	//	return -1; 
 	//CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	//SetMode(VM_EDIT);
	CAdManufactureDialog dlg(this, VM_EDIT);
	dlg.m_nID = m_nID;
	if(dlg.DoModal() == IDOK){
	}
	return 0;  
}
int CAdManufactureList::OnDeleteAdManufactureList(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT COUNT(*) FROM m_productitem_view WHERE product_manufactureid = %ld "), m_nID);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
		return -1;

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM ad_manufacture WHERE adm_manufacture_id=%ld "), m_nID); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		m_wndList.DeleteItem(m_wndList.GetCurSel());
		m_wndList.SetCurSel(m_wndList.GetCurSel());
 	}
	////_fmsg_T("%s"), m_nID);
	return 0;
}
int CAdManufactureList::OnSaveAdManufactureList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//szSQL = m_manufactureTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE")); 
 		//szSQL = m_manufactureTbl.GetUpdateSQL(_T("createdby,createddate")); 
 		szSQL += szWhere; 
 	} 
 ////_fmsg_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnAdManufactureListListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CAdManufactureList::OnCancelAdManufactureList(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	return 0;
} 
int CAdManufactureList::OnAdManufactureListListLoadData(){
	return 0;
}
void CAdManufactureList::Refresh(long nID){
	if(!IsWindowVisible())
		return;
	OnListLoadData();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		long nOldSel = str2long(m_wndList.GetItemText(i, 0));
		if(nID == nOldSel){
			m_wndList.SetItemTextColor(i, RGB(255, 255, 255), FALSE);
				m_wndList.SetItemBkColor(i, RGB(255, 128, 0), TRUE);
				if(i < m_wndList.GetItemCount()-1)
					m_wndList.SetCurSel(i+1);
				else if(i > 0)
					m_wndList.SetCurSel(i-1);
				else
					m_wndList.SetCurSel(i);
		}
	}

}BEGIN_MESSAGE_MAP(CAdManufactureList, CGuiView)
ON_WM_SETFOCUS()
END_MESSAGE_MAP()

void CAdManufactureList::OnSetFocus(CWnd* pOldWnd)
{
	CGuiView::OnSetFocus(pOldWnd);

	// TODO: Add your message handler code here
	m_wndName.SetFocus();
}
void CAdManufactureList::OnResizeLayout() {
	AddResize(&m_wndList, 100, 100);
	AddResize(&m_wndManufactureInformation, 100, 100);

	AddBottom(&m_wndLoadInactive);
	AddBottom(&m_wndAdd);
	AddBottom(&m_wndEdit);
	AddBottom(&m_wndDelete);
	
}
