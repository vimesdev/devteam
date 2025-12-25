// MainFrm.cpp : implementation of the CMainFrame class
//
#include "stdafx.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "resource.h"
#include "HMSGeneralSurgeryReportDialog.h"
#include "VIMESGeneralSetupDialog.h"
#include "VIMESGeneralSetupDialog_V2.h"
#include "HMSSurgeryStockInformationDialog.h"
#include "HMSPatientSurgeryReportListDialog.h"
#include "HMSSurgeryDutiesReportDialog.h"
#include "HMSMedicalCabinet.h"
#include "HMSSurgeryTypeSetupDialog.h"
#include "HMSSetupValidDateDialog.h"
#include "HMSPrescriptionGroupItemsDialog.h"

#include "PMSReportConditionDruguseDialog.h"
#include "rptBaocaoxuatthuocchokhoatheodoituong.h"
#include "rptBaocaosudungthuochuongthan.h"
#include "rptGeneralsurgeryoftenreportedDialog.h"
#include "rptBaocaoquyettoanVTDialog.h"
#include "rptBaocaoquyettoanthuocDialog.h"
#include "rptBaocaoquyettoanthuocVTDialog.h"
#include "rptSurgeryScheduleDialog.h"
#include "WardMedicalCabinetDialog.h"
#include "rptGeneralDepartmentUsage.h"
#include "ReportDrugMaterialUnpick.h"
#include "ReportDebtMaterial.h"
#include "ReportDebtMaterial_v2.h"
#include "rptSurgeryScheduleAllDialog.h"
#include "HMSStorageDetailDialog.h"
#include "HMSGeneralSurgeryReportNewDialog.h"
#include "HMSDoctorInfo.h"
#include "PMSummaryImportExportInstockForB5StocksReportDialog.h"
#include "HMSGetOrgDeptInfo.h"
#include "HMSPatientSurgeryReportListDialog_V2.h"
#include "B5Thongketpttt.h"
#include "MFCCaptionBarEx.h"
#include "MFCWidget.h"


IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_WM_SIZE()
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangePassword)
	ON_COMMAND(ID_SETUP_OPERATIONTYPE, OnSetupOperationType)
	ON_COMMAND(ID_SETUP_ANAESTHETICMETHOD,OnSetupAnaestheticMethod)
	ON_COMMAND(ID_SETUP_ANESTHESIAMETHOD,OnSetupAnesthesiaMethod)
	ON_COMMAND(ID_FILE_STOCKINVENNTORY, OnFileStockinvenntory)
	ON_COMMAND(ID_REPORT_LISTOFPATIENTSURGERYREPORT, OnReportListofpatientsurgeryreport)
	ON_COMMAND(ID_REPORT_DUTIESREPORT, OnReportDutiesreport)
	ON_COMMAND(ID_SETUP_SURGERYTABLE,OnSetupSurgeryTable)
	ON_COMMAND(ID_SETUP_HITECHOPERATION,OnSetupHitechOperation)
	
	ON_COMMAND(ID_REPORT_LISTOFPATIENTSURGERYREPORT, OnReportListofpatientsurgeryreport)
	ON_COMMAND(ID_REPORT_DUTIESREPORT, OnReportDutiesreport)
	ON_COMMAND(ID_REPORT_GENERALSURGERYREPORT, OnReportGeneralSurgeryReport)
	
	ON_COMMAND(ID_REPORT_THEUSEOFDRUGS, OnReportTheuseofdrugs)
	ON_COMMAND(ID_REPORT_THEUSEOFSYNTHETICDRUGS, OnReportTheuseofsyntheticdrugs)
	ON_COMMAND(ID_REPORT_LISTOFPATIENTSUSINGPSYCHOTROPICDRUGS, OnReportListofpatientsusingpsychotropicdrugs)
	ON_COMMAND(ID_REPORT_GENERALSURGERYOFTENREPORTED, OnReportGeneralsurgeryoftenreported)
	ON_COMMAND(ID_GENERALSURGERYREPORT_GENERALSURGERYOFTENREPORTED, OnGeneralsurgeryreportGeneralsurgeryoftenreported)
	ON_COMMAND(ID_GENERALSURGERYREPORT_GENERALSURGERYOFTENREPORTEDNEW, OnGeneralsurgeryreportGeneralsurgeryoftenreportednew)
	ON_COMMAND(ID_GENERALSURGERYREPORT_GENERALREPORTONHIGH, OnGeneralsurgeryreportGeneralreportonhigh)
	ON_COMMAND(ID_GENERALSURGERYREPORT_GENERALREPORTONMETHODSOFANESTHESIA, OnGeneralsurgeryreportGeneralreportonmethodsofanesthesia)
	ON_COMMAND(ID_Menu, OnMenu)
	ON_COMMAND(ID_REPORT_BAOCAOSUQUYETTOANVATTU, OnReportBaocaosuquyettoanvattu)
	ON_COMMAND(ID_SETUP_APPLYDATE, OnSetupApplydate)
	ON_COMMAND(ID_REPORT_DRUGANDMATERIALSETTLEMENTREPORT, OnReportDrugandmaterialsettlementreport)
	ON_COMMAND(ID_REPORT_SURGERYSCHEDULEREPORT, OnReportSurgeryschedulereport)
	ON_COMMAND(ID_REPORT_SURGERYSCHEDULEALLREPORT, OnReportSurgeryscheduleAllreport)
	ON_COMMAND(ID_FILE_VIEWPARACLINICALINFORMATION, OnFileViewparaclinicalinformation)
	ON_COMMAND(ID_COMMAND_MEDICALCABINET, OnCommandMedicalcabinet)
	ON_COMMAND(ID_FILE_DRUGMATERIALORDERSHEET, OnFileDrugmaterialordersheet)
	ON_COMMAND(ID_FILE_RETURNDRUGORDERSHEET, OnFileReturndrugordersheet)
	ON_COMMAND(ID_REPORT_GENERALDEPARTMENTUSAGE, OnReportGeneralDepartmentUsage)
	ON_COMMAND(ID_REPORT_DRUGMATERIALUNPICK, OnReportDrugMaterialUnpick)
	ON_COMMAND(ID_REPORT_DEBTMATERIAL, OnReportDebtMaterial)
	ON_COMMAND(ID_REPORT_DEBTMATERIALSUMMARY, OnReportDebtmaterialsummary)
	ON_COMMAND(ID_FILE_STORAGEDETAIL, OnFileStoragedetail)
	ON_COMMAND(ID_FILE_SETUPPRESCRIPTIONLIST, OnFileSetupprescriptionlist)
	ON_COMMAND(ID_SETTINGS_DOCTORINFO, OnSettingsDoctorinfo)
	ON_COMMAND(ID_REPORT_THEODOIVATTUPHONGMO, OnReportProductNameQuantityinfo)
	ON_COMMAND(ID_REPORT_LISTOFPATIENTSURGERYREPORT_V2, OnReportListofpatientsurgeryreport_V2)
	ON_COMMAND(ID_REPORT_BAOCAOPTTTTHUCHIENTAIB5, Baocaoptttthuchientaib5)

END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	SetLocalLang(1);
	m_szModuleName = _T("HỆ THỐNG QUẢN LÝ PHẪU THUẬT - KHOA B5");
	m_szModuleID = _T("SMM");
	m_szVersion = _T("1.2.2");	
	//m_szCoreVersion = _T("1.0");
	m_szSize = CSize(1024, 720);
	m_serverdb = NULL;
	m_nIsOutPatient = 0;
}

CMainFrame::~CMainFrame()
{	

}

