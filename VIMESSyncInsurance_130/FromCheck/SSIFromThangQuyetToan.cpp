#include "SSIFromThangQuyetToan.h"
#include "../MainFrm.h"
#include "Excel.h"

static void _OnExportSelectFnc(CWnd *pWnd){
	CSSIFromThangQuyetToan *pVw = (CSSIFromThangQuyetToan *)pWnd;
	pVw->OnExportSelect();
} 
static int _OnYearCheckValueFnc(CWnd *pWnd){
	return ((CSSIFromThangQuyetToan *)pWnd)->OnYearCheckValue();
} 
static int _OnAddSSIFromThangQuyetToanFnc(CWnd *pWnd){
	 return ((CSSIFromThangQuyetToan*)pWnd)->OnAddSSIFromThangQuyetToan();
} 
static int _OnEditSSIFromThangQuyetToanFnc(CWnd *pWnd){
	 return ((CSSIFromThangQuyetToan*)pWnd)->OnEditSSIFromThangQuyetToan();
} 
static int _OnDeleteSSIFromThangQuyetToanFnc(CWnd *pWnd){
	 return ((CSSIFromThangQuyetToan*)pWnd)->OnDeleteSSIFromThangQuyetToan();
} 
static int _OnSaveSSIFromThangQuyetToanFnc(CWnd *pWnd){
	 return ((CSSIFromThangQuyetToan*)pWnd)->OnSaveSSIFromThangQuyetToan();
} 
static int _OnCancelSSIFromThangQuyetToanFnc(CWnd *pWnd){
	 return ((CSSIFromThangQuyetToan*)pWnd)->OnCancelSSIFromThangQuyetToan();
} 
CSSIFromThangQuyetToan::CSSIFromThangQuyetToan(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CSSIFromThangQuyetToan::~CSSIFromThangQuyetToan(){
}
void CSSIFromThangQuyetToan::OnCreateComponents(){
	m_wndReportPeriodLabel.Create(this, _T("Điều kiện báo cáo: "), 5, 5, 445, 25);
	
	m_wndMonthLabel.Create(this, _T("Tháng QT"), 10, 30, 85, 55);
	m_wndMonth.Create(this,90, 30, 200, 55);
	
	m_wndYearLabel.Create(this, _T("Năm QT"), 230, 30, 305, 55);
	m_wndYear.Create(this,310, 30, 440, 55);

	m_wndExport.Create(this, _T("&Xuất"), 350, 65, 440, 90);

	SetMode(VM_EDIT);

}
void CSSIFromThangQuyetToan::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetLimitText(16);
	m_wndYear.SetCheckValue(false);

	m_wndMonth.SetLimitText(16);
	m_wndMonth.SetCheckValue(false);
}
void CSSIFromThangQuyetToan::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndYear.SetEvent(WE_CHECKVALUE, _OnYearCheckValueFnc);
	m_wndExport.SetEvent(WE_CLICK, _OnExportSelectFnc);
}
void CSSIFromThangQuyetToan::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndYear.GetDlgCtrlID(), m_nYear);
	DDX_Text(pDX, m_wndMonth.GetDlgCtrlID(), m_nMonth);
}
void CSSIFromThangQuyetToan::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	/*szSQL.Format(_T("SELECT ho_docno AS docno, get_patientname(ho_docno) patient_name, (select hfl_name from hms_fee_list where hfl_feeid = ho_itemid) opt_name ") \
				 _T("FROM hms_operation WHERE ho_idx = %ld"), m_nOrderID);*/
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("patient_name"), m_szPatientName);
		rs.GetValue(_T("opt_name"), m_szOptName);
		rs.GetValue(_T("docno"), m_nDocNo);
	}		

}
void CSSIFromThangQuyetToan::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CSSIFromThangQuyetToan::SetDefaultValues(){

	m_nYear = 0;
	m_nMonth = 0;
}
int CSSIFromThangQuyetToan::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
		CDate date;
		date.ParseDate(pMF->GetSysDate());
		CString szSysDate = pMF->GetSysDate();

  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 3, 4, -1);
			m_nYear = date.GetYear();
			m_nMonth = date.GetMonth();
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

