// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "resource.h"
#include ".\mainfrm.h"
#include "HMSInvoiceSetupDialog.h"
#include "ReportDocument.h"
#include "ImageEx.h"
#include "SYSPasswordChangeDialog.h"
#include "Reports/HMSGeneralCostReportDialog.h"
#include "Reports/HMSGeneralCostReportNewDialog.h"
#include "Reports/HMSGeneralCostReport26ADialog.h"
#include "Reports/HMSGeneralInsuranceCostReportDialog.h"
#include "Reports/HMSGeneralCostInsuraceReport25aDialog.h"
#include "Reports/rptGeneralCostInsuraceReportOutpatient25aDialog.h"
#include "Reports/HMSGeneralInsuranceCostReport79ADialog.h"
#include "Reports/HMSGeneralInsuranceCostReport80ADialog.h"
#include "Reports/rptGeneralExaminationCostsOfPatientsServiceReport.h"
#include "Reports/rptGeneralExaminationCostsOfPatientsPolicyReport.h"
#include "Reports/rptGeneralTreatmentCostsOfPatientsServiceReport.h"
#include "Reports/rptGeneralTreatmentCostsOfPatientsPolicyReport.h"
#include "Reports/rptGeneralTreatmentCostsForObjectsReport.h"
#include "Reports/rptGeneralExaminationCostsForObjectsReport.h"
#include "Reports/rptAdmissionadvancepaymentpatientlistReportDialog.h"
#include "Reports/rptRefundPatientListReportDialog.h"
#include "Reports/rptGeneralExaminationCostsDailyReport.h"
#include "Reports/HMSInsuraceRepor21aDialog.h"
//Nhom bao cao BHYT ngoai tru
#include "Reports/rptDiscountPatientListReportListReportDialog.h"
#include "Reports/rptGeneralExaminationCostForInsuranceReport14A.h"
#include "Reports/rptGeneralExaminationCostForInsuranceObjectGroupReport14A.h"
#include "Reports/rptGeneralExaminationCostForInsuranceRegistrationPlaceReport.h"
#include "Reports/rptGeneralExaminationCostForInsuranceLineReport.h"
//Nhom bao cao BHYT noi tru
#include "Reports/rptGeneralTreatmentCostForInsuranceReport14B.h"
#include "Reports/rptGeneralTreatmentCostForInsuranceObjectGroupReport14B.h"
#include "Reports/rptGeneralTreatmentCostForInsuranceRegistrationPlaceReport.h"
#include "Reports/rptGeneralTreatmentCostForInsuranceLineReport.h"
#include "Reports/rptBaocaotonghopchiphivienphidieutri.h"
#include "Reports/rptBaocaotonghopchiphivienphidieutrichitiet.h"
#include "Reports/rptBaodanhsachbenhnhanchuathuphitheokhoa.h"


#include "Excel.h"

IMPLEMENT_DYNAMIC(CMainFrame, CGuiMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CGuiMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_INVOICESETUP, OnFileInvoicesetup)
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONCOST79AREPORT, OnReportsGeneralexaminationcost79areport)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONCOST80AREPORT, OnReportsGeneralexaminationcost80areport)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONCOSTOFPATIENTSSERVICE, OnReportsGeneralexaminationcostofPatientsService)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONCOSTOFPATIENTSPOLICY, OnReportsGeneralexaminationcostofPatientsPolicy)
	ON_COMMAND(ID_REPORTS_GENERALTREATMENTCOSTSOFPATIENTSSERVICE, OnReportsGeneraltreatmentcostsofpatientsservice)
	ON_COMMAND(ID_REPORTS_GENERALTREATMENTCOSTSOFPATIENTSPOLICY, OnReportsGeneraltreatmentcostsofpatientspolicy)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONANDTREATMENTCOSTSOFHOSPITAL, OnReportsGeneralexaminationandtreatmentcostsofhospital)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONCOSTSFOROBJECTS, OnReportsGeneralexaminationcostsforobjects)
	ON_COMMAND(ID_REPORTS_GENERALTREATMENTCOSTSFOROBJECTS, OnReportsGeneraltreatmentcostsforobjects)
	ON_COMMAND(ID_REPORTS_ADMISSIONADVANCEPAYMENTPATIENTLIST, OnReportsAdmissionadvancepaymentpatientlist)
	ON_COMMAND(ID_REPORTS_REFUNDPATIENTLIST, OnReportsRefundpatientlist)
	ON_COMMAND(ID_REPORTS_DISCOUNTPATIENTLIST, OnReportsDiscountpatientlist)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONCOSTFORINSURANCEOBJECT, OnReportsGeneralExaminationCostForInsuranceObject)
	ON_COMMAND(ID_REPORTS_GENERALTREATMENTCOSTFORINSURANCEOBJECT, OnReportsGeneralTreatmentCostForInsuranceObject)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONCOSTFORINSURANCEREGISTRATIONPLACE, OnReportsGeneralexaminationcostforinsuranceregistrationplace)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONCOSTFORINSURANCELINE, OnReportsGeneralexaminationcostforinsuranceline)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONCOSTFORINSURANCEOBJECTGROUP, OnReportsGeneralexaminationcostforinsuranceobjectgroup)
	ON_COMMAND(ID_REPORTS_GENERALTREATMENTCOSTFORINSURANCEOBJECTGROUP, OnReportsGeneraltreatmentcostforinsuranceobjectgroup)
	ON_COMMAND(ID_REPORTS_GENERALTREATMENTCOSTFORINSURANCEREGISTRATIONPLACE, OnReportsGeneraltreatmentcostforinsuranceregistrationplace)
	ON_COMMAND(ID_REPORTS_GENERALTREATMENTCOSTFORINSURANCELINE, OnReportsGeneraltreatmentcostforinsuranceline)
	ON_COMMAND(ID_REPORTS_GENERALEXAMINATIONCOSTSDAILY, OnReportsGeneralexaminationcostsdaily)	
	ON_COMMAND(ID_GROUPSOFPATIENTSREPORTEDCOSTOFMEDICALINSURANCEOUTPATIENT_GENERALEXAMINATIONCOST25AREPORT, OnGroupsofpatientsreportedcostofmedicalinsuranceoutpatientGeneralexaminationcost25areport)
	ON_COMMAND(ID_THEGROUPOFPATIENTSREPORTINGCOSTHEALTHINSURANCEINPATIENT_GENERALTREATMENTCOST80AREPORT, OnThegroupofpatientsreportingcosthealthinsuranceinpatientGeneraltreatmentcost80areport)
	ON_COMMAND(ID_REPORTS_GENERALSTATISTICSANDTECHNICALSERVICESFORPATIENTSUSINGMEDICALINSURANCE32812, OnReportsGeneralstatisticsandtechnicalservicesforpatientsusingmedicalinsurance32812)
	ON_COMMAND(ID_Menu32813, OnMenu32813)
	ON_COMMAND(ID_REPORTS_TONGHOPCHIPHIKHAMCHUABENHVIENPHITHEOKHOA, OnReportsTonghopchiphikhamchuabenhvienphitheokhoa)
	ON_COMMAND(ID_Menu32815, OnMenu32815)
	ON_COMMAND(ID_REPORTS_DANHSACHBENHNHANCHUATHANHTOANVIENPHI, OnReportsDanhsachbenhnhanchuathanhtoanvienphi)
END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	SetLocalLang(1);
	m_szModuleName = _T("HOSPITAL FEE MANAGEMENT MODULE");
	m_szModuleID = _T("FM");
	m_szSize = CSize(1020, 740);
	m_szVersion = _T("3.5");
	m_nInpatient = 0;
	m_szAutoPrintInvoice = m_szAutoPrintDischargeVote = _T("N");
	m_szPrintDrugDelivery = _T("N");
	m_szPrintHemaReceipt = _T("N");
}

CMainFrame::~CMainFrame()
{

}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	
	if (CGuiMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	
	//ModifyStyle(WS_MAXIMIZEBOX|WS_SIZEBOX|WS_MINIMIZEBOX, 0);
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	CenterWindow();
	return 0;
}


void CMainFrame::OnInitializes(){
	CHMSMainFrame::OnInitializes();
	CWnd *pWnd = GetPanel();
	m_wndPatientFee.Create(pWnd);
	m_wndPatientList.Create(pWnd);
	AddView(_T("Patient List"), &m_wndPatientList);
	AddView(_T("Patient Profile"), &m_wndPatientFee);
	GetSerialInformation();	
	CString szStatus, szStatusLabel, szDate;
	
	szDate = GetSysDate();

	TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	szStatus.AppendFormat(_T(" - Server:%s"), GetHost());
	SetStatusText(szStatus, 1);

	CString szSQL;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT * FROM hms_config "));
	rs.ExecSQL(szSQL);
	m_szAutoPrintInvoice = m_szAutoPrintDischargeVote = _T("N");
	m_szPaymentMethod = _T("D");
	m_szPrintAllCostInDischargePayment = _T("N");
	m_szViewInsurancePaid = _T("N");
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hf_autoprintinvoice"), m_szAutoPrintInvoice);
		rs.GetValue(_T("hf_autoprintdischargevote"), m_szAutoPrintDischargeVote);
		rs.GetValue(_T("hf_print_generalexamcostsheet_type"), m_szPrintGeneralExamCostSheetType);
		rs.GetValue(_T("hc_fee_advance_payment"), m_szAdvancePayment);
		rs.GetValue(_T("hc_fee_advance_emergency"), m_szAdvanceEmergency);
		rs.GetValue(_T("hf_payment_method"), m_szPaymentMethod);
		rs.GetValue(_T("hf_print_all_cost"), m_szPrintAllCostInDischargePayment);
		rs.GetValue(_T("hf_print_drugdelivery"), m_szPrintDrugDelivery);
		rs.GetValue(_T("hf_print_hemareceipt"), m_szPrintHemaReceipt);
		rs.GetValue(_T("hf_print_detail_disease"), m_szPrintDetailDisease);
		rs.GetValue(_T("hf_view_insurance_paid"), m_szViewInsurancePaid);
		rs.GetValue(_T("hms_clientid"), m_szClientID);
	}


	szSQL.Format(_T("SELECT * FROM hms_invfeectl WHERE lower(hifc_userid)=lower('%s') "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		szSQL.Format(_T("UPDATE hms_invfeectl SET hifc_recvdate=date('%s') WHERE lower(hifc_userid)=lower('%s') "), GetSysDate(), GetCurrentUser());
		ExecSQL(szSQL);
	}
	else
	{
		szSQL.Format(_T("INSERT INTO hms_invfeectl VALUES('%s', '%s') "), GetCurrentUser(), GetSysDate());
		ExecSQL(szSQL);
	}
	m_szRecvDate = GetSysDate();

	szSQL.Format(_T("SELECT count(*) FROM hms_invfeectl_line WHERE hifcl_userid='%s' "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		m_bAutoSerial = false;
	}
	else
		m_bAutoSerial = false;


}


void CMainFrame::GetSerialInformation(){
	CString szSQL, retStr;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT * FROM hms_invfeectl WHERE lower(hifc_userid)=lower('%s') "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hifc_serialno"), m_szSerialNo);
		rs.GetValue(_T("hifc_bookno"), m_nBookNo);
		rs.GetValue(_T("hifc_recvno"), m_nRecvNo);
		rs.GetValue(_T("hifc_iserialno"), m_szInsSerialNo);
		rs.GetValue(_T("hifc_ibookno"), m_nInsBookNo);
		rs.GetValue(_T("hifc_irecvno"), m_nInsRecvNo);
		rs.GetValue(_T("hifc_iautorecvno"), m_nAutoRecvNo);
		rs.GetValue(_T("hifc_recvdate"), m_szRecvDate);
		m_bAutoSerial = false;
	}
	else
	{
		m_bAutoSerial = true;
		CString tmpStr;
		tmpStr = GetSysDate();
		tmpStr.Replace(_T("/"), _T(""));
		m_szSerialNo = _T("AUTO");
		m_szInsSerialNo.Empty();
		m_nBookNo = ToLong(tmpStr);
		m_szRecvDate = GetSysDate();
		m_nAutoRecvNo = 0;
		szSQL.Format(_T("SELECT max(hfi_recvno) as recvno FROM hms_fee_invoice WHERE lower(hfi_receiver) = lower('%s') AND date(hfi_recvdate)=date('%s') "), GetCurrentUser(), m_szRecvDate);
		rs.ExecSQL(szSQL);
		m_nRecvNo = 0;
		if(!rs.IsEOF())
			rs.GetValue(_T("recvno"), m_nRecvNo);
		if(m_nRecvNo <= 0)
			m_nRecvNo = 1;

	}
}
void CMainFrame::OnFileChangepassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileInvoicesetup()
{
	CHMSInvoiceSetupDialog dlg(this);
	dlg.m_szReceiveDate = m_szRecvDate;
	if(dlg.DoModal() == IDOK){
		GetSerialInformation();
		
		CString szStatusLabel, szStatus;

		TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
		szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(m_szRecvDate));
		szStatus.AppendFormat(_T(" - Server:%s"), GetHost());
		SetStatusText(szStatus, 1);

	}
}


CString CMainFrame::GetDepartments(LPCTSTR lpszDepts){
	CString szDepts = lpszDepts;
	if(szDepts.IsEmpty())
		return _T("");
	szDepts.Replace(_T("["), _T("'"));
	szDepts.Replace(_T("]"), _T("'"));
	CString szSQL, szRet, tmpStr;
	CRecord rs(&m_db);
	if(szDepts.Find(_T("'")) == -1){
		tmpStr = szDepts;
		szDepts.Format(_T("'%s'"), tmpStr);
	}
	szSQL.Format(_T("SELECT * FROM sys_dept where sd_id in(%s) "), szDepts);

	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		if(!szRet.IsEmpty())
			szRet += _T("; ");
		szRet += rs.GetValue(_T("sd_name"));
		rs.MoveNext();
	}
	return szRet;
}

