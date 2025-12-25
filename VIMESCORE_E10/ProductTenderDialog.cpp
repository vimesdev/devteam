#include "ProductTenderDialog.h"
#include "MainFrame_E10.h"
#include "HMSReportForms/HMSDbfMapParser.h"

static int _OnCodeCheckValueFnc(CWnd* pWnd) {
	return ((CProductTenderDialog*)pWnd)->OnCodeCheckValue();
}
static void _OnActiveIngredientIDSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CProductTenderDialog*)pWnd)->OnActiveIngredientIDSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnActiveIngredientIDSelendokFnc(CWnd* pWnd) {
	((CProductTenderDialog*)pWnd)->OnActiveIngredientIDSelendok();
}
/*static void _OnActiveIngredientIDSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientIDKillfocus();
}*/
/*static void _OnActiveIngredientIDKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientIDKillfocus();
}*/
static long _OnActiveIngredientIDLoadDataFnc(CWnd* pWnd) {
	return ((CProductTenderDialog*)pWnd)->OnActiveIngredientIDLoadData();
}
/*static void _OnActiveIngredientIDAddNewFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientIDAddNew();
}*/
/*static void _OnActiveIngredientChangeFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientChange();
} */
/*static void _OnActiveIngredientSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnActiveIngredientSetfocus();} */
	/*static void _OnActiveIngredientKillfocusFnc(CWnd *pWnd){
		((CProductTenderDialog *)pWnd)->OnActiveIngredientKillfocus();
	} */
static int _OnActiveIngredientCheckValueFnc(CWnd* pWnd) {
	return ((CProductTenderDialog*)pWnd)->OnActiveIngredientCheckValue();
}
static void _OnCategorySelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CProductTenderDialog*)pWnd)->OnCategorySelectChange(nOldItemSel, nNewItemSel);
}
static void _OnCategorySelendokFnc(CWnd* pWnd) {
	((CProductTenderDialog*)pWnd)->OnCategorySelendok();
}
/*static void _OnCategorySetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnCategoryKillfocus();
}*/
/*static void _OnCategoryKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnCategoryKillfocus();
}*/
static long _OnCategoryLoadDataFnc(CWnd* pWnd) {
	return ((CProductTenderDialog*)pWnd)->OnCategoryLoadData();
}
/*static void _OnCategoryAddNewFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnCategoryAddNew();
}*/
/*static void _OnDosageConcentrationChangeFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnDosageConcentrationChange();
} */
/*static void _OnDosageConcentrationSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnDosageConcentrationSetfocus();} */
	/*static void _OnDosageConcentrationKillfocusFnc(CWnd *pWnd){
		((CProductTenderDialog *)pWnd)->OnDosageConcentrationKillfocus();
	} */
static int _OnDosageConcentrationCheckValueFnc(CWnd* pWnd) {
	return ((CProductTenderDialog*)pWnd)->OnDosageConcentrationCheckValue();
}
/*static void _OnDosageFormChangeFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnDosageFormChange();
} */
/*static void _OnDosageFormSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnDosageFormSetfocus();} */
	/*static void _OnDosageFormKillfocusFnc(CWnd *pWnd){
		((CProductTenderDialog *)pWnd)->OnDosageFormKillfocus();
	} */
static int _OnDosageFormCheckValueFnc(CWnd* pWnd) {
	return ((CProductTenderDialog*)pWnd)->OnDosageFormCheckValue();
}
static void _OnRouteOfAdminSelectChangeFnc(CWnd* pWnd, int nOldItemSel, int nNewItemSel) {
	((CProductTenderDialog*)pWnd)->OnRouteOfAdminSelectChange(nOldItemSel, nNewItemSel);
}
static void _OnRouteOfAdminSelendokFnc(CWnd* pWnd) {
	((CProductTenderDialog*)pWnd)->OnRouteOfAdminSelendok();
}
/*static void _OnRouteOfAdminSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnRouteOfAdminKillfocus();
}*/
/*static void _OnRouteOfAdminKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnRouteOfAdminKillfocus();
}*/
static long _OnRouteOfAdminLoadDataFnc(CWnd* pWnd) {
	return ((CProductTenderDialog*)pWnd)->OnRouteOfAdminLoadData();
}
/*static void _OnRouteOfAdminAddNewFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnRouteOfAdminAddNew();
}*/
static void _OnUomSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CProductTenderDialog* )pWnd)->OnUomSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUomSelendokFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnUomSelendok();
}
/*static void _OnUomSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnUomKillfocus();
}*/
/*static void _OnUomKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnUomKillfocus();
}*/
static long _OnUomLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnUomLoadData();
}
/*static void _OnUomAddNewFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnUomAddNew();
}*/
 