void _OnSelChange(CWnd* pWnd, int nOldItem, int nNewItem)
{
	//_msg(_T("%d : %d"), nOldItem, nNewItem);
	CMainFrame *pMF = (CMainFrame *)pWnd;
	if (nNewItem == 2)
	{
		/*if (pMF->m_wndSurgerySchedule.m_wndWeekView.GetCheck())
		{
			pMF->m_wndSurgerySchedule.m_wndCalendar.SetView(WV_WEEKVIEW, FALSE);
		}*/
	}
	else if (nNewItem == 1)
	{
		//pMF->m_wndSurgeryQueue.OnPatientListLoadData();
	}
	pMF->m_nTabIndex = nNewItem;
}
#define CMD_SIGNATURE CMD_USER + 12

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{

	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;

	m_pAppBar->SetCaptionHeight(30);
    m_pAppBar->m_szItemSize = CSize(125, 30);
    m_pAppBar->Add(new CWidgetItem(CMD_SIGNATURE, icons::collections_bookmark,
                                   L"EMR", L"Hồ sơ bệnh án điện tử EMR"));

	CString szSQL, tmpStr;

	TranslateString(_T("Surgery Management System"), tmpStr);
	SetWindowText(tmpStr);

	//ModifyStyle(WS_MAXIMIZEBOX|WS_SIZEBOX, 0);
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	CenterWindow();
	CWnd *pWnd = GetPane();

	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	szStatus.AppendFormat(_T(" - Host: %s"), GetHost(), GetDatabase());
	SetStatusText(szStatus, 1);

	m_wndSurgeryDocument.Create(pWnd);	
	m_wndSurgeryQueue.Create(pWnd);
    m_wndTrinhKy.Create(pWnd);
	

	AddView(_T("Patient Profile"), &m_wndSurgeryDocument);
	AddView(_T("Patient List"), &m_wndSurgeryQueue);

	if (CheckPermission(_T("4.0")))
	{
		m_wndSurgerySchedule.Create(pWnd);
		AddView(_T("Duty Schedule"), &m_wndSurgerySchedule);
	}
	if (CheckPermission(_T("5.0")))

	{
		m_wndStorageAdjustmentList.Create(pWnd);
		AddView(_T("Storage Adjustment"), &m_wndStorageAdjustmentList);
	}
    AddView(_T("Trình ký"), &m_wndTrinhKy);
	SetActivePane(0);

	CGuiTabCtrl *pTab = (CGuiTabCtrl *)GetPane();
	pTab->SetEvent(WE_SELCHANGE, _OnSelChange);
	
	if(!CheckVersion(_T("SMM")))
		return -1;

	return 0;
}

void CMainFrame::OnInitializes()
{
	CHMSMainFrame::OnInitializes();
	CString szSQL, szOrgDept, szCert;
	CRecord rs(&m_db);
	
	m_szDepartment.Empty();

	if (GetCurrentUser().Trim().MakeLower() == _T("admin"))
	{
		m_szDepartment = _T("B5");
		return;
	}

	szSQL.Format(_T("SELECT su_deptid as deptid FROM sys_user WHERE lower(su_userid)=lower('%s') "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		rs.GetValue(_T("deptid"), m_szDepartment);
	}

	if(m_szDepartment == _T("PTC"))
		m_szDepartment = _T("B5");
	szSQL.Format(_T("SELECT smm_validdate AS validdate FROM hms_config"));
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("validdate"), m_szValidDate);
	}

	szSQL.Format(_T("SELECT sc_pname as pname, sc_name as hname FROM sys_company"));
	rs.ExecSQL(szSQL);

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("pname"), m_CompanyInfo.sc_pname);
		rs.GetValue(_T("hname"), m_CompanyInfo.sc_name);
	}
	m_szDoctor = GetCurrentUser();

	OnInitData();

	//Check thông tin khoa gốc	
	long vret = 10;	
	szSQL.Format(_T("HMS_GET_ORG_DEPT_INFOR('%s') "), GetCurrentUser());
	vret = str2long(ExecDML(szSQL));

	if (vret <=0)
	{
		ShowMessageBox(_T("Tài khoản đăng nhập chưa có thông tin khoa gốc, hãy cập nhật thông tin đúng để sử dụng chương trình!"),MB_ICONWARNING);
		CHMSGetOrgDeptInfor dlg(this);		
	    dlg.DoModal();
		szOrgDept = dlg.m_szOrgDeptKey;
		
	    if(szOrgDept.IsEmpty())
		{
			ShowMessageBox(_T("Thông tin khoa gốc đang để trống!"),MB_ICONERROR);
			exit(0);
		}		
	}	
	//Check chứng chỉ hành nghề tại phòng mổ
	long ret = 10;
	szSQL.Format(_T("HMS_GET_DOC_CER_INFOR('%s') "), GetCurrentUser());
	ret = str2long(ExecDML(szSQL));

	if (ret <=0)
	{
		ShowMessageBox(_T("Tài khoản đăng nhập có thông tin chứng chỉ hành nghề chưa hợp lệ, hãy cập nhật thông tin đúng để sử dụng chương trình!"),MB_ICONWARNING);
		CHMSDoctorInfo dlg(this);		
	    dlg.DoModal();
		szCert = dlg.m_szCertificate;
		szCert.Trim();
	    if((szCert.IsEmpty()) || (szCert.GetLength() <5))
		{
			ShowMessageBox(_T("Chứng chỉ hành nghề phải có độ dài >=5 ký tự"),MB_ICONERROR);
			exit(0);
		}		
	}


}

