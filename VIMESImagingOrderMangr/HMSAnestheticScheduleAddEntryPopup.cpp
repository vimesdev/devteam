#include "HMSAnestheticScheduleAddEntryPopup.h"
#include "HMSAnestheticScheduleDetail.h"
#include "HMSMainFrame.h"

static void _OnItemNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAnestheticScheduleAddEntryPopup* )pWnd)->OnItemNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnItemNameSelendokFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnItemNameSelendok();
}
/*static void _OnItemNameSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnItemNameKillfocus();
}*/
/*static void _OnItemNameKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnItemNameKillfocus();
}*/
static long _OnItemNameLoadDataFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnItemNameLoadData();
}
/*static void _OnItemNameAddNewFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnItemNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSAnestheticScheduleAddEntryPopup *)pWnd)->OnNoteCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAnestheticScheduleAddEntryPopup *pVw = (CHMSAnestheticScheduleAddEntryPopup *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAnestheticScheduleAddEntryPopup *pVw = (CHMSAnestheticScheduleAddEntryPopup *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAnestheticScheduleAddEntryPopupFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleAddEntryPopup*)pWnd)->OnAddHMSAnestheticScheduleAddEntryPopup();
} 
static int _OnEditHMSAnestheticScheduleAddEntryPopupFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleAddEntryPopup*)pWnd)->OnEditHMSAnestheticScheduleAddEntryPopup();
} 
static int _OnDeleteHMSAnestheticScheduleAddEntryPopupFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleAddEntryPopup*)pWnd)->OnDeleteHMSAnestheticScheduleAddEntryPopup();
} 
static int _OnSaveHMSAnestheticScheduleAddEntryPopupFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleAddEntryPopup*)pWnd)->OnSaveHMSAnestheticScheduleAddEntryPopup();
} 
static int _OnCancelHMSAnestheticScheduleAddEntryPopupFnc(CWnd *pWnd){
	 return ((CHMSAnestheticScheduleAddEntryPopup*)pWnd)->OnCancelHMSAnestheticScheduleAddEntryPopup();
} 
CHMSAnestheticScheduleAddEntryPopup::CHMSAnestheticScheduleAddEntryPopup()
{
	m_nDlgWidth = 555;
	m_nDlgHeight = 100;
	SetDefaultValues();
}

CHMSAnestheticScheduleAddEntryPopup::CHMSAnestheticScheduleAddEntryPopup(CWnd *pParent, int nMode): CGuiPopup(pParent)
{
	m_nDlgWidth = 555;
	m_nDlgHeight = 100;
	SetDefaultValues();
}

CHMSAnestheticScheduleAddEntryPopup::~CHMSAnestheticScheduleAddEntryPopup(){
}
void CHMSAnestheticScheduleAddEntryPopup::OnCreateComponents()
{
	m_wndItemNameLabel.Create(this, _T("Item Name"), 10, 30, 80, 55);
	m_wndItemName.Create(this,85, 30, 425, 55); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 430, 30, 490, 55);
	m_wndItemInfor.Create(this, _T("Item Information"), 5, 5, 545, 90);
	m_wndQuantity.Create(this,495, 30, 541, 55); 
	m_wndNoteLabel.Create(this, _T("Note"), 10, 60, 80, 85);
	m_wndNote.Create(this,85, 60, 425, 85); 
	m_wndSave.Create(this, _T("&Save"), 430, 60, 490, 85);
	m_wndClose.Create(this, _T("&X"), 495, 60, 541, 85);

}
void CHMSAnestheticScheduleAddEntryPopup::OnInitializeComponents()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetCheckValue(true);
	m_wndItemName.LimitText(35);

	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	//m_wndNote.SetCheckValue(true);


	m_wndItemName.InsertColumn(0, _T(""), CFMT_NUMBER, 0);
	m_wndItemName.InsertColumn(1, _T("Drug && Material Name"), CFMT_TEXT, 500);
	m_wndItemName.InsertColumn(2, _T("Uom"), CFMT_TEXT, 80);
	m_wndItemName.InsertColumn(3, _T("Serial No"), CFMT_TEXT, 100);
	m_wndItemName.InsertColumn(4, _T("Manufacture"), CFMT_TEXT, 120);
	m_wndItemName.InsertColumn(5, _T("Sale Price1"), CFMT_MONEY, 90);
	m_wndItemName.InsertColumn(6, _T("Sale Price2"), CFMT_MONEY, 90);
	m_wndItemName.InsertColumn(7, _T("Sale Price3"), CFMT_MONEY, 0);
	
	m_wndItemName.Format(7, 1);
	m_wndItemName.SetSearchStyle(SS_LIKE);


	m_hms_op_materialorder_Tbl.SetTableName(_T("hms_op_materialorder"));
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_createdby"), dfText, 15);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_createddate"), dfDateTime);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_updatedby"), dfText, 15);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_updateddate"), dfDateTime);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_docno"), dfLong);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_operation_id"), dfLong);

	m_hms_op_materialorder_Tbl.AddField(_T("hopm_orderdate"), dfDateTime);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_performdate"), dfDateTime);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_product_id"), dfLong);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_qtyorder"), dfLong);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_qtyissue"), dfLong);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_unitprice"), dfDouble);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_amount"), dfDouble);
	m_hms_op_materialorder_Tbl.AddField(_T("hopm_note"), dfText, 254);

}
void CHMSAnestheticScheduleAddEntryPopup::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndItemName.SetEvent(WE_SELENDOK, _OnItemNameSelendokFnc);
	//m_wndItemName.SetEvent(WE_SETFOCUS, _OnItemNameSetfocusFnc);
	//m_wndItemName.SetEvent(WE_KILLFOCUS, _OnItemNameKillfocusFnc);
	m_wndItemName.SetEvent(WE_SELCHANGE, _OnItemNameSelectChangeFnc);
	m_wndItemName.SetEvent(WE_LOADDATA, _OnItemNameLoadDataFnc);
	//m_wndItemName.SetEvent(WE_ADDNEW, _OnItemNameAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	/*AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSAnestheticScheduleAddEntryPopupFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSAnestheticScheduleAddEntryPopupFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSAnestheticScheduleAddEntryPopupFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSAnestheticScheduleAddEntryPopupFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSAnestheticScheduleAddEntryPopupFnc, 0, 'T', VK_CONTROL);*/
	SetMode(VM_ADD);

}
void CHMSAnestheticScheduleAddEntryPopup::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndItemName.GetDlgCtrlID(), m_szItemNameKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);

}
void CHMSAnestheticScheduleAddEntryPopup::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSAnestheticScheduleAddEntryPopup::GetScreenToData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_createdby"), pMF->GetCurrentUser());
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_createddate"), pMF->GetSysDateTime());
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_updatedby"), pMF->GetCurrentUser());
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_updateddate"), pMF->GetSysDateTime());
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_docno"), m_nDocNo);
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_operation_id"), m_nOperationID);

	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_orderdate"), m_szOrderDate);
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_performdate"), m_szOrderDate);
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_product_id"), m_szItemNameKey);
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_qtyorder"), m_nQuantity);
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_qtyissue"), m_nQuantity);
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_unitprice"), m_nUnitPrice);
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_amount"), m_nUnitPrice*m_nQuantity);
	m_hms_op_materialorder_Tbl.SetValue(_T("hopm_note"), m_szNote);
}
void CHMSAnestheticScheduleAddEntryPopup::SetDefaultValues(){

	m_szItemNameKey.Empty();
	m_nQuantity=0;
	m_szNote.Empty();

}
int CHMSAnestheticScheduleAddEntryPopup::SetMode(int nMode)
{
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_wndItemName.SetFocus();
 			break;
		case VM_ADDCHILD: 
			SetDefaultValues();
			m_wndItemName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, 1, -1);
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
void CHMSAnestheticScheduleAddEntryPopup::OnItemNameSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAnestheticScheduleAddEntryPopup::OnItemNameSelendok()
{
	 UpdateData(TRUE);

	 if (m_szObjType == _T("S"))
	 {
		 m_nUnitPrice = str2double(m_wndItemName.GetCurrent(5));
	 }
	 else if (m_szObjType == _T("D") ||
		 m_szObjType == _T("P"))
	 {
		 m_nUnitPrice = str2double(m_wndItemName.GetCurrent(7));
	 }
	 else
	 {
		 m_nUnitPrice = str2double(m_wndItemName.GetCurrent(6));
	 }

	 UpdateData(FALSE);
}
/*void CHMSAnestheticScheduleAddEntryPopup::OnItemNameSetfocus(){
	
}*/
/*void CHMSAnestheticScheduleAddEntryPopup::OnItemNameKillfocus(){
	
}*/
long CHMSAnestheticScheduleAddEntryPopup::OnItemNameLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if (m_wndItemName.IsSearchKey() && str2long(m_szItemNameKey) > 0)
	{
		szWhere.Format(_T(" AND product_id=%ld "), str2long(m_szItemNameKey));
    }
	m_wndItemName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT distinct  product_id,") \
				_T("        product_code,") \
				_T("        product_name,") \
				_T("        product_uomname,") \
				_T("        product_serial,") \
				_T("        product_manufacturename,") \
				_T("        product_saleprice1,") \
				_T("        product_unitprice,") \
				_T("        product_saleprice2,") \
				_T("        product_saleprice3") \
				_T(" FROM m_storageline ") \
				_T(" LEFT JOIN m_product_item on(mpi_product_item_id = msl_product_item_id) ") \
				_T(" LEFT JOIN m_product_view on (product_id = mpi_product_id) ") \
				_T(" WHERE product_isactive='Y' and product_org_id IN('MA', 'BB')  %s") \
				_T(" ORDER BY product_name, product_uomname"), szWhere);
