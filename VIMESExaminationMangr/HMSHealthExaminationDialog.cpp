#include "HMSHealthExaminationDialog.h"
#include "MainFrm.h"
#include "Resource.h"
#include "HMSGeneralRankSpecialExamineDialog.h"



#include "Gdiplus.h"
#include "HMSGeneralRankSpecialExamineDialog.h"
using namespace Gdiplus;


int GetEncoderClsid(const WCHAR* format, CLSID* pClsid)
{
   UINT  num = 0;          // number of image encoders
   UINT  size = 0;         // size of the image encoder array in bytes

   ImageCodecInfo* pImageCodecInfo = NULL;

   GetImageEncodersSize(&num, &size);
   if(size == 0)
      return -1;  // Failure

   pImageCodecInfo = (ImageCodecInfo*)(malloc(size));
   if(pImageCodecInfo == NULL)
      return -1;  // Failure

   GetImageEncoders(num, size, pImageCodecInfo);

   for(UINT j = 0; j < num; ++j)
   {
      if( wcscmp(pImageCodecInfo[j].MimeType, format) == 0 )
      {
         *pClsid = pImageCodecInfo[j].Clsid;
         free(pImageCodecInfo);
         return j;  // Success
      }    
   }

   free(pImageCodecInfo);
   return -1;  // Failure
}


