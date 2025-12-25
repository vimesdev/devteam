#include "stdafx.h"
#include "TMChoosePrintDateDlg.h"
#include "HMSMainFrame.h"


static long _OnPrintDateListLoadDataFnc(CWnd *pWnd){
	return ((CTMChoosePrintDateDlg*)pWnd)->OnPrintDateListLoadData();
} 
static void _OnPrintDateListDblClickFnc(CWnd *pWnd){
	((CTMChoosePrintDateDlg*)pWnd)->OnPrintDateListDblClick();
} 
static void _OnPrintDateListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CTMChoosePrintDateDlg*)pWnd)->OnPrintDateListSelectChange(nOldItem, nNewItem);
} 
static int _OnPrintDateListDeleteItemFnc(CWnd *pWnd){
	 return ((CTMChoosePrintDateDlg*)pWnd)->OnPrintDateListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CTMChoosePrintDateDlg *pVw = (CTMChoosePrintDateDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnAllDoctorSelectFnc(CWnd *pWnd){
	((CTMChoosePrintDateDlg*)pWnd)->OnAllDoctorSelect();
}
static int _OnPrintDateListCheckAllFnc(CWnd *pWnd){
	return ((CTMChoosePrintDateDlg*)pWnd)->OnPrintDateListCheckAll();
}
static int _OnPrintDateListUnCheckAllFnc(CWnd *pWnd){
	return ((CTMChoosePrintDateDlg*)pWnd)->OnPrintDateListUnCheckAll();
}
static int _OnAddTMChoosePrintDateDlgFnc(CWnd *pWnd){
	 return ((CTMChoosePrintDateDlg*)pWnd)->OnAddTMChoosePrintDateDlg();
} 
static int _OnEditTMChoosePrintDateDlgFnc(CWnd *pWnd){
	 return ((CTMChoosePrintDateDlg*)pWnd)->OnEditTMChoosePrintDateDlg();
} 
static int _OnDeleteTMChoosePrintDateDlgFnc(CWnd *pWnd){
	 return ((CTMChoosePrintDateDlg*)pWnd)->OnDeleteTMChoosePrintDateDlg();
} 
static int _OnSaveTMChoosePrintDateDlgFnc(CWnd *pWnd){
	 return ((CTMChoosePrintDateDlg*)pWnd)->OnSaveTMChoosePrintDateDlg();
} 
static int _OnCancelTMChoosePrintDateDlgFnc(CWnd *pWnd){
	 return ((CTMChoosePrintDateDlg*)pWnd)->OnCancelTMChoosePrintDateDlg();
} 
CTMChoosePrintDateDlg::CTMChoosePrintDateDlg(CWnd *pParent, CString szType):
	CGuiDialog(pParent){
	m_szType = szType;
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CTMChoosePrintDateDlg::~CTMChoosePrintDateDlg(){
}
void CTMChoosePrintDateDlg::OnCreateComponents(){
	m_wndChoosePrintDate.Create(this, _T("Chọn phiếu in"), 5, 5, 505, 260);
	m_wndPrintDateList.Create(this,10, 29, 500, 254); 
	m_wndPrint.Create(this, _T("Print"), 420, 265, 500, 290);
	m_wndAllDoctor.Create(this, _T("Tất cả bác sĩ"), 10, 265, 150, 290);
}
void CTMChoosePrintDateDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndPrintDateList.SetCheckBox(true);
	
	m_wndPrintDateList.InsertColumn(0, _T("IDX"), CFMT_TEXT, 80);
	m_wndPrintDateList.InsertColumn(1, _T("Date"), CFMT_TEXT | CFMT_CENTER, 130);
	m_wndPrintDateList.InsertColumn(2, _T("Doctor"), CFMT_TEXT, 180);
	m_wndPrintDateList.InsertColumn(3, _T("S\x1ED1 l\x1EA7n in"), CFMT_TEXT | CFMT_CENTER, 80);
	m_wndPrintDateList.InsertColumn(4, _T(""), CFMT_TEXT, 0); //refidx

}
void CTMChoosePrintDateDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndPrintDateList.SetEvent(WE_SELCHANGE, _OnPrintDateListSelectChangeFnc);
	m_wndPrintDateList.SetEvent(WE_LOADDATA, _OnPrintDateListLoadDataFnc);
	m_wndPrintDateList.SetEvent(WE_DBLCLICK, _OnPrintDateListDblClickFnc);
	m_wndPrintDateList.AddEvent(1, _T("Check All"), _OnPrintDateListCheckAllFnc);
	m_wndPrintDateList.AddEvent(2, _T("UnCheck All"), _OnPrintDateListUnCheckAllFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_bAllDoctor = FALSE;
	
	CString szSQL;
	szSQL.Format(_T("SELECT hsie_date FROM hms_siexam WHERE hsie_docno=%ld and hsie_idx=%ld"), m_nDocNo, m_nRefIdx);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hsie_date"), m_szDate);

	OnPrintDateListLoadData();
	m_wndPrintDateList.SetCheck(0, true);
	m_wndAllDoctor.SetEvent(WE_CLICK, _OnAllDoctorSelectFnc);
	UpdateData(FALSE);

}
void CTMChoosePrintDateDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndAllDoctor.GetDlgCtrlID(), m_bAllDoctor);

}
void CTMChoosePrintDateDlg::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CTMChoosePrintDateDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CTMChoosePrintDateDlg::SetDefaultValues(){
	m_bAllDoctor = TRUE;
}
int CTMChoosePrintDateDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
void CTMChoosePrintDateDlg::OnPrintDateListDblClick(){
	int curSel = m_wndPrintDateList.GetCurSel();
	if (m_wndPrintDateList.GetCheck(curSel))
	{
		m_wndPrintDateList.SetCheck(curSel, false);
	}else
		m_wndPrintDateList.SetCheck(curSel, true);
} 
void CTMChoosePrintDateDlg::OnPrintDateListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CTMChoosePrintDateDlg::OnPrintDateListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CTMChoosePrintDateDlg::OnPrintDateListLoadData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndPrintDateList.BeginLoad(); 
	int nCount = 0;

	if(!m_bAllDoctor)
		szWhere.Format(_T("AND hsie_doctor = '%s'"), pMF->GetCurrentUser());

	szSQL.Format(_T("SELECT hsie_refidx, hsie_idx,hsie_date,GET_USERNAME(hsie_doctor) as docname, hsie_printcount ") \
		_T(" FROM HMS_SIEXAM WHERE HSIE_DOCNO = %ld AND HSIE_DATE >= TO_TIMESTAMP('%s','YYYY-MM-DD HH24:MI:SS')  %s") \
		_T(" AND hsie_locked = 'Y' AND hsie_type = 'DT' ORDER BY hsie_date, hsie_idx "), m_nDocNo, m_szDate.Left(19), szWhere);


	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPrintDateList.AddItems(
			rs.GetValue(_T("hsie_idx")),
			CDateTime::Convert(rs.GetValue(_T("hsie_date")), yyyymmdd|hhmm, ddmmyyyy|hhmm),
			rs.GetValue(_T("docname")),
			rs.GetValue(_T("hsie_printcount")),
			rs.GetValue(_T("hsie_refidx")),
			NULL);
		rs.MoveNext();
	}
	m_wndPrintDateList.EndLoad(); 
	//OnPrintDateListCheckAll();
	return nCount;
}

void CTMChoosePrintDateDlg::OnPrintSelect()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if(m_szType == _T("PRINT_BENHTRINH"))
	{
		if (pMF->GetModuleID() == _T("EM"))
		{
			InBenhTrinhDieuTriNgoaiTru();
		}
		else
		{
			OnPrintBenhTrinhDieuTriSelect();
		}
	}
	if(m_szType == _T("PRINT_PHIEUCONGKHAITHUOC"))
	{
		OnPrintPhieuCongKhaiThuocSelect();
		
	}
	if(m_szType == _T("PRINT_PHIEUCONGKHAITHUOCEX"))
	{
		OnPrintPhieuCongKhaiThuocSelectEX();		
	}
}

