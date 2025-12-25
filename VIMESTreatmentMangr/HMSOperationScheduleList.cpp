#include "HMSOperationScheduleList.h"
#include "MainFrm.h"
#include "HMSOperationScheduleMaterialPopup.h"
#include "HMSOperationScheduleDetail.h"
#include "HMSReportForms\PrintForms.h"
#include "StringToken.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleList *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleList *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleList *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleList *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSOperationScheduleList *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleList *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSOperationScheduleList *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleList *)pWnd)->OnToDateCheckValue();
} 
static long _OnOrderListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleList*)pWnd)->OnOrderListLoadData();
} 
static void _OnOrderListDblClickFnc(CWnd *pWnd){
	((CHMSOperationScheduleList*)pWnd)->OnOrderListDblClick();
} 
static void _OnOrderListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationScheduleList*)pWnd)->OnOrderListSelectChange(nOldItem, nNewItem);
} 
static int _OnOrderListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleList*)pWnd)->OnOrderListDeleteItem();
}

static int _OnOrderListPrintItemFnc(CWnd *pWnd){
	((CHMSOperationScheduleList*)pWnd)->OnPrintSelect();
	 return 0;
}

static int _OnOrderListAddPatientOrderFnc(CWnd *pWnd){
	((CHMSOperationScheduleList*)pWnd)->OnAddPatientOrder();
	 return 0;
}

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSOperationScheduleList*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSOperationScheduleList*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSOperationScheduleList*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleList*)pWnd)->OnListDeleteItem();
}


static int _OnListPrintItemFnc(CWnd *pWnd){
	 ((CHMSOperationScheduleList*)pWnd)->OnPrintMaterialOrder();
	 return 0;
}

static int _OnListExportItemFnc(CWnd *pWnd){
	 ((CHMSOperationScheduleList*)pWnd)->OnExportOperationOrder();
	 return 0;
}

static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleList *pVw = (CHMSOperationScheduleList *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleList *pVw = (CHMSOperationScheduleList *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnConfirmSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleList *pVw = (CHMSOperationScheduleList *)pWnd;
	pVw->OnConfirmSelect();
} 
static void _OnDiscardSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleList *pVw = (CHMSOperationScheduleList *)pWnd;
	pVw->OnDiscardSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSOperationScheduleList *pVw = (CHMSOperationScheduleList *)pWnd;
	pVw->OnPrintSelect();
} 
static int _OnAddHMSOperationScheduleListFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleList*)pWnd)->OnAddHMSOperationScheduleList();
} 
static int _OnEditHMSOperationScheduleListFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleList*)pWnd)->OnEditHMSOperationScheduleList();
} 
static int _OnDeleteHMSOperationScheduleListFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleList*)pWnd)->OnDeleteHMSOperationScheduleList();
} 
static int _OnSaveHMSOperationScheduleListFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleList*)pWnd)->OnSaveHMSOperationScheduleList();
} 
static int _OnCancelHMSOperationScheduleListFnc(CWnd *pWnd){
	 return ((CHMSOperationScheduleList*)pWnd)->OnCancelHMSOperationScheduleList();
} 
CHMSOperationScheduleList::CHMSOperationScheduleList()
{
	m_nDlgWidth = 450;
	m_nDlgHeight = 625;
	SetDefaultValues();
	m_wndOrder = NULL;
}
CHMSOperationScheduleList::~CHMSOperationScheduleList()
{
}
void CHMSOperationScheduleList::OnCreateComponents(){
	m_wndPatientListInfo.Create(this, _T("Patient List"), 5, 5, 450, 680);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 110, 55);
	m_wndFromDate.Create(this,115, 30, 225, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 230, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 445, 55); 
	m_wndOrderList.Create(this,10, 60, 445, 180); 
	m_wndList.Create(this,10, 185, 445, 660);
	m_wndAdd.Create(this, _T("&Create"), 4, 659, 89, 684);
	m_wndDelete.Create(this, _T("&Delete"), 94, 659, 179, 684);
	m_wndConfirm.Create(this, _T("&Confirm"), 184, 659, 269, 684);
	m_wndDiscard.Create(this, _T("&Disconfirm"), 274, 659, 359, 684);
	m_wndPrint.Create(this, _T("Print"), 364, 659, 449, 684);
}
void CHMSOperationScheduleList::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	//m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndFromDate.SetNotEmpty(false);
	m_wndToDate.SetNotEmpty(false);

	m_wndOrderList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndOrderList.InsertColumn(1, _T("Order No"), CFMT_NUMBER, 70);
	m_wndOrderList.InsertColumn(2, _T("Order Date"), CFMT_TEXT, 90);
	m_wndOrderList.InsertColumn(3, _T("Department"), CFMT_TEXT, 60);
	m_wndOrderList.InsertColumn(4, _T("Status"), CFMT_TEXT|CFMT_CENTER, 70);
	m_wndOrderList.InsertColumn(5, _T("Created By"), CFMT_TEXT, 80);
