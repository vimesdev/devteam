// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "HMSReportMangr.h"
#include "MainFrm.h"
#include "DocPane.h"
#include "./Pharmacy/PMBaocaoxuatthuocchokhoatheodoituong.h"
#include "./Pharmacy/PMPurchaseOrderReportDialog.h"
#include "./Pharmacy/PMReportConditionDialog.h"
#include "./Pharmacy/PMSDepartmentUsageinDetail.h"
#include "./Pharmacy/PMSGeneralDepartmentUsage.h"
#include "./Pharmacy/PMSServiceDrugUseofOutpatient.h"
#include "TMDischargebyResult.h"
#include "HMSPatientSurgeryReportListDialog.h"
#include "HMSSetupBedDialog.h"
#include "HMSExamList.h"
#include "DStreempnkhamthainguoigia.h"
#include "StatisticOutPatientListCTMRI.h"
#include "ListofPriorityPatientCLS.h"
#include "BCDANHSACHCBCC.h"
#include "BCQUANSOTHEONGAY.h"
#include "BCQUANSONEW.h"
#include "BCTHONGKEKHAMBENHVADIEUTRI.h"
#include "BCTHEOLOAIBENH.h"
#include "BCTONGHOPTINHHINHTUVONG.h"
#include "BCPHAUTHUATTHUTHUATKTC.h"
#include "BCTHONGKETUVONG.h"
#include "BCDSBACSITHAMGIAPHAUTHUAT.h"
#include "BCTKTHEODAUMOIDVCB.h"
#include "BCTHEODOIBNRAVAOVIEN.h"
#include "BCTINHHINHPHAUTHUAT.h"
#include "BCTINHHINHKHAMBENH.h"
#include "BCKHOACAPCUU.h"
#include "BCTHCAPCUUVATHOIGIANCAPCUU.h"
#include "BCTINHHINHSDGIUONG.h"
#include "BCTHUTHUATCACKHOA.h"
#include "BAOCAOTHUTHUAT.h"
#include "BCSOLIEUTINHHINHPHAUTHUAT.h"
#include "BCTINHHINHPHAUTHUATTTSPT.h"
#include "BCTHONGKEHOATDONGCANLAMSANG.h"
#include "BCTHONGKETRUYENMAU.h"
#include "BCTHONGKECAPCUU.h"
#include "BCPHAUTHUAT.h"
#include "BCTHONGKEKHAMBENH.h"
#include "BCHOATDONGCACKHOACANLAMSANG.h"
#include "BCTINHHINHTHUDUNG.h"
#include "BCDIEUTRINGOAITRU.h"
#include "BCDIEUTRINGOAITRURANG.h"
#include "BCDIEUTRIVLTLPHCN.h"
#include "BCMAUVACHEPHAMSD.h"
#include "BCSOKHAMBENH.h"
#include "BCTINHHINHHOATDONGCANLAMSANG.h"
#include "BCPHANLOAITHEOCAPCHUCVADAUMOIDONVI.h"
#include "CBCDANHSACHBENHNHANRAVIEN.h"
#include "CBCDANHSACHBENHNHANCHUYENKHOA.h"
#include "CBCDANHSACHBENHNHANCHUYENKHAMCHUYENKHOA.h"
#include "BCDANHSACHBENHNHANCHUYENVIEN.h"
#include "BCTHEODOIBNRAVAOVIENCACKHOA.h"
#include "BCDANHSACHBENHNHANVAOVIEN.h"
#include "CBCDANHSACHBENHNHANRAVIEN.h"
#include "PHANHEDIEUTRINOITRU.h"
#include "DANHSACHBENHNHANDIEUTRI.h"
#include "HMSExaminationQueueList.h"
#include "EMBCHangThangKhoaKhamC1_1.h"
#include "RPM_DailyShift.h"
#include "HMSExamList.h"
#include "TMTotalPatientListDischarge.h"
#include "BCSUDUNGTHUOC.h"
#include "BCSUDUNGTHUOCVATTU.h"
#include "BCSUDUNGDVKT.h"
#include "BCSUDUNGDVKTBH.h"
#include "BCDANHSACHBNQNDATHANHTOAN.h"
#include "BCTHOIGIANTHUCHIENKYTHUAT.h"
#include "HMSPatientSurgeryFeeReport.h"
#include "DSBNCoBenhAnNgoaiTru.h"
// 15/9 copy cac bao cao da co va doi ten vao muc bc medisoft
#include "MSBCHoatdongkhambenh.h"
#include "MSBCHoatdongdieutri.h"
#include "MSBCHoatdongPT.h"
#include "MSBCHoatdongTT.h"
#include "MSBCHoatdongsuckhoesinhsan.h"
#include "MSBCHoatdongcanlamsang.h"
#include "MSBCTinhhinhbenhtattuvong.h"
#include "MSBCTheomaICD.h"
#include "MSBCTonghoptheomaPTTT.h"
#include "MSBCThongkeDSBNhiendien.h"
#include "MSBCThongkeDSBNvaovien.h"
#include "MSBCThongkeDSBNdieutri.h"
#include "MSBCThongkeDSBNravien.h"
#include "MSBCThongkeDSBNchuyenvien.h"
#include "MSBCThongkeDSBNtuvong.h"
#include "MSBCDuocbenhvien.h"
#include "MSBCTrangthietbiyte.h"
#include "MSBCthongkeDSBNchuyenden.h"
#include "MSBCthongkeDSBNchuyendi.h"
#include "MSBCTinhhinhcanbocongchuc.h"
#include "MSBCHoatdongnghiencuukhoahoc.h"
#include "MSBChoatdongchidaotuyen.h"
#include "MSBChoatdongtaichinh.h"
#include "GeneralOperationList.h"
#include "HMSOperationCostIncMaterial.h"
#include "Examination\EMToothB10.h"
#include "Treatment\TMPatientListVLTL.h"
#include "BB\BloodBankUseReportWeek.h"
#include "./HospitalFee/FMPatientStatbyRoom2.h"
#include "BCDANHMUCKEMTHEOVTYT.h"
#include "BCDOANHTHUTHEOKHOA.h"
#include "BCDANHMUCKEMTHEOTHUOC.h"
#include "BCDANHMUCKEMTHEOCDHA.h"
#include "THONGTINCHIPHICHUNG.h"
#include "BCDSBNTHEONHOMBENH.h"
#include "PMBaocaoxuatthuockhangsinhtheokhoa.h"
#include "BCQUANSOVAOTOANVIEN.h"
#include "HMSAdmitDischargeOnDept.h"
#include "BCSOLUONGVAGIA_DICHVUKYTHUAT.h"
#include "BCSOLUONGVAGIA_DICHVUKYTHUATEX.h"
#include "BCDOANHTHUTHEOKHOATOANVIEN.h"
#include "BCDOANHTHUTHEOKHOATOANVIEN_TIENTHUOC.h"
#include "TMOperationListAll.h"
#include "BCDSbenhnhanA1dientim.h"
#include "EMSoluongkedonphongkham.h"
#include "EMSoluongkhambenh.h"
#include "EMSoluongkhambenhkedon.h"

