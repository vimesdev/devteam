#include "stdafx.h"
#include "TMDanhSachNNOLaiPB.h"
#include "HMSMainFrame.h"
#include "ReportDocument.h"
#include "Excel.h"
static void _OnExportSelectFnc(CWnd *pWnd){
	CTMDanhSachNNOLaiPB *pVw = (CTMDanhSachNNOLaiPB *)pWnd;
	pVw->OnExportSelect();
} 
/*static void _OnFromDateChangeFnc(CWnd *pWnd){
	((CTMDanhSachNNOLaiPB *)pWnd)->OnFromDateChange();
} */
/*static void _OnFromDateSetfocusFnc(CWnd *pWnd){
	((CTMDanhSachNNOLaiPB *)pWnd)->OnFromDateSetfocus();} */ 
/*static void _OnFromDateKillfocusFnc(CWnd *pWnd){
	((CTMDanhSachNNOLaiPB *)pWnd)->OnFromDateKillfocus();
} */
static int _OnFromDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDanhSachNNOLaiPB *)pWnd)->OnFromDateCheckValue();
} 
/*static void _OnToDateChangeFnc(CWnd *pWnd){
	((CTMDanhSachNNOLaiPB *)pWnd)->OnToDateChange();
} */
/*static void _OnToDateSetfocusFnc(CWnd *pWnd){
	((CTMDanhSachNNOLaiPB *)pWnd)->OnToDateSetfocus();} */ 
