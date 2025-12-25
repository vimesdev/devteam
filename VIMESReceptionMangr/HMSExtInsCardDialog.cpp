#include "HMSExtInsCardDialog.h"
#include "MainFrm.h"
//#include "StringUtil.h"
#include "resource.h"
#include "Excel.h"
/*static void _OnPatientNoChangeFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnPatientNoChange();
} */
/*static void _OnPatientNoSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnPatientNoSetfocus();} */ 
/*static void _OnPatientNoKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnPatientNoKillfocus();
} */
static int _OnPatientNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog *)pWnd)->OnPatientNoCheckValue();
} 
/*static void _OnDocumentNoChangeFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnDocumentNoChange();
} */
/*static void _OnDocumentNoSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnDocumentNoSetfocus();} */ 
/*static void _OnDocumentNoKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnDocumentNoKillfocus();
} */
static int _OnDocumentNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog *)pWnd)->OnDocumentNoCheckValue();
} 
/*static void _OnPatientNameChangeFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnPatientNameChange();
} */
/*static void _OnPatientNameSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnPatientNameSetfocus();} */ 
/*static void _OnPatientNameKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnPatientNameKillfocus();
} */
static int _OnPatientNameCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog *)pWnd)->OnPatientNameCheckValue();
} 
static void _OnCompanySelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExtInsCardDialog* )pWnd)->OnCompanySelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCompanySelendokFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnCompanySelendok();
}
/*static void _OnCompanySetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnCompanyKillfocus();
}*/
/*static void _OnCompanyKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnCompanyKillfocus();
}*/
static long _OnCompanyLoadDataFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog *)pWnd)->OnCompanyLoadData();
}
/*static void _OnCompanyAddNewFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnCompanyAddNew();
}*/
/*static void _OnCardNoChangeFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnCardNoChange();
} */
/*static void _OnCardNoSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnCardNoSetfocus();} */ 
/*static void _OnCardNoKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnCardNoKillfocus();
} */
static int _OnCardNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog *)pWnd)->OnCardNoCheckValue();
} 
static void _OnCheckSelectFnc(CWnd *pWnd){
	CHMSExtInsCardDialog *pVw = (CHMSExtInsCardDialog *)pWnd;
	pVw->OnCheckSelect();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSExtInsCardDialog* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog *)pWnd)->OnTypeLoadData();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnRegDateChangeFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnRegDateChange();
} */
/*static void _OnRegDateSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnRegDateSetfocus();} */ 
/*static void _OnRegDateKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnRegDateKillfocus();
} */
static int _OnRegDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog *)pWnd)->OnRegDateCheckValue();
} 
/*static void _OnExpDateChangeFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnExpDateChange();
} */
/*static void _OnExpDateSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnExpDateSetfocus();} */ 
/*static void _OnExpDateKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnExpDateKillfocus();
} */
static int _OnExpDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog *)pWnd)->OnExpDateCheckValue();
} 
/*static void _OnOutpatientPaymentChangeFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnOutpatientPaymentChange();
} */
/*static void _OnOutpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnOutpatientPaymentSetfocus();} */ 
/*static void _OnOutpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnOutpatientPaymentKillfocus();
} */
static int _OnOutpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog *)pWnd)->OnOutpatientPaymentCheckValue();
} 
/*static void _OnInpatientPaymentChangeFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnInpatientPaymentChange();
} */
/*static void _OnInpatientPaymentSetfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnInpatientPaymentSetfocus();} */ 
/*static void _OnInpatientPaymentKillfocusFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog *)pWnd)->OnInpatientPaymentKillfocus();
} */
static int _OnInpatientPaymentCheckValueFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog *)pWnd)->OnInpatientPaymentCheckValue();
}

static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSExtInsCardDialog *pVw = (CHMSExtInsCardDialog *)pWnd;
	pVw->OnDeleteSelect();
}

