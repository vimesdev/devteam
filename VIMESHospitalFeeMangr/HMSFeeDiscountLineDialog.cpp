#include "HMSFeeDiscountLineDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountLineDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSFeeDiscountLineDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeDiscountLineDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountLineDialog*)pWnd)->OnListDeleteItem();
}


static long _OnDiscountListLoadDataFnc(CWnd *pWnd){
	return ((CHMSFeeDiscountLineDialog*)pWnd)->OnDiscountListLoadData();
} 
static void _OnDiscountListDblClickFnc(CWnd *pWnd){
	((CHMSFeeDiscountLineDialog*)pWnd)->OnDiscountListDblClick();
} 
static void _OnDiscountListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSFeeDiscountLineDialog*)pWnd)->OnDiscountListSelectChange(nOldItem, nNewItem);
} 
static int _OnDiscountListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountLineDialog*)pWnd)->OnDiscountListDeleteItem();
}

static void _OnApplySelectFnc(CWnd *pWnd){
	CHMSFeeDiscountLineDialog *pVw = (CHMSFeeDiscountLineDialog *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSFeeDiscountLineDialog *pVw = (CHMSFeeDiscountLineDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSFeeDiscountLineDialog *pVw = (CHMSFeeDiscountLineDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSFeeDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountLineDialog*)pWnd)->OnAddHMSFeeDiscountLineDialog();
} 
static int _OnEditHMSFeeDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountLineDialog*)pWnd)->OnEditHMSFeeDiscountLineDialog();
} 
static int _OnDeleteHMSFeeDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountLineDialog*)pWnd)->OnDeleteHMSFeeDiscountLineDialog();
} 
static int _OnSaveHMSFeeDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountLineDialog*)pWnd)->OnSaveHMSFeeDiscountLineDialog();
} 
static int _OnCancelHMSFeeDiscountLineDialogFnc(CWnd *pWnd){
	 return ((CHMSFeeDiscountLineDialog*)pWnd)->OnCancelHMSFeeDiscountLineDialog();
} 
CHMSFeeDiscountLineDialog::CHMSFeeDiscountLineDialog(CWnd *pParent, int nMode):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 805;
	m_nDlgHeight = 605;
	SetDefaultValues();
}
CHMSFeeDiscountLineDialog::~CHMSFeeDiscountLineDialog(){
}
void CHMSFeeDiscountLineDialog::OnCreateComponents(){
	m_wndFeeInformation.Create(this, _T("Fee Information"), 5, 5, 800, 570);
	m_wndList.Create(this,10, 30, 795, 300); 
	m_wndDiscountList.Create(this,10, 305, 795, 565); 
	m_wndApply.Create(this, _T("&Apply"), 430, 575, 550, 600);
	m_wndDelete.Create(this, _T("Discard"), 555, 575, 675, 600);
	m_wndClose.Create(this, _T("&Close"), 680, 575, 800, 600);
	m_wndPrint.Create(this, _T("&Print"), 5, 575, 90, 600);

}
void CHMSFeeDiscountLineDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndList.SetSortHeader(false);
//	m_wndList.SetCheckBox(true);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_TEXT, 50);
	m_wndList.InsertColumn(1, _T("Description"), CFMT_TEXT, 400);
	m_wndList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(3, _T("Unit Price"), CFMT_MONEY, 90);
	m_wndList.InsertColumn(4, _T("Qty"), CFMT_MONEY, 70);
	m_wndList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);
	m_wndList.InsertColumn(6, _T("type"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(7, _T("item"), CFMT_TEXT, 0);
	m_wndList.InsertColumn(8, _T("feetype"), CFMT_TEXT, 0);

	m_wndList.GetHeaderControl()->SetItemHeight(2);
	m_wndList.GetHeaderControl()->MergeCell(_T("Payment Resource"), 0, 6, 1, 8, true);
	m_wndList.SetCheckBox(TRUE);


	m_wndDiscountList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 80);
	m_wndDiscountList.InsertColumn(1, _T("Name"), CFMT_TEXT, 330);
	m_wndDiscountList.InsertColumn(2, _T("Unit"), CFMT_TEXT, 80);
	m_wndDiscountList.InsertColumn(3, _T("Quantity"), CFMT_NUMBER, 80);
	m_wndDiscountList.InsertColumn(4, _T("Unit Price"), CFMT_MONEY, 90);
	m_wndDiscountList.InsertColumn(5, _T("Amount"), CFMT_MONEY, 100);
	m_wndDiscountList.InsertColumn(6, _T("invoiceno"), CFMT_TEXT, 0);
	m_wndDiscountList.InsertColumn(7, _T("invoiceline"), CFMT_TEXT, 0);

	m_wndDiscountList.SetSortHeader(false);

}
void CHMSFeeDiscountLineDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);

	m_wndDiscountList.SetEvent(WE_SELCHANGE, _OnDiscountListSelectChangeFnc);
	m_wndDiscountList.SetEvent(WE_LOADDATA, _OnDiscountListLoadDataFnc);
	m_wndDiscountList.SetEvent(WE_DBLCLICK, _OnDiscountListDblClickFnc);
	m_wndDiscountList.AddEvent(1, _T("Delete"), _OnDiscountListDeleteItemFnc, 0, VK_DELETE, 0);


	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	SetMode(GetMode());
	OnListLoadData();
	OnDiscountListLoadData();
}
void CHMSFeeDiscountLineDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSFeeDiscountLineDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFeeDiscountLineDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSFeeDiscountLineDialog::SetDefaultValues(){


}
int CHMSFeeDiscountLineDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 2, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 1, 2, -1);
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
void CHMSFeeDiscountLineDialog::OnListDblClick(){
	int nSel = m_wndList.GetCurSel();
	if(nSel < 0) return ;
	BOOL bCheck = m_wndList.GetCheck(nSel);
	m_wndList.SetCheck(nSel, !bCheck);
} 
void CHMSFeeDiscountLineDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeDiscountLineDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSFeeDiscountLineDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rsg(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL, szWhere;
	CString szName, tmpStr;
	int nChapter = 0;
	int nIndex1 = 0;
	int nIndex2 = 0;
	int nInList=0, nOutList = 0;
	int nItem = 0;

	int nNewType=0, nOldType=0;
	CString szOldGroup, szNewGroup;
	CString szIndex, szDesc, szType;

	double nTotalAmount = 0;
	double nGroup1Amount = 0;
	double nGroup2Amount =0;
	double nAmount=0;
#define GROUP1_COLOR RGB(200, 200,200)
#define GROUP2_COLOR RGB(250, 250, 250)

	

	nGroup1Amount = 0;
	nGroup2Amount = 0;



	if(m_nInvoiceNo > 0)
	{
		szWhere.Format(_T(" and hfe_invoiceno=%ld  and hfe_status in('A','P','R') "), m_nInvoiceNo);
	}

	if(pMF->GetModuleID() == _T("EM"))
	{
		szWhere.AppendFormat(_T(" and hfe_class IN('E','X')  "));
		szWhere.AppendFormat(_T(" and hfe_deptid in('C1.1','C1.2','C1.3','TYC','B5', 'KD', 'C10') "));
	}
	else
	{
		if (pMF->IsInPatient()) 
			szWhere.AppendFormat(_T(" and hfe_group <>'D0000' "));
			
		szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X', 'A') "));
		
	}

	szWhere.AppendFormat(_T(" and (hfe_category <> 'Y' or hfe_category is null) and (hfe_patpaid+hfe_patdebt) > 0 and hfe_feegroup<>'MG' "));

	
	
	szSQL.Format(_T(" SELECT hfe_typeindex,") \
_T("   hfe_type,") \
_T("   hfe_group,") \
_T("   hfe_subgroup,") \
_T("   hfe_itemid,") \
_T("   hfe_name,") \
_T("   hfe_unit,") \
_T("   hfe_hitech,") \
_T("   hfe_inlist,") \
_T("   hfe_unitprice,") \
_T("   SUM(hfe_quantity)  AS hfe_qty,") \
_T("   SUM(hfe_amount)    AS hfe_cost,") \
_T("   SUM(hfe_patpaid)   AS hfe_patpaid") \
_T(" FROM hms_fee_invoiceline_view") \
_T(" WHERE hfe_docno=%ld  and hfe_quantity > 0 %s ") \
_T(" GROUP BY hfe_typeindex,") \
_T("   hfe_type,") \
_T("   hfe_group,") \
_T("   hfe_subgroup,") \
_T("   hfe_itemid,") \
_T("   hfe_name,") \
_T("   hfe_unit,") \
_T("   hfe_hitech,") \
_T("   hfe_inlist,") \
_T("   hfe_unitprice") \
_T(" ORDER BY hfe_typeindex,") \
_T("   hfe_inlist,") \
_T("   hfe_group,") \
_T("   hfe_name,") \
_T("   hfe_unit"), m_nDocumentNo, szWhere);



	rs.ExecSQL(szSQL);
	
	m_wndList.BeginLoad();

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hfe_typeindex"), nNewType);
		if (nNewType != nOldType){
			nOldType = nNewType;
			szNewGroup.Empty();
			szOldGroup.Empty();
			nInList = nOutList = 0;
			
			
			if(nGroup2Amount > 0 && nGroup2Amount != nGroup1Amount)
			{
				szDesc.Format(_T("T\x1ED5ng nh\xF3m"));
				nItem = m_wndList.AddItems(
					_T(""), 
					szDesc, 
					_T(""),
					_T(""),
					_T(""),
					ToString(nGroup2Amount),
					NULL);
				m_wndList.SetItemText(nItem, 6, _T("group2"));
				m_wndList.SetItemBkColor(nItem, GROUP2_COLOR, FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 129, 192), FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false , true);

				
			}

			if(nGroup1Amount > 0)
			{
				szDesc.Format(_T("T\x1ED5ng (%\x64)"), nChapter);
				nItem = m_wndList.AddItems(
					_T(""), 
					szDesc, 
					_T(""),
					_T(""),
					_T(""),
					ToString(nGroup1Amount),
					NULL);
				m_wndList.SetItemText(nItem, 6, _T("group2"));
				m_wndList.SetItemBkColor(nItem, GROUP1_COLOR, FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 128, 192), FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE);
			}
			nGroup1Amount = 0;
			nGroup2Amount = 0;

			nChapter ++;
			nIndex1 = nIndex2 = 0;

			szIndex.Format(_T("%d."), nChapter);

			szSQL.Format(_T("SELECT hft_name FROM hms_fee_type WHERE hft_id = %d"), nNewType);
			rsg.ExecSQL(szSQL);
			nItem = m_wndList.AddItems(
				szIndex,
			rsg.GetValue(_T("hft_name")),			
			NULL);
			m_wndList.SetItemText(nItem, 6, _T("Type"));
			m_wndList.SetItemBkColor(nItem, RGB(0, 129, 192), FALSE);
			m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);

		}

		rs.GetValue(_T("hfe_group"), szNewGroup);
		if(szNewGroup.Left(2) == _T("B1") && szNewGroup != szOldGroup)
		{
			szOldGroup = szNewGroup;
			nIndex2 = 0;
			nInList = nOutList= 0;


			if(nGroup2Amount > 0)
			{
				szDesc.Format(_T("T\x1ED5ng nh\xF3m"));
				nItem = m_wndList.AddItems(
					_T(""), 
					szDesc, 
					_T(""),
					_T(""),
					_T(""),
					ToString(nGroup2Amount),
					NULL);

				m_wndList.SetItemText(nItem, 6, _T("group2"));
				m_wndList.SetItemBkColor(nItem, GROUP2_COLOR, FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 129, 192), FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false , true);
				
			}
			nGroup2Amount = 0;

			szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE hfg_id='%s'"), szNewGroup);
			rsg.ExecSQL(szSQL);
			
			nIndex1++;
			szIndex.Format(_T("%d.%d"), nChapter, nIndex1);
			nItem = m_wndList.AddItems(
				szIndex,
				rsg.GetValue(_T("hfg_name")),			
				NULL);
			m_wndList.SetItemText(nItem, 6, _T("SubGroup"));
			m_wndList.SetItemBkColor(nItem, GROUP1_COLOR, FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(0, 128, 192), FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
		}
		rs.GetValue(_T("hfe_inlist"), nInList);
		rs.GetValue(_T("hfe_type"), szType);

		if((szType == _T("D") || szType == _T("M")) &&  nInList != nOutList)
		{
			nOutList = nInList;
			szDesc.Empty();

			if(nGroup2Amount > 0 )
			{
				szDesc.Format(_T("T\x1ED5ng nh\xF3m"));
				nItem = m_wndList.AddItems(
					_T(""), 
					szDesc, 
					_T(""),
					_T(""),
					_T(""),
					ToString(nGroup2Amount),
					NULL);
				m_wndList.SetItemText(nItem, 6, _T("group2"));
				m_wndList.SetItemBkColor(nItem, GROUP2_COLOR, FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 129, 192), FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false , true);
			}

			nGroup2Amount = 0;

			if (nInList == 1){
				szDesc.Format(_T("Trong \x64\x61nh m\x1EE5\x63"));
			}
			else if(nInList == 2)
			{
				szDesc.Format(_T("Ngo\xE0i \x64\x61nh m\x1EE5\x63"));
			}
			else if(nInList == 3)
			{
				szDesc.Format(_T("Thu\x1ED1\x63 K th\x1EA3i gh\xE9p"));
			}

			nIndex1 ++;
			nIndex2 = 0;
			szIndex.Format(_T("%d.%d"), nChapter, nIndex1);
			
			nItem = m_wndList.AddItems(
				szIndex,
				szDesc,			
			NULL);
			m_wndList.SetItemText(nItem, 6, _T("SubGroup"));
			m_wndList.SetItemBkColor(nItem, GROUP1_COLOR, FALSE);
			m_wndList.SetItemTextColor(nItem, RGB(0, 128, 192), FALSE);
			m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);


		}

		nIndex2++;
		szIndex.Format(_T("%.2s%d"), _T(" "), nIndex2);
		
	
		rs.GetValue(_T("hfe_patpaid"), nAmount);
		nGroup1Amount += nAmount;
		nGroup2Amount += nAmount;
		nTotalAmount += nAmount;



		nItem = m_wndList.AddItems(
			szIndex,
			rs.GetValue(_T("hfe_name")),
			rs.GetValue(_T("hfe_unit")),
			rs.GetValue(_T("hfe_unitprice")),
			rs.GetValue(_T("hfe_qty")),
			rs.GetValue(_T("hfe_patpaid")),
			_T("item"),
			rs.GetValue(_T("hfe_itemid")),
			rs.GetValue(_T("hfe_type")),
			NULL);
		
		rs.MoveNext();
	}

	if(nGroup2Amount > 0 && nGroup2Amount != nGroup1Amount)
	{
				szDesc.Format(_T("T\x1ED5ng nh\xF3m"));
				nItem = m_wndList.AddItems(
					_T(""), 
					szDesc, 
					_T(""),
					_T(""),
					_T(""),
					ToString(nGroup2Amount),
					NULL);
				m_wndList.SetItemText(nItem, 6, _T("group2"));
				m_wndList.SetItemBkColor(nItem, GROUP2_COLOR, FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 129, 192), FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false , true);

			}

			if(nGroup1Amount > 0)
			{
				szDesc.Format(_T("T\x1ED5ng (%\x64)"), nChapter);
				nItem = m_wndList.AddItems(
					_T(""), 
					szDesc, 
					_T(""),
					_T(""),
					_T(""),
					ToString(nGroup1Amount),
					NULL);
				m_wndList.SetItemText(nItem, 6, _T("group1"));
				m_wndList.SetItemBkColor(nItem, GROUP1_COLOR, FALSE);
				m_wndList.SetItemTextColor(nItem, RGB(0, 128, 192), FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE);

			}
		if(nTotalAmount > 0)
		{
				szDesc.Format(_T("T\x1ED5ng ti\x1EC1n"));
				nItem = m_wndList.AddItems(
					_T(""), 
					szDesc, 
					_T(""),
					_T(""),
					_T(""),
					ToString(nTotalAmount),
					NULL);
				m_wndList.SetItemText(nItem, 6, _T("Total"));
				m_wndList.SetItemBkColor(nItem, RGB(0, 128, 192), FALSE);
				m_wndList.SetItemTextColor(nItem, COLOR_WHITE, FALSE);
				m_wndList.MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);

			}

		m_wndList.EndLoad();
	return 0;
}


