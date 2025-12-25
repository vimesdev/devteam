#include "HMSParaclinicalDialog.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSConfirmDialog.h"

static long _OnParaclinicalListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog*)pWnd)->OnParaclinicalListLoadData();
} 
static void _OnParaclinicalListDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog*)pWnd)->OnParaclinicalListDblClick();
} 
static void _OnParaclinicalListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalDialog*)pWnd)->OnParaclinicalListSelectChange(nOldItem, nNewItem);
} 
static int _OnParaclinicalListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnParaclinicalListDeleteItem();
} 

static void _OnPerformDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSParaclinicalDialog* )pWnd)->OnPerformDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnPerformDepartmentSelendok();
}
/*static void _OnPerformDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnPerformDepartmentKillfocus();
}*/
/*static void _OnPerformDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnPerformDepartmentKillfocus();
}*/
static long _OnPerformDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog *)pWnd)->OnPerformDepartmentLoadData();
}
/*static void _OnPerformDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnPerformDepartmentAddNew();
}*/
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalDialog*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnTestListDeleteItem();
} 
static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnSearchChange();
} 
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSParaclinicalDialog *pVw = (CHMSParaclinicalDialog *)pWnd;
	pVw->OnAddSelect();
} 
static long _OnSelectListLoadDataFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog*)pWnd)->OnSelectListLoadData();
} 
static void _OnSelectListDblClickFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog*)pWnd)->OnSelectListDblClick();
} 
static void _OnSelectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSParaclinicalDialog*)pWnd)->OnSelectListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnSelectListDeleteItem();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSParaclinicalDialog *pVw = (CHMSParaclinicalDialog *)pWnd;
	pVw->OnRemoveSelect();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSParaclinicalDialog *pVw = (CHMSParaclinicalDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSParaclinicalDialog *pVw = (CHMSParaclinicalDialog *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSParaclinicalDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSParaclinicalDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnGroupSelectFnc(CWnd *pWnd){
	CHMSParaclinicalDialog *pVw = (CHMSParaclinicalDialog *)pWnd;
	pVw->OnGroupSelect();
} 
static int _OnAddHMSParaclinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnAddHMSParaclinicalDialog();
} 
static int _OnEditHMSParaclinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnEditHMSParaclinicalDialog();
} 
static int _OnDeleteHMSParaclinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnDeleteHMSParaclinicalDialog();
} 
static int _OnSaveHMSParaclinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnSaveHMSParaclinicalDialog();
} 
static int _OnCancelHMSParaclinicalDialogFnc(CWnd *pWnd){
	 return ((CHMSParaclinicalDialog*)pWnd)->OnCancelHMSParaclinicalDialog();
} 
CHMSParaclinicalDialog::CHMSParaclinicalDialog(){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 755;
	SetDefaultValues();
}
CHMSParaclinicalDialog::~CHMSParaclinicalDialog(){
}
void CHMSParaclinicalDialog::OnCreateComponents(){
	m_wndParaclinicalList.Create(this,5, 5, 190, 540); 
	m_wndPerformDepartmentLabel.Create(this, _T("&Department"), 5, 545, 85, 571);
	m_wndPerformDepartment.Create(this,90, 545, 190, 570); 
	m_wndTestList.Create(this,195, 5, 545, 540); 
	m_wndSearchLabel.Create(this, _T("&Search"), 195, 545, 265, 571);
	m_wndSearch.Create(this,270, 545, 460, 570); 
	m_wndAdd.Create(this, _T("&Add >>"), 465, 575, 545, 600);
	m_wndSelectList.Create(this,550, 5, 900, 540); 
	m_wndRemove.Create(this, _T("<< &Remove"), 550, 575, 630, 600);
	m_wndApply.Create(this, _T("&Apply"), 734, 575, 814, 600);
	m_wndClose.Create(this, _T("&Close"), 819, 575, 899, 600);
	m_wndOrderDateLabel.Create(this, _T("Date"), 550, 545, 620, 570);
	m_wndOrderDate.Create(this,625, 545, 710, 570); 
	m_wndGroup.Create(this, _T("Group"), 465, 545, 545, 570);

}
void CHMSParaclinicalDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableButtons(TRUE, 0, 1, 2, 3, -1);
//	m_wndPerformDepartment.SetCheckValue(true);
	m_wndPerformDepartment.LimitText(35);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);

	m_wndPerformDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPerformDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_wndTestList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndTestList.InsertColumn(1, _T("Name"), CFMT_TEXT, 185);
	//m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 0);
	m_wndTestList.SetCheckBox(true);

	m_wndSelectList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndSelectList.InsertColumn(1, _T("Name"), CFMT_TEXT, 185);
	//m_wndSelectList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 0);
	m_wndSelectList.InsertColumn(2, _T("Group"), CFMT_TEXT, 0);
	m_wndSelectList.SetCheckBox(true);
	m_wndSelectList.ModifyStyle(0, LVS_NOSORTHEADER);

	OnHMSParaclinicalDialogListLoadData();

}
void CHMSParaclinicalDialog::OnSetWindowEvents(){
	m_wndParaclinicalList.SetEvent(WE_SELCHANGE, _OnParaclinicalListSelectChangeFnc);
	m_wndParaclinicalList.SetEvent(WE_LOADDATA, _OnParaclinicalListLoadDataFnc);
	m_wndParaclinicalList.SetEvent(WE_DBLCLICK, _OnParaclinicalListDblClickFnc);
	m_wndPerformDepartment.SetEvent(WE_SELENDOK, _OnPerformDepartmentSelendokFnc);
	//m_wndPerformDepartment.SetEvent(WE_SETFOCUS, _OnPerformDepartmentSetfocusFnc);
	//m_wndPerformDepartment.SetEvent(WE_KILLFOCUS, _OnPerformDepartmentKillfocusFnc);
	m_wndPerformDepartment.SetEvent(WE_SELCHANGE, _OnPerformDepartmentSelectChangeFnc);
	m_wndPerformDepartment.SetEvent(WE_LOADDATA, _OnPerformDepartmentLoadDataFnc);
	//m_wndPerformDepartment.SetEvent(WE_ADDNEW, _OnPerformDepartmentAddNewFnc);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	//m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSelectList.SetEvent(WE_SELCHANGE, _OnSelectListSelectChangeFnc);
	m_wndSelectList.SetEvent(WE_LOADDATA, _OnSelectListLoadDataFnc);
	m_wndSelectList.SetEvent(WE_DBLCLICK, _OnSelectListDblClickFnc);
	m_wndSelectList.SetWindowText(_T("Selected Items"));
	m_wndSelectList.AddEvent(1, _T("Remove"), _OnSelectListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndRemove.SetEvent(WE_CLICK, _OnRemoveSelectFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndGroup.SetEvent(WE_CLICK, _OnGroupSelectFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szDoctorKey = pMF->m_szDoctor;
	m_szOrderDate = pMF->GetSysDate();
	UpdateData(false);
}
void CHMSParaclinicalDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndPerformDepartment.GetDlgCtrlID(), m_szPerformDepartmentKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);

}
void CHMSParaclinicalDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSParaclinicalDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSParaclinicalDialog::SetDefaultValues(){

	m_szDoctorKey.Empty();
	m_szPerformDepartmentKey.Empty();
	m_szSearch.Empty();
	m_szOrderDate.Empty();

}
int CHMSParaclinicalDialog::SetMode(int nMode){ 
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
void CHMSParaclinicalDialog::OnParaclinicalListDblClick(){
	
} 
void CHMSParaclinicalDialog::OnParaclinicalListSelectChange(int nOldItem, int nNewItem){
	int nSel = m_wndParaclinicalList.GetCurSel();
	
	if(nNewItem < 0 || nNewItem >= m_wndParaclinicalList.GetCount())
		return;
	m_szGroup = m_arGroup[nNewItem];
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOrderDate.SetCheckValue(false);
//	m_wndPerformDepartment.SetCheckValue(true);
	if(!IsValidateData())
		return;
	OnTestListLoadData();
} 
int CHMSParaclinicalDialog::OnParaclinicalListDeleteItem(){
	
	 return 0;
} 
long CHMSParaclinicalDialog::OnParaclinicalListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndParaclinicalList.BeginLoad(); 
	m_wndParaclinicalList.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParaclinicalList.AddItems(
		rs.MoveNext();
	}
	m_wndParaclinicalList.EndLoad(); 
	return nCount;
*/
	return 0;
}

void CHMSParaclinicalDialog::OnPerformDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSParaclinicalDialog::OnPerformDepartmentSelendok(){
	UpdateData(true);
	OnHMSParaclinicalDialogListLoadData();
	m_wndTestList.DeleteAllItems();
}
/*void CHMSParaclinicalDialog::OnPerformDepartmentSetfocus(){
	
}*/
/*void CHMSParaclinicalDialog::OnPerformDepartmentKillfocus(){
	
}*/
long CHMSParaclinicalDialog::OnPerformDepartmentLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPerformDepartment.IsSearchKey() && !m_szPerformDepartmentKey.IsEmpty()){
		szWhere.Format(_T("WHERE sd_id = '%s' "), m_szPerformDepartmentKey);
	};
	m_wndPerformDepartment.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM sys_dept %s ORDER BY sd_id"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPerformDepartment.AddItems(
			rs.GetValue(_T("sd_id")), 
			rs.GetValue(_T("sd_name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSParaclinicalDialog::OnPerformDepartmentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSParaclinicalDialog::OnTestListDblClick(){
	m_wndOrderDate.SetCheckValue(false);
	m_wndPerformDepartment.SetCheckValue(true);
	if(!IsValidateData())
		return;
	int nSel = m_wndTestList.GetCurSel();
	if(nSel < 0)
		return;
	CString szID, szOldID;
	bool bExisting=false;
	szID = m_wndTestList.GetItemText(nSel, 0);
	bExisting = false;
	for (int j = 0; j < m_arItems.GetCount(); j++){
		szOldID = m_arItems[j];
		if(szOldID == szID){
			bExisting = true;
			break;
		}
	}
	if(!bExisting)
	{
		m_arItems.Add(szID);
		m_wndTestList.DeleteItem(nSel);
		OnSelectListLoadData();
	}
	
} 
void CHMSParaclinicalDialog::OnTestListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalDialog::OnTestListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSParaclinicalDialog::OnTestListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	CString szExisting;
	szWhere.Empty();
	UpdateData(true);
	if(!m_szSearch.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(hfl_name) like(lower('%s%s%s')) "), _T("%"), m_szSearch, _T("%"));
	}
	if(!m_szPerformDepartmentKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND strpos(hfl_deptid, quote_literal('%s')) > 0 "), m_szPerformDepartmentKey);
	}
	szExisting=_T("'X'");
	for (int i =0; i < m_arItems.GetCount(); i++){
		szExisting.AppendFormat(_T(",'%s'"), m_arItems[i]);
	}
	szSQL.Format(_T("SELECT * FROM hms_feelist WHERE hfl_group='%s' AND hfl_itype=1 AND hfl_active='Y' AND hfl_id not in(%s) %s ORDER BY hfl_lineidx, hfl_name"), m_szGroup, szExisting, szWhere);

	int nCount = rs.ExecSQL(szSQL);
	m_wndTestList.BeginLoad();
	m_wndTestList.DeleteAllItems();
	while(!rs.IsEOF()){
		m_wndTestList.AddItems(
			rs.GetValue(_T("hfl_id")),
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_unit")),
			NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad();
	return 1;
}
void CHMSParaclinicalDialog::OnSearchChange(){
	m_wndSearch.GetWindowText(m_szSearch);
	OnTestListLoadData();
//	m_wndSearch.SetFocus();
} 
/*void CHMSParaclinicalDialog::OnSearchSetfocus(){
	
} */
/*void CHMSParaclinicalDialog::OnSearchKillfocus(){
	
} */
int CHMSParaclinicalDialog::OnSearchCheckValue(){
	return 0;
} 
void CHMSParaclinicalDialog::OnAddSelect(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szID, szOldID;
	bool bExisting=false;
	for (int i =0; i < m_wndTestList.GetItemCount(); i++){
		if(m_wndTestList.GetCheck(i)){
			szID = m_wndTestList.GetItemText(i, 0);
			bExisting = false;
			for (int j = 0; j < m_arItems.GetCount(); j++){
				szOldID = m_arItems[j];
				if(szOldID == szID){
					bExisting = true;
					break;
				}
			}
			if(!bExisting)
			{
				m_arItems.Add(szID);
			}
		}
	}

	bool bChanged = false;
	for (int i = m_wndTestList.GetItemCount()-1; i>=0 ;i--){
		if(m_wndTestList.GetCheck(i)){
			m_wndTestList.DeleteItem(i);
			bChanged = true;
		}
	}
	if(bChanged)
		OnSelectListLoadData();
} 
void CHMSParaclinicalDialog::OnSelectListDblClick(){
	
} 
void CHMSParaclinicalDialog::OnSelectListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSParaclinicalDialog::OnSelectListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szID;
	int ret = ShowMessage(10, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(ret == IDNO)
		return -1;

	for (int i = m_wndSelectList.GetItemCount()-1; i>=0 ;i--){
		if(m_wndSelectList.GetCheck(i) || m_wndSelectList.GetItemState(i, LVIS_SELECTED)){
			szID = m_wndSelectList.GetItemText(i, 0);
			for (int j = m_arItems.GetCount()-1; j >= 0; j--)
			{
				if(szID == m_arItems[j])
				{
					m_arItems.RemoveAt(j);
					break;
				}
			}
			m_wndSelectList.DeleteItem(i);

		}
	}
	

	OnSelectListLoadData();
	OnTestListLoadData();
	return 0;} 
long CHMSParaclinicalDialog::OnSelectListLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, tmpStr;
	CString szCode, szExisting, szGroup, szOldGroup=_T("XX");
	if(m_arItems.GetCount() <= 0)
		return -1;

	szExisting=_T("'X'");
	for (int i =0; i < m_arItems.GetCount(); i++){
		szExisting.AppendFormat(_T(",'%s'"), m_arItems[i]);
	}
	szSQL.Format(_T("SELECT * FROM hms_feelist WHERE hfl_itype=1 AND hfl_active='Y' AND hfl_id in(%s) ORDER BY hfl_type, hfl_group, hfl_lineidx, hfl_name"), szExisting);
	rs.ExecSQL(szSQL);
	m_wndSelectList.BeginLoad();
	while(!rs.IsEOF()){
		szGroup = rs.GetValue(_T("hfl_group"));
		if(szGroup != szOldGroup){
			szSQL.Format(_T("SELECT * FROM pcms_group WHERE pcmsg_id='%s' "), szGroup);
			rs2.ExecSQL(szSQL);
			if(!rs2.IsEOF())
				rs2.GetValue(_T("pcmsg_name"), tmpStr);
			else
				tmpStr.Empty();

			szOldGroup = szGroup;
			m_wndSelectList.AddItems(
			szGroup,
			tmpStr,
			_T(""),
			NULL);
			m_wndSelectList.SetItemBkColor(m_wndSelectList.GetItemCount()-1, RGB(240, 240, 240));
			m_wndSelectList.SetItemTextColor(m_wndSelectList.GetItemCount()-1, RGB(0, 0, 255));

		}
		m_wndSelectList.AddItems(
			rs.GetValue(_T("hfl_id")),
			rs.GetValue(_T("hfl_name")),
		//	rs.GetValue(_T("hfl_unit")),
			rs.GetValue(_T("hfl_group")),
			NULL);
		rs.MoveNext();
	}
	m_wndSelectList.EndLoad();
	return 0;
}
void CHMSParaclinicalDialog::OnRemoveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szID;
	bool bChanged = false;
	for (int i = m_wndSelectList.GetItemCount()-1; i>=0 ;i--){
		if(m_wndSelectList.GetCheck(i)){
			szID = m_wndSelectList.GetItemText(i, 0);
			for (int j = m_arItems.GetCount()-1; j >= 0; j--)
			{
				if(szID == m_arItems[j])
				{
					m_arItems.RemoveAt(j);
					break;
				}
			}
			m_wndSelectList.DeleteItem(i);
			bChanged = true;
		}
	}
	if(bChanged){
		OnSelectListLoadData();
		OnTestListLoadData();
	}
} 
void CHMSParaclinicalDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szStatus;
	bool bConfirm = true;
	m_wndPerformDepartment.SetCheckValue(false);
	m_wndOrderDate.SetCheckValue(true);
	if(!IsValidateData())
		return;

	if(bConfirm)
	{
		CHMSConfirmDialog dlg;
		dlg.m_szDoctor = m_szDoctorKey;
		if(dlg.DoModal() != IDOK)
			return;
	}
	szStatus = _T("S");

	CString szSQL, szGroup, szOldGroup=_T("XX"), szID, szOrderNo;
	CRecord rs(&pMF->m_db);
	for (int i =0; i < m_wndSelectList.GetItemCount(); i++){
		szGroup = m_wndSelectList.GetItemText(i, 2);
		if(!szGroup.IsEmpty() && szGroup != szOldGroup){
			szOldGroup = szGroup;
			//Create New test order
			/*
			CREATE OR REPLACE FUNCTION hms_addparaclinicalorder(
					patientno integer, 
					docno integer, 
					dept text, 
					roomid integer, 
					bedid integer, 
					receptidx integer, 
					groupid text, 
					orderdate text, 
					pcstatus text, 
					doctor text, 
					createdby text, 
					note text
				)
			*/
			szSQL.Format(_T("SELECT hms_addParaclinicalOrder(%ld, %ld, '%s', %d, %d, %d, '%s','%s','%s','%s','%s','%s') "),
				pMF->m_nPatientNo, pMF->m_nDocumentNo, pMF->m_nDept, pMF->m_nRoomID, 0, pMF->m_nReceptIdx, 
				szGroup, pMF->GetSysDateTime(), szStatus, _T("doctor"), pMF->GetCurrentUser(), _T(""));
			rs.ExecSQL(szSQL);
			szOrderNo = rs.GetStringValue();
			if(szOrderNo.IsEmpty())
				return;
		}
		if(!szGroup.IsEmpty())
		{
			szID = m_wndSelectList.GetItemText(i, 0);
			szSQL.Format(_T("INSERT INTO hms_pcorderln (hpol_orderno, hpol_itemid) VALUES('%s', '%s') "), szOrderNo, szID);
			pMF->ExecSQL(szSQL);

		}
	}
	m_wndSelectList.DeleteAllItems();
	m_arItems.RemoveAll();
} 
void CHMSParaclinicalDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
/*void CHMSParaclinicalDialog::OnOrderDateChange(){
	
} */
/*void CHMSParaclinicalDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSParaclinicalDialog::OnOrderDateKillfocus(){
	
} */
int CHMSParaclinicalDialog::OnOrderDateCheckValue(){
	return 0;
} 
int CHMSParaclinicalDialog::OnAddHMSParaclinicalDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Add HMSParaclinicalDialog"))) 
 		return -1; 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSParaclinicalDialog::OnEditHMSParaclinicalDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	if(!pMF->SetStartWork(this,_T("Edit HMSParaclinicalDialog"))) 
 		return -1; 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSParaclinicalDialog::OnDeleteHMSParaclinicalDialog(){
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
 		OnCancelHMSParaclinicalDialog(); 
 	}
