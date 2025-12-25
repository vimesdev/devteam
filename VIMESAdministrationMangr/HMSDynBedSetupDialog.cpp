#include "HMSDynBedSetupDialog.h"
#include "SearchPopup.h"
#include "MainFrm.h"
static long _OnPriceListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog*)pWnd)->OnPriceListLoadData();
} 
static void _OnPriceListDblClickFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog*)pWnd)->OnPriceListDblClick();
} 
static void _OnPriceListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDynBedSetupDialog*)pWnd)->OnPriceListSelectChange(nOldItem, nNewItem);
} 
static int _OnPriceListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnPriceListDeleteItem();
}
static int _OnSalaryCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnSalaryCheckValue();
}
static void _OnActiveSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedSetupDialog*)pWnd)->OnActiveSelect();
}

/*static void _OnNameChangeFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnNameChange();
} */
/*static void _OnNameSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnNameSetfocus();} */ 
/*static void _OnNameKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnNameKillfocus();
} */
static int _OnNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnNameCheckValue();
} 
/*static void _OnServicePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnServicePriceChange();
} */
/*static void _OnServicePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnServicePriceSetfocus();} */ 
/*static void _OnServicePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnServicePriceKillfocus();
} */
static int _OnServicePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnServicePriceCheckValue();
} 
/*static void _OnInsurancePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnInsurancePriceChange();
} */
/*static void _OnInsurancePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnInsurancePriceSetfocus();} */ 
/*static void _OnInsurancePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnInsurancePriceKillfocus();
} */
static int _OnInsurancePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnInsurancePriceCheckValue();
} 
/*static void _OnPolicyPriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnPolicyPriceChange();
} */
/*static void _OnPolicyPriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnPolicyPriceSetfocus();} */ 
/*static void _OnPolicyPriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnPolicyPriceKillfocus();
} */
static int _OnPolicyPriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnPolicyPriceCheckValue();
} 
/*static void _OnRequirePriceChangeFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnRequirePriceChange();
} */
/*static void _OnRequirePriceSetfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnRequirePriceSetfocus();} */ 
/*static void _OnRequirePriceKillfocusFnc(CWnd *pWnd){
	((CHMSDynBedSetupDialog *)pWnd)->OnRequirePriceKillfocus();
} */
static int _OnRequirePriceCheckValueFnc(CWnd *pWnd){
	return ((CHMSDynBedSetupDialog *)pWnd)->OnRequirePriceCheckValue();
} 
static void _OnInsurancePaidSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedSetupDialog*)pWnd)->OnInsurancePaidSelect();
}
static void _OnPolicyPaidSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedSetupDialog*)pWnd)->OnPolicyPaidSelect();
}
static void _OnDifferencePaidSelectFnc(CWnd *pWnd){
	 ((CHMSDynBedSetupDialog*)pWnd)->OnDifferencePaidSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDynBedSetupDialog *pVw = (CHMSDynBedSetupDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDynBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnAddHMSDynBedSetupDialog();
} 
static int _OnEditHMSDynBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnEditHMSDynBedSetupDialog();
} 
static int _OnDeleteHMSDynBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnDeleteHMSDynBedSetupDialog();
} 
static int _OnSaveHMSDynBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnSaveHMSDynBedSetupDialog();
} 
static int _OnCancelHMSDynBedSetupDialogFnc(CWnd *pWnd){
	 return ((CHMSDynBedSetupDialog*)pWnd)->OnCancelHMSDynBedSetupDialog();
}
static long _OnPdeptLoadDataFnc(CWnd *pWnd)
{
	return ((CHMSDynBedSetupDialog *)pWnd)->OnPdeptLoadData();
}
static int _OnListSearchItemFnc(CWnd *pWnd)
{
	 ((CHMSDynBedSetupDialog*)pWnd)->OnListSearchItem();
	 return 0;
} 

