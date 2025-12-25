#include "stdafx.h"
#include "HMSRegistration.h"
#include "MainFrm.h"
#include "GuiUtils.h"
#include "SYSPasswordChangeDialog.h"
#include "Resource.h"
#include "HMSUploadFileDialog.h"
#include "HMSGeneralReceptionReportDialog.h"
#include "HMSGeneralReceivableEFReportDialog.h"
#include "HMSPatientNoChangeDialog.h"
#include "HMSTreatmentHistory.h"
#include "HMSReportForms/HMSReportFormDialog.h"
#include "HMSBirthPackageList.h"
#include "ATMCardReader.h"
#include <Gdiplus.h>
#include "StringToken.h"
#include "fml.h"
#include "rapidjson/document.h"
#include "SYSDepartmentChangeDialog.h"
#include <sstream>
#include "MFCCaptionBarEx.h"
#include "MFCWidget.h"
#include ".\mainfrm.h"
#include "GuiManager.h"
#include "TransplantDialog.h"

using namespace rapidjson;
using namespace Gdiplus;


#pragma comment(lib, "../lib/HMSReportForms.lib")
//#pragma comment(lib, "../lib/VIMESDcmImage.lib")
static CString szMainStatus;

#include "ServiceManager.h"

#include <windows.h>
#include <tlhelp32.h>
#include <tchar.h>
#include <string>

#define IDT_CHECK_CARD_READER 1

bool KillProcessByName(const std::wstring& processName) {
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hSnap == INVALID_HANDLE_VALUE) return false;

	PROCESSENTRY32 pe;
	pe.dwSize = sizeof(PROCESSENTRY32);

	if (Process32First(hSnap, &pe)) {
		do {
			if (_tcsicmp(pe.szExeFile, processName.c_str()) == 0) {
				HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, FALSE, pe.th32ProcessID);
				if (hProcess) {
					TerminateProcess(hProcess, 1);
					CloseHandle(hProcess);
				}
			}
		} while (Process32Next(hSnap, &pe));
	}

	CloseHandle(hSnap);
	return true;
}

/*
int GetEncoderClsid(const WCHAR* format, CLSID* pClsid)
{
	UINT  num = 0;          // number of image encoders
	UINT  size = 0;         // size of the image encoder array in bytes

	ImageCodecInfo* pImageCodecInfo = NULL;

	GetImageEncodersSize(&num, &size);
	if (size == 0)
		return -1;  // Failure

	pImageCodecInfo = (ImageCodecInfo*)(malloc(size));
	if (pImageCodecInfo == NULL)
		return -1;  // Failure

	GetImageEncoders(num, size, pImageCodecInfo);

	for (UINT j = 0; j < num; ++j)
	{
		if (wcscmp(pImageCodecInfo[j].MimeType, format) == 0)
		{
			*pClsid = pImageCodecInfo[j].Clsid;
			free(pImageCodecInfo);
			return j;  // Success
		}
	}

	free(pImageCodecInfo);
	return -1;  // Failure
}
*/
// CMainFrame


#include <atlimage.h>  // CImage for image handling
#include <GdiPlus.h>   // GDI+ for better image quality

using namespace std;
using namespace Gdiplus;

// CImageView: Class kế thừa từ CWnd, sẽ hiển thị ảnh trong góc phải của cửa sổ MainFrame
class CImageView : public CWnd
{
public:
	Gdiplus::Image* m_image;  // Đối tượng CImage để nạp và vẽ ảnh
	CRect m_rect;    // Vị trí và kích thước của vùng hiển thị ảnh
	bool m_bShow;
	// Hàm khởi tạo
	CImageView()
	{
		// Đặt mặc định vị trí và kích thước ảnh
		m_rect.SetRect(0, 0, 0, 0);  // Thay đổi kích thước theo nhu cầu
		m_image = NULL;
		m_bShow = TRUE;
	}

	// Hàm tạo window cho CImageView
	BOOL Create(CWnd* pParentWnd)
	{
		// Tạo một cửa sổ con trong MainFrame
		return CWnd::Create(NULL, _T("Image View"), WS_CHILD|WS_EX_TOOLWINDOW| WS_CAPTION|WS_SYSMENU, m_rect, pParentWnd, 0);
	}

	// Hàm nạp ảnh
	void LoadAndShow(const CString& filePath)
	{
		if (!GetSafeHwnd())
			return;
		// Nạp ảnh từ tệp vào đối tượng CImage
		m_image = Gdiplus::Image::FromFile(filePath);
		if (m_image == NULL)
			return;
		CRect rect;
		GetParent()->GetClientRect(&rect);
		rect.top += 35;
		rect.right -= 10;
		rect.left = rect.right - m_image->GetWidth()*0.5;
		rect.bottom = rect.top + m_image->GetHeight()*0.5+20;
		m_rect = rect;
		SetWindowPos(NULL, rect.left, rect.top, rect.Width(), rect.Height(), SWP_NOZORDER | SWP_SHOWWINDOW);
	}

	// Hàm vẽ ảnh trong vùng quy định
	void OnPaint()
	{
		CPaintDC dc(this);  // Đối tượng vẽ để sử dụng trong phương thức Paint
		
		
		CRect rc = m_rect;
		rc.left = rc.right - 32;
		rc.bottom = rc.top + 32;
		
		dc.FillSolidRect(m_rect, RGB(245, 245, 245));
		
		// Khởi tạo GDI+
		Graphics graphics(dc.m_hDC);
		graphics.SetInterpolationMode(InterpolationModeHighQualityBicubic);  // Đảm bảo ảnh không bị mờ khi phóng to

		// Vẽ ảnh tại vị trí và kích thước đã định
		if (m_image)
		{
			graphics.DrawImage(m_image, 0, 30, m_rect.Width(), m_rect.Height());
		}
		else {
			Gdiplus::Pen pen(Color(255, 225, 225, 225));
			graphics.DrawRectangle(&pen, 0, 0, m_rect.right, m_rect.Height());
		}
		if (m_bShow)
		{
			CGuiManager::GetInstance()->DrawIcon(&dc, icons::arrow_drop_down_circle, rc, RGB(0, 128, 192));
		}
		else
		{
			CGuiManager::GetInstance()->DrawIcon(&dc, icons::arrow_drop_down_circle, rc);
		}
		


	}

	// Hàm thay đổi vị trí của ảnh khi cửa sổ MainFrame thay đổi kích thước
	void SetPosition(CRect rect)
	{
		m_rect = rect;
		MoveWindow(m_rect);
	}

	// Hàm xử lý sự kiện khi cửa sổ cần vẽ lại
	afx_msg void OnPaintMessage()
	{
		OnPaint();
	}

	


	DECLARE_MESSAGE_MAP()
	afx_msg void OnClose();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

BEGIN_MESSAGE_MAP(CImageView, CWnd)
	ON_WM_PAINT()
	ON_WM_CLOSE()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

BOOL CImageView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Add your specialized code here and/or call the base class
	cs.style &= ~WS_BORDER;
	cs.dwExStyle &= ~WS_EX_CLIENTEDGE;
	return CWnd::PreCreateWindow(cs);
}


