#include "HMSSetupRegimeFeeDialog.h"
#include "MainFrm.h"

/*static void _OnFoodAmountChangeFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnFoodAmountChange();
} */
/*static void _OnFoodAmountSetfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnFoodAmountSetfocus();} */ 
/*static void _OnFoodAmountKillfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnFoodAmountKillfocus();
} */
static int _OnFoodAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupRegimeFeeDialog *)pWnd)->OnFoodAmountCheckValue();
} 
/*static void _OnSalaryAmountChangeFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnSalaryAmountChange();
} */
/*static void _OnSalaryAmountSetfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnSalaryAmountSetfocus();} */ 
/*static void _OnSalaryAmountKillfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnSalaryAmountKillfocus();
} */
static int _OnSalaryAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupRegimeFeeDialog *)pWnd)->OnSalaryAmountCheckValue();
} 
/*static void _OnTransportAmountChangeFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnTransportAmountChange();
} */
/*static void _OnTransportAmountSetfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnTransportAmountSetfocus();} */ 
/*static void _OnTransportAmountKillfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnTransportAmountKillfocus();
} */
static int _OnTransportAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupRegimeFeeDialog *)pWnd)->OnTransportAmountCheckValue();
} 
/*static void _OnStampAmountChangeFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnStampAmountChange();
} */
/*static void _OnStampAmountSetfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnStampAmountSetfocus();} */ 
/*static void _OnStampAmountKillfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnStampAmountKillfocus();
} */
static int _OnStampAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupRegimeFeeDialog *)pWnd)->OnStampAmountCheckValue();
} 
/*static void _OnHolidayAmountChangeFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnHolidayAmountChange();
} */
/*static void _OnHolidayAmountSetfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnHolidayAmountSetfocus();} */ 
/*static void _OnHolidayAmountKillfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnHolidayAmountKillfocus();
} */
static int _OnHolidayAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupRegimeFeeDialog *)pWnd)->OnHolidayAmountCheckValue();
} 
/*static void _OnOtherAmountChangeFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnOtherAmountChange();
} */
/*static void _OnOtherAmountSetfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnOtherAmountSetfocus();} */ 
/*static void _OnOtherAmountKillfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnOtherAmountKillfocus();
} */
static int _OnOtherAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupRegimeFeeDialog *)pWnd)->OnOtherAmountCheckValue();
}
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSSetupRegimeFeeDialog *)pWnd)->OnNoteCheckValue();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSSetupRegimeFeeDialog *pVw = (CHMSSetupRegimeFeeDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSSetupRegimeFeeDialog *pVw = (CHMSSetupRegimeFeeDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSSetupRegimeFeeDialog *pVw = (CHMSSetupRegimeFeeDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSSetupRegimeFeeDialog *pVw = (CHMSSetupRegimeFeeDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSSetupRegimeFeeDialog *pVw = (CHMSSetupRegimeFeeDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSSetupRegimeFeeDialog *pVw = (CHMSSetupRegimeFeeDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSetupRegimeFeeDialog *pVw = (CHMSSetupRegimeFeeDialog *)pWnd;
	pVw->OnCloseSelect();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSSetupRegimeFeeDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSSetupRegimeFeeDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSSetupRegimeFeeDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSSetupRegimeFeeDialog*)pWnd)->OnListDeleteItem();
}
static int _OnAddHMSSetupRegimeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupRegimeFeeDialog*)pWnd)->OnAddHMSSetupRegimeFeeDialog();
} 
static int _OnEditHMSSetupRegimeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupRegimeFeeDialog*)pWnd)->OnEditHMSSetupRegimeFeeDialog();
} 
static int _OnDeleteHMSSetupRegimeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupRegimeFeeDialog*)pWnd)->OnDeleteHMSSetupRegimeFeeDialog();
} 
static int _OnSaveHMSSetupRegimeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupRegimeFeeDialog*)pWnd)->OnSaveHMSSetupRegimeFeeDialog();
} 
static int _OnCancelHMSSetupRegimeFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSSetupRegimeFeeDialog*)pWnd)->OnCancelHMSSetupRegimeFeeDialog();
} 
CHMSSetupRegimeFeeDialog::CHMSSetupRegimeFeeDialog(CWnd *pParent):
	CGuiDialog(pParent)
{
	m_nDlgWidth = 785;
	m_nDlgHeight = 325;
	SetDefaultValues();
	m_szDischarge = _T("N");
}
CHMSSetupRegimeFeeDialog::~CHMSSetupRegimeFeeDialog(){
}
void CHMSSetupRegimeFeeDialog::OnCreateComponents()
{
	//m_wndRegimeFeeInfo.Create(this, _T("Regime Fee Information"), 5, 5, 490, 120);
	//m_wndFoodAmountLabel.Create(this, _T("Food Amount"), 10, 30, 115, 55);
	//m_wndFoodAmount.Create(this,120, 30, 245, 55); 
	//m_wndSalaryAmountLabel.Create(this, _T("Salary Amount"), 250, 30, 355, 55);
	//m_wndSalaryAmount.Create(this,360, 30, 485, 55); 
	//m_wndTransportAmountLabel.Create(this, _T("Transport Amount"), 10, 60, 115, 85);
	//m_wndTransportAmount.Create(this,120, 60, 245, 85); 
	//m_wndStampAmountLabel.Create(this, _T("Stamp Amount"), 250, 60, 355, 85);
	//m_wndStampAmount.Create(this,360, 60, 485, 85); 
	//m_wndHolidayAmountLabel.Create(this, _T("Holiday Amount"), 10, 90, 115, 115);
	//m_wndHolidayAmount.Create(this,120, 90, 245, 115); 
	//m_wndOtherAmountLabel.Create(this, _T("Other Amount"), 250, 90, 355, 115);
	//m_wndOtherAmount.Create(this,360, 90, 485, 115); 
	////m_wndUpdate.Create(this, _T("&Update"), 155, 125, 235, 150);//240, 125, 320, 150
	//m_wndSave.Create(this, _T("&Save"), 325, 125, 405, 150);
	////m_wndCancel.Create(this, _T("&Cancel"), 325, 125, 405, 150);
	//m_wndClose.Create(this, _T("&Close"), 410, 125, 490, 150);

	m_wndRegimeFeeInfo.Create(this, _T("Regime Fee Information"), 5, 5, 775, 285);
	m_wndSalaryAmountLabel.Create(this, _T("Salary Amount"), 10, 195, 120, 220);
	m_wndSalaryAmount.Create(this,125, 195, 260, 220); 
	m_wndTransportAmountLabel.Create(this, _T("Transport Amount"), 265, 195, 375, 220);
	m_wndTransportAmount.Create(this,380, 195, 515, 220); 
	m_wndStampAmountLabel.Create(this, _T("Stamp Amount"), 520, 195, 630, 220);
	m_wndStampAmount.Create(this,635, 195, 770, 220); 
	m_wndHolidayAmountLabel.Create(this, _T("Holiday Amount"), 10, 225, 120, 250);
	m_wndHolidayAmount.Create(this,125, 225, 260, 250); 
	m_wndOtherAmountLabel.Create(this, _T("Other Amount"), 265, 225, 375, 250);
	m_wndOtherAmount.Create(this,380, 225, 515, 250); 
	m_wndFoodAmountLabel.Create(this, _T("\x43\x1EA5p ti\x1EC1n \x103n"), 520, 225, 630, 250);
	m_wndFoodAmount.Create(this,635, 225, 770, 250);
	m_wndNoteLabel.Create(this, _T("Note"), 10, 255, 120, 280);
	m_wndNote.Create(this,125, 255, 770, 280);
	m_wndAdd.Create(this, _T("&Add"), 270, 290, 350, 315);
	m_wndEdit.Create(this, _T("&Edit"), 355, 290, 435, 315);
	m_wndDelete.Create(this, _T("&Delete"), 440, 290, 520, 315);
	m_wndSave.Create(this, _T("&Save"), 525, 290, 605, 315);
	m_wndCancel.Create(this, _T("&Cancel"), 610, 290, 690, 315);
	m_wndClose.Create(this, _T("&Close"), 695, 290, 775, 315);
	m_wndList.Create(this,10, 30, 770, 190);
}
void CHMSSetupRegimeFeeDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndFoodAmount.SetLimitText(16);
	m_wndFoodAmount.SetCurrencyFormat(TRUE);
