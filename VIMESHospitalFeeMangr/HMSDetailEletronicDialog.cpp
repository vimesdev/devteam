#include "HMSDetailEletronicDialog.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnPatternChangeFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnPatternChange();
} */
/*static void _OnPatternSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnPatternSetfocus();} */ 
/*static void _OnPatternKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnPatternKillfocus();
} */
static int _OnPatternCheckValueFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnPatternCheckValue();
} 
/*static void _OnNguoiPHChangeFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnNguoiPHChange();
} */
/*static void _OnNguoiPHSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnNguoiPHSetfocus();} */ 
/*static void _OnNguoiPHKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnNguoiPHKillfocus();
} */
static int _OnNguoiPHCheckValueFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnNguoiPHCheckValue();
} 
static void _OnStatusSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDetailEletronicDialog* )pWnd)->OnStatusSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStatusSelendokFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnStatusSelendok();
}
/*static void _OnStatusSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnStatusKillfocus();
}*/
/*static void _OnStatusKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnStatusKillfocus();
}*/
static long _OnStatusLoadDataFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnStatusLoadData();
}
/*static void _OnStatusAddNewFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnStatusAddNew();
}*/
/*static void _OnDatePHChangeFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnDatePHChange();
} */
/*static void _OnDatePHSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnDatePHSetfocus();} */ 
/*static void _OnDatePHKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnDatePHKillfocus();
} */
static int _OnDatePHCheckValueFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnDatePHCheckValue();
} 
/*static void _OnPrintCountChangeFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnPrintCountChange();
} */
/*static void _OnPrintCountSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnPrintCountSetfocus();} */ 
/*static void _OnPrintCountKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnPrintCountKillfocus();
} */
static int _OnPrintCountCheckValueFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnPrintCountCheckValue();
} 
/*static void _OnReceiptNoChangeFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnReceiptNoChange();
} */
/*static void _OnReceiptNoSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnReceiptNoSetfocus();} */ 
/*static void _OnReceiptNoKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnReceiptNoKillfocus();
} */
static int _OnReceiptNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnReceiptNoCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnAddressChangeFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnAddressChange();
} */
/*static void _OnAddressSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnAddressSetfocus();} */ 
/*static void _OnAddressKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnAddressKillfocus();
} */
static int _OnAddressCheckValueFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnAddressCheckValue();
} 
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDetailEletronicDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDetailEletronicDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnPostSelectFnc(CWnd *pWnd){
	CHMSDetailEletronicDialog *pVw = (CHMSDetailEletronicDialog *)pWnd;
	pVw->OnPostSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDetailEletronicDialog *pVw = (CHMSDetailEletronicDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSDetailEletronicDialog *pVw = (CHMSDetailEletronicDialog *)pWnd;
	pVw->OnEditSelect();
} 
/*static void _OnSerialChangeFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnSerialChange();
} */
/*static void _OnSerialSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnSerialSetfocus();} */ 
/*static void _OnSerialKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnSerialKillfocus();
} */
static int _OnSerialCheckValueFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnSerialCheckValue();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSDetailEletronicDialog *pVw = (CHMSDetailEletronicDialog *)pWnd;
	pVw->OnPrintSelect();
} 
/*static void _OnBuyerChangeFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnBuyerChange();
} */
/*static void _OnBuyerSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnBuyerSetfocus();} */ 
/*static void _OnBuyerKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnBuyerKillfocus();
} */
static int _OnBuyerCheckValueFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnBuyerCheckValue();
} 
/*static void _OnCusTaxCodeChangeFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnCusTaxCodeChange();
} */
/*static void _OnCusTaxCodeSetfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnCusTaxCodeSetfocus();} */ 
/*static void _OnCusTaxCodeKillfocusFnc(CWnd *pWnd){
	((CHMSDetailEletronicDialog *)pWnd)->OnCusTaxCodeKillfocus();
} */
static int _OnCusTaxCodeCheckValueFnc(CWnd *pWnd){
	return ((CHMSDetailEletronicDialog *)pWnd)->OnCusTaxCodeCheckValue();
} 
static void _OnCreateSelectFnc(CWnd *pWnd){
	CHMSDetailEletronicDialog *pVw = (CHMSDetailEletronicDialog *)pWnd;
	pVw->OnCreateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDetailEletronicDialog *pVw = (CHMSDetailEletronicDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSDetailEletronicDialog *pVw = (CHMSDetailEletronicDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddHMSDetailEletronicDialogFnc(CWnd *pWnd){
	 return ((CHMSDetailEletronicDialog*)pWnd)->OnAddHMSDetailEletronicDialog();
} 
static int _OnEditHMSDetailEletronicDialogFnc(CWnd *pWnd){
	 return ((CHMSDetailEletronicDialog*)pWnd)->OnEditHMSDetailEletronicDialog();
} 
static int _OnDeleteHMSDetailEletronicDialogFnc(CWnd *pWnd){
	 return ((CHMSDetailEletronicDialog*)pWnd)->OnDeleteHMSDetailEletronicDialog();
} 
static int _OnSaveHMSDetailEletronicDialogFnc(CWnd *pWnd){
	 return ((CHMSDetailEletronicDialog*)pWnd)->OnSaveHMSDetailEletronicDialog();
} 
static int _OnCancelHMSDetailEletronicDialogFnc(CWnd *pWnd){
	 return ((CHMSDetailEletronicDialog*)pWnd)->OnCancelHMSDetailEletronicDialog();
} 
CHMSDetailEletronicDialog::CHMSDetailEletronicDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 610;
	m_nDlgHeight = 373;
	m_szTitle = _T("Ho\xE1 \x111\x1A1n \x111i\x1EC7n t\x1EED");
	SetDefaultValues();
}
CHMSDetailEletronicDialog::~CHMSDetailEletronicDialog(){
}
void CHMSDetailEletronicDialog::OnCreateComponents(){
	m_wndDepositInformation.Create(this, _T("Th\xF4ng tin ho\xE1 \x111\x1A1n"), 5, 5, 600, 270);
	m_wndPatternLabel.Create(this, _T("M\x1EABu s\x1ED1"), 10, 30, 130, 55);
	m_wndPattern.Create(this,135, 30, 345, 55); 
	m_wndSerialLabel.Create(this, _T("Serial"), 350, 30, 470, 55);
	m_wndSerial.Create(this,475, 30, 595, 55); 
	m_wndNguoiPHLabel.Create(this, _T("Ng\x1B0\x1EDDi ph\xE1t h\xE0nh"), 10, 60, 130, 85);
	m_wndNguoiPH.Create(this,135, 60, 345, 85); 
	m_wndStatusLabel.Create(this, _T("Status"), 350, 60, 470, 85);
	m_wndStatus.Create(this,475, 60, 595, 85); 
	m_wndDatePHLabel.Create(this, _T("Ng\xE0y ph\xE1t h\xE0nh"), 10, 90, 130, 115);
	m_wndDatePH.Create(this,135, 90, 345, 115); 
	m_wndPrintCountLabel.Create(this, _T("S\x1ED1 l\x1EA7n in"), 350, 90, 470, 115);
	m_wndPrintCount.Create(this,475, 90, 595, 115); 
	m_wndReceiptNoLabel.Create(this, _T("Receipt No"), 10, 120, 130, 145);
	m_wndReceiptNo.Create(this,135, 120, 345, 145); 
	m_wndAmountLabel.Create(this, _T("Amount"), 350, 120, 470, 145);
	m_wndAmount.Create(this,475, 120, 595, 145); 		
	m_wndCusNameLabel.Create(this, _T("Patient Name"), 10, 150, 130, 175);
	m_wndCusName.Create(this,135, 150, 345, 175); 
	m_wndType.Create(this, _T(""), 350, 150, 600, 175);
	m_wndBuyerLabel.Create(this, _T("Buyer"), 10, 180, 130, 205);
	m_wndBuyer.Create(this,135, 180, 595, 205); 
	m_wndAddressLabel.Create(this, _T("Address"), 10, 210, 130, 235);
	m_wndAddress.Create(this,135, 210, 595, 235); 
	m_wndCusTaxCodeLabel.Create(this, _T("Cus Tax Code"), 10, 240, 130, 265);
	m_wndCusTaxCode.Create(this,135, 240, 345, 265); 
	m_wndDescription.Create(this, _T(""), 350, 240, 600, 265);
	

	m_wndCreate.Create(this, _T("&Create"), 5, 275, 95, 300);
	m_wndSave.Create(this, _T("&Save"), 100, 275, 190, 300);
	m_wndEdit.Create(this, _T("&Edit"), 195, 275, 285, 300);
	m_wndPost.Create(this, _T("&Post"), 320, 275, 410, 300);
	m_wndPrint.Create(this, _T("&Print"), 415, 275, 505, 300);
	m_wndClose.Create(this, _T("&Close"), 510, 275, 600, 300);	
	m_wndList.Create(this,5, 305, 600, 500); 

	m_wndDelete.Create(this, _T(""), 0, 0, 0, 0);
	m_wndDelete.ShowWindow(SW_HIDE);
	m_wndDelete.EnableWindow(FALSE);

}
void CHMSDetailEletronicDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPattern.SetLimitText(1024);
	m_wndPattern.SetCheckValue(true);
	m_wndNguoiPH.SetLimitText(1024);
	m_wndNguoiPH.SetCheckValue(true);
	m_wndStatus.SetCheckValue(true);
	m_wndStatus.LimitText(1024);
	m_wndDatePH.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndDatePH.SetCheckValue(true);
	m_wndPrintCount.SetLimitText(1024);
	m_wndPrintCount.SetCheckValue(true);
//	m_wndReceiptNo.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndReceiptNo.SetCheckValue(true);
	m_wndAmount.SetLimitText(1024);
	m_wndAmount.SetCheckValue(true);
	m_wndAmount.SetCurrencyFormat(true);
	m_wndAddress.SetLimitText(1024);
	m_wndAddress.SetCheckValue(true);
	m_wndSerial.SetLimitText(35);
	m_wndSerial.SetCheckValue(true);
	
	
	m_wndList.InsertColumn(0, _T("Date"), CFMT_DATETIME, 120);
	m_wndList.InsertColumn(1, _T("Key"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(2, _T("PKey"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(3, _T("Amount"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(4, _T("Patpaid"), CFMT_MONEY, 80);
	m_wndList.InsertColumn(5, _T("Pattern"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(6, _T("Serial"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(7, _T("Class"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(8, _T("DeptType"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Type"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(10, _T("RefKey"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(11, _T("Đã Post"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(12, _T("Thời gian In"), CFMT_TEXT, 150);
		
	m_hms_electronicTbl.SetTableName(_T("HMS_FEE_ELECTRONICLINE"));	
	m_hms_electronicTbl.AddField(_T("HFE_ORDERID"), dfInteger);
	m_hms_electronicTbl.AddField(_T("HFE_KEY"), dfDouble);
	m_hms_electronicTbl.AddField(_T("HFE_PKEY"), dfDouble);
	m_hms_electronicTbl.AddField(_T("HFE_STATUS"), dfText, 1);
	m_hms_electronicTbl.AddField(_T("HFE_CUSNAME"), dfText, 80);
	m_hms_electronicTbl.AddField(_T("HFE_BUYER"), dfText, 254);
	m_hms_electronicTbl.AddField(_T("HFE_CUSTAXCODE"), dfText, 15);
	m_hms_electronicTbl.AddField(_T("HFE_CUSADDRESS"), dfText, 254);
	m_hms_electronicTbl.AddField(_T("HFE_GET_PKEY_TIME"), dfDateTime);
}
void CHMSDetailEletronicDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPattern.SetEvent(WE_CHANGE, _OnPatternChangeFnc);
	//m_wndPattern.SetEvent(WE_SETFOCUS, _OnPatternSetfocusFnc);
	//m_wndPattern.SetEvent(WE_KILLFOCUS, _OnPatternKillfocusFnc);
	m_wndPattern.SetEvent(WE_CHECKVALUE, _OnPatternCheckValueFnc);
	//m_wndNguoiPH.SetEvent(WE_CHANGE, _OnNguoiPHChangeFnc);
	//m_wndNguoiPH.SetEvent(WE_SETFOCUS, _OnNguoiPHSetfocusFnc);
	//m_wndNguoiPH.SetEvent(WE_KILLFOCUS, _OnNguoiPHKillfocusFnc);
	m_wndNguoiPH.SetEvent(WE_CHECKVALUE, _OnNguoiPHCheckValueFnc);
	m_wndStatus.SetEvent(WE_SELENDOK, _OnStatusSelendokFnc);
	//m_wndStatus.SetEvent(WE_SETFOCUS, _OnStatusSetfocusFnc);
	//m_wndStatus.SetEvent(WE_KILLFOCUS, _OnStatusKillfocusFnc);
	m_wndStatus.SetEvent(WE_SELCHANGE, _OnStatusSelectChangeFnc);
	m_wndStatus.SetEvent(WE_LOADDATA, _OnStatusLoadDataFnc);
	//m_wndStatus.SetEvent(WE_ADDNEW, _OnStatusAddNewFnc);
	//m_wndDatePH.SetEvent(WE_CHANGE, _OnDatePHChangeFnc);
	//m_wndDatePH.SetEvent(WE_SETFOCUS, _OnDatePHSetfocusFnc);
	//m_wndDatePH.SetEvent(WE_KILLFOCUS, _OnDatePHKillfocusFnc);
	m_wndDatePH.SetEvent(WE_CHECKVALUE, _OnDatePHCheckValueFnc);
	//m_wndPrintCount.SetEvent(WE_CHANGE, _OnPrintCountChangeFnc);
	//m_wndPrintCount.SetEvent(WE_SETFOCUS, _OnPrintCountSetfocusFnc);
	//m_wndPrintCount.SetEvent(WE_KILLFOCUS, _OnPrintCountKillfocusFnc);
	m_wndPrintCount.SetEvent(WE_CHECKVALUE, _OnPrintCountCheckValueFnc);
	//m_wndReceiptNo.SetEvent(WE_CHANGE, _OnReceiptNoChangeFnc);
	//m_wndReceiptNo.SetEvent(WE_SETFOCUS, _OnReceiptNoSetfocusFnc);
	//m_wndReceiptNo.SetEvent(WE_KILLFOCUS, _OnReceiptNoKillfocusFnc);
	m_wndReceiptNo.SetEvent(WE_CHECKVALUE, _OnReceiptNoCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndAddress.SetEvent(WE_CHANGE, _OnAddressChangeFnc);
	//m_wndAddress.SetEvent(WE_SETFOCUS, _OnAddressSetfocusFnc);
	//m_wndAddress.SetEvent(WE_KILLFOCUS, _OnAddressKillfocusFnc);
	m_wndAddress.SetEvent(WE_CHECKVALUE, _OnAddressCheckValueFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndPost.SetEvent(WE_CLICK, _OnPostSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	//m_wndSerial.SetEvent(WE_CHANGE, _OnSerialChangeFnc);
	//m_wndSerial.SetEvent(WE_SETFOCUS, _OnSerialSetfocusFnc);
	//m_wndSerial.SetEvent(WE_KILLFOCUS, _OnSerialKillfocusFnc);
	m_wndSerial.SetEvent(WE_CHECKVALUE, _OnSerialCheckValueFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	//m_wndBuyer.SetEvent(WE_CHANGE, _OnBuyerChangeFnc);
	//m_wndBuyer.SetEvent(WE_SETFOCUS, _OnBuyerSetfocusFnc);
	//m_wndBuyer.SetEvent(WE_KILLFOCUS, _OnBuyerKillfocusFnc);
	m_wndBuyer.SetEvent(WE_CHECKVALUE, _OnBuyerCheckValueFnc);
	//m_wndCusTaxCode.SetEvent(WE_CHANGE, _OnCusTaxCodeChangeFnc);
	//m_wndCusTaxCode.SetEvent(WE_SETFOCUS, _OnCusTaxCodeSetfocusFnc);
	//m_wndCusTaxCode.SetEvent(WE_KILLFOCUS, _OnCusTaxCodeKillfocusFnc);
	m_wndCusTaxCode.SetEvent(WE_CHECKVALUE, _OnCusTaxCodeCheckValueFnc);
	
	m_wndCreate.SetEvent(WE_CLICK, _OnCreateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);

	SetWindowFont(&m_wndDescription, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndDescription.SetTextColor(RGB(0, 0, 255));

	SetWindowFont(&m_wndType, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndType.SetTextColor(RGB(0, 0, 255));

	m_wndAmount.SetCurrencyFormat(true);
	SetWindowFont(&m_wndAmount, GetFaceName(), GetFaceSize()+2, TRUE);
	m_wndAmount.SetTextColor(RGB(0, 0, 255));

	SetMode(VM_NONE);
	OnListLoadData();

}
void CHMSDetailEletronicDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPattern.GetDlgCtrlID(), m_szPattern);
	DDX_Text(pDX, m_wndSerial.GetDlgCtrlID(), m_szSerial);
	DDX_Text(pDX, m_wndNguoiPH.GetDlgCtrlID(), m_szNguoiPH);
	DDX_Text(pDX, m_wndStatus.GetDlgCtrlID(), m_szStatusKey);	
	DDX_TextEx(pDX, m_wndDatePH.GetDlgCtrlID(), m_szDatePH);
	DDX_Text(pDX, m_wndPrintCount.GetDlgCtrlID(), m_nPrintCount);
	DDX_TextEx(pDX, m_wndReceiptNo.GetDlgCtrlID(), m_szReceiptNo);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndCusName.GetDlgCtrlID(), m_szCusName);
	DDX_Text(pDX, m_wndAddress.GetDlgCtrlID(), m_szAddress);	
	DDX_Text(pDX, m_wndBuyer.GetDlgCtrlID(), m_szBuyer);
	DDX_Text(pDX, m_wndCusTaxCode.GetDlgCtrlID(), m_szCusTaxCode);
}
void CHMSDetailEletronicDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Pattern")] =  m_szPattern;
	m_jData[_T("NguoiPH")] =  m_szNguoiPH;
	m_jData[_T("Status")] =  m_szStatusKey;
	m_jData[_T("DatePH")] =  m_szDatePH;
	m_jData[_T("PrintCount")] =  m_nPrintCount;
	m_jData[_T("ReceiptNo")] =  m_szReceiptNo;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("Address")] =  m_szAddress;
	m_jData[_T("Serial")] =  m_szSerial;
	}
	else
	{
			
	m_jData[_T("Pattern")].GetValue(m_szPattern);
	m_jData[_T("NguoiPH")].GetValue(m_szNguoiPH);
	m_jData[_T("Status")].GetValue(m_szStatusKey);
	m_jData[_T("DatePH")].GetValue(m_szDatePH);
	m_jData[_T("PrintCount")].GetValue(m_nPrintCount);
	m_jData[_T("ReceiptNo")].GetValue(m_szReceiptNo);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("Address")].GetValue(m_szAddress);
	m_jData[_T("Serial")].GetValue(m_szSerial);
	}

}
void CHMSDetailEletronicDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	if(m_nKey <0)
		return;

	szSQL.Format(_T(" SELECT hfe_docno,") \
	_T("   hfe_date          AS posdate,") \
	_T("   hfe_patter        AS patter,") \
	_T("   hfe_serial        AS serial,") \
	_T("   hfe_key			 AS key,") \
	_T("   hfe_pkey			 AS pkey,") \
	_T("   hfe_status		 AS status, ") \
	_T("   hfe_class         AS depttype,") \
	_T("   hfe_desc          AS DESCS, ") \
	_T("   hfe_buyer         AS Buyer, ") \
	_T("   hfe_cusname       AS cusname, ") \
	_T("   hfe_custaxcode    AS custaxcode, ") \
	_T("   hfe_cusaddress    AS cusaddress, ") \
	_T("   hfe_print		 AS printcount, ") \
	_T("   hfe_printuser	 AS printuser, ") \
	_T("   hfe_payment  AS payment,") \
	_T("   hfe_patpaid  AS patpaid,") \
	_T("   hfe_amount   AS amount") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_docno =%ld AND hfe_key = %.0f") \
	_T(" ORDER BY hfe_key"), m_nDocumentNo, m_nKey);

	//_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	CString tmpStr;
	if(!rs.IsEOF()){
		rs.GetValue(_T("posdate"), m_szDatePH);
		rs.GetValue(_T("patter"), m_szPattern);
		rs.GetValue(_T("serial"), m_szSerial);
		rs.GetValue(_T("key"), m_szReceiptNo);
		rs.GetValue(_T("pkey"), m_nPkey);
		rs.GetValue(_T("patpaid"), m_nAmount);
		rs.GetValue(_T("status"), m_szStatusKey);
		rs.GetValue(_T("createdby"), m_szNguoiPH);
		rs.GetValue(_T("cusaddress"), m_szAddress);
		rs.GetValue(_T("Buyer"), m_szBuyer);
		rs.GetValue(_T("custaxcode"), m_szCusTaxCode);
		rs.GetValue(_T("cusname"), m_szCusName);
		rs.GetValue(_T("printcount"), m_nPrintCount);
	
		rs.GetValue(_T("DESCS"), tmpStr);
		m_wndType.SetWindowText(tmpStr);

		tmpStr.Empty();
		m_wndDescription.SetWindowText(tmpStr);
		if(m_nPrintCount > 0)
		{
			tmpStr.Format(_T("\x110\xE3 in ho\xE1 \x111\x1A1n [%s]"), rs.GetValue(_T("printuser")));
			m_wndDescription.SetWindowText(tmpStr);
		}

		
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);
}
void CHMSDetailEletronicDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	m_hms_electronicTbl.SetValue(_T("hfe_cusaddress"), m_szAddress); 
	m_hms_electronicTbl.SetValue(_T("hfe_Buyer"), m_szBuyer); 
	m_hms_electronicTbl.SetValue(_T("hfe_custaxcode"), m_szCusTaxCode); 
	m_hms_electronicTbl.SetValue(_T("hfe_cusname"), m_szCusName); 
	
}
void CHMSDetailEletronicDialog::SetDefaultValues(){

	m_szPattern.Empty();
	m_szNguoiPH.Empty();
	m_szStatusKey.Empty();
	m_szDatePH.Empty();
	m_nPrintCount=0;
	m_szReceiptNo.Empty();
	m_nAmount=0;
	m_szAddress.Empty();
	m_szSerial.Empty();
	m_szBuyer.Empty();
	m_szCusTaxCode.Empty();
	m_szCusName.Empty();

}
int CHMSDetailEletronicDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL, tmpStr;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, 2, 5, -1);
			//m_wndCusName.EnableWindow(TRUE);
			m_wndBuyer.EnableWindow(TRUE);
			m_wndCusTaxCode.EnableWindow(TRUE);
			m_wndAddress.EnableWindow(TRUE);
						
 			SetDefaultValues();

			m_wndBuyer.SetFocus();

			if(m_szCusName.IsEmpty())
				m_szCusName = pMF->m_wndPatientFee.m_szPatientName;

			if(m_szAddress.IsEmpty())
				m_szAddress = pMF->m_wndPatientFee.m_szAddress;

			szSQL.Format(_T("SELECT ") \
				_T("   hfe_buyer         AS Buyer, ") \
				_T("   hfe_cusname       AS cusname, ") \
				_T("   hfe_custaxcode    AS custaxcode, ") \
				_T("   hfe_cusaddress    AS cusaddress ") \
				_T(" FROM HMS_FEE_ELECTRONICLINE") \
				_T(" WHERE hfe_docno =%ld AND rownum =1"), m_nDocumentNo);
			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{				
				rs.GetValue(_T("cusaddress"), m_szAddress);
				rs.GetValue(_T("Buyer"), m_szBuyer);
				rs.GetValue(_T("custaxcode"), m_szCusTaxCode);
				rs.GetValue(_T("cusname"), m_szCusName);
			}
			
			TranslateString(_T("&Cancel"), tmpStr);
			m_wndEdit.SetWindowText(tmpStr);

 			break;
 		case VM_EDIT: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, 2, 5, -1);
			//m_wndCusName.EnableWindow(TRUE);
			m_wndBuyer.EnableWindow(TRUE);
			m_wndCusTaxCode.EnableWindow(TRUE);
			m_wndAddress.EnableWindow(TRUE);
			TranslateString(_T("&Cancel"), tmpStr);
			m_wndEdit.SetWindowText(tmpStr);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, -1);
			TranslateString(_T("&Edit"), tmpStr);
			m_wndEdit.SetWindowText(tmpStr);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 5, -1);
 			SetDefaultValues();
 			break;
 		};
		
		if(m_szStatusKey == _T("P"))
		{
			m_wndPrint.EnableWindow(TRUE);
			m_wndPost.EnableWindow(FALSE);
			//m_wndDelete.EnableWindow(FALSE);
			//m_wndCreate.EnableWindow(FALSE);
			m_wndSave.EnableWindow(FALSE);
			m_wndEdit.EnableWindow(FALSE);
		}
		m_wndPost.EnableWindow(true);

 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSDetailEletronicDialog::OnPatternChange(){
	
} */
/*void CHMSDetailEletronicDialog::OnPatternSetfocus(){
	
} */
/*void CHMSDetailEletronicDialog::OnPatternKillfocus(){
	
} */
int CHMSDetailEletronicDialog::OnPatternCheckValue(){
	return 0;
} 
/*void CHMSDetailEletronicDialog::OnNguoiPHChange(){
	
} */
/*void CHMSDetailEletronicDialog::OnNguoiPHSetfocus(){
	
} */
/*void CHMSDetailEletronicDialog::OnNguoiPHKillfocus(){
	
} */
int CHMSDetailEletronicDialog::OnNguoiPHCheckValue(){
	return 0;
} 
void CHMSDetailEletronicDialog::OnStatusSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDetailEletronicDialog::OnStatusSelendok(){
	 
}
/*void CHMSDetailEletronicDialog::OnStatusSetfocus(){
	
}*/
/*void CHMSDetailEletronicDialog::OnStatusKillfocus(){
	
}*/
long CHMSDetailEletronicDialog::OnStatusLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szLabel;
	/*if(m_wndStatus.IsSearchKey() && !m_szStatusKey.IsEmpty()){
		if(m_szStatusKey == _T("P")){
			TranslateString(_T("\x110\xE3 \x78u\x1EA5t H\x110"), szLabel);
			m_wndStatus.AddItems(_T("P"), szLabel, NULL);			
		}
		if(m_szStatusKey == _T("O")){
			TranslateString(_T("\x43h\x1B0\x61 \x78u\x1EA5t H\x110"), szLabel);
			m_wndStatus.AddItems(_T("O"), szLabel, NULL);			
		}
		
		return 1;
	}*/
	
	/*TranslateString(_T("\x110\xE3 \x78u\x1EA5t H\x110"), szLabel);
	m_wndStatus.AddItems(_T("P"), szLabel, NULL);
	TranslateString(_T("Un \x43h\x1B0\x61 \x78u\x1EA5t H\x110"), szLabel);
	m_wndStatus.AddItems(_T("O"), szLabel, NULL);*/

	return 0;
}
/*void CHMSDetailEletronicDialog::OnStatusAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDetailEletronicDialog::OnDatePHChange(){
	
} */
/*void CHMSDetailEletronicDialog::OnDatePHSetfocus(){
	
} */
/*void CHMSDetailEletronicDialog::OnDatePHKillfocus(){
	
} */
int CHMSDetailEletronicDialog::OnDatePHCheckValue(){
	return 0;
} 
/*void CHMSDetailEletronicDialog::OnPrintCountChange(){
	
} */
/*void CHMSDetailEletronicDialog::OnPrintCountSetfocus(){
	
} */
/*void CHMSDetailEletronicDialog::OnPrintCountKillfocus(){
	
} */
int CHMSDetailEletronicDialog::OnPrintCountCheckValue(){
	return 0;
} 
/*void CHMSDetailEletronicDialog::OnReceiptNoChange(){
	
} */
/*void CHMSDetailEletronicDialog::OnReceiptNoSetfocus(){
	
} */
/*void CHMSDetailEletronicDialog::OnReceiptNoKillfocus(){
	
} */
int CHMSDetailEletronicDialog::OnReceiptNoCheckValue(){
	return 0;
} 
/*void CHMSDetailEletronicDialog::OnAmountChange(){
	
} */
/*void CHMSDetailEletronicDialog::OnAmountSetfocus(){
	
} */
/*void CHMSDetailEletronicDialog::OnAmountKillfocus(){
	
} */
int CHMSDetailEletronicDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CHMSDetailEletronicDialog::OnAddressChange(){
	
} */
/*void CHMSDetailEletronicDialog::OnAddressSetfocus(){
	
} */
/*void CHMSDetailEletronicDialog::OnAddressKillfocus(){
	
} */
int CHMSDetailEletronicDialog::OnAddressCheckValue(){
	return 0;
}
#include "HMSUpdateEInvoiceDialog.h"
void CHMSDetailEletronicDialog::OnListDblClick()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if(!pMF->CheckPermission(_T("FM.100.03")))
	{
		ShowMessageBox(_T("Chức năng này dành cho admin (FM.100.03)"), 0);
		return;
	}

	int nSel = m_wndList.GetCurSel();

	if(nSel < 0)
		return;

	m_nKey = str2double(m_wndList.GetItemText(nSel, 1));

	CHMSUpdateEInvoiceDialog dlg(this);
	dlg.m_nDocumentNo = pMF->m_nDocumentNo;
	dlg.m_nKey = m_nKey;

	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();	
	}
	

	
} 
void CHMSDetailEletronicDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndList.GetCurSel();

	if(nSel < 0)
		return;

	m_nKey = str2double(m_wndList.GetItemText(nSel, 1));

	if(m_nKey > 0)
		GetDataToScreen();
	
} 
int CHMSDetailEletronicDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);

	szSQL.Format(_T("SELECT COUNT(*) FROM HMS_FEE_ELECTRONICLINE ") \
			_T("WHERE HFE_DOCNO=%ld AND HFE_STATUS = 'P' AND HFE_KEY = %.0f"),
			 m_nDocumentNo, m_nKey);

	//_msg(_T("%s"),  szSQL);
	rs.ExecSQL(szSQL);	
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("Ho\xE1 \x111\x1A1n \x111\xE3 ph\xE1t h\xE0nh kh\xF4ng th\x1EC3 \x78o\xE1!"), MB_ICONERROR|MB_OK);
			return -1;
	}


	if(ShowMessageBox(_T("T\xE1\x63 v\x1EE5 n\xE0y \x78o\xE1 \x64\x1EEF li\x1EC7u \x111\xE3 \x111\x1EC3 \x78u\x1EA5t H\x110\r\n \x42\x1EA1n \x63\xF3 \x63h\x1EAF\x63 \x78o\xE1 kh\xF4ng? (YES, NO)"), MB_ICONWARNING|MB_YESNO) == IDNO)
		return -1;

	szSQL.Format(_T("HMS_ELECTRONIC_DELETE_DOC(%ld, %.0f, '%s')"), m_nDocumentNo, m_nKey, pMF->GetCurrentUser());
	int ret  = str2int(pMF->ExecDML(szSQL));
	//_msg(_T("%d"), ret);
	if(ret >= 0 ){
		OnListLoadData();
	}

	 return 0;
} 
long CHMSDetailEletronicDialog::OnListLoadData(){
	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, szWhereSub, szStatus;
	m_wndList.BeginLoad(); 
	UpdateData(true);
	int nCount;
	pMF->BeginWaitCursor();

	szSQL.Format(_T(" SELECT hfe_docno as docno,") \
	_T("   HFE_KEY as Key,") \
	_T("   HFE_PATIENTNO as patientno,") \
	_T("   HFE_CUSNAME as pname,") \
	_T("   HFE_CUSADDRESS as address,") \
	_T("   HFE_PKEY as pkey,") \
	_T("   HFE_AMOUNT as Amount,") \
	_T("   HFE_PATPAID as patpaid,") \
	_T("   HFE_TYPE as type,") \
	_T("   HFE_DATE as PostDate,") \
	_T("   hfe_depttype as depttype,") \
	_T("   HFE_PATTER,") \
	_T("   HFE_SERIAL, ") \
	_T("   HFE_KEY_REF, HFE_STATUS, ") \
	_T("   to_char(hfe_print_time, 'DD/MM/YYYY HH24:MI') as printtime ") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_docno = %ld") \
	_T(" ORDER BY hfe_key,hfe_type, hfe_depttype  "), m_nDocumentNo);

	m_nAmount = 0;
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	if(rs.IsEOF())
	{
		SetMode(VM_NONE);
	}

	while(!rs.IsEOF())
	{ 
		rs.GetValue(_T("hfe_status"), szStatus);
		m_nAmount += ToDouble(rs.GetValue(_T("amount")));
		
		int nItem = m_wndList.AddItems(			
			rs.GetValue(_T("PostDate")),
			rs.GetValue(_T("key")), 
			rs.GetValue(_T("pkey")),
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("patpaid")),
			rs.GetValue(_T("HFE_PATTER")),
			rs.GetValue(_T("HFE_SERIAL")),
			rs.GetValue(_T("class")),
			rs.GetValue(_T("depttype")),
			rs.GetValue(_T("type")),
			rs.GetValue(_T("hfe_key_ref")),
			rs.GetValue(_T("hfe_status")),
			rs.GetValue(_T("printtime")),
			NULL);

		if (szStatus == _T("O"))

		{
			m_wndList.SetSubItemTextColor(nItem, 0, RGB(255, 255, 255), FALSE);
			m_wndList.SetSubItemBkColor(nItem, 0, RGB(255, 0, 0), FALSE);
		}
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 

	m_wndList.SetCurSel(0);
	pMF->EndWaitCursor();

	return 0;
}
#include "HMSEletronicConfirmDialog.h"
void CHMSDetailEletronicDialog::OnPostSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nCount = 0;


	CHMSEletronicConfirmDialog dlg;
	dlg.m_szDoctor = pMF->GetCurrentUser();

	if(dlg.DoModal() != IDOK)
		return;

	m_szInvUserID = dlg.m_szDoctor;
	m_szInvPassword = dlg.m_szConfirmPassword;

	if(!pMF->UpdateUserInvoice(dlg.m_szDoctor, dlg.m_wndDoctor.GetCurrent(1), dlg.m_szConfirmPassword))
	{
		ShowMessageBox(_T("Kh\xF4ng \x111\x1ED3ng \x62\x1ED9 \x111\x1B0\x1EE3\x63 th\xF4ng tin ng\x1B0\x1EDDi s\x1EED \x64\x1EE5ng"), MB_ICONERROR|MB_OK);
		return;
	}
	
	szSQL.Format(_T("SELECT COUNT(*) FROM HMS_FEE_ELECTRONICLINE WHERE hfe_docno = %ld AND hfe_status = 'P' AND hfe_key = %.0f"), m_nDocumentNo, m_nKey);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		if(ShowMessageBox(_T("Bệnh nhân đã phát hành hóa đơn, hãy kiểm tra lại trước khi phát hành hóa đơn!"), MB_ICONERROR|MB_YESNO) == IDNO)
			return;
	}
	else
	{
		OnPostPayment();
		//Post hoa don thu phi tien thuoc ngoai tru
		OnPostDrug();
		//Post phieu dieu chinh
		OnPostRefund();
	}

	OnListLoadData();
} 
void CHMSDetailEletronicDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSDetailEletronicDialog::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(GetMode() == VM_ADD)
	{
		SetMode(VM_NONE);
		return;
	}

	
	if(GetMode() == VM_EDIT)
	{
		SetMode(VM_VIEW);
		return;
	}

	_tprintf(_T("\r\n%d"), GetMode());
	SetMode(VM_EDIT);
	
} 
/*void CHMSDetailEletronicDialog::OnSerialChange(){
	
} */
/*void CHMSDetailEletronicDialog::OnSerialSetfocus(){
	
} */
/*void CHMSDetailEletronicDialog::OnSerialKillfocus(){
	
} */
int CHMSDetailEletronicDialog::OnSerialCheckValue(){
	return 0;
} 
void CHMSDetailEletronicDialog::OnPrintSelect(){

	CGuiMenu menu(this);
	CRect rect;
	int nPos;	
	menu.CreatePopupMenu();
	CString tmpStr;
	TranslateString(_T("&In H\x110 \x63huy\x1EC3n \x111\x1ED5i"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	
	TranslateString(_T("In \x62\x1EA3n &\x63\x61m k\x1EBFt"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("In \x62i\xEAn \x62\x1EA3n in &s\x61o"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);	

	TranslateString(_T("In \x62i\xEAn \x62\x1EA3n &thu h\x1ED3i"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);	
	
	TranslateString(_T("In \x62i\xEAn \x62\x1EA3n &\x111i\x1EC1u \x63h\x1EC9nh  "), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 5, tmpStr);	

	m_wndPrint.GetWindowRect(&rect);
	menu.MakeOwnerDraw(FALSE);

	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN, rect.right, rect.top-(25*5), this);
	switch(nPos){
		
	case 1:
		PrintHD();
		break;
	case 2:
		PrintGiaycamdoanHD();
		break;
	case 3:
		PrintBienbaninsaoHD();		
		break;
	case 4:
		PrintBienbanthuhoiHD();
		break;
	case 5:
		PrintBienbandieuchinhHD();
		break;
	};		
} 
void CHMSDetailEletronicDialog::PrintHD(){	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nPrint;
	
	szSQL.Format(_T("SELECT HFE_PRINT FROM HMS_FEE_ELECTRONICLINE ") \
			_T("WHERE HFE_DOCNO=%ld AND hfe_key = %.0f "),
			 m_nDocumentNo, m_nKey);

	//msg(_T("%s"),  szSQL);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hfe_print"), nPrint);
	
	if(nPrint <= 0)
	{
		if(ShowMessageBox(_T("In ho\xE1 \x111\x1A1n \x63huy\x1EC3n \x111\x1ED5i. T\xE1\x63 v\x1EE5 n\xE0y \x63h\x1EC9 \x111\x1B0\x1EE3\x63 ph\xE9p in m\x1ED9t l\x1EA7n? \r\n \x42\x1EA1n \x63\xF3 \x63h\x1EAF\x63 mu\x1ED1n in kh\xF4ng?"), MB_ICONQUESTION|MB_YESNO) == IDNO)
			return;
	}
	else
	{
		if(ShowMessageBox(_T("In \x62\x1EA3n s\x61o ho\xE1 \x111\x1A1n \x63huy\x1EC3n \x111\x1ED5i. T\xE1\x63 v\x1EE5 n\xE0y \x63h\x1EC9 \x111\x1B0\x1EE3\x63 ph\xE9p in m\x1ED9t l\x1EA7n? \r\n \x42\x1EA1n \x63\xF3 \x63h\x1EAF\x63 mu\x1ED1n in kh\xF4ng?"), MB_ICONQUESTION|MB_YESNO) == IDNO)
			return;
	}

	m_wndPrint.EnableWindow(FALSE);
	pMF->BeginWaitCursor();
	if(pMF->DownloadInvoice(m_nKey))
	{		
		CString szFileName;
		szFileName.Format(_T("%s\\DATA\\ElectronicInvoice_%.0f.pdf"),  pMF->m_szPath, m_nKey);	
		CFile file;
		bool res = false;
		if(file.Open(szFileName, CFile::modeRead) && file.GetLength() > 0)
		{
			res = true;
			file.Close();
			ShellExecute(NULL, _T("open"), szFileName, NULL, NULL,SW_SHOW);
		}
	}
	//else
	//	ShowMessageBox(_T("Kh\xF4ng t\xECm th\x1EA5y s\x1ED1 ho\xE1 \x111\x1A1n \x111i\x1EC7n t\x1EED"));

	pMF->EndWaitCursor();
	m_wndPrint.EnableWindow(TRUE);
}
void CHMSDetailEletronicDialog::PrintBienbandieuchinhHD(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr;

	if(!rpt.Init(_T("Reports/HMS/ELE_BIENBANDIEUCHINHHD.RPT"), false, false, 1) )
		return;	
	
	//Page Header
	//Report Detail	
	
	CReportSection* rptDetail = NULL;
	CReportSection* grp=NULL;
	
	rptDetail = rpt.GetReportHeader();

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rptDetail->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
	
	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);
	
	rptDetail->SetValue(_T("PatientName"), m_szCusName);
	rptDetail->SetValue(_T("Company"), m_szBuyer);
	rptDetail->SetValue(_T("Address"), m_szAddress);

	rptDetail->SetValue(_T("daidien1"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	
	CString szDate;
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rptDetail->GetValue(_T("PrintDate")),tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);

	rpt.PrintPreview();
	

}

void CHMSDetailEletronicDialog::PrintBienbanthuhoiHD(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr;

	if(!rpt.Init(_T("Reports/HMS/ELE_BIENBANTHUHOIHD.RPT"), false, false, 1) )
		return;	
	
	//Page Header
	//Report Detail	
	
	CReportSection* rptDetail = NULL;
	CReportSection* grp=NULL;
	
	rptDetail = rpt.GetReportHeader();

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rptDetail->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
	
	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);
	
	rptDetail->SetValue(_T("PatientName"), m_szCusName);
	rptDetail->SetValue(_T("PatientName"), m_szCusName);
	rptDetail->SetValue(_T("Company"), m_szBuyer);
	rptDetail->SetValue(_T("Address"), m_szAddress);


	rptDetail->SetValue(_T("daidien1"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	
	CString szDate;
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rptDetail->GetValue(_T("PrintDate")),tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);

	rpt.PrintPreview();
}

void CHMSDetailEletronicDialog::PrintBienbaninsaoHD(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr;

	if(!rpt.Init(_T("Reports/HMS/ELE_BIENBANINSAOHD.RPT"), false, false, 1) )
		return;	
	
	//Page Header
	//Report Detail	
	
	CReportSection* rptDetail = NULL;
	CReportSection* grp=NULL;
	
	rptDetail = rpt.GetReportHeader();

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rptDetail->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
	
	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);
	
	rptDetail->SetValue(_T("PATIENTNAME"), m_szCusName);
	rptDetail->SetValue(_T("PatientName"), m_szCusName);
	rptDetail->SetValue(_T("Company"), m_szBuyer);
	rptDetail->SetValue(_T("Address"), m_szAddress);


	rptDetail->SetValue(_T("hoten1"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	
	CString szDate;
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rptDetail->GetValue(_T("PrintDate")),tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);

	rptDetail = rpt.GetReportFooter();	
	szDate.Format(rptDetail->GetValue(_T("PrintDate")),tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);

	rpt.PrintPreview();
}

void CHMSDetailEletronicDialog::PrintGiaycamdoanHD(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr;

	if(!rpt.Init(_T("Reports/HMS/ELE_GIAYCAMDOAN.RPT"), false, false, 1) )
		return;	
	
	//Page Header
	//Report Detail
	
	
	CReportSection* rptDetail = NULL;
	CReportSection* grp=NULL;
	
	rptDetail = rpt.GetReportHeader();

	tmpStr.Empty();
	StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rptDetail->SetValue(_T("HealthService"), tmpStr);
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
	
	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);
	
	rptDetail->SetValue(_T("PATIENTNAME"), m_szCusName);
	rptDetail->SetValue(_T("PatientName"), m_szCusName);
	rptDetail->SetValue(_T("Company"), m_szBuyer);
	rptDetail->SetValue(_T("Address"), m_szAddress);


	rptDetail->SetValue(_T("daidien1"), pMF->GetDoctorName(pMF->GetCurrentUser()));
	
	CString szDate;
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(rptDetail->GetValue(_T("PrintDate")),tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);

	rptDetail = rpt.GetReportFooter();	
	szDate.Format(rptDetail->GetValue(_T("PrintDate")),tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);

	rpt.PrintPreview();
}

void CHMSDetailEletronicDialog::OnCreateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	

	szSQL.Format(_T("SELECT COUNT(*) FROM HMS_FEE_ELECTRONICLINE ") \
			_T("WHERE HFE_DOCNO=%ld AND HFE_STATUS = 'O' "),
			 m_nDocumentNo);

	//_msg(_T("%s"),  szSQL);
	rs.ExecSQL(szSQL);	
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("\x110\x61ng t\x1ED3n t\x1EA1i ho\xE1 \x111\x1A1n \x63h\x1B0\x61 \x63h\x1B0\x61 ph\xE1t h\xE0nh\r\n Ph\x1EA3i ph\xE1t h\xE0nh ho\xE1 \x111\x1A1n \x63\x169 m\x1EDBi t\x1EA1o \x64\x1EEF li\x1EC7u m\x1EDBi \x111\x1B0\x1EE3\x63?"), MB_ICONERROR|MB_OK);
		_msg(_T("Xin chào %s"), pMF->GetDoctorName(pMF->GetCurrentUser()));
			return;
	}

	/*szSQL.Format(_T(" SELECT COUNT(*)") \
	_T(" FROM") \
	_T("   ( SELECT hd_status AS status FROM hms_doc WHERE hd_docno = %ld ") \
	_T("   UNION ALL") \
	_T("   SELECT hcr_status FROM HMS_CLINICAL_RECORD WHERE hcr_docno = %ld ") \
	_T("   )") \
	_T(" WHERE Status <> 'T'"), m_nDocumentNo, m_nDocumentNo);

	
	
	//_msg(_T("%s"),  szSQL);
	rs.ExecSQL(szSQL);	
	if(rs.GetIntValue() > 0)
	{		
		ShowMessageBox(_T("\x43h\x1B0\x61 k\x1EBFt th\xFA\x63 h\x1ED3 s\x1A1. Kh\xF4ng th\x1EC3 t\x1EA1o \x64\x1EEF li\x1EC7u"), MB_ICONERROR|MB_OK);
			return;		
	}*/


	SetMode(VM_ADD);
} 
void CHMSDetailEletronicDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//Hàm xử lý hóa đơn đang dùng
	//Hàm xử lý hóa đơn thu
	//Hàm xử lý hóa đơn chi	

	if ((pMF->GetCurrentUser() == _T("ntthabh")) || (pMF->GetCurrentUser() == _T("vimes")) || 1 == 1)
	{
		//ShowMessageBox(_T("Bạn đang làm việc ở chế độ test!"), MB_ICONWARNING);
		OnSaveHMSDetailEletronicDialog_IV();
		OnSaveHMSDetailEletronicDialog_RF();	
	}
	else
	{
		OnSaveHMSDetailEletronicDialog();
	}
} 
void CHMSDetailEletronicDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_NONE);
} 
int CHMSDetailEletronicDialog::OnAddHMSDetailEletronicDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDetailEletronicDialog::OnEditHMSDetailEletronicDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDetailEletronicDialog::OnDeleteHMSDetailEletronicDialog(){
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
 		OnCancelHMSDetailEletronicDialog();
 	}
	return 0;
}
int CHMSDetailEletronicDialog::OnSaveHMSDetailEletronicDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;	
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD)
	{
 		//szSQL = m_tblTbl.GetInsertSQL();
		// Goi ham tao du lieu cua benh nhan de POST
		szSQL.Format(_T("HMS_ELECTRONICLINE_INSERT_DOCL(%ld, '%s')"), m_nDocumentNo, pMF->GetCurrentUser());
		int ret  = str2int(pMF->ExecDML(szSQL));
		//_msg(_T("%d"), ret);
		if(ret > 1){	
			
			CString szWhere;
 			szWhere.Format(_T(" WHERE hfe_docno = %ld"),m_nDocumentNo);
 			szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("HFE_DOCNO,HFE_ORDERID, hfe_key, hfe_pkey, hfe_status, hfe_get_pkey_time"));
 			szSQL += szWhere;
			SetMode(VM_VIEW);
		}
		else			
		{		
			SetMode(VM_EDIT);
			ShowMessageBox(_T("No data"), MB_OK);
			return -1;
		}
	

 	}
 	else if(GetMode() == VM_EDIT)
	{
 		CString szWhere;
 		szWhere.Format(_T(" WHERE hfe_docno = %ld"),m_nDocumentNo);
 		szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("HFE_DOCNO,HFE_ORDERID, hfe_key, hfe_pkey, hfe_status, hfe_get_pkey_time"));
 		szSQL += szWhere;
 	}
 //_msg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	
}