void CHMSFeeDiscountLineDialog::OnDiscountListDblClick(){


} 
void CHMSFeeDiscountLineDialog::OnDiscountListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSFeeDiscountLineDialog::OnDiscountListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	int nSel = m_wndDiscountList.GetCurSel();
	if(nSel < 0) return 0;
	long nDisInvoiceNo = str2long(m_wndDiscountList.GetItemText(nSel, 6));
	long nInvoiceLine = str2long(m_wndDiscountList.GetItemText(nSel, 7));
	szSQL.Format(_T("HMS_FEE_DISCOUNTLINE_DEL(%ld,%ld, %ld, '%s')"), m_nDocumentNo, nDisInvoiceNo, nInvoiceLine, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("Cannot process with current status."));
		return 0;
	}
	OnListLoadData();
	OnDiscountListLoadData();
	return 0;
} 
long CHMSFeeDiscountLineDialog::OnDiscountListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	m_wndDiscountList.BeginLoad(); 
	int nCount = 0;
	int nIndex = 1;
	double nTotalAmount = 0;
	szSQL.Format(_T("SELECT * FROM hms_fee_discountline ") \
			_T("WHERE hfe_docno=%ld ORDER BY hfe_invoiceno, hfe_type, hfe_desc"), m_nDocumentNo);
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			tmpStr.Format(_T("%d"), nIndex++);
			m_wndDiscountList.AddItems(
				tmpStr, 
				rs.GetValue(_T("hfe_desc")), 
				rs.GetValue(_T("hfe_Unit")), 
				rs.GetValue(_T("hfe_qty")), 
				rs.GetValue(_T("hfe_unitprice")), 
				rs.GetValue(_T("hfe_amount")), 
				rs.GetValue(_T("hfe_invoiceno")), 
				rs.GetValue(_T("hfe_invoiceline_id")), 
				NULL);
			nTotalAmount += str2double(rs.GetValue(_T("hfe_amount")));
			rs.MoveNext();
		}

	if(nTotalAmount > 0)
	{
		nIndex = m_wndDiscountList.AddItems(
				_T(""), 
				_T("T\x1ED5ng ti\x1EC1n"), 
				_T(""), 
				_T(""), 
				_T(""), 
				ToString(nTotalAmount), 
				NULL);
		m_wndDiscountList.SetItemTextColor(nIndex, RGB(0, 0, 255), FALSE);
		m_wndDiscountList.MergeCell(nIndex, 1, nIndex, 4);
	}
	m_wndDiscountList.EndLoad(); 
	return nCount;
}


