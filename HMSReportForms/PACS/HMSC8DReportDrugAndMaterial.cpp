#include "stdafx.h"
#include "HMSC8DReportDrugAndMaterial.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "StringToken.h"
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSC8DReportDrugAndMaterial *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSC8DReportDrugAndMaterial *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSC8DReportDrugAndMaterial *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSC8DReportDrugAndMaterial *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSC8DReportDrugAndMaterial *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSC8DReportDrugAndMaterial *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSC8DReportDrugAndMaterial *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSC8DReportDrugAndMaterial *)pWnd)->OnToDateCheckValue();
} 
static void _OnStorageSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSC8DReportDrugAndMaterial* )pWnd)->OnStorageSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStorageSelendokFnc(CWnd *pWnd){
	((CHMSC8DReportDrugAndMaterial *)pWnd)->OnStorageSelendok();
}
/*static void _OnStorageSetfocusFnc(CWnd *pWnd){
	((CHMSC8DReportDrugAndMaterial *)pWnd)->OnStorageKillfocus();
}*/
/*static void _OnStorageKillfocusFnc(CWnd *pWnd){
	((CHMSC8DReportDrugAndMaterial *)pWnd)->OnStorageKillfocus();
}*/
static long _OnStorageLoadDataFnc(CWnd *pWnd){
	return ((CHMSC8DReportDrugAndMaterial *)pWnd)->OnStorageLoadData();
}
/*static void _OnStorageAddNewFnc(CWnd *pWnd){
	((CHMSC8DReportDrugAndMaterial *)pWnd)->OnStorageAddNew();
}*/
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSC8DReportDrugAndMaterial *pVw = (CHMSC8DReportDrugAndMaterial *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSC8DReportDrugAndMaterial *pVw = (CHMSC8DReportDrugAndMaterial *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnAddHMSC8DReportDrugAndMaterialFnc(CWnd *pWnd){
	 return ((CHMSC8DReportDrugAndMaterial*)pWnd)->OnAddHMSC8DReportDrugAndMaterial();
} 
static int _OnEditHMSC8DReportDrugAndMaterialFnc(CWnd *pWnd){
	 return ((CHMSC8DReportDrugAndMaterial*)pWnd)->OnEditHMSC8DReportDrugAndMaterial();
} 
static int _OnDeleteHMSC8DReportDrugAndMaterialFnc(CWnd *pWnd){
	 return ((CHMSC8DReportDrugAndMaterial*)pWnd)->OnDeleteHMSC8DReportDrugAndMaterial();
} 
static int _OnSaveHMSC8DReportDrugAndMaterialFnc(CWnd *pWnd){
	 return ((CHMSC8DReportDrugAndMaterial*)pWnd)->OnSaveHMSC8DReportDrugAndMaterial();
} 
static int _OnCancelHMSC8DReportDrugAndMaterialFnc(CWnd *pWnd){
	 return ((CHMSC8DReportDrugAndMaterial*)pWnd)->OnCancelHMSC8DReportDrugAndMaterial();
} 
CHMSC8DReportDrugAndMaterial::CHMSC8DReportDrugAndMaterial(CWnd *pParent){

	m_nDlgWidth = 440;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CHMSC8DReportDrugAndMaterial::~CHMSC8DReportDrugAndMaterial(){
}
void CHMSC8DReportDrugAndMaterial::OnCreateComponents(){
	m_wndDK.Create(this, _T("Dk"), 5, 5, 430, 90);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 
	m_wndStorageLabel.Create(this, _T("Storage"), 10, 60, 90, 85);
	m_wndStorage.Create(this,95, 60, 425, 85); 
	m_wndPrint.Create(this, _T("&Print"), 260, 95, 340, 120);
	m_wndExport.Create(this, _T("&Export"), 345, 95, 425, 120);

}
void CHMSC8DReportDrugAndMaterial::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndStorage.SetCheckValue(true);
	m_wndStorage.LimitText(35);


	m_wndStorage.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStorage.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSC8DReportDrugAndMaterial::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_wndStorage.SetEvent(WE_SELENDOK, _OnStorageSelendokFnc);
	//m_wndStorage.SetEvent(WE_SETFOCUS, _OnStorageSetfocusFnc);
	//m_wndStorage.SetEvent(WE_KILLFOCUS, _OnStorageKillfocusFnc);
	m_wndStorage.SetEvent(WE_SELCHANGE, _OnStorageSelectChangeFnc);
	m_wndStorage.SetEvent(WE_LOADDATA, _OnStorageLoadDataFnc);
	//m_wndStorage.SetEvent(WE_ADDNEW, _OnStorageAddNewFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSC8DReportDrugAndMaterialFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSC8DReportDrugAndMaterialFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSC8DReportDrugAndMaterialFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSC8DReportDrugAndMaterialFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSC8DReportDrugAndMaterialFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_EDIT);

}
void CHMSC8DReportDrugAndMaterial::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndStorage.GetDlgCtrlID(), m_szStorageKey);

}
void CHMSC8DReportDrugAndMaterial::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("Storage")] =  m_szStorageKey;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("Storage")].GetValue(m_szStorageKey);
	}

}
void CHMSC8DReportDrugAndMaterial::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSC8DReportDrugAndMaterial::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSC8DReportDrugAndMaterial::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();
	m_szStorageKey.Empty();

}
int CHMSC8DReportDrugAndMaterial::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
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
			m_szFromDate = pMF->GetSysDate() + _T(" 00:00");
			m_szToDate = pMF->GetSysDate() + _T(" 23:59");
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
/*void CHMSC8DReportDrugAndMaterial::OnFromDateChange(){
	
} */
/*void CHMSC8DReportDrugAndMaterial::OnFromDateSetfocus(){
	
} */
/*void CHMSC8DReportDrugAndMaterial::OnFromDateKillfocus(){
	
} */
int CHMSC8DReportDrugAndMaterial::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSC8DReportDrugAndMaterial::OnToDateChange(){
	
} */
/*void CHMSC8DReportDrugAndMaterial::OnToDateSetfocus(){
	
} */
/*void CHMSC8DReportDrugAndMaterial::OnToDateKillfocus(){
	
} */
int CHMSC8DReportDrugAndMaterial::OnToDateCheckValue(){
	return 0;
} 
void CHMSC8DReportDrugAndMaterial::OnStorageSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSC8DReportDrugAndMaterial::OnStorageSelendok(){
	 
}
/*void CHMSC8DReportDrugAndMaterial::OnStorageSetfocus(){
	
}*/
/*void CHMSC8DReportDrugAndMaterial::OnStorageKillfocus(){
	
}*/
long CHMSC8DReportDrugAndMaterial::OnStorageLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStorage.IsSearchKey() && !m_szStorageKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStorageKey);
	}
	m_wndStorage.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select msl_storage_id as id, msl_name as name  ") \
				_T("	from m_storagelist  where msl_dept_id  ='C8-D' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStorage.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;

}
/*void CHMSC8DReportDrugAndMaterial::OnStorageAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
void CHMSC8DReportDrugAndMaterial::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSC8DReportDrugAndMaterial::OnExportSelect(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
		UpdateData(true);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString tmpStr;
	BeginWaitCursor();
	CExcel xls;
	int nCol=0;
	int nRow=0;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetCellMergedColumns(0, 0, 5);
	xls.SetCellMergedColumns(0, 1, 5);
	xls.SetCellMergedColumns(0, 2, 10);
	xls.SetCellMergedColumns(0, 3, 10);
	xls.SetCellText(0, 0, pMF->m_szHealthService, 4098, true);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, 4098, true);
	//TODO: Write Excel Name
	tmpStr = _T("BÁO CÁO SỬ DỤNG THUỐC - VẬT TƯ");
	xls.SetCellText(0, 2, tmpStr, 4098, true);
	tmpStr.Format(_T("Từ %s đến %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss),CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	
	xls.SetCellText(0, 3, tmpStr, 4098, true);
	//TODO: Write Column Header
	nRow = 4;
	//Fixed col

	/*xls.SetCellMergedRows(0, nRow, 2);
	xls.SetCellMergedRows(1, nRow, 2);
	xls.SetCellMergedRows(2, nRow, 2);
	xls.SetCellMergedRows(11, nRow, 2);
	xls.SetCellMergedRows(12, nRow, 2);
	xls.SetCellMergedRows(13, nRow, 2);
	xls.SetCellMergedRows(14, nRow, 2);
	xls.SetCellMergedRows(15, nRow, 2);
	xls.SetCellMergedRows(16, nRow, 2);

	xls.SetCellMergedColumns(3, nRow, 4);
	xls.SetCellMergedColumns(7, nRow, 4);*/

	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(1, nRow, _T("S\x1ED1 h\x1ED3 s\x1A1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(2, nRow, _T("T\xEAn b\x1EC7nh nh\xE2n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(3, nRow, _T("Tu\x1ED5i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(4, nRow, _T("\x110\x1ED1i t\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(5, nRow, _T("S\x1ED1 th\x1EBB"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(6, nRow, _T("Khoa ch\x1EC9 \x111\x1ECBnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(7, nRow, _T("T\xEAn ch\x1EC9 \x111\x1ECBnh"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(8, nRow, _T("K\x1EBFt qu\x1EA3"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(9, nRow, _T("Ten thuoc - vat tu"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(10, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(11, nRow, _T("\x110\x1A1n gi\xE1"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(12, nRow, _T("Th\xE0nh ti\x1EC1n"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(13, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng trong g\xF3i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(14, nRow, _T("Th\xE0nh ti\x1EC1n trong g\xF3i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(15, nRow, _T("S\x1ED1 l\x1B0\x1EE3ng ngo\xE0i g\xF3i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(16, nRow, _T("Th\xE0nh ti\x1EC1n ngo\xE0i g\xF3i"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	CString szSQL;

	

	szSQL.Format(_T(" SELECT hpo_docno                                     AS docno,") \
				_T("   get_patientname(hd_docno)                          AS pname,") \
				_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
				_T("   hd_cardno                                          AS cardno,") \
				_T("   hms_getobjectname(hd_object)                       AS objectname,") \
				_T("   hpo_orderid,") \
				_T("   hpo_deptid AS deptid,") \
				_T("   product_name ,") \
				_T("   product_typename,") \
				_T("   product_producttype,") \
				_T("   product_uomname,") \
				_T("   product_saleprice2 AS price,") \
				_T("   (SELECT hpr_desc") \
				_T("   FROM hms_pacs_result") \
				_T("   WHERE hpr_orderid =hpo_reference_id") \
				_T("   AND hpr_itemid    =hpo_refitem_id") \
				_T("   AND hpr_name      ='Conclusion'") \
				_T("   )                                                         AS conclusion,") \
				_T(" (select hfl_name from hms_fee_list where hfl_feeid=hpo_refitem_id) as pcmsname, ") \
				_T("   SUM(hpol_qtyissue)                                        AS qty,") \
				_T("   SUM(hpol_qtyissue) * product_saleprice2                   AS cost,") \
				_T("   SUM(hpol_qtyinside)                                       AS insideqty,") \
				_T("   SUM(hpol_qtyinside) * product_saleprice2                  AS insidecost,") \
				_T("   SUM(hpol_qtyissue   -hpol_qtyinside)                      AS outsideqty,") \
				_T("   SUM(hpol_qtyissue   -hpol_qtyinside) * product_saleprice2 AS outsidecost") \
				_T(" FROM hms_pharmaorder_view") \
				_T(" LEFT JOIN hms_doc") \
				_T(" ON (hd_docno= hpo_docno)") \
				_T(" LEFT JOIN hms_patient") \
				_T(" ON (hp_patientno= hd_patientno)") \
				_T(" LEFT JOIN hms_pharmaorderline_view3") \
				_T(" ON(hpol_orderid = hpo_orderid )") \
				_T(" LEFT JOIN m_productitem_view") \
				_T(" ON (product_item_id= hpol_product_item_id)") \
				_T(" WHERE 1            =1") \
				_T(" AND hpo_org_id     ='PACS'") \
				_T(" AND hpo_ordertype  ='C'") \
				_T(" AND hpo_storage_id =%s") \
				_T(" AND hpo_orderstatus='A'") \
				_T(" AND hpo_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
				_T(" GROUP BY hpo_orderid,") \
				_T("   product_uomname,") \
				_T("   product_saleprice2,") \
				_T("   hpo_refitem_id,") \
				_T("   product_name,") \
				_T("   hpo_reference_id,") \
				_T("   hpo_docno,") \
				_T("   product_producttype,") \
				_T("   hpo_deptid,") \
				_T("   product_typename ,") \
				_T("   hd_admitdate,") \
				_T("   hp_birthdate,") \
				_T("   hd_docno,") \
				_T("   hd_object,") \
				_T("   hd_cardno") \
				_T(" ORDER BY hpo_orderid,") \
				_T("   product_producttype"), m_szStorageKey,m_szFromDate,m_szToDate );
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{	
		_msg(_T("no data"));
		return ;
	}
	int nIndex=1;
	nCol=0;
	nRow++;
	while(!rs.IsEOF())
	{	
		tmpStr.Format(_T("%d"),nIndex++);

		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT);

		rs.GetValue(_T("docno"),tmpStr);
		xls.SetCellText(nCol + 1 ,nRow,tmpStr,FMT_TEXT);
		rs.GetValue(_T("pname"),tmpStr);
		xls.SetCellText(nCol +2,nRow  ,tmpStr,FMT_TEXT);
		
		rs.GetValue(_T("age"),tmpStr);
		xls.SetCellText(nCol +3 ,nRow  ,tmpStr,FMT_TEXT);

		rs.GetValue(_T("objectname"),tmpStr);
		xls.SetCellText(nCol +4,nRow  ,tmpStr,FMT_TEXT);

		rs.GetValue(_T("cardno"),tmpStr);
		xls.SetCellText(nCol +5,nRow  ,tmpStr,FMT_TEXT);

		rs.GetValue(_T("xxx"),tmpStr);
		xls.SetCellText(nCol +6 ,nRow  ,tmpStr,FMT_TEXT);

		rs.GetValue(_T("pcmsname"),tmpStr);
		xls.SetCellText(nCol +7 ,nRow  ,tmpStr,FMT_TEXT);

		rs.GetValue(_T("conclusion"),tmpStr);
		xls.SetCellText(nCol +8,nRow  ,tmpStr,FMT_TEXT);

		rs.GetValue(_T("product_name"),tmpStr);
		xls.SetCellText(nCol +9 ,nRow  ,tmpStr,FMT_TEXT);


		rs.GetValue(_T("qty"),tmpStr);
		xls.SetCellText(nCol +10 ,nRow  ,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("price"),tmpStr);
		xls.SetCellText(nCol +11,nRow  ,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("cost"),tmpStr);
		xls.SetCellText(nCol +12 ,nRow  ,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("insideqty"),tmpStr);
		xls.SetCellText(nCol +13,nRow  ,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("insidecost"),tmpStr);
		xls.SetCellText(nCol +14 ,nRow  ,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("outsideqty"),tmpStr);
		xls.SetCellText(nCol +15 ,nRow  ,tmpStr,FMT_NUMBER1);

		rs.GetValue(_T("outsidecost"),tmpStr);
		xls.SetCellText(nCol +16,nRow  ,tmpStr,FMT_NUMBER1);

		nRow++;

		
		
		rs.MoveNext();
	}


	
	EndWaitCursor();
	xls.Save(_T("Exports\\BAO CAO SU DUNG THUOC VAT TU C8D.xls"));
	
} 
int CHMSC8DReportDrugAndMaterial::OnAddHMSC8DReportDrugAndMaterial(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSC8DReportDrugAndMaterial::OnEditHMSC8DReportDrugAndMaterial(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSC8DReportDrugAndMaterial::OnDeleteHMSC8DReportDrugAndMaterial(){
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
 		OnCancelHMSC8DReportDrugAndMaterial();
 	}
	return 0;
}
int CHMSC8DReportDrugAndMaterial::OnSaveHMSC8DReportDrugAndMaterial(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
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
 		//OnHMSC8DReportDrugAndMaterialListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSC8DReportDrugAndMaterial::OnCancelHMSC8DReportDrugAndMaterial(){
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
int CHMSC8DReportDrugAndMaterial::OnHMSC8DReportDrugAndMaterialListLoadData(){
	return 0;
}