int CHMSDetailEletronicDialog::OnSaveHMSDetailEletronicDialog_IV()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
	
	//Tách phần tạo hóa đơn thu riêng & hóa đon trả lại riêng
	//1. Phần hóa đơn thu
	//2. phần hóa đơn chi
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD)
	{
 		//szSQL = m_tblTbl.GetInsertSQL();
		// Goi ham tao du lieu cua benh nhan de POST
		szSQL.Format(_T("HMS_ELECTRONICLINE_INSERT_DOCI(%ld, '%s')"), m_nDocumentNo, pMF->GetCurrentUser());
		int ret  = str2int(pMF->ExecDML(szSQL));	
		if(ret > 1)
		{	
			
			CString szWhere;
 			szWhere.Format(_T(" WHERE hfe_docno = %ld"),m_nDocumentNo);
 			szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("HFE_DOCNO,HFE_ORDERID, hfe_key, hfe_pkey, hfe_status, hfe_get_pkey_time"));
 			szSQL += szWhere;
			SetMode(VM_VIEW);
			
		}

 	}
 	else if(GetMode() == VM_EDIT)
	{
 		CString szWhere;
 		szWhere.Format(_T(" WHERE hfe_docno = %ld"),m_nDocumentNo);
 		szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("HFE_DOCNO,HFE_ORDERID, hfe_key, hfe_pkey, hfe_status, hfe_get_pkey_time"));
 		szSQL += szWhere;
		
 	}

 	int ret = pMF->ExecSQL(szSQL);	
 	if(ret > 0)
 	{
 		OnListLoadData();
 		SetMode(VM_VIEW);
 	}	
 	return ret;
 	
}

