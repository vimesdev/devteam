#include "stdafx.h"
#include "HMSFoodReportHCKT.h"
#include "HMSMainFrame.h"
#include "Excel.h"
#include "StringToken.h"
static void _OnDeptSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSFoodReportHCKT* )pWnd)->OnDeptSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeptSelendokFnc(CWnd *pWnd){
	((CHMSFoodReportHCKT *)pWnd)->OnDeptSelendok();
}
/*static void _OnDeptSetfocusFnc(CWnd *pWnd){
	((CHMSFoodReportHCKT *)pWnd)->OnDeptKillfocus();
}*/
/*static void _OnDeptKillfocusFnc(CWnd *pWnd){
	((CHMSFoodReportHCKT *)pWnd)->OnDeptKillfocus();
}*/
static long _OnDeptLoadDataFnc(CWnd *pWnd){
	return ((CHMSFoodReportHCKT *)pWnd)->OnDeptLoadData();
}
/*static void _OnDeptAddNewFnc(CWnd *pWnd){
	((CHMSFoodReportHCKT *)pWnd)->OnDeptAddNew();
}*/
static void _OnRelationorSelectFnc(CWnd *pWnd){
	 ((CHMSFoodReportHCKT*)pWnd)->OnRelationorSelect();
}
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSFoodReportHCKT *pVw = (CHMSFoodReportHCKT *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnExportSelectFnc(CWnd *pWnd){
	CHMSFoodReportHCKT *pVw = (CHMSFoodReportHCKT *)pWnd;
	pVw->OnExportSelect();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CHMSFoodReportHCKT *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CHMSFoodReportHCKT *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CHMSFoodReportHCKT *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodReportHCKT *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CHMSFoodReportHCKT *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CHMSFoodReportHCKT *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CHMSFoodReportHCKT *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSFoodReportHCKT *)pWnd)->OnToDateCheckValue();
} 
static int _OnAddHMSFoodReportHCKTFnc(CWnd *pWnd){
	 return ((CHMSFoodReportHCKT*)pWnd)->OnAddHMSFoodReportHCKT();
} 
static int _OnEditHMSFoodReportHCKTFnc(CWnd *pWnd){
	 return ((CHMSFoodReportHCKT*)pWnd)->OnEditHMSFoodReportHCKT();
} 
static int _OnDeleteHMSFoodReportHCKTFnc(CWnd *pWnd){
	 return ((CHMSFoodReportHCKT*)pWnd)->OnDeleteHMSFoodReportHCKT();
} 
static int _OnSaveHMSFoodReportHCKTFnc(CWnd *pWnd){
	 return ((CHMSFoodReportHCKT*)pWnd)->OnSaveHMSFoodReportHCKT();
} 
static int _OnCancelHMSFoodReportHCKTFnc(CWnd *pWnd){
	 return ((CHMSFoodReportHCKT*)pWnd)->OnCancelHMSFoodReportHCKT();
} 
CHMSFoodReportHCKT::CHMSFoodReportHCKT(CWnd *pParent){

	m_nDlgWidth = 490;
	m_nDlgHeight = 130;
	SetDefaultValues();
}
CHMSFoodReportHCKT::~CHMSFoodReportHCKT(){
}
void CHMSFoodReportHCKT::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Infomation"), 5, 5, 480, 90);
	m_wndDeptLabel.Create(this, _T("DeptID"), 20, 60, 100, 85);
	m_wndDept.Create(this,105, 60, 475, 85); 
	m_wndRelationor.Create(this, _T("Relationor"), 19, 96, 109, 121);
	m_wndPrint.Create(this, _T("&Print"), 299, 96, 379, 121);
	m_wndExport.Create(this, _T("&Export"), 384, 96, 464, 121);
	m_wndFromDateLabel.Create(this, _T("From Date"), 20, 30, 100, 55);
	m_wndFromDate.Create(this,105, 30, 240, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 250, 30, 330, 55);
	m_wndToDate.Create(this,335, 30, 470, 55); 

}
void CHMSFoodReportHCKT::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDept.SetCheckValue(true);
	m_wndDept.LimitText(35);
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);


	m_wndDept.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDept.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CHMSFoodReportHCKT::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndDept.SetEvent(WE_SELENDOK, _OnDeptSelendokFnc);
	//m_wndDept.SetEvent(WE_SETFOCUS, _OnDeptSetfocusFnc);
	//m_wndDept.SetEvent(WE_KILLFOCUS, _OnDeptKillfocusFnc);
	m_wndDept.SetEvent(WE_SELCHANGE, _OnDeptSelectChangeFnc);
	m_wndDept.SetEvent(WE_LOADDATA, _OnDeptLoadDataFnc);
	//m_wndDept.SetEvent(WE_ADDNEW, _OnDeptAddNewFnc);
	m_wndRelationor.SetEvent(WE_CLICK, _OnRelationorSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSFoodReportHCKTFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSFoodReportHCKTFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSFoodReportHCKTFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSFoodReportHCKTFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSFoodReportHCKTFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_EDIT);

}
void CHMSFoodReportHCKT::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndDept.GetDlgCtrlID(), m_szDeptKey);
	DDX_Check(pDX, m_wndRelationor.GetDlgCtrlID(), m_bRelationor);
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CHMSFoodReportHCKT::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Dept")] =  m_szDeptKey;
	m_jData[_T("Relationor")] =  m_bRelationor;
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("Dept")].GetValue(m_szDeptKey);
	m_jData[_T("Relationor")].GetValue(m_bRelationor);
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CHMSFoodReportHCKT::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSFoodReportHCKT::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CHMSFoodReportHCKT::SetDefaultValues(){

	m_szDeptKey.Empty();
	m_bRelationor=FALSE;
	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CHMSFoodReportHCKT::SetMode(int nMode){
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
			m_szFromDate= pMF->GetSysDate() + _T(" 00:00");
			m_szToDate= pMF->GetSysDate() + _T(" 23:59");
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
void CHMSFoodReportHCKT::OnDeptSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodReportHCKT::OnDeptSelendok(){
	 
}
/*void CHMSFoodReportHCKT::OnDeptSetfocus(){
	
}*/
/*void CHMSFoodReportHCKT::OnDeptKillfocus(){
	
}*/
long CHMSFoodReportHCKT::OnDeptLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndDept.IsSearchKey() && !m_szDeptKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szDeptKey
};
	m_wndDept.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDept.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CHMSFoodReportHCKT::OnDeptAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSFoodReportHCKT::OnRelationorSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CHMSFoodReportHCKT::OnPrintSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CHMSFoodReportHCKT::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(true);
	if(m_bRelationor)
		OnExportRelationor();
	else
		OnExportPatient();
	
} 
/*void CHMSFoodReportHCKT::OnFromDateChange(){
	
} */
/*void CHMSFoodReportHCKT::OnFromDateSetfocus(){
	
} */
/*void CHMSFoodReportHCKT::OnFromDateKillfocus(){
	
} */
int CHMSFoodReportHCKT::OnFromDateCheckValue(){
	return 0;
} 
/*void CHMSFoodReportHCKT::OnToDateChange(){
	
} */
/*void CHMSFoodReportHCKT::OnToDateSetfocus(){
	
} */
/*void CHMSFoodReportHCKT::OnToDateKillfocus(){
	
} */
int CHMSFoodReportHCKT::OnToDateCheckValue(){
	return 0;
} 
int CHMSFoodReportHCKT::OnAddHMSFoodReportHCKT(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSFoodReportHCKT::OnEditHMSFoodReportHCKT(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSFoodReportHCKT::OnDeleteHMSFoodReportHCKT(){
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
 		OnCancelHMSFoodReportHCKT();
 	}
	return 0;
}
int CHMSFoodReportHCKT::OnSaveHMSFoodReportHCKT(){
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
 		//OnHMSFoodReportHCKTListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSFoodReportHCKT::OnCancelHMSFoodReportHCKT(){
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
int CHMSFoodReportHCKT::OnHMSFoodReportHCKTListLoadData(){
	return 0;
}

void CHMSFoodReportHCKT::OnExportRelationor(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString tmpStr;
	UpdateData(true);
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
	tmpStr = _T("T\x1ED4NG H\x1EE2P QU\xC2N S\x1ED0 \x102N NG\x1AF\x1EDCI NH\xC0");
	xls.SetCellText(0, 2, tmpStr, 4098, true);

	tmpStr.Format(_T("Ngày %s tháng %s nam %s"), m_szFromDate.Mid(8,2) ,m_szFromDate.Mid(5,2), m_szFromDate.Left(4));
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
	xls.SetCellText(1, nRow, _T("KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(2, nRow, _T("S\x1ED0 L\x1AF\x1EE2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(3, nRow, _T("M\x1EE8\x43 \x102N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(4, nRow, _T("TH\xC0NH TI\x1EC0N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(5, nRow, _T("GHI \x43H\xDA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	CString szSQL;


	rs1.MoveFirst();

	szSQL.Format(_T(" SELECT hfo_deptid, sd_id_alias, ") \
				_T("    HFOL_UNITPRICE as price, ") \
				_T("	SUM(hfol_qtyissue) AS issue, ") \
				_T("	SUM(hfol_qtyissue)*HFOL_UNITPRICE as amount ") \
				_T(" FROM") \
				_T("     hms_foodordersheet") \
				_T("     LEFT JOIN hms_feefood ON (") \
				_T("         hfo_reforder_id = hfos_orderid") \
				_T("     )") \
				_T("     LEFT JOIN hms_feefoodline ON (") \
				_T("         hfol_orderid = hfo_orderid") \
				_T("     )") \
				_T("     LEFT JOIN hms_fee_list ON (") \
				_T("         hfl_feeid = hfol_itemid )") \
				_T("     LEFT JOIN sys_dept ON (") \
				_T("         sd_id = hfo_deptid") \
				_T("     )") \
				_T(" WHERE") \
				_T("         hfo_orderdate BETWEEN to_timestamp(") \
				_T("             '%s',") \
				_T("             'YYYY-MM-DD HH24:MI:SS'") \
				_T("         ) AND to_timestamp(") \
				_T("             '%s',") \
				_T("             'YYYY-MM-DD HH24:MI:SS'") \
				_T("         )") \
				_T("     AND") \
				_T("         hfo_ordertype = 'D'") \
				_T("     AND") \
				_T("         hfl_typeid = 'F'") \
				_T("     AND") \
				_T("         hfl_groupid = 'FF000'") \
				_T("     AND") \
				_T("         hfl_deptid = 'HCKT'") \
				_T("     AND") \
				_T("         hfl_subgroup = 'NN' and hfe_refstatus <> 'C' AND hfo_orderstatus = 'A'") \
				_T(" GROUP BY") \
				_T("     hfo_deptid,sd_id_alias,HFOL_UNITPRICE") \
				_T("     ORDER BY hfo_deptid,sd_id_alias") ,m_szFromDate, m_szToDate);
	// AND hfo_orderstatus = 'A'
	_fmsg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{	
		_msg(_T("no data"));
		return ;
	}
	int nIndex=1;
	nCol=0;
	nRow++;
	double nCost=0;
	double nLine=0;
	double	nTotalcost=0;
	double nGTotal[20];
	for(int i=0; i< 20; i++)
	{
		nGTotal[i]=0;
	}
	CString szQty;
	int nTmp=0;
	while(!rs.IsEOF())
	{	
		nCol=0;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol ++, nRow,tmpStr , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);
		rs.GetValue(_T("sd_id_alias"),tmpStr);
		xls.SetCellText(nCol ++, nRow,tmpStr , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("issue"),nCost);
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
		
		nLine +=nCost;
		rs.GetValue(_T("price"),nCost);
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("amount"),nCost);
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
		nTotalcost += nCost;
		nRow++;
		
		rs.MoveNext();
	}
	
	xls.SetCellText(0 , nRow,_T("T\x1ED4NG") , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);

	xls.SetCellText(2, nRow,double2str(nLine) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
	xls.SetCellText(4, nRow,double2str(nTotalcost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);

	
	EndWaitCursor();
	xls.Save(_T("Exports\\BAO CAO TAI CHINH QUAN SO AN NGUOI NHA.xls"));
}
void 	CHMSFoodReportHCKT::OnExportPatient(){
		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CString tmpStr;
	UpdateData(true);
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
	tmpStr = _T("T\x1ED4NG H\x1EE2P QU\xC2N S\x1ED0 \x102N");
	xls.SetCellText(0, 2, tmpStr, 4098, true);

	tmpStr.Format(_T("Ngày %s tháng %s nam %s"), m_szFromDate.Mid(8,2) ,m_szFromDate.Mid(5,2), m_szFromDate.Left(4));
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
	xls.SetCellText(1, nRow, _T("KHOA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(2, nRow, _T("\x42U\x1ED4I"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(3, nRow, _T("S\x1ED0 L\x1AF\x1EE2NG"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(4, nRow, _T("M\x1EE8\x43 \x102N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(5, nRow, _T("TH\xC0NH TI\x1EC0N"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);
	xls.SetCellText(6, nRow, _T("GHI \x43H\xDA"), FMT_TEXT | FMT_CENTER | FMT_WRAPING, true);

	CString szSQL;


	rs1.MoveFirst();
	//GIANGDH updated sd_id_alias 07/12/2023
	szSQL.Format(_T("    SELECT   hfo_deptid,sd_id_alias,") \
				_T("             hfol_type,") \
				 _T(" case when hfol_type ='S' then 1  ") \
				_T(" when  hfol_type ='T' then 2  ") \
				_T("	else 3 end as nType, ") \
				_T(" 				      HFOL_UNITPRICE as price,") \
				_T(" 				  	SUM(hfol_qtyissue) AS issue,   ") \
				_T(" 				  	SUM(hfol_qtyissue)*HFOL_UNITPRICE as amount   ") \
				_T(" 				   FROM  ") \
				_T(" 				       hms_foodordersheet  ") \
				_T(" 				       LEFT JOIN hms_feefood ON (  ") \
				_T(" 				           hfo_reforder_id = hfos_orderid  ") \
				_T(" 				       )  ") \
				_T(" 				       LEFT JOIN hms_feefoodline ON (  ") \
				_T(" 				           hfol_orderid = hfo_orderid  ") \
				_T(" 				       )  ") \
				_T(" 				       LEFT JOIN hms_fee_list ON (  ") \
				_T(" 				           hfl_feeid = hfol_itemid ) ") \
				_T(" 				       LEFT JOIN sys_dept ON (  ") \
				_T(" 				           hfl_deptid = sd_id  ") \
				_T(" 				       )  ") \
				_T(" 				   WHERE  ") \
				_T(" 				           hfo_orderdate BETWEEN to_timestamp(  ") \
				_T(" 				               '%s',  ") \
				_T(" 				               'YYYY-MM-DD HH24:MI:SS'  ") \
				_T(" 				           ) AND to_timestamp(  ") \
				_T(" 				               '%s',  ") \
				_T(" 				               'YYYY-MM-DD HH24:MI:SS'  ") \
				_T(" 				           )  ") \
				_T(" 				       AND  ") \
				_T(" 				           hfo_ordertype = 'D'  ") \
				_T(" 				       AND  ") \
				_T(" 				 hfos_depttype='HC' ") \
				_T(" 				       AND  ") \
				_T(" 				           hfl_typeid = 'F'  ") \
				_T(" 				       AND  ") \
				_T(" 				           hfl_groupid = 'FF000'  ") \
				_T(" 				       AND  ") \
				_T(" 				           hfl_deptid = 'HCKT'  ") \
				_T(" 				       AND  ") \
				_T(" 				           hfl_subgroup  <> 'NN' AND hfo_orderstatus='A' and hfe_refstatus <> 'C'  ") \
				_T(" 				   GROUP BY  ") \
				_T(" 				       hfo_deptid,sd_id_alias,HFOL_UNITPRICE ,hfol_type") \
				_T(" 				       ORDER BY hfo_deptid,sd_id_alias,nType") ,m_szFromDate, m_szToDate);
	// AND hfo_orderstatus = 'A'
	_fmsg(_T("%s"),szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{	
		_msg(_T("no data"));
		return ;
	}
	int nIndex=1;
	nCol=0;
	nRow++;
	double nCost=0;
	double nLine=0;
	double	nTotalcost=0;
	double nGTotal[20];
	for(int i=0; i< 20; i++)
	{
		nGTotal[i]=0;
	}
	CString szQty,szTypeName;
	int nTmp=0;
	while(!rs.IsEOF())
	{	
		nCol=0;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol ++, nRow,tmpStr , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("sd_id_alias"),tmpStr);
		xls.SetCellText(nCol ++, nRow,tmpStr , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("hfol_type"),tmpStr);
		if(tmpStr == _T("S"))
			szTypeName= _T("S\xE1ng");

		if(tmpStr == _T("T"))
			szTypeName= _T("Tr\x1B0\x61");

		if(tmpStr == _T("C"))
			szTypeName= _T("T\x1ED1i");

		

		xls.SetCellText(nCol ++, nRow,szTypeName , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("issue"),nCost);
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
		
		nLine +=nCost;
		rs.GetValue(_T("price"),nCost);
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);

		rs.GetValue(_T("amount"),nCost);
		xls.SetCellText(nCol ++, nRow,double2str(nCost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
		nTotalcost += nCost;
		nRow++;
		
		rs.MoveNext();
	}
	
	xls.SetCellText(0 , nRow,_T("T\x1ED4NG") , FMT_TEXT | FMT_CENTER | FMT_WRAPING, false);

	xls.SetCellText(3, nRow,double2str(nLine) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);
	xls.SetCellText(5, nRow,double2str(nTotalcost) , FMT_NUMBER1 | FMT_CENTER | FMT_WRAPING, false);

	
	EndWaitCursor();
	xls.Save(_T("Exports\\BAO CAO tAI CHINH QUAN SO BN TU NGUYEN HCKT.xls"));
	}