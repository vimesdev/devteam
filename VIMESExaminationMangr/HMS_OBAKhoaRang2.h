#ifndef HMS_OBAKHOARANG2_H
#define HMS_OBAKHOARANG2_H

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
class CHMS_OBAKhoaRang2 : public CHMSBenhAnView{
protected:
public:
	CGuiLabel		m_wndPHANHOIBENH;
	CGuiLabel		m_wndLyDoVaoVienLabel;
	CGuiTextCtrl	m_wndLyDoVaoVien;
	CGuiLabel		m_wndBenhSuLabel;
	CGuiTextCtrl	m_wndBenhSu;
	CGuiLabel		m_wndTienSu;
	CGuiLabel		m_wndGiaDinhLabel;
	CGuiTextCtrl	m_wndGiaDinh;
	CGuiLabel		m_wndBanThan;
	CGuiCheckBox	m_wndTieuDuong;
	CGuiCheckBox	m_wndHuyetAp;
	CGuiCheckBox	m_wndDiUng;
	CGuiCheckBox	m_wndKhac;
	CGuiLabel		m_wndPHANKHAMBENH;
	CGuiLabel		m_wndToanThan;
	CGuiLabel		m_wndYThucLabel;
	CGuiTextCtrl	m_wndYThuc;
	CGuiLabel		m_wndTimMachLabel;
	CGuiLabel		m_wndMachLabel;
	CGuiTextCtrl	m_wndMach;
	CGuiLabel		m_wndNhietdoLabel;
	CGuiTextCtrl	m_wndNhietdo;
	CGuiLabel		m_wndHALabel;
	CGuiTextCtrl	m_wndHA;
	CGuiLabel		m_wndThoiQuen;
	CGuiLabel		m_wndHutThuocLa;
	CGuiCheckBox	m_wndKhonghut;
	CGuiCheckBox	m_wnd510dieu;
	CGuiCheckBox	m_wndtren10dieu;
	CGuiLabel		m_wndTatNghienRang;
	CGuiCheckBox	m_wndConghien;
	CGuiCheckBox	m_wndKonghien;
	CGuiLabel		m_wndTinhHinhRangMieng;
	CGuiLabel		m_wndVeSinhRangMieng;
	CGuiCheckBox	m_wndvsrTot;
	CGuiCheckBox	m_wndvsrTrungBinh;
	CGuiCheckBox	m_wndVsrKem;
	CGuiLabel		m_wndCaoRangViemLoi;
	CGuiCheckBox	m_wndcrvlCo;
	CGuiCheckBox	m_wndcrvlKhong;
	CGuiLabel		m_wndKhopCan;
	CGuiCheckBox	m_wndLoaiI;
	CGuiCheckBox	m_wndLoaiII;
	CGuiCheckBox	m_wndLoaiIII;
	CGuiLabel		m_wndTutLoiTaiRangNho;
	CGuiCheckBox	m_wndtlrmCo;
	CGuiCheckBox	m_wndtlrmKhong;
	CGuiLabel		m_wndLoaiMoLoi;
	CGuiCheckBox	m_wndDay;
	CGuiCheckBox	m_wndMong;
	CGuiLabel		m_wndDuongCuoi;
	CGuiCheckBox	m_wndCao;
	CGuiCheckBox	m_wnddcTrungbinh;
	CGuiLabel		m_wndCacXNDaLam;
	CGuiLabel		m_wndChanDoanLabel;
	CGuiTextCtrl	m_wndChanDoan;
	CGuiLabel		m_wndKeHoachDieuTri;
	CGuiLabel		m_wndNhoRang;
	CGuiCheckBox	m_wndThuong;
	CGuiCheckBox	m_wndPhauThuat;
	CGuiLabel		m_wndImplant;
	CGuiCheckBox	m_wndTucThi;
	CGuiCheckBox	m_wndSom;
	CGuiCheckBox	m_wndMuon;
	CGuiLabel		m_wndKetHopNangXoang;
	CGuiCheckBox	m_wndKin;
	CGuiCheckBox	m_wndHo;
	CGuiLabel		m_wndGhepxuong;
	CGuiCheckBox	m_wndBlock;
	CGuiCheckBox	m_wndMangTitan;
	CGuiLabel		m_wndlp;
	CGuiLabel		m_wndmmHg;
	long m_nDocumentNo;
	CString	m_szLyDoVaoVien;
	CString	m_szBenhSu;
	CString	m_szGiaDinh;
	BOOL	m_bTieuDuong;
	BOOL	m_bHuyetAp;
	BOOL	m_bDiUng;
	BOOL	m_bKhac;
	CString	m_szYThuc;
	CString	m_szMach;
	CString	m_szNhietdo;
	CString	m_szHA;
	BOOL	m_bKhonghut;
	BOOL	m_b510dieu;
	BOOL	m_btren10dieu;
	BOOL	m_bConghien;
	BOOL	m_bKonghien;
	BOOL	m_bvsrTot;
	BOOL	m_bvsrTrungBinh;
	BOOL	m_bVsrKem;
	BOOL	m_bcrvlCo;
	BOOL	m_bcrvlKhong;
	BOOL	m_bLoaiI;
	BOOL	m_bLoaiII;
	BOOL	m_bLoaiIII;
	BOOL	m_btlrmCo;
	BOOL	m_btlrmKhong;
	BOOL	m_bDay;
	BOOL	m_bMong;
	BOOL	m_bCao;
	BOOL	m_bdcTrungbinh;
	CString	m_szChanDoan;
	BOOL	m_bThuong;
	BOOL	m_bPhauThuat;
	BOOL	m_bTucThi;
	BOOL	m_bSom;
	BOOL	m_bMuon;
	BOOL	m_bKin;
	BOOL	m_bHo;
	BOOL	m_bBlock;
	BOOL	m_bMangTitan;
	//void			OnLyDoVaoVienChange(); 
	//void			OnLyDoVaoVienSetfocus(); 
	//void			OnLyDoVaoVienKillfocus(); 
	int			OnLyDoVaoVienCheckValue(); 
	//void			OnBenhSuChange(); 
	//void			OnBenhSuSetfocus(); 
	//void			OnBenhSuKillfocus(); 
	int			OnBenhSuCheckValue(); 
	//void			OnGiaDinhChange(); 
	//void			OnGiaDinhSetfocus(); 
	//void			OnGiaDinhKillfocus(); 
	int			OnGiaDinhCheckValue(); 
	void			OnTieuDuongSelect(); 
	void			OnHuyetApSelect(); 
	void			OnDiUngSelect(); 
	void			OnKhacSelect(); 
	//void			OnYThucChange(); 
	//void			OnYThucSetfocus(); 
	//void			OnYThucKillfocus(); 
	int			OnYThucCheckValue(); 
	//void			OnMachChange(); 
	//void			OnMachSetfocus(); 
	//void			OnMachKillfocus(); 
	int			OnMachCheckValue(); 
	//void			OnNhietdoChange(); 
	//void			OnNhietdoSetfocus(); 
	//void			OnNhietdoKillfocus(); 
	int			OnNhietdoCheckValue(); 
	//void			OnHAChange(); 
	//void			OnHASetfocus(); 
	//void			OnHAKillfocus(); 
	int			OnHACheckValue(); 
	void			OnKhonghutSelect(); 
	void			On510dieuSelect(); 
	void			Ontren10dieuSelect(); 
	void			OnConghienSelect(); 
	void			OnKonghienSelect(); 
	void			OnvsrTotSelect(); 
	void			OnvsrTrungBinhSelect(); 
	void			OnVsrKemSelect(); 
	void			OncrvlCoSelect(); 
	void			OncrvlKhongSelect(); 
	void			OnLoaiISelect(); 
	void			OnLoaiIISelect(); 
	void			OnLoaiIIISelect(); 
	void			OntlrmCoSelect(); 
	void			OntlrmKhongSelect(); 
	void			OnDaySelect(); 
	void			OnMongSelect(); 
	void			OnCaoSelect(); 
	void			OndcTrungbinhSelect(); 
	//void			OnChanDoanChange(); 
	//void			OnChanDoanSetfocus(); 
	//void			OnChanDoanKillfocus(); 
	int			OnChanDoanCheckValue(); 
	void			OnThuongSelect(); 
	void			OnPhauThuatSelect(); 
	void			OnTucThiSelect(); 
	void			OnSomSelect(); 
	void			OnMuonSelect(); 
	void			OnKinSelect(); 
	void			OnHoSelect(); 
	void			OnBlockSelect(); 
	void			OnMangTitanSelect(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	bool			OnUpdateSelect(); 
	void		OnCancelSelect();
	CHMS_OBAKhoaRang2();
	~CHMS_OBAKhoaRang2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMS_OBAKhoaRang2(); 
	int OnEditHMS_OBAKhoaRang2(); 
	int OnDeleteHMS_OBAKhoaRang2(); 
	int OnSaveHMS_OBAKhoaRang2(); 
	int OnCancelHMS_OBAKhoaRang2(); 
	int OnHMS_OBAKhoaRang2ListLoadData(); 
};
#endif
