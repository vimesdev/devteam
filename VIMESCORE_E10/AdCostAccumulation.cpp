#include "AdCostAccumulation.h"
#include "MainFrame_E10.h"
#include "AdCostAccumulationView.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdCostAccumulation* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CAdCostAccumulation *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CAdCostAccumulation *)pWnd)->OnIDCheckValue();
} 
/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CAdCostAccumulation *)pWnd)->OnNameCheckValue();
} 
static void _OnParentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdCostAccumulation* )pWnd)->OnParentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnParentSelendokFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnParentSelendok();
}
/*static void _OnParentSetfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnParentKillfocus();
}*/
/*static void _OnParentKillfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnParentKillfocus();
}*/
static long _OnParentLoadDataFnc(CWnd *pWnd){
	return ((CAdCostAccumulation *)pWnd)->OnParentLoadData();
}
/*static void _OnParentAddNewFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnParentAddNew();
}*/
static void _OnCustomerSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CAdCostAccumulation* )pWnd)->OnCustomerSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCustomerSelendokFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnCustomerSelendok();
}
/*static void _OnCustomerSetfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnCustomerKillfocus();
}*/
/*static void _OnCustomerKillfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnCustomerKillfocus();
}*/
static long _OnCustomerLoadDataFnc(CWnd *pWnd){
	return ((CAdCostAccumulation *)pWnd)->OnCustomerLoadData();
}
/*static void _OnCustomerAddNewFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnCustomerAddNew();
}*/
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CAdCostAccumulation *)pWnd)->OnStartDateCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CAdCostAccumulation *)pWnd)->OnEndDateCheckValue();
} 
/*static void _OnContractValueChangeFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnContractValueChange();
} */
/*static void _OnContractValueSetfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnContractValueSetfocus();} */ 
/*static void _OnContractValueKillfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnContractValueKillfocus();
} */
static int _OnContractValueCheckValueFnc(CWnd *pWnd){
	return ((CAdCostAccumulation *)pWnd)->OnContractValueCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CAdCostAccumulation *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CAdCostAccumulation *)pWnd)->OnDescriptionCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CAdCostAccumulation *pVw = (CAdCostAccumulation *)pWnd;
	pVw->OnSaveSelect();
} 
static int _OnAddAdCostAccumulationFnc(CWnd *pWnd){
	 return ((CAdCostAccumulation*)pWnd)->OnAddAdCostAccumulation();
} 
static int _OnEditAdCostAccumulationFnc(CWnd *pWnd){
	 return ((CAdCostAccumulation*)pWnd)->OnEditAdCostAccumulation();
} 
static int _OnDeleteAdCostAccumulationFnc(CWnd *pWnd){
	 return ((CAdCostAccumulation*)pWnd)->OnDeleteAdCostAccumulation();
} 
static int _OnSaveAdCostAccumulationFnc(CWnd *pWnd){
	 return ((CAdCostAccumulation*)pWnd)->OnSaveAdCostAccumulation();
} 
static int _OnCancelAdCostAccumulationFnc(CWnd *pWnd){
	 return ((CAdCostAccumulation*)pWnd)->OnCancelAdCostAccumulation();
} 
CAdCostAccumulation::CAdCostAccumulation(CWnd* pParent):
	CGuiPopup(pParent){
	m_nDlgWidth = 605;
	m_nDlgHeight = 180;
	SetDefaultValues();
}
CAdCostAccumulation::~CAdCostAccumulation(){
}
void CAdCostAccumulation::OnCreateComponents(){
	m_wndTypeLabel.Create(this, _T("Type"), 5, 25, 95, 50);
	m_wndCostAccumulationObject.Create(this, _T("Cost Accumulation Object"), 0, 0, 600, 175);
	m_wndType.Create(this,100, 25, 195, 50); 
	m_wndIDLabel.Create(this, _T("ID"), 5, 55, 95, 80);
	m_wndID.Create(this,100, 55, 195, 80); 
	m_wndNameLabel.Create(this, _T("Name"), 200, 55, 290, 80);
	m_wndName.Create(this,295, 55, 595, 80); 
	m_wndParentLabel.Create(this, _T("Parent"), 5, 85, 95, 110);
	m_wndParent.Create(this,100, 85, 195, 110); 
	m_wndCustomerLabel.Create(this, _T("Customer"), 200, 85, 290, 110);
	m_wndCustomer.Create(this,295, 85, 595, 110); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 5, 115, 95, 140);
	m_wndStartDate.Create(this,100, 115, 195, 140); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 200, 115, 290, 140);
	m_wndEndDate.Create(this,295, 115, 390, 140); 
	m_wndContractValueLabel.Create(this, _T("Contract Value"), 395, 115, 485, 140);
	m_wndContractValue.Create(this,490, 115, 595, 140); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 145, 95, 170);
	m_wndDescription.Create(this,100, 145, 485, 170); 
	m_wndSave.Create(this, _T("&Save"), 490, 145, 595, 170);

}
void CAdCostAccumulation::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	EnableControls(TRUE);
	//EnableButtons(TRUE, 0, -1);
	m_wndCostAccumulationObject.ModifyStyle(WS_BORDER, 0);
	m_wndType.SetCheckValue(false);
	m_wndType.LimitText(35);
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	m_wndName.SetLimitText(35);
	m_wndName.SetCheckValue(true);
	m_wndParent.SetCheckValue(false);
	m_wndParent.LimitText(35);
	m_wndCustomer.SetCheckValue(false);
	m_wndCustomer.LimitText(35);
	m_wndStartDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndStartDate.SetCheckValue(false);
	m_wndEndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndEndDate.SetCheckValue(false);
	m_wndContractValue.SetLimitText(16);
	m_wndContractValue.SetCheckValue(false);
	m_wndContractValue.SetCurrencyFormat(TRUE);
	m_wndDescription.SetLimitText(128);
	m_wndDescription.SetCheckValue(false);


	m_wndType.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndType.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndParent.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndParent.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndCustomer.InsertColumn(0, _T("ID"), CFMT_NUMBER, 85);
	m_wndCustomer.InsertColumn(1, _T("Description"), CFMT_TEXT, 245);
	m_acc_cost_accumulationTbl.SetTableName(_T("acc_cost_accumulation"));
	m_acc_cost_accumulationTbl.AddField(_T("aca_createddate"), dfDateTime);
	m_acc_cost_accumulationTbl.AddField(_T("aca_createdby"), dfText, 15);
	m_acc_cost_accumulationTbl.AddField(_T("aca_updateddate"), dfDateTime);
	m_acc_cost_accumulationTbl.AddField(_T("aca_updatedby"), dfText, 15);
	m_acc_cost_accumulationTbl.AddField(_T("aca_id"), dfText, 15);
	m_acc_cost_accumulationTbl.AddField(_T("aca_name"), dfText, 81);
	m_acc_cost_accumulationTbl.AddField(_T("aca_parentid"), dfText, 15);
	m_acc_cost_accumulationTbl.AddField(_T("aca_customer"), dfText, 15);
	m_acc_cost_accumulationTbl.AddField(_T("aca_startdate"), dfDate);
	m_acc_cost_accumulationTbl.AddField(_T("aca_enddate"), dfDate);
	m_acc_cost_accumulationTbl.AddField(_T("aca_contractvalue"), dfFloat);
	m_acc_cost_accumulationTbl.AddField(_T("aca_desc"), dfText, 254);
	m_acc_cost_accumulationTbl.AddField(_T("aca_type"), dfInteger);
}

