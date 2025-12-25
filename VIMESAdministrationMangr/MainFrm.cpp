// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "MFCCaptionBarEx.h"
#include "MFCWidget.h"

#include "MainFrm.h"
#include "Excel.h"
#include "ReportDocument.h"
#include "Resource.h"
#include "HMSTestProfileDialog.h"
#include "HMSMapItemDialog.h"
#include "HMSCancelRecord.h"
#include "HMSTransferInwardPatient.h"
#include "HMSConfigSetupDlg.h"
#include "StorageDefaultSetupDlg.h"
#include "HMSFeeListApproval.h"
#include "HMSHtmlFormSetupDialog.h"
#include "SysSetUpAdmissionForm.h"
#include "INSFeeNameEditor.h"
#include "SysFeeWarningSetup.h"
#include "HMSThietLap_Thongtin_Miengiam.h"
#include "HMSThietLap_Miengiam_Tienan_Haucan.h"
#include "./MachineSetup/MachineList.h"
#include "HMSSettingHolidayDialog.h"
#include "SignatureFormListDlg.h"
#include "SignatureSetupDialog.h"
#include "SysUserRolesSettingDialog.h"
#include "HMSPerforRoomSetupDlg.h"
#include "HMSPerforRoomOrderSetupDlg.h"


#ifndef VIMES_OWNER
	#define VIMES_OWNER
#endif
#include "HMSExportFeeList.h"
#include "StringToken.h"	



#pragma comment(lib, "../lib/HMSCore.lib")
#pragma comment(lib, "../lib/HMSExt.lib")
//#pragma comment(lib, "../lib/HMSReportForms.lib")


UINT __cdecl LoadDataThreadFnc(LPVOID pParam)
{
	CMainFrame* pMF = (CMainFrame*) pParam;
	return pMF->PreInitData();
}

// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CHMSMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CHMSMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_EXPORT, OnFileExport)
	ON_COMMAND(ID_FILE_STOCKPERMISSION, OnFileStockpermission)
	ON_COMMAND(ID_FILE_TESTPROFILESETUP, OnFileTestprofilesetup)
	ON_COMMAND(ID_FILE_MAPITEM, OnFileMapItem)
	ON_COMMAND(ID_FILE_EXPORTFEELIST, OnFileExportfeelist)
	ON_COMMAND(ID_FILE_SETPRIVORITYPATIENT, OnFileSetprivoritypatient)
	ON_COMMAND(ID_Menu32800, OnMenuTransferInwardPatient)
	ON_COMMAND(ID_Menu32801, OnMenuCancelRecord)
	ON_COMMAND(ID_FILE_CONFIGSETUP, OnFileConfigsetup)
	ON_COMMAND(ID_Menu32803, OnMenu32803)
	ON_COMMAND(ID_STORAGEDEFAULT_SETUP, OnStorageDefaultSetup)
	ON_COMMAND(ID_FILE_PARACLINICALICDSETTING, OnParaClinicalICDSetting)
	ON_COMMAND(ID_FILE_SETTINGAUTOCHECKCARD, OnSettingAutoCheckCard)
	ON_COMMAND(ID_FILE_MERGEIVFDOCNO, OnMergeIVFDocno)
	ON_COMMAND(ID_Menu32812, OnFeeListApproval)
	ON_COMMAND(ID_SETUP_HTMLFORMSETUP, OnSetupHtmlformsetup)
	ON_COMMAND(ID_SETUP_ADMISSIONFORMSETUP, OnSetupAdmissionformsetup)
	ON_COMMAND(ID_SETUP_INSURANCENAMEEDITOR, OnSetupInsurancenameeditor)
	ON_COMMAND(ID_SETUP_FEEWARNINGSETUP, OnSetupFeewarningsetup)
	ON_COMMAND(ID_TASK_DANHMUCMIENGIAM32823, OnSetupDanhmucmiengiam)
	ON_COMMAND(ID_TASK_THIETLAPMIENTIENANHAUCAN, OnSetupMiengiamTienanHaucan)
	ON_COMMAND(ID_SETUP_MACHINESETUP, OnSetupMachine)
	ON_COMMAND(ID_SETUP_HOLIDAY, OnSetupHoliday)
	ON_COMMAND(ID_SETUP_SIGNATUREFORMS, &CMainFrame::OnSetupSignatureforms)
	ON_COMMAND(ID_SETUP_SIGNATURESETUP, &CMainFrame::OnSetupSignatureSetup)
	ON_COMMAND(ID_SETUP_SIGNATUREIMPORT, &CMainFrame::OnSetupSignatureImport)
	ON_COMMAND(ID_SETUP_USERROLES, &CMainFrame::OnSetupUserRoles)
	ON_COMMAND(ID_SETUP_PERFROME, OnSetupPerfrome)
	ON_COMMAND(ID_SETUP_SETUPPERFROME_ORDER, OnSetupPerfromeOrderRoom)
END_MESSAGE_MAP()


// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	//SetEnableLogin(false);
	SetLayoutStyle(LAYOUT_DOCPANE);
	m_szSize = CSize(1024, 720);
	m_szVersion = _T("9.8");
	//version A11
	//m_szVersion = _T("9.5");
	m_szModuleName = _T("ADMINISTRATION MANAGEMENT MODULE");
	m_szModuleID = _T("SYS");	
}

CMainFrame::~CMainFrame()
{
	//UnregisterHotKey(GetSafeHwnd(),100);
	//UnregisterHotKey(GetSafeHwnd(),200);
    //m_vtProductItem.clear();
    //m_vtFee.clear();
}