int CSSIFromThangQuyetToan::OnYearCheckValue(){
	long nYear = m_nYear;
	return 0;
} 

void CSSIFromThangQuyetToan::OnExportSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	BeginWaitCursor();
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CString tmpStr,szSQL,szWhere;

	int nCount=0 ;
	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);

	int nRow=1,nCol=0;
		
	if(m_nMonth < 10)
	{
		szWhere.AppendFormat(_T(" AND SUBSTR(ngay_ttoan, 6, 1) = '%ld' AND nam_qt = '%ld' "),m_nMonth, m_nYear);
	}
	else {
		szWhere.AppendFormat(_T(" AND SUBSTR(ngay_ttoan, 5, 2) = '%ld'  AND nam_qt = '%ld' "),m_nMonth, m_nYear);
	}
	szSQL.Format(
		_T(" SELECT ") \
		_T(" 	ma_lk,ma_bn, ho_ten, substr(ngay_sinh,1,8) as ngay_sinh, ") \
		_T(" 	gioi_tinh, dia_chi, ma_the_bhyt, ma_dkbd, gt_the_tu, gt_the_den, ") \
		_T(" 	ma_benh_chinh, ma_benh_kt , ma_doituong_kcb, ") \
		_T(" 	CASE  WHEN hd_sameinslevel = 'Y' THEN 4 ") \
		_T(" 					WHEN hd_emergency = 'Y' THEN 2 ") \
		_T(" 					WHEN hd_insline = 'Y' THEN 3 ") \
		_T(" 					ELSE 1 ") \
		_T(" 					END AS ma_lydo_vvien, ") \
		_T(" 					ly_do_vv, ma_noi_di, ") \
		_T(" 	ngay_vao, ngay_ra, so_ngay_dtri,") \
		_T(" 	ket_qua_dtri, ma_loai_rv, ") \
		_T(" 	SUM(cost) AS t_tongchi, ") \
		_T(" 	ROUND(SUM(testfee), 2) AS t_xn,") \
		_T(" 	ROUND(SUM(pacsfee), 2) AS t_cdha, ") \
		_T(" 	ROUND(SUM(drugfee), 2) AS t_thuoc, ROUND(SUM(bloodfee), 2) AS t_mau,") \
		_T(" 	ROUND(SUM(normtechfee), 2) + ROUND(SUM(hitechfee), 2) AS t_pttt, ") \
		_T(" 	ROUND(SUM(materialfee), 2) AS t_vtyt,") \
		_T(" 	ROUND(SUM(dvkt_tyle), 2) AS t_dvkt_tyle, ") \
		_T(" 	ROUND(SUM(drugfeek), 0) AS t_thuoc_tyle, ") \
		_T(" 	ROUND(SUM(vtyt_tyle), 0) AS t_vtyt_tyle,") \
		_T(" 	ROUND(SUM(examfee), 2) AS t_kham, ") \
		_T(" 	ROUND(SUM(bedfee), 2) AS t_giuong, ") \
		_T(" 	ROUND(SUM(transportfee), 2) AS t_vchuyen,") \
		_T(" 	ROUND(SUM(patpaid + difpaid), 2) AS t_bntt, ") \
		_T(" 	ROUND(SUM(discount), 2) AS t_bhtt, t_ngoaids, ") \
		_T(" 	ma_khoa, nam_qt, SUBSTR(ngay_ttoan, 5, 2) AS thang_qt, ngay_ttoan AS ngay_tt,") \
		_T(" 	ma_khuvuc, ma_loai_kcb, ma_cskcb,t_nguonkhac") \
		_T(" FROM (") \
		_T(" SELECT a.ma_lk as ma_lk, ma_bn, ho_ten, ngay_sinh, gioi_tinh, dia_chi, ma_the_bhyt, ma_dkbd, gt_the_tu, gt_the_den,") \
		_T(" 			 ma_benh_chinh, ma_benh_kt, ma_doituong_kcb,ly_do_vv, ma_noi_di, ngay_vao, ngay_ra, so_ngay_dtri,") \
		_T(" 			 ket_qua_dtri, ma_loai_rv, a.ma_khoa, nam_qt, ngay_ttoan, ma_khuvuc, ma_loai_kcb, ma_cskcb,") \
		_T(" 			 CASE WHEN ma_nhom IN ('4', '5') THEN thanh_tien_bh ELSE 0 END AS drugfee,") \
		_T(" 			 CASE WHEN ma_nhom IN ('6') THEN thanh_tien_bh ELSE 0 END AS drugfeek,") \
		_T(" 			 CASE WHEN ma_nhom IN ('7', '17') THEN thanh_tien_bh ELSE 0 END AS bloodfee,") \
		_T(" 			 CASE WHEN ma_nhom IN ('1') THEN thanh_tien_bh ELSE 0 END AS testfee,") \
		_T(" 			 CASE WHEN ma_nhom IN ('2', '3') THEN thanh_tien_bh ELSE 0 END AS pacsfee,") \
		_T(" 			 CASE WHEN ma_nhom IN ('8', '18') AND hfl_hitech <> 'Y' THEN thanh_tien_bh ELSE 0 END AS normtechfee,") \
		_T(" 			 CASE WHEN ma_nhom IN ('8', '18') AND hfl_hitech = 'Y' THEN thanh_tien_bh ELSE 0 END AS hitechfee,") \
		_T(" 			 CASE WHEN ma_nhom IN ('9') THEN thanh_tien_bh ELSE 0 END AS dvkt_tyle,") \
		_T(" 			 CASE WHEN ma_nhom IN ('10') THEN thanh_tien_bh ELSE 0 END AS materialfee,") \
		_T(" 			 CASE WHEN ma_nhom IN ('11') THEN thanh_tien_bh ELSE 0 END AS vtyt_tyle,") \
		_T(" 			 CASE WHEN ma_nhom IN ('13') THEN thanh_tien_bh ELSE 0 END AS examfee,") \
		_T(" 			 CASE WHEN ma_nhom IN ('12') THEN thanh_tien_bh ELSE 0 END AS transportfee,") \
		_T(" 			 CASE WHEN ma_nhom IN ('15', '14') THEN thanh_tien_bh ELSE 0 END AS bedfee,") \
		_T(" 			 CASE WHEN ma_nhom NOT IN ('1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '15', '14', '17', '18') ") \
		_T(" 				THEN thanh_tien_bh ELSE 0 END AS otherfee, ") \
		_T(" 			 thanh_tien_bh AS cost, ") \
		_T(" 			 b.t_bhtt AS discount, ") \
		_T(" 			 b.t_bncct AS patpaid, ") \
		_T(" 			 b.t_bntt AS difpaid,") \
		_T(" 			 b.t_bncct + b.t_bntt AS patdebt, ") \
		_T(" 			 0 AS t_ngoaids, a.t_nguonkhac") \
		_T(" FROM bh_xml_1 a") \
		_T(" JOIN bh_130_view b ON a.ma_lk = b.ma_lk") \
		_T(" LEFT JOIN hms_fee_list ON hfl_feeid = b.ma_dich_vu_cs ") \
		_T(" WHERE trangthai <> 'D' %s   ") \
		_T(" ) tbl") \
		_T(" LEFT JOIN hms_doc ON hd_docno = CAST(ma_lk AS INTEGER)") \
		_T(" LEFT JOIN hms_card ON hc_cardno = hd_cardno AND hc_patientno = hd_patientno AND hc_idx = hd_cardidx") \
		_T(" WHERE 1=1 ") \
		_T(" GROUP BY ma_bn, ma_lk, ho_ten, ngay_sinh, gioi_tinh, dia_chi, ma_the_bhyt, ma_dkbd, gt_the_tu, gt_the_den,") \
		_T(" 		 ma_benh_kt, ma_benh_chinh, ma_doituong_kcb,ma_lydo_vvien,ly_do_vv, ma_noi_di, ngay_vao, ngay_ra, so_ngay_dtri, ket_qua_dtri, ma_loai_rv,") \
		_T(" 		 ma_khoa, nam_qt, thang_qt, ngay_ttoan, ma_khuvuc, ma_loai_kcb, ") \
		_T("		 ma_cskcb, t_ngoaids, t_nguonkhac, hd_insline, hc_line, hc_groupid"),szWhere);

	_tprintf(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);
	nRow=1;
	xls.SetCellText(nCol,nRow,_T("STT"),FMT_TEXT|FMT_CENTER,true,12);
