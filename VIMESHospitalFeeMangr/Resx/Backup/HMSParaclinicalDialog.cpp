
#include "HMSInpatientChargeFeeDialog.h"
//#include "stdafx.h"
#include "HMSMainFrame.h"
#include "HMSConfirmDialog.h"
#include "HMSSelectionListDialog.h"

static long _OnParaclinicalListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnParaclinicalListLoadData();
} 
static void _OnParaclinicalListDblClickFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnParaclinicalListDblClick();
} 
static void _OnParaclinicalListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnParaclinicalListSelectChange(nOldItem, nNewItem);
} 
static int _OnParaclinicalListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnParaclinicalListDeleteItem();
} 

static void _OnPerformDepartmentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSInpatientChargeFeeDialog* )pWnd)->OnPerformDepartmentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPerformDepartmentSelendokFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnPerformDepartmentSelendok();
}
/*static void _OnPerformDepartmentSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnPerformDepartmentKillfocus();
}*/
/*static void _OnPerformDepartmentKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnPerformDepartmentKillfocus();
}*/
static long _OnPerformDepartmentLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnPerformDepartmentLoadData();
}
/*static void _OnPerformDepartmentAddNewFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnPerformDepartmentAddNew();
}*/
static long _OnTestListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListLoadData();
} 
static void _OnTestListDblClickFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListDblClick();
} 
static void _OnTestListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListSelectChange(nOldItem, nNewItem);
} 
static int _OnTestListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnTestListDeleteItem();
} 
static void _OnSearchChangeFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchChange();
} 
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnSearchCheckValue();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
	pVw->OnAddSelect();
} 
static long _OnSelectListLoadDataFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnSelectListLoadData();
} 
static void _OnSelectListDblClickFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnSelectListDblClick();
} 
static void _OnSelectListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSInpatientChargeFeeDialog*)pWnd)->OnSelectListSelectChange(nOldItem, nNewItem);
} 
static int _OnSelectListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnSelectListDeleteItem();
} 
static void _OnRemoveSelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
	pVw->OnRemoveSelect();
} 

static void _OnAutoPrintSelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
	pVw->OnCloseSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSInpatientChargeFeeDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSInpatientChargeFeeDialog *)pWnd)->OnOrderDateCheckValue();
} 
static void _OnGroupSelectFnc(CWnd *pWnd){
	CHMSInpatientChargeFeeDialog *pVw = (CHMSInpatientChargeFeeDialog *)pWnd;
	pVw->OnGroupSelect();
} 
static int _OnAddHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnAddHMSInpatientChargeFeeDialog();
} 
static int _OnEditHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnEditHMSInpatientChargeFeeDialog();
} 
static int _OnDeleteHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnDeleteHMSInpatientChargeFeeDialog();
} 
static int _OnSaveHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnSaveHMSInpatientChargeFeeDialog();
} 
static int _OnCancelHMSInpatientChargeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSInpatientChargeFeeDialog*)pWnd)->OnCancelHMSInpatientChargeFeeDialog();
} 
CHMSInpatientChargeFeeDialog::CHMSInpatientChargeFeeDialog(CWnd *pParent): 
	CGuiDialog(pParent)
{

	m_nDlgWidth = 1019;
	m_nDlgHeight = 755;
	SetDefaultValues();
}
CHMSInpatientChargeFeeDialog::~CHMSInpatientChargeFeeDialog(){
}
void CHMSInpatientChargeFeeDialog::OnCreateComponents(){
	
	m_wndParaclinicalList.Create(this,5, 5, 240, 540); 
//	m_wndPerformDepartmentLabel.Create(this, _T("&Department"), 5, 545, 85, 571);
//	m_wndPerformDepartment.Create(this,90, 545, 240, 570); 
	m_wndTestList.Create(this,245, 5, 595, 540); 
	m_wndSearchLabel.Create(this, _T("&Search"), 245, 545, 315, 571);
	m_wndSearch.Create(this,320, 545, 510, 570); 
	m_wndAdd.Create(this, _T("&Add >>"), 515, 575, 595, 600);
	m_wndSelectList.Create(this, 600, 5, 950, 540); 
	m_wndGroup.Create(this, _T("Group"), 515, 545, 595, 570);
	m_wndOrderDateLabel.Create(this, _T("Date"), 600, 545, 670, 570);
	m_wndOrderDate.Create(this,675, 545, 760, 570);
	m_wndAutoPrint.Create(this, _T("Auto Print"), 785, 545, 950, 570);	
	m_wndRemove.Create(this, _T("<< &Remove"), 600, 575, 680, 600);
	m_wndApply.Create(this, _T("&Apply"), 785, 575, 865, 600);
	m_wndClose.Create(this, _T("&Close"), 870, 575, 950, 600);
	
	
}
void CHMSInpatientChargeFeeDialog::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
//	m_wndPerformDepartment.SetCheckValue(true);
//	m_wndPerformDepartment.LimitText(35);
//	m_wndPerformDepartment.EnableWindow(false);
	m_wndSearch.SetLimitText(35);
	m_wndSearch.SetCheckValue(true);
	m_wndSearch.SetNotEmpty(false);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);