_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		m_wndItemName.AddItems(
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_name")),
			rs.GetValue(_T("product_uomname")),
			rs.GetValue(_T("product_serial")),
			rs.GetValue(_T("product_manufacturename")),
			rs.GetValue(_T("product_saleprice1")),
			rs.GetValue(_T("product_unitprice")),
			rs.GetValue(_T("product_saleprice3")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAnestheticScheduleAddEntryPopup::OnItemNameAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAnestheticScheduleAddEntryPopup::OnQuantityChange(){
	
} */
/*void CHMSAnestheticScheduleAddEntryPopup::OnQuantitySetfocus(){
	
} */
/*void CHMSAnestheticScheduleAddEntryPopup::OnQuantityKillfocus(){
	
} */
int CHMSAnestheticScheduleAddEntryPopup::OnQuantityCheckValue()
{
	UpdateData(TRUE);

	if (m_nQuantity <= 0)
		return -1;

	return 0;
} 
/*void CHMSAnestheticScheduleAddEntryPopup::OnNoteChange(){
	
} */
/*void CHMSAnestheticScheduleAddEntryPopup::OnNoteSetfocus(){
	
} */
/*void CHMSAnestheticScheduleAddEntryPopup::OnNoteKillfocus(){
	
} */
int CHMSAnestheticScheduleAddEntryPopup::OnNoteCheckValue(){
	return 0;
} 
void CHMSAnestheticScheduleAddEntryPopup::OnSaveSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	OnSaveHMSAnestheticScheduleAddEntryPopup();
} 
void CHMSAnestheticScheduleAddEntryPopup::OnCloseSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	ClosePopup();
} 
int CHMSAnestheticScheduleAddEntryPopup::OnAddHMSAnestheticScheduleAddEntryPopup(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSAnestheticScheduleAddEntryPopup::OnEditHMSAnestheticScheduleAddEntryPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAnestheticScheduleAddEntryPopup::OnDeleteHMSAnestheticScheduleAddEntryPopup(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSAnestheticScheduleAddEntryPopup();
 	}
	return 0;
}
int CHMSAnestheticScheduleAddEntryPopup::OnSaveHMSAnestheticScheduleAddEntryPopup()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_ADDCHILD) 
 		return -1; 
	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
	CString szSQL;

 	if(!IsValidateData()) 
 		return -1;

	if (str2long(m_szItemNameKey) <= 0)
		return -1;

	int nRet = -1;

	szSQL = m_hms_op_materialorder_Tbl.GetInsertSQL();

	nRet = pMF->ExecSQL(szSQL);
	_tprintf(_T("\r\n%d: %s"), nRet, szSQL);
	if (nRet > 0)
	{
		SetMode(VM_ADDCHILD);
		m_wndParent->SendMessage(WM_COMMAND, CMD_REFRESHDATA+1, 0);
		
	}
	return nRet; 
}
int CHMSAnestheticScheduleAddEntryPopup::OnCancelHMSAnestheticScheduleAddEntryPopup(){
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
int CHMSAnestheticScheduleAddEntryPopup::OnHMSAnestheticScheduleAddEntryPopupListLoadData(){
	return 0;
}

void CHMSAnestheticScheduleAddEntryPopup::ShowPopup(CWnd *pWndRef, int nShow)
{
	CGuiPopup::ShowPopup(pWndRef, nShow);
} 
void CHMSAnestheticScheduleAddEntryPopup::ClosePopup()
{
	CGuiPopup::ClosePopup();
	return;
}


