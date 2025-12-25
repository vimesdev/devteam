#include "HMSFoodFeeSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
#include "HMSAdditionFeeSetupDialog_new.h"
static int _OnFindChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup*)pWnd)->OnFindChange();
}
static int _OnListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnListLoadData();
} 
static int _OnListDblClickFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnListDblClick();
} 
static int _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnListDeleteItem();
} 
static int _OnListShowLogItemFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnListShowLogItem();
} 

static int _OnListRefreshFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnListLoadData();
}
static int _OnListEditOldPriceFnc(CWnd *pWnd){
	((CHMSFoodFeeSetup*)pWnd)->OnListEditOldPrice();
	 return 0;
} 
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnNameCheckValue();
} 
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnIDCheckValue();
} 
/*static int _OnServicePriceChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnServicePriceChange();
} */
/*static int _OnServicePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnServicePriceKillfocus();} */ 
/*static int _OnServicePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnServicePriceCheckValue();
} 
/*static int _OnInsurancePriceChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnInsurancePriceChange();
} */
/*static int _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnInsurancePriceKillfocus();} */ 
/*static int _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static int _OnPolicyPriceChangeFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnPolicyPriceChange();
} */
/*static int _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnPolicyPriceKillfocus();} */ 
/*static int _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup *)pWnd)->OnPolicyPriceCheckValue();
}
static long _OnGroupLoadDataFnc(CWnd* pWnd){
	return ((CHMSFoodFeeSetup*)pWnd )->OnGroupLoadData();
}
static int _OnDifferencePaySelectFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnDifferencePaySelect();
}
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetup *pVw = (CHMSFoodFeeSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetup *pVw = (CHMSFoodFeeSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetup *pVw = (CHMSFoodFeeSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetup *pVw = (CHMSFoodFeeSetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSFoodFeeSetup *pVw = (CHMSFoodFeeSetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSFoodFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnAddHMSFoodFeeSetup();
} 
static int _OnEditHMSFoodFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnEditHMSFoodFeeSetup();
} 
static int _OnDeleteHMSFoodFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnDeleteHMSFoodFeeSetup();
} 
static int _OnSaveHMSFoodFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnSaveHMSFoodFeeSetup();
} 
static int _OnCancelHMSFoodFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSFoodFeeSetup*)pWnd)->OnCancelHMSFoodFeeSetup();
} 
static void _OnInactiveSelectFnc(CWnd *pWnd){
	return ((CHMSFoodFeeSetup*)pWnd)->OnInactiveSelect();
}
static int _OnUnitCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSFoodFeeSetup *)pWnd)->OnUnitCheckValue();
}
static int _OnMedicalCodeCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSFoodFeeSetup *)pWnd)->OnMedicalCodeCheckValue();
} 

CHMSFoodFeeSetup::CHMSFoodFeeSetup()
{
	m_nSelectedLine = 0;
	m_nDlgWidth = 815;
	m_nDlgHeight = 595;
	SetDefaultValues();
}
CHMSFoodFeeSetup::~CHMSFoodFeeSetup()
{
}
void CHMSFoodFeeSetup::OnCreateComponents()
{
	m_wndFindLabel.Create(this, _T("&Find"), 10, 30, 110, 55);
	m_wndFind.Create(this,115, 30, 800, 55); 
	m_wndList.Create(this,10, 60, 800, 451); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 456, 110, 481);
	m_wndFeeInformation.Create(this, _T("Other Fees"), 5, 5, 805, 544);
	m_wndName.Create(this,115, 456, 590, 481); 
	m_wndUnitLabel.Create(this, _T("Unit"), 596, 456, 681, 481);
	m_wndUnit.Create(this,686, 456, 801, 481); 
	m_wndSecondNameLabel.Create(this, _T("Second Name"), 10, 485, 110, 510);
	m_wndSecondName.Create(this,115, 485, 305, 510); 
	m_wndMedicalCodeLabel.Create(this, _T("Medical Code"), 310, 485, 395, 510);
	m_wndMedicalCode.Create(this,401, 485, 590, 510); 
	m_wndIDLabel.Create(this, _T("ID"), 596, 485, 681, 510);
	m_wndID.Create(this,686, 485, 801, 510); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 515, 110, 540);
	m_wndServicePrice.Create(this,115, 515, 200, 540); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 205, 515, 305, 540);
	m_wndInsurancePrice.Create(this,310, 515, 395, 540); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 401, 515, 501, 540);
	m_wndPolicyPrice.Create(this,505, 515, 590, 540); 
	m_wndGroupLabel.Create(this, _T("Category"), 595, 515, 680, 540);
	m_wndGroup.Create(this,685, 515, 800, 540); 
	m_wndDifferencePay.Create(this, _T("Difference Payment"), 5, 555, 165, 580);
	m_wndInactive.Create(this, _T("Inactive"), 170, 555, 330, 580);
	m_wndAdd.Create(this, _T("&Add"), 410, 555, 485, 580);
	m_wndEdit.Create(this, _T("&Edit"), 490, 555, 565, 580);
	m_wndDelete.Create(this, _T("&Delete"), 570, 555, 645, 580);
	m_wndSave.Create(this, _T("&Save"), 650, 555, 725, 580);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 555, 805, 580);
}
void CHMSFoodFeeSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndName.SetLimitText(512);
	m_wndName.SetCheckValue(true);
	m_wndUnit.SetLimitText(512);
	m_wndUnit.SetCheckValue(true);
	m_wndMedicalCode.SetLimitText(35);
	m_wndMedicalCode.SetCheckValue(true);
//	m_wndID.SetCheckValue(true);
	m_wndID.SetReadOnly(true);
	m_wndServicePrice.SetLimitText(10);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(10);
	//m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(10);
	//m_wndPolicyPrice.SetCheckValue(true);
	m_wndServicePrice.SetCurrencyFormat(true);
	m_wndInsurancePrice.SetCurrencyFormat(true);
	m_wndPolicyPrice.SetCurrencyFormat(true);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 85);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(3, _T("Service Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("Insurance Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(5, _T("Policy Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("Diff Payment"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("Khoa TH"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(8, _T("Báo ăn VIP"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Loại báo ăn"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(10, _T("Mã y tế"), CFMT_TEXT, 80);

	m_wndGroup.InsertColumn(0, _T("ID"), CFMT_TEXT, 40);
	m_wndGroup.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);
	
	m_hms_feeTbl.SetTableName(_T("hms_fee_list"));
	m_hms_feeTbl.AddField(_T("hfl_createdby"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("hfl_createddate"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("hfl_groupid"), dfText, 13); 
	m_hms_feeTbl.AddField(_T("hfl_feeid"), dfText,5); 
	m_hms_feeTbl.AddField(_T("hfl_idx"), dfInteger); 
	m_hms_feeTbl.AddField(_T("hfl_name"), dfText, 254); 
	m_hms_feeTbl.AddField(_T("hfl_name2"), dfText, 254); 
	m_hms_feeTbl.AddField(_T("hfl_servprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_insprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_polprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_inspaid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_polpaid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_diffpaid"), dfText, 1);	
	m_hms_feeTbl.AddField(_T("hfl_reqprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_typeid"), dfText, 1);
	m_hms_feeTbl.AddField(_T("hfl_index1"), dfText, 60);
	m_hms_feeTbl.AddField(_T("hfl_hostname"), dfText, 100);
	m_hms_feeTbl.AddField(_T("hfl_unit"), dfText, 60);
	m_hms_feeTbl.AddField(_T("hfl_medical_code"), dfText, 128);

}
void CHMSFoodFeeSetup::OnSetWindowEvents(){
	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Other Fee"));
	m_wndList.AddEvent(1, _T("Show table of fixed charges"), _OnListShowLogItemFnc);
	m_wndList.AddEvent(2, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Refresh"), _OnListRefreshFnc, 0, VK_F5);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(4, _T("Edit Old Price"), _OnListEditOldPriceFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
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
	m_wndGroup.SetEvent(WE_LOADDATA, _OnGroupLoadDataFnc);
	m_wndDifferencePay.SetEvent(WE_CLICK, _OnDifferencePaySelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndInactive.SetEvent(WE_CLICK, _OnInactiveSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSFoodFeeSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSFoodFeeSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSFoodFeeSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSFoodFeeSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSFoodFeeSetupFnc, 0, 'T', VK_CONTROL);
	m_wndMedicalCode.SetEvent(WE_CHECKVALUE, _OnMedicalCodeCheckValueFnc);
	
	SetMode(VM_NONE);
	OnListLoadData();

}
void CHMSFoodFeeSetup::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndFind.GetDlgCtrlID(), m_szFind);
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_Text(pDX, m_wndSecondName.GetDlgCtrlID(), m_szSecondName);
	DDX_Text(pDX, m_wndSecondName.GetDlgCtrlID(), m_szSecondName);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_szID);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_TextEx(pDX, m_wndGroup.GetDlgCtrlID(), m_szGroupKey); 
	DDX_Check(pDX, m_wndDifferencePay.GetDlgCtrlID(), m_bDifferencePay);
	DDX_Check(pDX, m_wndInactive.GetDlgCtrlID(), m_bInactive);
	DDX_Text(pDX, m_wndUnit.GetDlgCtrlID(), m_szUnit);
	DDX_Text(pDX, m_wndMedicalCode.GetDlgCtrlID(), m_szMedicalCode);
	
}
void CHMSFoodFeeSetup::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		SetMode(VM_NONE);
	else
	{
		rs.GetValue(_T("hfl_name"), m_szName);
		rs.GetValue(_T("hfl_unit"), m_szUnit);
		rs.GetValue(_T("hfl_name2"), m_szSecondName);
		rs.GetValue(_T("hfl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hfl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hfl_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hfl_index1"), m_szGroupKey);
		rs.GetValue(_T("hfl_medical_code"), m_szMedicalCode);
		CString tmpStr;

		rs.GetValue(_T("hfl_diffpaid"), tmpStr);
		if(tmpStr == _T("Y")) 
			m_bDifferencePay = true; 
		else 
			m_bDifferencePay = false;
		
		SetMode(VM_VIEW);
	}
	UpdateData(false);
}
void CHMSFoodFeeSetup::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		//szSQL.Format(_T("select coalesce(max(hfl_idx), 0)+1 FROM hms_fee_list WHERE hfl_typeid='F' "));
		szSQL.Format(_T("select coalesce(max(hfl_idx), 0)+1 FROM hms_fee_list"));
		rs.ExecSQL(szSQL);
		m_szID.Format(_T("FF000%.3d"), rs.GetIntValue());


		m_hms_feeTbl.SetValue(_T("hfl_createdby"), pMF->GetCurrentUser());
		m_hms_feeTbl.SetValue(_T("hfl_createddate"), pMF->GetSysDateTime());
		m_hms_feeTbl.SetValue(_T("hfl_idx"), rs.GetIntValue());

	}
	m_hms_feeTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser()); 
	m_hms_feeTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime()); 
	m_hms_feeTbl.SetValue(_T("hfl_groupid"), _T("FF000"));
	m_hms_feeTbl.SetValue(_T("hfl_feeid"), m_szID);
	m_hms_feeTbl.SetValue(_T("hfl_name"), m_szName);
	m_hms_feeTbl.SetValue(_T("hfl_unit"), m_szUnit);
	m_hms_feeTbl.SetValue(_T("hfl_name2"), m_szSecondName);
	m_hms_feeTbl.SetValue(_T("hfl_servprice"), m_nServicePrice);
	m_hms_feeTbl.SetValue(_T("hfl_insprice"), m_nInsurancePrice);
	m_hms_feeTbl.SetValue(_T("hfl_polprice"), m_nPolicyPrice);
	m_hms_feeTbl.SetValue(_T("hfl_reqprice"), m_nServicePrice);
	m_hms_feeTbl.SetValue(_T("hfl_inspaid"), _T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_polpaid"), _T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_diffpaid"), m_bDifferencePay?_T("Y"):_T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_hitech"), _T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_active"), _T("Y"));
	m_hms_feeTbl.SetValue(_T("hfl_typeid"), _T("F"));
	m_hms_feeTbl.SetValue(_T("hfl_index1"), m_szGroupKey);
	m_hms_feeTbl.SetValue(_T("hfl_hostname"), pMF->m_szLocalHostName);
	m_hms_feeTbl.SetValue(_T("hfl_medical_code"), m_szMedicalCode);
	

}
void CHMSFoodFeeSetup::SetDefaultValues()
{

	m_szName.Empty();
	m_szID.Empty();
	m_szUnit.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_szGroupKey.Empty();
	m_bDifferencePay=FALSE;
	m_bInactive = FALSE;
	m_szMedicalCode.Empty();

}
int CHMSFoodFeeSetup::SetMode(int nMode){ 
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
int CHMSFoodFeeSetup::OnFindChange(){

	UpdateData(true);
	OnListLoadData();
	return 0;
}

#include "HMSAdditionFeeSetupDialog.h"

int CHMSFoodFeeSetup::OnListDblClick(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;
	m_szID = m_wndList.GetItemText(nSel, 0);
	CHMSAdditionFeeSetupDialog dlg(pMF);
	dlg.m_szFeeID = m_szID;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return 0;
} 
int CHMSFoodFeeSetup::OnMedicalCodeCheckValue()
{
	return 0;
} 
int CHMSFoodFeeSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0)
		return -1;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	m_nSelectedLine = nNewItem;
	 return 0;
} 
int CHMSFoodFeeSetup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSFoodFeeSetup();
	 return 0;
} 
int CHMSFoodFeeSetup::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(!m_szFind.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szFind);
	}
	if (m_bInactive)
	{
		szWhere += _T(" AND hfl_active = 'N'");
	}
	else
	{
		szWhere += _T(" AND hfl_active = 'Y'");
	}
	szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_unit, hfl_servprice, hfl_insprice, hfl_polprice, hfl_diffpaid, HFL_DEPTID, hfl_subgroup, HFL_CATEGORYID, HFL_MEDICAL_CODE FROM hms_fee_list WHERE hfl_typeid='F' %s ORDER BY hfl_feeid"), szWhere);
	m_wndList.BeginLoad();
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hfl_feeid")), 
			rs.GetValue(_T("hfl_name")), 
			rs.GetValue(_T("hfl_unit")), 
			rs.GetValue(_T("hfl_servprice")), 
			rs.GetValue(_T("hfl_insprice")), 
			rs.GetValue(_T("hfl_polprice")), 
			rs.GetValue(_T("hfl_diffpaid")),
			rs.GetValue(_T("HFL_DEPTID")),
			rs.GetValue(_T("hfl_subgroup")),
			rs.GetValue(_T("HFL_CATEGORYID")),
			rs.GetValue(_T("HFL_MEDICAL_CODE")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
/*int CHMSFoodFeeSetup::OnNameChange(){
	return 0;
} */
/*int CHMSFoodFeeSetup::OnNameSetfocus(){
	return 0;
} */
/*int CHMSFoodFeeSetup::OnNameKillfocus(){
	return 0;
} */
int CHMSFoodFeeSetup::OnNameCheckValue(){
	return 0;
}
int CHMSFoodFeeSetup::OnUnitCheckValue()
{
	m_szUnit.Trim();
	if(m_szUnit.IsEmpty())
		return -1;	
	return 0;
} 
/*int CHMSFoodFeeSetup::OnIDChange(){
	return 0;
} */
/*int CHMSFoodFeeSetup::OnIDSetfocus(){
	return 0;
} */
/*int CHMSFoodFeeSetup::OnIDKillfocus(){
	return 0;
} */
int CHMSFoodFeeSetup::OnIDCheckValue(){
	return 0;
} 
/*int CHMSFoodFeeSetup::OnServicePriceChange(){
	return 0;
} */
/*int CHMSFoodFeeSetup::OnServicePriceSetfocus(){
	return 0;
} */
/*int CHMSFoodFeeSetup::OnServicePriceKillfocus(){
	return 0;
} */
int CHMSFoodFeeSetup::OnServicePriceCheckValue(){
	return 0;
} 
/*int CHMSFoodFeeSetup::OnInsurancePriceChange(){
	return 0;
} */
/*int CHMSFoodFeeSetup::OnInsurancePriceSetfocus(){
	return 0;
} */
/*int CHMSFoodFeeSetup::OnInsurancePriceKillfocus(){
	return 0;
} */
int CHMSFoodFeeSetup::OnInsurancePriceCheckValue(){
	return 0;
} 
/*int CHMSFoodFeeSetup::OnPolicyPriceChange(){
	return 0;
} */
/*int CHMSFoodFeeSetup::OnPolicyPriceSetfocus(){
	return 0;
} */
/*int CHMSFoodFeeSetup::OnPolicyPriceKillfocus(){
	return 0;
} */
int CHMSFoodFeeSetup::OnPolicyPriceCheckValue(){
	return 0;
} 