void CImageView::OnClose()
{
	m_bShow = !m_bShow;
	if (!m_bShow)
	{
		SetWindowPos(NULL, m_rect.left, m_rect.top, m_rect.Width(), 30, SWP_NOZORDER | SWP_SHOWWINDOW);
	}
	else {
		SetWindowPos(NULL, m_rect.left, m_rect.top, m_rect.Width(), m_rect.Height() , SWP_NOZORDER | SWP_SHOWWINDOW);
	}
	RedrawWindow();
	
}


void CImageView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	CRect rc;
	GetClientRect(&rc);
	//rc.left = rc.right - 32;
	rc.bottom = rc.top + 30;
	if (rc.PtInRect(point))
	{
		OnClose();
	}
	CWnd::OnLButtonDown(nFlags, point);
}



static CImageView m_imageView;  // Đối tượng CImageView


static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew)
{
    ((CMainFrame *)pWnd)->OnTabSelectChange(nOld, nNew);
}


//ID_SETTING_SMARTCARD = ID_FILE_SMARTCARD;

IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	
	ON_WM_CREATE()
	ON_WM_DESTROY()
	ON_WM_CLOSE()
	ON_COMMAND(ID_FILE_CHANGEPASSWORD, OnFileChangepassword)
	ON_COMMAND(ID_FILE_CHANGEDEPARTMENT, OnChangeDepartment)
	ON_COMMAND(ID_COMMAND_FUNCTIONALTEST, OnCommandFunctionaltest)
	ON_COMMAND(ID_COMMAND_CHANGEPATIENTNO, OnCommandChangepatientno)
	ON_COMMAND(ID_COMMAND_IGNOREHOSPITALTRANSFERREDINFORMATIONS, OnCommandIgnorehospitaltransferredinformations)
	ON_COMMAND(ID_FILE_REPORTS32792, OnFileReports32792)
	ON_COMMAND(ID_COMMAND_UPLOADFILE, OnCommandUploadfile)
	ON_COMMAND(ID_COMMAND_SEARCHINFORMATIONPATIENT, OnCommandSearchinformationpatient)
	ON_COMMAND(ID_COMMAND_SETUPHOSTPITAL, OnCommandSetuphostpital)
	ON_COMMAND(ID_COMMAND_SETDEFAULTDOCTOR, OnCommandSetdefaultdoctor)
	ON_COMMAND(ID_COMMAND_ADDPARACLINICALGROUP, OnCommandAddparaclinicalgroup)
	ON_COMMAND(ID_COMMAND_SETUPWIFI, OnCommandSetupwifi)
	ON_COMMAND(ID_SETTINGS_SMARTCARD, OnSettingsSmartCard)
	ON_COMMAND(ID_FILE_AUTOCHECKCARD, OnAutoCheckCardSelect)
	ON_COMMAND(ID_COMMAND_BIRTHPACKAGEREGISTRATION, OnCommandBirthpackageregistration)
	ON_COMMAND(ID_COMMAND_COMPANYSETTING, OnCommandSetupCompany)
	ON_COMMAND(ID_COMMAND_VACCINECOVID19, OnCommandVaccineCovid19)
	ON_COMMAND(ID_FILE_USECCCDMACHINE, OnCommandUseCCCDMachine)
	ON_COMMAND(ID_SETTINGS_SETUPEXAMROOM, OnCommandSetupExamRoom)
	

	ON_COMMAND(ID_Menu32817, OnMenu32817)
	
	ON_WM_SIZE()
    ON_WM_TIMER()
    END_MESSAGE_MAP()

// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(FALSE);
	//SetLocalLang(0);
	m_szModuleName = _T("QUẢN LÝ TIẾP ĐÓN");
	m_szModuleID = _T("RM");
	m_szSize = CSize(1024, 720);
	m_szVersion = _T("7.7");
	m_nInsOffLinePayment = 0;
	m_IsC11 = FALSE;
	m_IsC12 = m_IsC13 = FALSE;
	m_bAllowLoadHospital = true;
}

CMainFrame::~CMainFrame()
{


}