void CTMChoosePrintDateDlg::OnPrintBenhTrinhDieuTriSelect(bool isPrintOne) {
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	static CReport rpt;
	CReport rpt1;
	CRecord rsif(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rsCNK(&pMF->m_db);
	CRecord rsPTTT(&pMF->m_db);
	CRecord rsCNS(&pMF->m_db);
	CReportSection* rptHeader = NULL, * rptDetail = NULL, * rptFooter = NULL;
	CString szDept;
	CString szSQL, tmpStr, szWhere, szIdx, szDate, szSQL2, szPharma, szIDXs, szNewLine, szOldLine, szNewLine2, szOldLine2, szCNK, szFileTitle, szFilePath;
	int nIdx = 1;
	szFileTitle = _T("TM_BENHTRINHDIEUTRIHOLY");
	CString szRPTName;




	if (pMF->GetModuleID() == _T("EM"))
		szFileTitle = _T("EM_BENHTRINHDIEUTRIHOLY");

	if (isPrintOne)
		szFileTitle.AppendFormat(_T("_BYIDX"));

	szFileTitle += _T(".RPT");
	szFilePath.Format(_T("Reports\\HMS\\%s"), szFileTitle);
	
	
	if (!rpt.Init(szFilePath))
	{
		_debug(L"Load report: %s", szFilePath);

		return;
	}



	CString szRefIdxs;
	
	if (isPrintOne)
	{
		szWhere.AppendFormat(_T(" and hsie_idx = %ld "), m_nRefIdx);
	}
	else
	{
		for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
		{
			if (m_wndPrintDateList.GetCheck(i))
			{
				if (!szIDXs.IsEmpty())
					szIDXs += _T(",");
				szIDXs.AppendFormat(_T("%s"), m_wndPrintDateList.GetItemText(i, 0));
				if (!szRefIdxs.IsEmpty())
					szRefIdxs += _T(",");
				szRefIdxs.AppendFormat(_T("%s"), m_wndPrintDateList.GetItemText(i, 4));
			}
		}
		if (szIDXs.IsEmpty())
			return;
		if (!szIDXs.IsEmpty())
		{
			szWhere.AppendFormat(_T(" and hsie_idx in(%s) "), szIDXs);
		}
	}

	
	
	
	if (isPrintOne)
	{
		if (pMF->OnPostGenDocX(&rpt, _T("todieutri_108"), m_nDocNo, m_nRefIdx, szFileTitle, _T(""), _T("")))
			return;

	}
	else
	{
		if (pMF->OnPostGenDocX(&rpt, _T("todieutri_108"), m_nDocNo, 0, szFileTitle, _T(""), szIDXs))
			return;
	}
	
	


	CString szWhereIdx;
	if (isPrintOne)
		szWhereIdx.Format(_T(" and hsie_idx =%ld "), m_nRefIdx);
	else
		szWhereIdx.Format(_T(" and  hsie_idx in(%s)"), szIDXs);



	rptHeader = rpt.GetReportHeader();
	
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);

	
	szDept = pMF->GetDepartmentName(pMF->GetDepartmentID());
	rptHeader->SetValue(_T("Department"), szDept);
	
	szSQL.Format(_T("SELECT hbl_name, hms_getroomname(hsie_deptid,hsie_roomid) AS room, hsie_deptid, GET_DEPARTMENTNAME(hsie_deptid) AS deptname ") \
		_T(" FROM hms_siexam ") \
		_T(" LEFT JOIN hms_bedlist ON (hbl_deptid = hsie_deptid AND hbl_roomid = hsie_roomid AND hbl_id = hsie_bedid) ") \
		_T(" WHERE hsie_docno = %ld AND hsie_roomid is not null AND hsie_bedid is not null ") \
		_T(" %s ") \
		_T(" AND rownum < 2 "), m_nDocNo, szWhereIdx);
	rsif.ExecSQL(szSQL);
	
	rptHeader->SetValue(_T("Room"), rsif.GetValue(_T("room")));
	rptHeader->SetValue(_T("Bed"), rsif.GetValue(_T("hbl_name")));
	rsif.GetValue(_T("deptname"), szDept);
	
	rptHeader->SetValue(_T("Department"), szDept);
	
	

	if (isPrintOne)
		szSQL.Format(_T(" SELECT hd_docno AS fdocno, hd_cardno, hd_disrate,") \
			_T("    htr_recordno AS frecord, (select ho_desc from hms_object where ho_id = hd_object) AS fobject,") \
			_T("	trim(hp_surname") \
			_T("   || ' '") \
			_T("   || hp_midname") \
			_T("   || ' '") \
			_T("   || hp_firstname)                                   AS fname,") \
			_T("   sys_sel_getname('sys_sex', hp_sex)                  AS fsex,") \
			_T("   extract(year from hp_birthdate) AS fage,hms_getage(cast_timestamp2date(hd_admitdate), hp_birthdate) as age,") \
			_T("   hms_getaddress(hp_provid, hp_distid,hp_villid)      AS faddress,") \
			_T("   hsie_deptid          AS fdeptid,") \
			_T("   htr_maindisease     AS fDiagnostic, ") \
			_T("   hcr_reldisease as reldisease ") \
			_T(" FROM hms_siexam") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(hd_docno = hsie_docno) ") \
			_T(" left join hms_clinical_record on (hcr_docno= hd_docno) ") \
			_T(" LEFT JOIN hms_treatment_record on (htr_docno = hd_docno and htr_idx = hsie_refidx ) ") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON(hp_patientno = hd_patientno)") \
			_T(" left join hms_codisease on (hcd_docno = hd_docno) ") \
			_T(" WHERE hsie_docno    = %ld and hsie_idx=%ld "), m_nDocNo, m_nRefIdx);
	else

		szSQL.Format(_T(" SELECT hd_docno AS fdocno, hd_cardno, hd_disrate,") \
			_T("   htr_recordno AS frecord, (select ho_desc from hms_object where ho_id = hd_object) AS fobject,") \
			_T("   trim(hp_surname") \
			_T("   || ' '") \
			_T("   || hp_midname") \
			_T("   || ' '") \
			_T("   || hp_firstname)                                    AS fname,") \
			_T("   sys_sel_getname('sys_sex', hp_sex)                  AS fsex,") \
			_T("   extract(year from hp_birthdate) AS fage,") \
			_T("   hms_getaddress(hp_provid, hp_distid,hp_villid)      AS faddress,") \
			_T("   htr_deptid                                          AS fdeptid,") \
			_T("   htr_maindisease                                     AS fDiagnostic ") \
			_T(" FROM hms_treatment_record") \
			_T(" LEFT JOIN hms_doc") \
			_T(" ON(htr_docno = hd_docno) ") \
			_T(" LEFT JOIN hms_patient") \
			_T(" ON(hp_patientno = hd_patientno)") \
			_T(" WHERE htr_docno    = %d and htr_idx in(%s) "), m_nDocNo, szRefIdxs);
	rs.ExecSQL(szSQL);
	//thong tin benh nhan
	if (!rs.IsEOF())
	{
		rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
		rptHeader->SetValue(_T("DocNo"), rs.GetValue(_T("fdocno")));
		rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("fname")));
		rptHeader->SetValue(_T("YearOfBirth"), rs.GetValue(_T("fage")));
		rptHeader->SetValue(_T("Sex"), rs.GetValue(_T("fsex")));
		rptHeader->SetValue(_T("Diagnostic"), rs.GetValue(_T("fDiagnostic")));
		rptHeader->SetValue(_T("CardNo"), rs.GetValue(_T("hd_cardno")));
		rptHeader->SetValue(_T("Object"), rs.GetValue(_T("fobject")));
		rptHeader->SetValue(_T("DisRate"), rs.GetValue(_T("hd_disrate")));
	}


	if (szIDXs.IsEmpty() && m_nRefIdx <=0)
		return;

	//if (!szIDXs.IsEmpty())
	//{
	//	szWhere.AppendFormat(_T(" and hsie_idx in(%s) "), szIDXs);
	///}
	_fmsg(_T("szWhere : %s"), szWhere);
	//thong tin dieu tri
	szSQL.Format(_T(" SELECT hsie_idx AS treat_uid, ") \
		_T("   TO_CHAR(hsie_date, 'DD/MM/YYYY HH24:MI') AS treat_date,") \
		_T("   TO_CHAR(hsie_date, 'DD/MM/YYYY HH:MI AM') AS ampm,") \
		_T("   hsie_pulse                               AS pulse,") \
		_T("   hsie_temperature                         AS temperature,") \
		_T("   hsie_bloodpressure AS bp, ") \
		_T("   hsie_bloodpressurex AS bpx, ") \
		_T("   TRIM(hsie_bloodpressure||'/'||hsie_bloodpressurex) AS huyetap, ") \
		_T("   hsie_breathinterval AS breath, ") \
		_T("   hsie_weight AS weight, hsie_height AS height,") \
		_T("   GET_DEPARTMENTNAME(hsie_deptid) AS dept, hsie_deptid, ") \
		_T("   TRIM(hsie_temperature || '/' || hsie_pulse) AS pulse_temperature, ")\
		_T("   hsie_desc AS disease_tracking,  hsie_para_res AS KQCLS, ") \
		_T("   hsie_diet AS diet, hsie_nurseassistance, hsie_doctor AS doctor,") \
		_T("   GET_USERNAME(hsie_doctor) as docname, ") \
		_T("   hsie_drug_advice AS loidan, hsie_deannote as deannote, hsie_diagnosis_identify, hsie_next_plan, hsie_date  ") \
		_T(" FROM hms_siexam") \
		_T(" WHERE hsie_docno = %d %s AND hsie_type = 'DT'") \
		_T(" ORDER BY hsie_date, hsie_idx"), m_nDocNo, szWhereIdx);

	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	int nStt;
	int nCheckFP = 1;
	CString szStt, szTemp, szCLS, szDisease, szDiseaseCLS, szLoiDan, szAMPM, szDeptID, szNurseAssist, szDiet;
	CString szDeanNote, szDietAssist;
	CReportItem* obj;

	CString szDiagnosis, szNextPlan, szghichu;
	while (!rs.IsEOF())
	{
		//rs.GetValue(_T("doctor"), szOldLine);
		rs.GetValue(_T("treat_date"), szOldLine2);
		rs.GetValue(_T("ampm"), szAMPM);
		rs.GetValue(_T("KQCLS"), szCLS);
		rs.GetValue(_T("hsie_diagnosis_identify"), szDiagnosis);
		rs.GetValue(_T("hsie_next_plan"), szNextPlan);

		rs.GetValue(_T("disease_tracking"), szDisease);



		rs.GetValue(_T("deannote"), szDeanNote);

		rptDetail = rpt.AddDetail();
		//rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));

		rptDetail->SetValue(_T("1"), rs.GetValue(_T("treat_date")));

		szTemp.Empty();
		rs.GetValue(_T("pulse"), tmpStr);
		if (ToInt(tmpStr) > 0)
		{
			szTemp.AppendFormat(_T("M: %s"), tmpStr);
		}

		rs.GetValue(_T("temperature"), tmpStr);
		if (ToFloat(tmpStr) > 0)
		{
			if (!szTemp.IsEmpty())
				szTemp.AppendFormat(_T("<br>"));

			if (tmpStr.Find(_T(".")) != -1)
			{
				tmpStr.Replace(_T("."), _T("<sup>o</sup>"));
				szTemp.AppendFormat(_T("T<sup>o</sup>: %s"), tmpStr);
			}
			else
				szTemp.AppendFormat(_T("T<sup>o</sup>: %s<sup>o</sup>"), tmpStr);
		}
		if (ToInt(rs.GetValue(_T("bp"))) > 0 || ToInt(rs.GetValue(_T("bpx"))) > 0)
		{
			if (!szTemp.IsEmpty())
				szTemp.AppendFormat(_T("<br>"));

			szTemp.AppendFormat(_T("HA: %s"), rs.GetValue(_T("huyetap")));
		}
		if (ToInt(rs.GetValue(_T("breath"))) > 0)
		{
			if (!szTemp.IsEmpty())
				szTemp.AppendFormat(_T("<br>"));
			szTemp.AppendFormat(_T("NT: %s"), rs.GetValue(_T("breath")));
			szTemp.AppendFormat(_T("<br><br>"));
		}

		rs.GetValue(_T("hsie_date"), tmpStr);
		szSQL.Format(_T(" SELECT TRIM(extract(HOUR FROM hci_date) || ':' || extract(MINUTE FROM hci_date)) AS phour,") \
			_T("   hci_pulse     AS pulse,") \
			_T("   hci_temperature    AS temperature,") \
			_T("   hci_bloodpressure  AS bp,") \
			_T("   hci_bloodpressurex AS bpx,") \
			_T("   TRIM(hci_bloodpressure") \
			_T("   ||'/'") \
			_T("   ||hci_bloodpressurex) AS huyetap,") \
			_T("   hci_breathinterval    AS breath") \
			_T(" FROM hms_careinfo") \
			_T(" WHERE hci_docno          = %d") \
			_T(" AND trunc_date(hci_date) = trunc_date(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
			_T(" ORDER BY hci_date"), m_nDocNo, tmpStr);

		_fmsg(_T("%s"), szSQL);
		rsCNS.ExecSQL(szSQL);

		while (!rsCNS.IsEOF())
		{
			rsCNS.GetValue(_T("phour"), tmpStr);
			szTemp.AppendFormat(_T("<i><u>%s:</u></i> <br>"), tmpStr);

			rsCNS.GetValue(_T("pulse"), tmpStr);
			if (ToInt(tmpStr) > 0)
			{
				szTemp.AppendFormat(_T("M: %s"), tmpStr);
			}

			rsCNS.GetValue(_T("temperature"), tmpStr);
			if (ToFloat(tmpStr) > 0)
			{
				if (!szTemp.IsEmpty())
					szTemp.AppendFormat(_T("<br>"));

				if (tmpStr.Find(_T(".")) != -1)
				{
					tmpStr.Replace(_T("."), _T("<sup>o</sup>"));
					szTemp.AppendFormat(_T("T<sup>o</sup>: %s"), tmpStr);
				}
				else
					szTemp.AppendFormat(_T("T<sup>o</sup>: %s<sup>o</sup>"), tmpStr);
			}
			if (ToInt(rsCNS.GetValue(_T("bp"))) > 0 || ToInt(rsCNS.GetValue(_T("bpx"))) > 0)
			{
				if (!szTemp.IsEmpty())
					szTemp.AppendFormat(_T("<br>"));

				szTemp.AppendFormat(_T("HA: %s"), rsCNS.GetValue(_T("huyetap")));
			}
			if (ToInt(rsCNS.GetValue(_T("breath"))) > 0)
			{
				if (!szTemp.IsEmpty())
					szTemp.AppendFormat(_T("<br>"));
				szTemp.AppendFormat(_T("NT: %s"), rsCNS.GetValue(_T("breath")));
				szTemp.AppendFormat(_T("<br>"));
			}
			szTemp.AppendFormat(_T("<br>"));

			rsCNS.MoveNext();
		}

		obj = rptDetail->GetItem(_T("2"));
		if (obj) obj->SetType(REPORT_HTML);

		rptDetail->SetValue(_T("2"), szTemp);
		szDiseaseCLS = rs.GetValue(_T("deannote")) == _T("Y") ? _T("CHỦ NHIỆM KHOA ĐIỂM BỆNH: <br>") : _T("");
		if (!szDisease.IsEmpty())
		{
			szDisease.Replace(_T("\r\n"), _T("<br>"));
			if (szCLS.IsEmpty())
			{
				szCLS.Empty();
				szDiseaseCLS.AppendFormat(_T("%s."), szDisease);
			}
			else
			{
				szCLS.Replace(_T("\r\n"), _T("<br>"));
				szDiseaseCLS.AppendFormat(_T("%s.<br><b><i>K\x1EBFt qu\x1EA3 \x63\x1EADn l\xE2m s\xE0ng.</i></b><br>%s"), szDisease, szCLS);
			}
		}

		rs.GetValue(_T("treat_uid"), szIdx);

		szSQL.Format(_T(" SELECT hfl_groupid,") \
			_T("   ho_idx,") \
			_T("   ho_orderdate,") \
			_T("   ho_status,") \
			_T("   ho_itemid,") \
			_T("   hfl_name AS ho_name,") \
			_T("   ho_deptid,") \
			_T("   ho_createdby,") \
			_T("   ho_hitech,") \
			_T("   ho_note") \
			_T(" FROM hms_operation") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(ho_itemid                                                  =hfl_feeid)") \
			_T(" WHERE ho_docno                                                = %d") \
			_T(" AND ho_treatidx                                               = %s") \
			_T(" AND ((hfl_servprice+hfl_insprice+hfl_polprice + hfl_reqprice) > 0") \
			_T(" OR hms_fee_list.hfl_opt_ref                                   ='Y')") \
			_T(" ORDER BY ho_idx "), m_nDocNo, szIdx);

		int nCount = 0;
		nCount = rsPTTT.ExecSQL(szSQL);
		if (nCount > 0)
			szDiseaseCLS.AppendFormat(_T("<br><b><i>Phẫu thuật thủ thuật:</i></b>"));

		while (!rsPTTT.IsEOF())
		{
			rsPTTT.GetValue(_T("ho_name"), tmpStr);
			szDiseaseCLS.AppendFormat(_T("<br> %s"), tmpStr);
			rsPTTT.MoveNext();
		}
		if (!szDiagnosis.IsEmpty())
		{
			szDiseaseCLS.AppendFormat(_T("\r\n <br><b><i>Nhận định chẩn đoán:</i></b><br> %s"), szDiagnosis);
		}
		if (!szNextPlan.IsEmpty())
		{
			szDiseaseCLS.AppendFormat(_T("\r\n <br><b><i>Kế hoạch tiếp theo:</i></b><br> %s"), szNextPlan);
		}
		obj = rptDetail->GetItem(_T("3"));
		if (obj) obj->SetType(REPORT_HTML);
		rptDetail->SetValue(_T("3"), szDiseaseCLS);

		rs.GetValue(_T("hsie_nurseassistance"), szNurseAssist);
		rs.GetValue(_T("diet"), szDiet);
		tmpStr = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
		if (!tmpStr.IsEmpty())
		{
			szDiet = tmpStr;
		}
		if (IsDigit(szNurseAssist))
		{
			szNurseAssist = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
		}

		szDietAssist.Format(_T("%s<br/>%s<br/>"), szDiet, szNurseAssist);
		obj = rptDetail->GetItem(_T("5"));
		if (obj) obj->SetType(REPORT_HTML);
		rptDetail->SetValue(_T("5"), szDietAssist);

		szDisease.Empty();
		szCLS.Empty();

		if (pMF->GetCurrentDepartmentID() == _T("TTDTHM"))
		{
			szSQL2.Format(_T(" SELECT 1  AS ptype,") \
				_T("   mp_name AS pharma,") \
				_T("   TRIM(SUM(hpol_qtyorder)") \
				_T("   || ' '") \
				_T("   || get_uomname(mp_product_uom_id)) AS soluong,") \
				_T("   hpou_dousage                       AS duongdung,") \
				_T("   hpou_speed                         AS tocdo,") \
				_T("   mp_org_id,") \
				_T("   CASE") \
				_T("     WHEN hpo_storage_id = 14") \
				_T("     AND ho_type         = 'I'") \
				_T("     THEN CAST('(PTTYC)' AS NVARCHAR2(10))") \
				_T("     ELSE CAST(' ' AS NVARCHAR2(1))") \
				_T("   END AS ghi_chu,") \
				_T("   hpol_line,") \
				_T("   hpou_index") \
				_T(" FROM hms_ipharmaorder") \
				_T(" LEFT JOIN hms_ipharmaorderline") \
				_T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T(" LEFT JOIN hms_ipharmaorder_usage") \
				_T(" ON(hpou_orderid     = hpol_orderid") \
				_T(" AND hpou_product_id = hpol_product_id AND hpou_dousage = hpol_dousage)") \
				_T(" LEFT JOIN m_product") \
				_T(" ON(hpol_product_id = mp_product_id)") \
				_T(" LEFT JOIN hms_object") \
				_T(" ON (hpo_object_id = ho_id)") \
				_T(" WHERE HPO_ORDERSTATUS <> 'C' AND hpo_docno   = %ld") \
				_T(" AND hpo_treatidx  IN(%s)") \
				_T(" GROUP BY mp_name,") \
				_T("   hpol_line,") \
				_T("   mp_product_uom_id,") \
				_T("   hpou_dousage,") \
				_T("   hpou_speed,") \
				_T("   mp_org_id,") \
				_T("   hpo_storage_id,") \
				_T("   ho_type,") \
				_T("   hpou_index") \
				_T(" UNION ALL") \
				_T(" SELECT 2      AS ptype,") \
				_T("   hp_drugname AS pharma,") \
				_T("   TRIM(SUM(hp_quantity)") \
				_T("   || ' '") \
				_T("   || hp_unit)               AS soluong,") \
				_T("   hp_usage                  AS duongdung,") \
				_T("   hp_speed                  AS tocdo,") \
				_T("   CAST(' ' AS NVARCHAR2(1)) AS mp_org_id,") \
				_T("   CAST(' ' AS NVARCHAR2(1)) AS ghi_chu,") \
				_T("   hp_idx                    AS hpol_line,") \
				_T("   0                         AS hpou_index") \
				_T(" FROM hms_prescription") \
				_T(" LEFT JOIN hms_siexam") \
				_T(" ON (hsie_docno    = hp_docno") \
				_T(" AND hsie_idx      = hp_receptidx)") \
				_T(" WHERE hp_docno    = %ld") \
				_T(" AND hp_receptidx IN(%s)") \
				_T(" GROUP BY hp_drugname,") \
				_T("   hp_unit,") \
				_T("   hp_usage,") \
				_T("   hp_speed,") \
				_T("   hp_idx") \
				_T(" ORDER BY ptype, hpou_index,") \
				_T("   hpol_line,") \
				_T("   mp_org_id,") \
				_T("   pharma"), m_nDocNo, szIdx, m_nDocNo, szIdx);
		}
		else
		{
			szSQL2.Format(_T(" SELECT 1  AS ptype,") \
				_T("   mp_name AS pharma,") \
				_T("   TRIM(SUM(hpol_qtyorder)") \
				_T("   || ' '") \
				_T("   || get_uomname(mp_product_uom_id)) AS soluong,") \
				_T("   hpou_dousage                       AS duongdung,") \
				_T("   hpou_speed                         AS tocdo,") \
				_T("   mp_org_id,") \
				_T("   CASE") \
				_T("     WHEN hpo_storage_id = 14") \
				_T("     AND ho_type         = 'I'") \
				_T("     THEN CAST('' AS NVARCHAR2(10))") \
				_T("     ELSE CAST('' AS NVARCHAR2(1))") \
				_T("   END AS ghi_chu,") \
				_T("   hpol_line,") \
				_T("   hpou_index") \
				_T(" FROM hms_ipharmaorder") \
				_T(" LEFT JOIN hms_ipharmaorderline") \
				_T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
				_T(" LEFT JOIN hms_ipharmaorder_usage") \
				_T(" ON(hpou_orderid     = hpol_orderid") \
				_T(" AND hpou_product_id = hpol_product_id AND hpou_dousage = hpol_dousage)") \
				_T(" LEFT JOIN m_product") \
				_T(" ON(hpol_product_id = mp_product_id)") \
				_T(" LEFT JOIN hms_object") \
				_T(" ON (hpo_object_id = ho_id)") \
				_T(" WHERE hpo_docno   = %ld") \
				_T(" AND hpo_treatidx  IN(%s)") \
				_T(" GROUP BY mp_name,") \
				_T("   hpol_line,") \
				_T("   mp_product_uom_id,") \
				_T("   hpou_dousage,") \
				_T("   hpou_speed,") \
				_T("   mp_org_id,") \
				_T("   hpo_storage_id,") \
				_T("   ho_type,") \
				_T("   hpou_index") \
				_T(" UNION ALL") \
				_T(" SELECT 2      AS ptype,") \
				_T("   hp_drugname AS pharma,") \
				_T("   TRIM(SUM(hp_quantity)") \
				_T("   || ' '") \
				_T("   || hp_unit)               AS soluong,") \
				_T("   hp_usage                  AS duongdung,") \
				_T("   hp_speed                  AS tocdo,") \
				_T("   CAST(' ' AS NVARCHAR2(1)) AS mp_org_id,") \
				_T("   CAST(' ' AS NVARCHAR2(1)) AS ghi_chu,") \
				_T("   hp_idx                    AS hpol_line,") \
				_T("   0                         AS hpou_index") \
				_T(" FROM hms_prescription") \
				_T(" LEFT JOIN hms_siexam") \
				_T(" ON (hsie_docno    = hp_docno") \
				_T(" AND hsie_idx      = hp_receptidx)") \
				_T(" WHERE hp_docno    = %ld") \
				_T(" AND hp_receptidx IN(%s)") \
				_T(" GROUP BY hp_drugname,") \
				_T("   hp_unit,") \
				_T("   hp_usage,") \
				_T("   hp_speed,") \
				_T("   hp_idx") \
				_T(" ORDER BY ptype, hpou_index,") \
				_T("   hpol_line,") \
				_T("   mp_org_id,") \
				_T("   pharma"), m_nDocNo, szIdx, m_nDocNo, szIdx);
		}
		//_msg(_T("%s"), szSQL2);
		rs1.ExecSQL(szSQL2);

		nStt = 1;
		szPharma.Empty();

		CString szIndex, szDuongDung, szTocDo;
		while (!rs1.IsEOF())
		{
			rs1.GetValue(_T("duongdung"), szDuongDung);
			rs1.GetValue(_T("hpou_speed"), szTocDo);
			if (nStt > 1)
			{
				szIndex.Format(_T("<br>%d. "), nStt);
			}
			else
			{
				szIndex.Format(_T("%d. "), nStt);
			}
			tmpStr.Format(_T("%s"), rs1.GetValue(_T("pharma")));

			if (!tmpStr.IsEmpty())
				szPharma.AppendFormat(_T("%s %s x %s %s"), szIndex, tmpStr, rs1.GetValue(_T("soluong")), rs1.GetValue(_T("ghi_chu")));

			if (!szDuongDung.IsEmpty())
			{
				if (!szTocDo.IsEmpty())
				{
					szPharma.AppendFormat(_T("<br><i>%s %s</i>"), szDuongDung, szTocDo);
				}
				else
					szPharma.AppendFormat(_T("<br><i>%s</i>"), szDuongDung);
			}
			nStt++;
			rs1.MoveNext();
		}

		nCount = 0;

		//in danh sach thuoc tra lai
		szSQL2.Format(_T(" SELECT mp_name AS pharma,") \
			_T("   TRIM(SUM(HPOLR_QTYREVERSE)") \
			_T("   || ' '") \
			_T("   || get_uomname(mp_product_uom_id)) AS soluong, ") \
			_T("   mp_org_id, case when hpo_storage_id = 14 and ho_type = 'I' then '(PTTYC)' else '' end as ghi_chu") \
			_T(" FROM hms_ipharmaorder") \
			_T(" LEFT JOIN hms_ipharmaorderline_r") \
			_T(" ON(hpolr_orderid = hpo_orderid)") \
			_T(" LEFT JOIN m_product") \
			_T(" ON(hpolr_product_id = mp_product_id)") \
			_T(" left join hms_object on (hpo_object_id = ho_id)") \
			_T(" WHERE hpo_docno    = %ld") \
			_T(" AND hpo_treatidx   = %s HAVING SUM(HPOLR_QTYREVERSE) > 0") \
			_T(" GROUP BY mp_name,") \
			_T("   mp_product_uom_id,") \
			_T("    mp_org_id, hpo_storage_id, ho_type") \
			_T(" ORDER BY mp_org_id,") \
			_T("   mp_name"), m_nDocNo, szIdx);
		//_msg(_T("%s"), szSQL2);
		nCount = rs1.ExecSQL(szSQL2);

		nStt = 1;
		if (nCount > 0)
			szPharma.AppendFormat(_T("<br><b><i>Thuốc trả lại</i></b><br>"));
		else
			szPharma.AppendFormat(_T("<br>"));

		while (!rs1.IsEOF())
		{
			rs1.GetValue(_T("duongdung"), szDuongDung);
			rs1.GetValue(_T("hpou_speed"), szTocDo);
			if (nStt > 1)
			{
				szIndex.Format(_T("<br>%d. "), nStt);
			}
			else
			{
				szIndex.Format(_T("%d. "), nStt);
			}
			tmpStr.Format(_T("%s"), rs1.GetValue(_T("pharma")));

			//szPharma.AppendFormat(_T("<br><i></i>"));
			rs1.GetValue(_T("ghi_chu"), szghichu);

			if (!tmpStr.IsEmpty())
				if (szghichu.IsEmpty())
				{
					szPharma.AppendFormat(_T("%s %s x %s"), szIndex, tmpStr, rs1.GetValue(_T("soluong")), rs1.GetValue(_T("ghi_chu")));
				}
				else
					szPharma.AppendFormat(_T("%s %s x %s %s"), szIndex, tmpStr, rs1.GetValue(_T("soluong")), rs1.GetValue(_T("ghi_chu")));
			nStt++;
			rs1.MoveNext();
		}
		if (nStt > 1)
		{
			szPharma += _T("<br>");
		}
		rs.GetValue(_T("loidan"), szLoiDan);
		tmpStr.Empty();
		tmpStr.AppendFormat(_T("%s"), szPharma);

		if (!szLoiDan.IsEmpty())
		{
			//szLoiDan.Replace(_T("\r\n"), _T("<br>"));
			//szPharma.AppendFormat(_T("<br><b>* L\x1EDDi \x64\x1EB7n: </b><br/>%s<br/>"), szLoiDan);
			tmpStr.AppendFormat(_T("<b>Mệnh lệnh điều trị:</b> <br/>   %s"), szLoiDan);
		}

		obj = rptDetail->GetItem(_T("4"));
		//_msg(_T("%s"), tmpStr);
		if (obj) obj->SetType(REPORT_HTML);
		rptDetail->SetValue(_T("4"), tmpStr);

		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("DoctorName"), rs.GetValue(_T("docname")));

		if (szDeanNote == _T("Y") && rptDetail)
		{
			szCNK.Format(_T("SELECT sd_director FROM sys_dept WHERE sd_id = '%s'"), szDeptID);
			rsCNK.ExecSQL(szCNK);
			rptDetail->SetValue(_T("cnk"), _T("\x43h\x1EE7 nhi\x1EC7m kho\x61"));
			rptDetail->SetValue(_T("cnkname"), rsCNK.GetValue(_T("sd_director")));
		}
		else
		{
			rptDetail->SetValue(_T("cnk"), _T(""));
			rptDetail->SetValue(_T("cnkname"), _T(""));
		}
		rs.MoveNext();

	}

	rptFooter = rpt.GetReportFooter();
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	//rptFooter->SetValue(_T("PrintDate"), szDate);
	//tmpStr = GetDoctorName(pMF->GetCurrentUser());
	//rptFooter->SetValue(_T("Practitioner"), tmpStr);
	rpt.PrintPreview();
	//
	UpdatePrintCount();
	//
	CGuiDialog::OnCancel();
}

