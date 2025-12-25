#include "HMSCancerTreatDiagItem.h"
#include "MainFrm.h"
static long _OnTreatDiagItemListLoadDataFnc(CWnd *pWnd){
	return ((CHMSCancerTreatDiagItem*)pWnd)->OnTreatDiagItemListLoadData();
} 
static void _OnTreatDiagItemListDblClickFnc(CWnd *pWnd){
	((CHMSCancerTreatDiagItem*)pWnd)->OnTreatDiagItemListDblClick();
} 
static void _OnTreatDiagItemListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSCancerTreatDiagItem*)pWnd)->OnTreatDiagItemListSelectChange(nOldItem, nNewItem);
} 
static int _OnTreatDiagItemListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItem*)pWnd)->OnTreatDiagItemListDeleteItem();
} 
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagItem *pVw = (CHMSCancerTreatDiagItem *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagItem *pVw = (CHMSCancerTreatDiagItem *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSCancerTreatDiagItem *pVw = (CHMSCancerTreatDiagItem *)pWnd;
	pVw->OnDeleteSelect();
} 
static int _OnAddHMSCancerTreatDiagItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItem*)pWnd)->OnAddHMSCancerTreatDiagItem();
} 
static int _OnEditHMSCancerTreatDiagItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItem*)pWnd)->OnEditHMSCancerTreatDiagItem();
} 
static int _OnDeleteHMSCancerTreatDiagItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItem*)pWnd)->OnDeleteHMSCancerTreatDiagItem();
} 
static int _OnSaveHMSCancerTreatDiagItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItem*)pWnd)->OnSaveHMSCancerTreatDiagItem();
} 
static int _OnCancelHMSCancerTreatDiagItemFnc(CWnd *pWnd){
	 return ((CHMSCancerTreatDiagItem*)pWnd)->OnCancelHMSCancerTreatDiagItem();
} 
CHMSCancerTreatDiagItem::CHMSCancerTreatDiagItem(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCancerTreatDiagItem::~CHMSCancerTreatDiagItem(){
}
void CHMSCancerTreatDiagItem::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 1005, 305);
	m_wndTreatDiagItemList.Create(this,10, 30, 1000, 300); 
	m_wndAdd.Create(this, _T("&Add"), 750, 310, 830, 335);
	m_wndEdit.Create(this, _T("&Edit"), 835, 310, 915, 335);
	m_wndDelete.Create(this, _T("&Delete"), 920, 310, 1000, 335);

}
void CHMSCancerTreatDiagItem::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();


	m_wndTreatDiagItemList.InsertColumn(0, _T("STT"), CFMT_NUMBER, 50);
	m_wndTreatDiagItemList.InsertColumn(1, _T("Mã thuốc"), CFMT_TEXT, 80);
	m_wndTreatDiagItemList.InsertColumn(2, _T("Tên thuốc"), CFMT_TEXT, 200);
	m_wndTreatDiagItemList.InsertColumn(3, _T("Hàm lượng"), CFMT_TEXT, 200);
	m_wndTreatDiagItemList.InsertColumn(4, _T("Đơn vị"), CFMT_TEXT, 60);
	m_wndTreatDiagItemList.InsertColumn(5, _T("Số lượng"), CFMT_NUMBER, 60);
	m_wndTreatDiagItemList.InsertColumn(6, _T("Nơi sản xuất"), CFMT_TEXT, 120);
	m_wndTreatDiagItemList.InsertColumn(7, _T("Đối tượng"), CFMT_TEXT, 90);
	m_wndTreatDiagItemList.InsertColumn(8, _T("Kho"), CFMT_TEXT, 120);

}
void CHMSCancerTreatDiagItem::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTreatDiagItemList.SetEvent(WE_SELCHANGE, _OnTreatDiagItemListSelectChangeFnc);
	m_wndTreatDiagItemList.SetEvent(WE_LOADDATA, _OnTreatDiagItemListLoadDataFnc);
	m_wndTreatDiagItemList.SetEvent(WE_DBLCLICK, _OnTreatDiagItemListDblClickFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	OnTreatDiagItemListLoadData();

}
void CHMSCancerTreatDiagItem::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSCancerTreatDiagItem::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CHMSCancerTreatDiagItem::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSCancerTreatDiagItem::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSCancerTreatDiagItem::SetDefaultValues(){


}
int CHMSCancerTreatDiagItem::SetMode(int nMode){
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
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSCancerTreatDiagItem::OnTreatDiagItemListDblClick(){
	
} 
void CHMSCancerTreatDiagItem::OnTreatDiagItemListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(nNewItem < 0)
		return;

	EnableButtons(TRUE, 0, 1, 2, -1);
	m_szProductID = m_wndTreatDiagItemList.GetItemText(nNewItem, 1);
} 
int CHMSCancerTreatDiagItem::OnTreatDiagItemListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSCancerTreatDiagItem::OnTreatDiagItemListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nIdx = 1;
	m_wndTreatDiagItemList.BeginLoad(); 
	szSQL.Format(_T("   SELECT ") \
		_T("   hcti_cancer_treatdiag_id AS id,") \
		_T("   hcti_cancer_treatdiagln_id AS line,") \
		_T("   hcti_product_id AS mathuoc,") \
		_T("   (SELECT mp_name FROM m_product WHERE mp_product_id = hcti_product_id) AS tenthuoc,") \
		_T("   hcti_qty AS soluong,") \
		_T("   CASE WHEN hcti_object_type = 'I' THEN 'Bảo hiểm' WHEN hcti_object_type = 'S' THEN 'Dịch vụ' WHEN hcti_object_type = 'D' THEN 'Chính sách' END AS doituong,") \
		_T("   (SELECT msl_name AS name FROM m_storagelist WHERE msl_storage_id = hcti_storage_id) AS kho,") \
		_T("   get_uomname(mp_uom_id) AS donvi,") \
		_T("   mp_name2 AS hamluong,") \
		_T("   get_manufacturename(mp_manufacture_id) AS sanxuat") \
		_T("   FROM hms_cancer_treatdiagitem") \
		_T("   LEFT JOIN m_product") \
		_T("   ON(mp_product_id = hcti_product_id)") \
		_T("   WHERE hcti_cancer_treatdiag_id = '%s' AND hcti_cancer_treatdiagln_id = '%s'") \
		_T("   ORDER BY hcti_product_id"), m_szOrderID, m_szLine);
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTreatDiagItemList.AddItems(
			int2str(nIdx++), 
			rs.GetValue(_T("MaThuoc")), 
			rs.GetValue(_T("TenThuoc")),
			rs.GetValue(_T("HamLuong")), 
			rs.GetValue(_T("DonVi")), 
			rs.GetValue(_T("SoLuong")), 
			rs.GetValue(_T("SanXuat")), 
			rs.GetValue(_T("DoiTuong")), 
			rs.GetValue(_T("Kho")), 
			rs.GetValue(_T("ID")),
			rs.GetValue(_T("Line")),NULL);
		rs.MoveNext();
	}
	m_wndTreatDiagItemList.EndLoad(); 
	EnableButtons(TRUE, 0, -1);
	return nCount;
}
#include "HMSCancerTreatDiagItemLn.h"
void CHMSCancerTreatDiagItem::OnAddSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CHMSCancerTreatDiagItemLn dlg(this);
	dlg.m_szOrderID = m_szOrderID;
	dlg.m_szLine = m_szLine;
	dlg.m_nSoLuongMoi = m_nSoLuong;
	if(dlg.DoModal() == IDOK)
	{
		//OnTreatDiagItemListLoadData();
		//OnAddSelect();
	}
} 
void CHMSCancerTreatDiagItem::OnEditSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndTreatDiagItemList.GetCurSel();
	if(nSel < 0)
		return;

	CHMSCancerTreatDiagItemLn dlg(this);
	dlg.m_szOrderID = m_szOrderID;
	dlg.m_szLine = m_szLine;
	dlg.m_szTenThuocKey = m_szProductID;
	dlg.m_nSoLuongMoi = m_nSoLuong;
	if(dlg.DoModal() == IDOK)
	{
		OnTreatDiagItemListLoadData();
	}
} 
void CHMSCancerTreatDiagItem::OnDeleteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSCancerTreatDiagItem();
} 
int CHMSCancerTreatDiagItem::OnAddHMSCancerTreatDiagItem(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCancerTreatDiagItem::OnEditHMSCancerTreatDiagItem(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCancerTreatDiagItem::OnDeleteHMSCancerTreatDiagItem(){
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	int nTemp = 0;

	int nSel = m_wndTreatDiagItemList.GetCurSel();
	if(nSel < 0)
		return 0;

	if(m_szOrderID.IsEmpty() || m_szLine.IsEmpty() || m_szProductID.IsEmpty())
		return 0;

	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
		return -1;

	szSQL.Format(_T(" SELECT COUNT(*) AS pcount FROM hms_cancer_orderitem") \
		_T(" WHERE hcoi_cancer_order_id = '%s'") \
		_T(" AND hcoi_cancer_orderline_id = '%s'") \
		_T(" AND hcoi_product_id = '%s'"), m_szOrderID, m_szLine, m_szProductID);

	rs.ExecSQL(szSQL);
	rs.GetValue(_T("pcount"), nTemp);

	if(nTemp > 0)
		{
			_msg(_T("Thuốc đã được kê không thể xóa"));
			return 0;
		}
	else
		{
			szSQL.Format(_T("DELETE FROM hms_cancer_treatdiagitem WHERE hcti_cancer_treatdiag_id = '%s' AND hcti_cancer_treatdiagln_id = '%s' AND hcti_product_id = '%s'"), m_szOrderID, m_szLine, m_szProductID);
			int ret = pMF->ExecSQL(szSQL);
			if(ret >= 0){
				SetMode(VM_NONE);
				OnTreatDiagItemListLoadData();
			}
			return 0;
		}
}
int CHMSCancerTreatDiagItem::OnSaveHMSCancerTreatDiagItem(){
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
 		//OnHMSCancerTreatDiagItemListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCancerTreatDiagItem::OnCancelHMSCancerTreatDiagItem(){
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
int CHMSCancerTreatDiagItem::OnHMSCancerTreatDiagItemListLoadData(){
	return 0;
}
