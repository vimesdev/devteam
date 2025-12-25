#include "HMSSurgeryMaterialDrugDialog.h"
#include "MainFrm.h"
#include ".\hmssurgerymaterialdrugdialog.h"

static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel)
{
	((CHMSSurgeryMaterialDrugDialog* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnStockAddNew();
}*/
static void _OnDrugNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSurgeryMaterialDrugDialog* )pWnd)->OnDrugNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugNameSelendokFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnDrugNameSelendok();
}
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnDrugNameKillfocus();
}*/
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnDrugNameKillfocus();
}*/
static long _OnDrugNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnDrugNameLoadData();
}
/*static void _OnDrugNameAddNewFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnDrugNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSurgeryMaterialDrugDialog *pVw = (CHMSSurgeryMaterialDrugDialog *)pWnd;
	pVw->OnSaveSelect();
} 
/*static void _OnOrderDateChangeFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnOrderDateChange();
} */
/*static void _OnOrderDateSetfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnOrderDateSetfocus();} */ 
/*static void _OnOrderDateKillfocusFnc(CWnd *pWnd){
	((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnOrderDateKillfocus();
} */
static int _OnOrderDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSurgeryMaterialDrugDialog *)pWnd)->OnOrderDateCheckValue();
} 
static int _OnAddHMSSurgeryMaterialDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugDialog*)pWnd)->OnAddHMSSurgeryMaterialDrugDialog();
} 
static int _OnEditHMSSurgeryMaterialDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugDialog*)pWnd)->OnEditHMSSurgeryMaterialDrugDialog();
} 
static int _OnDeleteHMSSurgeryMaterialDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugDialog*)pWnd)->OnDeleteHMSSurgeryMaterialDrugDialog();
} 
static int _OnSaveHMSSurgeryMaterialDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugDialog*)pWnd)->OnSaveHMSSurgeryMaterialDrugDialog();
} 
static int _OnCancelHMSSurgeryMaterialDrugDialogFnc(CWnd *pWnd){
	 return ((CHMSSurgeryMaterialDrugDialog*)pWnd)->OnCancelHMSSurgeryMaterialDrugDialog();
} 

BEGIN_MESSAGE_MAP(CHMSSurgeryMaterialDrugDialog, CGuiView)
	ON_WM_CLOSE()
	ON_WM_NCHITTEST()
END_MESSAGE_MAP()