static void _OnReloadInfoSelectFnc(CWnd *pWnd){
	CHMSHealthExaminationDialog *pVw = (CHMSHealthExaminationDialog *)pWnd;
	pVw->OnReloadInfoSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSHealthExaminationDialog *pVw = (CHMSHealthExaminationDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSHealthExaminationDialog *pVw = (CHMSHealthExaminationDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSHealthExaminationDialog *pVw = (CHMSHealthExaminationDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSHealthExaminationDialog *pVw = (CHMSHealthExaminationDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnENTExamSelectFnc(CWnd *pWnd){
	CHMSHealthExaminationDialog *pVw = (CHMSHealthExaminationDialog *)pWnd;
	pVw->OnENTExamSelect();
} 
static void _OnOMFExamSelectFnc(CWnd *pWnd){
	CHMSHealthExaminationDialog *pVw = (CHMSHealthExaminationDialog *)pWnd;
	pVw->OnOMFExamSelect();
} 
static void _OnEYEExamSelectFnc(CWnd *pWnd){
	CHMSHealthExaminationDialog *pVw = (CHMSHealthExaminationDialog *)pWnd;
	pVw->OnEYEExamSelect();
} 

static void _OnSPECExamSelectFnc(CWnd *pWnd){
	CHMSHealthExaminationDialog *pVw = (CHMSHealthExaminationDialog *)pWnd;
	pVw->OnSPECExamSelect();
} 
static int _OnAddHMSHealthExaminationDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExaminationDialog*)pWnd)->OnAddHMSHealthExaminationDialog();
} 
static int _OnEditHMSHealthExaminationDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExaminationDialog*)pWnd)->OnEditHMSHealthExaminationDialog();
} 
static int _OnDeleteHMSHealthExaminationDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExaminationDialog*)pWnd)->OnDeleteHMSHealthExaminationDialog();
} 
static int _OnSaveHMSHealthExaminationDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExaminationDialog*)pWnd)->OnSaveHMSHealthExaminationDialog();
} 
static int _OnCancelHMSHealthExaminationDialogFnc(CWnd *pWnd){
	 return ((CHMSHealthExaminationDialog*)pWnd)->OnCancelHMSHealthExaminationDialog();
} 
CHMSHealthExaminationDialog::CHMSHealthExaminationDialog(CWnd* pParent):
	CGuiDialog(pParent)
{

	m_nDlgWidth = 860;
	m_nDlgHeight = 600;
	SetDefaultValues();

	m_bPrinting = false;
}
CHMSHealthExaminationDialog::~CHMSHealthExaminationDialog(){
}
void CHMSHealthExaminationDialog::OnCreateComponents(){
	m_wndReloadInfo.Create(this, _T("Reload Info"), 5, 620, 95, 645);
	m_wndUpdate.Create(this, _T("&Update"), 100, 620, 190, 645);
	m_wndSave.Create(this, _T("&Save"), 195, 620, 285, 645);
	m_wndCancel.Create(this, _T("&Cancel"), 290, 620, 380, 645);
	m_wndPrint.Create(this, _T("&Print"), 385, 620, 475, 645);
	m_wndENTExam.Create(this, _T("ENTExam"), 480, 620, 560, 645);
	m_wndOMFExam.Create(this, _T("OMFExam"), 565, 620, 645, 645);
	m_wndEYEExam.Create(this, _T("EYEExam"), 650, 620, 730, 645);
	m_wndSPECExam.Create(this, _T("SPECExam"), 735, 620, 815, 645);
	m_wndLayout.Create(WS_CHILD|WS_VISIBLE|WS_BORDER, CRect(5, 5, 800, 580), this, 0);
}
void CHMSHealthExaminationDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReloadInfo.ModifyStyle(WS_TABSTOP, 0);
	m_hms_examTbl.SetTableName(_T("hms_exam"));
	m_hms_examTbl.AddField(_T("he_createdby"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_createddate"), dfText, 4); 
	m_hms_examTbl.AddField(_T("he_updatedby"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_updateddate"), dfText, 4); 
	m_hms_examTbl.AddField(_T("he_docno"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_patientno"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_deptid"), dfText, 7); 
	m_hms_examTbl.AddField(_T("he_roomid"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_receptno"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_receptidx"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_examtype"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_hasfee"), dfText, 1); 
	m_hms_examTbl.AddField(_T("he_payment"), dfText, 1); 
	m_hms_examTbl.AddField(_T("he_status"), dfText, 1); 
	m_hms_examTbl.AddField(_T("he_examdate"), dfText, 4); 
	m_hms_examTbl.AddField(_T("he_doctor"), dfText, 15); 
	m_hms_examTbl.AddField(_T("he_reason"), dfText, 81); 
	m_hms_examTbl.AddField(_T("he_pathology"), dfText, 512); 
	m_hms_examTbl.AddField(_T("he_ownerhistory"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_familyhistory"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_examine"), dfText, 512); 
	m_hms_examTbl.AddField(_T("he_parts"), dfText, 512); 
	m_hms_examTbl.AddField(_T("he_pulse"), dfDouble); 
	m_hms_examTbl.AddField(_T("he_temperature"), dfDouble); 
	m_hms_examTbl.AddField(_T("he_bloodpremax"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_bloodpremin"), dfInteger); 
	m_hms_examTbl.AddField(_T("he_weigh"), dfDouble); 
	m_hms_examTbl.AddField(_T("he_height"), dfDouble); 
	m_hms_examTbl.AddField(_T("he_prediagnose"), dfText, 128); 
	m_hms_examTbl.AddField(_T("he_conclusion"), dfText, 254); 
	m_hms_examTbl.AddField(_T("he_type"), dfInteger); 

}
void CHMSHealthExaminationDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndReloadInfo.SetEvent(WE_CLICK, _OnReloadInfoSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndENTExam.SetEvent(WE_CLICK, _OnENTExamSelectFnc);
	m_wndOMFExam.SetEvent(WE_CLICK, _OnOMFExamSelectFnc);
	m_wndEYEExam.SetEvent(WE_CLICK, _OnEYEExamSelectFnc);
	m_wndSPECExam.SetEvent(WE_CLICK, _OnSPECExamSelectFnc);
	SetMode(VM_NONE);

	m_nDocumentNo = pMF->m_nDocumentNo;

	m_wndLayout.LoadHtmlResource(IDR_HTML1);

	GetDataToScreen();
	
}
void CHMSHealthExaminationDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSHealthExaminationDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rsD(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CRecord rsl(&pMF->m_db);

	CString szSQL, szSQLD;
	CString tmpStr;
	
	utf8::ostream os;
	utf8::ostream os2;
	long nPatientNo;

	htmlayout::dom::element root = m_wndLayout.GetRootElement();
	m_arDoctors.RemoveAll();
	


	m_wndLayout.m_nDocumentNo = pMF->m_nDocumentNo;
	m_wndLayout.m_szDeptID = pMF->m_szDept;
	m_wndLayout.m_nRoomID = pMF->m_nRoomID;
//	m_wndLayout.OnAfterLoadData();
	
	szSQLD.Format(_T("SELECT he_examdate FROM hms_exam WHERE he_docno = %ld"), m_nDocumentNo);
	rsD.ExecSQL(szSQLD);
	rsD.GetValue(_T("he_examdate"), tmpStr);
	//tmpStr = pMF->GetSysDate();
	CString szTitle;
	szTitle.Format(_T("PHI\x1EBEU KH\xC1M S\x1EE8\x43 KH\x1ECE\x45 \x43\xC1N \x42\x1ED8 N\x102M %s"), tmpStr.Left(4));
	htmlayout::dom::element title = root.find_first("[name='TITLE']");
	if(title.is_valid())
	{
		os << L"<b>" << szTitle << L"</b>";
		title.set_html(os.data(), os.length());
_tprintf(_T("\r\nxxx"));
	}
	os.clear();

	//LTITLE
	CString szLTitle;
	if(m_szBoNhiem == _T("Y"))
	{
		szLTitle.Format(_T("(\xC1p \x64\x1EE5ng quy tr\xECnh \x62\x1ED5 nhi\x1EC7m, th\x103ng qu\xE2n h\xE0m \x63\x1EA5p t\x1B0\x1EDBng)"));
	}else
		szLTitle.Format(_T("(\xC1p \x64\x1EE5ng \x111\x1ED1i v\x1EDBi \x63\xE1n \x62\x1ED9 \x63\x1EA5p t\x1B0\x1EDBng t\x1EA1i \x63h\x1EE9\x63)"));
	
	htmlayout::dom::element ltitle = root.find_first("[name='LTITLE']");
	if(ltitle.is_valid())
	{
		os << L"<i>" << szLTitle << L"</i>";
		ltitle.set_html(os.data(), os.length());
_tprintf(_T("\r\nxxx"));
	}
	os.clear();

	szSQL.Format(_T(" SELECT hp_patientno as patientno, upper(hp_surname") \
_T("   ||' '") \
_T("   ||hp_midname") \
_T("   ||' '") \
_T("   ||hp_firstname)                                           AS pname,") \
_T("   hms_getsex(hp_sex)                                                   AS sex,") \
_T("   TO_CHAR(hp_birthdate, 'YYYY')                            AS yob,") \
_T("   TO_CHAR(hp_birthdate, 'MM')                              AS mob,") \
_T("   TO_CHAR(hp_birthdate, 'DD')                               AS dob,") \
_T("   HMS_GETADDRESS(hp_provid, hp_distid, hp_villid)          AS address,") \
_T("   GET_SELECTION_DESC('sys_occupation', hp_occupation)			AS occupation,") \
_T("  (select ss_desc from sys_sel where ss_id = 'hms_rank' and ss_code =hp_rank) as frank, ") \
_T("   GET_SELECTION_DESC('hms_position', TO_CHAR(hd_position)) AS fposition, hd_doctor as fdoctor, ") \
_T(" hd_icd as icd10, hd_conclusion as conclusion ") \
_T(" FROM hms_patient") \
_T(" LEFT JOIN hms_doc") \
_T(" ON(hd_patientno = hp_patientno)") \
_T(" WHERE hd_docno  = %ld"), pMF->m_nDocumentNo);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), tmpStr);
		m_wndLayout.SetValue(_T("FULLNAME"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		m_wndLayout.SetValue(_T("GIOI_TINH"), tmpStr);

		int nYear, nMonth, nDay;

		rs.GetValue(_T("yob"), nYear);
		rs.GetValue(_T("mob"), nMonth);
		rs.GetValue(_T("dob"), nDay);
		tmpStr.Format(_T("%.\x32\x64 th\xE1ng %.\x32\x64 n\x103m %.\x34\x64"), nDay, nMonth, nYear);
		m_wndLayout.SetValue(_T("NGAY_SINH"), tmpStr);
		rs.GetValue(_T("address"), tmpStr);
		m_wndLayout.SetValue(_T("CHO_O_HIEN_TAI"), tmpStr);
		m_wndLayout.SetValue(_T("HO_KHAU_THUONG_TRU"), tmpStr);
		rs.GetValue(_T("occupation"), tmpStr);

		m_wndLayout.SetValue(_T("NGHE_NGHIEP"), tmpStr);
		rs.GetValue(_T("fposition"), tmpStr);
		m_wndLayout.SetValue(_T("CHUC_VU"), tmpStr);

		rs.GetValue(_T("frank"), tmpStr);
		m_wndLayout.SetValue(_T("CAP_BAC"), tmpStr);

		rs.GetValue(_T("fdoctor"), tmpStr);
		m_arDoctors[0] = tmpStr;
		m_wndLayout.SetValue(_T("signature0_name"), pMF->GetDoctorName(tmpStr));

		rs.GetValue(_T("conclusion"), tmpStr);
		CString szConclusion;
		szConclusion.Format(_T("%s"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		szConclusion.AppendFormat(_T(" [%s]"),tmpStr);
		m_wndLayout.SetValue(_T("CHAN_DOAN_BENH"), szConclusion);

		rs.GetValue(_T("patientno"), nPatientNo);
		szSQL.Format(_T("SELECT HDH_DRUGALLERGY FROM hms_disease_hist WHERE HDH_PATIENTNO=%ld"), nPatientNo);
		rs2.ExecSQL(szSQL);
		if(!rs2.IsEOF())
		{
			rs2.GetValue(_T("HDH_DRUGALLERGY"), tmpStr);
			m_wndLayout.SetValue(_T("DI_UONG"), tmpStr);
		}
		szSQL.Format(_T(" SELECT") \
_T("   CASE") \
_T("     WHEN he_weight > 0") \
_T("     THEN TO_CHAR(he_weight)") \
_T("     ELSE ''") \
_T("   END AS cannang,") \
_T("   CASE") \
_T("     WHEN he_height > 0") \
_T("     THEN TO_CHAR(he_height)") \
_T("     ELSE ''") \
_T("   END AS chieucao,") \
_T("   CASE") \
_T("     WHEN he_pulse > 0") \
_T("     THEN TO_CHAR(he_pulse)") \
_T("     ELSE ''") \
_T("   END AS mach,") \
_T("   CASE") \
_T("     WHEN HE_BLOODPRESSUREX > 0") \
_T("     THEN TO_CHAR(HE_BLOODPRESSURE)") \
_T("       ||'/'") \
_T("       ||TO_CHAR(HE_BLOODPRESSUREX)") \
_T("     ELSE ''") \
_T("   END AS huyetap") \
_T(" FROM hms_exam") \
_T(" WHERE he_docno  = %ld") \
_T(" AND he_receptidx=%ld "), pMF->m_nDocumentNo, pMF->m_nRefIndex);
		rs2.ExecSQL(szSQL);

		if(!rs2.IsEOF())
		{
			rs2.GetValue(_T("cannang"), tmpStr);
			m_wndLayout.SetValue(_T("CAN_NANG"), tmpStr);
			rs2.GetValue(_T("chieucao"), tmpStr);
			m_wndLayout.SetValue(_T("CHIEU_CAO"), tmpStr);
			rs2.GetValue(_T("mach"), tmpStr);
			m_wndLayout.SetValue(_T("MACH"), tmpStr);
			rs2.GetValue(_T("huyetap"), tmpStr);
			m_wndLayout.SetValue(_T("HUYET_AP"), tmpStr);
			
		}
	}

	
	htmlayout::dom::element div = root.find_first("[name='TEST']");
/*
	htmlayout::dom::element grp = htmlayout::dom::element::create("input"); 
	grp.set_attribute("type", L"label");
	grp.set_value(L"HUYET HOC");
	grp.set_attribute("value", L"HUYET HOC");
	div.insert(grp, 0);
	htmlayout::dom::element table = htmlayout::dom::element::create("table"); 
    htmlayout::dom::element tr = htmlayout::dom::element::create("tr"); 
    htmlayout::dom::element td = htmlayout::dom::element::create("td",L"first"); tr.append(td); 
                            td = htmlayout::dom::element::create("td",L"second"); tr.append(td); 
                            td = htmlayout::dom::element::create("td",L"third"); tr.append(td); 

    table.append(tr); 
	div.insert(table, 2);
*/

	szSQL.Format(_T("SELECT hde_name, to_char(hde_value) as hde_value, hde_doctor FROM hms_doc_emr WHERE hde_docno=%ld and hde_deptid='%s' and hde_type='GENERAL_EXAM_DOC'  "),
			pMF->m_nDocumentNo, pMF->m_szDept);

	rs.ExecSQL(szSQL);
	CString szName, szValue;
	CString szDoctor;
	
	int n = 4;
	
	m_arDoctors[1] = _T("");
	m_arDoctors[2] = _T("");
	m_arDoctors[3] = _T("");

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hde_name"), szName);
		rs.GetValue(_T("hde_value"), szValue);
		m_wndLayout.SetValue(szName, szValue);
		rs.GetValue(_T("hde_doctor"), szDoctor);
		if(szName == _T("TMH"))
		{
			m_arDoctors[1] = szDoctor;
			m_wndLayout.SetValue(_T("signature1_name"), pMF->GetDoctorName(szDoctor));
		}
		else if(szName == _T("RHM"))
		{
			m_arDoctors[2] = szDoctor;
			m_wndLayout.SetValue(_T("signature2_name"), pMF->GetDoctorName(szDoctor));
		}
		else if(szName == _T("MAT"))
		{
			m_arDoctors[3] = szDoctor;
			m_wndLayout.SetValue(_T("signature3_name"), pMF->GetDoctorName(szDoctor));
		}
		
		rs.MoveNext();
	}

	//CHUYEN KHOA KHAC
	os.clear();
	div = root.find_first("[name='SPECIALEXAM']");

	szSQL.Format(_T("SELECT hde_name, to_char(hde_value) as hde_value, hde_doctor, ss_desc ") \
		_T("FROM hms_doc_emr ") \
		_T("LEFT JOIN sys_sel ON(ss_id='HMS_GENERAL_EXAM_DOC' and ss_code = hde_name) ") \
		_T("WHERE hde_docno=%ld and hde_deptid='%s' and hde_type='GENERAL_EXAM_DOC'  and length(ss_code) > 0 ") \
		_T("ORDER BY ss_index "), pMF->m_nDocumentNo, pMF->m_szDept);

	rs.ExecSQL(szSQL);
	
	CString szDesc;
	CString szIndex;
	
	CStringA szImg;
	int nIndex = 12;
	int nImgIdx = 4;

	while(!rs.IsEOF())
	{
		rs.GetValue(_T("ss_desc"), szDesc);
		rs.GetValue(_T("hde_name"), szName);
		rs.GetValue(_T("hde_value"), szValue);
		rs.GetValue(_T("hde_doctor"), szDoctor);
		

		szIndex.Format(_T("%d."), nIndex++);
		os << L"<p><b>" << szIndex << szDesc << L"</b></p>";
		tmpStr.Format(_T("<plaintext #first name=\"%s\" value=\"%s\"></plaintext>"), szName, szValue);
		os << tmpStr;
		
		CString szSignature;
		
		if(m_bPrinting)
		{
			tmpStr.Format(_T("<div class=\"chuky\">"));
			os << tmpStr;

			tmpStr.Format(_T("<b>\x42\xC1\x43 S\x128</b><br/>"));
			os << tmpStr;
			tmpStr.Format(_T("(K\xFD v\xE0 ghi r\xF5 h\x1ECD t\xEAn)"));
			os << tmpStr;
			szSignature.Format(_T("signature%d"), nImgIdx );

			tmpStr.Format(_T("<img name=\"%s\" width=\"160px\" height=\"70px\"></img>"), szSignature);
			os << tmpStr;
			tmpStr.Format(_T("<div name=\"signature%d_name\" width=\"250px\" height=\"20px\">%s</div>"), nImgIdx, pMF->GetDoctorName(szDoctor));
			
			os << tmpStr;

			tmpStr.Format(_T("</div>"));
			os << tmpStr;
			
			tmpStr.Format(_T("<div style=\"width:100%;height:10px;\"></div>"));
			os << tmpStr;
			
			

		}
		m_arDoctors[nImgIdx] = szDoctor;
		nImgIdx++;
		rs.MoveNext();
	}

	

	div.set_html( os.data(), os.length(), SIH_APPEND_AFTER_LAST);
	div.update(true);


	szSQL.Format(_T(" SELECT DISTINCT *") \
_T(" FROM") \
_T("   (SELECT hfg_index2, hpc_groupid,") \
_T("     hfg_name") \
_T("   FROM hms_testorder") \
_T("   LEFT JOIN hms_fee_group") \
_T("   ON(hfg_id           =hpc_groupid)") \
_T("   WHERE hpc_docno     = %ld ") \
_T("   AND hpc_deptid      ='%s'") \
_T("   AND hpc_status NOT IN('O','C')") \
_T("   ORDER BY hfg_index2,") \
_T("     hpc_groupid") \
_T("   ) ORDER BY hfg_index2 ") , pMF->m_nDocumentNo, pMF->m_szDept);

	rs.ExecSQL(szSQL);
	
	
	
	long nOID;
	CString szGroupID;
	nIndex = 1;
	os.clear();

	div = root.find_first("[name='TEST']");

	while(!rs.IsEOF())
	{
		//		os << L"<b>XXX</b><table class=\"xetnghiem\"><tr><td>1</td>2<td></td></tr></table>";
		rs.GetValue(_T("hfg_name"), tmpStr);
		//rs.GetValue(_T("hpc_orderid"), nOID);
		rs.GetValue(_T("hpc_groupid"), szGroupID);

		szIndex.Format(_T("%d."), nIndex++);
		os << L"<p><b>" << szIndex << tmpStr << L"</b></p>";

		os << L"<table class=\"dc_tables2_1\">";
		os << L"<tr>";
		os << L"<td width=\"5%\">" << _T("STT") << L"</td>";
		os << L"<td width=\"55%\">" << _T("T\xEAn \x78\xE9t nghi\x1EC7m") <<L"</td>";
		os << L"<td  width=\"10%\">" << _T("\x110\x1A1n v\x1ECB") <<L"</td>";
		os << L"<td width=\"15%\">" << _T("K\x1EBFt qu\x1EA3") <<L"</td>";
		os << L"<td  width=\"15%\">" << _T("\x43h\x1EC9 s\x1ED1 \x62\xECnh th\x1B0\x1EDDng") <<L"</td>";
		os << L"</tr>";

		szSQL.Format(_T(" SELECT hfl_name,") \
_T("   hfl_unit,") \
_T("   hfl_index1,") \
_T("   hfl_index2,") \
_T("   hpcl_result") \
_T(" FROM hms_testorder") \
_T(" LEFT JOIN hms_testorderline ON(hpc_orderid=hpcl_orderid) ") \
_T(" LEFT JOIN hms_fee_list") \
_T(" ON(hfl_feeid       =hpcl_itemid)") \
_T(" WHERE hpc_docno=%ld and hpc_groupid = '%s' ORDER BY  hfl_line "),  pMF->m_nDocumentNo, szGroupID);
		
		rsl.ExecSQL(szSQL);
		int nIdx = 1;
		while(!rsl.IsEOF())
		{
			tmpStr.Format(_T("%d"), nIdx++);
			os << L"<tr>" ;
			os << L"<td width=\"5%\">" << tmpStr << L"</td>";
			os << L"<td width=\"55%\">" << rsl.GetValue(_T("hfl_name")) <<L"</td>";
			os << L"<td width=\"10%\" >" << rsl.GetValue(_T("hfl_unit")) <<L"</td>";
			os << L"<td width=\"15%\" >" << rsl.GetValue(_T("hpcl_result")) <<L"</td>";
			os << L"<td width=\"15%\" >" << rsl.GetValue(_T("hfl_index1")) <<L"</td>";
			os << L"</tr>";

			rsl.MoveNext();
		}

		os << L"</table>";

		rs.MoveNext();
	}

	div.set_html( os.data(), os.length(), SIH_APPEND_AFTER_LAST);
	div.update(true);



	szSQL.Format(_T(" SELECT hpc_orderid AS forderid ,") \
_T("   hfl_name         AS fname,") \
_T("   hpr_desc as fresult") \
_T(" FROM hms_pacsorder") \
_T(" LEFT JOIN hms_pacsorderline") \
_T(" ON(hpcl_orderid = hpc_orderid)") \
_T(" LEFT JOIN hms_pacs_result") \
_T(" ON(hpcl_orderid     = hpr_orderid") \
_T(" AND hpcl_itemid     = hpr_itemid") \
_T(" AND lower(hpr_name) ='conclusion')") \
_T(" LEFT JOIN hms_fee_list") \
_T(" ON(hfl_feeid    =hpcl_itemid)") \
_T(" LEFT JOIN hms_fee_group ON(hfl_groupid=hfg_id) ") \
_T(" WHERE hpc_docno = %ld") \
_T(" AND hpc_deptid  ='%s'") \
_T(" AND hpc_status  ='T'") \
_T(" ORDER BY hfg_index2, hpc_groupid, hpc_orderid"), pMF->m_nDocumentNo, pMF->m_szDept);

	rs.ExecSQL(szSQL);
	
	
	
	os.clear();
	div = root.find_first("[name='PACS']");
	while(!rs.IsEOF())
	{
		//		os << L"<b>XXX</b><table class=\"xetnghiem\"><tr><td>1</td>2<td></td></tr></table>";
		rs.GetValue(_T("fname"), tmpStr);
		rs.GetValue(_T("forderid"), nOID);

		szIndex.Format(_T("%d."), nIndex++);
		os << L"<p><b>" << szIndex << tmpStr << L"</b></p>";
		rs.GetValue(_T("fresult"), tmpStr);
		os << L"<p>" << L"-" << tmpStr << L"</p>";
		rs.MoveNext();
	}

	div.set_html( os.data(), os.length(), SIH_APPEND_AFTER_LAST);
	div.update(true);
	

    

	root.update(true);

	SetMode(VM_VIEW);


}
void CHMSHealthExaminationDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_hms_examTbl.SetValue(_T("he_createdby"), pMF->GetCurrentUser());
	m_hms_examTbl.SetValue(_T("he_createddate"), pMF->GetSysDateTime());
	m_hms_examTbl.SetValue(_T("he_updatedby"), pMF->GetCurrentUser());
	m_hms_examTbl.SetValue(_T("he_updateddate"), pMF->GetSysDateTime());

}
void CHMSHealthExaminationDialog::SetDefaultValues(){


}
int CHMSHealthExaminationDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, 2, -1);
			m_wndLayout.EnableControls(TRUE);
			m_wndLayout.EnableControl(_T("fullname"), true);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, 2, -1);
			m_wndLayout.EnableControls(FALSE);
			m_wndLayout.EnableControl(_T("fullname"), false);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);

		m_wndLayout.EnableControl(_T("FULLNAME"), false);
		m_wndLayout.EnableControl(_T("NAM"), false);
		m_wndLayout.EnableControl(_T("NU"), false);
		m_wndLayout.EnableControl(_T("NGAY_SINH"), false);
		m_wndLayout.Invalidate();
		m_wndLayout.EnableControl(_T("TMH"), false);
		m_wndLayout.EnableControl(_T("RHM"), false);
		m_wndLayout.EnableControl(_T("MAT"), false);

		
		//Quyen cap nhat du lieu
		if(!pMF->CheckPermission(_T("EMR.02")))
		{
			m_wndUpdate.EnableWindow(FALSE);
		}
		//quyen in phieu 
		if(!pMF->CheckPermission(_T("EMR.03")))
		{
			m_wndPrint.EnableWindow(FALSE);
		}

		//Quy kham Tai mui hong
		if(!pMF->CheckPermission(_T("EMR.04")))
		{
			m_wndENTExam.EnableWindow(FALSE);
		}
		//Quy kham rang ham mat
		if(!pMF->CheckPermission(_T("EMR.05")))
		{
			m_wndOMFExam.EnableWindow(FALSE);
		}
		//Quy kham mat
		if(!pMF->CheckPermission(_T("EMR.06")))
		{
			m_wndEYEExam.EnableWindow(FALSE);
		}

 		return nOldMode;
}
 
