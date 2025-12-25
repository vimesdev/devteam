#include "SignatureFormListDlg.h"
#include "MainFrm.h"
#include "StringToken.h"
#include "HMSSignatureFormLnSetupDlg.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CSignatureFormListDlg*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CSignatureFormListDlg*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CSignatureFormListDlg*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 

static int _OnListDeactiveItemFnc(CWnd* pWnd) {
	return ((CSignatureFormListDlg*)pWnd)->OnListDeactiveItem();
}

static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CSignatureFormListDlg*)pWnd)->OnListDeleteItem();
}

/*static void _OnSearchChangeFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnSearchChange();
} */
/*static void _OnSearchSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnSearchSetfocus();} */ 
/*static void _OnSearchKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnSearchKillfocus();
} */
static int _OnSearchCheckValueFnc(CWnd *pWnd){
	return ((CSignatureFormListDlg *)pWnd)->OnSearchCheckValue();
} 
static void _OnTypeSelectSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSignatureFormListDlg* )pWnd)->OnTypeSelectSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelectSelendokFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTypeSelectSelendok();
}
/*static void _OnTypeSelectSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTypeSelectKillfocus();
}*/
/*static void _OnTypeSelectKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTypeSelectKillfocus();
}*/
static long _OnTypeSelectLoadDataFnc(CWnd *pWnd){
	return ((CSignatureFormListDlg *)pWnd)->OnTypeSelectLoadData();
}
/*static void _OnTypeSelectAddNewFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTypeSelectAddNew();
}*/
/*static void _OnFileNameChangeFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnFileNameChange();
} */
/*static void _OnFileNameSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnFileNameSetfocus();} */ 
/*static void _OnFileNameKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnFileNameKillfocus();
} */
static int _OnFileNameCheckValueFnc(CWnd *pWnd){
	return ((CSignatureFormListDlg *)pWnd)->OnFileNameCheckValue();
} 
/*static void _OnTitleChangeFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTitleChange();
} */
/*static void _OnTitleSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTitleSetfocus();} */ 
/*static void _OnTitleKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTitleKillfocus();
} */
static int _OnTitleCheckValueFnc(CWnd *pWnd){
	return ((CSignatureFormListDlg *)pWnd)->OnTitleCheckValue();
} 
static void _OnTypeSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CSignatureFormListDlg* )pWnd)->OnTypeSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTypeSelendokFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTypeSelendok();
}
/*static void _OnTypeSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTypeKillfocus();
}*/
/*static void _OnTypeKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTypeKillfocus();
}*/
static long _OnTypeLoadDataFnc(CWnd *pWnd){
	return ((CSignatureFormListDlg *)pWnd)->OnTypeLoadData();
}
static void _OnMultilSheetSelectFnc(CWnd* pWnd) {
	((CSignatureFormListDlg*)pWnd)->OnMultilSheetSelect();
}
static void _OnInOptSelectFnc(CWnd* pWnd) {
	((CSignatureFormListDlg*)pWnd)->OnInOptSelect();
}
static void _OnModuleSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CSignatureFormListDlg*)pWnd)->OnModuleSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnModuleSelendokFnc(CWnd* pWnd) {
	((CSignatureFormListDlg*)pWnd)->OnModuleSelendok();
}
/*static void _OnModuleSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnModuleKillfocus();
}*/
/*static void _OnModuleKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnModuleKillfocus();
}*/
static long _OnModuleLoadDataFnc(CWnd* pWnd) {
	return ((CSignatureFormListDlg*)pWnd)->OnModuleLoadData();
}
/*static void _OnModuleAddNewFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnModuleAddNew();
}*/
static void _OnDepartmentSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CSignatureFormListDlg*)pWnd)->OnDepartmentSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnDepartmentSelendokFnc(CWnd* pWnd) {
	((CSignatureFormListDlg*)pWnd)->OnDepartmentSelendok();
}
/*static void _OnDepartmentSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnDepartmentKillfocus();
}*/
/*static void _OnDepartmentKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnDepartmentKillfocus();
}*/
static long _OnDepartmentLoadDataFnc(CWnd* pWnd) {
	return ((CSignatureFormListDlg*)pWnd)->OnDepartmentLoadData();
}
/*static void _OnDepartmentAddNewFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnDepartmentAddNew();
}*/
static void _OnCloseSelectFnc(CWnd* pWnd) {
	CSignatureFormListDlg* pVw = (CSignatureFormListDlg*)pWnd;
	pVw->OnCloseSelect();
}
/*static void _OnTypeAddNewFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnTypeAddNew();
}*/
/*static void _OnFormsChangeFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnFormsChange();
} */
/*static void _OnFormsSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnFormsSetfocus();} */ 
/*static void _OnFormsKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnFormsKillfocus();
} */
static int _OnFormsCheckValueFnc(CWnd *pWnd){
	return ((CSignatureFormListDlg *)pWnd)->OnFormsCheckValue();
} 
/*static void _OnDocumentChangeFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnDocumentChange();
} */
/*static void _OnDocumentSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnDocumentSetfocus();} */ 
/*static void _OnDocumentKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnDocumentKillfocus();
} */
static int _OnDocumentCheckValueFnc(CWnd *pWnd){
	return ((CSignatureFormListDlg *)pWnd)->OnDocumentCheckValue();
} 
/*static void _OnOrderChangeFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnOrderChange();
} */
/*static void _OnOrderSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnOrderSetfocus();} */ 
/*static void _OnOrderKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnOrderKillfocus();
} */
static int _OnOrderCheckValueFnc(CWnd *pWnd){
	return ((CSignatureFormListDlg *)pWnd)->OnOrderCheckValue();
} 
/*static void _OnReferenceChangeFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnReferenceChange();
} */
/*static void _OnReferenceSetfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnReferenceSetfocus();} */ 
/*static void _OnReferenceKillfocusFnc(CWnd *pWnd){
	((CSignatureFormListDlg *)pWnd)->OnReferenceKillfocus();
} */
static void _OnDigiSignSelectFnc(CWnd *pWnd)
{
    ((CSignatureFormListDlg *)pWnd)->OnDigiSignSelect();
}
static int _OnReferenceCheckValueFnc(CWnd *pWnd){
	return ((CSignatureFormListDlg *)pWnd)->OnReferenceCheckValue();
} 
static void _OnIsEMRSelectFnc(CWnd *pWnd){
	 ((CSignatureFormListDlg*)pWnd)->OnIsEMRSelect();
}
static void _OnIsSignatureSelectFnc(CWnd *pWnd){
	 ((CSignatureFormListDlg*)pWnd)->OnIsSignatureSelect();
}
static void _OnDigiSignSearchSelectFnc(CWnd *pWnd)
{
    ((CSignatureFormListDlg *)pWnd)->OnDigiSignSearchSelect();
}
static void _OnCheckFinishSelectFnc(CWnd *pWnd){
	 ((CSignatureFormListDlg*)pWnd)->OnCheckFinishSelect();
}
static void _OnAddSelectFnc(CWnd *pWnd){
	CSignatureFormListDlg *pVw = (CSignatureFormListDlg *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CSignatureFormListDlg *pVw = (CSignatureFormListDlg *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CSignatureFormListDlg *pVw = (CSignatureFormListDlg *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CSignatureFormListDlg *pVw = (CSignatureFormListDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CSignatureFormListDlg *pVw = (CSignatureFormListDlg *)pWnd;
	pVw->OnCancelSelect();
}
static void _OnAutoAddSelectFnc(CWnd *pWnd){
	CSignatureFormListDlg *pVw = (CSignatureFormListDlg *)pWnd;
	pVw->OnAutoAddSelect();
} 
static int _OnAddSignatureFormListDlgFnc(CWnd *pWnd){
	 return ((CSignatureFormListDlg*)pWnd)->OnAddSignatureFormListDlg();
} 
static int _OnEditSignatureFormListDlgFnc(CWnd *pWnd){
	 return ((CSignatureFormListDlg*)pWnd)->OnEditSignatureFormListDlg();
} 
static int _OnDeleteSignatureFormListDlgFnc(CWnd *pWnd){
	 return ((CSignatureFormListDlg*)pWnd)->OnDeleteSignatureFormListDlg();
} 
static int _OnSaveSignatureFormListDlgFnc(CWnd *pWnd){
	 return ((CSignatureFormListDlg*)pWnd)->OnSaveSignatureFormListDlg();
} 
static int _OnCancelSignatureFormListDlgFnc(CWnd *pWnd){
	 return ((CSignatureFormListDlg*)pWnd)->OnCancelSignatureFormListDlg();
} 

static int _OnListSetIndexFnc(CWnd *pWnd){
	 return ((CSignatureFormListDlg*)pWnd)->OnListSetIndex();
} 

CSignatureFormListDlg::CSignatureFormListDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 915;
	m_nDlgHeight = 620;
	SetDefaultValues();
}
CSignatureFormListDlg::~CSignatureFormListDlg(){
}
void CSignatureFormListDlg::OnCreateComponents()
{
    m_wndTypeSelectLabel.Create(this, _T("Type"), 5, 5, 65, 30);
    m_wndTypeSelect.Create(this, 70, 5, 320, 30);
    m_wndSearchLabel.Create(this, _T("Search"), 325, 5, 435, 30);
    m_wndSearch.Create(this, 440, 5, 875, 30);
    m_wndDigiSignSearch.Create(this, _T("DigiSign"), 880, 5, 1000, 30);
    m_wndFileNameLabel.Create(this, _T("File Name"), 5, 465, 130, 490);
    m_wndFileName.Create(this, 135, 465, 390, 490);
    m_wndTitleLabel.Create(this, _T("Title"), 395, 465, 520, 490);
    m_wndTitle.Create(this, 525, 465, 1005, 490);
    m_wndTypeLabel.Create(this, _T("Type"), 5, 495, 130, 520);
    m_wndType.Create(this, 135, 495, 390, 520);
    m_wndFormsLabel.Create(this, _T("Forms"), 395, 495, 520, 520);
    m_wndForms.Create(this, 525, 495, 1005, 520);
    m_wndModuleLabel.Create(this, _T("Module"), 5, 525, 130, 550);
    m_wndModule.Create(this, 135, 525, 390, 550);
    m_wndDepartmentLabel.Create(this, _T("Department"), 395, 525, 520, 550);
    m_wndDepartment.Create(this, 525, 525, 1005, 550);
    m_wndDocumentLabel.Create(this, _T("Document#"), 5, 555, 130, 580);
    m_wndDocument.Create(this, 135, 555, 390, 580);
    m_wndOrderLabel.Create(this, _T("Order#"), 395, 555, 520, 580);
    m_wndOrder.Create(this, 525, 555, 1005, 580);
    m_wndReferenceLabel.Create(this, _T("Reference#"), 5, 585, 130, 610);
    m_wndReference.Create(this, 135, 585, 390, 610);
    m_wndIsEMR.Create(this, _T("Is EMR"), 290, 615, 360, 640);
    m_wndIsSignature.Create(this, _T("Is Signature"), 365, 615, 460, 640);
    m_wndDigiSign.Create(this, _T("DigiSign"), 465, 615, 565, 640);
    m_wndIsTransfer.Create(this, _T("Trình ký"), 570, 615, 640, 640);
    m_wndIsGenDocx.Create(this, _T("Gen Docx"), 645, 615, 725, 640);
    m_wndMultilSheet.Create(this, _T("Multil Sheet"), 730, 615, 830, 640);
    m_wndInOpt.Create(this, _T("In Opt"), 835, 615, 900, 640);
    m_wndCheckFinish.Create(this, _T("Check Finish"), 905, 615, 1005, 640);
    m_wndAdd.Create(this, _T("&Add"), 500, 645, 580, 670);
    m_wndEdit.Create(this, _T("&Edit"), 585, 645, 665, 670);
    m_wndDelete.Create(this, _T("&Delete"), 670, 645, 750, 670);
    m_wndSave.Create(this, _T("&Save"), 755, 645, 835, 670);
    m_wndCancel.Create(this, _T("&Cancel"), 840, 645, 920, 670);
    m_wndClose.Create(this, _T("Close"), 925, 645, 1005, 670);
    m_wndAutoAdd.Create(this, _T("Auto Add"), 5, 645, 130, 670);
    m_wndList.Create(this, 5, 35, 1005, 459);
}
void CSignatureFormListDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndSearch.SetLimitText(35);
	//m_wndSearch.SetCheckValue(true);
	//m_wndTypeSelect.SetCheckValue(true);
	//m_wndTypeSelect.LimitText(35);
	m_wndFileName.SetLimitText(254);
	m_wndFileName.SetCheckValue(true);
	m_wndTitle.SetLimitText(254);
	m_wndTitle.SetCheckValue(true);
	m_wndType.SetCheckValue(true);
	m_wndType.LimitText(128);
	m_wndForms.SetLimitText(128);
	m_wndForms.SetCheckValue(true);
	m_wndDocument.SetLimitText(60);
	//m_wndDocument.SetCheckValue(true);
	m_wndOrder.SetLimitText(60);
	//m_wndOrder.SetCheckValue(true);
	//m_wndReference.SetLimitText(35);
	//m_wndReference.SetCheckValue(true);

	m_wndModule.SetCheckBox();
	m_wndModule.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndModule.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndDepartment.SetCheckBox();
	m_wndDepartment.InsertColumn(0, _T("ID"), CFMT_TEXT | CFMT_RIGHT, 80);
	m_wndDepartment.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);


	m_wndList.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, _T("Form_ID"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(2, _T("Form Name"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(3, _T("Code"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(4, _T("Description"), CFMT_TEXT, 200);
	m_wndList.InsertColumn(5, _T("Module"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(6, _T("Department"), CFMT_TEXT, 150);
	m_wndList.InsertColumn(7, _T("Template_no"), CFMT_TEXT, 100);
	m_wndList.InsertColumn(8, _T("file_type"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(9, _T("Active"), CFMT_TEXT|CFMT_CENTER, 70);
    m_wndList.InsertColumn(10, _T("Check Finish"), CFMT_TEXT | CFMT_CENTER, 70);

	m_wndList.SetAllowDrag(true);


	m_wndTypeSelect.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTypeSelect.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndType.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
    m_wndType.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_hms_signature_formTbl.SetTableName(_T("hms_signature_form"));
	m_hms_signature_formTbl.AddField(_T("p_uid"), dfText, 32);
	m_hms_signature_formTbl.AddField(_T("p_userid"), dfText, 32); 
	m_hms_signature_formTbl.AddField(_T("p_code"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_name"), dfText, 250);  
	m_hms_signature_formTbl.AddField(_T("p_desc"),dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_template"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_docno"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_orderid"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_reference"),dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_type"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_category"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_filetype"), dfText, 250); 
	m_hms_signature_formTbl.AddField(_T("p_istransfer"), dfText, 1);
	m_hms_signature_formTbl.AddField(_T("p_isgendocx"), dfText, 1);
	m_hms_signature_formTbl.AddField(_T("p_isemr"), dfText, 1);
	m_hms_signature_formTbl.AddField(_T("p_issignature"), dfText, 1); 
	m_hms_signature_formTbl.AddField(_T("p_module"), dfText, 1024);
	m_hms_signature_formTbl.AddField(_T("p_dept"), dfText, 2000);
	m_hms_signature_formTbl.AddField(_T("p_isMultiSheet"), dfText, 1);
	m_hms_signature_formTbl.AddField(_T("p_isInOpt"), dfText, 1);
    m_hms_signature_formTbl.AddField(_T("p_isDigiSign"), dfText, 1);
    m_hms_signature_formTbl.AddField(_T("p_is_checkfinish"), dfText, 1);


}
void CSignatureFormListDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Deactive"), _OnListDeactiveItemFnc);
	m_wndList.AddEvent(2, _T("Delete"), _OnListDeleteItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Sắp sếp thứ tự"), _OnListSetIndexFnc);

	//m_wndSearch.SetEvent(WE_CHANGE, _OnSearchChangeFnc);
	//m_wndSearch.SetEvent(WE_SETFOCUS, _OnSearchSetfocusFnc);
	//m_wndSearch.SetEvent(WE_KILLFOCUS, _OnSearchKillfocusFnc);
	m_wndSearch.SetEvent(WE_CHECKVALUE, _OnSearchCheckValueFnc);
	m_wndTypeSelect.SetEvent(WE_SELENDOK, _OnTypeSelectSelendokFnc);
	//m_wndTypeSelect.SetEvent(WE_SETFOCUS, _OnTypeSelectSetfocusFnc);
	//m_wndTypeSelect.SetEvent(WE_KILLFOCUS, _OnTypeSelectKillfocusFnc);
	m_wndTypeSelect.SetEvent(WE_SELCHANGE, _OnTypeSelectSelectChangeFnc);
	m_wndTypeSelect.SetEvent(WE_LOADDATA, _OnTypeSelectLoadDataFnc);
	//m_wndTypeSelect.SetEvent(WE_ADDNEW, _OnTypeSelectAddNewFnc);
	//m_wndFileName.SetEvent(WE_CHANGE, _OnFileNameChangeFnc);
	//m_wndFileName.SetEvent(WE_SETFOCUS, _OnFileNameSetfocusFnc);
	//m_wndFileName.SetEvent(WE_KILLFOCUS, _OnFileNameKillfocusFnc);
	m_wndFileName.SetEvent(WE_CHECKVALUE, _OnFileNameCheckValueFnc);
	//m_wndTitle.SetEvent(WE_CHANGE, _OnTitleChangeFnc);
	//m_wndTitle.SetEvent(WE_SETFOCUS, _OnTitleSetfocusFnc);
	//m_wndTitle.SetEvent(WE_KILLFOCUS, _OnTitleKillfocusFnc);
	m_wndTitle.SetEvent(WE_CHECKVALUE, _OnTitleCheckValueFnc);
	m_wndType.SetEvent(WE_SELENDOK, _OnTypeSelendokFnc);
	//m_wndType.SetEvent(WE_SETFOCUS, _OnTypeSetfocusFnc);
	//m_wndType.SetEvent(WE_KILLFOCUS, _OnTypeKillfocusFnc);
	m_wndType.SetEvent(WE_SELCHANGE, _OnTypeSelectChangeFnc);
	m_wndType.SetEvent(WE_LOADDATA, _OnTypeLoadDataFnc);
	//m_wndType.SetEvent(WE_ADDNEW, _OnTypeAddNewFnc);
	//m_wndForms.SetEvent(WE_CHANGE, _OnFormsChangeFnc);
	//m_wndForms.SetEvent(WE_SETFOCUS, _OnFormsSetfocusFnc);
	//m_wndForms.SetEvent(WE_KILLFOCUS, _OnFormsKillfocusFnc);
	m_wndForms.SetEvent(WE_CHECKVALUE, _OnFormsCheckValueFnc);
	//m_wndDocument.SetEvent(WE_CHANGE, _OnDocumentChangeFnc);
	//m_wndDocument.SetEvent(WE_SETFOCUS, _OnDocumentSetfocusFnc);
	//m_wndDocument.SetEvent(WE_KILLFOCUS, _OnDocumentKillfocusFnc);
	m_wndDocument.SetEvent(WE_CHECKVALUE, _OnDocumentCheckValueFnc);
	//m_wndOrder.SetEvent(WE_CHANGE, _OnOrderChangeFnc);
	//m_wndOrder.SetEvent(WE_SETFOCUS, _OnOrderSetfocusFnc);
	//m_wndOrder.SetEvent(WE_KILLFOCUS, _OnOrderKillfocusFnc);
	m_wndOrder.SetEvent(WE_CHECKVALUE, _OnOrderCheckValueFnc);
	//m_wndReference.SetEvent(WE_CHANGE, _OnReferenceChangeFnc);
	//m_wndReference.SetEvent(WE_SETFOCUS, _OnReferenceSetfocusFnc);
	//m_wndReference.SetEvent(WE_KILLFOCUS, _OnReferenceKillfocusFnc);
	m_wndReference.SetEvent(WE_CHECKVALUE, _OnReferenceCheckValueFnc);
	m_wndIsEMR.SetEvent(WE_CLICK, _OnIsEMRSelectFnc);
	m_wndIsSignature.SetEvent(WE_CLICK, _OnIsSignatureSelectFnc);
	m_wndCheckFinish.SetEvent(WE_CLICK, _OnCheckFinishSelectFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);

	m_wndAutoAdd.SetEvent(WE_CLICK, _OnAutoAddSelectFnc);

	m_wndMultilSheet.SetEvent(WE_CLICK, _OnMultilSheetSelectFnc);
	m_wndInOpt.SetEvent(WE_CLICK, _OnInOptSelectFnc);
	m_wndModule.SetEvent(WE_SELENDOK, _OnModuleSelendokFnc);
	//m_wndModule.SetEvent(WE_SETFOCUS, _OnModuleSetfocusFnc);
	//m_wndModule.SetEvent(WE_KILLFOCUS, _OnModuleKillfocusFnc);
	m_wndModule.SetEvent(WE_SELCHANGE, _OnModuleSelectChangeFnc);
	m_wndModule.SetEvent(WE_LOADDATA, _OnModuleLoadDataFnc);
	//m_wndModule.SetEvent(WE_ADDNEW, _OnModuleAddNewFnc);
	m_wndDepartment.SetEvent(WE_SELENDOK, _OnDepartmentSelendokFnc);
	//m_wndDepartment.SetEvent(WE_SETFOCUS, _OnDepartmentSetfocusFnc);
	//m_wndDepartment.SetEvent(WE_KILLFOCUS, _OnDepartmentKillfocusFnc);
	m_wndDepartment.SetEvent(WE_SELCHANGE, _OnDepartmentSelectChangeFnc);
	m_wndDepartment.SetEvent(WE_LOADDATA, _OnDepartmentLoadDataFnc);
	//m_wndDepartment.SetEvent(WE_ADDNEW, _OnDepartmentAddNewFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
    m_wndDigiSign.SetEvent(WE_CLICK, _OnDigiSignSelectFnc);
    m_wndDigiSignSearch.SetEvent(WE_CLICK, _OnDigiSignSearchSelectFnc);
	
	SetMode(VM_VIEW);
	OnListLoadData();
	OnModuleLoadData();
}
void CSignatureFormListDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndSearch.GetDlgCtrlID(), m_szSearch);
	DDX_TextEx(pDX, m_wndTypeSelect.GetDlgCtrlID(), m_szTypeSelectKey);
	DDX_Text(pDX, m_wndFileName.GetDlgCtrlID(), m_szFileName);
	DDX_Text(pDX, m_wndTitle.GetDlgCtrlID(), m_szTitle);
	DDX_TextEx(pDX, m_wndType.GetDlgCtrlID(), m_szTypeKey);
	DDX_Text(pDX, m_wndForms.GetDlgCtrlID(), m_szForms);
	DDX_Text(pDX, m_wndDocument.GetDlgCtrlID(), m_szDocument);
	DDX_Text(pDX, m_wndOrder.GetDlgCtrlID(), m_szOrder);
	DDX_Text(pDX, m_wndReference.GetDlgCtrlID(), m_szReference);
	DDX_Check(pDX, m_wndIsEMR.GetDlgCtrlID(), m_bIsEMR);
	DDX_Check(pDX, m_wndIsSignature.GetDlgCtrlID(), m_bIsSignature);
	DDX_Check(pDX, m_wndIsTransfer.GetDlgCtrlID(), m_bIsTransfer);
	DDX_Check(pDX, m_wndIsGenDocx.GetDlgCtrlID(), m_bIsGendocx);
	DDX_Check(pDX, m_wndMultilSheet.GetDlgCtrlID(), m_bMultilSheet);
	DDX_Check(pDX, m_wndInOpt.GetDlgCtrlID(), m_bInOpt);
	DDX_Check(pDX, m_wndCheckFinish.GetDlgCtrlID(), m_bCheckFinish);
	DDX_TextEx(pDX, m_wndModule.GetDlgCtrlID(), m_szModuleKey);
	DDX_TextEx(pDX, m_wndDepartment.GetDlgCtrlID(), m_szDepartmentKey);
    DDX_Check(pDX, m_wndDigiSign.GetDlgCtrlID(), m_bDigiSign);
    DDX_Check(pDX, m_wndDigiSignSearch.GetDlgCtrlID(), m_bDigiSignSearch);
}
void CSignatureFormListDlg::UpdateJson(BOOL bSave){
	if(bSave)
	{		
	m_jData[_T("Search")] =  m_szSearch;
	m_jData[_T("TypeSelect")] =  m_szTypeSelectKey;
	m_jData[_T("FileName")] =  m_szFileName;
	m_jData[_T("Title")] =  m_szTitle;
	m_jData[_T("Type")] =  m_szTypeKey;
	m_jData[_T("Forms")] =  m_szForms;
	m_jData[_T("Document")] =  m_szDocument;
	m_jData[_T("Order")] =  m_szOrder;
	m_jData[_T("Reference")] =  m_szReference;
	m_jData[_T("IsEMR")] =  m_bIsEMR;
	m_jData[_T("IsSignature")] =  m_bIsSignature;
	m_jData[_T("IsMultiSheet")] = m_bMultilSheet;
	m_jData[_T("IsInOpt")] = m_bInOpt;
	m_jData[_T("Module")] = m_szModuleKey;
	m_jData[_T("Department")] = m_szDepartmentKey;
	}
	else
	{
			
	m_jData[_T("Search")].GetValue(m_szSearch);
	m_jData[_T("TypeSelect")].GetValue(m_szTypeSelectKey);
	m_jData[_T("FileName")].GetValue(m_szFileName);
	m_jData[_T("Title")].GetValue(m_szTitle);
	m_jData[_T("Type")].GetValue(m_szTypeKey);
	m_jData[_T("Forms")].GetValue(m_szForms);
	m_jData[_T("Document")].GetValue(m_szDocument);
	m_jData[_T("Order")].GetValue(m_szOrder);
	m_jData[_T("Reference")].GetValue(m_szReference);
	m_jData[_T("IsEMR")].GetValue(m_bIsEMR);
	m_jData[_T("IsSignature")].GetValue(m_bIsSignature);
	m_jData[_T("IsMultiSheet")].GetValue(m_bMultilSheet);
	m_jData[_T("IsInOpt")].GetValue(m_bInOpt);
	m_jData[_T("Module")].GetValue(m_szModuleKey);
	m_jData[_T("Department")].GetValue(m_szDepartmentKey);
	}

}
void CSignatureFormListDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr;
	
	szSQL.Format(_T("SELECT code, name, description,type_id,template_no, docno, ") \
		_T("orderid, file_type, istransfer, isgendocx, reference, ") \
		_T(" hms_signature_form_id, isactive,  isemr, issignature, isdigisign, multi_sheet, surgery_type, module, dept, is_checkfinish  ") \
		_T("FROM hms_signature_form  ") \
		_T("WHERE hms_signature_form_id = '%s' "), m_szUID);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("name"), m_szFileName);
		rs.GetValue(_T("description"), m_szTitle);
		rs.GetValue(_T("type_id"), m_szTypeKey);
		rs.GetValue(_T("template_no"), m_szForms);
		rs.GetValue(_T("docno"), m_szDocument);
		rs.GetValue(_T("orderid"), m_szOrder);
		rs.GetValue(_T("reference"), m_szReference);
		rs.GetValue(_T("istransfer"), tmpStr);
		if(tmpStr== _T("Y"))
			m_bIsTransfer= true;
		else
			m_bIsTransfer= false;

		rs.GetValue(_T("isgendocx"), tmpStr);
		if(tmpStr== _T("Y"))
			m_bIsGendocx= true;
		else
			m_bIsGendocx= false;


		rs.GetValue(_T("isemr"), tmpStr);
		if(tmpStr== _T("Y"))
			m_bIsEMR= true;
		else
			m_bIsEMR= false;



		rs.GetValue(_T("issignature"), tmpStr);
		if(tmpStr== _T("Y"))
			m_bIsSignature= true;
		else
			m_bIsSignature= false;

		rs.GetValue(_T("isDigiSign"), tmpStr);
		if(tmpStr == _T("Y"))
			m_bDigiSign = true;
		else
            m_bDigiSign = false;

		rs.GetValue(_T("isactive"), m_szActive);
		
		rs.GetValue(_T("multi_sheet"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bMultilSheet = true;
		else
			m_bMultilSheet = false;

		rs.GetValue(_T("surgery_type"), tmpStr);
		if (tmpStr == _T("Y"))
			m_bInOpt = true;
		else
			m_bInOpt = false;

		m_bCheckFinish = rs.GetValue(L"is_checkfinish") == L"Y" ? true : false;
		OnModuleLoadData();
		OnDepartmentLoadData();
		rs.GetValue(_T("module"), m_szModuleKey);
		rs.GetValue(_T("dept"), m_szDepartmentKey);
//		SetCheckData(&m_wndModule, rs.GetValue(_T("module")));
	//	SetCheckData(&m_wndDepartment, rs.GetValue(_T("dept")));
		
		
		_tprintf(L"\r\nMOD: %s", m_szModuleKey);

		SetMode(VM_VIEW);
	}


}
void CSignatureFormListDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_signature_formTbl.SetValue(_T("p_userid"), pMF->GetCurrentUser()); 
	m_hms_signature_formTbl.SetValue(_T("p_filename"),m_szFileName); 

	CString szCode = m_szFileName.MakeUpper();
	
	int pos = m_szFileName.Find(L"/");
	if (pos > 0)
	{
		szCode = m_szFileName.Mid(pos+1);
	}
	szCode.MakeUpper();
	szCode.Replace(L".HTML", _T(""));
	szCode.Replace(L".RPT", _T(""));

	m_hms_signature_formTbl.SetValue(_T("p_uid"), m_szUID);
	m_hms_signature_formTbl.SetValue(_T("p_code"), szCode);
	m_hms_signature_formTbl.SetValue(_T("p_name"), m_szFileName);  
	m_hms_signature_formTbl.SetValue(_T("p_desc"),m_szTitle); 
	m_hms_signature_formTbl.SetValue(_T("p_template"), m_szForms); 
	m_hms_signature_formTbl.SetValue(_T("p_docno"), m_szDocument); 
	m_hms_signature_formTbl.SetValue(_T("p_orderid"), m_szOrder); 
	m_hms_signature_formTbl.SetValue(_T("p_reference"),m_szReference); 
	m_hms_signature_formTbl.SetValue(_T("p_type"), m_szTypeKey); 
	m_hms_signature_formTbl.SetValue(_T("p_category"), _T("")); 
	
	CString tmpStr = m_szFileName.MakeLower();
	if(tmpStr.Find(L".html") != -1)
		m_hms_signature_formTbl.SetValue(_T("p_filetype"), _T("HTML") ); 
	else
		m_hms_signature_formTbl.SetValue(_T("p_filetype"), _T("RPT") );

	
	if(m_bIsTransfer)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");

	m_hms_signature_formTbl.SetValue(_T("p_istransfer"), tmpStr); 

	if(m_bIsGendocx)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");

	m_hms_signature_formTbl.SetValue(_T("p_isgendocx"), tmpStr); 

	if(m_bIsEMR)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");

	m_hms_signature_formTbl.SetValue(_T("p_isemr"), tmpStr); 



	if(m_bIsSignature)
		tmpStr = _T("Y");
	else
		tmpStr = _T("N");
    m_hms_signature_formTbl.SetValue(_T("p_issignature"), tmpStr); 

	if (m_bDigiSign)
		tmpStr = _T("Y");
	else
        tmpStr = _T("N");
    m_hms_signature_formTbl.SetValue(_T("p_isDigiSign"), tmpStr);

	m_hms_signature_formTbl.SetValue(_T("p_module"), m_szModuleKey);
	m_hms_signature_formTbl.SetValue(_T("p_dept"), m_szDepartmentKey);
	m_hms_signature_formTbl.SetValue(_T("p_isMultiSheet"), m_bMultilSheet ? _T("Y") : _T("N"));
	m_hms_signature_formTbl.SetValue(_T("p_isInOpt"), m_bInOpt ? _T("Y") : _T("N"));
    m_hms_signature_formTbl.SetValue(_T("p_is_checkfinish"),
                                     m_bCheckFinish ? _T("Y") : _T("N"));
}
void CSignatureFormListDlg::SetDefaultValues(){

	m_szSearch.Empty();
	m_szTypeSelectKey.Empty();
	m_szFileName.Empty();
	m_szTitle.Empty();
	m_szTypeKey.Empty();
	m_szForms.Empty();
	m_szDocument.Empty();
	m_szOrder.Empty();
	m_szReference.Empty();
	m_bIsEMR=FALSE;
	m_bIsSignature=FALSE;
	m_bIsGendocx= FALSE;
	m_bMultilSheet = FALSE;
	m_bInOpt = FALSE;
	m_bCheckFinish=FALSE;
	m_szDepartmentKey.Empty();
	m_szModuleKey.Empty();
	m_szUID.Empty();
    m_bDigiSign = FALSE;
    m_bDigiSignSearch = FALSE;


}
int CSignatureFormListDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE,3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
			//m_wndFileName.EnableWindow(false);
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
		
		m_wndSearch.EnableWindow(true);
		m_wndTypeSelect.EnableWindow(true);
        m_wndDigiSignSearch.EnableWindow(true);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CSignatureFormListDlg::OnListDblClick(){
    CHMSSignatureFormLnSetupDlg dlg(this);
    dlg.m_szFormID = m_szUID;
    dlg.DoModal();
} 
void CSignatureFormListDlg::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_szUID = m_wndList.GetItemText(nNewItem, 0);
	m_szFileName = m_wndList.GetItemText(nNewItem, 1);
	GetDataToScreen();
	
}

int CSignatureFormListDlg::OnListDeactiveItem() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	CString szSQL, szActive, szUID;
	if (m_szActive == _T("Y"))
	{
		szActive = L"N";
	}
	else
	{
		szActive = L"Y";
			
	}
	szUID = m_wndList.GetItemText(m_wndList.GetCurSel(), 0);
	szSQL.Format(_T("UPDATE hms_signature_form ") \
		_T("SET isactive='%s' ") \
		_T("WHERE hms_signature_form_id = '%s' "), szActive, szUID);
	int ret = pMF->ExecSQL(szSQL);
	if (ret >= 0) {
		SetMode(VM_NONE);
		OnListLoadData();
		OnCancelSignatureFormListDlg();
	}
	return 0;
}


int CSignatureFormListDlg::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	 return 0;
} 
long CSignatureFormListDlg::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL,szWhere;
	UpdateData(true);
	m_wndList.BeginLoad(); 
	int nCount = 0;
	if(!m_szSearch.IsEmpty())
		szWhere.Format(_T(" AND ( lower(code) like lower('%s%s%s') or lower(description) like lower('%s%s%s') ) "), _T("%"), m_szSearch, _T("%"), _T("%"), m_szSearch, _T("%"));
	if(!m_szTypeSelectKey.IsEmpty())
		szWhere.AppendFormat(_T(" and type_id ='%s' "), m_szTypeSelectKey);
    if (m_bDigiSignSearch)
        szWhere.AppendFormat(_T(" and isDigiSign = 'Y' "));
    else
        szWhere.AppendFormat(_T(" and NVL(isdigisign, 'N') <> 'Y' "));
	szSQL.Format(_T("select code, name, description,type_id,template_no, docno, orderid,file_type,  module, dept, is_checkfinish,") \
				_T(" hms_signature_form_id, isactive from hms_signature_form where 1=1 %s order by type_id,sort_index, code "),szWhere); 
	_tprintf(L"%s", szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndList.AddItems(
			rs.GetValue(_T("hms_signature_form_id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("description")), 
			rs.GetValue(_T("code")), 
			rs.GetValue(_T("description")), 
			rs.GetValue(_T("module")),
			rs.GetValue(_T("dept")),
			rs.GetValue(_T("template_no")), 
			rs.GetValue(_T("file_type")), 
			rs.GetValue(_T("isactive")),
            rs.GetValue(_T("is_checkfinish")),
			NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;

}
/*void CSignatureFormListDlg::OnSearchChange(){
	
} */
/*void CSignatureFormListDlg::OnSearchSetfocus(){
	
} */
/*void CSignatureFormListDlg::OnSearchKillfocus(){
	
} */
int CSignatureFormListDlg::OnSearchCheckValue(){
	OnListLoadData();
	return 0;
} 
void CSignatureFormListDlg::OnTypeSelectSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSignatureFormListDlg::OnTypeSelectSelendok(){
	UpdateData(true);
	OnListLoadData();
}
/*void CSignatureFormListDlg::OnTypeSelectSetfocus(){
	
}*/
/*void CSignatureFormListDlg::OnTypeSelectKillfocus(){
	
}*/
long CSignatureFormListDlg::OnTypeSelectLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	return pMF->LoadSelectionList(&m_wndTypeSelect,_T("HMS_SIGNATURE_TYPE"),m_szTypeSelectKey );
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndTypeSelect.IsSearchKey() && !m_szTypeSelectKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szTypeSelectKey
};
	m_wndTypeSelect.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTypeSelect.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CSignatureFormListDlg::OnTypeSelectAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CSignatureFormListDlg::OnFileNameChange(){
	
} */
/*void CSignatureFormListDlg::OnFileNameSetfocus(){
	
} */
/*void CSignatureFormListDlg::OnFileNameKillfocus(){
	
} */
int CSignatureFormListDlg::OnFileNameCheckValue(){
	return 0;
} 
/*void CSignatureFormListDlg::OnTitleChange(){
	
} */
/*void CSignatureFormListDlg::OnTitleSetfocus(){
	
} */
/*void CSignatureFormListDlg::OnTitleKillfocus(){
	
} */
int CSignatureFormListDlg::OnTitleCheckValue(){
	return 0;
} 
void CSignatureFormListDlg::OnTypeSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CSignatureFormListDlg::OnTypeSelendok(){
	 
}
/*void CSignatureFormListDlg::OnTypeSetfocus(){
	
}*/
/*void CSignatureFormListDlg::OnTypeKillfocus(){
	
}*/
long CSignatureFormListDlg::OnTypeLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	return pMF->LoadSelectionList(&m_wndType,_T("HMS_SIGNATURE_TYPE"),m_szTypeKey );
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
/*void CSignatureFormListDlg::OnTypeAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CSignatureFormListDlg::OnFormsChange(){
	
} */
/*void CSignatureFormListDlg::OnFormsSetfocus(){
	
} */
/*void CSignatureFormListDlg::OnFormsKillfocus(){
	
} */
int CSignatureFormListDlg::OnFormsCheckValue(){
	return 0;
} 
/*void CSignatureFormListDlg::OnDocumentChange(){
	
} */
/*void CSignatureFormListDlg::OnDocumentSetfocus(){
	
} */
/*void CSignatureFormListDlg::OnDocumentKillfocus(){
	
} */
int CSignatureFormListDlg::OnDocumentCheckValue(){
	return 0;
} 
/*void CSignatureFormListDlg::OnOrderChange(){
	
} */
/*void CSignatureFormListDlg::OnOrderSetfocus(){
	
} */
/*void CSignatureFormListDlg::OnOrderKillfocus(){
	
} */
int CSignatureFormListDlg::OnOrderCheckValue(){
	return 0;
} 
/*void CSignatureFormListDlg::OnReferenceChange(){
	
} */
/*void CSignatureFormListDlg::OnReferenceSetfocus(){
	
} */
/*void CSignatureFormListDlg::OnReferenceKillfocus(){
	
} */
int CSignatureFormListDlg::OnReferenceCheckValue(){
	return 0;
} 
	void CSignatureFormListDlg::OnIsEMRSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CSignatureFormListDlg::OnIsSignatureSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CSignatureFormListDlg::OnMultilSheetSelect() {
		CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	}
	void CSignatureFormListDlg::OnInOptSelect() {
		CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	}
	void CSignatureFormListDlg::OnModuleSelectChange(int nOldItemSel, int nNewItemSel) {
		CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	}
	void CSignatureFormListDlg::OnModuleSelendok() {

	}
	/*void CSignatureFormListDlg::OnModuleSetfocus(){

	}*/
	/*void CSignatureFormListDlg::OnModuleKillfocus(){

	}*/
	long CSignatureFormListDlg::OnModuleLoadData() {
		CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere, szChecked, tmpStr;
		int nItem = 1;
		szChecked = m_wndList.GetItemText(m_wndList.GetCurSel(), 5);
		CStringToken checked(szChecked);
		if (m_wndModule.IsSearchKey() && !m_szModuleKey.IsEmpty()) {
			szWhere.Format(_T(" and ss_code = '%s' "), m_szModuleKey);
		};
		m_wndModule.DeleteAllItems();
		int nCount = 0;
		szSQL.Format(_T("SELECT ss_code as id, ss_desc as name ") \
			_T(" FROM sys_sel ") \
			_T(" WHERE ss_id = 'sys_module_type' %s ORDER BY id ")
			, szWhere);
		nCount = rs.ExecSQL(szSQL);
		while (!rs.IsEOF()) {
			nItem = m_wndModule.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			for (int i = 0; i < checked.GetSize(); i++)
			{
				checked.GetAt(i, tmpStr);
				if (tmpStr == rs.GetValue(_T("id")))
				{
					m_wndModule.SetCheck(nItem);
					continue;
				}
			}
			rs.MoveNext();
		}
		if (GetMode() == VM_ADD)
		{
			//SetCheckData(&m_wndModule, _T(""));
		}
		return nCount;
	}
	/*void CSignatureFormListDlg::OnModuleAddNew(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	} */
	void CSignatureFormListDlg::OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel) {
		CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	}
	void CSignatureFormListDlg::OnDepartmentSelendok() {

	}
	/*void CSignatureFormListDlg::OnDepartmentSetfocus(){

	}*/
	/*void CSignatureFormListDlg::OnDepartmentKillfocus(){

	}*/
	long CSignatureFormListDlg::OnDepartmentLoadData() {
		CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere, szChecked, tmpStr;
		int nItem = 1;
		szChecked = m_wndList.GetItemText(m_wndList.GetCurSel(), 6);
		CStringToken checked(szChecked);
		if (m_wndDepartment.IsSearchKey() && !m_szDepartmentKey.IsEmpty()) {
			szWhere.Format(_T(" and sd_id = '%s' "), m_szDepartmentKey);
		};
		m_wndDepartment.DeleteAllItems();
		int nCount = 0;
		szSQL.Format(_T("SELECT sd_id as id, sd_name as name ") \
			_T(" FROM sys_dept ") \
			_T(" WHERE 1=1 %s ORDER BY id "), szWhere);
		nCount = rs.ExecSQL(szSQL);
		while (!rs.IsEOF()) {
			nItem = m_wndDepartment.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), NULL);
			for (int i = 0; i < checked.GetSize(); i++)
			{
				checked.GetAt(i, tmpStr);
				if (tmpStr == rs.GetValue(_T("id")))
				{
					m_wndDepartment.SetCheck(nItem);
					continue;
				}
			}
			rs.MoveNext();
		}
		if (GetMode() == VM_ADD)
		{
			//SetCheckData(&m_wndDepartment, _T(""));
		}
		return nCount;
	}
	/*void CSignatureFormListDlg::OnDepartmentAddNew(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	} */
void CSignatureFormListDlg::OnDigiSignSearchSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
    //UpdateData(TRUE);
    OnListLoadData();
}
void CSignatureFormListDlg::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_ADD);
} 
void CSignatureFormListDlg::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
	
} 
void CSignatureFormListDlg::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteSignatureFormListDlg();
	
} 
void CSignatureFormListDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveSignatureFormListDlg();
	
} 
void CSignatureFormListDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_NONE);
	
} 
void CSignatureFormListDlg::OnCheckFinishSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CSignatureFormListDlg::OnAutoAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	// menu auto add cai gi nao

	CGuiMenu menu(this);
	CRect rect;
	int nPos;	
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Tự động add các mẫu biểu bệnh án"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Tự động add các mẫu biểu chuyên môn HTML"));
	
	m_wndAutoAdd.GetWindowRect(&rect);
	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN, rect.right, rect.top, this);

	switch(nPos){
	case 1:
		OnAutoAddMAUBA();
		break;
	case 2:
		OnAutoAddMauHTMLCHUYENMON();
		break;
	};
	
}
void CSignatureFormListDlg::OnAutoAddMAUBA()
{	
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select hasl_name, hasl_htmlform from hms_admission_setup_line"));
	rs.ExecSQL(szSQL);
	CString szFileName,szForms,szTitle;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hasl_htmlform"),szForms);
		szFileName.Format(_T("%s.HTML"),szForms);
		rs.GetValue(_T("hasl_name"),szTitle);
		
		
		
		m_hms_signature_formTbl.SetValue(_T("p_userid"), pMF->GetCurrentUser()); 
		m_hms_signature_formTbl.SetValue(_T("p_code"),szFileName); 
		m_hms_signature_formTbl.SetValue(_T("p_name"), szFileName);  
		m_hms_signature_formTbl.SetValue(_T("p_desc"),szTitle); 
		m_hms_signature_formTbl.SetValue(_T("p_template"), szForms); 
		m_hms_signature_formTbl.SetValue(_T("p_docno"), _T("ma_yte")); 
		m_hms_signature_formTbl.SetValue(_T("p_orderid"), _T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_reference"),_T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_type"), _T("01")); 
		m_hms_signature_formTbl.SetValue(_T("p_category"), _T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_filetype"), _T("HTML") ); 

		m_hms_signature_formTbl.SetValue(_T("p_istransfer"), _T("N")); 

		szSQL.Format(_T("hms_signature_form_create(%s) "), m_hms_signature_formTbl.FormatSQL());
 		int ret = str2int(pMF->ExecDML(szSQL));

		rs.MoveNext();
	}

}
void CSignatureFormListDlg::OnAutoAddMauHTMLCHUYENMON()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select ss_code, ss_desc from sys_sel where  ss_id in ('SURGERY_SHEETS','TREATMENT_SHEETS','EXAM_SHEETS')"));
	rs.ExecSQL(szSQL);
	CString szFileName,szForms,szTitle;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("ss_code"),szForms);
		szFileName.Format(_T("%s.HTML"),szForms);
		rs.GetValue(_T("ss_desc"),szTitle);
		
		
		
		m_hms_signature_formTbl.SetValue(_T("p_userid"), pMF->GetCurrentUser()); 
		m_hms_signature_formTbl.SetValue(_T("p_code"),szFileName); 
		m_hms_signature_formTbl.SetValue(_T("p_name"), szFileName);  
		m_hms_signature_formTbl.SetValue(_T("p_desc"),szTitle); 
		m_hms_signature_formTbl.SetValue(_T("p_template"), szForms); 
		m_hms_signature_formTbl.SetValue(_T("p_docno"), _T("DOC_NO")); 
		m_hms_signature_formTbl.SetValue(_T("p_orderid"), _T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_reference"),_T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_type"), _T("06")); 
		m_hms_signature_formTbl.SetValue(_T("p_category"), _T("")); 
		m_hms_signature_formTbl.SetValue(_T("p_filetype"), _T("HTML") ); 

		m_hms_signature_formTbl.SetValue(_T("p_istransfer"), _T("N")); 

		szSQL.Format(_T("hms_signature_form_create(%s) "), m_hms_signature_formTbl.FormatSQL());
 		int ret = str2int(pMF->ExecDML(szSQL));

		rs.MoveNext();
	}
}
int CSignatureFormListDlg::OnAddSignatureFormListDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSignatureFormListDlg::OnEditSignatureFormListDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSignatureFormListDlg::OnDeleteSignatureFormListDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;

	// kiem tra neu da tung ky roi thi ko cho xoa nua
	szSQL.Format(_T("select count(*) as qty from hms_signature  where status='S' and form_id ='%s'  "), m_szForms);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() >0) 
	{
		ShowMessageBox(_T("Form đã có văn bản ký không thể xóa "));
		return -1;
	}
 	//szSQL.Format(_T("DELETE FROM hms_signature_form WHERE code='%s' ") ,m_szFileName);
	szSQL.Format(_T("DELETE FROM hms_signature_form WHERE hms_signature_form_id='%s' "), m_szUID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
		OnListLoadData();
 		OnCancelSignatureFormListDlg();
 	}
	return 0;
}
int CSignatureFormListDlg::OnSaveSignatureFormListDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL.Format(_T("hms_signature_form_create(%s) "), m_hms_signature_formTbl.FormatSQL());
 	}
 	else if(GetMode() == VM_EDIT){
		szSQL.Format(_T("hms_signature_form_create(%s) "), m_hms_signature_formTbl.FormatSQL());
 	}
 _debug(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		//OnSignatureFormListDlgListLoadData();
		OnListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
		CString szMsg;
		szMsg.Format(L"[%d]. Không cập nhật được dữ liệu.", ret);
		ShowMessageBox(szMsg);
 	}
 	return ret;
 	return 0;
}
int CSignatureFormListDlg::OnCancelSignatureFormListDlg(){
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
int CSignatureFormListDlg::OnSignatureFormListDlgListLoadData(){
	return 0;
}
int CSignatureFormListDlg::OnListSetIndex()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	UpdateData(true);
	if(m_szTypeKey.IsEmpty())
	{
		_msg(_T("Chỉ có thể sắp xếp với 1 nhóm "));
		return -1;
	}
	CString szSQL, szID;
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		szID = m_wndList.GetItemText(i, 0);
		szSQL.Format(_T("UPDATE hms_signature_form SET sort_index=%d WHERE hms_signature_form_id='%s'  "), i+1, szID);
		pMF->ExecSQL(szSQL);
	}
	return 0;
}
void CSignatureFormListDlg::SetCheckData(CGuiComboBox* pCombo, CString szData)
{
	//_tprintf(_T("\ndata: %s"), szData);
	for (int i = 0; i < pCombo->GetItemCount(); i++)
	{
		pCombo->SetCheck(i, FALSE);
	}
	if (szData.IsEmpty())
	{
		return;
	}
	CStringToken dat(szData);
	CString tmpStr;
	for (int i = 0; i < dat.GetSize(); i++)
	{
		dat.GetAt(i, tmpStr);
		for (int j = 0; j < pCombo->GetItemCount(); j++)
		{
			pCombo->SetCurSel(j);
			//_tprintf(_T("\ntmpStr: %s| Key: %s|sel: %d|j:%d"), tmpStr, pCombo->GetCurrent(0));
			if (tmpStr == pCombo->GetCurrent(0))
			{
				pCombo->SetCheck(j);
				continue;
			}
		}
	}
}
void CSignatureFormListDlg::OnCloseSelect() {
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	OnCancel();
}
void CSignatureFormListDlg::OnDigiSignSelect()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
}