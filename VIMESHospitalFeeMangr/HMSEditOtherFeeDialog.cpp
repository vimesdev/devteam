#include "HMSEditOtherFeeDialog.h"
#include "MainFrm.h"

static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSEditOtherFeeDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSEditOtherFeeDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSEditOtherFeeDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSEditOtherFeeDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSEditOtherFeeDialog *pVw = (CHMSEditOtherFeeDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSEditOtherFeeDialog *pVw = (CHMSEditOtherFeeDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static void _OnRestoreSelectFnc(CWnd *pWnd){
	CHMSEditOtherFeeDialog *pVw = (CHMSEditOtherFeeDialog *)pWnd;
	pVw->OnRestoreSelect();
} 
static int _OnAddHMSEditOtherFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSEditOtherFeeDialog*)pWnd)->OnAddHMSEditOtherFeeDialog();
} 
static int _OnEditHMSEditOtherFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSEditOtherFeeDialog*)pWnd)->OnEditHMSEditOtherFeeDialog();
} 
static int _OnDeleteHMSEditOtherFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSEditOtherFeeDialog*)pWnd)->OnDeleteHMSEditOtherFeeDialog();
} 
static int _OnSaveHMSEditOtherFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSEditOtherFeeDialog*)pWnd)->OnSaveHMSEditOtherFeeDialog();
} 
static int _OnCancelHMSEditOtherFeeDialogFnc(CWnd *pWnd){
	 return ((CHMSEditOtherFeeDialog*)pWnd)->OnCancelHMSEditOtherFeeDialog();
} 
CHMSEditOtherFeeDialog::CHMSEditOtherFeeDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSEditOtherFeeDialog::~CHMSEditOtherFeeDialog(){
}
void CHMSEditOtherFeeDialog::OnCreateComponents()
{
	m_wndFeeInformation.Create(this, _T("Fee Information"), 5, 5, 795, 565);
	m_wndList.Create(this,10, 30, 790, 560); 
	m_wndDelete.Create(this, _T("Delete"), 550, 570, 670, 595);
	m_wndClose.Create(this, _T("&Close"), 675, 570, 795, 595);
	m_wndRestore.Create(this, _T("Restore"), 5, 570, 125, 595);

}
void CHMSEditOtherFeeDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(1, _T("Name"), CFMT_TEXT, 330);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("Idx"), CFMT_NUMBER, 0);
	m_wndList.InsertColumn(7, _T("Status"), CFMT_TEXT, 0);

	m_wndList.SetCheckBox(TRUE);
	m_wndList.ModifyStyle(0, LVS_NOSORTHEADER);

}
void CHMSEditOtherFeeDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndRestore.SetEvent(WE_CLICK, _OnRestoreSelectFnc);
	SetMode(VM_EDIT);
	OnListLoadData();
}
void CHMSEditOtherFeeDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSEditOtherFeeDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSEditOtherFeeDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSEditOtherFeeDialog::SetDefaultValues(){


}
int CHMSEditOtherFeeDialog::SetMode(int nMode){
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
 			EnableButtons(TRUE, 0, 1, 2, -1);
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
void CHMSEditOtherFeeDialog::OnListDblClick(){
	
} 
void CHMSEditOtherFeeDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSEditOtherFeeDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSEditOtherFeeDialog::OnListLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndList.BeginLoad(); 
	int nCount = 0;

	szSQL.Format(_T(" SELECT hfe_fee_id as idx,") \
				_T("        hfe_status as status,") \
				_T("        hfe_type as feetype,") \
				_T("        rtrim(hfe_group,'0') as groupid,") \
				_T("        hfe_itemid as itemid,") \
				_T("        hfe_desc as name,") \
				_T("        hfe_unit as unit,") \
				_T("        (hfe_quantity) as qty,") \
				_T("        hfe_unitprice as unitprice,") \
				_T("        (hfe_cost) as cost,") \
				_T("        (hfe_inspaid) as inspaid,") \
				_T("        (hfe_discount) as discount,") \
				_T("        (hfe_diffcost) as diffcost") \
				_T(" FROM hms_fee") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group)") \
				_T(" WHERE hfe_docno=%ld AND (hfe_invoiceno=%ld OR hfe_invoiceno<=0) AND hfe_class='X'") \
				_T(" ORDER BY groupid, feetype, name, unit, unitprice"),
				m_nDocNo, m_nInvoiceNo);

	CString tmpStr;
	int nIndex = 1;
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
			rs.GetValue(_T("status")),
			NULL);
		rs.GetValue(_T("status"), tmpStr);

		if (tmpStr == _T("C"))
		{
			m_wndList.SetItemTextColor(nItem, RGB(255, 0, 0), FALSE);
		}
		rs.MoveNext();
	}

	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSEditOtherFeeDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	long nIdx;
	long double nTotal = 0;

	pMF->BeginTransaction();
	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			nIdx = str2long(m_wndList.GetItemText(i, 6));
			nTotal += ToDouble(m_wndList.GetItemText(i, 5));

			szSQL.Format(_T("UPDATE hms_fee SET hfe_status='C', ") \
				         _T("hfe_invoiceno=0, hfe_patdebt=hfe_patpaid, hfe_patpaid=0 ") \
						 _T("WHERE hfe_docno=%ld and hfe_fee_id=%ld"),
				         m_nDocNo, nIdx);
			pMF->ExecSQL(szSQL);
		}

		if (nTotal > 0)
		{
			szSQL.Format(_T("UPDATE hms_fee_invoice ") \
				         _T("SET hfe_amount=hfe_amount-%Lf, hfe_patpaid=hfe_patpaid-%Lf ") \
						 _T("WHERE hfe_docno=%ld AND hfe_invoiceno=%ld"),
						 nTotal, nTotal, m_nDocNo, m_nInvoiceNo);

			pMF->ExecSQL(szSQL);
		}
	}
	pMF->Commit();

	CGuiDialog::OnOK();
} 
void CHMSEditOtherFeeDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancel();
} 
void CHMSEditOtherFeeDialog::OnRestoreSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	long nIdx;
	long double nTotal = 0;
	CString szSQL, szStatus;

	pMF->BeginTransaction();

	for (int i = 0; i < m_wndList.GetItemCount(); i++)
	{
		if (m_wndList.GetCheck(i))
		{
			szStatus = m_wndList.GetItemText(i, 7);

			if (szStatus != _T("C"))
				continue;

			nIdx = str2long(m_wndList.GetItemText(i, 6));
			nTotal += ToDouble(m_wndList.GetItemText(i, 5));

			szSQL.Format(_T("UPDATE hms_fee SET hfe_status='P', ") \
				         _T("hfe_patpaid=hfe_patdebt, hfe_invoiceno=%ld, hfe_patdebt=0 ") \
						 _T("WHERE hfe_docno=%ld and hfe_fee_id=%ld"),
						 m_nInvoiceNo, m_nDocNo, nIdx);

			pMF->ExecSQL(szSQL);
		}

		if (nTotal > 0)
		{
			szSQL.Format(_T("UPDATE hms_fee_invoice ") \
				         _T("SET hfe_amount=hfe_amount+%Lf, hfe_patpaid=hfe_patpaid+%Lf ") \
						 _T("WHERE hfe_docno=%ld AND hfe_invoiceno=%ld"),
						 nTotal, nTotal, m_nDocNo, m_nInvoiceNo);

			pMF->ExecSQL(szSQL);
		}
	}

	pMF->Commit();

	CGuiDialog::OnOK();
} 
int CHMSEditOtherFeeDialog::OnAddHMSEditOtherFeeDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSEditOtherFeeDialog::OnEditHMSEditOtherFeeDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSEditOtherFeeDialog::OnDeleteHMSEditOtherFeeDialog(){
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
 		OnCancelHMSEditOtherFeeDialog();
 	}
	return 0;
}
int CHMSEditOtherFeeDialog::OnSaveHMSEditOtherFeeDialog(){
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
 		//OnHMSEditOtherFeeDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSEditOtherFeeDialog::OnCancelHMSEditOtherFeeDialog(){
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
int CHMSEditOtherFeeDialog::OnHMSEditOtherFeeDialogListLoadData(){
	return 0;
}
