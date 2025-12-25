#ifndef HMS_OBAKHOARANG_H
#define HMS_OBAKHOARANG_H

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
class CHMS_OBAKhoaRang : public CHMSBenhAnView{
protected:
public:
	CGuiLabel		m_wndTitle;
	CGuiLabel		m_wndHoVaTenLabel;
	CGuiTextCtrl	m_wndHoVaTen;
	CGuiLabel		m_wndNamSinhLabel;
	CGuiNumberCtrl	m_wndNamSinh;
	CGuiLabel		m_wndGioiTinhLabel;
	CGuiTextCtrl	m_wndGioiTinh;
	CGuiLabel		m_wndCapBacLabel;
	CGuiTextCtrl	m_wndCapBac;
	CGuiLabel		m_wndChucVuLabel;
	CGuiTextCtrl	m_wndChucVu;
	CGuiLabel		m_wndDoiTuongLabel;
	CGuiTextCtrl	m_wndDoiTuong;
	CGuiLabel		m_wndDonViLabel;
	CGuiTextCtrl	m_wndDonVi;
	CGuiLabel		m_wndSoTheBHYTLabel;
	CGuiTextCtrl	m_wndSoTheBHYT;
	CGuiLabel		m_wndDiaChiLabel;
	CGuiTextCtrl	m_wndDiaChi;
	CGuiLabel		m_wndNgayGioVaoVienLabel;
	CGuiDateTimeCtrl	m_wndNgayGioVaoVien;
	CGuiLabel		m_wndDiaChi2Label;
	CGuiTextCtrl	m_wndDiaChi2;
	CGuiLabel		m_wndSoDTLabel;
	CGuiTextCtrl	m_wndSoDT;
	CGuiLabel		m_wndChanDoanCuaKhoa;
	CGuiLabel		m_wndKetQuaDieuTri;
	CGuiCheckBox	m_wndThanhCong;
	CGuiCheckBox	m_wndThatBai;
	CGuiCheckBox	m_wndKhac;
	CGuiLabel		m_wndChanDoanSauPhauThuatLabel;
	CGuiTextCtrl	m_wndChanDoanSauPhauThuat;
	long m_nDocumentNo;
	CString	m_szHoVaTen;
	long	m_nNamSinh;
	CString	m_szGioiTinh;
	CString	m_szCapBac;
	CString	m_szChucVu;
	CString	m_szDoiTuong;
	CString	m_szDonVi;
	CString	m_szSoTheBHYT;
	CString	m_szDiaChi;
	CString	m_szNgayGioVaoVien;
	CString	m_szDiaChi2;
	CString	m_szSoDT;
	BOOL	m_bThanhCong;
	BOOL	m_bThatBai;
	BOOL	m_bKhac;
	CString	m_szChanDoanSauPhauThuat;
	//void			OnHoVaTenChange(); 
	//void			OnHoVaTenSetfocus(); 
	//void			OnHoVaTenKillfocus(); 
	int			OnHoVaTenCheckValue(); 
	//void			OnNamSinhChange(); 
	//void			OnNamSinhSetfocus(); 
	//void			OnNamSinhKillfocus(); 
	int			OnNamSinhCheckValue(); 
	void			OnGioiTinhSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGioiTinhSelendok(); 
	//void			OnGioiTinhSetfocus(); 
	//void			OnGioiTinhKillfocus(); 
	long			OnGioiTinhLoadData(); 
	//void			OnGioiTinhAddNew(); 
	void			OnCapBacSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCapBacSelendok(); 
	//void			OnCapBacSetfocus(); 
	//void			OnCapBacKillfocus(); 
	long			OnCapBacLoadData(); 
	//void			OnCapBacAddNew(); 
	void			OnChucVuSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChucVuSelendok(); 
	//void			OnChucVuSetfocus(); 
	//void			OnChucVuKillfocus(); 
	long			OnChucVuLoadData(); 
	//void			OnChucVuAddNew(); 
	void			OnDoiTuongSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoiTuongSelendok(); 
	//void			OnDoiTuongSetfocus(); 
	//void			OnDoiTuongKillfocus(); 
	long			OnDoiTuongLoadData(); 
	//void			OnDoiTuongAddNew(); 
	//void			OnDonViChange(); 
	//void			OnDonViSetfocus(); 
	//void			OnDonViKillfocus(); 
	int			OnDonViCheckValue(); 
	//void			OnSoTheBHYTChange(); 
	//void			OnSoTheBHYTSetfocus(); 
	//void			OnSoTheBHYTKillfocus(); 
	int			OnSoTheBHYTCheckValue(); 
	//void			OnDiaChiChange(); 
	//void			OnDiaChiSetfocus(); 
	//void			OnDiaChiKillfocus(); 
	int			OnDiaChiCheckValue(); 
	//void			OnNgayGioVaoVienChange(); 
	//void			OnNgayGioVaoVienSetfocus(); 
	//void			OnNgayGioVaoVienKillfocus(); 
	int			OnNgayGioVaoVienCheckValue(); 
	//void			OnDiaChi2Change(); 
	//void			OnDiaChi2Setfocus(); 
	//void			OnDiaChi2Killfocus(); 
	int			OnDiaChi2CheckValue(); 
	//void			OnSoDTChange(); 
	//void			OnSoDTSetfocus(); 
	//void			OnSoDTKillfocus(); 
	int			OnSoDTCheckValue(); 
	void			OnThanhCongSelect(); 
	void			OnThatBaiSelect(); 
	void			OnKhacSelect(); 
	//void			OnChanDoanSauPhauThuatChange(); 
	//void			OnChanDoanSauPhauThuatSetfocus(); 
	//void			OnChanDoanSauPhauThuatKillfocus(); 
	int			OnChanDoanSauPhauThuatCheckValue(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	bool			OnUpdateSelect(); 
	void	OnCancelSelect();
	CHMS_OBAKhoaRang();
	~CHMS_OBAKhoaRang();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMS_OBAKhoaRang(); 
	int OnEditHMS_OBAKhoaRang(); 
	int OnDeleteHMS_OBAKhoaRang(); 
	int OnSaveHMS_OBAKhoaRang(); 
	int OnCancelHMS_OBAKhoaRang(); 
	int OnHMS_OBAKhoaRangListLoadData(); 
};
#endif
