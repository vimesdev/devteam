#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "GuiMainFrame.h"
//#include "BCDANHSACHCBCC.h"
//#include "BCQUANSOTHEONGAY.h"
//#include "BCQUANSONEW.h"
//#include "BCTHONGKEKHAMBENHVADIEUTRI.h"
//#include "BCTHEOLOAIBENH.h"
//#include "BCTONGHOPTINHHINHTUVONG.h"
//#include "BCPHAUTHUATTHUTHUATKTC.h"
//#include "BCTHONGKETUVONG.h"
//#include "BCDSBACSITHAMGIAPHAUTHUAT.h"
//#include "BCTKTHEODAUMOIDVCB.h"
//#include "BCTHEODOIBNRAVAOVIEN.h"
//#include "BCTINHHINHPHAUTHUAT.h"
//#include "BCTINHHINHKHAMBENH.h"
//#include "BCKHOACAPCUU.h"
//#include "BCTHCAPCUUVATHOIGIANCAPCUU.h"
//#include "BCTINHHINHSDGIUONG.h"
//#include "BCTHUTHUATCACKHOA.h"
//#include "BAOCAOTHUTHUAT.h"
//#include "BCSOLIEUTINHHINHPHAUTHUAT.h"
//#include "BCTINHHINHPHAUTHUATTTSPT.h"
//#include "BCTHONGKEHOATDONGCANLAMSANG.h"
//#include "BCTHONGKETRUYENMAU.h"
//#include "BCTHONGKECAPCUU.h"
//#include "BCPHAUTHUAT.h"
//#include "BCTHONGKEKHAMBENH.h"
//#include "BCHOATDONGCACKHOACANLAMSANG.h"
//#include "BCTINHHINHTHUDUNG.h"
//#include "BCDIEUTRINGOAITRU.h"
//#include "BCDIEUTRINGOAITRURANG.h"
//#include "BCDIEUTRIVLTLPHCN.h"
//#include "BCMAUVACHEPHAMSD.h"
//#include "BCSOKHAMBENH.h"
//#include "BCTINHHINHHOATDONGCANLAMSANG.h"
//#include "BCPHANLOAITHEOCAPCHUCVADAUMOIDONVI.h"
//#include "CBCDANHSACHBENHNHANRAVIEN.h"
//#include "CBCDANHSACHBENHNHANCHUYENKHOA.h"
//#include "CBCDANHSACHBENHNHANCHUYENKHAMCHUYENKHOA.h"
//#include "BCDANHSACHBENHNHANCHUYENVIEN.h"
//#include "BCTHEODOIBNRAVAOVIENCACKHOA.h"
//#include "BCDANHSACHBENHNHANVAOVIEN.h"
//#include "CBCDANHSACHBENHNHANRAVIEN.h"
//#include "PHANHEDIEUTRINOITRU.h"
//#include "DANHSACHBENHNHANDIEUTRI.h"
//#include "HMSExaminationQueueList.h"
//#include "EMBCHangThangKhoaKhamC1_1.h"
//#include "RPM_DailyShift.h"
//#include "HMSExamList.h"
//#include "TMTotalPatientListDischarge.h"
//#include "BCSUDUNGTHUOC.h"
//#include "BCSUDUNGTHUOCVATTU.h"
//#include "BCSUDUNGDVKT.h"
//#include "BCDANHSACHBNQNDATHANHTOAN.h"
//// 15/9 copy cac bao cao da co va doi ten vao muc bc medisoft
//#include "MSBCHoatdongkhambenh.h"
//#include "MSBCHoatdongdieutri.h"
//#include "MSBCHoatdongPT.h"
//#include "MSBCHoatdongTT.h"
//#include "MSBCHoatdongsuckhoesinhsan.h"
//#include "MSBCHoatdongcanlamsang.h"
//#include "MSBCTinhhinhbenhtattuvong.h"
//#include "MSBCTheomaICD.h"
//#include "MSBCTonghoptheomaPTTT.h"
//#include "MSBCThongkeDSBNhiendien.h"
//#include "MSBCThongkeDSBNvaovien.h"
//#include "MSBCThongkeDSBNdieutri.h"
//#include "MSBCThongkeDSBNravien.h"
//#include "MSBCThongkeDSBNchuyenvien.h"
//#include "MSBCThongkeDSBNtuvong.h"
//#include "MSBCDuocbenhvien.h"
//#include "MSBCTrangthietbiyte.h"
//#include "MSBCthongkeDSBNchuyenden.h"
//#include "MSBCthongkeDSBNchuyendi.h"
//#include "MSBCTinhhinhcanbocongchuc.h"
//#include "MSBCHoatdongnghiencuukhoahoc.h"
//#include "MSBChoatdongchidaotuyen.h"
//#include "MSBChoatdongtaichinh.h"
//#include "GeneralOperationList.h"
//#include "HMSOperationCostIncMaterial.h"