int nType=0;
	for(int i=0;i <rs.GetFieldCount();i++)
	{	
		nType = rs.GetFieldType(i);
		if (nType == 18 ||nType == 256 )
			xls.SetColumnWidth(i+1,30);
		else if (nType == 2048)
			xls.SetColumnWidth(i+1,20);
		else
			xls.SetColumnWidth(i+1,15);
		xls.SetCellText(i+1, 0, rs.GetFieldName(i), FMT_TEXT | FMT_CENTER,true,12);

		//xls.SetCellText(i+1,nRow,rs.GetFieldName(i),FMT_TEXT|FMT_CENTER,true,12);
	}
	int nIndex=1;
	CString szFieldName;
	while(!rs.IsEOF())
	{
		nRow++;
		tmpStr.Format(_T("%d"),nIndex++);
		xls.SetCellText(nCol,nRow,tmpStr,FMT_TEXT|FMT_CENTER,false);
		for(int i=0;i <rs.GetFieldCount();i++)
		{	

			szFieldName = rs.GetFieldName(i);
			nType = rs.GetFieldType(i);
		
			if (nType == 18 ||nType == 256 || nType == 32 )
				xls.SetCellText(i+1, nRow, rs.GetValue(szFieldName), FMT_TEXT);
			else if (nType == 2048)
				xls.SetCellText(i+1, nRow, rs.GetValue(szFieldName), FMT_DATE);
			else
				xls.SetCellText(i+1, nRow, rs.GetValue(szFieldName), FMT_NUMBER1);

			//xls.SetCellText(i+1,nRow,rs.GetValue(rs.GetFieldName(i)),FMT_TEXT|FMT_CENTER,false);
		}
		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\XuatBHYT7980.XLS"));	
} 