void CHMSHealthExaminationDialog::OnReloadInfoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT count(*) as cnt ") \
		_T("FROM hms_doc_emr ") \
		_T("WHERE hde_docno= %ld "), pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.GetIntValue() > 0)
	{
		ShowMessageBox(_T("H\x1ED1 s\x1A1 \x111\xE3 \x111\x1B0\x1EE3\x63 nh\x1EADp th\xF4ng tin. Kh\xF4ng n\x1EA1p \x111\x1B0\x1EE3\x63 th\xF4ng tin tr\x1B0\x1EDB\x63 \x111\xF3."));
		return;
	}

	szSQL.Format(_T("SELECT coalesce(MAX(hde_docno), 0) as docno ") \
		_T("FROM hms_doc_emr ") \
		_T("WHERE hde_patientno=%ld and hde_docno <> %ld "), pMF->m_nPatientNo, pMF->m_nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		long nMaxDocNo, nCurrentDocNo;
		nCurrentDocNo = pMF->m_nDocumentNo;
		rs.GetValue(_T("docno"), nMaxDocNo);
		if(nMaxDocNo > 0 )
		{
			szSQL.Format(_T("SELECT hde_name, to_char(hde_value) as hde_value, hde_doctor FROM hms_doc_emr WHERE hde_docno=%ld and hde_deptid='%s' and hde_type='GENERAL_EXAM_DOC'  "),
			nMaxDocNo, pMF->m_szDept);

			rsl.ExecSQL(szSQL);
			CString szName, szValue;
			CString szDoctor;
			
			while(!rsl.IsEOF())
			{
				rsl.GetValue(_T("hde_name"), szName);
				if(szName == _T("CHIEU_CAO") ||
					szName == _T("DI_UONG") ||
					szName == _T("GD_ANHCHIEM") ||
					szName == _T("GD_BO") ||
					szName == _T("GD_ME") || 
					szName == _T("GD_VO_CHONG") ||
					szName == _T("MAN_TINH") ||
					szName == _T("NHOM_MAU") ||
					szName == _T("RUOU") ||
					szName == _T("SO_THUOC") ||
					szName == _T("THOI_QUEN_KHAC") ||
					szName == _T("THUOC_LA") ||
					szName == _T("PTTT") )
				{
					rsl.GetValue(_T("hde_value"), szValue);
					m_wndLayout.SetValue(szName, szValue);
				}
				rsl.MoveNext();
			}

		}
		else
		{
			ShowMessageBox(_T("Kh\xF4ng t\xECm th\x1EA5y th\xF4ng tin kh\xE1m tr\x1B0\x1EDB\x63 \x111\xF3 \x63\x1EE7\x61 \x62\x1EC7nh nh\xE2n"));
		}
	}
} 
void CHMSHealthExaminationDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	SetMode(VM_EDIT);
} 
void CHMSHealthExaminationDialog::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSHealthExaminationDialog();
	
} 
void CHMSHealthExaminationDialog::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSHealthExaminationDialog();
} 