void CMainFrame::OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData)
{
	
}


CString CMainFrame::GetDoctorName(CString szUserId, bool bFirstName)
{
	CString szUserName, szSQL;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT su_name FROM sys_user WHERE lower(su_userid)=lower('%s') "), szUserId);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
		return _T("");
	rs.GetValue(_T("su_name"), szUserName);
	if (bFirstName)
	{
		CString szSurName, szMidName, szLastName;
		SplitName(szUserName, szSurName, szMidName, szLastName);
		szUserName.Format(_T("%s %s"), szMidName, szLastName);	
	}
	return szUserName;
}


BOOL CMainFrame::CheckVersion(CString szModuleID )
{
	CHMSMainFrame *pMF = (CHMSMainFrame*) AfxGetMainWnd();
	CString szVersion,szSQL, tmpStr;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT sv_version FROM sys_version WHERE lower(sv_moduleid)=lower('%s') "), szModuleID);
	rs.ExecSQL(szSQL);
	
	if(rs.IsEOF())
		return FALSE;

	rs.GetValue(_T("sv_version"), szVersion);
	//if((szVersion != m_szVersion) || (szVersion != pMF->GetHmsCoreVersion()))
	if((szVersion != m_szVersion))
	{
		tmpStr.Format(_T("\x42\x1EA1n \x111\x61ng \x63h\x1EA1y phi\xEAn \x62\x1EA3n kh\xF4ng \x111\xFAng. Phi\xEAn \x62\x1EA3n hi\x1EC7n th\x1EDDi l\xE0 [%s]"),m_szVersion);
		ShowMessageBox(tmpStr, MB_OK);
		return FALSE;
	}
	return TRUE;
}


#include "SysPasswordChangeDialog.h"
#include ".\mainfrm.h"

