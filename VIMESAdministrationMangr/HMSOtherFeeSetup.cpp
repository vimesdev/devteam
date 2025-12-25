#include "HMSOtherFeeSetup.h"
//#include "stdafx.h"
#include "MainFrm.h"
static int _OnFindChangeFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup*)pWnd)->OnFindChange();
}
static int _OnListLoadDataFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnListLoadData();
} 
static int _OnListDblClickFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnListDblClick();
} 
static int _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnListDeleteItem();
} 
static int _OnListShowLogItemFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup*)pWnd)->OnListShowLogItem();
}

static int _OnListRefreshFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnListLoadData();
} 
/*static int _OnNameChangeFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnNameChange();
} */
/*static int _OnNameSetfocusFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnNameKillfocus();} */ 
/*static int _OnNameKillfocusFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnNameCheckValue();
} 
/*static int _OnIDChangeFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnIDChange();
} */
/*static int _OnIDSetfocusFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnIDKillfocus();} */ 
/*static int _OnIDKillfocusFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnIDCheckValue();
} 
/*static int _OnServicePriceChangeFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnServicePriceChange();
} */
/*static int _OnServicePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnServicePriceKillfocus();} */ 
/*static int _OnServicePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnServicePriceCheckValue();
} 
/*static int _OnInsurancePriceChangeFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnInsurancePriceChange();
} */
/*static int _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnInsurancePriceKillfocus();} */ 
/*static int _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static int _OnPolicyPriceChangeFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnPolicyPriceChange();
} */
/*static int _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnPolicyPriceKillfocus();} */ 
/*static int _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup *)pWnd)->OnPolicyPriceCheckValue();
} 
static int _OnDifferencePaySelectFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnDifferencePaySelect();
}
static int _OnAddSelectFnc(CWnd *pWnd){
	CHMSOtherFeeSetup *pVw = (CHMSOtherFeeSetup *)pWnd;
	return pVw->OnAddSelect();
} 
static int _OnEditSelectFnc(CWnd *pWnd){
	CHMSOtherFeeSetup *pVw = (CHMSOtherFeeSetup *)pWnd;
	return pVw->OnEditSelect();
} 
static int _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOtherFeeSetup *pVw = (CHMSOtherFeeSetup *)pWnd;
	return pVw->OnDeleteSelect();
} 
static int _OnSaveSelectFnc(CWnd *pWnd){
	CHMSOtherFeeSetup *pVw = (CHMSOtherFeeSetup *)pWnd;
	return pVw->OnSaveSelect();
} 
static int _OnCancelSelectFnc(CWnd *pWnd){
	CHMSOtherFeeSetup *pVw = (CHMSOtherFeeSetup *)pWnd;
	return pVw->OnCancelSelect();
} 
static int _OnAddHMSOtherFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnAddHMSOtherFeeSetup();
} 
static int _OnEditHMSOtherFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnEditHMSOtherFeeSetup();
} 
static int _OnDeleteHMSOtherFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnDeleteHMSOtherFeeSetup();
} 
static int _OnSaveHMSOtherFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnSaveHMSOtherFeeSetup();
} 
static int _OnCancelHMSOtherFeeSetupFnc(CWnd *pWnd){
	 return ((CHMSOtherFeeSetup*)pWnd)->OnCancelHMSOtherFeeSetup();
} 
static void _OnInactiveSelectFnc(CWnd *pWnd){
	return ((CHMSOtherFeeSetup*)pWnd)->OnInactiveSelect();
}
static int _OnUnitCheckValueFnc(CWnd *pWnd)
{
	return ((CHMSOtherFeeSetup *)pWnd)->OnUnitCheckValue();
}

CHMSOtherFeeSetup::CHMSOtherFeeSetup(){

	m_nDlgWidth = 815;
	m_nDlgHeight = 595;
	SetDefaultValues();
}
CHMSOtherFeeSetup::~CHMSOtherFeeSetup()
{
}
void CHMSOtherFeeSetup::OnCreateComponents()
{
	/*m_wndFeeInformation.Create(this, _T("Other Fees"), 5, 5, 805, 555);
	m_wndFindLabel.Create(this, _T("&Find"),10, 30, 110, 55);
	m_wndFind.Create(this,115, 30, 800, 55); 
	m_wndList.Create(this,10, 60, 800, 490); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 495, 110, 520);
	m_wndName.Create(this,115, 495, 590, 520); 
	m_wndIDLabel.Create(this, _T("ID"), 595, 495, 665, 520);
	m_wndID.Create(this,670, 495, 755, 520); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 525, 110, 550);
	m_wndServicePrice.Create(this,115, 525, 200, 550); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 205, 525, 305, 550);
	m_wndInsurancePrice.Create(this,310, 525, 395, 550); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 400, 525, 500, 550);
	m_wndPolicyPrice.Create(this,505, 525, 590, 550); 
	m_wndDifferencePay.Create(this, _T("Difference Payment"), 595, 525, 757, 550);
	m_wndAdd.Create(this, _T("&Add"), 410, 560, 485, 585);
	m_wndEdit.Create(this, _T("&Edit"), 490, 560, 565, 585);
	m_wndDelete.Create(this, _T("&Delete"), 570, 560, 645, 585);
	m_wndSave.Create(this, _T("&Save"), 650, 560, 725, 585);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 560, 805, 585);
	m_wndInactive.Create(this, _T("Inactive"), 5, 560, 165, 585);*/

	m_wndFindLabel.Create(this, _T("&Find"), 10, 30, 110, 55);
	m_wndFind.Create(this,115, 30, 800, 55); 
	m_wndList.Create(this,10, 60, 800, 460); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 465, 110, 490);
	m_wndName.Create(this,115, 465, 590, 490); 
	m_wndUnitLabel.Create(this, _T("Unit"), 595, 465, 675, 490);
	m_wndFeeInformation.Create(this, _T("Other Fees"), 5, 5, 805, 555);
	m_wndUnit.Create(this,680, 465, 800, 490); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 495, 110, 520);
	m_wndServicePrice.Create(this,115, 495, 200, 520); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 205, 495, 305, 520);
	m_wndInsurancePrice.Create(this,310, 495, 395, 520); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 400, 495, 500, 520);
	m_wndPolicyPrice.Create(this,505, 495, 590, 520); 
	m_wndIDLabel.Create(this, _T("ID"), 10, 525, 110, 550);
	m_wndID.Create(this,115, 525, 200, 550); 
	m_wndDifferencePay.Create(this, _T("Difference Payment"), 595, 525, 757, 550);
	m_wndInactive.Create(this, _T("Inactive"), 5, 561, 165, 586);
	m_wndAdd.Create(this, _T("&Add"), 410, 561, 485, 586);
	m_wndEdit.Create(this, _T("&Edit"), 490, 561, 565, 586);
	m_wndDelete.Create(this, _T("&Delete"), 570, 561, 645, 586);
	m_wndSave.Create(this, _T("&Save"), 650, 561, 725, 586);
	m_wndCancel.Create(this, _T("&Cancel"), 730, 561, 805, 586);

}
void CHMSOtherFeeSetup::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndName.SetLimitText(81);
	m_wndName.SetCheckValue(true);
	m_wndUnit.SetCheckValue(true);
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
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(3, _T("Service Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(4, _T("Insurance Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(5, _T("Policy Price"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("Diff Payment"), CFMT_TEXT, 80);
	
	m_hms_feeTbl.SetTableName(_T("hms_fee_list"));
	m_hms_feeTbl.AddField(_T("hfl_createdby"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("hfl_createddate"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("hfl_updatedby"), dfText, 15); 
	m_hms_feeTbl.AddField(_T("hfl_updateddate"), dfDateTime); 
	m_hms_feeTbl.AddField(_T("hfl_groupid"), dfText, 13); 
	m_hms_feeTbl.AddField(_T("hfl_feeid"), dfText,5); 
	m_hms_feeTbl.AddField(_T("hfl_idx"), dfInteger); 
	m_hms_feeTbl.AddField(_T("hfl_name"), dfText, 254); 
	m_hms_feeTbl.AddField(_T("hfl_servprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_insprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_polprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_inspaid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_polpaid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_diffpaid"), dfText, 1); 
	m_hms_feeTbl.AddField(_T("hfl_reqprice"), dfDouble); 
	m_hms_feeTbl.AddField(_T("hfl_typeid"), dfText, 1);
	m_hms_feeTbl.AddField(_T("hfl_hostname"), dfText, 100);
	m_hms_feeTbl.AddField(_T("hfl_unit"), dfText, 60);

}
void CHMSOtherFeeSetup::OnSetWindowEvents(){
	m_wndFind.SetEvent(WE_CHANGE, _OnFindChangeFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.SetWindowText(_T("Other Fee"));
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(2, _T("Refresh"), _OnListRefreshFnc, 0, VK_F5);
	m_wndList.AddEvent(3, _T("Show table of fixed charges"), _OnListShowLogItemFnc);
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
	m_wndUnit.SetEvent(WE_CHECKVALUE, _OnUnitCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndInactive.SetEvent(WE_CLICK, _OnInactiveSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOtherFeeSetupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOtherFeeSetupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOtherFeeSetupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOtherFeeSetupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOtherFeeSetupFnc, 0, 'T', VK_CONTROL);
	
	SetMode(VM_NONE);
	OnListLoadData();

}
void CHMSOtherFeeSetup::OnDoDataExchange(CDataExchange* pDX){
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
void CHMSOtherFeeSetup::GetDataToScreen(){
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
		rs.GetValue(_T("hfl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hfl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hfl_polprice"), m_nPolicyPrice);
		CString tmpStr;

		rs.GetValue(_T("hfl_diffpaid"), tmpStr);
		if(tmpStr == _T("Y")) m_bDifferencePay = true; else m_bDifferencePay = false;
		SetMode(VM_VIEW);
	}
	UpdateData(false);
}

int CHMSOtherFeeSetup::OnUnitCheckValue()
{
	m_szUnit.Trim();
	if(m_szUnit.IsEmpty())
		return -1;	
	return 0;
}


void CHMSOtherFeeSetup::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if (GetMode() == VM_ADD)
	{
		CString szSQL;
		CRecord rs(&pMF->m_db);
		CRecord rss(&pMF->m_db);

		szSQL.Format(_T("select coalesce(max(hfl_idx), 0)+1 FROM hms_fee_list WHERE hfl_groupid='F0000' "));
		rs.ExecSQL(szSQL);
		m_szID.Format(_T("F0000%.3d"), rs.GetIntValue());

		szSQL.Format(_T("SELECT Count(*) FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
		rss.ExecSQL(szSQL);

		if (rss.GetIntValue() > 0)
		{
			szSQL.Format(_T("SELECT coalesce(max(hfl_idx), 0)+1 FROM hms_fee_list WHERE hfl_feeid LIKE('%s'||chr(37))"),
				         _T("F0000"));
			rs.ExecSQL(szSQL);

			if (!rs.IsEOF())
			{
				//_msg(_T("%d"), rs.GetIntValue());
				m_szID.Format(_T("F0000%.3d"), rs.GetIntValue());
			}
		}


		m_hms_feeTbl.SetValue(_T("hfl_createdby"), pMF->GetCurrentUser());
		m_hms_feeTbl.SetValue(_T("hfl_createddate"), pMF->GetSysDateTime());
		m_hms_feeTbl.SetValue(_T("hfl_idx"), rs.GetIntValue());

	}

	m_hms_feeTbl.SetValue(_T("hfl_updatedby"), pMF->GetCurrentUser()); 
	m_hms_feeTbl.SetValue(_T("hfl_updateddate"), pMF->GetSysDateTime()); 
	m_hms_feeTbl.SetValue(_T("hfl_groupid"), _T("F0000"));
	m_hms_feeTbl.SetValue(_T("hfl_feeid"), m_szID);
	m_hms_feeTbl.SetValue(_T("hfl_name"), m_szName);
	m_hms_feeTbl.SetValue(_T("hfl_servprice"), m_nServicePrice);
	m_hms_feeTbl.SetValue(_T("hfl_insprice"), m_nInsurancePrice);
	m_hms_feeTbl.SetValue(_T("hfl_polprice"), m_nPolicyPrice);
	m_hms_feeTbl.SetValue(_T("hfl_reqprice"), m_nServicePrice);
	m_hms_feeTbl.SetValue(_T("hfl_inspaid"), _T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_polpaid"), _T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_diffpaid"), m_bDifferencePay?_T("Y"):_T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_hitech"), _T("N"));
	m_hms_feeTbl.SetValue(_T("hfl_active"), _T("Y"));
	m_hms_feeTbl.SetValue(_T("hfl_typeid"), _T("X"));
	m_hms_feeTbl.SetValue(_T("hfl_hostname"), pMF->m_szLocalHostName);
	m_hms_feeTbl.SetValue(_T("hfl_unit"), m_szUnit);
	

}
void CHMSOtherFeeSetup::SetDefaultValues(){

	m_szName.Empty();
	m_szID.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_bDifferencePay=FALSE;
	m_bInactive = FALSE;

}
int CHMSOtherFeeSetup::SetMode(int nMode){ 
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
int CHMSOtherFeeSetup::OnFindChange(){

	UpdateData(true);
	OnListLoadData();
	return 0;
}

#include "HMSAdditionFeeSetupDialog.h"

int CHMSOtherFeeSetup::OnListDblClick(){
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
int CHMSOtherFeeSetup::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0)
		return -1;
	m_szID = m_wndList.GetItemText(nNewItem, 0);
	GetDataToScreen();
	 return 0;
} 
int CHMSOtherFeeSetup::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSOtherFeeSetup();
	 return 0;
} 
int CHMSOtherFeeSetup::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(!m_szFind.IsEmpty())
	{
		szWhere.Format(_T(" AND lower(hfl_name) like(chr(37)||lower('%s')||chr(37)) "), m_szFind);
	}
	if (m_bInactive)
		szWhere.Format(_T(" AND hfl_active = 'N'"));
	szSQL.Format(_T("SELECT hfl_feeid, hfl_name, hfl_unit, hfl_servprice, hfl_insprice, hfl_polprice, hfl_diffpaid FROM hms_fee_list WHERE hfl_typeid='X' AND hfl_groupid='F0000' %s ORDER BY hfl_feeid"), szWhere);
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
			rs.GetValue(_T("hfl_diffpaid")), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
/*int CHMSOtherFeeSetup::OnNameChange(){
	return 0;
} */
/*int CHMSOtherFeeSetup::OnNameSetfocus(){
	return 0;
} */
/*int CHMSOtherFeeSetup::OnNameKillfocus(){
	return 0;
} */
int CHMSOtherFeeSetup::OnNameCheckValue(){
	return 0;
} 
/*int CHMSOtherFeeSetup::OnIDChange(){
	return 0;
} */
/*int CHMSOtherFeeSetup::OnIDSetfocus(){
	return 0;
} */
/*int CHMSOtherFeeSetup::OnIDKillfocus(){
	return 0;
} */
int CHMSOtherFeeSetup::OnIDCheckValue(){
	return 0;
} 
/*int CHMSOtherFeeSetup::OnServicePriceChange(){
	return 0;
} */
/*int CHMSOtherFeeSetup::OnServicePriceSetfocus(){
	return 0;
} */
/*int CHMSOtherFeeSetup::OnServicePriceKillfocus(){
	return 0;
} */
int CHMSOtherFeeSetup::OnServicePriceCheckValue(){
	return 0;
} 
/*int CHMSOtherFeeSetup::OnInsurancePriceChange(){
	return 0;
} */
/*int CHMSOtherFeeSetup::OnInsurancePriceSetfocus(){
	return 0;
} */
/*int CHMSOtherFeeSetup::OnInsurancePriceKillfocus(){
	return 0;
} */
int CHMSOtherFeeSetup::OnInsurancePriceCheckValue(){
	return 0;
} 
/*int CHMSOtherFeeSetup::OnPolicyPriceChange(){
	return 0;
} */
/*int CHMSOtherFeeSetup::OnPolicyPriceSetfocus(){
	return 0;
} */
/*int CHMSOtherFeeSetup::OnPolicyPriceKillfocus(){
	return 0;
} */
int CHMSOtherFeeSetup::OnPolicyPriceCheckValue(){
	return 0;
} 
	int CHMSOtherFeeSetup::OnDifferencePaySelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	return 0;
}
int CHMSOtherFeeSetup::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSOtherFeeSetup();
	 return 0;
} 
int CHMSOtherFeeSetup::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditHMSOtherFeeSetup();
	 return 0;
} 
int CHMSOtherFeeSetup::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSOtherFeeSetup();

	 return 0;
} 
int CHMSOtherFeeSetup::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveHMSOtherFeeSetup();
	 return 0;
} 
int CHMSOtherFeeSetup::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelHMSOtherFeeSetup();
	 return 0;
} 
int CHMSOtherFeeSetup::OnAddHMSOtherFeeSetup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CHMSOtherFeeSetup::OnEditHMSOtherFeeSetup(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0; 
} 
int CHMSOtherFeeSetup::OnDeleteHMSOtherFeeSetup(){
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
 		OnCancelHMSOtherFeeSetup(); 
		
 	}
	return 0;
 } 
int CHMSOtherFeeSetup::OnSaveHMSOtherFeeSetup(){
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

		szSQL.Format(_T(" INSERT INTO hms_fee_list_edit SELECT * FROM hms_fee_list WHERE hfl_feeid='%s'"), m_szID);
		pMF->ExecSQL(szSQL);

 		CString szWhere;  
 		szWhere.Format(_T(" WHERE hfl_feeid='%s'"), m_szID); 
 		szSQL = m_hms_feeTbl.GetUpdateSQL(_T("hfl_createdby,hfl_createddate,hfl_feeid")); 
 		szSQL += szWhere; 

 	} 
 //_fmsg(_T("%s"), szSQL);
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
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSOtherFeeSetup::OnCancelHMSOtherFeeSetup(){
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
int CHMSOtherFeeSetup::OnHMSOtherFeeSetupListLoadData(){
	return 0;
}
#include "HMSFeeListEditDetailDialog.h"

int CHMSOtherFeeSetup::OnListShowLogItem(){
	CHMSFeeListEditDetailDialog dlg(this);
	dlg.m_szFeeID=m_szID;
	dlg.DoModal();
	return 0;
}

void CHMSOtherFeeSetup::OnInactiveSelect(){
	OnListLoadData();
}