void CHMSHealthExaminationDialog::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndLayout.LoadHtmlResource(IDR_HTML2);
	m_bPrinting = true;
	GetDataToScreen();
	m_bPrinting = false;
	CString szDoctor;
	CString szPath, szFile, tmpStr;
	szPath = pMF->GetCurrentDirectory();
	
	/*
	tmpStr.Format(_T("%s\\data\\signature1.jpg"), szPath);
	::DeleteFile(tmpStr);

	tmpStr.Format(_T("%s\\data\\signature2.jpg"), szPath);
	::DeleteFile(tmpStr);
	
	tmpStr.Format(_T("%s\\data\\signature3.jpg"), szPath);
	::DeleteFile(tmpStr);
	
	tmpStr.Format(_T("%s\\data\\signature4.jpg"), szPath);
	::DeleteFile(tmpStr);
	*/

	CString szSign;
	for (int i = 0; i < m_arDoctors.GetCount(); i++)
	{
		tmpStr.Format(_T("%s\\data\\signature%d.jpg"), szPath, i);
		::DeleteFile(tmpStr);
		if(m_arDoctors.Lookup(i, szDoctor))
		{
			if(szDoctor.IsEmpty())
				continue;

			HBITMAP hbmp = pMF->GetSignatureImage(szDoctor);
			if(hbmp)
			{
				Bitmap bmp(hbmp, 0);
				CLSID jpgClsid;
				GetEncoderClsid(L"image/jpeg", &jpgClsid);
				szSign.Format(_T("signature%d"),i);
				szFile.Format(_T("%s\\data\\%s.jpg"), szPath, szSign);
				bmp.Save(szFile, &jpgClsid);
				dom::element el = m_wndLayout.Find(szSign);
				el.set_attribute("src", szFile);
				el.update(true);

			}
		}
	}