/*static void _OnToDateKillfocusFnc(CWnd *pWnd){
	((CTMDanhSachNNOLaiPB *)pWnd)->OnToDateKillfocus();
} */
static int _OnToDateCheckValueFnc(CWnd *pWnd){
	return ((CTMDanhSachNNOLaiPB *)pWnd)->OnToDateCheckValue();
} 
static int _OnAddTMDanhSachNNOLaiPBFnc(CWnd *pWnd){
	 return ((CTMDanhSachNNOLaiPB*)pWnd)->OnAddTMDanhSachNNOLaiPB();
} 
static int _OnEditTMDanhSachNNOLaiPBFnc(CWnd *pWnd){
	 return ((CTMDanhSachNNOLaiPB*)pWnd)->OnEditTMDanhSachNNOLaiPB();
} 
static int _OnDeleteTMDanhSachNNOLaiPBFnc(CWnd *pWnd){
	 return ((CTMDanhSachNNOLaiPB*)pWnd)->OnDeleteTMDanhSachNNOLaiPB();
} 
static int _OnSaveTMDanhSachNNOLaiPBFnc(CWnd *pWnd){
	 return ((CTMDanhSachNNOLaiPB*)pWnd)->OnSaveTMDanhSachNNOLaiPB();
} 
static int _OnCancelTMDanhSachNNOLaiPBFnc(CWnd *pWnd){
	 return ((CTMDanhSachNNOLaiPB*)pWnd)->OnCancelTMDanhSachNNOLaiPB();
} 
CTMDanhSachNNOLaiPB::CTMDanhSachNNOLaiPB(CWnd *pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMDanhSachNNOLaiPB::~CTMDanhSachNNOLaiPB(){
}
void CTMDanhSachNNOLaiPB::OnCreateComponents(){
	m_wndListNNOLPB.Create(this, _T("\x44\x61nh s\xE1\x63h ng\x1B0\x1EDDi nh\xE0 \x1EDF l\x1EA1i ph\xF2ng \x62\x1EC7nh"), 5, 5, 430, 90);
	m_wndExport.Create(this, _T("Export"), 345, 60, 425, 85);
	m_wndFromDateLabel.Create(this, _T("From Date"), 10, 30, 90, 55);
	m_wndFromDate.Create(this,95, 30, 215, 55); 
	m_wndToDateLabel.Create(this, _T("To Date"), 220, 30, 300, 55);
	m_wndToDate.Create(this,305, 30, 425, 55); 

}
void CTMDanhSachNNOLaiPB::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndFromDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndFromDate.SetCheckValue(true);
	m_wndToDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndToDate.SetCheckValue(true);

}
void CTMDanhSachNNOLaiPB::OnSetWindowEvents(){
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
	CString szSysDate = pMF->GetSysDate();
	
	m_szFromDate = szSysDate + _T("00:00");
	//m_szFromDate = m_szToDate = pMF->GetSysDate();
	m_szToDate = szSysDate + _T("23:59");
	UpdateData(false);

}
void CTMDanhSachNNOLaiPB::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndFromDate.GetDlgCtrlID(), m_szFromDate);
	DDX_TextEx(pDX, m_wndToDate.GetDlgCtrlID(), m_szToDate);

}
void CTMDanhSachNNOLaiPB::UpdateJson(BOOL bSave){


}
void CTMDanhSachNNOLaiPB::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMDanhSachNNOLaiPB::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMDanhSachNNOLaiPB::SetDefaultValues(){

	m_szFromDate.Empty();
	m_szToDate.Empty();

}
int CTMDanhSachNNOLaiPB::SetMode(int nMode){
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
void CTMDanhSachNNOLaiPB::OnExportSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr, szTemp, szWhere, szOldDay, szNewDay;
	UpdateData(TRUE);
	BeginWaitCursor();
	szWhere.Empty();
	int nRow = 0, nCol = 0, nIdx = 1;
	double nTemp = 0, nTemp1=0;
	double nTotal[30], nGroupTotal[30];
	for(int i = 0; i < 30; i++)
		{
			nTotal[i] = 0;
			nGroupTotal[i] = 0;
		}
		
	CExcel xls;
	if (!xls.Load(_T("Exports\\ThongKeDanhSachNguoiNhaOLaiPhongBenh.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));

	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("deptid"), tmpStr);
		if(tmpStr.GetLength() > 0)
			nTotal[1] += 1;
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("tongsobn"), nTemp);
		nTotal[2] += nTemp;
		xls.SetCellText(nCol+2, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("tongsonnol"), nTemp);
		nTotal[3] += nTemp;
		xls.SetCellText(nCol+3, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("olaidichvu"), nTemp);
		nTotal[4] += nTemp;
		xls.SetCellText(nCol+4, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("olaifree"), nTemp);
		nTotal[5] += nTemp;
		xls.SetCellText(nCol+5, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("chamsoc1"), nTemp);
		nTotal[6] += nTemp;
		xls.SetCellText(nCol+6, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("chamsoc2"), nTemp);
		nTotal[7] += nTemp;
		xls.SetCellText(nCol+7, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("chamsoc3"), nTemp);
		nTotal[8] += nTemp;
		xls.SetCellText(nCol+8, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("VIPA"), nTemp);
		nTotal[9] += nTemp;
		xls.SetCellText(nCol+9, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("VIPB"), nTemp);
		nTotal[10] += nTemp;
		xls.SetCellText(nCol+10, nRow, double2str(nTemp), FMT_NUMBER1);
		
		rs.GetValue(_T("VIPC"), nTemp);
		nTotal[11] += nTemp;
		xls.SetCellText(nCol+11, nRow, double2str(nTemp), FMT_NUMBER1);

		rs.GetValue(_T("khoinoi"), nTemp);
		nTotal[12] += nTemp;

		rs.GetValue(_T("khoingoai"), nTemp);
		nTotal[13] += nTemp;

		nRow++;
		rs.MoveNext();
	}
	
	if (nTotal[1] > 0)
	{
		xls.SetCellText(1, nRow, _T("T\x1ED5ng \x63\x1ED9ng"), FMT_TEXT, true);
		for(int i = 2; i < 12; i++)
		{
			xls.SetCellText(i, nRow, double2str(nTotal[i]), FMT_NUMBER1, true);			
		}
		nRow++;
	}
	xls.SetCellText(1, nRow+1, _T("T\x1ED5ng s\x1ED1 \x62\x1EC7nh nh\xE2n kh\x1ED1i n\x1ED9i"), FMT_TEXT | FMT_WRAPING, true);
	xls.SetCellText(1, nRow+2, _T("T\x1ED5ng s\x1ED1 \x62\x1EC7nh nh\xE2n kh\x1ED1i ngo\x1EA1i"), FMT_TEXT | FMT_WRAPING, true);
	xls.SetCellText(2, nRow+1, double2str(nTotal[12]), FMT_NUMBER1, true);
	xls.SetCellText(2, nRow+2, double2str(nTotal[13]), FMT_NUMBER1, true);

	
	xls.Save(_T("Exports\\ThongKeDanhSachNguoiNhaOLaiPhongBenh2.xls"));
	
} 
/*void CTMDanhSachNNOLaiPB::OnFromDateChange(){
	
} */
/*void CTMDanhSachNNOLaiPB::OnFromDateSetfocus(){
	
} */
/*void CTMDanhSachNNOLaiPB::OnFromDateKillfocus(){
	
} */
int CTMDanhSachNNOLaiPB::OnFromDateCheckValue(){
	return 0;
} 
/*void CTMDanhSachNNOLaiPB::OnToDateChange(){
	
} */
/*void CTMDanhSachNNOLaiPB::OnToDateSetfocus(){
	
} */
/*void CTMDanhSachNNOLaiPB::OnToDateKillfocus(){
	
} */
int CTMDanhSachNNOLaiPB::OnToDateCheckValue(){
	return 0;
} 
int CTMDanhSachNNOLaiPB::OnAddTMDanhSachNNOLaiPB(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMDanhSachNNOLaiPB::OnEditTMDanhSachNNOLaiPB(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMDanhSachNNOLaiPB::OnDeleteTMDanhSachNNOLaiPB(){
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
 		OnCancelTMDanhSachNNOLaiPB();
 	}
	return 0;
}
int CTMDanhSachNNOLaiPB::OnSaveTMDanhSachNNOLaiPB(){
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
 		//OnTMDanhSachNNOLaiPBListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMDanhSachNNOLaiPB::OnCancelTMDanhSachNNOLaiPB(){
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
int CTMDanhSachNNOLaiPB::OnTMDanhSachNNOLaiPBListLoadData(){
	return 0;
}
CString CTMDanhSachNNOLaiPB::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CString szWhere;
	_fmsg(_T("\n Tu ngay %s Den ngay %s"), m_szFromDate, m_szToDate);
	
	szSQL.Format(_T(" SELECT deptid, ") \
				_T(" 	SUM(noitru+ngoaitru) as tongsobn,  ") \
				_T("	sum(olaidichvu+olaifree) as tongsonnol,") \
				_T(" 	sum(olaidichvu) as olaidichvu, ") \
				_T(" 	sum(olaifree) as olaifree, ") \
				_T(" 	SUM(CS1) as chamsoc1, ") \
				_T(" 	SUM(CS2) as chamsoc2, ") \
				_T(" 	SUM(CS3) as chamsoc3, ") \
				_T(" 	SUM(VIPA) AS VIPA, ") \
				_T(" 	SUM(VIPB) AS VIPB, ") \
				_T(" 	SUM(VIPC) AS VIPC, ") \
				_T("	sum(khoinoi) as khoinoi,  ") \
				_T("	sum(khoingoai) as khoingoai ") \
				_T(" 	FROM  ") \
				_T(" 	(  ") \
				_T(" 		SELECT  ") \
				_T(" 		( ") \
				_T(" 			select sd_name from sys_dept  ") \
				_T(" 			where hfe_deptid = sd_id  ") \
				_T(" 		) AS deptid,  ") \
				_T(" 		ss_desc AS goi,  ") \
				_T(" 		SUM(case when HTR_OUTPATIENT <> 'Y' then 1 else 0 end) as noitru,") \
				_T("		SUM(case when HTR_OUTPATIENT = 'Y' then 1 else 0 end) as ngoaitru, ") \
				_T(" 		case when hfel_itemid NOT IN('F0000100', 'F0000127') then 1 else 0 end AS olaidichvu, ") \
				_T(" 		case when hfel_itemid IN('F0000100', 'F0000127') then 1 else 0 end AS olaifree, ") \
				_T("		(  ") \
				_T("			select SUM(case when hsie_nurseassistance LIKE chr(37) ||'\x63\x1EA5p \x31'||chr(37) then 1 else 0 end)  ") \
				_T("			from hms_siexam  ") \
				_T("			where hsie_docno = hfe_docno AND hsie_deptid = hfe_deptid  ") \
				_T("		) AS CS1,  ") \
				_T("		(  ") \
				_T("			select SUM(case when hsie_nurseassistance LIKE chr(37) ||'\x63\x1EA5p \x32'||chr(37) then 1 else 0 end)  ") \
				_T("			from hms_siexam  ") \
				_T("			where hsie_docno = hfe_docno AND hsie_deptid = hfe_deptid  ") \
				_T("		) AS CS2,  ") \
				_T("		(  ") \
				_T("			select SUM(case when hsie_nurseassistance LIKE chr(37) ||'\x63\x1EA5p \x33'||chr(37) then 1 else 0 end)  ") \
				_T("			from hms_siexam  ") \
				_T("			where hsie_docno = hfe_docno AND hsie_deptid = hfe_deptid  ") \
				_T("		) AS CS3,  ") \
				_T(" 		SUM(case when hfel_itemid = 'F0000108' then 1 else 0 end) AS VIPA, ") \
				_T(" 		SUM(case when hfel_itemid = 'F0000109' then 1 else 0 end) AS VIPB, ") \
				_T(" 		SUM(case when hfel_itemid = 'F0000110' then 1 else 0 end) AS VIPC, ") \
				_T("		SUM(case when sd_category = '0' then 1 else 0 end) AS khoinoi, ") \
				_T("		SUM(case when sd_category = '1' then 1 else 0 end) AS khoingoai ") \
				_T(" 		FROM  ") \
				_T(" 		VIMES.HMS_FEE_EXTRA  ") \
				_T(" 		LEFT JOIN VIMES.HMS_FEE_EXTRALINE ON (hfel_fee_extra_id = hfe_fee_extra_id)  ") \
				_T(" 		LEFT JOIN sys_sel ON (ss_id = 'HMS_SERVICE_PACKAGE' and ss_code = hfel_itemid)  ") \
				_T(" 		LEFT JOIN VIMES.HMS_TREATMENT_RECORD ON(hfe_docno = HTR_DOCNO and hfe_deptid = htr_deptid and nvl(hfe_refidx, 1) = htr_idx)  ") \
				_T(" 		LEFT JOIN VIMES.HMS_CLINICAL_RECORD ON(hfe_docno = VIMES.HMS_CLINICAL_RECORD.HCR_DOCNO)  ") \
				_T("		LEFT JOIN sys_dept ON (sd_id = hfe_deptid) ") \
				_T(" 		WHERE  ") \
				_T(" 		hfe_orderdate BETWEEN to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
				_T(" 		AND to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS')  ") \
				_T(" 		and nvl(hfel_status, 'O') NOT IN ('O', 'C')  ") \
				_T(" 		and hfel_itemid in ('F0000100', 'F0000127', 'F0000177', 'F0000266', 'F0000096', 'F0000108', 'F0000109','F0000110')  ") \
				_T(" 		GROUP BY  ") \
				_T(" 		hfe_deptid, ss_desc, hfe_docno, hfel_itemid, sd_category ") \
				_T(" 	)  ") \
				_T(" 	GROUP BY deptid ") \
				_T(" 	ORDER BY deptid "),  m_szFromDate, m_szToDate);
	
	return szSQL;
}