#define ID_COMMAND_TEMPLATE CMD_USER+1
#define ID_COMMAND_FILES CMD_USER+10
#define ID_COMMAND_IMAGE CMD_USER+11
#define CMD_SIGNATURE CMD_USER + 12

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;

	((CGuiTabCtrl *)GetPane())->SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	
	m_pAppBar->SetCaptionHeight(30);
	m_pAppBar->m_szItemSize = CSize(120, 30);	
	m_pAppBar->Add(new CWidgetItem(ID_COMMAND_SEARCHINFORMATIONPATIENT, icons::search, L"Tìm kiếm", L"Tìm kiếm thông tin bệnh nhân"));
	m_pAppBar->Add(new CWidgetItem(ID_COMMAND_COMPANYSETTING, icons::accessibility, L"Khám sức khỏe", L"Gói khám sức khỏe"));
	m_pAppBar->Add(new CWidgetItem(ID_COMMAND_TEMPLATE, icons::bookmark, L"Mẫu biểu", L"Mẫu biểu hành chính"));
	m_pAppBar->Add(new CWidgetItem(ID_COMMAND_FUNCTIONALTEST, icons::hearing, L"Chức năng sống", L"Nhập chức năng sống"));
	m_pAppBar->Add(new CWidgetItem(CMD_SIGNATURE, icons::collections_bookmark,L"EMR", L"Hồ sơ bệnh án điện tử EMR"));
	//m_pAppBar->Add(new CWidgetItem(ID_COMMAND_UPLOADFILE, icons::search, L"Upload", L"Tải lên file tài liệu"));
	

	m_pAppBar->Add(new CWidgetItem(ID_COMMAND_FILES, icons::file_upload, L"Files", L"Hồ sơ, tài liệu"));
	m_pAppBar->Add(new CWidgetItem(ID_COMMAND_IMAGE, icons::image, L"Image", L"Xem ảnh"));
	
	
	


	m_bIsAutoCheckCard = true;
	CString tmpStr;
	//Job Done
	/*TranslateString(_T("RECEPTION MANAGEMENT"), tmpStr);
	if (m_szDept == _T("AB") || m_UserInfo.su_hms_xdept == _T("AB"))
	{
		tmpStr.Format(_T("TIẾP ĐÓN KHÁM GIÁO SƯ"));
	}
	SetWindowText(tmpStr);*/

	CString szFloor, szText;
	TranslateString(m_szModuleName, szText);		
	szText.AppendFormat(_T(" [%s]"), GetDepartmentName(m_szDept));
	SetWindowText(szText);



	m_bUseCCCDMachine = AfxGetApp()->GetProfileInt(_T("Settings"), _T("USECCCDMACHINE"), 0);
	if (m_bUseCCCDMachine) 
	{
		m_pMainMenu->CheckMenuItem(ID_FILE_USECCCDMACHINE, MF_CHECKED | MF_BYCOMMAND);
    }
	else 
	{
        m_pMainMenu->CheckMenuItem(ID_FILE_USECCCDMACHINE, MF_UNCHECKED | MF_BYCOMMAND);
    }


	m_wndRegistration.Create(GetPane());

	m_wndExaminationQueue.Create(GetPane());

	
	AddView(_T("Patient Registration"), &m_wndRegistration);
	AddView(_T("Patient List"), &m_wndExaminationQueue);

	m_wndOnlineListView.Create(GetPane());
    AddView(_T("Online List"), &m_wndOnlineListView);


	if (CheckPermission(_T("01.21")))
    {
        m_szDoctor = GetCurrentUser();
        m_wndParaclinicalOrder.Create(GetPane());
        AddView(_T("Paraclinical"), &m_wndParaclinicalOrder);
        // m_wndParaclinicalOrder.OnResizeLayout();
        m_bParaclinical = true;
    }

    if (CheckPermission(_T("01.34")))
    {
        m_wndCustomerList.Create(GetPane());
        AddView(_T("SmartCard Management"), &m_wndCustomerList);
        // m_wndImageCapture.Create(GetPane());
        // AddView(_T("Image Capture"), &m_wndImageCapture);
    }


	m_wndRegistration.SetFocus();

	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	TranslateString(_T("UserID: [%s-%s]"), szStatusLabel);
	TranslateString(_T("Server"), tmpStr);
	szStatus.Format(szStatusLabel, GetCurrentUser(), m_szDept);
	szStatus.AppendFormat(_T(" - %s: %s"), tmpStr, GetHost());
	SetStatusText(szStatus, 1);
	szMainStatus = szStatus;
	m_bParaclinical = false;
	

	
	SetActivePane(0);

	::GetCurrentDirectory(MAX_PATH, m_szCurrentDir.GetBufferSetLength(MAX_PATH));
	m_szCurrentDir.ReleaseBuffer();

	//OnInitSmartCard();
	if (m_szDept == _T("TYC"))
	{
		//		OnInitSmartCard();
		
	}
	else
	{
		CString tmpStr;
		CMenu* pMenu = m_pMainMenu->GetSubMenu(0);
		for (int i = 0; i < pMenu->GetMenuItemCount(); i++)
		{
			UINT nID = pMenu->GetMenuString(i, tmpStr, MF_BYPOSITION);
			if (tmpStr == _T("Settings"))
			{
				printf("\r\n%d", pMenu->GetMenuItemCount());
				//		pMenu->DeleteMenu(ID_SETTINGS_SMARTCARD, MF_BYCOMMAND);
			}
		}


	}


	if (m_pMainMenu)
	{
		CString szCheckQROnline = AfxGetApp()->GetProfileString(_T("Settings"), _T("CheckQROnline"), _T(""));
		if (szCheckQROnline == _T("Y"))
		{
			m_pMainMenu->CheckMenuItem(ID_Menu32817, MF_CHECKED);
		}
		else
		{
			m_pMainMenu->CheckMenuItem(ID_Menu32817, MF_UNCHECKED);
		}
	}
	
	if(m_bUseCCCDMachine)
	{
		// Tạo CImageView và nạp ảnh
		m_imageView.Create(this);
		m_imageView.SetPosition(CRect(0, 0, 0, 0));  // Thay 
		StartServiceEx(L"cef", L"sio_cardreader.exe");	
        
		cout << "\r\nStart card reader service" << endl;
        StartPipeService(L"card_named");

		
	}

	
	return 0;
}


void CMainFrame::OnInitializes() {

	CHMSMainFrame::OnInitializes();


	m_szDept = m_UserInfo.su_hms_xdept;
	m_wndRegistration.m_szDept = m_UserInfo.su_hms_xdept;

	CString szSQL;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT * FROM hms_config "));
	rs.ExecSQL(szSQL);
	m_szAutoPrint = m_szAutoPayment = m_szAllowInputDate = _T("N");
	m_szInsRegDate = m_szInsExpDate = _T("");
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hr_autoprint"), m_szAutoPrint);
		rs.GetValue(_T("hr_autopayment"), m_szAutoPayment);
		rs.GetValue(_T("hr_insregdate"), m_szInsRegDate);
		rs.GetValue(_T("hr_insexpdate"), m_szInsExpDate);
		rs.GetValue(_T("hr_allow_inputdate"), m_szAllowInputDate);
		rs.GetValue(_T("hms_insoffline"), m_nInsOffLinePayment);
		rs.GetValue(_T("hf_print_hemareceipt"), m_szPrintHemaReceipt);
		rs.GetValue(_T("hf_deposit_amount"), m_nDepositAmount);
		rs.GetValue(_T("hms_insurancewebservice"), m_szInsuranceWebService);
		rs.GetValue(_T("hr_tph_url"), m_szIpTPH);


		if (rs.GetValue(_T("hr_autocheckins")) == _T("Y"))
			m_bIsAutoCheckCard = true;
		else
			m_bIsAutoCheckCard = false;
	}
	m_szInsuranceWebService = _T("Y");

	if (m_UserInfo.su_hms_xdept == _T("C1.1")) {
		m_IsC11 = TRUE;
	}
	if (m_UserInfo.su_hms_xdept == _T("C1.2")) {
		m_IsC12 = TRUE;
	}
	if (m_UserInfo.su_hms_xdept == _T("C1.3")) {
		m_IsC13 = TRUE;
	}

	// Xoa du lieu bang hms_examview de khoi tao du lieu trong ngay lam viec hien thoi
	szSQL.Format(_T("DELETE FROM hms_examview WHERE TRUNC_DATE(he_examtime) <> TRUNC_DATE(sysdate)"));
	ExecSQL(szSQL);
	GetAutoCheckCardIns();
	
}

int CMainFrame::ParseCard(CString szObject, CString szCardNo, CString& szRetCode, int& nInsDiscount, int& nGroupID)