void CTMChoosePrintDateDlg::InBenhTrinhDieuTriNgoaiTru()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CReport rpt1;
	CRecord rsif(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rsCNK(&pMF->m_db);
	CRecord rsPTTT(&pMF->m_db);
	CRecord rsCNS(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL;
	CString szDept;
	CString szSQL, tmpStr, szWhere, szIdx, szDate, szSQL2, szPharma, szIDXs, szNewLine, szOldLine, szNewLine2, szOldLine2, szCNK, szFileTitle, szFilePath;
	int nIdx = 1;
	szFileTitle = _T("TM_BENHTRINHDIEUTRIHOLY");
	if (pMF->GetModuleID() == _T("EM"))
	{
		szFileTitle = _T("EM_BENHTRINHDIEUTRIHOLY");
	}
	szFilePath.Format(_T("Reports\\HMS\\%s.RPT"), szFileTitle);
	if (!rpt.Init(szFilePath))
		return;
	
	CString szRefIdxs;
	for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
	{
		if (m_wndPrintDateList.GetCheck(i))
		{
			if (!szIDXs.IsEmpty())
				szIDXs += _T(",");
			szIDXs.AppendFormat(_T("%s"), m_wndPrintDateList.GetItemText(i, 0));
			if (!szRefIdxs.IsEmpty())
				szRefIdxs += _T(",");
			szRefIdxs.AppendFormat(_T("%s"), m_wndPrintDateList.GetItemText(i, 4));
		}
	}


	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	szDept = pMF->GetDepartmentName(pMF->GetDepartmentID());
	rptHeader->SetValue(_T("Department"), szDept);

	szSQL.Format(_T("SELECT hbl_name, hms_getroomname(hsie_deptid,hsie_roomid) AS room, hsie_deptid, GET_DEPARTMENTNAME(hsie_deptid) AS deptname ") \
				_T(" FROM hms_siexam ") \
				_T(" LEFT JOIN hms_bedlist ON (hbl_deptid = hsie_deptid AND hbl_roomid = hsie_roomid AND hbl_id = hsie_bedid) ") \
				_T(" WHERE hsie_docno = %ld AND hsie_roomid is not null AND hsie_bedid is not null ") \
				_T(" and hsie_idx in(%s) ") \
				_T(" AND rownum < 2 "), m_nDocNo, szIDXs);
	rsif.ExecSQL(szSQL);
	rptHeader->SetValue(_T("Room"), rsif.GetValue(_T("room")));
	rptHeader->SetValue(_T("Bed"), rsif.GetValue(_T("hbl_name")));
	rsif.GetValue(_T("deptname"), szDept);
	rptHeader->SetValue(_T("Department"), szDept);

	szSQL.Format(_T(" SELECT hd_docno AS fdocno, hd_cardno, hd_disrate,") \
		_T("   '' AS frecord, (select ho_desc from hms_object where ho_id = hd_object) AS fobject,") \
		_T("   trim(hp_surname") \
		_T("   || ' '") \
		_T("   || hp_midname") \
		_T("   || ' '") \
		_T("   || hp_firstname)                                    AS fname,") \
		_T("   sys_sel_getname('sys_sex', hp_sex)                  AS fsex,") \
		_T("   extract(year from hp_birthdate) AS fage,") \
		_T("   hms_getaddress(hp_provid, hp_distid,hp_villid)      AS faddress,") \
		_T("   ''                                          AS fdeptid,") \
		_T("   hd_conclusion                                     AS fDiagnostic ") \
		_T(" FROM hms_doc") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" WHERE hd_docno    = %d "), m_nDocNo);
	rs.ExecSQL(szSQL);
	//thong tin benh nhan
	if (!rs.IsEOF())
	{
		rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
		rptHeader->SetValue(_T("DocNo"), rs.GetValue(_T("fdocno")));
		rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("fname")));
		rptHeader->SetValue(_T("YearOfBirth"), rs.GetValue(_T("fage")));
		rptHeader->SetValue(_T("Sex"), rs.GetValue(_T("fsex")));
		rptHeader->SetValue(_T("Diagnostic"), rs.GetValue(_T("fDiagnostic")));
		rptHeader->SetValue(_T("CardNo"), rs.GetValue(_T("hd_cardno")));
		rptHeader->SetValue(_T("Object"), rs.GetValue(_T("fobject")));
		rptHeader->SetValue(_T("DisRate"), rs.GetValue(_T("hd_disrate")));
	}

	
	if (szIDXs.IsEmpty())
		return;
	if (!szIDXs.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hsie_idx in(%s) "), szIDXs);
	}
	_fmsg(_T("szWhere : %s"), szWhere);
	//thong tin dieu tri
	szSQL.Format(_T(" SELECT hsie_idx AS treat_uid, ") \
		_T("   TO_CHAR(hsie_date, 'DD/MM/YYYY HH24:MI') AS treat_date,") \
		_T("   TO_CHAR(hsie_date, 'DD/MM/YYYY HH:MI AM') AS ampm,") \
		_T("   hsie_pulse                               AS pulse,") \
		_T("   hsie_temperature                         AS temperature,") \
		_T("   hsie_bloodpressure AS bp, ") \
		_T("   hsie_bloodpressurex AS bpx, ") \
		_T("   TRIM(hsie_bloodpressure||'/'||hsie_bloodpressurex) AS huyetap, ") \
		_T("   hsie_breathinterval AS breath, ") \
		_T("   hsie_weight AS weight, hsie_height AS height,") \
		_T("   GET_DEPARTMENTNAME(hsie_deptid) AS dept, hsie_deptid, ") \
		_T("   TRIM(hsie_temperature || '/' || hsie_pulse) AS pulse_temperature, ")\
		_T("   hsie_desc AS disease_tracking,  hsie_para_res AS KQCLS, ") \
		_T("   hsie_diet AS diet, hsie_nurseassistance, hsie_doctor AS doctor,") \
		_T("   GET_USERNAME(hsie_doctor) as docname, ") \
		_T("   hsie_drug_advice AS loidan, hsie_deannote as deannote, hsie_diagnosis_identify, hsie_next_plan, hsie_date  ") \
		_T(" FROM hms_siexam") \
		_T(" WHERE hsie_docno = %d %s AND hsie_type = 'DT'") \
		_T(" ORDER BY hsie_date, hsie_idx"), m_nDocNo, szWhere);

	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	
	int nStt;
	int nCheckFP = 1;
	CString szStt, szTemp, szCLS, szDisease, szDiseaseCLS, szLoiDan, szAMPM, szDeptID, szNurseAssist, szDiet;
	CString szDeanNote, szDietAssist;
	CReportItem* obj;

	CString szDiagnosis, szNextPlan, szghichu;
	while (!rs.IsEOF())
	{
		//rs.GetValue(_T("doctor"), szOldLine);
		rs.GetValue(_T("treat_date"), szOldLine2);
		rs.GetValue(_T("ampm"), szAMPM);
		rs.GetValue(_T("KQCLS"), szCLS);
		rs.GetValue(_T("hsie_diagnosis_identify"), szDiagnosis);
		rs.GetValue(_T("hsie_next_plan"), szNextPlan);
		
		rs.GetValue(_T("disease_tracking"), szDisease);



		rs.GetValue(_T("deannote"), szDeanNote);

		rptDetail = rpt.AddDetail();
		//rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));

		rptDetail->SetValue(_T("1"), rs.GetValue(_T("treat_date")));
		
		szTemp.Empty();
		rs.GetValue(_T("pulse"), tmpStr);
		if(ToInt(tmpStr) > 0)
		{
			szTemp.AppendFormat(_T("M: %s"), tmpStr);
		}
		
		rs.GetValue(_T("temperature"), tmpStr);
		if(ToFloat(tmpStr) > 0)
		{
			if(!szTemp.IsEmpty())
				szTemp.AppendFormat(_T("<br>"));

			if(tmpStr.Find(_T(".")) != -1)
			{
				tmpStr.Replace(_T("."), _T("<sup>o</sup>"));
				szTemp.AppendFormat(_T("T<sup>o</sup>: %s"), tmpStr);
			}
			else
				szTemp.AppendFormat(_T("T<sup>o</sup>: %s<sup>o</sup>"), tmpStr);	
		}
		if(ToInt(rs.GetValue(_T("bp"))) > 0 || ToInt(rs.GetValue(_T("bpx"))) > 0)
		{
			if(!szTemp.IsEmpty())
				szTemp.AppendFormat(_T("<br>"));

			szTemp.AppendFormat(_T("HA: %s"), rs.GetValue(_T("huyetap")));
		}
		if(ToInt(rs.GetValue(_T("breath"))) > 0 )
		{
			if(!szTemp.IsEmpty())
				szTemp.AppendFormat(_T("<br>"));
			szTemp.AppendFormat(_T("NT: %s"), rs.GetValue(_T("breath")));
			szTemp.AppendFormat(_T("<br><br>"));
		}

		rs.GetValue(_T("hsie_date"), tmpStr);
		szSQL.Format(_T(" SELECT TRIM(extract(HOUR FROM hci_date) || ':' || extract(MINUTE FROM hci_date)) AS phour,") \
			_T("   hci_pulse     AS pulse,") \
			_T("   hci_temperature    AS temperature,") \
			_T("   hci_bloodpressure  AS bp,") \
			_T("   hci_bloodpressurex AS bpx,") \
			_T("   TRIM(hci_bloodpressure") \
			_T("   ||'/'") \
			_T("   ||hci_bloodpressurex) AS huyetap,") \
			_T("   hci_breathinterval    AS breath") \
			_T(" FROM hms_careinfo") \
			_T(" WHERE hci_docno          = %d") \
			_T(" AND trunc_date(hci_date) = trunc_date(TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS'))") \
			_T(" ORDER BY hci_date"), m_nDocNo, tmpStr);

		_fmsg(_T("%s"), szSQL);
		rsCNS.ExecSQL(szSQL);

		while (!rsCNS.IsEOF())
		{
			rsCNS.GetValue(_T("phour"), tmpStr);
			szTemp.AppendFormat(_T("<i><u>%s:</u></i> <br>"), tmpStr);

			rsCNS.GetValue(_T("pulse"), tmpStr);
			if(ToInt(tmpStr) > 0)
			{
				szTemp.AppendFormat(_T("M: %s"), tmpStr);
			}

			rsCNS.GetValue(_T("temperature"), tmpStr);
			if(ToFloat(tmpStr) > 0)
			{
				if(!szTemp.IsEmpty())
					szTemp.AppendFormat(_T("<br>"));

				if(tmpStr.Find(_T(".")) != -1)
				{
					tmpStr.Replace(_T("."), _T("<sup>o</sup>"));
					szTemp.AppendFormat(_T("T<sup>o</sup>: %s"), tmpStr);
				}
				else
					szTemp.AppendFormat(_T("T<sup>o</sup>: %s<sup>o</sup>"), tmpStr);	
			}
			if(ToInt(rsCNS.GetValue(_T("bp"))) > 0 || ToInt(rsCNS.GetValue(_T("bpx"))) > 0)
			{
				if(!szTemp.IsEmpty())
					szTemp.AppendFormat(_T("<br>"));

				szTemp.AppendFormat(_T("HA: %s"), rsCNS.GetValue(_T("huyetap")));
			}
			if(ToInt(rsCNS.GetValue(_T("breath"))) > 0 )
			{
				if(!szTemp.IsEmpty())
					szTemp.AppendFormat(_T("<br>"));
				szTemp.AppendFormat(_T("NT: %s"), rsCNS.GetValue(_T("breath")));
				szTemp.AppendFormat(_T("<br>"));
			}
			szTemp.AppendFormat(_T("<br>"));

			rsCNS.MoveNext();
		}

		obj = rptDetail->GetItem(_T("2"));
		if(obj) obj->SetType(REPORT_HTML);

		rptDetail->SetValue(_T("2"), szTemp);
		szDiseaseCLS = rs.GetValue(_T("deannote"))==_T("Y")?_T("CHỦ NHIỆM KHOA ĐIỂM BỆNH: <br>"):_T("");
		if(!szDisease.IsEmpty())
		{
			szDisease.Replace(_T("\r\n"), _T("<br>"));
			if(szCLS.IsEmpty())
			{
				szCLS.Empty();
				szDiseaseCLS.AppendFormat(_T("%s."), szDisease);
			}
			else
			{
				szCLS.Replace(_T("\r\n"), _T("<br>"));
				szDiseaseCLS.AppendFormat(_T("%s.<br><b><i>K\x1EBFt qu\x1EA3 \x63\x1EADn l\xE2m s\xE0ng.</i></b><br>%s"), szDisease, szCLS);
			}
		}

		rs.GetValue(_T("treat_uid"), szIdx);

		szSQL.Format(_T(" SELECT hfl_groupid,") \
			_T("   ho_idx,") \
			_T("   ho_orderdate,") \
			_T("   ho_status,") \
			_T("   ho_itemid,") \
			_T("   hfl_name AS ho_name,") \
			_T("   ho_deptid,") \
			_T("   ho_createdby,") \
			_T("   ho_hitech,") \
			_T("   ho_note") \
			_T(" FROM hms_operation") \
			_T(" LEFT JOIN hms_fee_list") \
			_T(" ON(ho_itemid                                                  =hfl_feeid)") \
			_T(" WHERE ho_docno                                                = %d") \
			_T(" AND ho_treatidx                                               = %s") \
			_T(" AND ((hfl_servprice+hfl_insprice+hfl_polprice + hfl_reqprice) > 0") \
			_T(" OR hms_fee_list.hfl_opt_ref                                   ='Y')") \
			_T(" ORDER BY ho_idx "), m_nDocNo, szIdx);

		int nCount = 0;
		nCount = rsPTTT.ExecSQL(szSQL);
		if(nCount > 0)
			szDiseaseCLS.AppendFormat(_T("<br><b><i>Phẫu thuật thủ thuật:</i></b>"));

		while (!rsPTTT.IsEOF())
		{
			rsPTTT.GetValue(_T("ho_name"), tmpStr);
			szDiseaseCLS.AppendFormat(_T("<br> %s"), tmpStr);
			rsPTTT.MoveNext();
		}
		if(!szDiagnosis.IsEmpty())
		{
			szDiseaseCLS.AppendFormat(_T("\r\n <br><b><i>Nhận định chẩn đoán:</i></b><br> %s"), szDiagnosis);
		}
		if(!szNextPlan.IsEmpty())
		{
			szDiseaseCLS.AppendFormat(_T("\r\n <br><b><i>Kế hoạch tiếp theo:</i></b><br> %s"), szNextPlan);
		}
		obj = rptDetail->GetItem(_T("3"));
		if(obj) obj->SetType(REPORT_HTML);
		rptDetail->SetValue(_T("3"), szDiseaseCLS);

		rs.GetValue(_T("hsie_nurseassistance"),szNurseAssist);
		rs.GetValue(_T("diet"), szDiet);
		tmpStr = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
		if(!tmpStr.IsEmpty())
		{
			szDiet = tmpStr;
		}
		if(IsDigit(szNurseAssist))
		{
			szNurseAssist = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
		}
		
		szDietAssist.Format(_T("%s<br/>%s<br/>"), szDiet, szNurseAssist);
		obj = rptDetail->GetItem(_T("5"));
		if(obj) obj->SetType(REPORT_HTML);
		rptDetail->SetValue(_T("5"), szDietAssist);

		szDisease.Empty();
		szCLS.Empty();
		
		if (pMF->GetCurrentDepartmentID() == _T("TTDTHM"))
		{
		szSQL2.Format(_T(" SELECT 1  AS ptype,") \
			_T("   mp_name AS pharma,") \
			_T("   TRIM(SUM(hpol_qtyorder)") \
			_T("   || ' '") \
			_T("   || get_uomname(mp_product_uom_id)) AS soluong,") \
			_T("   hpou_dousage                       AS duongdung,") \
			_T("   hpou_speed                         AS tocdo,") \
			_T("   mp_org_id,") \
			_T("   CASE") \
			_T("     WHEN hpo_storage_id = 14") \
			_T("     AND ho_type         = 'I'") \
			_T("     THEN CAST('(PTTYC)' AS NVARCHAR2(10))") \
			_T("     ELSE CAST(' ' AS NVARCHAR2(1))") \
			_T("   END AS ghi_chu,") \
			_T("   hpol_line,") \
			_T("   hpou_index") \
			_T(" FROM hms_pharmaorder") \
			_T(" LEFT JOIN hms_pharmaorderline") \
			_T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
			_T(" LEFT JOIN hms_pharmaorder_usage") \
			_T(" ON(hpou_orderid     = hpol_orderid") \
			_T(" AND hpou_product_id = hpol_product_id AND hpou_dousage = hpol_dousage)") \
			_T(" LEFT JOIN m_product") \
			_T(" ON(hpol_product_id = mp_product_id)") \
			_T(" LEFT JOIN hms_object") \
			_T(" ON (hpo_object_id = ho_id)") \
			_T(" WHERE HPO_ORDERSTATUS <> 'C' AND hpo_docno   = %ld") \
			_T(" AND hpo_treatidx  IN(%s)") \
			_T(" GROUP BY mp_name,") \
			_T("   hpol_line,") \
			_T("   mp_product_uom_id,") \
			_T("   hpou_dousage,") \
			_T("   hpou_speed,") \
			_T("   mp_org_id,") \
			_T("   hpo_storage_id,") \
			_T("   ho_type,") \
			_T("   hpou_index") \
			_T(" UNION ALL") \
			_T(" SELECT 2      AS ptype,") \
			_T("   hp_drugname AS pharma,") \
			_T("   TRIM(SUM(hp_quantity)") \
			_T("   || ' '") \
			_T("   || hp_unit)               AS soluong,") \
			_T("   hp_usage                  AS duongdung,") \
			_T("   hp_speed                  AS tocdo,") \
			_T("   CAST(' ' AS NVARCHAR2(1)) AS mp_org_id,") \
			_T("   CAST(' ' AS NVARCHAR2(1)) AS ghi_chu,") \
			_T("   hp_idx                    AS hpol_line,") \
			_T("   0                         AS hpou_index") \
			_T(" FROM hms_prescription") \
			_T(" LEFT JOIN hms_siexam") \
			_T(" ON (hsie_docno    = hp_docno") \
			_T(" AND hsie_idx      = hp_receptidx)") \
			_T(" WHERE hp_docno    = %ld") \
			_T(" AND hp_receptidx IN(%s)") \
			_T(" GROUP BY hp_drugname,") \
			_T("   hp_unit,") \
			_T("   hp_usage,") \
			_T("   hp_speed,") \
			_T("   hp_idx") \
			_T(" ORDER BY ptype, hpou_index,") \
			_T("   hpol_line,") \
			_T("   mp_org_id,") \
			_T("   pharma"), m_nDocNo, szIdx, m_nDocNo, szIdx);
		}
		else
		{
		szSQL2.Format(_T(" SELECT 1  AS ptype,") \
			_T("   mp_name AS pharma,") \
			_T("   TRIM(SUM(hpol_qtyorder)") \
			_T("   || ' '") \
			_T("   || get_uomname(mp_product_uom_id)) AS soluong,") \
			_T("   hpou_dousage                       AS duongdung,") \
			_T("   hpou_speed                         AS tocdo,") \
			_T("   mp_org_id,") \
			_T("   CASE") \
			_T("     WHEN hpo_storage_id = 14") \
			_T("     AND ho_type         = 'I'") \
			_T("     THEN CAST('' AS NVARCHAR2(10))") \
			_T("     ELSE CAST('' AS NVARCHAR2(1))") \
			_T("   END AS ghi_chu,") \
			_T("   hpol_line,") \
			_T("   hpou_index") \
			_T(" FROM hms_pharmaorder") \
			_T(" LEFT JOIN hms_pharmaorderline") \
			_T(" ON(hpol_docno=hpo_docno and hpol_orderid=hpo_orderid)") \
			_T(" LEFT JOIN hms_pharmaorder_usage") \
			_T(" ON(hpou_orderid     = hpol_orderid") \
			_T(" AND hpou_product_id = hpol_product_id AND hpou_dousage = hpol_dousage)") \
			_T(" LEFT JOIN m_product") \
			_T(" ON(hpol_product_id = mp_product_id)") \
			_T(" LEFT JOIN hms_object") \
			_T(" ON (hpo_object_id = ho_id)") \
			_T(" WHERE hpo_docno   = %ld") \
			_T(" AND hpo_treatidx  IN(%s)") \
			_T(" GROUP BY mp_name,") \
			_T("   hpol_line,") \
			_T("   mp_product_uom_id,") \
			_T("   hpou_dousage,") \
			_T("   hpou_speed,") \
			_T("   mp_org_id,") \
			_T("   hpo_storage_id,") \
			_T("   ho_type,") \
			_T("   hpou_index") \
			_T(" UNION ALL") \
			_T(" SELECT 2      AS ptype,") \
			_T("   hp_drugname AS pharma,") \
			_T("   TRIM(SUM(hp_quantity)") \
			_T("   || ' '") \
			_T("   || hp_unit)               AS soluong,") \
			_T("   hp_usage                  AS duongdung,") \
			_T("   hp_speed                  AS tocdo,") \
			_T("   CAST(' ' AS NVARCHAR2(1)) AS mp_org_id,") \
			_T("   CAST(' ' AS NVARCHAR2(1)) AS ghi_chu,") \
			_T("   hp_idx                    AS hpol_line,") \
			_T("   0                         AS hpou_index") \
			_T(" FROM hms_prescription") \
			_T(" LEFT JOIN hms_siexam") \
			_T(" ON (hsie_docno    = hp_docno") \
			_T(" AND hsie_idx      = hp_receptidx)") \
			_T(" WHERE hp_docno    = %ld") \
			_T(" AND hp_receptidx IN(%s)") \
			_T(" GROUP BY hp_drugname,") \
			_T("   hp_unit,") \
			_T("   hp_usage,") \
			_T("   hp_speed,") \
			_T("   hp_idx") \
			_T(" ORDER BY ptype, hpou_index,") \
			_T("   hpol_line,") \
			_T("   mp_org_id,") \
			_T("   pharma"), m_nDocNo, szIdx, m_nDocNo, szIdx);
		}
		//_msg(_T("%s"), szSQL2);
		rs1.ExecSQL(szSQL2);
		
		nStt = 1;
		szPharma.Empty();
		
		CString szIndex, szDuongDung, szTocDo;
		while (!rs1.IsEOF())
		{
			rs1.GetValue(_T("duongdung"), szDuongDung);
			rs1.GetValue(_T("hpou_speed"), szTocDo);
			if(nStt > 1)
			{
				szIndex.Format(_T("<br>%d. "), nStt);
			}
			else
			{
				szIndex.Format(_T("%d. "), nStt);
			}
			tmpStr.Format(_T("%s"),rs1.GetValue(_T("pharma")));
			
			if(!tmpStr.IsEmpty())
				szPharma.AppendFormat(_T("%s %s x %s %s"), szIndex, tmpStr, rs1.GetValue(_T("soluong")), rs1.GetValue(_T("ghi_chu")));
			
			if(!szDuongDung.IsEmpty())
			{
				if(!szTocDo.IsEmpty())
				{
					szPharma.AppendFormat(_T("<br><i>%s %s</i>"), szDuongDung, szTocDo);
				}else
					szPharma.AppendFormat(_T("<br><i>%s</i>"), szDuongDung);
			}
			nStt++;
			rs1.MoveNext();
		}

		nCount = 0;

		//in danh sach thuoc tra lai
		szSQL2.Format(_T(" SELECT mp_name AS pharma,") \
			_T("   TRIM(SUM(HPOLR_QTYREVERSE)") \
			_T("   || ' '") \
			_T("   || get_uomname(mp_product_uom_id)) AS soluong, ") \
			_T("   mp_org_id, case when hpo_storage_id = 14 and ho_type = 'I' then '(PTTYC)' else '' end as ghi_chu") \
			_T(" FROM hms_pharmaorder") \
			_T(" LEFT JOIN hms_pharmaorderline_r") \
			_T(" ON(hpolr_orderid = hpo_orderid)") \
			_T(" LEFT JOIN m_product") \
			_T(" ON(hpolr_product_id = mp_product_id)") \
			_T(" left join hms_object on (hpo_object_id = ho_id)") \
			_T(" WHERE hpo_docno    = %ld") \
			_T(" AND hpo_treatidx   = %s HAVING SUM(HPOLR_QTYREVERSE) > 0") \
			_T(" GROUP BY mp_name,") \
			_T("   mp_product_uom_id,") \
			_T("    mp_org_id, hpo_storage_id, ho_type") \
			_T(" ORDER BY mp_org_id,") \
			_T("   mp_name"), m_nDocNo, szIdx);
		//_msg(_T("%s"), szSQL2);
		nCount = rs1.ExecSQL(szSQL2);

		nStt = 1;
		if(nCount > 0)
			szPharma.AppendFormat(_T("<br><b><i>Thuốc trả lại</i></b><br>"));
		else
			szPharma.AppendFormat(_T("<br>"));

		while (!rs1.IsEOF())
		{
			rs1.GetValue(_T("duongdung"), szDuongDung);
			rs1.GetValue(_T("hpou_speed"), szTocDo);
			if(nStt > 1)
			{
				szIndex.Format(_T("<br>%d. "), nStt);
			}
			else
			{
				szIndex.Format(_T("%d. "), nStt);
			}
			tmpStr.Format(_T("%s"),rs1.GetValue(_T("pharma")));			
			
			//szPharma.AppendFormat(_T("<br><i></i>"));
			rs1.GetValue(_T("ghi_chu"), szghichu);
			
			if(!tmpStr.IsEmpty())
				if (szghichu.IsEmpty())
				{
				szPharma.AppendFormat(_T("%s %s x %s"), szIndex, tmpStr, rs1.GetValue(_T("soluong")), rs1.GetValue(_T("ghi_chu")));
				}
				else
				szPharma.AppendFormat(_T("%s %s x %s %s"), szIndex, tmpStr, rs1.GetValue(_T("soluong")), rs1.GetValue(_T("ghi_chu")));
			nStt++;
			rs1.MoveNext();
		}
		if (nStt > 1)
		{
			szPharma += _T("<br>");
		}
		rs.GetValue(_T("loidan"), szLoiDan);
		tmpStr.Empty();
		tmpStr.AppendFormat(_T("%s"), szPharma);

		if(!szLoiDan.IsEmpty())
		{
			//szLoiDan.Replace(_T("\r\n"), _T("<br>"));
			//szPharma.AppendFormat(_T("<br><b>* L\x1EDDi \x64\x1EB7n: </b><br/>%s<br/>"), szLoiDan);
			tmpStr.AppendFormat(_T("<b>Mệnh lệnh điều trị:</b> <br/>   %s"), szLoiDan);
		}

		obj = rptDetail->GetItem(_T("4"));
		//_msg(_T("%s"), tmpStr);
		if(obj) obj->SetType(REPORT_HTML);
		rptDetail->SetValue(_T("4"), tmpStr);

		rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		rptDetail->SetValue(_T("DoctorName"), rs.GetValue(_T("docname")));

		if(szDeanNote == _T("Y") && rptDetail)
		{
			szCNK.Format(_T("SELECT sd_director FROM sys_dept WHERE sd_id = '%s'"), szDeptID);
			rsCNK.ExecSQL(szCNK);
			rptDetail->SetValue(_T("cnk"), _T("\x43h\x1EE7 nhi\x1EC7m kho\x61"));
			rptDetail->SetValue(_T("cnkname"), rsCNK.GetValue(_T("sd_director")));
		}
		else
		{
			rptDetail->SetValue(_T("cnk"), _T(""));
			rptDetail->SetValue(_T("cnkname"), _T(""));
		}
		rs.MoveNext();
		
	}
	
	rptFooter = rpt.GetReportFooter();
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	//rptFooter->SetValue(_T("PrintDate"), szDate);
	//tmpStr = GetDoctorName(pMF->GetCurrentUser());
	//rptFooter->SetValue(_T("Practitioner"), tmpStr);
	rpt.PrintPreview();
	//
	UpdatePrintCount();
	//
	CGuiDialog::OnCancel();
}

