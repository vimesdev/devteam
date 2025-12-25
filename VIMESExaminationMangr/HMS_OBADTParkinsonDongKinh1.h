#ifndef HMS_OBADTPARKINSONDONGKINH1_H
#define HMS_OBADTPARKINSONDONGKINH1_H

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
class CHMS_OBADTParkinsonDongKinh1 : public CHMSBenhAnView{
protected:
public:
	CGuiLabel		m_wndTitle1;
	CGuiLabel		m_wndLyDoVaoVienLabel;
	CGuiTextCtrl	m_wndLyDoVaoVien;
	CGuiLabel		m_wndBenhSuLabel;
	CGuiTextCtrl	m_wndBenhSu;
	CGuiLabel		m_wndTienSu;
	CGuiLabel		m_wndBanThanLabel;
	CGuiTextCtrl	m_wndBanThan;
	CGuiLabel		m_wndGiaDinhLabel;
	CGuiTextCtrl	m_wndGiaDinh;
	CGuiLabel		m_wndTitle2;
	CGuiLabel		m_wndToanThanLabel;
	CGuiTextCtrl	m_wndToanThan;
	CGuiLabel		m_wndThanTietNieuLabel;
	CGuiTextCtrl	m_wndThanTietNieu;
	CGuiLabel		m_wndTuanHoanLabel;
	CGuiTextCtrl	m_wndTuanHoan;
	CGuiLabel		m_wndHoHapLabel;
	CGuiTextCtrl	m_wndHoHap;
	CGuiLabel		m_wndTieuHoaLabel;
	CGuiTextCtrl	m_wndTieuHoa;
	CGuiLabel		m_wndTamThanKinhLabel;
	CGuiTextCtrl	m_wndTamThanKinh;
	CGuiLabel		m_wndChuyenKhoacKhacLabel;
	CGuiTextCtrl	m_wndChuyenKhoacKhac;
	CGuiLabel		m_wndCacXNDaLamLabel;
	CGuiTextCtrl	m_wndCacXNDaLam;
	CGuiLabel		m_wndChanDoan;
	CGuiLabel		m_wndChanDoanSoBoLabel;
	CGuiTextCtrl	m_wndChanDoanSoBo;
	CGuiLabel		m_wndChanDoanPhanBietLabel;
	CGuiTextCtrl	m_wndChanDoanPhanBiet;
	CGuiLabel		m_wndChanDoanQuyetDinhLabel;
	CGuiTextCtrl	m_wndChanDoanQuyetDinh;
	CGuiLabel		m_wndKeHoachXN;
	CGuiLabel		m_wndXNThuongQuyLabel;
	CGuiTextCtrl	m_wndXNThuongQuy;
	CGuiLabel		m_wndKetHoachDieuTriLabel;
	CGuiTextCtrl	m_wndKetHoachDieuTri;
	CGuiLabel		m_wndTienLuongLabel;
	CGuiTextCtrl	m_wndTienLuong;
	long m_nDocumentNo;
	CString	m_szLyDoVaoVien;
	CString	m_szBenhSu;
	CString	m_szBanThan;
	CString	m_szGiaDinh;
	CString	m_szToanThan;
	CString	m_szThanTietNieu;
	CString	m_szTuanHoan;
	CString	m_szHoHap;
	CString	m_szTieuHoa;
	CString	m_szTamThanKinh;
	CString	m_szChuyenKhoacKhac;
	CString	m_szCacXNDaLam;
	CString	m_szChanDoanSoBo;
	CString	m_szChanDoanPhanBiet;
	CString	m_szChanDoanQuyetDinh;
	CString	m_szXNThuongQuy;
	CString	m_szKetHoachDieuTri;
	CString	m_szTienLuong;
	//void			OnLyDoVaoVienChange(); 
	//void			OnLyDoVaoVienSetfocus(); 
	//void			OnLyDoVaoVienKillfocus(); 
	int			OnLyDoVaoVienCheckValue(); 
	//void			OnBenhSuChange(); 
	//void			OnBenhSuSetfocus(); 
	//void			OnBenhSuKillfocus(); 
	int			OnBenhSuCheckValue(); 
	//void			OnBanThanChange(); 
	//void			OnBanThanSetfocus(); 
	//void			OnBanThanKillfocus(); 
	int			OnBanThanCheckValue(); 
	//void			OnGiaDinhChange(); 
	//void			OnGiaDinhSetfocus(); 
	//void			OnGiaDinhKillfocus(); 
	int			OnGiaDinhCheckValue(); 
	//void			OnToanThanChange(); 
	//void			OnToanThanSetfocus(); 
	//void			OnToanThanKillfocus(); 
	int			OnToanThanCheckValue(); 
	//void			OnThanTietNieuChange(); 
	//void			OnThanTietNieuSetfocus(); 
	//void			OnThanTietNieuKillfocus(); 
	int			OnThanTietNieuCheckValue(); 
	//void			OnTuanHoanChange(); 
	//void			OnTuanHoanSetfocus(); 
	//void			OnTuanHoanKillfocus(); 
	int			OnTuanHoanCheckValue(); 
	//void			OnHoHapChange(); 
	//void			OnHoHapSetfocus(); 
	//void			OnHoHapKillfocus(); 
	int			OnHoHapCheckValue(); 
	//void			OnTieuHoaChange(); 
	//void			OnTieuHoaSetfocus(); 
	//void			OnTieuHoaKillfocus(); 
	int			OnTieuHoaCheckValue(); 
	//void			OnTamThanKinhChange(); 
	//void			OnTamThanKinhSetfocus(); 
	//void			OnTamThanKinhKillfocus(); 
	int			OnTamThanKinhCheckValue(); 
	//void			OnChuyenKhoacKhacChange(); 
	//void			OnChuyenKhoacKhacSetfocus(); 
	//void			OnChuyenKhoacKhacKillfocus(); 
	int			OnChuyenKhoacKhacCheckValue(); 
	//void			OnCacXNDaLamChange(); 
	//void			OnCacXNDaLamSetfocus(); 
	//void			OnCacXNDaLamKillfocus(); 
	int			OnCacXNDaLamCheckValue(); 
	//void			OnChanDoanSoBoChange(); 
	//void			OnChanDoanSoBoSetfocus(); 
	//void			OnChanDoanSoBoKillfocus(); 
	int			OnChanDoanSoBoCheckValue(); 
	//void			OnChanDoanPhanBietChange(); 
	//void			OnChanDoanPhanBietSetfocus(); 
	//void			OnChanDoanPhanBietKillfocus(); 
	int			OnChanDoanPhanBietCheckValue(); 
	//void			OnChanDoanQuyetDinhChange(); 
	//void			OnChanDoanQuyetDinhSetfocus(); 
	//void			OnChanDoanQuyetDinhKillfocus(); 
	int			OnChanDoanQuyetDinhCheckValue(); 
	//void			OnXNThuongQuyChange(); 
	//void			OnXNThuongQuySetfocus(); 
	//void			OnXNThuongQuyKillfocus(); 
	int			OnXNThuongQuyCheckValue(); 
	//void			OnKetHoachDieuTriChange(); 
	//void			OnKetHoachDieuTriSetfocus(); 
	//void			OnKetHoachDieuTriKillfocus(); 
	int			OnKetHoachDieuTriCheckValue(); 
	//void			OnTienLuongChange(); 
	//void			OnTienLuongSetfocus(); 
	//void			OnTienLuongKillfocus(); 
	int			OnTienLuongCheckValue(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	bool			OnUpdateSelect(); 
	void	OnCancelSelect();
	CHMS_OBADTParkinsonDongKinh1();
	~CHMS_OBADTParkinsonDongKinh1();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMS_OBADTParkinsonDongKinh1(); 
	int OnEditHMS_OBADTParkinsonDongKinh1(); 
	int OnDeleteHMS_OBADTParkinsonDongKinh1(); 
	int OnSaveHMS_OBADTParkinsonDongKinh1(); 
	int OnCancelHMS_OBADTParkinsonDongKinh1(); 
	int OnHMS_OBADTParkinsonDongKinh1ListLoadData(); 
};
#endif