int CSSIFromThangQuyetToan::ConfirmUpdate(){
	CString szMsg;
	szMsg.Format(_T("- \x42\x1EC7nh nh\xE2n: %s\n- Ph\x1EABu thu\x1EADt: %s\n. \x58\xE1\x63 nh\x1EADn \x78\xF3\x61?"), m_szPatientName, m_szOptName);
	if (ShowMessageBox(szMsg, MB_YESNO) == IDNO)
		return -1;
	return 1;
}

int CSSIFromThangQuyetToan::OnUpdate(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	//szSQL.Format(_T("UPDATE hms_operation SET ho_status = 'S' WHERE ho_idx = %ld"), m_nOrderID);

	CString szDesc;
	//Luu lai thong tin nguoi sua
	szDesc.Empty();
	//szDesc.Format(_T("Mã HS[%ld] Mã yêu cầu[%ld] - Sửa trạng thái PTTT"), m_nDocNo, m_nOrderID);
	pMF->SystemLog(_T("Update"), szDesc);

	return ((CMainFrame*) AfxGetMainWnd())->ExecSQL(szSQL);

}

int CSSIFromThangQuyetToan::OnAddSSIFromThangQuyetToan(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CSSIFromThangQuyetToan::OnEditSSIFromThangQuyetToan(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CSSIFromThangQuyetToan::OnDeleteSSIFromThangQuyetToan(){
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
 		OnCancelSSIFromThangQuyetToan();
 	}
	return 0;
}
int CSSIFromThangQuyetToan::OnSaveSSIFromThangQuyetToan(){
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
 		//OnSSIFromThangQuyetToanListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CSSIFromThangQuyetToan::OnCancelSSIFromThangQuyetToan(){
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
int CSSIFromThangQuyetToan::OnSSIFromThangQuyetToanListLoadData(){
	return 0;
}