static void _OnProductIDSelendokFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnProductIDSelendok();
}
/*static void _OnProductIDSetfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnProductIDKillfocus();
}*/
/*static void _OnProductIDKillfocusFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnProductIDKillfocus();
}*/
static long _OnProductIDLoadDataFnc(CWnd *pWnd){
	return ((CProductTenderDialog *)pWnd)->OnProductIDLoadData();
}
/*static void _OnProductIDAddNewFnc(CWnd *pWnd){
	((CProductTenderDialog *)pWnd)->OnProductIDAddNew();
}*/

static void _OnIsActiveSelectFnc(CWnd* pWnd) {
	((CProductTenderDialog*)pWnd)->OnIsActiveSelect();
}



static void _OnSaveSelectFnc(CWnd* pWnd) {
	CProductTenderDialog* pVw = (CProductTenderDialog*)pWnd;
	pVw->OnSaveSelect();
}
static void _OnCloseSelectFnc(CWnd* pWnd) {
	CProductTenderDialog* pVw = (CProductTenderDialog*)pWnd;
	pVw->OnCloseSelect();
}

 
static int _OnAddProductTenderDialogFnc(CWnd *pWnd){
	 return ((CProductTenderDialog*)pWnd)->OnAddProductTenderDialog();
} 
static int _OnEditProductTenderDialogFnc(CWnd *pWnd){
	 return ((CProductTenderDialog*)pWnd)->OnEditProductTenderDialog();
} 
static int _OnDeleteProductTenderDialogFnc(CWnd *pWnd){
	 return ((CProductTenderDialog*)pWnd)->OnDeleteProductTenderDialog();
} 
static int _OnSaveProductTenderDialogFnc(CWnd *pWnd){
	 return ((CProductTenderDialog*)pWnd)->OnSaveProductTenderDialog();
} 
static int _OnCancelProductTenderDialogFnc(CWnd *pWnd){
	 return ((CProductTenderDialog*)pWnd)->OnCancelProductTenderDialog();
} 
CProductTenderDialog::CProductTenderDialog(CWnd* pParent, int nMode):CGuiDialog(pParent)
	