//	m_wndOrderList.GetHeaderControl()->SetItemHeight(2);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 35);
	m_wndList.InsertColumn(1, _T("Doc No"), CFMT_NUMBER, 75);
	m_wndList.InsertColumn(2, _T("Patient Name"), CFMT_TEXT, 120);
	m_wndList.InsertColumn(3, _T("Status"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(4, _T("Operation Name"), CFMT_TEXT, 500);
	m_wndList.InsertColumn(5, _T("Số phiếu PTTT"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(6, _T("PID"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(7, _T("MStatus"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(8, _T("ObjType"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("POrder"), CFMT_TEXT, 0);
//	m_wndList.GetHeaderControl()->SetItemHeight(2);
//	m_wndList.SetCheckBox(TRUE);
//	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);


}

void CHMSOperationScheduleList::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndOrderList.SetEvent(WE_SELCHANGE, _OnOrderListSelectChangeFnc);
	m_wndOrderList.SetEvent(WE_LOADDATA, _OnOrderListLoadDataFnc);
	m_wndOrderList.SetEvent(WE_DBLCLICK, _OnOrderListDblClickFnc);
	m_wndOrderList.AddEvent(1, _T("Add Patient"), _OnOrderListAddPatientOrderFnc);
//	m_wndOrderList.AddEvent(1, _T("Print"), _OnOrderListPrintItemFnc);
//	m_wndOrderList.AddEvent(0, _T("-"));
//	m_wndOrderList.AddEvent(2, _T("Delete"), _OnOrderListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	
	m_wndList.AddEvent(1, _T("Print"), _OnListPrintItemFnc);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(2, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndList.AddEvent(0, _T("-"));
	m_wndList.AddEvent(3, _T("Export"), _OnListExportItemFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndConfirm.SetEvent(WE_CLICK, _OnConfirmSelectFnc);
	m_wndDiscard.SetEvent(WE_CLICK, _OnDiscardSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOperationScheduleListFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOperationScheduleListFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOperationScheduleListFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOperationScheduleListFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOperationScheduleListFnc, 0, 'T', VK_CONTROL);
	*/
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	CDate dte(m_szToDate);
	dte +=1;
	m_szToDate = dte.GetDate();
	SetMode(VM_VIEW);
	OnOrderListLoadData();
}
void CHMSOperationScheduleList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSOperationScheduleList::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSOperationScheduleDetail* pDtl = ((CHMSOperationScheduleDetail*)m_wndOrder);
	pDtl->m_nDocumentNo = m_nDocumentNo;
	pDtl->m_nOperationID = m_nOrderID;
	pDtl->m_szOrderDate.Format(_T("%s/%s/%s"), m_szOrderDate.Right(4), m_szOrderDate.Mid(3, 2), m_szOrderDate.Left(2));
	pDtl->m_szPerformDeptKey = m_szPerformPlaceID;
_tprintf(_T("\r\nidx=%ld"), m_nOrderID);
	pDtl->GetDataToScreen();
	
}

void CHMSOperationScheduleList::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}

void CHMSOperationScheduleList::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_nMatOID = 0;
	m_nOrderID = 0;


}

int CHMSOperationScheduleList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, 5, -1);
 			break;
 		case VM_VIEW:
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, 2, 3, 4, -1);

 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndFromDate.EnableWindow(TRUE);
		m_wndToDate.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}

/*void CHMSOperationScheduleList::OnFromDateChange(){
	
} */
/*void CHMSOperationScheduleList::OnFromDateSetfocus(){
	
} */
/*void CHMSOperationScheduleList::OnFromDateKillfocus(){
	
} */
int CHMSOperationScheduleList::OnFromDateCheckValue(){
	OnOrderListLoadData();
	return 1;
}
 
/*void CHMSOperationScheduleList::OnToDateChange(){
	
} */
/*void CHMSOperationScheduleList::OnToDateSetfocus(){
	
} */
/*void CHMSOperationScheduleList::OnToDateKillfocus(){
	
} */
int CHMSOperationScheduleList::OnToDateCheckValue(){
	OnOrderListLoadData();
	return 1;
} 
void CHMSOperationScheduleList::OnOrderListDblClick(){
	
} 
void CHMSOperationScheduleList::OnOrderListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nMatOID = str2long(m_wndOrderList.GetItemText(nNewItem, 1));
	
	m_szOrderDate = CDate::Convert(m_wndOrderList.GetItemText(nNewItem, 2), ddmmyyyy, yyyymmdd);

	OnListLoadData();
	((CHMSOperationScheduleDetail*)m_wndOrder)->m_nMaterialOID = m_nMatOID;
	((CHMSOperationScheduleDetail*)m_wndOrder)->m_szOrderDate = m_szOrderDate;
	((CHMSOperationScheduleDetail*)m_wndOrder)->m_szPerformDeptKey = m_wndOrderList.GetItemText(nNewItem, 3);
	((CHMSOperationScheduleDetail*)m_wndOrder)->PostMessage(WM_REFRESH, 0, -1);
	
} 
int CHMSOperationScheduleList::OnOrderListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSOperationScheduleList();
	 return 0;
} 
long CHMSOperationScheduleList::OnOrderListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	
	szSQL.Format(_T("SELECT hom_op_material_id, hom_orderno, TO_CHAR(hom_orderdate, 'DD/MM/YYYY') as orderdate, hom_status, hom_perform_deptid, hom_createdby ") \
		_T("FROM hms_op_material ") \
		_T("WHERE hom_order_deptid='%s' and hom_orderdate between TO_DATE('%s','YYYY-MM-DD') and TO_DATE('%s','YYYY-MM-DD') ") \
		_T("ORDER BY hom_op_material_id "),
		pMF->GetDepartmentID(), m_szFromDate, m_szToDate);
_tprintf(_T("%s"), szSQL);
	m_wndOrderList.BeginLoad(); 
	int nCount = 0;
	CString tmpStr, szOrderDate, szSheetStatus;
	rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"), ++nCount);
		rs.GetValue(_T("orderdate"), szOrderDate);
		rs.GetValue(_T("hom_status"), szSheetStatus);
		int nItem = m_wndOrderList.AddItems(
			tmpStr, 
			rs.GetValue(_T("hom_op_material_id")), 
			szOrderDate.Left(10), 
			rs.GetValue(_T("hom_perform_deptid")), 
			rs.GetValue(_T("hom_status")), 
			rs.GetValue(_T("hom_createdBy")), NULL);

		if (szSheetStatus == _T("S"))
		{
			m_wndOrderList.SetSubItemBkColor(nItem, 0, RGB(0, 255, 127), FALSE);
			m_wndOrderList.SetSubItemTextColor(nItem, 0, RGB(0, 0, 0), FALSE);

			m_wndOrderList.SetSubItemBkColor(nItem, 1, RGB(0, 255, 127), FALSE);
			m_wndOrderList.SetSubItemTextColor(nItem, 1, RGB(0, 0, 0), FALSE);

			m_wndOrderList.SetSubItemBkColor(nItem, 2, RGB(0, 255, 127), FALSE);
			m_wndOrderList.SetSubItemTextColor(nItem, 2, RGB(0, 0, 0), FALSE);

			m_wndOrderList.SetSubItemBkColor(nItem, 3, RGB(0, 255, 127), FALSE);
			m_wndOrderList.SetSubItemTextColor(nItem, 3, RGB(0, 0, 0), FALSE);

			m_wndOrderList.SetSubItemBkColor(nItem, 4, RGB(0, 255, 127), FALSE);
			m_wndOrderList.SetSubItemTextColor(nItem, 4, RGB(0, 0, 0), FALSE);

			m_wndOrderList.SetSubItemBkColor(nItem, 5, RGB(0, 255, 127), FALSE);
			m_wndOrderList.SetSubItemTextColor(nItem, 5, RGB(0, 0, 0), FALSE);
		}
	
		rs.MoveNext();
	}
	m_wndOrderList.EndLoad(); 
	
	return nCount;
	return 0;
}
 