void CHMSFeeDiscountLineDialog::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(!m_wndList.GetCheck(i))
			continue;
		CString szType = m_wndList.GetItemText(i, 6);
		szType.MakeLower();
		if(szType != _T("item"))
			continue;
		AddDiscountLine(i);
	}
	OnListLoadData();
	OnDiscountListLoadData();
} 
void CHMSFeeDiscountLineDialog::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	long nLineID;
	for (int i =0; i < m_wndList.GetItemCount(); i++)
	{
		if(m_wndList.GetItemState(i, LVIS_SELECTED)&LVIS_SELECTED)
		{
			nLineID = str2long(m_wndList.GetItemText(i, 6));
			
		//	szSQL.Format(_T("DELETE FROM hms_fee_discountline WHERE hfe_docno=%ld and hfe_invoiceline_id=%ld "),
		//		m_nDocumentNo, nLineID);
		//	pMF->ExecSQL(szSQL);
			szSQL.Format(_T("HMS_FEE_DISCOUNT_DELLINE('%s', %ld, %ld) "), pMF->GetCurrentUser(), m_nDocumentNo, nLineID);
			pMF->ExecDML(szSQL);
		}
	}

	//szSQL.Format(_T("SELECT sum(hfe_amount) FROM hms_fee_discountline WHERE hfe_docno=%ld "), m_nDocumentNo);
	//rs.ExecSQL(szSQL);
	//double nAmount = rs.GetDoubleValue();
	//if(nAmount <= 0)
	//{
	//	szSQL.Format(_T("DELETE FROM hms_fee_discount WHERE hfe_docno=%ld  "), m_nDocumentNo);
	//	pMF->ExecSQL(szSQL);

	//}
	//else
	//{
	//	
	//	szSQL.Format(_T("UPDATE hms_fee_discount SET hfe_amount=%.2f WHERE hfe_docno=%ld "), nAmount, m_nDocumentNo);
	//	pMF->ExecSQL(szSQL);
	//	

	//}
	CGuiDialog::OnOK();
} 
void CHMSFeeDiscountLineDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSFeeDiscountLineDialog::OnAddHMSFeeDiscountLineDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFeeDiscountLineDialog::OnEditHMSFeeDiscountLineDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFeeDiscountLineDialog::OnDeleteHMSFeeDiscountLineDialog(){
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
 		OnCancelHMSFeeDiscountLineDialog();
 	}
	return 0;
}
int CHMSFeeDiscountLineDialog::OnSaveHMSFeeDiscountLineDialog(){
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
 		//OnHMSFeeDiscountLineDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFeeDiscountLineDialog::OnCancelHMSFeeDiscountLineDialog(){
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
int CHMSFeeDiscountLineDialog::OnHMSFeeDiscountLineDialogListLoadData(){
	return 0;
}


void CHMSFeeDiscountLineDialog::AddDiscountLine(int nLine)
{
	if(nLine < 0)
		return;

	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL;

	CDbfMap discountTbl;
	discountTbl.AddField(_T("userid"), dfText, 20);
	discountTbl.AddField(_T("patientno"), dfLong);
	discountTbl.AddField(_T("docno"), dfLong);
	discountTbl.AddField(_T("refinvoice"), dfLong);
	discountTbl.AddField(_T("objectid"), dfInteger);
	discountTbl.AddField(_T("feetype"), dfText, 1);
	discountTbl.AddField(_T("itemid"), dfText, 15);
	discountTbl.AddField(_T("desc"), dfText, 254);
	discountTbl.AddField(_T("unit"), dfText, 35);
	discountTbl.AddField(_T("unitprice"), dfDouble);
	discountTbl.AddField(_T("qty"), dfFloat);
	discountTbl.AddField(_T("amount"), dfDouble);



	FEEDISCOUNTITEM fdi;
	fdi.szType = m_wndList.GetItemText(nLine, 8);
	fdi.szItemID = m_wndList.GetItemText(nLine, 7);
	fdi.szDesc = m_wndList.GetItemText(nLine, 1);
	fdi.szUnit = m_wndList.GetItemText(nLine, 2);
	fdi.szUnitPrice = m_wndList.GetItemText(nLine, 3);
	fdi.szQty = m_wndList.GetItemText(nLine, 4);
	fdi.szAmount = m_wndList.GetItemText(nLine, 5);
	if(str2float(fdi.szAmount) <= 0)
		return;
	

	discountTbl.SetValue(_T("userid"), pMF->GetCurrentUser());
	discountTbl.SetValue(_T("patientno"), m_nPatientNo);
	discountTbl.SetValue(_T("docno"), m_nDocumentNo);
	discountTbl.SetValue(_T("refinvoice"), m_nInvoiceNo);
	discountTbl.SetValue(_T("objectid"), m_nObjectID);
	discountTbl.SetValue(_T("feetype"), fdi.szType);
	discountTbl.SetValue(_T("itemid"), fdi.szItemID);
	discountTbl.SetValue(_T("desc"), fdi.szDesc);
	discountTbl.SetValue(_T("unit"), fdi.szUnit);
	discountTbl.SetValue(_T("unitprice"), fdi.szUnitPrice);
	discountTbl.SetValue(_T("qty"), fdi.szQty);
	discountTbl.SetValue(_T("amount"), fdi.szAmount);

	szSQL.Format(_T("HMS_FEE_DISCOUNT_CREATELINE(%s) "), discountTbl.FormatSQL());
	str2long(pMF->ExecDML(szSQL));


}