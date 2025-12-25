#include "PMSMedicalCabinetOrderEntry.h"
//#include "stdafx.h"
#include "HMSMainFrame.h"
#include "PMSMedicalCabinetOrder.h"
#include ".\pmsmedicalcabinetorderentry.h"

static void _OnDrugNameSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMSMedicalCabinetOrderEntry* )pWnd)->OnDrugNameSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDrugNameSelendokFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderEntry *)pWnd)->OnDrugNameSelendok();
}
/*static void _OnDrugNameSetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderEntry *)pWnd)->OnDrugNameKillfocus();
}*/
/*static void _OnDrugNameKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderEntry *)pWnd)->OnDrugNameKillfocus();
}*/
static long _OnDrugNameLoadDataFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrderEntry *)pWnd)->OnDrugNameLoadData();
}
/*static void _OnDrugNameAddNewFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderEntry *)pWnd)->OnDrugNameAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderEntry *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderEntry *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CPMSMedicalCabinetOrderEntry *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CPMSMedicalCabinetOrderEntry *)pWnd)->OnQuantityCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrderEntry *pVw = (CPMSMedicalCabinetOrderEntry *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPMSMedicalCabinetOrderEntry *pVw = (CPMSMedicalCabinetOrderEntry *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPMSMedicalCabinetOrderDialogFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderEntry*)pWnd)->OnAddPMSMedicalCabinetOrderDialog();
} 
static int _OnEditPMSMedicalCabinetOrderDialogFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderEntry*)pWnd)->OnEditPMSMedicalCabinetOrderDialog();
} 
static int _OnDeletePMSMedicalCabinetOrderDialogFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderEntry*)pWnd)->OnDeletePMSMedicalCabinetOrderDialog();
} 
static int _OnSavePMSMedicalCabinetOrderDialogFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderEntry*)pWnd)->OnSavePMSMedicalCabinetOrderDialog();
} 
static int _OnCancelPMSMedicalCabinetOrderDialogFnc(CWnd *pWnd){
	 return ((CPMSMedicalCabinetOrderEntry*)pWnd)->OnCancelPMSMedicalCabinetOrderDialog();
} 
CPMSMedicalCabinetOrderEntry::CPMSMedicalCabinetOrderEntry(){

	m_nDlgWidth = 600;
	m_nDlgHeight = 55;
	SetDefaultValues();
}
CPMSMedicalCabinetOrderEntry::~CPMSMedicalCabinetOrderEntry(){
}
void CPMSMedicalCabinetOrderEntry::OnCreateComponents(){
	m_wndAddEntry.Create(this, _T("Add Entry"), 1, 0, 781, 55);
	m_wndDrugNameLabel.Create(this, _T("Name /Cnt"), 5, 25, 95, 50);
	m_wndDrugName.Create(this,100, 25, 350, 50); 
	m_wndMaxQuantityLabel.Create(this, _T("Max Quantity"), 355, 25, 440, 50);
	m_wndMaxQuantity.Create(this, 445, 25, 505, 50); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 510, 25, 590, 50);
	m_wndQuantity.Create(this,595, 25, 665, 51); 
	m_wndSave.Create(this, _T("&Save"), 670, 25, 745, 50);
	m_wndClose.Create(this, _T("X"), 750, 25, 775, 50);
}
void CPMSMedicalCabinetOrderEntry::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDrugName.SetCheckValue(true);
	m_wndQuantity.SetCheckValue(true);
	m_wndClose.ModifyStyle(WS_TABSTOP, 0);
	m_wndMaxQuantity.SetReadOnly(true);
	m_wndMaxQuantity.SetCurrencyFormat(true);

	m_wndDrugName.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDrugName.InsertColumn(1, _T("Name /Cnt"), CFMT_TEXT, 200);
	m_wndDrugName.InsertColumn(2, _T("Unit"), CFMT_TEXT|CFMT_CENTER, 50);
	m_wndDrugName.InsertColumn(3, _T("Price"), CFMT_NUMBER, 70);
	m_wndDrugName.InsertColumn(4, _T("Manufacturer"), CFMT_TEXT, 200);
	m_wndDrugName.InsertColumn(5, _T("In Stock"), CFMT_NUMBER, 70);

	pms_stocktransfer_line.SetTableName(_T("pms_stocktransfer_line"));
	pms_stocktransfer_line.AddField(_T("pmstl_id"), dfText, 15); 
	pms_stocktransfer_line.AddField(_T("pmstl_stockid"), dfInteger); 
	pms_stocktransfer_line.AddField(_T("pmstl_sitemid"), dfLong); 
	pms_stocktransfer_line.AddField(_T("pmstl_qty"), dfLong); 

}
void CPMSMedicalCabinetOrderEntry::OnSetWindowEvents(){
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
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

}
void CPMSMedicalCabinetOrderEntry::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDrugName.GetDlgCtrlID(), m_szDrugNameKey);
	DDX_Text(pDX, m_wndMaxQuantity.GetDlgCtrlID(), m_nMaxQuantity);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);

}
void CPMSMedicalCabinetOrderEntry::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("pmstl_sitemid"), m_szDrugNameKey);
	rs.GetValue(_T("pmstl_qty"), m_nQuantity);

}
void CPMSMedicalCabinetOrderEntry::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	pms_stocktransfer_line.SetValue(_T("pmstl_userid"), pMF->GetCurrentUser());
	pms_stocktransfer_line.SetValue(_T("pmstl_id"), m_szID);
	pms_stocktransfer_line.SetValue(_T("pmstl_stockid"), m_nFromStockID);
	pms_stocktransfer_line.SetValue(_T("pmstl_sitemid"), m_szDrugNameKey);
	pms_stocktransfer_line.SetValue(_T("pmstl_qty"), m_nQuantity);

}
void CPMSMedicalCabinetOrderEntry::SetDefaultValues(){

	m_szDrugNameKey.Empty();
	m_nQuantity=0;
	m_nMaxQuantity = 0;

}
int CPMSMedicalCabinetOrderEntry::SetMode(int nMode){ 
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
			m_wndDrugName.SetFocus();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
			m_wndDrugName.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, -1); 
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 1, -1); 
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
 	} 
void CPMSMedicalCabinetOrderEntry::OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CPMSMedicalCabinetOrderEntry::OnDrugNameSelendok(){
	UpdateData(true);
	m_nMaxQuantity = ToLong(m_wndDrugName.GetCurrent(5));
	UpdateData(false);	 
}
/*void CPMSMedicalCabinetOrderEntry::OnDrugNameSetfocus(){
	
}*/
/*void CPMSMedicalCabinetOrderEntry::OnDrugNameKillfocus(){
	
}*/
long CPMSMedicalCabinetOrderEntry::OnDrugNameLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDrugName.IsSearchKey() && ToLong(m_szDrugNameKey) > 0){
		szWhere.Format(_T(" AND pmsi_id=%ld "), ToLong(m_szDrugNameKey));
	};
	m_wndDrugName.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T(" SELECT pmsi_id as id, ") \
		_T(" product_name as name, ") \
		_T(" product_unit as unit, ") \
		_T(" pmsi_servprice as price,") \
		_T(" pmm_name||' - '||sc_name as mfgname, ") \
		_T(" sum(pmsl_qty-pmsl_orderqty) as maxqty ") \
		_T(" FROM pms_stockline ") \
		_T(" LEFT JOIN pms_stockitems ON(pmsi_id=pmsl_sitemid) ") \
		_T(" LEFT JOIN m_product_view ON(pmsi_itemid=product_id)") \
		_T(" LEFT JOIN sys_country ON(sc_id=pmsi_countryid)") \
		_T(" LEFT JOIN pms_mfg ON(pmm_id=pmsi_mfgid)") \
		_T(" WHERE pmsl_stockid=%d AND pmsl_active='Y' AND pmsl_impdate <='%s' %s ") \
		_T(" GROUP BY id, name, unit, price, mfgname ") \
		_T(" HAVING sum(pmsl_qty-pmsl_orderqty) > 0 ") \
		_T(" ORDER BY name, unit, price ") , m_nFromStockID, m_szOrderDate, szWhere);