long CHMSFoodFeeSetup::OnGroupLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT ss_code, ss_desc FROM sys_sel WHERE ss_id = 'hms_fee_category' AND ss_vndesc = 'C11' ORDER BY ss_index, ss_code"));
	int nCount = rs.ExecSQL(szSQL);
	m_wndGroup.DeleteAllItems();
	while (!rs.IsEOF())
	{
		m_wndGroup.AddItems(
			rs.GetValue(_T("ss_code")),
			rs.GetValue(_T("ss_desc")), NULL);
		rs.MoveNext();
	}
	return nCount;
}

int CHMSFoodFeeSetup::OnDifferencePaySelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	return 0;
}
int CHMSFoodFeeSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSFoodFeeSetup();
	 return 0;
} 
int CHMSFoodFeeSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditHMSFoodFeeSetup();
	 return 0;
} 
int CHMSFoodFeeSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSFoodFeeSetup();

	 return 0;
} 
int CHMSFoodFeeSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveHMSFoodFeeSetup();
	 return 0;
} 
int CHMSFoodFeeSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelHMSFoodFeeSetup();
	 return 0;
} 
int CHMSFoodFeeSetup::OnAddHMSFoodFeeSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSFoodFeeSetup::OnEditHMSFoodFeeSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CHMSFoodFeeSetup::OnDeleteHMSFoodFeeSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;

 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL,tmpStr, szMsg; 
	CRecord rs(&pMF->m_db);
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	CString szID;
	szID = m_wndList.GetItemText(nSel, 0);
	TranslateString(_T("This is item fee active. Can not delete item fee [%s]!"), tmpStr);
	szMsg.Format(tmpStr,szID);
	szSQL.Format(_T(" select count(*) from hms_fee where hfe_itemid='%s'"), szID);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0){
		ShowMessageBox(szMsg, MB_OK|MB_ICONWARNING);
		return -1;
	}

 	szSQL.Format(_T("DELETE FROM hms_fee_list WHERE  hfl_feeid='%s' ") , szID); 
	pMF->ExecSQL(szSQL); 
	m_wndList.DeleteItem(nSel);
	
	if(!szID.IsEmpty()){ 
 		SetMode(VM_NONE); 
 		OnCancelHMSFoodFeeSetup(); 
		
 	}
	return 0;
 } 