/*
	if(m_arDoctors.Lookup("IMG2", szDoctor))
	{

		HBITMAP hbmp = pMF->GetSignatureImage(szDoctor);
		if(hbmp)
		{
			Bitmap bmp(hbmp, 0);
			CLSID jpgClsid;
			GetEncoderClsid(L"image/jpeg", &jpgClsid);
			szFile.Format(_T("%s\\data\\signature2.jpg"), szPath);
			bmp.Save(szFile, &jpgClsid);
			dom::element el = m_wndLayout.Find(_T("signature2"));
			el.set_attribute("src", szFile);
			el.update(true);

		}
	}

	if(m_arDoctors.Lookup("IMG3", szDoctor))
	{
		HBITMAP hbmp = pMF->GetSignatureImage(szDoctor);
		if(hbmp)
		{
			Bitmap bmp(hbmp, 0);
			CLSID jpgClsid;
			GetEncoderClsid(L"image/jpeg", &jpgClsid);
			szFile.Format(_T("%s\\data\\signature3.jpg"), szPath);
			bmp.Save(szFile, &jpgClsid);
			dom::element el = m_wndLayout.Find(_T("signature3"));
			el.set_attribute("src", szFile);
			el.update(true);

		}
	}

	if(m_arDoctors.Lookup("IMG4", szDoctor))
	{
		HBITMAP hbmp = pMF->GetSignatureImage(szDoctor);
		if(hbmp)
		{
			Bitmap bmp(hbmp, 0);
			CLSID jpgClsid;
			GetEncoderClsid(L"image/jpeg", &jpgClsid);
			szFile.Format(_T("%s\\data\\signature4.jpg"), szPath);
			bmp.Save(szFile, &jpgClsid);
			dom::element el = m_wndLayout.Find(_T("signature4"));
			el.set_attribute("src", szFile);
			el.update(true);

		}
	}
*/
	m_wndLayout.OnFilePrint();

	m_wndLayout.LoadHtmlResource(IDR_HTML1);
	GetDataToScreen();
} 
void CHMSHealthExaminationDialog::OnENTExamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("EMR.04")))
	{
		ShowMessageBox(_T("Permission denied"));
		return;
	}
} 
void CHMSHealthExaminationDialog::OnOMFExamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("EMR.05")))
	{
		ShowMessageBox(_T("Permission denied"));
		return;
	}

} 
void CHMSHealthExaminationDialog::OnEYEExamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!pMF->CheckPermission(_T("EMR.06")))
	{
		ShowMessageBox(_T("Permission denied"));
		return;
	}
	CHMSGeneralRankSpecialExamineDialog dlg(this, _T("MAT"));
	if(dlg.DoModal() == IDOK)
	{

	}
}