void CHMSOperationScheduleList::OnListDblClick(){
	
} 
void CHMSOperationScheduleList::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0) return;
	m_nDocumentNo = str2long(m_wndList.GetItemText(nNewItem, 1));
	m_nOrderID = str2long(m_wndList.GetItemText(nNewItem, 5));
	GetDataToScreen();
} 
int CHMSOperationScheduleList::OnListDeleteItem()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;

	int retMsg = ShowMessageBox(_T("Bạn có muốn xóa bệnh nhân khỏi lịch mổ hiện thời không? (hệ thống sẽ ghi lại log)(Y/N)"), MB_YESNO);
	if(retMsg == IDNO)
		return 0  ;

	szSQL.Format(_T("HMS_OP_MATERIAL_DELETELINE(%ld, %ld , %ld, '%s')"), m_nDocumentNo, m_nOrderID, m_nMatOID, pMF->GetCurrentUser());	
	int nRet = str2int(pMF->ExecDML(szSQL));	

	if (nRet <= 0)
	{
	switch(nRet)
				{
				case -1:
					ShowMessageBox(_T("Bạn không phải người tạo, không thực hiện được tác vụ!"));
					break;

				case -2:
					ShowMessageBox(_T("Phiếu đã được gửi, không thực hiện được tác vụ!"));
					break;
				case -4:
					ShowMessageBox(_T("Không thực hiện được tác vụ! Còn vật tư dự trù đang tồn tại!"));
					break;				
				default:
					ShowMessageBox(_T("Không thao tác được với trạng thái hiện thời!"));

				};
	}
	else
	{
		
		OnListLoadData();
	}
	return 0;
} 
long CHMSOperationScheduleList::OnListLoadData(){
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString szWhere;
	if(m_nMatOID <= 0)
	{
		m_wndList.DeleteAllItems();
		return 0;
	}
	m_wndList.BeginLoad(); 
	int nCount = 0;
_tprintf(_T("\r\n%ld"), m_nMatOID);
	UpdateData(TRUE);


	szSQL.Format(_T(" select hd_docno as docno,") \
				_T("        hd_patientno as patientno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("        hp_sex as sex,") \
				_T("        obj.ho_type as objtype,") \
				_T("        ho_idx as idx,") \
				_T("        ho_itemid as itemid,") \
				_T("        hfl_name as itemname,") \
				_T("        ho_status as status,") \
				_T("        ho_matorder_status as matstatus") \
				_T(" from hms_patient") \
				_T(" left join hms_doc on(hd_patientno=hp_patientno)") \
				_T(" left join hms_object obj on(ho_id=hd_object)") \
				_T(" left join hms_operation on(ho_docno=hd_docno)") \
				_T(" left join hms_fee_list on(ho_itemid=hfl_feeid)") \
				_T(" left join sys_dept on(sd_id=ho_deptid)") \
				_T(" where ho_matorder_id=%ld") \
				_T(" order by hd_docno"),
				m_nMatOID);

	//and ho_deptid='%s'
	//pMF->m_szDept,
//_msg(_T("%s"), szSQL);

	nCount = rs.ExecSQL(szSQL);
	int nIndex = 1;
	CString tmpStr;


	while (!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), tmpStr);
		tmpStr.Format(_T("%d"), nIndex++);
		int nItem = m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("docno")),
			rs.GetValue(_T("pname")), 
			rs.GetValue(_T("status")),
			rs.GetValue(_T("itemname")),
			rs.GetValue(_T("idx")),
			rs.GetValue(_T("patientno")),
			rs.GetValue(_T("matstatus")),
			rs.GetValue(_T("objtype")),
			rs.GetValue(_T("porder")), NULL);

		
		rs.MoveNext();
	}
	m_wndList.EndLoad();

	UpdateData(FALSE);
	return 0;
}
void CHMSOperationScheduleList::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSOperationScheduleMaterialPopup dlg(this);
	if(dlg.DoModal() == IDOK)

	{
		OnOrderListLoadData();
		m_wndOrderList.SetCurSel(m_wndOrderList.GetItemCount()-1);
	}
} 
void CHMSOperationScheduleList::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSOperationScheduleList();
} 
void CHMSOperationScheduleList::OnConfirmSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int retMsg = ShowMessageBox(_T("Xác nhận gửi lịch mổ xuống phòng mổ?(Y/N)"), MB_YESNO);
	if(retMsg == IDNO)
		return;

	szSQL.Format(_T("HMS_OP_MATERIAL_SEND(%ld, '%s') "), m_nMatOID, pMF->GetCurrentUser());
	
	int nRet = str2int(pMF->ExecDML(szSQL));

	if (nRet <= 0)
	{
	switch(nRet)
				{
				case -1:
					ShowMessageBox(_T("Bạn không phải người tạo, không thực hiện được tác vụ!"));
					break;

				case -2:
					ShowMessageBox(_T("Phiếu đã được gửi, không thực hiện được tác vụ!"));
					break;

				case -3:
					ShowMessageBox(_T("Phiếu không có bệnh nhân, không thực hiện được tác vụ!"));
					break;
				
				default:
					ShowMessageBox(_T("Không thao tác được với trạng thái hiện thời!"));

				};
	}
	else
	{
		
		OnOrderListLoadData();
	}
	
} 
void CHMSOperationScheduleList::OnDiscardSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	
	int retMsg = ShowMessageBox(_T("Bạn muốn khôi phục lại lịch mổ đã gửi xuống phòng mổ (Hệ thống sẽ ghi lại log)?(Y/N)"), MB_YESNO);
	if(retMsg == IDNO)
		return;

	szSQL.Format(_T("HMS_OP_MATERIAL_DISCARD(%ld, '%s') "), m_nMatOID, pMF->GetCurrentUser());
	
	int nRet = str2int(pMF->ExecDML(szSQL));

	if (nRet <= 0)
	{
	switch(nRet)
				{
				case -1:
					ShowMessageBox(_T("Bạn không phải người tạo, không thực hiện được tác vụ!"));
					break;

				case -2:
					ShowMessageBox(_T("Phiếu chưa được gửi, không thực hiện được tác vụ!"));
					break;				
				
				default:
					ShowMessageBox(_T("Không thao tác được với trạng thái hiện thời!"));

				};
	}
	else
	{
		
		OnOrderListLoadData();
	}
} 


void CHMSOperationScheduleList::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CPrintForms printer;
	CGuiMenu menu(this);
	CRect rect;
	int nPos;
	int nSel = m_wndOrderList.GetCurSel();
   

	menu.CreatePopupMenu();
	CString tmpStr, m_szStatus;
	//In phieu phau thuat thu thuat
	//TranslateString(_T("Phi\x1EBFu \x62\xE1o m\x1ED5 (\x62\x61o g\x1ED3m \x64\x1EF1 tr\xF9 v\x1EADt t\x1B0)"), tmpStr);
	//menu.AppendMenu(MF_BYPOSITION, 1, tmpStr);
	//menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	//TranslateString(_T("Phi\x1EBFu \x62\xE1o m\x1ED5 kh\xF4ng \x62\x61o g\x1ED3m v\x1EADt t\x1B0"), tmpStr);
	//menu.AppendMenu(MF_BYPOSITION, 2, tmpStr);

	TranslateString(_T("Phiếu báo mổ - mẫu mới"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 3, tmpStr);

	TranslateString(_T("Phiếu lĩnh máu"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 4, tmpStr);

	TranslateString(_T("Phiếu vật tư giá trị cao"), tmpStr);
	menu.AppendMenu(MF_BYPOSITION, 5, tmpStr);

	m_wndPrint.GetWindowRect(&rect);
	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_RIGHTALIGN|TPM_TOPALIGN, rect.right, rect.top-(20*2+10), this);
	m_szStatus = m_wndOrderList.GetItemText(nSel, 4);	

	if (m_szStatus == _T("O"))
		{
		 ShowMessageBox(_T("Phiếu chưa được xác nhận, không thể in, vui lòng xác nhận phiếu trước khi in"));
		 return;
		}
	
	switch(nPos)
	{
	case 1:		
		PrintOperationOrder(true, true);
		break;
	case 2:
		PrintOperationOrder2(true, true);
		break;
	case 3:
		PrintOperationOrder3(true, true);
		break;
	case 4:
		PrintBBMaterial();
        break;
    case 5:
		long nDocNo, nIdx;
		for (int i =0; i < m_wndList.GetItemCount(); i++)
		{
			nDocNo = str2long(m_wndList.GetItemText(i, 1));
			nIdx= str2long(m_wndList.GetItemText(i, 5));
			printer.TM_PrintDailyValuableMaterial(nDocNo, nIdx);
		}
        break;
	};

	/*if(nPos > 0)
	{
		PrintBBMaterial();
		long nDocNo, nIdx;
		for (int i =0; i < m_wndList.GetItemCount(); i++)
		{
			nDocNo = str2long(m_wndList.GetItemText(i, 1));
			nIdx= str2long(m_wndList.GetItemText(i, 5));
			printer.TM_PrintDailyValuableMaterial(nDocNo, nIdx);
		}
	}*/

} 