int CHMSDetailEletronicDialog::OnSaveHMSDetailEletronicDialog_RF()
{
 	
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
	
 	if(!IsValidateData())
 		return -1;
	
	//Tách phần tạo hóa đơn thu riêng & hóa đon trả lại riêng
	//1. Phần hóa đơn thu
	//2. phần hóa đơn chi
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD)
	{
 		//szSQL = m_tblTbl.GetInsertSQL();
		// Goi ham tao du lieu cua benh nhan de POST
		szSQL.Format(_T("HMS_ELECTRONICLINE_INSERT_DOCR(%ld, '%s')"), m_nDocumentNo, pMF->GetCurrentUser());
		int ret  = str2int(pMF->ExecDML(szSQL));
		//_msg(_T("%d"), ret);
		if(ret > 1)
		{	
			
			CString szWhere;
 			szWhere.Format(_T(" WHERE hfe_docno = %ld"),m_nDocumentNo);
 			szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("HFE_DOCNO,HFE_ORDERID, hfe_key, hfe_pkey, hfe_status, hfe_get_pkey_time"));
 			szSQL += szWhere;
			SetMode(VM_VIEW);
		}	

 	}
 	else if(GetMode() == VM_EDIT)
	{
 		CString szWhere;
 		szWhere.Format(_T(" WHERE hfe_docno = %ld"),m_nDocumentNo);
 		szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("HFE_DOCNO,HFE_ORDERID, hfe_key, hfe_pkey, hfe_status, hfe_get_pkey_time"));
 		szSQL += szWhere;
 	} 
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	
}

