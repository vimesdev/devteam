#include "HMSExaminationTypeSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSAdditionFeeSetupDialog.h"
static int _OnFindChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup*)pWnd)->OnFindChange();
}
static int _OnExamTypeListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSExaminationTypeSetup*)pWnd)->OnExamTypeListLoadData();
} 
static int _OnExamTypeListDblClickFnc(CWnd *pWnd){
	 return ((CHMSExaminationTypeSetup*)pWnd)->OnExamTypeListDblClick();
} 
static int _OnExamTypeListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSExaminationTypeSetup*)pWnd)->OnExamTypeListSelectChange(nOldItem, nNewItem);
} 
static int _OnListShowLogItemFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup*)pWnd)->OnListShowLogItem();
}
static int _OnExamTypeListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExaminationTypeSetup*)pWnd)->OnExamTypeListDeleteItem();
} 
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnNameCheckValue();
} 
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnIDCheckValue();
} 
/*static int _OnServicePriceChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnServicePriceChange();
} */
/*static int _OnServicePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnServicePriceKillfocus();} */ 
/*static int _OnServicePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnServicePriceCheckValue();
} 
/*static int _OnInsurancePriceChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnInsurancePriceChange();
} */
/*static int _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnInsurancePriceKillfocus();} */ 
/*static int _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static int _OnPolicyPriceChangeFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnPolicyPriceChange();
} */
/*static int _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnPolicyPriceKillfocus();} */ 
/*static int _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnPolicyPriceCheckValue();
} 
static int _OnDifferencePaySelectFnc(CWnd *pWnd){
	 return ((CHMSExaminationTypeSetup*)pWnd)->OnDifferencePaySelect();
}
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSExaminationTypeSetup *pVw = (CHMSExaminationTypeSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSExaminationTypeSetup *pVw = (CHMSExaminationTypeSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSExaminationTypeSetup *pVw = (CHMSExaminationTypeSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSExaminationTypeSetup *pVw = (CHMSExaminationTypeSetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExaminationTypeSetup *pVw = (CHMSExaminationTypeSetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSExaminationTypeSetupFnc(CWnd *pWnd){
	 return ((CHMSExaminationTypeSetup*)pWnd)->OnAddHMSExaminationTypeSetup();
} 
static int _OnEditHMSExaminationTypeSetupFnc(CWnd *pWnd){
	 return ((CHMSExaminationTypeSetup*)pWnd)->OnEditHMSExaminationTypeSetup();
} 
static int _OnDeleteHMSExaminationTypeSetupFnc(CWnd *pWnd){
	 return ((CHMSExaminationTypeSetup*)pWnd)->OnDeleteHMSExaminationTypeSetup();
} 
static int _OnSaveHMSExaminationTypeSetupFnc(CWnd *pWnd){
	 return ((CHMSExaminationTypeSetup*)pWnd)->OnSaveHMSExaminationTypeSetup();
} 
static int _OnCancelHMSExaminationTypeSetupFnc(CWnd *pWnd){
	 return ((CHMSExaminationTypeSetup*)pWnd)->OnCancelHMSExaminationTypeSetup();
} 
static void _OnInactiveSelectFnc(CWnd *pWnd)
{	
	((CHMSExaminationTypeSetup*) pWnd)->OnInactiveSelect();
}

static int _OnUnitCheckValueFnc(CWnd *pWnd){
	return ((CHMSExaminationTypeSetup *)pWnd)->OnUnitCheckValue();
}

CHMSExaminationTypeSetup::CHMSExaminationTypeSetup()
{
	m_bRefActive = TRUE;
	m_nDlgWidth = 815;
	m_nDlgHeight = 595;
	SetDefaultValues();
}
CHMSExaminationTypeSetup::~CHMSExaminationTypeSetup()
{
}
void CHMSExaminationTypeSetup::OnCreateComponents()
{
	m_wndFindLabel.Create(this, _T("&Find"), 10, 30, 110, 55);
	m_wndFind.Create(this,115, 30, 800, 55); 
	m_wndExamTypeList.Create(this,9, 60, 799, 449); 
	m_wndNameLabel.Create(this, _T("Name"), 11, 453, 111, 478);
	m_wndName.Create(this,116, 453, 576, 478); 
	m_wndUnitLabel.Create(this, _T("Unit"), 580, 453, 660, 478);
	m_wndExaminationTypes.Create(this, _T("Examination Types"), 5, 5, 805, 542);
	m_wndUnit.Create(this,665, 453, 799, 478); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 11, 483, 111, 508);
	m_wndServicePrice.Create(this,116, 483, 196, 508); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 201, 483, 301, 508);
	m_wndInsurancePrice.Create(this,306, 483, 386, 508); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 391, 483, 491, 508);
	m_wndPolicyPrice.Create(this,496, 483, 576, 508); 
	m_wndIDLabel.Create(this, _T("ID"), 11, 512, 111, 537);
	m_wndID.Create(this,116, 512, 196, 537); 
	m_wndDifferencePay.Create(this, _T("Difference Payment"), 213, 512, 371, 537);
	m_wndInactive.Create(this, _T("Inactive"), 5, 548, 165, 573);
	m_wndAdd.Create(this, _T("&Add"), 410, 548, 485, 573);
	m_wndEdit.Create(this, _T("&Edit"), 490, 548, 565, 573);
	m_wndDelete.Create(this, _T("&Delete"), 570, 548, 645, 573);
	m_wndSave.Create(this, _T("&Save"), 650, 548, 725, 573);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 548, 805, 573);

}
void CHMSExaminationTypeSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
//	m_wndID.SetCheckValue(true);
	m_wndID.SetReadOnly(true);
	m_wndServicePrice.SetLimitText(16);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(16);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(16);
	m_wndPolicyPrice.SetCheckValue(true);
	m_wndServicePrice.SetCurrencyFormat(true);
	m_wndInsurancePrice.SetCurrencyFormat(true);
	m_wndPolicyPrice.SetCurrencyFormat(true);
	m_wndUnit.SetCheckValue(true);

	m_wndExamTypeList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndExamTypeList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndExamTypeList.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 80);
	m_wndExamTypeList.InsertColumn(3, _T("Service Price"), CFMT_MONEY, 100);
	m_wndExamTypeList.InsertColumn(4, _T("Insurance Price"), CFMT_MONEY, 100);
	m_wndExamTypeList.InsertColumn(5, _T("Policy Price"), CFMT_MONEY, 100);
	m_wndExamTypeList.InsertColumn(6, _T("Diff Payment"), CFMT_TEXT, 100);
	m_wndExamTypeList.InsertColumn(7, _T("Khoa"), CFMT_TEXT, 50);
	m_wndExamTypeList.InsertColumn(8, _T("Nhóm BH"), CFMT_TEXT, 250);
	
	m_hms_feeTbl.SetTableName(_T("hms_fee_list"));
	m_hms_feeTbl.AddField(_T("hfl_createdby"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("hfl_createddate"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("hfl_groupid"), dfText, 5); 
	m_hms_feeTbl.AddField(_T("hfl_feeid"), dfText, 13); 
	m_hms_feeTbl.AddField(_T("hfl_idx"), dfInteger); 
	m_hms_feeTbl.AddField(_T("hfl_name"), dfText, 254); 
	m_hms_feeTbl.AddField(_T("hfl_unit"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("hfl_servprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_reqprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_insprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_polprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_inspaid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_polpaid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_diffpaid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_hitech"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_active"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_typeid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_hostname"), dfText, 100);	

}
void CHMSExaminationTypeSetup::OnSetWindowEvents(){
	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	m_wndExamTypeList.SetEvent(WE_SELCHANGE, _OnExamTypeListSelectChangeFnc);
	m_wndExamTypeList.SetEvent(WE_LOADDATA, _OnExamTypeListLoadDataFnc);
	m_wndExamTypeList.SetEvent(WE_DBLCLICK, _OnExamTypeListDblClickFnc);
	m_wndExamTypeList.AddEvent(1, _T("Show table of fixed charges"), _OnListShowLogItemFnc);
	m_wndExamTypeList.AddEvent(0,_T("-"));
	m_wndExamTypeList.AddEvent(2, _T("Delete"), _OnExamTypeListDeleteItemFnc, 0, VK_DELETE, 0);

	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndServicePrice.SetEvent(WE_CHANGE, _OnServicePriceChangeFnc);
	//m_wndServicePrice.SetEvent(WE_SETFOCUS, _OnServicePriceSetfocusFnc);
	//m_wndServicePrice.SetEvent(WE_KILLFOCUS, _OnServicePriceKillfocusFnc);
	m_wndServicePrice.SetEvent(WE_CHECKVALUE, _OnServicePriceCheckValueFnc);
	//m_wndInsurancePrice.SetEvent(WE_CHANGE, _OnInsurancePriceChangeFnc);
	//m_wndInsurancePrice.SetEvent(WE_SETFOCUS, _OnInsurancePriceSetfocusFnc);
	//m_wndInsurancePrice.SetEvent(WE_KILLFOCUS, _OnInsurancePriceKillfocusFnc);
	m_wndInsurancePrice.SetEvent(WE_CHECKVALUE, _OnInsurancePriceCheckValueFnc);
	//m_wndPolicyPrice.SetEvent(WE_CHANGE, _OnPolicyPriceChangeFnc);
	//m_wndPolicyPrice.SetEvent(WE_SETFOCUS, _OnPolicyPriceSetfocusFnc);
	//m_wndPolicyPrice.SetEvent(WE_KILLFOCUS, _OnPolicyPriceKillfocusFnc);
	m_wndPolicyPrice.SetEvent(WE_CHECKVALUE, _OnPolicyPriceCheckValueFnc);
	m_wndDifferencePay.SetEvent(WE_CLICK, _OnDifferencePaySelectFnc);
	m_wndInactive.SetEvent(WE_CLICK, _OnInactiveSelectFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSExaminationTypeSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSExaminationTypeSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSExaminationTypeSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSExaminationTypeSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSExaminationTypeSetupFnc, 0, 'T', VK_CONTROL);
	
	SetMode(VM_NONE);
	OnExamTypeListLoadData();
}
void CHMSExaminationTypeSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Check(pDX, m_wndDifferencePay.GetDlgCtrlID(), m_bDifferencePay);
	DDX_Check(pDX, m_wndInactive.GetDlgCtrlID(), m_bInactive);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);

}
void CHMSExaminationTypeSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hfl_name, hfl_unit, hfl_servprice, hfl_insprice, hfl_polprice, hfl_diffpaid FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		SetMode(VM_NONE);
	else
	{
		rs.GetValue(_T("hfl_name"), m_szName);
		rs.GetValue(_T("hfl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hfl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hfl_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hfl_diffpaid"), m_bDifferencePay);
		rs.GetValue(_T("hfl_unit"), m_szUnit);
		SetMode(VM_VIEW);
	}
	UpdateData(false);
}
void CHMSExaminationTypeSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode () == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("select coalesce(max(hfl_idx), 0)+1 FROM hms_fee_list WHERE hfl_groupid='D0000' "));
		rs.ExecSQL(szSQL);
		m_szID.Format(_T("D0000%.3d"), rs.GetIntValue());
		m_hms_feeTbl.SetValue(_T("hfl_createdby"), pMF->GetCurrentUser()); 
		m_hms_feeTbl.SetValue(_T("hfl_createddate"), pMF->GetSysDateTime()); 
		m_hms_feeTbl.SetValue(_T("hfl_idx"), rs.GetIntValue()); 
	}
	m_hms_feeTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser()); 
	m_hms_feeTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime()); 
	m_hms_feeTbl.SetValue(_T("hfl_groupid"), _T("D0000"));
	m_hms_feeTbl.SetValue(_T("hfl_feeid"), m_szID);
	m_hms_feeTbl.SetValue(_T("hfl_name"), m_szName);
//#ifdef UNICODE
//	m_hms_feeTbl.SetValue(_T("hfl_unit"), _T("L\x1EA7n"));
//#endif
	m_hms_feeTbl.SetValue(_T("hfl_unit"), m_szUnit);
	m_hms_feeTbl.SetValue(_T("hfl_servprice"), m_nServicePrice);
	m_hms_feeTbl.SetValue(_T("hfl_insprice"), m_nInsurancePrice);
	m_hms_feeTbl.SetValue(_T("hfl_polprice"), m_nPolicyPrice);
	m_hms_feeTbl.SetValue(_T("hfl_inspaid"), _T("Y"));
	m_hms_feeTbl.SetValue(_T("hfl_polpaid"), _T("Y"));
	m_hms_feeTbl.SetValue(_T("hfl_diffpaid"), m_bDifferencePay?_T("Y"):_T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_hitech"), _T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_active"), _T("Y"));
	m_hms_feeTbl.SetValue(_T("hfl_typeid"), _T("E"));
	m_hms_feeTbl.SetValue(_T("hfl_hostname"), pMF->m_szLocalHostName);

}
void CHMSExaminationTypeSetup::SetDefaultValues(){

	m_szName.Empty();
	m_szUnit.Empty();
	m_szID.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_bDifferencePay=FALSE;
	m_bInactive = FALSE;

}
int CHMSExaminationTypeSetup::SetMode(int nMode){ 
 		int nOldMode = GetMode(); 
 		CGuiView::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
 			SetDefaultValues(); 
			m_wndName.SetFocus();
			m_wndFind.EnableWindow(FALSE);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1); 
			m_wndName.SetFocus();
			m_wndFind.EnableWindow(FALSE);
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
			//m_wndAdd.SetFocus();
			m_wndFind.EnableWindow(TRUE);
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1); 
 			SetDefaultValues(); 
			SetFocus();
			m_wndFind.EnableWindow(TRUE);
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
int CHMSExaminationTypeSetup::OnFindChange(){

	UpdateData(true);
	OnExamTypeListLoadData();
	return 0;
}
int CHMSExaminationTypeSetup::OnExamTypeListDblClick(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	int nSel = m_wndExamTypeList.GetCurSel();
	if(nSel < 0) return 0;
	m_szID = m_wndExamTypeList.GetItemText(nSel, 0);
	CHMSAdditionFeeSetupDialog dlg(pMF);
	dlg.m_szFeeID = m_szID;
	if(dlg.DoModal() == IDOK){
		OnExamTypeListLoadData();
	}
	return 0;
}

int CHMSExaminationTypeSetup::OnUnitCheckValue()
{
	m_szUnit.Trim();
	if(m_szUnit.IsEmpty())
		return -1;
	return 0;
} 

int CHMSExaminationTypeSetup::OnExamTypeListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0)
		return -1;
	m_szID = m_wndExamTypeList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	 return 0;
} 
int CHMSExaminationTypeSetup::OnExamTypeListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSExaminationTypeSetup();
	 return 0;
} 
int CHMSExaminationTypeSetup::OnExamTypeListLoadData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(!m_szFind.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szFind);
	}
	if (m_bInactive)
		szWhere.Format(_T(" AND hfl_active = 'N'"));
	//if (!m_bRefActive)
	//	szWhere.Format(_T(" AND hfl_active = 'N'"));
	szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_unit, hfl_servprice, hfl_insprice, hfl_polprice, hfl_diffpaid, HFL_DEPTID, ss_desc as hfl_manhom") \
				 _T(" FROM hms_fee_list left join sys_sel ON (hfl_manhom = ss_code and ss_id = 'hms_4210_manhom') WHERE hfl_groupid='D0000' AND hfl_typeid='E' %s ORDER BY hfl_idx "), szWhere);
	m_wndExamTypeList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExamTypeList.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			rs.GetValue(_T("hfl_name")),
			rs.GetValue(_T("hfl_unit")),
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_polprice")), 
			rs.GetValue(_T("hfl_diffpaid")),
			rs.GetValue(_T("HFL_DEPTID")), 
			rs.GetValue(_T("hfl_manhom")), 
			NULL);
		rs.MoveNext();
	}
	m_wndExamTypeList.EndLoad(); 
	return nCount;

}
/*int CHMSExaminationTypeSetup::OnNameChange(){
	return 0;
} */
/*int CHMSExaminationTypeSetup::OnNameSetfocus(){
	return 0;
} */
/*int CHMSExaminationTypeSetup::OnNameKillfocus(){
	return 0;
} */
int CHMSExaminationTypeSetup::OnNameCheckValue(){
	UpdateData(true);
	CString tmpStr;
	PreInitCap(m_szName, tmpStr);
	m_szName = tmpStr;
	UpdateData(false);
	return 0;
} 
/*int CHMSExaminationTypeSetup::OnIDChange(){
	return 0;
} */
/*int CHMSExaminationTypeSetup::OnIDSetfocus(){
	return 0;
} */
/*int CHMSExaminationTypeSetup::OnIDKillfocus(){
	return 0;
} */
int CHMSExaminationTypeSetup::OnIDCheckValue(){
	return 0;
} 
/*int CHMSExaminationTypeSetup::OnServicePriceChange(){
	return 0;
} */
/*int CHMSExaminationTypeSetup::OnServicePriceSetfocus(){
	return 0;
} */
/*int CHMSExaminationTypeSetup::OnServicePriceKillfocus(){
	return 0;
} */
int CHMSExaminationTypeSetup::OnServicePriceCheckValue(){
	return 0;
} 
/*int CHMSExaminationTypeSetup::OnInsurancePriceChange(){
	return 0;
} */
/*int CHMSExaminationTypeSetup::OnInsurancePriceSetfocus(){
	return 0;
} */
/*int CHMSExaminationTypeSetup::OnInsurancePriceKillfocus(){
	return 0;
} */
int CHMSExaminationTypeSetup::OnInsurancePriceCheckValue(){
	return 0;
} 
/*int CHMSExaminationTypeSetup::OnPolicyPriceChange(){
	return 0;
} */
/*int CHMSExaminationTypeSetup::OnPolicyPriceSetfocus(){
	return 0;
} */
/*int CHMSExaminationTypeSetup::OnPolicyPriceKillfocus(){
	return 0;
} */
int CHMSExaminationTypeSetup::OnPolicyPriceCheckValue(){
	return 0;
} 
	int CHMSExaminationTypeSetup::OnDifferencePaySelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	return 0;
}
int CHMSExaminationTypeSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSExaminationTypeSetup();
	 return 0;
} 
int CHMSExaminationTypeSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditHMSExaminationTypeSetup();
	 return 0;
} 
int CHMSExaminationTypeSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSExaminationTypeSetup();

	 return 0;
} 
int CHMSExaminationTypeSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveHMSExaminationTypeSetup();
	 return 0;
} 
int CHMSExaminationTypeSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelHMSExaminationTypeSetup();
	 return 0;
} 
int CHMSExaminationTypeSetup::OnAddHMSExaminationTypeSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSExaminationTypeSetup::OnEditHMSExaminationTypeSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CHMSExaminationTypeSetup::OnDeleteHMSExaminationTypeSetup(){
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szID, tmpStr; 
	CRecord rs(&pMF->m_db);

	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndExamTypeList.GetCurSel();
	if(nSel < 0) return 0;
	szID = m_wndExamTypeList.GetItemText(nSel, 0);

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	

	tmpStr.Format(_T("This is item fee active. Can not delete item fee [%s]!"), szID);
	szSQL.Format(_T(" select count(*) from hms_exam where he_examtype ='%s'"), szID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0){
		ShowMessageBox(tmpStr, MB_OK|MB_ICONWARNING);
		return -1;
	}
	
 	szSQL.Format(_T("DELETE FROM hms_fee_list WHERE  hfl_feeid='%s' ") , szID); 
	pMF->ExecSQL(szSQL); 
	m_wndExamTypeList.DeleteItem(nSel);
	return 0;
 } 