//_fmsg(_T("%s"), szSQL);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDrugName.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("unit")), 
			rs.GetValue(_T("price")), 
			rs.GetValue(_T("mfgname")), 
			rs.GetValue(_T("maxqty")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CPMSMedicalCabinetOrderEntry::OnDrugNameAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
/*void CPMSMedicalCabinetOrderEntry::OnQuantityChange(){
	
} */
/*void CPMSMedicalCabinetOrderEntry::OnQuantitySetfocus(){
	
} */
/*void CPMSMedicalCabinetOrderEntry::OnQuantityKillfocus(){
	
} */
int CPMSMedicalCabinetOrderEntry::OnQuantityCheckValue(){
	if(m_nQuantity <= 0)
		return -1;

	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T(" SELECT sum(pmsl_qty-pmsl_orderqty)") \
		_T(" FROM pms_stockline") \
		_T(" WHERE pmsl_stockid=%d ") \
		_T(" 	AND pmsl_sitemid=%ld AND pmsl_impdate <='%s' "), m_nFromStockID, ToLong(m_szDrugNameKey), m_szOrderDate);
	rs.ExecSQL(szSQL);
	double nOnhandQty = rs.GetDoubleValue();
	if(nOnhandQty < m_nQuantity)
	{
		CString szMsg;
		szMsg.Format(_T("Order quantity [%ld] > in stock quantity [%ld]"), m_nQuantity, nOnhandQty);
		m_wndQuantity.SetToolTipMessage(szMsg);
		return -1;
	}
	return 0;
} 
void CPMSMedicalCabinetOrderEntry::OnSaveSelect(){
	OnSavePMSMedicalCabinetOrderDialog();	
} 
void CPMSMedicalCabinetOrderEntry::OnCloseSelect(){
	((CPMSMedicalCabinetOrder *) GetParent())->ShowInput(false);
} 
int CPMSMedicalCabinetOrderEntry::OnAddPMSMedicalCabinetOrderDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
} 
int CPMSMedicalCabinetOrderEntry::OnEditPMSMedicalCabinetOrderDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
return 0;  
 
} 
int CPMSMedicalCabinetOrderEntry::OnDeletePMSMedicalCabinetOrderDialog(){
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
 		OnCancelPMSMedicalCabinetOrderDialog(); 
 	}