int CHMSDetailEletronicDialog::OnCancelHMSDetailEletronicDialog(){
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
int CHMSDetailEletronicDialog::OnHMSDetailEletronicDialogListLoadData(){
	return 0;
}

/*void CHMSDetailEletronicDialog::OnBuyerChange(){
	
} */
/*void CHMSDetailEletronicDialog::OnBuyerSetfocus(){
	
} */
/*void CHMSDetailEletronicDialog::OnBuyerKillfocus(){
	
} */
int CHMSDetailEletronicDialog::OnBuyerCheckValue(){
	return 0;
} 
/*void CHMSDetailEletronicDialog::OnCusTaxCodeChange(){
	
} */
/*void CHMSDetailEletronicDialog::OnCusTaxCodeSetfocus(){
	
} */
/*void CHMSDetailEletronicDialog::OnCusTaxCodeKillfocus(){
	
} */
int CHMSDetailEletronicDialog::OnCusTaxCodeCheckValue(){
	return 0;
} 


int CHMSDetailEletronicDialog::OnPostPayment(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
		
	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_buyer as buyer, ") \
	_T("   hfe_custaxcode as custaxcode, ") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_docno = %d ") \
	_T(" AND hfe_type ='P' ") \
	_T(" AND hfe_status = 'O'") \
	_T(" AND hfe_depttype ='A'") \
	_T(" AND hfe_pkey =0") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_nDocumentNo, szWhere);
	
