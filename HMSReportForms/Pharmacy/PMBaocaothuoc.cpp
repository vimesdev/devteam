#include "stdafx.h"
#include "PMBaocaothuoc.h"
#include "MainFrame_E10.h"
#include "Excel.h"
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CPMBaocaothuoc *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CPMBaocaothuoc *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CPMBaocaothuoc *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CPMBaocaothuoc *)pWnd)->OnToDateCheckValue();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CPMBaocaothuoc *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CPMBaocaothuoc *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CPMBaocaothuoc *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CPMBaocaothuoc *)pWnd)->OnFromDateCheckValue();
} 
static void _OnStockSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPMBaocaothuoc* )pWnd)->OnStockSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnStockSelendokFnc(CWnd *pWnd){
	((CPMBaocaothuoc *)pWnd)->OnStockSelendok();
}
/*static void _OnStockSetfocusFnc(CWnd *pWnd){
	((CPMBaocaothuoc *)pWnd)->OnStockKillfocus();
}*/
/*static void _OnStockKillfocusFnc(CWnd *pWnd){
	((CPMBaocaothuoc *)pWnd)->OnStockKillfocus();
}*/
static long _OnStockLoadDataFnc(CWnd *pWnd){
	return ((CPMBaocaothuoc *)pWnd)->OnStockLoadData();
}
/*static void _OnStockAddNewFnc(CWnd *pWnd){
	((CPMBaocaothuoc *)pWnd)->OnStockAddNew();
}*/
static void _OnExcelSelectFnc(CWnd *pWnd){
	CPMBaocaothuoc *pVw = (CPMBaocaothuoc *)pWnd;
	pVw->OnExcelSelect();
} 
static int _OnAddPMBaocaothuocFnc(CWnd *pWnd){
	 return ((CPMBaocaothuoc*)pWnd)->OnAddPMBaocaothuoc();
} 
static int _OnEditPMBaocaothuocFnc(CWnd *pWnd){
	 return ((CPMBaocaothuoc*)pWnd)->OnEditPMBaocaothuoc();
} 
static int _OnDeletePMBaocaothuocFnc(CWnd *pWnd){
	 return ((CPMBaocaothuoc*)pWnd)->OnDeletePMBaocaothuoc();
} 
static int _OnSavePMBaocaothuocFnc(CWnd *pWnd){
	 return ((CPMBaocaothuoc*)pWnd)->OnSavePMBaocaothuoc();
} 
static int _OnCancelPMBaocaothuocFnc(CWnd *pWnd){
	 return ((CPMBaocaothuoc*)pWnd)->OnCancelPMBaocaothuoc();
} 
CPMBaocaothuoc::CPMBaocaothuoc(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPMBaocaothuoc::~CPMBaocaothuoc(){
}
void CPMBaocaothuoc::OnCreateComponents(){
	m_wndToDateLabel.Create(this, _T("To Date"), 242, 32, 322, 57);
	m_wndToDate.Create(this,327, 32, 447, 57); 
	m_wndFromDateLabel.Create(this, _T("From Date"), 28, 33, 108, 58);
	m_wndFromDate.Create(this,113, 33, 233, 58); 
	m_wndStockLabel.Create(this, _T("Stock"), 28, 69, 108, 94);
	m_wndStock.Create(this,113, 69, 447, 94); 
	m_wndExcel.Create(this, _T("Excel"), 367, 114, 447, 139);
	m_wndReportCondition.Create(this, _T("Report Condition"), 1, 3, 461, 104);

}
void CPMBaocaothuoc::OnInitializeComponents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndStock.SetCheckValue(true);
	m_wndStock.LimitText(35);


	m_wndStock.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndStock.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CPMBaocaothuoc::OnSetWindowEvents(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	m_wndStock.SetEvent(WE_SELENDOK, _OnStockSelendokFnc);
	//m_wndStock.SetEvent(WE_SETFOCUS, _OnStockSetfocusFnc);
	//m_wndStock.SetEvent(WE_KILLFOCUS, _OnStockKillfocusFnc);
	m_wndStock.SetEvent(WE_SELCHANGE, _OnStockSelectChangeFnc);
	m_wndStock.SetEvent(WE_LOADDATA, _OnStockLoadDataFnc);
	//m_wndStock.SetEvent(WE_ADDNEW, _OnStockAddNewFnc);
	m_wndExcel.SetEvent(WE_CLICK, _OnExcelSelectFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T(" 00:00");
	m_szToDate += _T(" 23:59");
	UpdateData(false);


}
void CPMBaocaothuoc::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndStock.GetDlgCtrlID(), m_szStockKey);

}
void CPMBaocaothuoc::UpdateJson(BOOL bSave){
	/*if(bSave)
	{
			
	m_jData[_T("ToDate")] =  m_szToDate;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("Stock")] =  m_szStockKey;
	}
	else
	{
			
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("Stock")].GetValue(m_szStockKey);
	}*/

}
void CPMBaocaothuoc::GetDataToScreen(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPMBaocaothuoc::GetScreenToData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();

}
void CPMBaocaothuoc::SetDefaultValues(){

	m_szToDate.Empty();
	m_szFromDate.Empty();
	m_szStockKey.Empty();

}
int CPMBaocaothuoc::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
/*void CPMBaocaothuoc::OnToDateChange(){
	
} */
/*void CPMBaocaothuoc::OnToDateSetfocus(){
	
} */
/*void CPMBaocaothuoc::OnToDateKillfocus(){
	
} */
int CPMBaocaothuoc::OnToDateCheckValue(){
	return 0;
} 
/*void CPMBaocaothuoc::OnFromDateChange(){
	
} */
/*void CPMBaocaothuoc::OnFromDateSetfocus(){
	
} */
/*void CPMBaocaothuoc::OnFromDateKillfocus(){
	
} */
int CPMBaocaothuoc::OnFromDateCheckValue(){
	return 0;
} 
void CPMBaocaothuoc::OnStockSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} 
void CPMBaocaothuoc::OnStockSelendok(){
	 
}
/*void CPMBaocaothuoc::OnStockSetfocus(){
	
}*/
/*void CPMBaocaothuoc::OnStockKillfocus(){
	
}*/
long CPMBaocaothuoc::OnStockLoadData(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	return pMF->LoadStorageList(&m_wndStock, m_szStockKey);
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndStock.IsSearchKey() && !m_szStockKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szStockKey
};
	m_wndStock.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndStock.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPMBaocaothuoc::OnStockAddNew(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	
} */
void CPMBaocaothuoc::OnExcelSelect(){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CString tmpStr, szSQL, szWhere, szname;
	CString szDate;
	CRecord rs(&pMF->m_db);
	UpdateData(true);
	BeginWaitCursor();
	CExcel xls;
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 21);
	xls.SetColumnWidth(2, 20);
	xls.SetColumnWidth(3, 10);
	xls.SetColumnWidth(4, 10);
	xls.SetColumnWidth(5, 10);
	xls.SetColumnWidth(6, 10);
	xls.SetColumnWidth(7, 10);
	xls.SetColumnWidth(8, 10);
	xls.SetColumnWidth(9, 10);
	xls.SetColumnWidth(10, 10);
	xls.SetColumnWidth(11, 10);
	xls.SetColumnWidth(12, 10);
	xls.SetColumnWidth(13, 10);
	xls.SetColumnWidth(14, 10);
	xls.SetColumnWidth(15, 10);
	xls.SetColumnWidth(16, 10);
	xls.SetColumnWidth(17, 10);

	int nCol = 0;
	int nRow = 0;	

	xls.SetCellMergedColumns(nCol, nRow + 1, 3);
	xls.SetCellMergedColumns(nCol, nRow + 2, 3);
	xls.SetCellText(nCol, nRow + 1, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 11);
	xls.SetCellText(nCol, nRow + 2, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 11);

	xls.SetCellMergedColumns(nCol, nRow + 3, 10);
	xls.SetCellText(nCol, nRow + 3, _T("DANH SÁCH CHI TIẾT THUỐC BỆNH NHÂN"), FMT_TEXT | FMT_CENTER, true, 14);
	xls.SetCellMergedColumns(nCol, nRow + 4, 10);
	tmpStr.Format(_T("Từ ngày %s đến ngày %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmm, ddmmyyyy|hhmm), CDateTime::Convert(m_szToDate, yyyymmdd|hhmm, ddmmyyyy|hhmm) );
	xls.SetCellText(nCol, nRow + 4, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	nRow =5;
    
	xls.SetCellText (nCol,nRow ,_T("STT"),FMT_TEXT|FMT_VCENTER |FMT_WRAPING ,true,10);

	xls.SetCellText (nCol+1,nRow ,_T("Tên bệnh nhân"),FMT_TEXT|FMT_VCENTER |FMT_WRAPING ,true,10);

	xls.SetCellText (nCol+2,nRow ,_T("Tên thuốc"),FMT_TEXT|FMT_VCENTER |FMT_WRAPING ,true,10);

	xls.SetCellText (nCol+3,nRow,_T("Số lượng yêu cầu"),FMT_TEXT|FMT_CENTER |FMT_WRAPING ,true,10);

	xls.SetCellText(nCol+4,nRow,_T("Số lượng thực tế"),FMT_TEXT|FMT_VCENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+5,nRow,_T("Số lượng DM yêu cầu"),FMT_TEXT|FMT_VCENTER|FMT_WRAPING,true,10);

	xls.SetCellText(nCol+6,nRow,_T("Số lượng DM thực tế"),FMT_TEXT|FMT_CENTER|FMT_WRAPING,true,10);

	if(!m_szStockKey.IsEmpty ())
		szWhere.Format(_T(" and hcoi_storage_id ='%s' "),m_szStockKey  );

	szSQL.Format(_T(" select ") \
		_T("       hd_docno as docno,") \
		_T("       get_patientname(hd_docno) as name,") \
		_T("       HMS_GETAGE(sysdate,hp_birthdate) as age,") \
		_T("       HMS_GETSEX(hp_sex) as sex,") \
		_T("       HMS_GETADDRESS(hp_provid,hp_distid,hp_villid) as address,") \
		_T("       hcoi_storage_id,") \
		_T("       msl_name as namestock,") \
		_T("       product_name as nameproduct,") \
		_T("       VIMES.HMS_CANCER_ORDERITEM.HCOI_QTYORDER as qtyorder,") \
		_T("       VIMES.HMS_CANCER_ORDERITEM.HCOI_QTYISSUE as qtyissue,") \
		_T("       VIMES.HMS_CANCER_ORDERITEM.HCOI_DM_QTYISSUE as dmqtyissue,") \
		_T("       VIMES.HMS_CANCER_ORDERITEM.HCOI_DM_QTYORDER as dmqtyorder") \
		_T("       from VIMES.HMS_CANCER_ORDERITEM ") \
		_T("       left join hms_doc on(hd_docno = hcoi_docno)") \
		_T("       left join hms_patient on(hp_patientno=hd_patientno)") \
		_T("       left join hms_ipharmaorder on(hpo_orderid = hcoi_orderid)") \
		_T("       left join hms_ipharmaorderline on (hpo_orderid = hpol_orderlineid)") \
		_T("       LEFT JOIN VIMES.M_STORAGELIST ON (hcoi_storage_id = msl_storage_id)") \
		_T("       left join VIMES.M_PRODUCTITEM_VIEW on (VIMES.M_PRODUCTITEM_VIEW.PRODUCT_ITEM_ID = VIMES.HMS_CANCER_ORDERITEM.HCOI_PRODUCT_ITEM_ID)") \
		_T("       LEFT JOIN hms_cancer_order ON(hcoi_cancer_order_id = hco_cancer_order_id)")\
		_T("       where hco_status = 'T' and hpo_orderdate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') %s ") \
		_T("       order by name, namestock"), m_szFromDate, m_szToDate, szWhere);

    rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	if (rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"), MB_ICONASTERISK | MB_OK);
		return;
	}
	int nIndex=1;
	nRow=7;
	int nInt=0;
    
	while(!rs.IsEOF())
		{
		if(szname.IsEmpty() || szname !=rs.GetValue(_T("name")))
		{
			rs.GetValue(_T("name"),szname);
			xls.SetCellMergedColumns(nCol+1,nRow,1);
			rs.GetValue(_T("name"), tmpStr);
			xls.SetCellText(nCol+1,nRow,tmpStr,FMT_TEXT|FMT_VCENTER,true,10);
			rs.GetValue(_T("age"), tmpStr);
			xls.SetCellText(nCol+2,nRow,tmpStr,FMT_TEXT|FMT_VCENTER,true,10);
			rs.GetValue(_T("sex"), tmpStr);
			xls.SetCellText(nCol+3,nRow,tmpStr,FMT_TEXT|FMT_VCENTER,true,10);
			rs.GetValue(_T("address"), tmpStr);
			xls.SetCellText(nCol+4,nRow,tmpStr,FMT_TEXT|FMT_VCENTER,true,10);
			
			nRow++;
			nIndex =1;
		}

		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_INTEGER);
		
		/*rs.GetValue(_T("patientname"),tmpStr);
		xls.SetCellText(nCol+1,nRow,tmpStr,FMT_TEXT,false,10);*/

		rs.GetValue(_T("nameproduct"),tmpStr);
		xls.SetCellText(nCol+2,nRow,tmpStr,FMT_TEXT,false,10);

		rs.GetValue(_T("qtyorder"),tmpStr);
		xls.SetCellText(nCol+3,nRow,tmpStr,FMT_NUMBER1,false,10);

		rs.GetValue(_T("qtyissue"),tmpStr);
		xls.SetCellText (nCol+4,nRow,tmpStr,FMT_NUMBER1 ,false,10);

		rs.GetValue(_T("dmqtyorder"),tmpStr);
		xls.SetCellText (nCol+5,nRow,tmpStr,FMT_NUMBER1 ,false,10);

		rs.GetValue(_T("dmqtyissue"),tmpStr);
		xls.SetCellText (nCol+6,nRow,tmpStr,FMT_NUMBER1 ,false,10);


		nRow++;
		rs.MoveNext();
		}
	EndWaitCursor();
	xls.Save(_T("Exports\\CHITIETTHUOCBENHNHAN.xls"));

} 
int CPMBaocaothuoc::OnAddPMBaocaothuoc(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPMBaocaothuoc::OnEditPMBaocaothuoc(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame_E10 *pMF = (CMainFrame_E10 *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPMBaocaothuoc::OnDeletePMBaocaothuoc(){
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
 		OnCancelPMBaocaothuoc();
 	}
	return 0;
}
int CPMBaocaothuoc::OnSavePMBaocaothuoc(){
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
 		//OnPMBaocaothuocListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPMBaocaothuoc::OnCancelPMBaocaothuoc(){
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
int CPMBaocaothuoc::OnPMBaocaothuocListLoadData(){
	return 0;
}