{
	CRecord rs(&m_db);
	CString szSQL, szCardFormat, szCondition, szCode, szInsCode, szType;
	bool bIsFound = false;
	int nDiscount = 0;
	nGroupID = 0;
	UpdateData(true);

	if (szCardNo.GetLength() == 10)
		return 1;


	if (szObject.IsEmpty())
		szSQL.Format(_T("SELECT * FROM hms_object_line WHERE length(hol_cardfmt)=%d ORDER BY hol_type,hol_cardfmt, length(hol_code) DESC "), szCardNo.GetLength());
	else
		szSQL.Format(_T("SELECT * FROM hms_object_line WHERE hol_type='%s' AND length(hol_cardfmt)=%d ORDER BY hol_type,hol_cardfmt, length(hol_code) DESC "), szObject, szCardNo.GetLength());

	int ret = rs.ExecSQL(szSQL);


	while (!rs.IsEOF()) {
		rs.GetValue(_T("hol_cardfmt"), szCardFormat);
		rs.GetValue(_T("hol_condition"), szCondition);
		rs.GetValue(_T("hol_code"), szInsCode);
		rs.GetValue(_T("hol_type"), szType);
		rs.GetValue(_T("hol_discount"), nDiscount);
		rs.GetValue(_T("hol_group"), nGroupID);
		bool bValid = true;
		szCode.Empty();
		for (int i = 0; i < szCardFormat.GetLength(); i++)
		{
			if (szCardFormat[i] == _T('$') && _istalnum(szCardNo[i]) == 0) {
				bValid = false;
				break;
			}
			else if (szCardFormat[i] == _T('A') && _istalpha(szCardNo[i]) == 0) {
				bValid = false;
				break;
			}
			else if (szCardFormat[i] == _T('#') && _istdigit(szCardNo[i]) == 0) {
				bValid = false;
				break;
			}
			if (szCondition[i] == _T('C')) {
				szCode += szCardNo[i];
			}
		}

		if (szCode != szInsCode) {
			bValid = false;
		}
		if (bValid)
		{
			bIsFound = true;
			break;
		}

		rs.MoveNext();

	}

	if (bIsFound)
	{
		if (szObject.IsEmpty())
		{
			szRetCode = szType;
		}
		else
			szRetCode = szInsCode;

		nInsDiscount = nDiscount;
		return 1;
	}
	return -1;
}
long CMainFrame::GetLastRecvNo() {
	CRecord rs(&m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT hfc_recvdate, hfc_serialno, hfc_receiptno ") \
		_T("FROM hms_fee_control WHERE lower(hfc_userid)=lower('%s') "), GetCurrentUser());
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF()) {
		rs.GetValue(_T("hfc_serialno"), m_szSerialNo);
		rs.GetValue(_T("hfc_receiptno"), m_nRecvNo);
		return m_nRecvNo;
	}
	m_szRecvDate = GetSysDateTime();
	return 0;
}
int CMainFrame::IsPatientInsuranceDaily(CString szCardNo) {
	CRecord rs(&m_db);
	CString szSQL, szWhere, tmpStr;
	/*
	szSQL.Format(_T(" SELECT coalesce(hd_docno, 0) FROM hms_doc WHERE hd_cardno='%s' and trunc_date(hd_admitdate) = trunc_date(sysdate) AND hd_patientno = %ld"), szCardNo, m_nPatientNo);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
		return true;
	long nDocumentNo = rs.GetIntValue();

	szSQL.Format(_T(" SELECT count(*) FROM hms_clinical_record WHERE hcr_docno and trunc_date(hcrf_accepteddate) = trunc_date(sysdate) and hcrf_acceptedfee='P' "), m_nDocumentNo);
	rs.ExecSQL(szSQL);

	if (rs.GetIntValue() > 0)
	{
		_msg(_T("?"));
		return true;
	}
*/
	if (GetObjectType() != _T("I"))
		return 0;

	szSQL.Format(_T("HMS_REGISTRATION_CHECKINSINDAY(%ld,'%s','%s') "), m_nPatientNo, szCardNo, m_szDept);

	int ret = str2int(ExecDML(szSQL));
	return ret;
}
bool CMainFrame::IsTreatmentTerminate(int nDocno, CString& szOutpatient) {
	CRecord rs(&m_db);
	CString szSQL, szWhere, tmpStr;
	szSQL.Format(_T(" SELECT htr_idx as id, htr_outpatient, (select sd_name from sys_dept where sd_id =htr_deptid) as DeptName ") \
		_T(" FROM hms_treatment_record WHERE htr_patientno=%ld AND htr_status IN('I','A') AND rownum < 2 ORDER BY htr_docno desc, htr_idx")
		// , nDocno);
		, m_nPatientNo);
	int ret = rs.ExecSQL(szSQL);
	if (ret > 0)
	{
		rs.GetValue(_T("id"), tmpStr);
		rs.GetValue(_T("DeptName"), m_szDeptName);
		rs.GetValue(_T("htr_outpatient"), szOutpatient);
		if (ToInt(tmpStr) > 0) return true;
	}
	return false;
}
void CMainFrame::OnFileChangepassword()
{
	CSYSPasswordChangeDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnCommandFunctionaltest()
{
	m_wndRegistration.OnFunctionalTest();
}

void CMainFrame::OnCommandChangepatientno()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	if (!CheckPermission(_T("01.05")))
	{
		ShowMessageBox(_T("Permission Denined."), 0);
		return;
	}

	/*if (pMF->m_UserInfo.su_groupid != _T("A"))
	{
		ShowMessageBox(_T("Chức năng dành cho người quản trị!"));
		return;
	}*/


	CHMSPatientNoChangeDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnCommandIgnorehospitaltransferredinformations()
{
	m_wndRegistration.OnIgnoreTransferredInfo();
}


void CMainFrame::OnFileReports32792()
{
	CHMSReportFormDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnCommandUploadfile()
{
	if (m_nDocumentNo <= 0)
		return;
	CHMSUploadFileDialog dlg(this);
	dlg.m_nDocumentNo = m_nDocumentNo;
	dlg.DoModal();
}



void CMainFrame::OnDestroy()
{
    //KillProcessByName(L"sio_cardreader.exe");
	CHMSMainFrame::OnDestroy();
}

void CMainFrame::OnClose()
{
	// TODO: Add your message handler code here and/or call default
	//_debug(_T("\r\nclose"));
	
	CHMSMainFrame::OnClose();
}

void CMainFrame::OnCommandSearchinformationpatient()
{
	// Tim kiem thong tin benh nhan cu
	CHMSTreatmentHistoryDialog dlg(this);
	dlg.DoModal();

}


#include "HMSHospitalDialog.h"
#include "HMSHospitals.h"
#include "HMSDefaultDoctorSetupDlg.h"
void CMainFrame::OnCommandSetuphostpital()
{
	// TODO: Add your command handler code here	

	CHMSHospitalListSetupDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnCommandSetdefaultdoctor()
{
	// TODO: Add your command handler code here
	if (!CheckPermission(_T("01.20")))
	{
		AfxMessageBox(_T("Permission Denied."));
		return;
	}
	CHMSDefaultDoctorSetupDlg dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnCommandAddparaclinicalgroup()
{
}

#include "HMSWifiSettingDialog.h"

void CMainFrame::OnCommandSetupwifi()
{
	CHMSWifiSettingDialog dlg(this);
	dlg.DoModal();
}
#include "HMSRoomSetupDialog_V2.h"
void CMainFrame::OnCommandSetupExamRoom()
{
	if (!CheckPermission(_T("RM.900.6")))
	{
		AfxMessageBox(_T("Cấp quyền RM.900.6 ở tiếp đón để sử dụng chức năng này!"));
		return;
	}
		CHMSRoomSetupDialog_V2 dlg(this);
		dlg.m_szDeptID = m_UserInfo.su_deptid;		
		dlg.DoModal();


}
void CMainFrame::PrintReceipt(long nInvoiceNo, bool bPreview)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
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
		_T("         hfe_refund as refundamt ") \
		_T(" FROM hms_fee_invoice") \
		_T(" LEFT JOIN hms_doc ON(hd_docno=hfe_docno)") \
		_T(" LEFT JOIN hms_patient ON(hp_patientno=hd_patientno)") \
		_T(" WHERE hfe_docno=%ld AND hfe_invoiceno=%ld AND hfe_status ='P' AND (hfe_patpaid+hfe_amount+hfe_discount) > 0"), m_nDocumentNo, nInvoiceNo);

	rs.ExecSQL(szSQL);
	_fmsg(_T("%s"), szSQL);
	if (rs.IsEOF())
		return;
	double nAdvReceipt = 0, nRefundAmt = 0;
	int nPage = 0;
	CString szReportName;
	rs.GetValue(_T("typeid"), szType);

	if (szType == _T("A") || szType == _T("B") || szType == _T("C"))
		szReportName = _T("Reports/HMS/HF_ADVANCEFEE.RPT");
	else if (szType == _T("E") || szType == _T("F") || szType == _T("V"))
		szReportName = _T("Reports/HMS/HF_REFUNDFEE.RPT");
	else if (szType == _T("D"))
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


	if (!rpt.Init(szReportName, false, false, 2))
		return;



	//Page Header
	//Report Detail


	CReportSection* rptDetail = NULL;
	CReportSection* grp = NULL;

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


	int nUnRate = 0;
	rs.GetValue(_T("disrate"), tmpStr);
	if (ToInt(tmpStr) > 0 && !pMF->IsOutLine())
	{
		nUnRate = 100 - ToInt(tmpStr);
		rptDetail->SetValue(_T("UnRate"), nUnRate);
	}

	rs.GetValue(_T("depts"), tmpStr);
	CString szDeptName = m_szDept;
	rptDetail->SetValue(_T("Department"), szDeptName);
	rptDetail->SetValue(_T("Department2"), szDeptName);
	rptDetail->SetValue(_T("Department3"), szDeptName);

	CString szAmount;
	//Phieu chi
	if (szType == _T("V"))
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
	szDate.Format(rptDetail->GetValue(_T("PrintDate")), tmpStr.Mid(11, 5), tmpStr.Mid(8, 2), tmpStr.Mid(5, 2), tmpStr.Left(4));
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



	if (bPreview)
		rpt.PrintPreview();
	else
		rpt.Print(true);



	szSQL.Format(_T("UPDATE hms_fee_invoice SET hfe_print=hfe_print+1 WHERE hfe_invoiceno=%ld "), nInvoiceNo);
	ExecSQL(szSQL);

}


void CMainFrame::OnSmartCardConnected(CString szCardId)
{
	return;
	SetActivePane(0);
	long nPatientNo, nDocumentNo;
	CString szSQL;
	CRecord rs(&m_db);
	szSQL.Format(_T("SELECT hsc_patientno,hsc_docno FROM hms_smartcard WHERE hsc_cardid='%s' "), szCardId);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("hsc_patientno"), nPatientNo);
		rs.GetValue(_T("hsc_docno"), nDocumentNo);
		if (nDocumentNo > 0)
		{
			m_wndRegistration.LoadData(nDocumentNo);
		}
		else
		{
			m_wndRegistration.LoadByPatientNo(nPatientNo);
		}
		//TODO:
		m_wndRegistration.OnAddNewReception();
	}
	else
	{
		m_nPatientNo = 0;
		m_wndRegistration.m_wndSmartcardID.SetWindowText(GetCardId());
		//Add New Doc
		//X
	}
	m_wndRegistration.m_wndIssueCard.EnableWindow(TRUE);
}