//_msg(_T("%s"), szSQL);
	szDataJson.Format(_T("["));

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("idkey"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
		
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;

		rs.GetValue(_T("Buyer"), tmpStr);
		jbuilder[_T("Buyer")] = tmpStr;
		rs.GetValue(_T("CusTaxCode"), tmpStr);
		jbuilder[_T("CusTaxCode")] = tmpStr;

				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
	
	szPatter = _T("02GTTT0/001");
	szSerial = _T("KB/17E");
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("%s/republish?username=%s&password=%s&pattern=%s&serial=%s"), pMF->m_szInvUrl, m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern, pMF->m_szInvSerial);
	//szURL.Format(_T("%s/republish?username=%s&password=%s&pattern=%s&serial=%s"), _T("http://10.0.0.199:9005/api/businessInv"), m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern, pMF->m_szInvSerial);

	//_msg(_T("\r\n%s%s"), szURL, szDataJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
	        char szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
					break;
			    
				str += szBuff;			    
			}

			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
			WCHAR* wcString = new WCHAR[nbyte];
			memset(wcString, L'\0', str.length());
			::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);
			wcString[nbyte] = L'\0';
			tmpStr.Format(_T("%s"), wcString);
			szResponse += tmpStr;
			delete wcString;
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}	
	
	JSONVALUE j;
	double nKey = 0, nFKey = 0;	
	if(!szResponse.IsEmpty())
	{	
		_tprintf(_T("\r\n%s"), szResponse);
		//_msg(_T("%s"), szResponse);
		j.Parse(szResponse);				
		JSONVALUE  j2, j3, j4;		
		std::wstring strData;
		CString tmpStr, tmpStr1;		
		_tprintf(_T("\nsize: %d\n"), j.Size());
		for(int i = 0; i< j.Size(); i++){
			
			j2 = j.At(i);
			
			j3 = j2["Key"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nKey = str2double(tmpStr);

			j3 = j2["Fkey"];
			j3.ToString(strData);
			//_msg(_T("%s"), j3.ToString(strData));
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nFKey = str2double(tmpStr);	
			
			if(nFKey > 0)
			{
				m_hms_electronicTbl.SetValue(_T("hfe_key"), nKey); 
				m_hms_electronicTbl.SetValue(_T("hfe_pkey"), nFKey);
				m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
				m_hms_electronicTbl.SetValue(_T("hfe_get_pkey_time"), pMF->GetSysDateTime());
				
				szWhere.Format(_T(" WHERE hfe_docno = %ld AND hfe_key=%.0f"), m_nDocumentNo, nKey);
				szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key, HFE_CUSNAME, HFE_BUYER, HFE_CUSTAXCODE, HFE_CUSADDRESS"));
				szSQL += szWhere;
				//_msg(_T("%s"), szSQL);
				pMF->ExecSQL(szSQL);

			//	OnPostPayment_ITT(nKey);

				nRow ++;
			}
			else
			{
				ShowMessageBox(_T("Không post được hóa đơn. Hệ thống hóa đơn không trả lại Pkey"), MB_OK);
			}
			_tprintf(_T("\r\n%d, Key:%.0f, Fkey:%.0f"), i, nKey, nFKey);
		}
	}

	return nRow;
}
int CHMSDetailEletronicDialog::OnPostDrug(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
		
	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_buyer as buyer, ") \
	_T("   hfe_custaxcode as custaxcode, ") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_docno = %d ") \
	_T(" AND hfe_type ='P' ") \
	_T(" AND hfe_depttype ='D'") \
	_T(" AND hfe_status = 'O'") \
	_T(" AND hfe_pkey =0") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_nDocumentNo, szWhere);
	
	rs.ExecSQL(szSQL);

	szDataJson.Format(_T("["));
	
	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("idkey"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);		
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
					
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;		

		rs.GetValue(_T("Buyer"), tmpStr);
		jbuilder[_T("Buyer")] = tmpStr;
		rs.GetValue(_T("CusTaxCode"), tmpStr);
		jbuilder[_T("CusTaxCode")] = tmpStr;

				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
	
	
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("%s/republish?username=%s&password=%s&pattern=%s&serial=%s"), pMF->m_szInvUrl, m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern1, pMF->m_szInvSerial1);
	//szURL.Format(_T("%s/republish?username=%s&password=%s&pattern=%s&serial=%s"), _T("http://10.0.0.199:9005/api/businessInv"), m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern, pMF->m_szInvSerial);
	//_msg(_T("\r\n%s%s"), szURL, szDataJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
	        char szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
					break;
			    
				str += szBuff;			    
			}

			WCHAR* wcString = new WCHAR[str.length()];
			memset(wcString, L'\0', str.length());
			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
			::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);
			wcString[nbyte] = L'\0';
			tmpStr.Format(_T("%s"), wcString);
			szResponse += tmpStr;
			delete wcString;
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}	
	
	JSONVALUE j;
	double nKey = 0, nFKey = 0;	
	if(!szResponse.IsEmpty())
	{	
		_tprintf(_T("\r\n%s"), szResponse);
		//_msg(_T("%s"), szResponse);
		j.Parse(szResponse);
		JSONVALUE  j2, j3, j4;		
		std::wstring strData;
		CString tmpStr, tmpStr1;		

		for(int i = 0; i< j.Size(); i++){
			
			j2 = j.At(i);
			
			j3 = j2["Key"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nKey = str2double(tmpStr);

			j3 = j2["Fkey"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nFKey = str2double(tmpStr);
			
			if(nFKey > 0)
			{
				m_hms_electronicTbl.SetValue(_T("hfe_key"), nKey); 
				m_hms_electronicTbl.SetValue(_T("hfe_pkey"), nFKey);
				m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
				m_hms_electronicTbl.SetValue(_T("hfe_get_pkey_time"), pMF->GetSysDateTime());

				szWhere.Format(_T(" WHERE hfe_docno = %ld AND hfe_key=%.0f"), m_nDocumentNo, nKey);
				szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key, HFE_CUSNAME, HFE_BUYER, HFE_CUSTAXCODE, HFE_CUSADDRESS"));				
				szSQL += szWhere;
				//_msg(_T("%s"), szSQL);
				pMF->ExecSQL(szSQL);
				//OnPostDrug_ITT(nKey);
				
				nRow ++;
			}
			else
			{
				ShowMessageBox(_T("Không post được hóa đơn. Hệ thống hóa đơn không trả lại Pkey"), MB_OK);
			}
		}
	}

	return nRow;
}
int CHMSDetailEletronicDialog::OnPostRefund()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;	
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
		
	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS newkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_pkey AS idpkey,") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_buyer as buyer, ") \
	_T("   hfe_custaxcode as custaxcode, ") \
	_T("   hfe_depttype, HFE_KEY_REF AS keyref") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_docno = %d ") \
	_T(" AND hfe_type ='R'") \
	_T(" AND hfe_status = 'O'") \
	_T(" ORDER BY hfe_type,") \
	_T(" hfe_depttype,") \
	_T("   docno"), m_nDocumentNo, szWhere);
	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);
	szDataJson.Format(_T("["));

	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("keyref"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;
		
		rs.GetValue(_T("newkey"), tmpStr);
		jbuilder[_T("NewKey")]= tmpStr;

		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;
				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
	
	
	CString szURL;
	
	//szURL.Format(_T("%s/proceed?username=%s&password=%s"), pMF->m_szInvUrl, m_szInvUserID, m_szInvPassword);
	//szURL.Format(_T("%s"), _T(" http://10.0.0.199:9005/api/businessInv/adjustinv"), m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern, pMF->m_szInvSerial);
	szURL.Format(_T("%s?username=%s&password=%s"), _T("http://10.0.0.199/api/businessInv/adjustinv"), m_szInvUserID, m_szInvPassword);
	
	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;
        //_msg(_T("%s, %s"), szDataJson, szURL);
		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
	        char szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
					break;
			    
				str += szBuff;			    
			}

			WCHAR* wcString = new WCHAR[str.length()];
			memset(wcString, L'\0', str.length());
			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
			::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);
			wcString[nbyte] = L'\0';
			tmpStr.Format(_T("%s"), wcString);
			szResponse += tmpStr;
			delete wcString;
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}	
	
	JSONVALUE j;
	double nKey = 0, nFKey = 0;	
	if(!szResponse.IsEmpty())
	{	
		_tprintf(_T("\r\n%s"), szResponse);	
		j.Parse(szResponse);				
		JSONVALUE  j2, j3, j4;		
		std::wstring strData;
		CString tmpStr, tmpStr1;		

		for(int i = 0; i< j.Size(); i++){
			
			j2 = j.At(i);
			
			j3 = j2["Key"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nKey = str2double(tmpStr);

			j3 = j2["Fkey"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nFKey = str2double(tmpStr);
			
			if(nFKey > 0)
			{
				m_hms_electronicTbl.SetValue(_T("hfe_key"), nKey); 
				m_hms_electronicTbl.SetValue(_T("hfe_pkey"), nFKey);
				m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
				m_hms_electronicTbl.SetValue(_T("hfe_get_pkey_time"), pMF->GetSysDateTime());
				szWhere.Format(_T(" WHERE hfe_docno = %ld AND hfe_key=%.0f"), m_nDocumentNo, nKey);
				szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key, HFE_CUSNAME, HFE_BUYER, HFE_CUSTAXCODE, HFE_CUSADDRESS"));				
				szSQL += szWhere;
				//_msg(_T("%s"), szSQL);
				pMF->ExecSQL(szSQL);
			//	OnPostRefund_ITT(nKey);

				nRow ++;
			}
			else
			{
				ShowMessageBox(_T("Không post được hóa đơn. Hệ thống hóa đơn không trả lại Pkey"), MB_OK);
			}
		}
	}

	return nRow;

}
int CHMSDetailEletronicDialog::OnPostPayment_ITT(long nPkey){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
		
	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_buyer as buyer, ") \
	_T("   hfe_custaxcode as custaxcode, ") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_docno = %d ") \
	_T(" AND hfe_type ='P' ") \
	_T(" AND hfe_depttype ='A'") \
	_T(" AND hfe_key = %ld") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_nDocumentNo,nPkey);
	
