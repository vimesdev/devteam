#include "stdafx.h"
#include "LIMSBaoCaoTongHopKhoaGPB.h"
#include "HMSMainFrame.h"
#include "Excel.h"

static void _OnExportSelectFnc(CWnd *pWnd){
	CLIMSBaoCaoTongHopKhoaGPB *pVw = (CLIMSBaoCaoTongHopKhoaGPB *)pWnd;
	pVw->OnExportSelect();
}
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CLIMSBaoCaoTongHopKhoaGPB *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CLIMSBaoCaoTongHopKhoaGPB *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CLIMSBaoCaoTongHopKhoaGPB *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSBaoCaoTongHopKhoaGPB *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CLIMSBaoCaoTongHopKhoaGPB *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CLIMSBaoCaoTongHopKhoaGPB *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CLIMSBaoCaoTongHopKhoaGPB *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CLIMSBaoCaoTongHopKhoaGPB *)pWnd)->OnToDateCheckValue();
} 
static int _OnAddLIMSBaoCaoTongHopKhoaGPBFnc(CWnd *pWnd){
	 return ((CLIMSBaoCaoTongHopKhoaGPB*)pWnd)->OnAddLIMSBaoCaoTongHopKhoaGPB();
} 
static int _OnEditLIMSBaoCaoTongHopKhoaGPBFnc(CWnd *pWnd){
	 return ((CLIMSBaoCaoTongHopKhoaGPB*)pWnd)->OnEditLIMSBaoCaoTongHopKhoaGPB();
} 
static int _OnDeleteLIMSBaoCaoTongHopKhoaGPBFnc(CWnd *pWnd){
	 return ((CLIMSBaoCaoTongHopKhoaGPB*)pWnd)->OnDeleteLIMSBaoCaoTongHopKhoaGPB();
} 
static int _OnSaveLIMSBaoCaoTongHopKhoaGPBFnc(CWnd *pWnd){
	 return ((CLIMSBaoCaoTongHopKhoaGPB*)pWnd)->OnSaveLIMSBaoCaoTongHopKhoaGPB();
} 
static int _OnCancelLIMSBaoCaoTongHopKhoaGPBFnc(CWnd *pWnd){
	 return ((CLIMSBaoCaoTongHopKhoaGPB*)pWnd)->OnCancelLIMSBaoCaoTongHopKhoaGPB();
} 
CLIMSBaoCaoTongHopKhoaGPB::CLIMSBaoCaoTongHopKhoaGPB(CWnd* pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CLIMSBaoCaoTongHopKhoaGPB::~CLIMSBaoCaoTongHopKhoaGPB(){
}
void CLIMSBaoCaoTongHopKhoaGPB::OnCreateComponents(){
	m_wndTotalReportGPB.Create(this, _T("\x42\xE1o \x63\xE1o t\x1ED5ng h\x1EE3p kho\x61 GP\x42"), 5, 5, 430, 90);
	m_wndExport.Create(this, _T("Export"), 345, 60, 425, 85);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 

}
void CLIMSBaoCaoTongHopKhoaGPB::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

}
void CLIMSBaoCaoTongHopKhoaGPB::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
	//m_wndFromDate.SetEvent(WE_CHANGE, _OnFromDateChangeFnc);
	//m_wndFromDate.SetEvent(WE_SETFOCUS, _OnFromDateSetfocusFnc);
	//m_wndFromDate.SetEvent(WE_KILLFOCUS, _OnFromDateKillfocusFnc);
	m_wndFromDate.SetEvent(WE_CHECKVALUE, _OnFromDateCheckValueFnc);
	//m_wndToDate.SetEvent(WE_CHANGE, _OnToDateChangeFnc);
	//m_wndToDate.SetEvent(WE_SETFOCUS, _OnToDateSetfocusFnc);
	//m_wndToDate.SetEvent(WE_KILLFOCUS, _OnToDateKillfocusFnc);
	m_wndToDate.SetEvent(WE_CHECKVALUE, _OnToDateCheckValueFnc);
	m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szFromDate += _T("00:00");
	m_szToDate += _T("23:59");
	UpdateData(FALSE);
	

}
void CLIMSBaoCaoTongHopKhoaGPB::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CLIMSBaoCaoTongHopKhoaGPB::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("FromDate")] =  m_szFromDate;
	m_jData[_T("ToDate")] =  m_szToDate;
	}
	else
	{
			
	m_jData[_T("FromDate")].GetValue(m_szFromDate);
	m_jData[_T("ToDate")].GetValue(m_szToDate);
	}

}
void CLIMSBaoCaoTongHopKhoaGPB::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CLIMSBaoCaoTongHopKhoaGPB::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CLIMSBaoCaoTongHopKhoaGPB::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CLIMSBaoCaoTongHopKhoaGPB::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
void CLIMSBaoCaoTongHopKhoaGPB::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0;
	double nTemp = 0, nTemp1=0;
	
	
	CExcel xls;
	if (!xls.Load(_T("Exports\\BaoCaoTongHopKhoaGPB.xls"))) AfxMessageBox(_T("Chua có File BaoCaoTongHopKhoaGPB.xls trong thu m?c Export!"));	
	xls.SetWorksheet(0);

	//xls.SetCellText(0, 0, _T("B? QU?C PHÒNG"), FMT_TEXT | FMT_CENTER, true, 10);
	//xls.SetCellText(0, 1, _T("B?NH VI?N TWQÐ 108"), FMT_TEXT | FMT_CENTER, true, 10);


	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 1, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	nRow = 5;
	nCol = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("nam"), tmpStr);
		xls.SetCellText(nCol, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tongso"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tongtien"), nTemp);
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tongtienthuoc"), nTemp);
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tongtienvattu"), nTemp);
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		nRow++;
		rs.MoveNext();
	}
	EndWaitCursor();
	xls.Save(_T("Exports\\BaoCaoTongHopKhoaGPB2.xls"));
	
} 