//#include "HTTPClient.h"

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CHMSMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	

	m_pAppBar->m_szItemSize = CSize(120, 40);
	m_pAppBar->Add(new CWidgetItem(ID_SETUP_SIGNATUREFORMS, icons::chevron_left, L"Mẫu biểu", L"Thiết lập mẫu biểu ký số"));
	m_pAppBar->Add(new CWidgetItem(ID_SETUP_SIGNATURESETUP, icons::signal_cellular_4_bar, L"Ký số", L"Thiết lập chứng thư ký số"));	
	m_pAppBar->Add(new CWidgetItem(ID_SETUP_USERROLES, icons::signal_cellular_4_bar, L"UserRole", L"Thiết lập quyền người dùng"));


	
	CString tmpStr;
	TranslateString(_T("PHÂN HỆ THIẾT LẬP HỆ THỐNG"), tmpStr);
	SetWindowText(tmpStr);

	CString szSQL;
	szSQL.Format(_T("BEGIN") \
				_T("	DBMS_SESSION.SET_IDENTIFIER('%s');") \
				_T("	DBMS_APPLICATION_INFO.SET_MODULE ('%s', '');") \
				_T(" END;"), GetCurrentUser(), GetModuleID());
	ExecSQL(szSQL);
	CDocPane *pPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo *obj = pPane->AddPane(_T("Setup"));
	m_wndUser.SetModules(_T("'HMS', 'PMS', 'LIS', 'LIMS','RIS', 'PACS','SYS'"));

	if (obj)
	{
		obj->AddCaption(_T("List")); 
		//1. Nơi làm việc
		if(CheckPermission(_T("01.01")) || m_szUser==_T("admin"))
		{
			m_wndCompany.Create(pPane);
			obj->Add(_T("Company"), _T(""), &m_wndCompany);
		}
		//2. Khoa

		if(CheckPermission(_T("01.02")) || m_szUser==_T("admin"))
		{
			m_wndDepartment.Create(pPane);
			obj->Add(_T("Department"), _T(""), &m_wndDepartment);		
			
		}
		//3. Người sử dụng
		if(CheckPermission(_T("01.03")) || m_szUser==_T("admin"))
		{
			m_wndUser.Create(pPane);
			obj->Add(_T("User"), _T(""), &m_wndUser);	
		}
		//4. Danh sách bệnh viện
		if(CheckPermission(_T("01.04")) || m_szUser==_T("admin"))
		{		
			m_wndHospital.Create(pPane);
			obj->Add(_T("Hospital List Setup"), _T(""), &m_wndHospital);
			
		}
		//5. Thiết lập phí

		if(CheckPermission(_T("01.05")) || m_szUser==_T("admin"))
		{
			m_wndFeeTabs.Create(pPane);
			obj->Add(_T("Fee Setup"), _T(""), &m_wndFeeTabs);
		}
		//6. Thiết lập ICD10

		if(CheckPermission(_T("01.06")) || m_szUser==_T("admin"))
		{			
			m_wndICD10.Create(pPane);
			obj->Add(_T("ICD10 Setup"), _T(""), &m_wndICD10);

		}
		//7. Thiết lập địa chỉ

		if(CheckPermission(_T("01.07")) || m_szUser==_T("admin"))
		{			
			m_wndAddress.Create(pPane);
			obj->Add(_T("Address Setup"), _T(""),  &m_wndAddress);
		}

		//8. Thẻ bảo hiểm
        
		if(CheckPermission(_T("01.08")) || m_szUser==_T("admin"))
		{			
			m_wndInsurance.Create(pPane);
			obj->Add(_T("Insurance Code Setup"), _T(""), &m_wndInsurance);
		}
		//9. Thiết lập tác quyền
		if(CheckPermission(_T("01.09")) || m_szUser==_T("admin"))
		{			
			m_wndPermission.Create(pPane);
			obj->Add(_T("Permision Setup"), _T(""), &m_wndPermission);
		}

		//10. Thiết lập lựa chọn
		if(CheckPermission(_T("01.10")) || m_szUser==_T("admin"))
		{			
			m_wndSetupList.Create(pPane);
			obj->Add(_T("Selection Setup"), _T(""), &m_wndSetupList);
		}
		//11. Thiết lập thông báo

		if(CheckPermission(_T("01.11")) || m_szUser==_T("admin"))
		{			
			m_wndMessage.Create(pPane);
			obj->Add(_T("Message Setup"), _T(""), &m_wndMessage);
		}
		//12. Thiết lập từ điển

		if(CheckPermission(_T("01.12")) || m_szUser==_T("admin"))
		{			
			m_wndDictionary.Create(pPane);
			obj->Add(_T("Dictionary Setup"), _T(""), &m_wndDictionary);
		}
		//13. Thiết lập cổng giám định
		if(CheckPermission(_T("01.13")) || m_szUser==_T("admin"))
		{			
			m_wndCongGiamDinh.Create(pPane);
			obj->Add(_T("Check Gate"), _T(""), &m_wndCongGiamDinh);
		}

		if(CheckPermission(_T("01.09")) || m_szUser==_T("admin"))
		{			
			m_wndDanhMucNhiemKhuanBenhVien.Create(pPane);
			obj->Add(_T("DM nhiễm khuẩn bệnh viện"), _T(""), &m_wndDanhMucNhiemKhuanBenhVien);
		}

		//14. Thiết lập xếp số hàng đợi (đã đưa vào HMSCore -> gọi ra ở Menu từng module
		/*obj->AddCaption(_T("Thiết lập hàng đợi"));

		if (CheckPermission(_T("01.09")) || m_szUser == _T("admin"))
		{
			m_wndPerforRoomSetup.Create(pPane);
			obj->Add(_T("Thiết lập phòng thực hiện"), _T(""), &m_wndPerforRoomSetup);
		}

		if (CheckPermission(_T("01.10")) || m_szUser == _T("admin"))
		{
			m_wndPerforRoomOrderSetup.Create(pPane);
			obj->Add(_T("Thiết lập phòng chỉ định"), _T(""), &m_wndPerforRoomOrderSetup);
		}
		*/
		
		//14. Thiết lập cơ cấu giá
		obj->AddCaption(_T("Thiết lập cơ cấu giá"));
		if(1==1)
		{
			CGuiTabCtrl *pTab = new CGuiTabCtrl();
			pTab->Create(pPane);
			m_wndFeePriceSchemaView.Create(pTab);
			pTab->Add(_T("Fee Setup"), &m_wndFeePriceSchemaView);

			m_wndPriceSchemaFullView.Create(pTab);
			pTab->Add(_T("Price Schema"), &m_wndPriceSchemaFullView);

			obj->Add(_T("Price Schema"), _T(""), pTab);
			pTab->SetActiveTab(0);
		}
	}
	

#ifdef UNICODE
	

//#ifdef VIMES_OWNER
//	if(m_szUser == _T("admin"))
//	{
//	if (obj)
//		{
//			m_wndPermission.Create(pPane);
//			m_wndSetupList.Create(pPane);
//			m_wndMessage.Create(pPane);
//			m_wndDictionary.Create(pPane);
//			m_wndCongGiamDinh.Create(pPane);
//			
//			obj->Add(_T("Permision Setup"), _T(""), &m_wndPermission);
//			obj->Add(_T("Selection Setup"), _T(""), &m_wndSetupList);
//			obj->Add(_T("Message Setup"), _T(""), &m_wndMessage);
//			obj->Add(_T("Dictionary Setup"), _T(""), &m_wndDictionary);
//			obj->Add(_T("Check Gate"), _T(""), &m_wndCongGiamDinh);
//		}
//	}
//#endif

