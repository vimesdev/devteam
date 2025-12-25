#include "PMSContractorPurchargeList.h"
#include "MainFrame_E10.h"
/*static void _OnFromdateChangeFnc(CWnd *pWnd){
	((CPMSContractorPurchargeList *)pWnd)->OnFromdateChange();
} */
/*static void _OnFromdateSetfocusFnc(CWnd *pWnd){
	((CPMSContractorPurchargeList *)pWnd)->OnFromdateSetfocus();} */ 
/*static void _OnFromdateKillfocusFnc(CWnd *pWnd){
	((CPMSContractorPurchargeList *)pWnd)->OnFromdateKillfocus();
} */
static int _OnFromdateCheckValueFnc(CWnd *pWnd){
	return ((CPMSContractorPurchargeList *)pWnd)->OnFromdateCheckValue();
} 
static void _OnLoadSelectFnc(CWnd *pWnd){
	CPMSContractorPurchargeList *pVw = (CPMSContractorPurchargeList *)pWnd;
	pVw->OnLoadSelect();
} 
static long _OnListPurcharLoadDataFnc(CWnd *pWnd){
	return ((CPMSContractorPurchargeList*)pWnd)->OnListPurcharLoadData();
} 
static void _OnListPurcharDblClickFnc(CWnd *pWnd){
	((CPMSContractorPurchargeList*)pWnd)->OnListPurcharDblClick();
} 
static void _OnListPurcharSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSContractorPurchargeList*)pWnd)->OnListPurcharSelectChange(nOldItem, nNewItem);
} 
static int _OnListPurcharDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSContractorPurchargeList*)pWnd)->OnListPurcharDeleteItem();
}
static int _OnListUpdatePriceFnc(CWnd *pWnd){
	 return ((CPMSContractorPurchargeList*)pWnd)->OnListUpdatePrice();
} 
static long _OnListAppLoadDataFnc(CWnd *pWnd){
	return ((CPMSContractorPurchargeList*)pWnd)->OnListAppLoadData();
} 
static void _OnListAppDblClickFnc(CWnd *pWnd){
	((CPMSContractorPurchargeList*)pWnd)->OnListAppDblClick();
} 
static void _OnListAppSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CPMSContractorPurchargeList*)pWnd)->OnListAppSelectChange(nOldItem, nNewItem);
} 
static int _OnListAppDeleteItemFnc(CWnd *pWnd){
	 return ((CPMSContractorPurchargeList*)pWnd)->OnListAppDeleteItem();
} 
static void _OnApproSelectFnc(CWnd *pWnd){
	CPMSContractorPurchargeList *pVw = (CPMSContractorPurchargeList *)pWnd;
	pVw->OnApproSelect();
} 
static void _OnUnAppSelectFnc(CWnd *pWnd){
	CPMSContractorPurchargeList *pVw = (CPMSContractorPurchargeList *)pWnd;
	pVw->OnUnAppSelect();
} 
static void _OnUnContractorSelectFnc(CWnd *pWnd){
	 ((CPMSContractorPurchargeList*)pWnd)->OnUnContractorSelect();
}
static void _OnNotPriceSelectFnc(CWnd *pWnd){
	 ((CPMSContractorPurchargeList*)pWnd)->OnNotPriceSelect();
}
static void _OnExitSelectFnc(CWnd *pWnd){
	CPMSContractorPurchargeList *pVw = (CPMSContractorPurchargeList *)pWnd;
	pVw->OnExitSelect();
} 
static int _OnAddPMSContractorPurchargeListFnc(CWnd *pWnd){
	 return ((CPMSContractorPurchargeList*)pWnd)->OnAddPMSContractorPurchargeList();
} 
static int _OnEditPMSContractorPurchargeListFnc(CWnd *pWnd){
	 return ((CPMSContractorPurchargeList*)pWnd)->OnEditPMSContractorPurchargeList();
} 
static int _OnDeletePMSContractorPurchargeListFnc(CWnd *pWnd){
	 return ((CPMSContractorPurchargeList*)pWnd)->OnDeletePMSContractorPurchargeList();
} 
static int _OnSavePMSContractorPurchargeListFnc(CWnd *pWnd){
	 return ((CPMSContractorPurchargeList*)pWnd)->OnSavePMSContractorPurchargeList();
} 
static int _OnCancelPMSContractorPurchargeListFnc(CWnd *pWnd){
	 return ((CPMSContractorPurchargeList*)pWnd)->OnCancelPMSContractorPurchargeList();
} 
CPMSContractorPurchargeList::CPMSContractorPurchargeList(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 575;
	m_nDlgHeight = 580;
	SetDefaultValues();
}
CPMSContractorPurchargeList::~CPMSContractorPurchargeList(){
}
void CPMSContractorPurchargeList::OnCreateComponents(){
	m_wndImformationpurchare.Create(this, _T("Imformation purchare"), 5, 5, 565, 280);
	m_wndPurcharDateLabel.Create(this, _T("Purchar Date"), 10, 30, 90, 55);
	m_wndFromdate.Create(this,95, 30, 175, 55); 
	m_wndLoad.Create(this, _T("&Load"), 480, 30, 560, 55);
	m_wndListPurchar.Create(this,10, 60, 560, 275); 
	m_wndListApp.Create(this,10, 315, 560, 540); 
	m_wndAppro.Create(this, _T("&Appro"), 395, 285, 475, 310);
	m_wndUnApp.Create(this, _T("&UnApp"), 480, 285, 560, 310);
	m_wndUnContractor.Create(this, _T("Un Contractor"), 180, 30, 315, 55);
	m_wndNotPrice.Create(this, _T("Not Price"), 340, 30, 420, 55);
	m_wndExit.Create(this, _T("&Exit"), 480, 545, 560, 570);

}
void CPMSContractorPurchargeList::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndFromdate.SetMax(CDate(pMF->GetSysDate()));
	m_wndFromdate.SetCheckValue(true);


	m_wndListPurchar.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndListPurchar.InsertColumn(1, _T("Invoice"), CFMT_TEXT, 100);
	m_wndListPurchar.InsertColumn(2, _T("Insprice"), CFMT_MONEY, 70);
	m_wndListPurchar.InsertColumn(3, _T("Imp Date"), CFMT_TEXT, 70);
	m_wndListPurchar.InsertColumn(4, _T("sitemid"), CFMT_TEXT, 70);
	m_wndListPurchar.InsertColumn(5, _T("Regcode"), CFMT_TEXT, 70);
	m_wndListPurchar.InsertColumn(6, _T("Qty"), CFMT_NUMBER, 70);
	m_wndListPurchar.SetCheckBox(true);


	m_wndListApp.InsertColumn(0, _T("STT"), CFMT_TEXT, 30);
	m_wndListApp.InsertColumn(1, _T("Invoiceno"), CFMT_TEXT, 100);
	m_wndListApp.InsertColumn(2, _T("Insprice"), CFMT_MONEY, 70);
	m_wndListApp.InsertColumn(3, _T("imp date"), CFMT_TEXT,70);
	m_wndListApp.InsertColumn(4, _T("sitem"), CFMT_TEXT, 70);
	m_wndListApp.InsertColumn(5, _T("RegCode"), CFMT_TEXT, 70);
	m_wndListApp.InsertColumn(6, _T("Qty"), CFMT_NUMBER, 70);
	m_wndListApp.SetCheckBox(true);

}
void CPMSContractorPurchargeList::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
	//m_wndFromdate.SetEvent(WE_CHANGE, _OnFromdateChangeFnc);
	//m_wndFromdate.SetEvent(WE_SETFOCUS, _OnFromdateSetfocusFnc);
	//m_wndFromdate.SetEvent(WE_KILLFOCUS, _OnFromdateKillfocusFnc);
	m_wndFromdate.SetEvent(WE_CHECKVALUE, _OnFromdateCheckValueFnc);
	m_wndLoad.SetEvent(WE_CLICK, _OnLoadSelectFnc);
	m_wndListPurchar.SetEvent(WE_SELCHANGE, _OnListPurcharSelectChangeFnc);
	m_wndListPurchar.SetEvent(WE_LOADDATA, _OnListPurcharLoadDataFnc);
	m_wndListPurchar.SetEvent(WE_DBLCLICK, _OnListPurcharDblClickFnc);
	//m_wndListPurchar.AddEvent(1, _T("Delete"), _OnListPurcharDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndListPurchar.AddEvent(2, _T("Update Price"), _OnListUpdatePriceFnc, 0, 0, 0);
	
	m_wndListApp.SetEvent(WE_SELCHANGE, _OnListAppSelectChangeFnc);
	m_wndListApp.SetEvent(WE_LOADDATA, _OnListAppLoadDataFnc);
	m_wndListApp.SetEvent(WE_DBLCLICK, _OnListAppDblClickFnc);
	m_wndListApp.AddEvent(1, _T("Delete"), _OnListAppDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndAppro.SetEvent(WE_CLICK, _OnApproSelectFnc);
	m_wndUnApp.SetEvent(WE_CLICK, _OnUnAppSelectFnc);
	m_wndUnContractor.SetEvent(WE_CLICK, _OnUnContractorSelectFnc);
	m_wndNotPrice.SetEvent(WE_CLICK, _OnNotPriceSelectFnc);
	m_wndExit.SetEvent(WE_CLICK, _OnExitSelectFnc);
	SetMode(VM_VIEW);
	OnListPurcharLoadData();
	OnListAppLoadData();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("select pmc_unitprice from pms_contractorlist where pmc_uid=%d "),m_nID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("pmc_unitprice"),m_nInsprice);
	

}
void CPMSContractorPurchargeList::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromdate.GetDlgCtrlID(), m_szFromdate);
	DDX_Check(pDX, m_wndUnContractor.GetDlgCtrlID(), m_bUnContractor);
	DDX_Check(pDX, m_wndNotPrice.GetDlgCtrlID(), m_bNotPrice);

}