//In hoa don tam ung, hoan ung, bien lan thu tien...
void	CMainFrame::PrintInvoice(long nInvoiceNo){

	CReport rpt;
	CString tmpStr, szSQL;
	CRecord rs(&m_db);
	long	nDocumentNo;
	if(!rpt.Init(_T("Reports/HMS/HF_INVOICEFEE.RPT")) )
		return;
	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" 	date(hd_admitdate) as examdate,") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T("	(select sd_name from sys_dept where sd_id=hfi_deptid) as deptname, ") \
				_T(" 	hfi_bookno as bookno,") \
				_T(" 	hfi_serialno as serialno,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_recvdate as recvdate, ") \
				_T(" 	hfi_receiver as receiver,") \
				_T(" 	hfi_desc as reason, ") \
				_T(" 	hfi_cost as cost,") \
				_T(" 	hfi_discount as discount,") \
				_T(" 	hfi_patpaid as patpaid") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfi_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno AND hd_docno=hfi_docno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfi_docno=%ld and hfi_invoiceno=%ld "), m_nDocumentNo, nInvoiceNo);
				
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	//Report Header
	tmpStr.Empty();
	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("HOSPITALADDRESS"), m_CompanyInfo.sc_address);

	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("SerialNo")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
	
	rpt.GetReportHeader()->SetValue(_T("ReceiptNo"), tmpStr);
	tmpStr.Format(_T("%ld"), nInvoiceNo);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);


	//rs.GetValue(_T("pname"), tmpStr);
	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), tmpStr);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	rs.GetValue(_T("deptname"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("Department"), tmpStr);
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);
	rs.GetValue(_T("diagnostic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
	rs.GetValue(_T("reldisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);

	CString szDate;
	rs.GetValue(_T("recvdate"), tmpStr);
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("ReceiveDate")), CDateTime::Convert(tmpStr,yyyymmdd|hhmmss,ddmmyyyy|hhmm));	
	rpt.GetReportHeader()->SetValue(_T("ReceiveDate"), szDate);

	rs.GetValue(_T("doctor"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
	rs.GetValue(_T("receiver"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("ReceiveBy"), GetDoctorName(tmpStr));
	


	CReportSection* rptDetail = rpt.GetDetail(0); 
	CRecord grs(&m_db);
	CString szFeeID, szID;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	int nCount = 0, nIndex, nChapterID=0;
	double dTotal[5];
	double dGroup1[5];
	double dGroup2[5];
	double dAmount = 0;
	int nItem=0, nOldItem=0, nItem2=0;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup;
	for (int i =0; i < 5; i++){
		dTotal[i] = 0;
		dGroup1[i] = 0;
		dGroup2[i] = 0;
	}
	
	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_index, hfg_id "));
	grs.ExecSQL(szSQL);

	szSQL.Format(_T(" SELECT") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_qty) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patpaid+hfe_difpaid) as patpaid,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_patdebt) as unpaid") \
		_T(" FROM hmsv_fee") \
		_T(" WHERE hfe_invoiceno=%ld AND hfe_patpaid > 0 and hfe_discount = 0 ") \
		_T(" GROUP BY groupid, feetype, name, unit, unitprice") \
		_T(" ORDER BY groupid, name, unit, unitprice"), nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
//_fmsg(_T("%s"), szSQL);
	nIndex = 0;
	CString szSubItem, szType;
	int nSubItem = 1;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CReportSection *grp;
	while(!grs.IsEOF()){
		grs.GetValue(_T("level"), nLevel);
		grs.GetValue(_T("id"), szParentGroup);
		grs.GetValue(_T("feeid"), szSubItem);
		szParentGroup.Trim();
		bool bAdd = false;
		rs.MoveFirst();
		while(!rs.IsEOF()){
			rs.GetValue(_T("groupid"), tmpStr);
			if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
				bAdd = true;
				break;
			}
			rs.MoveNext();
		}
		if(!bAdd)
		{
			grs.MoveNext();
			continue;
		}
		
		if(nLevel == 0)
		{
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			fee.szGroupID = _T("Type");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			nIndex = 0;
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			fee.szGroupID = _T("Group");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
		}
		if(szSubItem == _T("Y")){
			nSubItem = 0;
//			rs.MoveFirst();
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("groupid"), szNewGroup);
				szNewGroup.Trim();
				if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
				{
					if(szNewGroup.Left(3) ==_T("B11") && szOldGroup != szNewGroup){
							szOldGroup = szNewGroup;
							if(dGroup2[0] > 0 && nItem2 > 0){
								fee = feeList.GetAt(nOldItem);
								fee.nCost = dGroup2[0];
								fee.nDiscount = dGroup2[1];
								fee.nPatpaid = dGroup2[2];
								fee.nPatdebt = dGroup2[3];
								feeList.SetAt(nOldItem, fee);
							}
							szSQL.Format(_T("SELECT hfg_name as name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&m_db);
							rs2.ExecSQL(szSQL);
							fee.szGroupID = _T("SubGroup");
							fee.szID = _T("*");
							fee.szName = rs2.GetValue(_T("name"));
							nItem2 = feeList.Add(fee);
							nOldItem = nItem2;
							dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
					}

					nSubItem++;
						rs.GetValue(_T("cost"), dAmount);
						dTotal[0] += dAmount;
						dGroup1[0] += dAmount;
						dGroup2[0] += dAmount;
						rs.GetValue(_T("discount"), dAmount);
						dTotal[1] += dAmount;
						dGroup1[1] += dAmount;
						dGroup2[1] += dAmount;
						rs.GetValue(_T("patpaid"), dAmount);
						dTotal[2] += dAmount;
						dGroup1[2] += dAmount;
						dGroup2[2] += dAmount;

						rs.GetValue(_T("patdebt"), dAmount);
						dTotal[3] += dAmount;
						dGroup1[3] += dAmount;
						dGroup2[3] += dAmount;
						rs.GetValue(_T("unpaid"), dAmount);
						dTotal[4] += dAmount;
						dGroup1[4] += dAmount;
						dGroup2[4] += dAmount;
						fee.szGroupID = _T("Item");
						fee.szID.Empty();
						fee.szName = rs.GetValue(_T("name"));
						fee.szUnit = rs.GetValue(_T("unit"));
						fee.nQuantity = ToLong(rs.GetValue(_T("qty")));
						fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
						fee.nCost = ToDouble(rs.GetValue(_T("cost")));
						fee.nPatpaid = ToDouble(rs.GetValue(_T("patpaid")));
						feeList.Add(fee);
				}
				else
					break;
				rs.MoveNext();
			}
			if(dGroup1[0] > 0 && nItem > 0)
			{
				if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
					fee = feeList.GetAt(nOldItem);
					fee.nCost = dGroup2[0];
					fee.nDiscount = dGroup2[1];
					fee.nPatpaid = dGroup2[2];
					feeList.SetAt(nOldItem, fee);
				}
				dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
				nItem2 = 0;
				fee = feeList.GetAt(nItem);
				fee.szGroupID = _T("SubAmount");
				TranslateString(_T("Sub Amount"), fee.szName);
				fee.nCost = dGroup1[0];
				fee.nDiscount = dGroup1[1];
				fee.nPatpaid = dGroup1[2];
				nItem = feeList.Add(fee);
				dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
			}
		}
		grs.MoveNext();
	
	}

	if(dTotal[0] > 0){
			TranslateString(_T("Total Amount"), tmpStr);
			fee.szGroupID = _T("TotalAmount");
			fee.szName = tmpStr;
			fee.nCost = dTotal[0];
			feeList.Add(fee);
	}
	

	for (int i =0; i < feeList.GetCount(); i++){
		fee = feeList[i];
		szType = fee.szGroupID;
			if(szType == _T("Type"))
			{
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				tmpStr = fee.szID;
				rptDetail->SetValue(_T("GH1"), tmpStr);
				StringUpper(fee.szName, tmpStr);
				rptDetail->SetValue(_T("GH2"), tmpStr);
			}
			if(szType == _T("Group")){
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("GH1"), fee.szID);
				rptDetail->SetValue(_T("GH2"), fee.szName);
			}
			else if(szType == _T("SubGroup")){
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("GH1"), fee.szID);
				rptDetail->SetValue(_T("GH2"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
/*
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
*/
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupFooter(1);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
			//	rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubAmount"), tmpStr);
/*
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
*/

			}
			else if(szType == _T("Item")){
				rptDetail = rpt.AddDetail();
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
			}
/*
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("AmountDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("AmountPatPaid"), tmpStr);
			}
*/
	}

	
		//Report Footer
	FormatCurrency(dTotal[0], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	FormatCurrency(dTotal[1], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalDiscount"), tmpStr);
	FormatCurrency(dTotal[2], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalPatpaid"), tmpStr);
	CString szSumInWord;
	tmpStr.Format(_T("%.2f"), dTotal[2]);
	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng");
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
/*
	FormatCurrency(dTotal[1], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);
	FormatCurrency(dTotal[2], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
*/	

	tmpStr = GetSysDateTime();
	szDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szDate);
	szDate = rpt.GetReportFooter()->GetValue(_T("SheetNumber"));
	tmpStr.Format(szDate, 1);
	rpt.GetReportFooter()->SetValue(_T("SheetNumber"), tmpStr);
//	rpt.Print();
	rpt.PrintPreview();
//	tmpStr.Format(szDate, 2);
//	rpt.GetReportFooter()->SetValue(_T("SheetNumber"), tmpStr);
//	rpt.Print(true);

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_printed=hfi_printed+1 WHERE hfi_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);
}

void	CMainFrame::PrintReceipt(long nInvoiceNo)
{
	CReport rpt;
	CString tmpStr, szSQL;
	CRecord rs(&m_db);
	long nDocumentNo;
	CString szType;
	
	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hfi_type as typeid,") \
				_T(" 	(select sd_name from sys_dept where sd_id=hfi_deptid) as deptname,") \
				_T(" 	hfi_depts as depts,")
				_T(" 	hfi_bookno as bookno,") \
				_T(" 	hfi_serialno as serialno,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_recvdate as recvdate, ") \
				_T(" 	hfi_receiver as receiveby,") \
				_T(" 	hfi_desc as reason, ") \
				_T(" 	hfi_cost as cost,") \
				_T(" 	hfi_discount as discount,") \
				_T(" 	hfi_patpaid as patpaid,") \
				_T(" 	hfi_advpayment as advpayment,") \
				_T(" 	hfi_refundamt as refundamt ") \
				_T(" FROM hms_fee_invoice") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfi_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno and hd_docno=hfi_docno)") \
				_T(" WHERE hfi_docno=%ld AND hfi_invoiceno=%ld AND (hfi_patpaid+hfi_cost+hfi_discount) > 0 "), m_nDocumentNo, nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	double nAdvPayment=0, nRefundAmt = 0;
	int nPage = 0;
	CString szReportName;
	rs.GetValue(_T("typeid"), szType);
	
	if(szType == _T("A"))
		szReportName = _T("Reports/HMS/HF_ADVANCEFEE.RPT");
	else if(szType == _T("R"))
		szReportName = _T("Reports/HMS/HF_REFUNDFEE.RPT");
	else if(szType == _T("D"))
		szReportName = _T("Reports/HMS/HF_DISCOUNTFEE.RPT");
/*
	else if(szType == _T("P")){
		rs.GetValue(_T("advpayment"), nAdvPayment);
		rs.GetValue(_T("refundamt"), nRefundAmt);
		if(nRefundAmt > 0){
			szReportName = _T("Reports/HMS/HF_REFUNDFEE.RPT");
		}
		else
		{
			szReportName = _T("Reports/HMS/HF_ADVANCEFEE.RPT");
		}
	}
*/
	else
		szReportName = _T("Reports/HMS/HF_RECEIPTFEE.RPT");

	if(!rpt.Init(szReportName) )
		return;

	if(rpt.GetPageType() == DMPAPER_A4)
	{
		//Page Header
		//Report Detail
		CReportSection* rptDetail = rpt.AddDetail();
		tmpStr.Empty();
		StringUpper(m_CompanyInfo.sc_pname, tmpStr);
		rptDetail->SetValue(_T("HealthService"), tmpStr);
		rptDetail->SetValue(_T("HealthService2"), tmpStr);
		rptDetail->SetValue(_T("HealthService3"), tmpStr);
		StringUpper(m_CompanyInfo.sc_name, tmpStr);
		rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
		rptDetail->SetValue(_T("HOSPITALNAME2"), tmpStr);
		rptDetail->SetValue(_T("HOSPITALNAME3"), tmpStr);
		rs.GetValue(_T("docno"), nDocumentNo);
		tmpStr.Format(_T("%ld"), nDocumentNo);
		rptDetail->SetValue(_T("DocumentNo"), tmpStr);
		rptDetail->SetValue(_T("DocumentNo2"), tmpStr);
		rptDetail->SetValue(_T("DocumentNo3"), tmpStr);
		rs.GetValue(_T("bookno"), tmpStr);
		rptDetail->SetValue(_T("BookNo"), tmpStr);
		rptDetail->SetValue(_T("BookNo2"), tmpStr);
		rptDetail->SetValue(_T("BookNo3"), tmpStr);
		
		CString szSerialNo;
		rs.GetValue(_T("serialno"), szSerialNo);
		rs.GetValue(_T("recvno"), tmpStr);
		szSerialNo.AppendFormat(_T("- %s"), tmpStr);
		rptDetail->SetValue(_T("ReceiptNo"), szSerialNo);
		rptDetail->SetValue(_T("ReceiptNo2"), szSerialNo);
		rptDetail->SetValue(_T("ReceiptNo3"), szSerialNo);

		tmpStr.Format(_T("%ld"), nInvoiceNo);
		rptDetail->SetValue(_T("InvoiceNo"), tmpStr);
		rptDetail->SetValue(_T("InvoiceNo2"), tmpStr);
		rptDetail->SetValue(_T("InvoiceNo3"), tmpStr);


		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("PATIENTNAME"), tmpStr);
		rptDetail->SetValue(_T("PATIENTNAME2"), tmpStr);
		rptDetail->SetValue(_T("PATIENTNAME3"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("Age"), tmpStr);
		rptDetail->SetValue(_T("Age2"), tmpStr);
		rptDetail->SetValue(_T("Age3"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("Sex"), tmpStr);
		rptDetail->SetValue(_T("Sex2"), tmpStr);
		rptDetail->SetValue(_T("Sex3"), tmpStr);
		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("Address"), tmpStr);
		rptDetail->SetValue(_T("Address2"), tmpStr);
		rptDetail->SetValue(_T("Address3"), tmpStr);
		
		rs.GetValue(_T("deptname"), tmpStr);
		rptDetail->SetValue(_T("Department"), tmpStr);
		rptDetail->SetValue(_T("Department2"), tmpStr);
		rptDetail->SetValue(_T("Department3"), tmpStr);
		rs.GetValue(_T("reason"), tmpStr);
		rptDetail->SetValue(_T("Reason"), tmpStr);
		rptDetail->SetValue(_T("Reason2"), tmpStr);
		rptDetail->SetValue(_T("Reason3"), tmpStr);

		if(szType == _T("P"))
		{
			rs.GetValue(_T("depts"), tmpStr);
			CString szDeptName = GetDepartments(tmpStr);
			rptDetail->SetValue(_T("Department"), szDeptName);
			rptDetail->SetValue(_T("Department2"), szDeptName);
			rptDetail->SetValue(_T("Department3"), szDeptName);

	/*		
			if(nRefundAmt > 0)
				FormatCurrency(nRefundAmt, tmpStr);
			else
				FormatCurrency(nAdvPayment, tmpStr);
	*/
			FormatCurrencyStr(rs.GetValue(_T("patpaid")), tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			rptDetail->SetValue(_T("TotalAmount2"), tmpStr);
			rptDetail->SetValue(_T("TotalAmount3"), tmpStr);
			CString szSumInWord;

			rs.GetValue(_T("patpaid"), tmpStr);
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng");
			rptDetail->SetValue(_T("SumInWord"), szSumInWord);
			rptDetail->SetValue(_T("SumInWord2"), szSumInWord);
			rptDetail->SetValue(_T("SumInWord3"), szSumInWord);
		}
		else if(szType == _T("A")){
			FormatCurrencyStr(rs.GetValue(_T("patpaid")), tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			rptDetail->SetValue(_T("TotalAmount2"), tmpStr);
			rptDetail->SetValue(_T("TotalAmount3"), tmpStr);
			CString szSumInWord;

			rs.GetValue(_T("patpaid"), tmpStr);
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng");
			rptDetail->SetValue(_T("SumInWord"), szSumInWord);
			rptDetail->SetValue(_T("SumInWord2"), szSumInWord);
			rptDetail->SetValue(_T("SumInWord3"), szSumInWord);
		}
		else if(szType == _T("R")){
			FormatCurrencyStr(rs.GetValue(_T("cost")), tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			rptDetail->SetValue(_T("TotalAmount2"), tmpStr);
			rptDetail->SetValue(_T("TotalAmount3"), tmpStr);
			CString szSumInWord;

			rs.GetValue(_T("cost"), tmpStr);
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng");
			rptDetail->SetValue(_T("SumInWord"), szSumInWord);
			rptDetail->SetValue(_T("SumInWord2"), szSumInWord);
			rptDetail->SetValue(_T("SumInWord3"), szSumInWord);

		}
		else if(szType == _T("D")){
			FormatCurrencyStr(rs.GetValue(_T("discount")), tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			rptDetail->SetValue(_T("TotalAmount2"), tmpStr);
			rptDetail->SetValue(_T("TotalAmount3"), tmpStr);
			CString szSumInWord;

			rs.GetValue(_T("discount"), tmpStr);
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng");
			rptDetail->SetValue(_T("SumInWord"), szSumInWord);
			rptDetail->SetValue(_T("SumInWord2"), szSumInWord);
			rptDetail->SetValue(_T("SumInWord3"), szSumInWord);

		}

		CString szDate;
		rs.GetValue(_T("recvdate"), tmpStr);
		szDate.Format(rptDetail->GetValue(_T("PrintDate")),tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
		rptDetail->SetValue(_T("PrintDate"), szDate);
		rptDetail->SetValue(_T("PrintDate2"), szDate);
		rptDetail->SetValue(_T("PrintDate3"), szDate);
		
		rs.GetValue(_T("ReceiveBy"), tmpStr);
		tmpStr.Trim();
		CString szDoctor = GetDoctorName(tmpStr);
		rptDetail->SetValue(_T("ReceiveBy"), szDoctor);
		rptDetail->SetValue(_T("ReceiveBy2"), szDoctor);
		rptDetail->SetValue(_T("ReceiveBy3"), szDoctor);
		rpt.PrintPreview();

	}
	else
	{
		//Page Header
		//Report Detail
		CReportSection* rptDetail = rpt.AddDetail();
	printLabel:	
		tmpStr.Empty();
		StringUpper(m_CompanyInfo.sc_pname, tmpStr);
		rptDetail->SetValue(_T("HealthService"), tmpStr);
		StringUpper(m_CompanyInfo.sc_name, tmpStr);
		rptDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
		rs.GetValue(_T("docno"), nDocumentNo);
		tmpStr.Format(_T("%ld"), nDocumentNo);
		rptDetail->SetValue(_T("DocumentNo"), tmpStr);
		rs.GetValue(_T("bookno"), tmpStr);
		rptDetail->SetValue(_T("BookNo"), tmpStr);
		CString szSerialNo;
		rs.GetValue(_T("serialno"), szSerialNo);
		rs.GetValue(_T("recvno"), tmpStr);
		szSerialNo.AppendFormat(_T("- %s"), tmpStr);
		rptDetail->SetValue(_T("ReceiptNo"), szSerialNo);

		tmpStr.Format(_T("%ld"), nInvoiceNo);
		rptDetail->SetValue(_T("InvoiceNo"), tmpStr);


		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("PATIENTNAME"), tmpStr);
		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("Age"), tmpStr);
		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("Sex"), tmpStr);
		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("Address"), tmpStr);
		
		rs.GetValue(_T("deptname"), tmpStr);
		rptDetail->SetValue(_T("Department"), tmpStr);
		rs.GetValue(_T("reason"), tmpStr);
		rptDetail->SetValue(_T("Reason"), tmpStr);

		if(szType == _T("P"))
		{
			rs.GetValue(_T("depts"), tmpStr);
			rptDetail->SetValue(_T("Department"), GetDepartments(tmpStr));

	/*		
			if(nRefundAmt > 0)
				FormatCurrency(nRefundAmt, tmpStr);
			else
				FormatCurrency(nAdvPayment, tmpStr);
	*/
			FormatCurrencyStr(rs.GetValue(_T("patpaid")), tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			CString szSumInWord;

			rs.GetValue(_T("patpaid"), tmpStr);
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng");
			rptDetail->SetValue(_T("SumInWord"), szSumInWord);
		}
		else if(szType == _T("A")){
			FormatCurrencyStr(rs.GetValue(_T("patpaid")), tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			CString szSumInWord;

			rs.GetValue(_T("patpaid"), tmpStr);
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng");
			rptDetail->SetValue(_T("SumInWord"), szSumInWord);
		}
		else if(szType == _T("R")){
			FormatCurrencyStr(rs.GetValue(_T("cost")), tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			CString szSumInWord;

			rs.GetValue(_T("cost"), tmpStr);
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng");
			rptDetail->SetValue(_T("SumInWord"), szSumInWord);

		}
		else if(szType == _T("D")){
			FormatCurrencyStr(rs.GetValue(_T("discount")), tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);
			CString szSumInWord;

			rs.GetValue(_T("discount"), tmpStr);
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng");
			rptDetail->SetValue(_T("SumInWord"), szSumInWord);

		}

		CString szDate;
		rs.GetValue(_T("recvdate"), tmpStr);
		szDate.Format(rptDetail->GetValue(_T("PrintDate")),tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
		rptDetail->SetValue(_T("PrintDate"), szDate);
		
		rs.GetValue(_T("ReceiveBy"), tmpStr);
		tmpStr.Trim();
		rptDetail->SetValue(_T("ReceiveBy"), GetDoctorName(tmpStr));

		
		//Page Footer
		//Report Footer
	//	rpt.Print();

		if(nPage == 0)
		{
			szDate = rptDetail->GetValue(_T("SheetNumber"));
			tmpStr.Format(szDate, 1);
			rptDetail->SetValue(_T("SheetNumber"), tmpStr);
		//	rptDetail->SetPageBreak();
		//	rptDetail = rpt.AddDetail(0);
		//	tmpStr.Format(szDate, 2);
		//	rptDetail->SetValue(_T("SheetNumber"), tmpStr);
		//	nPage++;
		//	goto printLabel;
		}

		
		//rpt.GetReportHeader()->SetValue(_T("SheetNumber"), tmpStr);
		rpt.PrintPreview();
	}
	

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_printed=hfi_printed+1 WHERE hfi_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);

	

	
}
//In bang ke chi phi kham chua benh
void	CMainFrame::PrintGeneralExaminationCost(long nInvoiceNo){
	CReport rpt;
	CString tmpStr, szSQL, szDeptID;
	CRecord rs(&m_db);
	long	nDocumentNo;
	int		nDeskNo=0;

	CString	szDescription;
	
	double	nTotalCost=0,				//Tong chi phi
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatpaid =0,			//Tong benh nhan tra
			nTotalDifferenceCost = 0,	//Tong so tra chenh lech
			nTotalDeposit = 0,			//Tong tam ung
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0;			//So tien tra tu tam ung
	double nTotalAmount=0, nTotalInspaid =0, nTotalDifpaid=0;


	
	if(m_nRefIndex == 0){

		szSQL.Format(_T("SELECT hd_status  as status FROM hms_doc WHERE hd_docno=%ld "), m_nDocumentNo);

		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return;

		CString szStatus;
		rs.GetValue(_T("status"), szStatus);
		if(szStatus != _T("T") && szStatus != _T("A")){
			ShowMessageBox(_T("This document not end. Can not print it"), MB_OK);
			return;
		}
	}
	

	
	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	date_part('year', hp_birthdate) as yearofbirth,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text)) as ethnicdesc, ") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" 	hd_suggestion as suggestion,") \
				_T(" (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hd_result) as result, ")
				_T(" 	date(hd_admitdate) as examdate,") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T("	(select ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hd_disrate as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hd_xobject as xobject, ") \
				_T("	hd_xcardno as xcardno, ") \
				_T("	hd_xissuedate as xissuedate, ") \
				_T("	hd_emergency as emergency, ") \
				_T(" 	hfi_deptid as depts,") \
				_T(" 	hfi_deskno as deskno,") \
				_T(" 	hfi_bookno as bookno,") \
				_T(" 	hfi_serialno as serialno,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_recvdate as recvdate, ") \
				_T(" 	hfi_receiver as receiver,") \
				_T(" 	hfi_desc as reason, ") \
				_T(" 	hfi_cost as cost,") \
				_T(" 	hfi_discount as discount,") \
				_T(" 	hfi_patpaid as patpaid, ") \
				_T(" 	hfi_advanceamt as deposit_amount, ") \
				_T(" 	hfi_advpayment as deposit_payable, ") \
				_T(" 	hfi_refundamt as refund_amount, ") \
				_T(" 	hfi_free as free_amount ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfi_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hfi_docno=hd_docno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfi_docno=%ld and hfi_invoiceno=%ld "), m_nDocumentNo, nInvoiceNo);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
		return;

	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatpaid);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("deposit_payable"), nDepositPayable);
	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);

	rs.GetValue(_T("objecttype"), tmpStr);

	if(tmpStr == _T("I") || tmpStr == _T("C"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSGENERALEXAMINATIONCOST.RPT")) )
		return;
	
	}
	else if(tmpStr == _T("D"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_FREEGENERALEXAMINATIONCOST.RPT")) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOST.RPT")) )
			return;
	}

	//Report Header
	tmpStr.Empty();
	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("serialno")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
	
	rpt.GetReportHeader()->SetValue(_T("ReceiptNo"), tmpStr);
	tmpStr.Format(_T("%ld"), nInvoiceNo);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);


	CString szDate;
	tmpStr = GetSysDateTime();
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);

	//rs.GetValue(_T("pname"), tmpStr);
	CString szPatientName;
	StringUpper(rs.GetValue(_T("pname")), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);
	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);

	CString szAddress;
	rs.GetValue(_T("detailaddress"), tmpStr);
	szAddress = tmpStr;
	rs.GetValue(_T("address"), tmpStr);
	if(!szAddress.IsEmpty())
		szAddress += _T(" - ");
	szAddress += tmpStr;
	rpt.GetReportHeader()->SetValue(_T("Address"), szAddress);
	
	rs.GetValue(_T("depts"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), GetDepartments(tmpStr));
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);	
	rs.GetValue(_T("disrate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), tmpStr);
	rs.GetValue(_T("insline"), tmpStr);
	if(tmpStr == _T("Y")){
		TranslateString(_T("Outline"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InsLine"), tmpStr);
	}
	else
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));

	rs.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);		
	CReportItem *obj = rpt.GetReportHeader()->GetItem(_T("InsuranceCompany"));
	if(obj){
		CString szRegCode, insname;
		CRecord rsx(&m_db);
		rs.GetValue(_T("regcode"), szRegCode);
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);			
		}

	}
	
	rs.GetValue(_T("regcode"), tmpStr);	
	rpt.GetReportHeader()->SetValue(_T("RegCode"), tmpStr);

	rs.GetValue(_T("xobject"), tmpStr);
	if(m_szPrintHemaReceipt == _T("Y") && tmpStr == _T("H")){
		rpt.GetReportHeader()->SetValue(_T("Hema"), _T("HEMA"));
	}	
	rs.GetValue(_T("xcardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("xcardno"), tmpStr);
	rs.GetValue(_T("xissuedate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("xissuedate"), CDate::Convert(tmpStr));

	rs.GetValue(_T("emergency"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Emergency"), tmpStr);

	rs.GetValue(_T("suggestion"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Suggestion"), GetSelectionString(_T("hms_suggestion"), tmpStr));


	if(m_nInpatient == 0 && m_szPrintDetailDisease == _T("Y"))
	{
		CString szSQL2, szRoom, szDisease;
		rs.GetValue(_T("depts"), szDeptID);
		szSQL2.Format(_T(" select hrl_name as roomname, he_diagnostic as diagnostic, hi_name as disease, he_icd10  as icd10 ") \
	_T(" from hms_exam") \
	_T(" left join hms_roomlist on(hrl_deptid=he_deptid and hrl_id=he_roomid)") \
	_T(" left join hms_icd on(hi_icd=he_icd10) ") \
	_T(" where he_deptid='%s' and he_docno=%ld ORDER BY he_updateddate "), szDeptID, m_nDocumentNo);
		CRecord rsd(&m_db);
		rsd.ExecSQL(szSQL2);

		szRoom.Empty();
		szDisease.Empty();
		CString tmpStr2;
		while(!rsd.IsEOF()){
			
			if(!szRoom.IsEmpty() )
				szRoom += _T(" -> ");
			szRoom.AppendFormat(_T("%s"), rsd.GetValue(_T("roomname")));

			rsd.GetValue(_T("disease"), tmpStr2);
			tmpStr2.Trim();
			if(tmpStr2.IsEmpty()){
				rsd.GetValue(_T("diagnostic"), tmpStr2);
			}
			if(!szDisease.IsEmpty())
				szDisease += _T("\r\n->");
			szDisease.AppendFormat(_T("[%s] %s"), rsd.GetValue(_T("icd10")), tmpStr2);
			rsd.MoveNext();
		}
		if(szDisease.IsEmpty()) 		rs.GetValue(_T("diagnostic"), szDisease);

		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), szDisease);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), _T(""));
		rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoom);
		
	}
	else
	{
		rs.GetValue(_T("diagnostic"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);

	}

	rs.GetValue(_T("reldisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
	

	rs.GetValue(_T("result"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);
	
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));

	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("ReceiveDate"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	
	if(m_nInpatient == 0)
		rs.GetValue(_T("doctor"), tmpStr);
	else
		rs.GetValue(_T("treatdoctor"), tmpStr);
	
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}	
	tmpStr.Empty();
	rs.GetValue(_T("receiver"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy"), GetDoctorName(tmpStr));
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetHBITMAP(GetSignatureImage(tmpStr));
		img2->SetFixedHeight(false);
	}	



	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));

	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("ReceiveDate"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));


	CReportSection* rptDetail = rpt.GetDetail(0); 
	CRecord grs(&m_db);
	CString szFeeID, szID;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	int nCount = 0, nIndex, nChapterID=0;
	int nItem=0, nOldItem=0, nItem2=0;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup;
	double nGroup1Cost=0, nGroup1Discount=0, nGroup1Patpaid=0;
	double nGroup2Cost=0, nGroup2Discount=0, nGroup2Patpaid=0;	
	double nCost=0, nDiscount=0, nPatpaid=0;

	
	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_index, hfg_id "));
	grs.ExecSQL(szSQL);

	CString szWhere;
	rs.GetValue(_T("objecttype"), tmpStr);


	if(tmpStr == _T("I") || tmpStr == _T("C") || tmpStr == _T("D"))
	{	
		szWhere.Format(_T(" and (hfe_discount+hfe_difcost) > 0 "));
	}
	if(m_szPrintAllCostInDischargePayment == _T("Y")){
		szWhere.Empty();
	}
	
	szSQL.Format(_T(" SELECT") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_qty) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_inspaid) as inspaid,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patpaid+hfe_difpaid) as patpaid,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_patdebt) as unpaid") \
		_T(" FROM hmsv_fee") \
		_T(" WHERE hfe_docno=%ld and (hfe_insinvoice=%ld or hfe_invoiceno=%ld ) %s ") \
		_T(" GROUP BY groupid, feetype,  name, unit, unitprice") \
		_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
		_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, nInvoiceNo, szWhere);
	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	nIndex = 0;
	CString szSubItem, szType;
	int nSubItem = 1;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CReportSection *grp;
	while(!grs.IsEOF()){
		grs.GetValue(_T("level"), nLevel);
		grs.GetValue(_T("id"), szParentGroup);
		grs.GetValue(_T("feeid"), szSubItem);
		szParentGroup.Trim();
		bool bAdd = false;
		rs.MoveFirst();
		while(!rs.IsEOF()){
			rs.GetValue(_T("groupid"), tmpStr);
			if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
				bAdd = true;
				break;
			}
			rs.MoveNext();
		}
		if(!bAdd)
		{
			grs.MoveNext();
			continue;
		}
		
		if(nLevel == 0)
		{
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			fee.szGroupID = _T("Type");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			nIndex = 0;
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			fee.szGroupID = _T("Group");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			nGroup1Cost = nGroup1Discount = nGroup1Patpaid = 0;
		}
		if(szSubItem == _T("Y")){
			nSubItem = 0;
//			rs.MoveFirst();
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("groupid"), szNewGroup);
				szNewGroup.Trim();
				if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
				{
					if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
							szOldGroup = szNewGroup;
							if(nGroup2Cost > 0 && nItem2 > 0){
								fee = feeList.GetAt(nOldItem);
								fee.nCost = nGroup2Cost;
								fee.nDiscount = nGroup2Discount;
								fee.nPatpaid = nGroup2Patpaid;
								feeList.SetAt(nOldItem, fee);
							}
							szSQL.Format(_T("SELECT hfg_name as name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&m_db);
							rs2.ExecSQL(szSQL);
							fee.szGroupID = _T("SubGroup");
							fee.szID = _T("*");
							fee.szName = rs2.GetValue(_T("name"));
							nItem2 = feeList.Add(fee);
							nOldItem = nItem2;
							nGroup2Cost = nGroup2Discount = nGroup2Patpaid = 0;
					}

					nSubItem++;
					nCost = nDiscount = nPatpaid = 0;
					rs.GetValue(_T("cost"), nCost);
					nTotalAmount += nCost;
					nGroup1Cost += nCost;
					nGroup2Cost += nCost;
						
					fee.szGroupID = _T("Item");
					fee.szID.Empty();
					fee.szName = rs.GetValue(_T("name"));
					fee.szUnit = rs.GetValue(_T("unit"));
					fee.nQuantity = ToLong(rs.GetValue(_T("qty")));
					fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
					fee.nCost = nCost;
					fee.nDiscount = 0;	
					if(m_szViewInsurancePaid == _T("Y")){
							if(m_szObjectType == _T("D"))
							{
								rs.GetValue(_T("discount"), nDiscount);
							}
							else
							{
								rs.GetValue(_T("inspaid"), nDiscount);
							}
						
					}
					else
					{
						rs.GetValue(_T("discount"), nDiscount);
					}
					fee.nDiscount = nDiscount;
					nPatpaid = nCost-nDiscount;
					fee.nPatpaid = nPatpaid;

					nTotalInspaid += nDiscount;
					nTotalDifpaid += nPatpaid;

					nGroup1Discount += nDiscount;
					nGroup2Discount += nDiscount;
					nGroup1Patpaid += nPatpaid;
					nGroup2Patpaid += nPatpaid;

					feeList.Add(fee);
				}
				else
					break;
				rs.MoveNext();
			}
			if(nGroup1Cost > 0 && nItem > 0)
			{
				if(nGroup2Cost > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
					fee = feeList.GetAt(nOldItem);
					fee.nCost = nGroup2Cost;
					fee.nDiscount = nGroup2Discount;
					fee.nPatpaid = nGroup2Patpaid;
					feeList.SetAt(nOldItem, fee);
				}
				nGroup2Cost = nGroup2Discount = nGroup2Patpaid = 0;

				nItem2 = 0;
				fee = feeList.GetAt(nItem);
				fee.szGroupID = _T("SubAmount");
				TranslateString(_T("Sub Amount"), fee.szName);
				fee.nCost = nGroup1Cost;
				fee.nDiscount = nGroup1Discount;
				fee.nPatpaid = nGroup1Patpaid;
				nItem = feeList.Add(fee);
				nGroup1Cost = nGroup1Discount = nGroup1Patpaid = 0;
			}
		}
		grs.MoveNext();
	
	}

	if(nTotalAmount > 0){
			TranslateString(_T("Total Amount"), tmpStr);
			fee.szGroupID = _T("TotalAmount");
			fee.szName = tmpStr;
			fee.nCost = nTotalAmount;
			fee.nDiscount = nTotalInspaid;
			fee.nPatpaid = nTotalDifpaid;
			feeList.Add(fee);
	}
	

	for (int i =0; i < feeList.GetCount(); i++){
		fee = feeList[i];
		szType = fee.szGroupID;

			if(szType == _T("Type"))
			{
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				tmpStr = fee.szID;
				rptDetail->SetValue(_T("TypeID"), tmpStr);
				StringUpper(fee.szName, tmpStr);
				rptDetail->SetValue(_T("TypeName"), tmpStr);
			}
			else if(szType == _T("Group")){
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("TypeID"), fee.szID);
				rptDetail->SetValue(_T("TypeName"), fee.szName);
			}
			else if(szType == _T("SubGroup")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("SubGroupID"), fee.szID);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

			}
			else if(szType == _T("Item")){
				rptDetail = rpt.AddDetail();
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);
				
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
			}
	}

	
		//In du lieu cu
	
	//Report Footer
	if(nDeskNo <= 0)
	{
		double nAdvance=0, nDiscount=0;
		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency(nTotalCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.2f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
		FormatCurrency(nTotalPatpaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);

		szSQL.Format(_T(" SELECT 	date(hfi_recvdate) as recvdate, ") \
	_T(" 	hfi_receiver as receiveby, ") \
	_T(" 	hfi_desc as desc, hfi_type as feetype, ") \
	_T(" 	case when hfi_type='A' then hfi_patpaid ") \
	_T(" 	when hfi_type='D' then hfi_discount ") \
	_T(" 	when hfi_type='R' then hfi_cost else 0 end as amount") \
	_T(" FROM hms_fee_invoice") \
	_T(" WHERE hfi_docno=%ld and hfi_type in('A') and hfi_category='A' and hfi_refinvoice=%ld ") \
	_T(" ORDER BY hfi_invoiceno;"), m_nDocumentNo, nInvoiceNo);
		rs.ExecSQL(szSQL);
		
		CString szDesc;
		double nTotalAdvance=0, nTotalDiscount=0;
		while(!rs.IsEOF()){
			
			grp = rpt.GetGroupHeader(2);
			rptDetail = rpt.AddDetail(grp);

			szDesc.Format(_T("[%s] %s (%s)"), 
				CDate::Convert(rs.GetValue(_T("recvdate")), yyyymmdd, ddmmyyyy), 
					rs.GetValue(_T("desc")), 
					GetDoctorName(rs.GetValue(_T("receiveby"))));

			rptDetail->SetValue(_T("SubGroupName"), szDesc);
			rs.GetValue(_T("amount"), tmpStr);
			rs.GetValue(_T("feetype"), szType);
			if(szType == _T("A"))
				nTotalAdvance += ToDouble(tmpStr);
			else if(szType == _T("D"))
				nTotalDiscount += ToDouble(tmpStr);
			rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
			rs.MoveNext();
		}

		if(nAdvance <= 0)
			nAdvance = nTotalAdvance;
		FormatCurrency(nAdvance, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Advance"), tmpStr);

		szSQL.Format(_T(" SELECT sum(hfi_discount) as amount ") \
		_T(" FROM hms_fee_invoice ") \
		_T(" WHERE hfi_docno=%ld and hfi_type in('D')  and hfi_refinvoice=%ld "), m_nDocumentNo, nInvoiceNo);
		rs.ExecSQL(szSQL);
		tmpStr.Empty();
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("amount"), nDiscount);
			
		}
		if(nDiscount <= 0)
			nDiscount = nTotalDiscount;

		tmpStr.Empty();
		FormatCurrency(nDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Discount"), tmpStr);

		tmpStr.Empty();
		
		szWhere.Format(_T(" and hfi_refinvoice=%ld"), nInvoiceNo);
		


		CString szAmount;

		szSQL.Format(_T("select hfi_desc, case when hfi_type='R' then hfi_cost else hfi_patpaid end as amount from hms_fee_invoice where hfi_docno=%ld and hfi_type in('A','R') and hfi_category='D' %s"), nDocumentNo, szWhere);

		rs.ExecSQL(szSQL);
		
		

		if(!rs.IsEOF()){
			
			FormatCurrencyStr(rs.GetValue(_T("amount")), szAmount);
			tmpStr.Format(_T("%s: %s"),
				rs.GetValue(_T("hfi_desc")), szAmount);
			rpt.GetReportFooter()->SetValue(_T("Payable"), tmpStr);
		}
		else	
		{

			FormatCurrency(nTotalPatpaid-nDiscount, szAmount);
			tmpStr.Format(_T("%s: %s"), szDescription, szAmount);
			rpt.GetReportFooter()->SetValue(_T("Payable"), tmpStr);

		}
	}
	else	//Neu ap dung cach thu phi moi
	{
		

		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency(nTotalCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.2f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
		FormatCurrency(nTotalPatpaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);

	
		szSQL.Format(_T(" SELECT 	date(hfi_recvdate) as recvdate, ") \
	_T(" 	hfi_receiver as receiveby, ") \
	_T(" 	hfi_desc as desc, hfi_type as feetype, ") \
	_T(" 	case when hfi_type='A' then hfi_patpaid ") \
	_T(" 	when hfi_type='D' then hfi_discount ") \
	_T(" 	when hfi_type='R' then hfi_cost else 0 end as amount") \
	_T(" FROM hms_fee_invoice") \
	_T(" WHERE hfi_docno=%ld and hfi_invoiceno in(select hri_refinvoice from hms_refinvoice where hri_invoiceno=%ld)  %s ") \
	_T(" ORDER BY hfi_invoiceno;"), m_nDocumentNo, nInvoiceNo, szWhere);
		rs.ExecSQL(szSQL);
		
		CString szDesc;
		while(!rs.IsEOF()){
			
			grp = rpt.GetGroupHeader(2);
			rptDetail = rpt.AddDetail(grp);

			szDesc.Format(_T("[%s] %s (%s)"), 
				CDate::Convert(rs.GetValue(_T("recvdate")), yyyymmdd, ddmmyyyy), 
					rs.GetValue(_T("desc")), 
					GetDoctorName(rs.GetValue(_T("receiveby"))));

			rptDetail->SetValue(_T("SubGroupName"), szDesc);
			rs.GetValue(_T("amount"), tmpStr);
			rs.GetValue(_T("feetype"), szType);
			rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
			rs.MoveNext();
		}

		FormatCurrency(nTotalDeposit, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Advance"), tmpStr);
		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Discount"), tmpStr);
		if(nTotalRefund > 0)
		{
			FormatCurrency(nTotalRefund, tmpStr);
			TranslateString(_T("Refund"), szDescription);
		}
		else
		{
			FormatCurrency(nDepositPayable, tmpStr);
			if(nTotalDeposit > 0)
			{
				TranslateString(_T("Deposit"), szDescription);
				szDescription += _T(" [TT]");
			}

		}
		szDesc.Format(_T("%s: %s"), szDescription, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Payable"), szDesc);

	}


	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_printed=hfi_printed+1 WHERE hfi_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);

//	rpt.Print();
	rpt.PrintPreview();


}
//In bang ke chi phi kham chua benh
void	CMainFrame::PrintGeneralExaminationCost_New(long nInvoiceNo){

	CReport rpt;
	CString tmpStr, szSQL, szDeptID, szDesc;
	CRecord rs(&m_db);
	long	nDocumentNo;
	
	if(m_nRefIndex == 0){

		szSQL.Format(_T("SELECT hd_status  as status FROM hms_doc WHERE hd_docno=%ld "), m_nDocumentNo);

		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return;

		CString szStatus;
		rs.GetValue(_T("status"), szStatus);
		if(szStatus != _T("T") && szStatus != _T("A")){
			ShowMessageBox(_T("This document not end. Can not print it"), MB_OK);
			return;
		}
	}
	

	
	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	date_part('year', hp_birthdate) as yearofbirth,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text)) as ethnicdesc, ") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hd_result) as result, ")
				_T(" 	date(hd_admitdate) as examdate,") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T("	(select ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hd_disrate as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hd_xobject as xobject, ") \
				_T("	hd_xcardno as xcardno, ") \
				_T("	hd_xissuedate as xissuedate, ") \
				_T(" 	hfi_deptid as depts,") \
				_T(" 	hfi_bookno as bookno,") \
				_T(" 	hfi_serialno as serialno,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_recvdate as recvdate, ") \
				_T(" 	hfi_receiver as receiver,") \
				_T(" 	hfi_desc as reason, ") \
				_T(" 	hfi_cost as cost,") \
				_T(" 	hfi_discount as discount,") \
				_T(" 	hfi_patpaid as patpaid, ") \
				_T(" 	hfi_advanceamt as advanceamt, ") \
				_T(" 	hfi_refundamt as refundamt, ") \
				_T(" 	hfi_advpayment as advpayment, ") \
				_T(" 	hfi_free as freeamt ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfi_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hfi_docno=hd_docno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfi_invoiceno=%ld "), nInvoiceNo);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
		return;


	rs.GetValue(_T("objecttype"), tmpStr);
	if(tmpStr == _T("I") || tmpStr == _T("C"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSGENERALEXAMINATIONCOST2.RPT")) )
			return;
	
	}
	else if(tmpStr == _T("D"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_FREEGENERALEXAMINATIONCOST.RPT")) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOST.RPT")) )
			return;
	}

	double nTotalAdvance, nTotalRefund, nTotalAdvPayable, nTotalFree, nTotalCost, nTotalDiscount, nTotalPayable;
	rs.GetValue(_T("advanceamt"), nTotalAdvance);
	rs.GetValue(_T("refundamt"), nTotalRefund);
	rs.GetValue(_T("advpayment"), nTotalAdvPayable);
	rs.GetValue(_T("freeamt"), nTotalFree);
	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("reason"), szDesc);
	nTotalPayable = nTotalCost-nTotalDiscount-nTotalFree-nTotalAdvPayable;

	
	//Report Header
	tmpStr.Empty();
	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("serialno")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);

	CString szDate;
	tmpStr = GetSysDateTime();
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);

	//rs.GetValue(_T("pname"), tmpStr);
	CString szPatientName;
	StringUpper(rs.GetValue(_T("pname")), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);
	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);

	CString szAddress;
	rs.GetValue(_T("detailaddress"), tmpStr);
	szAddress = tmpStr;
	rs.GetValue(_T("address"), tmpStr);
	if(!szAddress.IsEmpty())
		szAddress += _T(" - ");
	szAddress += tmpStr;
	rpt.GetReportHeader()->SetValue(_T("Address"), szAddress);
	
	rs.GetValue(_T("depts"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Department"), GetDepartments(tmpStr));
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	

	rs.GetValue(_T("disrate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), tmpStr);
	rs.GetValue(_T("insline"), tmpStr);
	if(tmpStr == _T("Y")){
		TranslateString(_T("Outline"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InsLine"), tmpStr);
	}
	else
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));

	rs.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);		
	CReportItem *obj = rpt.GetReportHeader()->GetItem(_T("InsuranceCompany"));
	if(obj){
		CString szRegCode, insname;
		CRecord rsx(&m_db);
		rs.GetValue(_T("regcode"), szRegCode);
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);			
		}
	}
	
	rs.GetValue(_T("regcode"), tmpStr);	
	rpt.GetReportHeader()->SetValue(_T("RegCode"), tmpStr);

	rs.GetValue(_T("xobject"), tmpStr);
	if(m_szPrintHemaReceipt == _T("Y") && tmpStr == _T("H")){
		rpt.GetReportHeader()->SetValue(_T("Hema"), _T("HEMA"));
	}	
	rs.GetValue(_T("xcardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("xcardno"), tmpStr);
	rs.GetValue(_T("xissuedate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("xissuedate"), CDate::Convert(tmpStr));


	if(m_nInpatient == 0 && m_szPrintDetailDisease == _T("Y"))
	{
		CString szSQL2, szRoom, szDisease;
		rs.GetValue(_T("depts"), szDeptID);
		szSQL2.Format(_T(" select hrl_name as roomname, he_diagnostic as diagnostic, hi_name as disease, he_icd10  as icd10 ") \
	_T(" from hms_exam") \
	_T(" left join hms_roomlist on(hrl_deptid=he_deptid and hrl_id=he_roomid)") \
	_T(" left join hms_icd on(hi_icd=he_icd10) ") \
	_T(" where he_deptid='%s' and he_docno=%ld ORDER BY he_updateddate "), szDeptID, m_nDocumentNo);
		CRecord rsd(&m_db);
		rsd.ExecSQL(szSQL2);

		szRoom.Empty();
		szDisease.Empty();
		CString tmpStr2;
		while(!rsd.IsEOF()){
			
			if(!szRoom.IsEmpty() )
				szRoom += _T(" -> ");
			szRoom.AppendFormat(_T("%s"), rsd.GetValue(_T("roomname")));

			rsd.GetValue(_T("disease"), tmpStr2);
			tmpStr2.Trim();
			if(tmpStr2.IsEmpty()){
				rsd.GetValue(_T("diagnostic"), tmpStr2);
			}
			if(!szDisease.IsEmpty())
				szDisease += _T("\r\n->");
			szDisease.AppendFormat(_T("[%s] %s"), rsd.GetValue(_T("icd10")), tmpStr2);
			rsd.MoveNext();
		}
		if(szDisease.IsEmpty()) 		rs.GetValue(_T("diagnostic"), szDisease);

		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), szDisease);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), _T(""));
		rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoom);
		
	}
	else
	{
		rs.GetValue(_T("diagnostic"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);

	}

	rs.GetValue(_T("reldisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
	

	rs.GetValue(_T("result"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);
	
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));

	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("ReceiveDate"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	
	if(m_nInpatient == 0)
		rs.GetValue(_T("doctor"), tmpStr);
	else
		rs.GetValue(_T("treatdoctor"), tmpStr);
	
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}	
	tmpStr.Empty();
	rs.GetValue(_T("receiver"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy"), GetDoctorName(tmpStr));
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetHBITMAP(GetSignatureImage(tmpStr));
		img2->SetFixedHeight(false);
	}	



	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));

	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("ReceiveDate"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));


	CReportSection* rptDetail = rpt.GetDetail(0); 
	CRecord grs(&m_db);
	CString szFeeID, szID;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	int nCount = 0, nIndex, nChapterID=0;
	double dTotal[6];
	double dGroup1[6];
	double dGroup2[6];
	double dAmount = 0;
	int nItem=0, nOldItem=0, nItem2=0;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup;
	for (int i =0; i <= 5; i++){
		dTotal[i] = 0;
		dGroup1[i] = 0;
		dGroup2[i] = 0;
	}
	
	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_index, hfg_id "));
	grs.ExecSQL(szSQL);

	CString szWhere;
	rs.GetValue(_T("objecttype"), tmpStr);


	if(tmpStr == _T("I") || tmpStr == _T("C") || tmpStr == _T("D"))
	{	
		szWhere.Format(_T(" and (hfe_discount+hfe_difcost) > 0 "));
	}
	if(m_szPrintAllCostInDischargePayment == _T("Y")){
		szWhere.Empty();
	}
	
	szSQL.Format(_T(" SELECT") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_qty) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		hfe_insprice as insprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_inspaid) as inspaid,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_patpaid+hfe_difpaid) as patpaid,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_patdebt) as unpaid") \
		_T(" FROM hmsv_fee") \
		_T(" WHERE (hfe_insinvoice=%ld or hfe_invoiceno=%ld ) %s ") \
		_T(" GROUP BY groupid, feetype,  name, unit, unitprice, insprice ") \
		_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
		_T(" ORDER BY groupid, name, unit, unitprice"), nInvoiceNo, nInvoiceNo, szWhere);
	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	nIndex = 0;
	CString szSubItem, szType;
	int nSubItem = 1;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CReportSection *grp;
	while(!grs.IsEOF()){
		grs.GetValue(_T("level"), nLevel);
		grs.GetValue(_T("id"), szParentGroup);
		grs.GetValue(_T("feeid"), szSubItem);
		szParentGroup.Trim();
		bool bAdd = false;
		rs.MoveFirst();
		while(!rs.IsEOF()){
			rs.GetValue(_T("groupid"), tmpStr);
			if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
				bAdd = true;
				break;
			}
			rs.MoveNext();
		}
		if(!bAdd)
		{
			grs.MoveNext();
			continue;
		}
		
		if(nLevel == 0)
		{
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			fee.szGroupID = _T("Type");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			nIndex = 0;
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			fee.szGroupID = _T("Group");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = dGroup1[5] = 0;
		}
		if(szSubItem == _T("Y")){
			nSubItem = 0;
//			rs.MoveFirst();
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("groupid"), szNewGroup);
				szNewGroup.Trim();
				if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
				{
					if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
							szOldGroup = szNewGroup;
							if(dGroup2[0] > 0 && nItem2 > 0){
								fee = feeList.GetAt(nOldItem);
								fee.nCost = dGroup2[0];
								fee.nDiscount = dGroup2[1];
								fee.nPatpaid = dGroup2[2];
								fee.nPatdebt = dGroup2[3];
								fee.nInsPaid = dGroup2[5];
								feeList.SetAt(nOldItem, fee);
							}
							szSQL.Format(_T("SELECT hfg_name as name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&m_db);
							rs2.ExecSQL(szSQL);
							fee.szGroupID = _T("SubGroup");
							fee.szID = _T("*");
							fee.szName = rs2.GetValue(_T("name"));
							nItem2 = feeList.Add(fee);
							nOldItem = nItem2;
							dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = dGroup2[5] = 0;
					}

					nSubItem++;
						rs.GetValue(_T("cost"), dAmount);
						dTotal[0] += dAmount;
						dGroup1[0] += dAmount;
						dGroup2[0] += dAmount;
						rs.GetValue(_T("discount"), dAmount);
						dTotal[1] += dAmount;
						dGroup1[1] += dAmount;
						dGroup2[1] += dAmount;
						rs.GetValue(_T("patpaid"), dAmount);
						dTotal[2] += dAmount;
						dGroup1[2] += dAmount;
						dGroup2[2] += dAmount;

						rs.GetValue(_T("patdebt"), dAmount);
						dTotal[3] += dAmount;
						dGroup1[3] += dAmount;
						dGroup2[3] += dAmount;
						rs.GetValue(_T("unpaid"), dAmount);
						dTotal[4] += dAmount;
						dGroup1[4] += dAmount;
						dGroup2[4] += dAmount;

						rs.GetValue(_T("inspaid"), dAmount);
						dTotal[5] += dAmount;
						dGroup1[5] += dAmount;
						dGroup2[5] += dAmount;

						fee.szGroupID = _T("Item");
						fee.szID.Empty();
						fee.szName = rs.GetValue(_T("name"));
						fee.szUnit = rs.GetValue(_T("unit"));
						fee.nQuantity = ToLong(rs.GetValue(_T("qty")));
						fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
						
						fee.nInsPrice = ToDouble(rs.GetValue(_T("insprice")));
						fee.nCost = ToDouble(rs.GetValue(_T("cost")));
						fee.nInsPaid = ToDouble(rs.GetValue(_T("inspaid")));
						if(fee.nInsPaid <= 0)
							fee.nInsPrice = 0;

						fee.nPatpaid = ToDouble(rs.GetValue(_T("patpaid")));
						fee.nDiscount = ToDouble(rs.GetValue(_T("discount")));
						feeList.Add(fee);
				}
				else
					break;
				rs.MoveNext();
			}
			if(dGroup1[0] > 0 && nItem > 0)
			{
				if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
					fee = feeList.GetAt(nOldItem);
					fee.nCost = dGroup2[0];
					fee.nDiscount = dGroup2[1];
					fee.nPatpaid = dGroup2[2];
					fee.nInsPaid = dGroup2[5];
					feeList.SetAt(nOldItem, fee);
				}
				dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = dGroup2[5] = 0;
				nItem2 = 0;
				fee = feeList.GetAt(nItem);
				fee.szGroupID = _T("SubAmount");
				TranslateString(_T("Sub Amount"), fee.szName);
				fee.nCost = dGroup1[0];
				fee.nDiscount = dGroup1[1];
				fee.nPatpaid = dGroup1[2];
				fee.nInsPaid = dGroup1[5];
				nItem = feeList.Add(fee);
				dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] =  dGroup1[5] = 0;
			}
		}
		grs.MoveNext();
	
	}

	if(dTotal[0] > 0){
			TranslateString(_T("Total Amount"), tmpStr);
			fee.szGroupID = _T("TotalAmount");
			fee.szName = tmpStr;
			fee.nCost = dTotal[0];
			fee.nDiscount = dTotal[1];
			fee.nPatpaid = dTotal[2];
			fee.nInsPaid = dTotal[5];
			feeList.Add(fee);
	}
	

	for (int i =0; i < feeList.GetCount(); i++){
		fee = feeList[i];
		szType = fee.szGroupID;

			if(szType == _T("Type"))
			{
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				tmpStr = fee.szID;
				rptDetail->SetValue(_T("TypeID"), tmpStr);
				StringUpper(fee.szName, tmpStr);
				rptDetail->SetValue(_T("TypeName"), tmpStr);
			}
			else if(szType == _T("Group")){
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("TypeID"), fee.szID);
				rptDetail->SetValue(_T("TypeName"), fee.szName);
			}
			else if(szType == _T("SubGroup")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("SubGroupID"), fee.szID);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsPaid"), tmpStr);

			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsPaid"), tmpStr);

			}
			else if(szType == _T("Item")){
				rptDetail = rpt.AddDetail();
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				FormatCurrency(fee.nInsPrice, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);

				
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalInsPaid"), tmpStr);
				

			}
	}

	
		//Report Footer

	rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);

	FormatCurrency(dTotal[0], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	CString szSumInWord;
	tmpStr.Format(_T("%.2f"), dTotal[0]);
	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng");
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
	FormatCurrency(dTotal[1], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
	FormatCurrency(dTotal[2], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);
	
	FormatCurrency(nTotalAdvance, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Advance"), tmpStr);
	FormatCurrency(nTotalFree, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Discount"), tmpStr);
	CString szAmount;
	if(nTotalRefund > 0)
	{
		TranslateString(_T("Repayable"), szDesc);
		FormatCurrency(nTotalRefund, szAmount);
			tmpStr.Format(_T("%s: %s"), szDesc, szAmount);
	}
	else
	{
		TranslateString(_T("Receivable"), szDesc);
		FormatCurrency(nTotalAdvPayable, szAmount);
			tmpStr.Format(_T("%s: %s"), szDesc, szAmount);
	}
	rpt.GetReportFooter()->SetValue(_T("Payable"), tmpStr);


	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_printed=hfi_printed+1 WHERE hfi_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);
	rpt.PrintPreview();
	//rpt.Print();

}

//In Phieu thanh toan ra vien
void	CMainFrame::PrintDischargePayment(CString szDeptID, bool bGeneralCost){
	CReport rpt;
	CString tmpStr, szSQL, szObjectType, szWhere;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	long	nDocumentNo;
	long	nInvoiceNo;


	if(m_nRefIndex == 0){
		szSQL.Format(_T("SELECT hd_status  as status FROM hms_doc WHERE hd_docno=%ld "), m_nDocumentNo);
	}
	else
	{
		szSQL.Format(_T("SELECT htr_status as status FROM hms_treatment_record WHERE htr_docno=%ld and htr_deptid='%s'  "), m_nDocumentNo, szDeptID);
	}
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;


	CString szStatus;
	rs.GetValue(_T("status"), szStatus);
	if(szStatus != _T("T") && szStatus != _T("A")){
		ShowMessageBox(_T("This document not end. Can not print it"), MB_OK);
		return;
	}

	if(!bGeneralCost)
	{
		szSQL.Format(_T("SELECT max(hfi_invoiceno) as invoiceno FROM hms_fee_invoice WHERE hfi_docno=%ld and hfi_deptid='%s' and hfi_type='P' "), m_nDocumentNo, szDeptID);
		rs.ExecSQL(szSQL);
		nInvoiceNo = rs.GetDoubleValue();

		szWhere.AppendFormat(_T(" and hfi_invoiceno=%ld"), nInvoiceNo);
		szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text)) as ethnicdesc, ") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hd_result) as result, ")
				_T(" 	date(hd_admitdate) as examdate,") \
				_T(" 	date(hd_enddate) as enddate,") \
				_T(" 	date(hcr_admitdate) as admitdate,") \
				_T(" 	date(hcr_dischargedate) as dischargedate,") \
				_T(" 	hcr_mainicd as mainicd ,") \
				_T(" 	hcr_maindisease as maindisease ,") \
				_T("	hcr_treatdoctor as treatdoctor, ") \
				_T("	hcr_reldisease as ireldisease,") \
				_T(" (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hcr_result) as iresult, ")
				_T("	(select ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T(" 	hfi_deptid as deptid,") \
				_T(" 	hfi_depts as depts,") \
				_T(" 	hfi_bookno as bookno,") \
				_T(" 	hfi_serialno as serialno,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_recvdate as recvdate, ") \
				_T(" 	hfi_receiver as receiver,") \
				_T(" 	hfi_desc as reason, ") \
				_T(" 	hfi_cost as cost,") \
				_T(" 	hfi_discount as discount,") \
				_T(" 	hfi_patpaid as patpaid") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfi_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfi_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hfi_docno=hcr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfi_docno=%ld %s "), m_nDocumentNo, szWhere);

	}
	else
	{
		szSQL.Format(_T("  SELECT distinct on(hd_docno) hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text) ) as ethnicdesc, ") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hd_result) as result, ")
				_T(" 	date(hd_admitdate) as examdate,") \
				_T(" 	date(hd_enddate) as enddate,") \
				_T(" 	date(htr_admitdate) as admitdate,") \
				_T(" 	date(htr_dischargedate) as dischargedate,") \
				_T(" 	hcr_mainicd as mainicd ,") \
				_T(" 	hcr_maindisease as maindisease ,") \
				_T("	hcr_treatdoctor as treatdoctor, ") \
				_T("	hcr_reldisease as ireldisease, ") \
				_T("	'' as iresult, ")
				_T("	(select ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T(" 	hfi_deptid as deptid,") \
				_T(" 	hfi_depts as depts,") \
				_T(" 	hfi_bookno as bookno,") \
				_T(" 	hfi_serialno as serialno,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_recvdate as recvdate, ") \
				_T(" 	hfi_receiver as receiver,") \
				_T(" 	hfi_desc as reason, ") \
				_T(" 	hfi_cost as cost,") \
				_T(" 	hfi_discount as discount,") \
				_T(" 	hfi_patpaid as patpaid") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfi_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfi_docno)") \
				_T(" LEFT JOIN hms_treatment_record ON(hfi_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfi_docno=%ld and htr_deptid='%s' "), m_nDocumentNo, szDeptID);		
	}

	
	//_fmsg(_T("%s"), szSQL);	
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	
	rs.GetValue(_T("objecttype"), tmpStr);

	if(tmpStr == _T("I") || tmpStr == _T("C"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_DISCHARGEPAYMENT.RPT")) )

			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_DISCHARGEPAYMENT.RPT")) )
			return;
	}

	//Report Header
	tmpStr.Empty();
	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("serialno")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);


	CString szDate;	
	tmpStr = GetSysDateTime();
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);

	
	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), tmpStr);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);
	rs.GetValue(_T("workplace"), tmpStr);
	if(tmpStr.IsEmpty())
		rs.GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);

	rs.GetValue(_T("depts"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("Department"), GetDepartments(tmpStr));	
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("admitdate"), tmpStr);
	if(tmpStr.IsEmpty())
	{
		rs.GetValue(_T("examdate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("admitdate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("enddate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("admitdate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("dischargedate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	}
	rs.GetValue(_T("objecttype"), szObjectType);
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	rs.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);
		
	if(m_nInpatient == 0)
	{
		rs.GetValue(_T("diagnostic"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
		rs.GetValue(_T("reldisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);
		rs.GetValue(_T("result"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);
	}
	else
	{
		rs.GetValue(_T("maindisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
		rs.GetValue(_T("ireldisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
		rs.GetValue(_T("mainicd"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);
		rs.GetValue(_T("iresult"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);
	}
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));

	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("ReceiveDate"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	
	if(m_nInpatient == 0)
		rs.GetValue(_T("doctor"), tmpStr);
	else
		rs.GetValue(_T("treatdoctor"), tmpStr);
	
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}	
	tmpStr.Empty();
	rs.GetValue(_T("receiver"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy"), GetDoctorName(tmpStr));
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetHBITMAP(GetSignatureImage(tmpStr));
		img2->SetFixedHeight(false);
	}	


	CReportSection* rptDetail = rpt.GetDetail(0); 
	CRecord grs(&m_db);
	CString szFeeID, szID;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	int nCount = 0, nIndex, nChapterID=0;
	double dTotal[5];
	double dGroup1[5];
	double dGroup2[5];
	double dAmount = 0;
	int nItem=0, nOldItem=0, nItem2=0;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	CString szNewGroup, szOldGroup, szParentGroup;
	for (int i =0; i < 5; i++){
		dTotal[i] = 0;
		dGroup1[i] = 0;
		dGroup2[i] = 0;
	}
	
	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_index, hfg_id "));
	grs.ExecSQL(szSQL);

	

	if(szObjectType == _T("I") || szObjectType == _T("C") || szObjectType == _T("D"))
	{	
		szSQL.Format(_T(" SELECT") \
			_T("		hfe_type as feetype, ") \
			_T(" 		rtrim(hfe_group,'0') as groupid,") \
			_T(" 		hfe_itemid as itemid,") \
			_T(" 		hfe_desc as name,") \
			_T(" 		hfe_unit as unit,") \
			_T(" 		sum(hfe_qty) as qty,") \
			_T(" 		hfe_unitprice as unitprice,") \
			_T(" 		sum(hfe_cost) as cost,") \
			_T(" 		sum(hfe_discount) as discount,") \
			_T(" 		sum(hfe_patpaid) as patpaid,") \
			_T(" 		sum(hfe_patdebt) as patdebt,") \
			_T(" 		sum(hfe_patdebt) as unpaid") \
			_T(" FROM hmsv_fee") \
			_T(" WHERE hfe_docno=%ld AND hfe_iaccept='Y' and hfe_discount > 0 and hfe_insinvoice=%ld  and hfe_type<>'E' ") \
			_T(" GROUP BY groupid, feetype, itemid, name, unit, unitprice") \
			_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
			_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo);
	}
	else
	{
		if(!bGeneralCost)
		{
			szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		rtrim(hfe_group,'0') as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_qty) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_patpaid) as patpaid,") \
				_T(" 		sum(hfe_patdebt) as patdebt,") \
				_T(" 		sum(hfe_patdebt) as unpaid") \
				_T(" FROM hmsv_fee") \
				_T(" WHERE hfe_docno=%ld and hfe_insinvoice=%ld and hfe_iaccept='Y' AND hfe_type<>'E' ") \
				_T(" GROUP BY groupid, feetype,  itemid, name, unit, unitprice") \
				_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
				_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo);
		}
		else
		{
			szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		rtrim(hfe_group,'0') as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_qty) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_patpaid) as patpaid,") \
				_T(" 		sum(hfe_patdebt) as patdebt,") \
				_T(" 		sum(hfe_patdebt) as unpaid") \
				_T(" FROM hmsv_fee") \
				_T(" WHERE hfe_docno=%ld and hfe_deptid='%s'  AND hfe_type<>'E' ") \
				_T(" GROUP BY groupid, feetype,  itemid, name, unit, unitprice") \
				_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
				_T(" ORDER BY groupid, name, unit, unitprice"), nDocumentNo, szDeptID);
		}
//_fmsg(_T("%s"), szSQL);

	}
	rs.ExecSQL(szSQL);

	nIndex = 0;
	CString szSubItem, szType;
	int nSubItem = 1;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CReportSection *grp;
	while(!grs.IsEOF()){
		grs.GetValue(_T("level"), nLevel);
		grs.GetValue(_T("id"), szParentGroup);
		grs.GetValue(_T("feeid"), szSubItem);
		szParentGroup.Trim();
		bool bAdd = false;
		rs.MoveFirst();
		while(!rs.IsEOF()){
			rs.GetValue(_T("groupid"), tmpStr);
			if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
				bAdd = true;
				break;
			}
			rs.MoveNext();
		}
		if(!bAdd)
		{
			grs.MoveNext();
			continue;
		}
		
		if(nLevel == 0)
		{
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			fee.szGroupID = _T("Type");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			nIndex = 0;
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			fee.szGroupID = _T("Group");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
		}
		if(szSubItem == _T("Y")){
			nSubItem = 0;
//			rs.MoveFirst();
			while(!rs.IsEOF())
			{
				rs.GetValue(_T("groupid"), szNewGroup);
				szNewGroup.Trim();
				if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
				{
					if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
							szOldGroup = szNewGroup;
							if(dGroup2[0] > 0 && nItem2 > 0){
								fee = feeList.GetAt(nOldItem);
								fee.nCost = dGroup2[0];
								fee.nDiscount = dGroup2[1];
								fee.nPatpaid = dGroup2[2];
								fee.nPatdebt = dGroup2[3];
								feeList.SetAt(nOldItem, fee);
							}
							szSQL.Format(_T("SELECT hfg_name as name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&m_db);
							rs2.ExecSQL(szSQL);
							fee.szGroupID = _T("SubGroup");
							fee.szID = _T("*");
							fee.szName = rs2.GetValue(_T("name"));
							nItem2 = feeList.Add(fee);
							nOldItem = nItem2;
							dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
					}

					nSubItem++;
						rs.GetValue(_T("cost"), dAmount);
						dTotal[0] += dAmount;
						dGroup1[0] += dAmount;
						dGroup2[0] += dAmount;
						rs.GetValue(_T("discount"), dAmount);
						dTotal[1] += dAmount;
						dGroup1[1] += dAmount;
						dGroup2[1] += dAmount;
						rs.GetValue(_T("patpaid"), dAmount);
						dTotal[2] += dAmount;
						dGroup1[2] += dAmount;
						dGroup2[2] += dAmount;

						rs.GetValue(_T("patdebt"), dAmount);
						dTotal[3] += dAmount;
						dGroup1[3] += dAmount;
						dGroup2[3] += dAmount;
						rs.GetValue(_T("unpaid"), dAmount);
						dTotal[4] += dAmount;
						dGroup1[4] += dAmount;
						dGroup2[4] += dAmount;
						fee.szGroupID = _T("Item");
						fee.szID.Empty();
						fee.szName = rs.GetValue(_T("name"));
						fee.szUnit = rs.GetValue(_T("unit"));
						fee.nQuantity = ToLong(rs.GetValue(_T("qty")));
						fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
						fee.nCost = ToDouble(rs.GetValue(_T("cost")));
						fee.nPatpaid = ToDouble(rs.GetValue(_T("patpaid")));
						fee.nDiscount = ToDouble(rs.GetValue(_T("discount")));
						feeList.Add(fee);

						if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
							CString szItemID;
							rs.GetValue(_T("itemid"), szItemID);
							szSQL.Format(_T(" SELECT 	hpol_name as name, ") \
							_T(" 	hpol_unit as unit, ") \
							_T(" 	hpol_unitprice as price, ") \
							_T(" 	sum(hpol_orderqty) as qty, ") \
							_T(" 	sum(hpol_orderqty*hpol_unitprice) as amount ") \
							_T(" FROM hms_pharmacyorder") \
							_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
							_T(" WHERE 	hpo_docno=%ld and hpo_deptid='%s'") \
							_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' ) and hpo_type='M' and hpo_status<>'O'  ") \
							_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo,szDeptID, szItemID);
							rsl.ExecSQL(szSQL);
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("name"), tmpStr);
								fee.szGroupID = _T("SubItem");
								fee.szID.Empty();
								fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
								fee.szUnit = rsl.GetValue(_T("unit"));
								fee.nQuantity = ToLong(rsl.GetValue(_T("qty")));
								fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
								fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
								fee.nPatpaid = 0;
								fee.nDiscount = ToDouble(rsl.GetValue(_T("amount")));
								feeList.Add(fee);
								rsl.MoveNext();
							}
						}

				}
				else
					break;
				rs.MoveNext();
			}
			if(dGroup1[0] > 0 && nItem > 0)
			{
				if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
					fee = feeList.GetAt(nOldItem);
					fee.nCost = dGroup2[0];
					fee.nDiscount = dGroup2[1];
					fee.nPatpaid = dGroup2[2];
					feeList.SetAt(nOldItem, fee);
				}
				dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
				nItem2 = 0;
				fee = feeList.GetAt(nItem);
				fee.szGroupID = _T("SubAmount");
				TranslateString(_T("Sub Amount"), fee.szName);
				fee.nCost = dGroup1[0];
				fee.nDiscount = dGroup1[1];
				fee.nPatpaid = dGroup1[2];
				nItem = feeList.Add(fee);
				dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
			}
		}
		grs.MoveNext();
	
	}

	if(dTotal[0] > 0){
			TranslateString(_T("Total Amount"), tmpStr);
			fee.szGroupID = _T("TotalAmount");
			fee.szName = tmpStr;
			fee.nCost = dTotal[0];
			fee.nDiscount = dTotal[1];
			fee.nPatpaid = dTotal[2];
			feeList.Add(fee);
	}
	

	for (int i =0; i < feeList.GetCount(); i++){
		fee = feeList[i];
		szType = fee.szGroupID;

			if(szType == _T("Type"))
			{
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				tmpStr = fee.szID;
				rptDetail->SetValue(_T("TypeID"), tmpStr);
				StringUpper(fee.szName, tmpStr);
				rptDetail->SetValue(_T("TypeName"), tmpStr);
			}
			else if(szType == _T("Group")){
				grp = rpt.GetGroupHeader(1);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("TypeID"), fee.szID);
				rptDetail->SetValue(_T("TypeName"), fee.szName);
			}
			else if(szType == _T("SubGroup")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("SubGroupID"), fee.szID);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

			}
			else if(szType == _T("Item")){
				rptDetail = rpt.AddDetail();
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);
			}
			else if(szType == _T("SubItem")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj;
				rptDetail->GetItem(_T("1"))->SetItalic(true);
				rptDetail->GetItem(_T("2"))->SetItalic(true);
				rptDetail->GetItem(_T("3"))->SetItalic(true);
				rptDetail->GetItem(_T("4"))->SetItalic(true);
				rptDetail->GetItem(_T("5"))->SetItalic(true);
				rptDetail->GetItem(_T("6"))->SetItalic(true);
				obj = rptDetail->GetItem(_T("7"));
				if(obj)obj->SetItalic(true);
				obj = rptDetail->GetItem(_T("8"));
				if(obj)obj->SetItalic(true);

				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				FormatCurrency(fee.nPatpaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
			}
	}

	
		//Report Footer
	FormatCurrency(dTotal[0], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	CString szSumInWord;
	tmpStr.Format(_T("%.2f"), dTotal[0]);
	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
	FormatCurrency(dTotal[1], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
	FormatCurrency(dTotal[0]-dTotal[1], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);

	szSQL.Format(_T(" SELECT 	date(hfi_recvdate) as recvdate, ") \
_T(" 	hfi_receiver as receiveby, ") \
_T(" 	hfi_desc as desc, hfi_type as feetype, ") \
_T(" 	case when hfi_type='A' then hfi_patpaid ") \
_T(" 	when hfi_type='D' then hfi_discount ") \
_T(" 	when hfi_type='R' then hfi_cost else 0 end as amount") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfi_docno=%ld and hfi_deptid='%s' and hfi_type in('A','D')") \
_T(" ORDER BY hfi_invoiceno;"), m_nDocumentNo, szDeptID);
	rs.ExecSQL(szSQL);
	
	CString szDesc;
	double nAdvance=0, nDiscount=0;
	while(!rs.IsEOF()){
		
		grp = rpt.GetGroupHeader(2);
		rptDetail = rpt.AddDetail(grp);

		szDesc.Format(_T("[%s] %s (%s)"), 
			CDate::Convert(rs.GetValue(_T("recvdate")), yyyymmdd, ddmmyyyy), 
				rs.GetValue(_T("desc")), 
				GetDoctorName(rs.GetValue(_T("receiveby"))));

		rptDetail->SetValue(_T("SubGroupName"), szDesc);
		rs.GetValue(_T("amount"), tmpStr);
		rs.GetValue(_T("feetype"), szType);
		if(szType == _T("A"))
			nAdvance += ToDouble(tmpStr);
		else
			nDiscount += ToDouble(tmpStr);
		rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
		rs.MoveNext();
	}

	FormatCurrency(nAdvance, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Advance"), tmpStr);
	FormatCurrency(nDiscount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Discount"), tmpStr);

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_printed=hfi_printed+1 WHERE hfi_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);

//	rpt.Print();
	rpt.PrintPreview();
	
}

struct PaymentInfo{
			CString deptid;
			CString admitdate;
			CString dischargedate;
			CString mainicd;
			CString maindisease;
		};

void	CMainFrame::PrintDischargePaymentFromInvoice(long nInvoiceNo, bool bDetailForDept)
{

	CReport rpt;
	CString tmpStr, szSQL, szWhere, szAdmitDate, szEndDate,szDepartments;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	int		nDeskNo=0;
	long	nDocumentNo;
	bool	bDetailFee = bDetailForDept;
	CString szRecvDate;
	CString	szObjectType;
	CString	szDescription;
	
	double	nTotalCost=0,				//Tong chi phi
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatpaid =0,			//Tong benh nhan tra
			nTotalDifferenceCost = 0,	//Tong so tra chenh lech
			nTotalDeposit = 0,			//Tong tam ung
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0;			//So tien tra tu tam ung
	double	nGroup1Cost=0,				//Tong chi phi
			nGroup1Discount = 0,			//Tong Mien giam
			nGroup1Patpaid =0;			//Tong benh nhan tra
	double	nGroup2Cost=0,				//Tong chi phi
			nGroup2Discount = 0,			//Tong Mien giam
			nGroup2Patpaid =0;			//Tong benh nhan tra
	double	nCost=0, nDiscount=0, nPatpaid=0;
	double	nTotalAmount=0, nTotalInspaid=0, nTotalDifpaid=0;

			


	if(m_szPaymentMethod == _T("G")){
		bDetailFee = true;
	}
	else
		bDetailFee = false;


	szSQL.Format(_T("  SELECT distinct on(hd_docno) hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T("	date_part('year', hp_birthdate) as yearofbirth, ") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text)) as ethnicdesc, ") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" 	hd_xobject as xobject, ") \
				_T(" 	hd_xcardno as xcardno, ") \
				_T(" 	hd_xissuedate as xissuedate, ") \
				_T(" 	hd_emergency as emergency, ") \
				_T(" (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hd_result) as result, ")
				_T(" 	hd_admitdate as examdate,") \
				_T(" 	hd_enddate as enddate,") \
				_T(" 	hcr_admitdate as admitdate,") \
				_T(" 	hcr_dischargedate as dischargedate,") \
				_T("	date(hcr_dischargedate)+1 - date(hcr_admitdate) as Numbertreat, ") \
				_T(" 	hcr_mainicd as mainicd ,") \
				_T(" 	hcr_maindisease as maindisease ,") \
				_T("	hcr_treatdoctor as treatdoctor, ") \
				_T("	hcr_reldisease as ireldisease,") \
				_T("	hcr_suggestion as isuggestion,") \
				_T("	hd_suggestion as esuggestion,") \
				_T("	(select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hcr_result)  as iresult, ")
				_T("	(select ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hd_disrate as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T(" 	hfi_deptid as deptid,") \
				_T(" 	hfi_depts as depts,") \
				_T(" 	hfi_bookno as bookno,") \
				_T(" 	hfi_deskno as deskno,") \
				_T(" 	hfi_serialno as serialno,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_recvdate as recvdate, ") \
				_T(" 	hfi_receiver as receiver,") \
				_T(" 	hfi_desc as reason, ") \
				_T(" 	hfi_cost as cost,") \
				_T(" 	hfi_discount as discount,") \
				_T(" 	hfi_patpaid as patpaid, ") \
				_T(" 	hfi_advanceamt as deposit_amount, ") \
				_T(" 	hfi_advpayment as deposit_payable, ") \
				_T(" 	hfi_refundamt as refund_amount, ") \
				_T(" 	hfi_free as free_amount ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfi_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfi_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfi_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfi_docno=%ld and hfi_invoiceno=%ld "), m_nDocumentNo, nInvoiceNo);
	
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatpaid);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("deposit_payable"), nDepositPayable);
	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);


	rs.GetValue(_T("objecttype"), szObjectType);

	if(szObjectType == _T("I") || szObjectType == _T("C"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSDISCHARGEPAYMENT.RPT"), true) )
			return;
	}
	else if(szObjectType == _T("D"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_FREEDISCHARGEPAYMENT.RPT"), true) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_DISCHARGEPAYMENT.RPT"), true) )
			return;
	}

	//Report Header
	tmpStr.Empty();
	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("serialno")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
	rpt.GetReportHeader()->SetValue(_T("ReceiptNo"), tmpStr);
	tmpStr.Format(_T("%ld"), nInvoiceNo);
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);


	CString szDate;
	tmpStr = GetSysDateTime();
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);

	//rs.GetValue(_T("pname"), tmpStr);
	CString szPatientName;
	StringUpper(rs.GetValue(_T("pname")), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);

	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);

	CString szAddress;
	rs.GetValue(_T("detailaddress"), tmpStr);
	szAddress = tmpStr;
	rs.GetValue(_T("address"), tmpStr);
	if(!szAddress.IsEmpty())
		szAddress += _T(" - ");
	szAddress += tmpStr;
	rpt.GetReportHeader()->SetValue(_T("Address"), szAddress);
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	
	rs.GetValue(_T("objecttype"), szObjectType);
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	rs.GetValue(_T("disrate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), tmpStr);
	rs.GetValue(_T("insline"), tmpStr);
	if(tmpStr == _T("Y")){
		TranslateString(_T("Outline"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InsLine"), tmpStr);
	}
	else
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));

	rs.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);
	rs.GetValue(_T("regcode"), tmpStr);	
	rpt.GetReportHeader()->SetValue(_T("RegCode"), tmpStr);
	CReportItem *obj = rpt.GetReportHeader()->GetItem(_T("InsuranceCompany"));
	if(obj){
		CString szRegCode, insname;
		CRecord rsx(&m_db);
		rs.GetValue(_T("regcode"), szRegCode);
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);
		}

	}

	rs.GetValue(_T("xobject"), tmpStr);
	if(m_szPrintHemaReceipt == _T("Y") && tmpStr == _T("H")){
		rpt.GetReportHeader()->SetValue(_T("Hema"), _T("HEMA"));
	}	
	rs.GetValue(_T("xcardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("xcardno"), tmpStr);
	rs.GetValue(_T("xissuedate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("xissuedate"), CDate::Convert(tmpStr));


	rs.GetValue(_T("emergency"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Emergency"), tmpStr);

	if(m_nInpatient == 0)
	{
		rs.GetValue(_T("diagnostic"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
		rs.GetValue(_T("reldisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);
		rs.GetValue(_T("result"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);
		rs.GetValue(_T("esuggestion"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Suggestion"), GetSelectionString(_T("hms_suggestion"), tmpStr));
	}
	else
	{
		rs.GetValue(_T("maindisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
		rs.GetValue(_T("ireldisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
		rs.GetValue(_T("mainicd"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);
		rs.GetValue(_T("iresult"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);
		rs.GetValue(_T("isuggestion"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Suggestion"), GetSelectionString(_T("hms_suggestion"), tmpStr));
	}

	rs.GetValue(_T("admitdate"), tmpStr);
	
	CString szDischargeDate;
	
	if(tmpStr.IsEmpty())
	{		
		rs.GetValue(_T("examdate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));		
		rs.GetValue(_T("enddate"), tmpStr);
		szDischargeDate = tmpStr;
		rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		
		rs.GetValue(_T("depts"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Department"), GetDepartments(tmpStr));	
	}
	else
	{		
		rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		rs.GetValue(_T("dischargedate"), tmpStr);
		szDischargeDate = tmpStr;
		rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));

		
		CString szSQL2, icd10, maindisease;
		CRecord rsd(&m_db);

		// Lay thong ti ve phong va giuong
		szSQL2.Format(_T(" select (select hrl_name from hms_roomlist where hrl_id=hb_roomid and hrl_deptid=hb_deptid) as roomname, ") \
					_T(" (select hbl_name from hms_bedlist where hbl_deptid=hb_deptid and hbl_roomid=hb_roomid and hbl_id=hb_bedid) as bedname ") \
					_T(" from hms_bed where hb_docno =%ld order by hb_idx DESC "), nDocumentNo);
		
		rsd.ExecSQL(szSQL2);
		if(!rsd.IsEOF())
		{	
			rsd.GetValue(_T("roomname"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("roomname"), tmpStr);
			rsd.GetValue(_T("bedname"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("bedname"), tmpStr);
		}

		//Lay ra ta ca cac khoa theo thu tu

		rs.GetValue(_T("depts"), tmpStr);
		
		szSQL2.Format(_T(" SELECT hd_admitdept as deptid, hd_admitdate as admitdate, hd_enddate as enddate ") \
			_T(" FROM hms_doc ") \
			_T(" WHERE 	hd_docno=%ld ") \
			_T(" 	and '%s' like(chr(37)||hd_admitdept||chr(37))"), nDocumentNo, tmpStr);

		
		rsd.ExecSQL(szSQL2);
		
		if(!rsd.IsEOF())
		{					
			rsd.GetValue(_T("Admitdate"), tmpStr);
			szAdmitDate.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm,ddmmyyyy|hhmm));
			rsd.GetValue(_T("enddate"), tmpStr);
			szDischargeDate.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm,ddmmyyyy|hhmm));
			tmpStr.Format(_T("(%s-%s)"),szAdmitDate ,szDischargeDate);
			rsd.GetValue(_T("deptid"), szDepartments);			
			szDepartments += tmpStr + _T("->");			
		}		
		
		rs.GetValue(_T("depts"), tmpStr);

		szSQL2.Format(_T(" SELECT htr_deptid as deptid, htr_admitdate as admitdate, ") \
			_T(" htr_dischargedate as dischargedate, htr_mainicd as icd10, htr_maindisease as maindisease ") \
			_T(" FROM hms_treatment_record ") \
			_T(" WHERE 	htr_docno=%ld ") \
			_T(" 	and '%s' like(chr(37)||htr_deptid||chr(37))") \
			_T(" ORDER BY htr_idx"), nDocumentNo, tmpStr);
		
		
		rsd.ExecSQL(szSQL2);
		if(!rsd.IsEOF())
		{
			rsd.GetValue(_T("admitdate"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		}
		int nCountRow=0;
		while(!rsd.IsEOF()){
			nCountRow++;
			tmpStr.Format(_T("%s"), rsd.GetValue(_T("deptid")));
			szDepartments += tmpStr;
			rsd.GetValue(_T("Admitdate"), tmpStr);
			szAdmitDate.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm,ddmmyyyy|hhmm));
			rsd.GetValue(_T("dischargedate"), tmpStr);
			szDischargeDate.Format(_T("%s"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm,ddmmyyyy|hhmm));
			tmpStr.Format(_T("(%s-%s)"),szAdmitDate ,szDischargeDate );
			if(!szDepartments.IsEmpty()){
				szDepartments += tmpStr;
				if (nCountRow < rsd.GetRecordCount()) szDepartments += _T("->");
			}
			rsd.GetValue(_T("icd10"), icd10);
			rsd.GetValue(_T("maindisease"), maindisease);
			rsd.MoveNext();
		}		
		
		rpt.GetReportHeader()->SetValue(_T("Department"), szDepartments);
		rs.GetValue(_T("maindisease"), maindisease);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), maindisease);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), icd10);
		rs.GetValue(_T("Numbertreat"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Numbertreat"), tmpStr);
	}
	


	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));
	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);
	rpt.GetReportFooter()->SetValue(_T("ReceiveDate"), CDateTime::Convert(szRecvDate,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	
	if(m_nInpatient == 0)
		rs.GetValue(_T("doctor"), tmpStr);
	else
		rs.GetValue(_T("treatdoctor"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("Doctor"), GetDoctorName(tmpStr));

	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}	
	tmpStr.Empty();
	rs.GetValue(_T("receiver"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy"), GetDoctorName(tmpStr));
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetHBITMAP(GetSignatureImage(tmpStr));
		img2->SetFixedHeight(false);
	}	


	CReportSection* rptDetail=NULL;
	CReportSection *grp;
	CRecord grs(&m_db);
	CString szFeeID, szID;
	CString szSubItem, szType;

	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};

	if(bDetailFee){

		CRecord drs(&m_db);
		CString szDeptID;
		
		CArray<PaymentInfo, PaymentInfo& > payInfo;

		szSQL.Format(_T("SELECT deptid, admitdate, dischargedate, mainicd, maindisease ") \
		_T("FROM (select htr_deptid as deptid, htr_admitdate as admitdate, htr_dischargedate as dischargedate, htr_mainicd as mainicd, htr_maindisease as maindisease, htr_idx as idx ") \
		_T(" from hms_treatment_record ") \
		_T(" where htr_docno=%ld ") \
		_T("union all select hd_admitdept, hd_admitdate, hd_enddate, hd_icd, hd_diagnostic, 0 from hms_doc where hd_docno=%ld ") \
		_T(") as tbl ") \
		_T(" where deptid in(select distinct hfe_deptid from hmsv_fee where hfe_invoiceno=%ld)") \
		_T(" order by idx "), nDocumentNo, nDocumentNo, nInvoiceNo);

		drs.ExecSQL(szSQL);

		PaymentInfo pi;
		CString szDepts;
		szDepts.Empty();

		while(!drs.IsEOF()){
			drs.GetValue(_T("deptid"), tmpStr);
			
			bool bFound = false;
			for (int i =0; i < payInfo.GetCount(); i++){
				pi = payInfo[i];
				if(pi.deptid == tmpStr)
				{
					bFound = true;
					break;
				}
			}
			pi.deptid = tmpStr;
			if(!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("%s"), GetDepartmentName(tmpStr));

			drs.GetValue(_T("dischargedate"), pi.dischargedate);
			drs.GetValue(_T("mainicd"), pi.mainicd);
			drs.GetValue(_T("maindisease"), pi.maindisease);
			if(bFound){
				payInfo.SetAt(i, pi);
			}
			else
			{
				drs.GetValue(_T("admitdate"), pi.admitdate);
				payInfo.Add(pi);
			}
			drs.MoveNext();
		}

		rpt.GetReportHeader()->SetValue(_T("Department"), szDepts);	

		for (int n = 0; n < payInfo.GetCount(); n++){
			pi = payInfo[n];
			szDeptID = pi.deptid;
			if(n == 0){
//				rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(pi.admitdate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
			}
			if(CompareDate(szDischargeDate, pi.dischargedate) < 0){
//				rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(pi.dischargedate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
			}
			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("TypeID"), _T("*"));
			tmpStr.Format(_T("%s [%s - %s]"), 
				GetDepartmentName(szDeptID), 
				CDateTime::Convert(pi.admitdate, yyyymmdd|hhmm, ddmmyyyy|hhmm),
				CDateTime::Convert(pi.dischargedate, yyyymmdd|hhmm, ddmmyyyy|hhmm));

			CString szDesc;
			StringUpper(tmpStr, szDesc);
			rptDetail->SetValue(_T("TypeName"), szDesc);

			int nChapter=0;
		int nCount = 0, nIndex, nChapterID=0;
		int nItem=0, nOldItem=0, nItem2=0;
		int nLevel;
		bool bDeleteParent=false;
		bool bLoadItems = false;
		CString szNewGroup, szOldGroup, szParentGroup;
		
		nTotalAmount = nTotalInspaid = nTotalDifpaid = 0;
		nGroup1Cost = nGroup1Discount=nGroup1Patpaid = 0;
		nGroup2Cost = nGroup2Discount=nGroup2Patpaid = 0;		
		
		szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_index, hfg_id "));
		grs.ExecSQL(szSQL);

		

		if(szObjectType == _T("I") || szObjectType == _T("C") || szObjectType == _T("D"))
		{	
			if(m_szPrintAllCostInDischargePayment != _T("Y"))
				szWhere.Format(_T(" and (hfe_discount+hfe_difcost) > 0 "));

			szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		rtrim(hfe_group,'0') as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_qty) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_inspaid) as inspaid,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_patpaid + hfe_difpaid) as patpaid") \
				_T(" FROM hmsv_fee") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_deptid='%s' and hfe_itemid<>'D0000' %s ") \
				_T(" GROUP BY groupid, feetype, itemid, name, unit, unitprice") \
				_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
				_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szDeptID, szWhere);
		}
		else
		{
			szSQL.Format(_T(" SELECT") \
					_T("		hfe_type as feetype, ") \
					_T(" 		rtrim(hfe_group,'0') as groupid,") \
					_T(" 		hfe_itemid as itemid,") \
					_T(" 		hfe_desc as name,") \
					_T(" 		hfe_unit as unit,") \
					_T(" 		sum(hfe_qty) as qty,") \
					_T(" 		hfe_unitprice as unitprice,") \
					_T(" 		sum(hfe_cost) as cost,") \
					_T(" 		sum(hfe_discount) as discount,") \
					_T(" 		sum(hfe_patpaid + hfe_difpaid) as patpaid,") \
					_T(" 		sum(hfe_patdebt) as patdebt,") \
					_T(" 		sum(hfe_patdebt) as unpaid") \
					_T(" FROM hmsv_fee") \
					_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_deptid='%s' and hfe_itemid<>'D0000' ") \
					_T(" GROUP BY groupid, feetype,  itemid, name, unit, unitprice") \
					_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
					_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szDeptID);

		}
		rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
		nIndex = 0;
		CString szSubItem, szType;
		int nSubItem = 1;
		nChapterID = 0;
		CArray<FEEITEM, FEEITEM&> feeList;
		FEEITEM fee;
		while(!grs.IsEOF()){
			grs.GetValue(_T("level"), nLevel);
			grs.GetValue(_T("id"), szParentGroup);
			grs.GetValue(_T("feeid"), szSubItem);
			szParentGroup.Trim();
			bool bAdd = false;
			rs.MoveFirst();
			while(!rs.IsEOF()){
				rs.GetValue(_T("groupid"), tmpStr);
				if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
					bAdd = true;
					break;
				}
				rs.MoveNext();
			}
			if(!bAdd)
			{
				grs.MoveNext();
				continue;
			}
			
			if(nLevel == 0)
			{
				tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
				fee.szGroupID = _T("Type");
				fee.szID = tmpStr;
				fee.szName = grs.GetValue(_T("name"));
				nItem = feeList.Add(fee);
				nIndex = 0;
			}
			else
			{
				nIndex++;
				tmpStr.Format(_T("%d."), nIndex);
				fee.szGroupID = _T("Group");
				fee.szID = tmpStr;
				fee.szName = grs.GetValue(_T("name"));
				nItem = feeList.Add(fee);
				nGroup1Cost = nGroup1Discount=nGroup1Patpaid = 0;
			}
			if(szSubItem == _T("Y")){
				nSubItem = 0;
	//			rs.MoveFirst();
				while(!rs.IsEOF())
				{
					rs.GetValue(_T("groupid"), szNewGroup);
					szNewGroup.Trim();
					if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
								szOldGroup = szNewGroup;
								if(nGroup2Cost > 0 && nItem2 > 0){
									fee = feeList.GetAt(nOldItem);
									fee.nCost = nGroup2Cost;
									fee.nDiscount = nGroup2Discount;
									fee.nPatpaid = nGroup2Patpaid;
									feeList.SetAt(nOldItem, fee);
								}
								szSQL.Format(_T("SELECT hfg_name as name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
								CRecord rs2(&m_db);
								rs2.ExecSQL(szSQL);
								fee.szGroupID = _T("SubGroup");
								fee.szID = _T("*");
								fee.szName = rs2.GetValue(_T("name"));
								nItem2 = feeList.Add(fee);
								nOldItem = nItem2;
								nGroup2Cost = nGroup2Discount = nGroup2Patpaid = 0;
						}

						nSubItem++;
						nCost = nDiscount = nPatpaid = 0;
						rs.GetValue(_T("cost"), nCost);
						fee.nCost = nCost;
						nTotalAmount += nCost;
						nGroup1Cost += nCost;
						nGroup2Cost += nCost;
						
						fee.szGroupID = _T("Item");
						fee.szID.Empty();
						fee.szName = rs.GetValue(_T("name"));
						fee.szUnit = rs.GetValue(_T("unit"));
						fee.nQuantity = ToLong(rs.GetValue(_T("qty")));
						fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
						

						//Neu dung 
						if(m_szViewInsurancePaid == _T("Y")){
							//Neu la doi tuong mien giam
							if(m_szObjectType == _T("D"))
							{
								rs.GetValue(_T("discount"), nDiscount);
							}
							else
							{
								rs.GetValue(_T("inspaid"), nDiscount);
							}
						}
						else
						{
							rs.GetValue(_T("discount"), nDiscount);
						}
						fee.nDiscount = nDiscount;
						nPatpaid = nCost - nDiscount;
						fee.nPatpaid = nPatpaid;
						
						nTotalInspaid += nDiscount;
						nTotalDifpaid += nPatpaid;

						nGroup1Discount += nDiscount;
						nGroup2Discount += nDiscount;
						nGroup1Patpaid += nPatpaid;
						nGroup2Patpaid += nPatpaid;


						feeList.Add(fee);
							
						if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
								CString szItemID;
								rs.GetValue(_T("itemid"), szItemID);
								szSQL.Format(_T(" SELECT 	hpol_name as name, ") \
								_T(" 	hpol_unit as unit, ") \
								_T(" 	hpol_unitprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_unitprice) as amount ") \
								_T(" FROM hms_pharmacyorder") \
								_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld and hpo_deptid='%s'") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' ) and hpo_type='M' and hpo_status<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo,szDeptID, szItemID);
								rsl.ExecSQL(szSQL);
								double nTotalAmt =0;
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("name"), tmpStr);
									fee.szGroupID = _T("SubItem");
									fee.szID.Empty();
									fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
									fee.szUnit = rsl.GetValue(_T("unit"));
									fee.nQuantity = ToLong(rsl.GetValue(_T("qty")));
									fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
									fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
									nTotalAmt += fee.nCost;
									fee.nPatpaid = 0;
									fee.nDiscount = ToDouble(rsl.GetValue(_T("amount")));
									feeList.Add(fee);
									rsl.MoveNext();
								}
								if(nTotalAmt > 0){
									fee.szGroupID = _T("SubItemGroup");
									fee.szID.Empty();
									TranslateString(_T("Total"), tmpStr);
									fee.szName.Format(_T("   +   %s"), tmpStr);
									fee.szUnit.Empty();
									fee.nQuantity = 0;
									fee.nPrice = 0;
									fee.nCost = nTotalAmt;
									fee.nPatpaid = 0;
									fee.nDiscount = nTotalAmt;
									feeList.Add(fee);
								}
							}

					}
					else
						break;
					rs.MoveNext();
				}
				if(nGroup1Cost > 0 && nItem > 0)
				{
					if(nGroup2Cost > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
						fee = feeList.GetAt(nOldItem);
						fee.nCost = nGroup2Cost;
						fee.nDiscount = nGroup2Discount;
						fee.nPatpaid = nGroup2Patpaid;
						feeList.SetAt(nOldItem, fee);
					}
					nGroup2Cost = nGroup2Discount = nGroup2Patpaid = 0;
					nItem2 = 0;
					fee = feeList.GetAt(nItem);
					fee.szGroupID = _T("SubAmount");
					TranslateString(_T("Sub Amount"), fee.szName);
					fee.nCost = nGroup1Cost;
					fee.nDiscount = nGroup1Discount;
					fee.nPatpaid = nGroup1Patpaid;
					nItem = feeList.Add(fee);
					nGroup1Cost = nGroup1Discount = nGroup1Patpaid = 0;
				}
			}
			grs.MoveNext();
		
		}

		if(nTotalAmount > 0){
				TranslateString(_T("Total Amount"), tmpStr);
				fee.szGroupID = _T("TotalAmount");
				fee.szName = tmpStr;
				fee.nCost = nTotalAmount;
				fee.nDiscount = nTotalInspaid;
				fee.nPatpaid = nTotalDifpaid;
				feeList.Add(fee);
		}
		

		for (int i =0; i < feeList.GetCount(); i++){
			fee = feeList[i];
			szType = fee.szGroupID;

				if(szType == _T("Type"))
				{
					grp = rpt.GetGroupHeader(1);
					rptDetail = rpt.AddDetail(grp);
					tmpStr = fee.szID;
					rptDetail->SetValue(_T("TypeID"), tmpStr);
					StringUpper(fee.szName, tmpStr);
					rptDetail->SetValue(_T("TypeName"), tmpStr);
				}
				else if(szType == _T("Group")){
					grp = rpt.GetGroupHeader(1);
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("TypeID"), fee.szID);
					rptDetail->SetValue(_T("TypeName"), fee.szName);
				}
				else if(szType == _T("SubGroup")){
					grp = rpt.GetGroupHeader(2);
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("SubGroupID"), fee.szID);
					rptDetail->SetValue(_T("SubGroupName"), fee.szName);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
				}
				else if(szType == _T("SubAmount")){
					grp = rpt.GetGroupHeader(2);
					rptDetail = rpt.AddDetail(grp);
				//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
					rptDetail->SetValue(_T("SubGroupName"), fee.szName);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				}
				else if(szType == _T("Item")){
					rptDetail = rpt.AddDetail();
					rptDetail->SetValue(_T("1"), fee.szID);
					rptDetail->SetValue(_T("2"), fee.szName);
					rptDetail->SetValue(_T("3"), fee.szUnit);
					FormatCurrency(fee.nQuantity, tmpStr);
					rptDetail->SetValue(_T("4"), tmpStr);
					FormatCurrency(fee.nPrice, tmpStr);
					rptDetail->SetValue(_T("5"), tmpStr);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("8"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("6"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("7"), tmpStr);
				}
				else if(szType == _T("SubItem") || szType == _T("SubItemGroup")){
					rptDetail = rpt.AddDetail();
					CReportItem *obj;
					rptDetail->GetItem(_T("1"))->SetItalic(true);
					rptDetail->GetItem(_T("2"))->SetItalic(true);
					rptDetail->GetItem(_T("3"))->SetItalic(true);
					rptDetail->GetItem(_T("4"))->SetItalic(true);
					rptDetail->GetItem(_T("5"))->SetItalic(true);
					rptDetail->GetItem(_T("6"))->SetItalic(true);
					obj = rptDetail->GetItem(_T("7"));
					if(obj)obj->SetItalic(true);
					obj = rptDetail->GetItem(_T("8"));
					if(obj)obj->SetItalic(true);
					if(szType == _T("SubItemGroup")){
						rptDetail->GetItem(_T("2"))->SetBold(true);
						rptDetail->GetItem(_T("6"))->SetBold(true);
						rptDetail->GetItem(_T("7"))->SetBold(true);
						rptDetail->SetValue(_T("1"), _T(""));
						rptDetail->SetValue(_T("2"), fee.szName);
						rptDetail->SetValue(_T("3"), _T(""));
						rptDetail->SetValue(_T("4"), _T(""));
						rptDetail->SetValue(_T("5"), _T(""));
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("8"), tmpStr);
						FormatCurrency(fee.nDiscount, tmpStr);
						rptDetail->SetValue(_T("6"), tmpStr);
						rptDetail->SetValue(_T("7"), _T(""));
					}
					else
					{
						rptDetail->SetValue(_T("1"), fee.szID);
						rptDetail->SetValue(_T("2"), fee.szName);
						rptDetail->SetValue(_T("3"), fee.szUnit);
						FormatCurrency(fee.nQuantity, tmpStr);
						rptDetail->SetValue(_T("4"), tmpStr);
						FormatCurrency(fee.nPrice, tmpStr);
						rptDetail->SetValue(_T("5"), tmpStr);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("8"), tmpStr);
						FormatCurrency(fee.nDiscount, tmpStr);
						rptDetail->SetValue(_T("6"), tmpStr);
						FormatCurrency(fee.nPatpaid, tmpStr);
						rptDetail->SetValue(_T("7"), tmpStr);
					}
				}
				else if(szType == _T("TotalAmount")){
					grp = rpt.GetGroupHeader(3);
					rptDetail = rpt.AddDetail(grp);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("TotalAmount"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
				}
		}


			
		}
	}
	else
	{

		int nChapter=0;
		int nCount = 0, nIndex, nChapterID=0;
		int nItem=0, nOldItem=0, nItem2=0;
		int nLevel;
		bool bDeleteParent=false;
		bool bLoadItems = false;
		CString szNewGroup, szOldGroup, szParentGroup;

		nTotalAmount = nTotalInspaid = nTotalDifpaid = 0;
		nGroup1Cost = nGroup1Discount = nGroup1Patpaid = 0;
		nGroup2Cost = nGroup2Discount = nGroup2Patpaid = 0;
		
		szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_index, hfg_id "));
		grs.ExecSQL(szSQL);

		

		if(szObjectType == _T("I") || szObjectType == _T("C") || szObjectType == _T("D"))
		{	
			szWhere.Empty();
			if(m_szPrintAllCostInDischargePayment != _T("Y"))
				szWhere.Format(_T(" and (hfe_discount+hfe_difcost) > 0"));

			szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		rtrim(hfe_group,'0') as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_qty) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_inspaid) as inspaid,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_patpaid+hfe_difpaid) as patpaid,") \
				_T(" 		sum(hfe_patdebt) as patdebt,") \
				_T(" 		sum(hfe_patdebt) as unpaid") \
				_T(" FROM hmsv_fee") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld %s ") \
				_T(" GROUP BY groupid, feetype, itemid, name, unit, unitprice") \
				_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
				_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szWhere);
		}
		else
		{
			szSQL.Format(_T(" SELECT") \
					_T("		hfe_type as feetype, ") \
					_T(" 		rtrim(hfe_group,'0') as groupid,") \
					_T(" 		hfe_itemid as itemid,") \
					_T(" 		hfe_desc as name,") \
					_T(" 		hfe_unit as unit,") \
					_T(" 		sum(hfe_qty) as qty,") \
					_T(" 		hfe_unitprice as unitprice,") \
					_T(" 		sum(hfe_cost) as cost,") \
					_T(" 		sum(hfe_inspaid) as inspaid,") \
					_T(" 		sum(hfe_discount) as discount,") \
					_T(" 		sum(hfe_patpaid+hfe_difpaid) as patpaid,") \
					_T(" 		sum(hfe_patdebt) as patdebt,") \
					_T(" 		sum(hfe_patdebt) as unpaid") \
					_T(" FROM hmsv_fee") \
					_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld ") \
					_T(" GROUP BY groupid, feetype,  itemid, name, unit, unitprice") \
					_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
					_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo);

		}
		
		rs.ExecSQL(szSQL);

	//_fmsg(_T("%s"), szSQL);
	

		nIndex = 0;
		int nSubItem = 1;
		nChapterID = 0;
		CArray<FEEITEM, FEEITEM&> feeList;
		FEEITEM fee;
		
		while(!grs.IsEOF()){
			grs.GetValue(_T("level"), nLevel);
			grs.GetValue(_T("id"), szParentGroup);
			grs.GetValue(_T("feeid"), szSubItem);
			szParentGroup.Trim();
			bool bAdd = false;
			rs.MoveFirst();
			while(!rs.IsEOF()){
				rs.GetValue(_T("groupid"), tmpStr);
				if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
					bAdd = true;
					break;
				}
				rs.MoveNext();
			}
			if(!bAdd)
			{
				grs.MoveNext();
				continue;
			}
			
			if(nLevel == 0)
			{
				tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
				fee.szGroupID = _T("Type");
				fee.szID = tmpStr;
				fee.szName = grs.GetValue(_T("name"));
				nItem = feeList.Add(fee);
				nIndex = 0;
			}
			else
			{
				nIndex++;
				tmpStr.Format(_T("%d."), nIndex);
				fee.szGroupID = _T("Group");
				fee.szID = tmpStr;
				fee.szName = grs.GetValue(_T("name"));
				nItem = feeList.Add(fee);
				nGroup1Cost = nGroup1Discount = nGroup1Patpaid = 0;
			}
			if(szSubItem == _T("Y")){
				nSubItem = 0;
	//			rs.MoveFirst();
				while(!rs.IsEOF())
				{
					rs.GetValue(_T("groupid"), szNewGroup);
					szNewGroup.Trim();
					if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
								szOldGroup = szNewGroup;
								if(nGroup2Cost > 0 && nItem2 > 0){
									fee = feeList.GetAt(nOldItem);
									fee.nCost = nGroup2Cost;
									fee.nDiscount = nGroup2Discount;
									fee.nPatpaid = nGroup2Patpaid;
									feeList.SetAt(nOldItem, fee);
								}
								szSQL.Format(_T("SELECT hfg_name as name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
								CRecord rs2(&m_db);
								rs2.ExecSQL(szSQL);
								fee.szGroupID = _T("SubGroup");
								fee.szID = _T("*");
								fee.szName = rs2.GetValue(_T("name"));
								nItem2 = feeList.Add(fee);
								nOldItem = nItem2;
								nGroup2Cost = nGroup2Discount = nGroup2Patpaid = 0;
						}

						nSubItem++;
						nCost = nDiscount = nPatpaid = 0;
						rs.GetValue(_T("cost"), nCost);
						nTotalAmount += nCost;
						nGroup1Cost += nCost;
						nGroup2Cost += nCost;
						
						fee.szGroupID = _T("Item");
						fee.szID.Empty();
						fee.szName = rs.GetValue(_T("name"));
						fee.szUnit = rs.GetValue(_T("unit"));
						fee.nQuantity = ToLong(rs.GetValue(_T("qty")));
						fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
						fee.nCost = nCost;
						
						if(m_szViewInsurancePaid == _T("Y")){
							if(m_szObjectType == _T("D"))
							{
								rs.GetValue(_T("discount"), nDiscount);
							}
							else
							{
								rs.GetValue(_T("inspaid"), nDiscount);
							}
						}
						else
						{
							rs.GetValue(_T("discount"), nDiscount);
						}
						fee.nDiscount = nDiscount;
						nPatpaid = nCost-nDiscount;
						fee.nPatpaid = nPatpaid;
						nTotalInspaid += nDiscount;
						nTotalDifpaid += nPatpaid;
						nGroup1Discount += nDiscount;
						nGroup2Discount += nDiscount;
						nGroup1Patpaid += nPatpaid;
						nGroup2Patpaid += nPatpaid;

							
							feeList.Add(fee);
							
							if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
								CString szItemID;
								rs.GetValue(_T("itemid"), szItemID);
								szSQL.Format(_T(" SELECT 	hpol_name as name, ") \
								_T(" 	hpol_unit as unit, ") \
								_T(" 	hpol_unitprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_unitprice) as amount ") \
								_T(" FROM hms_pharmacyorder") \
								_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' ) and hpo_type='M' and hpo_status<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo, szItemID);
								rsl.ExecSQL(szSQL);
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("name"), tmpStr);
									fee.szGroupID = _T("SubItem");
									fee.szID.Empty();
									fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
									fee.szUnit = rsl.GetValue(_T("unit"));
									fee.nQuantity = ToLong(rsl.GetValue(_T("qty")));
									fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
									fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
									fee.nPatpaid = 0;
									fee.nDiscount = ToDouble(rsl.GetValue(_T("amount")));
									feeList.Add(fee);
									rsl.MoveNext();
								}
							}

					}
					else
						break;
					rs.MoveNext();
				}
				if(nGroup1Cost > 0 && nItem > 0)
				{
					if(nGroup2Cost > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
						fee = feeList.GetAt(nOldItem);
						fee.nCost = nGroup2Cost;
						fee.nDiscount = nGroup2Discount;
						fee.nPatpaid = nGroup2Patpaid;
						feeList.SetAt(nOldItem, fee);
					}
					nGroup2Cost = nGroup2Discount = nGroup2Patpaid = 0;
					nItem2 = 0;
					fee = feeList.GetAt(nItem);
					fee.szGroupID = _T("SubAmount");
					TranslateString(_T("Sub Amount"), fee.szName);
					fee.nCost = nGroup1Cost;
					fee.nDiscount = nGroup1Discount;
					fee.nPatpaid = nGroup1Patpaid;
					nItem = feeList.Add(fee);
					nGroup1Cost = nGroup1Discount = nGroup1Patpaid = 0;
				}
			}
			grs.MoveNext();
		
		}

		if(nTotalAmount > 0){
				TranslateString(_T("Total Amount"), tmpStr);
				fee.szGroupID = _T("TotalAmount");
				fee.szName = tmpStr;
				fee.nCost = nTotalAmount;
				fee.nDiscount = nTotalInspaid;
				fee.nPatpaid = nTotalDifpaid;
				feeList.Add(fee);
		}
		

		for (int i =0; i < feeList.GetCount(); i++){
			fee = feeList[i];
			szType = fee.szGroupID;

				if(szType == _T("Type"))
				{
					grp = rpt.GetGroupHeader(1);
					rptDetail = rpt.AddDetail(grp);
					tmpStr = fee.szID;
					rptDetail->SetValue(_T("TypeID"), tmpStr);
					StringUpper(fee.szName, tmpStr);
					rptDetail->SetValue(_T("TypeName"), tmpStr);
				}
				else if(szType == _T("Group")){
					grp = rpt.GetGroupHeader(1);
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("TypeID"), fee.szID);
					rptDetail->SetValue(_T("TypeName"), fee.szName);
				}
				else if(szType == _T("SubGroup")){
					grp = rpt.GetGroupHeader(2);
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("SubGroupID"), fee.szID);
					rptDetail->SetValue(_T("SubGroupName"), fee.szName);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
				}
				else if(szType == _T("SubAmount")){
					grp = rpt.GetGroupHeader(2);
					rptDetail = rpt.AddDetail(grp);
				//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
					rptDetail->SetValue(_T("SubGroupName"), fee.szName);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				}
				else if(szType == _T("Item")){
					rptDetail = rpt.AddDetail();
					rptDetail->SetValue(_T("1"), fee.szID);
					rptDetail->SetValue(_T("2"), fee.szName);
					rptDetail->SetValue(_T("3"), fee.szUnit);
					FormatCurrency(fee.nQuantity, tmpStr);
					rptDetail->SetValue(_T("4"), tmpStr);
					FormatCurrency(fee.nPrice, tmpStr);
					rptDetail->SetValue(_T("5"), tmpStr);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("8"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("6"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("7"), tmpStr);
				}
				else if(szType == _T("SubItem")){
					rptDetail = rpt.AddDetail();
					CReportItem *obj;
					rptDetail->GetItem(_T("1"))->SetItalic(true);
					rptDetail->GetItem(_T("2"))->SetItalic(true);
					rptDetail->GetItem(_T("3"))->SetItalic(true);
					rptDetail->GetItem(_T("4"))->SetItalic(true);
					rptDetail->GetItem(_T("5"))->SetItalic(true);
					rptDetail->GetItem(_T("6"))->SetItalic(true);
					obj = rptDetail->GetItem(_T("7"));
					if(obj)obj->SetItalic(true);
					obj = rptDetail->GetItem(_T("8"));
					if(obj)obj->SetItalic(true);

					rptDetail->SetValue(_T("1"), fee.szID);
					rptDetail->SetValue(_T("2"), fee.szName);
					rptDetail->SetValue(_T("3"), fee.szUnit);
					FormatCurrency(fee.nQuantity, tmpStr);
					rptDetail->SetValue(_T("4"), tmpStr);
					FormatCurrency(fee.nPrice, tmpStr);
					rptDetail->SetValue(_T("5"), tmpStr);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("8"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("6"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("7"), tmpStr);
				}
				else if(szType == _T("TotalAmount")){
					grp = rpt.GetGroupHeader(3);
					rptDetail = rpt.AddDetail(grp);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("TotalAmount"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
				}
		}
	}

//In du lieu cu
	
	//Report Footer
	if(nDeskNo <= 0)
	{
		double nAdvance=0, nDiscount=0;
		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency(nTotalCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.2f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
		FormatCurrency(nTotalCost-nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);

		szSQL.Format(_T(" SELECT 	date(hfi_recvdate) as recvdate, ") \
	_T(" 	hfi_receiver as receiveby, ") \
	_T(" 	hfi_desc as desc, hfi_type as feetype, ") \
	_T(" 	case when hfi_type='A' then hfi_patpaid ") \
	_T(" 	when hfi_type='D' then hfi_discount ") \
	_T(" 	when hfi_type='R' then hfi_cost else 0 end as amount") \
	_T(" FROM hms_fee_invoice") \
	_T(" WHERE hfi_docno=%ld and hfi_type in('A') and hfi_category='A' and hfi_refinvoice=%ld ") \
	_T(" ORDER BY hfi_invoiceno;"), m_nDocumentNo, nInvoiceNo);
		rs.ExecSQL(szSQL);
		
		CString szDesc;
		double nTotalAdvance=0, nTotalDiscount=0;
		while(!rs.IsEOF()){
			
			grp = rpt.GetGroupHeader(2);
			rptDetail = rpt.AddDetail(grp);

			szDesc.Format(_T("[%s] %s (%s)"), 
				CDate::Convert(rs.GetValue(_T("recvdate")), yyyymmdd, ddmmyyyy), 
					rs.GetValue(_T("desc")), 
					GetDoctorName(rs.GetValue(_T("receiveby"))));

			rptDetail->SetValue(_T("SubGroupName"), szDesc);
			rs.GetValue(_T("amount"), tmpStr);
			rs.GetValue(_T("feetype"), szType);
			if(szType == _T("A"))
				nTotalAdvance += ToDouble(tmpStr);
			else if(szType == _T("D"))
				nTotalDiscount += ToDouble(tmpStr);
			rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
			rs.MoveNext();
		}

		if(nAdvance <= 0)
			nAdvance = nTotalAdvance;
		FormatCurrency(nAdvance, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Advance"), tmpStr);

		szSQL.Format(_T(" SELECT sum(hfi_discount) as amount ") \
		_T(" FROM hms_fee_invoice ") \
		_T(" WHERE hfi_docno=%ld and hfi_type in('D') and hfi_refinvoice=%ld "), m_nDocumentNo, nInvoiceNo);
		rs.ExecSQL(szSQL);
		tmpStr.Empty();
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("amount"), nDiscount);
			
		}
		if(nDiscount <= 0)
			nDiscount = nTotalDiscount;

		tmpStr.Empty();
		FormatCurrency(nDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Discount"), tmpStr);

		szWhere.Format(_T(" and hfi_refinvoice=%ld"), nInvoiceNo);

		CString szAmount;

		szSQL.Format(_T("select hfi_desc, case when hfi_type='R' then hfi_cost else hfi_patpaid end as amount from hms_fee_invoice where hfi_docno=%ld and hfi_type in('A','R') and hfi_category='D' %s"), nDocumentNo, szWhere);

		rs.ExecSQL(szSQL);
		
		

		if(!rs.IsEOF()){
			
			FormatCurrencyStr(rs.GetValue(_T("amount")), szAmount);
			tmpStr.Format(_T("%s: %s"),
				rs.GetValue(_T("hfi_desc")), szAmount);
			rpt.GetReportFooter()->SetValue(_T("Payable"), tmpStr);
		}
		else	
		{

			FormatCurrency(nTotalPatpaid-nDiscount, szAmount);
			tmpStr.Format(_T("%s: %s"), szDescription, szAmount);
			rpt.GetReportFooter()->SetValue(_T("Payable"), tmpStr);

		}
	}
	else	//Neu ap dung cach thu phi moi
	{
		

		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency(nTotalCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.2f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
		FormatCurrency(nTotalPatpaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);

		if(bDetailFee){
			szWhere.Format(_T("and hfi_deptid='%s' "), m_szPaymentDept);
		}
		else
			szWhere.Empty();

		szSQL.Format(_T(" SELECT 	date(hfi_recvdate) as recvdate, ") \
	_T(" 	hfi_receiver as receiveby, ") \
	_T(" 	hfi_desc as desc, hfi_type as feetype, ") \
	_T(" 	case when hfi_type='A' then hfi_patpaid ") \
	_T(" 	when hfi_type='D' then hfi_discount ") \
	_T(" 	when hfi_type='R' then hfi_cost else 0 end as amount") \
	_T(" FROM hms_fee_invoice") \
	_T(" WHERE hfi_docno=%ld and hfi_invoiceno in(select hri_refinvoice from hms_refinvoice where hri_invoiceno=%ld)  %s ") \
	_T(" ORDER BY hfi_invoiceno;"), m_nDocumentNo, nInvoiceNo, szWhere);
		rs.ExecSQL(szSQL);
		
		CString szDesc;
		while(!rs.IsEOF()){
			
			grp = rpt.GetGroupHeader(2);
			rptDetail = rpt.AddDetail(grp);

			szDesc.Format(_T("[%s] %s (%s)"), 
				CDate::Convert(rs.GetValue(_T("recvdate")), yyyymmdd, ddmmyyyy), 
					rs.GetValue(_T("desc")), 
					GetDoctorName(rs.GetValue(_T("receiveby"))));

			rptDetail->SetValue(_T("SubGroupName"), szDesc);
			rs.GetValue(_T("amount"), tmpStr);
			rs.GetValue(_T("feetype"), szType);
			rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
			rs.MoveNext();
		}

		FormatCurrency(nTotalDeposit, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Advance"), tmpStr);
		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Discount"), tmpStr);
		if(nTotalRefund > 0)
		{
			FormatCurrency(nTotalRefund, tmpStr);
			TranslateString(_T("Refund"), szDescription);
		}
		else
		{
			FormatCurrency(nDepositPayable, tmpStr);
			if(nTotalDeposit > 0){
				TranslateString(_T("Deposit"), szDescription);
				szDescription += _T(" [RV]");
			}
		}
		tmpStr.Format(_T("%s: %s"), szDescription, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("Payable"), tmpStr);

	}


	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_printed=hfi_printed+1 WHERE hfi_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);

//	rpt.Print();
	rpt.PrintPreview();

}




void	CMainFrame::PrintDischargePaymentFromInvoice_New(long nInvoiceNo, bool bDetailForDept)
{
	CReport rpt;
	CString tmpStr, szSQL, szObjectType, szWhere, szAdmitDate, szEndDate,szDepartments;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	long	nDocumentNo;
	bool	bDetailFee = bDetailForDept;
	
	double nAdvance, nAdvancePayment, nDiscount, nRefund;
	CString szDesc;
	


	if(m_szPaymentMethod == _T("G")){
		bDetailFee = true;
	}
	else
		bDetailFee = false;


	szSQL.Format(_T("  SELECT distinct on(hd_docno) hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T("	date_part('year', hp_birthdate) as yearofbirth, ") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text)) as ethnicdesc, ") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hd_result) as result, ")
				_T(" 	date(hd_admitdate) as examdate,") \
				_T(" 	date(hd_enddate) as enddate,") \
				_T(" 	date(hcr_admitdate) as admitdate,") \
				_T(" 	date(hcr_dischargedate) as dischargedate,") \
				_T("	date(hcr_dischargedate)+1 - date(hcr_admitdate) as Numbertreat, ") \
				_T(" 	hcr_mainicd as mainicd ,") \
				_T(" 	hcr_maindisease as maindisease ,") \
				_T("	hcr_treatdoctor as treatdoctor, ") \
				_T("	hcr_reldisease as ireldisease,") \
				_T("	(select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hcr_result)  as iresult, ")
				_T("	(select ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hd_disrate as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T("	hd_xobject as xobject, ") \
				_T("	hd_xcardno as xcardno, ") \
				_T("	hd_xissuedate as xissuedate, ") \
				_T(" 	hfi_deptid as deptid,") \
				_T(" 	hfi_depts as depts,") \
				_T(" 	hfi_bookno as bookno,") \
				_T(" 	hfi_serialno as serialno,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_recvdate as recvdate, ") \
				_T(" 	hfi_receiver as receiver,") \
				_T(" 	hfi_desc as reason, ") \
				_T(" 	hfi_cost as cost,") \
				_T(" 	hfi_discount as discount,") \
				_T(" 	hfi_patpaid as patpaid, ") \
				_T(" 	hfi_advanceamt as advanceamt, ") \
				_T(" 	hfi_advpayment as advpayment, ") \
				_T(" 	hfi_refundamt as refundamt ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfi_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfi_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfi_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfi_docno=%ld and hfi_invoiceno=%ld "), m_nDocumentNo, nInvoiceNo);
	
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return;
	}

	rs.GetValue(_T("advanceamt"), nAdvance);
	rs.GetValue(_T("advpayment"), nAdvancePayment);
	rs.GetValue(_T("refundamt"), nRefund);


	rs.GetValue(_T("objecttype"), tmpStr);

	if(tmpStr == _T("I") || tmpStr == _T("C"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSDISCHARGEPAYMENT2.RPT"), true) )
			return;
	}
	else if(tmpStr == _T("D"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_FREEDISCHARGEPAYMENT.RPT"), true) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_DISCHARGEPAYMENT.RPT"), true) )
			return;
	}

	//Report Header
	tmpStr.Empty();
	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("serialno")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);


	CString szDate;
	tmpStr = GetSysDateTime();
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);

	//rs.GetValue(_T("pname"), tmpStr);
	CString szPatientName;
	StringUpper(rs.GetValue(_T("pname")), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);

	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);

	CString szAddress;
	rs.GetValue(_T("detailaddress"), tmpStr);
	szAddress = tmpStr;
	rs.GetValue(_T("address"), tmpStr);
	if(!szAddress.IsEmpty())
		szAddress += _T(" - ");
	szAddress += tmpStr;
	rpt.GetReportHeader()->SetValue(_T("Address"), szAddress);
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	
	rs.GetValue(_T("objecttype"), szObjectType);
	
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	rs.GetValue(_T("disrate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), tmpStr);
	rs.GetValue(_T("insline"), tmpStr);
	if(tmpStr == _T("Y")){
		TranslateString(_T("Outline"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InsLine"), tmpStr);
	}
	else
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));

	rs.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);
	rs.GetValue(_T("regcode"), tmpStr);	
	rpt.GetReportHeader()->SetValue(_T("RegCode"), tmpStr);
	CReportItem *obj = rpt.GetReportHeader()->GetItem(_T("InsuranceCompany"));
	if(obj){
		CString szRegCode, insname;
		CRecord rsx(&m_db);
		rs.GetValue(_T("regcode"), szRegCode);
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);
		}

	}

	rs.GetValue(_T("xobject"), tmpStr);
	if(m_szPrintHemaReceipt == _T("Y") && tmpStr == _T("H")){
		rpt.GetReportHeader()->SetValue(_T("Hema"), _T("HEMA"));
	}	
	rs.GetValue(_T("xcardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("xcardno"), tmpStr);
	rs.GetValue(_T("xissuedate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("xissuedate"), CDate::Convert(tmpStr));


		
	if(m_nInpatient == 0)
	{
		rs.GetValue(_T("diagnostic"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
		rs.GetValue(_T("reldisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);
		rs.GetValue(_T("result"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);
	}
	else
	{
		rs.GetValue(_T("maindisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
		rs.GetValue(_T("ireldisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
		rs.GetValue(_T("mainicd"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);
		rs.GetValue(_T("iresult"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);
	}

	rs.GetValue(_T("admitdate"), tmpStr);
	
	CString szDischargeDate;
	
	if(tmpStr.IsEmpty())
	{		
		rs.GetValue(_T("examdate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("admitdate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));		
		rs.GetValue(_T("enddate"), tmpStr);
		szDischargeDate = tmpStr;
		rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		
		rs.GetValue(_T("depts"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Department"), GetDepartments(tmpStr));	
	}
	else
	{		
		rpt.GetReportHeader()->SetValue(_T("admitdate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("dischargedate"), tmpStr);
		szDischargeDate = tmpStr;
		rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		
		CString szSQL2, icd10, maindisease;
		CRecord rsd(&m_db);

		// Lay thong ti ve phong va giuong
		szSQL2.Format(_T(" select (select hrl_name from hms_roomlist where hrl_id=hb_roomid and hrl_deptid=hb_deptid) as roomname, ") \
					_T(" (select hbl_name from hms_bedlist where hbl_deptid=hb_deptid and hbl_roomid=hb_roomid and hbl_id=hb_bedid) as bedname ") \
					_T(" from hms_bed where hb_docno =%ld order by hb_idx DESC "), nDocumentNo);
		
		rsd.ExecSQL(szSQL2);
		if(!rsd.IsEOF())
		{	
			rsd.GetValue(_T("roomname"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("roomname"), tmpStr);
			rsd.GetValue(_T("bedname"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("bedname"), tmpStr);
		}

		//Lay ra ta ca cac khoa theo thu tu

		rs.GetValue(_T("depts"), tmpStr);
		
		szSQL2.Format(_T(" SELECT hd_admitdept as deptid, hd_admitdate as admitdate, hd_enddate as enddate ") \
			_T(" FROM hms_doc ") \
			_T(" WHERE 	hd_docno=%ld ") \
			_T(" 	and '%s' like(chr(37)||hd_admitdept||chr(37))"), nDocumentNo, tmpStr);

		
		rsd.ExecSQL(szSQL2);
		
		if(!rsd.IsEOF())
		{					
			rsd.GetValue(_T("Admitdate"), tmpStr);
			szAdmitDate.Format(_T("%s"), CDate::Convert(tmpStr, yyyymmdd,ddmmyyyy));
			rsd.GetValue(_T("enddate"), tmpStr);
			szDischargeDate.Format(_T("%s"), CDate::Convert(tmpStr, yyyymmdd,ddmmyyyy));
			tmpStr.Format(_T("(%s-%s)"),szAdmitDate.Mid(0,5) ,szDischargeDate.Mid(0,5) );
			rsd.GetValue(_T("deptid"), szDepartments);			
			szDepartments += tmpStr + _T("->");			
		}		
		
		rs.GetValue(_T("depts"), tmpStr);

		szSQL2.Format(_T(" SELECT htr_deptid as deptid, date(htr_admitdate) as admitdate, ") \
			_T(" date(htr_dischargedate) as dischargedate, htr_mainicd as icd10, htr_maindisease as maindisease ") \
			_T(" FROM hms_treatment_record ") \
			_T(" WHERE 	htr_docno=%ld ") \
			_T(" 	and '%s' like(chr(37)||htr_deptid||chr(37))") \
			_T(" ORDER BY htr_idx"), nDocumentNo, tmpStr);
		
		
		rsd.ExecSQL(szSQL2);
		if(!rsd.IsEOF())
		{
			rsd.GetValue(_T("admitdate"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("admitdate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		}
		int nCountRow=0;
		while(!rsd.IsEOF()){
			nCountRow++;
			tmpStr.Format(_T("%s"), rsd.GetValue(_T("deptid")));
			szDepartments += tmpStr;
			rsd.GetValue(_T("Admitdate"), tmpStr);
			szAdmitDate.Format(_T("%s"), CDate::Convert(tmpStr, yyyymmdd,ddmmyyyy));
			rsd.GetValue(_T("dischargedate"), tmpStr);
			szDischargeDate.Format(_T("%s"), CDate::Convert(tmpStr, yyyymmdd,ddmmyyyy));
			tmpStr.Format(_T("(%s-%s)"),szAdmitDate.Mid(0,5) ,szDischargeDate.Mid(0,5) );
			if(!szDepartments.IsEmpty()){
				szDepartments += tmpStr;
				if (nCountRow < rsd.GetRecordCount()) szDepartments += _T("->");
			}
			rsd.GetValue(_T("icd10"), icd10);
			rsd.GetValue(_T("maindisease"), maindisease);
			rsd.MoveNext();
		}		
		
		rpt.GetReportHeader()->SetValue(_T("Department"), szDepartments);
		rs.GetValue(_T("maindisease"), maindisease);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), maindisease);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), icd10);
		rs.GetValue(_T("Numbertreat"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Numbertreat"), tmpStr);
	}
	

	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));
	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("ReceiveDate"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	
	if(m_nInpatient == 0)
		rs.GetValue(_T("doctor"), tmpStr);
	else
		rs.GetValue(_T("treatdoctor"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("Doctor"), GetDoctorName(tmpStr));

	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}	
	tmpStr.Empty();
	rs.GetValue(_T("receiver"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy"), GetDoctorName(tmpStr));
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetHBITMAP(GetSignatureImage(tmpStr));
		img2->SetFixedHeight(false);
	}	


	CReportSection* rptDetail=NULL;
	CReportSection *grp;
	CRecord grs(&m_db);
	CString szFeeID, szID;
	CString szSubItem, szType;

	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	double dTotal[5];
	double dTotalCost[6];
	for (int i =0; i <= 5; i++)
		dTotalCost[i] = 0;

	if(bDetailFee){
		CRecord drs(&m_db);
		CString szDeptID;
		
		CArray<PaymentInfo, PaymentInfo& > payInfo;

		szSQL.Format(_T("SELECT deptid, admitdate, dischargedate, mainicd, maindisease ") \
		_T("FROM (select htr_deptid as deptid, date(htr_admitdate) as admitdate, date(htr_dischargedate) as dischargedate, htr_mainicd as mainicd, htr_maindisease as maindisease, htr_idx as idx ") \
		_T(" from hms_treatment_record ") \
		_T(" where htr_docno=%ld ") \
		_T("union all select hd_admitdept, date(hd_admitdate), date(hd_enddate), hd_icd, hd_diagnostic, 0 from hms_doc where hd_docno=%ld ") \
		_T(") as tbl ") \
		_T(" where deptid in(select distinct hfe_deptid from hmsv_fee where hfe_invoiceno=%ld)") \
		_T(" order by idx "), nDocumentNo, nDocumentNo, nInvoiceNo);
_fmsg(_T("%s"), szSQL);

		drs.ExecSQL(szSQL);

		PaymentInfo pi;
		CString szDepts;
		szDepts.Empty();

		while(!drs.IsEOF()){
			drs.GetValue(_T("deptid"), tmpStr);
			
			bool bFound = false;
			for (int i =0; i < payInfo.GetCount(); i++){
				pi = payInfo[i];
				if(pi.deptid == tmpStr)
				{
					bFound = true;
					break;
				}
			}
			pi.deptid = tmpStr;
			if(!szDepts.IsEmpty())
				szDepts += _T(",");
			szDepts.AppendFormat(_T("%s"), GetDepartmentName(tmpStr));

			drs.GetValue(_T("dischargedate"), pi.dischargedate);
			drs.GetValue(_T("mainicd"), pi.mainicd);
			drs.GetValue(_T("maindisease"), pi.maindisease);
			if(bFound){
				payInfo.SetAt(i, pi);
			}
			else
			{
				drs.GetValue(_T("admitdate"), pi.admitdate);
				payInfo.Add(pi);
			}
			drs.MoveNext();
		}

		rpt.GetReportHeader()->SetValue(_T("Department"), szDepts);	

		for (int n = 0; n < payInfo.GetCount(); n++){
			pi = payInfo[n];
			szDeptID = pi.deptid;
			if(n == 0){
//				rpt.GetReportHeader()->SetValue(_T("admitdate"), CDate::Convert(pi.admitdate, yyyymmdd, ddmmyyyy));
			}
			if(CompareDate(szDischargeDate, pi.dischargedate) < 0){
//				rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDate::Convert(pi.dischargedate, yyyymmdd, ddmmyyyy));
			}
			
			rptDetail = rpt.AddDetail(rpt.GetGroupHeader(1));
			rptDetail->SetValue(_T("TypeID"), _T("*"));
			tmpStr.Format(_T("%s [%s - %s]"), 
				GetDepartmentName(szDeptID), 
				CDate::Convert(pi.admitdate, yyyymmdd, ddmmyyyy),
				CDate::Convert(pi.dischargedate, yyyymmdd, ddmmyyyy));
			CString szDesc;
			StringUpper(tmpStr, szDesc);
			rptDetail->SetValue(_T("TypeName"), szDesc);

			int nChapter=0;
		int nCount = 0, nIndex, nChapterID=0;
		double dGroup1[6];
		double dGroup2[6];
		double dAmount = 0;
		int nItem=0, nOldItem=0, nItem2=0;
		int nLevel;
		bool bDeleteParent=false;
		bool bLoadItems = false;
		CString szNewGroup, szOldGroup, szParentGroup;
		for (int i =0; i <= 5; i++){
			dGroup1[i] = 0;
			dGroup2[i] = 0;
			dTotal[i] = 0;
		}
		
		szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_index, hfg_id "));
		grs.ExecSQL(szSQL);

		

		if(szObjectType == _T("I") || szObjectType == _T("C") || szObjectType == _T("D"))
		{	
			if(m_szPrintAllCostInDischargePayment != _T("Y"))
				szWhere.Format(_T(" and (hfe_discount+hfe_difcost) > 0 "));

			szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		rtrim(hfe_group,'0') as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_qty) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		hfe_insprice as insprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_inspaid) as inspaid,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_patpaid + hfe_difpaid) as patpaid,") \
				_T(" 		sum(hfe_patdebt ) as patdebt,") \
				_T(" 		sum(hfe_patdebt) as unpaid") \
				_T(" FROM hmsv_fee") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_deptid='%s' and hfe_itemid<>'D0000' %s ") \
				_T(" GROUP BY groupid, feetype, itemid, name, unit, unitprice, insprice ") \
				_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
				_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szDeptID, szWhere);
		}
		else
		{
			szSQL.Format(_T(" SELECT") \
					_T("		hfe_type as feetype, ") \
					_T(" 		rtrim(hfe_group,'0') as groupid,") \
					_T(" 		hfe_itemid as itemid,") \
					_T(" 		hfe_desc as name,") \
					_T(" 		hfe_unit as unit,") \
					_T(" 		sum(hfe_qty) as qty,") \
					_T(" 		hfe_unitprice as unitprice,") \
					_T(" 		hfe_insprice as insprice,") \
					_T(" 		sum(hfe_cost) as cost,") \
					_T(" 		sum(hfe_inspaid) as inspaid,") \
					_T(" 		sum(hfe_discount) as discount,") \
					_T(" 		sum(hfe_patpaid + hfe_difpaid) as patpaid,") \
					_T(" 		sum(hfe_patdebt) as patdebt,") \
					_T(" 		sum(hfe_patdebt) as unpaid") \
					_T(" FROM hmsv_fee") \
					_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_deptid='%s' and hfe_itemid<>'D0000' ") \
					_T(" GROUP BY groupid, feetype,  itemid, name, unit, unitprice, insprice") \
					_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
					_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szDeptID);

		}
		rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
		nIndex = 0;
		CString szSubItem, szType;
		int nSubItem = 1;
		nChapterID = 0;
		CArray<FEEITEM, FEEITEM&> feeList;
		FEEITEM fee;
		while(!grs.IsEOF()){
			grs.GetValue(_T("level"), nLevel);
			grs.GetValue(_T("id"), szParentGroup);
			grs.GetValue(_T("feeid"), szSubItem);
			szParentGroup.Trim();
			bool bAdd = false;
			rs.MoveFirst();
			while(!rs.IsEOF()){
				rs.GetValue(_T("groupid"), tmpStr);
				if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
					bAdd = true;
					break;
				}
				rs.MoveNext();
			}
			if(!bAdd)
			{
				grs.MoveNext();
				continue;
			}
			
			if(nLevel == 0)
			{
				tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
				fee.szGroupID = _T("Type");
				fee.szID = tmpStr;
				fee.szName = grs.GetValue(_T("name"));
				nItem = feeList.Add(fee);
				nIndex = 0;
			}
			else
			{
				nIndex++;
				tmpStr.Format(_T("%d."), nIndex);
				fee.szGroupID = _T("Group");
				fee.szID = tmpStr;
				fee.szName = grs.GetValue(_T("name"));
				nItem = feeList.Add(fee);
				dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = dGroup1[5] =0;
			}
			if(szSubItem == _T("Y")){
				nSubItem = 0;
	//			rs.MoveFirst();
				while(!rs.IsEOF())
				{
					rs.GetValue(_T("groupid"), szNewGroup);
					szNewGroup.Trim();
					if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
								szOldGroup = szNewGroup;
								if(dGroup2[0] > 0 && nItem2 > 0){
									fee = feeList.GetAt(nOldItem);
									fee.nCost = dGroup2[0];
									fee.nDiscount = dGroup2[1];
									fee.nPatpaid = dGroup2[2];
									fee.nPatdebt = dGroup2[3];
									fee.nInsPaid = dGroup2[5];
									feeList.SetAt(nOldItem, fee);
								}
								szSQL.Format(_T("SELECT hfg_name as name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
								CRecord rs2(&m_db);
								rs2.ExecSQL(szSQL);
								fee.szGroupID = _T("SubGroup");
								fee.szID = _T("*");
								fee.szName = rs2.GetValue(_T("name"));
								nItem2 = feeList.Add(fee);
								nOldItem = nItem2;
								dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = dGroup2[4]= 0;
						}

						nSubItem++;
							rs.GetValue(_T("cost"), dAmount);
							dTotal[0] += dAmount;
							dTotalCost[0] += dAmount;
							dGroup1[0] += dAmount;
							dGroup2[0] += dAmount;
							rs.GetValue(_T("discount"), dAmount);
							dTotal[1] += dAmount;
							dTotalCost[1] += dAmount;
							dGroup1[1] += dAmount;
							dGroup2[1] += dAmount;
							rs.GetValue(_T("patpaid"), dAmount);
							dTotal[2] += dAmount;
							dTotalCost[2] += dAmount;
							dGroup1[2] += dAmount;
							dGroup2[2] += dAmount;

							rs.GetValue(_T("patdebt"), dAmount);
							dTotal[3] += dAmount;
							dTotalCost[3] += dAmount;
							dGroup1[3] += dAmount;
							dGroup2[3] += dAmount;
							rs.GetValue(_T("unpaid"), dAmount);
							dTotal[4] += dAmount;
							dTotalCost[4] += dAmount;
							dGroup1[4] += dAmount;
							dGroup2[4] += dAmount;

							rs.GetValue(_T("inspaid"), dAmount);
							dTotal[4] += dAmount;
							dTotalCost[4] += dAmount;
							dGroup1[4] += dAmount;
							dGroup2[4] += dAmount;


							fee.szGroupID = _T("Item");
							fee.szID.Empty();
							fee.szName = rs.GetValue(_T("name"));
							fee.szUnit = rs.GetValue(_T("unit"));
							fee.nQuantity = ToLong(rs.GetValue(_T("qty")));
							fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
							fee.nInsPrice = ToDouble(rs.GetValue(_T("insprice")));
							fee.nCost = ToDouble(rs.GetValue(_T("cost")));
							fee.nPatpaid = ToDouble(rs.GetValue(_T("patpaid")));
							fee.nInsPaid = ToDouble(rs.GetValue(_T("inspaid")));
							fee.nDiscount = ToDouble(rs.GetValue(_T("discount")));
							feeList.Add(fee);
							

							if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
								CString szItemID;
								rs.GetValue(_T("itemid"), szItemID);
								szSQL.Format(_T(" SELECT 	hpol_name as name, ") \
								_T(" 	hpol_unit as unit, ") \
								_T(" 	hpol_unitprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_unitprice) as amount ") \
								_T(" FROM hms_pharmacyorder") \
								_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld and hpo_deptid='%s'") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' ) and hpo_type='M' and hpo_status<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo,szDeptID, szItemID);
								rsl.ExecSQL(szSQL);
								double nTotalAmt =0;
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("name"), tmpStr);
									fee.szGroupID = _T("SubItem");
									fee.szID.Empty();
									fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
									fee.szUnit = rsl.GetValue(_T("unit"));
									fee.nQuantity = ToLong(rsl.GetValue(_T("qty")));
									fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
									fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
									nTotalAmt += fee.nCost;
									fee.nPatpaid = 0;
									fee.nDiscount = ToDouble(rsl.GetValue(_T("amount")));
									feeList.Add(fee);
									rsl.MoveNext();
								}
								if(nTotalAmt > 0){
									fee.szGroupID = _T("SubItemGroup");
									fee.szID.Empty();
									TranslateString(_T("Total"), tmpStr);
									fee.szName.Format(_T("   +   %s"), tmpStr);
									fee.szUnit.Empty();
									fee.nQuantity = 0;
									fee.nPrice = 0;
									fee.nInsPrice = 0;
									fee.nCost = nTotalAmt;
									fee.nPatpaid = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = nTotalAmt;
									feeList.Add(fee);
								}
							}

					}
					else
						break;
					rs.MoveNext();
				}
				if(dGroup1[0] > 0 && nItem > 0)
				{
					if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
						fee = feeList.GetAt(nOldItem);
						fee.nCost = dGroup2[0];
						fee.nDiscount = dGroup2[1];
						fee.nPatpaid = dGroup2[2];
						fee.nInsPaid = dGroup2[5];
						feeList.SetAt(nOldItem, fee);
					}
					dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = dGroup2[5]= 0;
					nItem2 = 0;
					fee = feeList.GetAt(nItem);
					fee.szGroupID = _T("SubAmount");
					TranslateString(_T("Sub Amount"), fee.szName);
					fee.nCost = dGroup1[0];
					fee.nDiscount = dGroup1[1];
					fee.nPatpaid = dGroup1[2];
					fee.nInsPaid = dGroup1[5];
					nItem = feeList.Add(fee);
					dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = dGroup1[5] = 0;
				}
			}
			grs.MoveNext();
		
		}

		if(dTotal[0] > 0){
				TranslateString(_T("Total Amount"), tmpStr);
				fee.szGroupID = _T("TotalAmount");
				fee.szName = tmpStr;
				fee.nCost = dTotal[0];
				fee.nDiscount = dTotal[1];
				fee.nPatpaid = dTotal[2];
				fee.nInsPaid = dTotal[5];
				feeList.Add(fee);
		}
		

		for (int i =0; i < feeList.GetCount(); i++){
			fee = feeList[i];
			szType = fee.szGroupID;

				if(szType == _T("Type"))
				{
					grp = rpt.GetGroupHeader(1);
					rptDetail = rpt.AddDetail(grp);
					tmpStr = fee.szID;
					rptDetail->SetValue(_T("TypeID"), tmpStr);
					StringUpper(fee.szName, tmpStr);
					rptDetail->SetValue(_T("TypeName"), tmpStr);
				}
				else if(szType == _T("Group")){
					grp = rpt.GetGroupHeader(1);
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("TypeID"), fee.szID);
					rptDetail->SetValue(_T("TypeName"), fee.szName);
				}
				else if(szType == _T("SubGroup")){
					grp = rpt.GetGroupHeader(2);
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("SubGroupID"), fee.szID);
					rptDetail->SetValue(_T("SubGroupName"), fee.szName);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
					FormatCurrency(fee.nInsPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsPaid"), tmpStr);
				}
				else if(szType == _T("SubAmount")){
					grp = rpt.GetGroupHeader(2);
					rptDetail = rpt.AddDetail(grp);
				//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
					rptDetail->SetValue(_T("SubGroupName"), fee.szName);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
					FormatCurrency(fee.nInsPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsPaid"), tmpStr);

				}
				else if(szType == _T("Item")){
					rptDetail = rpt.AddDetail();
					rptDetail->SetValue(_T("1"), fee.szID);
					rptDetail->SetValue(_T("2"), fee.szName);
					rptDetail->SetValue(_T("3"), fee.szUnit);
					FormatCurrency(fee.nQuantity, tmpStr);
					rptDetail->SetValue(_T("4"), tmpStr);
					FormatCurrency(fee.nPrice, tmpStr);
					rptDetail->SetValue(_T("5"), tmpStr);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("6"), tmpStr);
					FormatCurrency(fee.nInsPrice, tmpStr);
					rptDetail->SetValue(_T("7"), tmpStr);
					FormatCurrency(fee.nInsPaid, tmpStr);
					rptDetail->SetValue(_T("8"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("9"), tmpStr);

				}
				else if(szType == _T("SubItem") || szType == _T("SubItemGroup")){
					rptDetail = rpt.AddDetail();
					CReportItem *obj;
					rptDetail->GetItem(_T("1"))->SetItalic(true);
					rptDetail->GetItem(_T("2"))->SetItalic(true);
					rptDetail->GetItem(_T("3"))->SetItalic(true);
					rptDetail->GetItem(_T("4"))->SetItalic(true);
					rptDetail->GetItem(_T("5"))->SetItalic(true);
					rptDetail->GetItem(_T("6"))->SetItalic(true);
					obj = rptDetail->GetItem(_T("7"));
					if(obj)obj->SetItalic(true);
					obj = rptDetail->GetItem(_T("8"));
					if(obj)obj->SetItalic(true);
					if(szType == _T("SubItemGroup")){
						rptDetail->GetItem(_T("2"))->SetBold(true);
						rptDetail->GetItem(_T("6"))->SetBold(true);
						rptDetail->GetItem(_T("7"))->SetBold(true);
						rptDetail->SetValue(_T("1"), _T(""));
						rptDetail->SetValue(_T("2"), fee.szName);
						rptDetail->SetValue(_T("3"), _T(""));
						rptDetail->SetValue(_T("4"), _T(""));
						rptDetail->SetValue(_T("5"), _T(""));
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("6"), tmpStr);
						FormatCurrency(fee.nInsPaid, tmpStr);
						rptDetail->SetValue(_T("7"), tmpStr);
						rptDetail->SetValue(_T("8"), _T(""));
					}
					else
					{
						rptDetail->SetValue(_T("1"), fee.szID);
						rptDetail->SetValue(_T("2"), fee.szName);
						rptDetail->SetValue(_T("3"), fee.szUnit);
						FormatCurrency(fee.nQuantity, tmpStr);
						rptDetail->SetValue(_T("4"), tmpStr);
						FormatCurrency(fee.nPrice, tmpStr);
						rptDetail->SetValue(_T("5"), tmpStr);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("6"), tmpStr);
						FormatCurrency(fee.nInsPrice, tmpStr);
						rptDetail->SetValue(_T("7"), tmpStr);
						FormatCurrency(fee.nInsPaid, tmpStr);
						rptDetail->SetValue(_T("8"), tmpStr);
					}
				}
				else if(szType == _T("TotalAmount")){
					grp = rpt.GetGroupHeader(3);
					rptDetail = rpt.AddDetail(grp);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("TotalAmount"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
					
					FormatCurrency(fee.nInsPaid, tmpStr);
					rptDetail->SetValue(_T("TotalInsPaid"), tmpStr);

				}
		}


			
		}
	}
	else
	{
		int nChapter=0;
		int nCount = 0, nIndex, nChapterID=0;
		
		double dGroup1[5];
		double dGroup2[5];
		double dAmount = 0;
		int nItem=0, nOldItem=0, nItem2=0;
		int nLevel;
		bool bDeleteParent=false;
		bool bLoadItems = false;
		CString szNewGroup, szOldGroup, szParentGroup;
		for (int i =0; i < 5; i++){
			dGroup1[i] = 0;
			dGroup2[i] = 0;
			dTotal[i] = 0;
		}
		
		szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as level, hfg_feeid as feeid from hms_feegroup where hfg_level <= 1 order by hfg_index, hfg_id "));
		grs.ExecSQL(szSQL);

		

		if(szObjectType == _T("I") || szObjectType == _T("C") || szObjectType == _T("D"))
		{	
			szWhere.Empty();
			if(m_szPrintAllCostInDischargePayment != _T("Y"))
				szWhere.Format(_T(" and (hfe_discount+hfe_difcost) > 0"));

			szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		rtrim(hfe_group,'0') as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_qty) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		hfe_insprice as insprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_inspaid) as inspaid,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_patpaid+hfe_difpaid) as patpaid,") \
				_T(" 		sum(hfe_patdebt) as patdebt,") \
				_T(" 		sum(hfe_patdebt) as unpaid") \
				_T(" FROM hmsv_fee") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld %s ") \
				_T(" GROUP BY groupid, feetype, itemid, name, unit, unitprice, insprice") \
				_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
				_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szWhere);
		}
		else
		{
			szSQL.Format(_T(" SELECT") \
					_T("		hfe_type as feetype, ") \
					_T(" 		rtrim(hfe_group,'0') as groupid,") \
					_T(" 		hfe_itemid as itemid,") \
					_T(" 		hfe_desc as name,") \
					_T(" 		hfe_unit as unit,") \
					_T(" 		sum(hfe_qty) as qty,") \
					_T(" 		hfe_unitprice as unitprice,") \
					_T(" 		hfe_insprice as insprice,") \
					_T(" 		sum(hfe_cost) as cost,") \
					_T(" 		sum(hfe_inspaid) as inspaid,") \
					_T(" 		sum(hfe_discount) as discount,") \
					_T(" 		sum(hfe_patpaid+hfe_difpaid) as patpaid,") \
					_T(" 		sum(hfe_patdebt) as patdebt,") \
					_T(" 		sum(hfe_patdebt) as unpaid") \
					_T(" FROM hmsv_fee") \
					_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld ") \
					_T(" GROUP BY groupid, feetype,  itemid, name, unit, unitprice, insprice") \
					_T(" HAVING sum(hfe_qty*hfe_cost) > 0 ") \
					_T(" ORDER BY groupid, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo);

		}
		
		rs.ExecSQL(szSQL);

	

		nIndex = 0;
		int nSubItem = 1;
		nChapterID = 0;
		CArray<FEEITEM, FEEITEM&> feeList;
		FEEITEM fee;
		
		while(!grs.IsEOF()){
			grs.GetValue(_T("level"), nLevel);
			grs.GetValue(_T("id"), szParentGroup);
			grs.GetValue(_T("feeid"), szSubItem);
			szParentGroup.Trim();
			bool bAdd = false;
			rs.MoveFirst();
			while(!rs.IsEOF()){
				rs.GetValue(_T("groupid"), tmpStr);
				if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
					bAdd = true;
					break;
				}
				rs.MoveNext();
			}
			if(!bAdd)
			{
				grs.MoveNext();
				continue;
			}
			
			if(nLevel == 0)
			{
				tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
				fee.szGroupID = _T("Type");
				fee.szID = tmpStr;
				fee.szName = grs.GetValue(_T("name"));
				nItem = feeList.Add(fee);
				nIndex = 0;
			}
			else
			{
				nIndex++;
				tmpStr.Format(_T("%d."), nIndex);
				fee.szGroupID = _T("Group");
				fee.szID = tmpStr;
				fee.szName = grs.GetValue(_T("name"));
				nItem = feeList.Add(fee);
				dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = dGroup1[5] = 0;
			}
			if(szSubItem == _T("Y")){
				nSubItem = 0;
	//			rs.MoveFirst();
				while(!rs.IsEOF())
				{
					rs.GetValue(_T("groupid"), szNewGroup);
					szNewGroup.Trim();
					if(szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
								szOldGroup = szNewGroup;
								if(dGroup2[0] > 0 && nItem2 > 0){
									fee = feeList.GetAt(nOldItem);
									fee.nCost = dGroup2[0];
									fee.nDiscount = dGroup2[1];
									fee.nPatpaid = dGroup2[2];
									fee.nPatdebt = dGroup2[3];
									fee.nInsPaid = dGroup2[5];
									feeList.SetAt(nOldItem, fee);
								}
								szSQL.Format(_T("SELECT hfg_name as name FROM hms_feegroup WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
								CRecord rs2(&m_db);
								rs2.ExecSQL(szSQL);
								fee.szGroupID = _T("SubGroup");
								fee.szID = _T("*");
								fee.szName = rs2.GetValue(_T("name"));
								nItem2 = feeList.Add(fee);
								nOldItem = nItem2;
								dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = dGroup2[5] = 0;
						}

						nSubItem++;
							rs.GetValue(_T("cost"), dAmount);
							dTotal[0] += dAmount;
							dTotalCost[0] += dAmount;
							dGroup1[0] += dAmount;
							dGroup2[0] += dAmount;
							rs.GetValue(_T("discount"), dAmount);
							dTotal[1] += dAmount;
							dTotalCost[1] += dAmount;
							dGroup1[1] += dAmount;
							dGroup2[1] += dAmount;
							rs.GetValue(_T("patpaid"), dAmount);
							dTotal[2] += dAmount;
							dTotalCost[2] += dAmount;
							dGroup1[2] += dAmount;
							dGroup2[2] += dAmount;

							rs.GetValue(_T("patdebt"), dAmount);
							dTotal[3] += dAmount;
							dTotalCost[3] += dAmount;
							dGroup1[3] += dAmount;
							dGroup2[3] += dAmount;
							rs.GetValue(_T("unpaid"), dAmount);
							dTotal[4] += dAmount;
							dTotalCost[4] += dAmount;
							dGroup1[4] += dAmount;
							dGroup2[4] += dAmount;

							rs.GetValue(_T("inspaid"), dAmount);
							dTotal[5] += dAmount;
							dTotalCost[5] += dAmount;
							dGroup1[5] += dAmount;
							dGroup2[5] += dAmount;

							fee.szGroupID = _T("Item");
							fee.szID.Empty();
							fee.szName = rs.GetValue(_T("name"));
							fee.szUnit = rs.GetValue(_T("unit"));
							fee.nQuantity = ToLong(rs.GetValue(_T("qty")));
							fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
							fee.nInsPrice = ToDouble(rs.GetValue(_T("insprice")));
							fee.nCost = ToDouble(rs.GetValue(_T("cost")));
							fee.nPatpaid = ToDouble(rs.GetValue(_T("patpaid")));
							fee.nInsPaid = ToDouble(rs.GetValue(_T("inspaid")));
							fee.nDiscount = ToDouble(rs.GetValue(_T("discount")));
							feeList.Add(fee);
							
							if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
								CString szItemID;
								rs.GetValue(_T("itemid"), szItemID);
								szSQL.Format(_T(" SELECT 	hpol_name as name, ") \
								_T(" 	hpol_unit as unit, ") \
								_T(" 	hpol_unitprice as price, ") \
								_T(" 	sum(hpol_orderqty) as qty, ") \
								_T(" 	sum(hpol_orderqty*hpol_unitprice) as amount ") \
								_T(" FROM hms_pharmacyorder") \
								_T(" LEFT JOIN hms_pharmacyorder_line ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' ) and hpo_type='M' and hpo_status<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo, szItemID);
								rsl.ExecSQL(szSQL);
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("name"), tmpStr);
									fee.szGroupID = _T("SubItem");
									fee.szID.Empty();
									fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
									fee.szUnit = rsl.GetValue(_T("unit"));
									fee.nQuantity = ToLong(rsl.GetValue(_T("qty")));
									fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
									fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
									fee.nPatpaid = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = ToDouble(rsl.GetValue(_T("amount")));
									feeList.Add(fee);
									rsl.MoveNext();
								}
							}

					}
					else
						break;
					rs.MoveNext();
				}
				if(dGroup1[0] > 0 && nItem > 0)
				{
					if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
						fee = feeList.GetAt(nOldItem);
						fee.nCost = dGroup2[0];
						fee.nDiscount = dGroup2[1];
						fee.nPatpaid = dGroup2[2];
						fee.nInsPaid = dGroup2[5];
						feeList.SetAt(nOldItem, fee);
					}
					dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = dGroup2[5]= 0;
					nItem2 = 0;
					fee = feeList.GetAt(nItem);
					fee.szGroupID = _T("SubAmount");
					TranslateString(_T("Sub Amount"), fee.szName);
					fee.nCost = dGroup1[0];
					fee.nDiscount = dGroup1[1];
					fee.nPatpaid = dGroup1[2];
					fee.nInsPaid = dGroup1[5];
					nItem = feeList.Add(fee);
					dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = dGroup1[5] = 0;
				}
			}
			grs.MoveNext();
		
		}

		if(dTotal[0] > 0){
				TranslateString(_T("Total Amount"), tmpStr);
				fee.szGroupID = _T("TotalAmount");
				fee.szName = tmpStr;
				fee.nCost = dTotal[0];
				fee.nDiscount = dTotal[1];
				fee.nPatpaid = dTotal[2];
				fee.nInsPaid = dTotal[5];
				feeList.Add(fee);
		}
		

		for (int i =0; i < feeList.GetCount(); i++){
			fee = feeList[i];
			szType = fee.szGroupID;

				if(szType == _T("Type"))
				{
					grp = rpt.GetGroupHeader(1);
					rptDetail = rpt.AddDetail(grp);
					tmpStr = fee.szID;
					rptDetail->SetValue(_T("TypeID"), tmpStr);
					StringUpper(fee.szName, tmpStr);
					rptDetail->SetValue(_T("TypeName"), tmpStr);
				}
				else if(szType == _T("Group")){
					grp = rpt.GetGroupHeader(1);
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("TypeID"), fee.szID);
					rptDetail->SetValue(_T("TypeName"), fee.szName);
				}
				else if(szType == _T("SubGroup")){
					grp = rpt.GetGroupHeader(2);
					rptDetail = rpt.AddDetail(grp);
					rptDetail->SetValue(_T("SubGroupID"), fee.szID);
					rptDetail->SetValue(_T("SubGroupName"), fee.szName);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
					FormatCurrency(fee.nInsPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsPaid"), tmpStr);
				}
				else if(szType == _T("SubAmount")){
					grp = rpt.GetGroupHeader(2);
					rptDetail = rpt.AddDetail(grp);
				//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
				//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
					rptDetail->SetValue(_T("SubGroupName"), fee.szName);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);
					FormatCurrency(fee.nInsPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsPaid"), tmpStr);

				}
				else if(szType == _T("Item")){
					rptDetail = rpt.AddDetail();
					rptDetail->SetValue(_T("1"), fee.szID);
					rptDetail->SetValue(_T("2"), fee.szName);
					rptDetail->SetValue(_T("3"), fee.szUnit);
					FormatCurrency(fee.nQuantity, tmpStr);
					rptDetail->SetValue(_T("4"), tmpStr);
					FormatCurrency(fee.nPrice, tmpStr);
					rptDetail->SetValue(_T("5"), tmpStr);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("6"), tmpStr);
					FormatCurrency(fee.nInsPrice, tmpStr);
					rptDetail->SetValue(_T("7"), tmpStr);
					FormatCurrency(fee.nInsPaid, tmpStr);
					rptDetail->SetValue(_T("8"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("9"), tmpStr);
				}
				else if(szType == _T("SubItem")){
					rptDetail = rpt.AddDetail();
					CReportItem *obj;
					rptDetail->GetItem(_T("1"))->SetItalic(true);
					rptDetail->GetItem(_T("2"))->SetItalic(true);
					rptDetail->GetItem(_T("3"))->SetItalic(true);
					rptDetail->GetItem(_T("4"))->SetItalic(true);
					rptDetail->GetItem(_T("5"))->SetItalic(true);
					rptDetail->GetItem(_T("6"))->SetItalic(true);
					obj = rptDetail->GetItem(_T("7"));
					if(obj)obj->SetItalic(true);
					obj = rptDetail->GetItem(_T("8"));
					if(obj)obj->SetItalic(true);

					rptDetail->SetValue(_T("1"), fee.szID);
					rptDetail->SetValue(_T("2"), fee.szName);
					rptDetail->SetValue(_T("3"), fee.szUnit);
					FormatCurrency(fee.nQuantity, tmpStr);
					rptDetail->SetValue(_T("4"), tmpStr);
					FormatCurrency(fee.nPrice, tmpStr);
					rptDetail->SetValue(_T("5"), tmpStr);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("6"), tmpStr);
					FormatCurrency(fee.nInsPrice, tmpStr);
					rptDetail->SetValue(_T("7"), tmpStr);
					FormatCurrency(fee.nInsPaid, tmpStr);
					rptDetail->SetValue(_T("8"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("9"), tmpStr);
				}
				else if(szType == _T("TotalAmount")){
					grp = rpt.GetGroupHeader(3);
					rptDetail = rpt.AddDetail(grp);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("TotalAmount"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
					FormatCurrency(fee.nPatpaid, tmpStr);
					rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
					FormatCurrency(fee.nInsPaid, tmpStr);
					rptDetail->SetValue(_T("TotalInsPaid"), tmpStr);
				}
		}
	}
	
		//Report Footer
	rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
	FormatCurrency(dTotalCost[0], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	CString szSumInWord;
	tmpStr.Format(_T("%.2f"), dTotalCost[0]);
	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
	FormatCurrency(dTotalCost[1], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
	FormatCurrency(dTotalCost[0]-dTotalCost[1], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);

	if(bDetailFee){
		szWhere.Format(_T("and hfi_deptid='%s' "), m_szPaymentDept);
	}
	else
		szWhere.Empty();

	szSQL.Format(_T(" SELECT 	date(hfi_recvdate) as recvdate, ") \
_T(" 	hfi_receiver as receiveby, ") \
_T(" 	hfi_desc as desc, hfi_type as feetype, ") \
_T(" 	case when hfi_type='A' then hfi_patpaid ") \
_T(" 	when hfi_type='D' then hfi_discount ") \
_T(" 	when hfi_type='R' then hfi_cost else 0 end as amount") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfi_docno=%ld and hfi_type in('A') and hfi_category='A' %s ") \
_T(" ORDER BY hfi_invoiceno;"), m_nDocumentNo, szWhere);
	rs.ExecSQL(szSQL);
	

	double nTotalAdvance=0, nTotalDiscount=0;
	while(!rs.IsEOF()){
		
		grp = rpt.GetGroupHeader(2);
		rptDetail = rpt.AddDetail(grp);

		szDesc.Format(_T("[%s] %s (%s)"), 
			CDate::Convert(rs.GetValue(_T("recvdate")), yyyymmdd, ddmmyyyy), 
				rs.GetValue(_T("desc")), 
				GetDoctorName(rs.GetValue(_T("receiveby"))));

		rptDetail->SetValue(_T("SubGroupName"), szDesc);
		rs.GetValue(_T("amount"), tmpStr);
		rs.GetValue(_T("feetype"), szType);
		if(szType == _T("A"))
			nTotalAdvance += ToDouble(tmpStr);
		else if(szType == _T("D"))
			nTotalDiscount += ToDouble(tmpStr);
		rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
		rs.MoveNext();
	}

	if(nAdvance <= 0)
		nAdvance = nTotalAdvance;
	FormatCurrency(nAdvance, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Advance"), tmpStr);

	szSQL.Format(_T(" SELECT sum(hfi_discount) as amount ") \
	_T(" FROM hms_fee_invoice ") \
	_T(" WHERE hfi_docno=%ld and hfi_type in('D') "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	tmpStr.Empty();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("amount"), nDiscount);
		
	}
	if(nDiscount <= 0)
		nDiscount = nTotalDiscount;

	tmpStr.Empty();
	FormatCurrency(nDiscount, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Discount"), tmpStr);

	tmpStr.Empty();
	if(bDetailFee)
		szWhere.Format(_T(" and hfi_refinvoice=%ld"), nInvoiceNo);
	else
		szWhere.Empty();

	szSQL.Format(_T("select hfi_desc, case when hfi_type='R' then hfi_cost else hfi_patpaid end as amount from hms_fee_invoice where hfi_docno=%ld and hfi_type in('A','R') and hfi_category='D' %s"), nDocumentNo, szWhere);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		CString szAmount;
		FormatCurrencyStr(rs.GetValue(_T("amount")), szAmount);
		tmpStr.Format(_T("%s: %s"),
			rs.GetValue(_T("hfi_desc")), szAmount);
		rpt.GetReportFooter()->SetValue(_T("Payable"), tmpStr);
	}
	else	
		rpt.GetReportFooter()->SetValue(_T("Payable"), _T(""));

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfi_printed=hfi_printed+1 WHERE hfi_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);

//	rpt.Print();
	rpt.PrintPreview();

}




void	CMainFrame::PrintHemaReceipt(long nInvoiceNo)
{
	CReport rpt;
	CString tmpStr, szSQL, szObjectType, szWhere, szAdmitDate, szEndDate,szDepartments;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	long	nDocumentNo;
	double nAdvance, nAdvancePayment, nDiscount=0, nRefund;

	szSQL.Format(_T("  SELECT distinct on(hd_docno) hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T("	date_part('year', hp_birthdate) as yearofbirth, ") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text)) as ethnicdesc, ") \
				_T(" 	hp_dtladdr as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hd_result) as result, ")
				_T(" 	date(hd_admitdate) as examdate,") \
				_T(" 	date(hd_enddate) as enddate,") \
				_T(" 	date(hcr_admitdate) as admitdate,") \
				_T(" 	date(hcr_dischargedate) as dischargedate,") \
				_T("	date(hcr_dischargedate)+1 - date(hcr_admitdate) as Numbertreat, ") \
				_T(" 	hcr_mainicd as mainicd ,") \
				_T(" 	hcr_maindisease as maindisease ,") \
				_T("	hcr_treatdoctor as treatdoctor, ") \
				_T("	hcr_reldisease as ireldisease,") \
				_T("	(select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hcr_result)  as iresult, ")
				_T("	(select ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hd_disrate as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T(" 	hfi_deptid as deptid,") \
				_T(" 	hfi_depts as depts,") \
				_T(" 	hfi_bookno as bookno,") \
				_T(" 	hfi_serialno as serialno,") \
				_T(" 	hfi_recvno as recvno,") \
				_T(" 	hfi_recvdate as recvdate, ") \
				_T(" 	hfi_receiver as receiver,") \
				_T(" 	hfi_desc as reason, ") \
				_T(" 	hfi_cost as cost,") \
				_T(" 	hfi_discount as discount,") \
				_T(" 	hfi_patpaid as patpaid, ") \
				_T(" 	hfi_advanceamt as advanceamt, ") \
				_T(" 	hfi_advpayment as advpayment, ") \
				_T(" 	hfi_refundamt as refundamt ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfi_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfi_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfi_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfi_docno=%ld and hfi_invoiceno=%ld "), m_nDocumentNo, nInvoiceNo);
	
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	rs.GetValue(_T("advanceamt"), nAdvance);
	rs.GetValue(_T("advpayment"), nAdvancePayment);
	rs.GetValue(_T("refundamt"), nRefund);

	rs.GetValue(_T("objecttype"), tmpStr);

	if(!rpt.Init(_T("Reports/HMS/HF_HEMARECEIPT.RPT"), true) )
	{
		return;
	}
	
	//Report Header
	tmpStr.Empty();
	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);
	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("serialno")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);


	CString szDate;
	tmpStr = GetSysDateTime();
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);

	//rs.GetValue(_T("pname"), tmpStr);
	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), tmpStr);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);

	rs.GetValue(_T("workplace"), tmpStr);
	if(tmpStr.IsEmpty())
		rs.GetValue(_T("address"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);

	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	
	rs.GetValue(_T("objecttype"), szObjectType);
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	
	rs.GetValue(_T("disrate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), tmpStr);

	CString outline;
	rs.GetValue(_T("insline"), outline);
	if(outline == _T("Y")){
		TranslateString(_T("Outline"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InsLine"), tmpStr);
	}
	else
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));

	rs.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);
	rs.GetValue(_T("regcode"), tmpStr);	
	rpt.GetReportHeader()->SetValue(_T("RegCode"), tmpStr);
	CReportItem *obj = rpt.GetReportHeader()->GetItem(_T("InsuranceCompany"));
	if(obj){
		CString szRegCode, insname;
		CRecord rsx(&m_db);
		rs.GetValue(_T("regcode"), szRegCode);
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);
		}

	}
		
	if(m_nInpatient == 0)
	{
		rs.GetValue(_T("diagnostic"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
		rs.GetValue(_T("reldisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
		rs.GetValue(_T("icd10"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);
		rs.GetValue(_T("result"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);
	}
	else
	{
		rs.GetValue(_T("maindisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
		rs.GetValue(_T("ireldisease"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
		rs.GetValue(_T("mainicd"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);
		rs.GetValue(_T("iresult"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);
	}

	rs.GetValue(_T("admitdate"), tmpStr);
	
	CString szDischargeDate;
	
	if(tmpStr.IsEmpty())
	{		
		rs.GetValue(_T("examdate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("admitdate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));		
		rs.GetValue(_T("enddate"), tmpStr);
		szDischargeDate = tmpStr;
		rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		
		rs.GetValue(_T("depts"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Department"), GetDepartments(tmpStr));	
	}
	else
	{		
		rpt.GetReportHeader()->SetValue(_T("admitdate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs.GetValue(_T("dischargedate"), tmpStr);
		szDischargeDate = tmpStr;
		rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

		
		CString szSQL2, icd10, maindisease;
		CRecord rsd(&m_db);

		// Lay thong ti ve phong va giuong
		szSQL2.Format(_T(" select (select hrl_name from hms_roomlist where hrl_id=hb_roomid and hrl_deptid=hb_deptid) as roomname, ") \
					_T(" (select hbl_name from hms_bedlist where hbl_deptid=hb_deptid and hbl_roomid=hb_roomid and hbl_id=hb_bedid) as bedname ") \
					_T(" from hms_bed where hb_docno =%ld order by hb_idx DESC "), nDocumentNo);
		
		rsd.ExecSQL(szSQL2);
		if(!rsd.IsEOF())
		{	
			rsd.GetValue(_T("roomname"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("roomname"), tmpStr);
			rsd.GetValue(_T("bedname"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("bedname"), tmpStr);
		}

		//Lay ra ta ca cac khoa theo thu tu

		rs.GetValue(_T("depts"), tmpStr);
		
		szSQL2.Format(_T(" SELECT hd_admitdept as deptid, hd_admitdate as admitdate, hd_enddate as enddate ") \
			_T(" FROM hms_doc ") \
			_T(" WHERE 	hd_docno=%ld ") \
			_T(" 	and '%s' like(chr(37)||hd_admitdept||chr(37))"), nDocumentNo, tmpStr);

		
		rsd.ExecSQL(szSQL2);
		
		if(!rsd.IsEOF())
		{					
			rsd.GetValue(_T("Admitdate"), tmpStr);
			szAdmitDate.Format(_T("%s"), CDate::Convert(tmpStr, yyyymmdd,ddmmyyyy));
			rsd.GetValue(_T("enddate"), tmpStr);
			szDischargeDate.Format(_T("%s"), CDate::Convert(tmpStr, yyyymmdd,ddmmyyyy));
			tmpStr.Format(_T("(%s-%s)"),szAdmitDate.Mid(0,5) ,szDischargeDate.Mid(0,5) );
			rsd.GetValue(_T("deptid"), szDepartments);			
			szDepartments += tmpStr + _T("->");			
		}		
		
		rs.GetValue(_T("depts"), tmpStr);

		szSQL2.Format(_T(" SELECT htr_deptid as deptid, date(htr_admitdate) as admitdate, ") \
			_T(" date(htr_dischargedate) as dischargedate, htr_mainicd as icd10, htr_maindisease as maindisease ") \
			_T(" FROM hms_treatment_record ") \
			_T(" WHERE 	htr_docno=%ld ") \
			_T(" 	and '%s' like(chr(37)||htr_deptid||chr(37))") \
			_T(" ORDER BY htr_idx"), nDocumentNo, tmpStr);
		
		
		rsd.ExecSQL(szSQL2);
		if(!rsd.IsEOF())
		{
			rsd.GetValue(_T("admitdate"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("admitdate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		}
		int nCountRow=0;
		while(!rsd.IsEOF()){
			nCountRow++;
			tmpStr.Format(_T("%s"), rsd.GetValue(_T("deptid")));
			szDepartments += tmpStr;
			rsd.GetValue(_T("Admitdate"), tmpStr);
			szAdmitDate.Format(_T("%s"), CDate::Convert(tmpStr, yyyymmdd,ddmmyyyy));
			rsd.GetValue(_T("dischargedate"), tmpStr);
			szDischargeDate.Format(_T("%s"), CDate::Convert(tmpStr, yyyymmdd,ddmmyyyy));
			tmpStr.Format(_T("(%s-%s)"),szAdmitDate.Mid(0,5) ,szDischargeDate.Mid(0,5) );
			if(!szDepartments.IsEmpty()){
				szDepartments += tmpStr;
				if (nCountRow < rsd.GetRecordCount()) szDepartments += _T("->");
			}
			rsd.GetValue(_T("icd10"), icd10);
			rsd.GetValue(_T("maindisease"), maindisease);
			rsd.MoveNext();
		}		
		
		rpt.GetReportHeader()->SetValue(_T("Department"), szDepartments);
		rs.GetValue(_T("maindisease"), maindisease);
		rpt.GetReportHeader()->SetValue(_T("Diagnostic"), maindisease);
		rpt.GetReportHeader()->SetValue(_T("ICD10"), icd10);
		rs.GetValue(_T("Numbertreat"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("Numbertreat"), tmpStr);
	}
	

	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));
	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("ReceiveDate"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	
	if(m_nInpatient == 0)
		rs.GetValue(_T("doctor"), tmpStr);
	else
		rs.GetValue(_T("treatdoctor"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("Doctor"), GetDoctorName(tmpStr));

	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(GetSignatureImage(tmpStr));
		img->SetFixedHeight(false);
	}	
	tmpStr.Empty();
	rs.GetValue(_T("receiver"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy"), GetDoctorName(tmpStr));
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetHBITMAP(GetSignatureImage(tmpStr));
		img2->SetFixedHeight(false);
	}	


	
		//Report Footer

	double dTotalCost=0;
	double dTotalInsPaid=0;
	double dTotalPatpaid = 0;
	double dTotalHemaPaid = 0;
	double dHemaPaidLimit = 10000000;
	rs.GetValue(_T("cost"), dTotalCost);
	FormatCurrency(dTotalCost, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	rs.GetValue(_T("discount"), dTotalInsPaid);
	FormatCurrency(dTotalInsPaid, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
	if(outline == _T("Y"))
		dTotalHemaPaid = dTotalCost*5/100;
	else
		dTotalHemaPaid = dTotalCost-dTotalInsPaid;

	if(dTotalHemaPaid > dHemaPaidLimit)
		dTotalHemaPaid = dHemaPaidLimit;

	dTotalPatpaid = dTotalCost-dTotalInsPaid-dTotalHemaPaid;
	

	FormatCurrency(dTotalPatpaid, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);
	FormatCurrency(dTotalHemaPaid, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("HemaPaid"), tmpStr);
	CDate sysDate;
	sysDate.ParseDate(GetSysDate());
	rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(), sysDate.GetMonth(), sysDate.GetYear());
//	rpt.Print();
	rpt.PrintPreview();

}





void CMainFrame::OnReportsGeneralexaminationcost79areport()
{
	CHMSGeneralInsuranceCostReport79ADialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportsGeneralexaminationcost80areport()
{
	CHMSGeneralInsuranceCostReport80ADialog dlg(this);
	dlg.DoModal();	
}

void CMainFrame::OnReportsGeneralexaminationcostofPatientsService()
{	
	//Tong hop chi phi kham chua benh dich vu phong kham
	rptGeneralExaminationCostsOfPatientsServiceReport dlg(this);
	dlg.DoModal();	
}

void CMainFrame::OnReportsGeneralexaminationcostofPatientsPolicy()
{	//Tong hop chi phi kham chua benh theo doi tuong benh nhan phong kham
	rptGeneralExaminationCostsOfPatientsPolicyReport dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportsGeneraltreatmentcostsofpatientsservice()
{
	rptGeneralTreatmentCostsOfPatientsServiceReport dlg(this);
	dlg.DoModal();
	
}

void CMainFrame::OnReportsGeneraltreatmentcostsofpatientspolicy()
{
	rptGeneralTreatmentCostsOfPatientsServiceReport dlg(this);
	dlg.DoModal();		
}

void CMainFrame::OnReportsGeneralexaminationandtreatmentcostsofhospital()
{
	// TODO: Add your command handler code here
}



void CMainFrame::OnReportsGeneralexaminationcostsforobjects()
{
	rptGeneralExaminationCostsForObjectsReport dlg(this);
	dlg.DoModal();

}

void CMainFrame::OnReportsGeneraltreatmentcostsforobjects()
{
	rptGeneralTreatmentCostsForObjectsReport dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportsAdmissionadvancepaymentpatientlist()
{
	//Bao cao tinh hinh thu tam ung.
	rptAdmissionadvancepaymentpatientlistReportDialog dlg(this);	
	dlg.DoModal();
}

void CMainFrame::OnReportsRefundpatientlist()
{
	rptRefundPatientListReportDialog dlg(this);
	dlg.DoModal();	
}

void CMainFrame::OnReportsDiscountpatientlist()
{	//Bao cao danh sach benh nhan duoc mien giam
	rptDiscountPatientListReportListReportDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportsGeneralExaminationCostForInsuranceObject()
{
	rptGeneralExaminationCostForInsuranceReport14A dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportsGeneralTreatmentCostForInsuranceObject()
{
	rptGeneralTreatmentCostForInsuranceReport14B dlg(this);
	dlg.DoModal();	
	
}

void CMainFrame::OnReportsGeneralexaminationcostforinsuranceregistrationplace()
{
	rptGeneralExaminationCostForInsuranceRegistrationPlaceReport dlg(this);
	dlg.DoModal();	
}



void CMainFrame::OnReportsGeneralexaminationcostforinsuranceline()
{
	rptGeneralExaminationCostForInsuranceLineReport dlg(this);
	dlg.DoModal();
	
}



void CMainFrame::OnReportsGeneralexaminationcostforinsuranceobjectgroup()
{
	rptGeneralExaminationCostForInsuranceObjectGroupReport14A dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnReportsGeneraltreatmentcostforinsuranceobjectgroup()
{
	rptGeneralTreatmentCostForInsuranceObjectGroupReport14B dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportsGeneraltreatmentcostforinsuranceregistrationplace()
{
	rptGeneralTreatmentCostForInsuranceRegistrationPlaceReport dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportsGeneraltreatmentcostforinsuranceline()
{
	rptGeneralTreatmentCostForInsuranceLineReport dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportsGeneralexaminationcostsdaily()
{
	rptGeneralExaminationCostsDailyReport dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnGroupsofpatientsreportedcostofmedicalinsuranceoutpatientGeneralexaminationcost25areport()
{
	// TODO: Add your command handler code here
	//Bao cao bao BHYT noi tru 25A
	
	CHMSGeneralCostInsuraceReport25aDialog dlg(this);
	dlg.m_nButtonID=0;
	dlg.DoModal();
}

void CMainFrame::OnThegroupofpatientsreportingcosthealthinsuranceinpatientGeneraltreatmentcost80areport()
{
	// TODO: Add your command handler code here
	//Bao cao bao BHYT noi tru 26A
	CHMSGeneralCostReport26ADialog dlg(this);	
	dlg.DoModal();
}

void CMainFrame::OnReportsGeneralstatisticsandtechnicalservicesforpatientsusingmedicalinsurance32812()
{
	// TODO: Bao cao su dung dich vu ky thuat theo quy, nam (Mau 21/BHYT)
	CHMSInsuraceRepor21aDialog dlg(this);
	dlg.m_nButtonID=1;
	dlg.DoModal();
}
bool CMainFrame::IsAllowDischargePayment(long nDocumentNo){

	CRecord rs(&m_db);
	CString szSQL, szDept, szStatus, szMsg, tmpStr, szDeptID, szWhere;
	if(m_nInpatient == 0)
	{
/*
		if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
		{
			szWhere.Empty();
			szSQL.Format(_T("SELECT hd_status as status FROM hms_doc WHERE hd_docno=%ld "), nDocumentNo);
			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("status"), szStatus);
				if(szStatus != _T("T"))
				{
					return false;
				}
			}
			else return false;

		}
*/
		return true;
	}

//Kiem tra neu ho so chua ket thuc thi ko cho phep thanh toan ra vien
	
	
	if(m_szPaymentMethod == _T("D")){
		szWhere.Format(_T(" and htr_deptid='%s' "), m_szPaymentDept);
	}

	CString szSuggestion;
	szSQL.Format(_T("SELECT htr_status as status,htr_suggestion as suggestion FROM hms_treatment_record WHERE htr_docno=%ld %s ORDER BY htr_idx"), nDocumentNo, szWhere);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		rs.GetValue(_T("status"), szStatus);
		if(szStatus != _T("T")){
			return false;
		}

		rs.GetValue(_T("suggestion"), szSuggestion);
		rs.MoveNext();
	}
	if(m_szPaymentMethod != _T("D") && szSuggestion != _T("D") && szSuggestion != _T("T")){
		return false;
	}

	return true;
}


bool CMainFrame::IsFinishAndPaymentExaminationCost(long nDocumentNo){
	if(m_nInpatient == 0)
	{
		CString szSQL, szStatus;
		CRecord rs(&m_db);
		if(m_szObjectType == _T("I") || m_szObjectType == _T("C") || m_szObjectType == _T("D"))
		{
			szSQL.Format(_T("SELECT hd_status as status FROM hms_doc WHERE hd_docno=%ld "), nDocumentNo);
			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("status"), szStatus);
				if(szStatus != _T("T"))
				{
					return false;
				}
			}
			else return false;

		}
		return true;
	}
	return true;
}

void CMainFrame::OnMenu32813()
{
	//Bao cao BHYT benh nhan dieu tri ngoai tru phong kham
	rptGeneralCostInsuraceReportOutpatient25aDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportsTonghopchiphikhamchuabenhvienphitheokhoa()
{
	// Bao cao tong hop chi phi kham va dieu tri theo khoa
	rptBaocaotonghopchiphivienphidieutri dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnMenu32815()
{
	// Bao cao tong hop chi phi kham va dieu tri theo khoa (chi tiet)
	rptBaocaotonghopchiphivienphidieutrichitiet dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportsDanhsachbenhnhanchuathanhtoanvienphi()
{
	// Danh sach benh nhan chua thanh toan vien phi
	CrptBaodanhsachbenhnhanchuathuphitheokhoa dlg(this);	
	dlg.DoModal();
}