//_msg(_T("%s"), szSQL);
	szDataJson.Format(_T("["));

	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("idkey"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
		
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;

		rs.GetValue(_T("Buyer"), tmpStr);
		jbuilder[_T("Buyer")] = tmpStr;
		rs.GetValue(_T("CusTaxCode"), tmpStr);
		jbuilder[_T("CusTaxCode")] = tmpStr;

				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
	
	szPatter = _T("02GTTT0/001");
	szSerial = _T("KB/17E");
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("http://10.0.0.199/api/bv108/republish?username=%s&password=%s&pattern=%s&serial=%s"), m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern, pMF->m_szInvSerial);

	//_msg(_T("\r\n%s%s"), szURL, szDataJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
	        char szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
					break;
			    
				str += szBuff;			    
			}

			WCHAR* wcString = new WCHAR[str.length()];
			memset(wcString, L'\0', str.length());
			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
			::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);
			wcString[nbyte] = L'\0';
			tmpStr.Format(_T("%s"), wcString);
			szResponse += tmpStr;
			delete wcString;
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		//ShowMessageBox(szMsg);
	}	
	
	JSONVALUE j;
	long nKey, nFKey;	
	if(!szResponse.IsEmpty())
	{	
		_tprintf(_T("\r\n%s"), szResponse);	
		j.Parse(szResponse);				
		JSONVALUE  j2, j3, j4;		
		std::wstring strData;
		CString tmpStr, tmpStr1;		

		for(int i = 0; i< j.Size(); i++){
			
			j2 = j.At(i);
			
			j3 = j2["Key"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nKey = str2int(tmpStr);

			j3 = j2["Fkey"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nFKey = str2int(tmpStr);	
			
			if(nFKey > 0)
			{
				//m_hms_electronicTbl.SetValue(_T("hfe_key"), nKey); 
				//m_hms_electronicTbl.SetValue(_T("hfe_pkey"), nFKey);
				//m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
				//
				//szWhere.Format(_T(" WHERE hfe_docno = %ld AND hfe_key=%ld"), m_nDocumentNo, nKey);
				//szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key, HFE_CUSNAME, HFE_BUYER, HFE_CUSTAXCODE, HFE_CUSADDRESS"));
				//szSQL += szWhere;
				////_msg(_T("%s"), szSQL);
				//pMF->ExecSQL(szSQL);

				nRow ++;
			}
			else
			{
				//ShowMessageBox(_T("Không post được hóa đơn. Hệ thống hóa đơn không trả lại Pkey"), MB_OK);
			}
			_tprintf(_T("\r\n%d, Key:%ld, Fkey:%ld"), i, nKey, nFKey);
		}
	}

	return nRow;
}
int CHMSDetailEletronicDialog::OnPostDrug_ITT(long nKeyID){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
		
	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_buyer as buyer, ") \
	_T("   hfe_custaxcode as custaxcode, ") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_docno = %ld ") \
	_T(" AND hfe_type ='P' ") \
	_T(" AND hfe_depttype ='D'") \
	_T(" AND hfe_key =%ld") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_nDocumentNo, nKeyID);
	
	rs.ExecSQL(szSQL);

	szDataJson.Format(_T("["));
	
	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("idkey"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);		
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
					
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;		

		rs.GetValue(_T("Buyer"), tmpStr);
		jbuilder[_T("Buyer")] = tmpStr;
		rs.GetValue(_T("CusTaxCode"), tmpStr);
		jbuilder[_T("CusTaxCode")] = tmpStr;

				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
	
	
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("http://10.0.0.199/api/bv108/republish?username=%s&password=%s&pattern=%s&serial=%s"), m_szInvUserID, m_szInvPassword, pMF->m_szInvPattern1, pMF->m_szInvSerial1);
	//_msg(_T("\r\n%s%s"), szURL, szDataJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
	        char szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
					break;
			    
				str += szBuff;			    
			}

			WCHAR* wcString = new WCHAR[str.length()];
			memset(wcString, L'\0', str.length());
			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
			::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);
			wcString[nbyte] = L'\0';
			tmpStr.Format(_T("%s"), wcString);
			szResponse += tmpStr;
			delete wcString;
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		//ShowMessageBox(szMsg);
	}	
	
	JSONVALUE j;
	long nKey, nFKey;	
	if(!szResponse.IsEmpty())
	{	
		_tprintf(_T("\r\n%s"), szResponse);	
		j.Parse(szResponse);
		JSONVALUE  j2, j3, j4;		
		std::wstring strData;
		CString tmpStr, tmpStr1;		

		for(int i = 0; i< j.Size(); i++){
			
			j2 = j.At(i);
			
			j3 = j2["Key"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nKey = str2int(tmpStr);

			j3 = j2["Fkey"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nFKey = str2int(tmpStr);
			
			if(nFKey > 0)
			{
				//m_hms_electronicTbl.SetValue(_T("hfe_key"), nKey); 
				//m_hms_electronicTbl.SetValue(_T("hfe_pkey"), nFKey);
				//m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
				//szWhere.Format(_T(" WHERE hfe_docno = %ld AND hfe_key=%ld"), m_nDocumentNo, nKey);
				//szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key, HFE_CUSNAME, HFE_BUYER, HFE_CUSTAXCODE, HFE_CUSADDRESS"));				
				//szSQL += szWhere;
				////_msg(_T("%s"), szSQL);
				//pMF->ExecSQL(szSQL);
				
				nRow ++;
			}
			
			_tprintf(_T("\r\n%d, Key:%ld, Fkey:%ld"), i, nKey, nFKey);
		}
	}

	return nRow;
}
int CHMSDetailEletronicDialog::OnPostRefund_ITT(long nKeyID){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	JSONVALUE jbuilder;
	double nAmount =0;	
	long nRow =0;
	CString szSQL, szWhere;
	CString szPatientId, szStatus, szDesc, szPatter, szSerial, tmpStr;
	CString szAmount, szSumInWord;
	CString szDataJson;
	std::wstring json_string;
		
	tmpStr = _T("0");
		
	szSQL.Format(_T(" SELECT hfe_docno    AS docno,") \
	_T("   hfe_patientno     AS patientno,") \
	_T("   hfe_cusname       AS pname,") \
	_T("   hfe_cusaddress    AS address,") \
	_T("   hfe_key            AS idkey,") \
	_T("   hfe_lockeddate as recvdate, ") \
	_T("   hfe_pkey AS idpkey,") \
	_T("   hfe_amount as amount,") \
	_T("   hfe_patpaid as patpaid,") \
	_T("   hfe_patter,") \
	_T("   hfe_serial,") \
	_T("   hfe_type,") \
	_T("   hfe_buyer as buyer, ") \
	_T("   hfe_custaxcode as custaxcode, ") \
	_T("   hfe_depttype") \
	_T(" FROM HMS_FEE_ELECTRONICLINE") \
	_T(" WHERE hfe_docno = %ld ") \
	_T(" AND hfe_key =%ld  ") \
	_T(" AND hfe_type ='R'") \
	_T(" AND hfe_pkey > 0") \
	_T(" ORDER BY hfe_type,") \
	_T("   hfe_depttype,") \
	_T("   docno"), m_nDocumentNo, nKeyID);
	
	rs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);
	szDataJson.Format(_T("["));

	if(rs.IsEOF())
		return -1;

	while(!rs.IsEOF())
	{
		
		rs.GetValue(_T("idpkey"), tmpStr);
		jbuilder[_T("Key")]= tmpStr;

		jbuilder[_T("InvoiceType")]= _T("1");

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		rs.GetValue(_T("recvdate"), tmpStr);		
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		
		jbuilder[_T("SoPT")]= _T("0");		
		jbuilder[_T("ProductName")]= _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED");
		
		rs.GetValue(_T("amount"), szAmount);		
		jbuilder[_T("Total")]= szAmount;		
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");
					
		rs.GetValue(_T("patpaid"), szAmount);
		jbuilder[_T("Amount")]= szAmount;				
		jbuilder[_T("KCBAmount")]= szAmount;		
				
		jbuilder[_T("Deposit")] = _T("0");
		jbuilder[_T("PatientPaid")] = szAmount;
		jbuilder[_T("PatientReceviced")] = _T("0");
						
		MoneyToString(szAmount, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;

		rs.GetValue(_T("Buyer"), tmpStr);
		jbuilder[_T("Buyer")] = tmpStr;
		rs.GetValue(_T("CusTaxCode"), tmpStr);
		jbuilder[_T("CusTaxCode")] = tmpStr;

				
		CString szJson;
		jbuilder.ToString(json_string);
	
		szJson.Format(_T("%s"), json_string.c_str());
		szJson.AppendFormat(_T(","));
		szDataJson += szJson;

		rs.MoveNext();
	}

	szDataJson.AppendFormat(_T("]"));
	szDataJson.Replace(_T(",]"), _T("]"));
	CInternetSession session(_T("VIMES_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
	
	
	CString szURL;
	
	szURL.Format(_T("http://10.0.0.199/api/bv108/proceed?username=%s&password=%s"), m_szInvUserID, m_szInvPassword);
	
	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");
		::AfxParseURL(szURL, svrtype, svr, strobj, port);

		pServer = session.GetHttpConnection(svr, port);
		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);

		char* buff;
		int len = ::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), NULL, 0, 0, 0);
		buff = new char[len+sizeof(char)];
		memset(buff, '\0', len+sizeof(char));
		::WideCharToMultiByte(CP_UTF8, 0, szDataJson, szDataJson.GetLength(), buff, len, 0, 0);
		printf("%s", buff);
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));				
		delete buff;
