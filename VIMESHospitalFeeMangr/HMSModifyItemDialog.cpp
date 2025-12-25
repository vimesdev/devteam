#include "HMSModifyItemDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSModifyItemDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSModifyItemDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSModifyItemDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSModifyItemDialog*)pWnd)->OnListDeleteItem();
}

static int _OnListCheckAllItemFnc(CWnd *pWnd){
	((CHMSModifyItemDialog*)pWnd)->OnListCheckAllItem();
	 return 0;
}
static void _OnRestoreSelectFnc(CWnd *pWnd)
{
	CHMSModifyItemDialog *pVw = (CHMSModifyItemDialog *)pWnd;
	pVw->OnRestoreSelect();
} 
static void _OnUnpaidSelectFnc(CWnd *pWnd){
	CHMSModifyItemDialog *pVw = (CHMSModifyItemDialog *)pWnd;
	pVw->OnUnpaidSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSModifyItemDialog *pVw = (CHMSModifyItemDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSModifyItemDialog *pVw = (CHMSModifyItemDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSModifyItemDialog*)pWnd)->OnAddHMSModifyItemDialog();
} 
static int _OnEditHMSModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSModifyItemDialog*)pWnd)->OnEditHMSModifyItemDialog();
} 
static int _OnDeleteHMSModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSModifyItemDialog*)pWnd)->OnDeleteHMSModifyItemDialog();
} 
static int _OnSaveHMSModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSModifyItemDialog*)pWnd)->OnSaveHMSModifyItemDialog();
} 
static int _OnCancelHMSModifyItemDialogFnc(CWnd *pWnd){
	 return ((CHMSModifyItemDialog*)pWnd)->OnCancelHMSModifyItemDialog();
} 
CHMSModifyItemDialog::CHMSModifyItemDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSModifyItemDialog::~CHMSModifyItemDialog()
{
}
void CHMSModifyItemDialog::OnCreateComponents()
{
	m_wndFeeInformation.Create(this, _T("Fee Information"), 5, 5, 800, 570);
	m_wndList.Create(this,10, 30, 795, 565); 
	m_wndRestore.Create(this, _T("Restore"), 5, 573, 125, 598);
	m_wndUnpaid.Create(this, _T("Unpay"), 430, 575, 550, 600);
	m_wndDelete.Create(this, _T("Delete"), 555, 575, 675, 600);
	m_wndClose.Create(this, _T("&Close"), 680, 575, 800, 600);
}
void CHMSModifyItemDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 300);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_NUMBER, 90);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_NUMBER, 100);
	m_wndList.InsertColumn(6, _T("idx"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(7, _T("Item"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(8, _T("OrderID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(9, _T("OrderlineID"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(10, _T("Status"), CFMT_TEXT, 100);
	
	
	m_wndList.SetCheckBox(TRUE);
}
void CHMSModifyItemDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Check/Uncheck All"), _OnListCheckAllItemFnc);
	m_wndRestore.SetEvent(WE_CLICK, _OnRestoreSelectFnc);
	m_wndUnpaid.SetEvent(WE_CLICK, _OnUnpaidSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	OnListLoadData();
	SetMode(VM_EDIT);
	if(pMF->GetObjectType() == _T("S"))
	{
		m_wndUnpaid.EnableWindow(FALSE);
	}
	else
	{
		//m_wndDelete.EnableWindow(FALSE);
	}
}
void CHMSModifyItemDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSModifyItemDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSModifyItemDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSModifyItemDialog::SetDefaultValues(){

	m_szItemID.Empty();

}
int CHMSModifyItemDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, 3, -1); 
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
void CHMSModifyItemDialog::OnListDblClick()
{
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	bCheck = !bCheck;
	m_wndList.SetCheck(nSel, bCheck);
} 
void CHMSModifyItemDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSModifyItemDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSModifyItemDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndList.BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	
	if(pMF->IsInPatient()){
		if (pMF->m_szOutpatient != _T("Y")) szWhere.Format(_T(" and hfe_group <>'D0000' "));
		szWhere.AppendFormat(_T(" and hfe_class IN('X','E','I','A') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfe_class IN('E','X')  "));
	}

	szWhere.AppendFormat(_T(" and hfe_type in(%s) "), pMF->m_szFeeTypes);
	if(!m_szItemID.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hfe_itemid='%s' "), m_szItemID);
	}

	szWhere.AppendFormat(_T(" and hfe_type not in('D','M') "));

	szSQL.Format(_T(" SELECT hfe_fee_id as idx, hfe_status, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" hfe_orderid, hfe_orderline, ") \
		_T(" 		(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		(hfe_cost) as cost, ") \
		_T(" 		(hfe_inspaid) as inspaid, ") \
		_T(" 		(hfe_discount) as discount, ") \
		_T(" 		(hfe_diffcost) as diffcost ") \
		_T(" FROM hms_fee ") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld  AND hfe_status in('O','X','C','A') and hfe_cost > 0  %s ") \
		_T(" ORDER BY feetype, groupid, name, unit, unitprice"), m_nDocumentNo,  szWhere);

	//_msg(_T("%s"), szSQL);	

	CString tmpStr;
	int nIndex = 1;
	CString szType, szItemID;
	long nOrderID, nOrderLine;
	CRecord rss(&pMF->m_db);

	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{ 
		tmpStr.Format(_T("%d"), nIndex++);
		int nItem = m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("Name")), 
			rs.GetValue(_T("Unit")), 
			rs.GetValue(_T("qty")), 
			rs.GetValue(_T("UnitPrice")), 
			rs.GetValue(_T("cost")), 
			rs.GetValue(_T("idx")), 
			rs.GetValue(_T("itemid")),
			rs.GetValue(_T("hfe_orderid")),
			rs.GetValue(_T("hfe_orderline")),
			NULL);
			rs.GetValue(_T("hfe_status"), tmpStr);
			
			
		if(tmpStr == _T("C"))
		{
			m_wndList.SetItemTextColor(nItem, RGB(255, 0, 0), FALSE);
		}
		if(tmpStr == _T("X"))
		{
			m_wndList.SetItemTextColor(nItem, RGB(0, 0, 255), FALSE);

		}
	

		rs.GetValue(_T("feetype"), szType);
		//KIEM TRA NEU LA CLS THI LAY TRANG THAI XEM DA THUC HIENJ CHUA
		if(szType == _T("T") || szType == _T("P") || szType == _T("O"))
		{
			rs.GetValue(_T("itemid"), szItemID);
			rs.GetValue(_T("hfe_orderid"), nOrderID);
			rs.GetValue(_T("hfe_orderline"), nOrderLine);
			if(szType == _T("T"))
				szSQL.Format(_T("SELECT hpcl_status as itemstatus FROM hms_testorderline WHERE hpcl_orderid=%ld and hpcl_itemid='%s' and hpcl_orderlineid=%ld"), nOrderID, szItemID, nOrderLine);
			else if (szType == _T("P"))
				szSQL.Format(_T("SELECT hpcl_status as itemstatus FROM hms_pacsorderline WHERE hpcl_orderid=%ld and hpcl_itemid='%s' and hpcl_orderlineid=%ld"), nOrderID, szItemID, nOrderLine);
			else
				szSQL.Format(_T("SELECT ho_status as itemstatus FROM hms_operation WHERE ho_idx=%ld and ho_itemid='%s' "), nOrderID, szItemID );
			rss.ExecSQL(szSQL);
			tmpStr.Format(_T("\x43h\x1B0\x61 th\x1EF1\x63 hi\x1EC7n"));
			if(!rss.IsEOF())
			{
				CString szLineStatus;
				rss.GetValue(_T("itemstatus"), szLineStatus);
				if(szLineStatus != _T("O") && szLineStatus != _T("S"))
				{
					tmpStr.Format(_T("\x110\xE3 th\x1EF1\x63 hi\x1EC7n"));
				}
			}
			m_wndList.SetItemText(nItem, 10, tmpStr);

		}

		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSModifyItemDialog::OnRestoreSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		CString szSQL;
	double nIdx;
	pMF->BeginTransaction();
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i)){
			nIdx = str2double(m_wndList.GetItemText(i, 6));
			szSQL.Format(_T("UPDATE hms_fee SET hfe_status='O' WHERE hfe_docno=%ld and hfe_fee_id=%.0f and hfe_status in('C','X') "),
				m_nDocumentNo, nIdx);
_debug(_T("%s"), szSQL);
			pMF->ExecSQL(szSQL);

		}
	}
	pMF->Commit();
	/*
	if(pMF->IsInPatient())
		szSQL.Format(_T("hms_fee_create(%ld,'EIOTPDMX', 'TM') "),  m_nDocumentNo);
	else
		szSQL.Format(_T("hms_fee_create(%ld,'EIOTPDMX', 'EM') "),  m_nDocumentNo);
	pMF->ExecDML(szSQL);*/

	CGuiDialog::OnOK();
	
} 
void CHMSModifyItemDialog::OnUnpaidSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	double nIdx;
	pMF->BeginTransaction();
	for (int i =0; i < m_wndList.GetItemCount(); i++){
		if(m_wndList.GetCheck(i)){
			nIdx = str2double(m_wndList.GetItemText(i, 6));
			szSQL.Format(
				_T("UPDATE hms_fee SET hfe_status='X', hfe_insprice=hfe_unitprice, hfe_inspaid=0, hfe_discount=0, hfe_diffpaid=0, hfe_diffcost=hfe_cost, hfe_patdebt=hfe_cost ") \
				_T(" WHERE hfe_docno = % ld and hfe_fee_id = %.0f and hfe_status in('O', 'C') "),
				m_nDocumentNo, nIdx);
			pMF->ExecSQL(szSQL);

		}
	}
	pMF->Commit();

	/*if(pMF->IsInPatient())
		szSQL.Format(_T("hms_fee_create(%ld,'EIOTPDMX', 'TM') "),  m_nDocumentNo);
	else
		szSQL.Format(_T("hms_fee_create(%ld,'EIOTPDMX', 'EM') "),  m_nDocumentNo);
	pMF->ExecDML(szSQL);*/
	CGuiDialog::OnOK();
} 
void CHMSModifyItemDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szItems, szItemId;

	double nIdx;
	long nOrderid;
	long nOrderlineid;

	pMF->BeginTransaction();
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetCheck(i))
		{
			nIdx = str2double(m_wndList.GetItemText(i, 6));
			szItems = m_wndList.GetItemText(i, 1);
			szItemId = m_wndList.GetItemText(i, 7);
			nOrderid = ToLong(m_wndList.GetItemText(i, 8));
			nOrderlineid = ToLong(m_wndList.GetItemText(i, 9));	

			//_msg(_T("%s"), szItemId);
			//_msg(_T("%ld"), nOrderid);


			szSQL.Format(_T(" SELECT COUNT(*) ") \
			_T("     FROM HMS_PHARMAORDER_VIEW_VP") \
			_T("     LEFT JOIN hms_doc ON (hpo_docno=hd_docno)") \
			_T("     WHERE hpo_docno       = %ld") \
			_T("     AND hpo_reference_id = %ld") \
			_T("     AND hpo_refitem_id     = '%s' AND NVL(HD_HEALTHEXAM,'N') <> 'Y' "), m_nDocumentNo, nOrderid, szItemId);

			rs.ExecSQL(szSQL);
			//_msg(_T("%s"), szSQL);			
			
			//if ((rs.GetIntValue() > 0) && (pMF->m_UserInfo.su_groupid != _T("A")))
			if (rs.GetIntValue() > 0)
			{
			ShowMessageBox(_T("Mục phí đã có thuốc, không thể thao tác được"));
			return;
			}
			/*
			szSQL.Format(_T("UPDATE hms_fee SET hfe_status='C'") \
				_T(" WHERE hfe_docno=%ld and hfe_fee_id=%ld ") \
				//_T(" AND HFE_ORDERLINE IN (SELECT HPCL_ORDERLINEID FROM HMS_PACS_TEST_LINE_VIEW WHERE HPC_DOCNO = %ld AND hpc_orderid=%ld AND HPCL_ORDERLINEID=%ld AND hpcl_status <> 'T') ") \//
				_T(" AND HFE_ORDERLINE IN (SELECT HPCL_ORDERLINEID FROM HMS_PACS_TEST_LINE_VIEW WHERE HPC_DOCNO = %ld AND hpc_orderid=%ld AND HPCL_ORDERLINEID=%ld) ") \
				_T(" and hfe_status in('O','X') "),
				m_nDocumentNo, nIdx, m_nDocumentNo, nOrderid, nOrderlineid);*/
			szSQL.Format(_T("UPDATE hms_fee SET hfe_status='C' WHERE hfe_docno=%ld and hfe_fee_id=%.0f and hfe_status in('O','X') "),
				m_nDocumentNo, nIdx);

				_debug(_T("%s"), szSQL);
				//_msg(_T("%s"), szSQL);
			int nRet = pMF->ExecSQL(szSQL);
			if (nRet > 0)
					{
						szSQL.Format(_T(" INSERT INTO HMS_FEE_DELETE_ITEM VALUES(%ld, %f, '%s', '%s', TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'), '%s') ")
							, m_nDocumentNo,nIdx, szItems, pMF->GetCurrentUser(), pMF->GetSysDateTime(), pMF->GetLocalIP());
						pMF->ExecSQL(szSQL);
					}
		}
	}
	pMF->Commit();

	//if(pMF->IsInPatient())
	//	szSQL.Format(_T("hms_fee_create(%ld,'EIOTPDMX', 'TM') "),  m_nDocumentNo);
	//else
	//	szSQL.Format(_T("hms_fee_create(%ld,'EIOTPDMX', 'EM') "),  m_nDocumentNo);
	//pMF->ExecDML(szSQL);

	CGuiDialog::OnOK();
	
} 
void CHMSModifyItemDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSModifyItemDialog::OnAddHMSModifyItemDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSModifyItemDialog::OnEditHMSModifyItemDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSModifyItemDialog::OnDeleteHMSModifyItemDialog(){
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
 		OnCancelHMSModifyItemDialog(); 
 	}
	return 0;
}
int CHMSModifyItemDialog::OnSaveHMSModifyItemDialog(){
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
 		//OnHMSModifyItemDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSModifyItemDialog::OnCancelHMSModifyItemDialog(){
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
int CHMSModifyItemDialog::OnHMSModifyItemDialogListLoadData(){
	return 0;
}


void CHMSModifyItemDialog::OnListCheckAllItem()
{
	int nCheck = 0, nItemCount = m_wndList.GetItemCount();
	bool bCheck = false;
	for (int i = 0; i < nItemCount; i++)
	{
		if (m_wndList.GetCheck(i))
		{
			nCheck++;
		}
	}
	if (nCheck != nItemCount)
	{
		bCheck = true;
	}
	for (int i = 0; i < nItemCount; i++)
	{
		m_wndList.SetCheck(i, bCheck);
	}	
}