class CMainFrame : public CGuiMainFrame
{
public:
	
	CMainFrame();
	void	OnCreateComponents();
	void    OnHRMCreateComponents();
	void	OnHRMCreateComponents_v2();
protected: 
	DECLARE_DYNAMIC(CMainFrame)
	HICON m_hIcon;

public:
	virtual ~CMainFrame();

protected:
	void OnInitializes();
	afx_msg void OnClose();
	afx_msg void OnSetupBed();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
//public:
//	CBCDANHSACHCBCC					m_wndBCDANHSACHCBCC;
//	CBCQUANSOTHEONGAY				m_wndBCQUANSOTHEONGAY;
//	CBCQUANSONEW					m_wndBCQUANSONEW;
//	CBCTHONGKEKHAMBENHVADIEUTRI		m_wndBCTHONGKEKHAMBENHVADIEUTRI;
//	CBCTHEOLOAIBENH					m_wndBCTHEOLOAIBENH;
//	CBCTONGHOPTINHHINHTUVONG		m_wndBCTONGHOPTINHHINHTUVONG;
//	CBCPHAUTHUATTHUTHUATKTC			m_wndBCPHAUTHUATHUTHUATKTC;
//	CBCTHONGKETUVONG				m_wndBCTHONGKETUVONG;
//	CBCDSBACSITHAMGIAPHAUTHUAT		m_wndBCDSBACSITHAMGIAPHAUTHUAT;
//	CBCTKTHEODAUMOIDVCB				m_wndBCTKTHEODAUMOIDVCB;
//	CBCTHEODOIBNRAVAOVIEN			m_wndBCTHEODOIBNRAVAOVIEN;
//	CBCTINHHINHPHAUTHUAT			m_wndBCTINHHINHPHAUTHUAT;
//	CBCTINHHINHKHAMBENH				m_wndBCTINHHINHKHAMBENH;
//	CBCKHOACAPCUU					m_wndBCKHOACAPCUU;
//	CBCTHCAPCUUVATHOIGIANCAPCUU		m_wndBCTHCAPCUUVATHOIGIANCAPCUU;
//	CBCTINHHINHSDGIUONG				m_wndBCTINHHINHSDGIUONG;
//	CBCTHUTHUATCACKHOA				m_wndBCTHUTHUAT;
//	CBAOCAOTHUTHUAT					m_wndBAOCAOTHUTHUAT;
//	CBCSOLIEUTINHHINHPHAUTHUAT		m_wndBCSOLIEUTINHHINHPHAUTHUAT;
//	CBCTINHHINHPHAUTHUATTTSPT		m_wndBCTINHHINHPHAUTHUATTTSPT;
//	CBCTHONGKEHOATDONGCANLAMSANG	m_wndTHONGKEHOATDONGCLS;
//	CBCTHONGKETRUYENMAU				m_wndTHONGKETRUYENMAU;
//	CBCTHONGKECAPCUU				m_wndTHONGKECAPCUU;
//	CBCPHAUTHUAT					m_wndPHAUTHUAT;
//	CBCTHONGKEKHAMBENH				m_wndTHONGKEKHAMBENH;
//	CBCHOATDONGCACKHOACANLAMSANG	m_wndBCHOATDONGCACKHOACANLAMSANG;
//	CBCTINHHINHTHUDUNG				m_wndBCTINHHINHTHUDUNG;
//	CBCDIEUTRINGOAITRU				m_wndBCDIEUTRINGOAITRU;
//	CBCDIEUTRINGOAITRURANG			m_wndBCDIEUTRINGOAITRURANG;
//	CBCDIEUTRIVLTLPHCN				m_wndBCDIEUTRIVLTLPHCN;
//	CBCMAUVACHEPHAMSD				m_wndBCMAUVACHEPHAMSD;
//	CBCSOKHAMBENH					m_wndBCSOKHAMBENH;
//	CBCTINHHINHHOATDONGCANLAMSANG	m_wndBCTINHHINHHOATDONGCANLAMSANG;
//	CBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI		m_wndBCPHANLOAITHEOCAPCHUCVADAUMOIDONVI;
//
//	CCBCDANHSACHBENHNHANRAVIEN		m_wndCBCDANHSACHBENHNHANRAVIEN;
//	CCBCDANHSACHBENHNHANCHUYENKHOA	m_wndCBCDANHSACHBENHNHANCHUYENKHOA;
//	CCBCDANHSACHBENHNHANCHUYENKHAMCHUYENKHOA	m_wndCBCDANHSACHBENHNHANCHUYENKHAMCHUYENKHOA;
//	CBCDANHSACHBENHNHANCHUYENVIEN	m_wndBCDANHSACHBENHNHANCHUYENVIEN;
//	CBCTHEODOIBNRAVAOVIENCACKHOA	m_wndBCTHEODOIBNRAVAOVIENCACKHOA;
//	CBCDANHSACHBENHNHANVAOVIEN		m_wndBCDANHSACHBENHNHANVAOVIEN;
//	CPHANHEDIEUTRINOITRU			m_wndPHANHEDIEUTRINOITRU;
//	CDANHSACHBENHNHANDIEUTRI		m_wndDANHSACHBENHNHANDIEUTRI;
//	CHMSExaminationQueueList		m_wndHMSExaminationQueueList;	
//	CRptBCHangThangKhoaKhamC1_1		m_wndRptBCHangThangKhoaKhamC1_1;
//	CRPM_DailyShift	m_wndDailyShift;
//	CHMSExamList	m_wndExamList;
//	CTMTotalPatientListDischarge    m_wndTotalPatientListDischarge;
//	CBCSUDUNGTHUOC					m_wndBCSUDUNGTHUOC;
//	CBCSUDUNGTHUOCVATTU					m_wndBCSUDUNGTHUOCVATTU;
//	CBCSUDUNGDVKT				m_wndBCSUDUNGDVKT;
//	CBCDANHSACHBNQNDATHANHTOAN  m_wndBCDANHSACHBNQNDATHANHTOAN;
//	// 15/9 copy cac bao cao da co va doi ten vao muc bc medisoft
//	CMSBCHoatdongkhambenh	m_wndMSBCHoatdongkhambenh;
//	CMSBCHoatdongdieutri	m_wndMSBCHoatdongdieutri;
//	CMSBCHoatdongPT			m_wndMSBCHoatdongPT;
//	CMSBCHoatdongTT			m_wndMSBCHoatdongTT;
//	CMSBCHoatdongsuckhoesinhsan	m_wndMSBCHoatdongsuckhoesinhsan;
//	CMSBCHoatdongcanlamsang	m_wndMSBCHoatdongcannlamsang;
//	CMSBCDuocbenhvien		m_wndMSBCDuocbenhvien;
//	CMSBCTrangthietbiyte	m_wndMSBCTrangthietbiyte;
//	CMSBCTinhhinhbenhtattuvong	m_wndMSBCTinhhinhbenhtattuvong;
//	CMSBCTheomaICD			m_wndMSBCTheomaICD;
//	CMSBCTonghoptheomaPTTT	m_wndMSBCTonghoptheomaPTTT;
//	CMSBCThongkeDSBNhiendien	m_wndMSBCThongkeDSBNhiendien;
//	CMSBCThongkeDSBNvaovien	m_wndMSBCThongkeDSBNvaovien;
//	CMSBCThongkeDSBNdieutri	m_wndMSBCThongkeDSBNdieutri;
//	CMSBCThongkeDSBNravien	m_wndMSBCThongkeDSBNravien;
//	CMSBCThongkeDSBNchuyenvien	m_wndMSBCThongkeDSBNchuyenvien;
//	CMSBCThongkeDSBNtuvong	m_wndMSBCThongkeDSBNtuvong;
//	CMSBCthongkeDSBNchuyenden	m_wndMSBCthongkeDSBNchuyenden;
//	CMSBCthongkeDSBNchuyendi	m_wndMSBCthongkeDSBNchuyendi;
//	CMSBCTinhhinhcanbocongchuc	m_wndMSBCTinhhinhcanbocongchuc;
//	CMSBCHoatdongnghiencuukhoahoc	m_wndMSBCHoatdongnghiencuukhoahoc;
//	CMSBChoatdongchidaotuyen	m_wndMSBChoatdongchidaotuyen;
//	CMSBChoatdongtaichinh	m_wndMSBChoatdongtaichinh;
//	CGeneralOperationList	m_wndGeneralOperationList;
//	CHMSOperationCostIncMaterial	m_wndOperationCostIncMaterial;
};

#endif