void CAdCostAccumulation::OnSetWindowEvents(){
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndParent.SetEvent(WE_SELENDOK, _OnParentSelendokFnc);
	//m_wndParent.SetEvent(WE_SETFOCUS, _OnParentSetfocusFnc);
	//m_wndParent.SetEvent(WE_KILLFOCUS, _OnParentKillfocusFnc);
	m_wndParent.SetEvent(WE_SELCHANGE, _OnParentSelectChangeFnc);
	m_wndParent.SetEvent(WE_LOADDATA, _OnParentLoadDataFnc);
	//m_wndParent.SetEvent(WE_ADDNEW, _OnParentAddNewFnc);
	m_wndCustomer.SetEvent(WE_SELENDOK, _OnCustomerSelendokFnc);
	//m_wndCustomer.SetEvent(WE_SETFOCUS, _OnCustomerSetfocusFnc);
	//m_wndCustomer.SetEvent(WE_KILLFOCUS, _OnCustomerKillfocusFnc);
	m_wndCustomer.SetEvent(WE_SELCHANGE, _OnCustomerSelectChangeFnc);
	m_wndCustomer.SetEvent(WE_LOADDATA, _OnCustomerLoadDataFnc);
	//m_wndCustomer.SetEvent(WE_ADDNEW, _OnCustomerAddNewFnc);
	//m_wndStartDate.SetEvent(WE_CHANGE, _OnStartDateChangeFnc);
	//m_wndStartDate.SetEvent(WE_SETFOCUS, _OnStartDateSetfocusFnc);
	//m_wndStartDate.SetEvent(WE_KILLFOCUS, _OnStartDateKillfocusFnc);
	m_wndStartDate.SetEvent(WE_CHECKVALUE, _OnStartDateCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	//m_wndContractValue.SetEvent(WE_CHANGE, _OnContractValueChangeFnc);
	//m_wndContractValue.SetEvent(WE_SETFOCUS, _OnContractValueSetfocusFnc);
	//m_wndContractValue.SetEvent(WE_KILLFOCUS, _OnContractValueKillfocusFnc);
	m_wndContractValue.SetEvent(WE_CHECKVALUE, _OnContractValueCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	CMainFrame_E10* pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szDate = pMF->GetSysDate();
	m_szStartDate = m_szEndDate = pMF->GetSysDate();
	int nMode = GetMode();
	SetMode(nMode);
	if (GetMode() == VM_EDIT)
		GetDataToScreen();
}
void CAdCostAccumulation::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndParent.GetDlgCtrlID(), m_szParentKey);
	DDX_TextEx(pDX, m_wndCustomer.GetDlgCtrlID(), m_szCustomerKey);
	DDX_TextEx(pDX, m_wndStartDate.GetDlgCtrlID(), m_szStartDate);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_Text(pDX, m_wndContractValue.GetDlgCtrlID(), m_nContractValue);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);

}
void CAdCostAccumulation::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM acc_cost_accumulation WHERE aca_id = '%s'"), m_szID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("aca_type"), m_szTypeKey);
		rs.GetValue(_T("aca_name"), m_szName);
		rs.GetValue(_T("aca_parentid"), m_szParentKey);
		rs.GetValue(_T("aca_customer"), m_szCustomerKey);
		rs.GetValue(_T("aca_startdate"), m_szStartDate);
		rs.GetValue(_T("aca_enddate"), m_szEndDate);
		rs.GetValue(_T("aca_contractvalue"), m_nContractValue);
		rs.GetValue(_T("aca_desc"), m_szDescription);
		UpdateData(false);
	}
}
void CAdCostAccumulation::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_acc_cost_accumulationTbl.SetValue(_T("aca_updateddate"), pMF->GetSysDateTime());
	m_acc_cost_accumulationTbl.SetValue(_T("aca_updatedby"), pMF->GetCurrentUser());
	if (GetMode() == VM_EDIT)
	{
		CString szWhere;
		szWhere.Format(_T(" Where aca_id = '%s'"), m_szID);
		m_acc_cost_accumulationTbl.Open(&pMF->m_db, szWhere);
	}
	m_acc_cost_accumulationTbl.SetValue(_T("aca_createddate"), pMF->GetSysDateTime());
	m_acc_cost_accumulationTbl.SetValue(_T("aca_createdby"), pMF->GetCurrentUser());
	m_acc_cost_accumulationTbl.SetValue(_T("aca_updateddate"), pMF->GetSysDateTime());
	m_acc_cost_accumulationTbl.SetValue(_T("aca_updatedby"), pMF->GetCurrentUser());
	m_acc_cost_accumulationTbl.SetValue(_T("aca_id"), m_szID);
	m_acc_cost_accumulationTbl.SetValue(_T("aca_name"), m_szName);
	m_acc_cost_accumulationTbl.SetValue(_T("aca_parentid"), m_szParentKey);
	m_acc_cost_accumulationTbl.SetValue(_T("aca_typeid"), m_szTypeKey);
	m_acc_cost_accumulationTbl.SetValue(_T("aca_desc"), m_szDescription);
	m_acc_cost_accumulationTbl.SetValue(_T("aca_contractvalue"), m_nContractValue);
	m_acc_cost_accumulationTbl.SetValue(_T("aca_startdate"), m_szStartDate);
	m_acc_cost_accumulationTbl.SetValue(_T("aca_enddate"), m_szEndDate);
	m_acc_cost_accumulationTbl.SetValue(_T("aca_customer"), m_szCustomerKey);
}
void CAdCostAccumulation::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szID.Empty();
	m_szName.Empty();
	m_szParentKey.Empty();
	m_szCustomerKey.Empty();
	m_nContractValue=0;
	m_szDescription.Empty();

}
int CAdCostAccumulation::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiPopup::SetMode(nMode); 
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
 			SetDefaultValues(); 
			m_wndID.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, -1); 
			m_wndID.EnableWindow(FALSE);
			m_wndName.SetFocus();
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
void CAdCostAccumulation::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdCostAccumulation::OnTypeSelendok(){
	 
}
/*void CAdCostAccumulation::OnTypeSetfocus(){
	
}*/
/*void CAdCostAccumulation::OnTypeKillfocus(){
	
}*/
long CAdCostAccumulation::OnTypeLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
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
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdCostAccumulation::OnTypeAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdCostAccumulation::OnIDChange(){
	
} */
/*void CAdCostAccumulation::OnIDSetfocus(){
	
} */
/*void CAdCostAccumulation::OnIDKillfocus(){
	
} */
int CAdCostAccumulation::OnIDCheckValue(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT count(*) FROM acc_cost_accumulation"));
	rs.ExecSQL(szSQL);
	int nRet = rs.GetIntValue();
	if (nRet > 0)
	{
		m_wndID.SetToolTipMessage(_T("This ID has existed"));
		return -1;
	}
	return 0;
} 
/*void CAdCostAccumulation::OnNameChange(){
	
} */
/*void CAdCostAccumulation::OnNameSetfocus(){
	
} */
/*void CAdCostAccumulation::OnNameKillfocus(){
	
} */
int CAdCostAccumulation::OnNameCheckValue(){
	return 0;
} 
void CAdCostAccumulation::OnParentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdCostAccumulation::OnParentSelendok(){
	 
}
/*void CAdCostAccumulation::OnParentSetfocus(){
	
}*/
/*void CAdCostAccumulation::OnParentKillfocus(){
	
}*/
long CAdCostAccumulation::OnParentLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndParent.IsSearchKey() && !m_szParentKey.IsEmpty()){
	};
	m_wndParent.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndParent.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CAdCostAccumulation::OnParentAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CAdCostAccumulation::OnCustomerSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CAdCostAccumulation::OnCustomerSelendok(){
	 
}
/*void CAdCostAccumulation::OnCustomerSetfocus(){
	
}*/
/*void CAdCostAccumulation::OnCustomerKillfocus(){
	
}*/
long CAdCostAccumulation::OnCustomerLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadPartnerList(&m_wndCustomer, m_szCustomerKey);
}
/*void CAdCostAccumulation::OnCustomerAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
/*void CAdCostAccumulation::OnStartDateChange(){
	
} */
/*void CAdCostAccumulation::OnStartDateSetfocus(){
	
} */
/*void CAdCostAccumulation::OnStartDateKillfocus(){
	
} */
int CAdCostAccumulation::OnStartDateCheckValue(){
	return 0;
} 
/*void CAdCostAccumulation::OnEndDateChange(){
	
} */
/*void CAdCostAccumulation::OnEndDateSetfocus(){
	
} */
/*void CAdCostAccumulation::OnEndDateKillfocus(){
	
} */
int CAdCostAccumulation::OnEndDateCheckValue(){
	return 0;
} 
/*void CAdCostAccumulation::OnContractValueChange(){
	
} */
/*void CAdCostAccumulation::OnContractValueSetfocus(){
	
} */
/*void CAdCostAccumulation::OnContractValueKillfocus(){
	
} */
int CAdCostAccumulation::OnContractValueCheckValue(){
	return 0;
} 
/*void CAdCostAccumulation::OnDescriptionChange(){
	
} */
/*void CAdCostAccumulation::OnDescriptionSetfocus(){
	
} */
/*void CAdCostAccumulation::OnDescriptionKillfocus(){
	
} */
int CAdCostAccumulation::OnDescriptionCheckValue(){
	return 0;
} 
void CAdCostAccumulation::OnSaveSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnSaveAdCostAccumulation();
} 
int CAdCostAccumulation::OnAddAdCostAccumulation(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CAdCostAccumulation::OnEditAdCostAccumulation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CAdCostAccumulation::OnDeleteAdCostAccumulation(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") ); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
 		SetMode(VM_NONE); 
 		OnCancelAdCostAccumulation(); 
 	}
	return 0;
}
int CAdCostAccumulation::OnSaveAdCostAccumulation(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_acc_cost_accumulationTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE aca_id = '%s'"), m_szID); 
 		szSQL = m_acc_cost_accumulationTbl.GetUpdateSQL(_T("aca_createdby,aca_createddate, aca_id")); 
 		szSQL += szWhere; 
 	} 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		if (GetMode() == VM_EDIT)
			ClosePopup();
		((CAdCostAccumulationView*)GetParentWnd())->OnListLoadData();	
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CAdCostAccumulation::OnCancelAdCostAccumulation(){
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
int CAdCostAccumulation::OnAdCostAccumulationListLoadData(){
	return 0;
}
void CAdCostAccumulation::ClosePopup(){
	if (IsWindowVisible())
	{
		CGuiPopup::ClosePopup();
		((CAdCostAccumulationView*)GetParentWnd())->SetMode(m_nMode);
	}
}
