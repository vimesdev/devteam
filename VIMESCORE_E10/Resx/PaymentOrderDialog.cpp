#include "PaymentOrderDialog.h"
#include "MainFrm.h"
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPaymentOrderDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnDateCheckValue();
} 
/*static void _OnProposerChangeFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnProposerChange();
} */
/*static void _OnProposerSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnProposerSetfocus();} */ 
/*static void _OnProposerKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnProposerKillfocus();
} */
static int _OnProposerCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnProposerCheckValue();
} 
/*static void _OnDescriptionChangeFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnDescriptionChange();
} */
/*static void _OnDescriptionSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnDescriptionSetfocus();} */ 
/*static void _OnDescriptionKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnDescriptionKillfocus();
} */
static int _OnDescriptionCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnDescriptionCheckValue();
} 
/*static void _OnAmountChangeFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnAmountChange();
} */
/*static void _OnAmountSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnAmountSetfocus();} */ 
/*static void _OnAmountKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnAmountKillfocus();
} */
static int _OnAmountCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnAmountCheckValue();
} 
/*static void _OnApprovalAmountChangeFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnApprovalAmountChange();
} */
/*static void _OnApprovalAmountSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnApprovalAmountSetfocus();} */ 
/*static void _OnApprovalAmountKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnApprovalAmountKillfocus();
} */
static int _OnApprovalAmountCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnApprovalAmountCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnReferenceKillfocus();
} */
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnReferenceCheckValue();
} 
static void _OnPaymentMethodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPaymentOrderDialog* )pWnd)->OnPaymentMethodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPaymentMethodSelendokFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnPaymentMethodSelendok();
}
/*static void _OnPaymentMethodSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
/*static void _OnPaymentMethodKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnPaymentMethodKillfocus();
}*/
static long _OnPaymentMethodLoadDataFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnPaymentMethodLoadData();
}
/*static void _OnPaymentMethodAddNewFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnPaymentMethodAddNew();
}*/
/*static void _OnChi_truc_tiepChangeFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_truc_tiepChange();
} */
/*static void _OnChi_truc_tiepSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_truc_tiepSetfocus();} */ 
/*static void _OnChi_truc_tiepKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_truc_tiepKillfocus();
} */
static int _OnChi_truc_tiepCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnChi_truc_tiepCheckValue();
} 
/*static void _OnChi_mua_vat_tu_hang_hoaChangeFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_mua_vat_tu_hang_hoaChange();
} */
/*static void _OnChi_mua_vat_tu_hang_hoaSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_mua_vat_tu_hang_hoaSetfocus();} */ 
/*static void _OnChi_mua_vat_tu_hang_hoaKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_mua_vat_tu_hang_hoaKillfocus();
} */
static int _OnChi_mua_vat_tu_hang_hoaCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnChi_mua_vat_tu_hang_hoaCheckValue();
} 
/*static void _OnChi_mua_tscd_khong_qua_lap_datChangeFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_mua_tscd_khong_qua_lap_datChange();
} */
/*static void _OnChi_mua_tscd_khong_qua_lap_datSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_mua_tscd_khong_qua_lap_datSetfocus();} */ 
/*static void _OnChi_mua_tscd_khong_qua_lap_datKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_mua_tscd_khong_qua_lap_datKillfocus();
} */
static int _OnChi_mua_tscd_khong_qua_lap_datCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnChi_mua_tscd_khong_qua_lap_datCheckValue();
} 
/*static void _OnChi_mua_tscd_phai_qua_lap_datChangeFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_mua_tscd_phai_qua_lap_datChange();
} */
/*static void _OnChi_mua_tscd_phai_qua_lap_datSetfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_mua_tscd_phai_qua_lap_datSetfocus();} */ 
/*static void _OnChi_mua_tscd_phai_qua_lap_datKillfocusFnc(CWnd *pWnd){
	((CPaymentOrderDialog *)pWnd)->OnChi_mua_tscd_phai_qua_lap_datKillfocus();
} */
static int _OnChi_mua_tscd_phai_qua_lap_datCheckValueFnc(CWnd *pWnd){
	return ((CPaymentOrderDialog *)pWnd)->OnChi_mua_tscd_phai_qua_lap_datCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPaymentOrderDialog *pVw = (CPaymentOrderDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPaymentOrderDialog *pVw = (CPaymentOrderDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPaymentOrderDialogFnc(CWnd *pWnd){
	 return ((CPaymentOrderDialog*)pWnd)->OnAddPaymentOrderDialog();
} 
static int _OnEditPaymentOrderDialogFnc(CWnd *pWnd){
	 return ((CPaymentOrderDialog*)pWnd)->OnEditPaymentOrderDialog();
} 
static int _OnDeletePaymentOrderDialogFnc(CWnd *pWnd){
	 return ((CPaymentOrderDialog*)pWnd)->OnDeletePaymentOrderDialog();
} 
static int _OnSavePaymentOrderDialogFnc(CWnd *pWnd){
	 return ((CPaymentOrderDialog*)pWnd)->OnSavePaymentOrderDialog();
} 
static int _OnCancelPaymentOrderDialogFnc(CWnd *pWnd){
	 return ((CPaymentOrderDialog*)pWnd)->OnCancelPaymentOrderDialog();
} 
CPaymentOrderDialog::CPaymentOrderDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 405;
	SetDefaultValues();
}
CPaymentOrderDialog::~CPaymentOrderDialog(){
}
void CPaymentOrderDialog::OnCreateComponents(){
	m_wndTrong_do_group.Create(this, _T("Trong_do"), 5, 186, 559, 331);
	m_wndTypeLabel.Create(this, _T("Type"), 5, 5, 182, 30);
	m_wndType.Create(this,187, 5, 307, 30); 
	m_wndDateLabel.Create(this, _T("Date"), 314, 6, 434, 31);
	m_wndDate.Create(this,439, 6, 559, 31); 
	m_wndProposerLabel.Create(this, _T("H? tên ngu?i thanh toán"), 5, 36, 182, 61);
	m_wndProposer.Create(this,187, 36, 559, 61); 
	m_wndDescriptionLabel.Create(this, _T("Description"), 5, 66, 182, 91);
	m_wndDescription.Create(this,187, 66, 559, 91); 
	m_wndAmountLabel.Create(this, _T("Amount"), 5, 96, 182, 121);
	m_wndAmount.Create(this,187, 96, 307, 121); 
	m_wndApprovalAmountLabel.Create(this, _T("S? ti?n duy?t TT"), 312, 96, 432, 121);
	m_wndApprovalAmount.Create(this,437, 96, 559, 121); 
	m_wndReferenceLabel.Create(this, _T("Reference"), 5, 126, 182, 151);
	m_wndReference.Create(this,187, 126, 559, 151); 
	m_wndPaymentMethodLabel.Create(this, _T("PaymentMethod"), 5, 156, 182, 181);
	m_wndPaymentMethod.Create(this,187, 156, 559, 181); 
	m_wndChi_truc_tiep_label.Create(this, _T("Chi_truc_tiep"), 5, 211, 432, 236);
	m_wndChi_truc_tiep.Create(this,437, 211, 559, 236); 
	m_wndChi_mua_vat_tu_hang_hoa_label.Create(this, _T("Chi_mua_vat_tu_hang_hoa"), 5, 241, 432, 266);
	m_wndChi_mua_vat_tu_hang_hoa.Create(this,437, 241, 559, 266); 
	m_wndChi_mua_tscd_khong_qua_lap_dat_label.Create(this, _T("Chi_mua_tscd_khong_qua_lap_dat"), 5, 271, 432, 296);
	m_wndChi_mua_tscd_khong_qua_lap_dat.Create(this,437, 271, 559, 296); 
	m_wndChi_mua_tscd_phai_qua_lap_dat_label.Create(this, _T("Chi_mua_tscd_phai_qua_lap_dat"), 5, 301, 432, 326);
	m_wndChi_mua_tscd_phai_qua_lap_dat.Create(this,437, 301, 559, 326); 
	m_wndSave.Create(this, _T("&Save"), 394, 337, 474, 362);
	m_wndClose.Create(this, _T("&Close"), 479, 337, 559, 362);

}
void CPaymentOrderDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(1024);
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndProposer.SetLimitText(1024);
	m_wndProposer.SetCheckValue(true);
	m_wndDescription.SetLimitText(1024);
	m_wndDescription.SetCheckValue(true);
	m_wndAmount.SetLimitText(1024);
	m_wndAmount.SetCheckValue(true);
	m_wndApprovalAmount.SetLimitText(1024);
	m_wndApprovalAmount.SetCheckValue(true);
	m_wndReference.SetLimitText(1024);
	m_wndReference.SetCheckValue(true);
	m_wndPaymentMethod.SetCheckValue(true);
	m_wndPaymentMethod.LimitText(35);
	m_wndChi_truc_tiep.SetLimitText(1024);
	m_wndChi_truc_tiep.SetCheckValue(true);
	m_wndChi_mua_vat_tu_hang_hoa.SetLimitText(1024);
	m_wndChi_mua_vat_tu_hang_hoa.SetCheckValue(true);
	m_wndChi_mua_tscd_khong_qua_lap_dat.SetLimitText(1024);
	m_wndChi_mua_tscd_khong_qua_lap_dat.SetCheckValue(true);
	m_wndChi_mua_tscd_phai_qua_lap_dat.SetLimitText(1024);
	m_wndChi_mua_tscd_phai_qua_lap_dat.SetCheckValue(true);




	m_wndPaymentMethod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPaymentMethod.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPaymentOrderDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	//m_wndProposer.SetEvent(WE_CHANGE, _OnProposerChangeFnc);
	//m_wndProposer.SetEvent(WE_SETFOCUS, _OnProposerSetfocusFnc);
	//m_wndProposer.SetEvent(WE_KILLFOCUS, _OnProposerKillfocusFnc);
	m_wndProposer.SetEvent(WE_CHECKVALUE, _OnProposerCheckValueFnc);
	//m_wndDescription.SetEvent(WE_CHANGE, _OnDescriptionChangeFnc);
	//m_wndDescription.SetEvent(WE_SETFOCUS, _OnDescriptionSetfocusFnc);
	//m_wndDescription.SetEvent(WE_KILLFOCUS, _OnDescriptionKillfocusFnc);
	m_wndDescription.SetEvent(WE_CHECKVALUE, _OnDescriptionCheckValueFnc);
	//m_wndAmount.SetEvent(WE_CHANGE, _OnAmountChangeFnc);
	//m_wndAmount.SetEvent(WE_SETFOCUS, _OnAmountSetfocusFnc);
	//m_wndAmount.SetEvent(WE_KILLFOCUS, _OnAmountKillfocusFnc);
	m_wndAmount.SetEvent(WE_CHECKVALUE, _OnAmountCheckValueFnc);
	//m_wndApprovalAmount.SetEvent(WE_CHANGE, _OnApprovalAmountChangeFnc);
	//m_wndApprovalAmount.SetEvent(WE_SETFOCUS, _OnApprovalAmountSetfocusFnc);
	//m_wndApprovalAmount.SetEvent(WE_KILLFOCUS, _OnApprovalAmountKillfocusFnc);
	m_wndApprovalAmount.SetEvent(WE_CHECKVALUE, _OnApprovalAmountCheckValueFnc);
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);
	m_wndPaymentMethod.SetEvent(WE_SELENDOK, _OnPaymentMethodSelendokFnc);
	//m_wndPaymentMethod.SetEvent(WE_SETFOCUS, _OnPaymentMethodSetfocusFnc);
	//m_wndPaymentMethod.SetEvent(WE_KILLFOCUS, _OnPaymentMethodKillfocusFnc);
	m_wndPaymentMethod.SetEvent(WE_SELCHANGE, _OnPaymentMethodSelectChangeFnc);
	m_wndPaymentMethod.SetEvent(WE_LOADDATA, _OnPaymentMethodLoadDataFnc);
	//m_wndPaymentMethod.SetEvent(WE_ADDNEW, _OnPaymentMethodAddNewFnc);
	//m_wndChi_truc_tiep.SetEvent(WE_CHANGE, _OnChi_truc_tiepChangeFnc);
	//m_wndChi_truc_tiep.SetEvent(WE_SETFOCUS, _OnChi_truc_tiepSetfocusFnc);
	//m_wndChi_truc_tiep.SetEvent(WE_KILLFOCUS, _OnChi_truc_tiepKillfocusFnc);
	m_wndChi_truc_tiep.SetEvent(WE_CHECKVALUE, _OnChi_truc_tiepCheckValueFnc);
	//m_wndChi_mua_vat_tu_hang_hoa.SetEvent(WE_CHANGE, _OnChi_mua_vat_tu_hang_hoaChangeFnc);
	//m_wndChi_mua_vat_tu_hang_hoa.SetEvent(WE_SETFOCUS, _OnChi_mua_vat_tu_hang_hoaSetfocusFnc);
	//m_wndChi_mua_vat_tu_hang_hoa.SetEvent(WE_KILLFOCUS, _OnChi_mua_vat_tu_hang_hoaKillfocusFnc);
	m_wndChi_mua_vat_tu_hang_hoa.SetEvent(WE_CHECKVALUE, _OnChi_mua_vat_tu_hang_hoaCheckValueFnc);
	//m_wndChi_mua_tscd_khong_qua_lap_dat.SetEvent(WE_CHANGE, _OnChi_mua_tscd_khong_qua_lap_datChangeFnc);
	//m_wndChi_mua_tscd_khong_qua_lap_dat.SetEvent(WE_SETFOCUS, _OnChi_mua_tscd_khong_qua_lap_datSetfocusFnc);
	//m_wndChi_mua_tscd_khong_qua_lap_dat.SetEvent(WE_KILLFOCUS, _OnChi_mua_tscd_khong_qua_lap_datKillfocusFnc);
	m_wndChi_mua_tscd_khong_qua_lap_dat.SetEvent(WE_CHECKVALUE, _OnChi_mua_tscd_khong_qua_lap_datCheckValueFnc);
	//m_wndChi_mua_tscd_phai_qua_lap_dat.SetEvent(WE_CHANGE, _OnChi_mua_tscd_phai_qua_lap_datChangeFnc);
	//m_wndChi_mua_tscd_phai_qua_lap_dat.SetEvent(WE_SETFOCUS, _OnChi_mua_tscd_phai_qua_lap_datSetfocusFnc);
	//m_wndChi_mua_tscd_phai_qua_lap_dat.SetEvent(WE_KILLFOCUS, _OnChi_mua_tscd_phai_qua_lap_datKillfocusFnc);
	m_wndChi_mua_tscd_phai_qua_lap_dat.SetEvent(WE_CHECKVALUE, _OnChi_mua_tscd_phai_qua_lap_datCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);

}
void CPaymentOrderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Text(pDX, m_wndProposer.GetDlgCtrlID(), m_szProposer);
	DDX_Text(pDX, m_wndDescription.GetDlgCtrlID(), m_szDescription);
	DDX_Text(pDX, m_wndAmount.GetDlgCtrlID(), m_nAmount);
	DDX_Text(pDX, m_wndApprovalAmount.GetDlgCtrlID(), m_nApprovalAmount);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_TextEx(pDX, m_wndPaymentMethod.GetDlgCtrlID(), m_szPaymentMethodKey);
	DDX_Text(pDX, m_wndChi_truc_tiep.GetDlgCtrlID(), m_nChi_truc_tiep);
	DDX_Text(pDX, m_wndChi_mua_vat_tu_hang_hoa.GetDlgCtrlID(), m_nChi_mua_vat_tu_hang_hoa);
	DDX_Text(pDX, m_wndChi_mua_tscd_khong_qua_lap_dat.GetDlgCtrlID(), m_nChi_mua_tscd_khong_qua_lap_dat);
	DDX_Text(pDX, m_wndChi_mua_tscd_phai_qua_lap_dat.GetDlgCtrlID(), m_nChi_mua_tscd_phai_qua_lap_dat);

}
void CPaymentOrderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("Proposer")] =  m_szProposer;
	m_jData[_T("Description")] =  m_szDescription;
	m_jData[_T("Amount")] =  m_nAmount;
	m_jData[_T("ApprovalAmount")] =  m_nApprovalAmount;
	m_jData[_T("Reference")] =  m_szReference;
	m_jData[_T("PaymentMethod")] =  m_szPaymentMethodKey;
	m_jData[_T("Chi_truc_tiep")] =  m_nChi_truc_tiep;
	m_jData[_T("Chi_mua_vat_tu_hang_hoa")] =  m_nChi_mua_vat_tu_hang_hoa;
	m_jData[_T("Chi_mua_tscd_khong_qua_lap_dat")] =  m_nChi_mua_tscd_khong_qua_lap_dat;
	m_jData[_T("Chi_mua_tscd_phai_qua_lap_dat")] =  m_nChi_mua_tscd_phai_qua_lap_dat;
	}
	else
	{
			
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("Proposer")].GetValue(m_szProposer);
	m_jData[_T("Description")].GetValue(m_szDescription);
	m_jData[_T("Amount")].GetValue(m_nAmount);
	m_jData[_T("ApprovalAmount")].GetValue(m_nApprovalAmount);
	m_jData[_T("Reference")].GetValue(m_szReference);
	m_jData[_T("PaymentMethod")].GetValue(m_szPaymentMethodKey);
	m_jData[_T("Chi_truc_tiep")].GetValue(m_nChi_truc_tiep);
	m_jData[_T("Chi_mua_vat_tu_hang_hoa")].GetValue(m_nChi_mua_vat_tu_hang_hoa);
	m_jData[_T("Chi_mua_tscd_khong_qua_lap_dat")].GetValue(m_nChi_mua_tscd_khong_qua_lap_dat);
	m_jData[_T("Chi_mua_tscd_phai_qua_lap_dat")].GetValue(m_nChi_mua_tscd_phai_qua_lap_dat);
	}

}
void CPaymentOrderDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPaymentOrderDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPaymentOrderDialog::SetDefaultValues(){

	m_szTypeKey.Empty();
	m_szDate.Empty();
	m_szProposer.Empty();
	m_szDescription.Empty();
	m_nAmount=0;
	m_nApprovalAmount=0;
	m_szReference.Empty();
	m_szPaymentMethodKey.Empty();
	m_nChi_truc_tiep=0;
	m_nChi_mua_vat_tu_hang_hoa=0;
	m_nChi_mua_tscd_khong_qua_lap_dat=0;
	m_nChi_mua_tscd_phai_qua_lap_dat=0;

}
int CPaymentOrderDialog::SetMode(int nMode){
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
void CPaymentOrderDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPaymentOrderDialog::OnTypeSelendok(){
	 
}
/*void CPaymentOrderDialog::OnTypeSetfocus(){
	
}*/
/*void CPaymentOrderDialog::OnTypeKillfocus(){
	
}*/
long CPaymentOrderDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndType.IsSearchKey() && !m_szTypeKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeKey
};
	m_wndType.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndType.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPaymentOrderDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPaymentOrderDialog::OnDateChange(){
	
} */
/*void CPaymentOrderDialog::OnDateSetfocus(){
	
} */
/*void CPaymentOrderDialog::OnDateKillfocus(){
	
} */
int CPaymentOrderDialog::OnDateCheckValue(){
	return 0;
} 
/*void CPaymentOrderDialog::OnProposerChange(){
	
} */
/*void CPaymentOrderDialog::OnProposerSetfocus(){
	
} */
/*void CPaymentOrderDialog::OnProposerKillfocus(){
	
} */
int CPaymentOrderDialog::OnProposerCheckValue(){
	return 0;
} 
/*void CPaymentOrderDialog::OnDescriptionChange(){
	
} */
/*void CPaymentOrderDialog::OnDescriptionSetfocus(){
	
} */
/*void CPaymentOrderDialog::OnDescriptionKillfocus(){
	
} */
int CPaymentOrderDialog::OnDescriptionCheckValue(){
	return 0;
} 
/*void CPaymentOrderDialog::OnAmountChange(){
	
} */
/*void CPaymentOrderDialog::OnAmountSetfocus(){
	
} */
/*void CPaymentOrderDialog::OnAmountKillfocus(){
	
} */
int CPaymentOrderDialog::OnAmountCheckValue(){
	return 0;
} 
/*void CPaymentOrderDialog::OnApprovalAmountChange(){
	
} */
/*void CPaymentOrderDialog::OnApprovalAmountSetfocus(){
	
} */
/*void CPaymentOrderDialog::OnApprovalAmountKillfocus(){
	
} */
int CPaymentOrderDialog::OnApprovalAmountCheckValue(){
	return 0;
} 
/*void CPaymentOrderDialog::OnReferenceChange(){
	
} */
/*void CPaymentOrderDialog::OnReferenceSetfocus(){
	
} */
/*void CPaymentOrderDialog::OnReferenceKillfocus(){
	
} */
int CPaymentOrderDialog::OnReferenceCheckValue(){
	return 0;
} 
void CPaymentOrderDialog::OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPaymentOrderDialog::OnPaymentMethodSelendok(){
	 
}
/*void CPaymentOrderDialog::OnPaymentMethodSetfocus(){
	
}*/
/*void CPaymentOrderDialog::OnPaymentMethodKillfocus(){
	
}*/
long CPaymentOrderDialog::OnPaymentMethodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPaymentMethod.IsSearchKey() && !m_szPaymentMethodKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szPaymentMethodKey
};
	m_wndPaymentMethod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPaymentMethod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPaymentOrderDialog::OnPaymentMethodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPaymentOrderDialog::OnChi_truc_tiepChange(){
	
} */
/*void CPaymentOrderDialog::OnChi_truc_tiepSetfocus(){
	
} */
/*void CPaymentOrderDialog::OnChi_truc_tiepKillfocus(){
	
} */
int CPaymentOrderDialog::OnChi_truc_tiepCheckValue(){
	return 0;
} 
/*void CPaymentOrderDialog::OnChi_mua_vat_tu_hang_hoaChange(){
	
} */
/*void CPaymentOrderDialog::OnChi_mua_vat_tu_hang_hoaSetfocus(){
	
} */
/*void CPaymentOrderDialog::OnChi_mua_vat_tu_hang_hoaKillfocus(){
	
} */
int CPaymentOrderDialog::OnChi_mua_vat_tu_hang_hoaCheckValue(){
	return 0;
} 
/*void CPaymentOrderDialog::OnChi_mua_tscd_khong_qua_lap_datChange(){
	
} */
/*void CPaymentOrderDialog::OnChi_mua_tscd_khong_qua_lap_datSetfocus(){
	
} */
/*void CPaymentOrderDialog::OnChi_mua_tscd_khong_qua_lap_datKillfocus(){
	
} */
int CPaymentOrderDialog::OnChi_mua_tscd_khong_qua_lap_datCheckValue(){
	return 0;
} 
/*void CPaymentOrderDialog::OnChi_mua_tscd_phai_qua_lap_datChange(){
	
} */
/*void CPaymentOrderDialog::OnChi_mua_tscd_phai_qua_lap_datSetfocus(){
	
} */
/*void CPaymentOrderDialog::OnChi_mua_tscd_phai_qua_lap_datKillfocus(){
	
} */
int CPaymentOrderDialog::OnChi_mua_tscd_phai_qua_lap_datCheckValue(){
	return 0;
} 
void CPaymentOrderDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPaymentOrderDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPaymentOrderDialog::OnAddPaymentOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPaymentOrderDialog::OnEditPaymentOrderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPaymentOrderDialog::OnDeletePaymentOrderDialog(){
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
 		OnCancelPaymentOrderDialog();
 	}
	return 0;
}
int CPaymentOrderDialog::OnSavePaymentOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
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
 		//OnPaymentOrderDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPaymentOrderDialog::OnCancelPaymentOrderDialog(){
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
int CPaymentOrderDialog::OnPaymentOrderDialogListLoadData(){
	return 0;
}