void CMainFrame::OnFileChangePassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupOperationType()
{
	CHMSSurgeryTypeSetupDialog dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnSetupAnaestheticMethod()
{
	CVIMESGeneralSetupDialog dlg(this, _T("hms_anaesthetic_method"), _T("ham_idx"), _T("ham_name"), true);
	dlg.DoModal();
}


void CMainFrame::OnSetupAnesthesiaMethod()
{
	CVIMESGeneralSetupDialog dlg(this, _T("hms_anesthesia_method"), _T("ham_idx"), _T("ham_name"), true);
	dlg.DoModal();
}


void CMainFrame::OnSetupSurgeryTable()
{
	CVIMESGeneralSetupDialog_V2 dlg(this, _T("hms_surgery_table"), _T("hst_idx"), _T("hst_name"), true);
	dlg.DoModal();
}

void CMainFrame::OnSetupHitechOperation()
{
	CVIMESGeneralSetupDialog dlg(this, _T("hms_hitech_operation"), _T("hho_idx"), _T("hho_name"), true);
	dlg.DoModal();
}

void CMainFrame::OnFileStockinvenntory()
{
	/*
	CHMSSurgeryStockInformationDialog dlg(this);
	dlg.DoModal();
	*/
	CHMSMedicalCabinet dlg(this);
	dlg.m_wndMedicalCabinetOrder.m_szDeptID = m_szDept;
	dlg.DoModal();
}
//BC1 bao cao danh sach phau thuat
void CMainFrame::OnReportListofpatientsurgeryreport()
{
	CHMSPatientSurgeryReportListDialog dlg(this);
	dlg.DoModal();
}
//
void CMainFrame::OnReportListofpatientsurgeryreport_V2()
{
	CHMSPatientSurgeryReportListDialog_V2 dlg(this);
	dlg.DoModal();
}

void CMainFrame::Baocaoptttthuchientaib5()
{
	CB5Thongketpttt dlg(this);
	dlg.DoModal();
}

//BC2 bao cao lich mo
void CMainFrame::OnReportSurgeryschedulereport()
{
	CrptSurgeryScheduleDialog dlg(this);
	dlg.DoModal();
}

//BC2.1 bao cao lich mo toan vien
void CMainFrame::OnReportSurgeryscheduleAllreport()
{
	CrptSurgeryScheduleAllDialog dlg(this);
	dlg.DoModal();
}

//BC3 bao cao truc
void CMainFrame::OnReportDutiesreport()
{
	CHMSSurgeryDutiesReportDialog dlg(this);
	dlg.DoModal();
}

//BC4-1 BCTH phau thuat thuong 
void CMainFrame::OnReportGeneralSurgeryReport()
{
	CHMSGeneralSurgeryReportDialog dlg(this,0);
	dlg.DoModal();
}

//BC4-1 BCTH phau thuat thuong
void CMainFrame::OnGeneralsurgeryreportGeneralsurgeryoftenreported()
{
	// TODO: Add your command handler code here
	CHMSGeneralSurgeryReportDialog dlg(this, 0);
	dlg.DoModal();
}

void CMainFrame::OnGeneralsurgeryreportGeneralsurgeryoftenreportednew()
{
	// TODO: Add your command handler code here
	CHMSGeneralSurgeryReportNewDialog dlg(this, 0);
	dlg.DoModal();
}

//BC4-2 BCTH phau thuat ky thuat cao
void CMainFrame::OnGeneralsurgeryreportGeneralreportonhigh()
{
	// TODO: Add your command handler code here
	CHMSGeneralSurgeryReportDialog dlg(this, 1);
	dlg.DoModal();
}

//BC4-3 BCTH phuong phap vo cam
void CMainFrame::OnGeneralsurgeryreportGeneralreportonmethodsofanesthesia()
{
	// TODO: Add your command handler code here
	CHMSGeneralSurgeryReportDialog dlg(this, 2);
	dlg.DoModal();
}

//BC5 tong hop su dung thuoc - VTYT
void CMainFrame::OnReportTheuseofdrugs()
{
	// TODO: Add your command handler code here
	CPMSReportConditionDruguseDialog dlg(this);
	dlg.DoModal();

}

//BC6 chi tiet tinh hinh su dung thuoc - vat tu y te
void CMainFrame::OnReportTheuseofsyntheticdrugs()
{
	// TODO: Add your command handler code here
	CrptBaocaoxuatthuocchokhoatheodoituong dlg(this);
	dlg.DoModal();
}

//BC7 danh sach benh nhan su dung thuoc huong than
void CMainFrame::OnReportListofpatientsusingpsychotropicdrugs()
{
	// List of patients using psychotropic drugs - Danh sach benh nhan su dung thuoc huong than.
	if (CheckPermission(_T("3.5")))
	{
		CrptBaocaosudungthuochuongthan dlg(this);
		dlg.DoModal();
	}
	else
	{
		ShowMessageBox(_T("Permission Denined."), MB_OK | MB_ICONERROR);
	}
}

//BC8 bao cao quyet toan thuoc da su dung
void CMainFrame::OnMenu()
{
	// TODO: Add your command handler code here
	CrptBaocaoquyettoanthuocDialog dlg(this);
	dlg.DoModal();
}

//BC9 bao cao quyet toan vat tu da su dung
void CMainFrame::OnReportBaocaosuquyettoanvattu()
{
	// TODO: Add your command handler code here	
	CrptBaocaoquyettoanVTDialog dlg(this);
	dlg.DoModal();
}

//BC10 bao cao quyet toan thuoc - vat tu y te
void CMainFrame::OnReportDrugandmaterialsettlementreport()
{
	CrptBaocaoquyettoanthuocVTDialog dlg(this);
	dlg.DoModal();
}

//BC11 bao cao tong ket su dung tai don vi 
void CMainFrame::OnReportGeneralDepartmentUsage()
{
	CrptGeneralDepartmentUsage dlg(this);
	dlg.DoModal();
}

//BC12 bao cao tong hop thuoc vat tu chua linh 
void CMainFrame::OnReportDrugMaterialUnpick()
{
	CReportDrugMaterialUnpick dlg(this);
	dlg.DoModal();
}

//BC13 bao cao tong hop thuoc vat tu chua linh 
void CMainFrame::OnReportDebtMaterial()
{
	CReportDebtMaterial dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnReportGeneralsurgeryoftenreported()
{
	// Bao cao tong hop mo thuong
	CrptGeneralsurgeryoftenreportedDialog dlg(this);
	dlg.DoModal();
}

bool CMainFrame::IsOutPatient(long nDocNo)
{
	CRecord rs(&m_db);
	CString szSQL;

	szSQL.Format(_T("SELECT Count(*) FROM hms_doc WHERE hd_docno=%ld AND hd_isinpatient='Y'"),
		         nDocNo);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
		return false;

	szSQL.Format(_T("SELECT Count(*) FROM hms_clinical_record WHERE hcr_docno=%ld AND hcr_status IN('A','I','T')"),
		         nDocNo);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
		return false;

	return true;
}
void CMainFrame::OnSetupApplydate()
{
	if (GetCurrentUser().Trim() == _T("admin"))
	{
		CHMSSetupValidDateDialog dlg(this);
		dlg.DoModal();
	}
	else
	{
		ShowMessageBox(_T("Permission Denined."), MB_OK | MB_ICONERROR);
	}
}

bool CMainFrame::IsInPatient()
{
	if (m_nIsOutPatient == 0)
		return true;
	else
		return false;
}

bool CMainFrame::IsOldPatient()
{
	if (m_bIsOldPatient)
		return true;
	else
		return false;
}

#include "HMSParaclinicalInformationDialog.h"
void CMainFrame::OnFileViewparaclinicalinformation()
{
	m_wndSurgeryDocument.OnViewParaclinicalInformation();
}

void CMainFrame::OnCommandMedicalcabinet()
{
	// TODO: Add your command handler code here
	CWardMedicalCabinetDialog dlg(this);
	dlg.DoModal(); 
}

#include "WardDeliveryOrderDialog.h"

void CMainFrame::OnFileDrugmaterialordersheet()
{
	CWardDeliveryOrderDialog dlg(this);
	dlg.DoModal();
}

#include "WardReturnOrderDialog.h"
void CMainFrame::OnFileReturndrugordersheet()
{
	CWardReturnOrderDialog dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnReportDebtmaterialsummary()
{
	// TODO: Add your command handler code here
	CReportDebtMaterial_v2 dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileStoragedetail()
{
	// TODO: Add your command handler code here
	CHMSStorageDetailDialog dlg(this);
	if (dlg.DoModal() == IDOK)
	{
	}
}
void CMainFrame::OnFileSetupprescriptionlist()
{
	CHMSPrescriptionGroupItemsDialog dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnSettingsDoctorinfo()
{
	// TODO: Add your command handler code here
	CHMSDoctorInfo dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnReportProductNameQuantityinfo()
{
	// TODO: Add your command handler code here
	CPMSSummaryImportExportInstockForB5StocksReportDialog dlg(this);
	dlg.DoModal();
}
bool CMainFrame::IsActiveDocument()
{ 
	CRecord rs(&m_db);
    CString szSQL;

	szSQL.Format(
		_T(" SELECT count(*)")
        _T("   FROM hms_clinical_record")
        _T("  WHERE hcr_docno = %ld AND hcr_status = 'I' ")
	, m_nDocumentNo);
    rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
	{
        return true;
	}

	szSQL.Format(
		_T(" SELECT count(*)")
        _T("   FROM hms_doc")
        _T("  WHERE hd_docno = %ld AND hd_status NOT IN ('C', 'T') ")
    , m_nDocumentNo);
    rs.ExecSQL(szSQL);
    if (rs.GetIntValue() > 0)
    {
        return true;
    }
	return false; 
}

BOOL CMainFrame::OnCommand(WPARAM wParam, LPARAM lParam)
{
    if (wParam == CMD_SIGNATURE && m_nDocumentNo > 0)
    {
        m_wndSurgeryDocument.OnViewEMR();
    }
    return CHMSMainFrame::OnCommand(wParam, lParam);
}