void CMainFrame::OnSmartCardDisconnect()
{
	m_wndRegistration.SetMode(VM_NONE);
	m_wndRegistration.m_wndIssueCard.EnableWindow(FALSE);
}


void CMainFrame::OnSettingsSmartCard()
{
	OnSmartCardConfig();
}


void CMainFrame::OnCommandBirthpackageregistration()
{
	// TODO: Add your command handler code here
	CHMSBirthPackageList dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnAutoCheckCardSelect()
{
	/*
	UpdateData(true);
	m_bIsAutoCheckCard = !m_bIsAutoCheckCard;

	if(m_bIsAutoCheckCard)
		m_pMainMenu->CheckMenuItem(ID_FILE_AUTOCHECKCARD, MF_CHECKED|MF_BYCOMMAND);
	else
		m_pMainMenu->CheckMenuItem(ID_FILE_AUTOCHECKCARD, MF_UNCHECKED|MF_BYCOMMAND);
	*/
}

#include "HMSExmContractSettingDialog.h"
void CMainFrame::OnCommandSetupCompany()
{
	CString szObject = this->m_szObject;
	this->m_szObject = _T("7");
	CHMSExmContractSettingDialog dlg(this);
	dlg.DoModal();

	this->m_szObject = szObject;
}
#include "HMSExmContractSettingDialogEX.h"
#include ".\mainfrm.h"
void CMainFrame::OnCommandVaccineCovid19()
{
	CString szObject = this->m_szObject;
	this->m_szObject = _T("7");
	CHMSExmContractSettingDialogEX dlg(this);
	dlg.DoModal();

	this->m_szObject = szObject;
}


BOOL CMainFrame::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	if (IsWindowVisible()) {
		/*
				long request = m_MF5AXCTrl.mfRequest();
				if(request > 0){
					CString szCard = m_MF5AXCTrl.get_mfAnticollisionHex();
					_debug(_T("\r\n%s"), szCard);
				}
				m_MF5AXCTrl.mfHalt();
		*/
	}

	if (pMsg->message == WM_ON_CARD_CONNECTED)
	{
		OnSmartCardConnected(m_atm->GetCardReader()->GetCardId());
	}

	if (pMsg->message == WM_ON_CARD_DISCONNECT)
	{
		OnSmartCardDisconnect();
	}

	//if(pMsg->message == WM_ON_REFRESH_DATA)
	//{
	//	m_wndRegistration.LoadData(pMsg->wParam);

	return CHMSMainFrame::PreTranslateMessage(pMsg);
}
void CMainFrame::GetAutoCheckCardIns() {

	CString szSQL, tmpStr;
	CRecord rs(&m_db);
	szSQL.Format(_T("select hr_autocheckins from  hms_config "));
	rs.ExecSQL(szSQL);
	if (rs.GetValue(_T("hr_autocheckins")) == _T("Y"))
		m_bIsAutoCheckCard = TRUE;
	else
		m_bIsAutoCheckCard = FALSE;

}