void CHMSHealthExaminationDialog::OnSPECExamSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

	

	szSQL.Format(_T("SELECT * FROM sys_sel ") \
		_T("WHERE ss_id='HMS_GENERAL_EXAM_DOC' ") \
		_T("and ss_default in(select sup_permid from sys_userperm where sup_moduleid='EM' and sup_userid='%s' and sup_permid like('EMR'||chr(37)) )") \
		_T("ORDER BY ss_index"), pMF->GetCurrentUser());
	rs.ExecSQL(szSQL);

	CGuiMenu menu(this);
	UINT nID;
	CString szText, tmpStr;
	menu.CreatePopupMenu();

	
	CArray<CString, CString> arCodes;
	CArray<CString, CString> arDescs;
	nID = 1;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("ss_desc"), szText);
		rs.GetValue(_T("ss_code"), tmpStr);
		arCodes.Add(tmpStr);
		arDescs.Add(szText);
		menu.AppendMenu(MF_BYPOSITION, nID, szText);
		nID++;
		rs.MoveNext();
	}

	CPoint pt;
	CRect rect;
	m_wndSPECExam.GetWindowRect(&rect);
	pt.x = rect.left;
	pt.y = rect.top-2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_BOTTOMALIGN|TPM_RIGHTBUTTON,pt.x,pt.y, this);

	CString szType, szTitle;
	if(ret > 0)
	{
		szType = arCodes[ret-1];
		szTitle = arDescs[ret-1];
	}
	else
	{
		return;
	}

	CHMSGeneralRankSpecialExamineDialog dlg(this, szType, szTitle);
	if(dlg.DoModal() == IDOK)
	{

	}
}