//	m_wndFoodAmount.SetReadOnly(TRUE);
	//m_wndFoodAmount.SetCheckValue(true);
	m_wndSalaryAmount.SetLimitText(16);
	m_wndSalaryAmount.SetCurrencyFormat(TRUE);
	//m_wndSalaryAmount.SetCheckValue(true);
	m_wndTransportAmount.SetLimitText(16);
	m_wndTransportAmount.SetCurrencyFormat(TRUE);
	//m_wndTransportAmount.SetCheckValue(true);
	m_wndStampAmount.SetLimitText(16);
	m_wndStampAmount.SetCurrencyFormat(TRUE);
	//m_wndStampAmount.SetCheckValue(true);
	m_wndHolidayAmount.SetLimitText(16);
	m_wndHolidayAmount.SetCurrencyFormat(TRUE);
	//m_wndHolidayAmount.SetCheckValue(true);
	m_wndOtherAmount.SetLimitText(16);
	m_wndOtherAmount.SetCurrencyFormat(TRUE);
	//m_wndOtherAmount.SetCheckValue(true);
	m_wndNote.SetLimitText(512);
	//m_wndNote.SetCheckValue(true);


	m_wndList.InsertColumn(0, _T("Number"), CFMT_NUMBER, 45);
	m_wndList.InsertColumn(1, _T("Salary Amount"), CFMT_MONEY, 95);
	m_wndList.InsertColumn(2, _T("Transport Amount"), CFMT_MONEY, 95);
	m_wndList.InsertColumn(3, _T("Stamp Amount"), CFMT_MONEY, 95);
	m_wndList.InsertColumn(4, _T("Holiday Amount"), CFMT_MONEY, 95);
	m_wndList.InsertColumn(5, _T("\x43\x1EA5p ti\x1EC1n \x103n"), CFMT_MONEY, 95);
	m_wndList.InsertColumn(6, _T("Other Amount"), CFMT_MONEY, 95);
	m_wndList.InsertColumn(7, _T("Total Amount"), CFMT_MONEY, 120);
	m_wndList.InsertColumn(8, _T("FeeID"), CFMT_NUMBER, 0);

	m_hms_fee_soldTbl.SetTableName(_T("hms_fee_sold"));
	m_hms_fee_soldTbl.AddField(_T("HFE_CREATEDBY"), dfText, 20); 
	m_hms_fee_soldTbl.AddField(_T("HFE_CREATEDDATE"), dfDateTime); 
	m_hms_fee_soldTbl.AddField(_T("HFE_UPDATEDBY"), dfText, 20); 
	m_hms_fee_soldTbl.AddField(_T("HFE_UPDATEDDATE"), dfDateTime); 
	//m_hms_fee_soldTbl.AddField(_T("HFE_FEE_ID"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_DEPTID"), dfText, 7);
	m_hms_fee_soldTbl.AddField(_T("HFE_REFIDX"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_PATIENTNO"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_DOCNO"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_INVOICENO"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_DATE"), dfDateTime); 
	//m_hms_fee_soldTbl.AddField(_T("HFE_LOCKED"), dfText, 1); 
	//m_hms_fee_soldTbl.AddField(_T("HFE_LOCKEDDATE"), dfDateTime); 
	m_hms_fee_soldTbl.AddField(_T("HFE_STAFF"), dfText, 20); 
	m_hms_fee_soldTbl.AddField(_T("HFE_SALARY_AMOUNT"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_TRAIN_AMOUNT"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_EAT_AMOUNT"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_STAMP_AMOUNT"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_HOLIDAY_AMOUNT"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_OTHER_AMOUNT"), dfLong); 
	m_hms_fee_soldTbl.AddField(_T("HFE_TOTAL_AMOUNT"), dfLong);
	m_hms_fee_soldTbl.AddField(_T("HFE_NOTE"), dfText, 512); 

}
void CHMSSetupRegimeFeeDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFoodAmount.SetEvent(WE_CHANGE, _OnFoodAmountChangeFnc);
	//m_wndFoodAmount.SetEvent(WE_SETFOCUS, _OnFoodAmountSetfocusFnc);
	//m_wndFoodAmount.SetEvent(WE_KILLFOCUS, _OnFoodAmountKillfocusFnc);
	m_wndFoodAmount.SetEvent(WE_CHECKVALUE, _OnFoodAmountCheckValueFnc);
	//m_wndSalaryAmount.SetEvent(WE_CHANGE, _OnSalaryAmountChangeFnc);
	//m_wndSalaryAmount.SetEvent(WE_SETFOCUS, _OnSalaryAmountSetfocusFnc);
	//m_wndSalaryAmount.SetEvent(WE_KILLFOCUS, _OnSalaryAmountKillfocusFnc);
	m_wndSalaryAmount.SetEvent(WE_CHECKVALUE, _OnSalaryAmountCheckValueFnc);
	//m_wndTransportAmount.SetEvent(WE_CHANGE, _OnTransportAmountChangeFnc);
	//m_wndTransportAmount.SetEvent(WE_SETFOCUS, _OnTransportAmountSetfocusFnc);
	//m_wndTransportAmount.SetEvent(WE_KILLFOCUS, _OnTransportAmountKillfocusFnc);
	m_wndTransportAmount.SetEvent(WE_CHECKVALUE, _OnTransportAmountCheckValueFnc);
	//m_wndStampAmount.SetEvent(WE_CHANGE, _OnStampAmountChangeFnc);
	//m_wndStampAmount.SetEvent(WE_SETFOCUS, _OnStampAmountSetfocusFnc);
	//m_wndStampAmount.SetEvent(WE_KILLFOCUS, _OnStampAmountKillfocusFnc);
	m_wndStampAmount.SetEvent(WE_CHECKVALUE, _OnStampAmountCheckValueFnc);
	//m_wndHolidayAmount.SetEvent(WE_CHANGE, _OnHolidayAmountChangeFnc);
	//m_wndHolidayAmount.SetEvent(WE_SETFOCUS, _OnHolidayAmountSetfocusFnc);
	//m_wndHolidayAmount.SetEvent(WE_KILLFOCUS, _OnHolidayAmountKillfocusFnc);
	m_wndHolidayAmount.SetEvent(WE_CHECKVALUE, _OnHolidayAmountCheckValueFnc);
	//m_wndOtherAmount.SetEvent(WE_CHANGE, _OnOtherAmountChangeFnc);
	//m_wndOtherAmount.SetEvent(WE_SETFOCUS, _OnOtherAmountSetfocusFnc);
	//m_wndOtherAmount.SetEvent(WE_KILLFOCUS, _OnOtherAmountKillfocusFnc);
	m_wndOtherAmount.SetEvent(WE_CHECKVALUE, _OnOtherAmountCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);

	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	
	SetMode(VM_NONE);

	GetDataToScreen();

	OnListLoadData();
	if (m_wndList.GetItemCount() > 0)
	{
		m_wndList.SetCurSel(0);
	}
	

}
void CHMSSetupRegimeFeeDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_Text(pDX, m_wndFoodAmount.GetDlgCtrlID(), m_nFoodAmount);
	DDX_Text(pDX, m_wndSalaryAmount.GetDlgCtrlID(), m_nSalaryAmount);
	DDX_Text(pDX, m_wndTransportAmount.GetDlgCtrlID(), m_nTransportAmount);
	DDX_Text(pDX, m_wndStampAmount.GetDlgCtrlID(), m_nStampAmount);
	DDX_Text(pDX, m_wndHolidayAmount.GetDlgCtrlID(), m_nHolidayAmount);
	DDX_Text(pDX, m_wndOtherAmount.GetDlgCtrlID(), m_nOtherAmount);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
}
void CHMSSetupRegimeFeeDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_fee_sold WHERE hfe_fee_id=%ld"), m_nFeeID);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		//rs.GetValue(_T("HFE_FEE_ID"), m_nFeeID);
		rs.GetValue(_T("HFE_SALARY_AMOUNT"), m_nSalaryAmount);
		rs.GetValue(_T("HFE_TRAIN_AMOUNT"), m_nTransportAmount);
		rs.GetValue(_T("HFE_STAMP_AMOUNT"), m_nStampAmount);
		rs.GetValue(_T("HFE_HOLIDAY_AMOUNT"), m_nHolidayAmount);
		rs.GetValue(_T("HFE_OTHER_AMOUNT"), m_nOtherAmount);
		rs.GetValue(_T("HFE_EAT_AMOUNT"), m_nFoodAmount);
		rs.GetValue(_T("HFE_NOTE"), m_szNote);

		SetMode(VM_VIEW);
	}

	szSQL.Format(_T("SELECT hcrf_acceptedfee FROM hms_clinical_record WHERE hcr_docno = %ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hcrf_acceptedfee"), m_szDischarge);