//_msg(_T("%s, %s"), szDataJson, szURL);
		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			_tprintf(_T("\r\n%s"), _T("HTTP_STATUS_OK"));
	        char szBuff[1025];
			UINT dwLen = 0;
			std::string str;
			str.clear();

			for(;;)
			{
				memset(szBuff, '\0', 1025);
				dwLen = pFile->Read(szBuff, 1024);
				if(dwLen <= 0)
					break;
			    
				str += szBuff;			    
			}

			WCHAR* wcString = new WCHAR[str.length()];
			memset(wcString, L'\0', str.length());
			UINT nbyte = ::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), NULL, 0);
			::MultiByteToWideChar(CP_UTF8, 0, str.c_str(), str.length(), wcString, nbyte);
			wcString[nbyte] = L'\0';
			tmpStr.Format(_T("%s"), wcString);
			szResponse += tmpStr;
			delete wcString;
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));			
		}	
	
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110"));
		ShowMessageBox(szMsg);
	}	
	
	JSONVALUE j;
	long nKey, nFKey;	
	if(!szResponse.IsEmpty())
	{	
		_tprintf(_T("\r\n%s"), szResponse);	
		j.Parse(szResponse);				
		JSONVALUE  j2, j3, j4;		
		std::wstring strData;
		CString tmpStr, tmpStr1;		

		for(int i = 0; i< j.Size(); i++){
			
			j2 = j.At(i);
			
			j3 = j2["Key"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nKey = str2int(tmpStr);

			j3 = j2["Fkey"];
			j3.ToString(strData);
			tmpStr = strData.c_str();
			tmpStr1.Format(_T("%c"), 34);
			tmpStr.Replace(tmpStr1, _T(""));
			nFKey = str2int(tmpStr);
			
			if(nFKey > 0)
			{
				//m_hms_electronicTbl.SetValue(_T("hfe_key"), nKey); 
				//m_hms_electronicTbl.SetValue(_T("hfe_pkey"), nFKey);
				//m_hms_electronicTbl.SetValue(_T("hfe_status"), _T("P"));
				//szWhere.Format(_T(" WHERE hfe_docno = %ld AND hfe_key=%ld"), m_nDocumentNo, nKey);
				//szSQL = m_hms_electronicTbl.GetUpdateSQL(_T("hfe_orderid,hfe_key, HFE_CUSNAME, HFE_BUYER, HFE_CUSTAXCODE, HFE_CUSADDRESS"));				
				//szSQL += szWhere;
				////_msg(_T("%s"), szSQL);
				//pMF->ExecSQL(szSQL);

				nRow ++;
			}
			
			_tprintf(_T("\r\n%d, Key:%ld, Fkey:%ld"), i, nKey, nFKey);
		}
	}

	return nRow;

}