CHMSSurgeryMaterialDrugDialog::CHMSSurgeryMaterialDrugDialog()
{
	m_nDlgWidth = 605;
	m_nDlgHeight = 125;
	SetDefaultValues();
	m_szStockKey.Empty();
	//m_szDrugNameKey.Empty();
	m_bInsCardExpire = false;
}
CHMSSurgeryMaterialDrugDialog::~CHMSSurgeryMaterialDrugDialog()
{
}
void CHMSSurgeryMaterialDrugDialog::OnCreateComponents()
{
	m_wndStockLabel.Create(this, _T("Stock"), 10, 30, 110, 55);
	m_wndStock.Create(this,115, 30, 345, 55); 
	m_wndNameLabel.Create(this, _T("Name /Cnt"), 10, 60, 110, 85);
	m_wndDrugName.Create(this,115, 60, 345, 85); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 350, 60, 430, 85);
	m_wndQuantity.Create(this,435, 60, 520, 85); 
	m_wndSave.Create(this, _T("&Save"), 525, 60, 595, 85);
	m_wndOrderDateLabel.Create(this, _T("Date"), 350, 30, 430, 55);
	m_wndOrderDate.Create(this,435, 30, 520, 55); 
	m_wndMaterialDrugInformation.Create(this, _T("Material && Drug Information"), 5, 5, 600, 95);
}
void CHMSSurgeryMaterialDrugDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);
	m_wndDrugName.SetCheckValue(true);
	m_wndDrugName.LimitText(45);
	m_wndQuantity.SetLimitText(5);
	m_wndQuantity.SetCheckValue(true);
	m_wndOrderDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndOrderDate.SetCheckValue(true);
	m_wndOrderDate.SetReadOnly(true);

	m_wndStock.InsertColumn(0, _T("ID"), CFMT_NUMBER, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);



	m_wndDrugName.InsertColumn(0, _T("ID"), CFMT_NUMBER, 0);
	m_wndDrugName.InsertColumn(1, _T("Country ID"), CFMT_TEXT, 0);
	m_wndDrugName.InsertColumn(2, _T("Name /Cnt"), CFMT_TEXT, 500);
	m_wndDrugName.InsertColumn(3, _T("Unit"), CFMT_TEXT, 70);
	m_wndDrugName.InsertColumn(4, _T("Mã hiệu"), CFMT_TEXT, 100);
	m_wndDrugName.InsertColumn(5, _T("Hãng sx"), CFMT_TEXT, 300);
	m_wndDrugName.InsertColumn(6, _T("Generic"), CFMT_TEXT, 0);
	m_wndDrugName.InsertColumn(7, _T("On Hand"), CFMT_NUMBER, 0);
	m_wndDrugName.InsertColumn(8, _T(""), CFMT_TEXT, 0); //precision
	m_wndDrugName.InsertColumn(9, _T("Hạn dùng"), CFMT_TEXT, 80);
    if (pMF->GetDepartmentID() == L"B5")
        m_wndDrugName.InsertColumn(10, _T("X"), CFMT_TEXT, 50);

	m_wndDrugName.Format(8, 2);

	
	m_hms_pharma_orderTbl.SetTableName(_T("hms_pharmaorder"));

	//m_hms_pharma_orderTbl.AddField(_T("hpo_orderid"), dfLong);
	m_hms_pharma_orderTbl.AddField(_T("hpo_org_id"), dfText, 32);
	//m_hms_pharma_orderTbl.AddField(_T("hpo_client_id"), dfText, 32);

	//m_hms_pharma_orderTbl.AddField(_T("hpo_createdby"), dfText, 15);
	//m_hms_pharma_orderTbl.AddField(_T("hpo_createddate"), dfDateTime);
	//m_hms_pharma_orderTbl.AddField(_T("hpo_updatedby"), dfText, 15);
	//m_hms_pharma_orderTbl.AddField(_T("hpo_updateddate"), dfDateTime);

	//m_hms_pharma_orderTbl.AddField(_T("hpo_isactive"), dfText, 1);

	m_hms_pharma_orderTbl.AddField(_T("hpo_user_id"), dfText, 15);

	m_hms_pharma_orderTbl.AddField(_T("hpo_storage_id"), dfLong);

	m_hms_pharma_orderTbl.AddField(_T("hpo_patientno"), dfLong); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_docno"), dfLong);

	m_hms_pharma_orderTbl.AddField(_T("hpo_deptid"), dfText, 7);
	m_hms_pharma_orderTbl.AddField(_T("hpo_refidx"), dfInteger);
	m_hms_pharma_orderTbl.AddField(_T("hpo_roomid"), dfInteger); 
	m_hms_pharma_orderTbl.AddField(_T("hpo_bedid"), dfInteger);

	m_hms_pharma_orderTbl.AddField(_T("hpo_ordertype"), dfText, 3);
	m_hms_pharma_orderTbl.AddField(_T("hpo_orderdate"), dfDateTime);
	m_hms_pharma_orderTbl.AddField(_T("hpo_doctor"), dfText, 15);
	m_hms_pharma_orderTbl.AddField(_T("hpo_scaledrug"), dfInteger);

	/*if (pMF->IsOldPatient() || !pMF->IsInPatient())
		m_hms_pharma_orderTbl.AddField(_T("hpo_reforder_id"), dfLong);
	else*/
	m_hms_pharma_orderTbl.AddField(_T("hpo_reference_id"), dfLong);

	/*m_hms_pharma_orderTbl.AddField(_T("hpo_depttype"), dfText, 3);
	m_hms_pharma_orderTbl.AddField(_T("hpo_floor"), dfInteger);
	m_hms_pharma_orderTbl.AddField(_T("hpo_doctype"), dfText, 3);*/


	//m_hms_pharma_orderTbl.AddField(_T("hpo_orderstatus"), dfText, 1);
	//m_hms_pharma_orderTbl.AddField(_T("hpo_approvedate"), dfDateTime);
	//m_hms_pharma_orderTbl.AddField(_T("hpo_approveby"), dfText, 32);
	
	//m_hms_pharma_orderTbl.AddField(_T("hpo_refitem_id"), dfText, 15);
	//m_hms_pharma_orderTbl.AddField(_T("hpo_payment"), dfText, 1);
	//m_hms_pharma_orderTbl.AddField(_T("hpo_advice"), dfText, 128);
	//m_hms_pharma_orderTbl.AddField(_T("hpo_amount"), dfDouble);
	 


	
	//m_hms_pharma_order_lineTbl.SetTableName(_T("hms_pharmaorderline"));
	//m_hms_pharma_order_lineTbl.AddField(_T("hpol_orderlineid"), dfLong);
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_org_id"), dfText, 32);
	//m_hms_pharma_order_lineTbl.AddField(_T("hpol_client_id"), dfText, 32);
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_user_id"), dfText, 15);

	/*m_hms_pharma_order_lineTbl.AddField(_T("hpol_createdby"), dfText, 32);
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_createddate"), dfDateTime);
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_updatedby"), dfText, 32);
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_updateddate"), dfDateTime);*/

	//m_hms_pharma_order_lineTbl.AddField(_T("hpol_isactive"), dfText, 1);

	//m_hms_pharma_order_lineTbl.AddField(_T("hpol_docno"), dfLong);
	//m_hms_pharma_order_lineTbl.AddField(_T("hpol_line"), dfInteger);

	m_hms_pharma_order_lineTbl.AddField(_T("hpol_objecttype"), dfText, 1);
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_orderid"), dfLong);

	m_hms_pharma_order_lineTbl.AddField(_T("hpol_storage_id"), dfLong);
	
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_product_id"), dfLong);
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_country_id"), dfText, 3);
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_qtyorder"), dfDouble);
	m_hms_pharma_order_lineTbl.AddField(_T("hpol_usage"), dfText, 128);

	//m_hms_pharma_order_lineTbl.AddField(_T("hpol_product_item_id"), dfInteger);

	//m_hms_pharma_order_lineTbl.AddField(_T("hpol_qtyissue"), dfInteger);
	//m_hms_pharma_order_lineTbl.AddField(_T("hpol_qtyreverse"), dfInteger);
	//m_hms_pharma_order_lineTbl.AddField(_T("hpol_unitprice"), dfDouble);
	
	//m_hms_pharma_order_lineTbl.AddField(_T("hfe_status"), dfText, 1);
	//m_hms_pharma_order_lineTbl.AddField(_T("hpol_retorder_id"), dfInteger);

}
void CHMSSurgeryMaterialDrugDialog::OnSetWindowEvents()
{
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndDrugName.SetEvent(WE_SELENDOK, _OnDrugNameSelendokFnc);
	//m_wndDrugName.SetEvent(WE_SETFOCUS, _OnDrugNameSetfocusFnc);
	//m_wndDrugName.SetEvent(WE_KILLFOCUS, _OnDrugNameKillfocusFnc);
	m_wndDrugName.SetEvent(WE_SELCHANGE, _OnDrugNameSelectChangeFnc);
	m_wndDrugName.SetEvent(WE_LOADDATA, _OnDrugNameLoadDataFnc);
	//m_wndDrugName.SetEvent(WE_ADDNEW, _OnDrugNameAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	//m_wndOrderDate.SetEvent(WE_CHANGE, _OnOrderDateChangeFnc);
	//m_wndOrderDate.SetEvent(WE_SETFOCUS, _OnOrderDateSetfocusFnc);
	//m_wndOrderDate.SetEvent(WE_KILLFOCUS, _OnOrderDateKillfocusFnc);
	m_wndOrderDate.SetEvent(WE_CHECKVALUE, _OnOrderDateCheckValueFnc);

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szOrderDate = pMF->GetSysDate();

	
	SetMode(VM_ADD);
}
void CHMSSurgeryMaterialDrugDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);
	DDX_TextEx(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_TextEx(pDX, m_wndOrderDate.GetDlgCtrlID(), m_szOrderDate);
}
void CHMSSurgeryMaterialDrugDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSSurgeryMaterialDrugDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szObjectType;
	long nIdx = 1;
	
	m_hms_pharma_orderTbl.SetValue(_T("hpo_org_id"), pMF->GetModuleID());

	//tmpStr.Format(_T("%s %s"), m_szOrderDate, pMF->GetSysTime());
	m_hms_pharma_orderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);

	m_hms_pharma_orderTbl.SetValue(_T("hpo_storage_id"), m_szStockKey);

	m_hms_pharma_orderTbl.SetValue(_T("hpo_user_id"), pMF->GetCurrentUser());

	m_hms_pharma_orderTbl.SetValue(_T("hpo_patientno"), m_nPatientNo);
	m_hms_pharma_orderTbl.SetValue(_T("hpo_docno"), m_nDocumentNo);

	
	if (!pMF->IsInPatient())
		m_hms_pharma_orderTbl.SetValue(_T("hpo_deptid"), m_szDept);
	else
		m_hms_pharma_orderTbl.SetValue(_T("hpo_deptid"), pMF->m_szDept);

	m_hms_pharma_orderTbl.SetValue(_T("hpo_roomid"), pMF->m_nRoomID);
	m_hms_pharma_orderTbl.SetValue(_T("hpo_bedid"), pMF->m_nBedID);

	if (!pMF->IsInPatient())
	{
		/*szSQL.Format(_T("SELECT max(he_receptidx) AS Idx FROM hms_exam WHERE he_docno=%ld AND he_deptid='%s'"),
			         m_nDocumentNo, m_szDept);
		rs.ExecSQL(szSQL);

		if (!rs.IsEOF())
		{
			rs.GetValue(_T("Idx"), nIdx);
		}*/
	}
	else
	{
		/*szSQL.Format(_T("SELECT max(htr_idx) AS Idx FROM hms_treatment_record WHERE htr_docno=%ld AND htr_deptid='%s'"),
			         m_nDocumentNo, m_szDept);
		rs.ExecSQL(szSQL);

		if (!rs.IsEOF())
		{
			rs.GetValue(_T("Idx"), nIdx);
		}*/
	}

	m_hms_pharma_orderTbl.SetValue(_T("hpo_refidx"), nIdx);

	m_hms_pharma_orderTbl.SetValue(_T("hpo_doctor"), pMF->GetCurrentUser());

	m_hms_pharma_orderTbl.SetValue(_T("hpo_orderstatus"), _T("O"));

	if (pMF->IsOldPatient())
		m_hms_pharma_orderTbl.SetValue(_T("hpo_ordertype"), _T("S"));
	else
		m_hms_pharma_orderTbl.SetValue(_T("hpo_ordertype"), _T("M"));

	/*if (pMF->IsOldPatient() || !pMF->IsInPatient())
		m_hms_pharma_orderTbl.SetValue(_T("hpo_reforder_id"), m_nRefIndex);
	else*/
	m_hms_pharma_orderTbl.SetValue(_T("hpo_reference_id"), m_nRefIndex);

	m_hms_pharma_orderTbl.SetValue(_T("hpo_scaledrug"), 1);

	//m_hms_pharma_orderTbl.SetValue(_T("hpo_payment"), _T("N"));
	//m_hms_pharma_orderTbl.SetValue(_T("hpo_depttype"), _T("S"));

	CString szCountryID = m_wndDrugName.GetCurrent(1);
	CString szItemId = m_wndDrugName.GetCurrent(0);



	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_org_id"), pMF->GetModuleID());
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_user_id"), pMF->GetCurrentUser());
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_objecttype"), m_szObjectType);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_storage_id"), m_szStockKey);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_product_id"), szItemId);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_country_id"), szCountryID);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_qtyorder"), m_nQuantity);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_usage"), _T("''"));

	/*m_hms_pharma_orderTbl.SetValue(_T("hpol_itemid"), szItemId);
	m_hms_pharma_orderTbl.SetValue(_T("hpol_countryid"), szCountryID);
	m_hms_pharma_orderTbl.SetValue(_T("hpol_refidx"), m_szDrugNameKey);
	m_hms_pharma_orderTbl.SetValue(_T("hpol_orderqty"), m_nQuantity);
	m_hms_pharma_orderTbl.SetValue(_T("hpol_usage"), _T("''"));*/
	
	
	/*m_hms_pharma_order_lineTbl.SetValue(_T("hpol_itemid"), szItemId);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_refidx"), m_szDrugNameKey);
	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_orderqty"), m_nQuantity);*/

}
void CHMSSurgeryMaterialDrugDialog::SetDefaultValues()
{	
	m_szDrugNameKey.Empty();
	m_nQuantity=0;
	m_bIsPrecision = false;
}
int CHMSSurgeryMaterialDrugDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode();
		CGuiView::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
			
  		switch(nMode)
		{ 
 		case VM_ADD: 
			if(m_szStockKey.IsEmpty())
			{
				if(m_szObjectType == _T("S"))
					m_szStockKey = _T("11");
				if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
					m_szStockKey = _T("10");
				if(m_szObjectType == _T("D") || m_szObjectType == _T("P"))
					m_szStockKey = _T("18");

			}

			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			SetDefaultValues();

			if(m_szStockKey.IsEmpty())
			{
				m_wndStock.EnableWindow(true);
				m_wndStock.SetFocus();
			}
			else
			{
				//m_wndStock.EnableWindow(false);
				m_wndDrugName.SetFocus();
			}
 			break; 
 		case VM_ADDCHILD: 
			SetDefaultValues();
			m_wndDrugName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 1, -1); 
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
void CHMSSurgeryMaterialDrugDialog::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugDialog::OnStockSelendok()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szStockKey = m_wndStock.GetCurrent(0);
	SetDefaultValues();

	UpdateData(FALSE);
}
/*void CHMSSurgeryMaterialDrugDialog::OnStockSetfocus(){
	
}*/
/*void CHMSSurgeryMaterialDrugDialog::OnStockKillfocus(){
	
}*/
long CHMSSurgeryMaterialDrugDialog::OnStockLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szStockID;
	CString szCondition;

	szWhere.Empty();
	szCondition.Empty();

	if(m_wndStock.IsSearchKey() && str2int(m_szStockKey) > 0 )
	{
		szWhere.Format(_T(" AND msl_storage_id=%d "), ToInt(m_szStockKey));
	}
	m_wndStock.DeleteAllItems();
	int nCount = 0;