//Kiem tra neu da thanh toan ra vien thi khong cho phep them, sua nua

	if(m_szDischarge == _T("P"))
	{
		m_wndAdd.EnableWindow(FALSE);
		m_wndEdit.EnableWindow(FALSE);
		m_wndDelete.EnableWindow(FALSE);

	}
}
void CHMSSetupRegimeFeeDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szDeptID;
	int nIdx;

	m_nTotalCost = 0;

	m_hms_fee_soldTbl.SetValue(_T("HFE_CREATEDBY"), pMF->GetCurrentUser()); 
	m_hms_fee_soldTbl.SetValue(_T("HFE_CREATEDDATE"), pMF->GetSysDateTime()); 
	m_hms_fee_soldTbl.SetValue(_T("HFE_UPDATEDBY"), pMF->GetCurrentUser()); 
	m_hms_fee_soldTbl.SetValue(_T("HFE_UPDATEDDATE"), pMF->GetSysDateTime()); 

	
	szSQL.Format(_T("SELECT max(htr_idx) AS Idx FROM hms_treatment_record WHERE htr_docno=%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("Idx"), nIdx);

		szSQL.Format(_T("SELECT htr_deptid AS DeptID FROM hms_treatment_record WHERE htr_docno=%ld AND htr_idx=%d"),
				        m_nDocumentNo, nIdx);
		rss.ExecSQL(szSQL);

		if (!rss.IsEOF())
		{
			rss.GetValue(_T("DeptID"), szDeptID);
		}

		m_hms_fee_soldTbl.SetValue(_T("HFE_DEPTID"), szDeptID);
		m_hms_fee_soldTbl.SetValue(_T("HFE_REFIDX"), nIdx);
	}


	m_hms_fee_soldTbl.SetValue(_T("HFE_PATIENTNO"), m_nPatientNo); 
	m_hms_fee_soldTbl.SetValue(_T("HFE_DOCNO"), m_nDocumentNo);
	m_hms_fee_soldTbl.SetValue(_T("HFE_INVOICENO"), m_nInvoiceNo);
	
	m_hms_fee_soldTbl.SetValue(_T("HFE_DATE"), m_szDate); 
	
	m_hms_fee_soldTbl.SetValue(_T("HFE_STAFF"), m_szStaff); 

	m_hms_fee_soldTbl.SetValue(_T("HFE_SALARY_AMOUNT"), m_nSalaryAmount);
	m_hms_fee_soldTbl.SetValue(_T("HFE_TRAIN_AMOUNT"), m_nTransportAmount);
	m_hms_fee_soldTbl.SetValue(_T("HFE_EAT_AMOUNT"), m_nFoodAmount);
	m_hms_fee_soldTbl.SetValue(_T("HFE_STAMP_AMOUNT"), m_nStampAmount);
	m_hms_fee_soldTbl.SetValue(_T("HFE_HOLIDAY_AMOUNT"), m_nHolidayAmount);
	m_hms_fee_soldTbl.SetValue(_T("HFE_OTHER_AMOUNT"), m_nOtherAmount);

	m_nTotalCost = m_nSalaryAmount + m_nTransportAmount + m_nFoodAmount 
		           + m_nStampAmount + m_nHolidayAmount + m_nOtherAmount;

	m_hms_fee_soldTbl.SetValue(_T("HFE_TOTAL_AMOUNT"), m_nTotalCost);
	m_hms_fee_soldTbl.SetValue(_T("HFE_NOTE"), m_szNote);

}
void CHMSSetupRegimeFeeDialog::SetDefaultValues()
{

	//m_nFeeID = 0;
	m_nFoodAmount=0;
	m_nSalaryAmount=0;
	m_nTransportAmount=0;
	m_nStampAmount=0;
	m_nHolidayAmount=0;
	m_nOtherAmount=0;
	m_szNote.Empty();

}
int CHMSSetupRegimeFeeDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
			m_wndSalaryAmount.SetFocus();
			m_wndSalaryAmount.SetSel(m_wndSalaryAmount.GetWindowTextLength(),
				                     m_wndSalaryAmount.GetWindowTextLength()); 
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndSalaryAmount.SetFocus();
			m_wndSalaryAmount.SetSel(m_wndSalaryAmount.GetWindowTextLength(),
				                     m_wndSalaryAmount.GetWindowTextLength());
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, 2, 5,  -1);
			m_wndClose.EnableWindow(TRUE);
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
/*void CHMSSetupRegimeFeeDialog::OnFoodAmountChange(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnFoodAmountSetfocus(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnFoodAmountKillfocus(){
	
} */
int CHMSSetupRegimeFeeDialog::OnFoodAmountCheckValue(){
	return 0;
} 
/*void CHMSSetupRegimeFeeDialog::OnSalaryAmountChange(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnSalaryAmountSetfocus(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnSalaryAmountKillfocus(){
	
} */
int CHMSSetupRegimeFeeDialog::OnSalaryAmountCheckValue(){
	return 0;
} 
/*void CHMSSetupRegimeFeeDialog::OnTransportAmountChange(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnTransportAmountSetfocus(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnTransportAmountKillfocus(){
	
} */
int CHMSSetupRegimeFeeDialog::OnTransportAmountCheckValue(){
	return 0;
} 
/*void CHMSSetupRegimeFeeDialog::OnStampAmountChange(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnStampAmountSetfocus(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnStampAmountKillfocus(){
	
} */
int CHMSSetupRegimeFeeDialog::OnStampAmountCheckValue(){
	return 0;
} 
/*void CHMSSetupRegimeFeeDialog::OnHolidayAmountChange(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnHolidayAmountSetfocus(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnHolidayAmountKillfocus(){
	
} */
int CHMSSetupRegimeFeeDialog::OnHolidayAmountCheckValue(){
	return 0;
} 
/*void CHMSSetupRegimeFeeDialog::OnOtherAmountChange(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnOtherAmountSetfocus(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnOtherAmountKillfocus(){
	
} */
int CHMSSetupRegimeFeeDialog::OnOtherAmountCheckValue(){
	return 0;
}
/*void CHMSSetupRegimeFeeDialog::OnNoteChange(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnNoteSetfocus(){
	
} */
/*void CHMSSetupRegimeFeeDialog::OnNoteKillfocus(){
	
} */
int CHMSSetupRegimeFeeDialog::OnNoteCheckValue(){
	return 0;
}
void CHMSSetupRegimeFeeDialog::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
}
/*
void CHMSSetupRegimeFeeDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSSetupRegimeFeeDialog();
} 
void CHMSSetupRegimeFeeDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_ADD);
}*/
void CHMSSetupRegimeFeeDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSSetupRegimeFeeDialog();
} 
void CHMSSetupRegimeFeeDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSSetupRegimeFeeDialog();
} 
void CHMSSetupRegimeFeeDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSSetupRegimeFeeDialog();
} 
void CHMSSetupRegimeFeeDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSSetupRegimeFeeDialog();
} 
void CHMSSetupRegimeFeeDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSSetupRegimeFeeDialog();
}
void CHMSSetupRegimeFeeDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
}
void CHMSSetupRegimeFeeDialog::OnListDblClick(){
	
} 
void CHMSSetupRegimeFeeDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nFeeID = str2long(m_wndList.GetItemText(nNewItem, 8));
	GetDataToScreen();
} 
int CHMSSetupRegimeFeeDialog::OnListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSSetupRegimeFeeDialog();
	return 0;
} 
long CHMSSetupRegimeFeeDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" select hd_docno as docno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hcr_recordno as recordno,") \
				_T("        hfe_train_amount as trainamt,") \
				_T("        hfe_holiday_amount as holidayamt,") \
				_T("        hfe_salary_amount as salaryamt,") \
				_T("        hfe_stamp_amount as stampamt,") \
				_T("        hfe_other_amount as otheramt,") \
				_T("        s.hfe_eat_amount as eatamt,") \
				_T("        hfe_total_amount as amount,") \
				_T("        hfe_fee_id as feeid") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_clinical_record on(hcr_docno=hd_docno)") \
				_T(" left join hms_fee_sold s on(hfe_docno=hd_docno)") \
				_T(" where hfe_docno=%ld  ") \
				_T(" order by hfe_fee_id"), m_nDocumentNo);


	nCount = rs.ExecSQL(szSQL);

	int nIndex = 1;
	CString tmpStr;

	while(!rs.IsEOF())
	{ 
		tmpStr.Format(_T("%d"), nIndex++);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("salaryamt")), 
			rs.GetValue(_T("trainamt")),
			rs.GetValue(_T("stampamt")),
			rs.GetValue(_T("holidayamt")),
			rs.GetValue(_T("eatamt")),
			rs.GetValue(_T("otheramt")),
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("feeid")), NULL);

		rs.GetValue(_T("eatamount"), m_nFoodAmount);
		rs.MoveNext();
		
	}
	m_wndList.EndLoad(); 
	return nCount;
}
int CHMSSetupRegimeFeeDialog::OnAddHMSSetupRegimeFeeDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
	if(m_szDischarge == _T("P"))
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 th\x61nh to\xE1n r\x61 vi\x1EC7n. Kh\xF4ng \x63ho ph\xE9p s\x1EED\x61"));
		return 0;
	}
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSetupRegimeFeeDialog::OnEditHMSSetupRegimeFeeDialog()
{
 	if(GetMode() != VM_VIEW)
 		return -1;

	if(m_szDischarge == _T("P"))
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 th\x61nh to\xE1n r\x61 vi\x1EC7n. Kh\xF4ng \x63ho ph\xE9p s\x1EED\x61"));
		return 0;
	}

 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSetupRegimeFeeDialog::OnDeleteHMSSetupRegimeFeeDialog()
{
 	if (GetMode() != VM_VIEW)
 		return -1;


	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
		return -2;
 	
	

	if(m_szDischarge == _T("P"))
	{
		ShowMessageBox(_T("\x42\x1EC7nh nh\xE2n \x111\xE3 th\x61nh to\xE1n r\x61 vi\x1EC7n. Kh\xF4ng \x63ho ph\xE9p s\x1EED\x61"));
		return 0;
	}

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if (ShowMessage(1, MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON2) == IDNO)
 		return -1;
	szSQL.Format(_T("DELETE FROM hms_fee_sold WHERE hfe_fee_id=%ld"), m_nFeeID);
 	int ret = pMF->ExecSQL(szSQL);
 	if (ret >= 0)
	{
 		//SetMode(VM_NONE);
 		//OnCancelHMSSetupRegimeFeeDialog();
		OnListLoadData();

		if (m_wndList.GetItemCount() > 0)
		{
			if (nSel == 0)
				m_wndList.SetCurSel(0);
			else
				m_wndList.SetCurSel(nSel - 1);
		}
		else
		{
			SetMode(VM_NONE);
			m_wndAdd.SetFocus();
		}
 	}
	return 0;
}
int CHMSSetupRegimeFeeDialog::OnSaveHMSSetupRegimeFeeDialog()
{
 	if (GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if (!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	bool bAdd = true;
	if (GetMode() == VM_ADD)
	{
		bAdd = true;
 		szSQL = m_hms_fee_soldTbl.GetInsertSQL();
		//MessageBox(szSQL);
 	}
 	else if (GetMode() == VM_EDIT)
	{
 		CString szWhere;
		m_nFeeID = str2long(m_wndList.GetItemText(m_wndList.GetCurSel(), 8));
		szWhere.Format(_T(" WHERE hfe_fee_id=%ld "), m_nFeeID);
 		szSQL = m_hms_fee_soldTbl.GetUpdateSQL(_T("HFE_CREATEDBY, HFE_CREATEDDATE, HFE_DOCNO, HFE_INVOICENO"));
 		szSQL += szWhere;
 	}
	//_fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSSetupRegimeFeeDialogListLoadData();
		//GetDataToScreen();
		//EnableButtons(TRUE, 0, 3, -1);
		OnListLoadData();
		m_wndList.SetCurSel(m_wndList.GetItemCount() - 1);
		if (bAdd)
			m_wndAdd.SetFocus();
 	}
 	/*else
 	{
 	}*/
 	return ret;
 	//return 0;
}
int CHMSSetupRegimeFeeDialog::OnCancelHMSSetupRegimeFeeDialog()
{
 	if (GetMode() == VM_EDIT)
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
int CHMSSetupRegimeFeeDialog::OnHMSSetupRegimeFeeDialogListLoadData(){
	return 0;
}
