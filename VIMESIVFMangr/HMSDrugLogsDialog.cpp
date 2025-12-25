#include "HMSDrugLogsDialog.h"
#include "MainFrm.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDrugLogsDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnProductItemSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDrugLogsDialog* )pWnd)->OnProductItemSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnProductItemSelendokFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnProductItemSelendok();
}
/*static void _OnProductItemSetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnProductItemKillfocus();
}*/
/*static void _OnProductItemKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnProductItemKillfocus();
}*/
static long _OnProductItemLoadDataFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnProductItemLoadData();
}
/*static void _OnProductItemAddNewFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnProductItemAddNew();
}*/
/*static void _OnQuantityChangeFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnQuantityChange();
} */
/*static void _OnQuantitySetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnQuantitySetfocus();} */ 
/*static void _OnQuantityKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnQuantityKillfocus();
} */
static int _OnQuantityCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnQuantityCheckValue();
} 
/*static void _OnDayNumberChangeFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnDayNumberChange();
} */
/*static void _OnDayNumberSetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnDayNumberSetfocus();} */ 
/*static void _OnDayNumberKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnDayNumberKillfocus();
} */
static int _OnDayNumberCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnDayNumberCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnNoteChangeFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnNoteChange();
} */
/*static void _OnNoteSetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnNoteSetfocus();} */ 
/*static void _OnNoteKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnNoteKillfocus();
} */
static int _OnNoteCheckValueFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnNoteCheckValue();
} 
static void _OnPeriodSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSDrugLogsDialog* )pWnd)->OnPeriodSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPeriodSelendokFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnPeriodSelendok();
}
/*static void _OnPeriodSetfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnPeriodKillfocus();
}*/
/*static void _OnPeriodKillfocusFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnPeriodKillfocus();
}*/
static long _OnPeriodLoadDataFnc(CWnd *pWnd){
	return ((CHMSDrugLogsDialog *)pWnd)->OnPeriodLoadData();
}
/*static void _OnPeriodAddNewFnc(CWnd *pWnd){
	((CHMSDrugLogsDialog *)pWnd)->OnPeriodAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSDrugLogsDialog *pVw = (CHMSDrugLogsDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSDrugLogsDialog *pVw = (CHMSDrugLogsDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CHMSDrugLogsDialog *pVw = (CHMSDrugLogsDialog *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSDrugLogsDialog *pVw = (CHMSDrugLogsDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSDrugLogsDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnAddHMSDrugLogsDialog();
} 
static int _OnEditHMSDrugLogsDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnEditHMSDrugLogsDialog();
} 
static int _OnDeleteHMSDrugLogsDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnDeleteHMSDrugLogsDialog();
} 
static int _OnSaveHMSDrugLogsDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnSaveHMSDrugLogsDialog();
} 
static int _OnCancelHMSDrugLogsDialogFnc(CWnd *pWnd){
	 return ((CHMSDrugLogsDialog*)pWnd)->OnCancelHMSDrugLogsDialog();
} 
CHMSDrugLogsDialog::CHMSDrugLogsDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nDocumentNo = 0;
}
CHMSDrugLogsDialog::~CHMSDrugLogsDialog(){
}
void CHMSDrugLogsDialog::OnCreateComponents(){
	m_wndDrugLogs.Create(this, _T("Drug Logs"), 5, 5, 1000, 510);
	m_wndList.Create(this,10, 30, 995, 505); 
	m_wndProductItemLabel.Create(this, _T("Drug Name /Cnt"), 6, 515, 126, 540);
	m_wndProductItem.Create(this,131, 515, 401, 540); 
	m_wndQuantityLabel.Create(this, _T("Quantity"), 406, 515, 516, 540);
	m_wndQuantity.Create(this,521, 515, 591, 540); 
	m_wndDayNumberLabel.Create(this, _T("Day Of Number"), 596, 515, 706, 540);
	m_wndDayNumber.Create(this,711, 515, 781, 540); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 786, 515, 896, 540);
	m_wndFromDate.Create(this,901, 515, 1001, 540); 
	m_wndNoteLabel.Create(this, _T("Note"), 6, 545, 126, 570);
	m_wndNote.Create(this,131, 545, 781, 570); 
	m_wndPeriodLabel.Create(this, _T("Period"), 786, 545, 896, 570);
	m_wndPeriod.Create(this,901, 545, 1002, 570); 
	m_wndAdd.Create(this, _T("&Add"), 626, 575, 716, 600);
	m_wndSave.Create(this, _T("&Save"), 721, 575, 811, 600);
	m_wndDiscard.Create(this, _T("&Discard"), 816, 575, 906, 600);
	m_wndClose.Create(this, _T("&Close"), 911, 575, 1001, 600);

}
void CHMSDrugLogsDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndProductItem.SetCheckValue(true);
	m_wndProductItem.LimitText(35);
	m_wndQuantity.SetLimitText(16);
	m_wndQuantity.SetCheckValue(true);
	m_wndDayNumber.SetLimitText(16);
	m_wndDayNumber.SetCheckValue(true);
//	m_wndFromDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromDate.SetCheckValue(true);
	m_wndNote.SetLimitText(254);
	m_wndNote.SetCheckValue(false);




	m_wndProductItem.InsertColumn(0, _T("ID"), CFMT_TEXT, 0);
	m_wndProductItem.InsertColumn(1, _T("Name"), CFMT_TEXT, 350);
	m_wndProductItem.InsertColumn(2, _T("Uom"), CFMT_TEXT, 80);
	m_wndProductItem.InsertColumn(3, _T("Generic"), CFMT_TEXT, 250);
	m_wndProductItem.InsertColumn(4, _T(""), CFMT_TEXT, 0);	//producttype


	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0); //druglog_id
	m_wndList.InsertColumn(1, _T("Index"), CFMT_NUMBER, 50);
	m_wndList.InsertColumn(2, _T("Description"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Quantity"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, _T("Day Number"), CFMT_MONEY, 50);
	m_wndList.InsertColumn(6, _T("Start Date"), CFMT_DATE, 85);
	m_wndList.InsertColumn(7, _T("Doctor"), CFMT_TEXT, 80);

	TranslateString(_T("Index"), m_szIndexLabel);
	TranslateString(_T("Description"), m_szDescriptionLabel);
	TranslateString(_T("Unit"), m_szUnitLabel);
	TranslateString(_T("Quantity"), m_szQtyLabel);
	TranslateString(_T("Day Number"), m_szDayNumberLabel);
	TranslateString(_T("Start Date"), m_szStartDateLabel);
	TranslateString(_T("Doctor"), m_szDoctorLabel);
	

	m_wndList.GetHeaderControl()->SetItemHeight(2);

	m_wndPeriod.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPeriod.InsertColumn(1, _T("Name"), CFMT_TEXT, 200);

	

}
void CHMSDrugLogsDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.SetWindowText(_T("Drug Logs"));
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndProductItem.SetEvent(WE_SELENDOK, _OnProductItemSelendokFnc);
	//m_wndProductItem.SetEvent(WE_SETFOCUS, _OnProductItemSetfocusFnc);
	//m_wndProductItem.SetEvent(WE_KILLFOCUS, _OnProductItemKillfocusFnc);
	m_wndProductItem.SetEvent(WE_SELCHANGE, _OnProductItemSelectChangeFnc);
	m_wndProductItem.SetEvent(WE_LOADDATA, _OnProductItemLoadDataFnc);
	//m_wndProductItem.SetEvent(WE_ADDNEW, _OnProductItemAddNewFnc);
	//m_wndQuantity.SetEvent(WE_CHANGE, _OnQuantityChangeFnc);
	//m_wndQuantity.SetEvent(WE_SETFOCUS, _OnQuantitySetfocusFnc);
	//m_wndQuantity.SetEvent(WE_KILLFOCUS, _OnQuantityKillfocusFnc);
	m_wndQuantity.SetEvent(WE_CHECKVALUE, _OnQuantityCheckValueFnc);
	//m_wndDayNumber.SetEvent(WE_CHANGE, _OnDayNumberChangeFnc);
	//m_wndDayNumber.SetEvent(WE_SETFOCUS, _OnDayNumberSetfocusFnc);
	//m_wndDayNumber.SetEvent(WE_KILLFOCUS, _OnDayNumberKillfocusFnc);
	m_wndDayNumber.SetEvent(WE_CHECKVALUE, _OnDayNumberCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndNote.SetEvent(WE_CHANGE, _OnNoteChangeFnc);
	//m_wndNote.SetEvent(WE_SETFOCUS, _OnNoteSetfocusFnc);
	//m_wndNote.SetEvent(WE_KILLFOCUS, _OnNoteKillfocusFnc);
	m_wndNote.SetEvent(WE_CHECKVALUE, _OnNoteCheckValueFnc);
	m_wndPeriod.SetEvent(WE_SELENDOK, _OnPeriodSelendokFnc);
	//m_wndPeriod.SetEvent(WE_SETFOCUS, _OnPeriodSetfocusFnc);
	//m_wndPeriod.SetEvent(WE_KILLFOCUS, _OnPeriodKillfocusFnc);
	m_wndPeriod.SetEvent(WE_SELCHANGE, _OnPeriodSelectChangeFnc);
	m_wndPeriod.SetEvent(WE_LOADDATA, _OnPeriodLoadDataFnc);
	//m_wndPeriod.SetEvent(WE_ADDNEW, _OnPeriodAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT msd_storage_id FROM m_storage_default WHERE msd_department_id='KD' and msd_object_id=%d "), pMF->GetObjectID());
	rs.ExecSQL(szSQL);
	m_szStorages.Format(_T("-1"));
	int nStorageID;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("msd_storage_id"), nStorageID);
		m_szStorages.AppendFormat(_T(",%d"), nStorageID);
		rs.MoveNext();
	}
	SetMode(VM_NONE);
	OnListLoadData();
}
void CHMSDrugLogsDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndProductItem.GetDlgCtrlID(), m_szProductItemKey);
	DDX_Text(pDX, m_wndQuantity.GetDlgCtrlID(), m_nQuantity);
	DDX_Text(pDX, m_wndDayNumber.GetDlgCtrlID(), m_nDayNumber);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_Text(pDX, m_wndNote.GetDlgCtrlID(), m_szNote);
	DDX_TextEx(pDX, m_wndPeriod.GetDlgCtrlID(), m_szPeriodKey);

}
void CHMSDrugLogsDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_druglogs WHERE hdl_druglogs_id=%ld "), m_nDrugLogs_ID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hdl_note"), m_szNote);
		rs.GetValue(_T("hdl_product_id"), m_szProductItemKey);
		rs.GetValue(_T("hdl_qty"), m_nQuantity);
		rs.GetValue(_T("hdl_daynumber"), m_nDayNumber);
		rs.GetValue(_T("hdl_startdate"), m_szFromDate);
		rs.GetValue(_T("hdl_period"), m_szPeriodKey);
	}

}
void CHMSDrugLogsDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDrugLogsDialog::SetDefaultValues(){

	m_szProductItemKey.Empty();
	m_nQuantity=0;
	m_nDayNumber=0;
	m_szFromDate.Empty();
	m_szNote.Empty();
	m_szPeriodKey.Empty();

}
int CHMSDrugLogsDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
 			SetDefaultValues();
			m_szFromDate = pMF->GetSysDate();
			m_wndProductItem.SetFocus();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 3, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 3, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
		m_wndClose.EnableWindow(TRUE);
 		return nOldMode;
}
void CHMSDrugLogsDialog::OnListDblClick(){
	
} 
void CHMSDrugLogsDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nDrugLogs_ID = str2long(m_wndList.GetItemText(nNewItem, 0));
	GetDataToScreen();
	SetMode(VM_VIEW);
} 
int CHMSDrugLogsDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	//OnDeleteHMSDrugLogsDialog();
	 return 0;
} 
long CHMSDrugLogsDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	CString szWhere, szStartDate;
	CDate dte, dte1, dte2;
	int nDayNumber;
	szWhere.Format(_T(" and hdl_deptid='%s' "), pMF->m_szDept);

	m_wndList.DeleteAllColumns();
	m_wndList.InsertColumn(0, _T(""), CFMT_TEXT, 0);
	m_wndList.InsertColumn(1, m_szIndexLabel, CFMT_NUMBER, 50);
	m_wndList.InsertColumn(2, m_szDescriptionLabel, CFMT_TEXT, 300);
	m_wndList.InsertColumn(3, m_szUnitLabel, CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, m_szQtyLabel, CFMT_MONEY, 50);
	m_wndList.InsertColumn(5, m_szDayNumberLabel, CFMT_NUMBER, 50);
	m_wndList.InsertColumn(6, m_szStartDateLabel, CFMT_DATE, 85);
	m_wndList.InsertColumn(7, m_szDoctorLabel, CFMT_TEXT, 80);

	int nFixedCol = 8;

	szSQL.Format(_T("SELECT (min(hdl_startdate)) as min_date, max(hdl_enddate)-min(hdl_startdate) as daynumber FROM hms_druglogs WHERE hdl_docno=%ld %s"), m_nDocumentNo, szWhere);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;
	rs.GetValue(_T("min_date"), szStartDate);
	rs.GetValue(_T("daynumber"), nDayNumber);
	szStartDate.Replace(_T("-"), _T("/"));
	dte.ParseDate(szStartDate);
	for (int i = nFixedCol; i < nDayNumber+nFixedCol; i++)
	{
		tmpStr.Format(_T("%.2d/%.2d"), dte.GetDay(), dte.GetMonth());
		dte ++;
		m_wndList.InsertColumn(i, tmpStr, CFMT_MONEY, 50);
	}
	m_wndList.BeginLoad(); 
	int nCount = 0;
	

	szSQL.Format(_T(" SELECT hdl_druglogs_id,") \
_T("   product_name,") \
_T("   product_uomname,") \
_T("   hdl_qty       AS quantity,") \
_T("   hdl_daynumber AS daynumber,") \
_T("   hdl_startdate AS startdate,") \
_T("   hdl_enddate AS enddate,") \
_T("   hdl_doctor    AS doctor,") \
_T("   hdl_deptid    AS deptid") \
_T(" FROM hms_druglogs") \
_T(" LEFT JOIN m_product_view") \
_T(" ON(product_id  =hdl_product_id)") \
_T(" WHERE hdl_docno=%ld  %s ") \
_T(" ORDER BY product_name,") \
_T("   product_uomname"), m_nDocumentNo, szWhere);
	nCount = rs.ExecSQL(szSQL);
	int nIndex = 1;
	float nQty;
	CString szEndDate;
	

	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), nIndex++);
		int nItem = m_wndList.AddItems(
			rs.GetValue(_T("hdl_druglogs_id")),
			tmpStr, 
			rs.GetValue(_T("product_name")),
			rs.GetValue(_T("product_uomname")),
			rs.GetValue(_T("quantity")),
			rs.GetValue(_T("daynumber")),
			rs.GetValue(_T("startdate")),
			rs.GetValue(_T("doctor")),
			NULL);
		rs.GetValue(_T("quantity"), nQty);
		rs.GetValue(_T("startdate"), tmpStr);
		rs.GetValue(_T("enddate"), szEndDate);
		
		dte.ParseDate(szStartDate);
		dte1.ParseDate(tmpStr);
		dte2.ParseDate(szEndDate);
		
		tmpStr.Replace(_T("-"), _T("/"));
		for (int i = nFixedCol; i < nDayNumber+nFixedCol; i++)
		{
			if(dte >= dte1 && dte < dte2)
			{
				m_wndList.SetItemText(nItem, i, ToString(nQty));
			}
			dte++;
			
		}

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSDrugLogsDialog::OnProductItemSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDrugLogsDialog::OnProductItemSelendok(){
	 UpdateData(true);
	 CString szProductType = m_wndProductItem.GetCurrent(3);
	 //Kiem tra thuoc ung thu phai nhap chu ky su dung
	 if(szProductType == _T("A1400"))
	 {
		 m_wndPeriod.EnableWindow(true);
		 m_wndPeriod.SetCheckValue(true);
	 }
	 else
	 {
		 m_wndPeriod.EnableWindow(false);
		 m_wndPeriod.SetCheckValue(false);
	 }
}
/*void CHMSDrugLogsDialog::OnProductItemSetfocus(){
	
}*/
/*void CHMSDrugLogsDialog::OnProductItemKillfocus(){
	
}*/
long CHMSDrugLogsDialog::OnProductItemLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndProductItem.IsSearchKey() && str2long(m_szProductItemKey) > 0){
	 szWhere.Format(_T(" and mp_product_id=%ld "), str2long(m_szProductItemKey));
	};

	szWhere.AppendFormat(_T(" and mp_product_id in(select distinct msl_product_id from m_storageline where msl_isactive='Y' and msl_storage_id in(%s) ) "), m_szStorages);

	m_wndProductItem.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT mp_producttype as product_type, ") \
		_T(" mp_product_id as product_id, mp_name as product_name, adu_name as product_uomname, ") \
		_T(" mpc_name as  product_class ") \
		_T(" FROM m_product LEFT JOIN ad_uom ON(mp_product_uom_id=adu_uom_id) ") \
		_T(" LEFT JOIN m_product_class ON(mpc_product_class_id = mp_product_class_id) ") \
		_T(" WHERE mp_isactive='Y' %s ORDER BY mp_org_id, product_name, product_uomname "), szWhere);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndProductItem.AddItems(
			rs.GetValue(_T("product_id")), 
			rs.GetValue(_T("product_name")), 
			rs.GetValue(_T("product_uomname")),
			rs.GetValue(_T("product_class")),
			rs.GetValue(_T("product_type")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSDrugLogsDialog::OnProductItemAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSDrugLogsDialog::OnQuantityChange(){
	
} */
/*void CHMSDrugLogsDialog::OnQuantitySetfocus(){
	
} */
/*void CHMSDrugLogsDialog::OnQuantityKillfocus(){
	
} */
int CHMSDrugLogsDialog::OnQuantityCheckValue(){
	if(m_nQuantity <= 0)
		return -1;
	return 0;
} 
/*void CHMSDrugLogsDialog::OnDayNumberChange(){
	
} */
/*void CHMSDrugLogsDialog::OnDayNumberSetfocus(){
	
} */
/*void CHMSDrugLogsDialog::OnDayNumberKillfocus(){
	
} */
int CHMSDrugLogsDialog::OnDayNumberCheckValue(){
	if(m_nDayNumber <= 0)
		return -1;
	return 0;
} 
/*void CHMSDrugLogsDialog::OnFromDateChange(){
	
} */
/*void CHMSDrugLogsDialog::OnFromDateSetfocus(){
	
} */
/*void CHMSDrugLogsDialog::OnFromDateKillfocus(){
	
} */
int CHMSDrugLogsDialog::OnFromDateCheckValue(){
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSystemDate, szDate;
	szSystemDate = pMF->GetSysDate();
	szDate = pMF->m_szEntryDate;
	if (CompareDate(m_szFromDate, szSystemDate) > 7)
		return -1;
	if(CompareDate(m_szFromDate, szDate) < 0)
		return -1;
	return 0;
} 
/*void CHMSDrugLogsDialog::OnNoteChange(){
	
} */
/*void CHMSDrugLogsDialog::OnNoteSetfocus(){
	
} */
/*void CHMSDrugLogsDialog::OnNoteKillfocus(){
	
} */
int CHMSDrugLogsDialog::OnNoteCheckValue(){
	return 0;
} 
void CHMSDrugLogsDialog::OnPeriodSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSDrugLogsDialog::OnPeriodSelendok(){
	 
}
/*void CHMSDrugLogsDialog::OnPeriodSetfocus(){
	
}*/
/*void CHMSDrugLogsDialog::OnPeriodKillfocus(){
	
}*/
long CHMSDrugLogsDialog::OnPeriodLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndPeriod.IsSearchKey() && !m_szPeriodKey.IsEmpty()){
		szWhere.Format(_T(" and ss_code='%s' "), m_szPeriodKey);
	};
	m_wndPeriod.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM  sys_sel WHERE ss_id='kdrug_period' %s ORDER BY ss_code "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPeriod.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSDrugLogsDialog::OnPeriodAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSDrugLogsDialog::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(m_nDocumentNo <= 0)
		return;
	SetMode(VM_ADD);
} 
void CHMSDrugLogsDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSDrugLogsDialog();
} 
void CHMSDrugLogsDialog::OnDiscardSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSDrugLogsDialog();
} 
void CHMSDrugLogsDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSDrugLogsDialog::OnAddHMSDrugLogsDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSDrugLogsDialog::OnEditHMSDrugLogsDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDrugLogsDialog::OnDeleteHMSDrugLogsDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return 0;

 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	
	long nDrugLogs_ID;
	nDrugLogs_ID = str2long(m_wndList.GetItemText(nSel, 0));

	szSQL.Format(_T("HMS_DRUGLOGS_DELETE('%s', %ld, %ld) "), pMF->GetCurrentUser(), m_nDocumentNo, nDrugLogs_ID );
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret >= 0){
		SetMode(VM_VIEW);
 		OnCancelHMSDrugLogsDialog();
		OnListLoadData();
 	}
	return 0;
}
int CHMSDrugLogsDialog::OnSaveHMSDrugLogsDialog(){
 	if(GetMode() != VM_ADD )
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	szSQL.Format(_T("HMS_DRUGLOGS_CREATE('%s', %ld, %ld, '%s', 1, '%s', TO_DATE('%s', 'YYYY-MM-DD'), %ld, %.2f, %d,'%s', %d) "),
		pMF->GetCurrentUser(), m_nPatientNo, m_nDocumentNo, m_szDeptID, m_szDoctor, m_szFromDate, str2long(m_szProductItemKey), m_nQuantity, m_nDayNumber, m_szNote, str2int(m_szPeriodKey));

	_fmsg(_T("%s"), szSQL);
 	int ret = str2int(pMF->ExecDML(szSQL));
 	if(ret > 0)
 	{
 		SetMode(VM_ADD);
		OnListLoadData();
 	}
 	else
 	{

 	}
 	return ret;
 	return 0;
}
int CHMSDrugLogsDialog::OnCancelHMSDrugLogsDialog(){
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
int CHMSDrugLogsDialog::OnHMSDrugLogsDialogListLoadData(){
	return 0;
}