CHMSDynBedSetupDialog::CHMSDynBedSetupDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 645;
	m_nDlgHeight = 485;
	SetDefaultValues();
}
CHMSDynBedSetupDialog::~CHMSDynBedSetupDialog(){
}
void CHMSDynBedSetupDialog::OnCreateComponents()
{
	/*m_wndDynamicBedInformation.Create(this, _T("Dynamic Bed Information"), 5, 5, 800, 445);
	m_wndPriceList.Create(this,10, 29, 795, 349); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 355, 120, 380);
	m_wndName.Create(this,125, 355, 685, 380);

	m_wndInsMapLabel.Create(this, _T("InsMap"), 690, 355, 710, 380);
	m_wndInsMap.Create(this,715, 355, 795, 380);

	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 385, 120, 410);
	m_wndServicePrice.Create(this,126, 385, 216, 410); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 221, 385, 327, 410);
	m_wndInsurancePrice.Create(this,333, 385, 423, 410); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 10, 415, 120, 440);
	m_wndPolicyPrice.Create(this,126, 415, 216, 440); 
	m_wndRequirePriceLabel.Create(this, _T("Require Price"), 221, 415, 327, 440);
	m_wndRequirePrice.Create(this,333, 415, 423, 440); 
	m_wndInsurancePaid.Create(this, _T("Insurance Paid"), 551, 415, 669, 440);
	m_wndPolicyPaid.Create(this, _T("Policy Paid"), 675, 415, 795, 440);
	m_wndDifferencePaid.Create(this, _T("Difference Paid"), 428, 414, 546, 439);
	m_wndAdd.Create(this, _T("&Add"), 290, 450, 370, 475);
	m_wndEdit.Create(this, _T("&Edit"), 375, 450, 455, 475);
	m_wndDelete.Create(this, _T("&Delete"), 460, 450, 540, 475);
	m_wndSave.Create(this, _T("&Save"), 545, 450, 625, 475);
	m_wndCancel.Create(this, _T("&Cancel"), 630, 450, 710, 475);
	m_wndClose.Create(this, _T("&Close"), 715, 450, 795, 475);
	m_wndActive.Create(this, _T("Active"), 598, 385, 795, 410);
	m_wndSalaryLabel.Create(this, _T("Salary Label"), 428, 384, 508, 409);
	m_wndSalary.Create(this,513, 384, 593, 409);*/
	m_wndDynamicBedInformation.Create(this, _T("Dynamic Bed Information"), 5, 5, 800, 475);
	m_wndPriceList.Create(this,10, 29, 795, 349); 
	m_wndNameLabel.Create(this, _T("Name"), 10, 355, 120, 380);
	m_wndName.Create(this,125, 355, 685, 380); 
	m_wndPdeptLabel.Create(this, _T("Pdept Label"), 10, 385, 120, 410);
	m_wndPdept.Create(this,125, 385, 795, 410); 
	m_wndServicePriceLabel.Create(this, _T("Service Price"), 10, 415, 120, 440);
	m_wndServicePrice.Create(this,126, 415, 216, 440); 
	m_wndInsurancePriceLabel.Create(this, _T("Insurance Price"), 221, 415, 327, 440);
	m_wndInsurancePrice.Create(this,333, 415, 423, 440); 
	m_wndPolicyPriceLabel.Create(this, _T("Policy Price"), 10, 445, 120, 470);
	m_wndPolicyPrice.Create(this,126, 445, 216, 470); 
	m_wndRequirePriceLabel.Create(this, _T("Require Price"), 221, 445, 327, 470);
	m_wndRequirePrice.Create(this,333, 445, 423, 470); 
	m_wndInsurancePaid.Create(this, _T("Insurance Paid"), 551, 445, 669, 470);
	m_wndPolicyPaid.Create(this, _T("Policy Paid"), 675, 445, 795, 470);
	m_wndDifferencePaid.Create(this, _T("Difference Paid"), 428, 444, 546, 469);
	m_wndAdd.Create(this, _T("&Add"), 290, 481, 370, 506);
	m_wndEdit.Create(this, _T("&Edit"), 375, 481, 455, 506);
	m_wndDelete.Create(this, _T("&Delete"), 460, 481, 540, 506);
	m_wndSave.Create(this, _T("&Save"), 545, 481, 625, 506);
	m_wndCancel.Create(this, _T("&Cancel"), 630, 481, 710, 506);
	m_wndClose.Create(this, _T("&Close"), 715, 481, 795, 506);
	m_wndActive.Create(this, _T("Active"), 598, 415, 795, 440);
	m_wndSalaryLabel.Create(this, _T("Salary Label"), 428, 414, 508, 439);
	m_wndSalary.Create(this,513, 414, 593, 439); 
	m_wndInsMapLabel.Create(this, _T("InsMap"), 690, 355, 710, 380);
	m_wndInsMap.Create(this,715, 355, 795, 380); 


}
void CHMSDynBedSetupDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	m_wndName.SetLimitText(254);
	m_wndName.SetCheckValue(true);
	m_wndServicePrice.SetLimitText(16);
	m_wndServicePrice.SetCheckValue(true);
	m_wndInsurancePrice.SetLimitText(16);
	m_wndInsurancePrice.SetCheckValue(true);
	m_wndPolicyPrice.SetLimitText(16);
	m_wndPolicyPrice.SetCheckValue(true);
	m_wndRequirePrice.SetLimitText(16);
	m_wndRequirePrice.SetCheckValue(true);
	m_wndSalary.SetLimitText(16);
	m_wndSalary.SetCheckValue(true);
	m_wndPdept.SetCheckValue(true);
	m_wndPdept.LimitText(35);


	m_wndPriceList.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndPriceList.InsertColumn(1, _T("Description"), CFMT_TEXT, 350);
	m_wndPriceList.InsertColumn(2, _T("Service Price"), CFMT_NUMBER, 90);
	m_wndPriceList.InsertColumn(3, _T("Insurance Price"), CFMT_NUMBER, 90);
	m_wndPriceList.InsertColumn(4, _T("Policy Price"), CFMT_NUMBER, 90);
	m_wndPriceList.InsertColumn(5, _T("Require Price"), CFMT_NUMBER, 90);
	m_wndPriceList.InsertColumn(6, _T("Salary"), CFMT_NUMBER, 90);
	m_wndPriceList.InsertColumn(7, _T("Active"), CFMT_TEXT, 50);
	m_wndPriceList.InsertColumn(8, _T("InsMap"), CFMT_TEXT, 100);
	m_wndPriceList.InsertColumn(9, _T("pdept"), CFMT_TEXT, 100);

	m_wndPdept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPdept.InsertColumn(1, _T("Name"), CFMT_TEXT, 450);

	m_hms_dynbedlistTbl.SetTableName(_T("hms_dynbedlist"));
	m_hms_dynbedlistTbl.AddField(_T("hdbl_deptid"), dfText, 7); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_idx"), dfLong); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_name"), dfText, 254); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_inspaid"), dfText, 1); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_polpaid"), dfText, 1); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_difpaid"), dfText, 1); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_active"), dfText, 1); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_servprice"), dfDouble); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_insprice"), dfDouble); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_polprice"), dfDouble); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_reqprice"), dfDouble); 
	m_hms_dynbedlistTbl.AddField(_T("hdbl_salary"), dfDouble);
	m_hms_dynbedlistTbl.AddField(_T("hdbl_difpaid"), dfText, 1);
	m_hms_dynbedlistTbl.AddField(_T("hdbl_insmap"), dfText, 8);
	m_hms_dynbedlistTbl.AddField(_T("hdbl_pdeptid"), dfText, 7);
	m_hms_dynbedlistTbl.AddField(_T("hdbl_createdby"), dfText,15);
	m_hms_dynbedlistTbl.AddField(_T("hdbl_createddate"), dfDateTime);
	m_hms_dynbedlistTbl.AddField(_T("hdbl_updatedby"), dfText,15);
	m_hms_dynbedlistTbl.AddField(_T("hdbl_updateddate"), dfDateTime);

}
void CHMSDynBedSetupDialog::OnSetWindowEvents(){
	m_wndPriceList.SetEvent(WE_SELCHANGE, _OnPriceListSelectChangeFnc);
	m_wndPriceList.SetEvent(WE_LOADDATA, _OnPriceListLoadDataFnc);
	m_wndPriceList.SetEvent(WE_DBLCLICK, _OnPriceListDblClickFnc);
	//m_wndPriceList.AddEvent(1, _T("Delete"), _OnPriceListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPriceList.AddEvent(2, _T("Search"), _OnListSearchItemFnc);
	//m_wndName.SetEvent(WE_CHANGE, _OnNameChangeFnc);
	//m_wndName.SetEvent(WE_SETFOCUS, _OnNameSetfocusFnc);
	//m_wndName.SetEvent(WE_KILLFOCUS, _OnNameKillfocusFnc);
	m_wndName.SetEvent(WE_CHECKVALUE, _OnNameCheckValueFnc);
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
	//m_wndRequirePrice.SetEvent(WE_CHANGE, _OnRequirePriceChangeFnc);
	//m_wndRequirePrice.SetEvent(WE_SETFOCUS, _OnRequirePriceSetfocusFnc);
	//m_wndRequirePrice.SetEvent(WE_KILLFOCUS, _OnRequirePriceKillfocusFnc);
	m_wndRequirePrice.SetEvent(WE_CHECKVALUE, _OnRequirePriceCheckValueFnc);
	m_wndInsurancePaid.SetEvent(WE_CLICK, _OnInsurancePaidSelectFnc);
	m_wndPolicyPaid.SetEvent(WE_CLICK, _OnPolicyPaidSelectFnc);
	m_wndDifferencePaid.SetEvent(WE_CLICK, _OnDifferencePaidSelectFnc);
	m_wndPdept.SetEvent(WE_LOADDATA, _OnPdeptLoadDataFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndSalary.SetEvent(WE_CHECKVALUE, _OnSalaryCheckValueFnc);
	SetMode(VM_NONE);
	OnPriceListLoadData();
}
void CHMSDynBedSetupDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndName.GetDlgCtrlID(), m_szName);
	DDX_TextEx(pDX, m_wndPdept.GetDlgCtrlID(), m_szPdeptKey);
	DDX_Text(pDX, m_wndServicePrice.GetDlgCtrlID(), m_nServicePrice);
	DDX_Text(pDX, m_wndInsurancePrice.GetDlgCtrlID(), m_nInsurancePrice);
	DDX_Text(pDX, m_wndPolicyPrice.GetDlgCtrlID(), m_nPolicyPrice);
	DDX_Text(pDX, m_wndRequirePrice.GetDlgCtrlID(), m_nRequirePrice);
	DDX_Check(pDX, m_wndInsurancePaid.GetDlgCtrlID(), m_bInsurancePaid);
	DDX_Check(pDX, m_wndPolicyPaid.GetDlgCtrlID(), m_bPolicyPaid);
	DDX_Check(pDX, m_wndDifferencePaid.GetDlgCtrlID(), m_bDifferencePaid);
	DDX_Check(pDX, m_wndActive.GetDlgCtrlID(), m_bActive);
	DDX_Text(pDX, m_wndSalary.GetDlgCtrlID(), m_nSalary);
	DDX_Text(pDX, m_wndInsMap.GetDlgCtrlID(), m_szInsMap);

}
void CHMSDynBedSetupDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_dynbedlist WHERE hdbl_deptid='%s' and hdbl_idx=%d"), m_szDepartmentKey, m_nIndex);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	if(!rs.IsEOF())
	{
		CString tmpStr;
		rs.GetValue(_T("hdbl_name"), m_szName);
		rs.GetValue(_T("hdbl_inspaid"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bInsurancePaid = true;
		else m_bInsurancePaid = false;

		rs.GetValue(_T("hdbl_polpaid"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bPolicyPaid = true;
		else m_bPolicyPaid = false;

		rs.GetValue(_T("hdbl_difpaid"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bDifferencePaid= true;
		else m_bDifferencePaid = false;

		rs.GetValue(_T("hdbl_active"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bActive= true;
		else m_bActive = false;

		rs.GetValue(_T("hdbl_servprice"), m_nServicePrice);
		rs.GetValue(_T("hdbl_insprice"), m_nInsurancePrice);
		rs.GetValue(_T("hdbl_polprice"), m_nPolicyPrice);
		rs.GetValue(_T("hdbl_reqprice"), m_nRequirePrice);
		rs.GetValue(_T("hdbl_salary"), m_nSalary);
		rs.GetValue(_T("hdbl_insmap"), m_szInsMap);
		rs.GetValue(_T("hdbl_pdeptid"), m_szPdeptKey);
		//_msg(_T("%s"),m_szPdeptKey);
			
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CHMSDynBedSetupDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(GetMode() == VM_ADD){
		CRecord rs(&pMF->m_db);
		CString szSQL;

		szSQL.Format(_T("select coalesce(max(hdbl_idx), 0)+1 FROM hms_dynbedlist WHERE hdbl_deptid='%s' "), m_szDepartmentKey);
		rs.ExecSQL(szSQL);
		m_nIndex = rs.GetIntValue();
		m_hms_dynbedlistTbl.SetValue(_T("hdbl_createdby"), pMF->GetCurrentUser());
		m_hms_dynbedlistTbl.SetValue(_T("hdbl_createddate"), pMF->GetSysDateTime());
	}

	m_hms_dynbedlistTbl.SetValue(_T("hdbl_updatedby"), pMF->GetCurrentUser());
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_updateddate"), pMF->GetSysDateTime());
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_deptid"), m_szDepartmentKey);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_idx"), m_nIndex);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_name"), m_szName);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_inspaid"), m_bInsurancePaid?_T("Y"):_T("N"));
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_polpaid"), m_bPolicyPaid?_T("Y"):_T("N"));
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_difpaid"), m_bDifferencePaid?_T("Y"):_T("N"));
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_active"), m_bActive?_T("Y"):_T("N"));
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_servprice"), m_nServicePrice);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_insprice"), m_nInsurancePrice);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_polprice"), m_nPolicyPrice);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_reqprice"), m_nRequirePrice);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_salary"), m_nSalary);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_insmap"), m_szInsMap);
	m_hms_dynbedlistTbl.SetValue(_T("hdbl_pdeptid"), m_szPdeptKey);

}
void CHMSDynBedSetupDialog::SetDefaultValues(){

	m_szName.Empty();
	m_szPdeptKey.Empty();
	m_nServicePrice=0;
	m_nInsurancePrice=0;
	m_nPolicyPrice=0;
	m_nRequirePrice=0;
	m_nSalary=0;
	m_bInsurancePaid=TRUE;
	m_bPolicyPaid=TRUE;
	m_bDifferencePaid=FALSE;
	m_szInsMap.Empty();

}
int CHMSDynBedSetupDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode){ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
 			SetDefaultValues(); 
			m_wndName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
			m_wndName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 3, 4, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 5, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSDynBedSetupDialog::OnPriceListDblClick(){
	
} 
void CHMSDynBedSetupDialog::OnPriceListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	if(nNewItem < 0) return;
	m_nIndex = ToLong(m_wndPriceList.GetItemText(nNewItem, 0));
	GetDataToScreen();
} 
int CHMSDynBedSetupDialog::OnPriceListDeleteItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
	return 0;
} 
long CHMSDynBedSetupDialog::OnPriceListLoadData(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndPriceList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT * FROM hms_dynbedlist WHERE hdbl_deptid='%s' ORDER BY hdbl_idx "), m_szDepartmentKey);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPriceList.AddItems(
			rs.GetValue(_T("hdbl_idx")), 
			rs.GetValue(_T("hdbl_name")), 
			rs.GetValue(_T("hdbl_servprice")), 
			rs.GetValue(_T("hdbl_insprice")), 
			rs.GetValue(_T("hdbl_polprice")), 
			rs.GetValue(_T("hdbl_reqprice")),
			rs.GetValue(_T("hdbl_salary")),
			rs.GetValue(_T("hdbl_active")),
			rs.GetValue(_T("hdbl_insmap")),
			rs.GetValue(_T("hdbl_pdeptid")),
			NULL);
		rs.MoveNext();
	}
	m_wndPriceList.EndLoad(); 
	return nCount;
}

