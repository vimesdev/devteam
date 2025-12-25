#include "stdafx.h"
#include "IVFStorageView_v2_Report.h"
#include "HMSMainFrame.h"
static void _OnThietBiTruSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CIVFStorageView_v2_Report* )pWnd)->OnThietBiTruSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnThietBiTruSelendokFnc(CWnd *pWnd){
	((CIVFStorageView_v2_Report *)pWnd)->OnThietBiTruSelendok();
}
/*static void _OnThietBiTruSetfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2_Report *)pWnd)->OnThietBiTruKillfocus();
}*/
/*static void _OnThietBiTruKillfocusFnc(CWnd *pWnd){
	((CIVFStorageView_v2_Report *)pWnd)->OnThietBiTruKillfocus();
}*/
static long _OnThietBiTruLoadDataFnc(CWnd *pWnd){
	return ((CIVFStorageView_v2_Report *)pWnd)->OnThietBiTruLoadData();
}
/*static void _OnThietBiTruAddNewFnc(CWnd *pWnd){
	((CIVFStorageView_v2_Report *)pWnd)->OnThietBiTruAddNew();
}*/
static void _OnTrutinhtrungSelectFnc(CWnd *pWnd){
	 ((CIVFStorageView_v2_Report*)pWnd)->OnTrutinhtrungSelect();
}
static void _OnExpiredSelectFnc(CWnd *pWnd){
	 ((CIVFStorageView_v2_Report*)pWnd)->OnExpiredSelect();
}
static void _OnNearlyExpiredSelectFnc(CWnd *pWnd){
	 ((CIVFStorageView_v2_Report*)pWnd)->OnNearlyExpiredSelect();
}
static void _OnExpiredInMonthSelectFnc(CWnd *pWnd){
	 ((CIVFStorageView_v2_Report*)pWnd)->OnExpiredInMonthSelect();
}
static void _OnExPortSelectFnc(CWnd *pWnd){
	CIVFStorageView_v2_Report *pVw = (CIVFStorageView_v2_Report *)pWnd;
	pVw->OnExPortSelect();
} 
static int _OnAddCIVFStorageView_v2_ReportFnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2_Report*)pWnd)->OnAddCIVFStorageView_v2_Report();
} 
static int _OnEditCIVFStorageView_v2_ReportFnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2_Report*)pWnd)->OnEditCIVFStorageView_v2_Report();
} 
static int _OnDeleteCIVFStorageView_v2_ReportFnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2_Report*)pWnd)->OnDeleteCIVFStorageView_v2_Report();
} 
static int _OnSaveCIVFStorageView_v2_ReportFnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2_Report*)pWnd)->OnSaveCIVFStorageView_v2_Report();
} 
static int _OnCancelCIVFStorageView_v2_ReportFnc(CWnd *pWnd){
	 return ((CIVFStorageView_v2_Report*)pWnd)->OnCancelCIVFStorageView_v2_Report();
} 
CIVFStorageView_v2_Report::CIVFStorageView_v2_Report(CWnd *pWnd)
{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CIVFStorageView_v2_Report::~CIVFStorageView_v2_Report()
{
}
void CIVFStorageView_v2_Report::OnCreateComponents(){
	m_wndThietBiTru.Create(this,95, 29, 420, 54); 
	m_wndThietBiTruLabel.Create(this, _T("Thiết bị trữ"), 11, 31, 91, 56);
	m_wndTrutinhtrung.Create(this, _T("Trữ tinh trùng"), 10, 66, 420, 91);
	m_wndExpired.Create(this, _T("Expired"), 10, 97, 420, 122);
	m_wndNearlyExpired.Create(this, _T("Expired in 15 days"), 10, 128, 420, 153);
	m_wndExpiredInMonth.Create(this, _T("Expired in Month"), 10, 159, 420, 184);
	m_wndExPort.Create(this, _T("ExPortXLS"), 283, 190, 421, 215);
	m_wndReportInformation.Create(this, _T("Report Information"), 7, 4, 422, 218);

	m_wndThietBiTru.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndThietBiTru.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

}
void CIVFStorageView_v2_Report::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndThietBiTru.SetCheckValue(true);
	m_wndThietBiTru.LimitText(1024);

	

}
void CIVFStorageView_v2_Report::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndThietBiTru.SetEvent(WE_SELENDOK, _OnThietBiTruSelendokFnc);
	//m_wndThietBiTru.SetEvent(WE_SETFOCUS, _OnThietBiTruSetfocusFnc);
	//m_wndThietBiTru.SetEvent(WE_KILLFOCUS, _OnThietBiTruKillfocusFnc);
	m_wndThietBiTru.SetEvent(WE_SELCHANGE, _OnThietBiTruSelectChangeFnc);
	m_wndThietBiTru.SetEvent(WE_LOADDATA, _OnThietBiTruLoadDataFnc);
	//m_wndThietBiTru.SetEvent(WE_ADDNEW, _OnThietBiTruAddNewFnc);
	m_wndTrutinhtrung.SetEvent(WE_CLICK, _OnTrutinhtrungSelectFnc);
	m_wndExpired.SetEvent(WE_CLICK, _OnExpiredSelectFnc);
	m_wndNearlyExpired.SetEvent(WE_CLICK, _OnNearlyExpiredSelectFnc);
	m_wndExpiredInMonth.SetEvent(WE_CLICK, _OnExpiredInMonthSelectFnc);
	m_wndExPort.SetEvent(WE_CLICK, _OnExPortSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddCIVFStorageView_v2_ReportFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditCIVFStorageView_v2_ReportFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteCIVFStorageView_v2_ReportFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveCIVFStorageView_v2_ReportFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelCIVFStorageView_v2_ReportFnc, 0, 'T', VK_CONTROL);
	

}
void CIVFStorageView_v2_Report::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndThietBiTru.GetDlgCtrlID(), m_szThietBiTruKey);
	DDX_Check(pDX, m_wndTrutinhtrung.GetDlgCtrlID(), m_bTrutinhtrung);
	DDX_Check(pDX, m_wndExpired.GetDlgCtrlID(), m_bExpired);
	DDX_Check(pDX, m_wndNearlyExpired.GetDlgCtrlID(), m_bNearlyExpired);
	DDX_Check(pDX, m_wndExpiredInMonth.GetDlgCtrlID(), m_bExpiredInMonth);

}
void CIVFStorageView_v2_Report::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("ThietBiTru")] =  m_szThietBiTruKey;
	m_jData[_T("Trutinhtrung")] =  m_bTrutinhtrung;
	m_jData[_T("Expired")] =  m_bExpired;
	m_jData[_T("NearlyExpired")] =  m_bNearlyExpired;
	m_jData[_T("ExpiredInMonth")] =  m_bExpiredInMonth;
	}
	else
	{
			
	m_jData[_T("ThietBiTru")].GetValue(m_szThietBiTruKey);
	m_jData[_T("Trutinhtrung")].GetValue(m_bTrutinhtrung);
	m_jData[_T("Expired")].GetValue(m_bExpired);
	m_jData[_T("NearlyExpired")].GetValue(m_bNearlyExpired);
	m_jData[_T("ExpiredInMonth")].GetValue(m_bExpiredInMonth);
	}

}
void CIVFStorageView_v2_Report::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFStorageView_v2_Report::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CIVFStorageView_v2_Report::SetDefaultValues(){

	m_szThietBiTruKey.Empty();
	m_bTrutinhtrung=FALSE;
	m_bExpired=FALSE;
	m_bNearlyExpired=FALSE;
	m_bExpiredInMonth=FALSE;

}
int CIVFStorageView_v2_Report::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{ 		
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
void CIVFStorageView_v2_Report::OnThietBiTruSelectChange(int nOldItemSel, int nNewItemSel){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
void CIVFStorageView_v2_Report::OnThietBiTruSelendok(){
	 
}
/*void CIVFStorageView_v2_Report::OnThietBiTruSetfocus(){
	
}*/
/*void CIVFStorageView_v2_Report::OnThietBiTruKillfocus(){
	
}*/
long CIVFStorageView_v2_Report::OnThietBiTruLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();	
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndThietBiTru.IsSearchKey() && !m_szThietBiTruKey.IsEmpty())
	{
		szWhere.Format(_T(" and id='%s' "), m_szThietBiTruKey);
	};
	szSQL.Format(_T("SELECT ivf_storage_thung_id as id, description FROM ivf_storage_thung  WHERE isactive='Y'  ORDER BY ivf_storage_thung_id "));
	m_wndThietBiTru.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndThietBiTru.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CIVFStorageView_v2_Report::OnThietBiTruAddNew(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} */
	void CIVFStorageView_v2_Report::OnTrutinhtrungSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CIVFStorageView_v2_Report::OnExpiredSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CIVFStorageView_v2_Report::OnNearlyExpiredSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
	void CIVFStorageView_v2_Report::OnExpiredInMonthSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
}
void CIVFStorageView_v2_Report::OnExPortSelect()
{
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
	if (m_bTrutinhtrung)
	{
		if (!xls.Load(_T("Exports\\DANHSACHBENHNHANHETHAN_CANHAN_TRUTT.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));
	}
	else
	{
		if (!xls.Load(_T("Exports\\DANHSACHBENHNHANHETHAN_CANHAN_TRUPHOI.xls"))) AfxMessageBox(_T("\x43h\x1B0\x61 \x63\xF3 \x66il\x65 trong th\x1B0 m\x1EE5\x63 Exports"));
	}
	xls.SetWorksheet(0);
	xls.SetCellText(0, 0, pMF->m_szHealthService, FMT_TEXT | FMT_CENTER, true, 10);
	xls.SetCellText(0, 1, pMF->m_szHospitalName, FMT_TEXT | FMT_CENTER, true, 10);	
	//tmpStr.Format(_T("T\x1EEB %s \x110\x1EBFn %s"), CDateTime::Convert(m_szFromDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss), CDateTime::Convert(m_szToDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	//xls.SetCellText(0, 5, tmpStr, FMT_TEXT | FMT_CENTER, true, 11);

	szSQL = GetQueryString();	
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	
	nRow = 9;
	nCol = 0;
	while(!rs.IsEOF())
	{
		xls.SetCellText(nCol+0, nRow, int2str(nIdx++), FMT_INTEGER);

		rs.GetValue(_T("thungtru"), tmpStr);
		xls.SetCellText(nCol+1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("nhan_cassette"), tmpStr);
		xls.SetCellText(nCol+2, nRow, tmpStr, FMT_TEXT);
		
		rs.GetValue(_T("sophoi"), tmpStr);
		xls.SetCellText(nCol+3, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("sophoi_ra"), tmpStr);
		xls.SetCellText(nCol+4, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("order_id"), tmpStr);
		xls.SetCellText(nCol+5, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("docno"), tmpStr);
		xls.SetCellText(nCol+6, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("pname"), tmpStr);
		xls.SetCellText(nCol+7, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("yob"), tmpStr);
		xls.SetCellText(nCol+8, nRow, tmpStr, FMT_INTEGER | FMT_CENTER);

		rs.GetValue(_T("gender"), tmpStr);
		xls.SetCellText(nCol+9, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("ngay_het_han"), tmpStr);
		xls.SetCellText(nCol+10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("phone"), tmpStr);
		xls.SetCellText(nCol+11, nRow, tmpStr, FMT_TEXT);		

		nRow++;
		rs.MoveNext();
	}
	
	if (m_bTrutinhtrung)
	{
		xls.Save(_T("Exports\\DANHSACHBENHNHANHETHAN_CANHAN_TRUTT2.xls"));
	}
	
	else
	{
		xls.Save(_T("Exports\\DANHSACHBENHNHANHETHAN_CANHAN_TRUPHOI2.xls"));
	}
} 
int CIVFStorageView_v2_Report::OnAddCIVFStorageView_v2_Report(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFStorageView_v2_Report::OnEditCIVFStorageView_v2_Report(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFStorageView_v2_Report::OnDeleteCIVFStorageView_v2_Report(){
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
 		OnCancelCIVFStorageView_v2_Report();
 	}
	return 0;
}
int CIVFStorageView_v2_Report::OnSaveCIVFStorageView_v2_Report(){
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
 		//OnCIVFStorageView_v2_ReportListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFStorageView_v2_Report::OnCancelCIVFStorageView_v2_Report(){
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
int CIVFStorageView_v2_Report::OnCIVFStorageView_v2_ReportListLoadData()
{
	return 0;
}
CString CIVFStorageView_v2_Report::GetQueryString()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szSQL, szWhere,szWhere1, szDepts, szTemp, szExpired;
    szWhere.Empty();
	if(!m_szThietBiTruKey.IsEmpty())
	{
		szWhere.Format(_T(" and id_thungtru = '%s' "), m_szThietBiTruKey);
	}

	szExpired.Empty();
	if (m_bExpired && m_bNearlyExpired)
	{
		szExpired.Format(_T(" AND (sysdate >= ngay_het_han OR (sysdate >= ngay_het_han- interval '15' day AND sysdate < ngay_het_han))"));
	}
	else if (m_bExpired && m_bExpiredInMonth)
	{
		szExpired.Format(_T(" AND (sysdate >= ngay_het_han OR (sysdate >= ngay_het_han- interval '30' day AND sysdate < ngay_het_han))"));
	}
	else
	{
		if (m_bExpired)
		{
			szExpired.Format(_T(" AND sysdate >= ngay_het_han "));
		}
		if (m_bNearlyExpired)
		{
			szExpired.Format(_T(" AND (sysdate >= ngay_het_han- interval '15' day AND sysdate < ngay_het_han) "));
		}
		if (m_bExpiredInMonth)
		{
			szExpired.Format(_T(" AND (sysdate >= ngay_het_han- interval '30' day AND sysdate < ngay_het_han) "));
		}
	}

	if (m_bTrutinhtrung)
		{
			szWhere.AppendFormat(_T(" and nhan_thanh is not null"));
		}
		else
		{
			szWhere.AppendFormat(_T(" and nhan_thanh is null"));
		}

szSQL.Format(_T(" SELECT") \
					_T("     id_thungtru, DESCRIPTION as thungtru,") \
					_T("     id_giatru,") \
					_T("     id_cassette,") \
					_T("     docno, order_id, ") \
					_T("     hp_surname") \
					_T("     || ' '") \
					_T("     || hp_midname") \
					_T("     || ' '") \
					_T("     || hp_firstname AS pname,") \
					_T("     to_char(hp_birthdate, 'YYYY') AS yob,") \
					_T("     hms_getsex(hp_sex) AS gender,") \
					_T("     to_char(ngay_het_han,'DD/MM/YYYY') as ngay_het_han, ") \
					_T("	  case when sysdate >= ngay_het_han then 1 else 0 end as het_han,") \
					_T("	   CASE WHEN sysdate >= ngay_het_han- interval '15' day AND sysdate < ngay_het_han THEN 1 ELSE 0 END AS can_han,") \
					_T("	   CASE WHEN sysdate >= ngay_het_han- interval '30' day AND sysdate < ngay_het_han THEN 1 ELSE 0 END AS can_han_thang,") \
					_T("	 ivf_get_sel('ivf_nhan_cassette', NVL(nhan_cassette, nhan_thanh)) as nhan_cassette,") \
					_T("     SUM(sophoi) AS sophoi,") \
					_T("	 SUM(the_tich) AS the_tich,") \
					_T("	 SUM(case when status = 'R' then sophoi else 0 end) as sophoi_ra, hd_telephone ||'/'|| HD_CONTACTTEL as phone") \
					_T(" FROM") \
					_T("     ivf_storage_top top ") \
					_T("     LEFT JOIN hms_doc ON ( hd_docno = docno )") \
					_T("     LEFT JOIN hms_patient ON ( hp_patientno = hd_patientno )") \
					_T("     LEFT JOIN ivf_storage_thung ON (ivf_storage_thung_id = id_thungtru)") \
					_T(" WHERE 1=1") \
					_T("     %s") \
					_T("     %s %s") \
					_T("	 AND status = 'O' ") \
					_T(" GROUP BY") \
					_T("     id_thungtru, DESCRIPTION,") \
					_T("     id_giatru,") \
					_T("     id_cassette,") \
					_T("     docno, order_id, ") \
					_T("     hp_surname") \
					_T("     || ' '") \
					_T("     || hp_midname") \
					_T("     || ' '") \
					_T("     || hp_firstname,") \
					_T("     to_char(hp_birthdate, 'YYYY'),") \
					_T("     hms_getsex(hp_sex), hd_telephone, HD_CONTACTTEL,") \
					_T("     ngay_het_han, nhan_cassette, nhan_thanh"), szWhere, szExpired, szWhere);
	return szSQL;
}