int CMainFrame::ApplyInsuranceData(CString szCardNo, JSONVALUE& jData)
{
	CRecord rs(&m_db);
	CString szSQL, szFields;
	int nRet = 0;
	szSQL.Format(_T("select * from ss_examhist_view ") \
		_T(" where cardno = '%s'"), szCardNo);
	nRet = rs.ExecSQL(szSQL);
	szFields = _T("CardNo,PatientName,BirthDate,Sex,")\
		_T("Provill,District,Village,DetailAddress,RegistrationPlace,") \
		_T("RegistrationDate,ExpiryDate,Over5Years,ApplyDate5year,Age");
	CStringToken tk_field(szFields);
	if (rs.IsEOF())
		return 0;
	for (int i = 0; i < tk_field.GetSize(); i++)
	{
		tk_field.GetAt(i, szFields);
		jData[szFields] = rs.GetValue(szFields);
	}
	return nRet;
}

/// <summary>
/// Hàm phân tích thông tin thẻ CCCD mới 
/// </summary>
/// <param name="message"></param>
/// <returns></returns>
/// 
#include <fstream>
#include <iostream>

bool writeToFile(const string& fileName, const string& data) {
	// Mở tệp với chế độ ghi (ios::out)
	std::ofstream outFile(fileName, ios::out);

	// Kiểm tra xem tệp đã được mở thành công chưa
	if (!outFile) {
		cerr << "Error opening file for writing: " << fileName << endl;
		return false;
	}

	// Ghi dữ liệu vào tệp
	outFile << data;

	// Đóng tệp sau khi ghi
	outFile.close();

	return true;
}


bool is_base64(unsigned char c);
// Hàm giải mã base64
bool base64Decode(const string& base64_data, vector<BYTE>& decoded_data) {
	const string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

	int len = base64_data.size();
	int i = 0, j = 0;
	int in_ = 0;
	unsigned char char_array_4[4], char_array_3[3];

	while (len-- && (base64_data[in_] != '=' && is_base64(base64_data[in_]))) {
		char_array_4[i++] = base64_data[in_]; in_++;
		if (i == 4) {
			for (i = 0; i < 4; i++)
				char_array_4[i] = base64_chars.find(char_array_4[i]);

			char_array_3[0] = (char_array_4[0] << 2) | (char_array_4[1] >> 4);
			char_array_3[1] = ((char_array_4[1] & 15) << 4) | (char_array_4[2] >> 2);
			char_array_3[2] = ((char_array_4[2] & 3) << 6) | char_array_4[3];

			for (i = 0; (i < 3); i++)
				decoded_data.push_back(char_array_3[i]);
			i = 0;
		}
	}

	if (i) {
		for (j = i; j < 4; j++)
			char_array_4[j] = 0;

		for (j = 0; j < 4; j++)
			char_array_4[j] = base64_chars.find(char_array_4[j]);

		char_array_3[0] = (char_array_4[0] << 2) | (char_array_4[1] >> 4);
		char_array_3[1] = ((char_array_4[1] & 15) << 4) | (char_array_4[2] >> 2);
		char_array_3[2] = ((char_array_4[2] & 3) << 6) | char_array_4[3];

		for (j = 0; (j < i - 1); j++)
			decoded_data.push_back(char_array_3[j]);
	}

	return true;
}

// Hàm kiểm tra ký tự base64 hợp lệ
bool is_base64(unsigned char c) {
	return (isalnum(c) || (c == '+') || (c == '/'));
}

// Hàm lưu dữ liệu nhị phân vào tệp tạm
bool saveToTempFile(const vector<BYTE>& data, const CString& tempFileName) {
	ofstream outFile(tempFileName, ios::binary);
	if (!outFile) {
		cerr << "Error opening temporary file!" << endl;
		return false;
	}

	outFile.write(reinterpret_cast<const char*>(data.data()), data.size());
	outFile.close();
	return true;
}


// Hàm load ảnh từ dữ liệu base64 và lưu dưới dạng JPEG sử dụng CImage
bool loadAndSaveImageFromBase64(const string& base64_data, const CString& output_file) {
	// Giải mã base64 thành dữ liệu nhị phân
	vector<BYTE> decoded_data;
	if (!base64Decode(base64_data, decoded_data)) {
		cerr << "Error decoding base64 data!" << endl;
		return false;
	}

	// Lưu dữ liệu nhị phân vào tệp tạm
	CString tempFileName = _T("temp_image.bmp");
	if (!saveToTempFile(decoded_data, tempFileName)) {
		cerr << "Error saving temporary file!" << endl;
		return false;
	}

	// Tạo đối tượng CImage
	CImage image;

	// Đọc ảnh từ tệp tạm
	HRESULT hr = image.Load(tempFileName);
	if (FAILED(hr)) {
		cerr << "Error loading image from temporary file!" << endl;
		return false;
	}

	// Lưu ảnh dưới dạng JPEG
	hr = image.Save(output_file, Gdiplus::ImageFormatJPEG);
	if (FAILED(hr)) {
		cerr << "Error saving image as JPEG!" << endl;
		return false;
	}

	// Xóa tệp tạm sau khi sử dụng
	DeleteFile(tempFileName);

	return true;
}