int CHMSFoodFeeSetup::OnSaveHMSFoodFeeSetup(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_feeTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 

		szSQL.Format(_T(" INSERT INTO hms_fee_list_edit SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
		pMF->ExecSQL(szSQL);

 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hfl_feeid='%s'"), m_szID); 
 		szSQL = m_hms_feeTbl.GetUpdateSQL(_T("hfl_createdby,hfl_createddate,hfl_feeid")); 
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

		OnListLoadData();
 		SetMode(VM_VIEW); 
		if (GetMode() == VM_ADD) m_wndAdd.SetFocus();
		else m_wndList.SetFocus();
		m_wndList.SetCurSel(m_nSelectedLine);
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
#include "HMSFeeListEditDetailDialog.h"
int CHMSFoodFeeSetup::OnListShowLogItem(){
	CHMSFeeListEditDetailDialog dlg(this);
	dlg.m_szFeeID=m_szID;
	dlg.DoModal();
	return 0;
}
int CHMSFoodFeeSetup::OnCancelHMSFoodFeeSetup(){
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
int CHMSFoodFeeSetup::OnHMSFoodFeeSetupListLoadData(){
	return 0;
}

void CHMSFoodFeeSetup::OnInactiveSelect(){
	OnListLoadData();
}

void CHMSFoodFeeSetup::OnListEditOldPrice(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	m_szID = m_wndList.GetItemText(nSel, 0);
	CHMSAdditionFeeSetupDialog_new dlg(pMF);
	dlg.m_szFeeID = m_szID;
	if(dlg.DoModal() == IDOK){
		OnListLoadData();
	}
	return;
}