static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSExtInsCardDialog *pVw = (CHMSExtInsCardDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSExtInsCardDialog *pVw = (CHMSExtInsCardDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSExtInsCardDialog *pVw = (CHMSExtInsCardDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSExtInsCardDialog *pVw = (CHMSExtInsCardDialog *)pWnd;
	pVw->OnCloseSelect();
} 

static void _OnCompanySelectFnc(CWnd *pWnd){
	CHMSExtInsCardDialog *pVw = (CHMSExtInsCardDialog *)pWnd;
	pVw->OnCompanySelect();
}

static int _OnAddHMSExtInsCardDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsCardDialog*)pWnd)->OnAddHMSExtInsCardDialog();
} 
static int _OnUpdateHMSExtInsCardDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsCardDialog*)pWnd)->OnUpdateHMSExtInsCardDialog();
} 
static int _OnDeleteHMSExtInsCardDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsCardDialog*)pWnd)->OnDeleteHMSExtInsCardDialog();
} 
static int _OnSaveHMSExtInsCardDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsCardDialog*)pWnd)->OnSaveHMSExtInsCardDialog();
} 
static int _OnCancelHMSExtInsCardDialogFnc(CWnd *pWnd){
	 return ((CHMSExtInsCardDialog*)pWnd)->OnCancelHMSExtInsCardDialog();
}
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSExtInsCardDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSExtInsCardDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSExtInsCardDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
}
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSExtInsCardDialog*)pWnd)->OnListDeleteItem();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSExtInsCardDialog *pVw = (CHMSExtInsCardDialog *)pWnd;
	pVw->OnAddSelect();
}

CHMSExtInsCardDialog::CHMSExtInsCardDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 525;
	m_nDlgHeight = 275;
	SetDefaultValues();
	m_nPatientNo=0;
	m_nDocumentNo=0;
	m_szPatientName.Empty();
}
CHMSExtInsCardDialog::~CHMSExtInsCardDialog()
{
}
void CHMSExtInsCardDialog::OnCreateComponents()
{
	/*m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 130, 55);
	m_wndPatientNo.Create(this,135, 30, 255, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 260, 30, 380, 55);
	m_wndDocumentNo.Create(this,385, 30, 505, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 130, 85);
	m_wndCardList.Create(this, _T("Card List"), 6, 273, 511, 424);
	m_wndCardInformation.Create(this, _T("Card Information"), 5, 5, 510, 240);
	m_wndPatientName.Create(this,135, 60, 505, 85); 
	m_wndCompanyLabel.Create(this, _T("Ins Company"), 10, 90, 130, 115);
	m_wndCompany.Create(this,135, 90, 505, 115); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 120, 130, 145);
	m_wndCardNo.Create(this,135, 120, 475, 145); 
	m_wndCheck.Create(this, _T("@"), 480, 120, 505, 145);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 150, 130, 175);
	m_wndType.Create(this,135, 150, 505, 175); 
	m_wndRegDateLabel.Create(this, _T("Reg Date"), 10, 180, 130, 205);
	m_wndRegDate.Create(this,135, 180, 255, 205); 
	m_wndExpDateLabel.Create(this, _T("Exp Date"), 260, 180, 380, 205);
	m_wndExpDate.Create(this,385, 180, 505, 205); 
	m_wndOutpatientPaymentLabel.Create(this, _T("Outpatient Payment"), 10, 210, 130, 235);
	m_wndOutpatientPayment.Create(this,135, 210, 255, 235); 
	m_wndInpatientPaymentLabel.Create(this, _T("Inpatient Payment"), 260, 210, 380, 235);
	m_wndInpatientPayment.Create(this,385, 210, 505, 235); 
	m_wndDelete.Create(this, _T("&Delete"), 5, 245, 85, 270);
	m_wndUpdate.Create(this, _T("&Update"), 175, 245, 255, 270);
	m_wndSave.Create(this, _T("&Save"), 260, 245, 340, 270);
	m_wndCancel.Create(this, _T("&Cancel"), 345, 245, 425, 270);
	m_wndClose.Create(this, _T("&Close"), 430, 245, 510, 270);
	m_wndList.Create(this,6, 294, 511, 450);

	m_wndDelete.ModifyStyle(WS_TABSTOP, 0);*/

	m_wndCardList.Create(this, _T("Danh sách thẻ"), 6, 273, 661, 454);
	m_wndCardInformation.Create(this, _T("Card Information"), 5, 5, 661, 240);
	m_wndPatientNoLabel.Create(this, _T("Patient No"), 10, 30, 130, 55);
	m_wndPatientNo.Create(this,135, 30, 311, 55); 
	m_wndDocumentNoLabel.Create(this, _T("Document No"), 316, 30, 480, 55);
	m_wndDocumentNo.Create(this,485, 30, 661, 55); 
	m_wndPatientNameLabel.Create(this, _T("Patient Name"), 10, 60, 130, 85);
	m_wndPatientName.Create(this,135, 60, 661, 85); 
	m_wndCompanyLabel.Create(this, _T("Ins Company"), 10, 90, 130, 115);
	m_wndCompany.Create(this,135, 90, 661, 115); 
	m_wndCardNoLabel.Create(this, _T("Card No"), 10, 120, 130, 145);
	m_wndCardNo.Create(this,135, 120, 631, 145); 
	m_wndCheck.Create(this, _T("@"), 636, 120, 661, 145);
	m_wndTypeLabel.Create(this, _T("Type"), 10, 150, 130, 175);
	m_wndType.Create(this,135, 150, 661, 175); 
	m_wndRegDateLabel.Create(this, _T("Reg Date"), 10, 180, 130, 205);
	m_wndRegDate.Create(this,135, 180, 311, 205); 
	m_wndExpDateLabel.Create(this, _T("Exp Date"), 316, 180, 480, 205);
	m_wndExpDate.Create(this,485, 180, 661, 205); 
	m_wndOutpatientPaymentLabel.Create(this, _T("Trần ngoại trú"), 10, 210, 130, 235);
	m_wndOutpatientPayment.Create(this,135, 210, 311, 235); 
	m_wndInpatientPaymentLabel.Create(this, _T("Trần nội trú"), 316, 210, 480, 235);
	m_wndInpatientPayment.Create(this,485, 210, 661, 235); 
	m_wndAdd.Create(this, _T("&Add"), 156, 245, 236, 270);
	m_wndUpdate.Create(this, _T("&Edit"), 240, 245, 320, 270);
	m_wndDelete.Create(this, _T("&Delete"), 325, 245, 405, 270);
	m_wndSave.Create(this, _T("&Save"), 410, 245, 490, 270);
	m_wndCancel.Create(this, _T("&Cancel"), 495, 245, 575, 270);
	m_wndClose.Create(this, _T("&Close"), 580, 245, 660, 270);
	m_wndList.Create(this,6, 294, 661, 450);
}
void CHMSExtInsCardDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndPatientNo.SetLimitText(22);
//	m_wndPatientNo.SetCheckValue(true);
	m_wndDocumentNo.SetLimitText(22);