void CTMChoosePrintDateDlg::OnPrintPhieuCongKhaiThuocSelect()
{

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CRecord rsTDSD(&pMF->m_db);
	CRecord rsMLDT(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL;
	CString szSQL, szSQLTDSD, szSQLMLDT, tmpStr, szWhere, szWhere2, szIDx, szDateStr, szNewDate, szOldDate, szDrugAdvice;
	int nIdx = 1;
	
	if (!rpt.Init(_T("Reports\\HMS\\TM_TDSDCONGKHAITHUOC.RPT")))
		return;
	
	CString szRefIdxs;
	CString szIDXs;
	szIDXs = _T("0");
    int count = 0;
	for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
	{
		if (m_wndPrintDateList.GetCheck(i))
		{
			if (!szIDXs.IsEmpty())
				szIDXs += _T(",");
			szIDXs.AppendFormat(_T("%s"), m_wndPrintDateList.GetItemText(i, 0));
			if (!szRefIdxs.IsEmpty())
				szRefIdxs += _T(",");
			szRefIdxs.AppendFormat(_T("%s"), m_wndPrintDateList.GetItemText(i, 4));
            count++;
		}
	}
    if (count > 0)
    {
        rpt.GetReportPrinter()->SetSignMode(0);
    }

	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));

	rptHeader->SetValue(_T("TreatIdx"), szIDXs);
    rptHeader->SetValue(_T("RefIdxs"), szRefIdxs);

	
	szSQL.Format(_T("SELECT hd_docno                                       AS fdocno, ") \
				_T("       htr_recordno                                    AS frecord, ") \
				_T("       Trim(hp_surname ") \
				_T("            || ' ' ") \
				_T("            || hp_midname ") \
				_T("            || ' ' ") \
				_T("            || hp_firstname)                           AS fname, ") \
				_T("       Hms_getobjectname(hd_object)                    AS doituong, ") \
				_T("       Sys_sel_getname('sys_sex', hp_sex)              AS fsex, ") \
				_T("       extract (year from hp_birthdate)                AS fage, ") \
				_T("       htr_admitdate                                   AS ngayvaovien, ") \
				_T("       Extract(year FROM hp_birthdate)                 AS fyear, ") \
				_T("       hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS faddress, ") \
				_T("       HMS_GETDEPARTMENTNAME(htr_deptid)               AS fdeptid, ") \
				_T("       Hms_getroomname(htr_deptid, hb_roomid)          AS buong, ") \
				_T("       htr_maindisease                                 AS fDiagnostic ") \
				_T("FROM   hms_treatment_record ") \
				_T("       LEFT JOIN hms_doc ") \
				_T("              ON( htr_docno = hd_docno ) ") \
				_T("       LEFT JOIN hms_patient ") \
				_T("              ON( hp_patientno = hd_patientno ) ") \
				_T("       LEFT JOIN hms_bed ") \
				_T("              ON( hb_docno = hd_docno and hb_deptid=htr_deptid and hb_refidx=htr_idx ) ") \
				_T("WHERE  htr_docno = %ld and htr_idx in(%s)  "), m_nDocNo, szRefIdxs);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	if(!rs.IsEOF())
	{
		rptHeader->SetValue(_T("Department"), rs.GetValue(_T("fdeptid")));
		rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
		rptHeader->SetValue(_T("DocNo"), rs.GetValue(_T("fdocno")));
		rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
		rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("fname")));
		rptHeader->SetValue(_T("YearOfBirth"), rs.GetValue(_T("fyear")));
		rptHeader->SetValue(_T("Sex"), rs.GetValue(_T("fsex")));
		rptHeader->SetValue(_T("Room"), rs.GetValue(_T("buong")));
		rptHeader->SetValue(_T("Object"), rs.GetValue(_T("doituong")));
		rptHeader->SetValue(_T("Diagnostic"), rs.GetValue(_T("fDiagnostic")));
		rptHeader->SetValue(_T("NgayVao"), CDate::Convert(rs.GetValue(_T("ngayvaovien")), yyyymmdd, ddmmyyyy));
	}
	
	szIDXs=_T("-1");

	for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
	{
		if (m_wndPrintDateList.GetCheck(i))
		{
			if (!szIDXs.IsEmpty())
				szIDXs += _T(",");
			szIDXs.AppendFormat(_T("%s"), m_wndPrintDateList.GetItemText(i, 0));
		}
	}
	if (szIDXs.IsEmpty())
		return;
	
	if(!szIDXs.IsEmpty())
	{
		szWhere.Format(_T(" and hpo_treatidx in(%s) "), szIDXs);
		szWhere2.Format(_T(" and hp_receptidx in(%s) "), szIDXs);
		szSQL.Format(_T("SELECT hsie_diet, hsie_nurseassistance FROM hms_siexam WHERE hsie_docno=%ld and hsie_idx in(%s) "), m_nDocNo,  szIDXs);
		rs2.ExecSQL(szSQL);
		_fmsg(_T("%s"), szSQL);
		CString szNurseAssist;
		rs2.GetValue(_T("hsie_nurseassistance"), szNurseAssist);
		if(IsDigit(szNurseAssist))
		{
			szNurseAssist = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
		}

		rpt.GetReportFooter()->SetValue(_T("chedoholy"), szNurseAssist);
		rpt.GetReportFooter()->SetValue(_T("chedoan"), rs2.GetValue(_T("hsie_diet")));
	}
	szSQLTDSD.Format(_T(" SELECT 1                    AS ptype,") \
		_T("   mp_name                   AS tenthuoc,") \
		_T("   hpol_qtyorder             AS soluong,") \
		_T("   hpol_qtyissue             AS soluongcap,") \
		_T("   Get_uomname(mp_uom_id)    AS donvi,") \
		_T("   hpou_dousage              AS duongdung,") \
		_T("   Get_username(hsie_doctor) AS bschidinh,") \
		_T("   hpou_speed                AS tocdo,") \
		_T("   GET_USERNAME(hsie_nurse)  AS nurse,") \
		_T("   hsie_date,") \
		_T("   hpo_orderid AS idx,") \
		_T("   hpol_line   AS line") \
		_T(" FROM hms_ipharmaorderline") \
		_T(" LEFT JOIN hms_ipharmaorder") \
		_T(" ON(hpo_orderid = hpol_orderid") \
		_T(" AND hpo_docno  = hpol_docno)") \
		_T(" LEFT JOIN m_product") \
		_T(" ON( mp_product_id = hpol_product_id )") \
		_T(" LEFT JOIN hms_ipharmaorder_usage") \
		_T(" ON( hpou_orderid    = hpol_orderid") \
		_T(" AND hpou_product_id = hpol_product_id AND hpou_dousage = hpol_dousage)") \
		_T(" LEFT JOIN hms_siexam") \
		_T(" ON (hsie_docno    = hpo_docno") \
		_T(" AND hsie_idx      = hpo_treatidx)") \
		_T(" WHERE hpo_docno   = %ld") \
		_T(" %s") \
		_T(" UNION ALL") \
		_T(" SELECT 2                     AS ptype,") \
		_T("   hp_drugname                AS tenthuoc,") \
		_T("   hp_quantity                AS soluong,") \
		_T("   hp_quantity                AS soluongcap,") \
		_T("   hp_unit                    AS donvi,") \
		_T("   hp_usage                   AS duongdung,") \
		_T("   Get_username(hp_createdby) AS bschidinh,") \
		_T("   hp_speed                   AS tocdo,") \
		_T("   CAST('' AS NVARCHAR2(1))   AS nurse,") \
		_T("   hsie_date,") \
		_T("   hp_idx AS idx,") \
		_T("   0") \
		_T(" FROM hms_prescription") \
		_T(" LEFT JOIN hms_siexam") \
		_T(" ON (hsie_docno    = hp_docno") \
		_T(" AND hsie_idx      = hp_receptidx)") \
		_T(" WHERE hp_docno    = %ld") \
		_T(" %s") \
		_T(" ORDER BY hsie_date,") \
		_T("   ptype,") \
		_T("   idx,") \
		_T("   line"), m_nDocNo, szWhere, m_nDocNo, szWhere2);
	_fmsg(_T("%s"), szSQLTDSD);
	rsTDSD.ExecSQL(szSQLTDSD);

	int nCount = 0;
	int nTongKhoan = 0;
	int nTongCap=0;
	while(!rsTDSD.IsEOF())
	{

		rsTDSD.GetValue(_T("hsie_date"), szNewDate);
		if (szNewDate != szOldDate && !szNewDate.IsEmpty())
		{
			szSQLMLDT.Format(
			_T(" select listagg(cast(hsie_drug_advice as varchar2(2000)), ',') ") \
			_T("			within group (order by hsie_idx) as hsie_drug_advice ") \
			_T(" from hms_siexam ") \
			_T(" where hsie_docno = %ld and hsie_date = to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" and hsie_type = 'DT'")
			, m_nDocNo, szOldDate);
			rsMLDT.ExecSQL(szSQLMLDT);
			rsMLDT.GetValue(_T("hsie_drug_advice"), szDrugAdvice);
			if(!szDrugAdvice.IsEmpty())
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
					tmpStr.Format(_T("Mệnh lệnh điều trị: %s"), szDrugAdvice);
					rptDetail->SetValue(_T("GroupName"), tmpStr);
				}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), CDateTime::Convert(szNewDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
			szOldDate = szNewDate;
			nIdx = 1;
		}

		rptDetail = rpt.AddDetail();

		szIDx.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("1"), szIDx);
		nCount = ToInt(rsTDSD.GetValue(_T("soluong")));
		nTongKhoan += nCount;
		nCount = ToInt(rsTDSD.GetValue(_T("soluongcap")));
		nTongCap += nCount;
		rptDetail->SetValue(_T("2"), rsTDSD.GetValue(_T("tenthuoc")));
		rptDetail->SetValue(_T("3"), rsTDSD.GetValue(_T("donvi")));
		rptDetail->SetValue(_T("4"), rsTDSD.GetValue(_T("soluong")));
		rptDetail->SetValue(_T("so_luong_cap"), rsTDSD.GetValue(_T("soluongcap")));
		rptDetail->SetValue(_T("5"), rsTDSD.GetValue(_T("duongdung")));
		rptDetail->SetValue(_T("6"), rsTDSD.GetValue(_T("bschidinh")));
		rptDetail->SetValue(_T("7"), rsTDSD.GetValue(_T("tocdo")));
		rptDetail->SetValue(_T("tendd"), rsTDSD.GetValue(_T("nurse")));
		rptDetail->SetValue(_T("8"), rsTDSD.GetValue(_T("soluongcap")));
		nIdx++;
		rsTDSD.MoveNext();
		
	}

	szSQLMLDT.Format(
		_T(" select listagg(cast(hsie_drug_advice as varchar2(2000)), ',') ") \
		_T("			within group (order by hsie_idx) as hsie_drug_advice") \
		_T(" from hms_siexam ") \
		_T(" where hsie_docno = %ld and hsie_date = to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" and hsie_type = 'DT'")
		, m_nDocNo, szOldDate);
	rsMLDT.ExecSQL(szSQLMLDT);
	rsMLDT.GetValue(_T("hsie_drug_advice"), szDrugAdvice);
	if(!szDrugAdvice.IsEmpty())
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
		tmpStr.Format(_T("Mệnh lệnh điều trị: %s"), szDrugAdvice);
		rptDetail->SetValue(_T("GroupName"), tmpStr);
	}

	rptFooter = rpt.GetReportFooter();
	tmpStr = pMF->GetSysDateTime();
	szDateStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDateStr);
	rptFooter->SetValue(_T("tongkhoanthuoc"), nTongKhoan);
	rptFooter->SetValue(_T("tongkhoancap"), nTongCap);
	rpt.PrintPreview();

}