void CHMSOperationScheduleList::OnPrintMaterialOrder()
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0)
		 return;
	long nDocNo, nIdx;
	CPrintForms printer;
	nDocNo = str2long(m_wndList.GetItemText(nSel, 1));
	nIdx= str2long(m_wndList.GetItemText(nSel, 5));
	printer.TM_PrintDailyValuableMaterial(nDocNo, nIdx);
}
int CHMSOperationScheduleList::OnAddHMSOperationScheduleList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOperationScheduleList::OnEditHMSOperationScheduleList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOperationScheduleList::OnDeleteHMSOperationScheduleList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	
	int nSel = m_wndOrderList.GetCurSel();

	if(nSel < 0)
	{
		ShowMessageBox(_T("Bạn chưa chọn phiếu cần xóa!"));
		return 0;
	}	

	if(m_wndList.GetItemCount() > 0)
	{
		ShowMessageBox(_T("Lịch mổ đã có bệnh nhân, không xóa được phiếu!"));
		return 0;
	}	

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
	
	long nMatOID = str2long(m_wndOrderList.GetItemText(nSel, 1));	

	szSQL.Format(_T("HMS_OP_MATERIAL_DELETE(%ld, '%s')"), nMatOID, pMF->GetCurrentUser() );

 	int nRet = str2int(pMF->ExecDML(szSQL));

	if (nRet <= 0)
	{
	switch(nRet)
				{
				case -1:
					ShowMessageBox(_T("Bạn không phải người tạo, không thực hiện được tác vụ!"));
					break;

				case -2:
					ShowMessageBox(_T("Phiếu đã được gửi, không thực hiện được tác vụ!"));
					break;

				case -3:
					ShowMessageBox(_T("Phiếu đã có bệnh nhân, không thực hiện được tác vụ!"));
					break;
				
				default:
					ShowMessageBox(_T("Không thao tác được với trạng thái hiện thời!"));

				};
	}
	else
	{
		
		OnOrderListLoadData();
	}
	return 0;	
}
int CHMSOperationScheduleList::OnSaveHMSOperationScheduleList(){
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
 		//OnHMSOperationScheduleListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOperationScheduleList::OnCancelHMSOperationScheduleList(){
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
int CHMSOperationScheduleList::OnHMSOperationScheduleListListLoadData(){
	return 0;
}

LRESULT CHMSOperationScheduleList::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	if(message == WM_REFRESH){
_tprintf(_T("\r\nRefress message"));
		OnListLoadData();
	}
	return CGuiView::WindowProc(message, wParam, lParam);
}