{
	CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 810;
	m_nDlgHeight = 565;
	SetDefaultValues();
	m_pWndRef = NULL;
}
CProductTenderDialog::~CProductTenderDialog(){
}
void CProductTenderDialog::OnCreateComponents(){
	m_wndProductInformation.Create(this, _T("Thông tin sản phẩm"), 5, 5, 510, 270);
	m_wndActiveIngredientIDLabel.Create(this, _T("Hoạt chất"), 10, 30, 130, 55);
	m_wndActiveIngredientID.Create(this, 135, 30, 505, 55);
	m_wndActiveIngredientLabel.Create(this, _T("Tên hoạt chất (thầu)"), 10, 60, 130, 85);
	m_wndActiveIngredient.Create(this, 135, 60, 505, 85);
	m_wndCode.Create(this, 135, 90, 255, 114);
	m_wndCodeLabel.Create(this, _T("Mã"), 10, 90, 130, 115);
	m_wndCategoryLabel.Create(this, _T("Nhóm TCKT"), 260, 90, 380, 115);
	m_wndCategory.Create(this, 385, 90, 505, 115);
	m_wndDosageConcentrationLabel.Create(this, _T("Nồng độ, hàm lượng"), 10, 120, 130, 145);
	m_wndDosageConcentration.Create(this, 135, 120, 504, 145);
	m_wndRouteOfAdminLabel.Create(this, _T("Đường dùng"), 10, 150, 130, 175);
	m_wndRouteOfAdmin.Create(this, 135, 150, 505, 175);
	m_wndDosageFormLabel.Create(this, _T("Dạng bào chế"), 10, 180, 130, 205);
	m_wndDosageForm.Create(this, 135, 180, 505, 205);
	m_wndUomLabel.Create(this, _T("Đơn vị"), 10, 210, 130, 235);
	m_wndUom.Create(this, 135, 210, 505, 235);
	m_wndProductIDLabel.Create(this, _T("DM dùng chung"), 10, 240, 130, 265);
	m_wndProductID.Create(this, 135, 240, 505, 265);
	m_wndProductIDLabel.ShowWindow(SW_HIDE);
	m_wndProductID.ShowWindow(SW_HIDE);

	m_wndIsActive.Create(this, _T("Hoạt động"), 10, 275, 130, 300);
	m_wndSave.Create(this, _T("&Lưu"), 320, 275, 410, 300);
	m_wndClose.Create(this, _T("&Đóng"), 415, 275, 510, 300);

}
void CProductTenderDialog::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndCode.SetLimitText(1024);
	m_wndCode.SetCheckValue(true);
	m_wndActiveIngredientID.SetCheckValue(true);
	m_wndActiveIngredientID.LimitText(1024);
	m_wndActiveIngredient.SetLimitText(1024);
	m_wndActiveIngredient.SetCheckValue(true);
	m_wndCategory.SetCheckValue(true);
	m_wndCategory.LimitText(1024);
	m_wndDosageConcentration.SetCheckValue(true);
	m_wndDosageConcentration.LimitText(1024);
	m_wndDosageForm.SetCheckValue(true);
	m_wndDosageForm.LimitText(1024);
	m_wndRouteOfAdmin.SetCheckValue(true);
	m_wndRouteOfAdmin.LimitText(1024);
	m_wndUom.SetCheckValue(true);
	m_wndUom.LimitText(1024);
	//m_wndProductID.SetCheckValue(true);
	m_wndProductID.LimitText(1024);
	//m_wndProductExtraInfoID.SetCheckValue(true);
	//m_wndProductExtraInfoID.LimitText(1024);
	
	m_wndActiveIngredientID.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndActiveIngredientID.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndRouteOfAdmin.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndRouteOfAdmin.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	
	m_wndCategory.InsertColumn(0, _T("Code"), CFMT_TEXT, 50);
	m_wndCategory.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	m_wndUom.InsertColumn(0, _T("ID"), CFMT_NUMBER, 40);
	m_wndUom.InsertColumn(1, _T("Name"), 256, 200);

	m_wndProductID.InsertColumn(0, _T("ID"), CFMT_NUMBER, 60);
	m_wndProductID.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);
	m_wndProductID.InsertColumn(2, _T("Code"), CFMT_TEXT, 0);

	
	m_product_tenderTbl.SetTableName(_T("m_product_tender"));
	m_product_tenderTbl.AddField(_T("M_PRODUCT_TENDER_ID"), dfText, 32); 
	m_product_tenderTbl.AddField(_T("CREATED"), dfDateTime); 
	m_product_tenderTbl.AddField(_T("CREATEDBY"), dfText, 32); 
	m_product_tenderTbl.AddField(_T("UPDATED"), dfDateTime); 
	m_product_tenderTbl.AddField(_T("UPDATEDBY"), dfText, 32); 
	m_product_tenderTbl.AddField(_T("CODE"), dfText, 32); 
	m_product_tenderTbl.AddField(_T("ACTIVE_INGREDIENT_ID"), dfLong); 
	m_product_tenderTbl.AddField(_T("ACTIVE_INGREDIENT"), dfText, 254); 
	m_product_tenderTbl.AddField(_T("CATEGORY_ID"), dfText, 32); 
	m_product_tenderTbl.AddField(_T("DOSAGE_ID"), dfText, 32); 
	m_product_tenderTbl.AddField(_T("ROUTE_ID"), dfText, 32); 
	m_product_tenderTbl.AddField(_T("DOSAGE_FORM"), dfText, 128); 
	m_product_tenderTbl.AddField(_T("UOM_ID"), dfLong); 
	m_product_tenderTbl.AddField(_T("PRODUCT_ID"), dfLong); 
	m_product_tenderTbl.AddField(_T("ISACTIVE"), dfText);

	m_wndIsActive.ModifyStyle(WS_TABSTOP, 0);

}
void CProductTenderDialog::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndCode.SetEvent(WE_CHANGE, _OnCodeChangeFnc);
	//m_wndCode.SetEvent(WE_SETFOCUS, _OnCodeSetfocusFnc);
	//m_wndCode.SetEvent(WE_KILLFOCUS, _OnCodeKillfocusFnc);
	m_wndCode.SetEvent(WE_CHECKVALUE, _OnCodeCheckValueFnc);
	m_wndActiveIngredientID.SetEvent(WE_SELENDOK, _OnActiveIngredientIDSelendokFnc);
	//m_wndActiveIngredientID.SetEvent(WE_SETFOCUS, _OnActiveIngredientIDSetfocusFnc);
	//m_wndActiveIngredientID.SetEvent(WE_KILLFOCUS, _OnActiveIngredientIDKillfocusFnc);
	m_wndActiveIngredientID.SetEvent(WE_SELCHANGE, _OnActiveIngredientIDSelectChangeFnc);
	m_wndActiveIngredientID.SetEvent(WE_LOADDATA, _OnActiveIngredientIDLoadDataFnc);
	//m_wndActiveIngredientID.SetEvent(WE_ADDNEW, _OnActiveIngredientIDAddNewFnc);
	//m_wndActiveIngredient.SetEvent(WE_CHANGE, _OnActiveIngredientChangeFnc);
	//m_wndActiveIngredient.SetEvent(WE_SETFOCUS, _OnActiveIngredientSetfocusFnc);
	//m_wndActiveIngredient.SetEvent(WE_KILLFOCUS, _OnActiveIngredientKillfocusFnc);
	m_wndActiveIngredient.SetEvent(WE_CHECKVALUE, _OnActiveIngredientCheckValueFnc);
	m_wndCategory.SetEvent(WE_SELENDOK, _OnCategorySelendokFnc);
	//m_wndCategory.SetEvent(WE_SETFOCUS, _OnCategorySetfocusFnc);
	//m_wndCategory.SetEvent(WE_KILLFOCUS, _OnCategoryKillfocusFnc);
	m_wndCategory.SetEvent(WE_SELCHANGE, _OnCategorySelectChangeFnc);
	m_wndCategory.SetEvent(WE_LOADDATA, _OnCategoryLoadDataFnc);
	//m_wndCategory.SetEvent(WE_ADDNEW, _OnCategoryAddNewFnc);
	//m_wndDosageConcentration.SetEvent(WE_CHANGE, _OnDosageConcentrationChangeFnc);
	//m_wndDosageConcentration.SetEvent(WE_SETFOCUS, _OnDosageConcentrationSetfocusFnc);
	//m_wndDosageConcentration.SetEvent(WE_KILLFOCUS, _OnDosageConcentrationKillfocusFnc);
	m_wndDosageConcentration.SetEvent(WE_CHECKVALUE, _OnDosageConcentrationCheckValueFnc);
	//m_wndDosageForm.SetEvent(WE_CHANGE, _OnDosageFormChangeFnc);
	//m_wndDosageForm.SetEvent(WE_SETFOCUS, _OnDosageFormSetfocusFnc);
	//m_wndDosageForm.SetEvent(WE_KILLFOCUS, _OnDosageFormKillfocusFnc);
	m_wndDosageForm.SetEvent(WE_CHECKVALUE, _OnDosageFormCheckValueFnc);
	m_wndRouteOfAdmin.SetEvent(WE_SELENDOK, _OnRouteOfAdminSelendokFnc);
	//m_wndRouteOfAdmin.SetEvent(WE_SETFOCUS, _OnRouteOfAdminSetfocusFnc);
	//m_wndRouteOfAdmin.SetEvent(WE_KILLFOCUS, _OnRouteOfAdminKillfocusFnc);
	m_wndRouteOfAdmin.SetEvent(WE_SELCHANGE, _OnRouteOfAdminSelectChangeFnc);
	m_wndRouteOfAdmin.SetEvent(WE_LOADDATA, _OnRouteOfAdminLoadDataFnc);
	//m_wndRouteOfAdmin.SetEvent(WE_ADDNEW, _OnRouteOfAdminAddNewFnc);
	m_wndUom.SetEvent(WE_SELENDOK, _OnUomSelendokFnc);
	//m_wndUom.SetEvent(WE_SETFOCUS, _OnUomSetfocusFnc);
	//m_wndUom.SetEvent(WE_KILLFOCUS, _OnUomKillfocusFnc);
	m_wndUom.SetEvent(WE_SELCHANGE, _OnUomSelectChangeFnc);
	m_wndUom.SetEvent(WE_LOADDATA, _OnUomLoadDataFnc);
	//m_wndUom.SetEvent(WE_ADDNEW, _OnUomAddNewFnc);
	m_wndProductID.SetEvent(WE_SELENDOK, _OnProductIDSelendokFnc);
	//m_wndProductID.SetEvent(WE_SETFOCUS, _OnProductIDSetfocusFnc);
	//m_wndProductID.SetEvent(WE_KILLFOCUS, _OnProductIDKillfocusFnc);
	//m_wndProductID.SetEvent(WE_SELCHANGE, _OnProductIDSelectChangeFnc);
	m_wndProductID.SetEvent(WE_LOADDATA, _OnProductIDLoadDataFnc);
	//m_wndProductID.SetEvent(WE_ADDNEW, _OnProductIDAddNewFnc);

	//m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndIsActive.SetEvent(WE_CLICK, _OnIsActiveSelectFnc);

	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	//SetMode(VM_NONE);
	if (GetMode() == VM_EDIT || GetMode() == VM_VIEW)
		GetDataToScreen();
	SetMode(GetMode());

}
void CProductTenderDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndCode.GetDlgCtrlID(), m_szCode);
	DDX_TextEx(pDX, m_wndActiveIngredientID.GetDlgCtrlID(), m_szActiveIngredientIDKey);
	DDX_Text(pDX, m_wndActiveIngredient.GetDlgCtrlID(), m_szActiveIngredient);
	DDX_TextEx(pDX, m_wndCategory.GetDlgCtrlID(), m_szCategoryKey);
	DDX_Text(pDX, m_wndDosageConcentration.GetDlgCtrlID(), m_szDosageConcentration);
	DDX_Text(pDX, m_wndDosageForm.GetDlgCtrlID(), m_szDosageForm);
	DDX_TextEx(pDX, m_wndRouteOfAdmin.GetDlgCtrlID(), m_szRouteOfAdminKey);
	DDX_TextEx(pDX, m_wndUom.GetDlgCtrlID(), m_szUomKey);
	DDX_TextEx(pDX, m_wndProductID.GetDlgCtrlID(), m_szProductIDKey);
	DDX_Check(pDX, m_wndIsActive.GetDlgCtrlID(), m_bIsActive);

}
void CProductTenderDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Code")] =  m_szCode;
	m_jData[_T("ActiveIngredientID")] =  m_szActiveIngredientIDKey;
	m_jData[_T("ActiveIngredient")] =  m_szActiveIngredient;
	m_jData[_T("Category")] =  m_szCategoryKey;
	m_jData[_T("DosageConcentration")] =  m_szDosageConcentration;
	m_jData[_T("DosageForm")] =  m_szDosageForm;
	m_jData[_T("RouteOfAdmin")] =  m_szRouteOfAdminKey;
	m_jData[_T("Uom")] =  m_szUomKey;
	
	}
	else
	{
			
	m_jData[_T("Code")].GetValue(m_szCode);
	m_jData[_T("ActiveIngredientID")].GetValue(m_szActiveIngredientIDKey);
	m_jData[_T("ActiveIngredient")].GetValue(m_szActiveIngredient);
	m_jData[_T("Category")].GetValue(m_szCategoryKey);
	m_jData[_T("DosageConcentration")].GetValue(m_szDosageConcentration);
	m_jData[_T("DosageForm")].GetValue(m_szDosageForm);
	m_jData[_T("RouteOfAdmin")].GetValue(m_szRouteOfAdminKey);
	m_jData[_T("Uom")].GetValue(m_szUomKey);
	}

}
void CProductTenderDialog::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM m_product_tender WHERE m_product_tender_id = '%s'"), m_szProductTenderID);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("code"), m_szCode);
		rs.GetValue(_T("active_ingredient_id"), m_szActiveIngredientIDKey);
		rs.GetValue(_T("active_ingredient"), m_szActiveIngredient);
		rs.GetValue(_T("category_id"), m_szCategoryKey);
		rs.GetValue(_T("dosage_id"), m_szDosageConcentration);
		rs.GetValue(_T("dosage_form"), m_szDosageForm);
		rs.GetValue(_T("route_id"), m_szRouteOfAdminKey);
		rs.GetValue(_T("uom_id"), m_szUomKey);
		rs.GetValue(_T("product_id"), m_szProductIDKey);
		rs.GetValue(_T("isactive"), m_szActive);
	}
	if (m_szActive == _T("Y"))
		m_bIsActive = TRUE;
		//m_wndIsActive.SetCheck(true);
	else
		//m_wndIsActive.SetCheck(false);
		m_bIsActive = FALSE;

	UpdateData(FALSE);
}
void CProductTenderDialog::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr;
	

	m_product_tenderTbl.SetValue(_T("created"), pMF->GetSysDateTime());
	m_product_tenderTbl.SetValue(_T("createdby"), pMF->GetCurrentUser());
	m_product_tenderTbl.SetValue(_T("updated"), pMF->GetSysDateTime());
	m_product_tenderTbl.SetValue(_T("updatedby"), pMF->GetCurrentUser());
	m_product_tenderTbl.SetValue(_T("code"), m_szCode);
	m_product_tenderTbl.SetValue(_T("ACTIVE_INGREDIENT_ID"), m_szActiveIngredientIDKey);
	m_product_tenderTbl.SetValue(_T("ACTIVE_INGREDIENT"), m_szActiveIngredient);
	m_product_tenderTbl.SetValue(_T("CATEGORY_ID"), m_szCategoryKey);
	m_product_tenderTbl.SetValue(_T("DOSAGE_ID"), m_szDosageConcentration);
	m_product_tenderTbl.SetValue(_T("ROUTE_ID"), m_szRouteOfAdminKey);

	m_product_tenderTbl.SetValue(_T("DOSAGE_FORM"), m_szDosageForm);
	m_product_tenderTbl.SetValue(_T("UOM_ID"), m_szUomKey);
	m_product_tenderTbl.SetValue(_T("PRODUCT_ID"), m_szProductIDKey);
	m_product_tenderTbl.SetValue(_T("ISACTIVE"), m_szActive?L"Y":L"N");
}
void CProductTenderDialog::SetDefaultValues(){

	m_szCode.Empty();
	//m_nActiveIngredientID=0;
	m_szActiveIngredientIDKey.Empty();
	m_szActiveIngredient.Empty();
	//m_szCategoryKey.Empty();
	m_szDosageConcentration.Empty();
	m_szDosageFormKey.Empty();
	m_szRouteOfAdminKey.Empty();
	m_szUomKey.Empty();
	m_szProductIDKey.Empty();
	m_bIsActive = TRUE;
}
int CProductTenderDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1,  -1);
 			SetDefaultValues();
			m_wndActiveIngredientID.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode;
}
/*void CProductTenderDialog::OnCodeChange(){

} */
/*void CProductTenderDialog::OnCodeSetfocus(){

} */
/*void CProductTenderDialog::OnCodeKillfocus(){

} */
int CProductTenderDialog::OnCodeCheckValue() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	if (GetMode() == VM_ADD)
	{
		szSQL.Format(_T("SELECT count(*) FROM m_product_tender WHERE code='%s' "), m_szCode);
	}
	if (GetMode() == VM_EDIT)
	{
		szSQL.Format(_T("SELECT count(*) FROM m_product_tender WHERE code='%s' and m_product_tender_id <> '%s' "), m_szCode, m_szProductTenderID);
	}
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
		m_wndCode.SetToolTipMessage(L"Mã hoạt chất đã tồn tại. Không cho phép nhập trùng mã hoạt chất");
		return -1;
	}
	return 0;
}
void CProductTenderDialog::OnActiveIngredientIDSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();

}
void CProductTenderDialog::OnActiveIngredientIDSelendok() {
	UpdateData(true);
	m_szActiveIngredient = m_wndActiveIngredientID.GetCurrent(1);
	UpdateData(false);
}
/*void CProductTenderDialog::OnActiveIngredientIDSetfocus(){

}*/
/*void CProductTenderDialog::OnActiveIngredientIDKillfocus(){

}*/
long CProductTenderDialog::OnActiveIngredientIDLoadData() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	
		CRecord rs(&pMF->m_db);
		CString szSQL, szWhere;
		if(m_wndActiveIngredientID.IsSearchKey() && !m_szActiveIngredientIDKey.IsEmpty()){
			szWhere.Format(_T(" and mpc_product_class_id='%s' "), m_szActiveIngredientIDKey);
		}
		m_wndActiveIngredientID.DeleteAllItems();
		int nCount = 0;
		szSQL.Format(_T("SELECT mpc_product_class_id as id, mpc_name as name, mpc_group as class_group,  ") \
			_T(" mpcg_name as group_name, mpc_product_category_id as product_category_id ") \
			_T(" FROM m_product_class ") \
			_T(" LEFT JOIN m_product_class_group ON(mpc_group = mpcg_id) ") \
			_T(" WHERE mpc_isactive = 'Y'   ORDER BY mpc_product_class_id"), szWhere);
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){
			m_wndActiveIngredientID.AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")),
				rs.GetValue(_T("class_group")),
				rs.GetValue(_T("group_name")),
				rs.GetValue(_T("product_category_id")),
				NULL);
			rs.MoveNext();
		}
		return nCount;

}
/*void CProductTenderDialog::OnActiveIngredientIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */
/*void CProductTenderDialog::OnActiveIngredientChange(){

} */
/*void CProductTenderDialog::OnActiveIngredientSetfocus(){

} */
/*void CProductTenderDialog::OnActiveIngredientKillfocus(){

} */
int CProductTenderDialog::OnActiveIngredientCheckValue() {
	return 0;
}
void CProductTenderDialog::OnCategorySelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();

}
void CProductTenderDialog::OnCategorySelendok() {

}
/*void CProductTenderDialog::OnCategorySetfocus(){

}*/
/*void CProductTenderDialog::OnCategoryKillfocus(){

}*/
long CProductTenderDialog::OnCategoryLoadData() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
//Nhom load từ selection ra thiết lập nhóm của tài chính không phải nhóm thuốc.
//Nhóm thuốc được lấy từ danh mục hoạt chất ra rồi
	return pMF->LoadSelectionList(&m_wndCategory, m_szCategoryKey, L"PRODUCT_TENDER_CATEGORY");

}
/*void CProductTenderDialog::OnCategoryAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

} */
/*void CProductTenderDialog::OnDosageConcentrationChange(){

} */
/*void CProductTenderDialog::OnDosageConcentrationSetfocus(){

} */
/*void CProductTenderDialog::OnDosageConcentrationKillfocus(){

} */
int CProductTenderDialog::OnDosageConcentrationCheckValue() {
	return 0;
}
/*void CProductTenderDialog::OnDosageFormChange(){

} */
/*void CProductTenderDialog::OnDosageFormSetfocus(){

} */
/*void CProductTenderDialog::OnDosageFormKillfocus(){

} */
int CProductTenderDialog::OnDosageFormCheckValue() {
	return 0;
}
void CProductTenderDialog::OnRouteOfAdminSelectChange(int nOldItemSel, int nNewItemSel) {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();

}
void CProductTenderDialog::OnRouteOfAdminSelendok() {

}
/*void CProductTenderDialog::OnRouteOfAdminSetfocus(){

}*/
/*void CProductTenderDialog::OnRouteOfAdminKillfocus(){

}*/
long CProductTenderDialog::OnRouteOfAdminLoadData() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere, tmpStr;
	if (m_wndRouteOfAdmin.IsSearchKey() && !m_szRouteOfAdminKey.IsEmpty())
	{
		szWhere.Format(_T(" and pu_id='%s' "), m_szRouteOfAdminKey);
	}
	m_wndRouteOfAdmin.GetWindowText(tmpStr);
	if (!tmpStr.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and lower(pu_name) like(chr(37)||lower('%s')||chr(37)) "), tmpStr);
	}
	m_wndRouteOfAdmin.DeleteAllItems();
	int nCount = 0;
	szSQL.Format(_T("select pu_id as id, pu_name as name from pms_usedrug     WHERE 1=1 %s ORDER BY pu_id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while (!rs.IsEOF()) {
		m_wndRouteOfAdmin.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);

		rs.MoveNext();
	}
	return nCount;
}
void CProductTenderDialog::OnUomSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CProductTenderDialog::OnUomSelendok(){
	 
}
/*void CProductTenderDialog::OnUomSetfocus(){
	
}*/
/*void CProductTenderDialog::OnUomKillfocus(){
	
}*/
long CProductTenderDialog::OnUomLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadUomList(&m_wndUom, m_szUomKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUom.IsSearchKey() && !m_szUomKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUomKey
};
	m_wndUom.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUom.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CProductTenderDialog::OnUomAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
 