CString CLIMSBaoCaoTongHopKhoaGPB::GetQueryString()
{
	
	CString szSQL, szWhere;
	

	szSQL.Format(_T(" select nam, khoa, ") \
					_T(" sum(soluong) as tongso, ") \
					_T(" sum(thanhtien) as tongtien, ") \
					_T(" sum(tienthuoc) as tongtienthuoc, ") \
					_T(" sum(tienvattu) as tongtienvattu ") \
					_T(" FROM ") \
					_T(" ( ") \
					_T(" select ") \
					_T(" EXTRACT(YEAR FROM iv.hfe_date) as nam, ") \
					_T(" cast('C5' as nvarchar2(2)) as khoa, ") \
					_T(" SUM(fe.hfe_quantity) as soluong, ") \
					_T(" sum(fe.hfe_cost) as thanhtien, ") \
					_T(" 0 as tienthuoc, ") \
					_T(" 0 as tienvattu ") \
					_T(" from hms_fee_invoice iv ") \
					_T(" left join hms_fee fe ON (iv.hfe_docno = fe.hfe_docno ") \
					_T(" and iv.hfe_invoiceno = fe.hfe_invoiceno) ") \
					_T(" WHERE iv.hfe_date BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')") \
					_T(" and fe.hfe_group='B1E00' ") \
					_T(" and fe.hfe_status ='P' ") \
					_T(" group by iv.hfe_date  ") \
					_T(" UNION ALL  ") \
					_T(" select ") \
					_T(" EXTRACT(YEAR FROM mt_posteddate) as nam, ") \
					_T(" cast('C5' as nvarchar2(2)) as khoa, ") \
					_T(" 0 as soluong, ") \
					_T(" 0 as thanhtien, ") \
					_T(" sum(COALESCE(mtl_ttlamount, 0)) as tienthuoc, ") \
					_T(" 0 as tienvattu ") \
					_T(" FROM m_transaction ") \
					_T(" LEFT JOIN m_transactionline ON (mt_transaction_id = mtl_transaction_id) ") \
					_T(" where mt_posteddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
					_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T(" and mt_status = 'A' ") \
					_T(" and mt_department_id = 'KD' ") \
					_T(" and m_transaction.mt_department_to_id='C5' ") \
					_T(" group by mt_posteddate, mt_department_id, mt_department_to_id ") \
					_T(" UNION ALL ") \
					_T(" select ") \
					_T(" EXTRACT(YEAR FROM mt_posteddate) as nam, ") \
					_T(" cast('C5' as nvarchar2(2)) as khoa, ") \
					_T(" 0 as soluong, ") \
					_T(" 0 as thanhtien, ") \
					_T(" 0 as tienthuoc, ") \
					_T(" sum(COALESCE(mtl_ttlamount, 0)) as tienvattu ") \
					_T(" FROM m_transaction ") \
					_T(" LEFT JOIN m_transactionline ON (mt_transaction_id = mtl_transaction_id) ") \
					_T(" where mt_posteddate BETWEEN TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
					_T(" AND TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
					_T(" and mt_status = 'A' ") \
					_T(" and mt_department_id = 'C10' ") \
					_T(" and m_transaction.mt_department_to_id='C5' ") \
					_T(" group by mt_posteddate, mt_department_id, mt_department_to_id ") \
					_T(" ) ") \
					_T(" group by nam, khoa "), m_szFromDate, m_szToDate,m_szFromDate, m_szToDate,m_szFromDate, m_szToDate);
	return szSQL;
}
/*void CLIMSBaoCaoTongHopKhoaGPB::OnFromDateChange(){
	
} */
/*void CLIMSBaoCaoTongHopKhoaGPB::OnFromDateSetfocus(){
	
} */
/*void CLIMSBaoCaoTongHopKhoaGPB::OnFromDateKillfocus(){
	
} */
int CLIMSBaoCaoTongHopKhoaGPB::OnFromDateCheckValue(){
	return 0;
} 
/*void CLIMSBaoCaoTongHopKhoaGPB::OnToDateChange(){
	
} */
/*void CLIMSBaoCaoTongHopKhoaGPB::OnToDateSetfocus(){
	
} */
/*void CLIMSBaoCaoTongHopKhoaGPB::OnToDateKillfocus(){
	
} */
int CLIMSBaoCaoTongHopKhoaGPB::OnToDateCheckValue(){
	return 0;
} 
int CLIMSBaoCaoTongHopKhoaGPB::OnAddLIMSBaoCaoTongHopKhoaGPB(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CLIMSBaoCaoTongHopKhoaGPB::OnEditLIMSBaoCaoTongHopKhoaGPB(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CLIMSBaoCaoTongHopKhoaGPB::OnDeleteLIMSBaoCaoTongHopKhoaGPB(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelLIMSBaoCaoTongHopKhoaGPB();
 	}
	return 0;
}
int CLIMSBaoCaoTongHopKhoaGPB::OnSaveLIMSBaoCaoTongHopKhoaGPB(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
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
 		//OnLIMSBaoCaoTongHopKhoaGPBListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CLIMSBaoCaoTongHopKhoaGPB::OnCancelLIMSBaoCaoTongHopKhoaGPB(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	return 0;
} 
int CLIMSBaoCaoTongHopKhoaGPB::OnLIMSBaoCaoTongHopKhoaGPBListLoadData(){
	return 0;
}