int CHMSHealthExaminationDialog::OnAddHMSHealthExaminationDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSHealthExaminationDialog::OnEditHMSHealthExaminationDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSHealthExaminationDialog::OnDeleteHMSHealthExaminationDialog(){
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
 		OnCancelHMSHealthExaminationDialog();
 	}
	return 0;
}
int CHMSHealthExaminationDialog::OnSaveHMSHealthExaminationDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;


	szSQL.Format(_T("DELETE FROM hms_doc_emr ") \
		_T("WHERE hde_docno = %ld and hde_type='GENERAL_EXAM_DOC' and hde_name not in('TMH','RHM','MAT') "), 
		pMF->m_nDocumentNo);
	pMF->ExecSQL(szSQL);
	dom::element root = m_wndLayout.GetRootElement();
	
	
    
	CDbfMap emrTbl;
	emrTbl.AddField(_T("hde_type"), dfText, 20);
	emrTbl.AddField(_T("hde_docno"), dfLong);
	emrTbl.AddField(_T("hde_deptid"), dfText, 10);
	emrTbl.AddField(_T("hde_refidx"), dfInteger);
	emrTbl.AddField(_T("hde_roomid"), dfInteger);
	emrTbl.AddField(_T("hde_userid"), dfText, 20);
	emrTbl.AddField(_T("hde_name"), dfText, 20);
	emrTbl.AddField(_T("hde_value"), dfText, 2000);

	emrTbl.SetValue(_T("hde_type"), _T("GENERAL_EXAM_DOC"));
	emrTbl.SetValue(_T("hde_docno"), pMF->m_nDocumentNo);
	emrTbl.SetValue(_T("hde_deptid"), pMF->m_szDept);
	emrTbl.SetValue(_T("hde_refidx"), pMF->m_nRefIndex);
	emrTbl.SetValue(_T("hde_roomid"), pMF->m_nRoomID);
	emrTbl.SetValue(_T("hde_userid"), pMF->GetCurrentUser());

	htmlayout::named_values values;
	int ret = 0;
	if(htmlayout::get_values(root, values ))
    {
      std::wstring s;
      for ( htmlayout::named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
      {
        s += (*it).first;
        s += L"=";
        s += (*it).second.to_string();
        s += L"\n";

		std::wstring name = (*it).first;
		std::wstring value =(*it).second.to_string();
      
		dom::element t = root.find_first("[name='%S']",name.c_str()); 
		if( !t.get_style_attribute("behavior") )
			continue;
		if(name == _T("FULLNAME") || name == _T("NAM") || name == _T("NU") || name == _T("NGAY_SINH"))
			continue;
	//	if(name == _T("TMH") || name == _T("RHM") || name == _T("MAT"))
	//		continue;

		set_value(t, (*it).second);
		t.set_attribute("value", value.c_str());

		if (value.length() > 0)
		{
			
			emrTbl.SetValue(_T("hde_name"), name.c_str());
			emrTbl.SetValue(_T("hde_value"), value.c_str());
			szSQL.Format(_T("HMS_DOC_EMR_CREATE(%s) "), emrTbl.FormatSQL());
		
			ret += str2int(pMF->ExecDML(szSQL));
		}

	  }
     // ::MessageBoxW(m_hWnd,s.c_str(),L"values are:", MB_OK);
	//  _tprintf(_T("\r\n%s"), s.c_str());
    }


 	
 	if(ret > 0)
 	{
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSHealthExaminationDialog::OnCancelHMSHealthExaminationDialog(){
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
int CHMSHealthExaminationDialog::OnHMSHealthExaminationDialogListLoadData(){
	return 0;
}

BOOL CHMSHealthExaminationDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if(pMsg->hwnd == m_wndLayout.GetSafeHwnd())
	{
		return m_wndLayout.PreTranslateMessage(pMsg);
		return FALSE;
	}
	return CWnd::PreTranslateMessage(pMsg);
}