void CProductTenderDialog::OnProductIDSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	//m_szMpCode = m_wndProductID.GetCurrent(2);
} 
void CProductTenderDialog::OnProductIDSelendok(){
	 
}
/*void CProductTenderDialog::OnProductIDSetfocus(){
	
}*/
/*void CProductTenderDialog::OnProductIDKillfocus(){
	
}*/
long CProductTenderDialog::OnProductIDLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProductID.IsSearchKey() && !m_szProductIDKey.IsEmpty()){
		szWhere.Format(_T(" and mp_product_id='%s' "), m_szProductIDKey);
	}
	m_wndProductID.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mp_product_id as id, mp_name as name, mp_code FROM m_product WHERE mp_org_id = '%s' and mp_isactive = 'Y' %s ORDER BY id "), pMF->GetModuleID(), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProductID.AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("mp_code")));
		rs.MoveNext();
	}
	return nCount;

}
/*void CProductTenderDialog::OnProductIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */

/*void CProductTenderDialog::OnProductExtraInfoIDAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CProductTenderDialog::OnIsActiveSelect() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	if (m_wndIsActive.GetCheck())
	{
		m_bIsActive = TRUE;
		m_szActive = _T("Y");
	}
	else
	{
		m_bIsActive = FALSE;
		m_szActive = _T("N");
	}

}


void CProductTenderDialog::OnSaveSelect() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	OnSaveProductTenderDialog();
}
void CProductTenderDialog::OnCloseSelect() {
	CMainFrame_E10* pMF = (CMainFrame_E10*)AfxGetMainWnd();
	CGuiDialog::OnCancel();
}
 
int CProductTenderDialog::OnAddProductTenderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CProductTenderDialog::OnEditProductTenderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CProductTenderDialog::OnDeleteProductTenderDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelProductTenderDialog();
 	}
	return 0;
}

int CProductTenderDialog::OnSaveProductTenderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();

	CString szSQL, tmpStr, szEvent, szDesc;
 	if(GetMode() == VM_ADD){
		/*szSQL.Format(_T("SELECT m_product_tender_id_asq.nextval as product_tender_id FROM DUAL"));
		CRecord rs(&pMF->m_db);
		rs.ExecSQL(szSQL);
		m_nProductTenderID = (long)rs.GetDoubleValue();

		m_product_tenderTbl.SetValue(_T("M_PRODUCT_TENDER_ID"), m_nProductTenderID);*/
		szSQL = m_product_tenderTbl.GetInsertSQL(L"M_PRODUCT_TENDER_ID");
 	}
 	else if(GetMode() == VM_EDIT){
		CString szWhere;
		szWhere.Format(_T(" WHERE M_PRODUCT_TENDER_ID = '%s'"), m_szProductTenderID);
		szSQL = m_product_tenderTbl.GetUpdateSQL(_T("M_PRODUCT_TENDER_ID,created,createdby"));
		szSQL += szWhere;
 	}
 
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
		if (GetMode() == VM_ADD)
		{
			SetMode(VM_ADD);
			if (m_pWndRef)
			{
				m_pWndRef->SendMessage(WM_COMMAND, CMD_REFRESHDATA);
			}
		}
		else
		{
			CGuiDialog::OnOK();
		}
		
 	}
 	else
 	{
		CString szMsg;
		szMsg.Format(L"[%d] Lỗi không lưu được dữ liệu.", ret);
		ShowMessageBox(szMsg);
 	}
 	return ret;
 	return 0;
}
int CProductTenderDialog::OnCancelProductTenderDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
 	return 0;
} 
int CProductTenderDialog::OnProductTenderDialogListLoadData(){
	return 0;
}
