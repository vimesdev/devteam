#include "HMSBenhAnView.h"
#include "MainFrm.h"
 
CHMSBenhAnView::CHMSBenhAnView(){

	m_szRecordType = _T("BANGT");
	m_szRecordGroup.Empty();
	m_nRecordIdx = 0;
}
CHMSBenhAnView::~CHMSBenhAnView(){
}
void CHMSBenhAnView::OnCreateComponents(){

}
void CHMSBenhAnView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBenhAnView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSBenhAnView::OnDoDataExchange(CDataExchange* pDX){

}


void CHMSBenhAnView::GetData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, tmpStr, szData;
	int n = 0;

	SetDefaultValues();

	szSQL.Format(_T("SELECT hd_recordno FROM hms_doc WHERE hd_docno = %ld"), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_recordno"), m_szRecordNo);

	szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr ") \
		_T(" WHERE hde_patientno=%ld and hde_type='%s' and hde_name='%s' ") \
		_T(" ORDER BY hde_refidx "), pMF->m_nPatientNo, m_szRecordType, m_szRecordNo);
	rs.ExecSQL(szSQL);
	szData.Empty();
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_value"), tmpStr);
		szData.AppendFormat(_T("%s"), tmpStr);
		rs.MoveNext();
	}
	
	
	m_jData.Parse(szData);
	UpdateJson(FALSE);
	SetMode(VM_VIEW);
	
}


bool CHMSBenhAnView::PostData()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);

	CString szData;
	int ret = 0;
	m_jData.ToString(szData);
	int n =0;
	CString tmpStr, szType;
	tmpStr = szData;

	szSQL.Format(_T("SELECT hop_record_type FROM hms_outpatient WHERE hop_docno=%ld"), pMF->m_nDocNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		CString szRecordType;
		rs.GetValue(_T("hop_record_type"), szRecordType);
		if(szRecordType != m_szRecordType)
		{
			tmpStr.Format(_T("\x110\x61ng t\x1ED3n t\x1EA1i \x62\x1EC7nh \xE1n ngo\x1EA1i tr\xFA [%s]. Kh\xF4ng \x63ho ph\xE9p t\x1EA1o \x62\x1EC7nh \xE1n kh\xE1\x63"), szRecordType);

			ShowMessageBox(tmpStr);
			return false;
		}

	}

	if(!pMF->m_szRecordNo.IsEmpty())
	{
		szSQL.Format(_T("SELECT hop_status FROM hms_outpatient WHERE hop_patientno = %ld and hop_recordno='%s' "), pMF->m_nPatientNo, pMF->m_szRecordNo);
		rs.ExecSQL(szSQL);
		CString szStatus;
		szStatus.Empty();
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hop_status"), szStatus);
		}
		if(!szStatus.IsEmpty() && szStatus != _T("O"))
		{
			ShowMessageBox(_T("Bệnh án đã kết thúc. Không cho phép cập nhật thông tin"));
			return false;
		}
		
	}

	szSQL.Format(_T("HMS_OUTPATIENT_CREATE(%ld, %ld, '%s', 0, '%s', '%s', 0, %d) "), 
		pMF->m_nPatientNo, pMF->m_nDocumentNo, pMF->GetCurrentDepartmentID(), pMF->GetSysDate(), m_szRecordType, m_nRecordIdx);
	ret = str2int(pMF->ExecDML(szSQL));
	if(ret < 0)
	{
		ShowMessageBox(_T("Kh\xF4ng th\x1EC3 t\x1EA1o \x111\x1B0\x1EE3\x63 \x62\x1EC7nh \xE1n \x111i\x1EC1u tr\x1ECB ngo\x1EA1i tr\xFA"));
		return false;
	}

	szSQL.Format(_T("SELECT hop_recordno FROM hms_outpatient WHERE hop_patientno = %ld and hop_status='O' "), pMF->m_nPatientNo);
	rs.ExecSQL(szSQL);
	ret = 0;
	CString szRecordNo;
	m_szRecordNo = pMF->m_szRecordNo;
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hop_recordno"), szRecordNo);
		pMF->m_szRecordNo = szRecordNo;
		m_szRecordNo = szRecordNo;
	}
	else
	{
		ShowMessageBox(_T("Không cập nhật được thông tin bệnh án"));
		return false;
	}
	
	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	pMF->BeginTransaction();
	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_patientno=%ld and hde_type='%s' and hde_name='%s' "), pMF->m_nPatientNo, m_szRecordType, m_szRecordNo);
	pMF->ExecSQL(szSQL);

	n = 0;
	for (int i =0; i < strList.GetCount();i++)
	{
			tmpStr = strList[i];
			if(m_szRecordType == _T("OBA_RFA"))
				{
					szSQL.Format(_T("HMS_DOC_EMR_CREATE_NGOAITRU('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
						m_szRecordType, pMF->m_nPatientNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), m_szRecordNo, pMF->EscapeQuote(tmpStr));
				}
			else
				{
					szSQL.Format(_T("HMS_DOC_EMR_CREATE('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
						m_szRecordType, pMF->m_nDocumentNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), m_szRecordNo, pMF->EscapeQuote(tmpStr));
				}
			ret = str2int(pMF->ExecDML(szSQL));
			if (ret < 0)
			{
				pMF->Rollback();
				return false;
			}
		}
	pMF->Commit();
	if(n > 0)
	{
		SetMode(VM_VIEW);
		return true;
		
	}
	return false;
}