//	m_wndPerformDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
//	m_wndPerformDepartment.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	
	m_wndTestList.InsertColumn(0, _T("Name"), CFMT_TEXT, 240);
	m_wndTestList.InsertColumn(1, _T("Price"), CFMT_MONEY, 85);
	m_wndTestList.InsertColumn(2, _T("ID"), CFMT_TEXT, 0);
	//m_wndTestList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndTestList.SetCheckBox(true);
	m_wndTestList.SetFractionDigits(0);
	
	m_wndSelectList.InsertColumn(0, _T("Name"), CFMT_TEXT, 240);
	m_wndSelectList.InsertColumn(1, _T("Price"), CFMT_MONEY, 85);
	m_wndSelectList.InsertColumn(2, _T("ID"), CFMT_TEXT, 0);
	m_wndSelectList.InsertColumn(3, _T("Group"), CFMT_TEXT, 0);	
	m_wndSelectList.InsertColumn(4, _T("subitem"), CFMT_TEXT, 0);	
	m_wndSelectList.SetCheckBox(true);
	m_wndSelectList.ModifyStyle(0, LVS_NOSORTHEADER);
	m_wndSelectList.SetFractionDigits(0);
}
void CHMSInpatientChargeFeeDialog::OnSetWindowEvents(){
	m_wndParaclinicalList.SetEvent(WE_SELCHANGE, _OnParaclinicalListSelectChangeFnc);
	m_wndParaclinicalList.SetEvent(WE_LOADDATA, _OnParaclinicalListLoadDataFnc);
	m_wndParaclinicalList.SetEvent(WE_DBLCLICK, _OnParaclinicalListDblClickFnc);
//	m_wndPerformDepartment.SetEvent(WE_SELENDOK, _OnPerformDepartmentSelendokFnc);
	//m_wndPerformDepartment.SetEvent(WE_SETFOCUS, _OnPerformDepartmentSetfocusFnc);
	//m_wndPerformDepartment.SetEvent(WE_KILLFOCUS, _OnPerformDepartmentKillfocusFnc);
//	m_wndPerformDepartment.SetEvent(WE_SELCHANGE, _OnPerformDepartmentSelectChangeFnc);
//	m_wndPerformDepartment.SetEvent(WE_LOADDATA, _OnPerformDepartmentLoadDataFnc);
	//m_wndPerformDepartment.SetEvent(WE_ADDNEW, _OnPerformDepartmentAddNewFnc);
	m_wndTestList.SetEvent(WE_SELCHANGE, _OnTestListSelectChangeFnc);
	m_wndTestList.SetEvent(WE_LOADDATA, _OnTestListLoadDataFnc);
	m_wndTestList.SetEvent(WE_DBLCLICK, _OnTestListDblClickFnc);
	//m_wndTestList.AddEvent(1, _T("Delete"), _OnTestListDeleteItemFnc, 0, VK_DELETE, 0);
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
	
	
	m_wndAutoPrint.SetEvent(WE_CLICK, _OnAutoPrintSelectFnc);

	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);
	m_wndGroup.SetEvent(WE_CLICK, _OnGroupSelectFnc);

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_szDoctorKey = pMF->m_szDoctor;
	m_szOrderDate = pMF->GetSysDate();
	
	SetMode(VM_EDIT);
	m_wndAutoPrint.SetWindowText(_T("Auto Print"));

	OnHMSInpatientChargeFeeDialogListLoadData();
}
void CHMSInpatientChargeFeeDialog::OnDoDataExchange(CDataExchange* pDX){
	//DDX_TextEx(pDX, m_wndPerformDepartment.GetDlgCtrlID(), m_szPerformDepartmentKey);
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
	DDX_Check(pDX, m_wndAutoPrint.GetDlgCtrlID(), m_bAutoPrint);
}
void CHMSInpatientChargeFeeDialog::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSInpatientChargeFeeDialog::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSInpatientChargeFeeDialog::SetDefaultValues(){

	m_szDoctorKey.Empty();
	m_szPerformDepartmentKey.Empty();
	m_szSearch.Empty();
	m_szOrderDate.Empty();
	m_bAutoPrint = FALSE;

}
int CHMSInpatientChargeFeeDialog::SetMode(int nMode){ 
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
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, 5, -1); 
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
void CHMSInpatientChargeFeeDialog::OnParaclinicalListDblClick(){
	
} 
void CHMSInpatientChargeFeeDialog::OnParaclinicalListSelectChange(int nOldItem, int nNewItem){
	int nSel = m_wndParaclinicalList.GetCurSel();
	
	if(nNewItem < 0 || nNewItem >= m_wndParaclinicalList.GetCount())
		return;
	m_szGroup = m_arGroup[nNewItem];
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndOrderDate.SetCheckValue(false);
//	m_wndPerformDepartment.SetCheckValue(true);
//	if(!IsValidateData())
//		return;

	OnTestListLoadData();
} 
int CHMSInpatientChargeFeeDialog::OnParaclinicalListDeleteItem(){
	
	 return 0;
} 
long CHMSInpatientChargeFeeDialog::OnParaclinicalListLoadData(){
/*
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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

void CHMSInpatientChargeFeeDialog::OnPerformDepartmentSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSInpatientChargeFeeDialog::OnPerformDepartmentSelendok(){
	UpdateData(true);
	OnHMSInpatientChargeFeeDialogListLoadData();
	m_wndTestList.DeleteAllItems();
}
/*void CHMSInpatientChargeFeeDialog::OnPerformDepartmentSetfocus(){
	
}*/
/*void CHMSInpatientChargeFeeDialog::OnPerformDepartmentKillfocus(){
	
}*/
long CHMSInpatientChargeFeeDialog::OnPerformDepartmentLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
/*void CHMSInpatientChargeFeeDialog::OnPerformDepartmentAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSInpatientChargeFeeDialog::OnTestListDblClick(){
	m_wndOrderDate.SetCheckValue(false);
//	m_wndPerformDepartment.SetCheckValue(true);
	if(!IsValidateData())
		return;
	int nSel = m_wndTestList.GetCurSel();
	if(nSel < 0)
		return;
	CString szID, szOldID;
	bool bExisting=false;
	szID = m_wndTestList.GetItemText(nSel, 2);
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
void CHMSInpatientChargeFeeDialog::OnTestListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInpatientChargeFeeDialog::OnTestListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSInpatientChargeFeeDialog::OnTestListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	CString szExisting;
	szWhere.Empty();
	
	UpdateData(true);
	if(!m_szSearch.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szSearch);
	}
	if(!m_szPerformDepartmentKey.IsEmpty()){
		szWhere.AppendFormat(_T(" AND instr(hfl_deptid, quote_literal('%s')) > 0 "), m_szPerformDepartmentKey);
	}
	szExisting=_T("'X'");
	for (int i =0; i < m_arItems.GetCount(); i++){
		szExisting.AppendFormat(_T(",'%s'"), m_arItems[i]);
	}
	
	m_wndTestList.BeginLoad();
	
	szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_insprice, hfl_polprice, hfl_servprice ") \
		_T("FROM hms_fee_list ") \
		_T("WHERE hfl_groupid='%s' ") \
		_T("AND hfl_active='Y' and hfl_subgroup<>'Y' ") \
		_T("AND (length(hfl_subitem) <= 1 or hfl_subitem is null) AND hfl_feeid not in(%s) ") \
		_T("AND (hfl_servprice+hfl_insprice+hfl_polprice) > 0 %s ") \
		_T("ORDER BY hfl_line, hfl_name"), m_szGroup, szExisting, szWhere);
	rs.ExecSQL(szSQL);

	while(!rs.IsEOF()){

		if(pMF->GetObjectType() == _T("I"))
			rs.GetValue(_T("hfl_insprice"), tmpStr);
		else if(pMF->GetObjectType() == _T("D"))
			rs.GetValue(_T("hfl_disprice"), tmpStr);
		else
			rs.GetValue(_T("hfl_servprice"), tmpStr);

		m_wndTestList.AddItems(
			rs.GetValue(_T("hfl_name")),
			tmpStr,
			rs.GetValue(_T("hfl_feeid")),
			NULL);
		rs.MoveNext();
	}
	m_wndTestList.EndLoad();
	
	return 1;
}
void CHMSInpatientChargeFeeDialog::OnSearchChange(){
	m_wndSearch.GetWindowText(m_szSearch);
	OnTestListLoadData();
//	m_wndSearch.SetFocus();
} 
/*void CHMSInpatientChargeFeeDialog::OnSearchSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnSearchKillfocus(){
	
} */
int CHMSInpatientChargeFeeDialog::OnSearchCheckValue(){
	return 0;
} 
void CHMSInpatientChargeFeeDialog::OnAddSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szID, szOldID;
	bool bExisting=false;
	for (int i =0; i < m_wndTestList.GetItemCount(); i++){
		if(m_wndTestList.GetCheck(i)){
			szID = m_wndTestList.GetItemText(i, 2);
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
void CHMSInpatientChargeFeeDialog::OnSelectListDblClick(){
	
} 
void CHMSInpatientChargeFeeDialog::OnSelectListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CHMSInpatientChargeFeeDialog::OnSelectListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szID;
	int ret = ShowMessage(10, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2);
	if(ret == IDNO)
		return -1;

	for (int i = m_wndSelectList.GetItemCount()-1; i>=0 ;i--){
		if(m_wndSelectList.GetCheck(i) || m_wndSelectList.GetItemState(i, LVIS_SELECTED)){
			szID = m_wndSelectList.GetItemText(i, 2);
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
long CHMSInpatientChargeFeeDialog::OnSelectListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
	szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_groupid, hfl_subitem, hfl_servprice, hfl_insprice, hfl_polprice ") \
		_T("FROM hms_fee_list WHERE hfl_active='Y' and hfl_subgroup<>'Y' and (length(hfl_subitem) <= 1 or hfl_subitem is null)AND hfl_feeid in(%s) ORDER BY hfl_groupid, hfl_line, hfl_name"), szExisting);
	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	m_wndSelectList.BeginLoad();
	
	while(!rs.IsEOF()){
		szGroup = rs.GetValue(_T("hfl_groupid"));
		if(szGroup != szOldGroup){
			szSQL.Format(_T("SELECT * FROM hms_fee_group WHERE hfg_id='%s' "), szGroup);
			rs2.ExecSQL(szSQL);
			if(!rs2.IsEOF())
				rs2.GetValue(_T("hfg_name"), tmpStr);
			else
				tmpStr.Empty();

			szOldGroup = szGroup;
			m_wndSelectList.AddItems(
			tmpStr,
			_T(""),
			szGroup,
			szGroup,
			NULL);
			m_wndSelectList.SetItemBkColor(m_wndSelectList.GetItemCount()-1, RGB(240, 240, 240));
			m_wndSelectList.SetItemTextColor(m_wndSelectList.GetItemCount()-1, RGB(0, 0, 255));

		}
		
		if(pMF->GetObjectType() == _T("I"))
			rs.GetValue(_T("hfl_insprice"), tmpStr);
		else if(pMF->GetObjectType() == _T("D"))
			rs.GetValue(_T("hfl_polprice"), tmpStr);
		else
			rs.GetValue(_T("hfl_servprice"), tmpStr);

		m_wndSelectList.AddItems(
			rs.GetValue(_T("hfl_name")),
			tmpStr,
			rs.GetValue(_T("hfl_feeid")),
			rs.GetValue(_T("hfl_groupid")),
			rs.GetValue(_T("hfl_subitem")),
			NULL);
		rs.MoveNext();
	}
	m_wndSelectList.EndLoad();
	return 0;
}
void CHMSInpatientChargeFeeDialog::OnRemoveSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szID;
	bool bChanged = false;
	for (int i = m_wndSelectList.GetItemCount()-1; i>=0 ;i--){
		if(m_wndSelectList.GetCheck(i)){
			szID = m_wndSelectList.GetItemText(i, 2);
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
void CHMSInpatientChargeFeeDialog::OnApplySelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szStatus, szDoctor;
	long	nOrderID=0;
	bool bConfirm = true;
//	m_wndPerformDepartment.SetCheckValue(false);
	m_wndOrderDate.SetCheckValue(true);
	UpdateData(true);

	if(!IsValidateData())
		return;

	if(pMF->m_bConfirm)
	{
		CString szUser = pMF->GetCurrentUser();
		szDoctor = szUser;
		if(szUser.CompareNoCase(pMF->m_szDoctor) != 0)
		{
			CHMSConfirmDialog dlg;
			dlg.m_szDoctor = m_szDoctorKey;
			if(dlg.DoModal() != IDOK)
				return;
			szDoctor = dlg.m_szDoctor;
		}
	}
	szStatus = _T("S");

	CString szSQL, szGroup, szOldGroup=_T("XX"), szID, szOrderNo;
	CRecord rs(&pMF->m_db);

	if(CompareDate(m_szOrderDate, pMF->GetSysDate()) == 0){
		m_szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());
	}
	else
		m_szOrderDate.AppendFormat(_T(" 23:59:59"));

	CArray<int, int> orderIDs;
	int nRefIdx;
	if(pMF->GetModuleID() == _T("EM"))
		nRefIdx = 0;
	else
		nRefIdx = pMF->m_nRefIndex;
	
	/*
				createdby   VARCHAR2,
               deptid      VARCHAR2,
               refidx      INTEGER,
               roomid      INTEGER,
               bedid       INTEGER,
               patientno   INTEGER,
               docno       INTEGER,
               orderdate   VARCHAR2,
               doctor      VARCHAR2,
               groupid     VARCHAR2,
               orderstatus VARCHAR2
	*/
	CDbfMap dbf;
	dbf.AddField(_T("createdby"), dfText, 15);
	dbf.AddField(_T("deptid"), dfText, 7);
	dbf.AddField(_T("refidx"), dfInteger);
	dbf.AddField(_T("roomid"), dfInteger);
	dbf.AddField(_T("bedid"), dfInteger);
	dbf.AddField(_T("patientno"), dfLong);
	dbf.AddField(_T("docno"), dfLong);
	dbf.AddField(_T("orderdate"), dfDateTime);
	dbf.AddField(_T("doctor"), dfText, 15);
	dbf.AddField(_T("groupid"), dfText, 15);
	dbf.AddField(_T("status"), dfText, 1);
	dbf.AddField(_T("moduleid"), dfText, 3);

	dbf.SetValue(_T("createdby"), pMF->GetCurrentUser());
	dbf.SetValue(_T("deptid"), pMF->m_szDept);
	dbf.SetValue(_T("refidx"), nRefIdx);
	dbf.SetValue(_T("roomid"), pMF->m_nRoomID);
	dbf.SetValue(_T("bedid"), pMF->m_nBedID);
	dbf.SetValue(_T("patientno"), pMF->m_nPatientNo);
	dbf.SetValue(_T("docno"), pMF->m_nDocumentNo);
	dbf.SetValue(_T("orderdate"), m_szOrderDate);
	dbf.SetValue(_T("doctor"), szDoctor);
	dbf.SetValue(_T("groupid"), szGroup);
	dbf.SetValue(_T("status"), szStatus);
	dbf.SetValue(_T("moduleid"), pMF->GetModuleID());

	for (int i =0; i < m_wndSelectList.GetItemCount(); i++){
		szGroup = m_wndSelectList.GetItemText(i, 3);
		if(!szGroup.IsEmpty() && szGroup != szOldGroup){
			szOldGroup = szGroup;
			
			dbf.SetValue(_T("groupid"), szGroup);

			//Create New test order
			/*
			CREATE OR REPLACE FUNCTION pcms_order_add(
					createdby text, 
					dept text, 
					patientno integer, 
					docno integer, 
					roomid integer, 
					bedid integer, 
					receptidx integer, 
					orderdate text, 
					doctor text, 
					groupid text, 
				)
			*/
/*
			if(pMF->m_db.GetBackend() == DBTYPE_ORACLE)
			{
				szSQL.Format(_T("BEGIN :ret := pcms_order_add('%s', '%s', %ld, %ld, %d, %d, %d, '%s', '%s', '%s', '%s');  END; "),
				pMF->GetCurrentUser(), pMF->m_szDept, pMF->m_nPatientNo, pMF->m_nDocumentNo, pMF->m_nRoomID, 
				pMF->m_nBedID, pMF->m_nRefIndex, m_szOrderDate, szDoctor, szGroup, szStatus);
				pMF->ExecSQL(szSQL);
				nOrderID = 0;
			}
			else
			{

				szSQL.Format(_T("SELECT pcms_order_add('%s', '%s', %ld, %ld, %d, %d, %d, '%s', '%s', '%s', '%s') FROM DUAL "),
				pMF->GetCurrentUser(), pMF->m_szDept, pMF->m_nPatientNo, pMF->m_nDocumentNo, pMF->m_nRoomID, 
				pMF->m_nBedID, pMF->m_nRefIndex, m_szOrderDate, szDoctor, szGroup, szStatus);
				rs.ExecSQL(szSQL);
//_fmsg(_T("%s"), szSQL);
				nOrderID = rs.GetIntValue();

			}
*/
			szSQL.Format(_T("hms_paraclinic_add(%s) "), dbf.FormatSQL());
			if(!szSQL.IsEmpty())
			{
				CString szData = pMF->ExecDML(szSQL);
_fmsg(_T("%s: %s"), szSQL, szData);
				nOrderID = str2long(szData);
			}
			continue;
		}

		if(nOrderID > 0)
		{
			//Kiem tra neu khong khong ton tai orderid thi them vao lisst
			bool bAdd = true;
			for (int n =0; n < orderIDs.GetCount(); n++){
				if(nOrderID == orderIDs[n])
				{
					bAdd = false;
					break;
				}
			}
			if(bAdd) orderIDs.Add(nOrderID);			

			CRecord rss(&pMF->m_db);
			CString szSubID, szGrp;
			CString szSubItem = m_wndSelectList.GetItemText(i, 4);
			szID = m_wndSelectList.GetItemText(i, 2);
			szGrp = m_wndSelectList.GetItemText(i, 3);
			szSQL.Format(_T("hms_paraclinic_addline(%ld, %ld, '%s', '%s', '%s')"), pMF->m_nDocumentNo, nOrderID, szID, szGrp, pMF->GetModuleID());
			pMF->ExecDML(szSQL);
/*
			szSQL.Format(_T("INSERT INTO pcms_order_line(hpcl_orderid, hpcl_itemid, hpcl_hasfee,hpcl_payment) VALUES(%ld, '%s','Y','N') "), nOrderID, szID);
			pMF->ExecSQL(szSQL);

			if(szSubItem == _T("Y")){
				szSQL.Format(_T("SELECT hfl_feeid FROM hms_fee_list where hfl_groupid='%s' and hfl_subitem='%s' ORDER BY hfl_line"), szGrp, szID);
				rss.ExecSQL(szSQL);
				while(!rss.IsEOF())
				{
					rss.GetValue(_T("hfl_feeid"), szSubID);
					szSQL.Format(_T("INSERT INTO pcms_order_line(hpcl_orderid, hpcl_itemid, hpcl_hasfee,hpcl_payment) VALUES(%ld, '%s','Y','N') "), nOrderID, szSubID);
					pMF->ExecSQL(szSQL);
					rss.MoveNext();
				}
			}
*/

		}
	}
	m_wndSelectList.DeleteAllItems();
	m_arItems.RemoveAll();
	//pMF->CreateFees(_T("T"));
	CGuiDialog::OnOK();
	if(m_bAutoPrint){

		for (int i =0; i < orderIDs.GetCount(); i++){
			nOrderID = orderIDs[i];
			pMF->PrintParaclinicalOrder(nOrderID, m_szGroup,  _T(""), false, (i==0)?false:true);
		}
	}
} 
void CHMSInpatientChargeFeeDialog::OnCloseSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnCancel();	
} 
/*void CHMSInpatientChargeFeeDialog::OnOrderDateChange(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSInpatientChargeFeeDialog::OnOrderDateKillfocus(){
	
} */
int CHMSInpatientChargeFeeDialog::OnOrderDateCheckValue(){
	UpdateData(true);
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(CompareDate(m_szOrderDate, pMF->m_szEntryDate.Left(10)) < 0)
		return -1;
	if(CompareDate(m_szOrderDate, pMF->GetSysDate()) > 0)
		return -1;	
	return 0;
} 

void CHMSInpatientChargeFeeDialog::OnGroupSelect()
{	
	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CHMSSelectionListDialog dlg(this);
	dlg.m_szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_testprofile' ORDER BY cast(ss_code as integer)  "), m_szGroup);
	if(dlg.DoModal() == IDOK){
		for (int n = 0; n < dlg.m_arraySelection.GetCount(); n++)
		{
			CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[n];
			CString szID, szOldID;
			bool bExisting=false;
			szSQL.Format(_T("SELECT * FROM hms_testprofile WHERE htp_profileid='%s' "), si.szID);

			rs.ExecSQL(szSQL);
			while(!rs.IsEOF()){
				rs.GetValue(_T("htp_itemid"), szID);
				bool bExisting=false;
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
				rs.MoveNext();
			}
		}
		OnSelectListLoadData();
	}
} 


int CHMSInpatientChargeFeeDialog::OnAddHMSInpatientChargeFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
return 0; 
 
} 
int CHMSInpatientChargeFeeDialog::OnEditHMSInpatientChargeFeeDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CHMSInpatientChargeFeeDialog::OnDeleteHMSInpatientChargeFeeDialog(){
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
 		OnCancelHMSInpatientChargeFeeDialog(); 
 	}
return 0;
 } 
int CHMSInpatientChargeFeeDialog::OnSaveHMSInpatientChargeFeeDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
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
 //_fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSInpatientChargeFeeDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 		 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSInpatientChargeFeeDialog::OnCancelHMSInpatientChargeFeeDialog(){
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
int CHMSInpatientChargeFeeDialog::OnHMSInpatientChargeFeeDialogListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szCode;
	TCHAR chOld=_T(' '), ch;
	//1: Nhom can lam sang
	szSQL.Format(_T("SELECT * FROM hms_fee_group WHERE substr(hfg_id, 1, 2) IN('B1','B2','B3') AND hfg_active='Y' ORDER BY hfg_id "));
	
	rs.ExecSQL(szSQL);
	m_arGroup.RemoveAll();
	while(!rs.IsEOF()){
		rs.GetValue(_T("hfg_id"), szCode);
		ch = szCode[2];
		if(ch == _T('0'))
		{
			rs.GetValue(_T("hfg_name"), tmpStr);
			m_wndParaclinicalList.AddItem(tmpStr, 0, false, true);
			m_arGroup.Add(CString(_T("")));
		}
		else
		{
			m_wndParaclinicalList.AddItem(rs.GetValue(_T("hfg_name")), 1);
			m_arGroup.Add(szCode);
		}
		rs.MoveNext();
	};
	m_wndParaclinicalList.ModifyStyle(0, WS_BORDER|WS_VSCROLL);

	return 0;
}
