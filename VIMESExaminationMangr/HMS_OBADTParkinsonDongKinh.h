#ifndef HMS_OBADTPARKINSONDONGKINH_H
#define HMS_OBADTPARKINSONDONGKINH_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright © Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hoang Van Hay, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2012.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
#include "HMSBenhAnView.h"
class CHMS_OBADTParkinsonDongKinh : public CHMSBenhAnView{
protected:
public:
	CGuiLabel		m_wndTitle;
	CGuiLabel		m_wndHoVaTenLabel;
	CGuiTextCtrl	m_wndHoVaTen;
	CGuiLabel		m_wndNamSinhLabel;
	CGuiNumberCtrl	m_wndNamSinh;
	CGuiCheckBox	m_wndNam;
	CGuiCheckBox	m_wndNu;
	CGuiLabel		m_wndCapBacLabel;
	CGuiTextCtrl	m_wndCapBac;
	CGuiLabel		m_wndChucVuLabel;
	CGuiTextCtrl	m_wndChucVu;
	CGuiLabel		m_wndQueQuanLabel;
	CGuiTextCtrl	m_wndQueQuan;
	CGuiLabel		m_wndDonViLabel;
	CGuiTextCtrl	m_wndDonVi;
	CGuiLabel		m_wndNgayMacBenhLabel;
	CGuiDateCtrl	m_wndNgayMacBenh;
	CGuiLabel		m_wndNgayVaoVienLabel;
	CGuiDateCtrl	m_wndNgayVaoVien;
	CGuiLabel		m_wndVaoVienLanThuLabel;
	CGuiNumberCtrl	m_wndVaoVienLanThu;
	CGuiLabel		m_wndBaoTinLabel;
	CGuiTextCtrl	m_wndBaoTin;
	CGuiLabel		m_wndChanDoanCuaDonViLabel;
	CGuiTextCtrl	m_wndChanDoanCuaDonVi;
	CGuiLabel		m_wndChanDoanKhoaKBLabel;
	CGuiTextCtrl	m_wndChanDoanKhoaKB;
	CGuiLabel		m_wndChanDoanKhoaKB2Label;
	CGuiTextCtrl	m_wndChanDoanKhoaKB2;
	CGuiLabel		m_wndChanDoanCuaKhoa;
	CGuiLabel		m_wndChanDoanSoBoLabel;
	CGuiTextCtrl	m_wndChanDoanSoBo;
	CGuiLabel		m_wndChanDoanPhanBietLabel;
	CGuiTextCtrl	m_wndChanDoanPhanBiet;
	CGuiLabel		m_wndBSChanDoanLabel;
	CGuiTextCtrl	m_wndBSChanDoan;
	CGuiLabel		m_wndNgayRaVienLabel;
	CGuiDateCtrl	m_wndNgayRaVien;
	CGuiLabel		m_wndSoNgayDieuTriLabel;
	CGuiNumberCtrl	m_wndSoNgayDieuTri;
	CGuiLabel		m_wndKetQuaDieuTri;
	CGuiCheckBox	m_wndKhoi;
	CGuiCheckBox	m_wndDo;
	CGuiCheckBox	m_wndTuVong;
	CGuiLabel		m_wndChanDoanRaVienLabel;
	CGuiTextCtrl	m_wndChanDoanRaVien;
	CGuiLabel		m_wndChanDoanTuVongLabel;
	CGuiTextCtrl	m_wndChanDoanTuVong;
	long m_nDocumentNo;
	CString	m_szHoVaTen;
	long	m_nNamSinh;
	BOOL	m_bNam;
	BOOL	m_bNu;
	CString	m_szCapBac;
	CString	m_szChucVu;
	CString	m_szQueQuan;
	CString	m_szDonVi;
	CString	m_szNgayMacBenh;
	CString	m_szNgayVaoVien;
	long	m_nVaoVienLanThu;
	CString	m_szBaoTin;
	CString	m_szChanDoanCuaDonVi;
	CString	m_szChanDoanKhoaKB;
	CString	m_szChanDoanKhoaKB2;
	CString	m_szChanDoanSoBo;
	CString	m_szChanDoanPhanBiet;
	CString	m_szBSChanDoan;
	CString	m_szNgayRaVien;
	long	m_nSoNgayDieuTri;
	BOOL	m_bKhoi;
	BOOL	m_bDo;
	BOOL	m_bTuVong;
	CString	m_szChanDoanRaVien;
	CString	m_szChanDoanTuVong;
	//void			OnHoVaTenChange(); 
	//void			OnHoVaTenSetfocus(); 
	//void			OnHoVaTenKillfocus(); 
	int			OnHoVaTenCheckValue(); 
	//void			OnNamSinhChange(); 
	//void			OnNamSinhSetfocus(); 
	//void			OnNamSinhKillfocus(); 
	int			OnNamSinhCheckValue(); 
	void			OnNamSelect(); 
	void			OnNuSelect(); 
	//void			OnCapBacChange(); 
	//void			OnCapBacSetfocus(); 
	//void			OnCapBacKillfocus(); 
	int			OnCapBacCheckValue(); 
	//void			OnChucVuChange(); 
	//void			OnChucVuSetfocus(); 
	//void			OnChucVuKillfocus(); 
	int			OnChucVuCheckValue(); 
	//void			OnQueQuanChange(); 
	//void			OnQueQuanSetfocus(); 
	//void			OnQueQuanKillfocus(); 
	int			OnQueQuanCheckValue(); 
	//void			OnDonViChange(); 
	//void			OnDonViSetfocus(); 
	//void			OnDonViKillfocus(); 
	int			OnDonViCheckValue(); 
	//void			OnNgayMacBenhChange(); 
	//void			OnNgayMacBenhSetfocus(); 
	//void			OnNgayMacBenhKillfocus(); 
	int			OnNgayMacBenhCheckValue(); 
	//void			OnNgayVaoVienChange(); 
	//void			OnNgayVaoVienSetfocus(); 
	//void			OnNgayVaoVienKillfocus(); 
	int			OnNgayVaoVienCheckValue(); 
	//void			OnVaoVienLanThuChange(); 
	//void			OnVaoVienLanThuSetfocus(); 
	//void			OnVaoVienLanThuKillfocus(); 
	int			OnVaoVienLanThuCheckValue(); 
	//void			OnBaoTinChange(); 
	//void			OnBaoTinSetfocus(); 
	//void			OnBaoTinKillfocus(); 
	int			OnBaoTinCheckValue(); 
	//void			OnChanDoanCuaDonViChange(); 
	//void			OnChanDoanCuaDonViSetfocus(); 
	//void			OnChanDoanCuaDonViKillfocus(); 
	int			OnChanDoanCuaDonViCheckValue(); 
	//void			OnChanDoanKhoaKBChange(); 
	//void			OnChanDoanKhoaKBSetfocus(); 
	//void			OnChanDoanKhoaKBKillfocus(); 
	int			OnChanDoanKhoaKBCheckValue(); 
	//void			OnChanDoanKhoaKB2Change(); 
	//void			OnChanDoanKhoaKB2Setfocus(); 
	//void			OnChanDoanKhoaKB2Killfocus(); 
	int			OnChanDoanKhoaKB2CheckValue(); 
	//void			OnChanDoanSoBoChange(); 
	//void			OnChanDoanSoBoSetfocus(); 
	//void			OnChanDoanSoBoKillfocus(); 
	int			OnChanDoanSoBoCheckValue(); 
	//void			OnChanDoanPhanBietChange(); 
	//void			OnChanDoanPhanBietSetfocus(); 
	//void			OnChanDoanPhanBietKillfocus(); 
	int			OnChanDoanPhanBietCheckValue(); 
	//void			OnBSChanDoanChange(); 
	//void			OnBSChanDoanSetfocus(); 
	//void			OnBSChanDoanKillfocus(); 
	int			OnBSChanDoanCheckValue(); 
	//void			OnNgayRaVienChange(); 
	//void			OnNgayRaVienSetfocus(); 
	//void			OnNgayRaVienKillfocus(); 
	int			OnNgayRaVienCheckValue(); 
	//void			OnSoNgayDieuTriChange(); 
	//void			OnSoNgayDieuTriSetfocus(); 
	//void			OnSoNgayDieuTriKillfocus(); 
	int			OnSoNgayDieuTriCheckValue(); 
	void			OnKhoiSelect(); 
	void			OnDoSelect(); 
	void			OnTuVongSelect(); 
	//void			OnChanDoanRaVienChange(); 
	//void			OnChanDoanRaVienSetfocus(); 
	//void			OnChanDoanRaVienKillfocus(); 
	int			OnChanDoanRaVienCheckValue(); 
	//void			OnChanDoanTuVongChange(); 
	//void			OnChanDoanTuVongSetfocus(); 
	//void			OnChanDoanTuVongKillfocus(); 
	int			OnChanDoanTuVongCheckValue(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	bool			OnUpdateSelect(); 
	void	OnCancelSelect();

	CHMS_OBADTParkinsonDongKinh();
	~CHMS_OBADTParkinsonDongKinh();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMS_OBADTParkinsonDongKinh(); 
	int OnEditHMS_OBADTParkinsonDongKinh(); 
	int OnDeleteHMS_OBADTParkinsonDongKinh(); 
	int OnSaveHMS_OBADTParkinsonDongKinh(); 
	int OnCancelHMS_OBADTParkinsonDongKinh(); 
	int OnHMS_OBADTParkinsonDongKinhListLoadData(); 
};
#endif