//	m_wndDocumentNo.SetCheckValue(true);
	m_wndPatientName.SetLimitText(35);
//	m_wndPatientName.SetCheckValue(true);
	m_wndCompany.SetCheckValue(true);
	m_wndCompany.LimitText(22);
	m_wndCardNo.SetLimitText(30);
	m_wndCardNo.SetCheckValue(true);
	m_wndCardNo.ModifyStyle(0, ES_UPPERCASE);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(3);
	m_wndRegDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndRegDate.SetCheckValue(true);
	//m_wndExpDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndExpDate.SetCheckValue(true);
	m_wndOutpatientPayment.SetLimitText(22);
	m_wndOutpatientPayment.SetCheckValue(false);
	m_wndInpatientPayment.SetLimitText(22);
	m_wndInpatientPayment.SetCheckValue(false);
	m_wndCheck.ModifyStyle(WS_TABSTOP, 0);

	m_wndOutpatientPayment.SetCurrencyFormat(true);
	m_wndInpatientPayment.SetCurrencyFormat(true);

	m_wndCompany.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndCompany.InsertColumn(1, _T("Code"), CFMT_TEXT, 100);
	m_wndCompany.InsertColumn(2, _T("Name"), CFMT_TEXT, 250);
	m_wndCompany.Format(3, 2);
	
	m_wndPatientNo.SetReadOnly(true);
	m_wndDocumentNo.SetReadOnly(true);
	m_wndPatientName.SetReadOnly(true);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Người tạo"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(2, _T("Ngày tạo"), CFMT_DATETIME, 115);
	m_wndList.InsertColumn(3, _T("Trần ngoại trú"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(4, _T("Trần nội trú"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(5, _T("TT thanh toán"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(6, _T("Công ty"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(7, _T("Số thẻ"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(8, _T("Loại thẻ"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("Ngày đăng ký"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("Ngày hết hạn"), CFMT_TEXT, 0);

	m_hms_extins_cardTbl.SetTableName(_T("hms_extins_card"));
	m_hms_extins_cardTbl.AddField(_T("HEC_EXTINS_CARD_ID"), dfLong); 
	m_hms_extins_cardTbl.AddField(_T("HEC_USERID"), dfText, 15); 
	m_hms_extins_cardTbl.AddField(_T("HEC_PATIENTNO"), dfLong); 
	m_hms_extins_cardTbl.AddField(_T("HEC_DOCNO"), dfLong); 
	m_hms_extins_cardTbl.AddField(_T("HEC_EXTINS_COMPANY_ID"), dfLong); 
	m_hms_extins_cardTbl.AddField(_T("HEC_CARDNO"), dfText, 15); 
	m_hms_extins_cardTbl.AddField(_T("HEC_TYPE"), dfText, 3); 
	m_hms_extins_cardTbl.AddField(_T("HEC_OUTPATIENT_PAYMENT"), dfDouble); 
	m_hms_extins_cardTbl.AddField(_T("HEC_INPATIENT_PAYMENT"), dfDouble); 
	m_hms_extins_cardTbl.AddField(_T("HEC_REGDATE"), dfText); 
	m_hms_extins_cardTbl.AddField(_T("HEC_EXPDATE"), dfText);

}
void CHMSExtInsCardDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndPatientNo.SetEvent(WE_CHANGE, _OnPatientNoChangeFnc);
	//m_wndPatientNo.SetEvent(WE_SETFOCUS, _OnPatientNoSetfocusFnc);
	//m_wndPatientNo.SetEvent(WE_KILLFOCUS, _OnPatientNoKillfocusFnc);
	m_wndPatientNo.SetEvent(WE_CHECKVALUE, _OnPatientNoCheckValueFnc);
	//m_wndDocumentNo.SetEvent(WE_CHANGE, _OnDocumentNoChangeFnc);
	//m_wndDocumentNo.SetEvent(WE_SETFOCUS, _OnDocumentNoSetfocusFnc);
	//m_wndDocumentNo.SetEvent(WE_KILLFOCUS, _OnDocumentNoKillfocusFnc);
	m_wndDocumentNo.SetEvent(WE_CHECKVALUE, _OnDocumentNoCheckValueFnc);
	//m_wndPatientName.SetEvent(WE_CHANGE, _OnPatientNameChangeFnc);
	//m_wndPatientName.SetEvent(WE_SETFOCUS, _OnPatientNameSetfocusFnc);
	//m_wndPatientName.SetEvent(WE_KILLFOCUS, _OnPatientNameKillfocusFnc);
	m_wndPatientName.SetEvent(WE_CHECKVALUE, _OnPatientNameCheckValueFnc);
	m_wndCompany.SetEvent(WE_SELENDOK, _OnCompanySelendokFnc);
	//m_wndCompany.SetEvent(WE_SETFOCUS, _OnCompanySetfocusFnc);
	//m_wndCompany.SetEvent(WE_KILLFOCUS, _OnCompanyKillfocusFnc);
	m_wndCompany.SetEvent(WE_SELCHANGE, _OnCompanySelectChangeFnc);
	m_wndCompany.SetEvent(WE_LOADDATA, _OnCompanyLoadDataFnc);
	//m_wndCompany.SetEvent(WE_ADDNEW, _OnCompanyAddNewFnc);
	//m_wndCardNo.SetEvent(WE_CHANGE, _OnCardNoChangeFnc);
	//m_wndCardNo.SetEvent(WE_SETFOCUS, _OnCardNoSetfocusFnc);
	//m_wndCardNo.SetEvent(WE_KILLFOCUS, _OnCardNoKillfocusFnc);
	m_wndCardNo.SetEvent(WE_CHECKVALUE, _OnCardNoCheckValueFnc);
	m_wndCheck.SetEvent(WE_CLICK, _OnCheckSelectFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndRegDate.SetEvent(WE_CHANGE, _OnRegDateChangeFnc);
	//m_wndRegDate.SetEvent(WE_SETFOCUS, _OnRegDateSetfocusFnc);
	//m_wndRegDate.SetEvent(WE_KILLFOCUS, _OnRegDateKillfocusFnc);
	m_wndRegDate.SetEvent(WE_CHECKVALUE, _OnRegDateCheckValueFnc);
	//m_wndExpDate.SetEvent(WE_CHANGE, _OnExpDateChangeFnc);
	//m_wndExpDate.SetEvent(WE_SETFOCUS, _OnExpDateSetfocusFnc);
	//m_wndExpDate.SetEvent(WE_KILLFOCUS, _OnExpDateKillfocusFnc);
	m_wndExpDate.SetEvent(WE_CHECKVALUE, _OnExpDateCheckValueFnc);
	//m_wndOutpatientPayment.SetEvent(WE_CHANGE, _OnOutpatientPaymentChangeFnc);
	//m_wndOutpatientPayment.SetEvent(WE_SETFOCUS, _OnOutpatientPaymentSetfocusFnc);
	//m_wndOutpatientPayment.SetEvent(WE_KILLFOCUS, _OnOutpatientPaymentKillfocusFnc);
	m_wndOutpatientPayment.SetEvent(WE_CHECKVALUE, _OnOutpatientPaymentCheckValueFnc);
	//m_wndInpatientPayment.SetEvent(WE_CHANGE, _OnInpatientPaymentChangeFnc);
	//m_wndInpatientPayment.SetEvent(WE_SETFOCUS, _OnInpatientPaymentSetfocusFnc);
	//m_wndInpatientPayment.SetEvent(WE_KILLFOCUS, _OnInpatientPaymentKillfocusFnc);
	m_wndInpatientPayment.SetEvent(WE_CHECKVALUE, _OnInpatientPaymentCheckValueFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndCompanyLabel.SetHyperlink(true);
	m_wndCompanyLabel.SetEvent(WE_CLICK, _OnCompanySelectFnc);

	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Xóa thẻ"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

	GetDataToScreen();
}
void CHMSExtInsCardDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndPatientNo.GetDlgCtrlID(), m_nPatientNo);
	DDX_Text(pDX, m_wndDocumentNo.GetDlgCtrlID(), m_nDocumentNo);
	DDX_Text(pDX, m_wndPatientName.GetDlgCtrlID(), m_szPatientName);
	DDX_TextEx(pDX, m_wndCompany.GetDlgCtrlID(), m_szCompanyKey);
	DDX_Text(pDX, m_wndCardNo.GetDlgCtrlID(), m_szCardNo);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_TextEx(pDX, m_wndRegDate.GetDlgCtrlID(), m_szRegDate);
	DDX_TextEx(pDX, m_wndExpDate.GetDlgCtrlID(), m_szExpDate);
	DDX_Text(pDX, m_wndOutpatientPayment.GetDlgCtrlID(), m_nOutpatientPayment);
	DDX_Text(pDX, m_wndInpatientPayment.GetDlgCtrlID(), m_nInpatientPayment);

}
void CHMSExtInsCardDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("PatientNo")] =  m_nPatientNo;
	m_jData[_T("DocumentNo")] =  m_nDocumentNo;
	m_jData[_T("PatientName")] =  m_szPatientName;
	m_jData[_T("Company")] =  m_szCompanyKey;
	m_jData[_T("CardNo")] =  m_szCardNo;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("RegDate")] =  m_szRegDate;
	m_jData[_T("ExpDate")] =  m_szExpDate;
	m_jData[_T("OutpatientPayment")] =  m_nOutpatientPayment;
	m_jData[_T("InpatientPayment")] =  m_nInpatientPayment;
	}
	else
	{
			
	m_jData[_T("PatientNo")].GetValue(m_nPatientNo);
	m_jData[_T("DocumentNo")].GetValue(m_nDocumentNo);
	m_jData[_T("PatientName")].GetValue(m_szPatientName);
	m_jData[_T("Company")].GetValue(m_szCompanyKey);
	m_jData[_T("CardNo")].GetValue(m_szCardNo);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("RegDate")].GetValue(m_szRegDate);
	m_jData[_T("ExpDate")].GetValue(m_szExpDate);
	m_jData[_T("OutpatientPayment")].GetValue(m_nOutpatientPayment);
	m_jData[_T("InpatientPayment")].GetValue(m_nInpatientPayment);
	}

}
void CHMSExtInsCardDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_nDocumentNo = pMF->m_nDocumentNo;
	//m_nPatientNo = pMF->m_nPatientNo;
	//m_szPatientName = pMF->m_wndRegistration.m_szPatientName;
	//_msg(_T("%ld"), m_nPatientNo);
	//_msg(_T("%s"), m_szPatientName);
	szSQL.Format(_T("SELECT * FROM hms_extins_card where hec_docno = %ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	SetDefaultValues();
	OnListLoadData();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("HEC_EXTINS_CARD_ID"), m_nExtInsCardId);
		rs.GetValue(_T("HEC_EXTINS_COMPANY_ID"), m_szCompanyKey);
		rs.GetValue(_T("HEC_CARDNO"), m_szCardNo);
		rs.GetValue(_T("HEC_TYPE"), m_szTypeKey);
		rs.GetValue(_T("HEC_OUTPATIENT_PAYMENT"), m_nOutpatientPayment);
		rs.GetValue(_T("HEC_INPATIENT_PAYMENT"), m_nInpatientPayment);
		rs.GetValue(_T("HEC_REGDATE"), m_szRegDate);
		rs.GetValue(_T("HEC_EXPDATE"), m_szExpDate);
		m_szPatientName = pMF->m_wndRegistration.m_szPatientName;
		m_nPatientNo = pMF->m_nPatientNo;
		SetMode(VM_VIEW);
	}
	else
	{
		SetMode(VM_NONE);
	}

}
void CHMSExtInsCardDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nPatientNo = pMF->m_nPatientNo;
	m_hms_extins_cardTbl.SetValue(_T("HEC_EXTINS_CARD_ID"), m_nExtInsCardId);
	m_hms_extins_cardTbl.SetValue(_T("HEC_USERID"), pMF->GetCurrentUser());
	m_hms_extins_cardTbl.SetValue(_T("HEC_PATIENTNO"), m_nPatientNo);
	m_hms_extins_cardTbl.SetValue(_T("HEC_DOCNO"), m_nDocumentNo);
	m_hms_extins_cardTbl.SetValue(_T("HEC_EXTINS_COMPANY_ID"), m_szCompanyKey);
	m_hms_extins_cardTbl.SetValue(_T("HEC_CARDNO"), m_szCardNo);
	m_hms_extins_cardTbl.SetValue(_T("HEC_TYPE"), m_szTypeKey);
	m_hms_extins_cardTbl.SetValue(_T("HEC_OUTPATIENT_PAYMENT"), m_nOutpatientPayment);
	m_hms_extins_cardTbl.SetValue(_T("HEC_INPATIENT_PAYMENT"), m_nInpatientPayment);
	m_hms_extins_cardTbl.SetValue(_T("HEC_REGDATE"), m_szRegDate);
	m_hms_extins_cardTbl.SetValue(_T("HEC_EXPDATE"), m_szExpDate);

}
void CHMSExtInsCardDialog::SetDefaultValues(){

	
	m_szCompanyKey.Empty();
	m_szCardNo.Empty();
	m_szTypeKey.Empty();
	m_szRegDate.Empty();
	m_szExpDate.Empty();
	m_nOutpatientPayment=0;
	m_nInpatientPayment=0;
	m_nExtInsCardId=0;

}
int CHMSExtInsCardDialog::SetMode(int nMode)
{
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
			m_wndCompany.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, -1);
			m_wndCompany.SetFocus();
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
		m_wndClose.EnableWindow(true);
 		return nOldMode;
}
/*void CHMSExtInsCardDialog::OnPatientNoChange(){
	
} */
/*void CHMSExtInsCardDialog::OnPatientNoSetfocus(){
	
} */
/*void CHMSExtInsCardDialog::OnPatientNoKillfocus(){
	
} */
int CHMSExtInsCardDialog::OnPatientNoCheckValue(){
	return 0;
} 
/*void CHMSExtInsCardDialog::OnDocumentNoChange(){
	
} */
/*void CHMSExtInsCardDialog::OnDocumentNoSetfocus(){
	
} */
/*void CHMSExtInsCardDialog::OnDocumentNoKillfocus(){
	
} */
int CHMSExtInsCardDialog::OnDocumentNoCheckValue(){
	return 0;
} 
/*void CHMSExtInsCardDialog::OnPatientNameChange(){
	
} */
/*void CHMSExtInsCardDialog::OnPatientNameSetfocus(){
	
} */
/*void CHMSExtInsCardDialog::OnPatientNameKillfocus(){
	
} */
int CHMSExtInsCardDialog::OnPatientNameCheckValue(){
	return 0;
} 
void CHMSExtInsCardDialog::OnCompanySelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsCardDialog::OnCompanySelendok(){
	 
}
/*void CHMSExtInsCardDialog::OnCompanySetfocus(){
	
}*/
/*void CHMSExtInsCardDialog::OnCompanyKillfocus(){
	
}*/
long CHMSExtInsCardDialog::OnCompanyLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCompany.IsSearchKey() && str2long(m_szCompanyKey) > 0 ){
		szWhere.Format(_T(" and hec_extins_company_id=%ld "), str2long(m_szCompanyKey));
	};
	m_wndCompany.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hec_extins_company_id as id, hec_code as code, hec_name as name ") \
		_T(" FROM hms_extins_company WHERE hec_isactive='Y' %s ORDER BY hec_name "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCompany.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSExtInsCardDialog::OnCompanyAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExtInsCardDialog::OnCardNoChange(){
	
} */
/*void CHMSExtInsCardDialog::OnCardNoSetfocus(){
	
} */
/*void CHMSExtInsCardDialog::OnCardNoKillfocus(){
	
} */
int CHMSExtInsCardDialog::OnCardNoCheckValue(){
	return 0;
} 
void CHMSExtInsCardDialog::OnCheckSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsCardDialog::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSExtInsCardDialog::OnTypeSelendok(){
	 
}
/*void CHMSExtInsCardDialog::OnTypeSetfocus(){
	
}*/
/*void CHMSExtInsCardDialog::OnTypeKillfocus(){
	
}*/
long CHMSExtInsCardDialog::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndType, _T("HMS_EXTINS_TYPE"), m_szTypeKey);

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
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSExtInsCardDialog::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSExtInsCardDialog::OnRegDateChange(){
	
} */
/*void CHMSExtInsCardDialog::OnRegDateSetfocus(){
	
} */
/*void CHMSExtInsCardDialog::OnRegDateKillfocus(){
	
} */
int CHMSExtInsCardDialog::OnRegDateCheckValue(){
	return 0;
} 
/*void CHMSExtInsCardDialog::OnExpDateChange(){
	
} */
/*void CHMSExtInsCardDialog::OnExpDateSetfocus(){
	
} */
/*void CHMSExtInsCardDialog::OnExpDateKillfocus(){
	
} */
int CHMSExtInsCardDialog::OnExpDateCheckValue(){
	int n = CompareDate(m_szRegDate, m_szExpDate);
//_tprintf(_T("\r\n%d"), n);
	if(n > 0)
		return -1;
	return 0;
} 
/*void CHMSExtInsCardDialog::OnOutpatientPaymentChange(){
	
} */
/*void CHMSExtInsCardDialog::OnOutpatientPaymentSetfocus(){
	
} */
/*void CHMSExtInsCardDialog::OnOutpatientPaymentKillfocus(){
	
} */
int CHMSExtInsCardDialog::OnOutpatientPaymentCheckValue(){
	if(m_nOutpatientPayment <= 0)
		return -1;
	return 0;
} 
/*void CHMSExtInsCardDialog::OnInpatientPaymentChange(){
	
} */
/*void CHMSExtInsCardDialog::OnInpatientPaymentSetfocus(){
	
} */
/*void CHMSExtInsCardDialog::OnInpatientPaymentKillfocus(){
	
} */
int CHMSExtInsCardDialog::OnInpatientPaymentCheckValue(){
	if(m_nInpatientPayment <=0)
		return -1;
	return 0;
}

void CHMSExtInsCardDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSExtInsCardDialog();
}

void CHMSExtInsCardDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSExtInsCardDialog();
	
}

void CHMSExtInsCardDialog::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnUpdateHMSExtInsCardDialog();
} 
void CHMSExtInsCardDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSExtInsCardDialog();
	OnListLoadData();
} 
void CHMSExtInsCardDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSExtInsCardDialog();
} 
void CHMSExtInsCardDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
}

void CHMSExtInsCardDialog::OnListDblClick(){
	
} 
void CHMSExtInsCardDialog::OnListSelectChange(int nOldItem, int nNewItem)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_nExtInsCardId = str2long(m_wndList.GetItemText(nNewItem, 0));
	m_nOutpatientPayment = str2long(m_wndList.GetItemText(nNewItem, 3));
	m_nInpatientPayment = str2long(m_wndList.GetItemText(nNewItem, 4));
	m_szCompanyKey = m_wndList.GetItemText(nNewItem, 6);
	m_szCardNo = m_wndList.GetItemText(nNewItem, 7);
	m_szTypeKey = m_wndList.GetItemText(nNewItem, 8);
	m_szRegDate = m_wndList.GetItemText(nNewItem, 9);
	m_szExpDate = m_wndList.GetItemText(nNewItem, 10);
	UpdateData(false);
} 
int CHMSExtInsCardDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSExtInsCardDialog();
	 return 0;
} 
long CHMSExtInsCardDialog::OnListLoadData()
{
    CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0, nIndex = 1;
	m_nDocumentNo = pMF->m_nDocumentNo;

	szSQL.Format(_T(" select ") \
				_T(" HEC_EXTINS_CARD_ID as id,") \
				_T(" HEC_CREATEDBY as nguoi_tao,") \
				_T(" HEC_CREATEDDATE as ngay_tao,") \
				_T(" HEC_OUTPATIENT_PAYMENT as tran_ngoaitru,") \
				_T(" HEC_INPATIENT_PAYMENT as tran_noitru,") \
				_T(" HEC_PAYMENT as thanh_toan,") \
				_T(" HEC_EXTINS_COMPANY_ID as congty,") \
				_T(" HEC_CARDNO as sothe,") \
				_T(" HEC_TYPE as loaithe,") \
				_T(" HEC_REGDATE as ngaydangky,") \
				_T(" HEC_EXPDATE as ngayhethan") \
				_T(" from hms_extins_card where hec_docno=%ld") \
				_T(" order by HEC_EXTINS_CARD_ID"),m_nDocumentNo);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("id")), 			
			rs.GetValue(_T("nguoi_tao")),
			rs.GetValue(_T("ngay_tao")), 
			rs.GetValue(_T("tran_ngoaitru")), 
			rs.GetValue(_T("tran_noitru")), 
			rs.GetValue(_T("thanh_toan")),
			rs.GetValue(_T("congty")),
			rs.GetValue(_T("sothe")),
			rs.GetValue(_T("loaithe")),
			rs.GetValue(_T("ngaydangky")),
			rs.GetValue(_T("ngayhethan")),NULL);		
			
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}

