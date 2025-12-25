#include "stdafx.h"
#include "EMChooseCareDateDlg.h"
#include "HMSMainFrame.h"

static long _OnPrintDateListLoadDataFnc(CWnd *pWnd){
	return ((CEMChooseCareDateDlg*)pWnd)->OnPrintDateListLoadData();
} 
static void _OnPrintDateListDblClickFnc(CWnd *pWnd){
	((CEMChooseCareDateDlg*)pWnd)->OnPrintDateListDblClick();
} 
static void _OnPrintDateListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CEMChooseCareDateDlg*)pWnd)->OnPrintDateListSelectChange(nOldItem, nNewItem);
} 
static int _OnPrintDateListDeleteItemFnc(CWnd *pWnd){
	 return ((CEMChooseCareDateDlg*)pWnd)->OnPrintDateListDeleteItem();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CEMChooseCareDateDlg *pVw = (CEMChooseCareDateDlg *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnAllDoctorSelectFnc(CWnd *pWnd){
	((CEMChooseCareDateDlg*)pWnd)->OnAllDoctorSelect();
}
static int _OnPrintDateListCheckAllFnc(CWnd *pWnd){
	return ((CEMChooseCareDateDlg*)pWnd)->OnPrintDateListCheckAll();
}
static int _OnPrintDateListUnCheckAllFnc(CWnd *pWnd){
	return ((CEMChooseCareDateDlg*)pWnd)->OnPrintDateListUnCheckAll();
}
static int _OnAddTMChooseCareDateDlgFnc(CWnd *pWnd){
	 return ((CEMChooseCareDateDlg*)pWnd)->OnAddTMChooseCareDateDlg();
} 
static int _OnEditTMChooseCareDateDlgFnc(CWnd *pWnd){
	 return ((CEMChooseCareDateDlg*)pWnd)->OnEditTMChooseCareDateDlg();
} 
static int _OnDeleteTMChooseCareDateDlgFnc(CWnd *pWnd){
	 return ((CEMChooseCareDateDlg*)pWnd)->OnDeleteTMChooseCareDateDlg();
} 
static int _OnSaveTMChooseCareDateDlgFnc(CWnd *pWnd){
	 return ((CEMChooseCareDateDlg*)pWnd)->OnSaveTMChooseCareDateDlg();
} 
static int _OnCancelTMChooseCareDateDlgFnc(CWnd *pWnd){
	 return ((CEMChooseCareDateDlg*)pWnd)->OnCancelTMChooseCareDateDlg();
} 
CEMChooseCareDateDlg::CEMChooseCareDateDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CEMChooseCareDateDlg::~CEMChooseCareDateDlg(){
}
void CEMChooseCareDateDlg::OnCreateComponents(){
	m_wndChoosePrintDate.Create(this, _T("Chọn phiếu in"), 5, 4, 505, 259);
	m_wndPrintDateList.Create(this,10, 29, 500, 254); 
	m_wndPrint.Create(this, _T("Print"), 420, 265, 500, 290);
	m_wndAllDoctor.Create(this, _T("Tất cả bác sĩ"), 10, 265, 150, 290);
}
void CEMChooseCareDateDlg::OnInitializeComponents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndPrintDateList.SetCheckBox(true);
	
	m_wndPrintDateList.InsertColumn(0, _T("IDX"), CFMT_TEXT, 80);
	m_wndPrintDateList.InsertColumn(1, _T("Date"), CFMT_TEXT | CFMT_CENTER, 130);
	m_wndPrintDateList.InsertColumn(2, _T("Doctor"), CFMT_TEXT, 180);
	m_wndPrintDateList.InsertColumn(3, _T("S\x1ED1 l\x1EA7n in"), CFMT_TEXT | CFMT_CENTER, 80);
	m_wndPrintDateList.InsertColumn(4, _T(""), CFMT_TEXT, 0); //refidx

}
void CEMChooseCareDateDlg::OnSetWindowEvents(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	m_wndPrintDateList.SetEvent(WE_SELCHANGE, _OnPrintDateListSelectChangeFnc);
	m_wndPrintDateList.SetEvent(WE_LOADDATA, _OnPrintDateListLoadDataFnc);
	m_wndPrintDateList.SetEvent(WE_DBLCLICK, _OnPrintDateListDblClickFnc);
	m_wndPrintDateList.AddEvent(1, _T("Check All"), _OnPrintDateListCheckAllFnc);
	m_wndPrintDateList.AddEvent(2, _T("UnCheck All"), _OnPrintDateListUnCheckAllFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_bAllDoctor = FALSE;

	CString szSQL;
	szSQL.Format(_T("SELECT hci_date FROM HMS_CAREINFO WHERE hci_docno=%ld and hci_idx=%ld"), m_nDocNo, m_nRefIdx);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hci_date"), m_szDate);

	OnPrintDateListLoadData();
	m_wndPrintDateList.SetCheck(0, true);
	m_wndAllDoctor.SetEvent(WE_CLICK, _OnAllDoctorSelectFnc);
	UpdateData(FALSE);

}
void CEMChooseCareDateDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndAllDoctor.GetDlgCtrlID(), m_bAllDoctor);

}
void CEMChooseCareDateDlg::GetDataToScreen(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CEMChooseCareDateDlg::GetScreenToData(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();

}
void CEMChooseCareDateDlg::SetDefaultValues(){


}
int CEMChooseCareDateDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
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
void CEMChooseCareDateDlg::OnPrintDateListDblClick(){
	int curSel = m_wndPrintDateList.GetCurSel();
	if(m_wndPrintDateList.GetCheck(curSel))
	{
		m_wndPrintDateList.SetCheck(curSel, false);
	}else
		m_wndPrintDateList.SetCheck(curSel, true);
} 
void CEMChooseCareDateDlg::OnPrintDateListSelectChange(int nOldItem, int nNewItem){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	
} 
int CEMChooseCareDateDlg::OnPrintDateListDeleteItem(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CEMChooseCareDateDlg::OnPrintDateListLoadData()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	m_wndPrintDateList.BeginLoad(); 
	int nCount = 0;

	if(!m_bAllDoctor)
		szWhere.Format(_T("AND HCI_nurse = '%s'"), pMF->GetCurrentUser());

	szSQL.Format(_T("SELECT hci_refidx, HCI_idx,HCI_date,GET_USERNAME(HCI_nurse) as nursename,GET_USERNAME(HCI_doctor) as doctorname, HCI_printcount ") \
		_T(" FROM HMS_CAREINFO WHERE HCI_DOCNO = %ld AND HCI_date >= TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS')  %s") \
		_T(" AND HCI_type = 'CS' ORDER BY HCI_date, hci_idx "), m_nDocNo, m_szDate.Left(19), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPrintDateList.AddItems(
			rs.GetValue(_T("HCI_idx")),
			CDateTime::Convert(rs.GetValue(_T("HCI_date")), yyyymmdd|hhmm, ddmmyyyy|hhmm),
			rs.GetValue(_T("doctorname")),
			rs.GetValue(_T("HCI_printcount")),
			rs.GetValue(_T("hci_refidx")),
			NULL);
		rs.MoveNext();
	}
	m_wndPrintDateList.EndLoad(); 
	OnPrintDateListCheckAll();
	return nCount;
}
void CEMChooseCareDateDlg::OnPrintSelect()
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CRecord rs1(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL;
	CString szInit,szNewLine, szOldLine, szNewLine2, szOldLine2, szNewDate, szOldDate;
	CString szSQL, tmpStr, szWhere, szIdx, szDate, szSQL2, szPharma, szIDXs, szNurse, szNurseAssist, szDiet, szDietAssist;
	int nIdx = 1;
	
	if(!rpt.Init(_T("Reports\\HMS\\EM_PHIEUCHAMSOC.RPT")))
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
	rptHeader->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));

	/*szSQL.Format(_T(" SELECT hd_docno AS fdocno,") \
		_T("   htr_recordno AS frecord,") \
		_T("   trim(hp_surname") \
		_T("   || ' '") \
		_T("   || hp_midname") \
		_T("   || ' '") \
		_T("   || hp_firstname)                                    AS fname,") \
		_T("   sys_sel_getname('sys_sex', hp_sex)                  AS fsex,") \
		_T("   extract(year from hp_birthdate) AS fage,") \
		_T("   hms_getaddress(hp_provid, hp_distid,hp_villid)      AS faddress,") \
		_T("   htr_deptid                                          AS fdeptid,") \
		_T("   htr_maindisease                                     AS fDiagnostic,") \
		_T("   to_char(htr_admitdate, 'HH24:MI DD/MM/YYYY') AS ngayvao,	") \
		_T("   hms_getroomname(htr_deptid,hb_roomid) as room, hbl_name ") \
		_T(" FROM hms_treatment_record") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(htr_docno = hd_docno) ") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(hp_patientno = hd_patientno)") \
		_T(" LEFT JOIN hms_bed ON (hb_docno = hd_docno AND hb_patientno = hd_patientno AND hb_refidx = htr_idx) ") \
		_T(" LEFT JOIN hms_bedlist ON (hbl_deptid = hb_deptid AND hbl_roomid = hb_roomid AND hbl_id = hb_bedid) ") \
		_T(" WHERE htr_docno    = %ld and htr_idx in(%s) "), m_nDocNo, szRefIdxs);*/

	szSQL.Format(_T(" SELECT ") \
	_T("   hp_patientno AS patientno,") \
	_T("   hd_docno AS docno,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                                       AS pname,") \
	_T("   CAST(TO_CHAR(hp_birthdate, 'YYYY') AS INTEGER)                        AS birthyear,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate)                    AS age,  ") \
	_T("   GET_SYSSEL_DESC('sys_sex', hp_sex)                                    AS sex,") \
	_T("   hrl_name                                                              AS roomname,") \
	_T("   hd_admitdate                                                          AS admitdate,  ") \
	_T("   hd_conclusion                                                         AS conclusion,") \
	_T("   HD_DIAGNOSTIC                                                         AS diagnostic  ") \
	_T(" FROM hms_patient") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_patientno=hp_patientno)") \
	_T(" LEFT JOIN hms_exam ON (hd_docno=he_docno)") \
	_T(" LEFT JOIN hms_roomlist ON(hrl_deptid =he_deptid AND hrl_id    =he_roomid)") \
	_T(" WHERE hd_docno =%ld AND rownum=1"),m_nDocNo);

	rs.ExecSQL(szSQL);
	//thong tin benh nhan
	if (!rs.IsEOF())
	{
		rptHeader->SetValue(_T("RecordNo"), rs.GetValue(_T("frecord")));
		rptHeader->SetValue(_T("DocNo"), rs.GetValue(_T("docno")));
		rptHeader->SetValue(_T("PatientName"), rs.GetValue(_T("pname")));
		rptHeader->SetValue(_T("YearOfBirth"), rs.GetValue(_T("birthyear")));
		rptHeader->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
		rptHeader->SetValue(_T("roomname"), rs.GetValue(_T("room")));
		rptHeader->SetValue(_T("admitdate"), rs.GetValue(_T("admitdate")));		
		rptHeader->SetValue(_T("diagnostic"), rs.GetValue(_T("diagnostic")));
		rptHeader->SetValue(_T("conclusion"), rs.GetValue(_T("conclusion")));
	}

	
	if (szIDXs.IsEmpty())
		return;
	if (!szIDXs.IsEmpty())
	{
		szWhere.AppendFormat(_T(" and hci_idx in(%s) "), szIDXs);
	}

	//thong tin dieu tri
	szSQL.Format(_T(" SELECT HCI_idx AS treat_uid, HCI_deptid, ") \
		_T("   TO_CHAR(HCI_date, 'DD/MM/YYYY HH24:MI') AS treat_date,") \
		_T("   HCI_pulse                               AS pulse,") \
		_T("   HCI_temperature                         AS temperature,") \
		_T("   HCI_bloodpressure AS bp, ") \
		_T("   HCI_bloodpressurex AS bpx, ") \
		_T("   TRIM(HCI_bloodpressure||'/'||HCI_bloodpressurex) AS huyetap, ") \
		_T("   HCI_breathinterval AS breath, ") \
		_T("   HCI_weight AS weight, ") \
		_T("   HCI_height AS height, ") \
		_T("   TRIM(HCI_temperature || '/' || HCI_pulse) AS pulse_temperature, ") \
		_T("   HCI_DISEASE AS disease_tracking,  HCI_CARE AS chamsoc,") \
		_T("   GET_USERNAME(HCI_nurse) as nursename, GET_USERNAME(HCI_doctor) as doctor,") \
		_T("   hci_sp02 AS sp02, ") \
		_T("   trunc_date(hci_date) AS hci_date, hsie_diet, HSIE_NURSEASSISTANCE, NVL(hci_treatidx, 0) as treat_idx ") \
		_T(" FROM HMS_CAREINFO") \
		_T(" LEFT JOIN HMS_SIEXAM ON (hsie_idx = hci_treatidx and hsie_docno = hci_docno)") \
		_T(" WHERE HCI_docno = %d %s AND HCI_type = 'CS'") \
		_T(" ORDER BY HCI_date,") \
		_T("   HCI_idx"), m_nDocNo, szWhere);
	rs.ExecSQL(szSQL);
	
	CString szStt, szTemp, szDisease, szLoiDan, szChamSoc, szNurseEX, szdoctor;
	int nPulse;
	double nTemperature;
	int nBloodPreL;
	int nBloodPreH;
	int nBreathInterval;
	int nSP02;
	CReportItem* obj;
	long nTreatIdx = 0;
	while (!rs.IsEOF())
	{
		rs.GetValue(_T("treat_date"), szOldLine2);
		rs.GetValue(_T("disease_tracking"), szDisease);
		rs.GetValue(_T("treat_date"), szDate);

		rs.GetValue(_T("pulse"), nPulse);
		rs.GetValue(_T("temperature"), nTemperature);
		rs.GetValue(_T("bp"), nBloodPreL);
		rs.GetValue(_T("bpx"), nBloodPreH);
		rs.GetValue(_T("breath"), nBreathInterval);
		rs.GetValue(_T("sp02"), nSP02);

		CString szFuncs;
		szFuncs.Empty();
		if(nPulse > 0)
		{
			szFuncs.AppendFormat(_T(" M: %d; \r\n"), nPulse);
		}
		if(nTemperature > 0)
		{
			szFuncs.AppendFormat(_T(" T: %.1f; \r\n"), nTemperature);
		}

		if(nBloodPreL+nBloodPreH > 0)
		{

			szFuncs.AppendFormat(_T(" HA: %d/%d; \r\n"), nBloodPreL, nBloodPreH);
		}
		if(nBreathInterval > 0)
		{
			szFuncs.AppendFormat(_T(" NT: %d; \r\n"), nBreathInterval);
		}
		if(nSP02 > 0)
		{
			szFuncs.AppendFormat(_T(" SP02: %d; \r\n"), nSP02);
		}

		if(!szFuncs.IsEmpty())
		{
			tmpStr.Format(_T("%s \r\n\r\n%s"), szDate, szFuncs);
		}
		else tmpStr.Format(_T("%s \r\n\r\n"), szDate);

		rptDetail = rpt.AddDetail();
		rptDetail->SetValue(_T("1"), tmpStr);
		szTemp.Empty();
		
		if(!szDisease.IsEmpty())
		{
			szDisease.Replace(_T("\r\n"), _T("<br>"));
			szTemp.AppendFormat(_T("%s<br/>"), szDisease);
		}

		obj = rptDetail->GetItem(_T("3"));
		if(obj) obj->SetType(REPORT_HTML);
		rptDetail->SetValue(_T("3"), szTemp);
		
		rs.GetValue(_T("chamsoc"), szChamSoc);
		szChamSoc.Replace(_T("\r\n"), _T("<br>"));
		obj = rptDetail->GetItem(_T("4"));
		if(obj) obj->SetType(REPORT_HTML);
		rptDetail->SetValue(_T("4"), szChamSoc);

		rs.GetValue(_T("hci_date"), szNewDate);

	//if(szNewDate != szOldDate)
		rs.GetValue(_T("hsie_nurseassistance"),szNurseAssist);
		rs.GetValue(_T("hsie_diet"), szDiet);
		rs.GetValue(_T("treat_idx"), nTreatIdx);
		//if (szNurseAssist.IsEmpty() || szDiet.IsEmpty())
		if (nTreatIdx ==0)
		{
			szSQL.Format(_T("SELECT hsie_diet, hsie_nurseassistance ") \
				_T(" FROM hms_siexam WHERE hsie_docno=%ld ") \
				_T(" and trunc_date(hsie_date) = TO_DATE('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" order by hsie_date desc"), m_nDocNo, szNewDate);
			rs2.ExecSQL(szSQL);
			rs2.GetValue(_T("hsie_nurseassistance"),szNurseAssist);
			rs2.GetValue(_T("hsie_diet"), szDiet);
		}
		tmpStr = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
		if(!tmpStr.IsEmpty())
		{
			szDiet = tmpStr;
		}
		tmpStr = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
		if (!tmpStr.IsEmpty())
		{
			szNurseAssist = tmpStr;
		}
		szDietAssist.Format(_T("<br/><br/><br/> %s<br/> %s "), szDiet, szNurseAssist);
		szOldDate = szNewDate;

		szNurse.Format(_T("<br/><br/>"));
		szNurse.AppendFormat(_T("%s <br/>"), szDietAssist);
		szDietAssist = _T("");
		szNurse += rs.GetValue(_T("nursename"));
		obj = rptDetail->GetItem(_T("5")); 
		if(obj) obj->SetType(REPORT_HTML);
		rptDetail->SetValue(_T("5"), szNurse);
		rs.GetValue(_T("nursename"), szNurseEX);
		rs.GetValue(_T("doctor"), szdoctor);

		rs.MoveNext();
		
	}
	
	rptFooter = rpt.GetReportFooter();
	tmpStr = pMF->GetSysDateTime();
	szDate.Format(_T("Ng\xE0y %s th\xE1ng %s n\x103m %s"),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptFooter->SetValue(_T("PrintDate"), szDate);
	
	//_msg(_T("%s"), szNurseEX);
	rptFooter->SetValue(_T("nursename"), szNurseEX);
	rptFooter->SetValue(_T("doctor"), szdoctor);
	rpt.PrintPreview();
	
} 
int CEMChooseCareDateDlg::OnAddTMChooseCareDateDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CEMChooseCareDateDlg::OnEditTMChooseCareDateDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CEMChooseCareDateDlg::OnDeleteTMChooseCareDateDlg(){
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
 		OnCancelTMChooseCareDateDlg();
 	}
	return 0;
}
int CEMChooseCareDateDlg::OnSaveTMChooseCareDateDlg(){
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
 		//OnTMChooseCareDateDlgListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CEMChooseCareDateDlg::OnCancelTMChooseCareDateDlg(){
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
int CEMChooseCareDateDlg::OnTMChooseCareDateDlgListLoadData(){
	return 0;
}
void CEMChooseCareDateDlg::OnAllDoctorSelect(){
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	OnPrintDateListLoadData();
}
int CEMChooseCareDateDlg::OnPrintDateListCheckAll()
{
	for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
	{
		m_wndPrintDateList.SetCheck(i, TRUE);
	}

	return 0;
}
int CEMChooseCareDateDlg::OnPrintDateListUnCheckAll()
{
	for (int i = 0; i < m_wndPrintDateList.GetItemCount(); i++)
	{
		m_wndPrintDateList.SetCheck(i, FALSE);
	}

	return 0;
}