int CHMSExaminationTypeSetup::OnSaveHMSExaminationTypeSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_feeTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
		//szSQL.Format(_T(" INSERT INTO hms_fee_list_edit SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
		//Gọi hàm đồng bộ giữa 2 table
		int count = 10;
		int ret = 10;		
		szSQL.Format(_T("SYS_SYNC_TABLE('hms_fee_list', 'hms_fee_list_edit') "));
		count = str2long(pMF->ExecDML(szSQL));

		szSQL.Format(_T("hms_fee_list_sync_update('%s') "), m_szID);
		ret = str2long(pMF->ExecDML(szSQL));
		if (ret <0)
		{
			ShowMessageBox(_T("Có lỗi xảy ra khi lưu log mục phí, hãy thông báo cho admin!"),MB_ICONERROR);
			return -1;
		}

 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hfl_feeid='%s'"), m_szID); 
 		szSQL = m_hms_feeTbl.GetUpdateSQL(_T("hfl_createdby,hfl_createddate,hfl_idx,hfl_feeid")); 
 		szSQL += szWhere;		
 	} 
 //_msg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 

		if(GetMode() == VM_EDIT)
		{
			CString szEvent, szDesc;
			szEvent.Format(_T("Edit"));
			szDesc.Format(_T("ID:%s, Name:%s"), m_szID, m_szName);
			pMF->SystemLog(szEvent, szDesc);
		}

		OnExamTypeListLoadData();
 		SetMode(VM_VIEW); 
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSExaminationTypeSetup::OnCancelHMSExaminationTypeSetup(){
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
int CHMSExaminationTypeSetup::OnHMSExaminationTypeSetupListLoadData(){
	return 0;
}
#include "HMSFeeListEditDetailDialog.h"
int CHMSExaminationTypeSetup::OnListShowLogItem(){
	CHMSFeeListEditDetailDialog dlg(this);
	dlg.m_szFeeID=m_szID;
	dlg.DoModal();
	return 0;
}

void CHMSExaminationTypeSetup::OnInactiveSelect(){
	OnExamTypeListLoadData();
}