void CTMChoosePrintDateDlg::PrintPhieuCongKhaiThuoc(long nTreatIdx)
{

    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    CReport rpt;
    CRecord rs(&pMF->m_db);
    CRecord rsTDSD(&pMF->m_db);
    CRecord rsMLDT(&pMF->m_db);
    CRecord rs2(&pMF->m_db);
    CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL;
    CString szSQL, szSQLTDSD, szSQLMLDT, tmpStr, szWhere, szWhere2, szIDx,
        szDateStr, szNewDate, szOldDate, szDrugAdvice;
    int nIdx = 1;

    if (!rpt.Init(_T("Reports\\HMS\\TM_TDSDCONGKHAITHUOC.RPT")))
        return;

    CString szRefIdxs = L"1";
    CString szIDXs;

	szSQL.Format(L"SELECT HSIE_REFIDX FROM hms_siexam WHERE hsie_docno=%ld and hsie_idx=%ld", m_nDocNo, nTreatIdx);
    rs.ExecSQL(szSQL);
    int nRefIdx = pMF->m_nRefIndex;
    
    if (!rs.IsEOF())
	{
        rs.GetValue(L"hsie_refidx", nRefIdx);
    }
	
	szRefIdxs.Format(L"%ld", nRefIdx);
    
    rptHeader = rpt.GetReportHeader();
    rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
    rptHeader->SetValue(_T("Department"),
                        pMF->GetDepartmentName(pMF->GetDepartmentID()));

    rptHeader->SetValue(_T("TreatIdx"), szIDXs);
    rptHeader->SetValue(_T("RefIdxs"), szRefIdxs);

    szSQL.Format(
        _T("SELECT hd_docno                                       AS fdocno, ")
        _T("       htr_recordno                                    AS ")
        _T("frecord, ")
        _T("       Trim(hp_surname ")
        _T("            || ' ' ")
        _T("            || hp_midname ")
        _T("            || ' ' ")
        _T("            || hp_firstname)                           AS fname, ")
        _T("       Hms_getobjectname(hd_object)                    AS ")
        _T("doituong, ")
        _T("       Sys_sel_getname('sys_sex', hp_sex)              AS fsex, ")
        _T("       extract (year from hp_birthdate)                AS fage, ")
        _T("       htr_admitdate                                   AS ")
        _T("ngayvaovien, ")
        _T("       Extract(year FROM hp_birthdate)                 AS fyear, ")
        _T("       hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, ")
        _T("hp_distid), nvl(hd_villid, hp_villid)) AS faddress, ")
        _T("       HMS_GETDEPARTMENTNAME(htr_deptid)               AS ")
        _T("fdeptid, ")
        _T("       Hms_getroomname(htr_deptid, hb_roomid)          AS buong, ")
        _T("       htr_maindisease                                 AS ")
        _T("fDiagnostic ")
        _T("FROM   hms_treatment_record ")
        _T("       LEFT JOIN hms_doc ")
        _T("              ON( htr_docno = hd_docno ) ")
        _T("       LEFT JOIN hms_patient ")
        _T("              ON( hp_patientno = hd_patientno ) ")
        _T("       LEFT JOIN hms_bed ")
        _T("              ON( hb_docno = hd_docno and hb_deptid=htr_deptid ")
        _T("and hb_refidx=htr_idx ) ")
        _T("WHERE  htr_docno = %ld and htr_idx in(%s)  "),
        m_nDocNo, szRefIdxs);
    rs.ExecSQL(szSQL);
    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        return;
    }
    if (!rs.IsEOF())
    {
        rptHeader->SetValue(_T("Department"), rs.GetValue(_T("fdeptid")));
        rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
        rptHeader->SetValue(_T("DocNo"), rs.GetValue(_T("fdocno")));
        rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
        rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("fname")));
        rptHeader->SetValue(_T("YearOfBirth"), rs.GetValue(_T("fyear")));
        rptHeader->SetValue(_T("Sex"), rs.GetValue(_T("fsex")));
        rptHeader->SetValue(_T("Room"), rs.GetValue(_T("buong")));
        rptHeader->SetValue(_T("Object"), rs.GetValue(_T("doituong")));
        rptHeader->SetValue(_T("Diagnostic"), rs.GetValue(_T("fDiagnostic")));
        rptHeader->SetValue(
            _T("NgayVao"),
            CDate::Convert(rs.GetValue(_T("ngayvaovien")), yyyymmdd, ddmmyyyy));
    }

    szIDXs.AppendFormat(L"%ld", nTreatIdx);

    
    if (!szIDXs.IsEmpty())
    {
        szWhere.Format(_T(" and hpo_treatidx in(%s) "), szIDXs);
        szWhere2.Format(_T(" and hp_receptidx in(%s) "), szIDXs);
        szSQL.Format(_T("SELECT hsie_diet, hsie_nurseassistance FROM ")
                     _T("hms_siexam WHERE hsie_docno=%ld and hsie_idx in(%s) "),
                     m_nDocNo, szIDXs);
        rs2.ExecSQL(szSQL);
        _fmsg(_T("%s"), szSQL);
        CString szNurseAssist;
        rs2.GetValue(_T("hsie_nurseassistance"), szNurseAssist);
        if (IsDigit(szNurseAssist))
        {
            szNurseAssist =
                pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
        }

        rpt.GetReportFooter()->SetValue(_T("chedoholy"), szNurseAssist);
        rpt.GetReportFooter()->SetValue(_T("chedoan"),
                                        rs2.GetValue(_T("hsie_diet")));
    }
    szSQLTDSD.Format(_T(" SELECT 1                    AS ptype,")
                     _T("   mp_name                   AS tenthuoc,")
                     _T("   hpol_qtyorder             AS soluong,")
                     _T("   hpol_qtyissue             AS soluongcap,")
                     _T("   Get_uomname(mp_uom_id)    AS donvi,")
                     _T("   hpou_dousage              AS duongdung,")
                     _T("   Get_username(hsie_doctor) AS bschidinh,")
                     _T("   hpou_speed                AS tocdo,")
                     _T("   GET_USERNAME(hsie_nurse)  AS nurse,")
                     _T("   hsie_date,")
                     _T("   hpo_orderid AS idx,")
                     _T("   hpol_line   AS line")
                     _T(" FROM hms_ipharmaorderline")
                     _T(" LEFT JOIN hms_ipharmaorder")
                     _T(" ON(hpo_orderid = hpol_orderid")
                     _T(" AND hpo_docno  = hpol_docno)")
                     _T(" LEFT JOIN m_product")
                     _T(" ON( mp_product_id = hpol_product_id )")
                     _T(" LEFT JOIN hms_ipharmaorder_usage")
                     _T(" ON( hpou_orderid    = hpol_orderid")
                     _T(" AND hpou_product_id = hpol_product_id AND ")
                     _T("hpou_dousage = hpol_dousage)")
                     _T(" LEFT JOIN hms_siexam")
                     _T(" ON (hsie_docno    = hpo_docno")
                     _T(" AND hsie_idx      = hpo_treatidx)")
                     _T(" WHERE hpo_docno   = %ld")
                     _T(" %s")
                     _T(" UNION ALL")
                     _T(" SELECT 2                     AS ptype,")
                     _T("   hp_drugname                AS tenthuoc,")
                     _T("   hp_quantity                AS soluong,")
                     _T("   hp_quantity                AS soluongcap,")
                     _T("   hp_unit                    AS donvi,")
                     _T("   hp_usage                   AS duongdung,")
                     _T("   Get_username(hp_createdby) AS bschidinh,")
                     _T("   hp_speed                   AS tocdo,")
                     _T("   CAST('' AS NVARCHAR2(1))   AS nurse,")
                     _T("   hsie_date,")
                     _T("   hp_idx AS idx,")
                     _T("   0")
                     _T(" FROM hms_prescription")
                     _T(" LEFT JOIN hms_siexam")
                     _T(" ON (hsie_docno    = hp_docno")
                     _T(" AND hsie_idx      = hp_receptidx)")
                     _T(" WHERE hp_docno    = %ld")
                     _T(" %s")
                     _T(" ORDER BY hsie_date,")
                     _T("   ptype,")
                     _T("   idx,")
                     _T("   line"),
                     m_nDocNo, szWhere, m_nDocNo, szWhere2);
    _fmsg(_T("%s"), szSQLTDSD);
    rsTDSD.ExecSQL(szSQLTDSD);

    int nCount = 0;
    int nTongKhoan = 0;
    int nTongCap = 0;
    while (!rsTDSD.IsEOF())
    {

        rsTDSD.GetValue(_T("hsie_date"), szNewDate);
        if (szNewDate != szOldDate && !szNewDate.IsEmpty())
        {
            szSQLMLDT.Format(_T(" select listagg(cast(hsie_drug_advice as ")
                             _T("varchar2(2000)), ',') ")
                             _T("			within group (order by hsie_idx) ")
                             _T("as hsie_drug_advice ")
                             _T(" from hms_siexam ")
                             _T(" where hsie_docno = %ld and hsie_date = ")
                             _T("to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ")
                             _T(" and hsie_type = 'DT'"),
                             m_nDocNo, szOldDate);
            rsMLDT.ExecSQL(szSQLMLDT);
            rsMLDT.GetValue(_T("hsie_drug_advice"), szDrugAdvice);
            if (!szDrugAdvice.IsEmpty())
            {
                rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
                tmpStr.Format(_T("Mệnh lệnh điều trị: %s"), szDrugAdvice);
                rptDetail->SetValue(_T("GroupName"), tmpStr);
            }

            rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
            rptDetail->SetValue(_T("GroupName"),
                                CDateTime::Convert(szNewDate, yyyymmdd | hhmmss,
                                                   ddmmyyyy | hhmmss));
            szOldDate = szNewDate;
            nIdx = 1;
        }

        rptDetail = rpt.AddDetail();

        szIDx.Format(_T("%d"), nIdx);
        rptDetail->SetValue(_T("1"), szIDx);
        nCount = ToInt(rsTDSD.GetValue(_T("soluong")));
        nTongKhoan += nCount;
        nCount = ToInt(rsTDSD.GetValue(_T("soluongcap")));
        nTongCap += nCount;
        rptDetail->SetValue(_T("2"), rsTDSD.GetValue(_T("tenthuoc")));
        rptDetail->SetValue(_T("3"), rsTDSD.GetValue(_T("donvi")));
        rptDetail->SetValue(_T("4"), rsTDSD.GetValue(_T("soluong")));
        rptDetail->SetValue(_T("so_luong_cap"),
                            rsTDSD.GetValue(_T("soluongcap")));
        rptDetail->SetValue(_T("5"), rsTDSD.GetValue(_T("duongdung")));
        rptDetail->SetValue(_T("6"), rsTDSD.GetValue(_T("bschidinh")));
        rptDetail->SetValue(_T("7"), rsTDSD.GetValue(_T("tocdo")));
        rptDetail->SetValue(_T("tendd"), rsTDSD.GetValue(_T("nurse")));
        rptDetail->SetValue(_T("8"), rsTDSD.GetValue(_T("soluongcap")));
        nIdx++;
        rsTDSD.MoveNext();
    }

    szSQLMLDT.Format(
        _T(" select listagg(cast(hsie_drug_advice as varchar2(2000)), ',') ")
        _T("			within group (order by hsie_idx) as hsie_drug_advice")
        _T(" from hms_siexam ")
        _T(" where hsie_docno = %ld and hsie_date = to_timestamp('%s', ")
        _T("'YYYY-MM-DD HH24:MI:SS') ")
        _T(" and hsie_type = 'DT'"),
        m_nDocNo, szOldDate);
    rsMLDT.ExecSQL(szSQLMLDT);
    rsMLDT.GetValue(_T("hsie_drug_advice"), szDrugAdvice);
    if (!szDrugAdvice.IsEmpty())
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
        tmpStr.Format(_T("Mệnh lệnh điều trị: %s"), szDrugAdvice);
        rptDetail->SetValue(_T("GroupName"), tmpStr);
    }

    rptFooter = rpt.GetReportFooter();
    tmpStr = pMF->GetSysDateTime();
    szDateStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), tmpStr.Mid(8, 2),
                     tmpStr.Mid(5, 2), tmpStr.Left(4));
    rptFooter->SetValue(_T("PrintDate"), szDateStr);
    rptFooter->SetValue(_T("tongkhoanthuoc"), nTongKhoan);
    rptFooter->SetValue(_T("tongkhoancap"), nTongCap);
    rpt.PrintPreview();


}
void CTMChoosePrintDateDlg::OnPrintPhieuCongKhaiThuocSelectEX()
{

	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	//_msg(_T("Chào"));
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CRecord rsTDSD(&pMF->m_db);
	CRecord rsMLDT(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL;
	CString szSQL, szSQLTDSD, szSQLMLDT, tmpStr, szWhere, szWhere2, szIDx, szDateStr, szNewDate, szOldDate, szDrugAdvice;
	int nIdx = 1;
	
	if (!rpt.Init(_T("Reports\\HMS\\TM_TDSDCONGKHAITHUOCEX.RPT")))
		return;
	
	CString szRefIdxs;
	CString szIDXs;
	szIDXs = _T("0");
	for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
	{
		if (m_wndPrintDateList.GetCheck(i))
		{
			if (!szIDXs.IsEmpty())
				szIDXs += _T(",");
			szIDXs.AppendFormat(_T("%s"), m_wndPrintDateList.GetItemText(i, 0));
			if (!szRefIdxs.IsEmpty())
				szRefIdxs += _T(",");
			szRefIdxs.AppendFormat(_T("%s"), m_wndPrintDateList.GetItemText(i, 4));
		}
	}

	rptHeader = rpt.GetReportHeader();
	rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	rptHeader->SetValue(_T("bschidinhthuoc"), rsTDSD.GetValue(_T("bschidinhthuoc")));

	rptHeader->SetValue(_T("TreatIdx"), szIDXs);
    rptHeader->SetValue(_T("RefIdxs"), szRefIdxs);
	
	szSQL.Format(_T("SELECT hd_docno                                        AS fdocno, ") \
				_T("       htr_recordno                                    AS frecord, ") \
				_T("       Trim(hp_surname ") \
				_T("            || ' ' ") \
				_T("            || hp_midname ") \
				_T("            || ' ' ") \
				_T("            || hp_firstname)                           AS fname, ") \
				_T("       Hms_getobjectname(hd_object)                    AS doituong, ") \
				_T("       Sys_sel_getname('sys_sex', hp_sex)              AS fsex, ") \
				_T("       extract (year from hp_birthdate)               AS fage, ") \
				_T("       htr_admitdate                                   AS ngayvaovien, ") \
				_T("       Extract(year FROM hp_birthdate)                 AS fyear, ") \
				_T("       hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) AS faddress, ") \
				_T("       HMS_GETDEPARTMENTNAME(htr_deptid)               AS fdeptid, ") \
				_T("       Hms_getroomname(htr_deptid, hb_roomid)          AS buong, ") \
				_T("       htr_maindisease                                 AS fDiagnostic, ") \
				_T(" CASE WHEN hd_hasallergy='Y' THEN cast('Có' as nvarchar2(8))") \
				_T(" ELSE cast('Không' as nvarchar2(8)) END as tiensudiung") \
				_T(" FROM   hms_treatment_record ") \
				_T("       LEFT JOIN hms_doc ") \
				_T("              ON( htr_docno = hd_docno ) ") \
				_T("       LEFT JOIN hms_patient ") \
				_T("              ON( hp_patientno = hd_patientno ) ") \
				_T("       LEFT JOIN hms_bed ") \
				_T("              ON( hb_docno = hd_docno and hb_deptid=htr_deptid and hb_refidx=htr_idx ) ") \
				_T("WHERE  htr_docno = %ld and htr_idx in(%s)  "), m_nDocNo, szRefIdxs);
	rs.ExecSQL(szSQL);
	
	if(rs.IsEOF())
	{
		AfxMessageBox(_T("No Data"));
		return;
	}
	if(!rs.IsEOF())
	{
		rptHeader->SetValue(_T("Department"), rs.GetValue(_T("fdeptid")));
		rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
		rptHeader->SetValue(_T("DocNo"), rs.GetValue(_T("fdocno")));
		rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
		rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("fname")));
		rptHeader->SetValue(_T("YearOfBirth"), rs.GetValue(_T("fyear")));
		rptHeader->SetValue(_T("Sex"), rs.GetValue(_T("fsex")));
		rptHeader->SetValue(_T("Room"), rs.GetValue(_T("buong")));
		rptHeader->SetValue(_T("Object"), rs.GetValue(_T("doituong")));
		rptHeader->SetValue(_T("Diagnostic"), rs.GetValue(_T("fDiagnostic")));
		rptHeader->SetValue(_T("NgayVao"), CDate::Convert(rs.GetValue(_T("ngayvaovien")), yyyymmdd, ddmmyyyy));
		rptHeader->SetValue(_T("Tiensudiung"), rs.GetValue(_T("tiensudiung")));
	}
	
	szIDXs=_T("-1");

	for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
	{
		if (m_wndPrintDateList.GetCheck(i))
		{
			if (!szIDXs.IsEmpty())
				szIDXs += _T(",");
			szIDXs.AppendFormat(_T("%s"), m_wndPrintDateList.GetItemText(i, 0));
		}
	}
	if (szIDXs.IsEmpty())
		return;
	
	if(!szIDXs.IsEmpty())
	{
		szWhere.Format(_T(" and hpo_treatidx in(%s) "), szIDXs);
		szWhere2.Format(_T(" and hp_receptidx in(%s) "), szIDXs);
		szSQL.Format(_T("SELECT hsie_diet, hsie_nurseassistance FROM hms_siexam WHERE hsie_docno=%ld and hsie_idx in(%s) "), m_nDocNo,  szIDXs);
		rs2.ExecSQL(szSQL);
		_fmsg(_T("%s"), szSQL);
		CString szNurseAssist;
		rs2.GetValue(_T("hsie_nurseassistance"), szNurseAssist);
		if(IsDigit(szNurseAssist))
		{
			szNurseAssist = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
		}

		rpt.GetReportFooter()->SetValue(_T("chedoholy"), szNurseAssist);
		rpt.GetReportFooter()->SetValue(_T("chedoan"), rs2.GetValue(_T("hsie_diet")));
	}
		szSQLTDSD.Format(_T(" SELECT") \
						_T("     distinct(tenthuoc), ptype, ") \
						_T("     soluong,    ") \
						_T("     soluongcap,  ") \
						_T("     donvi,") \
						_T("     duongdung,") \
						_T("     bschidinh,") \
						_T("     bschidinhthuoc,") \
						_T("     tocdo,") \
						_T("     nurse,") \
						_T("     hsie_date,") \
						_T("     idx,") \
						_T("     line,") \
						_T("     thoi_gian_su_dung,") \
						_T("     thoi_gian_su_dung_2,") \
						_T("     tg_batdau,") \
						_T("     tg_ketthuc   ") \
						_T(" FROM (") \
						_T("     SELECT 1  AS ptype,") \
						_T("       mp_name AS tenthuoc,  ") \
						_T("       CASE WHEN use_qty>0 THEN use_qty ELSE hpol_qtyorder END AS soluong,") \
						_T("       use_qty                   AS soluongcap,") \
						_T("       Get_uomname(mp_uom_id)    AS donvi,") \
						_T("       hpou_dousage              AS duongdung,") \
						_T("       Get_username(hsie_doctor) AS bschidinh,") \
						_T("       Get_username(hpo_doctor)  AS bschidinhthuoc,") \
						_T("       hpou_speed                AS tocdo,") \
						_T("       GET_USERNAME(hsie_nurse)  AS nurse,") \
						_T("       hsie_date,") \
						_T("       hpo_orderid AS idx,") \
						_T("       hpol_line   AS line,") \
						_T("       REPLACE(hpou_time ||':'|| hpou_speed, ':', chr(10)) AS thoi_gian_su_dung,") \
						_T("       (SELECT ss_desc") \
						_T("          FROM sys_sel") \
						_T("         WHERE ss_id='thietlap_gio_dungthuoc'") \
						_T("           AND ss_code=use_time) AS thoi_gian_su_dung_2,") \
						_T("       time_start AS tg_batdau,") \
						_T("       time_end   AS tg_ketthuc") \
						_T("     FROM hms_ipharmaorderline") \
						_T("     LEFT JOIN hms_ipharmaorder") \
						_T("            ON (hpo_orderid = hpol_orderid AND hpo_docno = hpol_docno)") \
						_T("     LEFT JOIN m_product") \
						_T("            ON (mp_product_id = hpol_product_id)") \
						_T("     LEFT JOIN m_product_item") \
						_T("            ON (mp_product_id = mpi_product_id AND mpi_product_item_id = hpol_product_item_id)") \
						_T("     LEFT JOIN hms_ipharmaorder_usage") \
						_T("            ON (hpou_orderid = hpol_orderid AND hpou_product_id = hpol_product_id AND hpou_dousage = hpol_dousage)") \
						_T("     LEFT JOIN HMS_IPHARMAORDER_DOSAGE") \
						_T("            ON (hpol_docno = docno AND hpol_orderid = order_id AND hpol_product_id = product_id)") \
						_T("     LEFT JOIN hms_ipharma_dispenseln ln") \
						_T("            ON (hpol_docno = ln.docno AND hpol_orderid = ln.order_id AND hpol_orderlineid = ln.orderline_id") \
						_T("                AND hpol_product_item_id = ln.product_itemid)") \
						_T("     LEFT JOIN hms_siexam") \
						_T("            ON (hsie_docno = hpo_docno AND hsie_idx = hpo_treatidx)") \
						_T("     WHERE hpo_docno = %ld") \
						_T("       %s") \
						_T(" UNION ALL") \
						_T("     SELECT 2                     AS ptype,") \
						_T("       hp_drugname                AS tenthuoc,") \
						_T("       hp_quantity                AS soluong,") \
						_T("       hp_quantity                AS soluongcap,") \
						_T("       hp_unit                    AS donvi,") \
						_T("       hp_usage                   AS duongdung,") \
						_T("       Get_username(hp_createdby) AS bschidinh,") \
						_T("       Get_username(hp_createdby) AS bschidinhthuoc,") \
						_T("       hp_speed                   AS tocdo,") \
						_T("       CAST('' AS NVARCHAR2(1))   AS nurse,") \
						_T("       hsie_date,") \
						_T("       hp_idx AS idx,") \
						_T("       0       AS line,") \
						_T("       CAST('' AS NVARCHAR2(1)) AS thoi_gian_su_dung,") \
						_T("       CAST('' AS NVARCHAR2(1)) AS thoi_gian_su_dung_2,") \
						_T("       CAST('' AS NVARCHAR2(1)) AS tg_batdau,") \
						_T("       CAST('' AS NVARCHAR2(1)) AS tg_ketthuc ") \
						_T(" FROM hms_prescription") \
						_T("     LEFT JOIN hms_siexam") \
						_T("            ON (hsie_docno = hp_docno AND hsie_idx = hp_receptidx)") \
						_T("     WHERE hp_docno    = %ld") \
						_T("       %s") \
						_T(" )") \
						_T(" ORDER BY") \
						_T("     hsie_date, ptype, idx, line"), m_nDocNo, szWhere, m_nDocNo, szWhere2);

	//_msg(_T("Hà Sơn = %s"), szSQLTDSD);
	rsTDSD.ExecSQL(szSQLTDSD);

	int nCount = 0;
	int nTongKhoan = 0;
	int nTongCap=0;
	while(!rsTDSD.IsEOF())
	{

		rsTDSD.GetValue(_T("hsie_date"), szNewDate);
		if (szNewDate != szOldDate && !szNewDate.IsEmpty())
		{
			szSQLMLDT.Format(
			_T(" select listagg(cast(hsie_drug_advice as varchar2(2000)), ',') ") \
			_T("			within group (order by hsie_idx) as hsie_drug_advice from hms_siexam ") \
			_T(" where hsie_docno = %ld and hsie_date = to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
			_T(" and hsie_type = 'DT'")
			, m_nDocNo, szOldDate);
			rsMLDT.ExecSQL(szSQLMLDT);
			rsMLDT.GetValue(_T("hsie_drug_advice"), szDrugAdvice);
			if(!szDrugAdvice.IsEmpty())
				{
					rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
					tmpStr.Format(_T("Mệnh lệnh điều trị: %s"), szDrugAdvice);
					rptDetail->SetValue(_T("GroupName"), tmpStr);
				}

			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("GroupName"), CDateTime::Convert(szNewDate, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
			szOldDate = szNewDate;
			nIdx = 1;
		}

		rptDetail = rpt.AddDetail();

		szIDx.Format(_T("%d"), nIdx);
		rptDetail->SetValue(_T("x1"), szIDx);
		
		nCount = ToInt(rsTDSD.GetValue(_T("soluong")));
		nTongKhoan += nCount;
		nCount = ToInt(rsTDSD.GetValue(_T("soluongcap")));
		nTongCap += nCount;
		rptDetail->SetValue(_T("2"), rsTDSD.GetValue(_T("tenthuoc")));
		rptDetail->SetValue(_T("3"), rsTDSD.GetValue(_T("donvi")));
		rptDetail->SetValue(_T("4"), rsTDSD.GetValue(_T("soluong")));
		rptDetail->SetValue(_T("so_luong_cap"), rsTDSD.GetValue(_T("soluongcap")));
		rptDetail->SetValue(_T("5"), rsTDSD.GetValue(_T("duongdung")));
		rptDetail->SetValue(_T("6"), rsTDSD.GetValue(_T("bschidinh")));
		rptDetail->SetValue(_T("7"), rsTDSD.GetValue(_T("tocdo")));
		rptDetail->SetValue(_T("tendd"), rsTDSD.GetValue(_T("nurse")));
		rptDetail->SetValue(_T("8"), rsTDSD.GetValue(_T("soluongcap")));
		rptDetail->SetValue(_T("thoi_gian"), rsTDSD.GetValue(_T("thoi_gian_su_dung")));
        rptDetail->SetValue(_T("thoi_gian_su_dung_2"), rsTDSD.GetValue(_T("thoi_gian_su_dung_2")));
		rptHeader->SetValue(_T("bschidinhthuoc"), rsTDSD.GetValue(_T("bschidinhthuoc")));
        rptDetail->SetValue(_T("tg_batdau"), rsTDSD.GetValue(_T("tg_batdau")));
        rptDetail->SetValue(_T("tg_ketthuc"), rsTDSD.GetValue(_T("tg_ketthuc")));
        rptDetail->SetValue(_T("solo"), rsTDSD.GetValue(_T("solo")));
		nIdx++;
		rsTDSD.MoveNext();		
	}

	szSQLMLDT.Format(
		_T("select listagg(cast(hsie_drug_advice as varchar2(2000)), ',') ") \
		_T("			within group (order by hsie_idx) as hsie_drug_advice from hms_siexam ") \
		_T("where hsie_docno = %ld and hsie_date = to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
		_T(" and hsie_type = 'DT'")
		, m_nDocNo, szOldDate);
	rsMLDT.ExecSQL(szSQLMLDT);
	rsMLDT.GetValue(_T("hsie_drug_advice"), szDrugAdvice);
	if(!szDrugAdvice.IsEmpty())
	{
		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
		tmpStr.Format(_T("Mệnh lệnh điều trị: %s"), szDrugAdvice);
		rptDetail->SetValue(_T("GroupName"), tmpStr);
	}

	rptFooter = rpt.GetReportFooter();
	tmpStr = pMF->GetSysDateTime();
	szDateStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDateStr);
	rptFooter->SetValue(_T("tongkhoanthuoc"), nTongKhoan);
	rptFooter->SetValue(_T("tongkhoancap"), nTongCap);
	rpt.PrintPreview();

}



void CTMChoosePrintDateDlg::PrintPhieuCongKhaiThuocEx(long nTreatIdx)
{

    CHMSMainFrame *pMF = (CHMSMainFrame *)AfxGetMainWnd();
    //_msg(_T("Chào"));
    CReport rpt;
    CRecord rs(&pMF->m_db);
    CRecord rsTDSD(&pMF->m_db);
    CRecord rsMLDT(&pMF->m_db);
    CRecord rs2(&pMF->m_db);
    CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL;
    CString szSQL, szSQLTDSD, szSQLMLDT, tmpStr, szWhere, szWhere2, szIDx,
        szDateStr, szNewDate, szOldDate, szDrugAdvice;
    int nIdx = 1;

    if (!rpt.Init(_T("Reports\\HMS\\TM_TDSDCONGKHAITHUOCEX.RPT")))
        return;

    CString szRefIdxs;
    CString szIDXs;
    
    szSQL.Format(L"SELECT HSIE_REFIDX FROM hms_siexam WHERE hsie_docno=%ld and "
                 L"hsie_idx=%ld",
                 m_nDocNo, nTreatIdx);
    rs.ExecSQL(szSQL);
    int nRefIdx = pMF->m_nRefIndex;

    if (!rs.IsEOF())
    {
        rs.GetValue(L"hsie_refidx", nRefIdx);
    }

    szRefIdxs.Format(L"%ld", nRefIdx);



    rptHeader = rpt.GetReportHeader();
    rptHeader->SetValue(_T("HospitalName"), pMF->m_szHospitalName);
    rptHeader->SetValue(_T("Department"),
                        pMF->GetDepartmentName(pMF->GetDepartmentID()));
    rptHeader->SetValue(_T("bschidinhthuoc"),
                        rsTDSD.GetValue(_T("bschidinhthuoc")));

    rptHeader->SetValue(_T("TreatIdx"), szIDXs);
    rptHeader->SetValue(_T("RefIdxs"), szRefIdxs);

    szSQL.Format(
        _T("SELECT hd_docno                                        AS fdocno, ")
        _T("       htr_recordno                                    AS ")
        _T("frecord, ")
        _T("       Trim(hp_surname ")
        _T("            || ' ' ")
        _T("            || hp_midname ")
        _T("            || ' ' ")
        _T("            || hp_firstname)                           AS fname, ")
        _T("       Hms_getobjectname(hd_object)                    AS ")
        _T("doituong, ")
        _T("       Sys_sel_getname('sys_sex', hp_sex)              AS fsex, ")
        _T("       extract (year from hp_birthdate)               AS fage, ")
        _T("       htr_admitdate                                   AS ")
        _T("ngayvaovien, ")
        _T("       Extract(year FROM hp_birthdate)                 AS fyear, ")
        _T("       hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, ")
        _T("hp_distid), nvl(hd_villid, hp_villid)) AS faddress, ")
        _T("       HMS_GETDEPARTMENTNAME(htr_deptid)               AS ")
        _T("fdeptid, ")
        _T("       Hms_getroomname(htr_deptid, hb_roomid)          AS buong, ")
        _T("       htr_maindisease                                 AS ")
        _T("fDiagnostic, ")
        _T(" CASE WHEN hd_hasallergy='Y' THEN cast('Có' as nvarchar2(8))")
        _T(" ELSE cast('Không' as nvarchar2(8)) END as tiensudiung")
        _T(" FROM   hms_treatment_record ")
        _T("       LEFT JOIN hms_doc ")
        _T("              ON( htr_docno = hd_docno ) ")
        _T("       LEFT JOIN hms_patient ")
        _T("              ON( hp_patientno = hd_patientno ) ")
        _T("       LEFT JOIN hms_bed ")
        _T("              ON( hb_docno = hd_docno and hb_deptid=htr_deptid ")
        _T("and hb_refidx=htr_idx ) ")
        _T("WHERE  htr_docno = %ld and htr_idx in(%s)  "),
        m_nDocNo, szRefIdxs);
    rs.ExecSQL(szSQL);

    if (rs.IsEOF())
    {
        AfxMessageBox(_T("No Data"));
        return;
    }
    if (!rs.IsEOF())
    {
        rptHeader->SetValue(_T("Department"), rs.GetValue(_T("fdeptid")));
        rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
        rptHeader->SetValue(_T("DocNo"), rs.GetValue(_T("fdocno")));
        rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
        rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("fname")));
        rptHeader->SetValue(_T("YearOfBirth"), rs.GetValue(_T("fyear")));
        rptHeader->SetValue(_T("Sex"), rs.GetValue(_T("fsex")));
        rptHeader->SetValue(_T("Room"), rs.GetValue(_T("buong")));
        rptHeader->SetValue(_T("Object"), rs.GetValue(_T("doituong")));
        rptHeader->SetValue(_T("Diagnostic"), rs.GetValue(_T("fDiagnostic")));
        rptHeader->SetValue(
            _T("NgayVao"),
            CDate::Convert(rs.GetValue(_T("ngayvaovien")), yyyymmdd, ddmmyyyy));
        rptHeader->SetValue(_T("Tiensudiung"), rs.GetValue(_T("tiensudiung")));
    }

    szIDXs.Format(L"%ld", nTreatIdx);


    if (!szIDXs.IsEmpty())
    {
        szWhere.Format(_T(" and hpo_treatidx in(%s) "), szIDXs);
        szWhere2.Format(_T(" and hp_receptidx in(%s) "), szIDXs);
        szSQL.Format(_T("SELECT hsie_diet, hsie_nurseassistance FROM ")
                     _T("hms_siexam WHERE hsie_docno=%ld and hsie_idx in(%s) "),
                     m_nDocNo, szIDXs);
        rs2.ExecSQL(szSQL);
        _fmsg(_T("%s"), szSQL);
        CString szNurseAssist;
        rs2.GetValue(_T("hsie_nurseassistance"), szNurseAssist);
        if (IsDigit(szNurseAssist))
        {
            szNurseAssist =
                pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
        }

        rpt.GetReportFooter()->SetValue(_T("chedoholy"), szNurseAssist);
        rpt.GetReportFooter()->SetValue(_T("chedoan"),
                                        rs2.GetValue(_T("hsie_diet")));
    }
    szSQLTDSD.Format(_T(" SELECT 1                    AS ptype,")
                     _T("   mp_name                   AS tenthuoc,")
                     _T("   case when use_qty>0 then use_qty else ")
                     _T("hpol_qtyorder end AS soluong,")
                     _T("   use_qty					 AS soluongcap,")
                     _T("   Get_uomname(mp_uom_id)    AS donvi,")
                     _T("   hpou_dousage              AS duongdung,")
                     _T("   Get_username(hsie_doctor) AS bschidinh,")
                     _T("   Get_username(hpo_doctor)  AS bschidinhthuoc,")
                     _T("   hpou_speed                AS tocdo,")
                     _T("   GET_USERNAME(hsie_nurse)  AS nurse,")
                     _T("   hsie_date,")
                     _T("   hpo_orderid AS idx,")
                     _T("   hpol_line   AS line,")
                     _T("   replace(hpou_time||':'||hpou_speed, ':', chr(10)) ")
                     _T("as thoi_gian_su_dung, ")
                     _T(" (select ss_desc FROM sys_sel where ")
                     _T("ss_id='thietlap_gio_dungthuoc' and ss_code=use_time) ")
                     _T("as thoi_gian_su_dung_2,")
                     _T("   time_start as tg_batdau,")
                     _T("   time_end as tg_ketthuc,")
                     _T(" mpi_lotno as solo")
                     _T(" FROM hms_ipharmaorderline")
                     _T(" LEFT JOIN hms_ipharmaorder")
                     _T(" ON(hpo_orderid = hpol_orderid")
                     _T(" AND hpo_docno  = hpol_docno)")
                     _T(" LEFT JOIN m_product")
                     _T(" ON( mp_product_id = hpol_product_id )")

                     _T(" LEFT JOIN m_product_item ")
                     _T(" ON (mp_product_id = mpi_product_id")
                     _T(" AND mpi_product_item_id = hpol_product_item_id)")

                     _T(" LEFT JOIN hms_ipharmaorder_usage")
                     _T(" ON( hpou_orderid    = hpol_orderid")
                     _T(" AND hpou_product_id = hpol_product_id AND ")
                     _T("hpou_dousage = hpol_dousage)")
                     _T(" LEFT JOIN HMS_IPHARMAORDER_DOSAGE")
                     _T(" ON (hpol_docno = docno")
                     _T(" and hpol_orderid = order_id")
                     _T(" and hpol_product_id = product_id)")
                     _T(" LEFT join hms_ipharma_dispenseln ln")
                     _T(" ON (hpol_docno = ln.docno")
                     _T(" and hpol_orderid = ln.order_id")
                     _T(" and hpol_orderlineid = ln.orderline_id")
                     _T(" and hpol_product_item_id = ln.product_itemid)")
                     _T(" LEFT JOIN hms_siexam")
                     _T(" ON (hsie_docno    = hpo_docno")
                     _T(" AND hsie_idx      = hpo_treatidx)")
                     _T(" WHERE hpo_docno   = %ld")
                     _T(" %s")
                     _T(" UNION ALL")
                     _T(" SELECT 2                     AS ptype,")
                     _T("   hp_drugname                AS tenthuoc,")
                     _T("   hp_quantity                AS soluong,")
                     _T("   hp_quantity                AS soluongcap,")
                     _T("   hp_unit                    AS donvi,")
                     _T("   hp_usage                   AS duongdung,")
                     _T("   Get_username(hp_createdby) AS bschidinh,")
                     _T("   Get_username(hp_createdby) AS bschidinhthuoc,")
                     _T("   hp_speed                   AS tocdo,")
                     _T("   CAST('' AS NVARCHAR2(1))   AS nurse,")
                     _T("   hsie_date,")
                     _T("   hp_idx AS idx,")
                     _T("   0,")
                     _T("   cast('' as nvarchar2(1)) as thoi_gian_su_dung, ")
                     _T("  CAST('' AS NVARCHAR2(1)) AS thoi_gian_su_dung2,")
                     _T("   CAST('' AS NVARCHAR2(1)) AS tg_batdau,")
                     _T("   CAST('' AS NVARCHAR2(1)) AS tg_ketthuc,")
                     _T(" CAST('' AS NVARCHAR2(1)) AS solo")
                     _T(" FROM hms_prescription")
                     _T(" LEFT JOIN hms_siexam")
                     _T(" ON (hsie_docno    = hp_docno")
                     _T(" AND hsie_idx      = hp_receptidx)")
                     _T(" WHERE hp_docno    = %ld")
                     _T(" %s")
                     _T(" ORDER BY hsie_date,")
                     _T("   ptype,")
                     _T("   idx,")
                     _T("   line"),
                     m_nDocNo, szWhere, m_nDocNo, szWhere2);
    //_msg(_T("%s"), szSQLTDSD);
    rsTDSD.ExecSQL(szSQLTDSD);

    int nCount = 0;
    int nTongKhoan = 0;
    int nTongCap = 0;
    while (!rsTDSD.IsEOF())
    {

        rsTDSD.GetValue(_T("hsie_date"), szNewDate);
        if (szNewDate != szOldDate && !szNewDate.IsEmpty())
        {
            szSQLMLDT.Format(_T(" select listagg(cast(hsie_drug_advice as ")
                             _T("varchar2(2000)), ',') ")
                             _T("			within group (order by hsie_idx) ")
                             _T("as hsie_drug_advice from hms_siexam ")
                             _T(" where hsie_docno = %ld and hsie_date = ")
                             _T("to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') ")
                             _T(" and hsie_type = 'DT'"),
                             m_nDocNo, szOldDate);
            rsMLDT.ExecSQL(szSQLMLDT);
            rsMLDT.GetValue(_T("hsie_drug_advice"), szDrugAdvice);
            if (!szDrugAdvice.IsEmpty())
            {
                rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
                tmpStr.Format(_T("Mệnh lệnh điều trị: %s"), szDrugAdvice);
                rptDetail->SetValue(_T("GroupName"), tmpStr);
            }

            rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
            rptDetail->SetValue(_T("GroupName"),
                                CDateTime::Convert(szNewDate, yyyymmdd | hhmmss,
                                                   ddmmyyyy | hhmmss));
            szOldDate = szNewDate;
            nIdx = 1;
        }

        rptDetail = rpt.AddDetail();

        szIDx.Format(_T("%d"), nIdx);
        rptDetail->SetValue(_T("x1"), szIDx);

        nCount = ToInt(rsTDSD.GetValue(_T("soluong")));
        nTongKhoan += nCount;
        nCount = ToInt(rsTDSD.GetValue(_T("soluongcap")));
        nTongCap += nCount;
        rptDetail->SetValue(_T("2"), rsTDSD.GetValue(_T("tenthuoc")));
        rptDetail->SetValue(_T("3"), rsTDSD.GetValue(_T("donvi")));
        rptDetail->SetValue(_T("4"), rsTDSD.GetValue(_T("soluong")));
        rptDetail->SetValue(_T("so_luong_cap"),
                            rsTDSD.GetValue(_T("soluongcap")));
        rptDetail->SetValue(_T("5"), rsTDSD.GetValue(_T("duongdung")));
        rptDetail->SetValue(_T("6"), rsTDSD.GetValue(_T("bschidinh")));
        rptDetail->SetValue(_T("7"), rsTDSD.GetValue(_T("tocdo")));
        rptDetail->SetValue(_T("tendd"), rsTDSD.GetValue(_T("nurse")));
        rptDetail->SetValue(_T("8"), rsTDSD.GetValue(_T("soluongcap")));
        rptDetail->SetValue(_T("thoi_gian"),
                            rsTDSD.GetValue(_T("thoi_gian_su_dung")));
        rptDetail->SetValue(_T("thoi_gian_su_dung_2"),
                            rsTDSD.GetValue(_T("thoi_gian_su_dung_2")));
        rptHeader->SetValue(_T("bschidinhthuoc"),
                            rsTDSD.GetValue(_T("bschidinhthuoc")));
        rptDetail->SetValue(_T("tg_batdau"), rsTDSD.GetValue(_T("tg_batdau")));
        rptDetail->SetValue(_T("tg_ketthuc"),
                            rsTDSD.GetValue(_T("tg_ketthuc")));
        rptDetail->SetValue(_T("solo"), rsTDSD.GetValue(_T("solo")));
        nIdx++;
        rsTDSD.MoveNext();
    }

    szSQLMLDT.Format(
        _T("select listagg(cast(hsie_drug_advice as varchar2(2000)), ',') ")
        _T("			within group (order by hsie_idx) as hsie_drug_advice ")
        _T("from hms_siexam ")
        _T("where hsie_docno = %ld and hsie_date = to_timestamp('%s', ")
        _T("'YYYY-MM-DD HH24:MI:SS') ")
        _T(" and hsie_type = 'DT'"),
        m_nDocNo, szOldDate);
    rsMLDT.ExecSQL(szSQLMLDT);
    rsMLDT.GetValue(_T("hsie_drug_advice"), szDrugAdvice);
    if (!szDrugAdvice.IsEmpty())
    {
        rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
        tmpStr.Format(_T("Mệnh lệnh điều trị: %s"), szDrugAdvice);
        rptDetail->SetValue(_T("GroupName"), tmpStr);
    }

    rptFooter = rpt.GetReportFooter();
    tmpStr = pMF->GetSysDateTime();
    szDateStr.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"), tmpStr.Mid(8, 2),
                     tmpStr.Mid(5, 2), tmpStr.Left(4));
    rptFooter->SetValue(_T("PrintDate"), szDateStr);
    rptFooter->SetValue(_T("tongkhoanthuoc"), nTongKhoan);
    rptFooter->SetValue(_T("tongkhoancap"), nTongCap);
    rpt.PrintPreview();
}