return 0;
 } 
int CHMSParaclinicalDialog::OnSaveHMSParaclinicalDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		//7szSQL = m_tblTbl.GetInsertSQL(); 
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
 		//OnHMSParaclinicalDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		pMF->FinishWork(this); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSParaclinicalDialog::OnCancelHMSParaclinicalDialog(){
 	if(GetMode() == VM_EDIT) 
 	{ 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 		SetMode(VM_NONE); 
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	pMF->FinishWork(this); 
 	return 0;
} 
int CHMSParaclinicalDialog::OnHMSParaclinicalDialogListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(true);
	//Load danh sach cac xet nghiem 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szCode, szWhere, szDept;
	TCHAR chOld=_T(''), ch;
	//1: Nhom can lam sang
	szWhere.Empty();

	if(!m_szPerformDepartmentKey.IsEmpty()){
	}
	szSQL.Format(_T("SELECT * FROM pcms_group WHERE substr(pcmsg_id,1,1) != 'D' ORDER BY pcmsg_id "));
	m_wndParaclinicalList.ResetContent();
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("pcmsg_id"), szCode);
		rs.GetValue(_T("pcmsg_deptid"), szDept);
		ch = szCode[1];

		if(ch == _T('0'))
		{
			rs.GetValue(_T("pcmsg_name"), tmpStr);
			m_wndParaclinicalList.AddItem(tmpStr, 0, false, true);
			m_arGroup.Add(CString(_T("")));
		}
		else
		{
			m_wndParaclinicalList.AddItem(rs.GetValue(_T("pcmsg_name")), 1);
			m_arGroup.Add(rs.GetValue(_T("pcmsg_id")));
		}

		rs.MoveNext();
	};
	//m_wndParaclinicalList.ModifyStyle(0, WS_BORDER|WS_VSCROLL);
	return 0;
}
