// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "resource.h"
#include "HMSCloseoutDialog.h"
#include "ReportDocument.h"
#include "ImageEx.h"
#include "SYSPasswordChangeDialog.h"
#include "GuiInputDataDialog.h"

#include "Excel.h"
#include ".\mainfrm.h"
#include "HMSReportFormDialog.h"
#include "FMSummaryPaymentAndReceiptDialog.h"

#include "StringToken.h"
#include "FormFooterSetup.h"
#include "StringUtil.h"
#include "HMSThietLap_Mien_Thuoc_ungthu.h"
#include "HMSThietLap_Thongtin_Congty.h"
#include "SysDepartment_V2.h"

IMPLEMENT_DYNAMIC(CMainFrame, CGuiMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CGuiMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_INVOICESETUP, OnFileInvoicesetup)
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_WM_SIZE()
	ON_COMMAND(ID_FILE_REPORTS, OnMenuReports)
	ON_COMMAND(ID_FILE_SETUPRECEIPTDATE, OnFileSetupreceiptdate)
	//ON_COMMAND(ID_FILE_EDITFEERECEIVEDATE, OnFileEditfeereceivedate)
	ON_COMMAND(ID_FILE_KEEPTRACKOFPATIENTFEE, OnFileKeeptrackofpatientfee)
	ON_COMMAND(ID_FILE_SUMMARYPAYMENTRECEIPT, OnFileSummarypaymentreceipt)
	ON_COMMAND(ID_FILE_SETTINGPAYMENTMETHOD, OnFileSettingpaymentmethod)
	ON_COMMAND(ID_MenuFormFooterSetup, OnMenuformfootersetup)
	ON_COMMAND(ID_Menu32849, OnMenuElectronicControl)
	ON_COMMAND(ID_SETTINGS_SMARTCARD, OnSettingsSmartCard)
	ON_COMMAND(ID_SETTINGS_MIENTHUOCUNGTHU, OnSettingPassDrugCancer)
	ON_COMMAND(ID_SETTINGS_DANHMUCCONGTY, OnSettingComPanyList)
	ON_COMMAND(ID_SETTINGS_DANHMUCKHOA, OnSettingDeptList)

END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	SetLocalLang(1);
	m_szModuleName = _T("HOSPITAL FEE MANAGEMENT MODULE");
	
	m_szModuleID = _T("FM");
	m_szSize = CSize(1024, 700);
	m_szVersion = _T("9.6");
	m_nInpatient = 0;
	m_szAutoPrintInvoice = m_szAutoPrintDischargeVote = _T("N");
	m_szPrintDrugDelivery = _T("N");
	m_szPrintHemaReceipt = _T("N");
	m_szAddonedayoutofhospital =_T("N");
	m_bDischarge = false;
	m_szFeeTypes = _T("0");
	m_nInsOffLinePayment = false;
	m_szObjectType = _T("S");
	m_bWaitForPayment = false;
	m_szPaymentMethod = _T("TM1");
	m_szElectronicInvoicesConnection = _T("N");
	m_isInfertility = false;
	m_isPregnancy = false;
	m_szExtIns = _T("N");
}

CMainFrame::~CMainFrame()
{
	

}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	
	if (CGuiMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	CString tmpStr;
	if (GetCurrentUser() == _T("hathuybh"))
	{
	TranslateString(_T("QUẢN LÝ VIỆN PHÍ - CHẾ ĐỘ POST HÓA ĐƠN TỰ ĐỘNG"), tmpStr);
	}
	else
	TranslateString(_T("HOSPITAL FEE MANAGER"), tmpStr);
	SetWindowText(tmpStr);
	

	//ModifyStyle(WS_MAXIMIZEBOX|WS_SIZEBOX|WS_MINIMIZEBOX, 0);
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	IsInPatient();

	CWnd *pWnd = GetPane();

	
	m_wndPatientFee.Create(pWnd);
	AddView(_T("Patient Profile"), &m_wndPatientFee);

	m_wndPatientList.Create(pWnd);
	AddView(_T("Patient List"), &m_wndPatientList);
	
	/*else
	{
		m_wndInPatientList.Create(pWnd);
		AddView(_T("Inpatient List"), &m_wndInPatientList);
	}*/

	m_wndAdditionalFeeList.Create(this);
	AddView(_T("Additional List"), &m_wndAdditionalFeeList);

	m_wndPatientDepositList.Create(this);
	AddView(_T("Patient Deposit"), &m_wndPatientDepositList);

	if (CheckPermission(_T("15.16")))
	{
		m_wndCashManager.Create(this);
		AddView(_T("Cash Manager"), &m_wndCashManager);
	}
	
	/*if(CheckPermission(_T("FM.100.01")))
	{
		m_wndDataPurchaseOrderList.Create(this);
		AddView(_T("Tổng hợp hóa đơn nhập kho"), &m_wndDataPurchaseOrderList);
	}*/

	//if(CheckPermission(_T("FM.100.01")))
	{
		m_wndPaymentOnlineList.Create(this);
		AddView(_T("Quản lý thanh toán Online"), &m_wndPaymentOnlineList);
	}

	RecalcLayout();

	SetActivePane(0);

	SetForegroundWindow();

//Quyen thu phi kham
	m_szFeeTypes = _T("'#'");
	if(CheckPermission(_T("01.01.E"))){
		m_szFeeTypes +=_T(",'E'");
	}
//Quyen thu phi thuoc
	if(CheckPermission(_T("01.01.D"))){
		m_szFeeTypes += _T(",'D','M','R'");
	}

//Quyen thu phi can lam sang(xet nghiem, chan doan hinh anh)
	if(CheckPermission(_T("01.01.P"))){
		m_szFeeTypes += _T(",'T','P'");
	}
//quyen thu phi thu thuat
	if(CheckPermission(_T("01.01.O"))){
		m_szFeeTypes += _T(",'O'");
	}

	//Quyen thu phi khac
	if(CheckPermission(_T("01.01.X"))){
		m_szFeeTypes += _T(",'X'");
	}

	m_szObjectTypeGroup.Empty();
	if(CheckPermission(_T("01.15"))){
		m_szObjectTypeGroup.AppendFormat(_T("'I','C'"));
		m_bPrintSummarize = true;
	}
	if(CheckPermission(_T("01.16"))){
		if(!m_szObjectTypeGroup.IsEmpty())
			m_szObjectTypeGroup.AppendFormat(_T(","));
		m_szObjectTypeGroup.AppendFormat(_T("'D','P'"));
		m_bPrintSummarize = true;
	}
	if(m_szObjectTypeGroup.IsEmpty()){
		m_szObjectTypeGroup = _T("'S'");
		
	}
	//Them quyen load tat ca benh nhan vien phi
	if(CheckPermission(_T("01.20"))){
		m_szObjectTypeGroup.Empty();
	}
//	if(m_szObjectTypeGroup.Find(_T("S")) != -1)
	{
		m_bPrintSummarize = true;
	}

	m_szFeeTypesPerm = m_szFeeTypes;



	OnInitSmartCard();
	
	return 0;
}


void CMainFrame::OnInitializes(){
	CHMSMainFrame::OnInitializes();

	CString szStatus, szStatusLabel, szDate;
	CString szSQL;
	szSQL.Format(_T("update hms_fee_control set hfc_recvdate=sysdate where hfc_userid='%s' and hfc_recvdate < trunc(sysdate) "), GetCurrentUser());
	ExecSQL(szSQL);
	
	GetSerialInformation();

	if(CompareDate(m_szRecvDate.Left(10), GetSysDate()) < 0)
	{
//		ShowMessageBox(_T("Notice, Receipt date < current date. You must setup working date"), MB_ICONWARNING);
	}

	TranslateString(_T("User ID: %s - Working Date: %s"), szStatusLabel);
	szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(m_szRecvDate, yyyymmdd, ddmmyyyy));
	szStatus.AppendFormat(_T(" - Server:%s"), GetHost());
	SetStatusText(szStatus, 1);

	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT * FROM hms_config "));
	rs.ExecSQL(szSQL);
	m_szAutoPrintInvoice = m_szAutoPrintDischargeVote = _T("N");
	m_szReceiptMethod = _T("D");
	m_szPrintAllCostInDischargeReceipt = _T("N");
	m_szViewInsurancePaid = _T("N");
	m_szDiscountPrintReport =_T("N");
	m_nPrintDepositNumberPage = 1;
	m_nPrintDiscountNumberPage = 1;
	m_nPrintRefundNumberPage = 1;
	m_nPrintReceiptNumberPage = 1;
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hf_autoprintinvoice"), m_szAutoPrintInvoice);
		rs.GetValue(_T("hf_autoprintdischargevote"), m_szAutoPrintDischargeVote);
		rs.GetValue(_T("hf_print_generalexamcostsheet_type"), m_szPrintGeneralExamCostSheetType);
		rs.GetValue(_T("hc_fee_advance_payment"), m_szDepositReceipt);
		rs.GetValue(_T("hc_fee_advance_emergency"), m_szDepositEmergency);
		rs.GetValue(_T("hf_payment_method"), m_szReceiptMethod);
		rs.GetValue(_T("hf_print_all_cost"), m_szPrintAllCostInDischargeReceipt);
		rs.GetValue(_T("hf_print_drugdelivery"), m_szPrintDrugDelivery);
		rs.GetValue(_T("hf_print_hemareceipt"), m_szPrintHemaReceipt);
		rs.GetValue(_T("hf_print_detail_disease"), m_szPrintDetailDisease);
		rs.GetValue(_T("hf_view_insurance_paid"), m_szViewInsurancePaid);
		rs.GetValue(_T("hms_clientid"), m_szClientID);
		rs.GetValue(_T("he_discount_print_report"), m_szDiscountPrintReport);
		rs.GetValue(_T("hf_Addonedayoutofhospital"),m_szAddonedayoutofhospital);
		rs.GetValue(_T("hf_printdeposit_numberpage"),m_nPrintDepositNumberPage);
		rs.GetValue(_T("hf_printdiscount_numberpage"),m_nPrintDiscountNumberPage);
		rs.GetValue(_T("hf_printrefund_numberpage"),m_nPrintRefundNumberPage);
		rs.GetValue(_T("hf_printreceipt_numberpage"),m_nPrintReceiptNumberPage);
		rs.GetValue(_T("hms_insoffline"), m_nInsOffLinePayment);
		rs.GetValue(_T("hf_printdetailref_numberpage"), m_nPrintDetailRefundNumberPage);
		rs.GetValue(_T("hf_electronicinvoice"), m_szElectronicInvoicesConnection);

		m_nPrintDepositNumberPage = max(m_nPrintDepositNumberPage, 1);
		m_nPrintDiscountNumberPage = max(m_nPrintDiscountNumberPage, 1);
		m_nPrintRefundNumberPage = max(m_nPrintRefundNumberPage, 1);
		m_nPrintReceiptNumberPage = max(m_nPrintReceiptNumberPage, 1);
		m_nPrintDetailRefundNumberPage = max(m_nPrintDetailRefundNumberPage, 1);

	}
	
	
	if(m_UserInfo.su_hms_xdept == _T("C1.1")){
		m_IsC11 = TRUE;
	}
	if(m_UserInfo.su_hms_xdept == _T("C1.2")){
		m_IsC12 = TRUE;
	}
	if(m_UserInfo.su_hms_xdept == _T("C1.3")){
		m_IsC13 = TRUE;
	}


	//if(m_szElectronicInvoicesConnection == _T("Y"))
	{
		szSQL.Format(_T("SELECT * FROM HMS_ELECTRONICINFO "));
		rs.ExecSQL(szSQL);
		if(!rs.IsEOF())
		{
			rs.GetValue(_T("hef_url"), m_szInvUrl);
			rs.GetValue(_T("hef_userid"), m_szInvUserID);
			rs.GetValue(_T("hef_password"), m_szInvPassword);
			rs.GetValue(_T("hef_pattern"), m_szInvPattern);
			rs.GetValue(_T("hef_serial"), m_szInvSerial);
			rs.GetValue(_T("hef_pattern1"), m_szInvPattern1);
			rs.GetValue(_T("hef_serial1"), m_szInvSerial1);
		}
	}	

//#ifdef HAVE_POS
//	m_pos.Init(_T("117.0.34.12"), 1123, _T("00000001"), _T("6YW0Ax0v4rhrTJMDXRg92ICrmGF7nNaXdriYDYK1Bf1OJNYI8h"));
//	m_pos.OpenPort(_T("COM5"));
//#endif

	m_szPaymentMethod = AfxGetApp()->GetProfileString(_T("FEE"), _T("PAYMENT_METHOD"), _T("TM1"));

	// Lay thu muc goc lam viec
	::GetCurrentDirectory(MAX_PATH, m_szPath.GetBufferSetLength(MAX_PATH));
	m_szPath.ReleaseBuffer();
	

	m_bIsRequest = AfxGetApp()->GetProfileInt(_T("FEE"), _T("ISREQUEST"), 0);
	m_szRequestDept = AfxGetApp()->GetProfileString(_T("FEE"), _T("REQUEST_DEPT"), _T(""));
	if(!m_bIsRequest)
	{
		m_szRequestDept.Empty();
	}
}

void CMainFrame::GetSerialInformation(){
	CRecord rs(&m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T("SELECT hfc_recvdate, hfc_serialno, hfc_receiptno  FROM hms_fee_control WHERE hfc_userid='%s' "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		rs.GetValue(_T("hfc_recvdate"), m_szRecvDate);
		rs.GetValue(_T("hfc_serialno"), m_szSerialNo);
		rs.GetValue(_T("hfc_receiptno"), m_nReceiptNo);
		
	}
	else
	{
		m_szRecvDate = GetSysDate();
		m_szSerialNo = GetCurrentUser();
		m_nReceiptNo = 1;
	}
	m_szSerialNo.Trim();
	if(m_szSerialNo.IsEmpty())
	{
		m_szSerialNo = _T("PT");
	}

	tmpStr.Format(_T("%s %s"), m_szRecvDate.Left(10), GetSysTime());
	m_szRecvDate.Format(_T("%s"), tmpStr);		
}
void CMainFrame::OnFileChangepassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileInvoicesetup()
{
	
}


CString CMainFrame::GetDepartments(LPCTSTR lpszDepts)
{
	CString szDepts = lpszDepts;

	if (szDepts.IsEmpty())
		return _T("");

	szDepts.Replace(_T("["), _T("'"));
	szDepts.Replace(_T("]"), _T("'"));
	CString szSQL, szRet, tmpStr;
	CRecord rs(&m_db);

	if (szDepts.Find(_T("'")) == -1)
	{
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
void CMainFrame::PrintInvoice(long nInvoiceNo, bool bPreview, bool bDirect, int nPrintCount)
{
	//_msg(_T("Chào lộc xx"));
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString szSQL, szSQL1;
	CString tmpStr, szTemp;
	CString szpayment_method_code;

	CRecord rs(&m_db);
	CRecord rsl(&m_db);
	CRecord grs(&m_db);
	CRecord trs(&m_db);
	CRecord rss(&m_db);
	CRecord rsvl(&m_db);
	CRecord rsvlx(&m_db);

	int nInsRate = 0;
	long nDocumentNo;
	CString szObjectType;
	
	/*if (CheckPermission(_T("FM.100.07")))
	{
		return;
	}*/


	szSQL.Format(_T("  SELECT  NVL(hfe_payment_method, 'TM1') as payment_method_code ") \
					_T(" FROM hms_fee_invoice ") \
					_T(" WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	
	rsvlx.ExecSQL(szSQL);
	rsvlx.GetValue(_T("payment_method_code"), szpayment_method_code);

	//_msg(_T("%s"), szSQL);

	int nPrintCnt = m_nPrintReceiptNumberPage;
	if(nPrintCount > 0)
		nPrintCnt = nPrintCount;

		//_msg(_T("%d"), nPrintCnt);

	if (szpayment_method_code == _T("ATM") || szpayment_method_code == _T("CK") || szpayment_method_code == _T("TTD"))
	{
		nPrintCnt = 1;		
	}	
	if (!rpt.Init(_T("Reports/HMS/HF_INVOICEFEE.RPT"), false, false, nPrintCnt))
		return;

	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
					_T(" 	hd_docno as docno,") \
					_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T(" 	TO_CHAR(hp_birthdate, 'YYYY') as yearofbirth,") \
					_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
					_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
					_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
					_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
					_T(" 	hp_workplace as workplace,") \
					_T(" 	hd_doctor as doctor,") \
					_T("	hd_disrate as disrate, ") \
					_T(" 	hd_diagnostic as diagnostic,") \
					_T(" 	hd_reldisease as reldisease,") \
					_T(" 	trunc_date(hd_admitdate) as examdate,") \
					_T("	HMS_GetObjectType(hd_object) as objecttype, ") \
					_T("	hc_cardno as cardno, ") \
					_T("	hc_regdate as regdate, ") \
					_T("	hc_expdate as expdate, ") \
					_T("	HMS_GETHOSPITALNAME(hc_regcode) as regplace, ") \
					_T("	Get_DepartmentName(hfe_deptid) as deptname, ") \
					_T(" 	hfe_serialno as serialno,") \
					_T(" 	hfe_receiptno as recvno,") \
					_T(" 	hfe_date as recvdate, ") \
					_T(" 	hfe_staff as receiver,") \
					_T(" 	hfe_desc as reason, ") \
					_T(" 	hfe_amount as cost,") \
					_T(" 	hfe_discount as discount,") \
					_T(" 	HFE_FREEAMOUNT as freeamount,") \
					_T(" 	hfe_patpaid as patpaid, hfe_payment as payment, ") \
					_T(" hfe_deposit as deposit, hfe_ttldeposit as ttldeposit, hfe_refund as refund, ") \
					_T(" hfe_extins_payment as extins_payment, hfe_extins_unpaid as extins_unpaid, ") \
					_T("		 get_payment_method(hfe_payment_method) as payment_method  ") \
					_T(" FROM hms_fee_invoice ") \
					_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
					_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
					_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
					_T(" WHERE hfe_invoiceno=%ld "), nInvoiceNo);

		
		rs.ExecSQL(szSQL);
		//_msg(_T("%s"),szSQL);

		if (rs.IsEOF())
			return;

		rs.GetValue(_T("docno"), nDocumentNo);
		rs.GetValue(_T("objecttype"), szObjectType);

		tmpStr.Empty();
		szTemp.Empty();
		CString szRoom, szRoomLabel;
		double nTotalDeposit=0;
		double nTotalRefund=0;
		double nPreTotalDeposit=0; //So tien tam gui con lai truoc khi thu phi
		double nTotalPayment = 0;
		double nTotalReturn = 0;
		//Ticket 1668(The bao viet)
		double extins_payment = 0;
		double extins_unpaid = 0;
		double freeamount = 0;
		double  nTotalRefundAmount = 0; //trả lại bằng nghiệp vụ trả lại theo đề mục//

		rs.GetValue(_T("deposit"), nTotalDeposit);
		rs.GetValue(_T("refund"), nTotalRefund);
		rs.GetValue(_T("payment"), nTotalPayment);
		rs.GetValue(_T("ttldeposit"), nPreTotalDeposit);
		rs.GetValue(_T("extins_payment"), extins_payment);
		rs.GetValue(_T("extins_unpaid"), extins_unpaid);
		rs.GetValue(_T("freeamount"), freeamount);
		

		if (szObjectType == _T("S"))
		{
			szSQL.Format(_T("SELECT hfe_orderid as orderid, ") \
				         _T("hfe_type as type ") \
						 _T("FROM hms_fee ") \
						 _T("WHERE hfe_invoiceno=%ld AND hfe_type IN('T','P') AND rownum=1 "), nInvoiceNo);

			trs.ExecSQL(szSQL);

			if (!trs.IsEOF())
			{
				trs.GetValue(_T("orderid"), tmpStr);
				trs.GetValue(_T("type"), szTemp);

				if (!tmpStr.IsEmpty())
				{
					if (szTemp == _T("T"))
					{
						szSQL.Format(_T(" SELECT hpc_roomid as roomid, hpc_deptid as deptid, hrl_name as roomname") \
									_T(" FROM hms_testorder") \
									_T(" LEFT JOIN hms_roomlist ON(hrl_id=hpc_roomid AND hrl_deptid=hpc_deptid)") \
									_T(" WHERE hpc_orderid=%ld AND rownum=1"),
									str2long(tmpStr));
					}
					else if (szTemp == _T("P"))
					{
						szSQL.Format(_T("SELECT hpc_roomid as roomid, hpc_deptid as deptid, hrl_name as roomname ") \
									_T("FROM hms_pacsorder ") \
									_T("LEFT JOIN hms_roomlist ON(hrl_id=hpc_roomid AND hrl_deptid=hpc_deptid) ") \
									_T("WHERE hpc_orderid=%ld AND rownum=1"),
									str2long(tmpStr));
					}
					rss.ExecSQL(szSQL);

					if (!rss.IsEOF())
					{
						TranslateString(_T("Room"), tmpStr);
						szRoomLabel.Format(_T("%s:"), tmpStr);
						rpt.GetReportHeader()->SetValue(_T("RoomLabel"), szRoomLabel);

						szRoom.Format(_T("%s"), rss.GetValue(_T("roomname")));
						rpt.GetReportHeader()->SetValue(_T("Room"), szRoom);
					}
				}
			}
		}

		tmpStr.Empty();
		szTemp.Empty();

	//	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
	//	grs.ExecSQL(szSQL);

		szSQL.Format(_T(" SELECT hfe_type AS feetype,") \
		_T("   hft_id as typeid, hft_name, hfe_group as groupid, ") \
		_T("   hfe_desc          AS name,") \
		_T("   hfe_unit          AS unit,") \
		_T("   hfe_unitprice     AS unitprice,") \
		_T("   SUM(hfe_discount) AS discount,") \
		_T("   SUM(hfe_patpaid)  AS cost,") \
		_T("   SUM(hfe_diffcost) AS diffcost") \
		_T(" FROM hms_fee") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON(hfg_id =hfe_group)") \
		_T(" LEFT JOIN hms_fee_type") \
		_T(" ON(hft_id                      = hfg_type_id)") \
		_T(" WHERE hfe_docno=%ld and hfe_invoiceno            = %ld") \
		_T(" AND hfe_status in ('P')") \
		_T(" AND (hfe_patpaid+hfe_diffpaid) > 0") \
		_T(" AND NVL(hfe_category,'N')     <> 'Y'") \
		_T(" GROUP BY hfg_index,") \
		_T("   hft_id,hft_name,  hfe_group, ") \
		_T("   hfe_type,") \
		_T("   hfe_desc,") \
		_T("   hfe_unit,") \
		_T("   hfe_unitprice") \
		_T(" ORDER BY hft_id,") \
		_T("   name,") \
		_T("   unit"), nDocumentNo, nInvoiceNo);

	
		rsl.ExecSQL(szSQL);
		//_msg(_T("%s"),szSQL);
		if(rsl.IsEOF())
		{
			//ShowMessageBox(_T("No data found"));
			return;
		}
		


		int nNumberPage = m_nPrintReceiptNumberPage;
		CReportSection* rptDetail=NULL;
		CReportSection* grpDetail;


		CString szFeeID, szID;

			TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
			int nChapter=0;

			int nCount = 0, nIndex, nChapterID=0;
			double dTotal[5];
			double dGroup1[5];
			double dGroup2[5];
			double dAmount = 0;
			int nItem = 0, nOldItem = 0, nItem2 = 0;
			int nLevel;
			bool bDeleteParent = false;
			bool bLoadItems = false;
			CString szNewGroup, szOldGroup, szParentGroup;

			for (int i =0; i < 5; i++)
			{
				dTotal[i] = 0;
				dGroup1[i] = 0;
				dGroup2[i] = 0;
			}
			
			nIndex = 0;
			CString szSubItem, szType, szTypeId, szOldTypeId;
			int nSubItem = 1;
			nChapterID = 0;
			CArray<FEEITEM, FEEITEM&> feeList;
			
			CReportSection *grp;
		
		
			while(!rsl.IsEOF())
			{
				
				rsl.GetValue(_T("typeid"), szTypeId);
				if(szTypeId != szOldTypeId)
				{
					if(dGroup1[0] > 0)
					{
						/*if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
							FEEITEM fee = feeList.GetAt(nOldItem);
							fee.nCost = dGroup2[0];
							feeList.SetAt(nOldItem, fee);
						}*/
						dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
						nItem2 = 0;
						FEEITEM fee_subamount;
						fee_subamount.szID.Empty();
						fee_subamount.szGroupID = _T("SubAmount");
						fee_subamount.szName.Format(_T("Tổng (%s)"), lpszChapter[nChapterID-1]);
						fee_subamount.nCost = dGroup1[0];
						feeList.Add(fee_subamount);
						dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
					}
					
					FEEITEM fee_type;
					fee_type.szGroupID = _T("Type");
					fee_type.szID = lpszChapter[nChapterID++];
					rsl.GetValue(_T("hft_name"), tmpStr);
					fee_type.szName = tmpStr;
					nItem = feeList.Add(fee_type);
					nOldItem = nItem;

					szOldTypeId = szTypeId;
					dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
					dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
				}
				rsl.GetValue(_T("groupid"), szNewGroup);
				szNewGroup.Trim();
				if(szNewGroup.Left(2) == _T("B1"))
				{
					if(szOldGroup != szNewGroup){
						szOldGroup = szNewGroup;
						/*if(dGroup2[0] > 0 && nItem2 > 0)
						{
							FEEITEM fee = feeList.GetAt(nOldItem);
							fee.nCost = dGroup2[0];
							feeList.SetAt(nOldItem, fee);
						}*/
						szSQL.Format(_T("SELECT hfg_name as name FROM hms_fee_group WHERE hfg_id='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						FEEITEM fee_group;
						fee_group.szGroupID = _T("SubGroup");
						fee_group.szID = _T("*");
						fee_group.szName = rs2.GetValue(_T("name"));
						nItem2 = feeList.Add(fee_group);
						nOldItem = nItem2;
						dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
					}
				}
				

				nSubItem++;
				double diffcost;
				FEEITEM fee;

				rsl.GetValue(_T("unitprice"), dAmount);
				fee.nPrice = dAmount;
				rsl.GetValue(_T("discount"), dAmount);
				fee.nDiscount = dAmount;

				rsl.GetValue(_T("cost"), dAmount);
				rsl.GetValue(_T("diffcost"), diffcost);
				dTotal[0] += dAmount;
				dGroup1[0] += dAmount;
				dGroup2[0] += dAmount;

				
				fee.szGroupID = _T("Item");
				fee.szID.Empty();
				fee.szName.Format(_T("%s"), rsl.GetValue(_T("name")));

								
				if(diffcost > 0 && fee.nDiscount > 0)
				{
					fee.szID = _T("CL");

				} 
				else if (!szObjectType.IsEmpty() &&
					szObjectType != _T("S") && fee.nDiscount == 0)
				{	
					fee.szID = _T("PN");
				}
				fee.szUnit = rsl.GetValue(_T("unit"));
				fee.nCost = ToDouble(rsl.GetValue(_T("cost")));
				feeList.Add(fee);						
					
				rsl.MoveNext();
			}

			if(dGroup1[0] > 0)
			{
						/*if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
							FEEITEM fee;
							fee = feeList.GetAt(nOldItem);
							fee.nCost = dGroup2[0];
							feeList.SetAt(nOldItem, fee);
						}*/
						dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
						nItem2 = 0;
						FEEITEM fee;
						fee.szID.Empty();
						fee.szGroupID = _T("SubAmount");
						fee.szName.Format(_T("Tổng (%s)"), lpszChapter[nChapterID-1]);
						fee.nCost = dGroup1[0];
						nItem = feeList.Add(fee);
						dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
			}


			/*if(dTotal[0] > 0){
				FEEITEM fee;
					TranslateString(_T("Total Amount"), tmpStr);
					fee.szGroupID = _T("TotalAmount");
					fee.szName = tmpStr;
					fee.nCost = dTotal[0];
					feeList.Add(fee);
			}*/

		
		
		rptDetail = NULL;
			
		//Report Header
	
		rptDetail = rpt.GetReportHeader();
		grpDetail = rptDetail;

			tmpStr.Empty();
			StringUpper(m_CompanyInfo.sc_pname, tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE"), tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE1"), tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE2"), tmpStr);
			StringUpper(m_CompanyInfo.sc_name, tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME1"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME2"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALADDRESS"), m_CompanyInfo.sc_address);
			grpDetail->SetValue(_T("HOSPITALADDRESS1"), m_CompanyInfo.sc_address);
			grpDetail->SetValue(_T("HOSPITALADDRESS2"), m_CompanyInfo.sc_address);
			
			rs.GetValue(_T("docno"), nDocumentNo);
			tmpStr.Format(_T("%ld"), nDocumentNo);
			grpDetail->SetValue(_T("DocumentNo"), tmpStr);
			grpDetail->SetValue(_T("DocumentNo1"), tmpStr);
			grpDetail->SetValue(_T("DocumentNo2"), tmpStr);
			tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("SerialNo")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
			
			grpDetail->SetValue(_T("ReceiptNo"), tmpStr);
			grpDetail->SetValue(_T("ReceiptNo1"), tmpStr);
			grpDetail->SetValue(_T("ReceiptNo2"), tmpStr);
			tmpStr.Format(_T("%ld"), nInvoiceNo);
			grpDetail->SetValue(_T("InvoiceNo"), tmpStr);
			grpDetail->SetValue(_T("InvoiceNo1"), tmpStr);
			grpDetail->SetValue(_T("InvoiceNo2"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128A]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128B]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128C]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[39]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[93]"), tmpStr);



			//rs.GetValue(_T("pname"), tmpStr);
			StringUpper(rs.GetValue(_T("pname")), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME"), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME1"), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME2"), tmpStr);
			rs.GetValue(_T("age"), tmpStr);
			grpDetail->SetValue(_T("Age"), tmpStr);
			grpDetail->SetValue(_T("Age1"), tmpStr);
			grpDetail->SetValue(_T("Age2"), tmpStr);
			
			rs.GetValue(_T("yearofbirth"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth2"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth3"), tmpStr);

			rs.GetValue(_T("sex"), tmpStr);
			grpDetail->SetValue(_T("Sex"), tmpStr);
			grpDetail->SetValue(_T("Sex1"), tmpStr);
			grpDetail->SetValue(_T("Sex2"), tmpStr);
			rs.GetValue(_T("address"), tmpStr);
			grpDetail->SetValue(_T("Address"), tmpStr);
			grpDetail->SetValue(_T("Address1"), tmpStr);
			grpDetail->SetValue(_T("Address2"), tmpStr);
			rs.GetValue(_T("deptname"), tmpStr);
			grpDetail->SetValue(_T("Department"), tmpStr);
			grpDetail->SetValue(_T("Department1"), tmpStr);
			grpDetail->SetValue(_T("Department2"), tmpStr);

			rs.GetValue(_T("disrate"), nInsRate);
			grpDetail->SetValue(_T("Disrate"), nInsRate);
			
			rs.GetValue(_T("examdate"), tmpStr);
			grpDetail->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExamDate1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExamDate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

			rs.GetValue(_T("cardno"), tmpStr);
			grpDetail->SetValue(_T("CardNo"), tmpStr);
			grpDetail->SetValue(_T("CardNo1"), tmpStr);
			grpDetail->SetValue(_T("CardNo2"), tmpStr);
			rs.GetValue(_T("expdate"), tmpStr);
			grpDetail->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExpiryDate1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExpiryDate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("regplace"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace1"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace2"), tmpStr);
			rs.GetValue(_T("diagnostic"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic1"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic2"), tmpStr);
			rs.GetValue(_T("reldisease"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease1"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease2"), tmpStr);

			CString szDate;
			rs.GetValue(_T("recvdate"), tmpStr);
			szDate.Format(grpDetail->GetValue(_T("ReceiptDate")), CDateTime::Convert(tmpStr,yyyymmdd|hhmmss,ddmmyyyy|hhmm));	
			grpDetail->SetValue(_T("ReceiptDate"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate1"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate2"), szDate);	
			rs.GetValue(_T("doctor"), tmpStr);
			tmpStr.Trim();
			grpDetail->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
			rs.GetValue(_T("receiver"), tmpStr);	
			tmpStr.Trim();

			grpDetail->SetValue(_T("ReceiveBy"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy1"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy2"), GetDoctorName(tmpStr));	
			
			rs.GetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason1"), tmpStr);
			grpDetail->SetValue(_T("reason2"), tmpStr);

			//grpDetail->SetValue(_T("payment_method"), rs.GetValue(_T("payment_method")));

			

			rptDetail = rpt.GetDetail(0); 			
			
			FEEITEM fee;
			for (int i =0; i < feeList.GetCount(); i++){
				fee = feeList[i];
				szType = fee.szGroupID;
					if(szType == _T("Type"))
					{
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						
						tmpStr = fee.szID;
						rptDetail->SetValue(_T("GH1"), tmpStr);
						StringUpper(fee.szName, tmpStr);
						rptDetail->SetValue(_T("GH2"), tmpStr);
					}
					if(szType == _T("Group")){
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						rptDetail->SetValue(_T("GH1"), fee.szID);
						rptDetail->SetValue(_T("GH2"), fee.szName);
					}
					else if(szType == _T("SubGroup")){
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						rptDetail->SetValue(_T("GH1"), fee.szID);
						rptDetail->SetValue(_T("GH2"), fee.szName);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
					}
					else if(szType == _T("SubAmount")){
						rptDetail = rpt.AddDetail();
						CReportItem* obj;
						rptDetail->SetValue(_T("1"), fee.szID);
						obj = rptDetail->GetItem(2);
						if(obj) obj->SetBold(true);
						rptDetail->SetValue(_T("2"), fee.szName);
						rptDetail->SetValue(_T("3"), _T(""));
						FormatCurrency(fee.nCost, tmpStr);
						obj = rptDetail->GetItem(6);
						if(obj) obj->SetBold(true);
						rptDetail->SetValue(_T("6"), tmpStr);
					}
					else if(szType == _T("Item"))
					{
						rptDetail = rpt.AddDetail();
						//rptDetail->SetValue(_T("1"), fee.szID);
						rptDetail->SetValue(_T("1"), fee.szID);
						rptDetail->SetValue(_T("2"), fee.szName);
						rptDetail->SetValue(_T("3"), fee.szUnit);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("6"), tmpStr);
					}
		/*
					else if(szType == _T("TotalAmount")){
						grp = rpt.GetGroupHeader(1);
						rptDetail = rpt.AddDetail(grp);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("TotalAmount"), tmpStr);
						FormatCurrency(fee.nDiscount, tmpStr);
						rptDetail->SetValue(_T("AmountDiscount"), tmpStr);
						FormatCurrency(fee.nPatPaid, tmpStr);
						rptDetail->SetValue(_T("AmountPatPaid"), tmpStr);
					}
		*/
			
			}
			//Report Footer

			
			grpDetail = rpt.GetReportFooter();

			FormatCurrency(ceil(dTotal[0]), tmpStr);
			grpDetail->SetValue(_T("TotalAmount"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount1"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount2"), tmpStr);

			
			grpDetail->SetValue(_T("Price"), tmpStr);
			grpDetail->SetValue(_T("Price1"), tmpStr);
			grpDetail->SetValue(_T("Price2"), tmpStr);

			grpDetail->SetValue(_T("TotalAmount"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount1"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount2"), tmpStr);


			FormatCurrency(ceil(dTotal[1]), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount1"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount2"), tmpStr);

			grpDetail->SetValue(_T("TotalDiscount"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount1"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount2"), tmpStr);

			/*double paided = ceil(dTotal[2]);
			paided -= extins_payment;
			if(paided < 0) paided = 0;*/
			FormatCurrency(nTotalPayment, tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid1"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid2"), tmpStr);

			grpDetail->SetValue(_T("TotalPatpaid"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid1"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid2"), tmpStr);
			
			double nPatPaid = dTotal[0];
			if(nTotalDeposit > 0)
			{

				FormatCurrency(nTotalDeposit, tmpStr);
				grpDetail->SetValue(_T("Deposit"), tmpStr);
				grpDetail->SetValue(_T("Deposit"), tmpStr);
				grpDetail->SetValue(_T("Deposit"), tmpStr);

				nPatPaid = dTotal[0] - nTotalDeposit;
				
				if(nPatPaid > 0)
				{
					FormatCurrency(nPatPaid, tmpStr);
					grpDetail->SetValue(_T("PatPaid"), tmpStr);
					grpDetail->SetValue(_T("PatPaid"), tmpStr);
					grpDetail->SetValue(_T("PatPaid"), tmpStr);
				}
				else
				{
					FormatCurrency(-1*nPatPaid, tmpStr);
					grpDetail->SetValue(_T("Refund"), tmpStr);
					grpDetail->SetValue(_T("Refund"), tmpStr);
					grpDetail->SetValue(_T("Refund"), tmpStr);
				}

				FormatCurrency(nPreTotalDeposit, tmpStr);
				grpDetail->SetValue(_T("TotalDeposit"), tmpStr);

			}

			if(extins_payment > 0)
			{
				//nPatPaid -= extins_paid;
				FormatCurrency(extins_payment, tmpStr);
				grpDetail->SetValue(_T("ExtInsPayment"), tmpStr);
				grpDetail->SetValue(_T("ExtInsPayment"), tmpStr);
				grpDetail->SetValue(_T("ExtInsPayment"), tmpStr);

			}

			if (freeamount > 0)
			{
				FormatCurrency(freeamount, tmpStr);
				grpDetail->SetValue(_T("freeamount"), tmpStr);
				grpDetail->SetValue(_T("freeamount"), tmpStr);
				grpDetail->SetValue(_T("freeamount"), tmpStr);
			}
			//Lay phần thu thêm là  hfe_payment trong hms_fee_invoice

			//Bổ sung trường hợp bệnh nhân có phiếu thu rồi, sau đó trả lại thì phải trừ đi số tiền trả lại này

			szSQL1.Format(_T(" SELECT sum(hfe_patpaid) as totalreturn from HMS_FEE ") \
			_T(" where hfe_docno=%ld and HFE_INVOICENO=%ld and hfe_status='R' and HFE_CATEGORY='N'"), nDocumentNo, nInvoiceNo);
			
			rsvl.ExecSQL(szSQL1);
			rsvl.GetValue(_T("totalreturn"), nTotalReturn);			

			if(nTotalPayment > 0)
			{
				nPatPaid = nTotalPayment - nTotalReturn;
				//_msg(_T("%.2f"), nPatPaid);
			}
			//In ra tổng số tiền trả lại tương ứng hóa đơn
			if (nTotalReturn > 0)
			{
				FormatCurrency(nTotalReturn, tmpStr);
				grpDetail->SetValue(_T("TotalReturn"), tmpStr);
				grpDetail->SetValue(_T("TotalReturn"), tmpStr);
				grpDetail->SetValue(_T("TotalReturn"), tmpStr);			
			
			}


			if(nTotalRefund > 0)
			{
				FormatCurrency(nTotalRefund + nTotalReturn, tmpStr);
				grpDetail->SetValue(_T("Refund"), tmpStr);
				grpDetail->SetValue(_T("Refund"), tmpStr);
				grpDetail->SetValue(_T("Refund"), tmpStr);
				nPatPaid = 0;
			}

			if(nPatPaid >= 0)
			{
				FormatCurrency(nPatPaid, tmpStr);
				grpDetail->SetValue(_T("PatPaid"), tmpStr);
				grpDetail->SetValue(_T("PatPaid"), tmpStr);
				grpDetail->SetValue(_T("PatPaid"), tmpStr);
			}
			

			CString szSumInWord;
			

			if(nPatPaid != 0)
			{
				tmpStr.Format(_T("%.2f"), abs(ceil(nPatPaid)));
			}
			else
			{
				tmpStr.Format(_T("%.2f"), abs(ceil(dTotal[0])));
			}
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng.");
			grpDetail->SetValue(_T("SumInWord"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord1"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord2"), szSumInWord);

			grpDetail->SetValue(_T("SumInWord"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord1"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord2"), szSumInWord);
		/*
			FormatCurrency(dTotal[1], tmpStr);
			grpDetail->SetValue(_T("PatientPaid"), tmpStr);
			FormatCurrency(dTotal[2], tmpStr);
			grpDetail->SetValue(_T("InsurancePaid")
			, tmpStr);
		*/	

			rs.GetValue(_T("recvdate"), tmpStr);
			szDate.Format(grpDetail->GetValue(_T("ReceiptDate")), CDateTime::Convert(tmpStr,yyyymmdd|hhmmss,ddmmyyyy|hhmm));	
			grpDetail->SetValue(_T("ReceiptDate"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate1"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate2"), szDate);	
			rs.GetValue(_T("doctor"), tmpStr);
			tmpStr.Trim();
			grpDetail->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
			rs.GetValue(_T("receiver"), tmpStr);	
			tmpStr.Trim();

			grpDetail->SetValue(_T("ReceiveBy"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy1"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy2"), GetDoctorName(tmpStr));	
			
			rs.GetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason1"), tmpStr);
			grpDetail->SetValue(_T("reason2"), tmpStr);
			

			tmpStr = GetSysDateTime();
			szDate.Format(grpDetail->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
			grpDetail->SetValue(_T("PrintDate"), szDate);
			grpDetail->SetValue(_T("PrintDate1"), szDate);
			grpDetail->SetValue(_T("PrintDate2"), szDate);

			grpDetail->SetValue(_T("PrintDate"), szDate);
			grpDetail->SetValue(_T("PrintDate1"), szDate);
			grpDetail->SetValue(_T("PrintDate2"), szDate);

			szDate = grpDetail->GetValue(_T("SheetNumber"));
			tmpStr.Format(szDate, 1);
			grpDetail->SetValue(_T("SheetNumber"), tmpStr);
			grpDetail->SetValue(_T("payment_method"), rs.GetValue(_T("payment_method")));
			int nUnRate=0;
			
			if(nInsRate > 0 && !pMF->IsOutLine()){
				nUnRate = 100 - nInsRate;
				tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
				grpDetail->SetValue(_T("UnRate"), tmpStr);
			}
			rptDetail = grpDetail;
		//User thuộc bộ phận thu phí khám thì không in nữa

		if (CheckPermission(_T("FM.100.07")))
		{
			return;
		}

		if(bPreview)
			rpt.PrintPreview();
		else
		{	
			rpt.Print(m_bAutoPrint);
		}

//	tmpStr.Format(szDate, 2);
//	rpt.GetReportFooter()->SetValue(_T("SheetNumber"), tmpStr);
//	rpt.Print(true);

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);
}

void CMainFrame::PrintInvoice_old(long nInvoiceNo, bool bPreview, bool bDirect, int nPrintCount)
{	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString szSQL;
	CString tmpStr, szTemp;

	CRecord rs(&m_db);
	CRecord rsl(&m_db);
	CRecord grs(&m_db);
	CRecord trs(&m_db);
	CRecord rss(&m_db);

	int nInsRate = 0;
	long nDocumentNo;
	CString szObjectType;

	int nPrintCnt = m_nPrintReceiptNumberPage;
	if(nPrintCount > 0)
		nPrintCnt = nPrintCount;
	
	if (!rpt.Init(_T("Reports/HMS/HF_INVOICEFEE.RPT"), false, false, nPrintCnt))
		return;

	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
					_T(" 	hd_docno as docno,") \
					_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T(" 	TO_CHAR(hp_birthdate, 'YYYY') as yearofbirth,") \
					_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
					_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
					_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
					_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
					_T(" 	hp_workplace as workplace,") \
					_T(" 	hd_doctor as doctor,") \
					_T("	hd_disrate as disrate, ") \
					_T(" 	hd_diagnostic as diagnostic,") \
					_T(" 	hd_reldisease as reldisease,") \
					_T(" 	trunc_date(hd_admitdate) as examdate,") \
					_T("	HMS_GetObjectType(hd_object) as objecttype, ") \
					_T("	hc_cardno as cardno, ") \
					_T("	hc_regdate as regdate, ") \
					_T("	hc_expdate as expdate, ") \
					_T("	HMS_GETHOSPITALNAME(hc_regcode) as regplace, ") \
					_T("	Get_DepartmentName(hfe_deptid) as deptname, ") \
					_T(" 	hfe_serialno as serialno,") \
					_T(" 	hfe_receiptno as recvno,") \
					_T(" 	hfe_date as recvdate, ") \
					_T(" 	hfe_staff as receiver,") \
					_T(" 	hfe_desc as reason, ") \
					_T(" 	hfe_amount as cost,") \
					_T(" 	hfe_discount as discount,") \
					_T(" 	hfe_patpaid as patpaid, hfe_deposit as deposit, hfe_ttldeposit as ttldeposit, ") \
					_T(" hfe_extins_payment-hfe_extins_unpaid as extins_paid ") \
					_T(" FROM hms_fee_invoice ") \
					_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
					_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
					_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
					_T(" WHERE hfe_invoiceno=%ld "), nInvoiceNo);

		
		rs.ExecSQL(szSQL);

		if (rs.IsEOF())
			return;

		rs.GetValue(_T("objecttype"), szObjectType);

		tmpStr.Empty();
		szTemp.Empty();
		CString szRoom, szRoomLabel;
		double nTotalDeposit;
		double nPreTotalDeposit; //So tien tam gui con lai truoc khi thu phi
		double extins_paid;
		rs.GetValue(_T("deposit"), nTotalDeposit);
		rs.GetValue(_T("ttldeposit"), nPreTotalDeposit);
		rs.GetValue(_T("extins_paid"), extins_paid);


		if (szObjectType == _T("S"))
		{
			szSQL.Format(_T("SELECT hfe_orderid as orderid, ") \
				         _T("hfe_type as type ") \
						 _T("FROM hms_fee ") \
						 _T("WHERE hfe_invoiceno=%ld AND hfe_type IN('T','P') AND rownum=1 "), nInvoiceNo);

			trs.ExecSQL(szSQL);

			if (!trs.IsEOF())
			{
				trs.GetValue(_T("orderid"), tmpStr);
				trs.GetValue(_T("type"), szTemp);

				if (!tmpStr.IsEmpty())
				{
					if (szTemp == _T("T"))
					{
						szSQL.Format(_T(" SELECT hpc_roomid as roomid, hpc_deptid as deptid, hrl_name as roomname") \
									_T(" FROM hms_testorder") \
									_T(" LEFT JOIN hms_roomlist ON(hrl_id=hpc_roomid AND hrl_deptid=hpc_deptid)") \
									_T(" WHERE hpc_orderid=%ld AND rownum=1"),
									str2long(tmpStr));
					}
					else if (szTemp == _T("P"))
					{
						szSQL.Format(_T("SELECT hpc_roomid as roomid, hpc_deptid as deptid, hrl_name as roomname ") \
									_T("FROM hms_pacsorder ") \
									_T("LEFT JOIN hms_roomlist ON(hrl_id=hpc_roomid AND hrl_deptid=hpc_deptid) ") \
									_T("WHERE hpc_orderid=%ld AND rownum=1"),
									str2long(tmpStr));
					}
					rss.ExecSQL(szSQL);

					if (!rss.IsEOF())
					{
						TranslateString(_T("Room"), tmpStr);
						szRoomLabel.Format(_T("%s:"), tmpStr);
						rpt.GetReportHeader()->SetValue(_T("RoomLabel"), szRoomLabel);

						szRoom.Format(_T("%s"), rss.GetValue(_T("roomname")));
						rpt.GetReportHeader()->SetValue(_T("Room"), szRoom);
					}
				}
			}
		}

		tmpStr.Empty();
		szTemp.Empty();

		szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
		grs.ExecSQL(szSQL);

		szSQL.Format(_T(" SELECT") \
			_T("		hfe_type as feetype, ") \
			_T(" 		rtrim(hfe_group,'0') as groupid,") \
			_T(" 		hfe_desc as name,") \
			_T(" 		hfe_unit as unit,") \
			_T("        hfe_unitprice as unitprice,") \
			_T("        sum(hfe_discount) as discount,") \
			_T(" 		sum(hfe_patpaid) as cost, ") \
			_T(" 		sum(hfe_diffcost) as diffcost ") \
			_T(" FROM hms_fee") \
			_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
			_T(" WHERE hfe_invoiceno=%ld and hfe_status ='P' and (hfe_patpaid+hfe_diffpaid) > 0 and NVL(hfe_category,'N') <> 'Y' ") \
			_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_desc, hfe_unit, hfe_unitprice") \
			_T(" ORDER BY hfg_index, name, unit"), nInvoiceNo);

	
		rsl.ExecSQL(szSQL);
		if(rsl.IsEOF())
		{
			//ShowMessageBox(_T("No data found"));
			return;
		}
		


		int nNumberPage = m_nPrintReceiptNumberPage;
		CReportSection* rptDetail=NULL;
		CReportSection* grpDetail;


		CString szFeeID, szID;

			TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
			int nChapter=0;

			int nCount = 0, nIndex, nChapterID=0;
			double dTotal[5];
			double dGroup1[5];
			double dGroup2[5];
			double dAmount = 0;
			int nItem = 0, nOldItem = 0, nItem2 = 0;
			int nLevel;
			bool bDeleteParent = false;
			bool bLoadItems = false;
			CString szNewGroup, szOldGroup, szParentGroup;

			for (int i =0; i < 5; i++)
			{
				dTotal[i] = 0;
				dGroup1[i] = 0;
				dGroup2[i] = 0;
			}
			
			nIndex = 0;
			CString szSubItem, szType;
			int nSubItem = 1;
			nChapterID = 0;
			CArray<FEEITEM, FEEITEM&> feeList;
			FEEITEM fee;
			CReportSection *grp;
			grs.MoveFirst();

			while(!grs.IsEOF())
			{
				grs.GetValue(_T("level"), nLevel);
				grs.GetValue(_T("id"), szParentGroup);
				grs.GetValue(_T("feeid"), szSubItem);
				szParentGroup.Trim();
				bool bAdd = false;
				rsl.MoveFirst();
				while(!rsl.IsEOF()){
					rsl.GetValue(_T("groupid"), tmpStr);
					if(tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup){
						bAdd = true;
						break;
					}
					rsl.MoveNext();
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
					dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
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
		//			rsl.MoveFirst();
					while(!rsl.IsEOF())
					{
						rsl.GetValue(_T("groupid"), szNewGroup);
						szNewGroup.Trim();
						if(szParentGroup == szNewGroup || (szParentGroup == szNewGroup.Left(szParentGroup.GetLength()) && szParentGroup.Left(1) ==_T("A")) )
						{
							if(szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup){
									szOldGroup = szNewGroup;
									if(dGroup2[0] > 0 && nItem2 > 0){
										fee = feeList.GetAt(nOldItem);
										fee.nCost = dGroup2[0];
										feeList.SetAt(nOldItem, fee);
									}
									szSQL.Format(_T("SELECT hfg_name as name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
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
								double diffcost;
								
								rsl.GetValue(_T("unitprice"), dAmount);
								fee.nPrice = dAmount;
								rsl.GetValue(_T("discount"), dAmount);
								fee.nDiscount = dAmount;

								rsl.GetValue(_T("cost"), dAmount);
								rsl.GetValue(_T("diffcost"), diffcost);
								dTotal[0] += dAmount;
								dGroup1[0] += dAmount;
								dGroup2[0] += dAmount;

								fee.szGroupID = _T("Item");
								fee.szID.Empty();
								fee.szName.Format(_T("%s"), rsl.GetValue(_T("name")));

								
								if(diffcost > 0 && fee.nDiscount > 0)
								{
									fee.szID = _T("CL");

								} 
								else if (!szObjectType.IsEmpty() &&
									     szObjectType != _T("S") && fee.nDiscount == 0)
								{	
									fee.szID = _T("PN");
								}
								fee.szUnit = rsl.GetValue(_T("unit"));
								fee.nCost = ToDouble(rsl.GetValue(_T("cost")));
								feeList.Add(fee);						
						}
						else
							break;
						rsl.MoveNext();
					}
					if(dGroup1[0] > 0 && nItem > 0)
					{
						if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
							fee = feeList.GetAt(nOldItem);
							fee.nCost = dGroup2[0];
							feeList.SetAt(nOldItem, fee);
						}
						dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
						nItem2 = 0;
						fee = feeList.GetAt(nItem);
						fee.szGroupID = _T("SubAmount");
						TranslateString(_T("Sub Amount"), fee.szName);
						fee.nCost = dGroup1[0];
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

		
		
		rptDetail = NULL;
			
		//Report Header
	
		rptDetail = rpt.GetReportHeader();
		grpDetail = rptDetail;

			tmpStr.Empty();
			StringUpper(m_CompanyInfo.sc_pname, tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE"), tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE1"), tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE2"), tmpStr);
			StringUpper(m_CompanyInfo.sc_name, tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME1"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME2"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALADDRESS"), m_CompanyInfo.sc_address);
			grpDetail->SetValue(_T("HOSPITALADDRESS1"), m_CompanyInfo.sc_address);
			grpDetail->SetValue(_T("HOSPITALADDRESS2"), m_CompanyInfo.sc_address);
			
			rs.GetValue(_T("docno"), nDocumentNo);
			tmpStr.Format(_T("%ld"), nDocumentNo);
			grpDetail->SetValue(_T("DocumentNo"), tmpStr);
			grpDetail->SetValue(_T("DocumentNo1"), tmpStr);
			grpDetail->SetValue(_T("DocumentNo2"), tmpStr);
			tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("SerialNo")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
			
			grpDetail->SetValue(_T("ReceiptNo"), tmpStr);
			grpDetail->SetValue(_T("ReceiptNo1"), tmpStr);
			grpDetail->SetValue(_T("ReceiptNo2"), tmpStr);
			tmpStr.Format(_T("%ld"), nInvoiceNo);
			grpDetail->SetValue(_T("InvoiceNo"), tmpStr);
			grpDetail->SetValue(_T("InvoiceNo1"), tmpStr);
			grpDetail->SetValue(_T("InvoiceNo2"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128A]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128B]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128C]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[39]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[93]"), tmpStr);



			//rs.GetValue(_T("pname"), tmpStr);
			StringUpper(rs.GetValue(_T("pname")), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME"), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME1"), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME2"), tmpStr);
			rs.GetValue(_T("age"), tmpStr);
			grpDetail->SetValue(_T("Age"), tmpStr);
			grpDetail->SetValue(_T("Age1"), tmpStr);
			grpDetail->SetValue(_T("Age2"), tmpStr);
			
			rs.GetValue(_T("yearofbirth"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth2"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth3"), tmpStr);

			rs.GetValue(_T("sex"), tmpStr);
			grpDetail->SetValue(_T("Sex"), tmpStr);
			grpDetail->SetValue(_T("Sex1"), tmpStr);
			grpDetail->SetValue(_T("Sex2"), tmpStr);
			rs.GetValue(_T("address"), tmpStr);
			grpDetail->SetValue(_T("Address"), tmpStr);
			grpDetail->SetValue(_T("Address1"), tmpStr);
			grpDetail->SetValue(_T("Address2"), tmpStr);
			rs.GetValue(_T("deptname"), tmpStr);
			grpDetail->SetValue(_T("Department"), tmpStr);
			grpDetail->SetValue(_T("Department1"), tmpStr);
			grpDetail->SetValue(_T("Department2"), tmpStr);

			rs.GetValue(_T("disrate"), nInsRate);
			grpDetail->SetValue(_T("Disrate"), nInsRate);
			
			rs.GetValue(_T("examdate"), tmpStr);
			grpDetail->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExamDate1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExamDate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

			rs.GetValue(_T("cardno"), tmpStr);
			grpDetail->SetValue(_T("CardNo"), tmpStr);
			grpDetail->SetValue(_T("CardNo1"), tmpStr);
			grpDetail->SetValue(_T("CardNo2"), tmpStr);
			rs.GetValue(_T("expdate"), tmpStr);
			grpDetail->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExpiryDate1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExpiryDate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("regplace"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace1"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace2"), tmpStr);
			rs.GetValue(_T("diagnostic"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic1"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic2"), tmpStr);
			rs.GetValue(_T("reldisease"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease1"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease2"), tmpStr);

			CString szDate;
			rs.GetValue(_T("recvdate"), tmpStr);
			szDate.Format(grpDetail->GetValue(_T("ReceiptDate")), CDateTime::Convert(tmpStr,yyyymmdd|hhmmss,ddmmyyyy|hhmm));	
			grpDetail->SetValue(_T("ReceiptDate"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate1"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate2"), szDate);	
			rs.GetValue(_T("doctor"), tmpStr);
			tmpStr.Trim();
			grpDetail->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
			rs.GetValue(_T("receiver"), tmpStr);	
			tmpStr.Trim();

			grpDetail->SetValue(_T("ReceiveBy"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy1"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy2"), GetDoctorName(tmpStr));	
			
			rs.GetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason1"), tmpStr);
			grpDetail->SetValue(_T("reason2"), tmpStr);

		

			

			rptDetail = rpt.GetDetail(0); 			
			

			for (int i =0; i < feeList.GetCount(); i++){
				fee = feeList[i];
				szType = fee.szGroupID;
					if(szType == _T("Type"))
					{
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						
						tmpStr = fee.szID;
						rptDetail->SetValue(_T("GH1"), tmpStr);
						StringUpper(fee.szName, tmpStr);
						rptDetail->SetValue(_T("GH2"), tmpStr);
					}
					if(szType == _T("Group")){
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						rptDetail->SetValue(_T("GH1"), fee.szID);
						rptDetail->SetValue(_T("GH2"), fee.szName);
					}
					else if(szType == _T("SubGroup")){
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						rptDetail->SetValue(_T("GH1"), fee.szID);
						rptDetail->SetValue(_T("GH2"), fee.szName);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
					}
					/*else if(szType == _T("SubAmount")){
						grp = rpt.GetGroupFooter(1);
						rptDetail = rpt.AddDetail(grp);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("SubAmount"), tmpStr);

					}*/
					else if(szType == _T("Item"))
					{
						rptDetail = rpt.AddDetail();
						//rptDetail->SetValue(_T("1"), fee.szID);
						rptDetail->SetValue(_T("1"), fee.szID);
						rptDetail->SetValue(_T("2"), fee.szName);
						rptDetail->SetValue(_T("3"), fee.szUnit);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("6"), tmpStr);
					}
		/*
					else if(szType == _T("TotalAmount")){
						grp = rpt.GetGroupHeader(1);
						rptDetail = rpt.AddDetail(grp);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("TotalAmount"), tmpStr);
						FormatCurrency(fee.nDiscount, tmpStr);
						rptDetail->SetValue(_T("AmountDiscount"), tmpStr);
						FormatCurrency(fee.nPatPaid, tmpStr);
						rptDetail->SetValue(_T("AmountPatPaid"), tmpStr);
					}
		*/
			
			}
			//Report Footer

			
			grpDetail = rpt.GetReportFooter();

			FormatCurrency(ceil(dTotal[0]), tmpStr);
			grpDetail->SetValue(_T("TotalAmount"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount1"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount2"), tmpStr);

			
			grpDetail->SetValue(_T("Price"), tmpStr);
			grpDetail->SetValue(_T("Price1"), tmpStr);
			grpDetail->SetValue(_T("Price2"), tmpStr);

			grpDetail->SetValue(_T("TotalAmount"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount1"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount2"), tmpStr);


			FormatCurrency(ceil(dTotal[1]), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount1"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount2"), tmpStr);

			grpDetail->SetValue(_T("TotalDiscount"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount1"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount2"), tmpStr);

			FormatCurrency(ceil(dTotal[2]), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid1"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid2"), tmpStr);

			grpDetail->SetValue(_T("TotalPatpaid"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid1"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid2"), tmpStr);
			
			double nPatPaid = dTotal[0];
			
			
			
			
			if(nTotalDeposit > 0)
			{

				FormatCurrency(nTotalDeposit, tmpStr);
				grpDetail->SetValue(_T("Deposit"), tmpStr);
				grpDetail->SetValue(_T("Deposit"), tmpStr);
				grpDetail->SetValue(_T("Deposit"), tmpStr);

				nPatPaid = dTotal[0] - nTotalDeposit;
				if(nPatPaid > 0)
				{
					FormatCurrency(nPatPaid, tmpStr);
					grpDetail->SetValue(_T("PatPaid"), tmpStr);
					grpDetail->SetValue(_T("PatPaid"), tmpStr);
					grpDetail->SetValue(_T("PatPaid"), tmpStr);
				}
				else
				{
					FormatCurrency(-1*nPatPaid, tmpStr);
					grpDetail->SetValue(_T("Refund"), tmpStr);
					grpDetail->SetValue(_T("Refund"), tmpStr);
					grpDetail->SetValue(_T("Refund"), tmpStr);
				}

				FormatCurrency(nPreTotalDeposit, tmpStr);
				grpDetail->SetValue(_T("TotalDeposit"), tmpStr);

			}

			if(extins_paid != 0)
			{
				nPatPaid -= extins_paid;
				FormatCurrency(extins_paid, tmpStr);
				grpDetail->SetValue(_T("ExtInsPaid"), tmpStr);
				grpDetail->SetValue(_T("ExtInsPaid"), tmpStr);
				grpDetail->SetValue(_T("ExtInsPaid"), tmpStr);

			}

			if(nPatPaid > 0)
			{
				FormatCurrency(nPatPaid, tmpStr);
				grpDetail->SetValue(_T("PatPaid"), tmpStr);
				grpDetail->SetValue(_T("PatPaid"), tmpStr);
				grpDetail->SetValue(_T("PatPaid"), tmpStr);
			}
			CString szSumInWord;
			

			if(nPatPaid != 0)
			{
				tmpStr.Format(_T("%.2f"), abs(ceil(nPatPaid)));
			}
			else
			{
				tmpStr.Format(_T("%.2f"), abs(ceil(dTotal[0])));
			}
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng.");
			grpDetail->SetValue(_T("SumInWord"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord1"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord2"), szSumInWord);

			grpDetail->SetValue(_T("SumInWord"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord1"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord2"), szSumInWord);
		/*
			FormatCurrency(dTotal[1], tmpStr);
			grpDetail->SetValue(_T("PatientPaid"), tmpStr);
			FormatCurrency(dTotal[2], tmpStr);
			grpDetail->SetValue(_T("InsurancePaid")
			, tmpStr);
		*/	

			rs.GetValue(_T("recvdate"), tmpStr);
			szDate.Format(grpDetail->GetValue(_T("ReceiptDate")), CDateTime::Convert(tmpStr,yyyymmdd|hhmmss,ddmmyyyy|hhmm));	
			grpDetail->SetValue(_T("ReceiptDate"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate1"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate2"), szDate);	
			rs.GetValue(_T("doctor"), tmpStr);
			tmpStr.Trim();
			grpDetail->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
			rs.GetValue(_T("receiver"), tmpStr);	
			tmpStr.Trim();

			grpDetail->SetValue(_T("ReceiveBy"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy1"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy2"), GetDoctorName(tmpStr));	
			
			rs.GetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason1"), tmpStr);
			grpDetail->SetValue(_T("reason2"), tmpStr);
			

			tmpStr = GetSysDateTime();
			szDate.Format(grpDetail->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
			grpDetail->SetValue(_T("PrintDate"), szDate);
			grpDetail->SetValue(_T("PrintDate1"), szDate);
			grpDetail->SetValue(_T("PrintDate2"), szDate);

			grpDetail->SetValue(_T("PrintDate"), szDate);
			grpDetail->SetValue(_T("PrintDate1"), szDate);
			grpDetail->SetValue(_T("PrintDate2"), szDate);

			szDate = grpDetail->GetValue(_T("SheetNumber"));
			tmpStr.Format(szDate, 1);
			grpDetail->SetValue(_T("SheetNumber"), tmpStr);

			int nUnRate=0;
			
			if(nInsRate > 0 && !pMF->IsOutLine()){
				nUnRate = 100 - nInsRate;
				tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
				grpDetail->SetValue(_T("UnRate"), tmpStr);
			}
			rptDetail = grpDetail;
		if(bPreview)
			rpt.PrintPreview();
		else
		{	
			rpt.Print(m_bAutoPrint);
		}

//	tmpStr.Format(szDate, 2);
//	rpt.GetReportFooter()->SetValue(_T("SheetNumber"), tmpStr);
//	rpt.Print(true);

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);
}

void CMainFrame::PrintReceipt(long nInvoiceNo, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL;
	CRecord rs(&m_db);
	long nDocumentNo;

	CString szType;


	szSQL.Format(_T(" SELECT  hd_patientno as patientno,  ") \
				_T("         hd_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hp_birthdate as birthdate,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("         hp_workplace as workplace,") \
				_T("         hfe_type as typeid,") \
				_T(" 	     sys_sel_getname('hms_rank', cast(hp_rank as nvarchar2(15))) as rank,") \
				_T("         Get_DepartmentName(hfe_deptid) as deptname,") \
				_T("         hfe_deptid as depts,") \
				_T(" 	     hms_getobjectname(hd_object) as objectname,") \
				_T("         hfe_serialno as serialno,") \
				_T("         hfe_receiptno as recvno,") \
				_T("         hfe_date as recvdate, ") \
				_T("         hfe_staff as receiveby,") \
				_T("         case when length(hfe_desc) < 3 then GET_SELECTION_DESC('hms_invoice_desc',hfe_desc) else hfe_desc end as reason, ") \
				_T("         hfe_amount as cost,") \
				_T("         hfe_discount as discount,") \
				_T("         hfe_payment as patpaid,") \
				_T("         hfe_deposit as advpayment,") \
				_T("         hfe_refund as refundamt, ") \
				_T("		 get_payment_method(hfe_payment_method) as payment_method,  ") \
				_T("		 HFIB_ACCOUNTNO as ma_tham_chieu ") \
				_T(" FROM hms_fee_invoice") \
				_T(" LEFT JOIN HMS_FEE_INVOICE_BANK ON(hfe_docno = HFIB_DOCNO AND HFE_INVOICENO=HFIB_INVOICENO)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" WHERE hfe_docno=%ld AND hfe_invoiceno=%ld AND hfe_status ='P' AND (hfe_patpaid+hfe_amount+hfe_discount) > 0"), m_nDocumentNo, nInvoiceNo);

	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);
	if(rs.IsEOF())
		return;
	double nAdvReceipt=0, nRefundAmt = 0;
	int nPage = 0;
	CString szReportName;
	rs.GetValue(_T("typeid"), szType);
	
	if(szType == _T("A") || szType == _T("B") || szType == _T("C"))
		szReportName = _T("Reports/HMS/HF_ADVANCEFEE.RPT");
	else if(szType == _T("E") || szType == _T("F") || szType == _T("V"))
		szReportName = _T("Reports/HMS/HF_REFUNDFEE.RPT");
	else if(szType == _T("D"))
		szReportName = _T("Reports/HMS/HF_DISCOUNTFEE.RPT");
/*
	else if(szType == _T("P")){
		rs.GetValue(_T("advpayment"), nAdvReceipt);
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

	if(pMF->IsInPatient())
	{
		m_nPrintReceiptNumberPage = 2;
	}
	else 
	{
		m_nPrintReceiptNumberPage = 1;
	}
	
	if(!rpt.Init(szReportName, false, false, m_nPrintReceiptNumberPage) )
		return;

	
	
		//Page Header
		//Report Detail
		
	
	CReportSection* rptDetail = NULL;
	CReportSection* grp=NULL;
	
	rptDetail = rpt.GetReportHeader();

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

		rptDetail->SetValue(_T("Barcode[128A]"), tmpStr);
		rptDetail->SetValue(_T("Barcode[128B]"), tmpStr);
		rptDetail->SetValue(_T("Barcode[128C]"), tmpStr);
		rptDetail->SetValue(_T("Barcode[39]"), tmpStr);
		rptDetail->SetValue(_T("Barcode[93]"), tmpStr);




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


		rs.GetValue(_T("objectname"), tmpStr);
		rptDetail->SetValue(_T("Object"), tmpStr);
		rptDetail->SetValue(_T("Object"), tmpStr);
		rptDetail->SetValue(_T("Object"), tmpStr);


		rs.GetValue(_T("rank"), tmpStr);
		rptDetail->SetValue(_T("Rank"), tmpStr);
		rptDetail->SetValue(_T("Rank"), tmpStr);
		rptDetail->SetValue(_T("Rank"), tmpStr);


		int nUnRate=0;
		rs.GetValue(_T("disrate"), tmpStr);
		if(ToInt(tmpStr) > 0 && !pMF->IsOutLine())
		{
			nUnRate = 100 - ToInt(tmpStr);
			rptDetail->SetValue(_T("UnRate"), nUnRate);
		}

		rs.GetValue(_T("depts"), tmpStr);
		CString szDeptName = GetDepartments(tmpStr);
		rptDetail->SetValue(_T("Department"), szDeptName);
		rptDetail->SetValue(_T("Department2"), szDeptName);
		rptDetail->SetValue(_T("Department3"), szDeptName);

		CString szAmount;
		//Phieu chi
		if(szType == _T("V"))
		{
			rs.GetValue(_T("cost"), szAmount);
		}
		else
		{
			rs.GetValue(_T("patpaid"), szAmount);
		}
		

		FormatCurrencyStr(szAmount, tmpStr);

		rptDetail->SetValue(_T("TotalAmount"), tmpStr);
		rptDetail->SetValue(_T("TotalAmount2"), tmpStr);
		rptDetail->SetValue(_T("TotalAmount3"), tmpStr);
		CString szSumInWord;

		tmpStr = szAmount;

		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		rptDetail->SetValue(_T("SumInWord"), szSumInWord);
		rptDetail->SetValue(_T("SumInWord2"), szSumInWord);
		rptDetail->SetValue(_T("SumInWord3"), szSumInWord);

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
		rptDetail->SetValue(_T("SheetNumber"), _T("1"));
			
		rptDetail->SetValue(_T("payment_method"), rs.GetValue(_T("payment_method")));
		rptDetail->SetValue(_T("ma_tham_chieu"), rs.GetValue(_T("ma_tham_chieu")));
	if(bPreview)	
		rpt.PrintPreview();
	else
		rpt.Print(m_bAutoPrint);
		

	
	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);
	
}

//In phieu tam ung
//Update 5/7/2022 - Bổ sung thêm trường hợp in phiếu ATM / CK / TTD: 3 liên, còn lại giữ nguyên
void CMainFrame::PrintDeposit(long nInvoiceNo, bool bPreview)
{	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL;
	CRecord rs(&m_db);
	long nDocumentNo;

	CString szType;

	szSQL.Format(_T(" SELECT  hd_patientno as patientno,") \
				_T("         hd_docno as docno,") \
				_T("         hcr_recordno as recordno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hp_birthdate as birthdate,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("         hp_workplace as workplace,") \
				_T("         sys_sel_getname('hms_rank', hp_rank) as rank,") \
				_T("         sys_sel_getname('hms_position', hp_position) as position,") \
				_T("         hfe_type as typeid,") \
				_T("         Get_DepartmentName(hfe_deptid) as deptname,") \
				_T("         ho_desc as objname,") \
				_T("         hfe_deptid as depts,") \
				_T("         hfe_serialno as serialno,") \
				_T("         hfe_receiptno as recvno,") \
				_T("         hfe_date as recvdate,") \
				_T("         hfe_staff as receiveby,") \
				_T("         hfe_desc as reason,") \
				_T("         hfe_amount as cost,") \
				_T("         hfe_patpaid as patpaid, hfe_receipttime, ") \
				_T("		 get_payment_method(hfe_payment_method) as payment_method,  ") \
				_T("		 NVL(hfe_payment_method, 'TM1') as payment_method_code,  ") \
				_T("		 HFIB_ACCOUNTNO as ma_tham_chieu ") \
				_T(" FROM hms_patient") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_fee_deposit ON(hfe_docno=hd_docno)") \
				_T(" LEFT JOIN HMS_FEE_INVOICE_BANK ON(hfe_docno = HFIB_DOCNO AND HFE_INVOICENO=HFIB_INVOICENO)") \
				_T(" LEFT JOIN hms_object ON(ho_id=hfe_objectid)") \
				_T(" WHERE hfe_invoiceno=%ld") \
				_T("       and (hfe_patpaid+hfe_amount) > 0"), nInvoiceNo);

	//_msg(_T("%s"), szSQL);
	
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	double nAdvReceipt=0, nRefundAmt = 0;
	int nPage = 0;
	CString szReportName;
	CString szReceiptTime;
	CString szpayment_method_code;

	rs.GetValue(_T("typeid"), szType);	
	rs.GetValue(_T("payment_method_code"), szpayment_method_code);

	if (szpayment_method_code == _T("ATM") || szpayment_method_code == _T("CK") || szpayment_method_code == _T("TTD"))
	{
		m_nPrintDepositNumberPage = 2;		
	}
	else
		m_nPrintDepositNumberPage = 2;	

	szReportName = _T("Reports/HMS/HF_DEPOSITFEE.RPT");
	if (!rpt.Init(szReportName, false, false, m_nPrintDepositNumberPage))
		return;
	
		//Page Header
		//Report Detail
		
	CReportSection* rptDetail = NULL;
	

	rptDetail = rpt.GetReportHeader();
	
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

	rs.GetValue(_T("recordno"), tmpStr);
	rptDetail->SetValue(_T("RecordNo"), tmpStr);
	rptDetail->SetValue(_T("RecordNo2"), tmpStr);
	rptDetail->SetValue(_T("RecordNo3"), tmpStr);


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
	rptDetail->SetValue(_T("Barcode[128A]"), tmpStr);
	rptDetail->SetValue(_T("Barcode[128B]"), tmpStr);
	rptDetail->SetValue(_T("Barcode[128C]"), tmpStr);
	rptDetail->SetValue(_T("Barcode[39]"), tmpStr);
	rptDetail->SetValue(_T("Barcode[93]"), tmpStr);




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

	rs.GetValue(_T("objname"), tmpStr);
	rptDetail->SetValue(_T("Object"), tmpStr);
	rptDetail->SetValue(_T("Object"), tmpStr);
	rptDetail->SetValue(_T("Object"), tmpStr);

	rs.GetValue(_T("rank"), tmpStr);
	rptDetail->SetValue(_T("Rank"), tmpStr);
	rptDetail->SetValue(_T("Rank"), tmpStr);
	rptDetail->SetValue(_T("Rank"), tmpStr);

	rs.GetValue(_T("position"), tmpStr);
	rptDetail->SetValue(_T("position"), tmpStr);
	rptDetail->SetValue(_T("position"), tmpStr);
	rptDetail->SetValue(_T("position"), tmpStr);


	rs.GetValue(_T("address"), tmpStr);
	rptDetail->SetValue(_T("Address"), tmpStr);
	rptDetail->SetValue(_T("Address2"), tmpStr);
	rptDetail->SetValue(_T("Address3"), tmpStr);
	
	rs.GetValue(_T("deptname"), tmpStr);
	rptDetail->SetValue(_T("Department"), tmpStr);
	rptDetail->SetValue(_T("Department2"), tmpStr);
	rptDetail->SetValue(_T("Department3"), tmpStr);
	rs.GetValue(_T("reason"), tmpStr);
	if(tmpStr.GetLength() <= 2)
	{
		tmpStr = GetSelectionString(_T("hms_invoice_desc"), tmpStr);
	}
	rptDetail->SetValue(_T("Reason"), tmpStr);
	rptDetail->SetValue(_T("Reason2"), tmpStr);
	rptDetail->SetValue(_T("Reason3"), tmpStr);


	rs.GetValue(_T("hfe_receipttime"), szReceiptTime);
	rptDetail->SetValue(_T("ReceiptTime"), szReceiptTime);
	rptDetail->SetValue(_T("ReceiptTime2"), szReceiptTime);
	rptDetail->SetValue(_T("ReceiptTime3"), szReceiptTime);



	rs.GetValue(_T("depts"), tmpStr);
	CString szDeptName;
	//CString szDeptName = GetDepartments(tmpStr);
	szDeptName = tmpStr;
	rptDetail->SetValue(_T("Department"), szDeptName);
	rptDetail->SetValue(_T("Department2"), szDeptName);
	rptDetail->SetValue(_T("Department3"), szDeptName);


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

	CString szDate;

	rs.GetValue(_T("recvdate"), tmpStr);
	szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
	rptDetail->SetValue(_T("ReceiptDate"), szDate);
	rptDetail->SetValue(_T("ReceiptDate2"), szDate);
	rptDetail->SetValue(_T("ReceiptDate3"), szDate);


	//rs.GetValue(_T("recvdate"), tmpStr);

	tmpStr = GetSysDateTime();
	szDate.Format(rptDetail->GetValue(_T("PrintDate")),
				    tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rptDetail->SetValue(_T("PrintDate"), szDate);
	rptDetail->SetValue(_T("PrintDate2"), szDate);
	rptDetail->SetValue(_T("PrintDate3"), szDate);

	rs.GetValue(_T("ReceiveBy"), tmpStr);
	tmpStr.Trim();
	CString szDoctor = GetDoctorName(tmpStr);
	rptDetail->SetValue(_T("ReceiveBy"), szDoctor);
	rptDetail->SetValue(_T("ReceiveBy2"), szDoctor);
	rptDetail->SetValue(_T("ReceiveBy3"), szDoctor);
	rptDetail->SetValue(_T("SheetNumber"), _T("1"));
				
	rptDetail->SetValue(_T("payment_method"), rs.GetValue(_T("payment_method")));
	rptDetail->SetValue(_T("ma_tham_chieu"), rs.GetValue(_T("ma_tham_chieu")));
	
		
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

	
	szSQL.Format(_T("UPDATE hms_fee_deposit SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);	
}

void CMainFrame::PrintRefund(long nInvoiceNo, bool bPreview)
{	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL;
	CRecord rs(&m_db);
	long nDocumentNo;

	CString szType;

	
	szSQL.Format(_T(" SELECT hd_patientno as patientno,") \
				_T("        hd_docno as docno,") \
				_T("        hcr_recordno as recordno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        hp_birthdate as birthdate,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("        sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("        nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("        hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("        hp_workplace as workplace,") \
				_T("        ho_desc as objectname,") \
				_T("        hfe_type as typeid,") \
				_T("        hfe_group as grpid,") \
				_T("        Get_DepartmentName(hfe_deptid) as deptname,") \
				_T("        hfe_deptid as depts,") \
				_T("        hfe_serialno as serialno,") \
				_T("        hfe_receiptno as recvno,") \
				_T("        hfe_date as recvdate, ") \
				_T("        hfe_staff as receiveby,") \
				_T("        hfe_desc as reason, ") \
				_T("        hfe_amount as cost,") \
				_T("        hfe_patpaid as patpaid") \
				_T(" FROM hms_patient ") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)") \
				_T(" LEFT JOIN hms_fee_refund ON(hfe_docno=hd_docno)") \
				_T(" LEFT JOIN hms_object ON(ho_id=hfe_objectid)") \
				_T(" WHERE (hfe_invoiceno=%ld)") \
				_T("       AND (hfe_patpaid+hfe_amount) > 0"),
				nInvoiceNo);
_tprintf(_T("\r\n%s"), szSQL);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
		return;

	_fmsg(_T("%s"), szSQL);
	//_msg(_T("%s"), szSQL);
	double nAdvReceipt = 0, nRefundAmt = 0;
	int nPage = 0;
	CString szReportName;
	CString szGroup;
	rs.GetValue(_T("typeid"), szType);

	rs.GetValue(_T("grpid"), szGroup);
	


	if(szType == _T("U"))
	{
		szReportName = _T("Reports/HMS/HF_REFUNDFEE_CK.RPT");
	}
	else if(szType == _T("V"))
	{
		szReportName = _T("Reports/HMS/HF_REFUNDFEE_V.RPT");
	}
	else
	{
		szReportName = _T("Reports/HMS/HF_REFUNDFEE.RPT");
	}

	
	if (!rpt.Init(szReportName, false, false, m_nPrintRefundNumberPage))
		return;
	

		//Page Header
		//Report Detail
		
	CReportSection* rptDetail = NULL;

	rptDetail = rpt.GetReportHeader();
		
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

			rs.GetValue(_T("recordno"), tmpStr);
			rptDetail->SetValue(_T("RecordNo"), tmpStr);
			rptDetail->SetValue(_T("RecordNo2"), tmpStr);
			rptDetail->SetValue(_T("RecordNo3"), tmpStr);

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
			rptDetail->SetValue(_T("Barcode[128A]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128B]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128C]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[39]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[93]"), tmpStr);




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

			CReportItem *rptItem = rptDetail->GetItem(_T("Object"));

			if (rptItem)
			{
				rs.GetValue(_T("objectname"), tmpStr);
				rptDetail->SetValue(_T("Object"), tmpStr);
				rptDetail->SetValue(_T("Object2"), tmpStr);
				rptDetail->SetValue(_T("Object3"), tmpStr);
			}
			
			rs.GetValue(_T("deptname"), tmpStr);
			rptDetail->SetValue(_T("Department"), tmpStr);
			rptDetail->SetValue(_T("Department2"), tmpStr);
			rptDetail->SetValue(_T("Department3"), tmpStr);

			rs.GetValue(_T("reason"), tmpStr);
			if(tmpStr.GetLength() <= 2)
			{
				tmpStr = GetSelectionString(_T("hms_invoice_desc"), tmpStr);
			}

			rptDetail->SetValue(_T("Reason"), tmpStr);
			rptDetail->SetValue(_T("Reason2"), tmpStr);
			rptDetail->SetValue(_T("Reason3"), tmpStr);

		
			rs.GetValue(_T("depts"), tmpStr);
			CString szDeptName = GetDepartments(tmpStr);
			rptDetail->SetValue(_T("Department"), szDeptName);
			rptDetail->SetValue(_T("Department2"), szDeptName);
			rptDetail->SetValue(_T("Department3"), szDeptName);

			CString szDate;

			rs.GetValue(_T("recvdate"), tmpStr);
			szDate = CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy);
			rptDetail->SetValue(_T("ReceiptDate"), szDate);
			rptDetail->SetValue(_T("ReceiptDate2"), szDate);
			rptDetail->SetValue(_T("ReceiptDate3"), szDate);
	
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
	
			//rs.GetValue(_T("recvdate"), tmpStr);
			tmpStr = GetSysDateTime();
			szDate.Format(rptDetail->GetValue(_T("PrintDate")),
				          tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
			rptDetail->SetValue(_T("PrintDate"), szDate);
			rptDetail->SetValue(_T("PrintDate2"), szDate);
			rptDetail->SetValue(_T("PrintDate3"), szDate);
			
			rs.GetValue(_T("ReceiveBy"), tmpStr);
			tmpStr.Trim();
			CString szDoctor = GetDoctorName(tmpStr);
			rptDetail->SetValue(_T("ReceiveBy"), szDoctor);
			rptDetail->SetValue(_T("ReceiveBy2"), szDoctor);
			rptDetail->SetValue(_T("ReceiveBy3"), szDoctor);

			

	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

	
	szSQL.Format(_T("UPDATE hms_fee_refund SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);

}


// Phieu mien giam
void CMainFrame::PrintDiscount(long nInvoiceNo, bool bPreview)
{	
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL;
	CRecord rs(&m_db);
	long nDocumentNo;

	CString szType;

	szSQL.Format(_T(" SELECT  hd_patientno as patientno,  ") \
				_T("         hd_docno as docno,") \
				_T("		hcr_recordno as recordno, ") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hp_birthdate as birthdate,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("         hp_workplace as workplace,") \
				_T("         hfe_type as typeid,") \
				_T("         (select sd_name from sys_dept where sd_id=hfe_deptid) as deptname,") \
				_T("         hfe_deptid as depts,") \
				_T("         hfe_serialno as serialno,") \
				_T("         hfe_receiptno as recvno,") \
				_T("         hfe_date as recvdate, ") \
				_T("         hfe_staff as receiveby,") \
				_T("         hfe_desc as reason, ") \
				_T("         hfe_amount as cost,") \
				_T("         hfe_patpaid as patpaid") \
				_T(" FROM hms_patient ") \
				_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_fee_discount ON(hfe_docno=hd_docno) ") \
				_T(" WHERE hfe_docno=%ld AND hfe_invoiceno=%ld AND (hfe_patpaid+hfe_amount) > 0"),  m_nDocumentNo, nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;
	double nAdvReceipt=0, nRefundAmt = 0;
	int nPage = 0;
	CString szReportName;
	rs.GetValue(_T("typeid"), szType);
	
	
	szReportName = _T("Reports/HMS/HF_DISCOUNTFEE.RPT");
	if(!rpt.Init(szReportName, false, false, m_nPrintDiscountNumberPage) )
		return;

	
		//Page Header
		//Report Detail
		
		CReportSection* rptDetail = NULL;

		rptDetail = rpt.GetReportHeader();
		
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


			rs.GetValue(_T("recordno"), tmpStr);
			rptDetail->SetValue(_T("RecordNo"), tmpStr);
			rptDetail->SetValue(_T("RecordNo2"), tmpStr);
			rptDetail->SetValue(_T("RecordNo3"), tmpStr);

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
			if(tmpStr.GetLength() <= 2)
			{
				tmpStr = GetSelectionString(_T("hms_invoice_desc"), tmpStr);
			}

			rptDetail->SetValue(_T("Reason"), tmpStr);
			rptDetail->SetValue(_T("Reason2"), tmpStr);
			rptDetail->SetValue(_T("Reason3"), tmpStr);

		
			rs.GetValue(_T("depts"), tmpStr);
			CString szDeptName = GetDepartments(tmpStr);
			rptDetail->SetValue(_T("Department"), szDeptName);
			rptDetail->SetValue(_T("Department2"), szDeptName);
			rptDetail->SetValue(_T("Department3"), szDeptName);

	
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
		
		
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

	
	szSQL.Format(_T("UPDATE hms_fee_discount SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);
	
}


//In bang ke chi phi kham chua benh
void CMainFrame::PrintGeneralExaminationCost(long nInvoiceNo, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CReport rpt;
	CString tmpStr, szSQL, szDeptID, szSQLLoc;
	CRecord rsg(&m_db);
	CRecord rs(&m_db);	
	CRecord rsl(&m_db);
	CRecord rs1(&m_db);
	CRecord rsloc(&m_db);
	CRecord rslc(&m_db);
	
	CString szStatus;
	CString szObjectType;	
	
	long	nDocumentNo;
	int		nDeskNo=0;
	int		nUnRate=0;
	int		nInsRate=0;
	bool	bFound = false;
	bool	bInList = false;
	bool	bOutList = false;
	bool	bKList = false;
	int		nSubIndex = 1;
	int		nobjectid;

	CString	szDescription;
	CString szIndex;
	double	nTotalCost=0,				//Tong chi phi
			nTotalInsCost =0,
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatPaid =0,			//Tong benh nhan tra
			nTotalDiffPaid = 0,			//Tong so tra chenh lech
			nTotalPayable=0,
			nTotalDeposit = 0,			//Tong tam ung
			nTotalPolicy=0,
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nTotalRefundAmount=0, //Tổng hoàn trả lấy từ phiếu chi///
			nDepositPayable=0,
			nRefinvoice=0,
			nTotalOtherPaid=0; //Tổng nguồn khác dùng ở phòng khám

	
		
   	if(m_nInpatient==0 && !CheckPermission(_T("01.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return ;
	}

	if(nInvoiceNo <= 0)
		return;


	
	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	TO_CHAR(hp_birthdate, 'YYYY') as yearofbirth,") \
				_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	HMS_GETSEX(hp_sex)                                 AS sex,") \
				_T(" 	hp_sex as sexid,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	sys_sel_getname('sys_ethnic', hp_ethnic) as ethnicdesc, ") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" get_selection_desc('hms_rank', hd_rank) as rankname, ") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T("	hd_createdby as createdby, ") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T("	hd_conclusion conclusion,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" 	hd_suggestion as suggestion,") \
				_T("    sys_sel_getname('hms_result', hd_result) as result, ")
				_T(" 	hd_admitdate as examdate,") \
				_T(" 	hd_enddate as enddate,") \
				_T("	hd_transplace as transplace, ") \
				_T(" 	hd_emergency as emergency,") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	hms_gethospitalname(hc_regcode) as regplace, ") \
				_T("	(select distinct ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hd_disrate as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hd_insregdate as insregdate, ") \
				_T("	hd_xobject as xobject, ") \
				_T("	hd_xcardno as xcardno, ") \
				_T("	hd_xissuedate as xissuedate, ") \
				_T("	hd_outpatient as outpatient, ") \
				_T(" 	hfe_deptid as deptid,") \
				_T("	HFE_OBJECTID as objectid, ") \
				_T(" 	hfe_serialno as serialno,") \
				_T(" 	hfe_receiptno as recvno,") \
				_T(" 	trunc_date(hfe_date) as recvdate, ") \
				_T(" 	hfe_staff as receiver,") \
				_T(" 	hfe_desc as reason, ") \
				_T(" 	hfe_amount as cost,") \
				_T(" 	hfe_discount as discount,") \
				_T(" 	hfe_patpaid as patpaid, hfe_payment as payment, ") \
				_T(" 	hfe_deposit as deposit_amount, ") \
				_T(" 	hfe_diffcost as deposit_payable, ") \
				_T(" 	hfe_refund as refund_amount, ") \
				_T(" 	hfe_freeamount as free_amount, hd_recordno, hfe_extins_payment, ") \
				_T("	get_payment_method(hfe_payment_method) as payment_method  ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_doc ON(hfe_docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld "), m_nDocumentNo, nInvoiceNo);

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
		return;

	double extins_payment = 0;
	double nTotalPayment = 0;

	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatPaid);
	rs.GetValue(_T("payment"), nTotalPayment);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("deposit_payable"), nDepositPayable);
	rs.GetValue(_T("extins_payment"), extins_payment);

	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);

	rs.GetValue(_T("refinvoice"), nRefinvoice);		
	rs.GetValue(_T("objecttype"), szObjectType);
	rs.GetValue(_T("objectid"), nobjectid);

	szSQL.Format(_T(" select count(*) from HMS_PHARMARETURNORDER ph ") \
	_T(" LEFT JOIN hms_fee_refund rf ON (ph.hpo_invoiceno = rf.HFE_invoiceno)") \
	_T(" where HPO_DOCNO=%ld and rf.HFE_REFIDX=%ld"), m_nDocumentNo, nInvoiceNo);
	rslc.ExecSQL(szSQL);
	
	if(szObjectType == _T("I") || szObjectType == _T("C"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSGENERALEXAMINATIONCOST.RPT")) )
		return;
	
	}
	else if(szObjectType == _T("D"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_FREEGENERALEXAMINATIONCOST.RPT")) )
			return;
	}
	else if (szObjectType == _T("L") && rslc.GetIntValue() >0)
	{
		if(!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOSTDRUG.RPT")) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOST.RPT")) )
			return;
	}

	rpt.GetReportHeader()->SetValue(_T("payment_method"), rs.GetValue(_T("payment_method")));

	//Report Header
	tmpStr.Empty();
	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode"), tmpStr);
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
	rs.GetValue(_T("Yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	/*rs.GetValue(_T("sexid"), tmpStr);
	if(tmpStr == _T("M"))
		rpt.GetReportHeader()->SetValue(_T("male"), _T("X"));
	else
		rpt.GetReportHeader()->SetValue(_T("female"), _T("X"));*/

	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);
	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);


	rs.GetValue(_T("rankname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Rank"), tmpStr);

	CString szAddress;
	rs.GetValue(_T("detailaddress"), tmpStr);
	szAddress = tmpStr;
	rs.GetValue(_T("address"), tmpStr);
	if(!szAddress.IsEmpty())
		szAddress += _T(" - ");
	szAddress += tmpStr;
	rpt.GetReportHeader()->SetValue(_T("Address"), szAddress);
	
	rs.GetValue(_T("deptid"), tmpStr);

	CString szDepartmentName;
	StringUpper(GetDepartments(tmpStr), szDepartmentName);
	rpt.GetReportHeader()->SetValue(_T("Department"), szDepartmentName);
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rs.GetValue(_T("enddate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("EndDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	rs.GetValue(_T("transplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), tmpStr);

	rs.GetValue(_T("emergency"), tmpStr);
	if (tmpStr == _T("Y") )
		rpt.GetReportHeader()->SetValue(_T("emergency"), _T("X"));

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);	
	rs.GetValue(_T("disrate"), nInsRate);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), nInsRate);
	//-- In thong tin benh nhan dieu tri ngoai tru hd_Oupatient = Y;
	rs.GetValue(_T("Outpatient"),tmpStr);	
	if (tmpStr == _T("Y"))
	{
		szSQL.Format(_T(" Select * from hms_outpatient where hop_docno =%ld "),m_nDocumentNo);
		rs1.ExecSQL(szSQL);
		if (!rs1.IsEOF()){
			rs1.GetValue(_T("hop_fromdate"), tmpStr);			
			rpt.GetReportHeader()->SetValue(_T("FromDate"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
			rs1.GetValue(_T("hop_Todate"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("ToDate"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
			rs1.GetValue(_T("hop_treatdays"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("TreatmentDay"), tmpStr);
		}
	}

	rs.GetValue(_T("insline"), tmpStr);	
	if(tmpStr == _T("Y")){
		//TranslateString(_T("Outline"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T(""));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T("X"));
	}

	rs.GetValue(_T("insregdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InsRegDate"), CDate::Convert(tmpStr));

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
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id or hh_newprov_id=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);			
		}

	}
	// Lay thong tin ben vien chuyen di
	rs.GetValue(_T("tohosid"), tmpStr);	
	if(!tmpStr.IsEmpty()){		
		CRecord rsx(&m_db);		
		szSQL.Format(_T("select hh_name from hms_hospital where hh_id='%s' "), tmpStr);		
		rsx.ExecSQL(szSQL);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("hh_name"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("HospitalTransfer"), tmpStr);			
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
	
	rs.GetValue(_T("suggestion"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Suggestion"), GetSelectionString(_T("hms_suggestion"), tmpStr));



	CString szOutPatient, szRecordNo;
	rs.GetValue(_T("outpatient"), szOutPatient);
	rs.GetValue(_T("hd_recordno"), szRecordNo);
	if(szOutPatient == _T("Y") && !szRecordNo.IsEmpty())
	{
		CRecord rso(&pMF->m_db);
		CString szMsg, tmpStr, szRecordType;
		szSQL.Format(_T("SELECT hop_record_type FROM hms_outpatient WHERE hop_patientno=%ld and hop_recordno='%s' "), pMF->m_nPatientNo, szRecordNo);
		rso.ExecSQL(szSQL);
		rso.GetValue(_T("hop_record_type"), szRecordType);
		tmpStr = pMF->GetSelectionString(_T("OBA_RECORDTYPE"), szRecordType);
		szMsg.Format(_T("Bệnh án (%s) số: %s"), tmpStr, szRecordNo);
		rpt.GetReportHeader()->SetValue(_T("recordno"), szMsg);
	}


	CString szSQL2, szRoom, szDisease;
	rs.GetValue(_T("depts"), szDeptID);
	szSQL2.Format(_T(" select he_deptid as deptid,") \
				_T("        hrl_name as roomname,") \
				_T("        he_roomid as roomid,") \
				_T("        he_diagnostic as diagnostic,") \
				_T("        hi_name as disease,") \
				_T("        he_icd10 as icd10,") \
				_T("        he_hatd as hatd") \
				_T(" from hms_exam") \
				_T(" left join hms_roomlist on(hrl_deptid=he_deptid and hrl_id=he_roomid)") \
				_T(" left join hms_icd on(hi_icd=he_icd10) ") \
				_T(" where he_docno=%ld") \
				_T(" ORDER BY he_receptidx, he_updateddate"), m_nDocumentNo);

	CRecord rsd(&m_db);
	rsd.ExecSQL(szSQL2);

	szRoom.Empty();
	szDisease.Empty();
	CString tmpStr2, tmpStr3, szOld, szNew, szDept;
	int roomid;
	bool bIsHA = false;
	while(!rsd.IsEOF())
	{	
		szDept.Empty();
		tmpStr3.Empty();

		rsd.GetValue(_T("deptid"), szNew);
		rsd.GetValue(_T("roomid"), roomid);
		rsd.GetValue(_T("hatd"), tmpStr3);

		if (roomid == 39)
		{
			bIsHA = true;
		}

		if (tmpStr3 == _T("Y"))
		{
			if (!bIsHA)
				bIsHA = true;
		}

		if(szNew != szOld && !szNew.IsEmpty())
		{
			szDept.Format(_T("[%s]"), szNew);
			szOld = szNew;
		}

		if(!szRoom.IsEmpty() )
			szRoom += _T(" -> ");
		szRoom.AppendFormat(_T("%s%s"), szDept, rsd.GetValue(_T("roomname")));

		rsd.GetValue(_T("disease"), tmpStr2);
		tmpStr2.Trim();
		if(tmpStr2.IsEmpty()){
			rsd.GetValue(_T("diagnostic"), tmpStr2);
		}
		if(!szDisease.IsEmpty())
			szDisease += _T("\r\n->");
		szDisease.AppendFormat(_T("%s"), tmpStr2);
		rsd.MoveNext();
	}
	if(szDisease.IsEmpty()) 
		rs.GetValue(_T("diagnostic"), szDisease);
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), szDisease);
	rpt.GetReportHeader()->SetValue(_T("Conclusion"), rs.GetValue(_T("conclusion")));
	rpt.GetReportHeader()->SetValue(_T("ICD10"), rs.GetValue(_T("icd10")));
	rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoom);
	
	//Benh nhan huyet ap tieu duong
	if(bIsHA)
	{
		TranslateString(_T("BN_HATD"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("BN_HATD_108"), tmpStr);
	}
		
	//}
	//else
	//{
	//	rs.GetValue(_T("diagnostic"), tmpStr);
	//	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
	//	rs.GetValue(_T("icd10"), tmpStr);
	//	rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);

	//}

	rs.GetValue(_T("reldisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
	

	rs.GetValue(_T("result"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);	
	
  
	
	rs.GetValue(_T("Doctor"), tmpStr);
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
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy1"), GetDoctorName(tmpStr));
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy2"), GetDoctorName(tmpStr));
	
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetHBITMAP(GetSignatureImage(tmpStr));
		img2->SetFixedHeight(false);
	}	

	// Nguoi tiep don
	tmpStr.Empty();
	rs.GetValue(_T("createdby"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("createdby"), GetDoctorName(tmpStr));
	CReportItem *img3 = rpt.GetReportFooter()->GetItem(_T("Signature3"));
	if(img3)
	{
		img3->SetHBITMAP(GetSignatureImage(tmpStr));
		img3->SetFixedHeight(false);
	}

	CString szRecvDate,szData;
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));

	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);
	/*rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate,yyyymmdd||hhmm,ddmmyyyy|hhmm));*/
	
	szData.Format(rpt.GetReportHeader()->GetValue(_T("ReceiptDate")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate"),szData);

	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"),szData);	

	CReportSection* rptDetail = rpt.GetDetail(0); 
	CReportSection *grp;
	
	CRecord grs(&m_db);	
	CString szFeeID, szID;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	int nCount = 0, nIndex, nChapterID=0;
	int nItem=0, nOldItem=0, nItem2=0;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	long nOrderId=0;

	CString szNewGroup, szOldGroup, szParentGroup;
	double nGroup0Cost=0, nGroup0InsCost= 0, nGroup0Discount=0, nGroup0DiffPaid=0, nGroup0PatPaid=0;
	double nGroup1Cost=0, nGroup1InsCost = 0, nGroup1Discount=0, nGroup1DiffPaid = 0, nGroup1PatPaid=0;
	double nGroup2Cost=0, nGroup2InsCost = 0, nGroup2Discount=0, nGroup2DiffPaid = 0, nGroup2PatPaid=0;	
	double nCost=0, nInsCost =0,  nDiscount=0, nDiffPaid  = 0, nPatPaid=0;

	
	nTotalCost = nTotalDiffPaid = nTotalInsCost = nTotalPatPaid = nTotalDiscount =0;

	szSQL.Format(_T("SELECT * FROM hms_fee_type ORDER BY hft_id "));
	grs.ExecSQL(szSQL);	
	
	//_msg(_T("%s"), szSQL);

	CString szWhere;

	szWhere.Format(_T(" AND hfe_invoiceno=%ld"), nInvoiceNo);
	
	szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X') "));
	
	szWhere.AppendFormat(_T(" and hfe_subgroup='XX' "));

	szWhere.AppendFormat(_T(" and NVL(hfe_category,'N')<>'Y' "));

	if(szObjectType == _T("L") && rslc.GetIntValue() >0)
	{
	szSQL.Format(_T(" with tblfee as") \
	_T(" (") \
	_T(" SELECT ") \
	_T("   hfe_docno,") \
	_T("   hfe_invoiceno,") \
	_T("   hfe_typeindex AS typeindex,") \
	_T("   hfe_status         AS status,") \
	_T("   hfe_type           AS feetype,") \
	_T("   hfe_groupid        AS groupid,") \
	_T("   hfe_groupid3       AS groupid3,") \
	_T("   hfe_itemid         AS itemid,") \
	_T("   hfe_name           AS name,") \
	_T("   hfe_unit           AS unit,") \
	_T("   hfe_hitech         AS hitech,") \
	_T("   hfe_inlist         AS inlist,") \
	_T("   hfe_unitprice      AS unitprice,") \
	_T("   hfe_insprice       AS insprice,") \
	_T("   hfe_disrate        AS disrate,") \
	_T("   hfe_payrate        AS payrate,") \
	_T("   SUM(hfe_qty)       AS qty,") \
	_T("   SUM(hfe_cost)      AS cost,") \
	_T("   SUM(hfe_inscost)   AS inscost,") \
	_T("   SUM(hfe_discount)  AS discount,") \
	_T("   SUM(hfe_diffcost)  AS DiffPaid_,") \
	_T("   SUM(") \
	_T("   CASE") \
	_T("     WHEN hfe_diffcost > 0") \
	_T("     THEN hfe_diffcost") \
	_T("     WHEN hfe_inscost <= 0") \
	_T("     AND hfe_discount <=0") \
	_T("     THEN hfe_patdebt+hfe_patpaid") \
	_T("     ELSE 0") \
	_T("   END)               AS DiffPaid,") \
	_T("   SUM(hfe_patdebt)   AS patdebt,") \
	_T("   SUM(hfe_copayment) AS copayment,") \
	_T("   SUM(hfe_patpaid)   AS patpaid") \
	_T(" FROM hms_fee_view_dtl_v2") \
	_T(" WHERE hfe_docno           =%ld") \
	_T(" AND hfe_invoiceno         =%ld") \
	_T(" AND hfe_class            IN('E', 'I','X')") \
	_T(" AND hfe_subgroup          ='XX'") \
	_T(" AND NVL(hfe_category,'N')<>'Y'") \
	_T(" GROUP BY ") \
	_T("   hfe_docno,") \
	_T("   hfe_invoiceno,") \
	_T("   hfe_typeindex,") \
	_T("   hfe_status ,") \
	_T("   hfe_type ,") \
	_T("   hfe_groupid ,") \
	_T("   hfe_groupid3 ,") \
	_T("   hfe_itemid ,") \
	_T("   hfe_name ,") \
	_T("   hfe_unit ,") \
	_T("   hfe_hitech ,") \
	_T("   hfe_inlist,") \
	_T("   hfe_unitprice,") \
	_T("   hfe_insprice,") \
	_T("   hfe_disrate,") \
	_T("   hfe_payrate") \
	_T(" ORDER BY hfe_typeindex,") \
	_T("   hfe_groupid3,") \
	_T("   hfe_name,") \
	_T("   hfe_unit,") \
	_T("   hfe_unitprice") \
	_T(" ),") \
	_T(" tblrefund as") \
	_T(" (") \
	_T(" SELECT ") \
	_T("   hfe_docno,  ") \
	_T("   hfe_refidx,") \
	_T("   '' AS typeindex,") \
	_T("   hfe_status         AS status,") \
	_T("   hfe_type           AS feetype,") \
	_T("   hfe_group          AS groupid,") \
	_T("   hfe_group          AS groupid3,") \
	_T("   hfe_itemid         AS itemid,") \
	_T("   hfe_desc           AS name,") \
	_T("   hfe_unit           AS unit,") \
	_T("   hfe_hitech         AS hitech,") \
	_T("   ''                 AS inlist,") \
	_T("   hfe_unitprice      AS unitprice,") \
	_T("   hfe_insprice       AS insprice,") \
	_T("   0                  AS disrate,") \
	_T("   0                  AS payrate,") \
	_T("   SUM(HFE_QUANTITY)  AS qty,") \
	_T("   SUM(hfe_cost)      AS cost,") \
	_T("   0   AS inscost,") \
	_T("   SUM(hfe_discount)  AS discount,") \
	_T("   SUM(hfe_diffcost)  AS DiffPaid_,") \
	_T("   SUM(hfe_diffcost)  AS DiffPaid,") \
	_T("   SUM(hfe_patdebt)   AS patdebt,") \
	_T("   0  AS copayment,") \
	_T("   SUM(hfe_patpaid)   AS patpaid") \
	_T(" FROM HMS_FEE_REFUNDLINE") \
	_T(" WHERE hfe_docno           =%ld") \
	_T(" AND hfe_refidx            =%ld") \
	_T(" AND hfe_class            IN('E', 'I','X')") \
	_T(" AND NVL(hfe_category,'N')<>'Y'") \
	_T(" GROUP BY") \
	_T("   hfe_docno,") \
	_T("   hfe_refidx,") \
	_T("   hfe_status ,") \
	_T("   hfe_type ,") \
	_T("   hfe_group ,  ") \
	_T("   hfe_itemid ,") \
	_T("   hfe_desc ,") \
	_T("   hfe_unit ,") \
	_T("   hfe_hitech ,  ") \
	_T("   hfe_unitprice,") \
	_T("   hfe_insprice  ") \
	_T(" ORDER BY   ") \
	_T("   hfe_desc,") \
	_T("   hfe_unit,") \
	_T("   hfe_unitprice") \
	_T("   )") \
	_T(" SELECT") \
	_T("   tblfee.typeindex as typeindex,") \
	_T("   tblfee.status as status,") \
	_T("   tblfee.feetype as feetype,") \
	_T("   tblfee.groupid as groupid,") \
	_T("   tblfee.groupid3 as groupid3,") \
	_T("   tblfee.itemid as itemid,  ") \
	_T("   tblfee.name as name,") \
	_T("   tblfee.unit as unit,") \
	_T("   tblfee.hitech as hitech,") \
	_T("   tblfee.inlist as inlist,") \
	_T("   tblfee.unitprice as unitprice,") \
	_T("   tblfee.insprice as insprice,") \
	_T("   tblfee.disrate as disrate,") \
	_T("   tblfee.payrate as payrate,") \
	_T("   tblfee.qty - tblrefund.qty as qty,") \
	_T("   tblfee.cost - tblrefund.cost as cost,") \
	_T("   tblfee.inscost as inscost,") \
	_T("   tblfee.discount as discount,") \
	_T("   tblfee.DiffPaid_ as DiffPaid_,") \
	_T("   tblfee.DiffPaid as DiffPaid,") \
	_T("   tblfee.patdebt as patdebt,") \
	_T("   tblfee.copayment as copayment,") \
	_T("   tblfee.patpaid - tblrefund.patpaid as patpaid") \
	_T(" FROM tblfee, tblrefund") \
	_T(" WHERE 1=1") \
	_T(" AND tblfee.hfe_docno=tblrefund.hfe_docno") \
	_T(" AND tblfee.hfe_docno=%ld") \
	//_T(" --AND tblfee.hfe_invoiceno=tblrefund.hfe_refidx") \//
	_T(" AND tblfee.name = tblrefund.name"), m_nDocumentNo, nInvoiceNo,m_nDocumentNo, nInvoiceNo,m_nDocumentNo);	
	}
	else
	{
		szSQL.Format(_T(" SELECT hfe_typeindex AS typeindex,") \
				_T("   hfe_status         AS status,") \
				_T("   hfe_type           AS feetype,") \
				_T("   hfe_groupid        AS groupid,") \
				_T("   hfe_groupid3       AS groupid3,") \
				_T("   hfe_itemid         AS itemid,") \
				_T("   hfe_name           AS name,") \
				_T("   hfe_unit           AS unit,") \
				_T("   hfe_hitech         AS hitech,") \
				_T("   hfe_inlist         AS inlist,") \
				_T("   hfe_unitprice      AS unitprice,") \
				_T("   hfe_insprice      AS insprice,") \
				_T("   hfe_disrate as disrate, hfe_payrate as payrate,") \
				_T("   SUM(hfe_qty)       AS qty,") \
				_T("   SUM(hfe_cost)      AS cost,") \
				_T("   SUM(hfe_inscost)   AS inscost,") \
				_T("   SUM(hfe_discount)  AS discount,") \
				_T("   SUM(hfe_diffcost)  AS DiffPaid_,") \
				_T("     SUM(CASE") \
				_T("       WHEN hfe_diffcost > 0") \
				_T("       THEN hfe_diffcost") \
				_T("       WHEN hfe_inscost <= 0") \
				_T("       AND hfe_discount <=0") \
				_T("       THEN hfe_patdebt+hfe_patpaid") \
				_T("       ELSE 0") \
				_T("     END)                      AS DiffPaid,") \
				_T("   SUM(hfe_patdebt)   AS patdebt,") \
				_T("   SUM(hfe_copayment) AS copayment,") \
				_T("   SUM(hfe_patpaid)   AS patpaid") \
				_T(" FROM hms_fee_view_dtl_v3") \
				_T(" WHERE hfe_docno  =%ld %s ") \
				_T(" GROUP BY hfe_typeindex,") \
				_T("   hfe_status ,") \
				_T("   hfe_type ,") \
				_T("   hfe_groupid ,") \
				_T("   hfe_groupid3 ,") \
				_T("   hfe_itemid ,") \
				_T("   hfe_name ,") \
				_T("   hfe_unit ,") \
				_T("   hfe_hitech ,") \
				_T("   hfe_inlist,") \
				_T("   hfe_unitprice, hfe_insprice, hfe_disrate, hfe_payrate ") \
				_T(" ORDER BY hfe_typeindex, hfe_groupid3, hfe_name, hfe_unit, hfe_unitprice"), m_nDocumentNo, szWhere);	
	}
	//_msg(_T("%s"), szSQL);
	
	nIndex = 1;
	CString szSubItem, szType;
	int nSubItem = 1;
	int nIDX;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CString szName;
	CString szNewIndex, szOldIndex;
	
	double nTtlCost=0, nTtlInsCost=0, nTtlDiscount=0, nTtlDiffPaid=0, nTtlPatPaid=0;
	rs.ExecSQL(szSQL);

	while(!grs.IsEOF()){
		tmpStr.Format(_T("%d"), nIndex);
		grs.GetValue(_T("hft_name"), szName);
		grs.GetValue(_T("hft_id"), szNewIndex);
		
		fee.szGroupID = _T("Type");
		fee.szID = tmpStr;
		fee.szName = szName;
		nItem = feeList.Add(fee);
		
		nIDX  = nItem;
		bFound = false;
		nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
		nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

		rs.MoveFirst();
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("typeindex"), tmpStr);
			
			if(tmpStr == szNewIndex){
				bFound = true;		
				rs.GetValue(_T("groupid"), szNewGroup);
				if(szNewGroup != szOldGroup)
				{
					szOldGroup = szNewGroup;
					if(szNewGroup.Left(2) == _T("B1")){
						szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						if(nGroup2Cost > 0){
							TranslateString(_T("Sub Amount"), tmpStr);
							fee.szGroupID = _T("SubAmount");
							fee.szName = tmpStr;
							fee.nCost = nGroup2Cost;
							fee.nInsPaid = nGroup2InsCost;
							fee.nDiscount = nGroup2Discount;
							fee.nDiffPaid = nGroup2DiffPaid;
							fee.nPatPaid = nGroup2PatPaid;
							
							int nItem2 = feeList.Add(fee);
						}

						szIndex.Format(_T("%d.%d"), nIndex, nSubIndex++);
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = rs2.GetValue(_T("hfg_name"));
						int nItem2 = feeList.Add(fee);
						nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

					}
					
				}

				if(szOldIndex != szNewIndex)
				{
					szOldIndex = szNewIndex;
					bInList = false;
					bOutList = false;
				}

				if(szNewIndex == _T("800")){
					

					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;

						int nItem2 = feeList.Add(fee);

					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(bInList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}

					if(tmpStr == _T("3") && !bKList){
						bKList = true;
						if(bInList && bOutList)
							szIndex.Format(_T("%d.3"), nIndex);	
						else if(bInList || bOutList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						TranslateString(_T("Inside cancer list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					

				}

				if(szNewIndex == _T("900")){
					
					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(!bInList)
							szIndex.Format(_T("%d.1"), nIndex);
						else
							szIndex.Format(_T("%d.2"), nIndex);

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
				}

				



				rs.GetValue(_T("cost"), nCost);
				rs.GetValue(_T("inscost"), nInsCost);
				rs.GetValue(_T("discount"), nDiscount);
				rs.GetValue(_T("DiffPaid"), nDiffPaid);
				rs.GetValue(_T("copayment"), nPatPaid);
				
				if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
				{
					
				}
				nTotalCost += nCost;
				nGroup1Cost += nCost;
				nGroup2Cost += nCost;

				nTotalInsCost += nInsCost;
				nGroup1InsCost += nInsCost;
				nGroup2InsCost += nInsCost;

				nTotalDiscount += nDiscount;
				nGroup1Discount += nDiscount;
				nGroup2Discount += nDiscount;

				nTotalDiffPaid += nDiffPaid;
				nGroup1DiffPaid += nDiffPaid;
				nGroup2DiffPaid += nDiffPaid;

				nTotalPatPaid += nPatPaid;
				nGroup1PatPaid += nPatPaid;
				nGroup2PatPaid += nPatPaid;

				fee.szID.Empty();
				fee.szGroupID = _T("Item");
				fee.szName = rs.GetValue(_T("name"));
				fee.szUnit = rs.GetValue(_T("unit"));
				fee.nCost = nCost;
				fee.nInsPaid = nInsCost;
				fee.nDiscount = nDiscount;
				fee.nQuantity = str2float(rs.GetValue(_T("qty")));
				fee.nPrice = str2double(rs.GetValue(_T("unitprice")));
				fee.nInsPrice = str2double(rs.GetValue(_T("insprice")));

				rs.GetValue(_T("disrate"), fee.szDisrate);
				rs.GetValue(_T("payrate"), fee.szPayrate);

				fee.nDiffPaid = nDiffPaid;
				fee.nPatPaid = nPatPaid;
				fee.nCopayment = 0;
				if(fee.nDiscount == 0)
				{
					fee.szDisrate.Empty();
					fee.szPayrate.Empty();
				}
				else if(fee.nDiscount > 0)
				{
					fee.nCopayment = fee.nInsPaid-fee.nDiscount;
				}

				feeList.Add(fee);

									//In huong dan su dung don thuoc.
				if( m_nInpatient == 0 && (m_szObjectType == _T("I") || m_szObjectType == _T("C")) && szNewGroup.Left(2) == _T("A1")){
						long nProductItemID;
						long nOrderID;
						rs.GetValue(_T("itemid"), nProductItemID);
						rs.GetValue(_T("orderid"), nOrderID);

						szSQL.Format(_T("SELECT distinct hpou_dousage as usage ") \
							_T("FROM hms_pharmaorder_usage ") \
							_T("WHERE hpou_docno=%ld and hpou_product_id=%ld "),
							nDocumentNo, nProductItemID);

						rsl.ExecSQL(szSQL);
								double nTotalAmt =0;
								if(!rsl.IsEOF()){
									rsl.GetValue(_T("usage"), tmpStr);
									if(!tmpStr.IsEmpty()){
										fee.szGroupID = _T("Dousage");
										fee.szID.Empty();
										fee.szName.Format(_T("   +   %s"), tmpStr);
										fee.szUnit.Empty();
										fee.nQuantity = 0;
										fee.nPrice = 0;
										fee.nCost = 0;
										//nTotalAmt += fee.nCost;
										fee.nPatPaid = 0;
										fee.nDiscount = 0;

										feeList.Add(fee);
									}
								}


					}



/*
				if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
					CString szItemID;
					rs.GetValue(_T("itemid"), szItemID);
					if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
					{
						szSQL.Format(_T(" SELECT hfe_group, ") \
								_T(" 		hfe_desc as name,") \
								_T(" hfe_unit as unit, ") \
								_T(" hfe_category, ") \
								_T(" 		sum(hfe_quantity) as qty,") \
								_T(" 		hfe_insprice as unitprice,") \
								_T(" 		sum(hfe_inspaid) as cost,") \
								_T(" 		case when hfe_category<>'Y' then sum(hfe_discount) else 0 end as discount,") \
								_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
								_T(" 		sum(hfe_inspaid-hfe_discount) as patpaid") \
								_T(" FROM hms_fee_view ") \
								_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
								_T(" WHERE hfe_docno=%ld  and hfe_cost > 0  and hfe_class='I'  ") \
								_T(" and hfe_subgroup='%s'   ") \
								_T(" GROUP BY hfg_type_id, hfe_group, hfe_desc, hfe_unit, hfe_insprice, hfe_category, hfe_status ") \
								_T(" ORDER BY hfe_category DESC, hfg_type_id, hfe_group,  name, unitprice"), 
								nDocumentNo, szItemID);
					}
					else
					{
						szSQL.Format(_T(" SELECT hfe_group, ") \
								_T(" 		hfe_desc as name,") \
								_T(" hfe_unit as unit, ") \
								_T(" hfe_category, ") \
								_T(" 		sum(hfe_quantity) as qty,") \
								_T(" 		hfe_unitprice as unitprice,") \
								_T(" 		sum(hfe_cost) as cost,") \
								_T(" 		case when hfe_category<>'Y' then sum(hfe_discount) else 0 end as discount,") \
								_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
								_T(" 		sum(hfe_cost-hfe_discount-hfe_DiffPaid) as patpaid") \
								_T(" FROM hms_fee_view ") \
								_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
								_T(" WHERE hfe_docno=%ld  and hfe_cost > 0  and hfe_class='I'  ") \
								_T(" and hfe_subgroup='%s'   ") \
								_T(" GROUP BY hfg_type_id, hfe_group, hfe_desc, hfe_unit, hfe_unitprice, hfe_category, hfe_status") \
								_T(" ORDER BY hfe_category DESC, hfg_type_id, hfe_group,  name, unitprice"), 
								nDocumentNo, szItemID);

					}
					

							rsl.ExecSQL(szSQL);
							
							nCost = nInsCost = nPatPaid = nPatPaid = 0;
							nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;
							bool bInOperation=false, bOutOperation=false;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("cost"),nCost);
								rsl.GetValue(_T("discount"), nDiscount);
								rsl.GetValue(_T("DiffPaid"), nDiffPaid);
								rsl.GetValue(_T("patpaid"), nPatPaid);
								if(nDiscount == 0)
								{
								//	nCost = 0;
									nPatPaid = 0;
									nDiffPaid = 0;
								}


								
								rsl.GetValue(_T("hfe_category"), tmpStr);
								if(tmpStr == _T("Y") && !bInOperation)
								{
									bInOperation = true;
									CString szLabel;
									TranslateString(_T("Inside operation"), szLabel);
									fee.szGroupID = _T("SubItemGroup");
									fee.szID = _T("*");
									fee.szName = szLabel;
									fee.szUnit.Empty();
									fee.nCost = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = 0;
									fee.nDiffPaid = 0;
									fee.nPatDebt = 0;
									feeList.Add(fee);


								}
								if(tmpStr != _T("Y") && !bOutOperation)
								{
									CString szLabel;

									bOutOperation = true;

									if(nTtlCost > 0){
										TranslateString(_T("Amount"), tmpStr);
										fee.szGroupID = _T("SubItemAmount");
										fee.szID.Empty();
										fee.szName.Format(_T("   %s"), tmpStr);;
										fee.nCost = nTtlCost;
										fee.nDiscount = nTtlDiscount;
										fee.nDiffPaid = nTtlDiffPaid;
										fee.nPatPaid = nTtlPatPaid;
										feeList.Add(fee);

										nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;

									}


									

									TranslateString(_T("Outside operation"), szLabel);

									fee.szGroupID = _T("SubItemGroup");
									fee.szID = _T("*");
									fee.szName = szLabel;
									fee.nCost = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = 0;
									fee.nDiffPaid = 0;
									fee.nPatDebt = 0;

									feeList.Add(fee);


								}


								nTtlCost += nCost;
								nTtlInsCost += nInsCost;
								nTtlDiscount += nDiscount;
								nTtlDiffPaid += nDiffPaid;
								nTtlPatPaid += nPatPaid;
								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
										nTotalCost += nCost;
										nGroup1Cost += nCost;
										nTotalInsCost += nInsCost;
										nGroup1InsCost += nInsCost;
										nTotalDiscount += nDiscount;
										nGroup1Discount += nDiscount;
										nTotalDiffPaid += nDiffPaid;
										nGroup1DiffPaid += nDiffPaid;
										nTotalPatPaid += nPatPaid;
										nGroup1PatPaid += nPatPaid;

								}

								rsl.GetValue(_T("name"), tmpStr);
								fee.szID.Empty();
								fee.szName.Format(_T("      %s"), tmpStr);
								fee.szUnit = rsl.GetValue(_T("unit"));
								fee.szGroupID = _T("SubItem");
								fee.nQuantity = str2double(rsl.GetValue(_T("qty")));
								fee.nPrice = str2double(rsl.GetValue(_T("unitprice")));
								fee.nCost = str2double(rsl.GetValue(_T("cost")));
								fee.nInsPaid = str2double(rsl.GetValue(_T("inscost")));
								fee.nDiscount = str2double(rsl.GetValue(_T("discount")));
								fee.nDiffPaid = str2double(rsl.GetValue(_T("diffpaid")));
								fee.nPatPaid = str2double(rsl.GetValue(_T("patpaid")));
								feeList.Add(fee);
								rsl.MoveNext();
							}
							
							if(nTtlCost > 0){
								TranslateString(_T("Amount"), tmpStr);
								fee.szGroupID = _T("SubItemAmount");
								fee.szID.Empty();
								fee.szName.Format(_T("   %s"), tmpStr);;
								fee.szUnit.Empty();
								
								fee.nCost = nTtlCost;
								fee.nDiscount = nTtlDiscount;
								fee.nDiffPaid = nTtlDiffPaid;
								fee.nPatPaid = nTtlPatPaid;
								feeList.Add(fee);

								nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;

							}


							szSQL.Format(_T("SELECT hfe_itemid, hfe_desc, hfe_quantity, hfe_cost, hfe_discount, case when hfe_status='P' then hfe_patpaid else hfe_patdebt end as hfe_paid ") \
								_T("FROM hms_fee ") \
								_T("WHERE hfe_docno=%ld and hfe_type='V' and hfe_unit='%s' ORDER BY hfe_itemid DESC "), 
								nDocumentNo, szItemID);
							rsl.ExecSQL(szSQL);
							nCost = nInsCost = nPatPaid  = 0;
							while(!rsl.IsEOF())
							{
								CString szItemID;
								rsl.GetValue(_T("hfe_itemid"), szItemID);
								
								fee.szID = _T("*");
								fee.szGroupID = _T("Item");
								fee.szName = rsl.GetValue(_T("hfe_desc"));
								fee.nCost = str2double(rsl.GetValue(_T("hfe_cost")));
								fee.nDiscount = str2double(rsl.GetValue(_T("hfe_discount")));
								fee.nDiffPaid = 0;
								fee.nPatPaid = str2double(rsl.GetValue(_T("hfe_patpaid")));
								feeList.Add(fee);


								rsl.GetValue(_T("hfe_cost"), nCost);
								if(szItemID == _T("VT000001"))
								{
									nCost = 0;
								}


								
								rsl.GetValue(_T("hfe_discount"), nDiscount);
								rsl.GetValue(_T("hfe_paid"), nPatPaid);

								nTtlCost += nCost;
								nTtlInsCost += (nCost-nDiffPaid);
								nGroup1Cost += nCost;
								nGroup2Cost += nCost;
								nTtlDiscount += nDiscount;
								nTtlDiffPaid += nDiffPaid;
								nTtlPatPaid += nPatPaid;

								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
									nTotalCost += nCost;
									
									nGroup1Cost += nCost;
									nTotalInsCost += nInsCost;
									nGroup1InsCost += nInsCost;
									nTotalDiscount += nDiscount;
									nGroup1Discount += nDiscount;
									nTotalDiffPaid += nDiffPaid;
									nGroup1DiffPaid += nDiffPaid;
									nTotalPatPaid += nPatPaid;
									nGroup1PatPaid += nPatPaid;
								}

								rsl.MoveNext();

							}
					
					}	//end B4, B5



				
*/
				}
			

			
			rs.MoveNext();
		}
		if(!bFound)
		{
			feeList.RemoveAt(nIDX);
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;
		}
		else
		{
			if(nGroup1Cost > 0){
				if(nGroup2Cost > 0 && nGroup1Cost != nGroup2Cost){
					TranslateString(_T("Sub Amount"), tmpStr);
					fee.szGroupID = _T("SubAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup2Cost;
					fee.nInsPaid = nGroup2InsCost;
					fee.nDiscount = nGroup2Discount;
					fee.nDiffPaid = nGroup2DiffPaid;
					fee.nPatPaid = nGroup2PatPaid;
					feeList.Add(fee);
				}

					TranslateString(_T("Total"), tmpStr);
					tmpStr.AppendFormat(_T(" (%d)"), nIndex);
					fee.szGroupID = _T("GrandAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup1Cost;
					fee.nInsPaid = nGroup1InsCost;
					fee.nDiscount = nGroup1Discount;
					fee.nDiffPaid = nGroup1DiffPaid;
					fee.nPatPaid = nGroup1PatPaid;
					
					feeList.Add(fee);
			}
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

			nIndex++;
		}



		grs.MoveNext();
	}

	nTotalPayable = ceil(nTotalCost-nTotalDiscount);
	TranslateString(_T("Total Amount"), szName);
	fee.szGroupID = _T("TotalAmount");
	fee.szName = szName;
	fee.nCost = nTotalCost;
	fee.nInsPaid = nTotalInsCost;
	fee.nDiscount = nTotalDiscount;
	fee.nDiffPaid = nTotalDiffPaid;
	fee.nPatPaid = nTotalPatPaid;
	feeList.Add(fee);


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
				
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
				

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);


				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);


				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

			}
			else if(szType == _T("GrandAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

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

				FormatCurrency(fee.nInsPrice, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				tmpStr = fee.szPayrate;
				rptDetail->SetValue(_T("7"), tmpStr);
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);

				rptDetail->SetValue(_T("10"), fee.szDisrate);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("13"), tmpStr);
				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("14"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemGroup")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				rptDetail->SetValue(_T("5"), _T(""));
				
			}

			else if(szType == _T("SubItem")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) obj->SetItalic(true);
				}

				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);

				FormatCurrency(fee.nInsPrice, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				rptDetail->SetValue(_T("7"), _T(""));
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);

				
				rptDetail->SetValue(_T("9"), _T(""));
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("13"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("14"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemAmount")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), _T(""));	//unitprice
				rptDetail->SetValue(_T("6"), _T(""));	//insprice
				
				rptDetail->SetValue(_T("7"), _T(""));	//payrate
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				
				rptDetail->SetValue(_T("10"), _T(""));	//disrate
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("13"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("14"), tmpStr);
				}
				
			}

			else if(szType == _T("Dousage")){
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));
				rptDetail->SetValue(_T("usage"), fee.szName);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				FormatCurrency(fee.nCost, tmpStr);

				rptDetail->SetValue(_T("TotalAmount"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
				//fee.nPatPaid= fee.nCost-fee.nDiscount;
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("TotalInsUnPaid"), tmpStr);
				}
		}
	}

	
	szSQL.Format(_T(" SELECT hfe_amount,") \
				_T("   hfe_inspaid,") \
				_T("   hfe_discount,") \
				_T("   hfe_patpaid,") \
				_T("   hfe_payment,") \
				_T("   hfe_diffcost,") \
				_T("   hfe_diffpaid,") \
				_T("   hfe_deposit,") \
				_T("   hfe_refund,") \
				_T("   hfe_freeamount, hfe_extins_payment,  HFE_OTHERPAID") \
				_T(" FROM hms_fee_invoice") \
				_T(" WHERE hfe_invoiceno=%ld"), nInvoiceNo);
					rs.ExecSQL(szSQL);

//szSQL.Format(_T(" SELECT hfe_amount) \
//				_T(" FROM hms_fee_refund") \
//				_T(" WHERE hfe_refidx=%ld"), nInvoiceNo);
//					rsloc.ExecSQL(szSQL);

				szSQL.Format(_T(" select SUM(hfe_amount) as hfe_amount from hms_fee_refund") \
				_T(" WHERE hfe_docno =%ld AND hfe_refidx=%ld AND NVL(hfe_desc, 'XX') <> 'Hoàn trả bệnh nhân thanh toán ra viện'"), m_nDocumentNo, nInvoiceNo);
				rsloc.ExecSQL(szSQL);
				//_msg(_T("%s"), szSQL);

	
	if(!rs.IsEOF())
	{
		double nTotalDiffPaid;
		double nTotalPayment;
		double nTotalPatPaid;
		double nTotalRefundAmount;

		rs.GetValue(_T("hfe_amount"), nTotalCost);
		rs.GetValue(_T("hfe_inspaid"), nTotalInsCost);
		rs.GetValue(_T("hfe_discount"), nTotalDiscount);
		rs.GetValue(_T("hfe_patpaid"), nTotalPatPaid);
		rs.GetValue(_T("hfe_diffcost"), nTotalDiffPaid);
		rs.GetValue(_T("hfe_deposit"), nTotalDeposit);
		rs.GetValue(_T("hfe_refund"), nTotalRefund);
		rs.GetValue(_T("hfe_freeamount"), nTotalFree);
		rs.GetValue(_T("hfe_payment"), nTotalPayment);
		rs.GetValue(_T("HFE_OTHERPAID"), nTotalOtherPaid);
		rs.GetValue(_T("hfe_extins_payment"), extins_payment);

		rsloc.GetValue(_T("hfe_amount"), nTotalRefundAmount);


		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency((nTotalCost), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.0f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		
		FormatCurrency(nTotalInsCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsCost"), tmpStr);


		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsDiscount"), tmpStr);

		FormatCurrency((nTotalInsCost-nTotalDiscount), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsUnPaid"), tmpStr);
		
		nTotalDiffPaid = (nTotalCost - nTotalInsCost);

		FormatCurrency((nTotalDiffPaid), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiffPaid"), tmpStr);

		//FormatCurrency((nTotalDiffPaid), tmpStr);
		//rpt.GetReportFooter()->SetValue(_T("SumDiffPaid"), tmpStr);

		
		FormatCurrency((nTotalRefundAmount), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumRefundAmount"), tmpStr);

		FormatCurrency(nTotalPatPaid - nTotalRefundAmount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);

		CString szSumInWord1;
		tmpStr.Format(_T("%.0f"), nTotalPatPaid - nTotalRefundAmount);
		MoneyToString(tmpStr, szSumInWord1);
		szSumInWord1 += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord1"), szSumInWord1);


		FormatCurrency(nTotalPayment, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

		FormatCurrency(extins_payment, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumExtInsPaid"), tmpStr);


		FormatCurrency((nTotalDeposit), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDeposit"), tmpStr);
		
		FormatCurrency((nTotalOtherPaid), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("OtherSource"), tmpStr);
		
		if (nobjectid == 11)
		{
		FormatCurrency(nTotalOtherPaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumBQPPaid"), tmpStr);
		}

		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiscount"), tmpStr);
		if(nTotalRefund > 0)
		{
			FormatCurrency(nTotalRefund, tmpStr);
			//rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumRefund"), tmpStr);
		}
		else
		{
			FormatCurrency(nTotalPayment, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);
			//rpt.GetReportFooter()->SetValue(_T("SumPaided"), tmpStr);

		}
	}

	if(nInsRate > 0)
	{
		nUnRate = 100 - nInsRate;
		if(nUnRate ==0)
			nUnRate = nInsRate;

		tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
		rpt.GetReportFooter()->SetValue(_T("UnRate"), tmpStr);
	}

	




	szSQL.Format(_T("SELECT hd_doctor FROM hms_doc WHERE hd_docno =%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("createdby1"), GetDoctorName(tmpStr));

	if(bPreview)
		rpt.PrintPreview();
	else
	{
		rpt.Print();
	}
}
void CMainFrame::PrintGeneralExaminationCostA11(long nInvoiceNo, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CReport rpt;
	CString tmpStr, szSQL, szDeptID;
	CRecord rsg(&m_db);
	CRecord rs(&m_db);	
	CRecord rsl(&m_db);
	CRecord rs1(&m_db);
	
	CString szStatus;
	CString szObjectType;
	
	long	nDocumentNo;
	int		nDeskNo=0;
	int		nUnRate=0;
	int		nInsRate=0;
	bool	bFound = false;
	bool	bInList = false;
	bool	bOutList = false;
	bool	bKList = false;
	int		nSubIndex = 1;

	CString	szDescription;
	CString szIndex;
	double	nTotalCost=0,				//Tong chi phi
			nTotalInsCost =0,
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatPaid =0,			//Tong benh nhan tra
			nTotalDiffPaid = 0,			//Tong so tra chenh lech
			nTotalPayable=0,
			nTotalDeposit = 0,			//Tong tam ung
			nTotalPolicy=0,
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0,
			nRefinvoice=0;

	
		
   	if(m_nInpatient==0 && !CheckPermission(_T("20.14")))
	{
		ShowMessageBox(_T("Bạn Chưa được cấp quyền 20.14 ở phân hệ tài chính để thực hiện chức năng này"), 0);
		return ;
	}

	if(nInvoiceNo <= 0)
		return;
	
	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	TO_CHAR(hp_birthdate, 'YYYY') as yearofbirth,") \
				_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	hp_sex as sexid,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	sys_sel_getname('sys_ethnic', hp_ethnic) as ethnicdesc, ") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" get_selection_desc('hms_rank', hd_rank) as rankname, ") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T("	hd_createdby as createdby, ") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T("	hd_conclusion conclusion,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" 	hd_suggestion as suggestion,") \
				_T("    sys_sel_getname('hms_result', hd_result) as result, ")
				_T(" 	hd_admitdate as examdate,") \
				_T(" 	hd_enddate as enddate,") \
				_T("	hd_transplace as transplace, ") \
				_T(" 	hd_emergency as emergency,") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	hms_gethospitalname(hc_regcode) as regplace, ") \
				_T("	(select distinct ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hd_disrate as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hd_insregdate as insregdate, ") \
				_T("	hd_xobject as xobject, ") \
				_T("	hd_xcardno as xcardno, ") \
				_T("	hd_xissuedate as xissuedate, ") \
				_T("	hd_outpatient as outpatient, ") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_serialno as serialno,") \
				_T(" 	hfe_receiptno as recvno,") \
				_T(" 	trunc_date(hfe_date) as recvdate, ") \
				_T(" 	hfe_staff as receiver,") \
				_T(" 	hfe_desc as reason, ") \
				_T(" 	hfe_amount as cost,") \
				_T(" 	hfe_discount as discount,") \
				_T(" 	hfe_patpaid as patpaid, hfe_payment as payment, ") \
				_T(" 	hfe_deposit as deposit_amount, ") \
				_T(" 	hfe_diffcost as deposit_payable, ") \
				_T(" 	hfe_refund as refund_amount, ") \
				_T(" 	hfe_freeamount as free_amount, hd_recordno, hfe_extins_payment, ") \
				_T("	get_payment_method(hfe_payment_method) as payment_method  ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_doc ON(hfe_docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld "), m_nDocumentNo, nInvoiceNo);

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
		return;

	double extins_payment = 0;
	double nTotalPayment = 0;

	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatPaid);
	rs.GetValue(_T("payment"), nTotalPayment);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("deposit_payable"), nDepositPayable);
	rs.GetValue(_T("extins_payment"), extins_payment);

	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);

	rs.GetValue(_T("refinvoice"), nRefinvoice);		
	rs.GetValue(_T("objecttype"), szObjectType);


	
	if(szObjectType == _T("I") || szObjectType == _T("C"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSGENERALEXAMINATIONCOSTA11.RPT")) )
		return;
	
	}
	else if(szObjectType == _T("D"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_FREEGENERALEXAMINATIONCOSTA11.RPT")) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOSTA11.RPT")) )
			return;
	}

	rpt.GetReportHeader()->SetValue(_T("payment_method"), rs.GetValue(_T("payment_method")));

	//Report Header
	tmpStr.Empty();
	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode"), tmpStr);
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
	rs.GetValue(_T("Yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("sexid"), tmpStr);
	if(tmpStr == _T("M"))
		rpt.GetReportHeader()->SetValue(_T("male"), _T("X"));
	else
		rpt.GetReportHeader()->SetValue(_T("female"), _T("X"));

	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);
	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);


	rs.GetValue(_T("rankname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Rank"), tmpStr);

	CString szAddress;
	rs.GetValue(_T("detailaddress"), tmpStr);
	szAddress = tmpStr;
	rs.GetValue(_T("address"), tmpStr);
	if(!szAddress.IsEmpty())
		szAddress += _T(" - ");
	szAddress += tmpStr;
	rpt.GetReportHeader()->SetValue(_T("Address"), szAddress);
	
	rs.GetValue(_T("deptid"), tmpStr);

	CString szDepartmentName;
	StringUpper(GetDepartments(tmpStr), szDepartmentName);
	rpt.GetReportHeader()->SetValue(_T("Department"), szDepartmentName);
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rs.GetValue(_T("enddate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("EndDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	rs.GetValue(_T("transplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), tmpStr);

	rs.GetValue(_T("emergency"), tmpStr);
	if (tmpStr == _T("Y") )
		rpt.GetReportHeader()->SetValue(_T("emergency"), _T("X"));

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);	
	rs.GetValue(_T("disrate"), nInsRate);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), nInsRate);
	//-- In thong tin benh nhan dieu tri ngoai tru hd_Oupatient = Y;
	rs.GetValue(_T("Outpatient"),tmpStr);	
	if (tmpStr == _T("Y"))
	{
		szSQL.Format(_T(" Select * from hms_outpatient where hop_docno =%ld "),m_nDocumentNo);
		rs1.ExecSQL(szSQL);
		if (!rs1.IsEOF())
		{
			rs1.GetValue(_T("hop_fromdate"), tmpStr);			
			rpt.GetReportHeader()->SetValue(_T("FromDate"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
			rs1.GetValue(_T("hop_Todate"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("ToDate"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
			rs1.GetValue(_T("hop_treatdays"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("TreatmentDay"), tmpStr);
		}
	}

	rs.GetValue(_T("insline"), tmpStr);	
	if(tmpStr == _T("Y")){
		//TranslateString(_T("Outline"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T(""));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T("X"));
	}

	rs.GetValue(_T("insregdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InsRegDate"), CDate::Convert(tmpStr));

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
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id or hh_newprov_id=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);			
		}

	}
	// Lay thong tin ben vien chuyen di
	rs.GetValue(_T("tohosid"), tmpStr);	
	if(!tmpStr.IsEmpty()){		
		CRecord rsx(&m_db);		
		szSQL.Format(_T("select hh_name from hms_hospital where hh_id='%s' "), tmpStr);		
		rsx.ExecSQL(szSQL);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("hh_name"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("HospitalTransfer"), tmpStr);			
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
	
	rs.GetValue(_T("suggestion"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Suggestion"), GetSelectionString(_T("hms_suggestion"), tmpStr));



	CString szOutPatient, szRecordNo;
	rs.GetValue(_T("outpatient"), szOutPatient);
	rs.GetValue(_T("hd_recordno"), szRecordNo);
	if(szOutPatient == _T("Y") && !szRecordNo.IsEmpty())
	{
		CRecord rso(&pMF->m_db);
		CString szMsg, tmpStr, szRecordType;
		szSQL.Format(_T("SELECT hop_record_type FROM hms_outpatient WHERE hop_patientno=%ld and hop_recordno='%s' "), pMF->m_nPatientNo, szRecordNo);
		rso.ExecSQL(szSQL);
		rso.GetValue(_T("hop_record_type"), szRecordType);
		tmpStr = pMF->GetSelectionString(_T("OBA_RECORDTYPE"), szRecordType);
		szMsg.Format(_T("Bệnh án (%s) số: %s"), tmpStr, szRecordNo);
		rpt.GetReportHeader()->SetValue(_T("recordno"), szMsg);
	}


	CString szSQL2, szRoom, szDisease;
	rs.GetValue(_T("depts"), szDeptID);
	szSQL2.Format(_T(" select he_deptid as deptid,") \
				_T("        hrl_name as roomname,") \
				_T("        he_roomid as roomid,") \
				_T("        he_diagnostic as diagnostic,") \
				_T("        hi_name as disease,") \
				_T("        he_icd10 as icd10,") \
				_T("        he_hatd as hatd") \
				_T(" from hms_exam") \
				_T(" left join hms_roomlist on(hrl_deptid=he_deptid and hrl_id=he_roomid)") \
				_T(" left join hms_icd on(hi_icd=he_icd10) ") \
				_T(" where he_docno=%ld") \
				_T(" ORDER BY he_receptidx, he_updateddate"), m_nDocumentNo);

	CRecord rsd(&m_db);
	rsd.ExecSQL(szSQL2);

	szRoom.Empty();
	szDisease.Empty();
	CString tmpStr2, tmpStr3, szOld, szNew, szDept;
	int roomid;
	bool bIsHA = false;
	while(!rsd.IsEOF())
	{	
		szDept.Empty();
		tmpStr3.Empty();

		rsd.GetValue(_T("deptid"), szNew);
		rsd.GetValue(_T("roomid"), roomid);
		rsd.GetValue(_T("hatd"), tmpStr3);

		if (roomid == 39)
		{
			bIsHA = true;
		}

		if (tmpStr3 == _T("Y"))
		{
			if (!bIsHA)
				bIsHA = true;
		}

		if(szNew != szOld && !szNew.IsEmpty())
		{
			szDept.Format(_T("[%s]"), szNew);
			szOld = szNew;
		}

		if(!szRoom.IsEmpty() )
			szRoom += _T(" -> ");
		szRoom.AppendFormat(_T("%s%s"), szDept, rsd.GetValue(_T("roomname")));

		rsd.GetValue(_T("disease"), tmpStr2);
		tmpStr2.Trim();
		if(tmpStr2.IsEmpty()){
			rsd.GetValue(_T("diagnostic"), tmpStr2);
		}
		if(!szDisease.IsEmpty())
			szDisease += _T("\r\n->");
		szDisease.AppendFormat(_T("%s"), tmpStr2);
		rsd.MoveNext();
	}
	if(szDisease.IsEmpty()) 
		rs.GetValue(_T("diagnostic"), szDisease);
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), szDisease);
	rpt.GetReportHeader()->SetValue(_T("Conclusion"), rs.GetValue(_T("conclusion")));
	rpt.GetReportHeader()->SetValue(_T("ICD10"), rs.GetValue(_T("icd10")));
	rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoom);
	
	//Benh nhan huyet ap tieu duong
	if(bIsHA)
	{
		TranslateString(_T("BN_HATD"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("BN_HATD"), tmpStr);
	}
		
	//}
	//else
	//{
	//	rs.GetValue(_T("diagnostic"), tmpStr);
	//	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
	//	rs.GetValue(_T("icd10"), tmpStr);
	//	rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);

	//}

	rs.GetValue(_T("reldisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
	

	rs.GetValue(_T("result"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);	
	
  
	
	rs.GetValue(_T("Doctor"), tmpStr);
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
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy1"), GetDoctorName(tmpStr));
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy2"), GetDoctorName(tmpStr));
	
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetHBITMAP(GetSignatureImage(tmpStr));
		img2->SetFixedHeight(false);
	}	

	// Nguoi tiep don
	tmpStr.Empty();
	rs.GetValue(_T("createdby"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("createdby"), GetDoctorName(tmpStr));
	CReportItem *img3 = rpt.GetReportFooter()->GetItem(_T("Signature3"));
	if(img3)
	{
		img3->SetHBITMAP(GetSignatureImage(tmpStr));
		img3->SetFixedHeight(false);
	}

	CString szRecvDate,szData;
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));

	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);
	/*rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate,yyyymmdd||hhmm,ddmmyyyy|hhmm));*/
	
	szData.Format(rpt.GetReportHeader()->GetValue(_T("ReceiptDate")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate"),szData);

	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"),szData);	

	CReportSection* rptDetail = rpt.GetDetail(0); 
	CReportSection *grp;
	
	CRecord grs(&m_db);
	CString szFeeID, szID;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	int nCount = 0, nIndex, nChapterID=0;
	int nItem=0, nOldItem=0, nItem2=0;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	long nOrderId=0;

	CString szNewGroup, szOldGroup, szParentGroup;
	double nGroup0Cost=0, nGroup0InsCost= 0, nGroup0Discount=0, nGroup0DiffPaid=0, nGroup0PatPaid=0;
	double nGroup1Cost=0, nGroup1InsCost = 0, nGroup1Discount=0, nGroup1DiffPaid = 0, nGroup1PatPaid=0;
	double nGroup2Cost=0, nGroup2InsCost = 0, nGroup2Discount=0, nGroup2DiffPaid = 0, nGroup2PatPaid=0;	
	double nCost=0, nInsCost =0,  nDiscount=0, nDiffPaid  = 0, nPatPaid=0;

	
	nTotalCost = nTotalDiffPaid = nTotalInsCost = nTotalPatPaid = nTotalDiscount =0;

	szSQL.Format(_T("SELECT * FROM hms_fee_type ORDER BY hft_id "));
	grs.ExecSQL(szSQL);

	CString szWhere;

	szWhere.Format(_T(" AND hfe_invoiceno=%ld"), nInvoiceNo);

	
	szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X') "));
	
	szWhere.AppendFormat(_T(" and hfe_subgroup='XX' "));

	szWhere.AppendFormat(_T(" and NVL(hfe_category,'N')<>'Y' AND hfe_type in ('D', 'M')"));

	szSQL.Format(_T(" SELECT hfe_typeindex AS typeindex,") \
_T("   hfe_status         AS status,") \
_T("   hfe_type           AS feetype,") \
_T("   hfe_groupid        AS groupid,") \
_T("   hfe_groupid3       AS groupid3,") \
_T("   hfe_itemid         AS itemid,") \
_T("   hfe_name           AS name,") \
_T("   hfe_unit           AS unit,") \
_T("   hfe_hitech         AS hitech,") \
_T("   hfe_inlist         AS inlist,") \
_T("   hfe_unitprice      AS unitprice,") \
_T("   hfe_insprice      AS insprice,") \
_T("   hfe_disrate as disrate, hfe_payrate as payrate,") \
_T("   SUM(hfe_qty)       AS qty,") \
_T("   SUM(hfe_cost)      AS cost,") \
_T("   SUM(hfe_inscost)   AS inscost,") \
_T("   SUM(hfe_discount)  AS discount,") \
_T("   SUM(hfe_diffcost)  AS DiffPaid_,") \
_T("     SUM(CASE") \
_T("       WHEN hfe_diffcost > 0") \
_T("       THEN hfe_diffcost") \
_T("       WHEN hfe_inscost <= 0") \
_T("       AND hfe_discount <=0") \
_T("       THEN hfe_patdebt+hfe_patpaid") \
_T("       ELSE 0") \
_T("     END)                      AS DiffPaid,") \
_T("   SUM(hfe_patdebt)   AS patdebt,") \
_T("   SUM(hfe_copayment) AS copayment,") \
_T("   SUM(hfe_patpaid)   AS patpaid") \
_T(" FROM hms_fee_view_dtl_v2") \
_T(" WHERE hfe_docno  =%ld %s ") \
_T(" GROUP BY hfe_typeindex,") \
_T("   hfe_status ,") \
_T("   hfe_type ,") \
_T("   hfe_groupid ,") \
_T("   hfe_groupid3 ,") \
_T("   hfe_itemid ,") \
_T("   hfe_name ,") \
_T("   hfe_unit ,") \
_T("   hfe_hitech ,") \
_T("   hfe_inlist,") \
_T("   hfe_unitprice, hfe_insprice, hfe_disrate, hfe_payrate ") \
_T(" ORDER BY hfe_typeindex, hfe_groupid3, hfe_name, hfe_unit, hfe_unitprice"), m_nDocumentNo, szWhere);

//_msg(_T("%s"), szSQL);
	
	nIndex = 1;
	CString szSubItem, szType;
	int nSubItem = 1;
	int nIDX;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CString szName;
	CString szNewIndex, szOldIndex;
	
	double nTtlCost=0, nTtlInsCost=0, nTtlDiscount=0, nTtlDiffPaid=0, nTtlPatPaid=0;
	rs.ExecSQL(szSQL);

	while(!grs.IsEOF()){
		tmpStr.Format(_T("%d"), nIndex);
		grs.GetValue(_T("hft_name"), szName);
		grs.GetValue(_T("hft_id"), szNewIndex);
		
		fee.szGroupID = _T("Type");
		fee.szID = tmpStr;
		fee.szName = szName;
		nItem = feeList.Add(fee);
		
		nIDX  = nItem;
		bFound = false;
		nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
		nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

		rs.MoveFirst();
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("typeindex"), tmpStr);
			
			if(tmpStr == szNewIndex){
				bFound = true;		
				rs.GetValue(_T("groupid"), szNewGroup);
				if(szNewGroup != szOldGroup)
				{
					szOldGroup = szNewGroup;
					if(szNewGroup.Left(2) == _T("B1")){
						szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						if(nGroup2Cost > 0){
							TranslateString(_T("Sub Amount"), tmpStr);
							fee.szGroupID = _T("SubAmount");
							fee.szName = tmpStr;
							fee.nCost = nGroup2Cost;
							fee.nInsPaid = nGroup2InsCost;
							fee.nDiscount = nGroup2Discount;
							fee.nDiffPaid = nGroup2DiffPaid;
							fee.nPatPaid = nGroup2PatPaid;
							
							int nItem2 = feeList.Add(fee);
						}

						szIndex.Format(_T("%d.%d"), nIndex, nSubIndex++);
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = rs2.GetValue(_T("hfg_name"));
						int nItem2 = feeList.Add(fee);
						nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

					}
					
				}

				if(szOldIndex != szNewIndex)
				{
					szOldIndex = szNewIndex;
					bInList = false;
					bOutList = false;
				}

				if(szNewIndex == _T("800")){
					

					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;

						int nItem2 = feeList.Add(fee);

					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(bInList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}

					if(tmpStr == _T("3") && !bKList){
						bKList = true;
						if(bInList && bOutList)
							szIndex.Format(_T("%d.3"), nIndex);	
						else if(bInList || bOutList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						TranslateString(_T("Inside cancer list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					

				}

				if(szNewIndex == _T("900")){
					
					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(!bInList)
							szIndex.Format(_T("%d.1"), nIndex);
						else
							szIndex.Format(_T("%d.2"), nIndex);

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
				}

				



				rs.GetValue(_T("cost"), nCost);
				rs.GetValue(_T("inscost"), nInsCost);
				rs.GetValue(_T("discount"), nDiscount);
				rs.GetValue(_T("DiffPaid"), nDiffPaid);
				rs.GetValue(_T("copayment"), nPatPaid);
				
				if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
				{
					
				}
				nTotalCost += nCost;
				nGroup1Cost += nCost;
				nGroup2Cost += nCost;

				nTotalInsCost += nInsCost;
				nGroup1InsCost += nInsCost;
				nGroup2InsCost += nInsCost;

				nTotalDiscount += nDiscount;
				nGroup1Discount += nDiscount;
				nGroup2Discount += nDiscount;

				nTotalDiffPaid += nDiffPaid;
				nGroup1DiffPaid += nDiffPaid;
				nGroup2DiffPaid += nDiffPaid;

				nTotalPatPaid += nPatPaid;
				nGroup1PatPaid += nPatPaid;
				nGroup2PatPaid += nPatPaid;

				fee.szID.Empty();
				fee.szGroupID = _T("Item");
				fee.szName = rs.GetValue(_T("name"));
				fee.szUnit = rs.GetValue(_T("unit"));
				fee.nCost = nCost;
				fee.nInsPaid = nInsCost;
				fee.nDiscount = nDiscount;
				fee.nQuantity = str2float(rs.GetValue(_T("qty")));
				fee.nPrice = str2double(rs.GetValue(_T("unitprice")));
				fee.nInsPrice = str2double(rs.GetValue(_T("insprice")));

				rs.GetValue(_T("disrate"), fee.szDisrate);
				rs.GetValue(_T("payrate"), fee.szPayrate);

				fee.nDiffPaid = nDiffPaid;
				fee.nPatPaid = nPatPaid;
				fee.nCopayment = 0;
				if(fee.nDiscount == 0)
				{
					fee.szDisrate.Empty();
					fee.szPayrate.Empty();
				}
				else if(fee.nDiscount > 0)
				{
					fee.nCopayment = fee.nInsPaid-fee.nDiscount;
				}

				feeList.Add(fee);

									//In huong dan su dung don thuoc.
				if( m_nInpatient == 0 && (m_szObjectType == _T("I") || m_szObjectType == _T("C")) && szNewGroup.Left(2) == _T("A1")){
						long nProductItemID;
						long nOrderID;
						rs.GetValue(_T("itemid"), nProductItemID);
						rs.GetValue(_T("orderid"), nOrderID);

						szSQL.Format(_T("SELECT distinct hpou_dousage as usage ") \
							_T("FROM hms_pharmaorder_usage ") \
							_T("WHERE hpou_docno=%ld and hpou_product_id=%ld "),
							nDocumentNo, nProductItemID);

						rsl.ExecSQL(szSQL);
								double nTotalAmt =0;
								if(!rsl.IsEOF()){
									rsl.GetValue(_T("usage"), tmpStr);
									if(!tmpStr.IsEmpty()){
										fee.szGroupID = _T("Dousage");
										fee.szID.Empty();
										fee.szName.Format(_T("   +   %s"), tmpStr);
										fee.szUnit.Empty();
										fee.nQuantity = 0;
										fee.nPrice = 0;
										fee.nCost = 0;
										//nTotalAmt += fee.nCost;
										fee.nPatPaid = 0;
										fee.nDiscount = 0;

										feeList.Add(fee);
									}
								}


					}



/*
				if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
					CString szItemID;
					rs.GetValue(_T("itemid"), szItemID);
					if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
					{
						szSQL.Format(_T(" SELECT hfe_group, ") \
								_T(" 		hfe_desc as name,") \
								_T(" hfe_unit as unit, ") \
								_T(" hfe_category, ") \
								_T(" 		sum(hfe_quantity) as qty,") \
								_T(" 		hfe_insprice as unitprice,") \
								_T(" 		sum(hfe_inspaid) as cost,") \
								_T(" 		case when hfe_category<>'Y' then sum(hfe_discount) else 0 end as discount,") \
								_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
								_T(" 		sum(hfe_inspaid-hfe_discount) as patpaid") \
								_T(" FROM hms_fee_view ") \
								_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
								_T(" WHERE hfe_docno=%ld  and hfe_cost > 0  and hfe_class='I'  ") \
								_T(" and hfe_subgroup='%s'   ") \
								_T(" GROUP BY hfg_type_id, hfe_group, hfe_desc, hfe_unit, hfe_insprice, hfe_category, hfe_status ") \
								_T(" ORDER BY hfe_category DESC, hfg_type_id, hfe_group,  name, unitprice"), 
								nDocumentNo, szItemID);
					}
					else
					{
						szSQL.Format(_T(" SELECT hfe_group, ") \
								_T(" 		hfe_desc as name,") \
								_T(" hfe_unit as unit, ") \
								_T(" hfe_category, ") \
								_T(" 		sum(hfe_quantity) as qty,") \
								_T(" 		hfe_unitprice as unitprice,") \
								_T(" 		sum(hfe_cost) as cost,") \
								_T(" 		case when hfe_category<>'Y' then sum(hfe_discount) else 0 end as discount,") \
								_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
								_T(" 		sum(hfe_cost-hfe_discount-hfe_DiffPaid) as patpaid") \
								_T(" FROM hms_fee_view ") \
								_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
								_T(" WHERE hfe_docno=%ld  and hfe_cost > 0  and hfe_class='I'  ") \
								_T(" and hfe_subgroup='%s'   ") \
								_T(" GROUP BY hfg_type_id, hfe_group, hfe_desc, hfe_unit, hfe_unitprice, hfe_category, hfe_status") \
								_T(" ORDER BY hfe_category DESC, hfg_type_id, hfe_group,  name, unitprice"), 
								nDocumentNo, szItemID);

					}
					

							rsl.ExecSQL(szSQL);
							
							nCost = nInsCost = nPatPaid = nPatPaid = 0;
							nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;
							bool bInOperation=false, bOutOperation=false;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("cost"),nCost);
								rsl.GetValue(_T("discount"), nDiscount);
								rsl.GetValue(_T("DiffPaid"), nDiffPaid);
								rsl.GetValue(_T("patpaid"), nPatPaid);
								if(nDiscount == 0)
								{
								//	nCost = 0;
									nPatPaid = 0;
									nDiffPaid = 0;
								}


								
								rsl.GetValue(_T("hfe_category"), tmpStr);
								if(tmpStr == _T("Y") && !bInOperation)
								{
									bInOperation = true;
									CString szLabel;
									TranslateString(_T("Inside operation"), szLabel);
									fee.szGroupID = _T("SubItemGroup");
									fee.szID = _T("*");
									fee.szName = szLabel;
									fee.szUnit.Empty();
									fee.nCost = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = 0;
									fee.nDiffPaid = 0;
									fee.nPatDebt = 0;
									feeList.Add(fee);


								}
								if(tmpStr != _T("Y") && !bOutOperation)
								{
									CString szLabel;

									bOutOperation = true;

									if(nTtlCost > 0){
										TranslateString(_T("Amount"), tmpStr);
										fee.szGroupID = _T("SubItemAmount");
										fee.szID.Empty();
										fee.szName.Format(_T("   %s"), tmpStr);;
										fee.nCost = nTtlCost;
										fee.nDiscount = nTtlDiscount;
										fee.nDiffPaid = nTtlDiffPaid;
										fee.nPatPaid = nTtlPatPaid;
										feeList.Add(fee);

										nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;

									}


									

									TranslateString(_T("Outside operation"), szLabel);

									fee.szGroupID = _T("SubItemGroup");
									fee.szID = _T("*");
									fee.szName = szLabel;
									fee.nCost = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = 0;
									fee.nDiffPaid = 0;
									fee.nPatDebt = 0;

									feeList.Add(fee);


								}


								nTtlCost += nCost;
								nTtlInsCost += nInsCost;
								nTtlDiscount += nDiscount;
								nTtlDiffPaid += nDiffPaid;
								nTtlPatPaid += nPatPaid;
								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
										nTotalCost += nCost;
										nGroup1Cost += nCost;
										nTotalInsCost += nInsCost;
										nGroup1InsCost += nInsCost;
										nTotalDiscount += nDiscount;
										nGroup1Discount += nDiscount;
										nTotalDiffPaid += nDiffPaid;
										nGroup1DiffPaid += nDiffPaid;
										nTotalPatPaid += nPatPaid;
										nGroup1PatPaid += nPatPaid;

								}

								rsl.GetValue(_T("name"), tmpStr);
								fee.szID.Empty();
								fee.szName.Format(_T("      %s"), tmpStr);
								fee.szUnit = rsl.GetValue(_T("unit"));
								fee.szGroupID = _T("SubItem");
								fee.nQuantity = str2double(rsl.GetValue(_T("qty")));
								fee.nPrice = str2double(rsl.GetValue(_T("unitprice")));
								fee.nCost = str2double(rsl.GetValue(_T("cost")));
								fee.nInsPaid = str2double(rsl.GetValue(_T("inscost")));
								fee.nDiscount = str2double(rsl.GetValue(_T("discount")));
								fee.nDiffPaid = str2double(rsl.GetValue(_T("diffpaid")));
								fee.nPatPaid = str2double(rsl.GetValue(_T("patpaid")));
								feeList.Add(fee);
								rsl.MoveNext();
							}
							
							if(nTtlCost > 0){
								TranslateString(_T("Amount"), tmpStr);
								fee.szGroupID = _T("SubItemAmount");
								fee.szID.Empty();
								fee.szName.Format(_T("   %s"), tmpStr);;
								fee.szUnit.Empty();
								
								fee.nCost = nTtlCost;
								fee.nDiscount = nTtlDiscount;
								fee.nDiffPaid = nTtlDiffPaid;
								fee.nPatPaid = nTtlPatPaid;
								feeList.Add(fee);

								nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;

							}


							szSQL.Format(_T("SELECT hfe_itemid, hfe_desc, hfe_quantity, hfe_cost, hfe_discount, case when hfe_status='P' then hfe_patpaid else hfe_patdebt end as hfe_paid ") \
								_T("FROM hms_fee ") \
								_T("WHERE hfe_docno=%ld and hfe_type='V' and hfe_unit='%s' ORDER BY hfe_itemid DESC "), 
								nDocumentNo, szItemID);
							rsl.ExecSQL(szSQL);
							nCost = nInsCost = nPatPaid  = 0;
							while(!rsl.IsEOF())
							{
								CString szItemID;
								rsl.GetValue(_T("hfe_itemid"), szItemID);
								
								fee.szID = _T("*");
								fee.szGroupID = _T("Item");
								fee.szName = rsl.GetValue(_T("hfe_desc"));
								fee.nCost = str2double(rsl.GetValue(_T("hfe_cost")));
								fee.nDiscount = str2double(rsl.GetValue(_T("hfe_discount")));
								fee.nDiffPaid = 0;
								fee.nPatPaid = str2double(rsl.GetValue(_T("hfe_patpaid")));
								feeList.Add(fee);


								rsl.GetValue(_T("hfe_cost"), nCost);
								if(szItemID == _T("VT000001"))
								{
									nCost = 0;
								}


								
								rsl.GetValue(_T("hfe_discount"), nDiscount);
								rsl.GetValue(_T("hfe_paid"), nPatPaid);

								nTtlCost += nCost;
								nTtlInsCost += (nCost-nDiffPaid);
								nGroup1Cost += nCost;
								nGroup2Cost += nCost;
								nTtlDiscount += nDiscount;
								nTtlDiffPaid += nDiffPaid;
								nTtlPatPaid += nPatPaid;

								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
									nTotalCost += nCost;
									
									nGroup1Cost += nCost;
									nTotalInsCost += nInsCost;
									nGroup1InsCost += nInsCost;
									nTotalDiscount += nDiscount;
									nGroup1Discount += nDiscount;
									nTotalDiffPaid += nDiffPaid;
									nGroup1DiffPaid += nDiffPaid;
									nTotalPatPaid += nPatPaid;
									nGroup1PatPaid += nPatPaid;
								}

								rsl.MoveNext();

							}
					
					}	//end B4, B5



				
*/
				}
			

			
			rs.MoveNext();
		}
		if(!bFound)
		{
			feeList.RemoveAt(nIDX);
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;
		}
		else
		{
			if(nGroup1Cost > 0){
				if(nGroup2Cost > 0 && nGroup1Cost != nGroup2Cost){
					TranslateString(_T("Sub Amount"), tmpStr);
					fee.szGroupID = _T("SubAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup2Cost;
					fee.nInsPaid = nGroup2InsCost;
					fee.nDiscount = nGroup2Discount;
					fee.nDiffPaid = nGroup2DiffPaid;
					fee.nPatPaid = nGroup2PatPaid;
					feeList.Add(fee);
				}

					TranslateString(_T("Total"), tmpStr);
					tmpStr.AppendFormat(_T(" (%d)"), nIndex);
					fee.szGroupID = _T("GrandAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup1Cost;
					fee.nInsPaid = nGroup1InsCost;
					fee.nDiscount = nGroup1Discount;
					fee.nDiffPaid = nGroup1DiffPaid;
					fee.nPatPaid = nGroup1PatPaid;
					
					feeList.Add(fee);
			}
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

			nIndex++;
		}



		grs.MoveNext();
	}

	nTotalPayable = ceil(nTotalCost-nTotalDiscount);
	TranslateString(_T("Total Amount"), szName);
	fee.szGroupID = _T("TotalAmount");
	fee.szName = szName;
	fee.nCost = nTotalCost;
	fee.nInsPaid = nTotalInsCost;
	fee.nDiscount = nTotalDiscount;
	fee.nDiffPaid = nTotalDiffPaid;
	fee.nPatPaid = nTotalPatPaid;
	feeList.Add(fee);


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
				
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
				

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);


				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);


				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

			}
			else if(szType == _T("GrandAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

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

				FormatCurrency(fee.nInsPrice, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				tmpStr = fee.szPayrate;
				rptDetail->SetValue(_T("7"), tmpStr);
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);

				rptDetail->SetValue(_T("10"), fee.szDisrate);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("13"), tmpStr);
				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("14"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemGroup")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				rptDetail->SetValue(_T("5"), _T(""));
				
			}

			else if(szType == _T("SubItem")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) obj->SetItalic(true);
				}

				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);

				FormatCurrency(fee.nInsPrice, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				rptDetail->SetValue(_T("7"), _T(""));
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);

				
				rptDetail->SetValue(_T("9"), _T(""));
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("13"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("14"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemAmount")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), _T(""));	//unitprice
				rptDetail->SetValue(_T("6"), _T(""));	//insprice
				
				rptDetail->SetValue(_T("7"), _T(""));	//payrate
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				
				rptDetail->SetValue(_T("10"), _T(""));	//disrate
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("13"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("14"), tmpStr);
				}
				
			}

			else if(szType == _T("Dousage")){
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));
				rptDetail->SetValue(_T("usage"), fee.szName);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				FormatCurrency(fee.nCost, tmpStr);

				rptDetail->SetValue(_T("TotalAmount"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
				//fee.nPatPaid= fee.nCost-fee.nDiscount;
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("TotalInsUnPaid"), tmpStr);
				}
		}
	}

	
	
	
	szSQL.Format(_T(" SELECT hfe_amount,") \
_T("   hfe_inspaid,") \
_T("   hfe_discount,") \
_T("   hfe_patpaid,") \
_T("   hfe_payment,") \
_T("   hfe_diffcost,") \
_T("   hfe_diffpaid,") \
_T("   hfe_deposit,") \
_T("   hfe_refund,") \
_T("   hfe_freeamount, hfe_extins_payment ") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfe_invoiceno=%ld"), nInvoiceNo);
	rs.ExecSQL(szSQL);
	
	if(!rs.IsEOF())
	{
		double nTotalDiffPaid;
		double nTotalPayment;
		double nTotalPatPaid;

		rs.GetValue(_T("hfe_amount"), nTotalCost);
		rs.GetValue(_T("hfe_inspaid"), nTotalInsCost);
		rs.GetValue(_T("hfe_discount"), nTotalDiscount);
		rs.GetValue(_T("hfe_patpaid"), nTotalPatPaid);
		rs.GetValue(_T("hfe_diffcost"), nTotalDiffPaid);
		rs.GetValue(_T("hfe_deposit"), nTotalDeposit);
		rs.GetValue(_T("hfe_refund"), nTotalRefund);
		rs.GetValue(_T("hfe_freeamount"), nTotalFree);
		rs.GetValue(_T("hfe_payment"), nTotalPayment);
		rs.GetValue(_T("hfe_extins_payment"), extins_payment);


		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency((nTotalCost), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.0f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		
		FormatCurrency(nTotalInsCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsCost"), tmpStr);


		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsDiscount"), tmpStr);

		FormatCurrency((nTotalInsCost-nTotalDiscount), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsUnPaid"), tmpStr);

		FormatCurrency((nTotalDiffPaid), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiffPaid"), tmpStr);


		FormatCurrency(nTotalPatPaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);


		FormatCurrency(nTotalPayment, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

		FormatCurrency(extins_payment, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumExtInsPaid"), tmpStr);


		FormatCurrency((nTotalDeposit), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDeposit"), tmpStr);
		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiscount"), tmpStr);
		if(nTotalRefund > 0)
		{
			FormatCurrency(nTotalRefund, tmpStr);
			//rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumRefund"), tmpStr);
		}
		else
		{
			FormatCurrency(nTotalPayment, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);
			//rpt.GetReportFooter()->SetValue(_T("SumPaided"), tmpStr);

		}
	}

	if(nInsRate > 0)
	{
		nUnRate = 100 - nInsRate;
		if(nUnRate ==0)
			nUnRate = nInsRate;

		tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
		rpt.GetReportFooter()->SetValue(_T("UnRate"), tmpStr);
	}

	szSQL.Format(_T("SELECT hd_doctor FROM hms_doc WHERE hd_docno =%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("createdby1"), GetDoctorName(tmpStr));

	if(bPreview)
		rpt.PrintPreview();
	else
	{
		rpt.Print();
	}
}
//

void CMainFrame::PrintGeneralInPackageCost(long nInvoiceNo, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CReport rpt;
	CString tmpStr, szSQL, szDeptID;
	CRecord rsg(&m_db);
	CRecord rs(&m_db);	
	CRecord rsl(&m_db);
	CRecord rs1(&m_db);
	
	CString szStatus;
	CString szObjectType;
	
	long	nDocumentNo;
	int		nDeskNo=0;
	int		nUnRate=0;
	int		nInsRate=0;
	bool	bFound = false;
	bool	bInList = false;
	bool	bOutList = false;
	bool	bKList = false;
	int		nSubIndex = 1;

	CString	szDescription;
	CString szIndex;
	double	nTotalCost=0,				//Tong chi phi
			nTotalInsCost =0,
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatPaid =0,			//Tong benh nhan tra
			nTotalDiffPaid = 0,			//Tong so tra chenh lech
			nTotalPayable=0,
			nTotalDeposit = 0,			//Tong tam ung
			nTotalPolicy=0,
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0,
			nRefinvoice=0;

	
		
   	if(m_nInpatient==0 && !CheckPermission(_T("01.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return ;
	}

	if(nInvoiceNo <= 0)
		return;


	
	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	TO_CHAR(hp_birthdate, 'YYYY') as yearofbirth,") \
				_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T(" 	hp_sex as sexid,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	sys_sel_getname('sys_ethnic', hp_ethnic) as ethnicdesc, ") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" get_selection_desc('hms_rank', hd_rank) as rankname, ") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T("	hd_createdby as createdby, ") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T("	hd_conclusion conclusion,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" 	hd_suggestion as suggestion,") \
				_T("    sys_sel_getname('hms_result', hd_result) as result, ")
				_T(" 	hd_admitdate as examdate,") \
				_T(" 	hd_enddate as enddate,") \
				_T("	hd_transplace as transplace, ") \
				_T(" 	hd_emergency as emergency,") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	hms_gethospitalname(hc_regcode) as regplace, ") \
				_T("	(select distinct ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hd_disrate as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hd_insregdate as insregdate, ") \
				_T("	hd_xobject as xobject, ") \
				_T("	hd_xcardno as xcardno, ") \
				_T("	hd_xissuedate as xissuedate, ") \
				_T("	hd_outpatient as outpatient, ") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_serialno as serialno,") \
				_T(" 	hfe_receiptno as recvno,") \
				_T(" 	trunc_date(hfe_date) as recvdate, ") \
				_T(" 	hfe_staff as receiver,") \
				_T(" 	hfe_desc as reason, ") \
				_T(" 	hfe_amount as cost,") \
				_T(" 	hfe_discount as discount,") \
				_T(" 	hfe_patpaid as patpaid, hfe_payment as payment, ") \
				_T(" 	hfe_deposit as deposit_amount, ") \
				_T(" 	hfe_diffcost as deposit_payable, ") \
				_T(" 	hfe_refund as refund_amount, ") \
				_T(" 	hfe_freeamount as free_amount, hd_recordno, hfe_extins_payment, ") \
				_T("	get_payment_method(hfe_payment_method) as payment_method  ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_doc ON(hfe_docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld "), m_nDocumentNo, nInvoiceNo);

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
		return;

	double extins_payment = 0;
	double nTotalPayment = 0;

	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatPaid);
	rs.GetValue(_T("payment"), nTotalPayment);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("deposit_payable"), nDepositPayable);
	rs.GetValue(_T("extins_payment"), extins_payment);

	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);

	rs.GetValue(_T("refinvoice"), nRefinvoice);		
	rs.GetValue(_T("objecttype"), szObjectType);


	
	/*if(szObjectType == _T("I") || szObjectType == _T("C"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSGENERALEXAMINATIONCOST.RPT")) )
		return;
	
	}
	else if(szObjectType == _T("D"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_FREEGENERALEXAMINATIONCOST.RPT")) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOST.RPT")) )
			return;
	}*/

	if(!rpt.Init(_T("Reports/HMS/HF_GENERALEXAMINATIONCOST_INPACKAGE.RPT")) )
			return;

	rpt.GetReportHeader()->SetValue(_T("payment_method"), rs.GetValue(_T("payment_method")));

	//Report Header
	tmpStr.Empty();
	StringUpper(m_CompanyInfo.sc_pname, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), tmpStr);
	StringUpper(m_CompanyInfo.sc_name, tmpStr);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), tmpStr);

	rs.GetValue(_T("docno"), nDocumentNo);
	tmpStr.Format(_T("%ld"), nDocumentNo);
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Barcode"), tmpStr);
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
	rs.GetValue(_T("Yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), tmpStr);

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);
	rs.GetValue(_T("sexid"), tmpStr);
	if(tmpStr == _T("M"))
		rpt.GetReportHeader()->SetValue(_T("male"), _T("X"));
	else
		rpt.GetReportHeader()->SetValue(_T("female"), _T("X"));

	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);
	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);


	rs.GetValue(_T("rankname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Rank"), tmpStr);

	CString szAddress;
	rs.GetValue(_T("detailaddress"), tmpStr);
	szAddress = tmpStr;
	rs.GetValue(_T("address"), tmpStr);
	if(!szAddress.IsEmpty())
		szAddress += _T(" - ");
	szAddress += tmpStr;
	rpt.GetReportHeader()->SetValue(_T("Address"), szAddress);
	
	rs.GetValue(_T("deptid"), tmpStr);

	CString szDepartmentName;
	StringUpper(GetDepartments(tmpStr), szDepartmentName);
	rpt.GetReportHeader()->SetValue(_T("Department"), szDepartmentName);
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rs.GetValue(_T("enddate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("EndDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	rs.GetValue(_T("transplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), tmpStr);

	rs.GetValue(_T("emergency"), tmpStr);
	if (tmpStr == _T("Y") )
		rpt.GetReportHeader()->SetValue(_T("emergency"), _T("X"));

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);	
	rs.GetValue(_T("disrate"), nInsRate);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), nInsRate);
	//-- In thong tin benh nhan dieu tri ngoai tru hd_Oupatient = Y;
	rs.GetValue(_T("Outpatient"),tmpStr);	
	if (tmpStr == _T("Y"))
	{
		szSQL.Format(_T(" Select * from hms_outpatient where hop_docno =%ld "),m_nDocumentNo);
		rs1.ExecSQL(szSQL);
		if (!rs1.IsEOF()){
			rs1.GetValue(_T("hop_fromdate"), tmpStr);			
			rpt.GetReportHeader()->SetValue(_T("FromDate"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
			rs1.GetValue(_T("hop_Todate"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("ToDate"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
			rs1.GetValue(_T("hop_treatdays"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("TreatmentDay"), tmpStr);
		}
	}

	rs.GetValue(_T("insline"), tmpStr);	
	if(tmpStr == _T("Y")){
		//TranslateString(_T("Outline"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T(""));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T("X"));
	}

	rs.GetValue(_T("insregdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InsRegDate"), CDate::Convert(tmpStr));

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
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id or hh_newprov_id=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);			
		}

	}
	// Lay thong tin ben vien chuyen di
	rs.GetValue(_T("tohosid"), tmpStr);	
	if(!tmpStr.IsEmpty()){		
		CRecord rsx(&m_db);		
		szSQL.Format(_T("select hh_name from hms_hospital where hh_id='%s' "), tmpStr);		
		rsx.ExecSQL(szSQL);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("hh_name"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("HospitalTransfer"), tmpStr);			
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
	
	rs.GetValue(_T("suggestion"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Suggestion"), GetSelectionString(_T("hms_suggestion"), tmpStr));



	CString szOutPatient, szRecordNo;
	rs.GetValue(_T("outpatient"), szOutPatient);
	rs.GetValue(_T("hd_recordno"), szRecordNo);
	if(szOutPatient == _T("Y") && !szRecordNo.IsEmpty())
	{
		CRecord rso(&pMF->m_db);
		CString szMsg, tmpStr, szRecordType;
		szSQL.Format(_T("SELECT hop_record_type FROM hms_outpatient WHERE hop_patientno=%ld and hop_recordno='%s' "), pMF->m_nPatientNo, szRecordNo);
		rso.ExecSQL(szSQL);
		rso.GetValue(_T("hop_record_type"), szRecordType);
		tmpStr = pMF->GetSelectionString(_T("OBA_RECORDTYPE"), szRecordType);
		szMsg.Format(_T("Bệnh án (%s) số: %s"), tmpStr, szRecordNo);
		rpt.GetReportHeader()->SetValue(_T("recordno"), szMsg);
	}


	CString szSQL2, szRoom, szDisease;
	rs.GetValue(_T("depts"), szDeptID);
	szSQL2.Format(_T(" select he_deptid as deptid,") \
				_T("        hrl_name as roomname,") \
				_T("        he_roomid as roomid,") \
				_T("        he_diagnostic as diagnostic,") \
				_T("        hi_name as disease,") \
				_T("        he_icd10 as icd10,") \
				_T("        he_hatd as hatd") \
				_T(" from hms_exam") \
				_T(" left join hms_roomlist on(hrl_deptid=he_deptid and hrl_id=he_roomid)") \
				_T(" left join hms_icd on(hi_icd=he_icd10) ") \
				_T(" where he_docno=%ld") \
				_T(" ORDER BY he_receptidx, he_updateddate"), m_nDocumentNo);

	CRecord rsd(&m_db);
	rsd.ExecSQL(szSQL2);

	szRoom.Empty();
	szDisease.Empty();
	CString tmpStr2, tmpStr3, szOld, szNew, szDept;
	int roomid;
	bool bIsHA = false;
	while(!rsd.IsEOF())
	{	
		szDept.Empty();
		tmpStr3.Empty();

		rsd.GetValue(_T("deptid"), szNew);
		rsd.GetValue(_T("roomid"), roomid);
		rsd.GetValue(_T("hatd"), tmpStr3);

		if (roomid == 39)
		{
			bIsHA = true;
		}

		if (tmpStr3 == _T("Y"))
		{
			if (!bIsHA)
				bIsHA = true;
		}

		if(szNew != szOld && !szNew.IsEmpty())
		{
			szDept.Format(_T("[%s]"), szNew);
			szOld = szNew;
		}

		if(!szRoom.IsEmpty() )
			szRoom += _T(" -> ");
		szRoom.AppendFormat(_T("%s%s"), szDept, rsd.GetValue(_T("roomname")));

		rsd.GetValue(_T("disease"), tmpStr2);
		tmpStr2.Trim();
		if(tmpStr2.IsEmpty()){
			rsd.GetValue(_T("diagnostic"), tmpStr2);
		}
		if(!szDisease.IsEmpty())
			szDisease += _T("\r\n->");
		szDisease.AppendFormat(_T("%s"), tmpStr2);
		rsd.MoveNext();
	}
	if(szDisease.IsEmpty()) 
		rs.GetValue(_T("diagnostic"), szDisease);
	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), szDisease);
	rpt.GetReportHeader()->SetValue(_T("Conclusion"), rs.GetValue(_T("conclusion")));
	rpt.GetReportHeader()->SetValue(_T("ICD10"), rs.GetValue(_T("icd10")));
	rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoom);
	
	//Benh nhan huyet ap tieu duong
	if(bIsHA)
	{
		TranslateString(_T("BN_HATD"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("BN_HATD_108"), tmpStr);
	}
	

	rs.GetValue(_T("reldisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
	

	rs.GetValue(_T("result"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);	
	
  
	
	rs.GetValue(_T("Doctor"), tmpStr);
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
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy1"), GetDoctorName(tmpStr));
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy2"), GetDoctorName(tmpStr));
	
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetHBITMAP(GetSignatureImage(tmpStr));
		img2->SetFixedHeight(false);
	}	

	// Nguoi tiep don
	tmpStr.Empty();
	rs.GetValue(_T("createdby"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("createdby"), GetDoctorName(tmpStr));
	CReportItem *img3 = rpt.GetReportFooter()->GetItem(_T("Signature3"));
	if(img3)
	{
		img3->SetHBITMAP(GetSignatureImage(tmpStr));
		img3->SetFixedHeight(false);
	}

	CString szRecvDate,szData;
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));

	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);
	/*rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate,yyyymmdd||hhmm,ddmmyyyy|hhmm));*/
	
	szData.Format(rpt.GetReportHeader()->GetValue(_T("ReceiptDate")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate"),szData);

	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"),szData);	

	CReportSection* rptDetail = rpt.GetDetail(0); 
	CReportSection *grp;
	
	CRecord grs(&m_db);
	CString szFeeID, szID;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	int nCount = 0, nIndex, nChapterID=0;
	int nItem=0, nOldItem=0, nItem2=0;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	long nOrderId=0;

	CString szNewGroup, szOldGroup, szParentGroup;
	double nGroup0Cost=0, nGroup0InsCost= 0, nGroup0Discount=0, nGroup0DiffPaid=0, nGroup0PatPaid=0;
	double nGroup1Cost=0, nGroup1InsCost = 0, nGroup1Discount=0, nGroup1DiffPaid = 0, nGroup1PatPaid=0;
	double nGroup2Cost=0, nGroup2InsCost = 0, nGroup2Discount=0, nGroup2DiffPaid = 0, nGroup2PatPaid=0;	
	double nCost=0, nInsCost =0,  nDiscount=0, nDiffPaid  = 0, nPatPaid=0;

	
	nTotalCost = nTotalDiffPaid = nTotalInsCost = nTotalPatPaid = nTotalDiscount =0;

	szSQL.Format(_T("SELECT * FROM hms_fee_type ORDER BY hft_id "));
	grs.ExecSQL(szSQL);

	CString szWhere;

	szWhere.Format(_T(" AND hfe_invoiceno=%ld"), nInvoiceNo);

	
	//szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X') "));
	
	//szWhere.AppendFormat(_T(" and hfe_subgroup='XX' "));

	szWhere.AppendFormat(_T(" and NVL(hfe_category,'N')='Y' "));

	szSQL.Format(_T(" SELECT hfe_typeindex AS typeindex,") \
_T("   hfe_status         AS status,") \
_T("   hfe_type           AS feetype,") \
_T("   hfe_groupid        AS groupid,") \
_T("   hfe_groupid3       AS groupid3,") \
_T("   hfe_itemid         AS itemid,") \
_T("   hfe_name           AS name,") \
_T("   hfe_unit           AS unit,") \
_T("   hfe_hitech         AS hitech,") \
_T("   hfe_inlist         AS inlist,") \
_T("   hfe_unitprice      AS unitprice,") \
_T("   hfe_insprice      AS insprice,") \
_T("   hfe_disrate as disrate, hfe_payrate as payrate,") \
_T("   SUM(hfe_qty)       AS qty,") \
_T("   SUM(hfe_cost)      AS cost,") \
_T("   SUM(hfe_inscost)   AS inscost,") \
_T("   SUM(hfe_discount)  AS discount,") \
_T("   SUM(hfe_diffcost)  AS DiffPaid_,") \
_T("     SUM(CASE") \
_T("       WHEN hfe_diffcost > 0") \
_T("       THEN hfe_diffcost") \
_T("       WHEN hfe_inscost <= 0") \
_T("       AND hfe_discount <=0") \
_T("       THEN hfe_patdebt+hfe_patpaid") \
_T("       ELSE 0") \
_T("     END)                      AS DiffPaid,") \
_T("   SUM(hfe_patdebt)   AS patdebt,") \
_T("   SUM(hfe_copayment) AS copayment,") \
_T("   SUM(hfe_patpaid)   AS patpaid") \
_T(" FROM hms_fee_view_dtl_v2") \
_T(" WHERE hfe_docno  =%ld %s ") \
_T(" GROUP BY hfe_typeindex,") \
_T("   hfe_status ,") \
_T("   hfe_type ,") \
_T("   hfe_groupid ,") \
_T("   hfe_groupid3 ,") \
_T("   hfe_itemid ,") \
_T("   hfe_name ,") \
_T("   hfe_unit ,") \
_T("   hfe_hitech ,") \
_T("   hfe_inlist,") \
_T("   hfe_unitprice, hfe_insprice, hfe_disrate, hfe_payrate ") \
_T(" ORDER BY hfe_typeindex, hfe_groupid3, hfe_name, hfe_unit, hfe_unitprice"), m_nDocumentNo, szWhere);

//_msg(_T("%s"), szSQL);
	
	nIndex = 1;
	CString szSubItem, szType;
	int nSubItem = 1;
	int nIDX;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CString szName;
	CString szNewIndex, szOldIndex;
	
	double nTtlCost=0, nTtlInsCost=0, nTtlDiscount=0, nTtlDiffPaid=0, nTtlPatPaid=0;
	rs.ExecSQL(szSQL);

	while(!grs.IsEOF()){
		tmpStr.Format(_T("%d"), nIndex);
		grs.GetValue(_T("hft_name"), szName);
		grs.GetValue(_T("hft_id"), szNewIndex);
		
		fee.szGroupID = _T("Type");
		fee.szID = tmpStr;
		fee.szName = szName;
		nItem = feeList.Add(fee);
		
		nIDX  = nItem;
		bFound = false;
		nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
		nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

		rs.MoveFirst();
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("typeindex"), tmpStr);
			
			if(tmpStr == szNewIndex){
				bFound = true;		
				rs.GetValue(_T("groupid"), szNewGroup);
				if(szNewGroup != szOldGroup)
				{
					szOldGroup = szNewGroup;
					if(szNewGroup.Left(2) == _T("B1")){
						szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						if(nGroup2Cost > 0){
							TranslateString(_T("Sub Amount"), tmpStr);
							fee.szGroupID = _T("SubAmount");
							fee.szName = tmpStr;
							fee.nCost = nGroup2Cost;
							fee.nInsPaid = nGroup2InsCost;
							fee.nDiscount = nGroup2Discount;
							fee.nDiffPaid = nGroup2DiffPaid;
							fee.nPatPaid = nGroup2PatPaid;
							
							int nItem2 = feeList.Add(fee);
						}

						szIndex.Format(_T("%d.%d"), nIndex, nSubIndex++);
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = rs2.GetValue(_T("hfg_name"));
						int nItem2 = feeList.Add(fee);
						nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

					}
					
				}

				if(szOldIndex != szNewIndex)
				{
					szOldIndex = szNewIndex;
					bInList = false;
					bOutList = false;
				}

				if(szNewIndex == _T("800")){
					

					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;

						int nItem2 = feeList.Add(fee);

					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(bInList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}

					if(tmpStr == _T("3") && !bKList){
						bKList = true;
						if(bInList && bOutList)
							szIndex.Format(_T("%d.3"), nIndex);	
						else if(bInList || bOutList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						TranslateString(_T("Inside cancer list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					

				}

				if(szNewIndex == _T("900")){
					
					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(!bInList)
							szIndex.Format(_T("%d.1"), nIndex);
						else
							szIndex.Format(_T("%d.2"), nIndex);

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
				}

				



				rs.GetValue(_T("cost"), nCost);
				rs.GetValue(_T("inscost"), nInsCost);
				rs.GetValue(_T("discount"), nDiscount);
				rs.GetValue(_T("DiffPaid"), nDiffPaid);
				rs.GetValue(_T("copayment"), nPatPaid);
				
				if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
				{
					
				}
				nTotalCost += nCost;
				nGroup1Cost += nCost;
				nGroup2Cost += nCost;

				nTotalInsCost += nInsCost;
				nGroup1InsCost += nInsCost;
				nGroup2InsCost += nInsCost;

				nTotalDiscount += nDiscount;
				nGroup1Discount += nDiscount;
				nGroup2Discount += nDiscount;

				nTotalDiffPaid += nDiffPaid;
				nGroup1DiffPaid += nDiffPaid;
				nGroup2DiffPaid += nDiffPaid;

				nTotalPatPaid += nPatPaid;
				nGroup1PatPaid += nPatPaid;
				nGroup2PatPaid += nPatPaid;

				fee.szID.Empty();
				fee.szGroupID = _T("Item");
				fee.szName = rs.GetValue(_T("name"));
				fee.szUnit = rs.GetValue(_T("unit"));
				fee.nCost = nCost;
				fee.nInsPaid = nInsCost;
				fee.nDiscount = nDiscount;
				fee.nQuantity = str2float(rs.GetValue(_T("qty")));
				fee.nPrice = str2double(rs.GetValue(_T("unitprice")));
				fee.nInsPrice = str2double(rs.GetValue(_T("insprice")));

				rs.GetValue(_T("disrate"), fee.szDisrate);
				rs.GetValue(_T("payrate"), fee.szPayrate);

				fee.nDiffPaid = nDiffPaid;
				fee.nPatPaid = nPatPaid;
				fee.nCopayment = 0;
				if(fee.nDiscount == 0)
				{
					fee.szDisrate.Empty();
					fee.szPayrate.Empty();
				}
				else if(fee.nDiscount > 0)
				{
					fee.nCopayment = fee.nInsPaid-fee.nDiscount;
				}

				feeList.Add(fee);

									//In huong dan su dung don thuoc.
				if( m_nInpatient == 0 && (m_szObjectType == _T("I") || m_szObjectType == _T("C")) && szNewGroup.Left(2) == _T("A1")){
						long nProductItemID;
						long nOrderID;
						rs.GetValue(_T("itemid"), nProductItemID);
						rs.GetValue(_T("orderid"), nOrderID);

						szSQL.Format(_T("SELECT distinct hpou_dousage as usage ") \
							_T("FROM hms_pharmaorder_usage ") \
							_T("WHERE hpou_docno=%ld and hpou_product_id=%ld "),
							nDocumentNo, nProductItemID);

						rsl.ExecSQL(szSQL);
								double nTotalAmt =0;
								if(!rsl.IsEOF()){
									rsl.GetValue(_T("usage"), tmpStr);
									if(!tmpStr.IsEmpty()){
										fee.szGroupID = _T("Dousage");
										fee.szID.Empty();
										fee.szName.Format(_T("   +   %s"), tmpStr);
										fee.szUnit.Empty();
										fee.nQuantity = 0;
										fee.nPrice = 0;
										fee.nCost = 0;
										//nTotalAmt += fee.nCost;
										fee.nPatPaid = 0;
										fee.nDiscount = 0;

										feeList.Add(fee);
									}
								}


					}



				}
			

			
			rs.MoveNext();
		}
		if(!bFound)
		{
			feeList.RemoveAt(nIDX);
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;
		}
		else
		{
			if(nGroup1Cost > 0){
				if(nGroup2Cost > 0 && nGroup1Cost != nGroup2Cost){
					TranslateString(_T("Sub Amount"), tmpStr);
					fee.szGroupID = _T("SubAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup2Cost;
					fee.nInsPaid = nGroup2InsCost;
					fee.nDiscount = nGroup2Discount;
					fee.nDiffPaid = nGroup2DiffPaid;
					fee.nPatPaid = nGroup2PatPaid;
					feeList.Add(fee);
				}

					TranslateString(_T("Total"), tmpStr);
					tmpStr.AppendFormat(_T(" (%d)"), nIndex);
					fee.szGroupID = _T("GrandAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup1Cost;
					fee.nInsPaid = nGroup1InsCost;
					fee.nDiscount = nGroup1Discount;
					fee.nDiffPaid = nGroup1DiffPaid;
					fee.nPatPaid = nGroup1PatPaid;
					
					feeList.Add(fee);
			}
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

			nIndex++;
		}



		grs.MoveNext();
	}

	nTotalPayable = ceil(nTotalCost-nTotalDiscount);
	TranslateString(_T("Total Amount"), szName);
	fee.szGroupID = _T("TotalAmount");
	fee.szName = szName;
	fee.nCost = nTotalCost;
	fee.nInsPaid = nTotalInsCost;
	fee.nDiscount = nTotalDiscount;
	fee.nDiffPaid = nTotalDiffPaid;
	fee.nPatPaid = nTotalPatPaid;
	feeList.Add(fee);


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
				
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
				

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);


				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);


				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

			}
			else if(szType == _T("GrandAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

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

				FormatCurrency(fee.nInsPrice, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				tmpStr = fee.szPayrate;
				rptDetail->SetValue(_T("7"), tmpStr);
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);

				rptDetail->SetValue(_T("10"), fee.szDisrate);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("13"), tmpStr);
				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("14"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemGroup")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				rptDetail->SetValue(_T("5"), _T(""));
				
			}

			else if(szType == _T("SubItem")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) obj->SetItalic(true);
				}

				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);

				FormatCurrency(fee.nInsPrice, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				rptDetail->SetValue(_T("7"), _T(""));
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);

				
				rptDetail->SetValue(_T("9"), _T(""));
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("13"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("14"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemAmount")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), _T(""));	//unitprice
				rptDetail->SetValue(_T("6"), _T(""));	//insprice
				
				rptDetail->SetValue(_T("7"), _T(""));	//payrate
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				
				rptDetail->SetValue(_T("10"), _T(""));	//disrate
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("11"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("12"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("13"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("14"), tmpStr);
				}
				
			}

			else if(szType == _T("Dousage")){
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));
				rptDetail->SetValue(_T("usage"), fee.szName);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				FormatCurrency(fee.nCost, tmpStr);

				rptDetail->SetValue(_T("TotalAmount"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
				//fee.nPatPaid= fee.nCost-fee.nDiscount;
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nInsPaid-fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("TotalInsUnPaid"), tmpStr);
				}
		}
	}

	
	
	
	szSQL.Format(_T(" SELECT hfe_amount,") \
_T("   hfe_inspaid,") \
_T("   hfe_discount,") \
_T("   hfe_patpaid,") \
_T("   hfe_payment,") \
_T("   hfe_diffcost,") \
_T("   hfe_diffpaid,") \
_T("   hfe_deposit,") \
_T("   hfe_refund,") \
_T("   hfe_freeamount, hfe_extins_payment ") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfe_invoiceno=%ld"), nInvoiceNo);
	rs.ExecSQL(szSQL);
	
	if(!rs.IsEOF())
	{
		double nTotalDiffPaid;
		double nTotalPayment;
		double nTotalPatPaid;

		rs.GetValue(_T("hfe_amount"), nTotalCost);
		rs.GetValue(_T("hfe_inspaid"), nTotalInsCost);
		rs.GetValue(_T("hfe_discount"), nTotalDiscount);
		rs.GetValue(_T("hfe_patpaid"), nTotalPatPaid);
		rs.GetValue(_T("hfe_diffcost"), nTotalDiffPaid);
		rs.GetValue(_T("hfe_deposit"), nTotalDeposit);
		rs.GetValue(_T("hfe_refund"), nTotalRefund);
		rs.GetValue(_T("hfe_freeamount"), nTotalFree);
		rs.GetValue(_T("hfe_payment"), nTotalPayment);
		rs.GetValue(_T("hfe_extins_payment"), extins_payment);


		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency((nTotalCost), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.0f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		
		FormatCurrency(nTotalInsCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsCost"), tmpStr);


		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsDiscount"), tmpStr);

		FormatCurrency((nTotalInsCost-nTotalDiscount), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsUnPaid"), tmpStr);

		FormatCurrency((nTotalDiffPaid), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiffPaid"), tmpStr);


		FormatCurrency(nTotalPatPaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);


		FormatCurrency(nTotalPayment, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

		FormatCurrency(extins_payment, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumExtInsPaid"), tmpStr);


		FormatCurrency((nTotalDeposit), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDeposit"), tmpStr);
		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiscount"), tmpStr);
		if(nTotalRefund > 0)
		{
			FormatCurrency(nTotalRefund, tmpStr);
			//rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumRefund"), tmpStr);
		}
		else
		{
			FormatCurrency(nTotalPayment, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);
			//rpt.GetReportFooter()->SetValue(_T("SumPaided"), tmpStr);

		}
	}

	if(nInsRate > 0)
	{
		nUnRate = 100 - nInsRate;
		if(nUnRate ==0)
			nUnRate = nInsRate;

		tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
		rpt.GetReportFooter()->SetValue(_T("UnRate"), tmpStr);
	}

	szSQL.Format(_T("SELECT hd_doctor FROM hms_doc WHERE hd_docno =%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("createdby1"), GetDoctorName(tmpStr));

	if(bPreview)
		rpt.PrintPreview();
	else
	{
		rpt.Print();
	}
}

//




void CMainFrame::PrintGeneralExaminationCost2(long nInvoiceNo, bool bPreview)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CString tmpStr, szSQL, szDeptID;
	CRecord rs(&m_db);	
	CRecord rsl(&m_db);
	CRecord rs1(&m_db);
	CString szStatus;
	CString szObjectType;
	
	long	nDocumentNo;
	int		nDeskNo=0;
	int		nUnRate=0;
	int		nInsRate=0;

	CString	szDescription;
	
	double	nTotalCost=0,				//Tong chi phi
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatPaid =0,			//Tong benh nhan tra
			nTotalDiffCost = 0,			//Tong so tra chenh lech
			nTotalDeposit = 0,			//Tong tam ung
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0,
			nRefinvoice=0;
	//So tien tra tu tam ung
	double nTotalAmount=0, nTotalInsPaid =0, nTotalDiffPaid=0;


		
   	if(m_nInpatient==0 && !CheckPermission(_T("01.02")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return ;
	}

	
	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	TO_CHAR(hp_birthdate, 'YYYY') as yearofbirth,") \
				_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	sys_sel_getname('sys_ethnic', hp_ethnic) as ethnicdesc, ") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T("	hd_createdby as createdby, ") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" 	hd_suggestion as suggestion,") \
				_T("    sys_sel_getname('hms_result', hd_result) as result, ")
				_T(" 	hd_admitdate as examdate,") \
				_T(" 	hd_enddate as enddate,") \
				_T("	hd_transplace as transplace, ") \
				_T(" 	hd_emergency as emergency,") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	hms_gethospitalname(hc_regcode) as regplace, ") \
				_T("	(select distinct ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	hd_disrate as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hd_insregdate as insregdate, ") \
				_T("	hd_xobject as xobject, ") \
				_T("	hd_xcardno as xcardno, ") \
				_T("	hd_xissuedate as xissuedate, ") \
				_T("	hd_outpatient as outpatient, ") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_serialno as serialno,") \
				_T(" 	hfe_receiptno as recvno,") \
				_T(" 	trunc_date(hfe_date) as recvdate, ") \
				_T(" 	hfe_staff as receiver,") \
				_T(" 	hfe_desc as reason, ") \
				_T(" 	hfe_amount as cost,") \
				_T(" 	hfe_discount as discount,") \
				_T(" 	hfe_patpaid as patpaid, ") \
				_T(" 	hfe_deposit as deposit_amount, ") \
				_T(" 	hfe_diffcost as deposit_payable, ") \
				_T(" 	hfe_refund as refund_amount, ") \
				_T(" 	hfe_freeamount as free_amount ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_doc ON(hfe_docno=hd_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld "), m_nDocumentNo, nInvoiceNo);

//	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
		return;

	rs.GetValue(_T("cost"), nTotalCost);

	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatPaid);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("deposit_payable"), nDepositPayable);
	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);

	rs.GetValue(_T("refinvoice"), nRefinvoice);		
	rs.GetValue(_T("objecttype"), szObjectType);

		
	
	if(szObjectType == _T("I") || szObjectType == _T("C"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSGENERALEXAMINATIONCOST.RPT")) )
		return;
	
	}
	else if(szObjectType == _T("D"))
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
	rpt.GetReportHeader()->SetValue(_T("Barcode"), tmpStr);
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
	rs.GetValue(_T("Yearofbirth"), tmpStr);
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
	
	rs.GetValue(_T("deptid"), tmpStr);

	CString szDepartmentName;
	StringUpper(GetDepartments(tmpStr), szDepartmentName);
	rpt.GetReportHeader()->SetValue(_T("Department"), szDepartmentName);
	
	rs.GetValue(_T("examdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rs.GetValue(_T("enddate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("EndDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	rs.GetValue(_T("transplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), tmpStr);

	rs.GetValue(_T("emergency"), tmpStr);
	if (tmpStr == _T("Y") )
		rpt.GetReportHeader()->SetValue(_T("emergency"), _T("X"));

	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);	
	rs.GetValue(_T("disrate"), nInsRate);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), nInsRate);
	//-- In thong tin benh nhan dieu tri ngoai tru hd_Oupatient = Y;
	rs.GetValue(_T("Outpatient"),tmpStr);	
	if (tmpStr == _T("Y"))
	{
		szSQL.Format(_T(" Select * from hms_outpatient where hop_docno =%ld "),m_nDocumentNo);
		rs1.ExecSQL(szSQL);
		if (!rs1.IsEOF()){
			rs1.GetValue(_T("hop_fromdate"), tmpStr);			
			rpt.GetReportHeader()->SetValue(_T("FromDate"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
			rs1.GetValue(_T("hop_Todate"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("ToDate"), CDate::Convert(tmpStr,yyyymmdd,ddmmyyyy));
			rs1.GetValue(_T("hop_treatdays"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("TreatmentDay"), tmpStr);
		}
	}

	rs.GetValue(_T("insline"), tmpStr);	
	if(tmpStr == _T("Y")){
		//TranslateString(_T("Outline"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T(""));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T("X"));
	}

	rs.GetValue(_T("insregdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InsRegDate"), CDate::Convert(tmpStr));

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
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id or hh_newprov_id=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);			
		}

	}
	// Lay thong tin ben vien chuyen di
	rs.GetValue(_T("tohosid"), tmpStr);	
	if(!tmpStr.IsEmpty()){		
		CRecord rsx(&m_db);		
		szSQL.Format(_T("select hh_name from hms_hospital where hh_id='%s' "), tmpStr);		
		rsx.ExecSQL(szSQL);
		if(!rsx.IsEOF()){
			rsx.GetValue(_T("hh_name"), tmpStr);
			rpt.GetReportHeader()->SetValue(_T("HospitalTransfer"), tmpStr);			
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
	
	rs.GetValue(_T("suggestion"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Suggestion"), GetSelectionString(_T("hms_suggestion"), tmpStr));


	CString szSQL2, szRoom, szDisease;
	rs.GetValue(_T("depts"), szDeptID);

	szSQL2.Format(_T(" select he_deptid as deptid,") \
				_T("        hrl_name as roomname,") \
				_T("        he_roomid as roomid,") \
				_T("        he_diagnostic as diagnostic,") \
				_T("        hi_name as disease,") \
				_T("        he_icd10 as icd10,") \
				_T("        he_hatd as hatd") \
				_T(" from hms_exam") \
				_T(" left join hms_roomlist on(hrl_deptid=he_deptid and hrl_id=he_roomid)") \
				_T(" left join hms_icd on(hi_icd=he_icd10) ") \
				_T(" where he_docno=%ld") \
				_T(" ORDER BY he_receptidx, he_updateddate"), m_nDocumentNo);

	CRecord rsd(&m_db);
	rsd.ExecSQL(szSQL2);

	szRoom.Empty();
	szDisease.Empty();
	CString tmpStr2, tmpStr3, szOld, szNew, szDept;
	int roomid;
	bool bIsHA = false;
	while (!rsd.IsEOF())
	{
		szDept.Empty();
		tmpStr3.Empty();

		rsd.GetValue(_T("deptid"), szNew);
		rsd.GetValue(_T("roomid"), roomid);
		rsd.GetValue(_T("hatd"), tmpStr3);

		if (roomid == 39)
		{
			bIsHA = true;
		}

		if (tmpStr3 == _T("Y"))
		{
			if (!bIsHA)
				bIsHA = true;
		}

		if(szNew != szOld && !szNew.IsEmpty())
		{
			szDept.Format(_T("[%s]"), szNew);
			szOld = szNew;
		}

		if(!szRoom.IsEmpty() )
			szRoom += _T(" -> ");
		szRoom.AppendFormat(_T("%s%s"), szDept, rsd.GetValue(_T("roomname")));

		rsd.GetValue(_T("disease"), tmpStr2);
		tmpStr2.Trim();
		if(tmpStr2.IsEmpty()){
			rsd.GetValue(_T("diagnostic"), tmpStr2);
		}
		if(!szDisease.IsEmpty())
			szDisease += _T("\r\n->");
		szDisease.AppendFormat(_T("%s"), tmpStr2);
		rsd.MoveNext();
	}
	if(szDisease.IsEmpty()) 
		rs.GetValue(_T("diagnostic"), szDisease);

	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), szDisease);
	rpt.GetReportHeader()->SetValue(_T("ICD10"), rs.GetValue(_T("icd10")));
	rpt.GetReportHeader()->SetValue(_T("RoomName"), szRoom);
	//Benh nhan huyet ap tieu duong
	if(bIsHA)
	{
		TranslateString(_T("BN_HATD"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("BN_HATD_108"), tmpStr);
	}
		
	//}
	//else
	//{
	//	rs.GetValue(_T("diagnostic"), tmpStr);
	//	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), tmpStr);
	//	rs.GetValue(_T("icd10"), tmpStr);
	//	rpt.GetReportHeader()->SetValue(_T("ICD10"), tmpStr);

	//}

	rs.GetValue(_T("reldisease"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RelationDisease"), tmpStr);
	

	rs.GetValue(_T("result"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Result"), tmpStr);	
	
  
	
	rs.GetValue(_T("Doctor"), tmpStr);
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
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy1"), GetDoctorName(tmpStr));
	rpt.GetReportFooter()->SetValue(_T("ReceiverBy2"), GetDoctorName(tmpStr));
	
	CReportItem *img2 = rpt.GetReportFooter()->GetItem(_T("Signature2"));
	if(img2)
	{
		img2->SetHBITMAP(GetSignatureImage(tmpStr));
		img2->SetFixedHeight(false);
	}	

	// Nguoi tiep don
	tmpStr.Empty();
	rs.GetValue(_T("createdby"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("createdby"), GetDoctorName(tmpStr));
	CReportItem *img3 = rpt.GetReportFooter()->GetItem(_T("Signature3"));
	if(img3)
	{
		img3->SetHBITMAP(GetSignatureImage(tmpStr));
		img3->SetFixedHeight(false);
	}

	CString szRecvDate,szData;
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));

	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);
	/*rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate,yyyymmdd||hhmm,ddmmyyyy|hhmm));*/
	
	szData.Format(rpt.GetReportHeader()->GetValue(_T("ReceiptDate")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportHeader()->SetValue(_T("ReceiptDate"),szData);

	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"),szData);	

	CReportSection* rptDetail = rpt.GetDetail(0); 
	CReportSection *grp;
	CRecord grs(&m_db);
	CString szFeeID, szID;
	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
	int nChapter=0;

	int nCount = 0, nIndex, nChapterID=0;
	int nItem=0, nOldItem=0, nItem2=0;
	int nLevel;
	bool bDeleteParent=false;
	bool bLoadItems = false;
	long nOrderId=0;
	CString szNewGroup, szOldGroup, szParentGroup;
	double nGroup0Cost=0, nGroup0InsPaid= 0, nGroup0Discount=0, nGroup0DiffCost=0, nGroup0PatPaid=0;
	double nGroup1Cost=0, nGroup1InsPaid = 0, nGroup1Discount=0, nGroup1DiffCost = 0, nGroup1PatPaid=0;
	double nGroup2Cost=0, nGroup2InsPaid = 0, nGroup2Discount=0, nGroup2DiffCost = 0, nGroup2PatPaid=0;	
	double nCost=0, nInsPaid =0,  nDiscount=0, nDiffpaid  = 0, nPatPaid=0;

	
	nTotalAmount = nTotalDiffCost = nTotalInsPaid = nTotalPatPaid = nTotalDiscount =0;

	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as levels, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
	grs.ExecSQL(szSQL);

	CString szWhere;
	

	if(szObjectType == _T("I") || szObjectType == _T("C") )
	{	
		//szWhere.Format(_T(" and (hfe_discount > 0 )"));
	
	szSQL.Format(_T(" SELECT") \
		_T("		hfg_index as indexs, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_orderid as orderid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_insprice as unitprice,") \
		_T(" 		hfe_polprice as polprice,") \
		_T(" 		sum(hfe_cost-hfe_diffcost) as cost,") \
		_T(" 		sum(hfe_inspaid) as inscost,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_diffcost) as diffcost,") \
		_T(" 		sum(hfe_cost-hfe_discount-hfe_diffcost) as patpaid,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_cost-hfe_discount-hfe_diffcost) as copayment") \
		_T(" FROM hms_fee") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld and (hfe_insinvoice=%ld or hfe_invoiceno=%ld ) %s ") \
		_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_orderid, hfe_itemid, hfe_desc, hfe_unit,  hfe_insprice, hfe_polprice ") \
		_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
		_T(" ORDER BY hfe_type, hfg_index,  name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, nInvoiceNo, szWhere);
	}
	else
	{

		szSQL.Format(_T(" SELECT") \
		_T("		hfg_index as indexs, ") \
		_T("		hfe_type as feetype, ") \
		_T(" 		rtrim(hfe_group,'0') as groupid,") \
		_T(" 		hfe_orderid as orderid,") \
		_T(" 		hfe_itemid as itemid,") \
		_T(" 		hfe_desc as name,") \
		_T(" 		hfe_unit as unit,") \
		_T(" 		sum(hfe_quantity) as qty,") \
		_T(" 		hfe_unitprice as unitprice,") \
		_T(" 		hfe_polprice as polprice,") \
		_T(" 		sum(hfe_cost) as cost,") \
		_T(" 		sum(hfe_discount) as discount,") \
		_T(" 		sum(hfe_diffcost) as diffcost,") \
		_T(" 		sum(hfe_cost-hfe_discount) as patpaid,") \
		_T(" 		sum(hfe_patdebt) as patdebt,") \
		_T(" 		sum(hfe_cost-hfe_discount-hfe_diffcost) as copayment") \
		_T(" FROM hms_fee") \
		_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
		_T(" WHERE hfe_docno=%ld and (hfe_insinvoice=%ld or hfe_invoiceno=%ld ) %s ") \
		_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_orderid, hfe_itemid, hfe_desc, hfe_unit,  hfe_insprice, hfe_polprice ") \
		_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
		_T(" ORDER BY hfe_type, hfg_index,  name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, nInvoiceNo, szWhere);

	}
//_fmsg(_T("%s"), szSQL);		
	rs.ExecSQL(szSQL);
	nIndex = 0;
	CString szSubItem, szType;
	int nSubItem = 1;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	while(!grs.IsEOF()){
		
		grs.GetValue(_T("levels"), nLevel);
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
			if(nGroup0Cost > 0 && nChapterID > 0){
				CString szLabel, tmpStr;
				fee.szGroupID = _T("SumAmount");
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T("%s (%s)"), szLabel, lpszChapter[nChapterID-1]);
				fee.szName = tmpStr;
				fee.nCost = nGroup0Cost;
				fee.nDiscount = nGroup0Discount;
				fee.nPatPaid = nGroup0PatPaid;
				fee.nInsPaid = nGroup0InsPaid;
				fee.nDiffPaid = nGroup0DiffCost;
				nItem = feeList.Add(fee);

			}
			tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
			fee.szGroupID = _T("Type");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			nIndex = 0;
			nGroup0Cost = nGroup0InsPaid = nGroup0Discount = nGroup0DiffCost = nGroup0PatPaid = 0;
			nGroup1Cost = nGroup1InsPaid = nGroup1Discount = nGroup1DiffCost = nGroup1PatPaid = 0;
		}
		else
		{
			nIndex++;
			tmpStr.Format(_T("%d."), nIndex);
			fee.szGroupID = _T("Group");
			fee.szID = tmpStr;
			fee.szName = grs.GetValue(_T("name"));
			nItem = feeList.Add(fee);
			nGroup1Cost = nGroup1InsPaid = nGroup1Discount = nGroup1DiffCost = nGroup1PatPaid = 0;
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
								fee.nPatPaid = nGroup2PatPaid;
								fee.nInsPaid = nGroup2InsPaid;
								fee.nDiffPaid = nGroup2DiffCost;
								feeList.SetAt(nOldItem, fee);
							}
							szSQL.Format(_T("SELECT hfg_name as name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
							CRecord rs2(&m_db);
							rs2.ExecSQL(szSQL);
							fee.szGroupID = _T("SubGroup");
							fee.szID = _T("*");
							fee.szName = rs2.GetValue(_T("name"));
							nItem2 = feeList.Add(fee);
							nOldItem = nItem2;
							nGroup2Cost = nGroup2InsPaid = nGroup2Discount = nGroup2DiffCost = nGroup2PatPaid = 0;
					}

					nSubItem++;
					nCost = nInsPaid = nDiscount = nDiffpaid = nPatPaid = 0;
					
					rs.GetValue(_T("cost"), nCost);
					rs.GetValue(_T("discount"), nDiscount);
					rs.GetValue(_T("inspaid"), nInsPaid);
					rs.GetValue(_T("diffcost"), nDiffpaid);
					rs.GetValue(_T("copayment"), nPatPaid);
					
					fee.szGroupID = _T("Item");
					fee.szID.Empty();
					fee.szName = rs.GetValue(_T("name"));
					fee.szUnit = rs.GetValue(_T("unit"));					
					fee.nQuantity = str2float(rs.GetValue(_T("qty")));
					fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
/*
					if(szObjectType == _T("S"))
						fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
					else if(szObjectType == _T("D") || szObjectType == _T("P"))
					{
						fee.nPrice = ToDouble(rs.GetValue(_T("polprice")));
						nDiffpaid=0;
					}
					else
					{
						fee.nPrice = ToDouble(rs.GetValue(_T("insprice")));
						nDiffpaid=0;
						nCost = nInsPaid;
						nPatPaid = nInsPaid-nDiscount;
					}
*/
					fee.nCost = nCost;
					fee.nDiscount = nDiscount;
					fee.nPatPaid = nPatPaid;
					fee.nInsPaid = nInsPaid;
					fee.nDiffPaid = nDiffpaid;
					
					
					nTotalAmount += nCost;
					nTotalInsPaid += nInsPaid;
					nTotalDiffCost += nDiffpaid;
					nTotalDiscount += nDiscount;
					nTotalPatPaid += nPatPaid;

					
					
					nGroup0Cost += nCost;
					nGroup1Cost += nCost;
					nGroup2Cost += nCost;

					nGroup0Discount += nDiscount;
					nGroup1Discount += nDiscount;
					nGroup2Discount += nDiscount;
					
					nGroup0PatPaid += nPatPaid;
					nGroup1PatPaid += nPatPaid;
					nGroup2PatPaid += nPatPaid;

					nGroup0InsPaid += nInsPaid;
					nGroup1InsPaid += nInsPaid;
					nGroup2InsPaid += nInsPaid;

					nGroup0DiffCost += nDiffpaid;
					nGroup1DiffCost += nDiffpaid;
					nGroup2DiffCost += nDiffpaid;

					feeList.Add(fee);

					//In huong dan su dung don thuoc.
					if(szNewGroup.Left(2) == _T("A1")){
						long nProductItemID;
						long nOrderID;
						rs.GetValue(_T("itemid"), nProductItemID);
						rs.GetValue(_T("orderid"), nOrderID);

						szSQL.Format(_T("SELECT distinct hpou_dousage as usage, mpi_product_id ") \
							_T("FROM hms_pharmaorder_usage ") \
							_T("LEFT JOIN m_product_item ON(mpi_product_id=hpou_product_id) ") \
							_T("WHERE hpou_orderid=%ld and mpi_product_item_id=%ld "),
							nOrderID, nProductItemID);
/*
						szSQL.Format(_T(" SELECT ") \
								_T("	hpou_dousage as usage, ") \
								_T("	sum(hpol_qtyissue) as qty ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline_view pl ON(hpo_orderid=hpol_orderid)") \
								_T(" LEFT JOIN hms_pharmaorder_usage ON(hpou_orderid=hpo_orderid and hpou_product_id=hpol_product_id) ") \
								_T(" LEFT JOIN hms_fee f ON(hfe_docno=hpo_docno and hfe_orderid=hpol_orderid and hfe_orderline=hpol_orderlineid) ") \
								_T(" WHERE 	hpo_docno=%ld and f.hfe_invoiceno=%ld and hpol_productcode='%s' ") \
								_T(" GROUP BY hpou_dousage") , m_nDocumentNo, nInvoiceNo, szItemID);
						/*_msg(_T("%s"), szSQL);
						_debug(_T("%s"), szSQL);*/

								//_msg(_T("%s"), szSQL);
								rsl.ExecSQL(szSQL);
								double nTotalAmt =0;
								if(!rsl.IsEOF()){
									rsl.GetValue(_T("usage"), tmpStr);
									if(!tmpStr.IsEmpty()){
										fee.szGroupID = _T("Dousage");
										fee.szID.Empty();
										fee.szName.Format(_T("   +   %s"), tmpStr);
										fee.szUnit.Empty();
										fee.nQuantity = 0;
										fee.nPrice = 0;
										fee.nCost = 0;
										//nTotalAmt += fee.nCost;
										fee.nPatPaid = 0;
										fee.nDiscount = 0;

										feeList.Add(fee);
									}
								}


					}

			/*		if(m_szPrintOperationMaterial==_T("Y") && 						
							(szNewGroup.Left(2) == _T("B2") || szNewGroup.Left(2) == _T("B3") || szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")))
						{
							CString szItemID;
							rs.GetValue(_T("itemid"), szItemID);

								szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_unitprice as price, ") \
								_T(" 	sum(hpol_qtyissue) as qty, ") \
								_T(" 	sum(hpol_qtyissue*hpol_unitprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorder_line ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' ) and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo, szItemID);
								l
								rsl.ExecSQL(szSQL);
								double nTotalAmt =0;
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("name"), tmpStr);
									fee.szGroupID = _T("Item");
									fee.szID.Empty();
									fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
									fee.szUnit = rsl.GetValue(_T("unit"));
									fee.nQuantity = str2float(rsl.GetValue(_T("qty")));
									fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
									fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
									nTotalAmt += fee.nCost;
									fee.nPatPaid = 0;
									fee.nDiscount = ToDouble(rsl.GetValue(_T("amount")));

					feeList.Add(fee);
									rsl.MoveNext();
								}
								if(nTotalAmt > 0){
									fee.szGroupID = _T("SubGroup");
									fee.szID.Empty();
									TranslateString(_T("Total(Drugs and material package)"), tmpStr);
									fee.szName.Format(_T("   +   %s"), tmpStr);
									fee.szUnit.Empty();
									fee.nQuantity = 0;
									fee.nPrice = 0;
									fee.nCost = nTotalAmt;
									fee.nPatPaid = 0;
									fee.nDiscount = nTotalAmt;
									feeList.Add(fee);
								}
					}

*/
						
				}
				else
					break;
				rs.MoveNext();
			}
			if(nGroup1Cost > 0)
			{
				if(nGroup2Cost > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
					fee = feeList.GetAt(nOldItem);
					fee.nCost = nGroup2Cost;
					fee.nDiscount = nGroup2Discount;
					fee.nPatPaid = nGroup2PatPaid;
					fee.nInsPaid = nGroup2InsPaid;
					fee.nDiffPaid = nGroup2DiffCost;
					feeList.SetAt(nOldItem, fee);
					nItem2 =0;
				}
				nGroup2Cost = nGroup2InsPaid = nGroup2Discount = nGroup2DiffCost = nGroup2PatPaid = 0;

				nItem2 = 0;
				if(nIndex >= 1)
				{
					fee = feeList.GetAt(nItem);
					fee.szGroupID = _T("SubAmount");
					TranslateString(_T("Sub Amount"), fee.szName);
					
					fee.nCost = nGroup1Cost;
					fee.nInsPaid = nGroup1InsPaid;
					fee.nDiscount = nGroup1Discount;
					fee.nDiffPaid = nGroup1DiffCost;
					fee.nPatPaid = nGroup1PatPaid;
					nItem = feeList.Add(fee);
				}
				nGroup1Cost = nGroup1InsPaid = nGroup1Discount = nGroup1DiffCost = nGroup1PatPaid = 0;
			}
		}
		grs.MoveNext();
	
	}


	if(nGroup0Cost > 0 && nChapterID > 0){
				CString szLabel, tmpStr;
				fee.szGroupID = _T("SumAmount");
				TranslateString(_T("Sum"), szLabel);
				tmpStr.Format(_T("%s (%s)"), szLabel, lpszChapter[nChapterID-1]);
				fee.szName = tmpStr;
				fee.nCost = nGroup0Cost;
				fee.nInsPaid = nGroup0InsPaid;
				fee.nDiscount = nGroup0Discount;
				fee.nDiffPaid = nGroup0DiffCost;
				fee.nPatPaid = nGroup0PatPaid;
				nItem = feeList.Add(fee);

	}


	szSQL.Format(_T("select sum(hfe_cost) as cost, sum(hfe_inspaid) as inspaid, ") \
		_T("sum(hfe_discount) as discount, sum(hfe_inspaid-hfe_discount) as patpaid, ") \
		_T("sum(hfe_diffcost) as diffcost ") \
		_T("FROM hms_fee  WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	
	rs.ExecSQL(szSQL);

	if(szObjectType == _T("I") || szObjectType == _T("C") )
		rs.GetValue(_T("inspaid"), nTotalAmount);
	else
		rs.GetValue(_T("cost"), nTotalAmount);


	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatPaid);
	rs.GetValue(_T("inspaid"), nTotalInsPaid);
	rs.GetValue(_T("diffcost"), nTotalDiffCost);

	if(nTotalAmount > 0){
			TranslateString(_T("Total Amount"), tmpStr);
			fee.szGroupID = _T("TotalAmount");
			fee.szName = tmpStr;
			fee.nCost = nTotalAmount;
			fee.nDiscount = nTotalDiscount;
			fee.nPatPaid = nTotalPatPaid;
			fee.nInsPaid = nTotalInsPaid;
			fee.nDiffPaid = nTotalDiffCost;
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
				
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsPaid"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
				

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);


				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
				rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsPaid"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);


				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

			}
			else if(szType == _T("SumAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsPaid"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

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

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}

			else if(szType == _T("Dousage")){
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));
				rptDetail->SetValue(_T("usage"), fee.szName);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalInsPaid"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
				//fee.nPatPaid= fee.nCost-fee.nDiscount;
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("TotalInsUnPaid"), tmpStr);
			}
		}
	}

	
		//In du lieu cu
	
	//nTotalPatPaid = nTotalAmount - nTotalDiscount;

		//nTotalCost = nTotalAmount;
		rptDetail = rpt.GetReportFooter();

		rs.GetValue(_T("pname"), szPatientName);
		rptDetail->SetValue(_T("PatientSign"), szPatientName);
		

	//	nTotalAmount -= nTotalDiffCost;
		FormatCurrency(nTotalAmount, tmpStr);
		

		rptDetail->SetValue(_T("SumAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.2f"), nTotalAmount);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rptDetail->SetValue(_T("SumInWord"), szSumInWord);
	
		FormatCurrency(nTotalInsPaid, tmpStr);
		rptDetail->SetValue(_T("SumInsPaid"), tmpStr);

		tmpStr.Format(_T("%.2f"), nTotalInsPaid);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rptDetail->SetValue(_T("SumInWord2"), szSumInWord);
	

		tmpStr.Format(_T("%.2f"), nTotalDiscount);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rptDetail->SetValue(_T("SumInWord3"), szSumInWord);	


		FormatCurrency(nTotalDiscount, tmpStr);
		rptDetail->SetValue(_T("SumInsDiscount"), tmpStr);

		tmpStr.Format(_T("%.2f"), nTotalPatPaid);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rptDetail->SetValue(_T("SumInWord4"), szSumInWord);
	

		FormatCurrency(nTotalPatPaid, tmpStr);
		rptDetail->SetValue(_T("SumPatPaid"), tmpStr);

		
		FormatCurrency(nTotalPatPaid, tmpStr);
		rptDetail->SetValue(_T("SumInsUnPaid"), tmpStr);
		


		FormatCurrency(nTotalDiffCost, tmpStr);
		rptDetail->SetValue(_T("SumDiffPaid"), tmpStr);
		
		FormatCurrency(nTotalInsPaid-nTotalDiscount, tmpStr);
		rptDetail->SetValue(_T("SumInsPatPaid"), tmpStr);	
		
		FormatCurrency(nTotalDiffCost+nTotalPatPaid, tmpStr);
		rptDetail->SetValue(_T("SumPatPaid"), tmpStr);
		tmpStr.Format(_T("%.2f"), nTotalPatPaid+nTotalDiffCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rptDetail->SetValue(_T("SumInWordPatPaid"), szSumInWord);

		CString szDesc;

/*	
		szSQL.Format(_T(" SELECT 	trunc_date(hfi_recvdate) as recvdate, ") \
	_T(" 	hfi_receiver as receiveby, ") \
	_T(" 	hfi_desc as desc, hfi_type as feetype, ") \
	_T(" 	case when hfi_type='A' then hfi_patpaid ") \
	_T(" 	when hfi_type='D' then hfi_discount ") \
	_T(" 	when hfi_type='R' then hfi_cost else 0 end as amount") \
	_T(" FROM hms_fee_invoice") \
	_T(" WHERE hfi_docno=%ld and hfi_invoiceno in(select hri_refinvoice from hms_refinvoice where hri_invoiceno=%ld)  %s ") \
	_T(" ORDER BY hfi_invoiceno;"), m_nDocumentNo, nInvoiceNo, szWhere);
		rs.ExecSQL(szSQL);
		double nAmount =0;
		
		
		while(!rs.IsEOF()){

		szDesc.Format(_T("[%s] %s (%s)"), 
				CDate::Convert(rs.GetValue(_T("recvdate")), yyyymmdd, ddmmyyyy), 
					rs.GetValue(_T("desc")), 
					GetDoctorName(rs.GetValue(_T("receiveby"))));

			rptDetail->SetValue(_T("SubGroupName"), szDesc);
			rs.GetValue(_T("amount"), nAmount);
			FormatCurrency(nAmount, tmpStr);
			rs.GetValue(_T("feetype"), szType);
			rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
			rs.MoveNext();
		}
*/		
		rptDetail = rpt.GetReportFooter();

		FormatCurrency(ceil(nTotalDeposit), tmpStr);
		rptDetail->SetValue(_T("SumDeposit"), tmpStr);
		FormatCurrency(ceil(nTotalFree), tmpStr);
		rptDetail->SetValue(_T("SumFreeDiscount"), tmpStr);

		
		if(nTotalRefund > 0)
		{
			FormatCurrency(ceil(nTotalRefund), tmpStr);
			TranslateString(_T("SumRefund"), szDescription);
		}
		else
		{
			FormatCurrency(ceil(nDepositPayable), tmpStr);
			if(nTotalDeposit > 0)
			{
				TranslateString(_T("SumDeposit"), szDescription);
				szDescription += _T(" [TT]");
			}

		}
		szDesc.Format(_T("%s: %s"), szDescription, tmpStr);
		rptDetail->SetValue(_T("SumPayable"), szDesc);


	
	if(nInsRate > 0)
	{
		nUnRate = 100 - nInsRate;
		if(nUnRate ==0)
			nUnRate = nInsRate;

		tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
		rpt.GetReportFooter()->SetValue(_T("UnRate"), tmpStr);
	}

	szSQL.Format(_T("SELECT hd_doctor FROM hms_doc WHERE hd_docno =%ld"), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hd_doctor"), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("createdby1"), GetDoctorName(tmpStr));

	if(bPreview)
		rpt.PrintPreview();
	else
	{
		rpt.Print();
	}
}


//In Phieu thanh toan ra vien
void	CMainFrame::PrintDischargeReceipt(CString szDeptID, bool bGeneralCost){
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
//		ShowMessageBox(_T("This document not end. Can not print it"), MB_OK);
		return;
	}

	if(!bGeneralCost)
	{
		szSQL.Format(_T("SELECT max(hfe_invoiceno) as invoiceno FROM hms_fee_invoice WHERE hfe_docno=%ld and hfe_deptid='%s' and hfe_type='P' "), m_nDocumentNo, szDeptID);
		rs.ExecSQL(szSQL);
		nInvoiceNo = rs.GetIntValue();

		szWhere.AppendFormat(_T(" and hfe_invoiceno=%ld"), nInvoiceNo);
		szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text)) as ethnicdesc, ") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hd_result) as result, ")
				_T(" 	(hd_admitdate) as examdate,") \
				_T(" 	(hd_enddate) as enddate,") \
				_T(" 	(hcr_admitdate) as admitdate,") \
				_T(" 	(hcr_dischargedate) as dischargedate,") \
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
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_depts as depts,") \
				_T(" 	hfe_bookno as bookno,") \
				_T(" 	hfe_serialno as serialno,") \
				_T(" 	hfe_recvno as recvno,") \
				_T(" 	hfe_recvdate as recvdate, ") \
				_T(" 	hfe_receiver as receiver,") \
				_T(" 	hfe_desc as reason, ") \
				_T(" 	hfe_cost as cost,") \
				_T(" 	hfe_discount as discount,") \
				_T(" 	hfe_patpaid as patpaid") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfe_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hfe_docno=hcr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld %s "), m_nDocumentNo, szWhere);

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
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_icd as icd10,") \
				_T(" 	hd_diagnostic as diagnostic,") \
				_T(" 	hd_reldisease as reldisease,") \
				_T(" (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hd_result) as result, ")
				_T(" 	(hd_admitdate) as examdate,") \
				_T(" 	(hd_enddate) as enddate,") \
				_T(" 	(htr_admitdate) as admitdate,") \
				_T(" 	(htr_dischargedate) as dischargedate,") \
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
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_depts as depts,") \
				_T(" 	hfe_bookno as bookno,") \
				_T(" 	hfe_serialno as serialno,") \
				_T(" 	hfe_recvno as recvno,") \
				_T(" 	hfe_recvdate as recvdate, ") \
				_T(" 	hfe_receiver as receiver,") \
				_T(" 	hfe_desc as reason, ") \
				_T(" 	hfe_cost as cost,") \
				_T(" 	hfe_discount as discount,") \
				_T(" 	hfe_patpaid as patpaid") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfe_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_treatment_record ON(hfe_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and htr_deptid='%s' "), m_nDocumentNo, szDeptID);		
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
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	rs.GetValue(_T("admitdate"), tmpStr);
	if(tmpStr.IsEmpty())
	{
		rs.GetValue(_T("examdate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		rs.GetValue(_T("enddate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
		rs.GetValue(_T("dischargedate"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
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
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate1"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	
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
	
	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
	grs.ExecSQL(szSQL);

	

	if(szObjectType == _T("I") || szObjectType == _T("C") || szObjectType == _T("D"))
	{	
		szSQL.Format(_T(" SELECT") \
			_T("		hfe_type as feetype, ") \
			_T(" 		rtrim(hfe_group,'0') as groupid,") \
			_T(" 		hfe_itemid as itemid,") \
			_T(" 		hfe_desc as name,") \
			_T(" 		hfe_unit as unit,") \
			_T(" 		sum(hfe_quantity) as qty,") \
			_T(" 		hfe_unitprice as unitprice,") \
			_T(" 		sum(hfe_cost) as cost,") \
			_T(" 		sum(hfe_discount) as discount,") \
			_T(" 		sum(hfe_patpaid) as patpaid,") \
			_T(" 		sum(hfe_patdebt) as patdebt,") \
			_T(" 		sum(hfe_patdebt) as unpaid") \
			_T(" FROM hms_fee") \
			_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
			_T(" WHERE hfe_docno=%ld AND hfe_iaccept='Y' and hfe_discount > 0 and hfe_insinvoice=%ld  and hfe_type<>'E' ") \
			_T(" GROUP BY hfg_index, groupid, feetype, itemid, name, unit, unitprice") \
			_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
			_T(" ORDER BY hfg_index,  name, unit, unitprice"), m_nDocumentNo, nInvoiceNo);
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
				_T(" 		sum(hfe_quantity) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_patpaid) as patpaid,") \
				_T(" 		sum(hfe_patdebt) as patdebt,") \
				_T(" 		sum(hfe_patdebt) as unpaid") \
				_T(" FROM hms_fee") \
				_T(" WHERE hfe_docno=%ld and hfe_insinvoice=%ld and hfe_iaccept='Y' AND hfe_type<>'E' ") \
				_T(" GROUP BY hfg_index, groupid, feetype,  itemid, name, unit, unitprice") \
				_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
				_T(" ORDER BY hfg_index,  name, unit, unitprice"), m_nDocumentNo, nInvoiceNo);
		}
		else
		{
			szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		rtrim(hfe_group,'0') as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_quantity) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_patpaid) as patpaid,") \
				_T(" 		sum(hfe_patdebt) as patdebt,") \
				_T(" 		sum(hfe_patdebt) as unpaid") \
				_T(" FROM hms_fee") \
				_T(" WHERE hfe_docno=%ld and hfe_deptid='%s'  AND hfe_type<>'E' ") \
				_T(" GROUP BY hfg_index, groupid, feetype,  itemid, name, unit, unitprice") \
				_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
				_T(" ORDER BY hfg_index,  name, unit, unitprice"), nDocumentNo, szDeptID);
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
		grs.GetValue(_T("xlevel"), nLevel);
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
								fee.nPatPaid = dGroup2[2];
								fee.nPatDebt = dGroup2[3];
								feeList.SetAt(nOldItem, fee);
							}
							szSQL.Format(_T("SELECT hfg_name as name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
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
						fee.nQuantity = str2float(rs.GetValue(_T("qty")));
						fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
						fee.nCost = ToDouble(rs.GetValue(_T("cost")));
						fee.nPatPaid = ToDouble(rs.GetValue(_T("patpaid")));
						fee.nDiscount = ToDouble(rs.GetValue(_T("discount")));
						feeList.Add(fee);

						if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
							CString szItemID;
							rs.GetValue(_T("itemid"), szItemID);
							szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
							_T(" 	hpol_productuom as unit, ") \
							_T(" 	hpol_unitprice as price, ") \
							_T(" 	sum(hpol_qtyissue) as qty, ") \
							_T(" 	sum(hpol_qtyissue*hpol_unitprice) as amount ") \
							_T(" FROM hms_pharmaorder") \
							_T(" LEFT JOIN hms_pharmaorder_line ON(hpo_orderid=hpol_orderid)") \
							_T(" WHERE 	hpo_docno=%ld and hpo_deptid='%s'") \
							_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' ) and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
							_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo,szDeptID, szItemID);
							rsl.ExecSQL(szSQL);
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("name"), tmpStr);
								fee.szGroupID = _T("SubItem");
								fee.szID.Empty();
								fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
								fee.szUnit = rsl.GetValue(_T("unit"));
								fee.nQuantity = str2float(rsl.GetValue(_T("qty")));
								fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
								fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
								fee.nPatPaid = 0;
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
					fee.nPatPaid = dGroup2[2];
					feeList.SetAt(nOldItem, fee);
				}
				dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
				nItem2 = 0;
				fee = feeList.GetAt(nItem);
				fee.szGroupID = _T("SubAmount");
				TranslateString(_T("Sub Amount"), fee.szName);
				fee.nCost = dGroup1[0];
				fee.nDiscount = dGroup1[1];
				fee.nPatPaid = dGroup1[2];
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
			fee.nPatPaid = dTotal[2];
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
				FormatCurrency(fee.nPatPaid, tmpStr);
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
				FormatCurrency(fee.nPatPaid, tmpStr);
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
				FormatCurrency(fee.nPatPaid, tmpStr);
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
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
			}
	}

	
		//Report Footer
	FormatCurrency(ceil(dTotal[0]), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	CString szSumInWord;
	tmpStr.Format(_T("%.2f"), ceil(dTotal[0]));
	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng.");
	rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
	FormatCurrency(dTotal[1], tmpStr);
	rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);
	FormatCurrency(ceil(dTotal[0]-dTotal[1]), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);

	szSQL.Format(_T(" SELECT 	date(hfe_recvdate) as recvdate, ") \
_T(" 	hfe_receiver as receiveby, ") \
_T(" 	hfe_desc as desc, hfe_type as feetype, ") \
_T(" 	case when hfe_type='A' then hfe_patpaid ") \
_T(" 	when hfe_type='D' then hfe_discount ") \
_T(" 	when hfe_type='R' then hfe_cost else 0 end as amount") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfe_docno=%ld and hfe_deptid='%s' and hfe_type in('A','D')") \
_T(" ORDER BY hfe_invoiceno;"), m_nDocumentNo, szDeptID);
	rs.ExecSQL(szSQL);
	
	CString szDesc;
	double nDeposit=0, nDiscount=0;
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
			nDeposit += ToDouble(tmpStr);
		else
			nDiscount += ToDouble(tmpStr);
		rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
		rs.MoveNext();
	}

	FormatCurrency(ceil(nDeposit), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Deposit"), tmpStr);
	FormatCurrency(ceil(nDiscount), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Discount"), tmpStr);

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);

//	rpt.Print();
	rpt.PrintPreview();
	
}

typedef struct tagRECEIPTINFO{
			CString deptid;
			CString admitdate;
			CString dischargedate;
			CString mainicd;
			CString maindisease;
}RECEIPTINFO;

void CMainFrame::PrintDischargeReceiptFromInvoice3(long nInvoiceNo, bool bDetailForCost)
{
	if (m_nInpatient == 0)
		return;
	//_msg(_T("Chao nam moi"));
	CReport rpt;
	CString tmpStr, szSQL, szWhere, szAdmitDate, szEndDate,szDepartments, szAddonedayoutofhospital,szNumbertreat;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	int		nDeskNo=0;
	long	nDocumentNo;
	bool	bDetailFee = bDetailForCost;
	CString szRecvDate;
	CString	szObjectType;
	CString	szDescription;
	
	double	nTotalCost=0,				//Tong chi phi
			nTotalInsCost=0,
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatPaid =0,			//Tong benh nhan tra
			nTotalDiffPaid = 0,	//Tong so tra chenh lech
			nTotalPayable=0,
			nTotalDeposit = 0,			//Tong tam ung
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0;			//So tien tra tu tam ung
	double	nGroup0Cost=0,				//Tong chi phi
			nGroup0Discount = 0,			//Tong Mien giam
			nGroup0DiffPaid=0,
			nGroup0Patpaid =0;			//Tong benh nhan tra
	double	nGroup1Cost=0,				//Tong chi phi
			nGroup1Discount = 0,			//Tong Mien giam
			nGroup1DiffPaid=0,
			nGroup1Patpaid =0;			//Tong benh nhan tra
	double	nGroup2Cost=0,				//Tong chi phi
			nGroup2Discount = 0,			//Tong Mien giam
			nGroup2DiffPaid=0,
			nGroup2Patpaid =0;			//Tong benh nhan tra
	double	nCost=0, nInsPaid = 0, nDiscount=0, nDiffPaid=0, nPatPaid=0;
	
	double nSumFoodAmount=0;			



	/*szSQL.Format(_T("  SELECT distinct on(hd_docno) hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T("	date_part('year', hp_birthdate) as yearofbirth, ") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text)) as ethnicdesc, ") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_createdby as createdby,") \
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
				_T(" 	hcr_recordno as recordno ,") \
				_T(" 	hcr_admitdate as admitdate,") \
				_T(" 	hcr_dischargedate as dischargedate,") \
				_T("	date(hcr_dischargedate) - date(hcr_admitdate) as Numbertreat,") \
				_T(" 	hcr_mainicd as mainicd ,") \
				_T(" 	hcr_maindisease as maindisease ,") \
				_T("	hcr_treatdoctor as treatdoctor, ") \
				_T("	hcr_reldisease as ireldisease,") \
				_T("	hcr_suggestion as isuggestion,") \
				_T("	hd_suggestion as esuggestion,") \
				_T("	(select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hcr_result)  as iresult, ")
				_T("	(select ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	cast(hd_disrate as integer) as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hd_insregdate as insregdate, ") \
				_T("	hd_transplace as transplace, ") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_depts as depts,") \
				_T(" 	hfe_bookno as bookno,") \
				_T(" 	hfe_deskno as deskno,") \
				_T(" 	hfe_serialno as serialno,") \
				_T(" 	hfe_recvno as recvno,") \
				_T(" 	hfe_recvdate as recvdate, ") \
				_T(" 	hfe_receiver as receiver,") \
				_T(" 	hfe_desc as reason, ") \
				_T(" 	hfe_cost as cost,") \
				_T(" 	hfe_discount as discount,") \
				_T(" 	hfe_patpaid as patpaid, ") \
				_T(" 	hfe_advanceamt as deposit_amount, ") \
				_T(" 	hfe_advpayment as deposit_payable, ") \
				_T(" 	hfe_refundamt as refund_amount, ") \
				_T(" 	hfe_free as free_amount ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfe_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfe_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld "),m_nDocumentNo, nInvoiceNo);*/

	szSQL.Format(_T(" SELECT *") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT hd_patientno as patientno,") \
				_T("         hd_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hp_birthdate as birthdate,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         extract(year from hp_birthdate) as yearofbirth, ") \
				_T("         Get_Selection_Desc('sys_sex', hp_sex) as sex,") \
				_T("         hp_sex as sex_id,") \
				_T("         hp_ethnic as ethnic,") \
				_T("         Get_Selection_Desc('sys_ethnic', hp_ethnic) as ethnicdesc, ") \
				_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("         hp_workplace as workplace,") \
				_T("         hd_doctor as doctor,") \
				_T("         hd_createdby as createdby,") \
				_T("         hd_icd as icd10,") \
				_T("         hd_diagnostic as diagnostic,") \
				_T("         hd_reldisease as reldisease,") \
				_T("         hd_xobject as xobject, ") \
				_T("         hd_xcardno as xcardno, ") \
				_T("         hd_xissuedate as xissuedate, ") \
				_T("         hd_emergency as emergency, ") \
				_T("         Get_Selection_Desc('hms_result',hd_result) as result,") \
				_T("         hd_admitdate as examdate,") \
				_T("         hd_enddate as enddate,") \
				_T("         hcr_recordno as recordno ,") \
				_T("         hcr_admitdate as admitdate,") \
				_T("         hcr_dischargedate as dischargedate,") \
				_T("         trunc_date(hcr_dischargedate)-trunc_date(hcr_admitdate)+1 as Numbertreat,") \
				_T("         hcr_mainicd as mainicd ,") \
				_T("         hcr_maindisease as maindisease ,") \
				_T("         hcr_treatdoctor as treatdoctor, ") \
				_T("         hcr_reldisease as ireldisease,") \
				_T("         hcr_suggestion as isuggestion,") \
				_T("         hd_suggestion as esuggestion,") \
				_T("         Get_Selection_Desc('hms_result' ,hcr_result)  as iresult,") \
				_T("         Hms_GetObjectType(hd_object) as objecttype, ") \
				_T("         cast(hd_disrate as integer) as disrate, ") \
				_T("         hd_insline as insline, ") \
				_T("         hd_insregdate as insregdate, ") \
				_T("         hd_transplace as transplace, ") \
				_T("         hc_cardno as cardno, ") \
				_T("         hc_regdate as regdate, ") \
				_T("         hc_expdate as expdate, ") \
				_T("         hc_regcode as regcode, ") \
				_T("         HMS_GETHOSPITALNAME(hc_regcode) as regplace, ") \
				_T("         hfe_deptid as deptid,") \
				_T("         '' as depts,") \
				_T("         '' as bookno,") \
				_T("         '' as deskno,") \
				_T("         hfe_serialno as serialno,") \
				_T("         hfe_receiptno as recvno,") \
				_T("         hfe_date as recvdate, ") \
				_T("         hfe_staff as receiver,") \
				_T("         hfe_desc as reason,") \
				_T("         hfe_amount as cost,") \
				_T("         hfe_discount as discount,") \
				_T("         hfe_patpaid as patpaid,") \
				_T("         hfe_deposit as deposit_amount, ") \
				_T("         0 as deposit_payable,") \
				_T("         hfe_refund as refund_amount, ") \
				_T("         hfe_freeamount as free_amount,") \
				_T("         hfe_eat_amount as food_amount,") \
				_T("         row_number() over (partition by hd_docno order by hd_docno) as dn") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfe_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfe_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld") \
				_T(" ) Tbl") \
				_T(" WHERE dn=1"), m_nDocumentNo, nInvoiceNo);
	
//	_msg(_T("%s"), szSQL);

	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		return;
	}

	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatPaid);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("deposit_payable"), nDepositPayable);
	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);

	rs.GetValue(_T("food_amount"), nSumFoodAmount);

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


	rs.GetValue(_T("recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RecordNo"), tmpStr);
	//rs.GetValue(_T("pname"), tmpStr);
	

	CString szPatientName;
	StringUpper(rs.GetValue(_T("pname")), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("birthdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);

	rs.GetValue(_T("sex_id"), tmpStr);
	if(tmpStr == _T("F"))
		rpt.GetReportHeader()->SetValue(_T("Female"), _T("X"));
	else
		rpt.GetReportHeader()->SetValue(_T("Male"), _T("X"));


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
	

	rs.GetValue(_T("transplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), tmpStr);
	
	
	rs.GetValue(_T("objecttype"), szObjectType);
	
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr.Left(15));
	if(!tmpStr.IsEmpty())
	{
		rpt.GetReportHeader()->SetValue(_T("HasCardNo"), _T("X"));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("NoCardNo"), _T("X"));
	}

	rs.GetValue(_T("disrate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), tmpStr);
	

	rs.GetValue(_T("insline"), tmpStr);	
	if (tmpStr == _T("Y"))
	{		
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T(""));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T("X"));
	}
	
	rs.GetValue(_T("insregdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InsRegDate"), CDate::Convert(tmpStr));


	rs.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);


	CString szRegCode;
	rs.GetValue(_T("regcode"), szRegCode);
	rpt.GetReportHeader()->SetValue(_T("RegCode"), szRegCode);

	CReportItem *obj = rpt.GetReportHeader()->GetItem(_T("InsuranceCompany"));
	if (obj)
	{
		CString insname;
		CRecord rsx(&m_db);
		
		tmpStr.Format(_T("select sp_name as insname ") \
			          _T("from sys_prov left join hms_hospital on(hh_provid=sp_id or hh_newprov_id=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if (!rsx.IsEOF())
		{
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);
		}
	}

	rs.GetValue(_T("emergency"), tmpStr);
	if (tmpStr == _T("Y") )
		tmpStr = _T("X");
	else
		tmpStr.Empty();

	rpt.GetReportHeader()->SetValue(_T("Emergency"), tmpStr);

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
	
	
	
	CString szDischargeDate;
	rs.GetValue(_T("admitdate"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	rs.GetValue(_T("dischargedate"), tmpStr);
	szDischargeDate = tmpStr;
	
	if(szDischargeDate.Left(4) != _T("1752"))
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	else
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), _T(""));

		

	CString szData;
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));
	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate, yyyymmdd|hhmm,ddmmyyyy|hhmm));
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate1")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate1"),szData);
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate2")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate2"),szData);
	
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
		img->SetFixedHeight(true);
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
	
	
	// Nguoi tiep don
	tmpStr.Empty();
	rs.GetValue(_T("createdby"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("createdby"), GetDoctorName(tmpStr));
	CReportItem *img3 = rpt.GetReportFooter()->GetItem(_T("Signature3"));
	if(img3)
	{
		img3->SetHBITMAP(GetSignatureImage(tmpStr));
		img3->SetFixedHeight(false);
	}	


	CReportSection* rptDetail=NULL;
	CReportSection *grp;
	CRecord grs(&m_db);
	CString szFeeID, szID;
	CString szSubItem, szType;

	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};


	CRecord drs(&m_db);
	CString szDeptID;
		
		CArray<RECEIPTINFO, RECEIPTINFO& > payInfo;

		szSQL.Format(_T(" SELECT deptid, admitdate, dischargedate, mainicd, maindisease") \
					_T(" FROM") \
					_T(" (") \
					_T("  select htr_deptid as deptid,") \
					_T("         htr_admitdate as admitdate,") \
					_T("         htr_dischargedate as dischargedate,") \
					_T("         htr_mainicd as mainicd,") \
					_T("         htr_maindisease as maindisease,") \
					_T("         htr_idx as idx") \
					_T("  from hms_treatment_record") \
					_T("  where htr_docno=%ld") \
					_T("  union all") \
					_T("  select hd_admitdept,") \
					_T("         hd_admitdate,") \
					_T("         hd_enddate,") \
					_T("         hd_icd,") \
					_T("         hd_diagnostic,") \
					_T("         0") \
					_T("  from hms_doc") \
					_T("  where hd_docno=%ld") \
					_T(" ) tbl") \
					_T(" WHERE deptid in(select distinct hfe_deptid from hms_fee where hfe_invoiceno=%ld)") \
					_T(" ORDER BY idx"), nDocumentNo, nDocumentNo, nInvoiceNo);

		drs.ExecSQL(szSQL);

		RECEIPTINFO pi;
		CString szDepts;
		szDepts.Empty();

		while (!drs.IsEOF())
		{
			drs.GetValue(_T("deptid"), tmpStr);
			
			bool bFound = false;
			int i = 0;
			for (i =0; i < payInfo.GetCount(); i++)
			{
				pi = payInfo[i];
				if (pi.deptid == tmpStr)
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

			if (bFound)
			{
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

		double nSumCost=0, nSumInsCost=0, nSumDiscount=0, nSumDiffPaid=0, nSumPatPaid=0;

		szDepts.Empty();

		for (int n = 0; n < payInfo.GetCount(); n++)
		{
			pi = payInfo[n];
			szDeptID = pi.deptid;

			if (n == 0)
			{
//				rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(pi.admitdate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
			}
			if (CompareDate(szDischargeDate, pi.dischargedate) < 0)
			{
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

		int nChapter = 0;
		int nCount = 0, nIndex, nChapterID = 0;
		int nItem = 0, nOldItem = 0, nItem2 = 0;
		bool bDeleteParent = false;
		bool bLoadItems = false;
		CString szNewGroup, szOldGroup, szParentGroup;

		nGroup1Cost = nGroup1Discount = nGroup1DiffPaid = nGroup1Patpaid = 0;
		nGroup2Cost = nGroup2Discount = nGroup2DiffPaid = nGroup2Patpaid = 0;		
		
	double nGroup0Cost=0, nGroup0InsCost= 0, nGroup0Discount=0, nGroup0DiffPaid=0, nGroup0PatPaid=0;
	double nGroup1Cost=0, nGroup1InsCost = 0, nGroup1Discount=0, nGroup1DiffPaid = 0, nGroup1PatPaid=0;
	double nGroup2Cost=0, nGroup2InsCost = 0, nGroup2Discount=0, nGroup2DiffPaid = 0, nGroup2PatPaid=0;	
	double nCost=0, nInsCost =0,  nDiscount=0, nDiffPaid  = 0, nPatPaid=0;

	
	nTotalCost = nTotalDiffPaid = nTotalInsCost = nTotalPatPaid = nTotalDiscount =0;

	szSQL.Format(_T("SELECT * FROM hms_fee_type ORDER BY hft_id "));
	grs.ExecSQL(szSQL);

	CString szWhere;

	
	szWhere.Format(_T(" AND hfe_invoiceno=%ld"), nInvoiceNo);

	if (m_szOutpatient != _T("Y")) 
		szWhere.AppendFormat(_T(" and hfe_groupid <>'D0000' "));
	szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X') "));
	szWhere.AppendFormat(_T(" and hfe_deptid='%s' "), szDeptID);
	szWhere.AppendFormat(_T(" and hfe_subgroup='XX' "));


	szSQL.Format(_T(" SELECT hfe_typeindex AS typeindex,") \
_T("   hfe_status         AS status,") \
_T("   hfe_deptid         AS deptid,") \
_T("   hfe_type           AS feetype,") \
_T("   hfe_groupid        AS groupid,") \
_T("   hfe_groupid3       AS groupid3,") \
_T("   hfe_orderid       AS orderid,") \
_T("   hfe_itemid         AS itemid,") \
_T("   hfe_name           AS name,") \
_T("   hfe_unit           AS unit,") \
_T("   hfe_hitech         AS hitech,") \
_T("   hfe_inlist         AS inlist,") \
_T("   hfe_unitprice      AS unitprice,") \
_T("   SUM(hfe_qty)       AS qty,") \
_T("   SUM(hfe_cost)      AS cost,") \
_T("   SUM(hfe_inscost)   AS inscost,") \
_T("   SUM(hfe_discount)  AS discount,") \
_T("   SUM(hfe_diffcost)  AS DiffPaid,") \
_T("   SUM(hfe_patdebt)   AS patdebt,") \
_T("   SUM(hfe_copayment) AS copayment,") \
_T("   SUM(hfe_patpaid)   AS patpaid") \
_T(" FROM hms_fee_view_dtl") \
_T(" WHERE hfe_docno  =%ld %s ") \
_T(" GROUP BY hfe_typeindex,") \
_T("   hfe_status ,") \
_T("   hfe_deptid ,") \
_T("   hfe_type ,") \
_T("   hfe_groupid ,") \
_T("   hfe_groupid3 ,") \
_T("   hfe_orderid ,") \
_T("   hfe_itemid ,") \
_T("   hfe_name ,") \
_T("   hfe_unit ,") \
_T("   hfe_hitech ,") \
_T("   hfe_inlist,") \
_T("   hfe_unitprice") \
_T(" ORDER BY hfe_typeindex, hfe_groupid3, hfe_name, hfe_unit, hfe_unitprice"), m_nDocumentNo, szWhere);


	
/*
	szWhere.Format(_T(" AND hfe_invoiceno=%ld"), nInvoiceNo);

	if (m_szOutpatient != _T("Y")) 
		szWhere.AppendFormat(_T(" and hfe_group <>'D0000' "));
	szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X') "));
	szWhere.AppendFormat(_T(" and hfe_deptid='%s' "), szDeptID);
	szWhere.AppendFormat(_T(" and hfe_subgroup='XX' "));

	if(!szDepts.IsEmpty())
		szDepts += _T(" + ");
	szDepts.AppendFormat(_T("%s"), szDeptID);
		
	if(m_szObjectType == _T("D") || m_szObjectType == _T("P") || m_szObjectType == _T("Z"))
	{
		szSQL.Format(_T(" SELECT ") \
			_T("   case when hfe_hitech='Y' then 600 when hfg_type_id is null then 2000 else hfg_type_id end as typeindex, ") \
			_T("   hfe_status            AS status,") \
			_T("   hfe_deptid                 AS deptid,") \
			_T("   hfe_type                   AS feetype,") \
			_T("   rtrim(hfe_group,'0')       AS groupid,") \
			_T("   hfe_itemid                 AS itemid,") \
			_T("   hfe_desc                   AS name,") \
			_T("   hfe_unit                   AS unit,") \
			_T("   hfe_hitech as hitech,") \
			_T("	case when hfe_group='A1400' then 3 when sum(hfe_discount) > 0 then 1  else 2 end as inlist, ") \
			_T("   case when sum(hfe_discount) > 0 then hfe_insprice else hfe_unitprice end              AS unitprice,") \
			_T("   SUM(hfe_quantity)          AS qty,") \
			_T("   case when sum(hfe_discount) > 0 then SUM(hfe_cost-hfe_diffcost) else sum(hfe_cost) end             AS cost,") \
			_T("   SUM(hfe_inspaid)           AS inscost,") \
			_T("   SUM(hfe_discount)          AS discount,") \
			_T("   SUM(hfe_DiffPaid)          AS DiffPaid,") \
			_T("   SUM(hfe_patdebt)           AS patdebt,") \
			_T("   SUM(hfe_cost-hfe_discount-hfe_DiffPaid) AS copayment,") \
			_T("   SUM(hfe_cost-hfe_discount-hfe_diffcost)           AS patpaid") \
			_T(" FROM hms_fee_view") \
			_T(" LEFT JOIN hms_fee_group") \
			_T(" ON(hfg_id       =hfe_group)") \
			_T(" WHERE hfe_docno =%ld") \
			_T(" AND hfe_cost    > 0") \
			_T(" AND hfe_status <> 'C'") \
			_T(" AND hfe_type   <> 'V'") \

			_T(" %s ") \
			_T(" GROUP BY  hfg_type_id,") \
			_T("   hfe_status,") \
			_T("   hfe_deptid,") \
			_T("   hfe_type,") \
			_T("   hfe_group,") \
			_T("   hfe_itemid,") \
			_T("   hfe_desc,") \
			_T("   hfe_unit,") \
			_T("   hfe_hitech,") \
			_T("   hfe_unitprice, hfe_polprice ") \
			_T(" ORDER BY hfg_type_id, substr(hfe_group, 1, 3), inlist, hfe_desc, hfe_unit "),
						nDocumentNo, szWhere);
		
	}
	else if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
	{
		szSQL.Format(_T(" SELECT ") \
			_T("   case when hfe_hitech='Y' then 600 when hfg_type_id is null then 2000 else hfg_type_id end as typeindex, ") \
			_T("   hfe_status            AS status,") \
			_T("   hfe_deptid                 AS deptid,") \
			_T("   hfe_type                   AS feetype,") \
			_T("   rtrim(hfe_group,'0')       AS groupid,") \
			_T("   hfe_itemid                 AS itemid,") \
			_T("   hfe_desc                   AS name,") \
			_T("   hfe_unit                   AS unit,") \
			_T("   hfe_hitech as hitech,") \
			_T("	case when hfe_group='A1400' then 3 when sum(hfe_discount) > 0 then 1  else 2 end as inlist, ") \
			_T("   case when sum(hfe_discount) > 0 then hfe_insprice else hfe_unitprice end              AS unitprice,") \
			_T("   SUM(hfe_quantity)          AS qty,") \
			_T("   case when sum(hfe_discount) > 0 then SUM(hfe_cost-hfe_diffcost) else sum(hfe_cost) end             AS cost,") \
			_T("   SUM(hfe_inspaid)           AS inscost,") \
			_T("   SUM(hfe_discount)          AS discount,") \
			_T("   SUM(hfe_DiffPaid)          AS DiffPaid,") \
			_T("   SUM(hfe_patdebt)           AS patdebt,") \
			_T("   SUM(hfe_cost-hfe_discount-hfe_diffpaid) AS copayment,") \
			_T("   SUM(hfe_cost-hfe_discount-hfe_diffcost)           AS patpaid") \
			_T(" FROM hms_fee_view") \
			_T(" LEFT JOIN hms_fee_group") \
			_T(" ON(hfg_id       =hfe_group)") \
			_T(" WHERE hfe_docno =%ld") \
			_T(" AND hfe_cost    > 0") \
			_T(" AND hfe_status <> 'C'") \
			_T(" AND hfe_type   <> 'V'") \

			_T(" %s ") \
			_T(" GROUP BY  hfg_type_id,") \
			_T("   hfe_status,") \
			_T("   hfe_deptid,") \
			_T("   hfe_type,") \
			_T("   hfe_group,") \
			_T("   hfe_itemid,") \
			_T("   hfe_desc,") \
			_T("   hfe_unit,") \
			_T("   hfe_hitech,") \
			_T("   hfe_unitprice, hfe_insprice ") \
			_T(" ORDER BY hfg_type_id, substr(hfe_group, 1, 3), inlist,  hfe_desc, hfe_unit "),
						nDocumentNo, szWhere);
		
	}
	else
	{
		szSQL.Format(_T(" SELECT ") \
			_T("   case when hfe_hitech='Y' then 600 when hfg_type_id is null then 2000 else hfg_type_id end as typeindex, ") \
			_T("   hfe_status            AS status,") \
			_T("   hfe_deptid                 AS deptid,") \
			_T("   hfe_type                   AS feetype,") \
			_T("   rtrim(hfe_group,'0')       AS groupid,") \
			_T("   hfe_itemid                 AS itemid,") \
			_T("   hfe_desc                   AS name,") \
			_T("   hfe_unit                   AS unit,") \
			_T("   hfe_hitech as hitech,") \
			_T("	case when hfe_group='A1400' then 3 when sum(hfe_discount) > 0 then 1  else 2 end as inlist, ") \
			_T("   hfe_unitprice              AS unitprice,") \
			_T("   SUM(hfe_quantity)          AS qty,") \
			_T("   SUM(hfe_cost)              AS cost,") \
			_T("   SUM(hfe_inspaid)           AS inscost,") \
			_T("   SUM(hfe_discount)          AS discount,") \
			_T("   SUM(hfe_DiffPaid)          AS DiffPaid,") \
			_T("   SUM(hfe_patdebt)           AS patdebt,") \
			_T("   SUM(hfe_cost-hfe_discount-hfe_DiffPaid) AS copayment,") \
			_T("   SUM(hfe_cost-hfe_discount-hfe_diffcost)           AS patpaid") \
			_T(" FROM hms_fee_view") \
			_T(" LEFT JOIN hms_fee_group") \
			_T(" ON(hfg_id       =hfe_group)") \
			_T(" WHERE hfe_docno =%ld") \
			_T(" AND hfe_cost    > 0") \
			_T(" AND hfe_status <> 'C'") \
			_T(" AND hfe_type   <> 'V'") \

			_T(" %s ") \
			_T(" GROUP BY  hfg_type_id,") \
			_T("   hfe_status,") \
			_T("   hfe_deptid,") \
			_T("   hfe_type,") \
			_T("   hfe_group,") \
			_T("   hfe_itemid,") \
			_T("   hfe_desc,") \
			_T("   hfe_unit,") \
			_T("   hfe_hitech,") \
			_T("   hfe_unitprice") \
			_T(" ORDER BY hfg_type_id, substr(hfe_group, 1, 3), inlist,  hfe_desc, hfe_unit "),
						nDocumentNo, szWhere);
		
	}

	*/

_fmsg(_T("%s"), szSQL);		
	
	nIndex = 1;
	CString szSubItem, szType;
	int nSubItem = 1;
	int nIDX;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CString szName;
	CString szNewIndex, szOldIndex;
	CString szIndex;
	bool bFound = false;
	bool bInList = false;
	bool bOutList = false;
	bool bKList = false;
	int nSubIndex = 1;
	
	double nTtlCost, nTtlInsCost, nTtlDiscount, nTtlDiffPaid, nTtlPatPaid;
	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);

	

	while(!grs.IsEOF()){
		tmpStr.Format(_T("%d"), nIndex);
		grs.GetValue(_T("hft_name"), szName);
		grs.GetValue(_T("hft_id"), szNewIndex);
		
		fee.szGroupID = _T("Type");
		fee.szID = tmpStr;
		fee.szName = szName;
		nItem = feeList.Add(fee);
		
		nIDX  = nItem;
		bFound = false;
		nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
		nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

		rs.MoveFirst();
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("typeindex"), tmpStr);
			
			if(tmpStr == szNewIndex){
				bFound = true;		
				rs.GetValue(_T("groupid"), szNewGroup);
				if(szNewGroup != szOldGroup)
				{
					szOldGroup = szNewGroup;
					if(szNewGroup.Left(2) == _T("B1")){
						szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						if(nGroup2Cost > 0){
							TranslateString(_T("Sub Amount"), tmpStr);
							fee.szGroupID = _T("SubAmount");
							fee.szName = tmpStr;
							fee.nCost = nGroup2Cost;
							fee.nInsPaid = nGroup2InsCost;
							fee.nDiscount = nGroup2Discount;
							fee.nDiffPaid = nGroup2DiffPaid;
							fee.nPatPaid = nGroup2PatPaid;
							int nItem2 = feeList.Add(fee);
						}

						szIndex.Format(_T("%d.%d"), nIndex, nSubIndex++);
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = rs2.GetValue(_T("hfg_name"));
						int nItem2 = feeList.Add(fee);
						nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

					}
					
				}

				if(szOldIndex != szNewIndex)
				{
					szOldIndex = szNewIndex;
					bInList = false;
					bOutList = false;
				}

				if(szNewIndex == _T("800")){
					

					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;

						int nItem2 = feeList.Add(fee);

					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(bInList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}

					if(tmpStr == _T("3") && !bKList){
						bKList = true;
						if(bInList && bOutList)
							szIndex.Format(_T("%d.3"), nIndex);	
						else if(bInList || bOutList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						TranslateString(_T("Inside cancer list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					

				}

				if(szNewIndex == _T("900")){
					
					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(!bInList)
							szIndex.Format(_T("%d.1"), nIndex);
						else
							szIndex.Format(_T("%d.2"), nIndex);

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
				}

				



				rs.GetValue(_T("cost"), nCost);
				rs.GetValue(_T("inscost"), nInsCost);
				rs.GetValue(_T("discount"), nDiscount);
				rs.GetValue(_T("DiffPaid"), nDiffPaid);
				rs.GetValue(_T("copayment"), nPatPaid);
				
				nTotalCost += nCost;
				nGroup1Cost += nCost;
				nGroup2Cost += nCost;

				nTotalInsCost += nInsCost;
				nGroup1InsCost += nInsCost;
				nGroup2InsCost += nInsCost;

				nTotalDiscount += nDiscount;
				nGroup1Discount += nDiscount;
				nGroup2Discount += nDiscount;

				nTotalDiffPaid += nDiffPaid;
				nGroup1DiffPaid += nDiffPaid;
				nGroup2DiffPaid += nDiffPaid;

				nTotalPatPaid += nPatPaid;
				nGroup1PatPaid += nPatPaid;
				nGroup2PatPaid += nPatPaid;

				fee.szID.Empty();
				fee.szGroupID = _T("Item");
				fee.szName = rs.GetValue(_T("name"));
				fee.szUnit = rs.GetValue(_T("unit"));
				fee.nCost = nCost;
				fee.nInsPaid = nInsCost;
				fee.nDiscount = nDiscount;
				fee.nQuantity = str2float(rs.GetValue(_T("qty")));
				fee.nPrice = str2double(rs.GetValue(_T("unitprice")));
				fee.nInsPrice = str2double(rs.GetValue(_T("insprice")));
				fee.nDiffPaid = nDiffPaid;
				fee.nPatPaid = nPatPaid;
				feeList.Add(fee);

				if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
					CString szItemID;
					rs.GetValue(_T("itemid"), szItemID);
					if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
					{
						szSQL.Format(_T(" SELECT hfe_group, ") \
								_T(" 		hfe_desc as name,") \
								_T(" hfe_unit as unit, ") \
								_T(" hfe_category, ") \
								_T(" 		sum(hfe_quantity) as qty,") \
								_T(" 		hfe_insprice as unitprice,") \
								_T(" 		sum(hfe_inspaid) as cost,") \
								_T(" 		case when hfe_category<>'Y' then sum(hfe_discount) else 0 end as discount,") \
								_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
								_T(" 		sum(hfe_cost-hfe_discount-hfe_diffcost) as patpaid") \
								_T(" FROM hms_fee_view ") \
								_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
								_T(" WHERE hfe_docno=%ld  and hfe_cost > 0  and hfe_class='I'  ") \
								_T(" and hfe_subgroup='%s'   ") \
								_T(" GROUP BY hfg_type_id, hfe_group, hfe_desc, hfe_unit, hfe_insprice, hfe_category, hfe_status ") \
								_T(" ORDER BY hfe_category DESC, hfg_type_id, hfe_group,  name, unitprice"), 
								nDocumentNo, szItemID);
					}
					else
					{
						szSQL.Format(_T(" SELECT hfe_group, ") \
								_T(" 		hfe_desc as name,") \
								_T(" hfe_unit as unit, ") \
								_T(" hfe_category, ") \
								_T(" 		sum(hfe_quantity) as qty,") \
								_T(" 		hfe_unitprice as unitprice,") \
								_T(" 		sum(hfe_cost) as cost,") \
								_T(" 		case when hfe_category<>'Y' then sum(hfe_discount) else 0 end as discount,") \
								_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
								_T(" 		sum(hfe_cost-hfe_discount-hfe_diffcost) as patpaid") \
								_T(" FROM hms_fee_view ") \
								_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
								_T(" WHERE hfe_docno=%ld  and hfe_cost > 0  and hfe_class='I'  ") \
								_T(" and hfe_subgroup='%s'   ") \
								_T(" GROUP BY hfg_type_id, hfe_group, hfe_desc, hfe_unit, hfe_unitprice, hfe_category, hfe_status") \
								_T(" ORDER BY hfe_category DESC, hfg_type_id, hfe_group,  name, unitprice"), 
								nDocumentNo, szItemID);

					}
					

							rsl.ExecSQL(szSQL);
							
							nCost = nInsCost = nPatPaid = nPatPaid = 0;
							nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;
							double nTtlCost2 = 0, nTtlInsCost2=0, nTtlDiscount2 = 0, nTtlDiffPaid2 = 0, nTtlPatPaid2 = 0;
							bool bInOperation=false, bOutOperation=false;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("cost"),nCost);
								rsl.GetValue(_T("discount"), nDiscount);
								rsl.GetValue(_T("DiffPaid"), nDiffPaid);
								rsl.GetValue(_T("patpaid"), nPatPaid);
								if(nDiscount == 0)
								{
								//	nCost = 0;
									//nPatPaid = 0;
									//nDiffPaid = 0;
								}


								
								rsl.GetValue(_T("hfe_category"), tmpStr);
								if(tmpStr == _T("Y") && !bInOperation)
								{
									bInOperation = true;
									CString szLabel;
									TranslateString(_T("Inside operation"), szLabel);
									fee.szGroupID = _T("SubItemGroup");
									fee.szID = _T("*");
									fee.szName = szLabel;
									fee.szUnit.Empty();
									fee.nCost = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = 0;
									fee.nDiffPaid = 0;
									fee.nPatDebt = 0;
									feeList.Add(fee);


								}
								if(tmpStr != _T("Y") && !bOutOperation)
								{
									CString szLabel;

									bOutOperation = true;

									if(nTtlCost > 0){
										TranslateString(_T("Amount"), tmpStr);
										fee.szGroupID = _T("SubItemAmount");
										fee.szID.Empty();
										fee.szName.Format(_T("   %s"), tmpStr);;
										fee.nCost = nTtlCost;
										fee.nDiscount = nTtlDiscount;
										fee.nDiffPaid = nTtlDiffPaid;
										fee.nPatPaid = nTtlPatPaid;
										feeList.Add(fee);

										nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;

									}


									

									TranslateString(_T("Outside operation"), szLabel);

									fee.szGroupID = _T("SubItemGroup");
									fee.szID = _T("*");
									fee.szName = szLabel;
									fee.nCost = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = 0;
									fee.nDiffPaid = 0;
									fee.nPatDebt = 0;

									feeList.Add(fee);


								}


								nTtlCost += nCost;
								nTtlInsCost += nInsCost;
								nTtlDiscount += nDiscount;
								nTtlDiffPaid += nDiffPaid;
								nTtlPatPaid += nPatPaid;
								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
									nTtlCost2 += nCost;
									nTtlInsCost2 += nInsCost;
									nTtlDiscount2 += nDiscount;
									nTtlDiffPaid2 += nDiffPaid;
									nTtlPatPaid2 += nPatPaid;
								}

								rsl.GetValue(_T("name"), tmpStr);
								fee.szID.Empty();
								fee.szName.Format(_T("      %s"), tmpStr);
								fee.szUnit = rsl.GetValue(_T("unit"));
								fee.szGroupID = _T("SubItem");
								fee.nQuantity = str2float(rsl.GetValue(_T("qty")));
								fee.nPrice = str2double(rsl.GetValue(_T("unitprice")));
								fee.nCost = str2double(rsl.GetValue(_T("cost")));
								fee.nInsPaid = str2double(rsl.GetValue(_T("inscost")));
								fee.nDiscount = str2double(rsl.GetValue(_T("discount")));
								fee.nDiffPaid = str2double(rsl.GetValue(_T("diffpaid")));
								fee.nPatPaid = str2double(rsl.GetValue(_T("patpaid")));
								feeList.Add(fee);
								rsl.MoveNext();
							}
							
							if(nTtlCost > 0){
								TranslateString(_T("Amount"), tmpStr);
								fee.szGroupID = _T("SubItemAmount");
								fee.szID.Empty();
								fee.szName.Format(_T("   %s"), tmpStr);;
								fee.szUnit.Empty();
								
								fee.nCost = nTtlCost;
								fee.nDiscount = nTtlDiscount;
								fee.nDiffPaid = nTtlDiffPaid;
								fee.nPatPaid = nTtlPatPaid;
								feeList.Add(fee);

								nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;

							}

							bool bOutsideOperation = false;

							szSQL.Format(_T("SELECT hfe_itemid, hfe_desc, hfe_quantity, hfe_unitprice, hfe_cost, hfe_discount, case when hfe_status='P' then hfe_patpaid else hfe_patdebt end as hfe_paid ") \
								_T("FROM hms_fee ") \
								_T("WHERE hfe_docno=%ld and hfe_type='V' and hfe_unit='%s' ORDER BY hfe_itemid DESC "), 
								nDocumentNo, szItemID);
							rsl.ExecSQL(szSQL);
							nCost = nInsCost = nPatPaid  = 0;
							while(!rsl.IsEOF())
							{
								CString szItemID;
								rsl.GetValue(_T("hfe_itemid"), szItemID);
								
								fee.szID = _T("*");
								fee.szGroupID = _T("Item");
								fee.szName = rsl.GetValue(_T("hfe_desc"));
								fee.nCost = str2double(rsl.GetValue(_T("hfe_cost")));
								fee.nDiscount = str2double(rsl.GetValue(_T("hfe_discount")));
								fee.nPrice = str2double(rsl.GetValue(_T("hfe_unitprice")));
								fee.nDiffPaid = 0;
								fee.nPatPaid = str2double(rsl.GetValue(_T("hfe_paid")));
								feeList.Add(fee);


								rsl.GetValue(_T("hfe_cost"), nCost);
								if(szItemID == _T("VT000001"))
								{
									//nCost = 0;
								}


								
								rsl.GetValue(_T("hfe_discount"), nDiscount);
								rsl.GetValue(_T("hfe_paid"), nPatPaid);

								nTtlCost += nCost;
								nTtlInsCost += (nCost-nDiffPaid);
								nTtlDiscount += nDiscount;
								nTtlDiffPaid += nDiffPaid;
								nTtlPatPaid += nPatPaid;

								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
									nTotalCost += nCost;
									
									nGroup1Cost += nCost;
									nGroup2Cost += nCost;
									nTotalInsCost += nInsCost;
									nGroup1InsCost += nInsCost;
									nGroup2InsCost += nInsCost;
									nTotalDiscount += nDiscount;
									nGroup1Discount += nDiscount;
									nGroup2Discount += nDiscount;
									nTotalDiffPaid += nDiffPaid;
									nGroup1DiffPaid += nDiffPaid;
									nGroup2DiffPaid += nDiffPaid;
									nTotalPatPaid += nPatPaid;
									nGroup1PatPaid += nPatPaid;
									nGroup2PatPaid += nPatPaid;
								}

								bOutsideOperation = true;

								rsl.MoveNext();

							}

							if(!bOutsideOperation && (nTtlDiscount2+nTtlDiffPaid2+nTtlPatPaid2) > 0){
								nTotalCost += nTtlCost2;
								nGroup1Cost += nTtlCost2;
									nGroup2Cost += nTtlCost2;
									nTotalInsCost += nTtlInsCost2;
									nGroup1InsCost += nTtlInsCost2;
									nGroup2InsCost += nTtlInsCost2;
									nTotalDiscount += nTtlDiscount2;
									nGroup1Discount += nTtlDiscount2;
									nGroup2Discount += nTtlDiscount2;
									nTotalDiffPaid += nTtlDiffPaid2;
									nGroup1DiffPaid += nTtlDiffPaid2;
									nGroup2DiffPaid += nTtlDiffPaid2;
									nTotalPatPaid += nTtlPatPaid2;
									nGroup1PatPaid += nTtlPatPaid2;
									nGroup2PatPaid += nTtlPatPaid2;
							}
					
					}	//end B4, B5



				
			}
			

			
			rs.MoveNext();
		}
		if(!bFound)
		{
			feeList.RemoveAt(nIDX);
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;
		}
		else
		{
			if(nGroup1Cost > 0){
				if(nGroup2Cost > 0 && nGroup1Cost != nGroup2Cost){
					TranslateString(_T("Sub Amount"), tmpStr);
					fee.szGroupID = _T("SubAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup2Cost;
					fee.nInsPaid = nGroup2InsCost;
					fee.nDiscount = nGroup2Discount;
					fee.nDiffPaid = nGroup2DiffPaid;
					fee.nPatPaid = nGroup2PatPaid;
					feeList.Add(fee);
				}

					TranslateString(_T("Total"), tmpStr);
					tmpStr.AppendFormat(_T(" (%d)"), nIndex);
					fee.szGroupID = _T("GrandAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup1Cost;
					fee.nInsPaid = nGroup1InsCost;
					fee.nDiscount = nGroup1Discount;
					fee.nDiffPaid = nGroup1DiffPaid;
					fee.nPatPaid = nGroup1PatPaid;
					feeList.Add(fee);
			}
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

			nIndex++;
		}



		grs.MoveNext();
	}

	nTotalCost  = (nTotalCost);
	nTotalInsCost  = (nTotalInsCost);
	nTotalDiscount  = (nTotalDiscount);
	nTotalDiffPaid  = (nTotalDiffPaid);
	nTotalPatPaid  = (nTotalPatPaid);
	nTotalPayable = ceil(nTotalCost-nTotalDiscount);
	nTotalDiscount = nTotalDiscount;

	TranslateString(_T("Total Amount"), szName);
	fee.szGroupID = _T("TotalAmount");
	fee.szName.Format(_T("%s (%s)"), szName, szDeptID);
	fee.nCost = nTotalCost;
	fee.nInsPaid = nTotalInsCost;
	fee.nDiscount = nTotalDiscount;
	fee.nDiffPaid = nTotalDiffPaid;
	fee.nPatPaid = nTotalPatPaid;
	feeList.Add(fee);
	
	nSumCost += nTotalCost;
	nSumInsCost += nTotalInsCost;
	nSumDiscount += nTotalDiscount;
	nSumDiffPaid += nTotalDiffPaid;
	nSumPatPaid += nTotalPatPaid;


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
				
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
				

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);


				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				CReportItem *obj ;
				obj = rptDetail->GetItem(_T("SubGroupName")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupCost")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupDiscount")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupPatpaid")); if(obj) obj->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);


				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

			}
			else if(szType == _T("GrandAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

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

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemGroup")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				rptDetail->SetValue(_T("5"), _T(""));
				
			}

			else if(szType == _T("SubItem")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) obj->SetItalic(true);
				}

				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemAmount")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), _T(""));
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}

			else if(szType == _T("Dousage")){
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));
				rptDetail->SetValue(_T("usage"), fee.szName);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("TotalAmountLabel"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
				//fee.nPatPaid= fee.nCost-fee.nDiscount;
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("TotalInsUnPaid"), tmpStr);
				}
			}
		}	
	}

	if(nTotalCost != nSumCost){
		CString szName;
		TranslateString(_T("Total Amount"), tmpStr);
		szName.Format(_T("%s (%s)"), tmpStr, szDepts);
			grp = rpt.GetGroupHeader(3);
			rptDetail = rpt.AddDetail(grp);
			rptDetail->SetValue(_T("TotalAmountLabel"), szName);
			FormatCurrency(nSumCost, tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);

			FormatCurrency(nSumInsCost, tmpStr);
			rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

			FormatCurrency(nSumDiscount, tmpStr);
			rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
			FormatCurrency(nSumDiffPaid, tmpStr);
			rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
			FormatCurrency(nSumPatPaid, tmpStr);
			rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
	}

	szSQL.Format(_T(" SELECT hfe_amount as hfe_amount,") \
_T("   hfe_inspaid,") \
_T("   hfe_discount,") \
_T("   hfe_patpaid,") \
_T("   hfe_payment,") \
_T("   hfe_diffcost,") \
_T("   hfe_diffpaid,") \
_T("   hfe_deposit,") \
_T("   hfe_refund,") \
_T("   hfe_freeamount") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfe_invoiceno=%ld"), nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		double nTotalDiffPaid;
		double nTotalPayment;
		double nTotalPatPaid;

		rs.GetValue(_T("hfe_amount"), nTotalCost);
		rs.GetValue(_T("hfe_inspaid"), nTotalInsCost);
		rs.GetValue(_T("hfe_discount"), nTotalDiscount);
		rs.GetValue(_T("hfe_patpaid"), nTotalPatPaid);
		rs.GetValue(_T("hfe_diffcost"), nTotalDiffPaid);
		rs.GetValue(_T("hfe_deposit"), nTotalDeposit);
		rs.GetValue(_T("hfe_refund"), nTotalRefund);
		rs.GetValue(_T("hfe_freeamount"), nTotalFree);
		rs.GetValue(_T("hfe_payment"), nTotalPayment);

		


		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency((nTotalCost), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.0f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		
		FormatCurrency(nTotalInsCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsCost"), tmpStr);


		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsDiscount"), tmpStr);

		FormatCurrency((nTotalInsCost-nTotalDiscount), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsUnPaid"), tmpStr);

		FormatCurrency((nTotalDiffPaid), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiffPaid"), tmpStr);


		FormatCurrency(nTotalPatPaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);



		FormatCurrency((nTotalDeposit), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDeposit"), tmpStr);
		
		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiscount"), tmpStr);

		FormatCurrency(nSumFoodAmount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumFoodAmount"), tmpStr);

		if(nTotalRefund > 0)
		{
		//	FormatCurrency(nTotalRefund, tmpStr);
		//	rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

			FormatCurrency(nTotalRefund, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumRefund"), tmpStr);
		}
		else
		{
			FormatCurrency(nTotalPayment, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

		}
		
	}

	int nInsRate;
	rs.GetValue(_T("disrate"), nInsRate);
	if(nInsRate > 0)
	{
		int nUnRate = 100 - nInsRate;
		if(nUnRate ==0)
			nUnRate = nInsRate;

		tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
		rpt.GetReportFooter()->SetValue(_T("UnRate"), tmpStr);
	}

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);

//	rpt.Print();
	rpt.PrintPreview();

}

void CMainFrame::PrintServiceDischargeReceiptFromInvoice(long nInvoiceNo)
{
	//_msg(_T("In bảng kê dịch vụ ở viện phí"));
	if (m_nInpatient == 0)
		return;

	CReport rpt;
	CString tmpStr, szSQL, szWhere, szAdmitDate, szEndDate,szDepartments, szAddonedayoutofhospital,szNumbertreat;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	int		nDeskNo=0;
	long	nDocumentNo;
	CString szRecvDate;
	CString	szObjectType;
	CString	szDescription;
	CString szPrintMaterialOperation = _T("Y");
	CString	szOutPatient;


	double	nTotalCost=0,				//Tong chi phi
			nTotalInsCost=0,
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatPaid =0,			//Tong benh nhan tra
			nTotalDiffPaid = 0,	//Tong so tra chenh lech
			nTotalPayable=0,
			nTotalDeposit = 0,			//Tong tam ung
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0,			//So tien tra tu tam ung
			nTotalPayment = 0,
			nTotalRefundAmount = 0,
			nTotalOtherSource = 0;
	
	
	double nSumFoodAmount=0;			


	szWhere.AppendFormat(_T(" and hfe_invoiceno=%ld "), nInvoiceNo);

	szSQL.Format(_T(" SELECT *") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT hd_patientno as patientno,") \
				_T("         hd_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hp_birthdate as birthdate,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         extract(year from hp_birthdate) as yearofbirth, ") \
				_T("         Get_Selection_Desc('sys_sex', hp_sex) as sex,") \
				_T("         hp_sex as sex_id,") \
				_T("         hp_ethnic as ethnic,") \
				_T("         Get_Selection_Desc('sys_ethnic', hp_ethnic) as ethnicdesc, ") \
				_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("         hp_workplace as workplace,") \
				_T("         hd_doctor as doctor,") \
				_T("         hd_createdby as createdby,") \
				_T("         hd_icd as icd10,") \
				_T("         hd_diagnostic as diagnostic,") \
				_T("         hd_reldisease as reldisease,") \
				_T("         hd_emergency as emergency, ") \
				_T("         Get_Selection_Desc('hms_result',hd_result) as result,") \
				_T("         hd_admitdate as examdate,") \
				_T("         hd_enddate as enddate,") \
				_T(" hd_outpatient, ") \
				_T("         hcr_recordno as recordno ,") \
				_T("         hcr_admitdate as admitdate,") \
				_T("         hcr_dischargedate as dischargedate,") \
				_T("         hcr_sumtreat as TreatmentDay,") \
				_T("         hcr_mainicd as mainicd ,") \
				_T("         hcr_maindisease as maindisease ,") \
				_T("         hcr_treatdoctor as treatdoctor, ") \
				_T("         hcr_reldisease as ireldisease,") \
				_T("         hcr_suggestion as isuggestion,") \
				_T("         hd_suggestion as esuggestion,") \
				_T("         Get_Selection_Desc('hms_result' ,hcr_result)  as iresult,") \
				_T("         hfe_deptid as deptid,") \
				_T("         hfe_serialno as serialno,") \
				_T("         hfe_receiptno as recvno,") \
				_T("         hfe_date as recvdate, ") \
				_T("         hfe_staff as receiver,") \
				_T("         hfe_desc as reason,") \
				_T("         hfe_amount as cost,") \
				_T("         hfe_discount as discount,") \
				_T("         hfe_patpaid as patpaid,") \
				_T("         hfe_deposit as deposit_amount, ") \
				_T("         hfe_payment as payment_amount,") \
				_T("         hfe_refund as refund_amount, ") \
				_T("         hfe_freeamount as free_amount,") \
				_T("         hfe_eat_amount as food_amount,") \
				_T("         HFE_OTHERPAID as HFE_OTHERPAID,") \
				_T("         row_number() over (partition by hd_docno order by hd_docno) as dn,") \
				_T("		 get_payment_method(hfe_payment_method) as payment_method  ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfe_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_type<>'E' %s ") \
				_T(" ) Tbl") \
				_T(" WHERE dn=1"), m_nDocumentNo, szWhere);
	
	
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		return;
	}

	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatPaid);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("payment_amount"), nTotalPayment);
	rs.GetValue(_T("HFE_OTHERPAID"), nTotalOtherSource);
	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);

	rs.GetValue(_T("food_amount"), nSumFoodAmount);

	rs.GetValue(_T("hd_outpatient"), szOutPatient);
	if(szOutPatient == _T("Y"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_DISCHARGEPAYMENTOUT.RPT"), false) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_DISCHARGEPAYMENT.RPT"), false) )
			return;
	}
	rpt.GetReportHeader()->SetValue(_T("payment_method"), rs.GetValue(_T("payment_method")));
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


	rs.GetValue(_T("recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RecordNo"), tmpStr);
	//rs.GetValue(_T("pname"), tmpStr);
	

	CString szPatientName;
	StringUpper(rs.GetValue(_T("pname")), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("birthdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);

	rs.GetValue(_T("sex_id"), tmpStr);
	if(tmpStr == _T("F"))
		rpt.GetReportHeader()->SetValue(_T("Female"), _T("X"));
	else
		rpt.GetReportHeader()->SetValue(_T("Male"), _T("X"));


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
	

	rs.GetValue(_T("transplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), tmpStr);
	
	
	rs.GetValue(_T("emergency"), tmpStr);
	if (tmpStr == _T("Y") )
		tmpStr = _T("X");
	else
		tmpStr.Empty();

	rpt.GetReportHeader()->SetValue(_T("Emergency"), tmpStr);

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
	
	
	
	CString szDischargeDate;
	rs.GetValue(_T("admitdate"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	rs.GetValue(_T("dischargedate"), tmpStr);
	szDischargeDate = tmpStr;
	
	if(szDischargeDate.Left(4) != _T("1752"))
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	else
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), _T(""));

	rs.GetValue(_T("TreatmentDay"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TreatmentDay"), tmpStr);	

	CString szData;
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));
	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate, yyyymmdd|hhmm,ddmmyyyy|hhmm));
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate1")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate1"),szData);
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate2")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate2"),szData);
	
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
		img->SetFixedHeight(true);
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
	
	
	// Nguoi tiep don
	tmpStr.Empty();
	rs.GetValue(_T("createdby"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("createdby"), GetDoctorName(tmpStr));
	CReportItem *img3 = rpt.GetReportFooter()->GetItem(_T("Signature3"));
	if(img3)
	{
		img3->SetHBITMAP(GetSignatureImage(tmpStr));
		img3->SetFixedHeight(false);
	}	


	CReportSection* rptDetail=NULL;
	CReportSection *grp;
	CRecord grs(&m_db);
	CString szFeeID, szID;
	CString szSubItem, szType;

	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};


	CRecord drs(&m_db);
	CString szDeptID;
	CStringArray arDepartmentList;

	szSQL.Format(_T(" SELECT deptid, admitdate, dischargedate, mainicd, maindisease") \
					_T(" FROM") \
					_T(" (") \
					_T("  select htr_deptid as deptid,") \
					_T("         htr_admitdate as admitdate,") \
					_T("         htr_dischargedate as dischargedate,") \
					_T("         htr_mainicd as mainicd,") \
					_T("         htr_maindisease as maindisease,") \
					_T("         htr_idx as idx") \
					_T("  from hms_treatment_record") \
					_T("  where htr_docno=%ld") \
					_T("  union all") \
					_T("  select hd_admitdept,") \
					_T("         hd_admitdate,") \
					_T("         hd_enddate,") \
					_T("         hd_icd,") \
					_T("         hd_diagnostic,") \
					_T("         0") \
					_T("  from hms_doc") \
					_T("  where hd_docno=%ld") \
					_T(" ) tbl") \
					_T(" WHERE deptid in(select distinct hfe_deptid from hms_fee where hfe_invoiceno=%ld)") \
					_T(" ORDER BY idx"), nDocumentNo, nDocumentNo, nInvoiceNo);

		drs.ExecSQL(szSQL);

		RECEIPTINFO pi;
		CString szDepts;
		szDepts.Empty();
		CString szTreatDeptID;
		while (!drs.IsEOF())
		{
			drs.GetValue(_T("deptid"), szTreatDeptID);
			
			bool bFound = false;
			for (int i =0; i < arDepartmentList.GetCount(); i++)
			{
				tmpStr  = arDepartmentList[i];
				if (szTreatDeptID == tmpStr)
				{
					bFound = true;
					break;
				}
			}
			if(!szDepts.IsEmpty())
				szDepts += _T(",  ");
			szDepts.AppendFormat(_T("%s"), szTreatDeptID);

			if (!bFound)
			{
				arDepartmentList.Add(szTreatDeptID);	
			}
			
			drs.MoveNext();
		}

		rpt.GetReportHeader()->SetValue(_T("Department"), szDepts);	

		double nSumCost=0, nSumInsCost=0, nSumDiscount=0, nSumDiffPaid=0, nSumPatPaid=0;

		szDepts.Empty();


		int nChapter = 0;
		int nCount = 0, nIndex, nChapterID = 0;
		int nItem = 0, nOldItem = 0, nItem2 = 0;
		bool bDeleteParent = false;
		bool bLoadItems = false;
		CString szNewGroup, szOldGroup, szParentGroup;

		
	double nGroup0Cost=0, nGroup0InsCost= 0, nGroup0Discount=0, nGroup0DiffPaid=0, nGroup0PatPaid=0;
	double nGroup1Cost=0, nGroup1InsCost = 0, nGroup1Discount=0, nGroup1DiffPaid = 0, nGroup1PatPaid=0;
	double nGroup2Cost=0, nGroup2InsCost = 0, nGroup2Discount=0, nGroup2DiffPaid = 0, nGroup2PatPaid=0;	
	double nCost=0, nInsCost =0,  nDiscount=0, nDiffPaid  = 0, nPatPaid=0;

	
	nTotalCost = nTotalDiffPaid = nTotalInsCost = nTotalPatPaid = nTotalDiscount =0;

	szSQL.Format(_T("SELECT * FROM hms_fee_type ORDER BY hft_id "));
	grs.ExecSQL(szSQL);
	
	szWhere.Format(_T(" AND hfe_invoiceno=%ld"), nInvoiceNo);

	if (m_szOutpatient != _T("Y")) 
		szWhere.AppendFormat(_T(" and hfe_groupid <>'D0000' "));
	szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X') "));
	szWhere.AppendFormat(_T(" and (hfe_category <> 'Y' or hfe_category is null) "));

	szWhere.AppendFormat(_T(" and hfe_object in(7) "));

	szSQL.Format(_T(" SELECT hfe_typeindex AS typeindex,") \
_T("   hfe_status         AS status,") \
_T("   hfe_type           AS feetype,") \
_T("   hfe_groupid        AS groupid,") \
_T("   hfe_groupid3       AS groupid3,") \
_T("   hfe_itemid         AS itemid,") \
_T("   hfe_name           AS name,") \
_T("   hfe_unit           AS unit,") \
_T("   hfe_hitech         AS hitech,") \
_T("   hfe_unitprice      AS unitprice,") \
_T("   SUM(hfe_qty)       AS qty,") \
_T("   SUM(hfe_cost)      AS cost,") \
_T("   SUM(hfe_patpaid)   AS patpaid") \
_T(" FROM hms_fee_view_dtl_s ") \
_T(" WHERE hfe_docno  =%ld %s ") \
_T(" GROUP BY hfe_typeindex,") \
_T("   hfe_status ,") \
_T("   hfe_type ,") \
_T("   hfe_groupid ,") \
_T("   hfe_groupid3 ,") \
_T("   hfe_itemid ,") \
_T("   hfe_name ,") \
_T("   hfe_unit ,") \
_T("   hfe_hitech ,") \
_T("   hfe_unitprice") \
_T(" ORDER BY hfe_typeindex, hfe_groupid3, hfe_name, hfe_unit, hfe_unitprice"), m_nDocumentNo, szWhere);



_fmsg(_T("%s"), szSQL);		
	
	nIndex = 1;
	int nSubItem = 1;
	int nIDX;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CString szName;
	CString szNewIndex, szOldIndex;
	CString szIndex;
	bool bFound = false;
	bool bInList = false;
	bool bOutList = false;
	bool bKList = false;
	int nSubIndex = 1;
	
	double nTtlCost=0, nTtlInsCost=0, nTtlDiscount=0, nTtlDiffPaid=0, nTtlPatPaid=0;
	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);

	

	while(!grs.IsEOF()){
		tmpStr.Format(_T("%d"), nIndex);
		grs.GetValue(_T("hft_name"), szName);
		grs.GetValue(_T("hft_id"), szNewIndex);
		
		fee.szGroupID = _T("Type");
		fee.szID = tmpStr;
		fee.szName = szName;
		nItem = feeList.Add(fee);
		
		nIDX  = nItem;
		bFound = false;
		nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
		nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

		rs.MoveFirst();
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("typeindex"), tmpStr);
			
			if(tmpStr == szNewIndex){
				bFound = true;		
				rs.GetValue(_T("groupid"), szNewGroup);
				if(szNewGroup != szOldGroup)
				{
					szOldGroup = szNewGroup;
					if(szNewGroup.Left(2) == _T("B1")){
						szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						if(nGroup2Cost > 0){
							TranslateString(_T("Sub Amount"), tmpStr);
							fee.szGroupID = _T("SubAmount");
							fee.szName = tmpStr;
							fee.nCost = nGroup2Cost;
							fee.nInsPaid = nGroup2InsCost;
							fee.nDiscount = nGroup2Discount;
							fee.nDiffPaid = nGroup2DiffPaid;
							fee.nPatPaid = nGroup2PatPaid;
							int nItem2 = feeList.Add(fee);
						}

						szIndex.Format(_T("%d.%d"), nIndex, nSubIndex++);
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = rs2.GetValue(_T("hfg_name"));
						int nItem2 = feeList.Add(fee);
						nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

					}
					
				}

				if(szOldIndex != szNewIndex)
				{
					szOldIndex = szNewIndex;
					bInList = false;
					bOutList = false;
				}


				nInsCost = 0;
				nDiscount = 0;
				rs.GetValue(_T("cost"), nCost);
				rs.GetValue(_T("patpaid"), nPatPaid);
				
				nTotalCost += nCost;
				nGroup1Cost += nCost;
				nGroup2Cost += nCost;

				nTotalInsCost += nInsCost;
				nGroup1InsCost += nInsCost;
				nGroup2InsCost += nInsCost;

				nTotalDiscount += nDiscount;
				nGroup1Discount += nDiscount;
				nGroup2Discount += nDiscount;

				nTotalDiffPaid += nDiffPaid;
				nGroup1DiffPaid += nDiffPaid;
				nGroup2DiffPaid += nDiffPaid;

				nTotalPatPaid += nPatPaid;
				nGroup1PatPaid += nPatPaid;
				nGroup2PatPaid += nPatPaid;

				fee.szID.Empty();
				fee.szGroupID = _T("Item");
				fee.szName = rs.GetValue(_T("name"));
				fee.szUnit = rs.GetValue(_T("unit"));
				fee.nCost = nCost;
				fee.nInsPaid = nInsCost;
				fee.nDiscount = nDiscount;
				fee.nQuantity = str2float(rs.GetValue(_T("qty")));
				fee.nPrice = str2double(rs.GetValue(_T("unitprice")));
				fee.nInsPrice = 0;
				fee.nDiffPaid = nDiffPaid;
				fee.nPatPaid = nPatPaid;
				feeList.Add(fee);

				if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5") ){
/*
					CString szItemID;
					rs.GetValue(_T("itemid"), szItemID);
					
					szSQL.Format(_T("SELECT hfe_itemid, hfe_desc, hfe_quantity, hfe_unitprice, hfe_cost, hfe_discount, hfe_diffcost, hfe_patpaid ") \
								_T("FROM hms_fee ") \
								_T("WHERE hfe_docno=%ld and hfe_type='V' and hfe_unit='%s' ORDER BY hfe_itemid DESC "), 
								nDocumentNo, szItemID);
					rsl.ExecSQL(szSQL);
					nCost = nInsCost = nPatPaid  = 0;
					rsl.MoveFirst();
					while(!rsl.IsEOF())
					{
								CString szItemID;
								rsl.GetValue(_T("hfe_itemid"), szItemID);
								
								fee.szID = _T("*");
								fee.szGroupID = _T("Item");
								fee.szName = rsl.GetValue(_T("hfe_desc"));
								fee.nQuantity = str2double(rsl.GetValue(_T("hfe_quantity")));
								fee.nCost = 0;
								fee.nDiscount = 0;
								fee.nPrice = str2double(rsl.GetValue(_T("hfe_unitprice")));

								if(m_szObjectType == _T("S"))
								{
									rsl.GetValue(_T("hfe_patpaid"), nPatPaid);
									fee.nCost = nPatPaid;
									fee.nDiffPaid = 0;
									fee.nPatPaid = nPatPaid;

									nCost = nPatPaid;
									nDiscount =0;
									nInsCost =0;
									feeList.Add(fee);
									nTtlCost += nCost;
									nTtlPatPaid += nPatPaid;
									
								}
								else
								{
									rsl.GetValue(_T("hfe_cost"), nCost);
									rsl.GetValue(_T("hfe_discount"), nDiscount);
									rsl.GetValue(_T("hfe_diffcost"), nDiffPaid);
									//rsl.GetValue(_T("hfe_patpaid"), nPatPaid);
									nPatPaid =0;
									fee.nDiffPaid = nDiffPaid;
									fee.nPatPaid = nPatPaid;
									fee.nCost = nCost;
									fee.nDiscount = nDiscount;
									nInsCost = nCost;
									feeList.Add(fee);
									nTtlDiffPaid += nDiffPaid;
									nTtlCost += nCost;
									nTtlInsCost += nInsCost;
									nTtlDiscount += nDiscount;
									nTtlPatPaid += nPatPaid;
								}
								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
									nTotalCost += nCost;
									
									nGroup1Cost += nCost;
									nGroup2Cost += nCost;
									nTotalInsCost += nInsCost;
									nGroup1InsCost += nInsCost;
									nGroup2InsCost += nInsCost;
									nTotalDiscount += nDiscount;
									nGroup1Discount += nDiscount;
									nGroup2Discount += nDiscount;
									nTotalDiffPaid += nDiffPaid;
									nGroup1DiffPaid += nDiffPaid;
									nGroup2DiffPaid += nDiffPaid;
									nTotalPatPaid += nPatPaid;
									nGroup1PatPaid += nPatPaid;
									nGroup2PatPaid += nPatPaid;
								}
						rsl.MoveNext();

					}
*/

				}	//end B4, B5



			}
			rs.MoveNext();
		}
		if(!bFound)
		{
			feeList.RemoveAt(nIDX);
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;
		}
		else
		{
			if(nGroup1Cost > 0){
				if(nGroup2Cost > 0 && nGroup1Cost != nGroup2Cost){
					TranslateString(_T("Sub Amount"), tmpStr);
					fee.szGroupID = _T("SubAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup2Cost;
					fee.nInsPaid = nGroup2InsCost;
					fee.nDiscount = nGroup2Discount;
					fee.nDiffPaid = nGroup2DiffPaid;
					fee.nPatPaid = nGroup2PatPaid;
					feeList.Add(fee);
				}

					TranslateString(_T("Total"), tmpStr);
					tmpStr.AppendFormat(_T(" (%d)"), nIndex);
					fee.szGroupID = _T("GrandAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup1Cost;
					fee.nInsPaid = nGroup1InsCost;
					fee.nDiscount = nGroup1Discount;
					fee.nDiffPaid = nGroup1DiffPaid;
					fee.nPatPaid = nGroup1PatPaid;
					feeList.Add(fee);
			}
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

			nIndex++;
		}



		grs.MoveNext();
	}

	/*nTotalCost  = (nTotalCost);
	nTotalInsCost  = (nTotalInsCost);
	nTotalDiscount  = (nTotalDiscount);
	nTotalDiffPaid  = (nTotalDiffPaid);
	nTotalPatPaid  = (nTotalPatPaid);*/
	nTotalPayable = ceil(nTotalCost-nTotalDiscount);
	
	TranslateString(_T("Total Amount"), szName);
	fee.szGroupID = _T("TotalAmount");
	fee.szName.Format(_T("%s "), szName);
	fee.nCost = nTotalCost;
	fee.nInsPaid = nTotalInsCost;
	fee.nDiscount = nTotalDiscount;
	fee.nDiffPaid = nTotalDiffPaid;
	fee.nPatPaid = nTotalPatPaid;
	feeList.Add(fee);
	
	nSumCost += nTotalCost;
	nSumInsCost += nTotalInsCost;
	nSumDiscount += nTotalDiscount;
	nSumDiffPaid += nTotalDiffPaid;
	nSumPatPaid += nTotalPatPaid;


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
				
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
				

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);


				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				CReportItem *obj ;
				obj = rptDetail->GetItem(_T("SubGroupName")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupCost")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupDiscount")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupPatpaid")); if(obj) obj->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);


				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

			}
			else if(szType == _T("GrandAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

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

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				
			}
			else if(szType == _T("SubItemGroup")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				rptDetail->SetValue(_T("5"), _T(""));
				
			}

			else if(szType == _T("SubItem")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) obj->SetItalic(true);
				}

				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemAmount")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), _T(""));
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}

			else if(szType == _T("Dousage")){
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));
				rptDetail->SetValue(_T("usage"), fee.szName);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("TotalAmountLabel"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
				//fee.nPatPaid= fee.nCost-fee.nDiscount;
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("TotalInsUnPaid"), tmpStr);
				}
			}
		}	
	

	if(nTotalCost != nSumCost){
		CString szName;
		TranslateString(_T("Total Amount"), tmpStr);
		szName.Format(_T("%s"), tmpStr);
			grp = rpt.GetGroupHeader(3);
			rptDetail = rpt.AddDetail(grp);
			rptDetail->SetValue(_T("TotalAmountLabel"), szName);
			FormatCurrency(nSumCost, tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);

			FormatCurrency(nSumInsCost, tmpStr);
			rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

			FormatCurrency(nSumDiscount, tmpStr);
			rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
			FormatCurrency(nSumDiffPaid, tmpStr);
			rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
			FormatCurrency(nSumPatPaid, tmpStr);
			rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
	}


	szSQL.Format(_T(" SELECT hfe_amount as hfe_amount,") \
_T("   hfe_inspaid,") \
_T("   hfe_discount,") \
_T("   hfe_patpaid,") \
_T("   hfe_payment,") \
_T("   hfe_diffcost,") \
_T("   hfe_diffpaid,") \
_T("   hfe_deposit,") \
_T("   hfe_refund,") \
_T("   hfe_freeamount") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfe_invoiceno=%ld"), nInvoiceNo);
/*
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		double nTotalDiffPaid;
		double nTotalPayment;
		double nTotalPatPaid;

		rs.GetValue(_T("hfe_amount"), nTotalCost);
		rs.GetValue(_T("hfe_inspaid"), nTotalInsCost);
		rs.GetValue(_T("hfe_discount"), nTotalDiscount);
		rs.GetValue(_T("hfe_patpaid"), nTotalPatPaid);
		rs.GetValue(_T("hfe_diffcost"), nTotalDiffPaid);
		rs.GetValue(_T("hfe_deposit"), nTotalDeposit);
		rs.GetValue(_T("hfe_refund"), nTotalRefund);
		rs.GetValue(_T("hfe_freeamount"), nTotalFree);
		rs.GetValue(_T("hfe_payment"), nTotalPayment);
	}
		
*/
	double nDepositAmount = 0;
	szSQL.Format(_T("select sum(hfe_patpaid) as deposit_amount from hms_fee where hfe_invoiceno=%ld and hfe_object<>7 and hfe_status='P' and (hfe_category<>'Y' or hfe_category is null)  "), nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("deposit_amount"), nDepositAmount);
	}
	nTotalDeposit -= nDepositAmount;

		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency((nTotalCost), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.0f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		
		FormatCurrency(nTotalInsCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsCost"), tmpStr);


		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsDiscount"), tmpStr);

		FormatCurrency(nTotalPatPaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsUnPaid"), tmpStr);

		FormatCurrency((nTotalDiffPaid), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiffPaid"), tmpStr);


		//FormatCurrency(nTotalPatPaid, tmpStr);
		//rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);

		FormatCurrency((nTotalDeposit), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDeposit"), tmpStr);
		
		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiscount"), tmpStr);

		FormatCurrency(nSumFoodAmount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumFoodAmount"), tmpStr);

		//FormatCurrency((nTotalOtherSource), tmpStr);
		//rpt.GetReportFooter()->SetValue(_T("OtherSource"), tmpStr);

		CRecord rsloc(&m_db);
	//Lấy ra phần trả lại
		szSQL.Format(_T(" select hfe_amount from hms_fee_refund") \
					_T(" WHERE hfe_docno =%ld AND hfe_refidx=%ld AND hfe_desc <> 'Hoàn trả bệnh nhân thanh toán ra viện'"), m_nDocumentNo, nInvoiceNo);
					rsloc.ExecSQL(szSQL);
					//_msg(_T("%s"), szSQL);
		
		if(!rsloc.IsEOF())
		{
				rsloc.GetValue(_T("hfe_amount"), nTotalRefundAmount);			
		}
		//FormatCurrency(nTotalPatPaid-nTotalRefundAmount-nTotalOtherSource, tmpStr);
	//FormatCurrency(nTotalPatPaid-nTotalRefundAmount-nTotalOtherSource, tmpStr);

		FormatCurrency((nTotalRefundAmount), tmpStr);
	    rpt.GetReportFooter()->SetValue(_T("SumRefundAmount"), tmpStr);		

		FormatCurrency((nTotalOtherSource), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("OtherSource"), tmpStr);	

		//_msg(_T("%ld"), nTotalOtherSource);

		FormatCurrency(nTotalPatPaid - nTotalOtherSource - nTotalRefundAmount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);


		/*if(nTotalRefund > 0)
		{

			FormatCurrency(nTotalRefund + nTotalRefundAmount, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumRefund"), tmpStr);
		}
		else
		{
			FormatCurrency(nTotalPayment - nTotalRefundAmount, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

		}*/
		if(nTotalRefund> 0)
		{
			FormatCurrency(nTotalRefund + nTotalRefundAmount, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumRefund"), tmpStr);
		}

		else if (nTotalPayment<nTotalRefundAmount)
		{
			FormatCurrency(nTotalRefundAmount - nTotalPayment, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumRefund"), tmpStr);
		}
		else
		{
			FormatCurrency(nTotalPayment, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

		}

		
	
	rpt.PrintPreview();
}

void CMainFrame::PrintAllServiceDischargeReceipt(long nDocumentNo)
{
	if (m_nInpatient == 0)
		return;

	CReport rpt;
	CString tmpStr, szSQL, szWhere, szAdmitDate, szEndDate,szDepartments, szAddonedayoutofhospital,szNumbertreat;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	int		nDeskNo=0;
	CString szRecvDate;
	CString	szObjectType;
	CString	szDescription;
	CString szPrintMaterialOperation = _T("Y");
	

	double	nTotalCost=0,				//Tong chi phi
			nTotalInsCost=0,
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatPaid =0,			//Tong benh nhan tra
			nTotalDiffPaid = 0,	//Tong so tra chenh lech
			nTotalPayable=0,
			nTotalDeposit = 0,			//Tong tam ung
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0;			//So tien tra tu tam ung
	
	
	double nSumFoodAmount=0;			


	szWhere.AppendFormat(_T(" and hfe_invoiceno > 0 and hfe_status ='P' "));

	szSQL.Format(_T(" SELECT *") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT hd_patientno as patientno,") \
				_T("         hd_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hp_birthdate as birthdate,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         extract(year from hp_birthdate) as yearofbirth, ") \
				_T("         Get_Selection_Desc('sys_sex', hp_sex) as sex,") \
				_T("         hp_sex as sex_id,") \
				_T("         hp_ethnic as ethnic,") \
				_T("         Get_Selection_Desc('sys_ethnic', hp_ethnic) as ethnicdesc, ") \
				_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("         hp_workplace as workplace,") \
				_T("         hd_doctor as doctor,") \
				_T("         hd_createdby as createdby,") \
				_T("         hd_icd as icd10,") \
				_T("         hd_diagnostic as diagnostic,") \
				_T("         hd_reldisease as reldisease,") \
				_T("         hd_emergency as emergency, ") \
				_T("         Get_Selection_Desc('hms_result',hd_result) as result,") \
				_T("         hd_admitdate as examdate,") \
				_T("         hd_enddate as enddate,") \
				_T("         hcr_recordno as recordno ,") \
				_T("         hcr_admitdate as admitdate,") \
				_T("         hcr_dischargedate as dischargedate,") \
				_T("         hcr_sumtreat as TreatmentDay,") \
				_T("         hcr_mainicd as mainicd ,") \
				_T("         hcr_maindisease as maindisease ,") \
				_T("         hcr_treatdoctor as treatdoctor, ") \
				_T("         hcr_reldisease as ireldisease,") \
				_T("         hcr_suggestion as isuggestion,") \
				_T("         hd_suggestion as esuggestion,") \
				_T("         Get_Selection_Desc('hms_result' ,hcr_result)  as iresult,") \
				_T("         hfe_deptid as deptid,") \
				_T("         hfe_serialno as serialno,") \
				_T("         hfe_receiptno as recvno,") \
				_T("         hfe_date as recvdate, ") \
				_T("         hfe_staff as receiver,") \
				_T("         hfe_desc as reason,") \
				_T("         hfe_amount as cost,") \
				_T("         hfe_discount as discount,") \
				_T("         hfe_patpaid as patpaid,") \
				_T("         hfe_deposit as deposit_amount, ") \
				_T("         0 as deposit_payable,") \
				_T("         hfe_refund as refund_amount, ") \
				_T("         hfe_freeamount as free_amount,") \
				_T("         hfe_eat_amount as food_amount,") \
				_T("         row_number() over (partition by hd_docno order by hd_docno) as dn") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfe_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_type<>'E' %s ") \
				_T(" ) Tbl") \
				_T(" WHERE dn=1"), nDocumentNo, szWhere);
	
	
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		return;
	}

	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatPaid);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("deposit_payable"), nDepositPayable);
	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);

	rs.GetValue(_T("food_amount"), nSumFoodAmount);



	if(!rpt.Init(_T("Reports/HMS/HF_DISCHARGEPAYMENTALL.RPT"), false) )
			return;

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
//	tmpStr.Format(_T("%ld"), nInvoiceNo);
//	rpt.GetReportHeader()->SetValue(_T("InvoiceNo"), tmpStr);


	CString szDate;
	tmpStr = GetSysDateTime();
	szDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), szDate);


	rs.GetValue(_T("recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RecordNo"), tmpStr);
	//rs.GetValue(_T("pname"), tmpStr);
	

	CString szPatientName;
	StringUpper(rs.GetValue(_T("pname")), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("birthdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);

	rs.GetValue(_T("sex_id"), tmpStr);
	if(tmpStr == _T("F"))
		rpt.GetReportHeader()->SetValue(_T("Female"), _T("X"));
	else
		rpt.GetReportHeader()->SetValue(_T("Male"), _T("X"));


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
	

	rs.GetValue(_T("transplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), tmpStr);
	
	
	rs.GetValue(_T("emergency"), tmpStr);
	if (tmpStr == _T("Y") )
		tmpStr = _T("X");
	else
		tmpStr.Empty();

	rpt.GetReportHeader()->SetValue(_T("Emergency"), tmpStr);

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
	
	
	
	CString szDischargeDate;
	rs.GetValue(_T("admitdate"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	rs.GetValue(_T("dischargedate"), tmpStr);
	szDischargeDate = tmpStr;
	
	if(szDischargeDate.Left(4) != _T("1752"))
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	else
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), _T(""));

	rs.GetValue(_T("TreatmentDay"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TreatmentDay"), tmpStr);	

	CString szData;
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));
	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate, yyyymmdd|hhmm,ddmmyyyy|hhmm));
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate1")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate1"),szData);
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate2")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate2"),szData);
	
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
		img->SetFixedHeight(true);
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
	
	
	// Nguoi tiep don
	tmpStr.Empty();
	rs.GetValue(_T("createdby"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("createdby"), GetDoctorName(tmpStr));
	CReportItem *img3 = rpt.GetReportFooter()->GetItem(_T("Signature3"));
	if(img3)
	{
		img3->SetHBITMAP(GetSignatureImage(tmpStr));
		img3->SetFixedHeight(false);
	}	


	CReportSection* rptDetail=NULL;
	CReportSection *grp;
	CRecord grs(&m_db);
	CString szFeeID, szID;
	CString szSubItem, szType;

	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};


	CRecord drs(&m_db);
	CString szDeptID;
	CStringArray arDepartmentList;

	szSQL.Format(_T(" SELECT deptid, admitdate, dischargedate, mainicd, maindisease") \
					_T(" FROM") \
					_T(" (") \
					_T("  select htr_deptid as deptid,") \
					_T("         htr_admitdate as admitdate,") \
					_T("         htr_dischargedate as dischargedate,") \
					_T("         htr_mainicd as mainicd,") \
					_T("         htr_maindisease as maindisease,") \
					_T("         htr_idx as idx") \
					_T("  from hms_treatment_record") \
					_T("  where htr_docno=%ld") \
					_T("  union all") \
					_T("  select hd_admitdept,") \
					_T("         hd_admitdate,") \
					_T("         hd_enddate,") \
					_T("         hd_icd,") \
					_T("         hd_diagnostic,") \
					_T("         0") \
					_T("  from hms_doc") \
					_T("  where hd_docno=%ld") \
					_T(" ) tbl") \
					_T(" WHERE deptid in(select distinct hfe_deptid from hms_fee where hfe_invoiceno > 0 and hfe_status ='P' )") \
					_T(" ORDER BY idx"), nDocumentNo, nDocumentNo);

		drs.ExecSQL(szSQL);

		RECEIPTINFO pi;
		CString szDepts;
		szDepts.Empty();
		CString szTreatDeptID;
		while (!drs.IsEOF())
		{
			drs.GetValue(_T("deptid"), szTreatDeptID);
			
			bool bFound = false;
			for (int i =0; i < arDepartmentList.GetCount(); i++)
			{
				tmpStr  = arDepartmentList[i];
				if (szTreatDeptID == tmpStr)
				{
					bFound = true;
					break;
				}
			}
			if(!szDepts.IsEmpty())
				szDepts += _T(",  ");
			szDepts.AppendFormat(_T("%s"), szTreatDeptID);

			if (!bFound)
			{
				arDepartmentList.Add(szTreatDeptID);	
			}
			
			drs.MoveNext();
		}

		rpt.GetReportHeader()->SetValue(_T("Department"), szDepts);	

		double nSumCost=0, nSumInsCost=0, nSumDiscount=0, nSumDiffPaid=0, nSumPatPaid=0;

		szDepts.Empty();


		int nChapter = 0;
		int nCount = 0, nIndex, nChapterID = 0;
		int nItem = 0, nOldItem = 0, nItem2 = 0;
		bool bDeleteParent = false;
		bool bLoadItems = false;
		CString szNewGroup, szOldGroup, szParentGroup;

		
	double nGroup0Cost=0, nGroup0InsCost= 0, nGroup0Discount=0, nGroup0DiffPaid=0, nGroup0PatPaid=0;
	double nGroup1Cost=0, nGroup1InsCost = 0, nGroup1Discount=0, nGroup1DiffPaid = 0, nGroup1PatPaid=0;
	double nGroup2Cost=0, nGroup2InsCost = 0, nGroup2Discount=0, nGroup2DiffPaid = 0, nGroup2PatPaid=0;	
	double nCost=0, nInsCost =0,  nDiscount=0, nDiffPaid  = 0, nPatPaid=0;

	
	nTotalCost = nTotalDiffPaid = nTotalInsCost = nTotalPatPaid = nTotalDiscount =0;

	szSQL.Format(_T("SELECT * FROM hms_fee_type ORDER BY hft_id "));
	grs.ExecSQL(szSQL);
	
	szWhere.Format(_T(" AND hfe_invoiceno > 0 and hfe_status in ('P', 'R') "));

	//if (m_szOutpatient != _T("Y")) 
	//	szWhere.AppendFormat(_T(" and hfe_groupid <>'D0000' "));
	szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X') "));
	//szWhere.AppendFormat(_T(" and hfe_category<>'Y' "));
	szWhere.AppendFormat(_T(" and NVL(hfe_category,'X') <> 'Y'  "));


	szSQL.Format(_T(" SELECT hfe_typeindex AS typeindex,") \
_T("   hfe_status         AS status,") \
_T("   hfe_type           AS feetype,") \
_T("   hfe_groupid        AS groupid,") \
_T("   hfe_groupid3       AS groupid3,") \
_T("   hfe_itemid         AS itemid,") \
_T("   hfe_name           AS name,") \
_T("   hfe_unit           AS unit,") \
_T("   hfe_hitech         AS hitech,") \
_T("   hfe_inlist         AS inlist,") \
_T("   hfe_unitprice      AS unitprice,") \
_T("   SUM(hfe_qty)       AS qty,") \
_T("   SUM(hfe_cost)      AS cost,") \
_T("   SUM(hfe_inscost)   AS inscost,") \
_T("   SUM(hfe_discount)  AS discount,") \
_T("   SUM(hfe_diffcost)  AS DiffPaid,") \
_T("   SUM(hfe_patdebt)   AS patdebt,") \
_T("   SUM(hfe_copayment) AS copayment,") \
_T("   SUM(hfe_patpaid)   AS patpaid") \
_T(" FROM hms_fee_view_dtl") \
_T(" WHERE hfe_docno  =%ld %s ") \
_T(" GROUP BY hfe_typeindex,") \
_T("   hfe_status ,") \
_T("   hfe_type ,") \
_T("   hfe_groupid ,") \
_T("   hfe_groupid3 ,") \
_T("   hfe_itemid ,") \
_T("   hfe_name ,") \
_T("   hfe_unit ,") \
_T("   hfe_hitech ,") \
_T("   hfe_inlist,") \
_T("   hfe_unitprice") \
_T(" ORDER BY hfe_typeindex, hfe_groupid3, hfe_name, hfe_unit, hfe_unitprice"), nDocumentNo, szWhere);



//_msg(_T("%s"), szSQL);		
	
	nIndex = 1;
	int nSubItem = 1;
	int nIDX;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CString szName;
	CString szNewIndex, szOldIndex;
	CString szIndex;
	bool bFound = false;
	bool bInList = false;
	bool bOutList = false;
	bool bKList = false;
	int nSubIndex = 1;
	
	double nTtlCost=0, nTtlInsCost=0, nTtlDiscount=0, nTtlDiffPaid=0, nTtlPatPaid=0;
	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);

	

	while(!grs.IsEOF()){
		tmpStr.Format(_T("%d"), nIndex);
		grs.GetValue(_T("hft_name"), szName);
		grs.GetValue(_T("hft_id"), szNewIndex);
		
		fee.szGroupID = _T("Type");
		fee.szID = tmpStr;
		fee.szName = szName;
		nItem = feeList.Add(fee);
		
		nIDX  = nItem;
		bFound = false;
		nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
		nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

		rs.MoveFirst();
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("typeindex"), tmpStr);
			
			if(tmpStr == szNewIndex){
				bFound = true;		
				rs.GetValue(_T("groupid"), szNewGroup);
				if(szNewGroup != szOldGroup)
				{
					szOldGroup = szNewGroup;
					if(szNewGroup.Left(2) == _T("B1")){
						szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						if(nGroup2Cost > 0){
							TranslateString(_T("Sub Amount"), tmpStr);
							fee.szGroupID = _T("SubAmount");
							fee.szName = tmpStr;
							fee.nCost = nGroup2Cost;
							fee.nInsPaid = nGroup2InsCost;
							fee.nDiscount = nGroup2Discount;
							fee.nDiffPaid = nGroup2DiffPaid;
							fee.nPatPaid = nGroup2PatPaid;
							int nItem2 = feeList.Add(fee);
						}

						szIndex.Format(_T("%d.%d"), nIndex, nSubIndex++);
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = rs2.GetValue(_T("hfg_name"));
						int nItem2 = feeList.Add(fee);
						nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

					}
					
				}

				if(szOldIndex != szNewIndex)
				{
					szOldIndex = szNewIndex;
					bInList = false;
					bOutList = false;
				}



				rs.GetValue(_T("cost"), nCost);
				rs.GetValue(_T("inscost"), nInsCost);
				rs.GetValue(_T("discount"), nDiscount);
				rs.GetValue(_T("DiffPaid"), nDiffPaid);
				rs.GetValue(_T("copayment"), nPatPaid);
				
				nTotalCost += nCost;
				nGroup1Cost += nCost;
				nGroup2Cost += nCost;

				nTotalInsCost += nInsCost;
				nGroup1InsCost += nInsCost;
				nGroup2InsCost += nInsCost;

				nTotalDiscount += nDiscount;
				nGroup1Discount += nDiscount;
				nGroup2Discount += nDiscount;

				nTotalDiffPaid += nDiffPaid;
				nGroup1DiffPaid += nDiffPaid;
				nGroup2DiffPaid += nDiffPaid;

				nTotalPatPaid += nPatPaid;
				nGroup1PatPaid += nPatPaid;
				nGroup2PatPaid += nPatPaid;

				fee.szID.Empty();
				fee.szGroupID = _T("Item");
				fee.szName = rs.GetValue(_T("name"));
				fee.szUnit = rs.GetValue(_T("unit"));
				fee.nCost = nCost;
				fee.nInsPaid = nInsCost;
				fee.nDiscount = nDiscount;
				fee.nQuantity = str2float(rs.GetValue(_T("qty")));
				fee.nPrice = str2double(rs.GetValue(_T("unitprice")));
				fee.nInsPrice = str2double(rs.GetValue(_T("insprice")));
				fee.nDiffPaid = nDiffPaid;
				fee.nPatPaid = nPatPaid;
				feeList.Add(fee);

				if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5") ){


				}	//end B4, B5



			}
			rs.MoveNext();
		}
		if(!bFound)
		{
			feeList.RemoveAt(nIDX);
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;
		}
		else
		{
			if(nGroup1Cost > 0){
				if(nGroup2Cost > 0 && nGroup1Cost != nGroup2Cost){
					TranslateString(_T("Sub Amount"), tmpStr);
					fee.szGroupID = _T("SubAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup2Cost;
					fee.nInsPaid = nGroup2InsCost;
					fee.nDiscount = nGroup2Discount;
					fee.nDiffPaid = nGroup2DiffPaid;
					fee.nPatPaid = nGroup2PatPaid;
					feeList.Add(fee);
				}

					TranslateString(_T("Total"), tmpStr);
					tmpStr.AppendFormat(_T(" (%d)"), nIndex);
					fee.szGroupID = _T("GrandAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup1Cost;
					fee.nInsPaid = nGroup1InsCost;
					fee.nDiscount = nGroup1Discount;
					fee.nDiffPaid = nGroup1DiffPaid;
					fee.nPatPaid = nGroup1PatPaid;
					feeList.Add(fee);
			}
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

			nIndex++;
		}



		grs.MoveNext();
	}

	nTotalCost  = (nTotalCost);
	nTotalInsCost  = (nTotalInsCost);
	nTotalDiscount  = (nTotalDiscount);
	nTotalDiffPaid  = (nTotalDiffPaid);
	nTotalPatPaid  = (nTotalPatPaid);
	nTotalPayable = ceil(nTotalCost-nTotalDiscount);
	nTotalDiscount = nTotalDiscount;

	TranslateString(_T("Total Amount"), szName);
	fee.szGroupID = _T("TotalAmount");
	fee.szName.Format(_T("%s "), szName);
	fee.nCost = nTotalCost;
	fee.nInsPaid = nTotalInsCost;
	fee.nDiscount = nTotalDiscount;
	fee.nDiffPaid = nTotalDiffPaid;
	fee.nPatPaid = nTotalPatPaid;
	feeList.Add(fee);
	
	nSumCost += nTotalCost;
	nSumInsCost += nTotalInsCost;
	nSumDiscount += nTotalDiscount;
	nSumDiffPaid += nTotalDiffPaid;
	nSumPatPaid += nTotalPatPaid;


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
				
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
				

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);


				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				CReportItem *obj ;
				obj = rptDetail->GetItem(_T("SubGroupName")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupCost")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupDiscount")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupPatpaid")); if(obj) obj->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);


				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

			}
			else if(szType == _T("GrandAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

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

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemGroup")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				rptDetail->SetValue(_T("5"), _T(""));
				
			}

			else if(szType == _T("SubItem")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) obj->SetItalic(true);
				}

				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemAmount")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), _T(""));
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}

			else if(szType == _T("Dousage")){
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));
				rptDetail->SetValue(_T("usage"), fee.szName);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("TotalAmountLabel"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
				//fee.nPatPaid= fee.nCost-fee.nDiscount;
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("TotalInsUnPaid"), tmpStr);
				}
			}
		}	
	

	if(nTotalCost != nSumCost){
		CString szName;
		TranslateString(_T("Total Amount"), tmpStr);
		szName.Format(_T("%s"), tmpStr);
			grp = rpt.GetGroupHeader(3);
			rptDetail = rpt.AddDetail(grp);
			rptDetail->SetValue(_T("TotalAmountLabel"), szName);
			FormatCurrency(nSumCost, tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);

			FormatCurrency(nSumInsCost, tmpStr);
			rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

			FormatCurrency(nSumDiscount, tmpStr);
			rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
			FormatCurrency(nSumDiffPaid, tmpStr);
			rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
			FormatCurrency(nSumPatPaid, tmpStr);
			rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
	}

	szSQL.Format(_T(" SELECT coalesce(sum(hfe_amount),0) as amount,") \
_T("   coalesce(sum(hfe_inspaid), 0) as inspaid,") \
_T("   coalesce(sum(hfe_discount), 0) as discount,") \
_T("   coalesce(sum(hfe_patpaid), 0) as patpaid,") \
_T("   coalesce(sum(hfe_payment), 0) as payment,") \
_T("   coalesce(sum(hfe_diffcost), 0) as diffcost,") \
_T("   coalesce(sum(hfe_deposit), 0) as deposit,") \
_T("   coalesce(sum(hfe_refund), 0) as refund,") \
_T("   coalesce(sum(hfe_freeamount), 0) as freeamount ") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfe_docno=%ld and hfe_invoiceno > 0 and hfe_status='P' "), nDocumentNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		double nTotalDiffPaid;
		double nTotalPayment;
		double nTotalPatPaid;

		rs.GetValue(_T("amount"), nTotalCost);
		rs.GetValue(_T("inspaid"), nTotalInsCost);
		rs.GetValue(_T("discount"), nTotalDiscount);
		rs.GetValue(_T("patpaid"), nTotalPatPaid);
		rs.GetValue(_T("diffcost"), nTotalDiffPaid);
		rs.GetValue(_T("deposit"), nTotalDeposit);
		rs.GetValue(_T("refund"), nTotalRefund);
		rs.GetValue(_T("freeamount"), nTotalFree);
		rs.GetValue(_T("payment"), nTotalPayment);		


		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency((nTotalCost), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.0f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		
		FormatCurrency(nTotalInsCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsCost"), tmpStr);

		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsDiscount"), tmpStr);

		FormatCurrency(nTotalPatPaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsUnPaid"), tmpStr);

		FormatCurrency((nTotalDiffPaid), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiffPaid"), tmpStr);


		CRecord rsloc(&m_db);
	//Lấy ra phần trả lại không thực hiện
		double nSumRefundAmount;
		szSQL.Format(_T(" select SUM(rfl.hfe_cost) as hfe_amount from HMS_FEE_REFUNDLINE rfl LEFT JOIN HMS_FEE_REFUND rf ON (rfl.hfe_docno = rf.hfe_docno AND rfl.hfe_invoiceno = rf.hfe_invoiceno)") \
					_T(" WHERE rf.hfe_docno =%ld AND rf.hfe_desc <> 'Hoàn trả bệnh nhân thanh toán ra viện'"), m_nDocumentNo);
					rsloc.ExecSQL(szSQL);
					//_msg(_T("%s"), szSQL);
		
		if(!rsloc.IsEOF())
		{
				rsloc.GetValue(_T("hfe_amount"), nSumRefundAmount);
				FormatCurrency(nSumRefundAmount, tmpStr);
				rpt.GetReportFooter()->SetValue(_T("SumRefundAmount"), tmpStr);
		}


		FormatCurrency(nTotalPatPaid - nTotalFree - nSumRefundAmount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);

		FormatCurrency((nTotalDeposit), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDeposit"), tmpStr);
		
		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiscount"), tmpStr);

		FormatCurrency(nSumFoodAmount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumFoodAmount"), tmpStr);

		if(nTotalRefund > 0)
		{
		//	FormatCurrency(nTotalRefund, tmpStr);
		//	rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

			FormatCurrency(nTotalRefund, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumRefund"), tmpStr);
		}
		else
		{
			FormatCurrency(nTotalPayment, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

		}
		
	}

	//FormatCurrency(nTotalPatPaid - nTotalFree, tmpStr);
	//rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);


	rpt.PrintPreview();
}


void CMainFrame::PrintInsuranceDischargeReceiptFromInvoice(long nInvoiceNo)
{
	if (m_nInpatient == 0)
		return;

	CReport rpt;
	CString tmpStr, szSQL, szWhere, szAdmitDate, szEndDate,szDepartments, szAddonedayoutofhospital,szNumbertreat;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	int		nDeskNo=0;
	long	nDocumentNo;
	CString szRecvDate;
	CString	szObjectType;
	CString	szDescription;
	CString szPrintMaterialOperation = _T("Y");
	CString	szOutPatient;


	double	nTotalCost=0,				//Tong chi phi
			nTotalInsCost=0,
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatPaid =0,			//Tong benh nhan tra
			nTotalDiffPaid = 0,	//Tong so tra chenh lech
			nTotalPayable=0,
			nTotalDeposit = 0,			//Tong tam ung
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0,			//So tien tra tu tam ung
			nTotalPayment = 0;
	
	
	double nSumFoodAmount=0;			


	szWhere.AppendFormat(_T(" and hfe_invoiceno=%ld "), nInvoiceNo);

	szSQL.Format(_T(" SELECT *") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT hd_patientno as patientno,") \
				_T("         hd_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hp_birthdate as birthdate,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         extract(year from hp_birthdate) as yearofbirth, ") \
				_T("         Get_Selection_Desc('sys_sex', hp_sex) as sex,") \
				_T("         hp_sex as sex_id,") \
				_T("         hp_ethnic as ethnic,") \
				_T("         Get_Selection_Desc('sys_ethnic', hp_ethnic) as ethnicdesc, ") \
				_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("         hp_workplace as workplace,") \
				_T("		 hd_rank as rank, ") \
				_T("		 get_selection_desc('hms_rank', hd_rank) as rankname, ") \
				_T("         hd_doctor as doctor,") \
				_T("         hd_createdby as createdby,") \
				_T("         hd_icd as icd10,") \
				_T("         hd_diagnostic as diagnostic,") \
				_T("         hd_reldisease as reldisease,") \
				_T("         hd_xobject as xobject, ") \
				_T("         hd_xcardno as xcardno, ") \
				_T("         hd_xissuedate as xissuedate, ") \
				_T("         hd_emergency as emergency, ") \
				_T("         Get_Selection_Desc('hms_result',hd_result) as result,") \
				_T("         hd_admitdate as examdate,") \
				_T("         hd_enddate as enddate,") \
				_T("	hd_outpatient, ") \
				_T("         hcr_recordno as recordno ,") \
				_T("         hcr_admitdate as admitdate,") \
				_T("         hcr_dischargedate as dischargedate,") \
				_T("         hcr_sumtreat as TreatmentDay,") \
				_T("         hcr_mainicd as mainicd ,") \
				_T("         hcr_maindisease as maindisease ,") \
				_T("         hcr_treatdoctor as treatdoctor, ") \
				_T("         hcr_reldisease as ireldisease,") \
				_T("         hcr_suggestion as isuggestion,") \
				_T("         hd_suggestion as esuggestion,") \
				_T("         Get_Selection_Desc('hms_result' ,hcr_result)  as iresult,") \
				_T("         Hms_GetObjectType(hd_object) as objecttype, ") \
				_T("         cast(hd_disrate as integer) as disrate, ") \
				_T("         hd_insline as insline, ") \
				_T("         hd_insregdate as insregdate, ") \
				_T("         hd_transplace as transplace, ") \
				_T("         hc_cardno as cardno, ") \
				_T("         hc_regdate as regdate, ") \
				_T("         hc_expdate as expdate, ") \
				_T("         hc_regcode as regcode, ") \
				_T("         HMS_GETHOSPITALNAME(hc_regcode) as regplace, ") \
				_T("         hfe_deptid as deptid,") \
				_T("         hfe_serialno as serialno,") \
				_T("         hfe_receiptno as recvno,") \
				_T("         hfe_date as recvdate, ") \
				_T("         hfe_staff as receiver,") \
				_T("         hfe_desc as reason,") \
				_T("         hfe_amount as cost,") \
				_T("         hfe_discount as discount,") \
				_T("         hfe_patpaid as patpaid,") \
				_T("         hfe_deposit as deposit_amount, ") \
				_T("         hfe_payment as payment_amount,") \
				_T("         hfe_refund as refund_amount, ") \
				_T("         hfe_freeamount as free_amount,") \
				_T("         hfe_eat_amount as food_amount,") \
				_T("         row_number() over (partition by hd_docno order by hd_docno) as dn") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfe_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld %s ") \
				_T(" ) Tbl") \
				_T(" WHERE dn=1"), m_nDocumentNo, szWhere);
	
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		return;
	}

	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatPaid);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("paymennt_amount"), nTotalPayment);
	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);

	rs.GetValue(_T("food_amount"), nSumFoodAmount);

	rs.GetValue(_T("objecttype"), szObjectType);
	
	rs.GetValue(_T("htr_outpatient"), szOutPatient);

	if (szOutPatient == _T("Y"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSDISCHARGEPAYMENTOUT.RPT"), true) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSDISCHARGEPAYMENT.RPT"), true) )
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


	rs.GetValue(_T("recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RecordNo"), tmpStr);
	//rs.GetValue(_T("pname"), tmpStr);
	

	CString szPatientName;
	StringUpper(rs.GetValue(_T("pname")), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("birthdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);

	rs.GetValue(_T("sex_id"), tmpStr);
	if(tmpStr == _T("F"))
		rpt.GetReportHeader()->SetValue(_T("Female"), _T("X"));
	else
		rpt.GetReportHeader()->SetValue(_T("Male"), _T("X"));


	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);
	
	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);


	rs.GetValue(_T("rankname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RankName"), tmpStr);

	CString szAddress;
	rs.GetValue(_T("detailaddress"), tmpStr);
	szAddress = tmpStr;
	rs.GetValue(_T("address"), tmpStr);
	if(!szAddress.IsEmpty())
		szAddress += _T(" - ");
	szAddress += tmpStr;
	rpt.GetReportHeader()->SetValue(_T("Address"), szAddress);
	

	rs.GetValue(_T("transplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), tmpStr);
	

	rs.GetValue(_T("rankame"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Rank"), tmpStr);
	
	rs.GetValue(_T("objecttype"), szObjectType);


	
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr.Left(15));
	if(!tmpStr.IsEmpty())
	{
		rpt.GetReportHeader()->SetValue(_T("HasCardNo"), _T("X"));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("NoCardNo"), _T("X"));
	}

	rs.GetValue(_T("disrate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), tmpStr);
	

	rs.GetValue(_T("insline"), tmpStr);	
	if (tmpStr == _T("Y"))
	{		
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T(""));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T("X"));
	}
	
	rs.GetValue(_T("insregdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InsRegDate"), CDate::Convert(tmpStr));


	rs.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);


	CString szRegCode;
	rs.GetValue(_T("regcode"), szRegCode);
	rpt.GetReportHeader()->SetValue(_T("RegCode"), szRegCode);

	CReportItem *obj = rpt.GetReportHeader()->GetItem(_T("InsuranceCompany"));
	if (obj)
	{
		CString insname;
		CRecord rsx(&m_db);
		
		tmpStr.Format(_T("select sp_name as insname ") \
			          _T("from sys_prov left join hms_hospital on(hh_provid=sp_id or hh_newprov_id=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if (!rsx.IsEOF())
		{
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);
		}
	}

	rs.GetValue(_T("emergency"), tmpStr);
	if (tmpStr == _T("Y") )
		tmpStr = _T("X");
	else
		tmpStr.Empty();

	rpt.GetReportHeader()->SetValue(_T("Emergency"), tmpStr);

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
	
	
	
	CString szDischargeDate;
	rs.GetValue(_T("admitdate"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	rs.GetValue(_T("dischargedate"), tmpStr);
	szDischargeDate = tmpStr;
	
	if(szDischargeDate.Left(4) != _T("1752"))
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	else
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), _T(""));

	rs.GetValue(_T("TreatmentDay"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TreatmentDay"), tmpStr);	

	CString szData;
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));
	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate, yyyymmdd|hhmm,ddmmyyyy|hhmm));
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate1")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate1"),szData);
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate2")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate2"),szData);
	
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
		img->SetFixedHeight(true);
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
	
	
	// Nguoi tiep don
	tmpStr.Empty();
	rs.GetValue(_T("createdby"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("createdby"), GetDoctorName(tmpStr));
	CReportItem *img3 = rpt.GetReportFooter()->GetItem(_T("Signature3"));
	if(img3)
	{
		img3->SetHBITMAP(GetSignatureImage(tmpStr));
		img3->SetFixedHeight(false);
	}	


	CReportSection* rptDetail=NULL;
	CReportSection *grp;
	CRecord grs(&m_db);
	CString szFeeID, szID;
	CString szSubItem, szType;

	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};


	CRecord drs(&m_db);
	CString szDeptID;
		
		CArray<RECEIPTINFO, RECEIPTINFO& > payInfo;

		szSQL.Format(_T(" SELECT deptid, admitdate, dischargedate, mainicd, maindisease") \
					_T(" FROM") \
					_T(" (") \
					_T("  select htr_deptid as deptid,") \
					_T("         htr_admitdate as admitdate,") \
					_T("         htr_dischargedate as dischargedate,") \
					_T("         htr_mainicd as mainicd,") \
					_T("         htr_maindisease as maindisease,") \
					_T("         htr_idx as idx") \
					_T("  from hms_treatment_record") \
					_T("  where htr_docno=%ld") \
					_T("  union all") \
					_T("  select hd_admitdept,") \
					_T("         hd_admitdate,") \
					_T("         hd_enddate,") \
					_T("         hd_icd,") \
					_T("         hd_diagnostic,") \
					_T("         0") \
					_T("  from hms_doc") \
					_T("  where hd_docno=%ld") \
					_T(" ) tbl") \
					_T(" WHERE deptid in(select distinct hfe_deptid from hms_fee where hfe_invoiceno=%ld)") \
					_T(" ORDER BY idx"), nDocumentNo, nDocumentNo, nInvoiceNo);

		drs.ExecSQL(szSQL);

		RECEIPTINFO pi;
		CString szDepts;
		szDepts.Empty();

		while (!drs.IsEOF())
		{
			drs.GetValue(_T("deptid"), tmpStr);
			
			bool bFound = false;
			int i = 0;
			for (i =0; i < payInfo.GetCount(); i++)
			{
				pi = payInfo[i];
				if (pi.deptid == tmpStr)
				{
					bFound = true;
					break;
				}
			}
			pi.deptid = tmpStr;
			if(!szDepts.IsEmpty())
				szDepts += _T(",  ");
			szDepts.AppendFormat(_T("%s"), tmpStr);

			drs.GetValue(_T("dischargedate"), pi.dischargedate);
			drs.GetValue(_T("mainicd"), pi.mainicd);
			drs.GetValue(_T("maindisease"), pi.maindisease);

			if (bFound)
			{
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


		int nInsRate;
	rs.GetValue(_T("disrate"), nInsRate);
	if(nInsRate > 0)
	{
		int nUnRate = 100 - nInsRate;
		if(nUnRate ==0)
			nUnRate = nInsRate;

		tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
		rpt.GetReportFooter()->SetValue(_T("UnRate"), tmpStr);
	}



		double nSumCost=0, nSumInsCost=0, nSumDiscount=0, nSumDiffPaid=0, nSumPatPaid=0;

		szDepts.Empty();


		int nChapter = 0;
		int nCount = 0, nIndex, nChapterID = 0;
		int nItem = 0, nOldItem = 0, nItem2 = 0;
		bool bDeleteParent = false;
		bool bLoadItems = false;
		CString szNewGroup, szOldGroup, szParentGroup;

		
	double nGroup0Cost=0, nGroup0InsCost= 0, nGroup0Discount=0, nGroup0DiffPaid=0, nGroup0PatPaid=0;
	double nGroup1Cost=0, nGroup1InsCost = 0, nGroup1Discount=0, nGroup1DiffPaid = 0, nGroup1PatPaid=0;
	double nGroup2Cost=0, nGroup2InsCost = 0, nGroup2Discount=0, nGroup2DiffPaid = 0, nGroup2PatPaid=0;	
	double nCost=0, nInsCost =0,  nDiscount=0, nDiffPaid  = 0, nPatPaid=0;

	
	nTotalCost = nTotalDiffPaid = nTotalInsCost = nTotalPatPaid = nTotalDiscount =0;

	szSQL.Format(_T("SELECT * FROM hms_fee_type ORDER BY hft_id "));
	grs.ExecSQL(szSQL);
	
	szWhere.Format(_T(" AND (hfe_invoiceno=%ld ) "), nInvoiceNo);

	if (m_szOutpatient != _T("Y")) 
		szWhere.AppendFormat(_T(" and hfe_groupid <>'D0000' "));
	szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X','A') "));
//	szWhere.AppendFormat(_T(" and hfe_subgroup='XX' "));
	szWhere.AppendFormat(_T(" and (hfe_category <> 'Y' or hfe_category is null) "));

	szWhere.AppendFormat(_T(" and hfe_object not in(7) "));

	szSQL.Format(_T(" SELECT hfe_typeindex AS typeindex,") \
_T("   hfe_status         AS status,") \
_T("   hfe_type           AS feetype,") \
_T("   hfe_groupid        AS groupid,") \
_T("   hfe_groupid3       AS groupid3,") \
_T("   hfe_itemid         AS itemid,") \
_T("   hfe_name           AS name,") \
_T("   hfe_unit           AS unit,") \
_T("   hfe_hitech         AS hitech,") \
_T("   hfe_inlist         AS inlist,") \
_T("   hfe_unitprice      AS unitprice,") \
_T("   SUM(hfe_qty)       AS qty,") \
_T("   SUM(hfe_cost)      AS cost,") \
_T("   SUM(hfe_discount)  AS discount,") \
_T("   SUM(hfe_diffcost)  AS DiffPaid,") \
_T("   SUM(hfe_patdebt)   AS patdebt,") \
_T("   SUM(hfe_copayment) AS copayment,") \
_T("   SUM(hfe_patpaid)   AS patpaid") \
_T(" FROM hms_fee_view_dtl_i ") \
_T(" WHERE hfe_docno  =%ld %s ") \
_T(" GROUP BY hfe_typeindex,") \
_T("   hfe_status ,") \
_T("   hfe_type ,") \
_T("   hfe_groupid ,") \
_T("   hfe_groupid3 ,") \
_T("   hfe_itemid ,") \
_T("   hfe_name ,") \
_T("   hfe_unit ,") \
_T("   hfe_hitech ,") \
_T("   hfe_inlist,") \
_T("   hfe_unitprice") \
_T(" ORDER BY hfe_typeindex, hfe_groupid3, hfe_inlist, hfe_name, hfe_unit, hfe_unitprice"), m_nDocumentNo, szWhere);



_fmsg(_T("%s"), szSQL);		
	
	nIndex = 1;
	int nSubItem = 1;
	int nIDX;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CString szName;
	CString szNewIndex, szOldIndex;
	CString szIndex;
	bool bFound = false;
	bool bInList = false;
	bool bOutList = false;
	bool bKList = false;
	int nSubIndex = 1;
	int nLineIndex=0;
	
	double nTtlCost=0, nTtlInsCost=0, nTtlDiscount=0, nTtlDiffPaid=0, nTtlPatPaid=0;
	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);

	

	while(!grs.IsEOF()){
		tmpStr.Format(_T("%d"), nIndex);
		grs.GetValue(_T("hft_name"), szName);
		grs.GetValue(_T("hft_id"), szNewIndex);
		
		fee.szGroupID = _T("Type");
		fee.szID = tmpStr;
		fee.szName = szName;
		nItem = feeList.Add(fee);
		
		nIDX  = nItem;
		bFound = false;
		nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
		nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

		rs.MoveFirst();
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("typeindex"), tmpStr);
			
			if(tmpStr == szNewIndex){
				bFound = true;		
				rs.GetValue(_T("groupid"), szNewGroup);
				if(szNewGroup != szOldGroup)
				{
					
					szOldGroup = szNewGroup;
					if(szNewGroup.Left(2) == _T("B1")){
						szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						if(nGroup2Cost > 0){
							TranslateString(_T("Sub Amount"), tmpStr);
							fee.szGroupID = _T("SubAmount");
							fee.szName = tmpStr;
							fee.nCost = nGroup2Cost;
							fee.nInsPaid = nGroup2InsCost;
							fee.nDiscount = nGroup2Discount;
							fee.nDiffPaid = nGroup2DiffPaid;
							fee.nPatPaid = nGroup2PatPaid;
							int nItem2 = feeList.Add(fee);
						}

						szIndex.Format(_T("%d.%d"), nIndex, nSubIndex++);
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = rs2.GetValue(_T("hfg_name"));
						int nItem2 = feeList.Add(fee);
						nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

					}

					
					
				}

				if(szOldIndex != szNewIndex)
				{
					szOldIndex = szNewIndex;
					bInList = false;
					bOutList = false;
				}

				

				if(szNewIndex == _T("800")){
					

					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;

						int nItem2 = feeList.Add(fee);

					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(bInList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}

					if(tmpStr == _T("3") && !bKList){
						bKList = true;
						if(bInList && bOutList)
							szIndex.Format(_T("%d.3"), nIndex);	
						else if(bInList || bOutList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						TranslateString(_T("Inside cancer list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					

				}

				if(szNewIndex == _T("900")){
					
					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(!bInList)
							szIndex.Format(_T("%d.1"), nIndex);
						else
							szIndex.Format(_T("%d.2"), nIndex);

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
				}

				



				rs.GetValue(_T("cost"), nCost);
				rs.GetValue(_T("inscost"), nInsCost);
				rs.GetValue(_T("discount"), nDiscount);
				rs.GetValue(_T("DiffPaid"), nDiffPaid);
				rs.GetValue(_T("copayment"), nPatPaid);
				
				if(nInsCost <=0 )
				{
				//	nDiffPaid = nCost;
				//	nCost = 0;
				}
				nTotalCost += nCost;
				nGroup1Cost += nCost;
				nGroup2Cost += nCost;

				nTotalInsCost += nInsCost;
				nGroup1InsCost += nInsCost;
				nGroup2InsCost += nInsCost;

				nTotalDiscount += nDiscount;
				nGroup1Discount += nDiscount;
				nGroup2Discount += nDiscount;

				nTotalDiffPaid += nDiffPaid;
				nGroup1DiffPaid += nDiffPaid;
				nGroup2DiffPaid += nDiffPaid;

				nTotalPatPaid += nPatPaid;
				nGroup1PatPaid += nPatPaid;
				nGroup2PatPaid += nPatPaid;


				fee.szID.Format(_T("%d"), nLineIndex++);
				fee.szGroupID = _T("Item");
				fee.szName = rs.GetValue(_T("name"));
				fee.szUnit = rs.GetValue(_T("unit"));
				fee.nCost = nCost;
				fee.nInsPaid = nInsCost;
				fee.nDiscount = nDiscount;
				fee.nQuantity = str2float(rs.GetValue(_T("qty")));
				fee.nPrice = str2double(rs.GetValue(_T("unitprice")));
				fee.nInsPrice = str2double(rs.GetValue(_T("insprice")));
				fee.nDiffPaid = nDiffPaid;
				fee.nPatPaid = nPatPaid;
				feeList.Add(fee);

				if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5") ){
/*
					double nOperationCost, nOperationInsCost, nOperationDiscount, nOperationDiffCost, nOperationPatPaid;
					
					bool bHasInOperation=false;
					bool bHasOutsideInsurance = false;

					nOperationCost = nCost;
					nOperationInsCost = nInsCost;
					nOperationDiscount = nDiscount;
					nOperationDiffCost = nDiffPaid;
					nOperationPatPaid = nPatPaid;

					CString szItemID;
					rs.GetValue(_T("itemid"), szItemID);
					CRecord rsi(&m_db);
					
					szSQL.Format(_T("SELECT hfe_itemid, hfe_desc, hfe_quantity, hfe_unitprice, hfe_cost, hfe_discount, hfe_diffcost, hfe_patpaid ") \
								_T("FROM hms_fee ") \
								_T("WHERE hfe_docno=%ld and hfe_type='V' and hfe_unit='%s' ORDER BY hfe_itemid DESC "), 
								nDocumentNo, szItemID);
					rsi.ExecSQL(szSQL);

					while(!rsi.IsEOF()){
						rsi.GetValue(_T("hfe_itemid"), tmpStr);
						if(tmpStr == _T("VT000001")){
							bHasInOperation = true;
						}
						if(tmpStr == _T("VT000002")){
							bHasOutsideInsurance = true;
						}
						rsi.MoveNext();
					}



					if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
					{
						szSQL.Format(_T(" SELECT hfe_group, ") \
								_T(" 		hfe_desc as name,") \
								_T(" hfe_unit as unit, ") \
								_T(" hfe_category, ") \
								_T(" 		sum(hfe_quantity) as qty,") \
								_T(" 		hfe_insprice as unitprice,") \
								_T(" 		sum(hfe_inspaid) as cost,") \
								_T(" 		case when hfe_category<>'Y' then sum(hfe_discount) else 0 end as discount,") \
								_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
								_T(" 		sum(hfe_cost-hfe_discount-hfe_diffcost) as patpaid") \
								_T(" FROM hms_fee_view ") \
								_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
								_T(" WHERE hfe_docno=%ld  and hfe_cost > 0  and hfe_class='I'  ") \
								_T(" and hfe_subgroup='%s'   ") \
								_T(" GROUP BY hfg_type_id, hfe_group, hfe_desc, hfe_unit, hfe_insprice, hfe_category, hfe_status ") \
								_T(" ORDER BY hfe_category DESC, hfg_type_id, hfe_group,  name, unitprice"), 
								nDocumentNo, szItemID);
					}
					else
					{
						szSQL.Format(_T(" SELECT hfe_group, ") \
								_T(" 		hfe_desc as name,") \
								_T(" hfe_unit as unit, ") \
								_T(" hfe_category, ") \
								_T(" 		sum(hfe_quantity) as qty,") \
								_T(" 		hfe_unitprice as unitprice,") \
								_T(" 		sum(hfe_cost) as cost,") \
								_T(" 		case when hfe_category<>'Y' then sum(hfe_discount) else 0 end as discount,") \
								_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
								_T(" 		sum(hfe_cost-hfe_discount-hfe_diffcost) as patpaid") \
								_T(" FROM hms_fee_view ") \
								_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
								_T(" WHERE hfe_docno=%ld  and hfe_cost > 0  and hfe_class='I'  ") \
								_T(" and hfe_subgroup='%s'   ") \
								_T(" GROUP BY hfg_type_id, hfe_group, hfe_desc, hfe_unit, hfe_unitprice, hfe_category, hfe_status") \
								_T(" ORDER BY hfe_category DESC, hfg_type_id, hfe_group,  name, unitprice"), 
								nDocumentNo, szItemID);

					}
					

							rsl.ExecSQL(szSQL);
							
							CString szCategory;
							nCost = nInsCost = nPatPaid = nPatPaid = 0;
							nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;
							double nTtlCost2 = 0, nTtlInsCost2=0, nTtlDiscount2 = 0, nTtlDiffPaid2 = 0, nTtlPatPaid2 = 0;
							bool bInOperation=false, bOutOperation=false;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("cost"),nCost);
								rsl.GetValue(_T("inscost"),nInsCost);
								rsl.GetValue(_T("discount"), nDiscount);
								rsl.GetValue(_T("DiffPaid"), nDiffPaid);
								rsl.GetValue(_T("patpaid"), nPatPaid);
								if(nDiscount == 0)
								{
								//	nCost = 0;
									//nPatPaid = 0;
									//nDiffPaid = 0;
								}


								
								rsl.GetValue(_T("hfe_category"), szCategory);
								if(szCategory == _T("Y") && !bInOperation)
								{
									bInOperation = true;
									CString szLabel;
									TranslateString(_T("Inside operation"), szLabel);
									fee.szGroupID = _T("SubItemGroup");
									fee.szID = _T("*");
									fee.szName = szLabel;
									fee.szUnit.Empty();
									fee.nCost = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = 0;
									fee.nDiffPaid = 0;
									fee.nPatDebt = 0;
									feeList.Add(fee);


								}
								if(szCategory != _T("Y") && !bOutOperation)
								{
									CString szLabel;

									bOutOperation = true;

									if(nTtlCost > 0){
										TranslateString(_T("Amount"), tmpStr);
										fee.szGroupID = _T("SubItemAmount");
										fee.szID.Empty();
										fee.szName.Format(_T("   %s"), tmpStr);;
										fee.nCost = nTtlCost;
										fee.nDiscount = nTtlDiscount;
										fee.nDiffPaid = nTtlDiffPaid;
										fee.nPatPaid = nTtlPatPaid;
										feeList.Add(fee);

										nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;

									}


									

									TranslateString(_T("Outside operation"), szLabel);

									fee.szGroupID = _T("SubItemGroup");
									fee.szID = _T("*");
									fee.szName = szLabel;
									fee.nCost = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = 0;
									fee.nDiffPaid = 0;
									fee.nPatDebt = 0;

									feeList.Add(fee);


								}


								nTtlCost += nCost;
								nTtlInsCost += nInsCost;
								nTtlDiscount += nDiscount;
								nTtlDiffPaid += nDiffPaid;
								nTtlPatPaid += nPatPaid;




								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
									nTtlCost2 += nCost;
									nTtlInsCost2 += nInsCost;
									nTtlDiscount2 += nDiscount;
									nTtlDiffPaid2 += nDiffPaid;
									nTtlPatPaid2 += nPatPaid;
								}

								
								if(szCategory != _T("Y") && !bHasOutsideInsurance){
									nTotalCost += nCost;
									
									nGroup1Cost += nCost;
									nGroup2Cost += nCost;
									nTotalInsCost += nInsCost;
									nGroup1InsCost += nInsCost;
									nGroup2InsCost += nInsCost;
									nTotalDiscount += nDiscount;
									nGroup1Discount += nDiscount;
									nGroup2Discount += nDiscount;
									nTotalDiffPaid += nDiffPaid;
									nGroup1DiffPaid += nDiffPaid;
									nGroup2DiffPaid += nDiffPaid;
									nTotalPatPaid += nPatPaid;
									nGroup1PatPaid += nPatPaid;
									nGroup2PatPaid += nPatPaid;

								}

								rsl.GetValue(_T("name"), tmpStr);
								fee.szID.Empty();
								fee.szName.Format(_T("      %s"), tmpStr);
								fee.szUnit = rsl.GetValue(_T("unit"));
								fee.szGroupID = _T("SubItem");
								fee.nQuantity = str2double(rsl.GetValue(_T("qty")));
								fee.nPrice = str2double(rsl.GetValue(_T("unitprice")));
								fee.nCost = str2double(rsl.GetValue(_T("cost")));
								fee.nInsPaid = str2double(rsl.GetValue(_T("inscost")));
								fee.nDiscount = str2double(rsl.GetValue(_T("discount")));
								fee.nDiffPaid = str2double(rsl.GetValue(_T("diffpaid")));
								fee.nPatPaid = str2double(rsl.GetValue(_T("patpaid")));
								feeList.Add(fee);
								rsl.MoveNext();
							}
							
							if(nTtlCost > 0){
								TranslateString(_T("Amount"), tmpStr);
								fee.szGroupID = _T("SubItemAmount");
								fee.szID.Empty();
								fee.szName.Format(_T("   %s"), tmpStr);;
								fee.szUnit.Empty();
								
								fee.nCost = nTtlCost;
								fee.nDiscount = nTtlDiscount;
								fee.nDiffPaid = nTtlDiffPaid;
								fee.nPatPaid = nTtlPatPaid;
								feeList.Add(fee);

								nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;

							}

							bool bOutsideOperation = false;

							
							nCost = nInsCost = nPatPaid  = 0;
							rsi.MoveFirst();
							while(!rsi.IsEOF())
							{
								CString szItemID;
								rsi.GetValue(_T("hfe_itemid"), szItemID);
								
								fee.szID = _T("*");
								fee.szGroupID = _T("Item");
								fee.szName = rsi.GetValue(_T("hfe_desc"));
								fee.nQuantity = str2double(rsi.GetValue(_T("hfe_quantity")));
								fee.nCost = 0;
								fee.nDiscount = 0;
								fee.nPrice = str2double(rsi.GetValue(_T("hfe_unitprice")));

								if(m_szObjectType == _T("S"))
								{
									rsi.GetValue(_T("hfe_patpaid"), nPatPaid);
									fee.nCost = nPatPaid;
									fee.nDiffPaid = 0;
									fee.nPatPaid = nPatPaid;

									nCost = nPatPaid;
									nDiscount =0;
									nInsCost =0;
									feeList.Add(fee);
									nTtlCost += nCost;
									nTtlPatPaid += nPatPaid;
									
								}
								else
								{
									rsi.GetValue(_T("hfe_cost"), nCost);
									rsi.GetValue(_T("hfe_discount"), nDiscount);
									rsi.GetValue(_T("hfe_diffcost"), nDiffPaid);
									//rsi.GetValue(_T("hfe_patpaid"), nPatPaid);
									nPatPaid =0;
									fee.nDiffPaid = nDiffPaid;
									fee.nPatPaid = nPatPaid;
									fee.nCost = nCost;
									fee.nDiscount = nDiscount;
									nInsCost = nCost;
									feeList.Add(fee);
									nTtlDiffPaid += nDiffPaid;
									nTtlCost += nCost;
									nTtlInsCost += nInsCost;
									nTtlDiscount += nDiscount;
									nTtlPatPaid += nPatPaid;
								}
								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
									nTotalCost += nCost;
									
									nGroup1Cost += nCost;
									nGroup2Cost += nCost;
									nTotalInsCost += nInsCost;
									nGroup1InsCost += nInsCost;
									nGroup2InsCost += nInsCost;
									nTotalDiscount += nDiscount;
									nGroup1Discount += nDiscount;
									nGroup2Discount += nDiscount;
									nTotalDiffPaid += nDiffPaid;
									nGroup1DiffPaid += nDiffPaid;
									nGroup2DiffPaid += nDiffPaid;
									nTotalPatPaid += nPatPaid;
									nGroup1PatPaid += nPatPaid;
									nGroup2PatPaid += nPatPaid;
								}

								bOutsideOperation = true;

								rsi.MoveNext();

							}

*/					
					}	//end B4, B5
			}
			else
				nLineIndex = 1;
			rs.MoveNext();
		}
		if(!bFound)
		{
			feeList.RemoveAt(nIDX);
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;
		}
		else
		{
			if(nGroup1Cost > 0){
				if(nGroup2Cost > 0 && nGroup1Cost != nGroup2Cost){
					TranslateString(_T("Sub Amount"), tmpStr);
					fee.szGroupID = _T("SubAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup2Cost;
					fee.nInsPaid = nGroup2InsCost;
					fee.nDiscount = nGroup2Discount;
					fee.nDiffPaid = nGroup2DiffPaid;
					fee.nPatPaid = nGroup2PatPaid;
					feeList.Add(fee);
				}

					TranslateString(_T("Total"), tmpStr);
					tmpStr.AppendFormat(_T(" (%d)"), nIndex);
					fee.szGroupID = _T("GrandAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup1Cost;
					fee.nInsPaid = nGroup1InsCost;
					fee.nDiscount = nGroup1Discount;
					fee.nDiffPaid = nGroup1DiffPaid;
					fee.nPatPaid = nGroup1PatPaid;
					feeList.Add(fee);
			}
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

			nIndex++;
		}



		grs.MoveNext();
	}

	nTotalCost  = ceil(nTotalCost);
	if(szObjectType == _T("I") || szObjectType == _T("C"))
	{
		nTotalInsCost  = ceil(nTotalCost);
	}
	nTotalDiscount  = (nTotalDiscount);
	nTotalDiffPaid  = (nTotalDiffPaid);
	nTotalPatPaid  = (nTotalPatPaid);
	nTotalPayable = ceil(nTotalCost-nTotalDiscount);
	nTotalDiscount = nTotalDiscount;

	TranslateString(_T("Total Amount"), szName);
	fee.szGroupID = _T("TotalAmount");
	fee.szName.Format(_T("%s "), szName);
	fee.nCost = nTotalCost;
	fee.nInsPaid = nTotalInsCost;
	fee.nDiscount = nTotalDiscount;
	fee.nDiffPaid = nTotalDiffPaid;
	fee.nPatPaid = nTotalPatPaid;
	feeList.Add(fee);
	
	nSumCost += nTotalCost;
	nSumInsCost += nTotalInsCost;
	nSumDiscount += nTotalDiscount;
	nSumDiffPaid += nTotalDiffPaid;
	nSumPatPaid += nTotalPatPaid;


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
				
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
				

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);


				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				CReportItem *obj ;
				obj = rptDetail->GetItem(_T("SubGroupName")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupCost")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupDiscount")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupPatpaid")); if(obj) obj->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);


				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

			}
			else if(szType == _T("GrandAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

			}

			else if(szType == _T("Item")){
				rptDetail = rpt.AddDetail();
				CReportItem* obj  = rptDetail->GetItem(_T("1"));
				if(obj){
					
					obj->SetTextAlign(ES_RIGHT);
				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemGroup")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				rptDetail->SetValue(_T("5"), _T(""));
				
			}

			else if(szType == _T("SubItem")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) obj->SetItalic(true);
				}

				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemAmount")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), _T(""));
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}

			else if(szType == _T("Dousage")){
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));
				rptDetail->SetValue(_T("usage"), fee.szName);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("TotalAmountLabel"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
				//fee.nPatPaid= fee.nCost-fee.nDiscount;
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("TotalInsUnPaid"), tmpStr);
				}
			}
		}	
	

	if(nTotalCost != nSumCost){
		CString szName;
		TranslateString(_T("Total Amount"), tmpStr);
		szName.Format(_T("%s"), tmpStr);
			grp = rpt.GetGroupHeader(3);
			rptDetail = rpt.AddDetail(grp);
			rptDetail->SetValue(_T("TotalAmountLabel"), szName);
			FormatCurrency(nSumCost, tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);

			FormatCurrency(nSumInsCost, tmpStr);
			rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

			FormatCurrency(nSumDiscount, tmpStr);
			rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
			FormatCurrency(nSumDiffPaid, tmpStr);
			rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
			FormatCurrency(nSumPatPaid, tmpStr);
			rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
	}



	

	
	szSQL.Format(_T(" SELECT hfe_amount as hfe_amount,") \
_T("   hfe_inspaid,") \
_T("   hfe_discount,") \
_T("   hfe_patpaid,") \
_T("   hfe_payment,") \
_T("   hfe_diffcost,") \
_T("   hfe_diffpaid,") \
_T("   hfe_deposit,") \
_T("   hfe_refund,") \
_T("   hfe_freeamount") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfe_invoiceno=%ld"), nInvoiceNo);
/*
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		

		rs.GetValue(_T("hfe_amount"), nTotalCost);
		rs.GetValue(_T("hfe_inspaid"), nTotalInsCost);
		rs.GetValue(_T("hfe_discount"), nTotalDiscount);
		rs.GetValue(_T("hfe_patpaid"), nTotalPatPaid);
		rs.GetValue(_T("hfe_diffcost"), nTotalDiffPaid);
		rs.GetValue(_T("hfe_deposit"), nTotalDeposit);
		rs.GetValue(_T("hfe_refund"), nTotalRefund);
		rs.GetValue(_T("hfe_freeamount"), nTotalFree);
		rs.GetValue(_T("hfe_payment"), nTotalPayment);
		
		nTotalPayable = nTotalPatPaid+nTotalDiffPaid;

	}
	else
*/

	{
		nTotalCost += nTotalDiffPaid;
		szSQL.Format(_T("SELECT sum(hfe_amount-hfe_patpaid) as amount FROM hms_fee_deposit WHERE hfe_docno=%ld and hfe_status<>'C' "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
		rs.GetValue(_T("amount"), nTotalDeposit);
		nTotalPayable = nTotalPatPaid+nTotalDiffPaid;
	//	nTotalPayment = nTotalPayable-(nTotalDeposit+nTotalFree);
		
		nTotalRefund = 0;
		if(nTotalPayment < 0)
		{
			nTotalRefund = -1*nTotalPayment;
			nTotalPayment = 0;
		}
		//_msg(_T("%f:%f"), nTotalPayment, nTotalRefund);
	}

	rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency((nTotalCost), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.0f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		
		FormatCurrency(nTotalInsCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsCost"), tmpStr);


		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsDiscount"), tmpStr);

		FormatCurrency(nTotalPatPaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsUnPaid"), tmpStr);

		FormatCurrency((nTotalDiffPaid), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiffPaid"), tmpStr);


		FormatCurrency(nTotalPayable, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);



		FormatCurrency((nTotalDeposit), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDeposit"), tmpStr);
		
		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiscount"), tmpStr);

		FormatCurrency(nSumFoodAmount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumFoodAmount"), tmpStr);

		if(nTotalRefund > 0)
		{
		//	FormatCurrency(nTotalRefund, tmpStr);
		//	rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

			FormatCurrency(nTotalRefund, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumRefund"), tmpStr);
		}
		else
		{
			FormatCurrency(nTotalPayment, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

		}

	

//	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
//	ExecSQL(szSQL);

//	rpt.Print();
	rpt.PrintPreview();

}







void CMainFrame::PrintPolicyDischargeReceiptFromInvoice(long nInvoiceNo)
{
	if (m_nInpatient == 0)
		return;

	CReport rpt;
	CString tmpStr, szSQL, szWhere, szAdmitDate, szEndDate,szDepartments, szAddonedayoutofhospital,szNumbertreat;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	int		nDeskNo=0;
	long	nDocumentNo;
	CString szRecvDate;
	CString	szObjectType;
	CString	szDescription;
	CString szPrintMaterialOperation = _T("Y");
	

	double	nTotalCost=0,				//Tong chi phi
			nTotalInsCost=0,
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatPaid =0,			//Tong benh nhan tra
			nTotalDiffPaid = 0,	//Tong so tra chenh lech
			nTotalPayable=0,
			nTotalDeposit = 0,			//Tong tam ung
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0;			//So tien tra tu tam ung
	
	
	double nSumFoodAmount=0;			


	szWhere.AppendFormat(_T(" and hfe_invoiceno=%ld "), nInvoiceNo);

	szSQL.Format(_T(" SELECT *") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT hd_patientno as patientno,") \
				_T("         hd_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hp_birthdate as birthdate,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         extract(year from hp_birthdate) as yearofbirth, ") \
				_T("         Get_Selection_Desc('sys_sex', hp_sex) as sex,") \
				_T("         hp_sex as sex_id,") \
				_T("         hp_ethnic as ethnic,") \
				_T("         Get_Selection_Desc('sys_ethnic', hp_ethnic) as ethnicdesc, ") \
				_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("         hp_workplace as workplace,") \
				_T(" hd_rank, get_selection_desc('hms_rank', hd_rank) as rankname, ") \
				_T("         hd_doctor as doctor,") \
				_T("         hd_createdby as createdby,") \
				_T("         hd_icd as icd10,") \
				_T("         hd_diagnostic as diagnostic,") \
				_T("         hd_reldisease as reldisease,") \
				_T("         hd_xobject as xobject, ") \
				_T("         hd_xcardno as xcardno, ") \
				_T("         hd_xissuedate as xissuedate, ") \
				_T("         hd_emergency as emergency, ") \
				_T("         Get_Selection_Desc('hms_result',hd_result) as result,") \
				_T("         hd_admitdate as examdate,") \
				_T("         hd_enddate as enddate,") \
				_T("         hcr_recordno as recordno ,") \
				_T("         hcr_admitdate as admitdate,") \
				_T("         hcr_dischargedate as dischargedate,") \
				_T("         hcr_sumtreat as TreatmentDay,") \
				_T("         hcr_mainicd as mainicd ,") \
				_T("         hcr_maindisease as maindisease ,") \
				_T("         hcr_treatdoctor as treatdoctor, ") \
				_T("         hcr_reldisease as ireldisease,") \
				_T("         hcr_suggestion as isuggestion,") \
				_T("         hd_suggestion as esuggestion,") \
				_T("         Get_Selection_Desc('hms_result' ,hcr_result)  as iresult,") \
				_T("         Hms_GetObjectType(hd_object) as objecttype, ") \
				_T("         cast(hd_disrate as integer) as disrate, ") \
				_T("         hd_insline as insline, ") \
				_T("         hd_insregdate as insregdate, ") \
				_T("         hd_transplace as transplace, ") \
				_T("         hc_cardno as cardno, ") \
				_T("         hc_regdate as regdate, ") \
				_T("         hc_expdate as expdate, ") \
				_T("         hc_regcode as regcode, ") \
				_T("         HMS_GETHOSPITALNAME(hc_regcode) as regplace, ") \
				_T("         hfe_deptid as deptid,") \
				_T("         hfe_serialno as serialno,") \
				_T("         hfe_receiptno as recvno,") \
				_T("         hfe_date as recvdate, ") \
				_T("         hfe_staff as receiver,") \
				_T("         hfe_desc as reason,") \
				_T("         hfe_amount as cost,") \
				_T("         hfe_discount as discount,") \
				_T("         hfe_patpaid as patpaid,") \
				_T("         hfe_deposit as deposit_amount, ") \
				_T("         0 as deposit_payable,") \
				_T("         hfe_refund as refund_amount, ") \
				_T("         hfe_freeamount as free_amount,") \
				_T("         hfe_eat_amount as food_amount,") \
				_T("         row_number() over (partition by hd_docno order by hd_docno) as dn") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfe_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld %s ") \
				_T(" ) Tbl") \
				_T(" WHERE dn=1"), m_nDocumentNo, szWhere);
	
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		return;
	}

	rs.GetValue(_T("cost"), nTotalCost);
	rs.GetValue(_T("discount"), nTotalDiscount);
	rs.GetValue(_T("patpaid"), nTotalPatPaid);
	rs.GetValue(_T("deposit_amount"), nTotalDeposit);
	rs.GetValue(_T("free_amount"), nTotalFree);
	rs.GetValue(_T("refund_amount"), nTotalRefund);
	rs.GetValue(_T("deposit_payable"), nDepositPayable);
	rs.GetValue(_T("reason"), szDescription);
	rs.GetValue(_T("deskno"), nDeskNo);

	rs.GetValue(_T("food_amount"), nSumFoodAmount);

	rs.GetValue(_T("objecttype"), szObjectType);



	if(szObjectType == _T("I") || szObjectType == _T("C"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_INSDISCHARGEPAYMENT.RPT"), false) )
			return;
	}
	else if(szObjectType == _T("D"))
	{
		if(!rpt.Init(_T("Reports/HMS/HF_FREEDISCHARGEPAYMENT.RPT"), false) )
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports/HMS/HF_DISCHARGEPAYMENT.RPT"), false) )
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


	rs.GetValue(_T("recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RecordNo"), tmpStr);
	//rs.GetValue(_T("pname"), tmpStr);
	

	CString szPatientName;
	StringUpper(rs.GetValue(_T("pname")), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("birthdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);

	rs.GetValue(_T("sex_id"), tmpStr);
	if(tmpStr == _T("F"))
		rpt.GetReportHeader()->SetValue(_T("Female"), _T("X"));
	else
		rpt.GetReportHeader()->SetValue(_T("Male"), _T("X"));


	rs.GetValue(_T("ethnic"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnic"), tmpStr);
	rs.GetValue(_T("ethnicdesc"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ethnicdesc"), tmpStr);
	
	rs.GetValue(_T("workplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Workplace"), tmpStr);


	rs.GetValue(_T("rankname"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Rank"), tmpStr);

	CString szAddress;
	rs.GetValue(_T("detailaddress"), tmpStr);
	szAddress = tmpStr;
	rs.GetValue(_T("address"), tmpStr);
	if(!szAddress.IsEmpty())
		szAddress += _T(" - ");
	szAddress += tmpStr;
	rpt.GetReportHeader()->SetValue(_T("Address"), szAddress);
	

	rs.GetValue(_T("transplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), tmpStr);
	
	
	rs.GetValue(_T("objecttype"), szObjectType);
	
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr.Left(15));
	if(!tmpStr.IsEmpty())
	{
		rpt.GetReportHeader()->SetValue(_T("HasCardNo"), _T("X"));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("NoCardNo"), _T("X"));
	}

	rs.GetValue(_T("disrate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), tmpStr);
	

	rs.GetValue(_T("insline"), tmpStr);	
	if (tmpStr == _T("Y"))
	{		
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T(""));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T("X"));
	}
	
	rs.GetValue(_T("insregdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InsRegDate"), CDate::Convert(tmpStr));


	rs.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);


	CString szRegCode;
	rs.GetValue(_T("regcode"), szRegCode);
	rpt.GetReportHeader()->SetValue(_T("RegCode"), szRegCode);

	CReportItem *obj = rpt.GetReportHeader()->GetItem(_T("InsuranceCompany"));
	if (obj)
	{
		CString insname;
		CRecord rsx(&m_db);
		
		tmpStr.Format(_T("select sp_name as insname ") \
			          _T("from sys_prov left join hms_hospital on(hh_provid=sp_id or hh_newprov_id=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if (!rsx.IsEOF())
		{
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);
		}
	}

	rs.GetValue(_T("emergency"), tmpStr);
	if (tmpStr == _T("Y") )
		tmpStr = _T("X");
	else
		tmpStr.Empty();

	rpt.GetReportHeader()->SetValue(_T("Emergency"), tmpStr);

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
	
	
	
	CString szDischargeDate;
	rs.GetValue(_T("admitdate"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	rs.GetValue(_T("dischargedate"), tmpStr);
	szDischargeDate = tmpStr;
	
	if(szDischargeDate.Left(4) != _T("1752"))
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	else
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), _T(""));

	rs.GetValue(_T("TreatmentDay"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TreatmentDay"), tmpStr);	

	CString szData;
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));
	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate, yyyymmdd|hhmm,ddmmyyyy|hhmm));
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate1")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate1"),szData);
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate2")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate2"),szData);
	
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
		img->SetFixedHeight(true);
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
	
	
	// Nguoi tiep don
	tmpStr.Empty();
	rs.GetValue(_T("createdby"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("createdby"), GetDoctorName(tmpStr));
	CReportItem *img3 = rpt.GetReportFooter()->GetItem(_T("Signature3"));
	if(img3)
	{
		img3->SetHBITMAP(GetSignatureImage(tmpStr));
		img3->SetFixedHeight(false);
	}	


	CReportSection* rptDetail=NULL;
	CReportSection *grp;
	CRecord grs(&m_db);
	CString szFeeID, szID;
	CString szSubItem, szType;

	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};


	CRecord drs(&m_db);
	CString szDeptID;
		
		CArray<RECEIPTINFO, RECEIPTINFO& > payInfo;

		szSQL.Format(_T(" SELECT deptid, admitdate, dischargedate, mainicd, maindisease") \
					_T(" FROM") \
					_T(" (") \
					_T("  select htr_deptid as deptid,") \
					_T("         htr_admitdate as admitdate,") \
					_T("         htr_dischargedate as dischargedate,") \
					_T("         htr_mainicd as mainicd,") \
					_T("         htr_maindisease as maindisease,") \
					_T("         htr_idx as idx") \
					_T("  from hms_treatment_record") \
					_T("  where htr_docno=%ld") \
					_T("  union all") \
					_T("  select hd_admitdept,") \
					_T("         hd_admitdate,") \
					_T("         hd_enddate,") \
					_T("         hd_icd,") \
					_T("         hd_diagnostic,") \
					_T("         0") \
					_T("  from hms_doc") \
					_T("  where hd_docno=%ld") \
					_T(" ) tbl") \
					_T(" WHERE deptid in(select distinct hfe_deptid from hms_fee where hfe_invoiceno=%ld)") \
					_T(" ORDER BY idx"), nDocumentNo, nDocumentNo, nInvoiceNo);

		drs.ExecSQL(szSQL);

		RECEIPTINFO pi;
		CString szDepts;
		szDepts.Empty();

		while (!drs.IsEOF())
		{
			drs.GetValue(_T("deptid"), tmpStr);
			
			bool bFound = false;
			int i = 0;
			for (i =0; i < payInfo.GetCount(); i++)
			{
				pi = payInfo[i];
				if (pi.deptid == tmpStr)
				{
					bFound = true;
					break;
				}
			}
			pi.deptid = tmpStr;
			if(!szDepts.IsEmpty())
				szDepts += _T(",  ");
			szDepts.AppendFormat(_T("%s"), tmpStr);

			drs.GetValue(_T("dischargedate"), pi.dischargedate);
			drs.GetValue(_T("mainicd"), pi.mainicd);
			drs.GetValue(_T("maindisease"), pi.maindisease);

			if (bFound)
			{
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

		double nSumCost=0, nSumInsCost=0, nSumDiscount=0, nSumDiffPaid=0, nSumPatPaid=0;

		szDepts.Empty();


		int nChapter = 0;
		int nCount = 0, nIndex, nChapterID = 0;
		int nItem = 0, nOldItem = 0, nItem2 = 0;
		bool bDeleteParent = false;
		bool bLoadItems = false;
		CString szNewGroup, szOldGroup, szParentGroup;

		
	double nGroup0Cost=0, nGroup0InsCost= 0, nGroup0Discount=0, nGroup0DiffPaid=0, nGroup0PatPaid=0;
	double nGroup1Cost=0, nGroup1InsCost = 0, nGroup1Discount=0, nGroup1DiffPaid = 0, nGroup1PatPaid=0;
	double nGroup2Cost=0, nGroup2InsCost = 0, nGroup2Discount=0, nGroup2DiffPaid = 0, nGroup2PatPaid=0;	
	double nCost=0, nInsCost =0,  nDiscount=0, nDiffPaid  = 0, nPatPaid=0;

	
	nTotalCost = nTotalDiffPaid = nTotalInsCost = nTotalPatPaid = nTotalDiscount =0;

	szSQL.Format(_T("SELECT * FROM hms_fee_type ORDER BY hft_id "));
	grs.ExecSQL(szSQL);
	
	szWhere.Format(_T(" AND hfe_invoiceno=%ld"), nInvoiceNo);

	if (m_szOutpatient != _T("Y")) 
		szWhere.AppendFormat(_T(" and hfe_groupid <>'D0000' "));
	szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X') "));
	//szWhere.AppendFormat(_T(" and hfe_subgroup='XX' "));
	szWhere.AppendFormat(_T(" and (hfe_category <> 'Y' or hfe_category is null) "));


	szSQL.Format(_T(" SELECT hfe_typeindex AS typeindex,") \
_T("   hfe_status         AS status,") \
_T("   hfe_type           AS feetype,") \
_T("   hfe_groupid        AS groupid,") \
_T("   hfe_groupid3       AS groupid3,") \
_T("   hfe_itemid         AS itemid,") \
_T("   hfe_name           AS name,") \
_T("   hfe_unit           AS unit,") \
_T("   hfe_hitech         AS hitech,") \
_T("   hfe_inlist         AS inlist,") \
_T("   hfe_unitprice      AS unitprice,") \
_T("   SUM(hfe_qty)       AS qty,") \
_T("   SUM(hfe_cost)      AS cost,") \
_T("   SUM(hfe_inscost)   AS inscost,") \
_T("   SUM(hfe_discount)  AS discount,") \
_T("   SUM(hfe_diffcost)  AS DiffPaid,") \
_T("   SUM(hfe_patdebt)   AS patdebt,") \
_T("   SUM(hfe_copayment) AS copayment,") \
_T("   SUM(hfe_patpaid)   AS patpaid") \
_T(" FROM hms_fee_view_dtl") \
_T(" WHERE hfe_docno  =%ld %s ") \
_T(" GROUP BY hfe_typeindex,") \
_T("   hfe_status ,") \
_T("   hfe_type ,") \
_T("   hfe_groupid ,") \
_T("   hfe_groupid3 ,") \
_T("   hfe_itemid ,") \
_T("   hfe_name ,") \
_T("   hfe_unit ,") \
_T("   hfe_hitech ,") \
_T("   hfe_inlist,") \
_T("   hfe_unitprice") \
_T(" ORDER BY hfe_typeindex, hfe_groupid3, hfe_name, hfe_unit, hfe_unitprice"), m_nDocumentNo, szWhere);



_fmsg(_T("%s"), szSQL);		
	
	nIndex = 1;
	int nSubItem = 1;
	int nIDX;
	nChapterID = 0;
	CArray<FEEITEM, FEEITEM&> feeList;
	FEEITEM fee;
	CString szName;
	CString szNewIndex, szOldIndex;
	CString szIndex;
	bool bFound = false;
	bool bInList = false;
	bool bOutList = false;
	bool bKList = false;
	int nSubIndex = 1;
	
	double nTtlCost=0, nTtlInsCost=0, nTtlDiscount=0, nTtlDiffPaid=0, nTtlPatPaid=0;
	rs.ExecSQL(szSQL);
_fmsg(_T("%s"), szSQL);

	

	while(!grs.IsEOF()){
		tmpStr.Format(_T("%d"), nIndex);
		grs.GetValue(_T("hft_name"), szName);
		grs.GetValue(_T("hft_id"), szNewIndex);
		
		fee.szGroupID = _T("Type");
		fee.szID = tmpStr;
		fee.szName = szName;
		nItem = feeList.Add(fee);
		
		nIDX  = nItem;
		bFound = false;
		nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
		nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

		rs.MoveFirst();
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("typeindex"), tmpStr);
			
			if(tmpStr == szNewIndex){
				bFound = true;		
				rs.GetValue(_T("groupid"), szNewGroup);
				if(szNewGroup != szOldGroup)
				{
					szOldGroup = szNewGroup;
					if(szNewGroup.Left(2) == _T("B1")){
						szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						if(nGroup2Cost > 0){
							TranslateString(_T("Sub Amount"), tmpStr);
							fee.szGroupID = _T("SubAmount");
							fee.szName = tmpStr;
							fee.nCost = nGroup2Cost;
							fee.nInsPaid = nGroup2InsCost;
							fee.nDiscount = nGroup2Discount;
							fee.nDiffPaid = nGroup2DiffPaid;
							fee.nPatPaid = nGroup2PatPaid;
							int nItem2 = feeList.Add(fee);
						}

						szIndex.Format(_T("%d.%d"), nIndex, nSubIndex++);
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = rs2.GetValue(_T("hfg_name"));
						int nItem2 = feeList.Add(fee);
						nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

					}
					
				}

				if(szOldIndex != szNewIndex)
				{
					szOldIndex = szNewIndex;
					bInList = false;
					bOutList = false;
				}

				

				if(szNewIndex == _T("800")){
					

					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;

						int nItem2 = feeList.Add(fee);

					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(bInList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}

					if(tmpStr == _T("3") && !bKList){
						bKList = true;
						if(bInList && bOutList)
							szIndex.Format(_T("%d.3"), nIndex);	
						else if(bInList || bOutList)
							szIndex.Format(_T("%d.2"), nIndex);	
						else
							szIndex.Format(_T("%d.1"), nIndex);	

						TranslateString(_T("Inside cancer list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					

				}

				if(szNewIndex == _T("900")){
					
					rs.GetValue(_T("inlist"), tmpStr);
					
					if(tmpStr == _T("1") && !bInList){
						bInList = true;
						TranslateString(_T("Inside insurance list"), tmpStr);
						szIndex.Format(_T("%d.1"), nIndex);
						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
					if(tmpStr == _T("2") && !bOutList){
						bOutList = true;
						TranslateString(_T("Outside insurance list"), tmpStr);
						if(!bInList)
							szIndex.Format(_T("%d.1"), nIndex);
						else
							szIndex.Format(_T("%d.2"), nIndex);

						szIndex.Format(_T("%d.1"), nIndex);	
						fee.szGroupID = _T("Group");
						fee.szID = szIndex;
						fee.szName = tmpStr;
						fee.nCost = 0;
						fee.nInsPaid = 0;
						fee.nDiscount = 0;
						fee.nDiffPaid = 0;
						fee.nPatDebt = 0;
						int nItem2 = feeList.Add(fee);
					}
				}

				



				rs.GetValue(_T("cost"), nCost);
				rs.GetValue(_T("inscost"), nInsCost);
				rs.GetValue(_T("discount"), nDiscount);
				rs.GetValue(_T("DiffPaid"), nDiffPaid);
				rs.GetValue(_T("copayment"), nPatPaid);
				
				nTotalCost += nCost;
				nGroup1Cost += nCost;
				nGroup2Cost += nCost;

				nTotalInsCost += nInsCost;
				nGroup1InsCost += nInsCost;
				nGroup2InsCost += nInsCost;

				nTotalDiscount += nDiscount;
				nGroup1Discount += nDiscount;
				nGroup2Discount += nDiscount;

				nTotalDiffPaid += nDiffPaid;
				nGroup1DiffPaid += nDiffPaid;
				nGroup2DiffPaid += nDiffPaid;

				nTotalPatPaid += nPatPaid;
				nGroup1PatPaid += nPatPaid;
				nGroup2PatPaid += nPatPaid;

				fee.szID.Empty();
				fee.szGroupID = _T("Item");
				fee.szName = rs.GetValue(_T("name"));
				fee.szUnit = rs.GetValue(_T("unit"));
				fee.nCost = nCost;
				fee.nInsPaid = nInsCost;
				fee.nDiscount = nDiscount;
				fee.nQuantity = str2float(rs.GetValue(_T("qty")));
				fee.nPrice = str2double(rs.GetValue(_T("unitprice")));
				fee.nInsPrice = str2double(rs.GetValue(_T("insprice")));
				fee.nDiffPaid = nDiffPaid;
				fee.nPatPaid = nPatPaid;
				feeList.Add(fee);

				if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5") ){
/*
					double nOperationCost, nOperationInsCost, nOperationDiscount, nOperationDiffCost, nOperationPatPaid;
					
					bool bHasInOperation=false;
					bool bHasOutsideInsurance = false;

					nOperationCost = nCost;
					nOperationInsCost = nInsCost;
					nOperationDiscount = nDiscount;
					nOperationDiffCost = nDiffPaid;
					nOperationPatPaid = nPatPaid;

					CString szItemID;
					rs.GetValue(_T("itemid"), szItemID);
					CRecord rsi(&m_db);
					
					szSQL.Format(_T("SELECT hfe_itemid, hfe_desc, hfe_quantity, hfe_unitprice, hfe_cost, hfe_discount, hfe_diffcost, hfe_patpaid ") \
								_T("FROM hms_fee ") \
								_T("WHERE hfe_docno=%ld and hfe_type='V' and hfe_unit='%s' ORDER BY hfe_itemid DESC "), 
								nDocumentNo, szItemID);
					rsi.ExecSQL(szSQL);

					while(!rsi.IsEOF()){
						rsi.GetValue(_T("hfe_itemid"), tmpStr);
						if(tmpStr == _T("VT000001")){
							bHasInOperation = true;
						}
						if(tmpStr == _T("VT000002")){
							bHasOutsideInsurance = true;
						}
						rsi.MoveNext();
					}



					if(m_szObjectType == _T("I") || m_szObjectType == _T("C"))
					{
						szSQL.Format(_T(" SELECT hfe_group, ") \
								_T(" 		hfe_desc as name,") \
								_T(" hfe_unit as unit, ") \
								_T(" hfe_category, ") \
								_T(" 		sum(hfe_quantity) as qty,") \
								_T(" 		hfe_insprice as unitprice,") \
								_T(" 		sum(hfe_inspaid) as cost,") \
								_T(" 		case when hfe_category<>'Y' then sum(hfe_discount) else 0 end as discount,") \
								_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
								_T(" 		sum(hfe_cost-hfe_discount-hfe_diffcost) as patpaid") \
								_T(" FROM hms_fee_view ") \
								_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
								_T(" WHERE hfe_docno=%ld  and hfe_cost > 0  and hfe_class='I'  ") \
								_T(" and hfe_subgroup='%s'   ") \
								_T(" GROUP BY hfg_type_id, hfe_group, hfe_desc, hfe_unit, hfe_insprice, hfe_category, hfe_status ") \
								_T(" ORDER BY hfe_category DESC, hfg_type_id, hfe_group,  name, unitprice"), 
								nDocumentNo, szItemID);
					}
					else
					{
						szSQL.Format(_T(" SELECT hfe_group, ") \
								_T(" 		hfe_desc as name,") \
								_T(" hfe_unit as unit, ") \
								_T(" hfe_category, ") \
								_T(" 		sum(hfe_quantity) as qty,") \
								_T(" 		hfe_unitprice as unitprice,") \
								_T(" 		sum(hfe_cost) as cost,") \
								_T(" 		case when hfe_category<>'Y' then sum(hfe_discount) else 0 end as discount,") \
								_T(" 		sum(hfe_DiffPaid) as DiffPaid,") \
								_T(" 		sum(hfe_cost-hfe_discount-hfe_diffcost) as patpaid") \
								_T(" FROM hms_fee_view ") \
								_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
								_T(" WHERE hfe_docno=%ld  and hfe_cost > 0  and hfe_class='I'  ") \
								_T(" and hfe_subgroup='%s'   ") \
								_T(" GROUP BY hfg_type_id, hfe_group, hfe_desc, hfe_unit, hfe_unitprice, hfe_category, hfe_status") \
								_T(" ORDER BY hfe_category DESC, hfg_type_id, hfe_group,  name, unitprice"), 
								nDocumentNo, szItemID);

					}
					

							rsl.ExecSQL(szSQL);
							
							CString szCategory;
							nCost = nInsCost = nPatPaid = nPatPaid = 0;
							nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;
							double nTtlCost2 = 0, nTtlInsCost2=0, nTtlDiscount2 = 0, nTtlDiffPaid2 = 0, nTtlPatPaid2 = 0;
							bool bInOperation=false, bOutOperation=false;
							while(!rsl.IsEOF()){
								rsl.GetValue(_T("cost"),nCost);
								rsl.GetValue(_T("inscost"),nInsCost);
								rsl.GetValue(_T("discount"), nDiscount);
								rsl.GetValue(_T("DiffPaid"), nDiffPaid);
								rsl.GetValue(_T("patpaid"), nPatPaid);
								if(nDiscount == 0)
								{
								//	nCost = 0;
									//nPatPaid = 0;
									//nDiffPaid = 0;
								}


								
								rsl.GetValue(_T("hfe_category"), szCategory);
								if(szCategory == _T("Y") && !bInOperation)
								{
									bInOperation = true;
									CString szLabel;
									TranslateString(_T("Inside operation"), szLabel);
									fee.szGroupID = _T("SubItemGroup");
									fee.szID = _T("*");
									fee.szName = szLabel;
									fee.szUnit.Empty();
									fee.nCost = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = 0;
									fee.nDiffPaid = 0;
									fee.nPatDebt = 0;
									feeList.Add(fee);


								}
								if(szCategory != _T("Y") && !bOutOperation)
								{
									CString szLabel;

									bOutOperation = true;

									if(nTtlCost > 0){
										TranslateString(_T("Amount"), tmpStr);
										fee.szGroupID = _T("SubItemAmount");
										fee.szID.Empty();
										fee.szName.Format(_T("   %s"), tmpStr);;
										fee.nCost = nTtlCost;
										fee.nDiscount = nTtlDiscount;
										fee.nDiffPaid = nTtlDiffPaid;
										fee.nPatPaid = nTtlPatPaid;
										feeList.Add(fee);

										nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;

									}


									

									TranslateString(_T("Outside operation"), szLabel);

									fee.szGroupID = _T("SubItemGroup");
									fee.szID = _T("*");
									fee.szName = szLabel;
									fee.nCost = 0;
									fee.nInsPaid = 0;
									fee.nDiscount = 0;
									fee.nDiffPaid = 0;
									fee.nPatDebt = 0;

									feeList.Add(fee);


								}


								nTtlCost += nCost;
								nTtlInsCost += nInsCost;
								nTtlDiscount += nDiscount;
								nTtlDiffPaid += nDiffPaid;
								nTtlPatPaid += nPatPaid;




								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
									nTtlCost2 += nCost;
									nTtlInsCost2 += nInsCost;
									nTtlDiscount2 += nDiscount;
									nTtlDiffPaid2 += nDiffPaid;
									nTtlPatPaid2 += nPatPaid;
								}

								
								if(szCategory != _T("Y") && !bHasOutsideInsurance){
									nTotalCost += nCost;
									
									nGroup1Cost += nCost;
									nGroup2Cost += nCost;
									nTotalInsCost += nInsCost;
									nGroup1InsCost += nInsCost;
									nGroup2InsCost += nInsCost;
									nTotalDiscount += nDiscount;
									nGroup1Discount += nDiscount;
									nGroup2Discount += nDiscount;
									nTotalDiffPaid += nDiffPaid;
									nGroup1DiffPaid += nDiffPaid;
									nGroup2DiffPaid += nDiffPaid;
									nTotalPatPaid += nPatPaid;
									nGroup1PatPaid += nPatPaid;
									nGroup2PatPaid += nPatPaid;

								}

								rsl.GetValue(_T("name"), tmpStr);
								fee.szID.Empty();
								fee.szName.Format(_T("      %s"), tmpStr);
								fee.szUnit = rsl.GetValue(_T("unit"));
								fee.szGroupID = _T("SubItem");
								fee.nQuantity = str2double(rsl.GetValue(_T("qty")));
								fee.nPrice = str2double(rsl.GetValue(_T("unitprice")));
								fee.nCost = str2double(rsl.GetValue(_T("cost")));
								fee.nInsPaid = str2double(rsl.GetValue(_T("inscost")));
								fee.nDiscount = str2double(rsl.GetValue(_T("discount")));
								fee.nDiffPaid = str2double(rsl.GetValue(_T("diffpaid")));
								fee.nPatPaid = str2double(rsl.GetValue(_T("patpaid")));
								feeList.Add(fee);
								rsl.MoveNext();
							}
							
							if(nTtlCost > 0){
								TranslateString(_T("Amount"), tmpStr);
								fee.szGroupID = _T("SubItemAmount");
								fee.szID.Empty();
								fee.szName.Format(_T("   %s"), tmpStr);;
								fee.szUnit.Empty();
								
								fee.nCost = nTtlCost;
								fee.nDiscount = nTtlDiscount;
								fee.nDiffPaid = nTtlDiffPaid;
								fee.nPatPaid = nTtlPatPaid;
								feeList.Add(fee);

								nTtlCost = nTtlDiscount = nTtlDiffPaid = nTtlPatPaid = 0;

							}

							bool bOutsideOperation = false;

							
							nCost = nInsCost = nPatPaid  = 0;
							rsi.MoveFirst();
							while(!rsi.IsEOF())
							{
								CString szItemID;
								rsi.GetValue(_T("hfe_itemid"), szItemID);
								
								fee.szID = _T("*");
								fee.szGroupID = _T("Item");
								fee.szName = rsi.GetValue(_T("hfe_desc"));
								fee.nQuantity = str2double(rsi.GetValue(_T("hfe_quantity")));
								fee.nCost = 0;
								fee.nDiscount = 0;
								fee.nPrice = str2double(rsi.GetValue(_T("hfe_unitprice")));

								if(m_szObjectType == _T("S"))
								{
									rsi.GetValue(_T("hfe_patpaid"), nPatPaid);
									fee.nCost = nPatPaid;
									fee.nDiffPaid = 0;
									fee.nPatPaid = nPatPaid;

									nCost = nPatPaid;
									nDiscount =0;
									nInsCost =0;
									feeList.Add(fee);
									nTtlCost += nCost;
									nTtlPatPaid += nPatPaid;
									
								}
								else
								{
									rsi.GetValue(_T("hfe_cost"), nCost);
									rsi.GetValue(_T("hfe_discount"), nDiscount);
									rsi.GetValue(_T("hfe_diffcost"), nDiffPaid);
									//rsi.GetValue(_T("hfe_patpaid"), nPatPaid);
									nPatPaid =0;
									fee.nDiffPaid = nDiffPaid;
									fee.nPatPaid = nPatPaid;
									fee.nCost = nCost;
									fee.nDiscount = nDiscount;
									nInsCost = nCost;
									feeList.Add(fee);
									nTtlDiffPaid += nDiffPaid;
									nTtlCost += nCost;
									nTtlInsCost += nInsCost;
									nTtlDiscount += nDiscount;
									nTtlPatPaid += nPatPaid;
								}
								if(nDiscount +nDiffPaid+nPatPaid > 0)
								{
									nTotalCost += nCost;
									
									nGroup1Cost += nCost;
									nGroup2Cost += nCost;
									nTotalInsCost += nInsCost;
									nGroup1InsCost += nInsCost;
									nGroup2InsCost += nInsCost;
									nTotalDiscount += nDiscount;
									nGroup1Discount += nDiscount;
									nGroup2Discount += nDiscount;
									nTotalDiffPaid += nDiffPaid;
									nGroup1DiffPaid += nDiffPaid;
									nGroup2DiffPaid += nDiffPaid;
									nTotalPatPaid += nPatPaid;
									nGroup1PatPaid += nPatPaid;
									nGroup2PatPaid += nPatPaid;
								}

								bOutsideOperation = true;

								rsi.MoveNext();

							}

*/					
					}	//end B4, B5
			}
			rs.MoveNext();
		}
		if(!bFound)
		{
			feeList.RemoveAt(nIDX);
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;
		}
		else
		{
			if(nGroup1Cost > 0){
				if(nGroup2Cost > 0 && nGroup1Cost != nGroup2Cost){
					TranslateString(_T("Sub Amount"), tmpStr);
					fee.szGroupID = _T("SubAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup2Cost;
					fee.nInsPaid = nGroup2InsCost;
					fee.nDiscount = nGroup2Discount;
					fee.nDiffPaid = nGroup2DiffPaid;
					fee.nPatPaid = nGroup2PatPaid;
					feeList.Add(fee);
				}

					TranslateString(_T("Total"), tmpStr);
					tmpStr.AppendFormat(_T(" (%d)"), nIndex);
					fee.szGroupID = _T("GrandAmount");
					fee.szID.Empty();;
					fee.szName = tmpStr;
					fee.nCost = nGroup1Cost;
					fee.nInsPaid = nGroup1InsCost;
					fee.nDiscount = nGroup1Discount;
					fee.nDiffPaid = nGroup1DiffPaid;
					fee.nPatPaid = nGroup1PatPaid;
					feeList.Add(fee);
			}
			nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
			nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

			nIndex++;
		}



		grs.MoveNext();
	}

	nTotalCost  = (nTotalCost);
	nTotalInsCost  = (nTotalInsCost);
	nTotalDiscount  = (nTotalDiscount);
	nTotalDiffPaid  = (nTotalDiffPaid);
	nTotalPatPaid  = (nTotalPatPaid);
	nTotalPayable = ceil(nTotalCost-nTotalDiscount);
	nTotalDiscount = nTotalDiscount;

	TranslateString(_T("Total Amount"), szName);
	fee.szGroupID = _T("TotalAmount");
	fee.szName.Format(_T("%s "), szName);
	fee.nCost = nTotalCost;
	fee.nInsPaid = nTotalInsCost;
	fee.nDiscount = nTotalDiscount;
	fee.nDiffPaid = nTotalDiffPaid;
	fee.nPatPaid = nTotalPatPaid;
	feeList.Add(fee);
	
	nSumCost += nTotalCost;
	nSumInsCost += nTotalInsCost;
	nSumDiscount += nTotalDiscount;
	nSumDiffPaid += nTotalDiffPaid;
	nSumPatPaid += nTotalPatPaid;


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
				
				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
				

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);


				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}
			}
			else if(szType == _T("SubAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
				CReportItem *obj ;
				obj = rptDetail->GetItem(_T("SubGroupName")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupCost")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupDiscount")); if(obj) obj->SetBold(true);
				obj = rptDetail->GetItem(_T("SubGroupPatpaid")); if(obj) obj->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);


				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

			}
			else if(szType == _T("GrandAmount")){
				grp = rpt.GetGroupHeader(2);
				rptDetail = rpt.AddDetail(grp);
			//	rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
			//	rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
				rptDetail->SetValue(_T("SubGroupName"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupInsUnPaid"), tmpStr);
				}

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

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemGroup")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				rptDetail->SetValue(_T("5"), _T(""));
				
			}

			else if(szType == _T("SubItem")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) obj->SetItalic(true);
				}

				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), fee.szUnit);
				FormatCurrency(fee.nQuantity, tmpStr);
				rptDetail->SetValue(_T("4"), tmpStr);
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), tmpStr);
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}
			else if(szType == _T("SubItemAmount")){
				rptDetail = rpt.AddDetail();
				CReportItem *obj = NULL;
				for (int i = 1; i <= 9; i++)
				{
					obj = rptDetail->GetItem(i);
					if(obj) 
					{
						obj->SetItalic(true);
						obj->SetBold(true);
					}

				}
				rptDetail->SetValue(_T("1"), fee.szID);
				rptDetail->SetValue(_T("2"), fee.szName);
				rptDetail->SetValue(_T("3"), _T(""));
				rptDetail->SetValue(_T("4"), _T(""));
				FormatCurrency(fee.nPrice, tmpStr);
				rptDetail->SetValue(_T("5"), _T(""));
				
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("6"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("10"), tmpStr);
				
				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("7"), tmpStr);

				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("8"), tmpStr);

				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("9"), tmpStr);
				

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("11"), tmpStr);
				}
				
			}

			else if(szType == _T("Dousage")){
				rptDetail = rpt.AddDetail(rpt.GetGroupHeader(4));
				rptDetail->SetValue(_T("usage"), fee.szName);
			}
			else if(szType == _T("TotalAmount")){
				grp = rpt.GetGroupHeader(3);
				rptDetail = rpt.AddDetail(grp);
				rptDetail->SetValue(_T("TotalAmountLabel"), fee.szName);
				FormatCurrency(fee.nCost, tmpStr);
				rptDetail->SetValue(_T("TotalAmount"), tmpStr);

				FormatCurrency(fee.nInsPaid, tmpStr);
				rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

				FormatCurrency(fee.nDiscount, tmpStr);
				rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
				FormatCurrency(fee.nDiffPaid, tmpStr);
				rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
				//fee.nPatPaid= fee.nCost-fee.nDiscount;
				FormatCurrency(fee.nPatPaid, tmpStr);
				rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);

				if(fee.nDiscount > 0)
				{
					FormatCurrency(fee.nPatPaid-fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("TotalInsUnPaid"), tmpStr);
				}
			}
		}	
	

	if(nTotalCost != nSumCost){
		CString szName;
		TranslateString(_T("Total Amount"), tmpStr);
		szName.Format(_T("%s"), tmpStr);
			grp = rpt.GetGroupHeader(3);
			rptDetail = rpt.AddDetail(grp);
			rptDetail->SetValue(_T("TotalAmountLabel"), szName);
			FormatCurrency(nSumCost, tmpStr);
			rptDetail->SetValue(_T("TotalAmount"), tmpStr);

			FormatCurrency(nSumInsCost, tmpStr);
			rptDetail->SetValue(_T("TotalInsCost"), tmpStr);

			FormatCurrency(nSumDiscount, tmpStr);
			rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
				
			FormatCurrency(nSumDiffPaid, tmpStr);
			rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);
			FormatCurrency(nSumPatPaid, tmpStr);
			rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
	}

	szSQL.Format(_T(" SELECT hfe_amount as hfe_amount,") \
_T("   hfe_inspaid,") \
_T("   hfe_discount,") \
_T("   hfe_patpaid,") \
_T("   hfe_payment,") \
_T("   hfe_diffcost,") \
_T("   hfe_diffpaid,") \
_T("   hfe_deposit,") \
_T("   hfe_refund,") \
_T("   hfe_freeamount") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfe_invoiceno=%ld"), nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		double nTotalDiffPaid;
		double nTotalPayment;
		double nTotalPatPaid;

		rs.GetValue(_T("hfe_amount"), nTotalCost);
		rs.GetValue(_T("hfe_inspaid"), nTotalInsCost);
		rs.GetValue(_T("hfe_discount"), nTotalDiscount);
		rs.GetValue(_T("hfe_patpaid"), nTotalPatPaid);
		rs.GetValue(_T("hfe_diffcost"), nTotalDiffPaid);
		rs.GetValue(_T("hfe_deposit"), nTotalDeposit);
		rs.GetValue(_T("hfe_refund"), nTotalRefund);
		rs.GetValue(_T("hfe_freeamount"), nTotalFree);
		rs.GetValue(_T("hfe_payment"), nTotalPayment);

		


		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency((nTotalCost), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.0f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		
		FormatCurrency(nTotalInsCost, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsCost"), tmpStr);


		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsDiscount"), tmpStr);

		FormatCurrency(nTotalPatPaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsUnPaid"), tmpStr);

		FormatCurrency((nTotalDiffPaid), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiffPaid"), tmpStr);


		FormatCurrency(nTotalPatPaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);



		FormatCurrency((nTotalDeposit), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDeposit"), tmpStr);
		
		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiscount"), tmpStr);

		FormatCurrency(nSumFoodAmount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumFoodAmount"), tmpStr);

		if(nTotalRefund > 0)
		{
		//	FormatCurrency(nTotalRefund, tmpStr);
		//	rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

			FormatCurrency(nTotalRefund, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumRefund"), tmpStr);
		}
		else
		{
			FormatCurrency(nTotalPayment, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

		}
		
	}

	int nInsRate;
	rs.GetValue(_T("disrate"), nInsRate);
	if(nInsRate > 0)
	{
		int nUnRate = 100 - nInsRate;
		if(nUnRate ==0)
			nUnRate = nInsRate;

		tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
		rpt.GetReportFooter()->SetValue(_T("UnRate"), tmpStr);
	}

//	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
//	ExecSQL(szSQL);

//	rpt.Print();
	rpt.PrintPreview();

}


#include "HMSReportForms/PrintForms.h"
#include "HMSFeeManager.h"
void CMainFrame::PrintDischargeReceiptFromInvoice(long nInvoiceNo, bool bDetailForCost, bool bInsObject)
{
	CString szSQL;
	CRecord rs(&m_db);
	//_msg(_T("%s"), szSQL);
	

	CHMSFeeManager fm(m_nDocumentNo);
	fm.PrintDischargePayment(nInvoiceNo);
		
//	CPrintForms printer;
//	printer.FM_PrintDischargePaymentInvoice(m_nDocumentNo, nInvoiceNo);
	return;

	
	
	
	if(m_szObjectType == _T("I")||m_szObjectType == _T("C"))
	{
		PrintInsuranceDischargeReceiptFromInvoice(nInvoiceNo);
		szSQL.Format(_T("SELECT count(*) FROM hms_fee WHERE hfe_invoiceno=%ld and hfe_object=7 "), nInvoiceNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			PrintServiceDischargeReceiptFromInvoice(nInvoiceNo);
		}

		
	}
	else if(m_szObjectType == _T("D") || m_szObjectType == _T("P"))
	{
		PrintPolicyDischargeReceiptFromInvoice(nInvoiceNo);
	}
	else if(m_szObjectType == _T("S"))
	{
		PrintServiceDischargeReceiptFromInvoice(nInvoiceNo);
		szSQL.Format(_T("SELECT count(*) FROM hms_fee WHERE hfe_invoiceno=%ld and hfe_object<>7 "), nInvoiceNo);
		rs.ExecSQL(szSQL);
		if(rs.GetIntValue() > 0)
		{
			PrintInsuranceDischargeReceiptFromInvoice(nInvoiceNo);
		}
	}	
}







void CMainFrame::PrintDischargeReceiptFromInvoice2(long nInvoiceNo, bool bDetailForCost)
{
	if (m_nInpatient == 0)
		return;

	CReport rpt;
	CString tmpStr, szSQL, szWhere, szAdmitDate, szEndDate,szDepartments, szAddonedayoutofhospital,szNumbertreat;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	int		nDeskNo=0;
	long	nDocumentNo;
	bool	bDetailFee = bDetailForCost;
	CString szRecvDate;
	CString	szObjectType;
	CString	szDescription;
	
	double	nTotalCost=0,				//Tong chi phi
			nTotalInsCost=0,
			nTotalDiscount = 0,			//Tong Mien giam
			nTotalPatpaid =0,			//Tong benh nhan tra
			nTotalDiffPaid = 0,	//Tong so tra chenh lech
			nTotalDeposit = 0,			//Tong tam ung
			nTotalFree = 0,				//Tong mien phi
			nTotalRefund=0,				//Tong hoan tra
			nDepositPayable=0;			//So tien tra tu tam ung
	double	nGroup0Cost=0,				//Tong chi phi
			nGroup0Discount = 0,			//Tong Mien giam
			nGroup0DiffPaid=0,
			nGroup0Patpaid =0;			//Tong benh nhan tra
	double	nGroup1Cost=0,				//Tong chi phi
			nGroup1Discount = 0,			//Tong Mien giam
			nGroup1DiffPaid=0,
			nGroup1Patpaid =0;			//Tong benh nhan tra
	double	nGroup2Cost=0,				//Tong chi phi
			nGroup2Discount = 0,			//Tong Mien giam
			nGroup2DiffPaid=0,
			nGroup2Patpaid =0;			//Tong benh nhan tra
	double	nCost=0, nInsPaid = 0, nDiscount=0, nDiffPaid=0, nPatPaid=0;
	double	nTotalAmount=0, nTotalInspaid=0, nTotalDiffpaid=0;

			



	/*szSQL.Format(_T("  SELECT distinct on(hd_docno) hd_patientno as patientno,  ") \
				_T(" 	hd_docno as docno,") \
				_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T(" 	hp_birthdate as birthdate,") \
				_T(" 	hms_getage(date(hd_admitdate), hp_birthdate) as age,") \
				_T("	date_part('year', hp_birthdate) as yearofbirth, ") \
				_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("	hp_ethnic as ethnic,")\
				_T("	(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text)) as ethnicdesc, ") \
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T(" 	hp_workplace as workplace,") \
				_T(" 	hd_doctor as doctor,") \
				_T(" 	hd_createdby as createdby,") \
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
				_T(" 	hcr_recordno as recordno ,") \
				_T(" 	hcr_admitdate as admitdate,") \
				_T(" 	hcr_dischargedate as dischargedate,") \
				_T("	date(hcr_dischargedate) - date(hcr_admitdate) as Numbertreat,") \
				_T(" 	hcr_mainicd as mainicd ,") \
				_T(" 	hcr_maindisease as maindisease ,") \
				_T("	hcr_treatdoctor as treatdoctor, ") \
				_T("	hcr_reldisease as ireldisease,") \
				_T("	hcr_suggestion as isuggestion,") \
				_T("	hd_suggestion as esuggestion,") \
				_T("	(select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hcr_result)  as iresult, ")
				_T("	(select ho_type from hms_object where ho_id=hd_object) as objecttype, ") \
				_T("	cast(hd_disrate as integer) as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hd_insregdate as insregdate, ") \
				_T("	hd_transplace as transplace, ") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_depts as depts,") \
				_T(" 	hfe_bookno as bookno,") \
				_T(" 	hfe_deskno as deskno,") \
				_T(" 	hfe_serialno as serialno,") \
				_T(" 	hfe_recvno as recvno,") \
				_T(" 	hfe_recvdate as recvdate, ") \
				_T(" 	hfe_receiver as receiver,") \
				_T(" 	hfe_desc as reason, ") \
				_T(" 	hfe_cost as cost,") \
				_T(" 	hfe_discount as discount,") \
				_T(" 	hfe_patpaid as patpaid, ") \
				_T(" 	hfe_advanceamt as deposit_amount, ") \
				_T(" 	hfe_advpayment as deposit_payable, ") \
				_T(" 	hfe_refundamt as refund_amount, ") \
				_T(" 	hfe_free as free_amount ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfe_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfe_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld "),m_nDocumentNo, nInvoiceNo);*/

	szSQL.Format(_T(" SELECT *") \
				_T(" FROM") \
				_T(" (") \
				_T("  SELECT hd_patientno as patientno,") \
				_T("         hd_docno as docno,") \
				_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("         hp_birthdate as birthdate,") \
				_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("         extract(year from hp_birthdate) as yearofbirth, ") \
				_T("         Get_Selection_Desc('sys_sex', hp_sex) as sex,") \
				_T("         hp_sex as sex_id,") \
				_T("         hp_ethnic as ethnic,") \
				_T("         Get_Selection_Desc('sys_ethnic', hp_ethnic) as ethnicdesc, ") \
				_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("         hp_workplace as workplace,") \
				_T("         hd_doctor as doctor,") \
				_T("         hd_createdby as createdby,") \
				_T("         hd_icd as icd10,") \
				_T("         hd_diagnostic as diagnostic,") \
				_T("         hd_reldisease as reldisease,") \
				_T("         hd_xobject as xobject, ") \
				_T("         hd_xcardno as xcardno, ") \
				_T("         hd_xissuedate as xissuedate, ") \
				_T("         hd_emergency as emergency, ") \
				_T("         Get_Selection_Desc('hms_result',hd_result) as result,") \
				_T("         hd_admitdate as examdate,") \
				_T("         hd_enddate as enddate,") \
				_T("         hcr_recordno as recordno ,") \
				_T("         hcr_admitdate as admitdate,") \
				_T("         hcr_dischargedate as dischargedate,") \
				_T("         hcr_sumtreat as Numbertreat,") \
				_T("         hcr_mainicd as mainicd ,") \
				_T("         hcr_maindisease as maindisease ,") \
				_T("         hcr_treatdoctor as treatdoctor, ") \
				_T("         hcr_reldisease as ireldisease,") \
				_T("         hcr_suggestion as isuggestion,") \
				_T("         hd_suggestion as esuggestion,") \
				_T("         Get_Selection_Desc('hms_result' ,hcr_result)  as iresult,") \
				_T("         Hms_GetObjectType(hd_object) as objecttype, ") \
				_T("         cast(hd_disrate as integer) as disrate, ") \
				_T("         hd_insline as insline, ") \
				_T("         hd_insregdate as insregdate, ") \
				_T("         hd_transplace as transplace, ") \
				_T("         hc_cardno as cardno, ") \
				_T("         hc_regdate as regdate, ") \
				_T("         hc_expdate as expdate, ") \
				_T("         hc_regcode as regcode, ") \
				_T("         HMS_GETHOSPITALNAME(hc_regcode) as regplace, ") \
				_T("         hfe_deptid as deptid,") \
				_T("         '' as depts,") \
				_T("         '' as bookno,") \
				_T("         '' as deskno,") \
				_T("         hfe_serialno as serialno,") \
				_T("         hfe_receiptno as recvno,") \
				_T("         hfe_date as recvdate, ") \
				_T("         hfe_staff as receiver,") \
				_T("         hfe_desc as reason,") \
				_T("         hfe_amount as cost,") \
				_T("         hfe_discount as discount,") \
				_T("         hfe_patpaid as patpaid,") \
				_T("         hfe_deposit as deposit_amount, ") \
				_T("         0 as deposit_payable,") \
				_T("         hfe_refund as refund_amount, ") \
				_T("         hfe_freeamount as free_amount,") \
				_T("         row_number() over (partition by hd_docno order by hd_docno) as dn") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfe_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfe_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld") \
				_T(" ) Tbl") \
				_T(" WHERE dn=1"), m_nDocumentNo, nInvoiceNo);
	
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	if (rs.IsEOF())
	{
		return;
	}

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


	rs.GetValue(_T("recordno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RecordNo"), tmpStr);
	//rs.GetValue(_T("pname"), tmpStr);
	

	CString szPatientName;
	StringUpper(rs.GetValue(_T("pname")), szPatientName);
	rpt.GetReportHeader()->SetValue(_T("PATIENTNAME"), szPatientName);
	rs.GetValue(_T("age"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Age"), tmpStr);
	rs.GetValue(_T("yearofbirth"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("YearOfBirth"), tmpStr);

	rs.GetValue(_T("birthdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("BirthDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("sex"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Sex"), tmpStr);

	rs.GetValue(_T("sex_id"), tmpStr);
	if(tmpStr == _T("F"))
		rpt.GetReportHeader()->SetValue(_T("Female"), _T("X"));
	else
		rpt.GetReportHeader()->SetValue(_T("Male"), _T("X"));


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
	

	rs.GetValue(_T("transplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), tmpStr);
	
	
	rs.GetValue(_T("objecttype"), szObjectType);
	
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr.Left(15));
	if(!tmpStr.IsEmpty())
	{
		rpt.GetReportHeader()->SetValue(_T("HasCardNo"), _T("X"));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("NoCardNo"), _T("X"));
	}

	rs.GetValue(_T("disrate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("Insrate"), tmpStr);
	

	rs.GetValue(_T("insline"), tmpStr);	
	if (tmpStr == _T("Y"))
	{		
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T(""));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T("X"));
	}
	
	rs.GetValue(_T("insregdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("InsRegDate"), CDate::Convert(tmpStr));


	rs.GetValue(_T("regdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

	rs.GetValue(_T("expdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("regplace"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("RegistrationPlace"), tmpStr);


	CString szRegCode;
	rs.GetValue(_T("regcode"), szRegCode);
	rpt.GetReportHeader()->SetValue(_T("RegCode"), szRegCode);

	CReportItem *obj = rpt.GetReportHeader()->GetItem(_T("InsuranceCompany"));
	if (obj)
	{
		CString insname;
		CRecord rsx(&m_db);
		
		tmpStr.Format(_T("select sp_name as insname ") \
			          _T("from sys_prov left join hms_hospital on(hh_provid=sp_id or hh_newprov_id=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
		rsx.ExecSQL(tmpStr);
		if (!rsx.IsEOF())
		{
			rsx.GetValue(_T("insname"), tmpStr);
			rpt.GetReportHeader()->Format(_T("InsuranceCompany"), tmpStr);
		}
	}

	rs.GetValue(_T("emergency"), tmpStr);
	if (tmpStr == _T("Y") )
		tmpStr = _T("X");
	else
		tmpStr.Empty();

	rpt.GetReportHeader()->SetValue(_T("Emergency"), tmpStr);

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
	
	
	
	CString szDischargeDate;
	rs.GetValue(_T("admitdate"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	
	rs.GetValue(_T("dischargedate"), tmpStr);
	szDischargeDate = tmpStr;
	
	if(szDischargeDate.Left(4) != _T("1752"))
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmm, ddmmyyyy|hhmm));
	else
			rpt.GetReportHeader()->SetValue(_T("dischargedate"), _T(""));

		

	CString szData;
	tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("bookno")), rs.GetValue(_T("serialno")), rs.GetValue(_T("recvno")));
	rpt.GetReportFooter()->SetValue(_T("SerialNo"), tmpStr);
	rs.GetValue(_T("recvdate"), szRecvDate);	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(szRecvDate, yyyymmdd|hhmm,ddmmyyyy|hhmm));
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate1")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));	
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate1"),szData);
	szData.Format(rpt.GetReportFooter()->GetValue(_T("ReceiptDate2")), szRecvDate.Mid(11,5),szRecvDate.Mid(8,2),szRecvDate.Mid(5,2),szRecvDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate2"),szData);
	
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
		img->SetFixedHeight(true);
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
	
	
	// Nguoi tiep don
	tmpStr.Empty();
	rs.GetValue(_T("createdby"), tmpStr);
	tmpStr.Trim();
	rpt.GetReportFooter()->SetValue(_T("createdby"), GetDoctorName(tmpStr));
	CReportItem *img3 = rpt.GetReportFooter()->GetItem(_T("Signature3"));
	if(img3)
	{
		img3->SetHBITMAP(GetSignatureImage(tmpStr));
		img3->SetFixedHeight(false);
	}	


	CReportSection* rptDetail=NULL;
	CReportSection *grp;
	CRecord grs(&m_db);
	CString szFeeID, szID;
	CString szSubItem, szType;

	TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};


	CRecord drs(&m_db);
	CString szDeptID;
		
		CArray<RECEIPTINFO, RECEIPTINFO& > payInfo;

		szSQL.Format(_T(" SELECT deptid, admitdate, dischargedate, mainicd, maindisease") \
					_T(" FROM") \
					_T(" (") \
					_T("  select htr_deptid as deptid,") \
					_T("         htr_admitdate as admitdate,") \
					_T("         htr_dischargedate as dischargedate,") \
					_T("         htr_mainicd as mainicd,") \
					_T("         htr_maindisease as maindisease,") \
					_T("         htr_idx as idx") \
					_T("  from hms_treatment_record") \
					_T("  where htr_docno=%ld") \
					_T("  union all") \
					_T("  select hd_admitdept,") \
					_T("         hd_admitdate,") \
					_T("         hd_enddate,") \
					_T("         hd_icd,") \
					_T("         hd_diagnostic,") \
					_T("         0") \
					_T("  from hms_doc") \
					_T("  where hd_docno=%ld") \
					_T(" ) tbl") \
					_T(" WHERE deptid in(select distinct hfe_deptid from hms_fee where hfe_invoiceno=%ld)") \
					_T(" ORDER BY idx"), nDocumentNo, nDocumentNo, nInvoiceNo);

		drs.ExecSQL(szSQL);
//_msg(_T("%s"), szSQL);
		RECEIPTINFO pi;
		CString szDepts;
		szDepts.Empty();

		while (!drs.IsEOF())
		{
			drs.GetValue(_T("deptid"), tmpStr);
			
			bool bFound = false;
			int i = 0;
			for (i =0; i < payInfo.GetCount(); i++)
			{
				pi = payInfo[i];
				if (pi.deptid == tmpStr)
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

			if (bFound)
			{
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

		for (int n = 0; n < payInfo.GetCount(); n++)
		{
			pi = payInfo[n];
			szDeptID = pi.deptid;
//_msg(_T("%s"), szDeptID);
			if (n == 0)
			{
//				rpt.GetReportHeader()->SetValue(_T("admitdate"), CDateTime::Convert(pi.admitdate, yyyymmdd|hhmm, ddmmyyyy|hhmm));
			}
			if (CompareDate(szDischargeDate, pi.dischargedate) < 0)
			{
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

		int nChapter = 0;
		int nCount = 0, nIndex, nChapterID = 0;
		int nItem = 0, nOldItem = 0, nItem2 = 0;
		int nLevel;
		bool bDeleteParent = false;
		bool bLoadItems = false;
		CString szNewGroup, szOldGroup, szParentGroup;
		long nOrderId;

		nTotalAmount = nTotalInspaid = nTotalDiffPaid = 0;
		nGroup1Cost = nGroup1Discount = nGroup1DiffPaid = nGroup1Patpaid = 0;
		nGroup2Cost = nGroup2Discount = nGroup2DiffPaid = nGroup2Patpaid = 0;		
		
		szSQL.Format(_T("select rtrim(hfg_id,'0') as id, ") \
			         _T("hfg_name as name, ") \
					 _T("hfg_level as xlevel, ") \
					 _T("hfg_feeid as feeid ") \
					 _T("from hms_fee_group ") \
					 _T("where hfg_level <= 1 order by hfg_index"));
		grs.ExecSQL(szSQL);

		
		if (szObjectType == _T("I") || szObjectType == _T("C") )
		{	
			//if (m_szPrintAllCostInDischargeReceipt != _T("Y"))
				szWhere.Format(_T(" and (hfe_discount) > 0 "));
			if(!bDetailFee)
			{

			szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		case when hfe_hitech='Y' then 'B9000' else rtrim(hfe_group,'0') end as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_quantity) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_inspaid) as inscost,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_diffcost) as diffpaid,") \
				_T(" 		sum(hfe_patpaid) as patpaid, ") \
				_T(" case when sum(hfe_discount) > 0 then 'I' else 'O' end as inlist ") \
				_T(" FROM hms_fee") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_deptid='%s' and hfe_itemid<>'D0000' and hfe_cost > 0 %s ") \
				_T(" GROUP BY hfe_hitech, hfg_index, hfe_group, hfe_type, hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice") \
				_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
				_T(" ORDER BY hfe_type, hfg_index,  inlist, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szDeptID, szWhere);
			}
			else
			{
				szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		case when hfe_hitech='Y' then 'B9000' else rtrim(hfe_group,'0') end as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_quantity) as qty,") \
				_T(" 		hfe_insprice as unitprice,") \
				_T(" 		sum(hfe_inspaid) as cost,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_diffpaid) as diffpaid,") \
				_T(" 		sum(hfe_patpaid) as patpaid, ") \
				_T(" case when sum(hfe_discount) > 0 then 'I' else 'O' end as inlist ") \
				_T(" FROM hms_fee") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_deptid='%s' and hfe_itemid<>'D0000' and hfe_cost > 0 %s ") \
				_T(" GROUP BY hfe_hitech, hfg_index, hfe_group, hfe_type, hfe_itemid, hfe_desc, hfe_unit, hfe_insprice") \
				_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
				_T(" ORDER BY hfe_type, hfg_index,  inlist, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szDeptID, szWhere);
			}
		}
		else
		{
			szSQL.Format(_T(" SELECT") \
					_T("		hfe_type as feetype, ") \
					_T(" 		rtrim(hfe_group,'0') as groupid,") \
					_T(" 		hfe_itemid as itemid,") \
					_T(" 		hfe_desc as name,") \
					_T(" 		hfe_unit as unit,") \
					_T(" 		sum(hfe_quantity) as qty,") \
					_T(" 		hfe_unitprice as unitprice,") \
					_T(" 		sum(hfe_cost) as cost,") \
					_T(" 		sum(hfe_discount) as discount,") \
					_T(" 		sum(hfe_patpaid) as patpaid,") \
					_T(" 		sum(hfe_diffpaid) as diffpaid") \
					_T(" FROM hms_fee") \
					_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
					_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_deptid='%s' and hfe_itemid<>'D0000' and hfe_cost >0 ") \
					_T(" GROUP BY hfg_index, hfe_group, hfe_type,  hfe_itemid, hfe_desc, hfe_unit, hfe_unitprice") \
					_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
					_T(" ORDER BY hfe_type, hfg_index,  name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szDeptID);

		}

		rs.ExecSQL(szSQL);
		//_fmsg(_T("%s"), szSQL);
		nIndex = 0;
		CString szSubItem, szType;
		int nSubItem = 1;
		nChapterID = 0;
		CArray<FEEITEM, FEEITEM&> feeList;
		FEEITEM fee;

		while (!grs.IsEOF())
		{
			grs.GetValue(_T("xlevel"), nLevel);
			grs.GetValue(_T("id"), szParentGroup);
			grs.GetValue(_T("feeid"), szSubItem);
			szParentGroup.Trim();
			bool bAdd = false;
			rs.MoveFirst();
			while (!rs.IsEOF())
			{
				rs.GetValue(_T("groupid"), tmpStr);
				if (tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup)
				{
					bAdd = true;
					break;
				}
				rs.MoveNext();
			}
			if (!bAdd)
			{
				grs.MoveNext();
				continue;
			}
			
			if (nLevel == 0)
			{
				_tprintf(_T("\r\nSum Chapter: %.2f: %d"), nGroup0Cost, nChapterID);					
				if (nGroup0Cost > 0 && nChapterID > 0)
				{
					CString szLabel;
					TranslateString(_T("Sum"), szLabel);
					tmpStr.Format(_T("%s (%s)"), szLabel, lpszChapter[nChapterID-1]);
					fee.szGroupID = _T("SumAmount");
					fee.szName = tmpStr;
					fee.nCost = nGroup0Cost;
					fee.nDiscount = nGroup0Discount;
					fee.nDiffPaid = nGroup0DiffPaid;
					fee.nPatPaid = nGroup0Patpaid;
					feeList.Add(fee);

				
				}
				tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
				fee.szGroupID = _T("Type");
				fee.szID = tmpStr;
				fee.szName = grs.GetValue(_T("name"));
				nItem = feeList.Add(fee);
				nIndex = 0;
				nGroup0Cost = nGroup0Discount = nGroup0DiffPaid = nGroup0Patpaid = 0;
				nGroup1Cost = nGroup1Discount = nGroup1DiffPaid = nGroup1Patpaid = 0;
				nGroup2Cost = nGroup2Discount = nGroup2DiffPaid = nGroup2Patpaid = 0;
			}
			else
			{
				nIndex++;
				tmpStr.Format(_T("%d."), nIndex);
				fee.szGroupID = _T("Group");
				fee.szID = tmpStr;
				fee.szName = grs.GetValue(_T("name"));
				nItem = feeList.Add(fee);
				nGroup1Cost = nGroup1Discount = nGroup1DiffPaid = nGroup1Patpaid = 0;
				nGroup2Cost = nGroup2Discount = nGroup1DiffPaid = nGroup2Patpaid = 0;
			}
			if(szSubItem == _T("Y")){
				nSubItem = 0;
	//			rs.MoveFirst();
				while(!rs.IsEOF())
				{
					rs.GetValue(_T("feetype"), szType);
					rs.GetValue(_T("groupid"), szNewGroup);
					szNewGroup.Trim();
					if (szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
					{
						if (szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup)
						{
								szOldGroup = szNewGroup;

								if (nGroup2Cost > 0 && nItem2 > 0)
								{
									fee = feeList.GetAt(nOldItem);
									fee.nCost = nGroup2Cost;
									fee.nDiscount = nGroup2Discount;
									fee.nDiffPaid = nGroup2DiffPaid;
									fee.nPatPaid = nGroup2Patpaid;
									feeList.SetAt(nOldItem, fee);
/*
									szSQL.Format(_T(" SELECT mp_name as name,") \
												_T("        adu_name as unit,") \
												_T("        hpol_unitprice as price,") \
												_T("        sum(hpol_qtyissue) as qty,") \
												_T("        sum(hpol_qtyissue*hpol_unitprice) as amount") \
												_T(" FROM hms_pharmaorder") \
												_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
												_T(" LEFT JOIN m_product ON(hpol_product_id=mp_product_id)") \
												_T(" LEFT JOIN m_product_item ON(hpol_product_item_id=mpi_product_item_id)") \
												_T(" LEFT JOIN ad_uom ON(adu_uom_id=mp_uom_id)") \
												_T(" WHERE hpo_docno=%ld") \
												_T("   and hpo_orderid=%ld and hpo_ordertype='M' and hpo_orderstatus<>'O' ") \
												_T(" GROUP BY mp_name, adu_name, hpol_unitprice") \
												_T(" ORDER BY name"), m_nDocumentNo, nOrderId);

								//	rsl.ExecSQL(szSQL);
									double nTotalAmt =0;
									while(!rsl.IsEOF()){
										rsl.GetValue(_T("name"), tmpStr);
										fee.szGroupID = _T("SubItem");
										fee.szID.Empty();
										fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
										fee.szUnit = rsl.GetValue(_T("unit"));
										fee.nQuantity = str2float(rsl.GetValue(_T("qty")));
										fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
										fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
										nTotalAmt += fee.nCost;
										fee.nPatPaid = 0;
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
										fee.nPatPaid = 0;
										fee.nDiscount = nTotalAmt;
										feeList.Add(fee);
									}

									*/
								}

								rs.GetValue(_T("orderid"), nOrderId);

								szSQL.Format(_T("SELECT hfg_name as name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
								CRecord rs2(&m_db);
								rs2.ExecSQL(szSQL);
								fee.szGroupID = _T("SubGroup");
								fee.szID = _T("*");
								fee.szName = rs2.GetValue(_T("name"));
								nItem2 = feeList.Add(fee);
								nOldItem = nItem2;
								nGroup2Cost = nGroup2Discount = nGroup2DiffPaid = nGroup2Patpaid = 0;
						}

						nSubItem++;
					
						nCost = nInsPaid = nDiscount = nDiffPaid = nPatPaid = 0;
						rs.GetValue(_T("cost"), nCost);
						rs.GetValue(_T("inspaid"), nInsPaid);
						rs.GetValue(_T("discount"), nDiscount);
						rs.GetValue(_T("patpaid"), nPatPaid);
						rs.GetValue(_T("diffpaid"), nDiffPaid);

						fee.nCost = nCost;
						fee.nInsPaid = nInsPaid;
						fee.nDiscount = nDiscount;
						fee.nDiffPaid = nDiffPaid;
						fee.nPatPaid = nPatPaid;

						nTotalAmount += nCost;
						nGroup0Cost += nCost;
						nGroup1Cost += nCost;
						nGroup2Cost += nCost;
						
						fee.szGroupID = _T("Item");
						fee.szID.Empty();
						fee.szName = rs.GetValue(_T("name"));
						fee.szUnit = rs.GetValue(_T("unit"));
						fee.nQuantity = str2float(rs.GetValue(_T("qty")));
						fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
						
						
						
						fee.nDiscount = nDiscount;
						//nPatPaid = nCost - nDiscount;
						fee.nPatPaid = nPatPaid;

						nTotalInsCost += nInsPaid;
						nTotalInspaid += nDiscount;
						nTotalDiffPaid += nDiffPaid;
						
						nGroup0Discount += nDiscount;
						nGroup1Discount += nDiscount;
						nGroup2Discount += nDiscount;

						nGroup0DiffPaid += nDiffPaid;
						nGroup1DiffPaid += nDiffPaid;
						nGroup2DiffPaid += nDiffPaid;

						nGroup0Patpaid += nPatPaid;
						nGroup1Patpaid += nPatPaid;
						nGroup2Patpaid += nPatPaid;


						feeList.Add(fee);
							
						if(szNewGroup.Left(2) == _T("B2") || szNewGroup.Left(2) == _T("B3") || szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5"))
						{
							CString szItemID;
							rs.GetValue(_T("itemid"), szItemID);

								szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_unitprice as price, ") \
								_T(" 	sum(hpol_qtyissue) as qty, ") \
								_T(" 	sum(hpol_qtyissue*hpol_unitprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorderline ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as NVARCHAR2(3)) from hms_operation where ho_itemid='%s' and ho_deptid in('%s') ) and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY hpol_productname, hpol_productuom, hpol_unitprice ORDER BY name "), m_nDocumentNo, szItemID, szDeptID);
								
								//rsl.ExecSQL(szSQL);
								double nTotalAmt =0;
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("name"), tmpStr);
									fee.szGroupID = _T("SubItem");
									fee.szID.Empty();
									fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
									fee.szUnit = rsl.GetValue(_T("unit"));
									fee.nQuantity = str2float(rsl.GetValue(_T("qty")));
									fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
									fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
									nTotalAmt += fee.nCost;
									fee.nPatPaid = 0;
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
									fee.nPatPaid = 0;
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
						fee.nDiffPaid = nGroup2DiffPaid;
						fee.nPatPaid = nGroup2Patpaid;
						feeList.SetAt(nOldItem, fee);
					}
					//In phan vat tu tieu hao dung trong CLS
					/*
					if(nOrderId > 0 && szType == _T("P") && nOldItem > 0)
					{

						szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
										_T(" 	hpol_productuom as unit, ") \
										_T(" 	hpol_unitprice as price, ") \
										_T(" 	sum(hpol_qtyissue) as qty, ") \
										_T(" 	sum(hpol_qtyissue*hpol_unitprice) as amount ") \
										_T(" FROM hms_pharmaorder") \
										_T(" LEFT JOIN hms_pharmaorder_line ON(hpo_orderid=hpol_orderid)") \
										_T(" WHERE 	hpo_docno=%ld ") \
										_T(" 	and hpo_feeid ='%ld' and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
										_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo, nOrderId);

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
										fee.nPatPaid = 0;
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
										fee.nPatPaid = 0;
										fee.nDiscount = nTotalAmt;
										feeList.Add(fee);
									}

						}
					*/
					nGroup2Cost = nGroup2Discount = nGroup2DiffPaid = nGroup2Patpaid = 0;
					nItem2 = 0;
					fee = feeList.GetAt(nItem);
					fee.szGroupID = _T("SubAmount");
					TranslateString(_T("Sub Amount"), fee.szName);
					fee.nCost = nGroup1Cost;
					fee.nDiscount = nGroup1Discount;
					fee.nDiffPaid = nGroup1DiffPaid;
					fee.nPatPaid = nGroup1Patpaid;
					if(nIndex > 1)
						nItem = feeList.Add(fee);
					nGroup1Cost = nGroup1Discount =  nGroup1DiffPaid = nGroup1Patpaid = 0;
				}
			}
			grs.MoveNext();
		
		}

		if(nGroup0Cost > 0 && nChapterID > 0){
					CString szLabel;
					TranslateString(_T("Sum"), szLabel);
					tmpStr.Format(_T("%s (%s)"), szLabel, lpszChapter[nChapterID-1]);
					fee.szGroupID = _T("SumAmount");
					fee.szName = tmpStr;
					fee.nCost = nGroup0Cost;
					fee.nDiscount = nGroup0Discount;
					fee.nDiffPaid = nGroup0DiffPaid;
					fee.nPatPaid = nGroup0Patpaid;
					feeList.Add(fee);

		}


		if(nTotalAmount > 0){
				TranslateString(_T("Total Amount"), tmpStr);
				fee.szGroupID = _T("TotalAmount");
				fee.szName = tmpStr;
				fee.nCost = (nTotalAmount);
				fee.nDiscount = (nTotalDiscount);
				fee.nDiffPaid = (nTotalDiffPaid);
				fee.nPatPaid = (nTotalPatpaid);
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
					FormatCurrency(fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
					FormatCurrency(fee.nPatPaid, tmpStr);
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
					FormatCurrency(fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);

					FormatCurrency(fee.nPatPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupPatPaid"), tmpStr);

				}
				else if(szType == _T("SumAmount")){
					grp = rpt.GetGroupHeader(2);
					rptDetail = rpt.AddDetail(grp);
					rptDetail->GetItem(_T("SubGroupName"))->SetBold(true);
					rptDetail->GetItem(_T("SubGroupCost"))->SetBold(true);
					rptDetail->GetItem(_T("SubGroupDiscount"))->SetBold(true);
					rptDetail->GetItem(_T("SubGroupPatpaid"))->SetBold(true);
					rptDetail->SetValue(_T("SubGroupName"), fee.szName);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("SubGroupCost"), tmpStr);

					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
					FormatCurrency(fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("SubGroupDiffPaid"), tmpStr);
					FormatCurrency(fee.nPatPaid, tmpStr);
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
					FormatCurrency(fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("8"), tmpStr);
					FormatCurrency(fee.nPatPaid, tmpStr);
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
						FormatCurrency(fee.nDiscount, tmpStr);
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
						rptDetail->SetValue(_T("8"), tmpStr);
						FormatCurrency(fee.nDiscount, tmpStr);
						rptDetail->SetValue(_T("6"), tmpStr);
						FormatCurrency(fee.nPatPaid, tmpStr);
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

					FormatCurrency(fee.nDiffPaid, tmpStr);
					rptDetail->SetValue(_T("TotalDiffPaid"), tmpStr);

					FormatCurrency(fee.nPatPaid, tmpStr);
					rptDetail->SetValue(_T("TotalPatPaid"), tmpStr);
				}
			
		}
	}
	
	szSQL.Format(_T(" SELECT hfe_amount,") \
_T("   hfe_inspaid,") \
_T("   hfe_discount,") \
_T("   hfe_patpaid,") \
_T("   hfe_payment,") \
_T("   hfe_diffcost,") \
_T("   hfe_diffpaid,") \
_T("   hfe_deposit,") \
_T("   hfe_refund,") \
_T("   hfe_freeamount") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfe_invoiceno=%ld"), nInvoiceNo);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		double nTotalDiffPaid;
		double nTotalPayment;
		double nTotalPatPaid;

		rs.GetValue(_T("hfe_amount"), nTotalCost);
		rs.GetValue(_T("hfe_inspaid"), nTotalInsCost);
		rs.GetValue(_T("hfe_discount"), nTotalDiscount);
		rs.GetValue(_T("hfe_patpaid"), nTotalPatPaid);
		rs.GetValue(_T("hfe_diffpaid"), nTotalDiffPaid);
		rs.GetValue(_T("hfe_deposit"), nTotalDeposit);
		rs.GetValue(_T("hfe_refund"), nTotalRefund);
		rs.GetValue(_T("hfe_freeamount"), nTotalFree);
		rs.GetValue(_T("hfe_payment"), nTotalPayment);

		rpt.GetReportFooter()->SetValue(_T("PatientSign"), szPatientName);
		FormatCurrency(ceil(nTotalCost), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumAmount"), tmpStr);
		CString szSumInWord;
		tmpStr.Format(_T("%.0f"), nTotalCost);
		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng.");
		rpt.GetReportFooter()->SetValue(_T("SumInWord"), szSumInWord);
		FormatCurrency(nTotalDiscount, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsDiscount"), tmpStr);

		FormatCurrency(ceil(nTotalInsCost-nTotalDiscount), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumInsUnPaid"), tmpStr);

		FormatCurrency(ceil(nTotalDiffPaid), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiffPaid"), tmpStr);


		FormatCurrency(nTotalPatPaid, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumPatPaid"), tmpStr);



		FormatCurrency((nTotalDeposit), tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDeposit"), tmpStr);
		FormatCurrency(nTotalFree, tmpStr);
		rpt.GetReportFooter()->SetValue(_T("SumDiscount"), tmpStr);
		if(nTotalRefund > 0)
		{
			FormatCurrency(nTotalRefund, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);
		}
		else
		{
			FormatCurrency(nTotalPayment, tmpStr);
			rpt.GetReportFooter()->SetValue(_T("SumPayment"), tmpStr);

		}
		
	}
	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);

//	rpt.Print();
	rpt.PrintPreview();

}





void	CMainFrame::PrintDischargeReceiptFromInvoice_New(long nInvoiceNo, bool bDetailForCost)
{

	CReport rpt;
	CString tmpStr, szSQL, szObjectType, szWhere, szAdmitDate, szEndDate,szDepartments;
	CRecord rs(&m_db);
	CRecord rsd(&m_db);
	CRecord rsl(&m_db);
	long	nDocumentNo;
	bool	bDetailFee = bDetailForCost;
	
	double nDeposit, nDepositReceipt, nDiscount, nRefund;
	CString szDesc;
	
	

	if(m_szReceiptMethod == _T("G")){
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
				_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
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
				_T("	cast(hd_disrate as integer) as disrate, ") \
				_T("	hd_insline as insline, ") \
				_T("	hc_cardno as cardno, ") \
				_T("	hc_regdate as regdate, ") \
				_T("	hc_expdate as expdate, ") \
				_T("	hc_regcode as regcode, ") \
				_T("	(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace, ") \
				_T("	hd_xobject as xobject, ") \
				_T("	hd_xcardno as xcardno, ") \
				_T("	hd_xissuedate as xissuedate, ") \
				_T(" 	hfe_deptid as deptid,") \
				_T(" 	hfe_depts as depts,") \
				_T(" 	hfe_bookno as bookno,") \
				_T(" 	hfe_serialno as serialno,") \
				_T(" 	hfe_recvno as recvno,") \
				_T(" 	hfe_recvdate as recvdate, ") \
				_T(" 	hfe_receiver as receiver,") \
				_T(" 	hfe_desc as reason, ") \
				_T(" 	hfe_cost as cost,") \
				_T(" 	hfe_discount as discount,") \
				_T(" 	hfe_patpaid as patpaid, ") \
				_T(" 	hfe_advanceamt as advanceamt, ") \
				_T(" 	hfe_advpayment as advpayment, ") \
				_T(" 	hfe_refundamt as refundamt ") \
				_T(" FROM hms_fee_invoice ") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hfe_patientno)") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno) ") \
				_T(" LEFT JOIN hms_treatment_record ON(hfe_docno=htr_docno) ") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld "), m_nDocumentNo, nInvoiceNo);
	
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		return;
	}

	rs.GetValue(_T("advanceamt"), nDeposit);
	rs.GetValue(_T("advpayment"), nDepositReceipt);
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
		//TranslateString(_T("Outline"), tmpStr);
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T(""));
	}
	else
	{
		rpt.GetReportHeader()->SetValue(_T("NotInsLine"), _T("X"));
		rpt.GetReportHeader()->SetValue(_T("InsLine"), _T(""));
	}
	
	//_msg(_T("%s"),tmpStr);
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
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id or hh_newprov_id=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
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
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate1"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	
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
		
		CArray<RECEIPTINFO, RECEIPTINFO& > payInfo;

		szSQL.Format(_T("SELECT deptid, admitdate, dischargedate, mainicd, maindisease ") \
		_T("FROM (select htr_deptid as deptid, date(htr_admitdate) as admitdate, date(htr_dischargedate) as dischargedate, htr_mainicd as mainicd, htr_maindisease as maindisease, htr_idx as idx ") \
		_T(" from hms_treatment_record ") \
		_T(" where htr_docno=%ld ") \
		_T("union all select hd_admitdept, date(hd_admitdate), date(hd_enddate), hd_icd, hd_diagnostic, 0 from hms_doc where hd_docno=%ld ") \
		_T(") as tbl ") \
		_T(" where deptid in(select distinct hfe_deptid from hms_fee where hfe_invoiceno=%ld)") \
		_T(" order by idx "), nDocumentNo, nDocumentNo, nInvoiceNo);
//_fmsg(_T("%s"), szSQL);

		drs.ExecSQL(szSQL);

		RECEIPTINFO pi;
		CString szDepts;
		szDepts.Empty();

		while(!drs.IsEOF()){
			drs.GetValue(_T("deptid"), tmpStr);
			
			bool bFound = false;
			int i = 0;
			for (i =0; i < payInfo.GetCount(); i++){
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
		
		szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
		grs.ExecSQL(szSQL);

		

		if(szObjectType == _T("I") || szObjectType == _T("C") || szObjectType == _T("D"))
		{	
			if(m_szPrintAllCostInDischargeReceipt != _T("Y"))
				szWhere.Format(_T(" and (hfe_discount+hfe_diffcost) > 0 "));

			szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		rtrim(hfe_group,'0') as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_quantity) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		hfe_insprice as insprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_inspaid) as inspaid,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_patpaid + hfe_diffpaid) as patpaid,") \
				_T(" 		sum(hfe_patdebt ) as patdebt,") \
				_T(" 		sum(hfe_patdebt) as unpaid") \
				_T(" FROM hms_fee") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_deptid='%s' and hfe_itemid<>'D0000' %s ") \
				_T(" GROUP BY hfg_index, groupid, feetype, itemid, name, unit, unitprice, insprice ") \
				_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
				_T(" ORDER BY hfg_index,  name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szDeptID, szWhere);
		}
		else
		{
			szSQL.Format(_T(" SELECT") \
					_T("		hfe_type as feetype, ") \
					_T(" 		rtrim(hfe_group,'0') as groupid,") \
					_T(" 		hfe_itemid as itemid,") \
					_T(" 		hfe_desc as name,") \
					_T(" 		hfe_unit as unit,") \
					_T(" 		sum(hfe_quantity) as qty,") \
					_T(" 		hfe_unitprice as unitprice,") \
					_T(" 		hfe_insprice as insprice,") \
					_T(" 		sum(hfe_cost) as cost,") \
					_T(" 		sum(hfe_inspaid) as inspaid,") \
					_T(" 		sum(hfe_discount) as discount,") \
					_T(" 		sum(hfe_patpaid + hfe_diffpaid) as patpaid,") \
					_T(" 		sum(hfe_patdebt) as patdebt,") \
					_T(" 		sum(hfe_patdebt) as unpaid") \
					_T(" FROM hms_fee") \
					_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
					_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld and hfe_deptid='%s' and hfe_itemid<>'D0000' ") \
					_T(" GROUP BY hfg_index, groupid, feetype,  itemid, name, unit, unitprice, insprice") \
					_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
					_T(" ORDER BY hfg_index, name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szDeptID);

		}
		rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
		nIndex = 0;
		CString szSubItem, szType;
		int nSubItem = 1;
		nChapterID = 0;
		CArray<FEEITEM, FEEITEM&> feeList;
		FEEITEM fee;
		while(!grs.IsEOF()){
			grs.GetValue(_T("xlevel"), nLevel);
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
									fee.nPatPaid = dGroup2[2];
									fee.nPatDebt = dGroup2[3];
									fee.nInsPaid = dGroup2[5];
									feeList.SetAt(nOldItem, fee);
								}
								szSQL.Format(_T("SELECT hfg_name as name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
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
							fee.nQuantity = str2float(rs.GetValue(_T("qty")));
							fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
							fee.nInsPrice = ToDouble(rs.GetValue(_T("insprice")));
							fee.nCost = ToDouble(rs.GetValue(_T("cost")));
							fee.nPatPaid = ToDouble(rs.GetValue(_T("patpaid")));
							fee.nInsPaid = ToDouble(rs.GetValue(_T("inspaid")));
							fee.nDiscount = ToDouble(rs.GetValue(_T("discount")));
							feeList.Add(fee);
							

							if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
								CString szItemID;
								rs.GetValue(_T("itemid"), szItemID);
								szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_unitprice as price, ") \
								_T(" 	sum(hpol_qtyissue) as qty, ") \
								_T(" 	sum(hpol_qtyissue*hpol_unitprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorder_line ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld and hpo_deptid='%s'") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' ) and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo,szDeptID, szItemID);
								rsl.ExecSQL(szSQL);
								double nTotalAmt =0;
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("name"), tmpStr);
									fee.szGroupID = _T("SubItem");
									fee.szID.Empty();
									fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
									fee.szUnit = rsl.GetValue(_T("unit"));
									fee.nQuantity = str2float(rsl.GetValue(_T("qty")));
									fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
									fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
									nTotalAmt += fee.nCost;
									fee.nPatPaid = 0;
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
									fee.nPatPaid = 0;
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
						fee.nPatPaid = dGroup2[2];
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
					fee.nPatPaid = dGroup1[2];
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
				fee.nPatPaid = dTotal[2];
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
					FormatCurrency(fee.nPatPaid, tmpStr);
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
					FormatCurrency(fee.nPatPaid, tmpStr);
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
					FormatCurrency(fee.nPatPaid, tmpStr);
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
					FormatCurrency(fee.nPatPaid, tmpStr);
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
		
		double dGroup1[6];
		double dGroup2[6];
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
		
		szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
		grs.ExecSQL(szSQL);

		

		if(szObjectType == _T("I") || szObjectType == _T("C") || szObjectType == _T("D"))
		{	
			szWhere.Empty();
			if(m_szPrintAllCostInDischargeReceipt != _T("Y"))
				szWhere.Format(_T(" and (hfe_discount+hfe_diffcost) > 0"));

			szSQL.Format(_T(" SELECT") \
				_T("		hfe_type as feetype, ") \
				_T(" 		rtrim(hfe_group,'0') as groupid,") \
				_T(" 		hfe_itemid as itemid,") \
				_T(" 		hfe_desc as name,") \
				_T(" 		hfe_unit as unit,") \
				_T(" 		sum(hfe_quantity) as qty,") \
				_T(" 		hfe_unitprice as unitprice,") \
				_T(" 		hfe_insprice as insprice,") \
				_T(" 		sum(hfe_cost) as cost,") \
				_T(" 		sum(hfe_inspaid) as inspaid,") \
				_T(" 		sum(hfe_discount) as discount,") \
				_T(" 		sum(hfe_patpaid+hfe_diffpaid) as patpaid,") \
				_T(" 		sum(hfe_patdebt) as patdebt,") \
				_T(" 		sum(hfe_patdebt) as unpaid") \
				_T(" FROM hms_fee") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
				_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld %s ") \
				_T(" GROUP BY hfg_index, groupid, feetype, itemid, name, unit, unitprice, insprice") \
				_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
				_T(" ORDER BY hfg_index,  name, unit, unitprice"), m_nDocumentNo, nInvoiceNo, szWhere);
		}
		else
		{
			szSQL.Format(_T(" SELECT") \
					_T("		hfe_type as feetype, ") \
					_T(" 		rtrim(hfe_group,'0') as groupid,") \
					_T(" 		hfe_itemid as itemid,") \
					_T(" 		hfe_desc as name,") \
					_T(" 		hfe_unit as unit,") \
					_T(" 		sum(hfe_quantity) as qty,") \
					_T(" 		hfe_unitprice as unitprice,") \
					_T(" 		hfe_insprice as insprice,") \
					_T(" 		sum(hfe_cost) as cost,") \
					_T(" 		sum(hfe_inspaid) as inspaid,") \
					_T(" 		sum(hfe_discount) as discount,") \
					_T(" 		sum(hfe_patpaid+hfe_diffpaid) as patpaid,") \
					_T(" 		sum(hfe_patdebt) as patdebt,") \
					_T(" 		sum(hfe_patdebt) as unpaid") \
					_T(" FROM hms_fee") \
					_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
					_T(" WHERE hfe_docno=%ld and hfe_invoiceno=%ld ") \
					_T(" GROUP BY hfg_index, groupid, feetype,  itemid, name, unit, unitprice, insprice") \
					_T(" HAVING sum(hfe_quantity*hfe_cost) > 0 ") \
					_T(" ORDER BY hfg_index,  name, unit, unitprice"), m_nDocumentNo, nInvoiceNo);

		}
		
		rs.ExecSQL(szSQL);

	

		nIndex = 0;
		int nSubItem = 1;
		nChapterID = 0;
		CArray<FEEITEM, FEEITEM&> feeList;
		FEEITEM fee;
		
		while(!grs.IsEOF()){
			grs.GetValue(_T("xlevel"), nLevel);
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
									fee.nPatPaid = dGroup2[2];
									fee.nPatDebt = dGroup2[3];
									fee.nInsPaid = dGroup2[5];
									feeList.SetAt(nOldItem, fee);
								}
								szSQL.Format(_T("SELECT hfg_name as name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
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
							fee.nQuantity = str2float(rs.GetValue(_T("qty")));
							fee.nPrice = ToDouble(rs.GetValue(_T("unitprice")));
							fee.nInsPrice = ToDouble(rs.GetValue(_T("insprice")));
							fee.nCost = ToDouble(rs.GetValue(_T("cost")));
							fee.nPatPaid = ToDouble(rs.GetValue(_T("patpaid")));
							fee.nInsPaid = ToDouble(rs.GetValue(_T("inspaid")));
							fee.nDiscount = ToDouble(rs.GetValue(_T("discount")));
							feeList.Add(fee);
							
							if(szNewGroup.Left(2) == _T("B4") || szNewGroup.Left(2) == _T("B5")){
								CString szItemID;
								rs.GetValue(_T("itemid"), szItemID);
								szSQL.Format(_T(" SELECT 	hpol_productname as name, ") \
								_T(" 	hpol_productuom as unit, ") \
								_T(" 	hpol_unitprice as price, ") \
								_T(" 	sum(hpol_qtyissue) as qty, ") \
								_T(" 	sum(hpol_qtyissue*hpol_unitprice) as amount ") \
								_T(" FROM hms_pharmaorder") \
								_T(" LEFT JOIN hms_pharmaorder_line ON(hpo_orderid=hpol_orderid)") \
								_T(" WHERE 	hpo_docno=%ld ") \
								_T(" 	and hpo_feeid in(select cast(ho_idx as text) from hms_operation where ho_itemid='%s' ) and hpo_ordertype='M' and hpo_orderstatus<>'O'  ") \
								_T(" GROUP BY name, unit, price ORDER BY name "), m_nDocumentNo, szItemID);
								rsl.ExecSQL(szSQL);
								while(!rsl.IsEOF()){
									rsl.GetValue(_T("name"), tmpStr);
									fee.szGroupID = _T("SubItem");
									fee.szID.Empty();
									fee.szName.Format(_T("   +   %s"), rsl.GetValue(_T("name")));
									fee.szUnit = rsl.GetValue(_T("unit"));
									fee.nQuantity = str2float(rsl.GetValue(_T("qty")));
									fee.nPrice = ToDouble(rsl.GetValue(_T("price")));
									fee.nCost = ToDouble(rsl.GetValue(_T("amount")));
									fee.nPatPaid = 0;
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
						fee.nPatPaid = dGroup2[2];
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
					fee.nPatPaid = dGroup1[2];
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
				fee.nPatPaid = dTotal[2];
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
					FormatCurrency(fee.nPatPaid, tmpStr);
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
					FormatCurrency(fee.nPatPaid, tmpStr);
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
					FormatCurrency(fee.nPatPaid, tmpStr);
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
					FormatCurrency(fee.nPatPaid, tmpStr);
					rptDetail->SetValue(_T("9"), tmpStr);
				}
				else if(szType == _T("TotalAmount")){
					grp = rpt.GetGroupHeader(3);
					rptDetail = rpt.AddDetail(grp);
					FormatCurrency(fee.nCost, tmpStr);
					rptDetail->SetValue(_T("TotalAmount"), tmpStr);
					FormatCurrency(fee.nDiscount, tmpStr);
					rptDetail->SetValue(_T("TotalDiscount"), tmpStr);
					FormatCurrency(fee.nPatPaid, tmpStr);
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
		szWhere.Format(_T("and hfe_deptid='%s' "), m_szReceiptDeptID);
	}
	else
		szWhere.Empty();

	szSQL.Format(_T(" SELECT 	date(hfe_recvdate) as recvdate, ") \
_T(" 	hfe_receiver as receiveby, ") \
_T(" 	hfe_desc as desc, hfe_type as feetype, ") \
_T(" 	case when hfe_type='A' then hfe_patpaid ") \
_T(" 	when hfe_type='D' then hfe_discount ") \
_T(" 	when hfe_type='R' then hfe_cost else 0 end as amount") \
_T(" FROM hms_fee_invoice") \
_T(" WHERE hfe_docno=%ld and hfe_type in('A') and hfe_category='A' %s ") \
_T(" ORDER BY hfe_invoiceno;"), m_nDocumentNo, szWhere);
	rs.ExecSQL(szSQL);
	

	double nTotalDeposit=0, nTotalDiscount=0;
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
			nTotalDeposit += ToDouble(tmpStr);
		else if(szType == _T("D"))
			nTotalDiscount += ToDouble(tmpStr);
		rptDetail->SetValue(_T("SubGroupDiscount"), tmpStr);
		rs.MoveNext();
	}

	if(nDeposit <= 0)
		nDeposit = nTotalDeposit;
	FormatCurrency(ceil(nDeposit), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Deposit"), tmpStr);

	szSQL.Format(_T(" SELECT sum(hfe_discount) as amount ") \
	_T(" FROM hms_fee_invoice ") \
	_T(" WHERE hfe_docno=%ld and hfe_type in('D') "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	tmpStr.Empty();
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("amount"), nDiscount);
		
	}
	if(nDiscount <= 0)
		nDiscount = nTotalDiscount;

	tmpStr.Empty();
	FormatCurrency(ceil(nDiscount), tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Discount"), tmpStr);

	tmpStr.Empty();
	if(bDetailFee)
		szWhere.Format(_T(" and hfe_refinvoice=%ld"), nInvoiceNo);
	else
		szWhere.Empty();

	szSQL.Format(_T("select hfe_desc, case when hfe_type='R' then hfe_cost else hfe_patpaid end as amount from hms_fee_invoice where hfe_docno=%ld and hfe_type in('A','R') and hfe_category='D' %s"), nDocumentNo, szWhere);

	rs.ExecSQL(szSQL);
	if(!rs.IsEOF()){
		double nCost;
		CString szAmount;
		rs.GetValue(_T("amount"), nCost);
		FormatCurrency(ceil(nCost), szAmount);
		tmpStr.Format(_T("%s: %s"),
			rs.GetValue(_T("hfe_desc")), szAmount);
		rpt.GetReportFooter()->SetValue(_T("Payable"), tmpStr);
	}
	else	
		rpt.GetReportFooter()->SetValue(_T("Payable"), _T(""));

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
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
	double nDeposit, nDepositReceipt, nDiscount=0, nRefund;

	szSQL.Format(_T(" SELECT patientno,docno,pname,birthdate,age, yearofbirth, ") \
	_T(" 	sex, ethnic,ethnicdesc,detailaddress,address,workplace,doctor,icd10, 	diagnostic,reldisease,result,examdate,enddate,") \
	_T(" 	admitdate,mainicd,maindisease,treatdoctor,dischargedate,Numbertreat, 	") \
	_T(" 	ireldisease,iresult,insline,cardno,regdate,expdate,regcode,objecttype,disrate,") \
	_T(" 	sum(hfe_cost) as cost,	sum(hfe_cost - hfe_inspaid) as difcost,") \
	_T(" 	sum(hfe_inspaid) as inspaid,sum(hfe_discount) as discount,") \
	_T(" 	sum(hfe_patpaid+hfe_diffpaid) as patpaid,") \
	_T(" 	sum(hfe_patdebt) as patdebt,sum(hfe_patdebt) as unpaid") \
	_T(" FROM (") \
	_T(" 	 SELECT	distinct on(hd_docno) hd_patientno as patientno,   	hd_docno as docno, 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname, 	") \
	_T(" 		hp_birthdate as birthdate, 	 	hms_getage(date(hd_admitdate), hp_birthdate) as age,	date_part('year', hp_birthdate) as yearofbirth,  ") \
	_T(" 		sys_sel_getname('sys_sex', hp_sex) as sex,	hp_ethnic as ethnic,	 	") \
	_T(" 		(select ss_desc from sys_sel where ss_id='sys_ethnic' and ss_code=cast(hp_ethnic as text)) as ethnicdesc,  	 	") \
	_T(" 		nvl(hd_dtladdr, hp_dtladdr) as detailaddress, 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address, 	hp_workplace as workplace, 	 	") \
	_T(" 		hd_doctor as doctor, 	hd_icd as icd10, 	hd_diagnostic as diagnostic, 	 	") \
	_T(" 		hd_reldisease as reldisease, (select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hd_result) as result,  	 	") \
	_T(" 		date(hd_admitdate) as examdate, 	date(hd_enddate) as enddate, 	date(hcr_admitdate) as admitdate, 	 	") \
	_T(" 		date(hcr_dischargedate) as dischargedate,	date(hcr_dischargedate)+1 - date(hcr_admitdate) as Numbertreat,  	 	") \
	_T(" 		hcr_mainicd as mainicd , 	hcr_maindisease as maindisease ,	hcr_treatdoctor as treatdoctor, 	 	") \
	_T(" 		hcr_reldisease as ireldisease,	(select ss_desc from sys_sel where ss_id='hms_result' and ss_code=hcr_result)  as iresult, 	 	") \
	_T(" 		(select ho_type from hms_object where ho_id=hd_object) as objecttype, 	cast(hd_disrate as integer) as disrate, 	 	") \
	_T(" 		hd_insline as insline, 	hc_cardno as cardno, 	hc_regdate as regdate, 	hc_expdate as expdate, 	hc_regcode as regcode, 	 	") \
	_T(" 		(SELECT hh_name FROM hms_hospital WHERE hh_id=hc_regcode) as regplace ") \
	_T(" 	FROM hms_patient") \
	_T(" 	LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
	_T(" 	LEFT JOIN hms_clinical_record ON(hcr_docno=hd_docno)   ") \
	_T(" 	LEFT JOIN hms_treatment_record ON(hcr_docno=htr_docno)   ") \
	_T(" 	LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
	_T(" 	") \
	_T(" ) AS tbl LEFT JOIN hms_fee ON (hfe_docno = docno)") \
	_T(" WHERE hfe_docno =%d and hfe_invoiceno =%d") \
	_T(" GROUP BY patientno,docno,pname,birthdate,age, yearofbirth, ") \
	_T(" 	sex, ethnic,ethnicdesc,detailaddress,address,workplace,doctor,icd10, 	") \
	_T(" 	diagnostic,reldisease,result,examdate,enddate,") \
	_T(" 	admitdate,mainicd,maindisease,treatdoctor,dischargedate,Numbertreat, 	") \
	_T(" 	ireldisease,iresult,insline,cardno,regdate,expdate,regcode,objecttype,disrate") \
	_T(" HAVING sum(hfe_cost) > 0") , m_nDocumentNo, nInvoiceNo);
	
	//_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return;

	rs.GetValue(_T("advanceamt"), nDeposit);
	rs.GetValue(_T("advpayment"), nDepositReceipt);
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
		tmpStr.Format(_T("select sp_name as insname from sys_prov left join hms_hospital on(hh_provid=sp_id or hh_newprov_id=sp_id) where trim(hh_id)=trim('%s') "), szRegCode);
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
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	rpt.GetReportFooter()->SetValue(_T("ReceiptDate1"), CDateTime::Convert(tmpStr,yyyymmdd||hhmm,ddmmyyyy|hhmm));
	
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
	double dCeiling	= 0;
	double dHemaPaidLimit = 10000000;
	double dInpaid =0;
	double dDifcost =0;
	int nCardDiscount = 100 - ToInt(m_wndPatientFee.m_szCardDiscount);

	rs.GetValue(_T("inspaid"), dInpaid);
	rs.GetValue(_T("difcost"), dDifcost);
	rs.GetValue(_T("cost"), dTotalCost);
	FormatCurrency(dTotalCost, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalAmount"), tmpStr);
	rs.GetValue(_T("discount"), dTotalInsPaid);
	FormatCurrency(dInpaid, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("TotalInsurance"), tmpStr);
	FormatCurrency(dTotalInsPaid, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("InsurancePaid"), tmpStr);

	dCeiling = (dInpaid * 5) / 100;
	dTotalHemaPaid = dDifcost + dCeiling;	

	if(dTotalHemaPaid > dHemaPaidLimit)
		dTotalHemaPaid = dHemaPaidLimit;	
	
	if(outline == _T("Y"))	
		dTotalPatpaid = dTotalCost-dTotalInsPaid-dTotalHemaPaid;
	else
		dTotalPatpaid=0;

	
	if (dTotalPatpaid < 0) dTotalPatpaid =0;
	CString szDiscount;
	FormatCurrency(dTotalPatpaid, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("PatientPaid"), tmpStr);	
	FormatCurrency(dTotalHemaPaid, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("HemaPaid"), tmpStr);	
	FormatCurrency(dCeiling, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("PatientPay"), tmpStr);
	FormatCurrency(dDifcost, tmpStr);
	rpt.GetReportFooter()->SetValue(_T("Ceiling"), tmpStr);
	
	CDate sysDate;
	sysDate.ParseDate(GetSysDate());
	rpt.GetReportFooter()->Format(_T("PrintDate"), sysDate.GetDay(), sysDate.GetMonth(), sysDate.GetYear());
//	rpt.Print();
	rpt.PrintPreview();

}




void CMainFrame::OnSize(UINT nType, int cx, int cy)
{
	CHMSMainFrame::OnSize(nType, cx, cy);
	
}
bool CMainFrame::IsAllowPaymentFees(long nDocumentNo){
	return true;
}

bool CMainFrame::IsFinishAndPaymentFees(long nDocumentNo){
	return true;
}
bool CMainFrame::IsInPatient()
{	
	if(m_nInpatient > 0)
	{
		m_szFeeTypes = _T("'I','T','O','P','I','D','B','M','S','X','J' ");
		return true;
	}
	else
	{
		m_szFeeTypes = m_szFeeTypesPerm;
	}
	return false;

}
bool CMainFrame::IsDischarge(){
	CRecord rs(&m_db);
	CString szSQL, szStatus;
	szSQL.Format(_T("SELECT hcr_status FROM hms_clinical_record where hcr_docno=%ld "), m_nDocumentNo);
	rs.ExecSQL(szSQL);
	m_bDischarge = false;
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hcr_status"), szStatus);
		if(szStatus == _T("T"))
			m_bDischarge = true;
	}
	return m_bDischarge;
}
void CMainFrame::OnMenuReports()
{
	if (CheckPermission(_T("04")))
	{
		CHMSReportFormDialog dlg(this);
		dlg.DoModal();
	}
	else
		AfxMessageBox(_T("Chưa được cấp quyền 04, vui lòng liên hệ admin"));
}


bool CMainFrame::IsAutoSerialNo(){
	return m_bAutoSerial;
}

void CMainFrame::IncreaseReceiptNo(long nCurrReceiptNo){
	CString szSQL;
	szSQL.Format(_T("UPDATE hms_fee_control SET hfc_receiptno=%ld WHERE hfc_userid='%s' and hfc_receiptno < %ld "), nCurrReceiptNo , GetCurrentUser(), nCurrReceiptNo);
	ExecSQL(szSQL);
}


#include "HMSInvoiceDateSettingDialog.h"

void CMainFrame::OnFileSetupreceiptdate()
{
	CHMSInvoiceDateSettingDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{
		m_szRecvDate = dlg.m_szWorkingDate;
		CString szStatusLabel, szStatus;
		TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
		szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(m_szRecvDate));
		szStatus.AppendFormat(_T(" - Server:%s"), GetHost());
		SetStatusText(szStatus, 1);
	}
}
#include "HMSCheckDrugExistDialog.h"
bool CMainFrame::IsCheckDrugExist(long nDocno){
	CRecord rs(&m_db);
	bool	bFound = false;
	CString szSQL, tmpStr, szGroupItemid, szNewOrder, szOldOrder, szNewItem, szOldItem;


	szSQL.Format(_T("SELECT count(hpo_orderid) FROM hms_pharmaorder WHERE hpo_docno=%ld AND hpo_orderstatus IN('O','S')"), m_nDocumentNo);
	rs.ExecSQL(szSQL);

	if(rs.GetIntValue() > 1){
	
		szSQL.Format(_T("SELECT DISTINCT hpol_orderid, hpol_productcode,hpol_productname FROM hms_pharmaorderline_view ") \
			_T("WHERE hpol_docno=%ld ORDER BY hpol_productcode "), m_nDocumentNo);
		rs.ExecSQL(szSQL);
	
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("hpol_orderid"), szNewOrder);
			rs.GetValue(_T("hpol_productcode"), szNewItem);			
			if(szNewItem != szOldItem && !szNewItem.IsEmpty()){
				szOldItem = szNewItem;
				szOldOrder = szNewOrder;
			}
			else
			{
				if(szNewOrder != szOldOrder && !szNewOrder.IsEmpty()){
					bFound = true;
					if(!tmpStr.IsEmpty())
						tmpStr =_T(", ");

					szGroupItemid.AppendFormat(_T("%s'%s'"), tmpStr, rs.GetValue(_T("hpol_productcode")));
					tmpStr = szGroupItemid;
					szOldOrder = szNewOrder;
				}
			}		
			
			rs.MoveNext();
		}

		if(bFound) 
		{
			CHMSCheckDrugExistDialog dlg(this);
			dlg.m_szItemID = szGroupItemid;
			dlg.DoModal();
		}
	}
	return true;
}

void CMainFrame::PrintPrescription(long nInvoiceNo, bool bPreview,  bool bDirect){

	CRecord rs(&m_db);
	CString szSQL;
	if (nInvoiceNo <= 0)
		return;

	szSQL.Format(_T(" SELECT DISTINCT hpo_orderid") \
_T(" FROM hms_pharmaorder") \
_T(" LEFT JOIN hms_fee") \
_T(" ON(hfe_docno   =hpo_docno") \
_T(" AND hfe_orderid=hpo_orderid") \
_T(" AND hfe_type   ='D')") \
_T(" LEFT JOIN m_storagelist") \
_T(" ON(msl_storage_id=hpo_storage_id)") \
_T(" WHERE hfe_invoiceno=%ld and hfe_type='D' ") \
_T(" AND msl_type    <>'C' and hpo_orderstatus in('S','A') "), nInvoiceNo);
	rs.ExecSQL(szSQL);
	while(!rs.IsEOF())
	{
		long nOID;
		rs.GetValue(_T("hpo_orderid"), nOID);

		PrintDrugDelivery(nOID, bPreview, bDirect);
		rs.MoveNext();
	}
}

void CMainFrame::PrintSummarizeExaminationSheet(long nDocumentNo, bool bPrintPrescription, bool bPreview, bool bDirect)
{
	OnPrintExaminationSheet(m_nDocumentNo, true,  bPreview, bDirect);
	
}

//#include "HMSEditFeeDateDialog.h"

//void CMainFrame::OnFileEditfeereceivedate()
//{
//	CHMSEditFeeDateDialog dlg(this);
//	dlg.DoModal();
//}

void CMainFrame::PrintDetailRefundInvoice(long nInvoiceNo, bool bPreview, bool bOtherFee)
{
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString szSQL;
	CString tmpStr, szTemp;
	CString szObjectType;

	CRecord rs(&m_db);
	CRecord rsl(&m_db);
	CRecord grs(&m_db);
	CRecord trs(&m_db);
	CRecord rss(&m_db);

	int nInsRate = 0;
	long nDocumentNo;
	long nRefIdx;


	if (bOtherFee)
	{
		if (!rpt.Init(_T("Reports/HMS/HF_DETAILREFUNDINVOICE.RPT"), true, false, m_nPrintDetailRefundNumberPage))
			return;
	}
	else
	{
		if (!rpt.Init(_T("Reports/HMS/HF_DETAILREFUNDINVOICE.RPT"), true, false, m_nPrintRefundNumberPage))
			return;
	}

	szSQL.Format(_T(" SELECT hd_patientno as patientno,") \
				_T("        hd_docno as docno,") \
				_T("        trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
				_T("        TO_CHAR(hp_birthdate, 'YYYY') as yearofbirth,") \
				_T("        hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
				_T("        sys_sel_getname('sys_sex', hp_sex) as sex,") \
				_T("        nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
				_T("        hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
				_T("        hp_workplace as workplace,") \
				_T("        hd_doctor as doctor,") \
				_T("        hd_disrate as disrate, ") \
				_T("        hd_diagnostic as diagnostic,") \
				_T("        hd_reldisease as reldisease,") \
				_T("        trunc_date(hd_admitdate) as examdate,") \
				_T("        HMS_GetObjectType(hd_object) as objecttype, ") \
				_T("        hc_cardno as cardno, ") \
				_T("        hc_regdate as regdate, ") \
				_T("        hc_expdate as expdate, ") \
				_T("        HMS_GETHOSPITALNAME(hc_regcode) as regplace, ") \
				_T("        Get_DepartmentName(hfe_deptid) as deptname, ") \
				_T("        hfe_refidx as refidx,") \
				_T("        hfe_serialno as serialno,") \
				_T("        hfe_receiptno as recvno,") \
				_T("        hfe_date as recvdate, ") \
				_T("        hfe_staff as receiver,") \
				_T("        hfe_desc as reason, ") \
				_T("        hfe_amount as cost") \
				_T(" FROM hms_fee_refund ") \
				_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
				_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
				_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
				_T(" WHERE hfe_invoiceno=%ld"), nInvoiceNo);

		
		rs.ExecSQL(szSQL);

		if (rs.IsEOF())
			return;

		rs.GetValue(_T("objecttype"), szObjectType);
		rs.GetValue(_T("refidx"), nRefIdx);

		/*tmpStr.Empty();
		szTemp.Empty();
		CString szRoom, szRoomLabel;

		if (szObjectType == _T("S"))
		{
			szSQL.Format(_T("SELECT hfe_orderid as orderid, ") \
				         _T("hfe_type as type ") \
						 _T("FROM hms_fee ") \
						 _T("WHERE hfe_invoiceno=%ld AND hfe_refidx=%ld AND hfe_status='R' AND hfe_type IN('T','P') AND rownum=1 "),
						 nRefIdx, nInvoiceNo);

			trs.ExecSQL(szSQL);

			if (!trs.IsEOF())
			{
				trs.GetValue(_T("orderid"), tmpStr);
				trs.GetValue(_T("type"), szTemp);

				if (!tmpStr.IsEmpty())
				{
					if (szTemp == _T("T"))
					{
						szSQL.Format(_T("SELECT hpc_roomid as roomid, hpc_deptid as deptid ") \
									_T("FROM hms_testorder ") \
									_T("WHERE hpc_orderid=%ld AND rownum=1"),
									str2long(tmpStr));
					}
					else if (szTemp == _T("P"))
					{
						szSQL.Format(_T("SELECT hpc_roomid as roomid, hpc_deptid as deptid ") \
									_T("FROM hms_pacsorder ") \
									_T("WHERE hpc_orderid=%ld AND rownum=1"),
									str2long(tmpStr));
					}
					rss.ExecSQL(szSQL);

					if (!rss.IsEOF())
					{
						TranslateString(_T("Room"), tmpStr);
						szRoomLabel.Format(_T("%s:"), tmpStr);
						rpt.GetReportHeader()->SetValue(_T("RoomLabel"), szRoomLabel);

						szRoom.Format(_T("%s"), rss.GetValue(_T("roomid")));
						rpt.GetReportHeader()->SetValue(_T("Room"), szRoom);
					}
				}
			}
		}*/

		tmpStr.Empty();
		szTemp.Empty();


		szSQL.Format(_T("select rtrim(hfg_id, '0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
		grs.ExecSQL(szSQL);

		szSQL.Format(_T(" SELECT") \
			_T("		hfe_type as feetype, ") \
			_T(" 		rtrim(hfe_group,'0') as groupid,") \
			_T(" 		hfe_desc as name,") \
			_T(" 		hfe_unit as unit,") \
			_T(" 		sum(hfe_patpaid) as cost,") \
			_T(" 		sum(hfe_diffcost) as diffcost") \
			_T(" FROM hms_fee") \
			_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfe_group) ") \
			_T(" WHERE hfe_invoiceno=%ld and hfe_refidx=%ld and hfe_status='R' and (hfe_patpaid+hfe_diffpaid) > 0 ") \
			_T(" GROUP BY hfg_index, hfe_group, hfe_type, hfe_desc, hfe_unit") \
			_T(" ORDER BY hfg_index, name, unit"), nRefIdx, nInvoiceNo);

	//_msg(_T("%s"), szSQL);
		rsl.ExecSQL(szSQL);
		if(rsl.IsEOF())
		{
			//ShowMessageBox(_T("No data found"));
			return;
		}
		

		int nNumberPage = m_nPrintReceiptNumberPage;
		CReportSection* rptDetail=NULL;
		CReportSection* grpDetail;


		CString szFeeID, szID;

			TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"),
				                    _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
			int nChapter = 0;

			int nCount = 0, nIndex, nChapterID=0;
			double dTotal[5];
			double dGroup1[5];
			double dGroup2[5];
			double dAmount = 0;
			int nItem = 0, nOldItem = 0, nItem2 = 0;
			int nLevel;
			bool bDeleteParent = false;
			bool bLoadItems = false;
			CString szNewGroup, szOldGroup, szParentGroup;

			for (int i =0; i < 5; i++)
			{
				dTotal[i] = 0;
				dGroup1[i] = 0;
				dGroup2[i] = 0;
			}
			
			nIndex = 0;
			CString szSubItem, szType;
			int nSubItem = 1;
			nChapterID = 0;
			CArray<FEEITEM, FEEITEM&> feeList;
			FEEITEM fee;
			CReportSection *grp;
			grs.MoveFirst();

			while (!grs.IsEOF())
			{
				grs.GetValue(_T("level"), nLevel);
				grs.GetValue(_T("id"), szParentGroup);
				grs.GetValue(_T("feeid"), szSubItem);
				szParentGroup.Trim();
				bool bAdd = false;
				rsl.MoveFirst();
				while (!rsl.IsEOF())
				{
					rsl.GetValue(_T("groupid"), tmpStr);
					if (tmpStr == szParentGroup || tmpStr.Left(szParentGroup.GetLength()) == szParentGroup)
					{
						bAdd = true;
						break;
					}
					rsl.MoveNext();
				}
				if (!bAdd)
				{
					grs.MoveNext();
					continue;
				}
				
				if (nLevel == 0)
				{
					tmpStr.Format(_T("%s."), lpszChapter[nChapterID++]);
					fee.szGroupID = _T("Type");
					fee.szID = tmpStr;
					fee.szName = grs.GetValue(_T("name"));
					nItem = feeList.Add(fee);
					nIndex = 0;
					dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
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

				if (szSubItem == _T("Y"))
				{
					nSubItem = 0;
		//			rsl.MoveFirst();
					while (!rsl.IsEOF())
					{
						rsl.GetValue(_T("groupid"), szNewGroup);
						szNewGroup.Trim();
						if (szParentGroup == szNewGroup || szParentGroup == szNewGroup.Left(szParentGroup.GetLength()))
						{
							if (szNewGroup.Left(2) ==_T("B1") && szOldGroup != szNewGroup)
							{
								szOldGroup = szNewGroup;
								if (dGroup2[0] > 0 && nItem2 > 0)
								{
									fee = feeList.GetAt(nOldItem);
									fee.nCost = dGroup2[0];
									feeList.SetAt(nOldItem, fee);
								}
								szSQL.Format(_T("SELECT hfg_name as name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
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
								//double diffcost;
								
								rsl.GetValue(_T("cost"), dAmount);
								//rsl.GetValue(_T("diffcost"), diffcost);
								dTotal[0] += dAmount;
								dGroup1[0] += dAmount;
								dGroup2[0] += dAmount;

								fee.szGroupID = _T("Item");
								fee.szID.Empty();
								fee.szName.Format(_T("%s"), rsl.GetValue(_T("name")));
								/*if(diffcost > 0 && fee.nInsPrice > 0)
								{
									fee.szID = _T("CL");

								}*/
								fee.szUnit = rsl.GetValue(_T("unit"));
								fee.nCost = ToDouble(rsl.GetValue(_T("cost")));
								feeList.Add(fee);						
						}
						else
							break;
						rsl.MoveNext();
					}
					if (dGroup1[0] > 0 && nItem > 0)
					{
						if (dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount())
						{
							fee = feeList.GetAt(nOldItem);
							fee.nCost = dGroup2[0];
							feeList.SetAt(nOldItem, fee);
						}
						dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
						nItem2 = 0;
						fee = feeList.GetAt(nItem);
						fee.szGroupID = _T("SubAmount");
						TranslateString(_T("Sub Amount"), fee.szName);
						fee.nCost = dGroup1[0];
						nItem = feeList.Add(fee);
						dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
					}
				}
				grs.MoveNext();
			
			}

			if (dTotal[0] > 0)
			{
					TranslateString(_T("Total Amount"), tmpStr);
					fee.szGroupID = _T("TotalAmount");
					fee.szName = tmpStr;
					fee.nCost = dTotal[0];
					feeList.Add(fee);
			}

		
		
		rptDetail = NULL;
			
		//Report Header
	
		rptDetail = rpt.GetReportHeader();
		grpDetail = rptDetail;

			tmpStr.Empty();
			StringUpper(m_CompanyInfo.sc_pname, tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE"), tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE1"), tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE2"), tmpStr);
			StringUpper(m_CompanyInfo.sc_name, tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME1"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME2"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALADDRESS"), m_CompanyInfo.sc_address);
			grpDetail->SetValue(_T("HOSPITALADDRESS1"), m_CompanyInfo.sc_address);
			grpDetail->SetValue(_T("HOSPITALADDRESS2"), m_CompanyInfo.sc_address);
			
			rs.GetValue(_T("docno"), nDocumentNo);
			tmpStr.Format(_T("%ld"), nDocumentNo);
			grpDetail->SetValue(_T("DocumentNo"), tmpStr);
			grpDetail->SetValue(_T("DocumentNo1"), tmpStr);
			grpDetail->SetValue(_T("DocumentNo2"), tmpStr);
			tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("SerialNo")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
			
			grpDetail->SetValue(_T("ReceiptNo"), tmpStr);
			grpDetail->SetValue(_T("ReceiptNo1"), tmpStr);
			grpDetail->SetValue(_T("ReceiptNo2"), tmpStr);
			tmpStr.Format(_T("%ld"), nInvoiceNo);
			grpDetail->SetValue(_T("InvoiceNo"), tmpStr);
			grpDetail->SetValue(_T("InvoiceNo1"), tmpStr);
			grpDetail->SetValue(_T("InvoiceNo2"), tmpStr);


			//rs.GetValue(_T("pname"), tmpStr);
			StringUpper(rs.GetValue(_T("pname")), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME"), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME1"), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME2"), tmpStr);
			rs.GetValue(_T("age"), tmpStr);
			grpDetail->SetValue(_T("Age"), tmpStr);
			grpDetail->SetValue(_T("Age1"), tmpStr);
			grpDetail->SetValue(_T("Age2"), tmpStr);
			
			rs.GetValue(_T("yearofbirth"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth2"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth3"), tmpStr);

			rs.GetValue(_T("sex"), tmpStr);
			grpDetail->SetValue(_T("Sex"), tmpStr);
			grpDetail->SetValue(_T("Sex1"), tmpStr);
			grpDetail->SetValue(_T("Sex2"), tmpStr);
			rs.GetValue(_T("address"), tmpStr);
			grpDetail->SetValue(_T("Address"), tmpStr);
			grpDetail->SetValue(_T("Address1"), tmpStr);
			grpDetail->SetValue(_T("Address2"), tmpStr);
			rs.GetValue(_T("deptname"), tmpStr);
			grpDetail->SetValue(_T("Department"), tmpStr);
			grpDetail->SetValue(_T("Department1"), tmpStr);
			grpDetail->SetValue(_T("Department2"), tmpStr);

			rs.GetValue(_T("disrate"), nInsRate);
			grpDetail->SetValue(_T("Disrate"), nInsRate);
			
			rs.GetValue(_T("examdate"), tmpStr);
			grpDetail->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExamDate1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExamDate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

			rs.GetValue(_T("cardno"), tmpStr);
			grpDetail->SetValue(_T("CardNo"), tmpStr);
			grpDetail->SetValue(_T("CardNo1"), tmpStr);
			grpDetail->SetValue(_T("CardNo2"), tmpStr);
			rs.GetValue(_T("expdate"), tmpStr);
			grpDetail->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExpiryDate1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExpiryDate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("regplace"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace1"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace2"), tmpStr);
			rs.GetValue(_T("diagnostic"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic1"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic2"), tmpStr);
			rs.GetValue(_T("reldisease"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease1"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease2"), tmpStr);

			CString szDate;
			rs.GetValue(_T("recvdate"), tmpStr);
			szDate.Format(grpDetail->GetValue(_T("ReceiptDate")), CDateTime::Convert(tmpStr,yyyymmdd|hhmmss,ddmmyyyy|hhmm));	
			grpDetail->SetValue(_T("ReceiptDate"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate1"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate2"), szDate);	
			rs.GetValue(_T("doctor"), tmpStr);
			tmpStr.Trim();
			grpDetail->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
			rs.GetValue(_T("receiver"), tmpStr);	
			tmpStr.Trim();

			grpDetail->SetValue(_T("ReceiveBy"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy1"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy2"), GetDoctorName(tmpStr));	
			
			rs.GetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason1"), tmpStr);
			grpDetail->SetValue(_T("reason2"), tmpStr);
			

			rptDetail = rpt.GetDetail(0); 			
			

			for (int i =0; i < feeList.GetCount(); i++){
				fee = feeList[i];
				szType = fee.szGroupID;
					if(szType == _T("Type"))
					{
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						
						tmpStr = fee.szID;
						rptDetail->SetValue(_T("GH1"), tmpStr);
						StringUpper(fee.szName, tmpStr);
						rptDetail->SetValue(_T("GH2"), tmpStr);
					}
					if(szType == _T("Group")){
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						rptDetail->SetValue(_T("GH1"), fee.szID);
						rptDetail->SetValue(_T("GH2"), fee.szName);
					}
					else if(szType == _T("SubGroup")){
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						rptDetail->SetValue(_T("GH1"), fee.szID);
						rptDetail->SetValue(_T("GH2"), fee.szName);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
					}
					/*else if(szType == _T("SubAmount")){
						grp = rpt.GetGroupFooter(1);
						rptDetail = rpt.AddDetail(grp);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("SubAmount"), tmpStr);

					}*/
					else if(szType == _T("Item")){
						rptDetail = rpt.AddDetail();
						rptDetail->SetValue(_T("1"), fee.szID);
						rptDetail->SetValue(_T("2"), fee.szName);
						rptDetail->SetValue(_T("3"), fee.szUnit);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("6"), tmpStr);
					}
		/*
					else if(szType == _T("TotalAmount")){
						grp = rpt.GetGroupHeader(1);
						rptDetail = rpt.AddDetail(grp);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("TotalAmount"), tmpStr);
						FormatCurrency(fee.nDiscount, tmpStr);
						rptDetail->SetValue(_T("AmountDiscount"), tmpStr);
						FormatCurrency(fee.nPatPaid, tmpStr);
						rptDetail->SetValue(_T("AmountPatPaid"), tmpStr);
					}
		*/
			
			}
			//Report Footer

			
			grpDetail = rpt.GetReportFooter();
			

			FormatCurrency(ceil(dTotal[0]), tmpStr);
			grpDetail->SetValue(_T("TotalAmount"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount1"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount2"), tmpStr);

			
			grpDetail->SetValue(_T("Price"), tmpStr);
			grpDetail->SetValue(_T("Price1"), tmpStr);
			grpDetail->SetValue(_T("Price2"), tmpStr);

			grpDetail->SetValue(_T("TotalAmount"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount1"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount2"), tmpStr);

			FormatCurrency(ceil(dTotal[1]), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount1"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount2"), tmpStr);

			grpDetail->SetValue(_T("TotalDiscount"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount1"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount2"), tmpStr);

			FormatCurrency(ceil(dTotal[2]), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid1"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid2"), tmpStr);

			grpDetail->SetValue(_T("TotalPatpaid"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid1"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid2"), tmpStr);

			CString szSumInWord;
			tmpStr.Format(_T("%.2f"), ceil(dTotal[0]));
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng");
			grpDetail->SetValue(_T("SumInWord"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord1"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord2"), szSumInWord);

			grpDetail->SetValue(_T("SumInWord"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord1"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord2"), szSumInWord);
		/*
			FormatCurrency(dTotal[1], tmpStr);
			grpDetail->SetValue(_T("PatientPaid"), tmpStr);
			FormatCurrency(dTotal[2], tmpStr);
			grpDetail->SetValue(_T("InsurancePaid")
			, tmpStr);
		*/	

			rs.GetValue(_T("recvdate"), tmpStr);
			szDate.Format(grpDetail->GetValue(_T("ReceiptDate")), CDateTime::Convert(tmpStr,yyyymmdd|hhmmss,ddmmyyyy|hhmm));	
			grpDetail->SetValue(_T("ReceiptDate"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate1"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate2"), szDate);	
			rs.GetValue(_T("doctor"), tmpStr);
			tmpStr.Trim();
			grpDetail->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
			rs.GetValue(_T("receiver"), tmpStr);	
			tmpStr.Trim();

			grpDetail->SetValue(_T("ReceiveBy"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy1"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy2"), GetDoctorName(tmpStr));	
			
			rs.GetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason1"), tmpStr);
			grpDetail->SetValue(_T("reason2"), tmpStr);
			

			tmpStr = GetSysDateTime();
			szDate.Format(grpDetail->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
			grpDetail->SetValue(_T("PrintDate"), szDate);
			grpDetail->SetValue(_T("PrintDate1"), szDate);
			grpDetail->SetValue(_T("PrintDate2"), szDate);

			grpDetail->SetValue(_T("PrintDate"), szDate);
			grpDetail->SetValue(_T("PrintDate1"), szDate);
			grpDetail->SetValue(_T("PrintDate2"), szDate);

			szDate = grpDetail->GetValue(_T("SheetNumber"));
			tmpStr.Format(szDate, 1);
			grpDetail->SetValue(_T("SheetNumber"), tmpStr);

			int nUnRate=0;
			
			if (nInsRate > 0)
			{
				nUnRate = 100 - nInsRate;
				tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
				grpDetail->SetValue(_T("UnRate"), tmpStr);
			}

			rptDetail = grpDetail;

		if (bPreview)
			rpt.PrintPreview();
		else
		{
			rpt.Print(m_bAutoPrint);
		}

	
		szSQL.Format(_T("UPDATE hms_fee_refund SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);

		ExecSQL(szSQL);
}

void CMainFrame::PrintAppointmentExamine(long nDocNo, bool bPreview)
{
	CReport rpt;
	CString szSQL, tmpStr, szWhere;
	CRecord rs(&m_db);
	CRecord rsl(&m_db);

	if(!rpt.Init(_T("Reports/HMS/HR_PHIEUHENKHAM.RPT")) )
		return;

	
	szSQL.Format(_T(" SELECT hd_patientno as patientno,  ") \
		_T(" 	hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hp_birthdate as birthdate,") \
		_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T("	(select sd_name from sys_dept where sd_id = he_deptid) as admitdept, ") \
		_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
		_T(" 	hp_sex as sexid,") \
		_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" 	hp_occupation as occupationid,") \
		_T("	hp_position as position, ") \
		_T(" 	sys_sel_getname('sys_occupation', cast(hp_occupation as varchar(15))) as occupation,") \
		_T(" 	sys_sel_getname('hms_rank', cast(hp_rank as nvarchar2(15))) as rank,") \
		_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
		_T(" 	hp_provid as provid,") \
		_T("	(select ss_desc from sys_sel where ss_id = 'hms_relation' and ss_code = hd_relation) as relation, ") \
		_T("	hd_contactaddr as reladdress, hd_contacttel as relphone, hd_telephone as phone,") \
		_T("	hd_relative as relative, ") \
		_T(" 	SYS_GETPROVILLNAME(hp_provid) as provill,") \
		_T(" 	hp_distid as distid,") \
		_T(" 	SYS_GETDISTRICTNAME(hp_distid) as district,") \
		_T(" 	hp_villid as villid,") \
		_T(" 	SYS_GETVILLAGENAME(hp_villid) as village,") \
		_T(" 	HMS_GETOBJECTNAME(hd_object) as objectname,") \
		_T(" 	hp_workplaceid as workplaceid,") \
		_T(" 	hp_workplace as workplace,") \
		_T(" 	hd_object as objectid,") \
		_T(" 	hd_cardno as cardno,") \
		_T("    trunc_date(hd_admitdate) as examdate,") \
		_T("    trunc_date(hd_admitdate) + 30 as NgayHenkham,") \
		_T("    hd_enddate as enddate,") \
		_T(" 	hc_regdate as regdate,") \
		_T(" 	hc_expdate as expdate,") \
		_T("	hd_transplace as transplace, ") \
		_T("	HD_TRANSDIAGN as transdiagn, ")
		_T("	hd_diagnostic AS Diagnostic,") \
		_T("	hd_xobject as xobject, ") \
		_T("	hd_xcardno as xcardno, ") \
		_T("	hd_xissuedate as xissuedate, ") \
		_T("	hd_recordno AS recordno ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno and hc_cardno=hd_cardno and hc_idx=hd_cardidx) ") \
		_T(" LEFT JOIN hms_exam ON(he_docno=hd_docno)") \
		_T(" WHERE he_docno=%ld "), nDocNo);
	rs.ExecSQL(szSQL);

	if(rs.IsEOF())
	{
		//MessageBox(_T("OK"));
		return;
	}

	//Report Header
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), m_CompanyInfo.sc_name);	
	rpt.GetReportHeader()->SetValue(_T("PatientNo"), rs.GetValue(_T("patientno")));
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("Barcode[39]"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("Barcode[93]"), rs.GetValue(_T("docno")));

	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("object"), rs.GetValue(_T("objectname")));
	tmpStr.Format(_T("%s"), rs.GetValue(_T("rank")));
	rpt.GetReportHeader()->SetValue(_T("rank"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("position"), GetSelectionString(_T("hms_position"),rs.GetValue(_T("position"))));

	rpt.GetReportHeader()->SetValue(_T("RecordNo"), rs.GetValue(_T("RecordNo")));
	rpt.GetReportHeader()->SetValue(_T("Department"), rs.GetValue(_T("admitdept")));
	tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("yearofbirth"), rs.GetValue(_T("yearofbirth")));
	rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
	rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
	rpt.GetReportHeader()->SetValue(_T("Occupation"), rs.GetValue(_T("occupation")));
	tmpStr.Format(_T("%s - %s - %s"), rs.GetValue(_T("village")), rs.GetValue(_T("district")), rs.GetValue(_T("provill")));
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	rs.GetValue(_T("detailaddress"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DetailAddress"), tmpStr);
	tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("WorkPlace"), rs.GetValue(_T("workplace")));
	rpt.GetReportHeader()->SetValue(_T("ExamRoom"), rs.GetValue(_T("roomname")));
	rpt.GetReportHeader()->SetValue(_T("SheetNo"), rs.GetValue(_T("receptno")));
	rpt.GetReportHeader()->SetValue(_T("ExamType"), rs.GetValue(_T("examtype")));	
	
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(rs.GetValue(_T("ExamDate")), yyyymmdd, ddmmyyyy));	
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), rs.GetValue(_T("transplace")));
	rpt.GetReportHeader()->SetValue(_T("TransDiagn"), rs.GetValue(_T("transdiagn")));

	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), rs.GetValue(_T("Diagnostic")));
	rpt.GetReportHeader()->SetValue(_T("relative"), rs.GetValue(_T("relative")));
	rpt.GetReportHeader()->SetValue(_T("reladdress"), rs.GetValue(_T("reladdress")));
	rpt.GetReportHeader()->SetValue(_T("relphone"), rs.GetValue(_T("relphone")));
	rpt.GetReportHeader()->SetValue(_T("phone"), rs.GetValue(_T("phone")));
	rpt.GetReportHeader()->SetValue(_T("relation"), rs.GetValue(_T("relation")));

	rpt.GetReportHeader()->SetValue(_T("Ngayhenkham"), CDate::Convert(rs.GetValue(_T("Ngayhenkham")), yyyymmdd, ddmmyyyy));

	tmpStr = GetSysDateTime();
	CString printDate;
	printDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(5, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);

	printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), printDate);

	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();
}

void CMainFrame::PrintTreatment(long nDocNo, bool bPreview)
{
	static CReport rpt;
	CString szSQL, tmpStr, szWhere;
	CRecord rs(&m_db);
	
	if (!rpt.Init(_T("Reports/HMS/HR_TREATMENTSHEET.RPT")) )
		return;

	szSQL.Format(_T(" SELECT 	hd_patientno as patientno,  ") \
		_T(" 	hd_docno as docno,") \
		_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T(" 	hp_birthdate as birthdate,") \
		_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T("	(select sd_name from sys_dept where sd_id = hd_admitdept) as admitdept, ") \
		_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
		_T(" 	hp_sex as sexid,") \
		_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T(" 	hp_occupation as occupationid,") \
		_T("	hp_position as position, ") \
		_T(" 	sys_sel_getname('sys_occupation', cast(hp_occupation as varchar(15))) as occupation,") \
		_T(" 	sys_sel_getname('hms_rank', cast(hp_rank as nvarchar2(15))) as rank,") \
		_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
		_T(" 	hp_provid as provid,") \
		_T("	(select ss_desc from sys_sel where ss_id = 'hms_relation' and ss_code = hd_relation) as relation, ") \
		_T("	hd_contactaddr as reladdress, hd_contacttel as relphone, hd_telephone as phone,") \
		_T("	hd_relative as relative, ") \
		_T(" 	SYS_GETPROVILLNAME(hp_provid) as provill,") \
		_T(" 	hp_distid as distid,") \
		_T(" 	SYS_GETDISTRICTNAME(hp_distid) as district,") \
		_T(" 	hp_villid as villid,") \
		_T(" 	SYS_GETVILLAGENAME(hp_villid) as village,") \
		_T(" 	HMS_GETOBJECTNAME(hd_object) as objectname,") \
		_T(" 	hp_workplaceid as workplaceid,") \
		_T(" 	hp_workplace as workplace,") \
		_T(" 	hd_object as objectid,") \
		_T(" 	hd_cardno as cardno,") \
		_T("    hd_admitdate as examdate,") \
		_T("    hd_enddate as enddate,") \
		_T(" 	hc_regdate as regdate,") \
		_T(" 	hc_expdate as expdate,") \
		_T("	hd_transplace as transplace, ") \
		_T("	HD_TRANSDIAGN as transdiagn, ")
		_T("	hd_diagnostic AS Diagnostic, ") \
		_T("	hd_recordno AS recordno ") \
		_T(" FROM hms_patient") \
		_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
		_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno and hc_cardno=hd_cardno and hc_idx=hd_cardidx) ") \
		_T(" WHERE hd_docno=%ld AND ROWNUM < 2"), nDocNo);
	
	int ret = rs.ExecSQL(szSQL);
	if (rs.IsEOF())
		return;

	CString szRecordNo;
	rs.GetValue(_T("recordno"), szRecordNo);

	/*if (szRecordNo.IsEmpty())
	{
		CGuiInputDataDialog dlg(this, false, true);
		dlg.SetTextLimit(10);
		dlg.m_szGroupName = _T("Outpatient Record");
		dlg.m_szValueName = _T("Record No");
		if(dlg.DoModal() == IDOK)
		{
			szRecordNo = dlg.GetTextValue();
			szSQL.Format(_T("UPDATE hms_doc SET hd_recordno='%s' WHERE hd_docno=%ld "), szRecordNo, m_nDocumentNo);
			ExecSQL(szSQL);
		}
	
	}*/

	//Report Header
	rpt.GetReportHeader()->SetValue(_T("HEALTHSERVICE"), m_CompanyInfo.sc_pname);
	rpt.GetReportHeader()->SetValue(_T("HOSPITALNAME"), m_CompanyInfo.sc_name);	
	rpt.GetReportHeader()->SetValue(_T("PatientNo"), rs.GetValue(_T("patientno")));
	rpt.GetReportHeader()->SetValue(_T("DocumentNo"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("Barcode[128A]"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("Barcode[128B]"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("Barcode[128C]"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("Barcode[39]"), rs.GetValue(_T("docno")));
	rpt.GetReportHeader()->SetValue(_T("Barcode[93]"), rs.GetValue(_T("docno")));

	rpt.GetReportHeader()->SetValue(_T("RecordNo"), szRecordNo);

	StringUpper(rs.GetValue(_T("pname")), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("PatientName"), tmpStr);

	rpt.GetReportHeader()->SetValue(_T("object"), rs.GetValue(_T("objectname")));
	tmpStr.Format(_T("%s"), rs.GetValue(_T("rank")));
	rpt.GetReportHeader()->SetValue(_T("rank"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("position"), GetSelectionString(_T("hms_position"),rs.GetValue(_T("position"))));

	rpt.GetReportHeader()->SetValue(_T("Department"), rs.GetValue(_T("admitdept")));
	tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("yearofbirth"), rs.GetValue(_T("yearofbirth")));
	rpt.GetReportHeader()->SetValue(_T("Age"), rs.GetValue(_T("age")));
	rpt.GetReportHeader()->SetValue(_T("Sex"), rs.GetValue(_T("sex")));
	rpt.GetReportHeader()->SetValue(_T("Occupation"), rs.GetValue(_T("occupation")));
	tmpStr.Format(_T("%s - %s - %s"), rs.GetValue(_T("village")), rs.GetValue(_T("district")), rs.GetValue(_T("provill")));
	rpt.GetReportHeader()->SetValue(_T("Address"), tmpStr);
	rs.GetValue(_T("detailaddress"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("DetailAddress"), tmpStr);
	tmpStr.Empty();
	rpt.GetReportHeader()->SetValue(_T("WorkPlace"), rs.GetValue(_T("workplace")));
	rpt.GetReportHeader()->SetValue(_T("ExamRoom"), rs.GetValue(_T("roomname")));
	rpt.GetReportHeader()->SetValue(_T("SheetNo"), rs.GetValue(_T("receptno")));
	rpt.GetReportHeader()->SetValue(_T("ExamType"), rs.GetValue(_T("examtype")));	
	
	rs.GetValue(_T("cardno"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("CardNo"), tmpStr);
	rpt.GetReportHeader()->SetValue(_T("ExamDate"), CDate::Convert(rs.GetValue(_T("ExamDate"))));	
	rpt.GetReportHeader()->SetValue(_T("TransferHospital"), rs.GetValue(_T("transplace")));
	rpt.GetReportHeader()->SetValue(_T("TransDiagn"), rs.GetValue(_T("transdiagn")));

	rpt.GetReportHeader()->SetValue(_T("Diagnostic"), rs.GetValue(_T("Diagnostic")));
	rpt.GetReportHeader()->SetValue(_T("relative"), rs.GetValue(_T("relative")));
	rpt.GetReportHeader()->SetValue(_T("reladdress"), rs.GetValue(_T("reladdress")));
	rpt.GetReportHeader()->SetValue(_T("relphone"), rs.GetValue(_T("relphone")));
	rpt.GetReportHeader()->SetValue(_T("phone"), rs.GetValue(_T("phone")));
	rpt.GetReportHeader()->SetValue(_T("relation"), rs.GetValue(_T("relation")));

	tmpStr = GetSysDateTime();
	CString printDate;	
	printDate.Format(rpt.GetReportHeader()->GetValue(_T("PrintDate")), tmpStr.Mid(5, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportHeader()->SetValue(_T("PrintDate"), printDate);

	printDate.Format(rpt.GetReportFooter()->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), printDate);

	
	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print();

	
	PrintAppointmentExamine(nDocNo);
}

void CMainFrame::OnFileKeeptrackofpatientfee()
{
	
	if (CheckPermission(_T("30.04")))
	{
		CHMSTrackingPatientFeeDialog dlg(this);
		dlg.DoModal();
	}
	else
		AfxMessageBox(_T("Chưa được cấp quyền 30.04, vui lòng liên hệ admin"));

}


void CMainFrame::CreateFees(){
	CString szSQL;

	if(IsInPatient())
	{
		szSQL.Format(_T("HMS_INPATIENT_FEE_CREATE(%ld,'BIOTPDMXSJFE', 'TM','Y') "),  m_nDocumentNo);
		ExecDML(szSQL);
	}
	else
	{
		szSQL.Format(_T("HMS_FEE_CREATE(%ld,'EIOTPDRMXF', 'EM','Y') "),  m_nDocumentNo);
		ExecDML(szSQL);
	}
}


void	CMainFrame::LoadFeeList(CGridListView* pList, long nDocumentNo, long nInvoiceNo,
		double& nTotalCost, double&  nTotalInsCost, double& nTotalDiscount, 
		double& nTotalDiffCost, double& nTotalPatPaid, double& nTotalPayable, CString szFilter, 
		long nInsInvoice, bool bCancel, bool bInPackage)
{

	CHMSMainFrame::LoadFeeList_v3(pList, nDocumentNo, nInvoiceNo, nTotalCost, nTotalInsCost, nTotalDiscount, 
		nTotalDiffCost, nTotalPatPaid, nTotalPayable, szFilter, 
		nInsInvoice, bCancel, bInPackage);
	return;

	CRecord rsg(&m_db);
	CRecord rs(&m_db);
	CRecord rsl(&m_db);
	CString szSQL, szWhere;
	CString szName, tmpStr;
	int nIndex = 1;
	int nItem = 0;
	CString szIndex;

	//nTotalCost = nTotalInsCost = nTotalDiscount = nTotalDiscount = nTotalDiffCost = nTotalPatPaid = nTotalPayable = 0;
	

	

	szSQL.Format(_T("SELECT * FROM hms_fee_type ORDER BY hft_id "));
	rsg.ExecSQL(szSQL);

	if(nInvoiceNo > 0 || nInsInvoice > 0)
	{
		if(nInsInvoice > 0)
			szWhere.Format(_T(" and hfe_insinvoice=%ld "), nInsInvoice);
		else
			szWhere.Format(_T(" and hfe_invoiceno=%ld "), nInvoiceNo);
	}
	else
		szWhere.Format(_T(" AND hfe_status in('O','X','A')  "));
	
	if(IsInPatient())
	{
			if (m_szOutpatient != _T("Y")) 
				szWhere.AppendFormat(_T(" and hfe_groupid <>'D' "));
			szWhere.AppendFormat(_T(" and hfe_class in('E', 'I','X', 'A') "));
	}
	else
	{
		szWhere.AppendFormat(_T(" and hfe_class IN('E','X')  "));
		szWhere.AppendFormat(_T(" and hfe_deptid in('C1.1','C1.2','C1.3','TYC','B5', 'KD', 'C10') "));
		szWhere.AppendFormat(_T(" and hfe_type in(%s) "), m_szFeeTypes);

	}

//	szWhere.AppendFormat(_T(" and hfe_subgroup ='XX' "));
	//szWhere.AppendFormat(_T(" and hfe_category<>'Y' "));
	szWhere.AppendFormat(_T(" and (hfe_category <> 'Y' or hfe_category is null) "));

	if(!szFilter.IsEmpty())
		szWhere.AppendFormat(_T(" %s "), szFilter);

	
//	if(!m_szDepartments.IsEmpty())
//		szWhere.AppendFormat(_T(" and hfe_deptid in(%s)  "), m_szDepartments);
	

	
	
	szSQL.Format(_T(" SELECT hfe_typeindex AS typeindex,") \
_T("   hfe_status         AS status,") \
_T("   hfe_type           AS feetype,") \
_T("   hfe_groupid        AS groupid,") \
_T("   hfe_groupid3       AS groupid3,") \
_T("   hfe_itemid         AS itemid,") \
_T("   hfe_name           AS name,") \
_T("   hfe_unit           AS unit,") \
_T("   hfe_hitech         AS hitech,") \
_T("   hfe_inlist         AS inlist,") \
_T("   hfe_unitprice      AS unitprice,") \
_T("   SUM(hfe_qty)       AS qty,") \
_T("   SUM(hfe_cost)      AS cost,") \
_T("   SUM(hfe_inscost)   AS inscost,") \
_T("   SUM(hfe_discount)  AS discount,") \
_T("   SUM(hfe_diffcost)  AS DiffPaid,") \
_T("   SUM(hfe_patdebt)   AS patdebt,") \
_T("   SUM(hfe_copayment) AS copayment,") \
_T("   SUM(hfe_patpaid)   AS patpaid") \
_T(" FROM hms_fee_view_dtl") \
_T(" WHERE hfe_docno  =%ld and hfe_qty > 0 %s ") \
_T(" GROUP BY hfe_typeindex,") \
_T("   hfe_status ,") \
_T("   hfe_type ,") \
_T("   hfe_groupid ,") \
_T("   hfe_groupid3 ,") \
_T("   hfe_itemid ,") \
_T("   hfe_name ,") \
_T("   hfe_unit ,") \
_T("   hfe_hitech ,") \
_T("   hfe_inlist,") \
_T("   hfe_unitprice") \
_T(" ORDER BY hfe_typeindex, hfe_groupid3, hfe_name, hfe_unit, hfe_unitprice"), 
m_nDocumentNo, szWhere);


	

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);


	CString szOldGroup, szNewGroup;
	CString szOldIndex, szNewIndex;
	double nTtlCost=0, nTtlInsCost=0, nTtlDiscount=0, nTtlDiffPaid=0,  nTtlPatPaid=0;
	double nCost=0, nInsCost=0, nDiscount=0, nDiffPaid=0,  nPatPaid=0;
	double nGroup1Cost=0, nGroup1InsCost=0, nGroup1Discount=0, nGroup1DiffPaid=0, nGroup1PatPaid=0;
	double nGroup2Cost=0, nGroup2InsCost=0, nGroup2Discount=0, nGroup2DiffPaid=0, nGroup2PatPaid=0;

	int nCount = 0;
	int nIDX = 0;
	bool bFound = false;
	bool bInList = false;
	bool bOutList = false;
	bool bKList = false;
	int nItem2;
	int nSubIndex = 1;
	int nLineIndex = 0;

//	pList->BeginLoad();

	while(!rsg.IsEOF()){

		tmpStr.Format(_T("%d"), nIndex);
		rsg.GetValue(_T("hft_name"), szName);
		rsg.GetValue(_T("hft_id"), szNewIndex);
		nItem = pList->AddItems(tmpStr, szName, NULL);
		nIDX  = nItem;
		pList->SetItemText(nItem, 5, _T("Type"));
		pList->SetItemBkColor(nItem, RGB(0, 129, 192), FALSE);
		pList->SetItemTextColor(nItem, COLOR_WHITE, FALSE);
		pList->MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);
		bFound = false;
		nGroup1Cost=nGroup1InsCost=nGroup1Discount=nGroup1DiffPaid=nGroup1PatPaid=0;
		nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;


		rs.MoveFirst();
		while(!rs.IsEOF())
		{
			rs.GetValue(_T("typeindex"), tmpStr);

			if(tmpStr == szNewIndex){
				
				rs.GetValue(_T("groupid"), szNewGroup);
				if(szNewGroup != szOldGroup)
				{
					nLineIndex = 1;
					szOldGroup = szNewGroup;
					if(szNewGroup.Left(2) == _T("B1")){
						szSQL.Format(_T("SELECT hfg_name FROM hms_fee_group WHERE rtrim(hfg_id,'0')='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						if(nGroup2Cost > 0 || nGroup2DiffPaid > 0 || nGroup2PatPaid > 0){
							TranslateString(_T("Sub Amount"), tmpStr);
							int nItem2 = pList->AddItems(_T(""), tmpStr, 
								_T(""), 
								_T(""),
								_T(""),
								ToString(nGroup2Cost),
								ToString(nGroup2Discount),
								ToString(nGroup2DiffPaid),
								ToString(nGroup2PatPaid),
								NULL);
							pList->SetItemBkColor(nItem2, RGB(250, 250, 250), FALSE);
							pList->SetItemTextColor(nItem2, RGB(0, 128, 192), FALSE);
							pList->MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
						}

						szIndex.Format(_T("%d.%d"), nIndex, nSubIndex++);
						int nItem2 = pList->AddItems(szIndex, rs2.GetValue(_T("hfg_name")), NULL);
						pList->SetItemText(nItem2, 5, _T("SubGroup"));
						pList->SetItemBkColor(nItem2, RGB(200, 200, 200), FALSE);
						pList->SetItemTextColor(nItem2, RGB(0, 128, 192), FALSE);
						pList->MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

						nGroup2Cost=nGroup2InsCost=nGroup2Discount=nGroup2DiffPaid=nGroup2PatPaid=0;

					}
					
				}

				if(szOldIndex != szNewIndex)
				{
					szOldIndex = szNewIndex;
					bInList = false;
					bOutList = false;
				}

				if(m_szObjectType != _T("S"))
				{
				
					if(szNewIndex == _T("800")){
						

						rs.GetValue(_T("inlist"), tmpStr);
						
						if(tmpStr == _T("1") && !bInList){
							bInList = true;
							TranslateString(_T("Inside insurance list"), tmpStr);
							szIndex.Format(_T("%d.1"), nIndex);	
							nItem2 = pList->AddItems(szIndex, tmpStr, NULL);
							pList->SetItemBkColor(nItem2, RGB(225, 225, 225), FALSE);
							pList->SetItemTextColor(nItem2, RGB(0, 128, 192), FALSE);
							pList->MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

						}
						if(tmpStr == _T("2") && !bOutList){
							bOutList = true;
							TranslateString(_T("Outside insurance list"), tmpStr);
							if(bInList)
								szIndex.Format(_T("%d.2"), nIndex);	
							else
								szIndex.Format(_T("%d.1"), nIndex);	

							nItem2 = pList->AddItems(szIndex, tmpStr, NULL);
							pList->SetItemBkColor(nItem2, RGB(225, 225, 225), FALSE);
							pList->SetItemTextColor(nItem2, RGB(0, 128, 192), FALSE);
							pList->MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
						}

						if(tmpStr == _T("3") && !bKList){
							bKList = true;
							if(bInList && bOutList)
								szIndex.Format(_T("%d.3"), nIndex);	
							else if(bInList || bOutList)
								szIndex.Format(_T("%d.2"), nIndex);	
							else
								szIndex.Format(_T("%d.1"), nIndex);	

							TranslateString(_T("Inside cancer list"), tmpStr);
							nItem2 = pList->AddItems(szIndex, tmpStr, NULL);
							pList->SetItemBkColor(nItem2, RGB(225, 225, 225), FALSE);
							pList->SetItemTextColor(nItem2, RGB(0, 128, 192), FALSE);
							pList->MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
						}
						

					}

					if(szNewIndex == _T("900")){
						
						rs.GetValue(_T("inlist"), tmpStr);
						
						if(tmpStr == _T("1") && !bInList){
							bInList = true;
							TranslateString(_T("Inside insurance list"), tmpStr);
							szIndex.Format(_T("%d.1"), nIndex);
							nItem2 = pList->AddItems(szIndex, tmpStr, NULL);
							pList->SetItemBkColor(nItem2, RGB(225, 225, 225), FALSE);
							pList->SetItemTextColor(nItem2, RGB(0, 128, 192), FALSE);
							pList->MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
						}
						if(tmpStr == _T("2") && !bOutList){
							bOutList = true;
							TranslateString(_T("Outside insurance list"), tmpStr);
							if(!bInList)
								szIndex.Format(_T("%d.1"), nIndex);
							else
								szIndex.Format(_T("%d.2"), nIndex);

							nItem2 = pList->AddItems(szIndex, tmpStr, NULL);
							pList->SetItemBkColor(nItem2, RGB(225, 225, 225), FALSE);
							pList->SetItemTextColor(nItem2, RGB(0, 128, 192), FALSE);
							pList->MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
						}
					}

					
				}


				rs.GetValue(_T("cost"), nCost);
				rs.GetValue(_T("inscost"), nInsCost);
				rs.GetValue(_T("discount"), nDiscount);
				rs.GetValue(_T("diffpaid"), nDiffPaid);
				rs.GetValue(_T("copayment"), nPatPaid);

				if(m_szObjectType == _T("S"))
				{
					nDiffPaid = 0;
					nDiscount = 0;
					nInsCost = 0;
					nPatPaid = nCost;
				}
				else
				{
					if(nCost <= 0){
////						nDiffPaid = nCost;
//						nPatPaid =0;
//						nCost = 0;
					}
					if(nDiscount <=0 && nDiffPaid <= 0){
						/*nDiffPaid = nPatPaid;
						nPatPaid = 0;*/
						
					}
				}
				
				bool bAddFlag = true;
				

				if(bAddFlag)
				{
						nTotalCost += nCost;
						nGroup1Cost += nCost;
						nGroup2Cost += nCost;


						nTotalInsCost += nInsCost;
						nGroup1InsCost += nInsCost;
						nGroup2InsCost += nInsCost;

						nTotalDiscount += nDiscount;
						nGroup1Discount += nDiscount;
						nGroup2Discount += nDiscount;

						nTotalDiffCost += nDiffPaid;
						nGroup1DiffPaid += nDiffPaid;
						nGroup2DiffPaid += nDiffPaid;

						nTotalPatPaid += nPatPaid;
						nGroup1PatPaid += nPatPaid;
						nGroup2PatPaid += nPatPaid;
						tmpStr.Format(_T("   %d"), nLineIndex++);
						
						pList->AddItems(tmpStr, 
						rs.GetValue(_T("name")),
						rs.GetValue(_T("unit")),
						rs.GetValue(_T("qty")),
						rs.GetValue(_T("unitprice")),
						ToString(nCost),
						ToString(nDiscount),
						ToString(nDiffPaid),
						ToString(nPatPaid),
						_T("ITEM"),
						rs.GetValue(_T("itemid")),
						rs.GetValue(_T("feetype")),
						NULL);
					
				}
				bFound = true;
			}
			else
				nLineIndex = 1;
			rs.MoveNext();
		}
		if(!bFound)
		{
			pList->DeleteItem(nIDX);
			nLineIndex = 1;
			
		}
		else
		{
			if(nGroup1Cost > 0 || nGroup1DiffPaid > 0 || nGroup1PatPaid > 0){

				if(nGroup2Cost > 0 && nGroup2Cost != nGroup1Cost){
					TranslateString(_T("Sub Amount"), tmpStr);
					int nItem2 = pList->AddItems(_T(""), tmpStr, 
										_T(""), 
										_T(""),
										_T(""),
										ToString(nGroup2Cost),
										ToString(nGroup2Discount),
										ToString(nGroup2DiffPaid),
										ToString(nGroup2PatPaid),
										NULL);
					pList->SetItemBkColor(nItem2, RGB(250, 250, 250), FALSE);
					pList->SetItemTextColor(nItem2, RGB(0, 128, 192), FALSE);
					pList->MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);

				}

					TranslateString(_T("Total"), tmpStr);
					tmpStr.AppendFormat(_T(" (%d)"), nIndex);
					int nItem2 = pList->AddItems(_T(""), tmpStr, 
								_T(""), 
								_T(""),
								_T(""),
								ToString(nGroup1Cost),
								ToString(nGroup1Discount),
								ToString(nGroup1DiffPaid),
								ToString(nGroup1PatPaid),
								NULL);
							pList->SetItemBkColor(nItem2, RGB(192, 192, 192), FALSE);
							pList->SetItemTextColor(nItem2, RGB(0, 0, 255), FALSE);
							pList->MergeCell(nItem2, 1, nItem2, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, false, true);
			}

			nIndex++;
			nSubIndex = 1;
			nLineIndex = 1;
		}



		rsg.MoveNext();
	}

	nTotalCost  = (nTotalCost);
	nTotalInsCost  = (nTotalInsCost);
	nTotalDiscount  = (nTotalDiscount);
	nTotalDiffCost  = (nTotalDiffCost);
	nTotalPatPaid  = ceil(nTotalPatPaid);

	nTotalDiscount = nTotalDiscount;
	
	TranslateString(_T("Total Amount"), szName);
	nItem = pList->AddItems(_T(""), szName, 
		_T(""),
		_T(""),
		_T(""),
		ToString(nTotalCost),
		ToString(nTotalDiscount),
		ToString(nTotalDiffCost),
		ToString(nTotalPatPaid),
		NULL);

	pList->SetItemBkColor(nItem, RGB(0, 129, 192), FALSE);
	pList->SetItemTextColor(nItem, COLOR_WHITE, FALSE);
	pList->MergeCell(nItem, 1, nItem, 4, DT_LEFT|DT_VCENTER|DT_SINGLELINE, true);

	pList->EndLoad();
	nTotalCost += nTotalDiffCost;
	nTotalPayable = nTotalDiffCost+nTotalPatPaid;
	if(m_szObjectType == _T("S"))
	{
		nTotalInsCost = 0;
	}

}
#include "FMSummaryPaymentAndReceiptDialog.h"

void CMainFrame::OnFileSummarypaymentreceipt()
{
	CFMSummaryPaymentAndReceiptDialog dlg(this);
	if(dlg.DoModal() == IDOK)
	{

	}
	
}



LRESULT CMainFrame::OnReceiveMessage(WPARAM wParam, LPARAM lParam)
{
	int nLength = (int) wParam;
	
	LPWSTR strText = reinterpret_cast<LPWSTR>(lParam);
	
	if(_tcsncmp(strText, m_szReceiveData, nLength) != 0)
	{

		m_szReceiveData = strText;
		_tprintf(_T("\r\nText: %s: %d"), strText, nLength);

		CString szHeader;
		CString szData;
		CString szStatus;
		CStringToken tk(strText, _T(","));

		if(tk.GetSize() > 1)
		{
			tk.GetAt(0, szHeader);
			tk.GetAt(1, szData);
			if(szHeader == _T("#DEV_Dummy"))
			{
				tk.GetAt(2, szStatus);
			}

			if(szHeader == _T("#DEV_Data"))
			{
				CString szServiceCode;
				tk.GetAt(1, szServiceCode);
				CString szSQL;
				CRecord rs(&m_db);
				
				if(szServiceCode != m_szServiceCode)
				{
					szSQL.Format(_T(" SELECT MAX(hd_docno) AS docno") \
						_T(" FROM hms_doc") \
						_T(" LEFT JOIN hms_pos_customer") \
						_T(" ON(hpc_patientno     = hd_patientno)") \
						_T(" WHERE hpc_servicecode= '%s'"), szServiceCode);
					rs.ExecSQL(szSQL);
					if(!rs.IsEOF())
					{
						
						long nDoc;
						rs.GetValue(_T("docno"), nDoc);
						m_nDocumentNo = nDoc;
						m_nRefIndex = 0;
						m_nInpatient = 0;

						SetActivePane(0);
						
						m_wndPatientFee.LoadData(nDoc);
						m_szServiceCode = szServiceCode;
					}
				}
			}
			if(szHeader == _T("#DEV_Sale"))
			{
				tk.GetAt(1, m_szBillCode);
				tk.GetAt(2, m_szAmount);
				tk.GetAt(3, m_szResultCode);
				m_bWaitForPayment = false;
				_tprintf(_T("\r\n%s: %s: %s"), m_szBillCode, m_szResultCode, m_szAmount);
				
			}
			if(szHeader == _T("#DEV_Void"))
			{
				tk.GetAt(1, m_szBillCode);
				tk.GetAt(2, m_szAmount);
				tk.GetAt(3, m_szResultCode);
			}

		}
	}
	
	return 0;
}


LRESULT CMainFrame::WindowProc(UINT message, WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
#ifdef HAVE_POS

	if(message == WM_RECEIVE_TEXT && HasPOS())
	{
		OnReceiveMessage(wParam, lParam);
		return 0;
	}
#endif

	return CHMSMainFrame::WindowProc(message, wParam, lParam);
}


bool CMainFrame::HasPOS()
{
	return m_bHasPOS;
}



void	CMainFrame::POS_ResetContent(){
	m_szBillCode.Empty();
	m_szAmount.Empty();
	m_szResultCode.Empty();
}
bool	CMainFrame::POS_GetPaymentState(){
	if(!m_szBillCode.IsEmpty() && m_szResultCode == _T("00"))
		return true;
	return false;

}
CString	CMainFrame::POS_GetBillCode(){
	return m_szBillCode;
}
CString	CMainFrame::POS_GetAmount(){
	return m_szAmount;
}
CString	CMainFrame::POS_GetResultCode(){
	return m_szResultCode;
}
CString	CMainFrame::POS_GetServiceCode(){
	return m_szServiceCode;
}

void	CMainFrame::POS_BeginWaitForPayment()
{
	m_bWaitForPayment = true;
}
bool CMainFrame::POS_IsWaitForPayment()
{
	return m_bWaitForPayment;
}

CString CMainFrame::GetPaymentMethod()
{
	return m_szPaymentMethod;
}


#include "HMSPaymentMethodSettingDialog.h"

void CMainFrame::OnFileSettingpaymentmethod()
{
	if (CheckPermission(_T("30.01")))
	{
		CHMSPaymentMethodSettingDialog dlg(this);
		dlg.DoModal();
	}
	else
		AfxMessageBox(_T("Chưa được cấp quyền 30.01, vui lòng liên hệ admin"));

}
void CMainFrame::OnMenuformfootersetup()
{
	if (CheckPermission(_T("30.02")))
	{
		CFormFooterSetup dlg(this);
		dlg.DoModal();
	}
	else
		AfxMessageBox(_T("Chưa được cấp quyền 30.02, vui lòng liên hệ admin"));	
}

#include <iostream>

static const std::string base64_chars = 
             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
             "abcdefghijklmnopqrstuvwxyz"
             "0123456789+/";


static inline bool is_base64(BYTE c) {
  return (isalnum(c) || (c == '+') || (c == '/'));
}

std::string base64_encode(BYTE const* buf, unsigned int bufLen) {
  std::string ret;
  int i = 0;
  int j = 0;
  BYTE char_array_3[3];
  BYTE char_array_4[4];

  while (bufLen--) {
    char_array_3[i++] = *(buf++);
    if (i == 3) {
      char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
      char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
      char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
      char_array_4[3] = char_array_3[2] & 0x3f;

      for(i = 0; (i <4) ; i++)
        ret += base64_chars[char_array_4[i]];
      i = 0;
    }
  }

  if (i)
  {
    for(j = i; j < 3; j++)
      char_array_3[j] = '\0';

    char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
    char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
    char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
    char_array_4[3] = char_array_3[2] & 0x3f;

    for (j = 0; (j < i + 1); j++)
      ret += base64_chars[char_array_4[j]];

    while((i++ < 3))
      ret += '=';
  }

  return ret;
}

std::vector<BYTE> base64_decodex(std::string const& encoded_string) {
  int in_len = encoded_string.size();
  int i = 0;
  int j = 0;
  int in_ = 0;
  BYTE char_array_4[4], char_array_3[3];
  std::vector<BYTE> ret;

  while (in_len-- && ( encoded_string[in_] != '=') && is_base64(encoded_string[in_])) {
    char_array_4[i++] = encoded_string[in_]; in_++;
    if (i ==4) {
      for (i = 0; i <4; i++)
        char_array_4[i] = base64_chars.find(char_array_4[i]);

      char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
      char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
      char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

      for (i = 0; (i < 3); i++)
          ret.push_back(char_array_3[i]);
      i = 0;
    }
  }

  if (i) {
    for (j = i; j <4; j++)
      char_array_4[j] = 0;

    for (j = 0; j <4; j++)
      char_array_4[j] = base64_chars.find(char_array_4[j]);

    char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
    char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
    char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

    for (j = 0; (j < i - 1); j++) ret.push_back(char_array_3[j]);
  }

  return ret;
}

#include "JSON.h"
/*
	Ham Post thong tin khi thanh toan hoa don len Server hoa don dien tu
*/
bool CMainFrame::PostToInvoice(long nDocumentNo, long nInvoiceNo)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szHost;
	CString szSQL, szAmount,szSumInWord;
	CString tmpStr, szSex;
	long double nPayment;	
	JSONVALUE jbuilder;

	szSQL.Format(_T(" SELECT  hd_patientno as patientno,  ") \
	_T("         hd_docno as docno,") \
	_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
	_T("         hp_birthdate as birthdate,") \
	_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
	_T("         sys_sel_getname('sys_sex', hp_sex) as sex,") \
	_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
	_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
	_T("         hp_workplace as workplace,") \
	_T("         hfe_type as typeid,") \
	_T(" 	     sys_sel_getname('hms_rank', cast(hp_rank as nvarchar2(15))) as rank,") \
	_T("         Get_DepartmentName(hfe_deptid) as deptname,") \
	_T("         hfe_deptid as depts,") \
	_T(" 	     hms_getobjectname(hd_object) as objectname,") \
	_T("         hfe_serialno as serialno,") \
	_T("         hfe_receiptno as recvno,") \
	_T("         hfe_date as recvdate, ") \
	_T("         hfe_staff as receiveby,") \
	_T("         case when length(hfe_desc) < 3 then GET_SELECTION_DESC('hms_invoice_desc',hfe_desc) else hfe_desc end as reason, ") \
	_T("         hfe_amount as cost,") \
	_T("         hfe_payment as payment") \
	_T(" FROM hms_fee_invoice") \
	_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
	_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
	_T(" WHERE hfe_docno=%ld AND hfe_invoiceno=%ld AND hfe_status ='P' ") \
	_T(" AND hfe_payment > 0"), nDocumentNo, nInvoiceNo);
	

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;

	CString szPatientId;
	
	tmpStr = _T("0");
	if(pMF->IsInPatient())
	{	
		tmpStr = _T("2");
	}

	jbuilder[_T("InvoiceType")]= tmpStr;

	rs.GetValue(_T("patientno"), tmpStr);
	jbuilder[_T("CusCode")]= tmpStr;

	rs.GetValue(_T("pname"), tmpStr);
    jbuilder[_T("CusName")]= tmpStr;
	
	rs.GetValue(_T("address"), tmpStr);
    jbuilder[_T("CusAddress")]= tmpStr;

	rs.GetValue(_T("recvdate"), tmpStr);
    jbuilder[_T("ArisingDate")]= tmpStr;

	rs.GetValue(_T("docno"), tmpStr);
    jbuilder[_T("MaBA")]= tmpStr;

	tmpStr.Format(_T("%ld"), nInvoiceNo);
    jbuilder[_T("SoPT")]= tmpStr;

	rs.GetValue(_T("padpaid"), szAmount);
    jbuilder[_T("Total")]= szAmount;	
	
    jbuilder[_T("VATRate")]= _T("0");	
    jbuilder[_T("VATAmount")]= _T("0");
	
	jbuilder[_T("Amount")]= szAmount;
	FormatCurrencyStr(szAmount, tmpStr);  
	
	nPayment = str2long(szAmount);

	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng");
    jbuilder[_T("AmountInWords")]= szSumInWord;

	std::wstring json_string;
	CString szJson;
	jbuilder.ToString(json_string);
	
	szJson.Format(_T("%s"), json_string.c_str());
	CInternetSession session(_T("VIMES_INVOICE_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
   
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
   szURL.Format(_T("%s/publish?username=%s&password=%s&pattern=%s&serial=%s"), m_szInvUrl, m_szInvUserID, m_szInvPassword, m_szInvPattern, m_szInvSerial);

	_tprintf(_T("\r\n%s%s"), szURL, szJson);

//_tprintf(_T("\r\n%s"), szJson);
//_msg(_T("%s"), szJson);

   BOOL result = FALSE;
   try
   {
      CString strServerName;
      INTERNET_PORT nPort;
      DWORD dwRet = 0;
	  

	  CString svr, strobj, strParams;
	  DWORD svrtype;
	  INTERNET_PORT port;

	  CString strHeaders = _T("Content-Type: application/json; charset=utf-8");

	  ::AfxParseURL(szURL, svrtype, svr, strobj, port);


	  pServer = session.GetHttpConnection(svr, port);

	
	  pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
	  pFile->AddRequestHeaders(strHeaders);
	  
//_msg(_T("%s%s"), szURL, szJson);

	  char* buff;
	  int len = json_string.length()*sizeof(WCHAR);
	  buff = new char[len];
	  memset(buff, '\0', len);
	  ::WideCharToMultiByte(CP_UTF8, 0, szJson,szJson.GetLength(), buff, len, 0, 0);

	  result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));
	 
	  delete buff;

	  

      pFile->QueryInfoStatusCode(dwRet);

	_tprintf(_T("\r\n%d"), dwRet);
      if (dwRet == HTTP_STATUS_OK)
      {
        CHAR szBuff[1024];
		WCHAR szData[1024];
		memset(szBuff, L'\0', 1024);

         while (pFile->Read(szBuff, 1024) > 0)
         {
			CString szStatus, szClass;
			long nElecInvoice;

            _tprintf(_T("%s"), szBuff);			
			 int nbyte = ::MultiByteToWideChar(CP_UTF8, 0, szBuff, strlen(szBuff), szData, 1024);
			szData[nbyte] = L'\0';

			szResponse.AppendFormat(_T("%s"), szData);
			_tprintf(_T("\r\nResponse:%s"), szResponse);
			
			szResponse.Replace(_T(":"), _T(";"));
			szResponse.Replace(_T("_"), _T(";"));

			CStringToken stResult(szResponse, _T(";"));
			/*for(int i=0; i<stResult.GetSize(); i++){
				stResult.GetAt(i, tmpStr);
				_tprintf(_T("\r\n%d, %s, %d"), i,tmpStr);
			}*/
			
			stResult.GetAt(0, tmpStr);
			szStatus.Empty();
			if(tmpStr == _T("OK")){
				szStatus = _T("Y");
			}


			stResult.GetAt(3, tmpStr);
			nElecInvoice = ToLong(tmpStr);

			if(pMF->m_nInpatient == 0)
				szClass = _T("E");
			else
				szClass = _T("I");

			
			szSQL.Format(_T("INSERT INTO HMS_FEE_ELECTRONICINVOICE(HFE_CREATEDBY, HFE_UPDATEDBY, HFE_PATIENTNO, HFE_DOCNO, HFE_INVOICENO, HFE_ELECINVOICENO, HFE_CLASS, HFE_STATUS, HFE_DESC, HFE_TYPE, HFE_AMOUNT) ") \
						_T("VALUES ('%s', '%s', %ld, %ld, %ld, %ld, '%s', '%s','%s','%s', %ld)"), pMF->GetCurrentUser(), pMF->GetCurrentUser(),pMF->m_nPatientNo, m_nDocumentNo, nInvoiceNo, nElecInvoice, szClass, szStatus, _T(""), _T("P"), nPayment);
			pMF->ExecSQL(szSQL);
			//_msg(_T("%s"), szSQL);
         }
      }
	  else
	  {
		  ShowMessageBox(_T("Kh\xF4ng th\x1EC3 k\x1EBFt n\x1ED1i v\x1EDBi m\xE1y in RO\x42O"));
	  }
      delete pFile;
      delete pServer;
   }
   catch (CInternetException* pEx)
   {
       //catch errors from WinInet
      TCHAR pszError[64];
      pEx->GetErrorMessage(pszError, 64);
      _tprintf(_T("%63s"), pszError);
	  CString szMsg;
	  szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng m\xE1y in[%s]"), pszError);
	  ShowMessageBox(szMsg);
   }

	return true;
}

int CMainFrame::PostToInvoice(long nDocumentNo, CString szClass, CString szDepttype, CString szType, double nAmount, double nPatpaid)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szHost;
	CString szSQL, szAmount,szSumInWord;
	CString tmpStr, szSex;
	long double nPayment;
	double nDrugAmount;
	long	nInvoiceNo;
	long	nPatientNo;
	int nPost = 1;
	long	nErrCount=0;
	int nErr =0;
	JSONVALUE jbuilder;

	szSQL.Format(_T(" SELECT hd_patientno AS patientno,") \
	_T("   hd_docno          AS docno,") \
	_T("   trim(hp_surname") \
	_T("   ||' '") \
	_T("   ||hp_midname") \
	_T("   ||' '") \
	_T("   ||hp_firstname)                                    AS pname,") \
	_T("   hp_birthdate                                       AS birthdate,") \
	_T("   hms_getage(trunc_date(hd_admitdate), hp_birthdate) AS age,") \
	_T("   sys_sel_getname('sys_sex', hp_sex)                 AS sex,") \
	_T("   hms_getaddress(hp_provid,hp_distid, hp_villid)     AS address,") \
	_T("   hms_getobjectname(hd_object)                       AS objectname,") \
	_T("   ROUND(amount)                                      AS amount,") \
	_T("   ROUND(patpaid)                                     AS patpaid,") \
	_T("   ROUND(discount)                                    AS discount,") \
	_T("   ROUND(diffcost)                                    AS diffcost,") \
	_T("   ROUND(drugcost)                                    AS drugcost") \
	_T(" FROM") \
	_T("   (SELECT hfe_docno,") \
	_T("     SUM(hfe_cost)     AS amount,") \
	_T("     SUM(hfe_patpaid)  AS patpaid,") \
	_T("     SUM(hfe_discount) AS discount,") \
	_T("     SUM(hfe_diffcost) AS diffcost,") \
	_T("     SUM(") \
	_T("     CASE") \
	_T("       WHEN hfe_type = 'D'") \
	_T("       THEN hfe_patpaid") \
	_T("       ELSE 0") \
	_T("     END) AS drugcost") \
	_T("   FROM hms_fee") \
	_T("   WHERE hfe_docno = %ld") \
	_T("   AND hfe_status  ='P'") \
	_T("   AND hfe_patpaid > 0") \
	_T("   GROUP BY hfe_docno") \
	_T("   )") \
	_T(" LEFT JOIN hms_doc") \
	_T(" ON(hd_docno=hfe_docno)") \
	_T(" LEFT JOIN hms_patient") \
	_T(" ON(hp_patientno =hd_patientno)") \
	_T(" WHERE hd_docno  =%ld ") \
	_T(" AND patpaid > 0 "), nDocumentNo, nDocumentNo);

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;

	
	CString szPatientId, szStatus, szDesc, szPatter, szSerial;
		
	tmpStr = _T("0");
	
	jbuilder[_T("InvoiceType")]= _T("1");

	rs.GetValue(_T("patientno"), nPatientNo);
	tmpStr.Format(_T("%ld"), nPatientNo);
	jbuilder[_T("CusCode")]= tmpStr;

	rs.GetValue(_T("pname"), tmpStr);
	jbuilder[_T("CusName")]= tmpStr;
	
	rs.GetValue(_T("address"), tmpStr);
	jbuilder[_T("CusAddress")]= tmpStr;

	//rs.GetValue(_T("recvdate"), tmpStr);
	tmpStr = pMF->GetSysDateTime();
	tmpStr.Replace(_T("/"), _T("-"));
	jbuilder[_T("ArisingDate")]= tmpStr;

	rs.GetValue(_T("docno"), tmpStr);
	jbuilder[_T("MaBA")]= tmpStr;

	tmpStr.Format(_T("%ld"), nDocumentNo);
	jbuilder[_T("SoPT")]= tmpStr;

	tmpStr.Format(_T("%s"), _T("Th\x61nh to\xE1n ti\x1EC1n vi\x1EC7n ph\xED"));
	jbuilder[_T("ProductName")]= tmpStr;
	szDesc = tmpStr;
		
	jbuilder[_T("Total")]= nAmount;
	
	jbuilder[_T("VATRate")]= _T("0");	
	jbuilder[_T("VATAmount")]= _T("0");
	
	szPatter = m_szInvPattern;
	szSerial = m_szInvSerial;	
	if(szDepttype == _T("D")){
		szPatter = m_szInvPattern1;
		szSerial = m_szInvSerial1;
	}

	szAmount.Format(_T("%0.f"), nPatpaid);
	jbuilder[_T("Amount")]= szAmount;
			
	jbuilder[_T("KCBAmount")]= szAmount;
	
	//FormatCurrencyStr(szAmount, tmpStr);
					
	MoneyToString(szAmount, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng");
	jbuilder[_T("AmountInWords")]= szSumInWord;

	std::wstring json_string;
	CString szJson;
	jbuilder.ToString(json_string);
	
	szJson.Format(_T("%s"), json_string.c_str());
	CInternetSession session(_T("VIMES_INVOICE_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
	
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a"));
	szURL.Format(_T("%s/publish?username=%s&password=%s&pattern=%s&serial=%s"), m_szInvUrl, m_szInvUserID, m_szInvPassword, szPatter, szSerial);

	_tprintf(_T("\r\n%s%s"), szURL, szJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;
			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");

		::AfxParseURL(szURL, svrtype, svr, strobj, port);


		pServer = session.GetHttpConnection(svr, port);

		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);
			
	//_msg(_T("%s%s"), szURL, szJson);

		char* buff;
		int len = json_string.length()*sizeof(WCHAR);
		buff = new char[len];
		memset(buff, '\0', len);
		::WideCharToMultiByte(CP_UTF8, 0, szJson,szJson.GetLength(), buff, len, 0, 0);
		_tprintf(_T("\r\nStart: %s"), pMF->GetSysDateTime());	
		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));
			
			
		delete buff;

			

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\n%d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			CHAR szBuff[1024];
			WCHAR szData[1024];
			memset(szBuff, L'\0', 1024);
_tprintf(_T("\r\nEnd: %s"), pMF->GetSysDateTime());	
			while (pFile->Read(szBuff, 1024) > 0)
			{					
				long nElecInvoice;

				_tprintf(_T("%s"), szBuff);			
				int nbyte = ::MultiByteToWideChar(CP_UTF8, 0, szBuff, strlen(szBuff), szData, 1024);
				szData[nbyte] = L'\0';

				szResponse.AppendFormat(_T("%s"), szData);
				_tprintf(_T("\r\nResponse:%s"), szResponse);
				
				szResponse.Replace(_T(":"), _T(";"));
				szResponse.Replace(_T("_"), _T(";"));

				CStringToken stResult(szResponse, _T(";"));
				/*for(int i=0; i<stResult.GetSize(); i++){
					stResult.GetAt(i, tmpStr);
					_tprintf(_T("\r\n%d, %s, %d"), i,tmpStr);
				}*/
				
				stResult.GetAt(0, tmpStr);
				szStatus.Empty();
				if(tmpStr == _T("OK")){
					szStatus = _T("Y");
				}


				stResult.GetAt(3, tmpStr);
				nElecInvoice = ToLong(tmpStr);

				nErr = 1;

				szSQL.Format(_T("HMS_ELECTRONIC_INSERT(%ld,%ld,%ld,%ld,'%s','%s','%s','%s','%s','%s',%0.f,%0.f,'%s', '%s')"), nPatientNo, nDocumentNo, nInvoiceNo, nElecInvoice, szClass, szStatus, szDesc, szType, szPatter, szSerial, nAmount, nPatpaid, m_szInvUserID, szDepttype);
				int ret = str2int(pMF->ExecDML(szSQL));
				//_msg(_T("%s"), szSQL);
				if(ret <= 0)
				{
					nErr = -2;
				}
				
			}
		}
		else
		{
			_tprintf(_T("Khong ket noi duoc den SERVER Hoa don"));
			nErr = -1;
		}

		

		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng h\x1EC7 th\x1ED1ng H\x110[%s]"), pszError);
		ShowMessageBox(szMsg);
	}	

	return nErr;
}

// Ham Post phieu hoan tra
bool CMainFrame::PostToRefundInvoice(long nDocumentNo, long nInvoiceNo)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szHost;
	CString szSQL, szAmount,szSumInWord;
	CString tmpStr, szSex;
	double nPayment, nCost, nRefund;
	JSONVALUE jbuilder;

	szSQL.Format(_T(" SELECT  hd_patientno as patientno,  ") \
	_T("         hd_docno as docno,") \
	_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
	_T("         hp_birthdate as birthdate,") \
	_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
	_T("         sys_sel_getname('sys_sex', hp_sex) as sex,") \
	_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
	_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
	_T("         hp_workplace as workplace,") \
	_T("         hfe_type as typeid,") \
	_T(" 	     sys_sel_getname('hms_rank', cast(hp_rank as nvarchar2(15))) as rank,") \
	_T("         Get_DepartmentName(hfe_deptid) as deptname,") \
	_T("         hfe_deptid as depts,") \
	_T(" 	     hms_getobjectname(hd_object) as objectname,") \
	_T("         hfe_serialno as serialno,") \
	_T("         hfe_receiptno as recvno,") \
	_T("         hfe_date as recvdate, ") \
	_T("         hfe_staff as receiveby,") \
	_T("         (SELECT SUM(HFE_AMOUNT) FROM HMS_FEE_REFUND WHERE hfe_refidx = HMS_FEE_INVOICE.HFE_INVOICENO) As refundamt, ") \
	_T("         hfe_amount as cost,") \
	_T("         hfe_payment as payment") \
	_T(" FROM hms_fee_invoice") \
	_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
	_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
	_T(" WHERE hfe_docno=%ld AND hfe_invoiceno=%ld AND hfe_status ='P' "), nDocumentNo, nInvoiceNo);

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;

	CString szPatientId;
	
	tmpStr = _T("0");
	if(pMF->IsInPatient())
	{	
		tmpStr = _T("2");
	}

	jbuilder[_T("InvoiceType")]= tmpStr;

	rs.GetValue(_T("patientno"), tmpStr);
	jbuilder[_T("CusCode")]= tmpStr;

	rs.GetValue(_T("pname"), tmpStr);
    jbuilder[_T("CusName")]= tmpStr;
	
	rs.GetValue(_T("address"), tmpStr);
    jbuilder[_T("CusAddress")]= tmpStr;

	tmpStr = pMF->GetSysDateTime();
	tmpStr.Replace(_T("/"), _T("-"));
	jbuilder[_T("ArisingDate")]= tmpStr;

	rs.GetValue(_T("docno"), tmpStr);
    jbuilder[_T("MaBA")]= tmpStr;

	tmpStr.Format(_T("%ld"), nInvoiceNo);
    jbuilder[_T("SoPT")]= tmpStr;

	rs.GetValue(_T("payment"), nCost);
	rs.GetValue(_T("refundamt"), nRefund);

	nPayment = nCost - nRefund;
	szAmount.Format(_T("%.0f"), nPayment);

    jbuilder[_T("Total")]= szAmount;	
    jbuilder[_T("VATRate")]= _T("0");	
    jbuilder[_T("VATAmount")]= _T("0");	
	jbuilder[_T("Amount")]= szAmount;
	FormatCurrencyStr(szAmount, tmpStr);
    
	 

	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng");
    jbuilder[_T("AmountInWords")]= szSumInWord;

	std::wstring json_string;
	CString szJson;
	jbuilder.ToString(json_string);
	
	long nElectronicInvoice =0;
	szSQL.Format(_T("SELECT HFE_ELECINVOICENO FROM HMS_FEE_ELECTRONICINVOICE WHERE HFE_DOCNO=%ld AND HFE_INVOICENO=%ld AND HFE_TYPE ='P'"), m_nDocumentNo, m_nInvoiceNo);
	rs.ExecSQL(szSQL);
	nElectronicInvoice = rs.GetIntValue();
	
	if(nElectronicInvoice <= 0)
	{
		ShowMessageBox(_T("Kh\xF4ng t\xECm th\x1EA5y s\x1ED1 ho\xE1 \x111\x1A1n k\xFD!"));
		return -1;
	}

	szJson.Format(_T("%s"), json_string.c_str());
	CInternetSession session(_T("VIMES_INVOICE_POST"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse, szDesc;
   
	CString szURL;
	//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a&fkey=%ld"), nElectronicInvoice);

	szURL.Format(_T("%s/proceed?username=%s&password=%s&fkey=%ld"), m_szInvUrl, m_szInvUserID, m_szInvPassword, nElectronicInvoice);   
   
	_tprintf(_T("\r\n%s%s"), szURL, szJson);

//_tprintf(_T("\r\n%s"), szJson);
//_msg(_T("%s"), szJson);

   BOOL result = FALSE;
   try
   {
      CString strServerName;
      INTERNET_PORT nPort;
      DWORD dwRet = 0;
	  

	  CString svr, strobj, strParams;
	  DWORD svrtype;
	  INTERNET_PORT port;

	  CString strHeaders = _T("Content-Type: application/json; charset=utf-8");

	  ::AfxParseURL(szURL, svrtype, svr, strobj, port);


	  pServer = session.GetHttpConnection(svr, port);

	
	  pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
	  pFile->AddRequestHeaders(strHeaders);
	  

	  char* buff;
	  int len = json_string.length()*sizeof(WCHAR);
	  buff = new char[len];
	  memset(buff, '\0', len);
	  ::WideCharToMultiByte(CP_UTF8, 0, szJson,szJson.GetLength(), buff, len, 0, 0);

	  result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));
	 
	  delete buff;

	  

      pFile->QueryInfoStatusCode(dwRet);

	_tprintf(_T("\r\n%d"), dwRet);
      if (dwRet == HTTP_STATUS_OK)
      {
        CHAR szBuff[1024];
		WCHAR szData[1024];
		memset(szBuff, L'\0', 1024);

         while (pFile->Read(szBuff, 1024) > 0)
         {
			CString szStatus, szClass;
			long nElecInvoice;

			 int nbyte = ::MultiByteToWideChar(CP_UTF8, 0, szBuff, strlen(szBuff), szData, 1024);
			szData[nbyte] = L'\0';

			szResponse.AppendFormat(_T("%s"), szData);
			_tprintf(_T("\r\nResponse:%s"), szResponse);
			
			szResponse.Replace(_T(":"), _T(";"));
			szResponse.Replace(_T("_"), _T(";"));

			CStringToken stResult(szResponse, _T(";"));
			/*for(int i=0; i<stResult.GetSize(); i++){
				stResult.GetAt(i, tmpStr);
				_tprintf(_T("\r\n%d, %s, %d"), i,tmpStr);
			}*/
			
			stResult.GetAt(0, tmpStr);
			szStatus.Empty();
			szDesc = tmpStr;
			if(tmpStr == _T("OK")){
				szStatus = _T("Y");
			}


			stResult.GetAt(3, tmpStr);
			nElecInvoice = ToLong(tmpStr);

			if(pMF->m_nInpatient == 0)
				szClass = _T("E");
			else
				szClass = _T("I");

			
			szSQL.Format(_T("INSERT INTO HMS_FEE_ELECTRONICINVOICE(HFE_CREATEDBY, HFE_UPDATEDBY, HFE_PATIENTNO, HFE_DOCNO, HFE_INVOICENO, HFE_ELECINVOICENO, HFE_CLASS, HFE_STATUS, HFE_DESC, HFE_TYPE, HFE_AMOUNT) ") \
						_T("VALUES ('%s', '%s', %ld, %ld, %ld, %ld, '%s', '%s','%s','%s', %ld)"), pMF->GetCurrentUser(), pMF->GetCurrentUser(),pMF->m_nPatientNo, m_nDocumentNo, nInvoiceNo, nElecInvoice, szClass, szStatus, szDesc, _T("R"), nPayment);
			pMF->ExecSQL(szSQL);
			//_msg(_T("%s"), szSQL);
         }
      }
	  else
	  {
		  ShowMessageBox(_T("Kh\xF4ng th\x1EC3 k\x1EBFt n\x1ED1i v\x1EDBi m\xE1y in RO\x42O"));
	  }
      delete pFile;
      delete pServer;
   }
   catch (CInternetException* pEx)
   {
       //catch errors from WinInet
      TCHAR pszError[64];
      pEx->GetErrorMessage(pszError, 64);
      _tprintf(_T("%63s"), pszError);
	  CString szMsg;
	  szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng m\xE1y in[%s]"), pszError);
	  ShowMessageBox(szMsg);
   }

	return true;
}



bool CMainFrame::PostToRefundInvoice(long nDocumentNo, CString szClass, CString szDepttype)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rso(&pMF->m_db);
	CRecord rs(&pMF->m_db);
	CString szHost;
	CString szSQL, szWhere, szAmount,szSumInWord, szPatter, szSerial;
	CString tmpStr, szSex, szRefundType;
	double nPayment, nCost, nRefund;
	long nPatientNo,nInvoiceNo, nErr;
	JSONVALUE jbuilder;

	// Lay du lieu phieu hoan tra cua benh nhan
	if(szClass == _T("E"))
	{	// Neu la thuoc hoan tra
		if(szDepttype == _T("D"))
		{
			szSQL.Format(_T(" SELECT") \
			_T("   SUM(patpaid) AS patpaid,") \
			_T("   SUM(amount)  AS amount") \
			_T(" FROM") \
			_T("   (SELECT r1.hfe_docno,") \
			_T("     r2.hfe_patpaid AS patpaid,") \
			_T("     r2.hfe_cost    AS amount") \
			_T("   FROM hms_fee_refund r1") \
			_T("   LEFT JOIN hms_fee_refundline r2") \
			_T("   ON(r2.hfe_invoiceno  =r1.hfe_invoiceno)") \
			_T("   WHERE r1.hfe_docno   = %ld") \
			_T("   AND r2.HFE_INVOICENO > 0") \
			_T("   AND SUBSTR(r2.hfe_group,1,1) = 'A'") \
			_T("   AND NVL(r1.hfe_electronic,'N') = 'N'") \
			_T("   )"), nDocumentNo);
		}
		else
		{
			szSQL.Format(_T(" SELECT ") \
			_T("   SUM(patpaid) AS patpaid,") \
			_T("   SUM(amount)  AS amount") \
			_T(" FROM") \
			_T("   (SELECT r1.hfe_docno,") \
			_T("     r2.hfe_patpaid AS patpaid,") \
			_T("     r2.hfe_cost    AS amount") \
			_T("   FROM hms_fee_refund r1") \
			_T("   LEFT JOIN hms_fee_refundline r2") \
			_T("   ON(r2.hfe_invoiceno  =r1.hfe_invoiceno)") \
			_T("   WHERE r1.hfe_docno   = %ld") \
			_T("   AND r2.HFE_INVOICENO > 0") \
			_T("   AND SUBSTR(r2.hfe_group,1,1) <> 'A' ") \
			_T("   AND NVL(r1.hfe_electronic,'N') = 'N'") \
			_T("   )"), nDocumentNo);
		}
	}
	else
	{	
		szSQL.Format(_T(" SELECT SUM(patpaid) AS patpaid,") \
		_T("   SUM(amount)       AS amount") \
		_T(" FROM") \
		_T("   (SELECT r2.hfe_patpaid AS patpaid,") \
		_T("     r2.hfe_cost          AS amount") \
		_T("   FROM hms_fee_refund r1") \
		_T("   LEFT JOIN hms_fee_refundline r2") \
		_T("   ON(r2.hfe_invoiceno  =r1.hfe_invoiceno)") \
		_T("   WHERE r1.hfe_docno   = %ld") \
		_T("   AND r2.HFE_INVOICENO > 0") \
		_T("   AND NVL(r1.hfe_electronic,'N') = 'N'") \
		_T("   )"), nDocumentNo);
	}
		
//_msg(_T("%s"), szSQL);
	rso.ExecSQL(szSQL);
	if(rso.IsEOF())
	{
		_tprintf(_T("\r\n Khong co phieu hoan tra"));
		return -1;
	}

	while(!rso.IsEOF())
	{

		
		if(szClass == _T("E"))
		{
			szWhere.Format(_T(" AND NVL(hfe_depttype,'N') = NVL('%s', 'N')"), szDepttype);
		}
		

		szSQL.Format(_T(" SELECT  hd_patientno as patientno,  ") \
		_T("         hd_docno as docno,") \
		_T("         trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
		_T("         hp_birthdate as birthdate,") \
		_T("         hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
		_T("         sys_sel_getname('sys_sex', hp_sex) as sex,") \
		_T("         nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
		_T("         hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
		_T("         hp_workplace as workplace,") \
		_T("         hfe_type as typeid,") \
		_T(" 	     sys_sel_getname('hms_rank', cast(hp_rank as nvarchar2(15))) as rank,") \
		_T(" 	     hms_getobjectname(hd_object) as objectname,") \
		_T("         hfe_patter as patter,") \
		_T("         hfe_serial as serial,") \
		_T("		 hfe_class as class, ") \
		_T("		 hfe_depttype as depttype, ") \
		_T("		 hfe_elecinvoiceno as elecinvoiceno, ") \
		_T("         hfe_amount as cost,") \
		_T("         hfe_payment as payment") \
		_T(" FROM hms_fee_electronicinvoice ")\
		_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
		_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
		_T(" WHERE hfe_docno=%ld AND rownum = 1 %s"), nDocumentNo, szWhere);

		//_msg(_T("%s"), szSQL);
		rs.ExecSQL(szSQL);
		if(rs.IsEOF())
			return 0;	

		CString szPatientId;

		tmpStr = _T("3");		
		jbuilder[_T("InvoiceType")]= tmpStr;

		rs.GetValue(_T("patientno"), tmpStr);
		jbuilder[_T("CusCode")]= tmpStr;

		rs.GetValue(_T("pname"), tmpStr);
		jbuilder[_T("CusName")]= tmpStr;
		
		rs.GetValue(_T("address"), tmpStr);
		jbuilder[_T("CusAddress")]= tmpStr;

		tmpStr = pMF->GetSysDateTime();
		tmpStr.Replace(_T("/"), _T("-"));
		jbuilder[_T("ArisingDate")]= tmpStr;

		rs.GetValue(_T("docno"), tmpStr);
		jbuilder[_T("MaBA")]= tmpStr;

		/*tmpStr.Format(_T("%ld"), nInvoiceNo);
		jbuilder[_T("SoPT")]= tmpStr;*/

		rs.GetValue(_T("payment"), nCost);
		rso.GetValue(_T("patpaid"), nRefund);

		nPayment = nCost - nRefund;
		szAmount.Format(_T("%.0f"), nPayment);

		jbuilder[_T("Total")]= szAmount;	
		jbuilder[_T("VATRate")]= _T("0");	
		jbuilder[_T("VATAmount")]= _T("0");	
		jbuilder[_T("Amount")]= szAmount;
		FormatCurrencyStr(szAmount, tmpStr);   
		 

		MoneyToString(tmpStr, szSumInWord);
		szSumInWord += _T(" \x111\x1ED3ng");
		jbuilder[_T("AmountInWords")]= szSumInWord;

		std::wstring json_string;
		CString szJson;
		jbuilder.ToString(json_string);
		
		long nElectronicInvoice =0;
		
		rs.GetValue(_T("elecinvoiceno"), nElectronicInvoice);
		
		_tprintf(_T("\r\n%ld"), nElectronicInvoice);
		if(nElectronicInvoice <= 0)
			break;

		szJson.Format(_T("%s"), json_string.c_str());
		CInternetSession session(_T("VIMES_INVOICE_POST"));

		CHttpConnection* pServer = NULL;
		CHttpFile* pFile = NULL;
		CString szResponse, szDesc;
	   
		CString szURL;
		//szURL.Format(_T("http://bv108.vinvoice.vn/api/publish/insertAndPublishInv?username=108admin&password=67890@a&fkey=%ld"), nElectronicInvoice);

		szURL.Format(_T("%s/proceed?username=%s&password=%s&fkey=%ld"), m_szInvUrl, m_szInvUserID, m_szInvPassword, nElectronicInvoice);
		_tprintf(_T("\r\n%s%s"), szURL, szJson);

		//_tprintf(_T("\r\n%s"), szJson);
	//_msg(_T("%s, %s"), szURL, szJson);

		BOOL result = FALSE;
		try
		{
			CString strServerName;
			INTERNET_PORT nPort;
			DWORD dwRet = 0;

			CString svr, strobj, strParams;
			DWORD svrtype;
			INTERNET_PORT port;

			CString strHeaders = _T("Content-Type: application/json; charset=utf-8");

			::AfxParseURL(szURL, svrtype, svr, strobj, port);


			pServer = session.GetHttpConnection(svr, port);

			
			pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
			pFile->AddRequestHeaders(strHeaders);
			  

			char* buff;
			int len = json_string.length()*sizeof(WCHAR);
			buff = new char[len];
			memset(buff, '\0', len);
			::WideCharToMultiByte(CP_UTF8, 0, szJson,szJson.GetLength(), buff, len, 0, 0);

			result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));
			 
			delete buff;

			  

			pFile->QueryInfoStatusCode(dwRet);

			_tprintf(_T("\r\n%d"), dwRet);
			if (dwRet == HTTP_STATUS_OK)
			{
				CHAR szBuff[1024];
				WCHAR szData[1024];
				memset(szBuff, L'\0', 1024);

				while (pFile->Read(szBuff, 1024) > 0)
				{
					CString szStatus, szClass;
					long nElecInvoice;

					int nbyte = ::MultiByteToWideChar(CP_UTF8, 0, szBuff, strlen(szBuff), szData, 1024);
					szData[nbyte] = L'\0';

					szResponse.AppendFormat(_T("%s"), szData);
					_tprintf(_T("\r\nResponse:%s"), szResponse);
					
					szResponse.Replace(_T(":"), _T(";"));
					szResponse.Replace(_T("_"), _T(";"));

					CStringToken stResult(szResponse, _T(";"));
					/*for(int i=0; i<stResult.GetSize(); i++){
						stResult.GetAt(i, tmpStr);
						_tprintf(_T("\r\n%d, %s, %d"), i,tmpStr);
					}*/
					
					stResult.GetAt(0, tmpStr);
					szStatus.Empty();
					szDesc = tmpStr;
					if(tmpStr == _T("OK")){
						szStatus = _T("Y");
					}


					stResult.GetAt(3, tmpStr);
					nElecInvoice = ToLong(tmpStr);

					szSQL.Format(_T("HMS_ELECTRONIC_INSERT(%ld,%ld,%ld,%ld,'%s','%s','%s','%s','%s','%s',%0.f,%0.f,'%s', '%s')"), nPatientNo, nDocumentNo, nInvoiceNo, nElecInvoice, szClass, szStatus, szDesc, _T("R"), szPatter, szSerial, nCost, nPayment, m_szInvUserID, szDepttype);
					int ret = str2int(pMF->ExecDML(szSQL));
					//_msg(_T("%s"), szSQL);
					if(ret <= 0)
					{
						nErr = -2;
					}					
				}
			}
			else
			{
				ShowMessageBox(_T("Kh\xF4ng th\x1EC3 k\x1EBFt n\x1ED1i v\x1EDBi m\xE1y in RO\x42O"));
			}
			delete pFile;
			delete pServer;
		}
		catch (CInternetException* pEx)
		{
			//catch errors from WinInet
			TCHAR pszError[64];
			pEx->GetErrorMessage(pszError, 64);
			_tprintf(_T("%63s"), pszError);
			CString szMsg;
			szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng m\xE1y in[%s]"), pszError);
			ShowMessageBox(szMsg);
		}
		rso.MoveNext();
	}

	return true;
}


// Ham Post phieu huy hoa don
bool CMainFrame::PostToCancelInvoice(long nDocumentNo, long nInvoiceNo)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szHost;
	CString szSQL, szAmount,szSumInWord;
	CString tmpStr, szSex;
	long double nPayment;
	JSONVALUE jbuilder;

	szSQL.Format(_T(" SELECT  *  ") \
	_T(" FROM HMS_FEE_ELECTRONICINVOICE") \
	_T(" WHERE hfe_docno=%ld AND hfe_invoiceno=%ld"), nDocumentNo, nInvoiceNo);

	//_msg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return 0;

	CString szPatientId;
	
	tmpStr = _T("0");
	if(pMF->IsInPatient())
	{	
		tmpStr = _T("2");
	}

	jbuilder[_T("InvoiceType")]= tmpStr;

	rs.GetValue(_T("patientno"), tmpStr);
	jbuilder[_T("CusCode")]= tmpStr;

	rs.GetValue(_T("pname"), tmpStr);
    jbuilder[_T("CusName")]= tmpStr;
	
	rs.GetValue(_T("address"), tmpStr);
    jbuilder[_T("CusAddress")]= tmpStr;

	rs.GetValue(_T("recvdate"), tmpStr);
    jbuilder[_T("ArisingDate")]= tmpStr;

	rs.GetValue(_T("docno"), tmpStr);
    jbuilder[_T("MaBA")]= tmpStr;

	tmpStr.Format(_T("%ld"), nInvoiceNo);
    jbuilder[_T("SoPT")]= tmpStr;

	rs.GetValue(_T("cost"), tmpStr);
    jbuilder[_T("Total")]= _T("0");	
	
    jbuilder[_T("VATRate")]= _T("0");
	
    jbuilder[_T("VATAmount")]= _T("0");

	rs.GetValue(_T("patpaid"), szAmount);
	jbuilder[_T("Amount")]= _T("0");

	szAmount.Format(_T("0"));
	FormatCurrencyStr(szAmount, tmpStr);
    
	nPayment = str2long(szAmount);

	MoneyToString(tmpStr, szSumInWord);
	szSumInWord += _T(" \x111\x1ED3ng");
    jbuilder[_T("AmountInWords")]= szSumInWord;

	long nElecinvoiceno;
	rs.GetValue(_T("HFE_ELECINVOICENO"), nElecinvoiceno);

	std::wstring json_string;
	CString szJson;
	jbuilder.ToString(json_string);
	
	szJson.Format(_T("%s"), json_string.c_str());
	CInternetSession session(_T("VIMES_INVOICE_CANCEL"));

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse;
	
	CString szURL;
	
	szURL.Format(_T("%s/cancelInvoice?username=%s&password=%s&fkey=%ld"),m_szInvUrl, m_szInvUserID, m_szInvPassword, nElecinvoiceno);
   
	_tprintf(_T("\r\n%s"), szURL);

//_tprintf(_T("\r\n%s"), szJson);
//_msg(_T("%s"), szJson);

   BOOL result = FALSE;
   try
   {
      CString strServerName;
      INTERNET_PORT nPort;
      DWORD dwRet = 0;
	  

	  CString svr, strobj, strParams;
	  DWORD svrtype;
	  INTERNET_PORT port;

	  CString strHeaders = _T("Content-Type: application/json; charset=utf-8");

	  ::AfxParseURL(szURL, svrtype, svr, strobj, port);


	  pServer = session.GetHttpConnection(svr, port);

	
	  pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
	  pFile->AddRequestHeaders(strHeaders);
	  
//_msg(_T("%s%s"), szURL, szJson);

	  char* buff;
	  int len = json_string.length()*sizeof(WCHAR);
	  buff = new char[len];
	  memset(buff, '\0', len);
	  ::WideCharToMultiByte(CP_UTF8, 0, szJson,szJson.GetLength(), buff, len, 0, 0);

	  result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));
	 
	  delete buff;

	  

      pFile->QueryInfoStatusCode(dwRet);

	_tprintf(_T("\r\n%d"), dwRet);
      if (dwRet == HTTP_STATUS_OK)
      {
        CHAR szBuff[1024];
		WCHAR szData[1024];
		memset(szBuff, L'\0', 1024);

         while (pFile->Read(szBuff, 1024) > 0)
         {
			CString szStatus, szClass, szDesc;
			long nElecInvoice;

			 int nbyte = ::MultiByteToWideChar(CP_UTF8, 0, szBuff, strlen(szBuff), szData, 1024);
			szData[nbyte] = L'\0';

			szResponse.AppendFormat(_T("%s"), szData);
			_tprintf(_T("\r\nResponse:%s"), szResponse);
			
			szResponse.Replace(_T(":"), _T(";"));
			szResponse.Replace(_T("_"), _T(";"));

			CStringToken stResult(szResponse, _T(";"));
			/*for(int i=0; i<stResult.GetSize(); i++){
				stResult.GetAt(i, tmpStr);
				_tprintf(_T("\r\n%d, %s, %d"), i,tmpStr);
			}*/
			
			stResult.GetAt(0, tmpStr);
			szStatus.Empty();
			szDesc = tmpStr;
			if(tmpStr == _T("OK")){
				szStatus = _T("Y");
			}			

			stResult.GetAt(3, tmpStr);
			nElecInvoice = ToLong(tmpStr);

			if(pMF->m_nInpatient == 0)
				szClass = _T("E");
			else
				szClass = _T("I");

			
			szSQL.Format(_T("INSERT INTO HMS_FEE_ELECTRONICINVOICE(HFE_CREATEDBY, HFE_UPDATEDBY, HFE_PATIENTNO, HFE_DOCNO, HFE_INVOICENO, HFE_ELECINVOICENO, HFE_CLASS, HFE_STATUS, HFE_DESC, HFE_TYPE, HFE_AMOUNT) ") \
						_T("VALUES ('%s', '%s', %ld, %ld, %ld, %ld, '%s', '%s','%s','%s', %ld)"), pMF->GetCurrentUser(), pMF->GetCurrentUser(),pMF->m_nPatientNo, m_nDocumentNo, nInvoiceNo, nElecInvoice, szClass, szStatus, szDesc, _T("C"), nPayment);
			pMF->ExecSQL(szSQL);
			//_msg(_T("%s"), szSQL);
         }
      }
	  else
	  {
		  ShowMessageBox(_T("Kh\xF4ng th\x1EC3 k\x1EBFt n\x1ED1i v\x1EDBi m\xE1y in RO\x42O"));
	  }
      delete pFile;
      delete pServer;
   }
   catch (CInternetException* pEx)
   {
       //catch errors from WinInet
      TCHAR pszError[64];
      pEx->GetErrorMessage(pszError, 64);
      _tprintf(_T("%63s"), pszError);
	  CString szMsg;
	  szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng m\xE1y in[%s]"), pszError);
	  ShowMessageBox(szMsg);
   }

	return true;
}

#include "Afxsock.h"
#include <atlenc.h>
#include <fstream>      // std::fstream
#include <afxinet.h>

bool CMainFrame::DownloadInvoice(double nElectronicInvoiceNo)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	CRecord rs(&pMF->m_db);
	int nPrint =0;
	
	szSQL.Format(_T("SELECT HFE_PRINT FROM HMS_FEE_ELECTRONICLINE ") \
			_T("WHERE HFE_DOCNO=%ld AND hfe_key = %.0f "),
			 m_nDocumentNo, nElectronicInvoiceNo);
	//_msg(_T("%s"),  szSQL);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hfe_print"), nPrint);
	
	if(nElectronicInvoiceNo <= 0)
		return false;

	CInternetSession session(_T("VIMES_INVOICE_GET"));

   CHttpConnection* pServer = NULL;
   CHttpFile* pFile = NULL;
   std::string strResponse;
  
   CString szURL;
   //szURL.Format(_T("http://bv108.vinvoice.vn/api/convertinv/convertInvoice?username=108admin&password=123456@a&fkey=%ld"), nInvoiceNo);
   if(nPrint < 1)
		szURL.Format(_T("%s/ConvertByKey?username=%s&password=%s&fkey=%.0f"), m_szInvUrl, m_szInvUserID, m_szInvPassword, nElectronicInvoiceNo);		
   else
		szURL.Format(_T("%s/ConvertAgainByKey?username=%s&password=%s&fkey=%.0f"), m_szInvUrl, m_szInvUserID, m_szInvPassword, nElectronicInvoiceNo);
   
   //_msg(_T("\r\n%s, %d"), szURL, nPrint);
   strResponse.clear();

   BOOL result = FALSE;
   try
   {
      CString strServerName;
      INTERNET_PORT nPort;
      DWORD dwRet = 0;
   

	  CString svr, strobj, strParams;
	  DWORD svrtype;
	  INTERNET_PORT port;

	  CString strHeaders = _T("Content-Type: application/json; charset=utf-8");

	  ::AfxParseURL(szURL, svrtype, svr, strobj, port);


	   pServer = session.GetHttpConnection(svr, port);

		 
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_GET,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);
		   
		result = pFile->SendRequest(NULL, 0, (LPVOID)NULL,0);
		pFile->QueryInfoStatusCode(dwRet);

	   _tprintf(_T("\r\n%d"), dwRet);
	   //_msg(_T("dwRet: %d"), dwRet);
      
	   
	   if (dwRet == HTTP_STATUS_OK)
		{
	        char szBuff[1025];
			int nread = 0;
			memset(szBuff, '\0', 1024);
			while ((nread = pFile->Read(szBuff, 1024)) > 0)
			{
				szBuff[nread] = '\0';
				strResponse += szBuff;
			}
			printf("%s",strResponse.c_str());

			//_msg(_T("vào đây: %s"), szResponse);
	  }
   else
   {
		ShowMessageBox(_T("Kh\xF4ng th\x1EC3 k\x1EBFt n\x1ED1i v\x1EDBi Server HD"));
   }
		delete pFile;
		delete pServer;
   }

   catch (CInternetException* pEx)
   {
       //catch errors from WinInet
      TCHAR pszError[64];
      pEx->GetErrorMessage(pszError, 64);
      //_tprintf(_T("%s"), pszError);
	  _msg(_T("pszError: %s"), pszError);
	  CString szMsg;
	  szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng Server[%s]"), pszError);
	  ShowMessageBox(szMsg);
   }	
    

   if(!strResponse.empty() && strResponse.length() > 1024)
   {	  
		szSQL.Format(_T("UPDATE HMS_FEE_ELECTRONICLINE SET HFE_PRINT = COALESCE(HFE_PRINT, 0) + 1, HFE_PRINTUSER='%s', hfe_print_time = TO_TIMESTAMP('%s', 'YYYY-MM-DD HH24:MI:SS') WHERE hfe_docno = %ld AND HFE_KEY = %.0f"), pMF->GetCurrentUser(), pMF->GetSysDateTime(), m_nDocumentNo, nElectronicInvoiceNo);
		//_msg(_T("%s"), szSQL);
		pMF->ExecSQL(szSQL);
		std::vector<BYTE> decoded = base64_decodex(strResponse);		
		std::string strData(decoded.begin(),decoded.end());

		std::fstream fs;
		std::cout << "decoded: " << strData << std::endl;
		CString szFileName;
		szFileName.Format(_T("%s\\DATA\\ElectronicInvoice_%.0f.pdf"),  pMF->m_szPath, nElectronicInvoiceNo);	
		CT2A pStr(szFileName);
		fs.open ( pStr.m_szBuffer, ios::in|ios::out | ios::binary|ios::trunc);
		fs << strData;
		fs.close();
		return true;
   }
   else 
   {
	   wchar_t* str = StringUtil::fromUTF8(strResponse.c_str());
	   ShowMessageBox(str);
   }
	return false;
}

bool CMainFrame::UpdateUserInvoice(CString szUserID, CString szFullName, CString szPassword){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	CString szSQL, tmpStr;
	
	JSONVALUE jbuilder;
	jbuilder[_T("UserName")]= szUserID;	
	jbuilder[_T("UserPassword")]= szPassword;	
	jbuilder[_T("FullName")]= szFullName;		

	std::wstring json_string;
	CString szJson;
	jbuilder.ToString(json_string);

	CHttpConnection* pServer = NULL;
	CHttpFile* pFile = NULL;
	CString szResponse, szDesc;
	
	szJson.Format(_T("%s"), json_string.c_str());
	CInternetSession session(_T("VIMES_INVOICE_POST"));

	CString szURL;
	szURL.Format(_T("%s/updateuser?username=%s&password=%s"), m_szInvUrl, m_szInvUserID, m_szInvPassword);
	
	//_tprintf(_T("\r\n%s%s"), szURL, szJson);	
//_msg(_T("%s, %s"), szURL, szJson);

	BOOL result = FALSE;
	try
	{
		CString strServerName;
		INTERNET_PORT nPort;
		DWORD dwRet = 0;
			

		CString svr, strobj, strParams;
		DWORD svrtype;
		INTERNET_PORT port;

		CString strHeaders = _T("Content-Type: application/json; charset=utf-8");

		::AfxParseURL(szURL, svrtype, svr, strobj, port);


		pServer = session.GetHttpConnection(svr, port);

		
		pFile = pServer->OpenRequest(CHttpConnection::HTTP_VERB_POST,strobj,NULL,1,NULL,NULL,INTERNET_FLAG_EXISTING_CONNECT); 
		pFile->AddRequestHeaders(strHeaders);
			

		char* buff;
		int len = json_string.length()*sizeof(WCHAR);
		buff = new char[len];
		memset(buff, '\0', len);
		::WideCharToMultiByte(CP_UTF8, 0, szJson,szJson.GetLength(), buff, len, 0, 0);

		result = pFile->SendRequest(NULL, 0, (LPVOID)buff, (DWORD)strlen(buff));			
		delete buff;

		pFile->QueryInfoStatusCode(dwRet);

		_tprintf(_T("\r\nUpdate User: %d"), dwRet);
		if (dwRet == HTTP_STATUS_OK)
		{
			CHAR szBuff[1024];
			WCHAR szData[1024];
			memset(szBuff, L'\0', 1024);

			while (pFile->Read(szBuff, 1024) > 0)
			{
				CString szStatus, szClass;
				long nElecInvoice;

				int nbyte = ::MultiByteToWideChar(CP_UTF8, 0, szBuff, strlen(szBuff), szData, 1024);
				szData[nbyte] = L'\0';

				szResponse.AppendFormat(_T("%s"), szData);
				_tprintf(_T("\r\nResponse:%s"), szResponse);
				
				szResponse.Replace(_T(":"), _T(";"));
				szResponse.Replace(_T("_"), _T(";"));

				CStringToken stResult(szResponse, _T(";"));
				/*for(int i=0; i<stResult.GetSize(); i++){
					stResult.GetAt(i, tmpStr);
					_tprintf(_T("\r\n%d, %s, %d"), i,tmpStr);
				}*/
				
				stResult.GetAt(0, tmpStr);
				szStatus.Empty();
				szDesc = tmpStr;
				if(tmpStr == _T("OK")){
					szStatus = _T("Y");
					return true;
				}
				
			}
		}
		else
		{
			ShowMessageBox(_T("Kh\xF4ng th\x1EC3 k\x1EBFt n\x1ED1i v\x1EDBi"));
		}
		delete pFile;
		delete pServer;
	}
	catch (CInternetException* pEx)
	{
		//catch errors from WinInet
		TCHAR pszError[64];
		pEx->GetErrorMessage(pszError, 64);
		_tprintf(_T("%63s"), pszError);
		CString szMsg;
		szMsg.Format(_T("L\x1ED7i khi g\x1EEDi \x64\x1EEF li\x1EC7u s\x61ng HD[%s]"), pszError);
		ShowMessageBox(szMsg);
	}

	return false;
}
#include "HMSEelectronicDialog.h"
void CMainFrame::OnMenuElectronicControl()
{	
	if (CheckPermission(_T("30.03")))
	{
		CHMSEelectronicDialog dlg(this);
		dlg.DoModal();
	}
	else
		AfxMessageBox(_T("Chưa được cấp quyền 30.03, vui lòng liên hệ admin"));
}

void CMainFrame::OnSmartCardConnected(CString szCardId)
{
	SetActivePane(0);
	long nPatientNo, nDocumentNo;
	CString szSQL;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT hsc_patientno,hsc_docno FROM hms_smartcard WHERE hsc_cardid='%s' "), szCardId);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("hsc_patientno"), nPatientNo);
		rs.GetValue(_T("hsc_docno"), nDocumentNo);
		m_nDocumentNo = nDocumentNo;
		m_nPatientNo = nPatientNo;
		m_wndPatientFee.LoadData(nDocumentNo);
	}
}

void CMainFrame::OnSmartCardDisconnect()
{

}


void CMainFrame::OnSettingsSmartCard()
{
	OnSmartCardConfig();

}


void CMainFrame::OnMenu32861()
{
	// TODO: Add your command handler code here
}

void CMainFrame::OnSettingPassDrugCancer()
{
	
	if(!CheckPermission(_T("FM.100.05")))
	{
	ShowMessageBox(_T("Chưa được cấp quyền FM.100.05 để sử dụng chức năng này!"), MB_ICONERROR);
	return ;
	}
	//ShowMessageBox(_T("Chức năng đang xây dựng, liên hệ admin Bệnh viện!"), 0);
	//return ;
	CHMSThietLap_Mien_Thuoc_ungthu dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSettingComPanyList()
{
	
	if(!CheckPermission(_T("FM.100.20")))
	{
		ShowMessageBox(_T("Chưa được cấp quyền FM.100.20 để sử dụng chức năng này!"), MB_ICONERROR);
	return ;
	}	
	CHMSThietLap_Thongtin_Congty dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSettingDeptList()
{
	
	if(!CheckPermission(_T("FM.100.21")))
	{
	ShowMessageBox(_T("Chưa được cấp quyền FM.100.21 để sử dụng chức năng này!"), MB_ICONERROR);
	return ;
	}
	
	CSysDepartmentSetup_V2 dlg(this);
	dlg.DoModal();
}

void CMainFrame::PrintInvoice_V2(long nInvoiceNo, bool bPreview, bool bDirect, int nPrintCount)
{
	//ShowMessageBox(_T("Chào bạn!"), 0);
	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
	CReport rpt;
	CString szSQL, szSQL1;
	CString tmpStr, szTemp;
	CString szpayment_method_code;

	CRecord rs(&m_db);
	CRecord rsl(&m_db);
	CRecord grs(&m_db);
	CRecord trs(&m_db);
	CRecord rss(&m_db);
	CRecord rsvl(&m_db);
	CRecord rsvlx(&m_db);

	int nInsRate = 0;
	long nDocumentNo;
	CString szObjectType;

	szSQL.Format(_T("  SELECT  NVL(hfe_payment_method, 'TM1') as payment_method_code ") \
					_T(" FROM hms_fee_invoice ") \
					_T(" WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	
	rsvlx.ExecSQL(szSQL);
	rsvlx.GetValue(_T("payment_method_code"), szpayment_method_code);

	//_msg(_T("%s"), szSQL);

	int nPrintCnt = m_nPrintReceiptNumberPage;
	if(nPrintCount > 0)
		nPrintCnt = nPrintCount;

	if (szpayment_method_code == _T("ATM") || szpayment_method_code == _T("CK") || szpayment_method_code == _T("TTD"))
	{
		nPrintCnt = 2;		
	}	
	if (!rpt.Init(_T("Reports/HMS/HF_INVOICEFEE.RPT"), false, false, nPrintCnt))
		return;

	szSQL.Format(_T("  SELECT hd_patientno as patientno,  ") \
					_T(" 	hd_docno as docno,") \
					_T(" 	trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
					_T(" 	TO_CHAR(hp_birthdate, 'YYYY') as yearofbirth,") \
					_T(" 	hms_getage(trunc_date(hd_admitdate), hp_birthdate) as age,") \
					_T(" 	sys_sel_getname('sys_sex', hp_sex) as sex,") \
					_T(" 	nvl(hd_dtladdr, hp_dtladdr) as detailaddress,") \
					_T(" 	hms_getaddress(hp_provid,hp_distid, hp_villid) as address,") \
					_T(" 	hp_workplace as workplace,") \
					_T(" 	hd_doctor as doctor,") \
					_T("	hd_disrate as disrate, ") \
					_T(" 	hd_diagnostic as diagnostic,") \
					_T(" 	hd_reldisease as reldisease,") \
					_T(" 	trunc_date(hd_admitdate) as examdate,") \
					_T("	HMS_GetObjectType(hd_object) as objecttype, ") \
					_T("	hc_cardno as cardno, ") \
					_T("	hc_regdate as regdate, ") \
					_T("	hc_expdate as expdate, ") \
					_T("	HMS_GETHOSPITALNAME(hc_regcode) as regplace, ") \
					_T("	Get_DepartmentName(hfe_deptid) as deptname, ") \
					_T(" 	hfe_serialno as serialno,") \
					_T(" 	hfe_receiptno as recvno,") \
					_T(" 	hfe_date as recvdate, ") \
					_T(" 	hfe_staff as receiver,") \
					_T(" 	hfe_desc as reason, ") \
					_T(" 	hfe_amount as cost,") \
					_T(" 	hfe_discount as discount,") \
					_T(" 	HFE_FREEAMOUNT as freeamount,") \
					_T(" 	hfe_patpaid as patpaid, hfe_payment as payment, ") \
					_T(" hfe_deposit as deposit, hfe_ttldeposit as ttldeposit, hfe_refund as refund, ") \
					_T(" hfe_extins_payment as extins_payment, hfe_extins_unpaid as extins_unpaid, ") \
					_T("		 get_payment_method(hfe_payment_method) as payment_method  ") \
					_T(" FROM hms_fee_invoice ") \
					_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
					_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
					_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
					_T(" WHERE hfe_invoiceno=%ld "), nInvoiceNo);

		
		rs.ExecSQL(szSQL);
		//_msg(_T("%s"),szSQL);

		if (rs.IsEOF())
			return;

		rs.GetValue(_T("docno"), nDocumentNo);
		rs.GetValue(_T("objecttype"), szObjectType);

		tmpStr.Empty();
		szTemp.Empty();
		CString szRoom, szRoomLabel;
		double nTotalDeposit=0;
		double nTotalRefund=0;
		double nPreTotalDeposit=0; //So tien tam gui con lai truoc khi thu phi
		double nTotalPayment = 0;
		double nTotalReturn = 0;
		//Ticket 1668(The bao viet)
		double extins_payment = 0;
		double extins_unpaid = 0;
		double freeamount = 0;
		double  nTotalRefundAmount = 0; //trả lại bằng nghiệp vụ trả lại theo đề mục//

		rs.GetValue(_T("deposit"), nTotalDeposit);
		rs.GetValue(_T("refund"), nTotalRefund);
		rs.GetValue(_T("payment"), nTotalPayment);
		rs.GetValue(_T("ttldeposit"), nPreTotalDeposit);
		rs.GetValue(_T("extins_payment"), extins_payment);
		rs.GetValue(_T("extins_unpaid"), extins_unpaid);
		rs.GetValue(_T("freeamount"), freeamount);
		

		if (szObjectType == _T("S"))
		{
			szSQL.Format(_T("SELECT hfe_orderid as orderid, ") \
				         _T("hfe_type as type ") \
						 _T("FROM hms_fee ") \
						 _T("WHERE hfe_invoiceno=%ld AND hfe_type IN('T','P') AND rownum=1 "), nInvoiceNo);

			trs.ExecSQL(szSQL);

			if (!trs.IsEOF())
			{
				trs.GetValue(_T("orderid"), tmpStr);
				trs.GetValue(_T("type"), szTemp);

				if (!tmpStr.IsEmpty())
				{
					if (szTemp == _T("T"))
					{
						szSQL.Format(_T(" SELECT hpc_roomid as roomid, hpc_deptid as deptid, hrl_name as roomname") \
									_T(" FROM hms_testorder") \
									_T(" LEFT JOIN hms_roomlist ON(hrl_id=hpc_roomid AND hrl_deptid=hpc_deptid)") \
									_T(" WHERE hpc_orderid=%ld AND rownum=1"),
									str2long(tmpStr));
					}
					else if (szTemp == _T("P"))
					{
						szSQL.Format(_T("SELECT hpc_roomid as roomid, hpc_deptid as deptid, hrl_name as roomname ") \
									_T("FROM hms_pacsorder ") \
									_T("LEFT JOIN hms_roomlist ON(hrl_id=hpc_roomid AND hrl_deptid=hpc_deptid) ") \
									_T("WHERE hpc_orderid=%ld AND rownum=1"),
									str2long(tmpStr));
					}
					rss.ExecSQL(szSQL);

					if (!rss.IsEOF())
					{
						TranslateString(_T("Room"), tmpStr);
						szRoomLabel.Format(_T("%s:"), tmpStr);
						rpt.GetReportHeader()->SetValue(_T("RoomLabel"), szRoomLabel);

						szRoom.Format(_T("%s"), rss.GetValue(_T("roomname")));
						rpt.GetReportHeader()->SetValue(_T("Room"), szRoom);
					}
				}
			}
		}

		tmpStr.Empty();
		szTemp.Empty();

	//	szSQL.Format(_T("select rtrim(hfg_id,'0') as id, hfg_name as name, hfg_level as xlevel, hfg_feeid as feeid from hms_fee_group where hfg_level <= 1 order by hfg_index "));
	//	grs.ExecSQL(szSQL);

		szSQL.Format(_T(" SELECT hfe_type AS feetype,") \
		_T("   hft_id as typeid, hft_name, hfe_group as groupid, ") \
		_T("   hfe_desc          AS name,") \
		_T("   hfe_unit          AS unit,") \
		_T("   hfe_unitprice     AS unitprice,") \
		_T("   SUM(hfe_discount) AS discount,") \
		_T("   SUM(hfe_patpaid)  AS cost,") \
		_T("   SUM(hfe_diffcost) AS diffcost") \
		_T(" FROM hms_fee") \
		_T(" LEFT JOIN hms_fee_group") \
		_T(" ON(hfg_id =hfe_group)") \
		_T(" LEFT JOIN hms_fee_type") \
		_T(" ON(hft_id                      = hfg_type_id)") \
		_T(" WHERE hfe_docno=%ld and hfe_invoiceno            = %ld") \
		_T(" AND hfe_status in ('P')") \
		_T(" AND (hfe_patpaid+hfe_diffpaid) > 0") \
		_T(" AND NVL(hfe_category,'N')     <> 'Y'") \
		_T(" GROUP BY hfg_index,") \
		_T("   hft_id,hft_name,  hfe_group, ") \
		_T("   hfe_type,") \
		_T("   hfe_desc,") \
		_T("   hfe_unit,") \
		_T("   hfe_unitprice") \
		_T(" ORDER BY hft_id,") \
		_T("   name,") \
		_T("   unit"), nDocumentNo, nInvoiceNo);

	
		rsl.ExecSQL(szSQL);
		//_msg(_T("%s"),szSQL);
		if(rsl.IsEOF())
		{
			//ShowMessageBox(_T("No data found"));
			return;
		}
		


		int nNumberPage = m_nPrintReceiptNumberPage;
		CReportSection* rptDetail=NULL;
		CReportSection* grpDetail;


		CString szFeeID, szID;

			TCHAR *lpszChapter[] = {_T("I"), _T("II"), _T("III"), _T("IV"), _T("V"), _T("VI"), _T("VII"), _T("VIII"), _T("IX"), _T("X"), _T("XI")};
			int nChapter=0;

			int nCount = 0, nIndex, nChapterID=0;
			double dTotal[5];
			double dGroup1[5];
			double dGroup2[5];
			double dAmount = 0;
			int nItem = 0, nOldItem = 0, nItem2 = 0;
			int nLevel;
			bool bDeleteParent = false;
			bool bLoadItems = false;
			CString szNewGroup, szOldGroup, szParentGroup;

			for (int i =0; i < 5; i++)
			{
				dTotal[i] = 0;
				dGroup1[i] = 0;
				dGroup2[i] = 0;
			}
			
			nIndex = 0;
			CString szSubItem, szType, szTypeId, szOldTypeId;
			int nSubItem = 1;
			nChapterID = 0;
			CArray<FEEITEM, FEEITEM&> feeList;
			
			CReportSection *grp;
		
		
			while(!rsl.IsEOF())
			{
				
				rsl.GetValue(_T("typeid"), szTypeId);
				if(szTypeId != szOldTypeId)
				{
					if(dGroup1[0] > 0)
					{
						/*if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
							FEEITEM fee = feeList.GetAt(nOldItem);
							fee.nCost = dGroup2[0];
							feeList.SetAt(nOldItem, fee);
						}*/
						dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
						nItem2 = 0;
						FEEITEM fee_subamount;
						fee_subamount.szID.Empty();
						fee_subamount.szGroupID = _T("SubAmount");
						fee_subamount.szName.Format(_T("Tổng (%s)"), lpszChapter[nChapterID-1]);
						fee_subamount.nCost = dGroup1[0];
						feeList.Add(fee_subamount);
						dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
					}
					
					FEEITEM fee_type;
					fee_type.szGroupID = _T("Type");
					fee_type.szID = lpszChapter[nChapterID++];
					rsl.GetValue(_T("hft_name"), tmpStr);
					fee_type.szName = tmpStr;
					nItem = feeList.Add(fee_type);
					nOldItem = nItem;

					szOldTypeId = szTypeId;
					dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
					dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
				}
				rsl.GetValue(_T("groupid"), szNewGroup);
				szNewGroup.Trim();
				if(szNewGroup.Left(2) == _T("B1"))
				{
					if(szOldGroup != szNewGroup){
						szOldGroup = szNewGroup;
						/*if(dGroup2[0] > 0 && nItem2 > 0)
						{
							FEEITEM fee = feeList.GetAt(nOldItem);
							fee.nCost = dGroup2[0];
							feeList.SetAt(nOldItem, fee);
						}*/
						szSQL.Format(_T("SELECT hfg_name as name FROM hms_fee_group WHERE hfg_id='%s' "), szNewGroup);
						CRecord rs2(&m_db);
						rs2.ExecSQL(szSQL);
						FEEITEM fee_group;
						fee_group.szGroupID = _T("SubGroup");
						fee_group.szID = _T("*");
						fee_group.szName = rs2.GetValue(_T("name"));
						nItem2 = feeList.Add(fee_group);
						nOldItem = nItem2;
						dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
					}
				}
				

				nSubItem++;
				double diffcost;
				FEEITEM fee;

				rsl.GetValue(_T("unitprice"), dAmount);
				fee.nPrice = dAmount;
				rsl.GetValue(_T("discount"), dAmount);
				fee.nDiscount = dAmount;

				rsl.GetValue(_T("cost"), dAmount);
				rsl.GetValue(_T("diffcost"), diffcost);
				dTotal[0] += dAmount;
				dGroup1[0] += dAmount;
				dGroup2[0] += dAmount;

				
				fee.szGroupID = _T("Item");
				fee.szID.Empty();
				fee.szName.Format(_T("%s"), rsl.GetValue(_T("name")));

								
				if(diffcost > 0 && fee.nDiscount > 0)
				{
					fee.szID = _T("CL");

				} 
				else if (!szObjectType.IsEmpty() &&
					szObjectType != _T("S") && fee.nDiscount == 0)
				{	
					fee.szID = _T("PN");
				}
				fee.szUnit = rsl.GetValue(_T("unit"));
				fee.nCost = ToDouble(rsl.GetValue(_T("cost")));
				feeList.Add(fee);						
					
				rsl.MoveNext();
			}

			if(dGroup1[0] > 0)
			{
						/*if(dGroup2[0] > 0 && nItem2 > 0 && nItem2 < feeList.GetCount()){
							FEEITEM fee;
							fee = feeList.GetAt(nOldItem);
							fee.nCost = dGroup2[0];
							feeList.SetAt(nOldItem, fee);
						}*/
						dGroup2[0] = dGroup2[1] = dGroup2[2] = dGroup2[3] = dGroup2[4] = 0;
						nItem2 = 0;
						FEEITEM fee;
						fee.szID.Empty();
						fee.szGroupID = _T("SubAmount");
						fee.szName.Format(_T("Tổng (%s)"), lpszChapter[nChapterID-1]);
						fee.nCost = dGroup1[0];
						nItem = feeList.Add(fee);
						dGroup1[0] = dGroup1[1] = dGroup1[2] = dGroup1[3] = dGroup1[4] = 0;
			}


			/*if(dTotal[0] > 0){
				FEEITEM fee;
					TranslateString(_T("Total Amount"), tmpStr);
					fee.szGroupID = _T("TotalAmount");
					fee.szName = tmpStr;
					fee.nCost = dTotal[0];
					feeList.Add(fee);
			}*/

		
		
		rptDetail = NULL;
			
		//Report Header
	
		rptDetail = rpt.GetReportHeader();
		grpDetail = rptDetail;

			tmpStr.Empty();
			StringUpper(m_CompanyInfo.sc_pname, tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE"), tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE1"), tmpStr);
			grpDetail->SetValue(_T("HEALTHSERVICE2"), tmpStr);
			StringUpper(m_CompanyInfo.sc_name, tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME1"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALNAME2"), tmpStr);
			grpDetail->SetValue(_T("HOSPITALADDRESS"), m_CompanyInfo.sc_address);
			grpDetail->SetValue(_T("HOSPITALADDRESS1"), m_CompanyInfo.sc_address);
			grpDetail->SetValue(_T("HOSPITALADDRESS2"), m_CompanyInfo.sc_address);
			
			rs.GetValue(_T("docno"), nDocumentNo);
			tmpStr.Format(_T("%ld"), nDocumentNo);
			grpDetail->SetValue(_T("DocumentNo"), tmpStr);
			grpDetail->SetValue(_T("DocumentNo1"), tmpStr);
			grpDetail->SetValue(_T("DocumentNo2"), tmpStr);
			tmpStr.Format(_T("%s-%s-%s"), rs.GetValue(_T("SerialNo")), rs.GetValue(_T("bookno")),  rs.GetValue(_T("recvno")));
			
			grpDetail->SetValue(_T("ReceiptNo"), tmpStr);
			grpDetail->SetValue(_T("ReceiptNo1"), tmpStr);
			grpDetail->SetValue(_T("ReceiptNo2"), tmpStr);
			tmpStr.Format(_T("%ld"), nInvoiceNo);
			grpDetail->SetValue(_T("InvoiceNo"), tmpStr);
			grpDetail->SetValue(_T("InvoiceNo1"), tmpStr);
			grpDetail->SetValue(_T("InvoiceNo2"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128A]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128B]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[128C]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[39]"), tmpStr);
			rptDetail->SetValue(_T("Barcode[93]"), tmpStr);



			//rs.GetValue(_T("pname"), tmpStr);
			StringUpper(rs.GetValue(_T("pname")), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME"), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME1"), tmpStr);
			grpDetail->SetValue(_T("PATIENTNAME2"), tmpStr);
			rs.GetValue(_T("age"), tmpStr);
			grpDetail->SetValue(_T("Age"), tmpStr);
			grpDetail->SetValue(_T("Age1"), tmpStr);
			grpDetail->SetValue(_T("Age2"), tmpStr);
			
			rs.GetValue(_T("yearofbirth"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth2"), tmpStr);
			grpDetail->SetValue(_T("YearOfBirth3"), tmpStr);

			rs.GetValue(_T("sex"), tmpStr);
			grpDetail->SetValue(_T("Sex"), tmpStr);
			grpDetail->SetValue(_T("Sex1"), tmpStr);
			grpDetail->SetValue(_T("Sex2"), tmpStr);
			rs.GetValue(_T("address"), tmpStr);
			grpDetail->SetValue(_T("Address"), tmpStr);
			grpDetail->SetValue(_T("Address1"), tmpStr);
			grpDetail->SetValue(_T("Address2"), tmpStr);
			rs.GetValue(_T("deptname"), tmpStr);
			grpDetail->SetValue(_T("Department"), tmpStr);
			grpDetail->SetValue(_T("Department1"), tmpStr);
			grpDetail->SetValue(_T("Department2"), tmpStr);

			rs.GetValue(_T("disrate"), nInsRate);
			grpDetail->SetValue(_T("Disrate"), nInsRate);
			
			rs.GetValue(_T("examdate"), tmpStr);
			grpDetail->SetValue(_T("ExamDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExamDate1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExamDate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));

			rs.GetValue(_T("cardno"), tmpStr);
			grpDetail->SetValue(_T("CardNo"), tmpStr);
			grpDetail->SetValue(_T("CardNo1"), tmpStr);
			grpDetail->SetValue(_T("CardNo2"), tmpStr);
			rs.GetValue(_T("expdate"), tmpStr);
			grpDetail->SetValue(_T("ExpiryDate"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExpiryDate1"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			grpDetail->SetValue(_T("ExpiryDate2"), CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
			rs.GetValue(_T("regplace"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace1"), tmpStr);
			grpDetail->SetValue(_T("RegistrationPlace2"), tmpStr);
			rs.GetValue(_T("diagnostic"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic1"), tmpStr);
			grpDetail->SetValue(_T("Diagnostic2"), tmpStr);
			rs.GetValue(_T("reldisease"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease1"), tmpStr);
			grpDetail->SetValue(_T("RelationDisease2"), tmpStr);

			CString szDate;
			rs.GetValue(_T("recvdate"), tmpStr);
			szDate.Format(grpDetail->GetValue(_T("ReceiptDate")), CDateTime::Convert(tmpStr,yyyymmdd|hhmmss,ddmmyyyy|hhmm));	
			grpDetail->SetValue(_T("ReceiptDate"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate1"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate2"), szDate);	
			rs.GetValue(_T("doctor"), tmpStr);
			tmpStr.Trim();
			grpDetail->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
			rs.GetValue(_T("receiver"), tmpStr);	
			tmpStr.Trim();

			grpDetail->SetValue(_T("ReceiveBy"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy1"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy2"), GetDoctorName(tmpStr));	
			
			rs.GetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason1"), tmpStr);
			grpDetail->SetValue(_T("reason2"), tmpStr);

			//grpDetail->SetValue(_T("payment_method"), rs.GetValue(_T("payment_method")));

			

			rptDetail = rpt.GetDetail(0); 			
			
			FEEITEM fee;
			for (int i =0; i < feeList.GetCount(); i++){
				fee = feeList[i];
				szType = fee.szGroupID;
					if(szType == _T("Type"))
					{
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						
						tmpStr = fee.szID;
						rptDetail->SetValue(_T("GH1"), tmpStr);
						StringUpper(fee.szName, tmpStr);
						rptDetail->SetValue(_T("GH2"), tmpStr);
					}
					if(szType == _T("Group")){
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						rptDetail->SetValue(_T("GH1"), fee.szID);
						rptDetail->SetValue(_T("GH2"), fee.szName);
					}
					else if(szType == _T("SubGroup")){
						grp = rpt.GetGroupHeader(2);
						rptDetail = rpt.AddDetail(grp);
						rptDetail->SetValue(_T("GH1"), fee.szID);
						rptDetail->SetValue(_T("GH2"), fee.szName);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("SubGroupCost"), tmpStr);
					}
					else if(szType == _T("SubAmount")){
						rptDetail = rpt.AddDetail();
						CReportItem* obj;
						rptDetail->SetValue(_T("1"), fee.szID);
						obj = rptDetail->GetItem(2);
						if(obj) obj->SetBold(true);
						rptDetail->SetValue(_T("2"), fee.szName);
						rptDetail->SetValue(_T("3"), _T(""));
						FormatCurrency(fee.nCost, tmpStr);
						obj = rptDetail->GetItem(6);
						if(obj) obj->SetBold(true);
						rptDetail->SetValue(_T("6"), tmpStr);
					}
					else if(szType == _T("Item"))
					{
						rptDetail = rpt.AddDetail();
						//rptDetail->SetValue(_T("1"), fee.szID);
						rptDetail->SetValue(_T("1"), fee.szID);
						rptDetail->SetValue(_T("2"), fee.szName);
						rptDetail->SetValue(_T("3"), fee.szUnit);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("6"), tmpStr);
					}
		/*
					else if(szType == _T("TotalAmount")){
						grp = rpt.GetGroupHeader(1);
						rptDetail = rpt.AddDetail(grp);
						FormatCurrency(fee.nCost, tmpStr);
						rptDetail->SetValue(_T("TotalAmount"), tmpStr);
						FormatCurrency(fee.nDiscount, tmpStr);
						rptDetail->SetValue(_T("AmountDiscount"), tmpStr);
						FormatCurrency(fee.nPatPaid, tmpStr);
						rptDetail->SetValue(_T("AmountPatPaid"), tmpStr);
					}
		*/
			
			}
			//Report Footer

			
			grpDetail = rpt.GetReportFooter();

			FormatCurrency(ceil(dTotal[0]), tmpStr);
			grpDetail->SetValue(_T("TotalAmount"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount1"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount2"), tmpStr);

			
			grpDetail->SetValue(_T("Price"), tmpStr);
			grpDetail->SetValue(_T("Price1"), tmpStr);
			grpDetail->SetValue(_T("Price2"), tmpStr);

			grpDetail->SetValue(_T("TotalAmount"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount1"), tmpStr);
			grpDetail->SetValue(_T("TotalAmount2"), tmpStr);


			FormatCurrency(ceil(dTotal[1]), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount1"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount2"), tmpStr);

			grpDetail->SetValue(_T("TotalDiscount"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount1"), tmpStr);
			grpDetail->SetValue(_T("TotalDiscount2"), tmpStr);

			/*double paided = ceil(dTotal[2]);
			paided -= extins_payment;
			if(paided < 0) paided = 0;*/
			FormatCurrency(nTotalPayment, tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid1"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid2"), tmpStr);

			grpDetail->SetValue(_T("TotalPatpaid"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid1"), tmpStr);
			grpDetail->SetValue(_T("TotalPatpaid2"), tmpStr);
			
			double nPatPaid = dTotal[0];
			if(nTotalDeposit > 0)
			{

				FormatCurrency(nTotalDeposit, tmpStr);
				grpDetail->SetValue(_T("Deposit"), tmpStr);
				grpDetail->SetValue(_T("Deposit"), tmpStr);
				grpDetail->SetValue(_T("Deposit"), tmpStr);

				nPatPaid = dTotal[0] - nTotalDeposit;
				
				if(nPatPaid > 0)
				{
					FormatCurrency(nPatPaid, tmpStr);
					grpDetail->SetValue(_T("PatPaid"), tmpStr);
					grpDetail->SetValue(_T("PatPaid"), tmpStr);
					grpDetail->SetValue(_T("PatPaid"), tmpStr);
				}
				else
				{
					FormatCurrency(-1*nPatPaid, tmpStr);
					grpDetail->SetValue(_T("Refund"), tmpStr);
					grpDetail->SetValue(_T("Refund"), tmpStr);
					grpDetail->SetValue(_T("Refund"), tmpStr);
				}

				FormatCurrency(nPreTotalDeposit, tmpStr);
				grpDetail->SetValue(_T("TotalDeposit"), tmpStr);

			}

			if(extins_payment > 0)
			{
				//nPatPaid -= extins_paid;
				FormatCurrency(extins_payment, tmpStr);
				grpDetail->SetValue(_T("ExtInsPayment"), tmpStr);
				grpDetail->SetValue(_T("ExtInsPayment"), tmpStr);
				grpDetail->SetValue(_T("ExtInsPayment"), tmpStr);

			}

			if (freeamount > 0)
			{
				FormatCurrency(freeamount, tmpStr);
				grpDetail->SetValue(_T("freeamount"), tmpStr);
				grpDetail->SetValue(_T("freeamount"), tmpStr);
				grpDetail->SetValue(_T("freeamount"), tmpStr);
			}
			//Lay phần thu thêm là  hfe_payment trong hms_fee_invoice

			//Bổ sung trường hợp bệnh nhân có phiếu thu rồi, sau đó trả lại thì phải trừ đi số tiền trả lại này

			szSQL1.Format(_T(" SELECT sum(hfe_patpaid) as totalreturn from HMS_FEE ") \
			_T(" where hfe_docno=%ld and HFE_INVOICENO=%ld and hfe_status='R' and HFE_CATEGORY='N'"), nDocumentNo, nInvoiceNo);
			
			rsvl.ExecSQL(szSQL1);
			rsvl.GetValue(_T("totalreturn"), nTotalReturn);			

			if(nTotalPayment > 0)
			{
				nPatPaid = nTotalPayment - nTotalReturn;
				//_msg(_T("%.2f"), nPatPaid);
			}
			//In ra tổng số tiền trả lại tương ứng hóa đơn
			if (nTotalReturn > 0)
			{
				FormatCurrency(nTotalReturn, tmpStr);
				grpDetail->SetValue(_T("TotalReturn"), tmpStr);
				grpDetail->SetValue(_T("TotalReturn"), tmpStr);
				grpDetail->SetValue(_T("TotalReturn"), tmpStr);			
			
			}


			if(nTotalRefund > 0)
			{
				FormatCurrency(nTotalRefund + nTotalReturn, tmpStr);
				grpDetail->SetValue(_T("Refund"), tmpStr);
				grpDetail->SetValue(_T("Refund"), tmpStr);
				grpDetail->SetValue(_T("Refund"), tmpStr);
				nPatPaid = 0;
			}

			if(nPatPaid >= 0)
			{
				FormatCurrency(nPatPaid, tmpStr);
				grpDetail->SetValue(_T("PatPaid"), tmpStr);
				grpDetail->SetValue(_T("PatPaid"), tmpStr);
				grpDetail->SetValue(_T("PatPaid"), tmpStr);
			}
			

			CString szSumInWord;
			

			if(nPatPaid != 0)
			{
				tmpStr.Format(_T("%.2f"), abs(ceil(nPatPaid)));
			}
			else
			{
				tmpStr.Format(_T("%.2f"), abs(ceil(dTotal[0])));
			}
			MoneyToString(tmpStr, szSumInWord);
			szSumInWord += _T(" \x111\x1ED3ng.");
			grpDetail->SetValue(_T("SumInWord"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord1"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord2"), szSumInWord);

			grpDetail->SetValue(_T("SumInWord"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord1"), szSumInWord);
			grpDetail->SetValue(_T("SumInWord2"), szSumInWord);
		/*
			FormatCurrency(dTotal[1], tmpStr);
			grpDetail->SetValue(_T("PatientPaid"), tmpStr);
			FormatCurrency(dTotal[2], tmpStr);
			grpDetail->SetValue(_T("InsurancePaid")
			, tmpStr);
		*/	

			rs.GetValue(_T("recvdate"), tmpStr);
			szDate.Format(grpDetail->GetValue(_T("ReceiptDate")), CDateTime::Convert(tmpStr,yyyymmdd|hhmmss,ddmmyyyy|hhmm));	
			grpDetail->SetValue(_T("ReceiptDate"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate1"), szDate);	
			grpDetail->SetValue(_T("ReceiptDate2"), szDate);	
			rs.GetValue(_T("doctor"), tmpStr);
			tmpStr.Trim();
			grpDetail->SetValue(_T("Doctor"), GetDoctorName(tmpStr));
			rs.GetValue(_T("receiver"), tmpStr);	
			tmpStr.Trim();

			grpDetail->SetValue(_T("ReceiveBy"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy1"), GetDoctorName(tmpStr));
			grpDetail->SetValue(_T("ReceiveBy2"), GetDoctorName(tmpStr));	
			
			rs.GetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason"), tmpStr);
			grpDetail->SetValue(_T("reason1"), tmpStr);
			grpDetail->SetValue(_T("reason2"), tmpStr);
			

			tmpStr = GetSysDateTime();
			szDate.Format(grpDetail->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5),tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
			grpDetail->SetValue(_T("PrintDate"), szDate);
			grpDetail->SetValue(_T("PrintDate1"), szDate);
			grpDetail->SetValue(_T("PrintDate2"), szDate);

			grpDetail->SetValue(_T("PrintDate"), szDate);
			grpDetail->SetValue(_T("PrintDate1"), szDate);
			grpDetail->SetValue(_T("PrintDate2"), szDate);

			szDate = grpDetail->GetValue(_T("SheetNumber"));
			tmpStr.Format(szDate, 1);
			grpDetail->SetValue(_T("SheetNumber"), tmpStr);
			grpDetail->SetValue(_T("payment_method"), rs.GetValue(_T("payment_method")));
			int nUnRate=0;
			
			if(nInsRate > 0 && !pMF->IsOutLine()){
				nUnRate = 100 - nInsRate;
				tmpStr.Format(_T("(%d%s)"), nUnRate, _T("%"));
				grpDetail->SetValue(_T("UnRate"), tmpStr);
			}
			rptDetail = grpDetail;
		//User thuộc bộ phận thu phí khám thì không in nữa
		//if (CheckPermission(_T("FM.100.07")))
		//{
		//	return;
		//}

		if((bPreview))
			rpt.PrintPreview();
		else
		{	
			rpt.Print(m_bAutoPrint);
		}

//	tmpStr.Format(szDate, 2);
//	rpt.GetReportFooter()->SetValue(_T("SheetNumber"), tmpStr);
//	rpt.Print(true);

	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);
}