int CTMChoosePrintDateDlg::OnAddTMChoosePrintDateDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT) 
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CTMChoosePrintDateDlg::OnEditTMChoosePrintDateDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CTMChoosePrintDateDlg::OnDeleteTMChoosePrintDateDlg(){
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
 		OnCancelTMChoosePrintDateDlg();
 	}
	return 0;
}
int CTMChoosePrintDateDlg::OnSaveTMChoosePrintDateDlg(){
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
 		//OnTMChoosePrintDateDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CTMChoosePrintDateDlg::OnCancelTMChoosePrintDateDlg(){
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
int CTMChoosePrintDateDlg::OnTMChoosePrintDateDlgListLoadData(){
	return 0;
}
void CTMChoosePrintDateDlg::UpdatePrintCount()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szUpdate;
	CRecord rs(&pMF->m_db);
	int nIDx;

	for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
	{
		if (m_wndPrintDateList.GetCheck(i))
		{
			nIDx = ToInt(m_wndPrintDateList.GetItemText(i,0));
			szUpdate.Format(_T("UPDATE hms_siexam SET hsie_printcount = (select coalesce(max(hsie_printcount), 0)+1 ") \
				_T(" from hms_siexam where hsie_idx = %d and hsie_docno = %ld) WHERE hsie_idx = %d and hsie_docno = %ld"), nIDx, m_nDocNo, nIDx, m_nDocNo);
			pMF->ExecSQL(szUpdate);
		}
	}
}
void CTMChoosePrintDateDlg::OnAllDoctorSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnPrintDateListLoadData();
	UpdateData(FALSE);
}
int CTMChoosePrintDateDlg::OnPrintDateListCheckAll()
{
	for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
	{
		m_wndPrintDateList.SetCheck(i, TRUE);
	}

	return 0;
}
int CTMChoosePrintDateDlg::OnPrintDateListUnCheckAll()
{
	for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
	{
		m_wndPrintDateList.SetCheck(i, FALSE);
	}

	return 0;
}