/*
	if(pMF->m_nIsOutPatient == 1)
	{
		if (pMF->m_szDepartment == _T("B5") || pMF->GetCurrentUser().Trim().MakeLower() == _T("admin"))
		{	
			if (m_szObject.Trim() == _T("7") || m_bInsCardExpire)
				szWhere.AppendFormat(_T(" AND msl_storage_id in(11,19) "));
			else	
				if(m_szObject.Trim() == _T("1") || m_szObject.Trim() == _T("3") || m_szObject.Trim() == _T("8")|| m_szObject.Trim() == _T("11"))
					szWhere.AppendFormat(_T(" AND msl_storage_id in(10,18,19) "));
				else					
					szWhere.AppendFormat(_T(" AND msl_storage_id in(10,19) "));
		}	
	}
	else
	{
		if (pMF->m_szDepartment == _T("B5") || pMF->GetCurrentUser().Trim().MakeLower() == _T("admin"))
		{	
			if (m_szObject.Trim() == _T("7") || m_bInsCardExpire)
				szWhere.AppendFormat(_T(" AND msl_storage_id in(11,12,13,19) "));
			else
				if(m_szObject.Trim() == _T("1") || m_szObject.Trim() == _T("3") || m_szObject.Trim() == _T("8")|| m_szObject.Trim() == _T("11"))
					szWhere.AppendFormat(_T(" AND msl_storage_id in(10, 12,13,18,19) "));
				else
					szWhere.AppendFormat(_T(" AND msl_storage_id in(10,12,13,19) "));
		}
		else if (pMF->m_szDepartment == _T("A2-C"))
		{
			//szStockID.Format(_T(" and pmsl_stockid in(216,221,217,220) "));
		}
	}
*/
	
	if(m_bInsCardExpire)
	{
		m_szObject = _T("7");
	}

	//szWhere.AppendFormat(_T(" and msl_storage_id in(select msd_storage_id from m_storage_default_b5 where msd_object_id=%d) "),
	//	str2int(m_szObject));

	szWhere.AppendFormat(_T(" AND (msl_storage_id in(select msd_storage_id from m_storage_default_b5 where msd_object_id=%d)") \
	_T(" or msl_storage_id IN (select hst_b5_stock from hms_operation") \
	//_T(" OR msl_storage_id IN") \
	_T("   (select msl_storage_id from m_storagelist where msl_isactive='Y' and MSL_DEPT_ID='B5' and msl_storage_id > 1900)") \//
	_T(" left join hms_surgery_table ON (ho_opera_table = hst_idx)") \
	_T(" where ho_docno=%ld and ho_idx=%ld)") \
	_T(" ) OR msl_storage_id IN (select msl_storage_id from m_storagelist where msl_isactive='Y' and MSL_DEPT_ID='B5' and msl_storage_id >= 1900) OR (msl_storage_id = 444 and NVL(msl_isfree, 'N')='Y')"), str2int(m_szObject), m_nDocumentNo, m_nRefIndex);

	

	//comment lai theo yeu cau anh Loc
	/*
	if(pMF->m_nIsOutPatient == 1)
	{
		szWhere.AppendFormat(_T(" and msl_storage_id not in(12,13) "));
	}
	*/

	szSQL.Format(_T("SELECT * FROM m_storagelist ") \
		_T("WHERE msl_isactive='Y' %s ") \
		_T("ORDER BY msl_storage_id"), szWhere);
	_tprintf(_T("\r\n%s: %d"), szSQL, m_bInsCardExpire);	
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	while(!rs.IsEOF()){
		m_wndStock.AddItems(
			rs.GetValue(_T("msl_storage_id")),
			rs.GetValue(_T("msl_name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSSurgeryMaterialDrugDialog::OnStockAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSurgeryMaterialDrugDialog::OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSurgeryMaterialDrugDialog::OnDrugNameSelendok()
{	
	UpdateData(TRUE);
	m_szDrugNameKey = m_wndDrugName.GetCurrent(0);
	//m_szDrugName = m_wndDrugName.GetCurrent(1);
	m_nMaxQuantity = str2float(m_wndDrugName.GetCurrent(7));
	UpdateData(FALSE);
	//m_wndQuantity.SetMinMax(1, m_nMaxQuantity);

	CString szIsPrecision = m_wndDrugName.GetCurrent(8);
	//_msg(_T("%s"), szIsPrecision);
	m_bIsPrecision = false;
	if(szIsPrecision == _T("Y"))
	{
		m_wndQuantity.SetNumberDecimal(2);
		m_bIsPrecision = true;
	}
	else
	{
		m_wndQuantity.SetNumberDecimal(0);
	}

}
/*void CHMSSurgeryMaterialDrugDialog::OnDrugNameSetfocus(){
	
}*/
/*void CHMSSurgeryMaterialDrugDialog::OnDrugNameKillfocus(){
	
}*/
long CHMSSurgeryMaterialDrugDialog::OnDrugNameLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
    CRecord rs2(&pMF->m_db);
	CString szSQL, szSubSQL, szWhere;
	szWhere.Empty();

	if(m_wndDrugName.IsSearchKey() && str2long(m_szDrugNameKey) > 0)
	{
		szWhere.Format(_T(" AND msl_storageline_id=%ld "), str2long(m_szDrugNameKey));
	}
	m_wndDrugName.DeleteAllItems(); 
	int nCount = 0;
    int nstorage_id = 0, nstorage_to_id = 0;
	/*szSQL.Format(_T(" SELECT  pmsi_refidx as refidx, ") \
				_T(" 	product_id as itemid, ") \
				_T(" 	product_name as name, ") \
				_T(" 	product_unit as unit, ") \
				_T(" 	pmg_name as genericname, ") \
				_T(" 	sum(pmsl_quantity-pmsl_orderqty) as orderqty, ") \
				_T(" 	(select distinct sc_name from sys_country where sc_id=pmsi_countryid) as country, ") \
				_T("	pmsi_countryid as countryid ") \
				_T(" FROM pms_stockline ") \
				_T(" LEFT JOIN pms_stockitems ON(pmsl_sitemid=pmsi_id)") \
				_T(" LEFT JOIN m_product_view ON(product_id=pmsi_itemid)") \
				_T(" LEFT JOIN pms_generic  on(product_genericid=pmg_id) ") \
				_T(" WHERE pmsl_stockid=%ld ") \
				_T(" 	and pmsl_quantity-pmsl_orderqty > 0 ") \
				_T(" 	and (pmsi_expdate=to_date('1752-09-14', 'yyyy/mm/dd hh24:mi:ss') or pmsi_expdate > to_date('%s', 'yyyy/mm/dd hh24:mi:ss') ) %s ") \
				_T(" GROUP BY pmsi_refidx, product_id, product_name, product_unit,  pmg_name, pmsi_countryid ") \
				_T(" ORDER BY name, unit"), str2int(m_szStockKey), m_szOrderDate, szWhere);*/

	szSQL.Format(_T(" SELECT product_id as itemid,") \
				_T("        '(' ||product_id || ')' || product_name as name,") \
				_T("        product_uomname as unit,") \
				_T("        product_classname as genericname,") \
				_T("        sum(msl_qtyonhand-msl_qtyordered+msl_qtypreordered) as orderqty,") \
				_T("        PRODUCT_MANUFACTURENAME as country,") \
				_T("        product_countryid as countryid, product_isprecision as isprecision, ") \
				_T("        CASE WHEN to_char(PRODUCT_EXPDATE, 'DD/MM/YYYY')='14/09/1752' THEN NULL ELSE to_char(PRODUCT_EXPDATE, 'DD/MM/YYYY') END AS expdate, ") \
				_T("        MA_HIEU as ma_hieu, hms_check_mtl_flag(product_id, msl_product_item_id, 5, 37) as isflag") \
				_T(" FROM m_storageline") \
				_T(" LEFT JOIN m_productitem_view_ex ON(msl_product_item_id=product_item_id)") \
				_T(" WHERE msl_storage_id=%ld AND msl_isactive='Y'") \
				_T("       AND abs(msl_qtyonhand-msl_qtyordered+msl_qtypreordered) > 0 %s") \
				_T(" GROUP BY product_id, product_name, product_uomname, PRODUCT_MANUFACTURENAME, product_classname, product_countryid, product_isprecision, PRODUCT_EXPDATE,MA_HIEU, msl_product_item_id ") \
				_T(" ORDER BY product_name, PRODUCT_EXPDATE, product_uomname"),
				str2int(m_szStockKey), szWhere);

	//_T("       AND (mpi_expdate=to_date('1752-09-14', 'yyyy/mm/dd hh24:mi:ss') or mpi_expdate > to_date('%s', 'yyyy/mm/dd hh24:mi:ss')) %s") \
	//_msg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugName.AddItems(
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("countryid")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("MA_HIEU")),
			rs.GetValue(_T("country")),
			rs.GetValue(_T("genericname")),
			rs.GetValue(_T("orderqty")),
			rs.GetValue(_T("isprecision")),
			rs.GetValue(_T("expdate")),
            rs.GetValue(_T("isflag")) == _T("Y") ? _T("5->37") : NULL,
			NULL);
        /* if (pMF->GetDepartmentID() == L"B5")
        {
			szSubSQL.Format(_T("select mt_storage_id, mt_storage_to_id ") \
						_T(" FROM ") \
						_T(" m_storageline ") \
						_T("	LEFT JOIN m_transactionline ON ( mtl_product_item_id = msl_product_item_id )  ") \
						_T("	LEFT JOIN m_transaction ON ( mt_transaction_id = mtl_transaction_id AND mt_doctype = 'CRO' ) ") \
						_T("    WHERE msl_product_item_id = %ld"), rs.GetValue(_T("itemid")));
			rs2.ExecSQL(szSubSQL);
            _tprintf(L"%s", szSubSQL);
			rs2.GetValue(_T("mt_storage_id"), nstorage_id);
			rs2.GetValue(_T("mt_storage_to_id"), nstorage_to_id);
			if (nstorage_id == 37 && nstorage_to_id == 5)
			{
				m_wndDrugName.AddSubItem(10, L"X");
			}
        }*/

		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSSurgeryMaterialDrugDialog::OnDrugNameAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSurgeryMaterialDrugDialog::OnQuantityChange(){
	
} */
/*void CHMSSurgeryMaterialDrugDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSSurgeryMaterialDrugDialog::OnQuantityKillfocus(){
	
} */
int CHMSSurgeryMaterialDrugDialog::OnQuantityCheckValue()
{
	UpdateData(true);
	if (m_nQuantity <= 0 )
	{
		return -1;
	}
	else if (m_nQuantity > m_nMaxQuantity)
	{
		CString szTemp;
		szTemp.Format(_T("S\x1ED1 l\x1B0\x1EE3ng y\xEAu \x63\x1EA7u[%d] l\x1EDBn h\x1A1n s\x1ED1 l\x1B0\x1EE3ng t\x1ED3n kho[%d]"),
					  m_nQuantity, m_nMaxQuantity);
		m_wndQuantity.SetToolTipMessage(szTemp);
		return -1;
	}
	return 0;
} 
void CHMSSurgeryMaterialDrugDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSSurgeryMaterialDrugDialog();
} 
/*void CHMSSurgeryMaterialDrugDialog::OnOrderDateChange(){
	
} */
/*void CHMSSurgeryMaterialDrugDialog::OnOrderDateSetfocus(){
	
} */
/*void CHMSSurgeryMaterialDrugDialog::OnOrderDateKillfocus(){
	
} */
int CHMSSurgeryMaterialDrugDialog::OnOrderDateCheckValue(){
	return 0;
} 
int CHMSSurgeryMaterialDrugDialog::OnAddHMSSurgeryMaterialDrugDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSSurgeryMaterialDrugDialog::OnEditHMSSurgeryMaterialDrugDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSurgeryMaterialDrugDialog::OnDeleteHMSSurgeryMaterialDrugDialog(){
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
 		OnCancelHMSSurgeryMaterialDrugDialog(); 
 	}
	return 0;
}
int CHMSSurgeryMaterialDrugDialog::OnSaveHMSSurgeryMaterialDrugDialog()
{
	if (GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
 		return -1;

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL, szSQL2, m_szOrders; 
	//int ret;
	int nStockID;
	long nOID = 0;
	long nProductID = 0;
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szInpatient, szStatus, szSuggestion;


	szSQL.Format(_T("SELECT hd_status, hd_isinpatient, hd_suggestion FROM hms_doc WHERE hd_docno=%ld"),
			         m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;
	rs.GetValue(_T("hd_isinpatient"), szInpatient);
	rs.GetValue(_T("hd_status"), szStatus);
	rs.GetValue(_T("hd_suggestion"), szSuggestion);
	if(szInpatient == _T("Y"))
	{
		szSQL.Format(_T("SELECT Count(*) FROM hms_clinical_record WHERE hcr_status='T' AND hcr_docno=%ld"),
			         m_nDocumentNo);
		if (rs.GetIntValue() > 0)
		{
			ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 k\x1EBFt th\xFA\x63 h\x1ED3 s\x1A1. Kh\xF4ng th\x1EC3 th\x61o t\xE1\x63"), MB_OK | MB_ICONERROR);
			return -1;
		}
	}
	else
	{
		if (szStatus == _T("T") && szSuggestion != _T("D"))
		{
			ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 k\x1EBFt th\xFA\x63 h\x1ED3 s\x1A1. Kh\xF4ng th\x1EC3 th\x61o t\xE1\x63"), MB_OK | MB_ICONERROR);
			return -1;

		}
	}



	
	m_szOrderDate.AppendFormat(_T(" %s"), pMF->GetSysTime());
	m_hms_pharma_orderTbl.SetValue(_T("hpo_orderdate"), m_szOrderDate);

	if (!IsValidateData()) 
 		return -1;

	nStockID = ToInt(m_szStockKey);
	
	if (nStockID <= 0)
		return -1;
		
	pMF->BeginTransaction();
_tprintf(_T("\nOutpatient: %d|OldPatient: %d\n"), pMF->m_nIsOutPatient, pMF->IsOldPatient());	
	if (!pMF->IsInPatient())
	{
		szSQL.Format(_T("hms_pharmaorder_create(%s) "), m_hms_pharma_orderTbl.FormatSQL());
	}
	else
	//	szSQL.Format(_T("hms_inpharmaorder_create(%s) "), m_hms_pharma_orderTbl.FormatSQL());
		szSQL.Format(_T("hms_op_pharmaorder_create(%s) "), m_hms_pharma_orderTbl.FormatSQL());

//_msg(_T("%s"), szSQL);
	nOID = str2long(pMF->ExecDML(szSQL));
	
	if (nOID <= 0)
	{
		ShowMessageBox(_T("Cannot add order"), MB_OK | MB_ICONERROR);
		pMF->Rollback();
		return -1;
	}

	m_hms_pharma_order_lineTbl.SetValue(_T("hpol_orderid"), nOID);

	if (!pMF->IsInPatient() || pMF->IsOldPatient())
	{
		//szSQL.Format(_T("hms_pharmaorder_addline(%s) "), m_hms_pharma_order_lineTbl.FormatSQL());
		szSQL.Format(_T("hms_pharmaorder_createline(%s) "), m_hms_pharma_order_lineTbl.FormatSQL());
	}
	else
		//szSQL.Format(_T("hms_inpharmaorder_addline(%s) "), m_hms_pharma_order_lineTbl.FormatSQL());
		szSQL.Format(_T("hms_op_pharmaorder_addline(%s) "), m_hms_pharma_order_lineTbl.FormatSQL());

	//MessageBox(m_hms_pharma_order_lineTbl.FormatSQL());
	//_msg(_T("%s"), szSQL);
	long res = str2long(pMF->ExecDML(szSQL));
	if (res <= 0)
	{
		ShowMessageBox(_T("Cannot add item"), MB_OK | MB_ICONERROR);
		pMF->Rollback();
		return -1;
	}

	pMF->Commit();

	
	//if (nOID != m_nOrderID)
	//{		
	//	m_nOrderID = nOID;
	//	CString tmpStr;
	//	tmpStr.Format(_T("%ld"), m_nOrderID);
	//	if (m_szOrders.Find(tmpStr) == -1)
	//	{
	//		m_szOrders.AppendFormat(_T(",%ld"), m_nOrderID);
	//	}

	//	szSQL.Format(_T(" UPDATE hms_pharmaorder SET hpo_reforder_id=%ld WHERE hpo_docno=%ld AND hpo_orderid=%ld "), m_nRefIndex, m_nDocumentNo, m_nOrderID);
	//	//_msg(_T("%s"), szSQL);
	//	pMF->ExecSQL(szSQL);
	//	
	//	//((CHMSSurgeryDocument*)GetParent())->OnDrugListLoadData();
	//}

	if (nOID > 0)
	{
		if (!pMF->IsInPatient() || pMF->IsOldPatient())
		{
			/*szSQL.Format(_T("UPDATE hms_pharmaorder SET hpo_refitem_id='%s' ") \
						 _T("WHERE hpo_docno=%ld AND hpo_orderid=%ld AND hpo_reforder_id=%ld"),
						 m_szItemID, m_nDocumentNo, nOID, m_nRefIndex);*/

			szSQL.Format(_T("UPDATE hms_pharmaorder SET hpo_refitem_id='%s' ") \
						 _T("WHERE hpo_docno=%ld AND hpo_orderid=%ld AND hpo_reference_id=%ld"),
						 m_szItemID, m_nDocumentNo, nOID, m_nRefIndex);

			pMF->ExecSQL(szSQL);

			/*szSQL.Format(_T("SELECT hpol_product_item_id AS id FROM hms_pharmaorderline ") \
				         _T("WHERE hpol_docno=%ld AND hpol_orderid=%ld"),
					     m_nDocumentNo, nOID);
			rs.ExecSQL(szSQL);

			while (!rs.IsEOF())
			{
				rs.GetValue(_T("id"), nProductID);
				szSQL.Format(_T("SELECT product_ispaid4 AS ispaid4 FROM m_productitem_view WHERE product_item_id=%ld"),
							 nProductID);
				rss.ExecSQL(szSQL);

				if (!rss.IsEOF())
				{
					if (rss.GetValue(_T("ispaid4")) == _T("Y"))
					{
						szSQL.Format(_T("UPDATE hms_pharmaorderline SET hpol_inoperation='Y' ") \
									 _T("WHERE hpol_docno=%ld AND hpol_orderid=%ld AND hpol_product_item_id=%ld"),
									 m_nDocumentNo, nOID, nProductID);
					}
					else
					{
						szSQL.Format(_T("UPDATE hms_pharmaorderline SET hpol_inoperation='N' ") \
									 _T("WHERE hpol_docno=%ld AND hpol_orderid=%ld AND hpol_product_item_id=%ld"),
									 m_nDocumentNo, nOID, nProductID);
					}
					pMF->ExecSQL(szSQL);
				}

				rs.MoveNext();
			}*/
		}
		else
		{
			/*szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_refitem_id='%s' ") \
						 _T("WHERE hpo_docno=%ld AND hpo_orderid=%ld AND hpo_reforder_id=%ld"),
						 m_szItemID, m_nDocumentNo, nOID, m_nRefIndex);*/
			szSQL.Format(_T("UPDATE hms_ipharmaorder SET hpo_refitem_id='%s' ") \
						 _T("WHERE hpo_docno=%ld AND hpo_orderid=%ld AND hpo_reference_id=%ld"),
						 m_szItemID, m_nDocumentNo, nOID, m_nRefIndex);

			pMF->ExecSQL(szSQL);

			/*szSQL.Format(_T("SELECT hpol_product_item_id AS id FROM hms_ipharmaorderline ") \
				     _T("WHERE hpol_docno=%ld AND hpol_orderid=%ld"),
					 m_nDocumentNo, nOID);
			rs.ExecSQL(szSQL);

			while (!rs.IsEOF())
			{
				rs.GetValue(_T("id"), nProductID);
				szSQL.Format(_T("SELECT product_ispaid4 AS ispaid4 FROM m_productitem_view WHERE product_item_id=%ld"),
							 nProductID);
				rss.ExecSQL(szSQL);

				if (!rss.IsEOF())
				{
					if (rss.GetValue(_T("ispaid4")) == _T("Y"))
					{
						szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_inoperation='Y' ") \
									 _T("WHERE hpol_docno=%ld AND hpol_orderid=%ld AND hpol_product_item_id=%ld"),
									 m_nDocumentNo, nOID, nProductID);
					}
					else
					{
						szSQL.Format(_T("UPDATE hms_ipharmaorderline SET hpol_inoperation='N' ") \
									 _T("WHERE hpol_docno=%ld AND hpol_orderid=%ld AND hpol_product_item_id=%ld"),
									 m_nDocumentNo, nOID, nProductID);
					}
					pMF->ExecSQL(szSQL);
				}

				rs.MoveNext();
			}*/
		}
	}

	CString szProductID = m_szDrugNameKey;

	SetMode(VM_ADDCHILD);
	((CHMSSurgeryDocument*)GetParent())->OnDrugListLoadData();
	((CHMSSurgeryDocument*)GetParent())->SetDrugFocus(szProductID);
	return m_nOrderID;
}
int CHMSSurgeryMaterialDrugDialog::OnCancelHMSSurgeryMaterialDrugDialog()
{
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
int CHMSSurgeryMaterialDrugDialog::OnHMSSurgeryMaterialDrugDialogListLoadData(){
	return 0;
}

BOOL CHMSSurgeryMaterialDrugDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE)
	{
		SendMessage(WM_CLOSE);
		return TRUE;
	}
	return CGuiView::PreTranslateMessage(pMsg);
}

void CHMSSurgeryMaterialDrugDialog::OnClose()
{
	((CHMSSurgeryDocument*)GetParent())->ShowInput(false);
	
}
#if _MSC_VER >= 1500
LRESULT CHMSSurgeryMaterialDrugDialog::OnNcHitTest(CPoint point)
{
	LRESULT ret =  CGuiView::OnNcHitTest(point);
	if (ret == HTCLOSE)
	{
		return HTCLOSE;
	}
	return HTNOWHERE;
}

#else
UINT CHMSSurgeryMaterialDrugDialog::OnNcHitTest(CPoint point)
{
	UINT ret =  CGuiView::OnNcHitTest(point);
	if (ret == HTCLOSE)
	{
		return HTCLOSE;
	}
	return HTNOWHERE;
}
#endif