inline void SetSessionInfo()
{
	CGuiMainFrame* pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("BEGIN") \
				_T("	DBMS_SESSION.SET_IDENTIFIER('%s');") \
				_T("	DBMS_APPLICATION_INFO.SET_MODULE ('%s', '');") \
				_T(" END;"), pMF->GetCurrentUser(), pMF->GetModuleID());
	pMF->ExecSQL(szSQL);
}

// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CGuiMainFrame)

BEGIN_MESSAGE_MAP(CMainFrame, CGuiMainFrame)
	ON_WM_CLOSE()
	ON_COMMAND(ID_FILE_SETUPBED, OnSetupBed)
	ON_COMMAND(ID_APP_EXIT, OnClose)
	ON_WM_CREATE()
END_MESSAGE_MAP()

CMainFrame::CMainFrame()
{	
	SetLocalLang(1);
	m_szModuleID = _T("RPM");
	m_szVersion = _T("1.0");
	m_szSize = CSize(1400, 800);
	SetLayoutStyle(LAYOUT_DOCPANE);
}

CMainFrame::~CMainFrame()
{
}


int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CGuiMainFrame::OnCreate(lpCreateStruct) == -1)
		return -1;

	CString szSQL, tmpStr;
	TranslateString(_T("PHÂN HỆ BÁO CÁO THỐNG KÊ - KHTH"), tmpStr);
	SetWindowText(tmpStr);
	return 0;
}

void CMainFrame::OnCreateComponents()
{
	CRect rect;
	GetClientRect(&rect);
	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj = NULL;
	//OnHRMCreateComponents();
	OnHRMCreateComponents_v2();
	pDocPane->RecalcLayout();
	pDocPane->SetPaneWidth(350);
	pDocPane->SetPaneStyle(DPS_LEFT|DPS_OUTLOOK);
}

