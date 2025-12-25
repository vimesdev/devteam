#include "HMSTreatmentPrescriptionListDialog.h"
#include "MainFrm.h"
#include ".\hmstreatmentprescriptionlistdialog.h"

#define COLOR_CAPTION RGB(64,128,192)
#define COLOR_GROUP RGB(64,192,255)
#define COLOR_GROUP1 RGB(192,192,255)
#define COLOR_GROUP2 RGB(192,192,255)
static void _OnDateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionListDialog* )pWnd)->OnDateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDateSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDateSelendok();
}
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDateKillfocus();
}*/
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDateKillfocus();
}*/
static long _OnDateLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDateLoadData();
}
/*static void _OnDateAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDateAddNew();
}*/
static void _OnDoctorSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentPrescriptionListDialog* )pWnd)->OnDoctorSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDoctorSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDoctorSelendok();
}
/*static void _OnDoctorSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDoctorKillfocus();
}*/
/*static void _OnDoctorKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDoctorKillfocus();
}*/
static long _OnDoctorLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDoctorLoadData();
}
/*static void _OnDoctorAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog *)pWnd)->OnDoctorAddNew();
}*/
static void _OnRefreshSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionListDialog *pVw = (CHMSTreatmentPrescriptionListDialog *)pWnd;
	pVw->OnRefreshSelect();
} 