bool CHMSBenhAnView::IsAllowUpdate()
{
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("HMS_OUTPATIENT_ALLOWUPDATE(%ld, %ld, '%s')"), 
		pMF->m_nPatientNo, pMF->m_nDocumentNo, m_szRecordType);

	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret > 0)
		return true;
	if(ret  == -1)
	{
			ShowMessageBox(_T("Bệnh án đã được kết thúc. Không cho phép cấp nhật lại"));
	}
	else
		ShowMessageBox(_T("Không cho phép thực hiện với trạng thái hiện thời"));
	return false;
}

void CHMSBenhAnView::PrintRecord(CString szReportName)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(szReportName))
		return;
	
	GetData();
	
	szSQL.Format(_T("select hop_fromdate, hop_todate, hop_recordno from hms_outpatient ") \
		_T(" where hop_patientno = %ld and hop_recordno = '%s'"), pMF->m_nPatientNo, m_szRecordNo);
	rs.ExecSQL(szSQL);

	rptHeader = rpt.GetReportHeader();

	rs.GetValue(_T("hop_fromdate"), tmpStr);
	rptHeader->SetValue(_T("CreatedDate"),   CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("hop_todate"), tmpStr);
	rptHeader->SetValue(_T("EndDate"),   CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("hop_recordno"), tmpStr);
	rptHeader->SetValue(_T("RecordNo"), tmpStr);
	
	for (size_t i = 0; i < m_jData.Size();i++)
	{

		std::wstring name;
		name = m_jData.order[i];
		tmpStr.Empty();
		JSONVALUE jv = m_jData[name.c_str()];
		CReportItem *obj = rptHeader->GetItem(name.c_str());
		//break ???
		/*if(obj->GetType() == REPORT_LABEL)
			continue;*/

		if(jv.jt == JT_STRING)
		{
			jv.GetValue(tmpStr);
			rptHeader->SetValue(name.c_str(), tmpStr);
		}
		if(jv.jt == JT_NUMBER)
		{
			long d;
			jv.GetValue(d);
			tmpStr.Format(_T("%d"), d);
			

			if(obj->GetType() == REPORT_CHECKBOX)
			{
				rptHeader->SetCheck(name.c_str(), d>0?true:false);
			}
			else
				rptHeader->SetValue(name.c_str(), tmpStr);
		}
		if(jv.jt == JT_BOOL)
		{
			bool b;
			jv.GetValue(b);
			rptHeader->SetCheck(name.c_str(), b);
		}
		
	}

	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();


}
void CHMSBenhAnView::OnPrintSelect()
{
}
#include "GuiMainFrame.h"
void CHMSBenhAnView::PrintRFA(long m_nPatientNo, long m_nDocumentNo)
{
	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CReport rpt;

	CString szSQL, tmpStr, szReportName, szTemp, szNumber, szFoodMode, szDate, szPTTYCDept;

	szSQL.Format(_T(" SELECT hp_patientno as patientno, trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, ") \
		_T("        extract(year from hp_birthdate) as yob, ") \
		_T("        (select ss_desc from sys_sel where ss_id= 'sys_sex' and ss_code =  hp_sex) as sex, ") \
		_T("        (select ss_desc from sys_sel where ss_id ='hms_rank' and cast(ss_code as integer)=hp_rank) as rank, ") \
		_T("        (select ss_desc from sys_sel where ss_id ='hms_position' and cast(ss_code as integer)=hp_position) as position, ") \
		_T("        hp_workplace as unit, ") \
		_T("        hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as address, ") \
		_T("        nvl(hd_dtladdr, hp_dtladdr) as dtladdress, ") \
		_T("        hd_relative as relative, ") \
		_T("        (select ss_desc from sys_sel where ss_id = 'hrm_relation' and ss_code = hd_relation) as relation, ") \
		_T("        hd_contactaddr as reladdress, ") \
		_T("        hd_contacttel as relphone, ") \
		_T("        hd_transdiagn as trdisease, ") \
		_T("        (select hi_name from hms_icd where hi_icd=hd_transicd) as icd10, ") \
		_T("        hd_conclusion as disease, ") \
		_T("        hd_suggestion as suggestion, ") \
		_T("        hd_admitdate as examdte, ") \
		_T("        (select ho_desc from hms_object where ho_id=hd_object) as policydesc, ") \
		_T("        (select hc_cardno from hms_card where hc_patientno=hd_patientno and hc_idx=hd_cardidx) as cardno, ") \
		_T("        (SELECT ss_desc FROM sys_sel WHERE ss_id = 'sys_ethnic' AND ss_code = hp_ethnic) AS ethnic ") \
		_T(" FROM hms_patient ") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno) ") \
		_T(" WHERE hd_docno = %ld"), m_nDocumentNo);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("Patient not found"));
		return;

	}

	szReportName.Format(_T("Reports\\HMS\\HMS_OBARFA.RPT"));

	if(!rpt.Init(szReportName))
	{
		return;
	}


	rpt.GetReportHeader()->SetValue(_T("_health_service"), pMF->m_szHealthService);
	rpt.GetReportHeader()->SetValue(_T("_HOSPITAL_NAME"), pMF->m_szHospitalName);
	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_name"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_y_of_birth"), rs.GetValue(_T("yob")));
	rpt.GetReportHeader()->SetValue(_T("_sex"), rs.GetValue(_T("sex")));

	tmpStr.Format(_T("%s"), rs.GetValue(_T("dtladdress")));
	if(!tmpStr.IsEmpty())
		tmpStr.AppendFormat(_T(" - "));
	tmpStr.AppendFormat(_T("%s"), rs.GetValue(_T("address")));
	rpt.GetReportHeader()->SetValue(_T("_native_vill"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_unit"), rs.GetValue(_T("unit")));
	rpt.GetReportHeader()->SetValue(_T("_rank"), rs.GetValue(_T("rank")));
	rpt.GetReportHeader()->SetValue(_T("_position"), rs.GetValue(_T("position")));
	rs.GetValue(_T("examdte"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_infect_date"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	long nPatientNo;
	rs.GetValue(_T("patientno"), nPatientNo);
	tmpStr.Format(_T("%d"), nPatientNo);
	rpt.GetReportHeader()->SetValue(_T("_patientno"), tmpStr);

	tmpStr.Format(_T("%d"), m_nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("_docno"), tmpStr);
	tmpStr.Format(_T("%s"), rs.GetValue(_T("policydesc")));
	rpt.GetReportHeader()->SetValue(_T("_policydesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("_relatives"), rs.GetValue(_T("relative")));
	rpt.GetReportHeader()->SetValue(_T("_relation"), rs.GetValue(_T("relation")));

	rpt.GetReportHeader()->SetValue(_T("_phone"), rs.GetValue(_T("relphone")));
	rpt.GetReportHeader()->SetValue(_T("_address"), rs.GetValue(_T("reladdress")));
	rpt.GetReportHeader()->SetValue(_T("_unit_diag.1"), rs.GetValue(_T("trdisease")));

	tmpStr.Format(_T("%s\r\n%s"), rs.GetValue(_T("icd10")), rs.GetValue(_T("disease")));
	rpt.GetReportHeader()->SetValue(_T("_exam_diag.1"), tmpStr);

	rs.GetValue(_T("hcr_dischargedate"), tmpStr);
	if(!tmpStr.IsEmpty())
		rpt.GetReportHeader()->SetValue(_T("ngayravien"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("songaydt"), rs.GetValue(_T("hcr_sumtreat")));
	rpt.GetReportHeader()->SetValue(_T("_ethnic"), rs.GetValue(_T("ethnic")));

	tmpStr.Empty();
	rs.GetValue(_T("cardno"), tmpStr);
	if(!tmpStr.IsEmpty())
	{
		CString szCardDesc;

		szCardDesc.Format(_T("S\x1ED1 th\x1EBB: %s"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("_cardno"), szCardDesc);
	}

	tmpStr = pMF->GetSysTime();
	rpt.GetReportFooter()->Format(_T("PrintDate"), _T(""), _T("...."), _T("...."), _T("...."));


	CRecord rsl(&pMF->m_db);
	CString szExamInfo;
	CReportSection *rptDetail;
	JSONVALUE jData;
	bool m_bTrue;

	szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_patientno=%ld and hde_type='%s' and hde_name='%s' ORDER BY hde_refidx "), m_nPatientNo, m_szRecordType, m_szRecordNo);
	_fmsg(_T("%s"), szSQL);
	szExamInfo.Empty();
	rsl.ExecSQL(szSQL);
	while(!rsl.IsEOF())
	{
		rsl.GetValue(_T("hde_value"), tmpStr);
		szExamInfo.AppendFormat(_T("%s"), tmpStr);
		rsl.MoveNext();
	}

	if(!szExamInfo.IsEmpty())
	{
		jData.Clear();
		jData.Parse(szExamInfo);
		tmpStr.Empty();

		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));

		m_jData[_T("Lan1")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Lan1"), _T("X"));

		m_jData[_T("Lan2")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Lan2"), _T("X"));

		m_jData[_T("Lan3")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Lan3"), _T("X"));

		m_jData[_T("Lan4")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Lan4"), _T("X"));

		m_jData[_T("Lan5")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Lan5"), _T("X"));


		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(2));

		m_jData[_T("BiUngBuou")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("BiUngBuou"), _T("X"));

		m_jData[_T("BiUngThuTuyenGiap")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("BiUngThuTuyenGiap"), _T("X"));

		m_jData[_T("BenhLyTuyenGiapKhac")].GetValue(tmpStr);
		rptDetail->SetValue(_T("BenhLyTuyenGiapKhac"), tmpStr);

		m_jData[_T("BenhLyDacBietKhac")].GetValue(tmpStr);
		rptDetail->SetValue(_T("BenhLyDacBietKhac"), tmpStr);


		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(3));

		m_jData[_T("ThoiGianPhatHien")].GetValue(tmpStr);
		rptDetail->SetValue(_T("ThoiGianPhatHien"), tmpStr);

		m_jData[_T("BieuHienLamSang")].GetValue(tmpStr);
		rptDetail->SetValue(_T("BieuHienLamSang"), tmpStr);

		m_jData[_T("KhamVaDieuTriTai")].GetValue(tmpStr);
		rptDetail->SetValue(_T("KhamVaDieuTriTai"), tmpStr);

		m_jData[_T("ChanDoanTuyenGiap")].GetValue(tmpStr);
		rptDetail->SetValue(_T("ChanDoanTuyenGiap"), tmpStr);

		m_jData[_T("PhuongPhapThoiGian")].GetValue(tmpStr);
		rptDetail->SetValue(_T("PhuongPhapThoiGian"), tmpStr);

		m_jData[_T("LamSangHienTai")].GetValue(tmpStr);
		rptDetail->SetValue(_T("LamSangHienTai"), tmpStr);

		m_jData[_T("BenhLyDacBietKhac2")].GetValue(tmpStr);
		rptDetail->SetValue(_T("BenhLyDacBietKhac2"), tmpStr);


		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));

		m_jData[_T("TienSuChieuXa")].GetValue(tmpStr);
		rptDetail->SetValue(_T("TienSuChieuXa"), tmpStr);

		m_jData[_T("AnThieuIod")].GetValue(tmpStr);
		rptDetail->SetValue(_T("AnThieuIod"), tmpStr);

		m_jData[_T("AnBapCai")].GetValue(tmpStr);
		rptDetail->SetValue(_T("AnBapCai"), tmpStr);

		m_jData[_T("ThuocKhangGiap")].GetValue(tmpStr);
		rptDetail->SetValue(_T("ThuocKhangGiap"), tmpStr);


		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(5));

		m_jData[_T("ChieuCao")].GetValue(tmpStr);
		rptDetail->SetValue(_T("ChieuCao"), tmpStr);

		m_jData[_T("CanNang")].GetValue(tmpStr);
		rptDetail->SetValue(_T("CanNang"), tmpStr);

		m_jData[_T("HuyetAp")].GetValue(tmpStr);
		rptDetail->SetValue(_T("HuyetAp"), tmpStr);

		m_jData[_T("Mach")].GetValue(tmpStr);
		rptDetail->SetValue(_T("Mach"), tmpStr);

		m_jData[_T("CanDoi")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("CanDoi"), _T("X"));

		m_jData[_T("MatCanDoi")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("MatCanDoi"), _T("X"));

		m_jData[_T("MatCanDoi2")].GetValue(tmpStr);
		rptDetail->SetValue(_T("MatCanDoi2"), tmpStr);

		m_jData[_T("BinhThuong")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("BinhThuong"), _T("X"));

		m_jData[_T("BatThuong")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("BatThuong"), _T("X"));

		m_jData[_T("BatThuong2")].GetValue(tmpStr);
		rptDetail->SetValue(_T("BatThuong2"), tmpStr);

		m_jData[_T("BDTMCo")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("BDTMCo"), _T("X"));

		m_jData[_T("BDTMKhong")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("BDTMKhong"), _T("X"));

		m_jData[_T("DauCo")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("DauCo"), _T("X"));

		m_jData[_T("HoKichThichHong")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("HoKichThichHong"), _T("X"));

		m_jData[_T("NuotNghen")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("NuotNghen"), _T("X"));

		m_jData[_T("ChenEpDeDay")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("ChenEpDeDay"), _T("X"));


		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(6));

		m_jData[_T("TangCan")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("TangCan"), _T("X"));

		m_jData[_T("GiamCan")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("GiamCan"), _T("X"));

		m_jData[_T("LoLang")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("LoLang"), _T("X"));

		m_jData[_T("TramCam")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("TramCam"), _T("X"));

		m_jData[_T("NongBung")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("NongBung"), _T("X"));

		m_jData[_T("SoLanh")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("SoLanh"), _T("X"));

		m_jData[_T("HoiHop")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("HoiHop"), _T("X"));

		m_jData[_T("NhipCham")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("NhipCham"), _T("X"));

		m_jData[_T("DiNgoai")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("DiNgoai"), _T("X"));

		m_jData[_T("TaoBon")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("TaoBon"), _T("X"));

		m_jData[_T("RunDauChi")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("RunDauChi"), _T("X"));

		m_jData[_T("Tang")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Tang"), _T("X"));

		m_jData[_T("Giam")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Giam"), _T("X"));

		m_jData[_T("YeuCo")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("YeuCo"), _T("X"));

		m_jData[_T("LoiMat")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("LoiMat"), _T("X"));

		m_jData[_T("MiMat")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("MiMat"), _T("X"));

		m_jData[_T("NhinDoi")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("NhinDoi"), _T("X"));


		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(7));

		m_jData[_T("Chac")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Chac"), _T("X"));

		m_jData[_T("Mem")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Mem"), _T("X"));

		m_jData[_T("Nhan")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Nhan"), _T("X"));

		m_jData[_T("GoGhe")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("GoGhe"), _T("X"));

		m_jData[_T("RMCo")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("RMCo"), _T("X"));

		m_jData[_T("RMKhong")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("RMKhong"), _T("X"));

		m_jData[_T("TTCo")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("TTCo"), _T("X"));

		m_jData[_T("TTKhong")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("TTKhong"), _T("X"));

		m_jData[_T("Do0")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Do0"), _T("X"));

		m_jData[_T("DoIA")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("DoIA"), _T("X"));

		m_jData[_T("DoIB")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("DoIB"), _T("X"));

		m_jData[_T("DoII")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("DoII"), _T("X"));

		m_jData[_T("DoIII")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("DoIII"), _T("X"));

		m_jData[_T("Pemberton")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("Pemberton"), _T("X"));

		m_jData[_T("HuyetHoc")].GetValue(tmpStr);
		rptDetail->SetValue(_T("HuyetHoc"), tmpStr);

		m_jData[_T("SieuAm")].GetValue(tmpStr);
		rptDetail->SetValue(_T("SieuAm"), tmpStr);

		m_jData[_T("XNKhac")].GetValue(tmpStr);
		rptDetail->SetValue(_T("XNKhac"), tmpStr);


		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(8));

		m_jData[_T("ThoiGian")].GetValue(tmpStr);
		rptDetail->SetValue(_T("ThoiGian"), tmpStr);

		m_jData[_T("CongSuat")].GetValue(tmpStr);
		rptDetail->SetValue(_T("CongSuat"), tmpStr);

		m_jData[_T("KimDot")].GetValue(tmpStr);
		rptDetail->SetValue(_T("KimDot"), tmpStr);

		m_jData[_T("Lidocain")].GetValue(tmpStr);
		rptDetail->SetValue(_T("Lidocain"), tmpStr);

		m_jData[_T("ChocDMCanh")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("ChocDMCanh"), _T("X"));

		m_jData[_T("TonThuongTKQuayNguoc")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("TonThuongTKQuayNguoc"), _T("X"));

		m_jData[_T("ChayMauTrongNang")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("ChayMauTrongNang"), _T("X"));

		m_jData[_T("KhanTieng")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("KhanTieng"), _T("X"));

		m_jData[_T("MatYThuc")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("MatYThuc"), _T("X"));

		m_jData[_T("ChocTMCanh")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("ChocTMCanh"), _T("X"));

		m_jData[_T("TonThuongTKX")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("TonThuongTKX"), _T("X"));

		m_jData[_T("TuMauTrongNang")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("TuMauTrongNang"), _T("X"));

		m_jData[_T("TuMauVungCo")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("TuMauVungCo"), _T("X"));

		m_jData[_T("SuyHoHap")].GetValue(m_bTrue);
		if(m_bTrue)
			rptDetail->SetValue(_T("SuyHoHap"), _T("X"));


		rptDetail = rpt.AddDetail(rpt.GetGroupHeader(9));

		m_jData[_T("7NgayDau")].GetValue(tmpStr);
		rptDetail->SetValue(_T("7NgayDau"), tmpStr);

		m_jData[_T("Sau1Thang")].GetValue(tmpStr);
		rptDetail->SetValue(_T("Sau1Thang"), tmpStr);

		m_jData[_T("Sau3Thang")].GetValue(tmpStr);
		rptDetail->SetValue(_T("Sau3Thang"), tmpStr);

		m_jData[_T("Sau6Thang")].GetValue(tmpStr);
		rptDetail->SetValue(_T("Sau6Thang"), tmpStr);

		m_jData[_T("Sau12Thang")].GetValue(tmpStr);
		rptDetail->SetValue(_T("Sau12Thang"), tmpStr);
	}

	rpt.PrintPreview();
}