CString parseIDCard0(CGuiMainFrame* pMF, Document& document)
{
	// Trích xuất các giá trị từ JSON
	CDbfMap cardTbl;
	cardTbl.AddField(L"idCode", dfText, 20);
	cardTbl.AddField(L"oldIdCode", dfText, 20);
	cardTbl.AddField(L"personName", dfText, 64);
	cardTbl.AddField(L"dateOfBirth", dfText, 10);
	cardTbl.AddField(L"gender", dfText, 10);
	cardTbl.AddField(L"residencePlace", dfText, 254);
	cardTbl.AddField(L"issueDate", dfText, 10);
	cardTbl.AddField(L"race", dfText, 32);
	cardTbl.AddField(L"nationality", dfText, 128);
	cardTbl.AddField(L"ethnic", dfText, 128);
	cardTbl.AddField(L"religion", dfText, 128);
	cardTbl.AddField(L"rowdata", dfText, 2048);
	cardTbl.AddField(L"faceimage", dfText, 32767);


	CString idCard;
	const Value& data = document;


	// Accessing basic fields
	if (document.HasMember("newIdCard")) {
		cout << "newIdCard: " << document["newIdCard"].GetInt() << endl;
	}
	if (document.HasMember("idCardNo")) {
		cout << "idCardNo: " << document["idCardNo"].GetString() << endl;
		std::string idCode = document["idCardNo"].GetString();  // Corrected field to "idCardNo"
		idCard = fml::Utf8ToWideString(idCode).c_str();
		cardTbl.SetValue(L"idCode", idCard);  // Corrected: use "idCode"
	}
	if (document.HasMember("oldIdCardNumber")) {
		cout << "oldIdCardNumber: " << document["oldIdCardNumber"].GetString() << endl;
		std::string idCode = document["oldIdCardNumber"].GetString();  // Corrected field to "idCardNo"
		idCard = fml::Utf8ToWideString(idCode).c_str();
		cardTbl.SetValue(L"oldIdCode", idCard);  // Corrected: use "idCode"
	}

	if (document.HasMember("name")) {
		cout << "name: " << document["name"].GetString() << endl;
		std::string str = document["name"].GetString();  // Corrected field to "name"
		cardTbl.SetValue(L"personName", fml::Utf8ToWideString(str).c_str());  // Corrected: use "name" instead of "personName"
	}
	if (document.HasMember("gender")) {
		cout << "gender: " << document["gender"].GetString() << endl;
		std::string str = document["gender"].GetString();  // Corrected field to "gender"
		cardTbl.SetValue(L"gender", fml::Utf8ToWideString(str).c_str());
	}
	if (document.HasMember("dateOfBirth")) {
		cout << "dateOfBirth: " << document["dateOfBirth"].GetString() << endl;
		std::string dateOfBirth = document["dateOfBirth"].GetString();  // Corrected field to "dateOfBirth"
		//dateOfBirth = fml::ReplaceAll(dateOfBirth, "/", "");
		cardTbl.SetValue(L"dateOfBirth", fml::Utf8ToWideString(dateOfBirth).c_str());
	}
	if (document.HasMember("dateOfIssuance")) {
		cout << "dateOfIssuance: " << document["dateOfIssuance"].GetString() << endl;
		std::string str = document["dateOfIssuance"].GetString();  // Corrected field to "dateOfIssuance"
		//str = fml::ReplaceAll(str, "/", "");
		cardTbl.SetValue(L"issueDate", fml::Utf8ToWideString(str).c_str());
	}
	if (document.HasMember("dateOfExpiry")) {
		if (document["dateOfExpiry"].IsNull()) {
			cout << "dateOfExpiry: null" << endl;
		}
		else {
			cout << "dateOfExpiry: " << document["dateOfExpiry"].GetString() << endl;
		}
	}
	if (document.HasMember("residenceAddress")) {
		cout << "residenceAddress: " << document["residenceAddress"].GetString() << endl;
		std::string str = document["residenceAddress"].GetString();  // Corrected field to "residenceAddress"
		cardTbl.SetValue(L"residencePlace", fml::Utf8ToWideString(str).c_str());  // Corrected: use "residenceAddress"
	}

	// Access nested "dg13" object
	if (document.HasMember("dg13") && document["dg13"].IsObject()) {
		const Value& dg13 = document["dg13"];

		cout << "\ndg13:\n";
		if (dg13.HasMember("idCardNo")) {
			cout << "idCardNo: " << dg13["idCardNo"].GetString() << endl;
		}
		if (dg13.HasMember("name")) {
			cout << "name: " << dg13["name"].GetString() << endl;
		}
		if (dg13.HasMember("nationality")) {
			cout << "nationality: " << dg13["nationality"].GetString() << endl;
			std::string str = dg13["nationality"].GetString();  
			cardTbl.SetValue(L"nationality", fml::Utf8ToWideString(str).c_str());
		}
		if (dg13.HasMember("ethnic")) {
			cout << "ethnic: " << dg13["ethnic"].GetString() << endl;
			std::string str = dg13["ethnic"].GetString();
			cardTbl.SetValue(L"ethnic", fml::Utf8ToWideString(str).c_str());
		}
		if (dg13.HasMember("religion")) {
			cout << "religion: " << dg13["religion"].GetString() << endl;
			std::string str = dg13["religion"].GetString();
			cardTbl.SetValue(L"religion", fml::Utf8ToWideString(str).c_str());
		}
	}


	// Access the face image (base64 string)
	if (data.HasMember("faceImage")) {
		try
		{
			const char * faceData = data["faceImage"].GetString();
			if (faceData != NULL)
			{
				std::string faceData(faceData);
				cardTbl.SetValue(L"faceImage", _T(""));
				// Gọi hàm để load ảnh từ base64 và lưu dưới dạng JPEG
				if (faceData.length() > 0)
				{
					CString output_file(".\\data\\cccd.jpg");
					if (loadAndSaveImageFromBase64(faceData, output_file)) {
						cout << "Image successfully saved as " << (LPCTSTR)output_file << endl;
						m_imageView.LoadAndShow(output_file);

					}
					else {
						cout << "Failed to save image." << endl;
					}
				}
			}
		}
		catch (exception& ex)
		{
			cout << ex.what() << endl;
		}


	}

	if (document.HasMember("rowData")) {
		std::string str = document["rowData"].GetString();
		cardTbl.SetValue(L"rowData", fml::Utf8ToWideString(str).c_str());
		idCard.Format(L"%s", fml::Utf8ToWideString(str).c_str());
	}



	CString szSQL;
	szSQL.Format(_T("PERSON_CARD_UPDATE(%s) "), cardTbl.FormatSQL());

	pMF->ExecDML(szSQL);

	
	return idCard;

}