int CHMSExtInsCardDialog::OnAddHMSExtInsCardDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSExtInsCardDialog::OnUpdateHMSExtInsCardDialog(){
 	if(GetMode() != VM_VIEW && GetMode() != VM_NONE)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSExtInsCardDialog::OnDeleteHMSExtInsCardDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if (nSel < 0)
	{
		return -1;
	}

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	szSQL.Format(_T("HMS_EXTINS_CARD_DELETE(%ld, '%s') "), m_nExtInsCardId, pMF->GetCurrentUser() );
_tprintf(_T("\r\n%s"), szSQL);
 	int ret = str2long(pMF->ExecDML(szSQL));
 	if(ret >= 0)
	{
		//ShowMessageBox(_T("Đã xóa được thẻ"));
		GetDataToScreen();
		OnListLoadData();
 	}
	else
	{
		ShowMessageBox(_T("Không xóa được thẻ"));
	}

	return 0;
}
int CHMSExtInsCardDialog::OnSaveHMSExtInsCardDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	if (GetMode() == VM_ADD)
		{
		szSQL.Format(_T("HMS_EXTINS_CARD_CREATE_V2(%s)"), m_hms_extins_cardTbl.FormatSQL());
		}
		else
		{
		szSQL.Format(_T("HMS_EXTINS_CARD_UPDATE_V2(%s)"), m_hms_extins_cardTbl.FormatSQL());
		}
 	int ret = str2int(pMF->ExecDML(szSQL));
	_tprintf(_T("%d: %s"), ret, szSQL);
	//_msg(_T("%s"), szSQL);
 	if(ret > 0)
 	{
 		//OnHMSExtInsCardDialogListLoadData();
 		SetMode(VM_VIEW);
		m_wndAdd.SetFocus();
 	}
 	else
 	{
		ShowMessageBox(_T("Không cập nhật được thẻ"));

 	}
 	return ret;
 	return 0;
}
int CHMSExtInsCardDialog::OnCancelHMSExtInsCardDialog(){
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
int CHMSExtInsCardDialog::OnHMSExtInsCardDialogListLoadData(){
	return 0;
}

#include "HMSExtInsCompanyDialog.h"
void CHMSExtInsCardDialog::OnCompanySelect()
{
	CHMSExtInsCompanyDialog dlg(this);
	dlg.DoModal();
}