#endif
	
	TCHAR  infoBuf[128];
	DWORD  bufCharCount = 128;

  // Get and display the name of the computer. 
	GetComputerName( infoBuf, &bufCharCount );
	m_szLocalHostName.Format(_T("%s [%s]"), infoBuf, GetLocalIP());
	
	CString szStatus, szStatusLabel, szDate;
	szDate = GetSysDate();
	TranslateString(_T("UserID: %s - Working Date: %s"), szStatusLabel);
	szStatus.Format(szStatusLabel, GetCurrentUser(), CDate::Convert(szDate, yyyymmdd, ddmmyyyy));
	szStatus.AppendFormat(_T(" - Host:%s"), GetHost(), GetDatabase());
	SetStatusText(szStatus, 1);	
	
	SetActivePane(0);
	pPane->SetSingleMode(true);
	pPane->RecalcLayout();	
	AfxBeginThread(LoadDataThreadFnc, this);
	return 0;
} 

long CMainFrame::PreInitData()
{
	if (m_vtProductItem.size() > 0)
	{
		return 0;
	}
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	//if (GetModuleID() == _T("PM"))
	{
		szWhere.AppendFormat(_T(" AND ((product_hasexp = 'Y' and product_expdate >= trunc(sysdate)) OR product_hasexp = 'N')"));
	}
	
	szSQL.Format(
	_T(" SELECT max(product_item_id) as product_item_id,") \
	_T("   product_code,") \
	_T("   product_name,") \
	_T("   product_classname,") \
	_T("   product_uomname ,") \
	_T("   product_countryid,") \
	_T("   product_countryname,") \
	_T("   product_isprecision,  ") \
	_T("   SUM(msl_qtyonhand-msl_qtyordered-msl_qtypreordered) AS product_qtyonhand,") \
	_T("   product_classid,") \
	_T("   product_vatprice, product_uomid ") \
	_T(" FROM m_storageline ") \
	_T(" LEFT JOIN m_productitem_view_ex ") \
	_T(" ON(msl_product_item_id           =product_item_id)") \
	_T(" WHERE msl_isactive='Y' %s ") \
	_T(" AND (msl_qtyonhand-msl_qtyordered-msl_qtypreordered) > 0") \
	_T(" GROUP BY product_id,") \
	_T("   product_code,") \
	_T("   product_name,") \
	_T("   product_classname,") \
	_T("   product_uomname ,") \
	_T("   product_countryid,") \
	_T("   product_countryname, product_isprecision,product_classid,") \
	_T("   product_vatprice,product_uomid ") \
	_T(" ORDER BY product_name,") \
	_T("   product_uomname ")
	, szWhere);	
	_tprintf(_T("\r\nszSQL: %s"), szSQL);
_fmsg(_T("%s"), szSQL);
	
	long ret  = rs.ExecSQL(szSQL);
	m_vtProductItem.resize(rs.GetRecordCount());
	CString szName, szClassName;
	while(!rs.IsEOF()){
		rs.GetValue(_T("product_classname"), szClassName);
		rs.GetValue(_T("product_name"), szName);
		SProductItem i;
		i.product_classname = rs.GetValue(_T("product_classname"));
		i.product_code = rs.GetValue(_T("product_code"));
		i.product_countryname = rs.GetValue(_T("product_countryname"));
		i.product_item_id = str2long(rs.GetValue(_T("product_item_id")));
		i.product_name = rs.GetValue(_T("product_name"));
		i.product_qtyonhand = str2float(rs.GetValue(_T("product_qtyonhand")));
		i.product_uomname = rs.GetValue(_T("product_uomname"));
		i.product_vatprice = str2float(rs.GetValue(_T("product_vatprice")));
		i.product_uomid = rs.GetValue(_T("product_uomid"));
		m_vtProductItem.push_back(i);
		rs.MoveNext();
	}
	if (m_vtFee.size() > 0)
	{
		return ret;
	}
	szWhere.Empty();
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name, ") \
				_T("	hfl_price_schema_id as price_schema_id") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_price_schema on (hfl_price_schema_id = hps_price_schema_id)") \
				_T(" WHERE hfl_active = 'Y' %s") \
				_T(" ORDER BY hfl_feeid, hfl_name"), szWhere);
	rs.ExecSQL(szSQL);
	m_vtFee.resize(rs.GetRecordCount());
	while (!rs.IsEOF())
	{
		SFee f;
		f.fee_id = rs.GetValue(_T("id"));
		f.fee_name = rs.GetValue(_T("name"));
		f.price_schema_id = str2long(rs.GetValue(_T("price_schema_id")));
		m_vtFee.push_back(f);
		rs.MoveNext();
	}
	return ret;
}	

void CMainFrame::OnInitializes()
{
	CHMSMainFrame::OnInitializes();


}	


#include "HMSInsuranceCodeDialog.h"