static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionListDialog *pVw = (CHMSTreatmentPrescriptionListDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentPrescriptionListDialog *pVw = (CHMSTreatmentPrescriptionListDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSTreatmentPrescriptionListDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnAddHMSTreatmentPrescriptionListDialog();
} 
static int _OnEditHMSTreatmentPrescriptionListDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnEditHMSTreatmentPrescriptionListDialog();
} 
static int _OnDeleteHMSTreatmentPrescriptionListDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnDeleteHMSTreatmentPrescriptionListDialog();
} 
static int _OnSaveHMSTreatmentPrescriptionListDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnSaveHMSTreatmentPrescriptionListDialog();
} 
static int _OnCancelHMSTreatmentPrescriptionListDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentPrescriptionListDialog*)pWnd)->OnCancelHMSTreatmentPrescriptionListDialog();
} 
CHMSTreatmentPrescriptionListDialog::CHMSTreatmentPrescriptionListDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_szOrderType = _T("T");
}
CHMSTreatmentPrescriptionListDialog::~CHMSTreatmentPrescriptionListDialog(){
}
void CHMSTreatmentPrescriptionListDialog::OnCreateComponents(){
	m_wndPatientList.Create(this, _T("Patient List"), 5, 35, 800, 555);
	m_wndDateLabel.Create(this, _T("Date"), 10, 5, 110, 30);
	m_wndDate.Create(this,115, 5, 365, 30); 
	m_wndDoctorLabel.Create(this, _T("Doctor"), 370, 5, 470, 30);
	m_wndDoctor.Create(this,475, 5, 725, 30); 
	m_wndRefresh.Create(this, _T("Refresh"), 730, 5, 796, 30);
	m_wndList.Create(this,10, 60, 795, 550); 
	m_wndApply.Create(this, _T("&Apply"), 635, 560, 715, 585);
	m_wndClose.Create(this, _T("&Close"), 720, 560, 800, 585);

}
void CHMSTreatmentPrescriptionListDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndDate.SetCheckValue(false);
	m_wndDate.LimitText(35);
	m_wndDoctor.SetCheckValue(false);
	m_wndDoctor.LimitText(35);


	m_wndDate.InsertColumn(0, _T("ID"), CFMT_TEXT, 150);
	m_wndDate.Format(1, 0);
	
	m_wndDoctor.InsertColumn(0, _T("ID"), CFMT_TEXT, 100);
	m_wndDoctor.InsertColumn(1, _T("Name"), CFMT_TEXT, 250);

	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_NUMBER, 350);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Usage"), CFMT_TEXT, 300);

}
void CHMSTreatmentPrescriptionListDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDate.SetEvent(WE_SELENDOK, _OnDateSelendokFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_SELCHANGE, _OnDateSelectChangeFnc);
	m_wndDate.SetEvent(WE_LOADDATA, _OnDateLoadDataFnc);
	//m_wndDate.SetEvent(WE_ADDNEW, _OnDateAddNewFnc);
	m_wndDoctor.SetEvent(WE_SELENDOK, _OnDoctorSelendokFnc);
	//m_wndDoctor.SetEvent(WE_SETFOCUS, _OnDoctorSetfocusFnc);
	//m_wndDoctor.SetEvent(WE_KILLFOCUS, _OnDoctorKillfocusFnc);
	m_wndDoctor.SetEvent(WE_SELCHANGE, _OnDoctorSelectChangeFnc);
	m_wndDoctor.SetEvent(WE_LOADDATA, _OnDoctorLoadDataFnc);
	//m_wndDoctor.SetEvent(WE_ADDNEW, _OnDoctorAddNewFnc);
	m_wndRefresh.SetEvent(WE_CLICK, _OnRefreshSelectFnc);
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(VM_NONE);
	OnListLoadData();

}
void CHMSTreatmentPrescriptionListDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDateKey);
	DDX_TextEx(pDX, m_wndDoctor.GetDlgCtrlID(), m_szDoctorKey);

}
void CHMSTreatmentPrescriptionListDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentPrescriptionListDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentPrescriptionListDialog::SetDefaultValues(){

	m_szDateKey.Empty();
	m_szDoctorKey.Empty();


}
int CHMSTreatmentPrescriptionListDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, 2, 6, -1);
 			SetDefaultValues();
 			break;
 		};
		m_wndDoctor.EnableWindow(TRUE);
		m_wndDate.EnableWindow(TRUE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSTreatmentPrescriptionListDialog::OnDateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionListDialog::OnDateSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionListDialog::OnDateSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionListDialog::OnDateKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionListDialog::OnDateLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDate.IsSearchKey() && !m_szDateKey.IsEmpty()){
//	 szWhere.Format(_T(" and id='%s' "), m_szDateKey
	};
	m_wndDate.DeleteAllItems(); 
	int nCount = 0;

	
	//Neu phieu thuoc, hoa chat
	if(m_szOrderType == _T("C"))
	{
		szWhere.AppendFormat(_T(" and hpo_doctype='CPO' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hpo_doctype='PPO' "));
	}

	szSQL.Format(_T(" SELECT DISTINCT TO_CHAR(hpo_orderdate, 'DD/MM/YYYY') AS orderdate") \
_T(" FROM hms_ipharmaorder") \
_T(" WHERE hpo_deptid          ='%s'") \
_T(" AND hpo_orderstatus      IN('S')") \
_T(" AND hpo_transaction_id    = 0 and hpo_treatidx > 0 ") \
_T(" AND TRUNC(hpo_orderdate) >= TO_DATE('%s' ,'YYYY-MM-DD') ") \
_T(" %s ") \
_T(" ORDER BY orderdate "), 
		pMF->m_szDept, m_szOrderDate.Left(10), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDate.AddItems(
			rs.GetValue(_T("orderdate")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSTreatmentPrescriptionListDialog::OnDateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentPrescriptionListDialog::OnDoctorSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentPrescriptionListDialog::OnDoctorSelendok(){
	 
}
/*void CHMSTreatmentPrescriptionListDialog::OnDoctorSetfocus(){
	
}*/
/*void CHMSTreatmentPrescriptionListDialog::OnDoctorKillfocus(){
	
}*/
long CHMSTreatmentPrescriptionListDialog::OnDoctorLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDoctor.IsSearchKey() && !m_szDoctorKey.IsEmpty()){
//		 szWhere.Format(_T(" and id='%s' "), m_szDoctorKey
	};
	m_wndDoctor.DeleteAllItems(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT hpo_createdby          AS doctor,") \
_T("   get_username(hpo_createdby) AS doctor_name") \
_T(" FROM") \
_T("   ( SELECT DISTINCT hpo_createdby") \
_T("   FROM hms_ipharmaorder") \
_T("   WHERE hpo_deptid          ='%s'") \
_T("   AND hpo_orderstatus      IN('S')") \
_T("   AND hpo_transaction_id    = 0 and hpo_treatidx > 0 ") \
_T("   AND hpo_doctype           ='PPO'") \
_T("   AND TRUNC(hpo_orderdate) >= TO_DATE('%s' ,'YYYY-MM-DD')") \
_T("   ) tbl") \
_T(" ORDER BY hpo_createdby"), pMF->m_szDept, m_szOrderDate.Left(10));
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDoctor.AddItems(
			rs.GetValue(_T("doctor")), 
			rs.GetValue(_T("doctor_name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSTreatmentPrescriptionListDialog::OnDoctorAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentPrescriptionListDialog::OnRefreshSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnListLoadData();
} 
void CHMSTreatmentPrescriptionListDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0 )
		return;
	CGridListItem* o = m_wndList.GetInternalData(nSel);
	
	CGridCell* cell = o->GetCell(0); 
	CGridListItem* o2 = cell->GetRow(0);
	CGridCell* cell2 = o2->GetCell(0);
	CString szMark = cell2->m_szText;
	if(szMark == _T("( * )"))
	{
		szMark = _T("");
	}
	else
		szMark = _T("( * )");

	cell2->m_szText = szMark;
	m_wndList.Invalidate(FALSE);

} 
void CHMSTreatmentPrescriptionListDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentPrescriptionListDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSTreatmentPrescriptionListDialog::OnListLoadData(){

	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	
	CString szSQL, szWhere;
	szWhere.Empty();

	UpdateData(TRUE);
	if(!m_szDateKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and trunc(hpo_orderdate) = TO_DATE('%s', 'DD/MM/YYYY') "), m_szDateKey);
	}

	if(!m_szDoctorKey.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hpo_createdby = '%s' "), m_szDoctorKey);
	}

	//Neu phieu thuoc, hoa chat
	if(m_szOrderType == _T("C"))
	{
		szWhere.AppendFormat(_T(" and hpo_doctype='CPO' "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hpo_doctype='PPO' "));
	}
	szWhere.AppendFormat(_T(" and nvl(hpo_outpatient_order,'N') <>'Y' "));

	szSQL.Format(_T(" SELECT hpo_storage_id                  AS storage_id,") \
_T("   hpo_orderid                          AS order_id,") \
_T("   hpo_docno                            AS docno,") \
_T("   hpo_doctor                           AS doctor,") \
_T("   TO_CHAR(hpo_orderdate, 'DD/MM/YYYY') AS orderdate,") \
_T("   get_objectname(hpo_object_id)        AS objectname,") \
_T("   hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname AS pname") \
_T(" FROM hms_ipharmaorder,") \
_T("   hms_doc,") \
_T("   hms_patient, m_storagelist ") \
_T(" WHERE hpo_deptid          ='%s'") \
_T(" AND hpo_orderstatus      IN('S')") \
_T(" AND NVL(hpo_transaction_id, 0)    = 0 and hpo_treatidx > 0 ") \
_T(" AND TRUNC(hpo_orderdate) >= TO_DATE('%s' ,'YYYY-MM-DD') ") \
_T(" AND hpo_docno             = hd_docno") \
_T(" AND hd_patientno          = hp_patientno and hpo_storage_id = msl_storage_id and msl_type <> 'C' %s "), 
	pMF->m_szDept, m_szOrderDate.Left(10), szWhere);

	


	CString tmpStr;
	int nIndex = 1;
	long nOrderId, nProductId;
	int nItem;
	CGridListItem *o=NULL;
	CGridListItem *o1;
	CGridListItem* o2;
	CGridCell*	cell;


	long nOldDocNo, nNewDocNo;

	m_wndList.BeginLoad();

	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("order_id"), nOrderId);
		rs.GetValue(_T("docno"), nNewDocNo);
		o = new CGridListItem();
		cell = new CGridCell();

		o2 = new CGridListItem(RGB(230, 230, 230), RGB(0, 128, 192));
		tmpStr.Format(_T("( * )"));
		o2->Add(tmpStr, 40, CELLTYPE_STRING, DT_CENTER);
		rs.GetValue(_T("pname"), tmpStr);
		o2->Add(tmpStr, 250);
		rs.GetValue(_T("docno"), tmpStr);
		o2->Add(tmpStr, 80);
		rs.GetValue(_T("order_id"), tmpStr);
		o2->Add(tmpStr, 70);
		rs.GetValue(_T("orderdate"), tmpStr);
		o2->Add(tmpStr, 100);
		rs.GetValue(_T("objectname"), tmpStr);
		o2->Add(tmpStr, 230);
		
		cell->AddRow(o2);
		
		szSQL.Format(_T(" SELECT hpol_product_id           AS product_id,") \
	_T("   hpol_line                      AS lineidx,") \
	_T("   mp_name                        AS drugname,") \
	_T("   get_uomname(mp_product_uom_id) AS unit,") \
	_T("   SUM(hpol_qtyorder)             AS qty,") \
	_T("   hpou_dousage                   AS dousage") \
	_T(" FROM hms_ipharmaorderline") \
	_T(" LEFT JOIN hms_ipharmaorder_usage") \
	_T(" ON(hpou_orderid     = hpol_orderid") \
	_T(" AND hpou_product_id = hpol_product_id)") \
	_T(" LEFT JOIN m_product") \
	_T(" ON(hpol_product_id = mp_product_id)") \
	_T(" WHERE hpol_docno=%ld and hpol_orderid =%ld") \
	_T(" GROUP BY hpol_orderid,") \
	_T("   hpol_product_id,") \
	_T("   mp_name,") \
	_T("   hpol_line,") \
	_T("   mp_product_uom_id,") \
	_T("   hpou_dousage") \
	_T(" ORDER BY hpol_line,") \
	_T("   mp_name"), nNewDocNo, nOrderId);

		rsl.ExecSQL(szSQL);

		while(!rsl.IsEOF())
		{
			o2 = new CGridListItem();
			rsl.GetValue(_T("product_id"), nProductId);
			
			tmpStr.Format(_T("%d"), nIndex++);
			o2->Add(tmpStr, 40, CELLTYPE_STRING, DT_RIGHT);
			rsl.GetValue(_T("drugname"), tmpStr);
			o2->Add(tmpStr, 350, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
			rsl.GetValue(_T("unit"), tmpStr);
			o2->Add(tmpStr, 80);
			rsl.GetValue(_T("qty"), tmpStr);
			o2->Add(tmpStr, 70, CELLTYPE_STRING, DT_CENTER|DT_SINGLELINE|DT_VCENTER);
			rsl.GetValue(_T("dousage"), tmpStr);
			o2->Add(tmpStr, 300, CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
			cell->AddRow(o2);
			rsl.MoveNext();
		}

		o->Add(cell);
		int nItem = m_wndList.Add(o);
		tmpStr.Format(_T("%ld"), nOrderId);
		m_wndList.SetItemKey(nItem, tmpStr);


		rs.MoveNext();
	}

	m_wndList.EndLoad();

	return 0;
}
void CHMSTreatmentPrescriptionListDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	long nOId;

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		//	if(m_wndList.GetItemText(i, 5) == _T("Y"))
		CGridListItem* o = m_wndList.GetInternalData(i);
		CGridCell* cell = o->GetCell(0); 
		CGridListItem* o2 = cell->GetRow(0);
		CGridCell* cell2 = o2->GetCell(0);
		CString szMark = cell2->m_szText;
		if(!szMark.IsEmpty())
		{
			nOId = str2long(m_wndList.GetItemKey(i));
			szSQL.Format(_T(" HMS_IPHARMAORDER_APPLYTRANS_V5(%ld, '%s', %ld, '%s')"),
				m_nBatchId, m_szBatchNo, nOId, pMF->GetCurrentUser());
			pMF->ExecDML(szSQL);
		}
	}
	
	CGuiDialog::OnOK();
} 
void CHMSTreatmentPrescriptionListDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSTreatmentPrescriptionListDialog::OnAddHMSTreatmentPrescriptionListDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentPrescriptionListDialog::OnEditHMSTreatmentPrescriptionListDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentPrescriptionListDialog::OnDeleteHMSTreatmentPrescriptionListDialog(){
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
 		OnCancelHMSTreatmentPrescriptionListDialog();
 	}
	return 0;
}
int CHMSTreatmentPrescriptionListDialog::OnSaveHMSTreatmentPrescriptionListDialog(){
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
 		//OnHMSTreatmentPrescriptionListDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentPrescriptionListDialog::OnCancelHMSTreatmentPrescriptionListDialog(){
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
int CHMSTreatmentPrescriptionListDialog::OnHMSTreatmentPrescriptionListDialogListLoadData(){
	return 0;
}

BOOL CHMSTreatmentPrescriptionListDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (pMsg->hwnd == m_wndList.GetSafeHwnd())
	{
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_SPACE)
	{
		OnListDblClick();
		return TRUE;
		}
	}
	return CGuiDialog::PreTranslateMessage(pMsg);
}