void CPMSContractorPurchargeList::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMSContractorPurchargeList::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMSContractorPurchargeList::SetDefaultValues(){

	m_szFromdate.Empty();
	m_bUnContractor=FALSE;
	m_bNotPrice=FALSE;

}
int CPMSContractorPurchargeList::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
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
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0,1,2,3, 4, -1);
			m_szFromdate=_T("2015/01/01");
			//m_szFromdate=pMF->GetSysDate();
			//_msg(_T("%s"),m_szFromdate);
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
/*void CPMSContractorPurchargeList::OnFromdateChange(){
	
} */
/*void CPMSContractorPurchargeList::OnFromdateSetfocus(){
	
} */
/*void CPMSContractorPurchargeList::OnFromdateKillfocus(){
	
} */
int CPMSContractorPurchargeList::OnFromdateCheckValue(){
	OnListPurcharLoadData();
	return 0;
} 
void CPMSContractorPurchargeList::OnLoadSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMSContractorPurchargeList::OnListPurcharDblClick(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSitemid,szPrice;
	int nItem =m_wndListPurchar.GetCurSel();
	 szSitemid=m_wndListPurchar.GetItemText(nItem,4);
	 szPrice= m_wndListPurchar.GetItemText(nItem,2);

	int nCount= OnAddUIDToStockItems(ToLong(szSitemid));
	if(nCount >0 )
	{	
		OnListPurcharLoadData();
		OnListAppLoadData();
	}
	else{
		_msg(_T("Khong dung gia thau"));
	}


	
} 
void CPMSContractorPurchargeList::OnListPurcharSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSContractorPurchargeList::OnListPurcharDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	 return 0;
} 
long CPMSContractorPurchargeList::OnListPurcharLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString szSQL,tmpStr,szWhere;
	szWhere.Format(_T("and mpi_saleprice2=%3.f"),m_nInsprice);
	if(m_bNotPrice==TRUE)
		szWhere.Empty();
	m_wndListPurchar.DeleteAllItems();
	m_wndListPurchar.BeginLoad();
	szSQL.Format(_T("select po_invoiceno as invoiceno,to_char(po_acctdate,'DD-MM-YYYY') as impdate,   ") \
				 _T("			mpi_product_item_id as sitemid,  ") \
				 _T("			mpi_saleprice2 as insprice,'' as regcode, pol_qtyimport as qty  ") \
				 _T("			from purchase_order  ") \
				 _T("			LEFT JOIN purchase_orderline  ON (po_purchase_order_id=pol_purchase_order_id)   ") \
				 _T("			LEFT JOIN m_product_item ON (mpi_product_item_id=pol_product_item_id)   ") \
				 _T("			WHERE mpi_product_id=%ld and mpi_productextra_id =0 %s ") \
					_T("		ORDER BY sitemid "),m_nProductID,szWhere);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	int nIndex=1;
	while(!rs.IsEOF()){ 
		tmpStr.Format(_T("%d"),nIndex++);
		m_wndListPurchar.AddItems(
			tmpStr, 
			rs.GetValue(_T("invoiceno")), 
			rs.GetValue(_T("insprice")), 
			rs.GetValue(_T("ImpDate")), 
			rs.GetValue(_T("sitemid")), 
			rs.GetValue(_T("Regcode")),
			rs.GetValue(_T("Qty")),
			NULL);
		rs.MoveNext();
	}
	m_wndListPurchar.EndLoad(); 
	return nCount;

}
void CPMSContractorPurchargeList::OnListAppDblClick(){
	
} 
void CPMSContractorPurchargeList::OnListAppSelectChange(int nOldItem, int nNewItem){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSContractorPurchargeList::OnListAppDeleteItem(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nItem=m_wndListApp.GetCurSel();
	int nSitem =	ToInt(m_wndListApp.GetItemText(nItem,4));
	int nCount = OnUnAppSitems(nSitem);
	OnListAppLoadData();
	OnListPurcharLoadData();
	 return 0;
} 
long CPMSContractorPurchargeList::OnListAppLoadData(){

	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndListApp.BeginLoad();

	szSQL.Format(_T("select po_invoiceno as invoiceno,to_char(po_acctdate,'DD-MM-YYYY') as impdate,   ") \
				 _T("			mpi_product_item_id as sitemid,  ") \
				 _T("			mpi_saleprice2 as insprice,'' as regcode, pol_qtyimport as qty  ") \
				 _T("			from purchase_order  ") \
				 _T("			LEFT JOIN purchase_orderline  ON (po_purchase_order_id=pol_purchase_order_id)   ") \
				 _T("			LEFT JOIN m_product_item ON (mpi_product_item_id=pol_product_item_id)   ") \
				 _T("			WHERE  mpi_productextra_id =%ld ") \
					_T("		ORDER BY sitemid "),m_nID);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndListApp.AddItems(
			rs.GetValue(_T("STT")), 
			rs.GetValue(_T("Invoiceno")), 
			rs.GetValue(_T("Insprice")), 
			rs.GetValue(_T("impdate")), 
			rs.GetValue(_T("sitemid")), 
			rs.GetValue(_T("RegCode")), 
			rs.GetValue(_T("Qty")), 
			NULL);
		rs.MoveNext();
	}
	m_wndListApp.EndLoad(); 
	return nCount;

}
void CPMSContractorPurchargeList::OnApproSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nTmp=0;
	for(int i=0; i< m_wndListPurchar.GetItemCount();i++)
	{
		if(m_wndListPurchar.GetCheck(i))
		{
			nTmp=OnAddUIDToStockItems(ToLong(m_wndListPurchar.GetItemText(i,4)));
		}
	}
	
} 
void CPMSContractorPurchargeList::OnUnAppSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	int nTmp=0;
	for(int i=0; i< m_wndListApp.GetItemCount();i++)
	{
		if(m_wndListApp.GetCheck(i))
		{
			nTmp=OnUnAppSitems(ToLong(m_wndListApp.GetItemText(i,4)));
		}
	}
	
} 
	void CPMSContractorPurchargeList::OnUnContractorSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
}
	void CPMSContractorPurchargeList::OnNotPriceSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	OnListPurcharLoadData();
	
}
void CPMSContractorPurchargeList::OnExitSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
int CPMSContractorPurchargeList::OnAddPMSContractorPurchargeList(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMSContractorPurchargeList::OnEditPMSContractorPurchargeList(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMSContractorPurchargeList::OnDeletePMSContractorPurchargeList(){
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
 		OnCancelPMSContractorPurchargeList();
 	}
	return 0;
}
int CPMSContractorPurchargeList::OnSavePMSContractorPurchargeList(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
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
 		//OnPMSContractorPurchargeListListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMSContractorPurchargeList::OnCancelPMSContractorPurchargeList(){
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
int CPMSContractorPurchargeList::OnPMSContractorPurchargeListListLoadData(){
	return 0;
}
int CPMSContractorPurchargeList::OnAddUIDToStockItems(long szSitems){
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT mpi_saleprice2  as insprice from m_product_item where mpi_product_item_id=%ld"),szSitems);
	double n_Price=0;
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("insprice"),n_Price);

	/*if((m_nInsprice -n_Price) != 0 )
	{
		return 0;
	}*/
	szSQL.Format(_T("UPDATE m_product_item SET mpi_productextra_id=%ld where mpi_product_item_id=%ld"),m_nID,szSitems);
	int nCount=pMF->ExecSQL(szSQL);

	return nCount;

}
int CPMSContractorPurchargeList::OnUnAppSitems(long nItems){
	
	CMainFrame_E10 *pMF = (CMainFrame_E10 *)AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("UPDATE m_product_item SET mpi_productextra_id=0 where mpi_product_item_id=%ld"),nItems);
	int nCount=pMF->ExecSQL(szSQL);

	return nCount;
}
int CPMSContractorPurchargeList::OnListUpdatePrice(){
    
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString szSitemid,szPrice;
	int nItem =m_wndListPurchar.GetCurSel();
	 szSitemid=m_wndListPurchar.GetItemText(nItem,4);

	
	CString szSQL;
	szSQL.Format(_T("update pms_stockitems ") \
				_T("	set pmsi_insprice=(select pmc_unitprice from pms_contractorlist where pmc_uid=%d and pmc_unitprice <>0) ") \
				_T("	where pmsi_id=%s "),m_nID,szSitemid);
	int nCount=pMF->ExecSQL(szSQL);
	
	return nCount;
}