void CMainFrame::OnExportFeelistExcel()
{
	CRecord rs(&m_db);	
	CString tmpStr, szSQL;
	CString szWhere,szInpatientCost;

	BeginWaitCursor();

	szSQL.Format(_T(" SELECT hfg_name as hfl_groupid,hfl_feeid, hfl_idx, hfl_typeid, hfl_itype, hfl_name, hfl_name2, hfl_unit, hfl_deptid,") \
				_T("        hfl_servprice, hfl_reqprice, hfl_insprice, hfl_polprice, hfl_retprice,") \
				_T("        hfl_inspaid, hfl_polpaid, hfl_diffpaid, hfl_hitech, hfl_active, hfl_plasticsurgery, hfl_hitechmachine") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_fee_group ON(hfg_id=hfl_groupid) ") \
				_T(" WHERE hfl_servprice > 0") \
				_T(" ORDER BY hfg_index, hfl_groupid, hfl_feeid"));
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"), MB_OK);
		return ;
	}

	CExcel xls;	
	xls.CreateSheet(1);
	xls.SetWorksheet(0);
	xls.SetColumnWidth(0, 5);
	xls.SetColumnWidth(1, 9);
	xls.SetColumnWidth(2, 37);
	xls.SetColumnWidth(3, 6);
	xls.SetColumnWidth(4, 12);
	xls.SetColumnWidth(5, 12);
	xls.SetColumnWidth(6, 13);
	xls.SetColumnWidth(7, 14);
	xls.SetColumnWidth(8, 12);
	xls.SetColumnWidth(9, 13);
	xls.SetColumnWidth(10, 13);
	xls.SetColumnWidth(11, 14);
	xls.SetColumnWidth(12, 14);
	xls.SetColumnWidth(13, 8);
	xls.SetColumnWidth(14, 8);
	xls.SetColumnWidth(15, 8);
	xls.SetColumnWidth(16, 8);
	xls.SetColumnWidth(17, 8);
	//xls.SetCellMergedColumns(0,3,12);
	xls.SetCellText(0, 3, _T("\x44\x41NH M\x1EE4\x43 PH\xCD \x42\x1EC6NH VI\x1EC6N"),FMT_TEXT,true,18,0);

	
	int nRow = 5;
	xls.SetCellText(0, nRow, _T("STT"), FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("ID"),tmpStr);
	xls.SetCellText(1, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Desc"),tmpStr);
	xls.SetCellText(2, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Unit"), tmpStr);
	xls.SetCellText(3, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Dept"), tmpStr);
	xls.SetCellText(4, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Service Price"), tmpStr);
	xls.SetCellText(5, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Insurance Price"), tmpStr);
	xls.SetCellText(6, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Policy Price"), tmpStr);
	xls.SetCellText(7, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Request Price"), tmpStr);	
	xls.SetCellText(8, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Return Dept"), tmpStr);	
	xls.SetCellText(9, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Insurance Paid"), tmpStr);
	xls.SetCellText(10, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Policy Paid"), tmpStr);
	xls.SetCellText(11, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Diff Payment"), tmpStr);
	xls.SetCellText(12, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Hitech"), tmpStr);
	xls.SetCellText(13, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Name 2"), tmpStr);
	xls.SetCellText(14, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Hitech Machine"), tmpStr);
	xls.SetCellText(15, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Plastic Surgery"), tmpStr);
	xls.SetCellText(16, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	TranslateString(_T("Active"), tmpStr);
	xls.SetCellText(17, nRow, tmpStr, FMT_TEXT | FMT_CENTER, true);

	int nIndex = 1;
	CString szOldLine, szNewLine, szOldGroup, szNewGroup, szLineName;

	
	double cost = 0;	
	
	while(!rs.IsEOF())
	{		
		rs.GetValue(_T("hfl_groupid"), szNewLine);
		if(szNewLine != szOldLine && !szNewLine.IsEmpty())
		{			
			nRow++;
			xls.SetCellMergedColumns(0, nRow, 14);
			tmpStr.Format(_T("%s"),  szNewLine);			
			xls.SetCellText(0, nRow , tmpStr, FMT_TEXT,true,12,0);
			szOldLine = szNewLine;
			nIndex=1;
		}
		
		nRow++;
		tmpStr.Format(_T("%d"), nIndex++);
		xls.SetCellText(0, nRow, tmpStr, FMT_INTEGER);

		rs.GetValue(_T("hfl_feeid"), tmpStr);
		xls.SetCellText(1, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_name"), tmpStr);
		xls.SetCellText(2, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_unit"), tmpStr);
		xls.SetCellText(3, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_deptid"), tmpStr);
		xls.SetCellText(4, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_servprice"), cost);
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(5, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("hfl_insprice"), cost);		
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(6, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("hfl_polprice"), cost);		
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(7, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("hfl_reqprice"), cost);
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(8, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("hfl_retprice"), cost);
		tmpStr.Format(_T("%.2f"), cost);
		xls.SetCellText(9, nRow, tmpStr, FMT_CURRENCY1);

		rs.GetValue(_T("hfl_inspaid"), tmpStr);		
		xls.SetCellText(10, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_polpaid"), tmpStr);	
		xls.SetCellText(11, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_diffpaid"), tmpStr);			
		xls.SetCellText(12, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_hitech"), tmpStr);		
		xls.SetCellText(13, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_name2"), tmpStr);		
		xls.SetCellText(14, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_hitechmachine"), tmpStr);		
		xls.SetCellText(15, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_plasticsurgery"), tmpStr);		
		xls.SetCellText(16, nRow, tmpStr, FMT_TEXT);

		rs.GetValue(_T("hfl_active"), tmpStr);		
		xls.SetCellText(17, nRow, tmpStr, FMT_TEXT);

		rs.MoveNext();
	}

	EndWaitCursor();
	xls.Save(_T("Exports\\Danhmucphibenhvien.xls"));

}

int CMainFrame::OnPaneSelChange(int nOldItem, int nNewItem){
	m_wndCompany.ShowWindow(SW_HIDE);
	m_wndDepartment.ShowWindow(SW_HIDE);
	m_wndUser.ShowWindow(SW_HIDE);
	m_wndPermission.ShowWindow(SW_HIDE);
	m_wndHospital.ShowWindow(SW_HIDE);
	m_wndFeeTabs.ShowWindow(SW_HIDE);
	m_wndICD10.ShowWindow(SW_HIDE);
	m_wndAddress.ShowWindow(SW_HIDE);
	m_wndInsurance.ShowWindow(SW_HIDE);
#ifdef VIMES_OWNER
	m_wndSetupList.ShowWindow(SW_HIDE);
	m_wndMessage.ShowWindow(SW_HIDE);
	m_wndDictionary.ShowWindow(SW_HIDE);
#endif


	switch(nNewItem){
	case 0:
		/*load du lieu*/
		m_wndCompany.Refresh();
		m_wndCompany.m_wndUpdate.SetFocus();
		break;
	case 1:
		m_wndDepartment.Refresh();
		m_wndDepartment.m_wndAdd.SetFocus();
		break;
	case 2:
		m_wndUser.Refresh();
		m_wndUser.m_wndSearchName.SetFocus();
		break;
	case 3:
		m_wndHospital.Refresh();
		m_wndHospital.m_wndAdd.SetFocus();
		break;
	case 4:
		break;
	case 5:
		m_wndICD10.Refresh();
		m_wndICD10.m_wndAdd.SetFocus();
		break;
	case 6:
		m_wndAddress.Refresh();
	case 7:
		m_wndInsurance.Refresh();
#ifdef VIMES_OWNER
	case 8:
		m_wndPermission.Refresh();
		m_wndPermission.m_wndAdd.SetFocus();
		break;
	case 9:
		m_wndSetupList.Refresh();
		break;
	case 10:
		m_wndMessage.Refresh();
		m_wndMessage.m_wndAdd.SetFocus();
		break;
	case 11:
		m_wndDictionary.Refresh();
		m_wndDictionary.m_wndAdd.SetFocus();
		break;
#endif
	};
/*
	switch(nOldItem){
	case 0:
		m_wndCompany.ShowWindow(SW_HIDE);
		break;
	case 1:
		m_wndDepartment.ShowWindow(SW_HIDE);
		break;
	case 2:
		m_wndUser.ShowWindow(SW_HIDE);
		break;
	case 3:
		m_wndPermission.ShowWindow(SW_HIDE);
		break;
	case 4:
		m_wndHospital.ShowWindow(SW_HIDE);
		break;
	case 5:
		m_wndFeeTabs.ShowWindow(SW_HIDE);
		break;
	case 6:
		m_wndICD10.ShowWindow(SW_HIDE);
		break;
	case 7:
		m_wndSetupList.ShowWindow(SW_HIDE);
		break;
	case 8:
		m_wndMessage.ShowWindow(SW_HIDE);
		break;
	case 9:
		m_wndDictionary.ShowWindow(SW_HIDE);
		break;
	};

*/

	//if(nNewItem >=0 && nNewItem <=11)
		SetActivePane(nNewItem);//this to change the panel

	return 0;
}
#include "PMSPermSetupDialog.h"
#include ".\mainfrm.h"



BOOL CMainFrame::PreTranslateMessage(MSG *pMsg)
{
	//CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	//CGuiTaskPane *pPane = (CGuiTaskPane*) GetPane();
	//
	//if(pMsg->message==WM_KEYDOWN)
	//	switch(pMsg->wParam)
	//	{
	//	case VK_END:
	//		pPane->m_wndList.SetFocus();
	//		SetActivePane(pPane->m_wndList.GetCount()-1);
	//		m_wndDictionary.m_wndSearch.SetFocus();
	//		m_wndDictionary.Refresh();
	//		break;
	//	case VK_HOME:
	//		pPane->m_wndList.SetFocus();
	//		SetActivePane(0);
	//		m_wndCompany.m_wndUpdate.SetFocus();
	//		m_wndCompany.Refresh();
	//		break;
	//	default:
	//		break;
	//	}
	if (pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_F9)
	{
		OnSetupSignatureImport();
	}
		return CHMSMainFrame::PreTranslateMessage(pMsg);
}

LRESULT CMainFrame::OnHotKey(WPARAM wParam, LPARAM lParam)
{
	//CMainFrame *pMF = (CMainFrame*)AfxGetMainWnd();
	//CGuiTaskPane *pPane = (CGuiTaskPane*) GetPane();
	//switch(wParam){
	//	case 100:
	//		SetActivePane(0);
	//		m_wndCompany.m_wndUpdate.SetFocus();
	//		m_wndCompany.Refresh();
	//		break;
	//	case 200:
	//		SetActivePane(pPane->m_wndList.GetCount()-1);
	//		m_wndDictionary.m_wndSearch.SetFocus();
	//		m_wndDictionary.Refresh();
	//		break;
	//	default:
	//		SetActivePane(0);
	//		m_wndCompany.m_wndUpdate.SetFocus();
	//		m_wndCompany.Refresh();
	//		break;
	//}
	return 0;
}
void CMainFrame::OnFileExport()
{
	// TODO: Add your command handler code here
	OnExportFeelistExcel();
}

void CMainFrame::OnFileStockpermission()
{
	// TODO: Add your command handler code here
	CPMSPermSetupDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileTestprofilesetup()
{
	CHMSTestProfileDialog dlg(this);
	dlg.DoModal();
}



void CMainFrame::OnFileMapItem()
{
	CHMSMapItemDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileExportfeelist()
{
	CHMSExportFeeList dlg(this);
	dlg.DoModal();
	//OnExportFeelistExcel();
}
#include "HMSSetPrivorityPatient.h"
void CMainFrame::OnFileSetprivoritypatient()
{
	// TODO: Add your command handler code here
	CHMSSetPrivorityPatient dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnMenuTransferInwardPatient()
{
	// TODO: Add your command handler code here
	CHMSTransferInwardPatient dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnMenuCancelRecord()
{
	// TODO: Add your command handler code here
	CHMSCancelRecord dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnFileConfigsetup()
{
	// TODO: Add your command handler code here
	/*
	LPCTSTR pcStr = GetLocalIP();
	if (CString(pcStr) != _T("10.0.76.127"))
		return;
		*/
	CHMSConfigSetupDlg dlg(this);
	dlg.DoModal();
} 

void CMainFrame::OnMenu32803()
{
	// TODO: Add your command handler code here
	CReport rpt;
	CReportSection *rptHeader = NULL;
	CString tmpStr, szCurDate = GetSysDate();
	if (!rpt.Init(_T("Reports\\HMS\\HUONGDANVAYEUCAUPHANMEM.RPT")))
		return;
	rptHeader = rpt.GetReportHeader();
	if (rptHeader)
	{
		rptHeader->SetValue(_T("HospitalName"), m_CompanyInfo.sc_name);
		tmpStr.Format(rptHeader->GetValue(_T("PrintDate")), szCurDate.Mid(5, 2), szCurDate.Mid(8, 2), szCurDate.Left(4));
		rptHeader->SetValue(_T("PrintDate"), tmpStr);
	}
	rpt.PrintPreview();
}
void CMainFrame::OnStorageDefaultSetup()
{
	CStorageDefaultSetupDlg dlg(this);
	dlg.DoModal();
}


#include "HMSParaClinicalICDSettingDialog.h"
void CMainFrame::OnParaClinicalICDSetting()
{
	CHMSParaClinicalICDSettingDialog dlg(this);
	dlg.DoModal();
}
#include "SysSettingAutoCheckCardDialog.h"
void CMainFrame::OnSettingAutoCheckCard()
{
	CSysSettingAutoCheckCardDialog dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnFeeListApproval()
{
	// TODO: Add your command handler code here
	CHMSFeeListApproval dlg(this);
	dlg.DoModal();
}
#include "HMSMergeIVFDocnoDialog.h"
void CMainFrame::OnMergeIVFDocno()
{
	// TODO: Add your command handler code here
	CHMSMergeIVFDocnoDialog dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnSetupHtmlformsetup()
{
	// TODO: Add your command handler code here
	CHMSHtmlFormSetupDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupAdmissionformsetup()
{
	// TODO: Add your command handler code here
	CSysSetUpAdmissionForm dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupInsurancenameeditor()
{
	// TODO: Add your command handler code here
	CINSFeeNameEditor dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupFeewarningsetup()
{
	// TODO: Add your command handler code here
	CSysFeeWarningSetup dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupDanhmucmiengiam()
{
	
	CHMSThietLap_Thongtin_Miengiam dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupMiengiamTienanHaucan()
{
	
	CHMSThietLap_Miengiam_Tienan_Haucan dlg(this);
	dlg.DoModal();
}

int	CMainFrame::CreatePopupMenu(CGuiMenu* pMenu, CRect* pRect, CString szItemStr)
{
	if (pMenu == NULL)
	{
		return -1;
	}
	pMenu->CreatePopupMenu();
	CString tmpStr;
	CStringToken tok(szItemStr, _T("|"));
	for (int i = 0; i < tok.GetSize(); i++)
	{
		if (i > 0)
		{
			pMenu->AppendMenu(MF_SEPARATOR);
		}
		tok.GetAt(i, tmpStr);
		pMenu->AppendMenu(MF_BYPOSITION, i + 1, tmpStr);
	}
//_tprintf(_T("\nl:%ld|r:%ld|t:%ld|b:%ld\n"), pRect->left, pRect->right, pRect->top, pRect->bottom);
	int ret = pMenu->TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_BOTTOMALIGN|TPM_LEFTALIGN, pRect->left, pRect->top , this);
	return ret;
}

int	CMainFrame::LoadExpenseType(CWnd* pWnd, CString szKey, CString szFilter){
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and et_id=%ld "), str2long(szKey));
	};
	//pCB->Format(3, 1);
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT et_id, et_name, et_type_id ") \
				_T(" FROM hms_expense_type_view ") \
				_T(" WHERE 1=1 %s %s"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("et_id")),
			rs.GetValue(_T("et_name")), 
			rs.GetValue(_T("et_type_id")),
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

int	CMainFrame::LoadExpense(CWnd* pWnd, CString szKey, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and e_id=%ld "), str2long(szKey));
	};
	//pCB->Format(3, 1);
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT e_id as id, e_name as name, ") \
				_T("	e_price as price, e_type_name as type_name") \
				_T(" FROM hms_expense_view ") \
				_T(" WHERE 1=1 %s %s"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), 
			rs.GetValue(_T("type_name")), 
			rs.GetValue(_T("price")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

int	CMainFrame::LoadPriceSchema(CWnd* pWnd, CString szKey, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and ps_id=%ld "), str2long(szKey));
	};
	//pCB->Format(3, 1);
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ps_id as id, ps_name as name ") \
				_T(" FROM hms_price_schema_view ") \
				_T(" WHERE 1=1 %s %s"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

int	CMainFrame::LoadFeeList(CWnd* pWnd, CString szKey, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and hfl_feeid='%s' "), szKey);
		//pCB->Format(3, 1);
		pCB->DeleteAllItems(); 
		int nCount = 0;
		szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name, ") \
					_T("	hfl_price_schema_id as price_schema_id") \
					_T(" FROM hms_fee_list ") \
					_T(" LEFT JOIN hms_price_schema on (hfl_price_schema_id = hps_price_schema_id)") \
					_T(" WHERE hfl_active = 'Y' %s %s") \
					_T(" ORDER BY hfl_feeid, hfl_name"), szWhere, szFilter);
		nCount = rs.ExecSQL(szSQL);
		while(!rs.IsEOF()){ 
			pCB->AddItems(
				rs.GetValue(_T("id")),
				rs.GetValue(_T("name")), 
				rs.GetValue(_T("price_schema_id")),
				NULL);
			rs.MoveNext();
		}
		return nCount;
	};
	CString tmpStr, szKeyLow;
	vector<SFee>::iterator iter;
	StringLower(szKey, szKeyLow);
	if (szKeyLow.IsEmpty())
	{
		szKeyLow = _T(" ");
	}
	for (iter=m_vtFee.begin(); iter!=m_vtFee.end();iter++)
	{
		SFee f = *iter;
		StringLower(f.fee_name, tmpStr);
		if (tmpStr.Find(szKeyLow) != -1)
		{
			pCB->AddItems(
				f.fee_id,
				f.fee_name,
				f.price_schema_id,
				NULL
				);
		}
	}
	return pCB->GetCount();
}

int	CMainFrame::LoadFeeList(CGuiListCtrl* pList, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	pList->BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name, ") \
				_T("	hfl_price_schema_id as price_schema_id,") \
				_T("	hms_price_schema_calcprice(hfl_price_schema_id) as amount,") \
				_T("	hfl_servprice as serv_price, hfl_insprice as ins_price,") \
				_T("	hfl_servprice -hms_price_schema_calcprice(hfl_price_schema_id) ") \
				_T("	 as profit_serv,") \
				_T("	hfl_insprice - hms_price_schema_calcprice(hfl_price_schema_id) ") \
				_T("	 as profit_ins") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_price_schema on (hfl_price_schema_id = hps_price_schema_id)") \
				_T(" WHERE hfl_active = 'Y' %s %s") \
				_T(" ORDER BY hfl_feeid, hfl_name"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		pList->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("price_schema_id")),
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("serv_price")),
			rs.GetValue(_T("ins_price")),
			rs.GetValue(_T("profit_serv")),
			rs.GetValue(_T("profit_ins")),
			NULL);
		rs.MoveNext();
	}
	pList->EndLoad(); 
	return nCount;	
}

int	CMainFrame::LoadFeeList(CGridListView* pList, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	pList->BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name, ") \
				_T("	hfl_price_schema_id as price_schema_id,") \
				_T("	hms_price_schema_calcprice(hfl_price_schema_id) as amount,") \
				_T("	hfl_servprice as serv_price, hfl_insprice as ins_price,") \
				_T("	hfl_servprice -hms_price_schema_calcprice(hfl_price_schema_id) ") \
				_T("	 as profit_serv,") \
				_T("	hfl_insprice - hms_price_schema_calcprice(hfl_price_schema_id) ") \
				_T("	 as profit_ins") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_price_schema on (hfl_price_schema_id = hps_price_schema_id)") \
				_T(" WHERE hfl_active = 'Y' %s %s") \
				_T(" ORDER BY hfl_feeid, hfl_name"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		pList->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("price_schema_id")),
			rs.GetValue(_T("amount")),
			rs.GetValue(_T("serv_price")),
			rs.GetValue(_T("ins_price")),
			rs.GetValue(_T("profit_serv")),
			rs.GetValue(_T("profit_ins")),
			NULL);
		rs.MoveNext();
	}
	pList->EndLoad(); 
	return nCount;	
}



int	CMainFrame::LoadFeeGroup(CWnd* pWnd, CString szKey, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	CGuiComboBox *pCB = (CGuiComboBox *) pWnd;
	szWhere.Empty();
	if(pCB->IsSearchKey() && !szKey.IsEmpty()){
		szWhere.Format(_T(" and hfg_id=%ld "), str2long(szKey));
	};
	//pCB->Format(3, 1);
	pCB->DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfg_id as id, hfg_name as name ") \
				_T(" FROM hms_fee_group ") \
				_T(" WHERE hfg_active = 'Y' %s %s"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pCB->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;
}

CString CMainFrame::GetCheckData(CGuiListCtrl* pList, int nColumn)
{
	CString szRet;
	szRet.Empty();
	if (pList == NULL)
	{
		return szRet;
	}
	for (int i = 0; i < pList->GetItemCount(); i++)
	{
		if (pList->GetCheck(i) == FALSE)
		{
			continue;
		}
		if (!szRet.IsEmpty())
		{
			szRet += _T(",");
		}
		szRet.AppendFormat(_T("%s"), pList->GetItemText(i, nColumn));
	}
	return szRet;
}

long CMainFrame::LoadProductItem(CGuiComboBox* pWnd, CString szKey, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere, szText, tmpStr;
	if(pWnd->IsSearchKey() && str2long(szKey) > 0)
	{
		szWhere.Format(_T(" AND product_item_id=%ld "), str2long(szKey));
		if(!szFilter.IsEmpty())
			szWhere.AppendFormat(_T(" %s "), szFilter);
		
		//if (GetModuleID() == _T("PM"))
		{
			szWhere.AppendFormat(_T(" AND ((product_hasexp = 'Y' and product_expdate >= trunc(sysdate)) OR product_hasexp = 'N')"));
		}
		
		szSQL.Format(
	_T(" SELECT max(product_item_id) as product_item_id,") \
	_T("   product_code,") \
	_T("   product_name,") \
	_T("   product_classname,") \
	_T("   product_uomname ,") \
	_T("   product_countryid,") \
	_T("   product_countryname,") \
	_T("   product_isprecision,  ") \
	_T("   SUM(msl_qtyonhand-msl_qtyordered-msl_qtypreordered) AS product_qtyonhand,") \
	_T("   product_classid,") \
	_T("   product_vatprice, ") \
	_T("   product_uomid") \
	_T(" FROM m_storageline ") \
	_T(" LEFT JOIN m_productitem_view_ex ") \
	_T(" ON(msl_product_item_id           =product_item_id)") \
	_T(" WHERE msl_isactive='Y' %s ") \
	_T(" AND (msl_qtyonhand-msl_qtyordered-msl_qtypreordered) > 0") \
	_T(" GROUP BY product_id,") \
	_T("   product_code,") \
	_T("   product_name,") \
	_T("   product_classname,") \
	_T("   product_uomname ,") \
	_T("   product_countryid,") \
	_T("   product_countryname, product_isprecision,product_classid,product_vatprice, ") \
	_T("   product_uomid") \
	_T(" ORDER BY product_name,") \
	_T("   product_uomname ")
	, szWhere);	
		_tprintf(_T("\r\nszSQL: %s"), szSQL);
	_fmsg(_T("%s"), szSQL);
		
		long ret  = rs.ExecSQL(szSQL);
		
		
		CString szName, szClassName;
		pWnd->DeleteAllItems();
		while(!rs.IsEOF()){
			rs.GetValue(_T("product_classname"), szClassName);
			rs.GetValue(_T("product_name"), szName);
		//	if(!szClassName.IsEmpty())
		//	{
		//		szName.AppendFormat(_T("[60%s]"), szClassName);
		//	}
			pWnd->AddItems(
				rs.GetValue(_T("product_item_id")), 
				szName, 
				rs.GetValue(_T("product_vatprice")),
				rs.GetValue(_T("product_uomid")),
				szClassName,
				rs.GetValue(_T("product_uomname")), 
				rs.GetValue(_T("product_countryname")), 
				rs.GetValue(_T("product_qtyonhand")),
				rs.GetValue(_T("product_isprecision")),
				rs.GetValue(_T("product_classid")),		
				NULL);
			//pWnd->AddSearchEx(szClassName);
			rs.MoveNext();
		}
		return ret;
	}
	vector<SProductItem>::iterator ite;
	StringLower(pWnd->GetKey(), szText);
	if (szText.IsEmpty())
	{
		szText = _T(" ");
	}
	for (ite = m_vtProductItem.begin(); ite != m_vtProductItem.end(); ite++)
	{
		SProductItem item = *ite;
		StringLower(item.product_name, tmpStr);
		if (tmpStr.Find(szText) != -1)
		{
			tmpStr.Format(_T("%ld"), item.product_item_id);
			pWnd->AddItems(
				tmpStr,
				item.product_name,
				ToString(item.product_vatprice),
				item.product_uomid,
				item.product_classname,
				item.product_uomname,
				item.product_countryname,
				NULL
				);
		}
	}
	return pWnd->GetItemCount();
}

long CMainFrame::LoadExpenseList(CGuiListCtrl* pList, long nPriceSchemaID, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	pList->BeginLoad(); 
	int nCount = 0;
	szWhere.Format(_T(" and psl_schema_id = %ld"), nPriceSchemaID);
	szWhere.AppendFormat(_T(" and psl_isactive = 'Y'"));
	szSQL.Format(_T("SELECT psl_id as id, psl_expense_name as name, ") \
				_T("	psl_qty as qty, psl_price as price, ") \
				_T("	psl_amount as amount") \
				_T(" FROM hms_price_schema_line_view ") \
				_T(" WHERE 1=1 %s %s") \
				_T(" ORDER BY name"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pList->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("qty")),
			rs.GetValue(_T("price")),
			rs.GetValue(_T("amount")),
			NULL);
		rs.MoveNext();
	}
	pList->EndLoad(); 
	return nCount;
	return 0;
}

long CMainFrame::LoadExpenseList(CGridListView* pList, long nPriceSchemaID, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere, szGroup, tmpStr;
	pList->BeginLoad(); 
	int nCount = 0, nItem = 0;
	szWhere.Format(_T(" and psl_schema_id = %ld"), nPriceSchemaID);
	szWhere.AppendFormat(_T(" and psl_isactive = 'Y'"));
	szSQL.Format(_T("SELECT psl_id as id, psl_expense_name as name, ") \
				_T("	psl_qty as qty, psl_price as price, ") \
				_T("	psl_amount as amount,") \
				_T("	psl_expense_type_name as expense_type_name ") \
				_T(" FROM hms_price_schema_line_view ") \
				_T(" WHERE 1=1 %s %s") \
				_T(" ORDER BY psl_expense_type_id, name"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("expense_type_name"), tmpStr);
		if (tmpStr != szGroup)
		{
			szGroup = tmpStr;
			nItem = pList->AddItems(
				szGroup,
				NULL);
			pList->MergeCell(nItem, 0, nItem, 3);
			pList->SetItemTextColor(nItem, RGB(0, 128, 192));
			pList->SetItemBkColor(nItem, RGB(180, 180, 180));
		}
		nItem = pList->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("qty")),
			rs.GetValue(_T("price")),
			rs.GetValue(_T("amount")),
			NULL);
		rs.MoveNext();
	}
	pList->EndLoad();
	return nCount;
	return 0;
}

int	CMainFrame::LoadMachineTaskList(CWnd* pWnd, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	CGridListView* pList = (CGridListView*) pWnd;
	pList->BeginLoad(); 
	int nCount = 0;
	szWhere.Empty();
	szSQL.Format(_T("SELECT mt_id as id, mt_fee_name as name ") \
				_T(" FROM hms_machine_task_view ") \
				_T(" WHERE 1=1 %s %s"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){
		pList->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			NULL);
		rs.MoveNext();
	}
	pList->EndLoad(); 
	return nCount;	
}

int	CMainFrame::LoadFeeListView(CWnd* pWnd, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	CGridListView *pList = (CGridListView *) pWnd;
	szWhere.Empty();
	//pList->Format(3, 1);
	pList->BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hfl_feeid as id, hfl_name as name ") \
				_T(" FROM hms_fee_list ") \
				_T(" LEFT JOIN hms_price_schema on (hfl_price_schema_id = hps_price_schema_id)") \
				_T(" WHERE hfl_active = 'Y' %s %s"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pList->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")), 
			NULL);
		rs.MoveNext();
	}
	pList->EndLoad();
	return nCount;
}

CString CMainFrame::GetCheckListView(CWnd* pWnd, int nColCheck, int nColGet)
{
	CString szRet;
	CGridListView * pGridView = (CGridListView*) pWnd;
	for (int i = 0; i < pGridView->GetItemCount(); i++)
	{
		if (pGridView->GetItemText(i, nColCheck) != _T("[X]"))
		{
			continue;
		}
		if (!szRet.IsEmpty())
		{
			szRet += _T(",");
		}
		szRet.AppendFormat(_T("%s"), pGridView->GetItemText(i, nColGet));
	}
	return szRet;
}

void CMainFrame::OnSetupMachine()
{
	CMachineList dlg(this);
	dlg.DoModal();
}

long CMainFrame::LoadPriceSchemaVerLine(CGuiListCtrl* pList, CString szFilter)
{
	CRecord rs(&m_db);
	CString szSQL, szWhere;
	pList->BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT psvl_id as id, psvl_expense_name as name, ") \
				_T("	psvl_qty as qty, psvl_price as price, ") \
				_T("	psvl_qty*psvl_price as amount, psvl_unit_name as unit") \
				_T(" FROM hms_price_schema_verline_view ") \
				_T(" WHERE 1=1 %s %s") \
				_T(" ORDER BY name"), szWhere, szFilter);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		pList->AddItems(
			rs.GetValue(_T("id")),
			rs.GetValue(_T("name")),
			rs.GetValue(_T("unit")),
			rs.GetValue(_T("qty")),
			rs.GetValue(_T("price")),
			rs.GetValue(_T("amount")),
			NULL);
		rs.MoveNext();
	}
	pList->EndLoad(); 
	return nCount;
}
void CMainFrame::OnSetupHoliday()
{
	// TODO: Add your command handler code here
	CHMSSettingHolidayDialog dlg(this);
	dlg.DoModal();
}


void CMainFrame::OnSetupSignatureforms()
{
	// TODO: Add your command handler code here
	CSignatureFormListDlg dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupSignatureSetup()
{
	// TODO: Add your command handler code here
	CSignatureSetupDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupSignatureImport()
{
	// TODO: Add your command handler code here
	CString szPath, szSQL;
	CRecord rs(&m_db);

	szPath.Format(L"C:\\Temp\\chuky\\thuongidduoipng\\*.png");

	CFileFind finder;
	_tprintf(L"\r\n%s", szPath);

	BOOL bWorking = finder.FindFile(szPath);

	while (bWorking)
	{
		bWorking = finder.FindNextFile();
		_tprintf_s(_T("%s\n\t"), (LPCTSTR)finder.GetFileName());
		CString szCode = finder.GetFileName();
		szCode.MakeLower();
		szCode.Replace(L".png", _T(""));

		szSQL.Format(L"SELECT su_userid,email,code FROM sys_user, tmp_userhis WHERE code = '%s' and email = su_sign_userid AND email IS NOT NULL", szCode);
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			CString szName, szUserID;
			rs.GetValue(L"su_userid", szUserID);
			szName.Format(L"HMS_%s.jpg", szUserID);
			CString szFile = finder.GetFilePath();
			bool res = lo_import(szName, szFile);
			if (!res)
			{
				std::wcout << L"Cannot import:" << szFile << endl;
			}
		}

	}

	szPath.Format(L"C:\\Temp\\chuky\\nhayidduoipng\\*.png");
	
	bWorking = finder.FindFile(szPath);

	while (bWorking)
	{
		bWorking = finder.FindNextFile();
		_tprintf_s(_T("%s\n\t"), (LPCTSTR)finder.GetFileName());
		CString szCode = finder.GetFileName();
		szCode.MakeLower();
		szCode.Replace(L".png", _T(""));

		szSQL.Format(L"SELECT su_userid,email,code FROM sys_user, tmp_userhis WHERE code = '%s' and email = su_sign_userid AND email IS NOT NULL", szCode);
		rs.ExecSQL(szSQL);
		if (!rs.IsEOF())
		{
			CString szName, szUserID;
			rs.GetValue(L"su_userid", szUserID);
			szName.Format(L"HMS_%s_s.jpg", szUserID);
			CString szFile = finder.GetFilePath();
			bool res = lo_import(szName, szFile);
			if (!res)
			{
				std::wcout << L"Cannot import:" << szFile << endl;
			}
		}

	}

}

void CMainFrame::OnSetupUserRoles()
{
	// TODO: Add your command handler code here
	CSysUserRolesSettingDialog dlg(this);
	dlg.DoModal();
}

void CMainFrame::OnSetupPerfrome()
{
	// TODO: Add your command handler code here
	if (!CheckPermission(_T("SETUP.PERFORM_ROOM")))
	{
		ShowMessageBox(_T("Permission Denied."));
		return;
	}
	CHMSPerforRoomSetupDlg dlg(this);
	dlg.DoModal();
}
void CMainFrame::OnSetupPerfromeOrderRoom()
{
	// TODO: Add your command handler code here
	if (!CheckPermission(_T("SETUP.ORDER_ROOM")))
	{
		ShowMessageBox(_T("Permission Denied."));
		return;
	}
	CHMSPerforRoomOrderSetupDlg dlg(this);
	dlg.DoModal();
}