long CHMSDynBedSetupDialog::OnPdeptLoadData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPdept.IsSearchKey()){
		szWhere.Format(_T(" WHERE sd_id='%s' "), m_szPdeptKey);
	};
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept %s ORDER BY sd_id "), szWhere);

	m_wndPdept.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPdept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDynBedSetupDialog::OnNameChange(){
	
} */
/*void CHMSDynBedSetupDialog::OnNameSetfocus(){
	
} */
/*void CHMSDynBedSetupDialog::OnNameKillfocus(){
	
} */
int CHMSDynBedSetupDialog::OnNameCheckValue(){
	return 0;
} 
/*void CHMSDynBedSetupDialog::OnServicePriceChange(){
	
} */
/*void CHMSDynBedSetupDialog::OnServicePriceSetfocus(){
	
} */
/*void CHMSDynBedSetupDialog::OnServicePriceKillfocus(){
	
} */
int CHMSDynBedSetupDialog::OnServicePriceCheckValue(){
	/*UpdateData(TRUE);
	if(m_nInsurancePrice <= 0){
		m_nInsurancePrice = m_nPolicyPrice = m_nRequirePrice = m_nServicePrice;
		UpdateData(FALSE);
	}*/
	return 0;
} 
/*void CHMSDynBedSetupDialog::OnInsurancePriceChange(){
	
} */
/*void CHMSDynBedSetupDialog::OnInsurancePriceSetfocus(){
	
} */
/*void CHMSDynBedSetupDialog::OnInsurancePriceKillfocus(){
	
} */
int CHMSDynBedSetupDialog::OnInsurancePriceCheckValue(){
	return 0;
}
int CHMSDynBedSetupDialog::OnSalaryCheckValue(){
	return 0;
}
/*void CHMSDynBedSetupDialog::OnPolicyPriceChange(){
	
} */
/*void CHMSDynBedSetupDialog::OnPolicyPriceSetfocus(){
	
} */
/*void CHMSDynBedSetupDialog::OnPolicyPriceKillfocus(){
	
} */
int CHMSDynBedSetupDialog::OnPolicyPriceCheckValue(){
	return 0;
} 
/*void CHMSDynBedSetupDialog::OnRequirePriceChange(){
	
} */
/*void CHMSDynBedSetupDialog::OnRequirePriceSetfocus(){
	
} */
/*void CHMSDynBedSetupDialog::OnRequirePriceKillfocus(){
	
} */
int CHMSDynBedSetupDialog::OnRequirePriceCheckValue(){
	return 0;
} 
	void CHMSDynBedSetupDialog::OnInsurancePaidSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
	void CHMSDynBedSetupDialog::OnPolicyPaidSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
	void CHMSDynBedSetupDialog::OnDifferencePaidSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	
}
void CHMSDynBedSetupDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnAddHMSDynBedSetupDialog();
} 
void CHMSDynBedSetupDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnEditHMSDynBedSetupDialog();
} 
void CHMSDynBedSetupDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnDeleteHMSDynBedSetupDialog();
} 
void CHMSDynBedSetupDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnSaveHMSDynBedSetupDialog();
} 
void CHMSDynBedSetupDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancelHMSDynBedSetupDialog();
} 
void CHMSDynBedSetupDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	OnCancel();
} 
int CHMSDynBedSetupDialog::OnAddHMSDynBedSetupDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDynBedSetupDialog::OnEditHMSDynBedSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDynBedSetupDialog::OnDeleteHMSDynBedSetupDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
 	szSQL.Format(_T("DELETE FROM hms_dynbedlist WHERE hdbl_deptid='%s' and hdbl_idx=%d"), m_szDepartmentKey, m_nIndex); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0){ 
		OnPriceListLoadData();
 		SetMode(VM_NONE); 
 		OnCancelHMSDynBedSetupDialog(); 
 	}
	return 0;
}
int CHMSDynBedSetupDialog::OnSaveHMSDynBedSetupDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
	if(m_bInsurancePaid && m_szInsMap.IsEmpty())
	{
		ShowToolTip(&m_wndInsMap,_T("Neu BH Thanh toan thi bat buoc phai nhap Ma anh xa"));
		return -1;
	}
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
 		szSQL = m_hms_dynbedlistTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		CString szWhere; 
 		szWhere.Format(_T(" WHERE hdbl_deptid='%s' and hdbl_idx=%d "), m_szDepartmentKey, m_nIndex); 
 		szSQL = m_hms_dynbedlistTbl.GetUpdateSQL(_T("hdbl_deptid,hdbl_idx,hdbl_createdby,hdbl_createddate")); 
 		szSQL += szWhere; 
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		OnPriceListLoadData();
 		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
}
int CHMSDynBedSetupDialog::OnCancelHMSDynBedSetupDialog(){
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
int CHMSDynBedSetupDialog::OnHMSDynBedSetupDialogListLoadData(){
	return 0;
}
void CHMSDynBedSetupDialog::OnListSearchItem()
{
	CSearchPopup *newPopup = new CSearchPopup(&m_wndPriceList);
	newPopup->ShowPopup(&m_wndPriceList);
} 