void CHMSOperationScheduleList::PrintOperationOrder(bool bPrintAll, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL;
	CString tmpStr, szTemp, szDate;

	CReport rpt;

	if (!rpt.Init(_T("Reports/HMS/PTTT/SURGERYSCHEDULE.RPT")))
	{
		return;
	}

	UpdateData(TRUE);
	BeginWaitCursor();

	/*StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);*/
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	StringUpper(pMF->GetDepartmentName(pMF->m_szDept), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);

	//szDate.Format(_T("Ng\xE0y %s"), m_szOrderDate);
	szDate.Format(_T("Ng\xE0y %s"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));

	rpt.GetReportHeader()->SetValue(_T("Orderdate"), szDate);

	szSQL = GetQueryString(bPrintAll);
//_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	_debug(_T("\nRec count: %d\n"), rs.GetRecordCount());
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	CReportSection *rptDetail = NULL;

	int nOldTable = -1, nNewTable = -1;
	CString szOldTableName, szNewTableName;
	int nIndex = 1;
	long nDocNo, nOperationID;

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("tableid"), nNewTable);
		rs.GetValue(_T("tablename"), szNewTableName);

		if (nNewTable > 0 && nOldTable != nNewTable)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("table"), szNewTableName);
			nOldTable = nNewTable;
			nIndex = 1;
		}

		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("docno"), nDocNo);
		tmpStr.Format(_T("%ld"), nDocNo);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("idx"), nOperationID);

		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("objname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("anesname"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.GetValue(_T("itemname"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("tycname"), tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		szTemp.Empty();

		rs.GetValue(_T("practitioner"), tmpStr);
		if (!tmpStr.IsEmpty())
			szTemp.Format(_T("%s"), tmpStr);

		rs.GetValue(_T("assistant"), tmpStr);
		if (!tmpStr.IsEmpty())
		{
			if (!szTemp.IsEmpty())
				szTemp += _T(",");
			szTemp.AppendFormat(_T("%s"), tmpStr);
		}

		rs.GetValue(_T("user4"), tmpStr);
		if (!tmpStr.IsEmpty())
		{
			if (!szTemp.IsEmpty())
				szTemp += _T(",");
			szTemp.AppendFormat(_T("%s"), tmpStr);
		}

		if (!szTemp.IsEmpty())
		{
			rptDetail->SetValue(_T("9"), szTemp);
		}

		rs.GetValue(_T("beforeop"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		

		rs.GetValue(_T("antibiotic"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		/*if (!tmpStr.IsEmpty())
		{
			if (tmpStr == _T("Y"))
				rptDetail->SetValue(_T("11"), _T("\x43\xF3"));
			else
				rptDetail->SetValue(_T("11"), _T("Kh\xF4ng"));
		}*/

		rs.GetValue(_T("groupname"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		szSQL.Format(_T(" select mp_name as itemname,") \
						_T("        sum(hopm_qtyorder) as qty") \
						_T(" from hms_operation") \
						_T(" left join hms_op_materialorder on(hopm_docno=ho_docno and hopm_operation_id=ho_idx)") \
						_T(" left join m_product on(mp_product_id=hopm_product_id)") \
						_T(" where hopm_docno=%ld and hopm_operation_id=%ld AND mp_org_id <> 'BB'") \
						_T(" group by mp_name, mp_producttype") \
						_T(" order by mp_producttype"), nDocNo, nOperationID);
		rss.ExecSQL(szSQL);

		szTemp.Empty();

		while (!rss.IsEOF())
		{
			tmpStr.Format(_T("%s [%s]"), rss.GetValue(_T("itemname")), rss.GetValue(_T("qty")));

			if (!szTemp.IsEmpty())
				szTemp += _T(",");

			szTemp.AppendFormat(_T("%s"), tmpStr);

			rss.MoveNext();
		}

		if (!szTemp.IsEmpty())
			rptDetail->SetValue(_T("13"), szTemp);
		rptDetail->SetValue(_T("14"), rs.GetValue(_T("room")));
		tmpStr.Format(_T("%s -> %s"), rs.GetValue(_T("start_at")), rs.GetValue(_T("end_at")));
		rptDetail->SetValue(_T("15"), tmpStr);
		rptDetail->SetValue(_T("16"), rs.GetValue(_T("schedule_date")));
		rptDetail->SetValue(_T("17"), rs.GetValue(_T("ref_operation")));
		rs.MoveNext();
	}
	EndWaitCursor();

	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}


void CHMSOperationScheduleList::PrintOperationOrder2(bool bPrintAll, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL;
	CString tmpStr, szTemp, szDate;

	CReport rpt;

	if (!rpt.Init(_T("Reports/HMS/PTTT/SURGERYSCHEDULE2.RPT")))
	{
		return;
	}

	UpdateData(TRUE);
	BeginWaitCursor();

	/*StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);*/
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	StringUpper(pMF->GetDepartmentName(pMF->m_szDept), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);

	//szDate.Format(_T("Ng\xE0y %s"), m_szOrderDate);
	szDate.Format(_T("Ng\xE0y %s"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));

	rpt.GetReportHeader()->SetValue(_T("Orderdate"), szDate);

	szSQL = GetQueryString(bPrintAll);
_fmsg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	_debug(_T("\nRec count: %d\n"), rs.GetRecordCount());
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	CReportSection *rptDetail = NULL;

	int nOldTable = -1, nNewTable = -1;
	CString szOldTableName, szNewTableName;
	int nIndex = 1;
	long nDocNo, nOperationID;

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("tableid"), nNewTable);
		rs.GetValue(_T("tablename"), szNewTableName);

		if (nNewTable > 0 && nOldTable != nNewTable)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("table"), szNewTableName);
			nOldTable = nNewTable;
			nIndex = 1;
		}

		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("docno"), nDocNo);
		tmpStr.Format(_T("%ld"), nDocNo);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("idx"), nOperationID);

		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("objname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("anesname"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.GetValue(_T("itemname"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("tycname"), tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		szTemp.Empty();
	
		CString szFirstName, szMidName, szSubName;
		rs.GetValue(_T("practitioner"), tmpStr);
		//SplitName(tmpStr, szSubName, szMidName, szFirstName);
		
		
		//if (!szFirstName.IsEmpty())
		//	szTemp.Format(_T("%s"), szFirstName);

		szTemp= GetFirstName(tmpStr);
		rs.GetValue(_T("assistant"), tmpStr);
		szFirstName = GetFirstName(tmpStr);
		if(!szFirstName.IsEmpty())
		{
			if (!szTemp.IsEmpty())
			szTemp += _T(", ");
			szTemp.AppendFormat(_T("%s"), szFirstName);
		}

		//SplitName(tmpStr, szSubName, szMidName, szFirstName);
		//if (!szFirstName.IsEmpty())
		//{
		//	if (!szTemp.IsEmpty())
		//		szTemp += _T(", ");
		//	szTemp.AppendFormat(_T("%s"), szFirstName);
	//	}

		

		rs.GetValue(_T("user4"), tmpStr);
		/*SplitName(tmpStr, szSubName, szMidName, szFirstName);

		if (!szFirstName.IsEmpty())
		{
			if (!szTemp.IsEmpty())
				szTemp += _T(", ");
			szTemp.AppendFormat(_T("%s"), szFirstName);
		}*/
		szFirstName = GetFirstName(tmpStr);
		if(!szFirstName.IsEmpty())
		{
			if (!szTemp.IsEmpty())
			szTemp += _T(", ");
			szTemp.AppendFormat(_T("%s"), szFirstName);
		}
		if (!szTemp.IsEmpty())
		{
			rptDetail->SetValue(_T("9"), szTemp);
		}

		rs.GetValue(_T("beforeop"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		

		rs.GetValue(_T("antibiotic"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		
		/*if (!tmpStr.IsEmpty())
		{
			if (tmpStr == _T("Y"))
				rptDetail->SetValue(_T("11"), _T("\x43\xF3"));
			else
				rptDetail->SetValue(_T("11"), _T("Kh\xF4ng"));
		}*/

		rs.GetValue(_T("groupname"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		
		rptDetail->SetValue(_T("14"), rs.GetValue(_T("room")));
		tmpStr.Format(_T("%s -> %s"), rs.GetValue(_T("start_at")), rs.GetValue(_T("end_at")));
		rptDetail->SetValue(_T("15"), tmpStr);
		rptDetail->SetValue(_T("16"), rs.GetValue(_T("schedule_date")));
		rptDetail->SetValue(_T("17"), rs.GetValue(_T("ref_operation")));
		rs.MoveNext();
	}
	EndWaitCursor();

	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}


void CHMSOperationScheduleList::PrintOperationOrder3(bool bPrintAll, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL;
	CString tmpStr, szTemp, szDate;

	CReport rpt;

	//Nếu đã có bản ghi được ký rồi thì download về
    szSQL.Format(_T("select hms_signature_id ")
             _T("	from hms_signature WHERE orderid = %d ")            
             _T(" and status ='S' and form_id = 'SURGERYSCHEDULE3'"), m_nMatOID); 

    rs.ExecSQL(szSQL);

    if (!rs.IsEOF())
    {
        CString szSignatureID = rs.GetValue(_T("hms_signature_id"));

        CPdfSignature signer(this);

        if (signer.DownloadAndPreview(szSignatureID, true))
        {
           
        }
        return;
      
    }
	if (!rpt.Init(_T("Reports/HMS/PTTT/SURGERYSCHEDULE3.RPT")))
	{
		return;
	}

	UpdateData(TRUE);
	BeginWaitCursor();

	/*StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);*/
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	StringUpper(pMF->GetDepartmentName(pMF->m_szDept), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);

	//szDate.Format(_T("Ng\xE0y %s"), m_szOrderDate);
	szDate.Format(_T("Ng\xE0y %s"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));

	rpt.GetReportHeader()->SetValue(_T("DeptidID"), pMF->m_szDept);
	rpt.GetReportHeader()->SetValue(_T("Orderdate"), szDate);
    rpt.GetReportHeader()->SetValue(_T("OrderID"), m_nMatOID);

	szSQL = GetQueryString(bPrintAll);

	rs.ExecSQL(szSQL);
	_debug(_T("\nRec count: %d\n"), rs.GetRecordCount());
	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	CReportSection *rptDetail = NULL;

	int nOldTable = -1, nNewTable = -1;
	CString szOldTableName, szNewTableName;
	int nIndex = 1;
	long nDocNo, nOperationID;

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("tableid"), nNewTable);
		rs.GetValue(_T("tablename"), szNewTableName);

		if (nNewTable > 0 && nOldTable != nNewTable)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("table"), szNewTableName);
			nOldTable = nNewTable;
			nIndex = 1;
		}

		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		rs.GetValue(_T("docno"), nDocNo);
		tmpStr.Format(_T("%ld"), nDocNo);
		rptDetail->SetValue(_T("3"), tmpStr);

		rs.GetValue(_T("idx"), nOperationID);

		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("objname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("anesname"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.GetValue(_T("itemname"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("tycname"), tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		szTemp.Empty();

		rs.GetValue(_T("practitioner"), tmpStr);
		if (!tmpStr.IsEmpty())
			szTemp.Format(_T("%s"), tmpStr);

		rs.GetValue(_T("assistant"), tmpStr);
		if (!tmpStr.IsEmpty())
		{
			if (!szTemp.IsEmpty())
				szTemp += _T(",");
			szTemp.AppendFormat(_T("%s"), tmpStr);
		}

		rs.GetValue(_T("user4"), tmpStr);
		if (!tmpStr.IsEmpty())
		{
			if (!szTemp.IsEmpty())
				szTemp += _T(",");
			szTemp.AppendFormat(_T("%s"), tmpStr);
		}

		if (!szTemp.IsEmpty())
		{
			rptDetail->SetValue(_T("9"), szTemp);
		}

		rs.GetValue(_T("beforeop"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);

		rs.GetValue(_T("antibiotic"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);

		rs.GetValue(_T("tgdukienmo"), tmpStr);
		rptDetail->SetValue(_T("tgdk"), tmpStr);

		rs.GetValue(_T("dungcupt"), tmpStr);
		rptDetail->SetValue(_T("dcpt"), tmpStr);
		/*if (!tmpStr.IsEmpty())
		{
			if (tmpStr == _T("Y"))
				rptDetail->SetValue(_T("11"), _T("\x43\xF3"));
			else
				rptDetail->SetValue(_T("11"), _T("Kh\xF4ng"));
		}*/

		rs.GetValue(_T("groupname"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		szSQL.Format(_T(" select mp_name as itemname,") \
						_T("        sum(hopm_qtyorder) as qty") \
						_T(" from hms_operation") \
						_T(" left join hms_op_materialorder on(hopm_docno=ho_docno and hopm_operation_id=ho_idx)") \
						_T(" left join m_product on(mp_product_id=hopm_product_id)") \
						_T(" where hopm_docno=%ld and hopm_operation_id=%ld AND mp_org_id <> 'BB'") \
						_T(" group by mp_name, mp_producttype") \
						_T(" order by mp_producttype"), nDocNo, nOperationID);
		rss.ExecSQL(szSQL);

		szTemp.Empty();

		while (!rss.IsEOF())
		{
			tmpStr.Format(_T("%s [%s]"), rss.GetValue(_T("itemname")), rss.GetValue(_T("qty")));

			if (!szTemp.IsEmpty())
				szTemp += _T(",");

			szTemp.AppendFormat(_T("%s"), tmpStr);

			rss.MoveNext();
		}

		if (!szTemp.IsEmpty())
			rptDetail->SetValue(_T("13"), szTemp);
		rptDetail->SetValue(_T("14"), rs.GetValue(_T("room")));
		tmpStr.Format(_T("%s -> %s"), rs.GetValue(_T("start_at")), rs.GetValue(_T("end_at")));
		rptDetail->SetValue(_T("15"), tmpStr);
		rptDetail->SetValue(_T("16"), rs.GetValue(_T("schedule_date")));
		rptDetail->SetValue(_T("17"), rs.GetValue(_T("ref_operation")));
		rs.MoveNext();
	}
	EndWaitCursor();

	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}


void CHMSOperationScheduleList::PrintBBMaterial()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rss(&pMF->m_db);

	CString szSQL;
	CString tmpStr, szTemp, szDate;

	CReport rpt;

	if (!rpt.Init(_T("Reports/HMS/PTTT/SURGERYSCHEDULE.RPT")))
	{
		return;
	}
	szSQL.Format(_T(" SELECT count(*) FROM hms_op_materialorder ") \
				 _T(" LEFT JOIN m_product ON (mp_product_id = hopm_product_id)") \
		   		 _T(" WHERE hopm_operation_id IN ") \
				 _T("(SELECT ho_idx FROM hms_operation WHERE ho_matorder_id = %ld)") \
				 _T(" AND mp_org_id = 'BB'"), m_nMatOID);
	rs.ExecSQL(szSQL);
    if (rs.GetIntValue() <= 0)
    {
		ShowMessageBox(_T("No Data"));
    }
		return;

	UpdateData(TRUE);
	BeginWaitCursor();

	rpt.GetReportHeader()->SetValue(_T("ReportName"), _T("PHI\x1EBEU \x44\x1EF0 TR\xD9 M\xC1U"));
	/*StringUpper(pMF->m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HealthService"), tmpStr);*/
	StringUpper(pMF->m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HospitalName"), tmpStr);
	StringUpper(pMF->GetDepartmentName(pMF->m_szDept), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);

	szDate.Format(_T("Ng\xE0y %s"), CDate::Convert(m_szOrderDate, yyyymmdd, ddmmyyyy));

	rpt.GetReportHeader()->SetValue(_T("Orderdate"), szDate);

	szSQL = GetQueryString();


	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		ShowMessageBox(_T("No Data"), MB_ICONERROR | MB_OK);
		return;
	}

	CReportSection *rptDetail = NULL;

	int nOldTable = -1, nNewTable = -1;
	CString szOldTableName, szNewTableName;
	int nIndex = 1;
	long nDocNo, nOperationID;

	while (!rs.IsEOF())
	{
		rs.GetValue(_T("docno"), nDocNo);
		rs.GetValue(_T("idx"), nOperationID);
		szSQL.Format(_T(" select mp_name as itemname,") \
						_T("        sum(hopm_qtyorder) as qty") \
						_T(" from hms_operation") \
						_T(" left join hms_op_materialorder on(hopm_docno=ho_docno and hopm_operation_id=ho_idx)") \
						_T(" left join m_product on(mp_product_id=hopm_product_id)") \
						_T(" where hopm_docno=%ld and hopm_operation_id=%ld AND mp_org_id = 'BB'") \
						_T(" group by mp_name, mp_producttype") \
						_T(" order by mp_producttype"), nDocNo, nOperationID);
		rss.ExecSQL(szSQL);
		if (rss.IsEOF())
		{
			rs.MoveNext();
			continue;
		}

		rs.GetValue(_T("tableid"), nNewTable);
		rs.GetValue(_T("tablename"), szNewTableName);

		if (nNewTable > 0 && nOldTable != nNewTable)
		{
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("table"), szNewTableName);
			nOldTable = nNewTable;
			nIndex = 1;
		}

		rptDetail = rpt.AddDetail();

		tmpStr.Format(_T("%d"), nIndex++);
		rptDetail->SetValue(_T("1"), tmpStr);

		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("2"), tmpStr);

		
		tmpStr.Format(_T("%ld"), nDocNo);
		rptDetail->SetValue(_T("3"), tmpStr);

		

		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("4"), tmpStr);

		rs.GetValue(_T("objname"), tmpStr);
		rptDetail->SetValue(_T("5"), tmpStr);
		
		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("6"), tmpStr);

		rs.GetValue(_T("anesname"), tmpStr);
		rptDetail->SetValue(_T("7"), tmpStr);
		
		rs.GetValue(_T("itemname"), tmpStr);
		rptDetail->SetValue(_T("8"), tmpStr);

		rs.GetValue(_T("tycname"), tmpStr);
		rptDetail->SetValue(_T("17"), tmpStr);

		szTemp.Empty();

		rs.GetValue(_T("practitioner"), tmpStr);
		if (!tmpStr.IsEmpty())
			szTemp.Format(_T("%s"), tmpStr);

		rs.GetValue(_T("assistant"), tmpStr);
		if (!tmpStr.IsEmpty())
		{
			if (!szTemp.IsEmpty())
				szTemp += _T(",");
			szTemp.AppendFormat(_T("%s"), tmpStr);
		}

		rs.GetValue(_T("user4"), tmpStr);
		if (!tmpStr.IsEmpty())
		{
			if (!szTemp.IsEmpty())
				szTemp += _T(",");
			szTemp.AppendFormat(_T("%s"), tmpStr);
		}

		if (!szTemp.IsEmpty())
		{
			rptDetail->SetValue(_T("9"), szTemp);
		}

		rs.GetValue(_T("beforeop"), tmpStr);
		rptDetail->SetValue(_T("10"), tmpStr);
		

		rs.GetValue(_T("antibiotic"), tmpStr);
		rptDetail->SetValue(_T("11"), tmpStr);
		/*if (!tmpStr.IsEmpty())
		{
			if (tmpStr == _T("Y"))
				rptDetail->SetValue(_T("11"), _T("\x43\xF3"));
			else
				rptDetail->SetValue(_T("11"), _T("Kh\xF4ng"));
		}*/

		rs.GetValue(_T("groupname"), tmpStr);
		rptDetail->SetValue(_T("12"), tmpStr);

		
		szTemp.Empty();

		while (!rss.IsEOF())
		{
			tmpStr.Format(_T("%s [%s]"), rss.GetValue(_T("itemname")), rss.GetValue(_T("qty")));

			if (!szTemp.IsEmpty())
				szTemp += _T(",");

			szTemp.AppendFormat(_T("%s"), tmpStr);

			rss.MoveNext();
		}

		if (!szTemp.IsEmpty())
			rptDetail->SetValue(_T("13"), szTemp);
		rptDetail->SetValue(_T("14"), rs.GetValue(_T("room")));

		rs.MoveNext();
	}
	EndWaitCursor();
	rpt.PrintPreview();
}

void CHMSOperationScheduleList::OnExportOperationOrder(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db), rss(&pMF->m_db);
	CExcel xls;
	long nDocNo = 0, nOperationID = 0;
	CString szSQL, tmpStr, szTemp, szOldTable, szNewTable;
	double nTmp = 0;
	int nIdx = 1, nRow = 0;
	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data."));
		return;
	}
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(1, 15);
	xls.SetColumnWidth(9, 15);
	xls.SetColumnWidth(10, 15);
	xls.SetColumnWidth(14, 30);
	xls.SetCellMergedColumns(0, 0, 2);
	xls.SetCellMergedColumns(0, 1, 2);
	xls.SetCellMergedColumns(0, 2, 11);
	xls.SetCellMergedColumns(0, 3, 11);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("PHI\x1EBEU M\x1ED4");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(m_szFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(m_szToDate, yyyymmdd, ddmmyyyy));
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	xls.SetCellText(0, 4, _T("STT"), 4098, true);
	xls.SetCellText(1, 4, _T("H\x1ECD v\xE0 t\xEAn"), 4098, true);
	xls.SetCellText(2, 4, _T("S\x1ED1 HS"), 4098, true);
	xls.SetCellText(3, 4, _T("Gi\x1B0\x1EDDng"), 4098, true);
	xls.SetCellText(4, 4, _T("\x42u\x1ED3ng"), 4098, true);
	xls.SetCellText(5, 4, _T("Tu\x1ED5i"), 4098, true);
	xls.SetCellText(6, 4, _T("\x110T"), 4098, true);
	xls.SetCellText(7, 4, _T("\x43h\x1EA9n \x111o\xE1n"), 4098, true);
	xls.SetCellText(8, 4, _T("V\xF4 \x63\x1EA3m"), 4098, true);
	xls.SetCellText(9, 4, _T("\x43\xE1\x63h m\x1ED5"), 4098, true);
	xls.SetCellText(10, 4, _T("PTV"), 4098, true);
	xls.SetCellText(11, 4, _T("PL"), 4098, true);
	xls.SetCellText(12, 4, _T("KS\x44P"), 4098, true);
	xls.SetCellText(13, 4, _T("PL PT"), 4098, true);
	xls.SetCellText(14, 4, _T("\x44\x1EF1 tr\xF9 PTK\x58"), 4098, true);
	nRow = 6;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("tableid"), szNewTable);
		szOldTable = _T("XX");
		if (szOldTable != szNewTable)
		{
			xls.SetCellMergedColumns(0, nRow, 15);
			xls.SetCellText(0, nRow, rs.GetValue(_T("tablename")), 4098, true);
			szOldTable = szNewTable;
			nRow++;
		}
		xls.SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT | FMT_WRAPING);
		xls.SetCellText(1, nRow, rs.GetValue(_T("pname")), FMT_TEXT | FMT_WRAPING);
		rs.GetValue(_T("docno"), nDocNo);
		rs.GetValue(_T("idx"), nOperationID);
		xls.SetCellText(2, nRow, rs.GetValue(_T("docno")), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(5, nRow, rs.GetValue(_T("age")), FMT_NUMBER1 | FMT_WRAPING);
		xls.SetCellText(6, nRow, rs.GetValue(_T("objname")), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(7, nRow, rs.GetValue(_T("diagnostic")), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(8, nRow, rs.GetValue(_T("anesname")), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(9, nRow, rs.GetValue(_T("itemname")), FMT_TEXT | FMT_WRAPING);
		tmpStr.Format(_T("%s- %s- %s"), rs.GetValue(_T("practitioner")), rs.GetValue(_T("assistant")), rs.GetValue(_T("user4")));
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(11, nRow, rs.GetValue(_T("beforeop")), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(12, nRow, rs.GetValue(_T("antibiotic"))==_T("Y")?_T("\x43\xF3"):_T("Kh\xF4ng"), FMT_TEXT | FMT_WRAPING);
		xls.SetCellText(13, nRow, rs.GetValue(_T("groupname")), FMT_TEXT | FMT_WRAPING);
		szSQL.Format(_T(" select mp_name as itemname,") \
						_T("        sum(hopm_qtyorder) as qty") \
						_T(" from hms_operation") \
						_T(" left join hms_op_materialorder on(hopm_docno=ho_docno and hopm_operation_id=ho_idx)") \
						_T(" left join m_product on(mp_product_id=hopm_product_id)") \
						_T(" where hopm_docno=%ld and hopm_operation_id=%ld") \
						_T(" group by mp_name, mp_producttype") \
						_T(" order by mp_producttype"), nDocNo, nOperationID);
		rss.ExecSQL(szSQL);
		szTemp.Empty();
		while (!rss.IsEOF())
		{
			tmpStr.Format(_T("%s [%s]"), rss.GetValue(_T("itemname")), rss.GetValue(_T("qty")));

			if (!szTemp.IsEmpty())
				szTemp += _T(",");

			szTemp.AppendFormat(_T("%s"), tmpStr);

			rss.MoveNext();
		}
		xls.SetCellText(14, nRow, szTemp, FMT_TEXT | FMT_WRAPING );
		nRow++;
		rs.MoveNext();
	}
	xls.SetCellText(0, nRow, _T("PG\x110 Ngo\x1EA1i"), 4098, true);
	xls.SetCellText(0, nRow + 1, _T("(K\xFD v\xE0 ghi r\xF5 h\x1ECD t\xEAn)"), 4098);
	xls.SetCellText(6, nRow, _T("\x43h\x1EE7 nhi\x1EC7m kho\x61"), 4098, true);
	xls.SetCellText(6, nRow + 1, _T("(K\xFD v\xE0 ghi r\xF5 h\x1ECD t\xEAn)"), 4098);
	xls.SetCellText(14, nRow, _T("\x42\xE1\x63 s\x1EF9 \x111i\x1EC1u tr\x1ECB"), 4098, true);
	xls.SetCellText(14, nRow + 1, _T("(K\xFD v\xE0 ghi r\xF5 h\x1ECD t\xEAn)"), 4098);
	xls.Save(_T("Exports\\Phieu mo.xls"));
}

CString CHMSOperationScheduleList::GetQueryString(bool bPrintAll)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CString szSQL;
	CString szWhere, szOperationIDs;


	szSQL.Format(_T(" select ho_deptid as deptid,") \
				_T("        sd_name as deptname,") \
				_T("        ho_opera_table as tableid,") \
				_T("        (select distinct hst_name from hms_surgery_table where ho_opera_table=hst_idx) as tablename,") \
				_T("        ho_docno as docno,") \
				_T("        ho_idx as idx,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age_,") \
				_T("        extract(year from hp_birthdate) as age,") \
				_T("        ho_desc as objname,") \
				_T("        ho_diagnostic as diagnostic,") \
				_T("        (select ham_name from hms_anesthesia_method where ho_anes_method=ham_idx) as anesname,") \
				_T("        NVL(ho_comment, hfl_name) as itemname,") \
				_T("        LISTAGG(CAST(hoa_descr AS VARCHAR2(1024)), ', ') WITHIN GROUP (ORDER BY hoa_idx) AS tycname,") \
				_T("        get_username(ho_practitioner) as practitioner,") \
				_T("        get_username(ho_assistant) as assistant,") \
				_T("        get_username(ho_user4) as user4,") \
				_T("        get_syssel_desc('hms_before_operation', ho_before_optype) as beforeop,") \
				_T("        HO_EXPECTEDTIME as tgdukienmo, HO_MATERIAL_GROUP as dungcupt,") \
				_T("        case when NVL(ho_antibiotic, 'X')='Y' then 'Có sử dụng KSDP' when NVL(ho_antibiotic, 'X')='N' then 'Không dùng bất kỳ KS nào' when NVL(ho_antibiotic, 'X')='O' then 'Sử dụng KS điều trị' else 'Không' end as antibiotic,") \
				_T("        get_feegroupname(hfl_groupid) as groupname,") \
				_T("		(select hms_getroomname(hb_deptid, hb_roomid) from hms_bed where hb_docno = ho_docno and hb_status = 'O' AND hb_deptid = ho_deptid) room,") \
				_T("		to_char(ho_startat, 'hh24:mi') start_at , to_char(ho_endat, 'hh24:mi') end_at, ") \
				_T("		to_char(ho_schedule_date, 'dd/mm/yyyy hh24:mi') as schedule_date,") \
				_T("		(select listagg(cast(hfl_name as varchar2(2000)), chr(13)) within group (order by i.ho_idx) ") \
				_T("		from hms_operation i ") \
				_T("		left join hms_fee_list on (hfl_feeid = i.ho_itemid)") \
				_T("		where i.ho_docno = o.ho_docno and i.ho_reforderid = o.ho_idx) as ref_operation ") \
				_T(" from hms_operation o") \
				_T(" LEFT JOIN HMS_OPERATION_ATTACH ON (ho_docno=hoa_docno and ho_idx=hoa_idx)") \
				_T(" left join hms_doc on(ho_docno = hd_docno)") \
				_T(" left join hms_patient on(hd_patientno=hp_patientno)") \
				_T(" left join hms_object on(ho_id=hd_object)") \
				_T(" left join hms_fee_list on(hfl_feeid=ho_itemid)") \
				_T(" left join sys_dept on(sd_id=ho_deptid)") \
				_T(" where ho_matorder_id=%ld and nvl(hfl_categoryid, '0') <> '501'") \
				_T(" GROUP BY ") \
				_T(" ho_deptid,sd_name,ho_opera_table,ho_docno, ho_idx, hp_surname, hp_midname, hp_firstname, hd_admitdate, HO_EXPECTEDTIME, HO_MATERIAL_GROUP,") \
				_T(" hp_birthdate, ho_desc, ho_diagnostic, ho_comment, hfl_name, ho_practitioner, ho_assistant, ho_user4,") \
				_T(" ho_before_optype, ho_antibiotic, hfl_groupid, ho_startat, ho_endat, ho_schedule_date,ho_anes_method,ho_opera_index") \
				_T(" order by ho_deptid, ho_opera_table, ho_opera_index, practitioner "), m_nMatOID);
_fmsg(_T("cau select %s"), szSQL);
	return szSQL;
}


#include "HMSOperationSchedulePatientListDialog.h"

void CHMSOperationScheduleList::OnAddPatientOrder()
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	int nSel = m_wndOrderList.GetCurSel();
	if(nSel < 0)
		return;
	if(m_nMatOID <= 0)		
		return;
	
	
	CHMSOperationSchedulePatientListDialog dlg(this);
	dlg.m_nOID = m_nMatOID;
	dlg.m_szDeptId = pMF->m_szDept;
	dlg.m_szOrderDate = CDate::Convert(m_wndOrderList.GetItemText(nSel, 2), ddmmyyyy, yyyymmdd);
	dlg.m_szPerformDeptId = m_wndOrderList.GetItemText(nSel, 3);

	if(dlg.DoModal() == IDOK)
	{
		OnListLoadData();
	}
	

}
CString CHMSOperationScheduleList::GetFirstName(CString szName)
{
	CString szFirstName,tmpStr;
	szFirstName.Empty();
	int nCount =0;
	CString szTemp2,szTemp1;
	CStringToken tk(szName, _T(" "));
	nCount = tk.GetSize();
	if( nCount >=1)
	{
		tk.GetAt(nCount-1,szFirstName);
		if(szFirstName.GetLength() <=1)
		{
			tk.GetAt(nCount-2,szTemp2);
			szTemp2.AppendFormat(_T(" %s"),szFirstName);
			szFirstName = szTemp2;
		}
	}
	return szFirstName;
}