return 0;
 } 
int CPMSMedicalCabinetOrderEntry::OnSavePMSMedicalCabinetOrderDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(GetMode() == VM_ADD){ 
		szSQL.Format(_T("SELECT pms_stocktransfer_line_add(%s)"), pms_stocktransfer_line.FormatSQL());
 	} 
 	else if(GetMode() == VM_EDIT){ 
 		szSQL.Format(_T("SELECT pms_stocktransfer_line_update(%s)"), pms_stocktransfer_line.FormatSQL());
 	} 
 _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
		((CPMSMedicalCabinetOrder*)GetParent())->OnListLoadData();
 		SetMode(VM_ADD); 
 	} 
 	return ret; 
}
int CPMSMedicalCabinetOrderEntry::OnCancelPMSMedicalCabinetOrderDialog(){
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
int CPMSMedicalCabinetOrderEntry::OnPMSMedicalCabinetOrderDialogListLoadData(){
	return 0;
}

BOOL CPMSMedicalCabinetOrderEntry::PreTranslateMessage(MSG* pMsg)
{
	switch(pMsg->message){
		case WM_LBUTTONDBLCLK:
		case WM_LBUTTONDOWN:
		case WM_RBUTTONDOWN:
		case WM_MOUSEMOVE:
			return FALSE;
		case WM_KEYDOWN:
			if(pMsg->wParam == VK_ESCAPE && !m_wndDrugName.GetDroppedState()){
				OnCancelPMSMedicalCabinetOrderDialog();
				((CPMSMedicalCabinetOrder *) GetParent())->ShowInput(false);
			}break;
	};

	return CGuiView::PreTranslateMessage(pMsg);
}