BOOL CMainFrame::OnCommand(WPARAM wParam, LPARAM lParam)
{

	// TODO: Add your specialized code here and/or call the base class
    UINT nCmd, nEvent;
    nCmd = LOWORD(wParam);
    nEvent = HIWORD(wParam);
    if ((nCmd == PM_CARD && nEvent == BN_CLICKED) || wParam == PM_CARD)
	{
		Document document;
		int id = -1;
		std::string data;
		try {
			_tprintf(L"%s", (LPCTSTR)lParam);
			data = fml::WideStringToUtf8(std::wstring((LPCTSTR)lParam));

			document.Parse(data.c_str());

			
			if (document.HasMember("id"))
			{
				const Value& val = document["id"];
				id = val.GetInt();
			}
			else if (document.HasMember("idCardNo"))
			{
				id = 0;
			}
		}
		catch (exception& ex)
		{
			cout << ex.what() << endl;
			return FALSE;
		}

		cout <<"id:" << id << endl;
		
		CString idCard;

		if (id == 0)
		{

			idCard = parseIDCard0(this, document);
			if (!idCard.IsEmpty())
			{
				m_wndRegistration.CheckCCCD(idCard);
				return TRUE;
			}
		}
		if (id == 1)
		{
			if (document.HasMember("data")) {
				data = document["data"].GetString();
				m_wndRegistration.CheckQrCode(fml::Utf8ToWideString(data).c_str());
			}
			return TRUE;
			
		}
		

		if(id == 2)
		{
			// Trích xuất các giá trị từ JSON
			CDbfMap cardTbl;
			cardTbl.AddField(L"idCode", dfText, 20);
			cardTbl.AddField(L"oldIdCode", dfText, 20);
			cardTbl.AddField(L"personName", dfText, 64);
			cardTbl.AddField(L"dateOfBirth", dfText, 10);
			cardTbl.AddField(L"gender", dfText, 10);
			cardTbl.AddField(L"residencePlace", dfText, 254);
			cardTbl.AddField(L"issueDate", dfText, 10);
			cardTbl.AddField(L"race", dfText, 32);

			

			if (document.HasMember("data")) {
				const Value& data = document["data"];
				std::stringstream ss;
	
				if (data.HasMember("idCode") && data["idCode"].IsString()) {
					std::string idCode = data["idCode"].GetString();
					ss << idCode << "|";
					idCard = fml::Utf8ToWideString(idCode).c_str();
					cardTbl.SetValue(L"idCode", idCard);
				}
				if (data.HasMember("oldIdCode") && data["oldIdCode"].IsString()) {
					std::string oldIdCode = data["oldIdCode"].GetString();
					ss << oldIdCode << "|";
					cardTbl.SetValue(L"oldIdCode", fml::Utf8ToWideString(oldIdCode).c_str());
				}
				if (data.HasMember("personName") && data["personName"].IsString()) {
					std::string str = data["personName"].GetString();
					ss << str  << "|";

					cardTbl.SetValue(L"personName", fml::Utf8ToWideString(str).c_str());
				}

				if (data.HasMember("dateOfBirth") && data["dateOfBirth"].IsString()) {
					std::string dateOfBirth = data["dateOfBirth"].GetString();
					dateOfBirth = fml::ReplaceAll(dateOfBirth, "/", "");
					ss << dateOfBirth << "|";

					cardTbl.SetValue(L"dateOfBirth", fml::Utf8ToWideString(dateOfBirth).c_str());

				}
				if (data.HasMember("gender") && data["gender"].IsString()) {
					std::string str = data["gender"].GetString();
					ss << str << "|";
					cardTbl.SetValue(L"gender", fml::Utf8ToWideString(str).c_str());
				}
				if (data.HasMember("residencePlace") && data["residencePlace"].IsString()) {
					std::string str = data["residencePlace"].GetString();
					ss << str << "|";
					cardTbl.SetValue(L"residencePlace", fml::Utf8ToWideString(str).c_str());
				}
				if (data.HasMember("issueDate") && data["issueDate"].IsString()) {
					std::string str = data["issueDate"].GetString();
					str = fml::ReplaceAll(str, "/", "");
					ss << str << "|";
					cardTbl.SetValue(L"issueDate", fml::Utf8ToWideString(str).c_str());
				}
				if (data.HasMember("race") && data["race"].IsString()) {
					std::string str = data["race"].GetString();
					ss << str;
					cardTbl.SetValue(L"race", fml::Utf8ToWideString(str).c_str());
				}

				SetActiveWindow();

				CString szSQL;
				szSQL.Format(_T("person_card_update(%s) "), cardTbl.FormatSQL());
				ExecDML(szSQL);
				idCard = fml::Utf8ToWideString(ss.str()).c_str();
				m_wndRegistration.CheckCCCD(idCard);
			}
            return TRUE;



		}	
		
	}

	//Mau bieu hanh chinh
	if (nCmd == ID_COMMAND_TEMPLATE || wParam == ID_COMMAND_TEMPLATE)
	{
		m_wndRegistration.OnCreateAdministrationForm();
		return TRUE;
	}
    if ((nCmd == ID_COMMAND_FILES || wParam == ID_COMMAND_FILES) && m_nDocumentNo > 0)
	{

		CString szLink;
		szLink.Format(L"apps:docscan&docno=%ld&readonly=true", m_nDocumentNo);
		LaunchWeb(szLink);
		return TRUE;
	}
    if (nCmd == ID_COMMAND_IMAGE || wParam == ID_COMMAND_IMAGE)
	{
		
		return TRUE;
	}
    if ((nCmd == CMD_SIGNATURE || wParam == CMD_SIGNATURE) && m_nDocumentNo > 0)
    {

        m_wndRegistration.OnViewEMR();
        return TRUE;
    }
	return CHMSMainFrame::OnCommand(wParam, lParam);
}
void CMainFrame::OnMenu32817()
{
	// TODO: Add your command handler code here
	UINT state = m_pMainMenu->GetMenuState(ID_Menu32817, MF_BYCOMMAND);
	if (state & MF_CHECKED)
	{
		m_pMainMenu->CheckMenuItem(ID_Menu32817, MF_UNCHECKED | MF_BYCOMMAND);
		AfxGetApp()->WriteProfileString(_T("Settings"), _T("CheckQROnline"), _T("N"));
	}
	else
	{
		m_pMainMenu->CheckMenuItem(ID_Menu32817, MF_CHECKED | MF_BYCOMMAND);
		AfxGetApp()->WriteProfileString(_T("Settings"), _T("CheckQROnline"), _T("Y"));
	}
	
}
void CMainFrame::OnCommandUseCCCDMachine()
{
	UpdateData(true);
	
	m_bUseCCCDMachine = !m_bUseCCCDMachine;
	if(m_pMainMenu == NULL)
		return;

    if (m_bUseCCCDMachine) 
	{
		m_pMainMenu->CheckMenuItem(ID_FILE_USECCCDMACHINE, MF_CHECKED | MF_BYCOMMAND);
    }
	else 
	{
        m_pMainMenu->CheckMenuItem(ID_FILE_USECCCDMACHINE, MF_UNCHECKED | MF_BYCOMMAND);
    }

	AfxGetApp()->WriteProfileInt(_T("Settings"), _T("USECCCDMACHINE"), (int) m_bUseCCCDMachine);
	
}

void CMainFrame::OnChangeDepartment()
{
	CSYSDepartmentChangeDialog dlg(this);
	dlg.m_szDepartmentKey = m_UserInfo.su_deptid;
	dlg.m_szDeptType = _T("E");
	if(dlg.DoModal()==IDOK){
		m_szDept = dlg.m_szDepartmentNewKey;
		m_szUseCurrentDept = _T("Y");
		AddProp(L"sign_deptid", m_szDept);

		CString szFloor, szText;
		TranslateString(m_szModuleName, szText);		
		szText.AppendFormat(_T(" [%s]"), GetDepartmentName(m_szDept));
		SetWindowText(szText);

		//m_wndPatientDocument.SetMode(VM_NONE);
	}
}



void CMainFrame::OnSize(UINT nType, int cx, int cy)
{
	CHMSMainFrame::OnSize(nType, cx, cy);
	if (m_imageView.GetSafeHwnd() && m_imageView.IsWindowVisible())
	{
		CRect rect;
		GetClientRect(&rect);
		rect.top += 35;
		rect.right -= 10;
		m_imageView.m_rect = rect;
		SetWindowPos(NULL, rect.left, rect.top, rect.Width(), rect.Height(), SWP_NOZORDER | SWP_NOSIZE);
	}
	
}

void CMainFrame::OnTimer(UINT_PTR nIDEvent)
{
    // TODO: Add your message handler code here and/or call default
    if (nIDEvent == IDT_CHECK_CARD_READER)
    {
        if (!IsExistingProcess(L"sio_cardreader.exe"))
        {
            StartServiceEx(L"cef", L"sio_cardreader.exe");
        }
    }
    CHMSMainFrame::OnTimer(nIDEvent);
}

void CMainFrame::OnTabSelectChange(int nOld, int nNew) { 
	cout << nNew << endl; 
	switch (nNew)
    {
    case 2:
		m_wndOnlineListView.OnQMSPatientListLoadData();
        break;
    case 3:
        break;
    }
}