void CMainFrame::OnHRMCreateComponents()
{
	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj = NULL;
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	
	obj = pDocPane->AddPane(_T("A - BÁO CÁO QUÂN SỐ THEO NGÀY"), _T(""), NULL);
	if (obj)
	{
		obj->Add(_T("0. DANH SACH BENH NHAN KHAM BENH"), _T(""), new CHMSExamList);
		obj->Add(_T("0.1 DANH SACH BENH NHAN RA VIEN"), _T(""), new CTMTotalPatientListDischarge);
		TranslateString(_T("BAO CAO QUAN SO"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCQUANSOTHEONGAY);

		TranslateString(_T("BAO CAO QUAN SO"), szTemp);
		tmpStr.Format(_T("1.1 %s NEW"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCQUANSONEW);

		TranslateString(_T("THEO DOI BN RA VAO VIEN"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTHEODOIBNRAVAOVIEN);		

		TranslateString(_T("NGÀY NẰM ĐIỀU TRỊ CỦA BN GIẢM"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTHEODOIBNRAVAOVIENCACKHOA);

		TranslateString(_T("PHÂN HỆ ĐIỀU TRỊ NỘI TRÚ"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CPHANHEDIEUTRINOITRU);

		TranslateString(_T("BÁO CÁO SỬ DỤNG THUỐC"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSUDUNGTHUOC);

		TranslateString(_T("BÁO CÁO SỬ DỤNG THUỐC / VẬT TƯ"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSUDUNGTHUOCVATTU);

		TranslateString(_T("BÁO CÁO SỬ DỤNG DỊCH VỤ KỸ THUẬT"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSUDUNGDVKT);

		TranslateString(_T("DANH SÁCH BỆNH NHÂN THẺ QN"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDANHSACHBNQNDATHANHTOAN);

		TranslateString(_T("Chuẩn hóa danh mục kỹ thuật"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSUDUNGDVKTBH);

	}

	obj = pDocPane->AddPane(_T("B - DANH SÁCH BỆNH NHÂN NẰM ĐIỀU TRỊ TẠI VIỆN"), _T(""), NULL);

	if (obj)
	{
		TranslateString(_T("General Report Group"), szTemp);
		tmpStr.Format(_T("A. %s"), szTemp);
		obj->AddCaption(tmpStr);

		TranslateString(_T("Danh sách cán bộ cao cấp nằm điều trị tại viện"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDANHSACHCBCC);

		TranslateString(_T("Admission Patient List"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDANHSACHBENHNHANVAOVIEN);

		TranslateString(_T("Danh sách bệnh nhân ra viện"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CCBCDANHSACHBENHNHANRAVIEN);

		TranslateString(_T("Danh sách bệnh nhân nằm điều trị tại viện"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CDANHSACHBENHNHANDIEUTRI);

		TranslateString(_T("Danh sách bệnh nhân chuyển khám chuyên khoa"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CCBCDANHSACHBENHNHANCHUYENKHAMCHUYENKHOA);

		TranslateString(_T("Danh sách bệnh nhân phòng khám"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CHMSExaminationQueueList);

		TranslateString(_T("Báo cáo tổng hợp khoa khám"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CRptBCHangThangKhoaKhamC1_1);

	//	TranslateString(_T("Danh sach benh nhan chuyen vien"), szTemp);
	//	tmpStr.Format(_T("4. %s"), szTemp);
	//	obj->Add(tmpStr, _T(""), &m_wndBCDANHSACHBENHNHANCHUYENVIEN);
	}

	//obj = pDocPane->AddPane(_T("C - DANH SACH BENH NHAN RA VAO VIEN"), _T(""), NULL);
	//if (obj)
	//{
	//	TranslateString(_T("Danh sach benh nhan ra vien"), szTemp);
	//	tmpStr.Format(_T("1. %s"), szTemp);
	//	obj->Add(tmpStr, _T(""), &m_wndCBCDANHSACHBENHNHANRAVIEN);

	//	TranslateString(_T("Danh sach benh nhan chuyen khoa"), szTemp);
	//	tmpStr.Format(_T("2. %s"), szTemp);
	//	obj->Add(tmpStr, _T(""), &m_wndCBCDANHSACHBENHNHANCHUYENKHOA);

	//	TranslateString(_T("Danh sach benh nhan chuyen kham chuyen khoa"), szTemp);
	//	tmpStr.Format(_T("3. %s"), szTemp);
	//	obj->Add(tmpStr, _T(""), &m_wndCBCDANHSACHBENHNHANCHUYENKHAMCHUYENKHOA);

	//	TranslateString(_T("Danh sach benh nhan chuyen vien"), szTemp);
	//	tmpStr.Format(_T("4. %s"), szTemp);
	//	obj->Add(tmpStr, _T(""), &m_wndBCDANHSACHBENHNHANCHUYENVIEN);
	//}
/*
	obj = pDocPane->AddPane(_T("C - BÁO CÁO CỤC QUÂN Y"), _T(""), NULL);
	if (obj)
	{
		//TranslateString(_T("THONG KE THU DUNG DIEU TRI"), szTemp);
		//tmpStr.Format(_T("I. %s"), szTemp);
		//obj->AddCaption(tmpStr);

		//TranslateString(_T("TINH HINH SU DUNG GIUONG"), szTemp);
		//tmpStr.Format(_T("II. %s"), szTemp);
		//obj->AddCaption(tmpStr);

			TranslateString(_T("Tinh hinh su dung giuong"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), &m_wndBCTINHHINHSDGIUONG);

		//TranslateString(_T("THONG KE THEO DAU MOI CAC DV VA CB"), szTemp);
		//tmpStr.Format(_T("III. %s"), szTemp);
		//obj->AddCaption(tmpStr);
			TranslateString(_T("Thong ke theo dau moi cac dv va cb"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""), &m_wndBCTKTHEODAUMOIDVCB);

		//TranslateString(_T("THONG KE CAP CUU"), szTemp);
		//tmpStr.Format(_T("IV. %s"), szTemp);
		//obj->AddCaption(tmpStr);
			TranslateString(_T("Thong ke cap cuu"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), &m_wndTHONGKECAPCUU);

		//TranslateString(_T("THONG KE KHAM BENH"), szTemp);
		//tmpStr.Format(_T("V. %s"), szTemp);
		//obj->AddCaption(tmpStr);
			TranslateString(_T("Thong ke kham benh"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), &m_wndTHONGKEKHAMBENH);

		//TranslateString(_T("THONG KE PHAU THUAT, THU THUAT"), szTemp);
		//tmpStr.Format(_T("VI. %s"), szTemp);
		//obj->AddCaption(tmpStr);
			TranslateString(_T("Bao cao phau thuat"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), &m_wndPHAUTHUAT);

			TranslateString(_T("Bao cao thu thuat"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), &m_wndBAOCAOTHUTHUAT);

		//TranslateString(_T("THONG KE VO CAM"), szTemp);
		//tmpStr.Format(_T("VII. %s"), szTemp);
		//obj->AddCaption(tmpStr);

		////TranslateString(_T("THONG KE TRUYEN MAU"), szTemp);
		////tmpStr.Format(_T("VIII. %s"), szTemp);
		////obj->AddCaption(tmpStr);
			TranslateString(_T("Thong ke truyen mau"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), &m_wndTHONGKETRUYENMAU);

		//TranslateString(_T("THONG KE DIEU TRI DONG Y,VAT LY TRI LIEU,XA TRI,HOA TRI"), szTemp);
		//tmpStr.Format(_T("IX. %s"), szTemp);
		//obj->AddCaption(tmpStr);

		//TranslateString(_T("THONG KE HOAT DONG CLS"), szTemp);
		//tmpStr.Format(_T("X. %s"), szTemp);
		//obj->AddCaption(tmpStr);
			TranslateString(_T("Thong ke hoat dong cls"), szTemp);
			tmpStr.Format(_T("8. %s"), szTemp);
			obj->Add(tmpStr, _T(""), &m_wndTHONGKEHOATDONGCLS);

		//TranslateString(_T("THONG KE TAI BIEN - TAI NAN"), szTemp);
		//tmpStr.Format(_T("XI. %s"), szTemp);
		//obj->AddCaption(tmpStr);

		//TranslateString(_T("THONG KE TU VONG"), szTemp);
		//tmpStr.Format(_T("X. %s"), szTemp);
		//obj->AddCaption(tmpStr);

		TranslateString(_T("Thong ke tu vong"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), &m_wndBCTHONGKETUVONG);

		TranslateString(_T("Daily Shift"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), &m_wndDailyShift);
	}
*/
	obj = pDocPane->AddPane(_T("D - BÁO CÁO SỐ LIỆU THÁNG NĂM"), _T(""), NULL);

	if (obj)
	{
		TranslateString(_T("TINH HINH THU DUNG CAP CUU DT CHUNG TOAN BV"), szTemp);
		tmpStr.Format(_T("A. %s"), szTemp);
		obj->AddCaption(tmpStr);

			TranslateString(_T("Phau thuat thu thuat ky thuat cao"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CBCPHAUTHUATTHUTHUATKTC);

			TranslateString(_T("Thu thuat cac khoa"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""),new CBCTHUTHUATCACKHOA);

			TranslateString(_T("Tinh hinh phau thuat"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CBCSOLIEUTINHHINHPHAUTHUAT);

			TranslateString(_T("Chi tiet phau thuat"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CBCTINHHINHPHAUTHUATTTSPT);

			TranslateString(_T("Hoat dong cac khoa can lam sang"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CBCHOATDONGCACKHOACANLAMSANG);

			TranslateString(_T("General Operation List"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CGeneralOperationList);

			TranslateString(_T("Operation Cost Include Material"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CHMSOperationCostIncMaterial);

	}

	obj = pDocPane->AddPane(_T("E - TÌNH HÌNH CẤP CỨU ĐIỀU TRỊ"), _T(""), NULL);

	if (obj)
	{
		TranslateString(_T("Report Medical Treatment"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTHONGKEKHAMBENHVADIEUTRI);

		TranslateString(_T("Bao cao theo loai benh"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTHEOLOAIBENH);

		TranslateString(_T("Bao cao phan loai theo cap chuc va dau moi don vi"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI);

		TranslateString(_T("Bao cao tong hop tu vong CBCC"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTONGHOPTINHHINHTUVONG);

		TranslateString(_T("Bao cao tinh hinh cap cuu va thoi gian cap cuu"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTHCAPCUUVATHOIGIANCAPCUU);
	}
	obj = pDocPane->AddPane(_T("F - BÁO CÁO SỐ LIỆU VÀ TÌNH HÌNH TUẦN"), _T(""), NULL);
	if (obj)
	{
		TranslateString(_T("TINH HINH KB,THU DUNG,DT CHUNG CUA TOAN BV"), szTemp);
		tmpStr.Format(_T("A. %s"), szTemp);
		obj->AddCaption(tmpStr);

		TranslateString(_T("Tinh hinh kham benh"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTINHHINHKHAMBENH);

		TranslateString(_T("Tinh hinh thu dung"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTINHHINHTHUDUNG);

		TranslateString(_T("Khoa cap cuu"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCKHOACAPCUU);

		TranslateString(_T("Dieu tri ngoai tru"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDIEUTRINGOAITRU);

		TranslateString(_T("Tinh hinh phau thuat"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTINHHINHPHAUTHUAT);

		TranslateString(_T("Dieu tri ngoai tru rang"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDIEUTRINGOAITRURANG);

		TranslateString(_T("Dieu tri VLTL - PHCN"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDIEUTRIVLTLPHCN);

		TranslateString(_T("Mau va che pham su dung trong thang"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCMAUVACHEPHAMSD);

		TranslateString(_T("Danh sach bac si tham gia phau thuat"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDSBACSITHAMGIAPHAUTHUAT);

		TranslateString(_T("Bao cao so kham benh tuan"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSOKHAMBENH);

		TranslateString(_T("Tinh hinh hoat dong can lam sang"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTINHHINHHOATDONGCANLAMSANG);
		
		//newReport = new CPMSPurchaseOrderReportDialog(GetPane(), 1);
		//newReport->Create(GetPane());
		////newReport->OnInitDialog();
		//TranslateString(_T("General Purchase Order"), szTemp);
		//tmpStr.Format(_T("5. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		//newReport = new CPMSPurchaseOrderReportDialog(GetPane(), 2);
		//newReport->Create(GetPane());
		//newReport->OnInitDialog();
		//TranslateString(_T("Tong hop phieu nhap kho theo nha cung cap"), szTemp);
		//tmpStr.Format(_T("6. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		//newReport = new CPMSReportConditionDialog(GetPane(), 3);
		//newReport->Create(GetPane());
		//newReport->OnInitDialog();
		//TranslateString(_T("General Import Export Instock For Money Report"), szTemp);
		//tmpStr.Format(_T("11. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		//newReport = new CrptBaocaoxuatthuocchokhoatheodoituong(GetPane());
		//newReport->Create(GetPane());
		//newReport->OnInitDialog();
		//TranslateString(_T("General export to department"), szTemp);
		//tmpStr.Format(_T("12. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		//newReport = new CPMSServiceDrugUseofOutpatient(GetPane());
		//newReport->Create(GetPane());
		//newReport->OnInitDialog();
		//TranslateString(_T("Service Drug Use of Outpatient"), szTemp);
		//tmpStr.Format(_T("19. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		//newReport = new CPMSGeneralDepartmentUsage(GetPane());
		//newReport->Create(GetPane());
		//newReport->OnInitDialog();
		//TranslateString(_T("General Department Usage"), szTemp);
		//tmpStr.Format(_T("22- %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);	

		//newReport = new CPMSDepartmentUsageinDetail(GetPane());
		//newReport->Create(GetPane());
		//newReport->OnInitDialog();
		//TranslateString(_T("Department Usage in Detail"), szTemp);
		//tmpStr.Format(_T("23- %s"), szTemp);
		//obj->Add(tmpStr, _T(""), newReport);

		newReport = new CDStreempnkhamthainguoigia(GetPane());
		newReport->Create(GetPane());
		newReport->OnInitDialog();
		TranslateString(_T("DS Nguoi gia TE PN kham thai"), szTemp);
		tmpStr.Format(_T("24- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CStatisticOutPatientListCTMRI(GetPane());
		newReport->Create(GetPane());
		newReport->OnInitDialog();
		TranslateString(_T("Statistic Outpatient List CT MRI"), szTemp);
		tmpStr.Format(_T("25- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CListofPriorityPatientCLS(GetPane());
		newReport->Create(GetPane());
		newReport->OnInitDialog();
		TranslateString(_T("List of Priority Patient CLS"), szTemp);
		tmpStr.Format(_T("26- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

	}
return;
	obj = pDocPane->AddPane(_T("G - BÁO CÁO MEDISOFT"), _T(""), NULL);
	if (obj)
	{
		TranslateString(_T("Báo cáo hoạt động khám bệnh"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCHoatdongkhambenh);

		TranslateString(_T("Báo cáo hoạt động điều trị"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCHoatdongdieutri);

		TranslateString(_T("Báo cáo hoạt động PTTT (Phẫu thuật)"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCHoatdongPT);

		TranslateString(_T("Báo cáo hoạt động PTTT (Thủ thuật)"), szTemp);
		tmpStr.Format(_T("3.1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCHoatdongTT);

		TranslateString(_T("Báo cáo hoạt động sức khỏe sinh sản"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCHoatdongsuckhoesinhsan);

		TranslateString(_T("Báo cáo hoạt động cận lâm sàng"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCHoatdongcanlamsang);

		TranslateString(_T("Báo cáo dược bệnh viện"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCDuocbenhvien);

		TranslateString(_T("Báo cáo trang thiết bị y tế"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCTrangthietbiyte);

		TranslateString(_T("Báo cáo tình hình bệnh tật tử vong"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCTinhhinhbenhtattuvong);

		TranslateString(_T("Báo cáo theo mã ICD"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCTheomaICD);

		TranslateString(_T("Báo cáo tổng hợp theo mã PTTT"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCTonghoptheomaPTTT);

		TranslateString(_T("Báo cáo thống kê danh sách bệnh nhân hiện diện"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCThongkeDSBNhiendien);

		TranslateString(_T("Báo cáo thống kê danh sách bệnh nhân nhập viện"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCThongkeDSBNvaovien);

		TranslateString(_T("Báo cáo thống kê danh sách bệnh nhân nhập khoa"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCThongkeDSBNdieutri);

		TranslateString(_T("Báo cáo thống kê danh sách bệnh nhân xuất viện"), szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCThongkeDSBNravien);

// 		TranslateString(_T("Báo cáo thống kê danh sách bệnh nhân từ cơ quan y tế chuyển viện"), szTemp);
// 		tmpStr.Format(_T("15. %s"), szTemp);
// 		obj->Add(tmpStr, _T(""), &m_wndMSBCThongkeDSBNchuyenvien);

		TranslateString(_T("Báo cáo thống kê danh sách bệnh nhân từ cơ quan y tế chuyển đến"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCthongkeDSBNchuyenden);

		TranslateString(_T("Báo cáo thống kê danh sách bệnh nhân từ cơ quan y tế chuyển đi"), szTemp);
		tmpStr.Format(_T("16. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCthongkeDSBNchuyendi);

		TranslateString(_T("Báo cáo thống kê danh sách người bệnh tử vong"), szTemp);
		tmpStr.Format(_T("17. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCThongkeDSBNtuvong);

		TranslateString(_T("Báo cáo tình hình cán bộ công chức"), szTemp);
		tmpStr.Format(_T("18. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCTinhhinhcanbocongchuc);

		TranslateString(_T("Báo cáo hoạt động nghiên cứu khoa học"), szTemp);
		tmpStr.Format(_T("19. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBCHoatdongnghiencuukhoahoc);

		TranslateString(_T("Báo cáo hoạt động chỉ đạo tuyến"), szTemp);
		tmpStr.Format(_T("20. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBChoatdongchidaotuyen);

		TranslateString(_T("Báo cáo hoạt động tài chính"), szTemp);
		tmpStr.Format(_T("21. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CMSBChoatdongtaichinh);
	}

	SetWindowText(szTemp);
}

void CMainFrame::OnHRMCreateComponents_v2(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CDocPane *pDocPane = (CDocPane*) GetPane();
	CDocPane::CDocPaneInfo* obj = NULL;
	CGuiView *newReport = NULL;
	CString tmpStr, szTemp;
	tmpStr.Empty();
	szTemp.Empty();
	
	obj = pDocPane->AddPane(_T("A - BÁO CÁO QUÂN SỐ THEO NGÀY"), _T(""), NULL);
	if (obj)
	{
		obj->Add(_T("1. DANH SÁCH BỆNH NHÂN KHÁM BỆNH"), _T(""), new CHMSExamList);
		obj->Add(_T("2. DANH SÁCH BỆNH NHÂN RA VIỆN"), _T(""), new CTMTotalPatientListDischarge);
		//TranslateString(_T("BAO CAO QUAN SO"), szTemp);
		//tmpStr.Format(_T("3. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), new CBCQUANSOTHEONGAY);

		TranslateString(_T("BAO CAO QUAN SO VAO RA CHUYEN VIEN"), szTemp);
		tmpStr.Format(_T("2.1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CHMSAdmitDischargeOnDept);

		TranslateString(_T("BÁO CÁO QUÂN SỐ"), szTemp);
		tmpStr.Format(_T("3. %s NEW"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCQUANSONEW);

		tmpStr.Format(_T("3.1. BÁO CÁO QUÂN SỐ VÀO TOÀN VIỆN"));
		obj->Add(tmpStr, _T(""), new CBCQUANSOVAOTOANVIEN);

		TranslateString(_T("THEO DÕI BỆNH NHÂN RA VÀO VIỆN"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTHEODOIBNRAVAOVIEN);


		TranslateString(_T("NGÀY ĐIỀU TRỊ BỆNH NHẬN GIẢM"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTHEODOIBNRAVAOVIENCACKHOA);

		TranslateString(_T("PHÂN HỆ ĐIỀU TRỊ NỘI TRÚ"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CPHANHEDIEUTRINOITRU);

		TranslateString(_T("BÁO CÁO SỬ DỤNG THUỐC"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSUDUNGTHUOC);

		TranslateString(_T("BÁO CÁO SỬ DỤNG THUỐC / VẬT TƯ"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSUDUNGTHUOCVATTU);

		TranslateString(_T("BÁO CÁO SỬ DỤNG DỊCH VỤ KỸ THUẬT"), szTemp);
		tmpStr.Format(_T("9. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSUDUNGDVKT);

		TranslateString(_T("DANH SÁCH BỆNH NHÂN THẺ QN"), szTemp);
		tmpStr.Format(_T("10. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDANHSACHBNQNDATHANHTOAN);

		TranslateString(_T("CHUẨN HÓA DANH MỤC KỸ THUẬT"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSUDUNGDVKTBH);

		TranslateString(_T("TÌNH HÌNH RA VIỆN THEO HƯỚNG ĐIỀU TRỊ"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CTMDischargebyResult);

		TranslateString(_T("BÁO CÁO DANH MỤC KÈM THEO VTYT"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDANHMUCKEMTHEOVTYT);

		TranslateString(_T("BÁO CÁO DOANH THU THEO KHOA"), szTemp);
		tmpStr.Format(_T("14. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDOANHTHUTHEOKHOA);

		TranslateString(_T("THỐNG KÊ THỜI GIAN THỰC HIỆN KỸ THUẬT"), szTemp);
		tmpStr.Format(_T("15. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTHOIGIANTHUCHIENKYTHUAT);

		TranslateString(_T("THỐNG KÊ SỐ LƯƠNG - GIÁ DỊCH VỤ KỸ THUẬT"), szTemp);
		tmpStr.Format(_T("17. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSOLUONGVAGIA_DICHVUKYTHUAT);

		TranslateString(_T("THỐNG KÊ TIỀN THUỐC - VẬT TƯ ĐI KÈM PTTT"), szTemp);
		tmpStr.Format(_T("18. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSOLUONGVAGIA_DICHVUKYTHUATEX);

		TranslateString(_T("Báo cáo doanh thu theo khoa, đối tượng"), szTemp);
		tmpStr.Format(_T("19. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDOANHTHUTHEOKHOATOANVIEN);

		TranslateString(_T("Báo cáo doanh thu theo khoa, đối tượng tiền thuốc"), szTemp);
		tmpStr.Format(_T("20. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDOANHTHUTHEOKHOATOANVIENTIENTHUOC);
		

		if (pMF->GetCurrentUser() == _T("nhthokh"))
			{
				TranslateString(_T("THÔNG TIN CHI PHÍ CHUNG"), szTemp);
				tmpStr.Format(_T("16. %s"), szTemp);
				obj->Add(tmpStr, _T(""), new CTHONGTINCHIPHICHUNG);

				TranslateString(_T("BÁO CÁO DANH MỤC KÈM THEO THUỐC - THUỐC KTG"), szTemp);
				tmpStr.Format(_T("17. %s"), szTemp);
				obj->Add(tmpStr, _T(""), new CBCDANHMUCKEMTHEOTHUOC);

				TranslateString(_T("BÁO CÁO CHI TIẾT CHẨN ĐOÁN HÌNH ẢNH"), szTemp);
				tmpStr.Format(_T("18. %s"), szTemp);
				obj->Add(tmpStr, _T(""), new CBCDANHMUCKEMTHEOCDHA);
			}		
	}
	
	obj = pDocPane->AddPane(_T("B - DANH SÁCH BỆNH NHÂN NẰM ĐIỀU TRỊ TẠI VIỆN"), _T(""), NULL);

	if (obj)
	{
		TranslateString(_T("General Report Group"), szTemp);
		tmpStr.Format(_T("B. %s"), szTemp);
		obj->AddCaption(tmpStr);

		TranslateString(_T("Danh sách cán bộ cao cấp nằm điều trị tại viện"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDANHSACHCBCC);

		TranslateString(_T("Admission Patient List"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDANHSACHBENHNHANVAOVIEN);

		TranslateString(_T("Danh sách bệnh nhân ra viện"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CCBCDANHSACHBENHNHANRAVIEN);

		TranslateString(_T("Danh sách bệnh nhân nằm điều trị tại viện"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CDANHSACHBENHNHANDIEUTRI);

		TranslateString(_T("Danh sách bệnh nhân chuyển khám chuyên khoa"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CCBCDANHSACHBENHNHANCHUYENKHAMCHUYENKHOA);

		TranslateString(_T("Danh sách bệnh nhân phòng khám"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CHMSExaminationQueueList);

		TranslateString(_T("Báo cáo tổng hợp khoa khám"), szTemp);
		tmpStr.Format(_T("7. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CRptBCHangThangKhoaKhamC1_1);

		TranslateString(_T("Danh sách bệnh nhân có bệnh án ngoại trú"), szTemp);
		tmpStr.Format(_T("8. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CDSBNCoBenhAnNgoaiTru);
	}
	obj = pDocPane->AddPane(_T("C - BÁO CÁO SỐ LIỆU THÁNG NĂM"), _T(""), NULL);

	if (obj)
	{
		TranslateString(_T("TH THU DUNG, CẤP CỨU, DT TOÀN BV"), szTemp);
		tmpStr.Format(_T("C. %s"), szTemp);
		obj->AddCaption(tmpStr);

			TranslateString(_T("Phau thuat thu thuat ky thuat cao"), szTemp);
			tmpStr.Format(_T("1. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CBCPHAUTHUATTHUTHUATKTC);

			TranslateString(_T("Thu thuat cac khoa"), szTemp);
			tmpStr.Format(_T("2. %s"), szTemp);
			obj->Add(tmpStr, _T(""),new CBCTHUTHUATCACKHOA);

			TranslateString(_T("Tinh hinh phau thuat"), szTemp);
			tmpStr.Format(_T("3. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CBCSOLIEUTINHHINHPHAUTHUAT);

			TranslateString(_T("Chi tiet phau thuat"), szTemp);
			tmpStr.Format(_T("4. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CBCTINHHINHPHAUTHUATTTSPT);

			TranslateString(_T("Hoat dong cac khoa can lam sang"), szTemp);
			tmpStr.Format(_T("5. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CBCHOATDONGCACKHOACANLAMSANG);

			TranslateString(_T("General Operation List"), szTemp);
			tmpStr.Format(_T("6. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CGeneralOperationList);

			TranslateString(_T("List Of Patient Surgery Report"), szTemp);
			tmpStr.Format(_T("7. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CHMSPatientSurgeryReportListDialog);
			//CHMSPatientSurgeryReportListDialog

			TranslateString(_T("Báo cáo chi phí PTTT trên phòng mổ"), szTemp);
			tmpStr.Format(_T("8. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CHMSPatientSurgeryFeeReport);

			TranslateString(_T("Bồi dưỡng PTTT"), szTemp);
			tmpStr.Format(_T("9. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CTMOperationListAll);

			TranslateString(_T("Danh sách BN A1 làm điện tim thường"), szTemp);
			tmpStr.Format(_T("10. %s"), szTemp);
			obj->Add(tmpStr, _T(""), new CBCDSbenhnhana1dientim);

	}

	obj = pDocPane->AddPane(_T("D - TÌNH HÌNH CẤP CỨU ĐIỀU TRỊ"), _T(""), NULL);

	if (obj)
	{
		TranslateString(_T("Report Medical Treatment"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTHONGKEKHAMBENHVADIEUTRI);

		TranslateString(_T("Bao cao theo loai benh"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTHEOLOAIBENH);

		TranslateString(_T("Báo cáo theo nhóm bệnh (I00-I98, J00-J98)"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDSBNTHEONHOMBENH);

		//TranslateString(_T("Bao cao tinh hinh cap cuu va thoi gian cap cuu"), szTemp);
		//tmpStr.Format(_T("5. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), new CBCTHCAPCUUVATHOIGIANCAPCUU);
	}
	obj = pDocPane->AddPane(_T("E - BÁO CÁO SỐ LIỆU VÀ TÌNH HÌNH TUẦN"), _T(""), NULL);
	if (obj)
	{
		TranslateString(_T("TH KB, THU DUNG, ĐIỀU TRỊ TOÀN VIỆN"), szTemp);
		tmpStr.Format(_T("E. %s"), szTemp);
		obj->AddCaption(tmpStr);

		TranslateString(_T("Tinh hinh kham benh"), szTemp);
		tmpStr.Format(_T("1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCTINHHINHKHAMBENH);

		TranslateString(_T("THỐNG KÊ SỐ LƯỢNG LƯỢT BỆNH NHÂN KHÁM"), szTemp);
		tmpStr.Format(_T("1.1. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CFMPatientStatbyRoom2(GetPane()));

		//TranslateString(_T("Tinh hinh thu dung"), szTemp);
		//tmpStr.Format(_T("2. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), new CBCTINHHINHTHUDUNG);

		TranslateString(_T("B10 BC số liệu"), szTemp);
		tmpStr.Format(_T("2. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CEMToothB10(GetPane()));

		TranslateString(_T("Patient List VLTL"), szTemp);
		tmpStr.Format(_T("3. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CTMPatientListVLTL(GetPane()));

		TranslateString(_T("BloodBank Use Report Week"), szTemp);
		tmpStr.Format(_T("4. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBloodBankUseReportWeek(GetPane()));

		TranslateString(_T("Danh sach bac si tham gia phau thuat"), szTemp);
		tmpStr.Format(_T("5. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCDSBACSITHAMGIAPHAUTHUAT);

		TranslateString(_T("Bao cao so kham benh tuan"), szTemp);
		tmpStr.Format(_T("6. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new CBCSOKHAMBENH);

		//TranslateString(_T("Tinh hinh hoat dong can lam sang"), szTemp);
		//tmpStr.Format(_T("11. %s"), szTemp);
		//obj->Add(tmpStr, _T(""), new CBCTINHHINHHOATDONGCANLAMSANG);

		newReport = new CDStreempnkhamthainguoigia(GetPane());
		newReport->Create(GetPane());
		newReport->OnInitDialog();
		TranslateString(_T("DS người già, TE, phụ nữ khám thai"), szTemp);
		tmpStr.Format(_T("7- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CStatisticOutPatientListCTMRI(GetPane());
		newReport->Create(GetPane());
		newReport->OnInitDialog();
		TranslateString(_T("Statistic Outpatient List CT MRI"), szTemp);
		tmpStr.Format(_T("8- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CListofPriorityPatientCLS(GetPane());
		newReport->Create(GetPane());
		newReport->OnInitDialog();
		TranslateString(_T("List of Priority Patient CLS"), szTemp);
		tmpStr.Format(_T("9- %s"), szTemp);
		obj->Add(tmpStr, _T(""), newReport);

		newReport = new CPMBaocaoxuatthuockhangsinhtheokhoa(GetPane());
		newReport->Create(GetPane());
		newReport->OnInitDialog();
		tmpStr.Format(_T("10- Báo cáo xuất thuốc kháng sinh cho khoa"));
		obj->Add(tmpStr, _T(""), newReport);

		TranslateString(_T("Báo cáo số lượng kê đơn phòng khám"), szTemp);
		tmpStr.Format(_T("11. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new EMsoluongkedonphongkham);

		TranslateString(_T("Báo cáo tỷ lệ khám bệnh"), szTemp);
		tmpStr.Format(_T("12. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new EMsoluongkhambenh);

		TranslateString(_T("Báo cáo tỷ lệ khám bệnh, kê đơn"), szTemp);
		tmpStr.Format(_T("13. %s"), szTemp);
		obj->Add(tmpStr, _T(""), new EMsoluongkhambenhkedon);
	}

	SetWindowText(szTemp);
}

void CMainFrame::OnInitializes()
{
	CGuiMainFrame::OnInitializes();
	CString szSQL;
	CRecord rs(&m_db);
	SetSessionInfo();
}
void CMainFrame::OnClose()
{
	int close = ShowMessageBox(_T("Do you want to exit application?(Y/N)"), MB_YESNO);
	if(close == IDNO)
		return;
	exit(0);
}
void CMainFrame::OnSetupBed()
{
	CHMSSetupBedDialog dlg(this);
	dlg.DoModal();
}