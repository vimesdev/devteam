#ifndef HMS_OBABENHNHANGHEPTHAN_H
#define HMS_OBABENHNHANGHEPTHAN_H

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
//*****************************
//MẪU BỆNH ÁN GHÉP THẬN
//*****************************
class CHMS_OBABenhNhanGhepThan : public CHMSBenhAnView{
protected:
public:
	CGuiLabel		m_wndTitle;
	CGuiLabel		m_wndTitle1;
	CGuiLabel		m_wndThoiGianGhepLabel;
	CGuiDateCtrl	m_wndThoiGianGhep;
	CGuiLabel		m_wndViTriGhepLabel;
	CGuiTextCtrl	m_wndViTriGhep;
	CGuiLabel		m_wndTinhTrangVetMoLabel;
	CGuiTextCtrl	m_wndTinhTrangVetMo;
	CGuiLabel		m_wndThuocUcCheMienDich;
	CGuiCheckBox	m_wndCNIs;
	CGuiLabel		m_wndLieu1Label;
	CGuiTextCtrl	m_wndLieu1;
	CGuiCheckBox	m_wndCysA;
	CGuiLabel		m_wndLieu2Label;
	CGuiTextCtrl	m_wndLieu2;
	CGuiCheckBox	m_wndMMF;
	CGuiLabel		m_wndLieu3Label;
	CGuiTextCtrl	m_wndLieu3;
	CGuiCheckBox	m_wndCorticoid;
	CGuiLabel		m_wndLieuLabel;
	CGuiTextCtrl	m_wndLieu;
	CGuiLabel		m_wndThuocKhacLabel;
	CGuiTextCtrl	m_wndThuocKhac;
	CGuiLabel		m_wndTacDungPhuLabel;
	CGuiTextCtrl	m_wndTacDungPhu;
	CGuiLabel		m_wndDieuTriThieuMau;
	CGuiCheckBox	m_wndThuocTaoHongCau;
	CGuiLabel		m_wndLieu5Label;
	CGuiTextCtrl	m_wndLieu5;
	CGuiCheckBox	m_wndThuocSat;
	CGuiLabel		m_wndLieu6Label;
	CGuiTextCtrl	m_wndLieu6;
	CGuiCheckBox	m_wndTruyenMau;
	CGuiLabel		m_wndHaAp;
	CGuiCheckBox	m_wndUcCheMenChuyen;
	CGuiLabel		m_wndLieu7Label;
	CGuiTextCtrl	m_wndLieu7;
	CGuiCheckBox	m_wndUcCheThuTheAT;
	CGuiLabel		m_wndLieu8Label;
	CGuiTextCtrl	m_wndLieu8;
	CGuiCheckBox	m_wndUcCheCanxi;
	CGuiLabel		m_wndLieu9Label;
	CGuiTextCtrl	m_wndLieu9;
	CGuiCheckBox	m_wndUcCheBeta;
	CGuiLabel		m_wndLieu10Label;
	CGuiTextCtrl	m_wndLieu10;
	CGuiCheckBox	m_wndLoiTieu;
	CGuiLabel		m_wndLieu11Label;
	CGuiTextCtrl	m_wndLieu11;
	CGuiLabel		m_wndHaDuongMauLabel;
	CGuiTextCtrl	m_wndHaDuongMau;
	CGuiLabel		m_wndGiamAcidUricLabel;
	CGuiTextCtrl	m_wndGiamAcidUric;
	CGuiLabel		m_wndThuocKhac2Label;
	CGuiTextCtrl	m_wndThuocKhac2;
	CGuiLabel		m_wndNguyenNhanSuyThan;
	CGuiCheckBox	m_wndVCTM;
	CGuiCheckBox	m_wndTHA;
	CGuiCheckBox	m_wndDTD;
	CGuiCheckBox	m_wndLupus;
	CGuiCheckBox	m_wndThanBamSinh;
	CGuiCheckBox	m_wndViemKheThan;
	CGuiLabel		m_wndCacBenhKemTheoLabel;
	CGuiTextCtrl	m_wndCacBenhKemTheo;
	CGuiLabel		m_wndKhamBenh;
	CGuiLabel		m_wndToanTrangChung;
	CGuiCheckBox	m_wndMetMoi;
	CGuiCheckBox	m_wndBuonNon;
	CGuiCheckBox	m_wndHoaMatChongMat;
	CGuiCheckBox	m_wndDaNiemMacNhot;
	CGuiCheckBox	m_wndPhu;
	CGuiCheckBox	m_wndNuocTieuh;
	CGuiLabel		m_wndThanTietNieu;
	CGuiLabel		m_wndMaiSacNuocTieu;
	CGuiCheckBox	m_wndTrong;
	CGuiCheckBox	m_wndHong;
	CGuiCheckBox	m_wndDauVungThanGhep;
	CGuiCheckBox	m_wndTiengThoiVungThanGhep;
	CGuiLabel		m_wndTrieuChungKhacLabel;
	CGuiTextCtrl	m_wndTrieuChungKhac;
	long m_nDocumentNo;
	CString	m_szThoiGianGhep;
	CString	m_szViTriGhep;
	CString	m_szTinhTrangVetMo;
	BOOL	m_bCNIs;
	CString	m_szLieu1;
	BOOL	m_bCysA;
	CString	m_szLieu2;
	BOOL	m_bMMF;
	CString	m_szLieu3;
	BOOL	m_bCorticoid;
	CString	m_szLieu;
	CString	m_szThuocKhac;
	CString	m_szTacDungPhu;
	BOOL	m_bThuocTaoHongCau;
	CString	m_szLieu5;
	BOOL	m_bThuocSat;
	CString	m_szLieu6;
	BOOL	m_bTruyenMau;
	BOOL	m_bUcCheMenChuyen;
	CString	m_szLieu7;
	BOOL	m_bUcCheThuTheAT;
	CString	m_szLieu8;
	BOOL	m_bUcCheCanxi;
	CString	m_szLieu9;
	BOOL	m_bUcCheBeta;
	CString	m_szLieu10;
	BOOL	m_bLoiTieu;
	CString	m_szLieu11;
	CString	m_szHaDuongMau;
	CString	m_szGiamAcidUric;
	CString	m_szThuocKhac2;
	BOOL	m_bVCTM;
	BOOL	m_bTHA;
	BOOL	m_bDTD;
	BOOL	m_bLupus;
	BOOL	m_bThanBamSinh;
	BOOL	m_bViemKheThan;
	CString	m_szCacBenhKemTheo;
	BOOL	m_bMetMoi;
	BOOL	m_bBuonNon;
	BOOL	m_bHoaMatChongMat;
	BOOL	m_bDaNiemMacNhot;
	BOOL	m_bPhu;
	BOOL	m_bNuocTieuh;
	BOOL	m_bTrong;
	BOOL	m_bHong;
	BOOL	m_bDauVungThanGhep;
	BOOL	m_bTiengThoiVungThanGhep;
	CString	m_szTrieuChungKhac;
	//void			OnThoiGianGhepChange(); 
	//void			OnThoiGianGhepSetfocus(); 
	//void			OnThoiGianGhepKillfocus(); 
	int			OnThoiGianGhepCheckValue(); 
	//void			OnViTriGhepChange(); 
	//void			OnViTriGhepSetfocus(); 
	//void			OnViTriGhepKillfocus(); 
	int			OnViTriGhepCheckValue(); 
	//void			OnTinhTrangVetMoChange(); 
	//void			OnTinhTrangVetMoSetfocus(); 
	//void			OnTinhTrangVetMoKillfocus(); 
	int			OnTinhTrangVetMoCheckValue(); 
	void			OnCNIsSelect(); 
	//void			OnLieu1Change(); 
	//void			OnLieu1Setfocus(); 
	//void			OnLieu1Killfocus(); 
	int			OnLieu1CheckValue(); 
	void			OnCysASelect(); 
	//void			OnLieu2Change(); 
	//void			OnLieu2Setfocus(); 
	//void			OnLieu2Killfocus(); 
	int			OnLieu2CheckValue(); 
	void			OnMMFSelect(); 
	//void			OnLieu3Change(); 
	//void			OnLieu3Setfocus(); 
	//void			OnLieu3Killfocus(); 
	int			OnLieu3CheckValue(); 
	void			OnCorticoidSelect(); 
	//void			OnLieuChange(); 
	//void			OnLieuSetfocus(); 
	//void			OnLieuKillfocus(); 
	int			OnLieuCheckValue(); 
	//void			OnThuocKhacChange(); 
	//void			OnThuocKhacSetfocus(); 
	//void			OnThuocKhacKillfocus(); 
	int			OnThuocKhacCheckValue(); 
	//void			OnTacDungPhuChange(); 
	//void			OnTacDungPhuSetfocus(); 
	//void			OnTacDungPhuKillfocus(); 
	int			OnTacDungPhuCheckValue(); 
	void			OnThuocTaoHongCauSelect(); 
	//void			OnLieu5Change(); 
	//void			OnLieu5Setfocus(); 
	//void			OnLieu5Killfocus(); 
	int			OnLieu5CheckValue(); 
	void			OnThuocSatSelect(); 
	//void			OnLieu6Change(); 
	//void			OnLieu6Setfocus(); 
	//void			OnLieu6Killfocus(); 
	int			OnLieu6CheckValue(); 
	void			OnTruyenMauSelect(); 
	void			OnUcCheMenChuyenSelect(); 
	//void			OnLieu7Change(); 
	//void			OnLieu7Setfocus(); 
	//void			OnLieu7Killfocus(); 
	int			OnLieu7CheckValue(); 
	void			OnUcCheThuTheATSelect(); 
	//void			OnLieu8Change(); 
	//void			OnLieu8Setfocus(); 
	//void			OnLieu8Killfocus(); 
	int			OnLieu8CheckValue(); 
	void			OnUcCheCanxiSelect(); 
	//void			OnLieu9Change(); 
	//void			OnLieu9Setfocus(); 
	//void			OnLieu9Killfocus(); 
	int			OnLieu9CheckValue(); 
	void			OnUcCheBetaSelect(); 
	//void			OnLieu10Change(); 
	//void			OnLieu10Setfocus(); 
	//void			OnLieu10Killfocus(); 
	int			OnLieu10CheckValue(); 
	void			OnLoiTieuSelect(); 
	//void			OnLieu11Change(); 
	//void			OnLieu11Setfocus(); 
	//void			OnLieu11Killfocus(); 
	int			OnLieu11CheckValue(); 
	//void			OnHaDuongMauChange(); 
	//void			OnHaDuongMauSetfocus(); 
	//void			OnHaDuongMauKillfocus(); 
	int			OnHaDuongMauCheckValue(); 
	//void			OnGiamAcidUricChange(); 
	//void			OnGiamAcidUricSetfocus(); 
	//void			OnGiamAcidUricKillfocus(); 
	int			OnGiamAcidUricCheckValue(); 
	//void			OnThuocKhac2Change(); 
	//void			OnThuocKhac2Setfocus(); 
	//void			OnThuocKhac2Killfocus(); 
	int			OnThuocKhac2CheckValue(); 
	void			OnVCTMSelect(); 
	void			OnTHASelect(); 
	void			OnDTDSelect(); 
	void			OnLupusSelect(); 
	void			OnThanBamSinhSelect(); 
	void			OnViemKheThanSelect(); 
	//void			OnCacBenhKemTheoChange(); 
	//void			OnCacBenhKemTheoSetfocus(); 
	//void			OnCacBenhKemTheoKillfocus(); 
	int			OnCacBenhKemTheoCheckValue(); 
	void			OnMetMoiSelect(); 
	void			OnBuonNonSelect(); 
	void			OnHoaMatChongMatSelect(); 
	void			OnDaNiemMacNhotSelect(); 
	void			OnPhuSelect(); 
	void			OnNuocTieuhSelect(); 
	void			OnTrongSelect(); 
	void			OnHongSelect(); 
	void			OnDauVungThanGhepSelect(); 
	void			OnTiengThoiVungThanGhepSelect(); 
	//void			OnTrieuChungKhacChange(); 
	//void			OnTrieuChungKhacSetfocus(); 
	//void			OnTrieuChungKhacKillfocus(); 
	int			OnTrieuChungKhacCheckValue(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	bool			OnUpdateSelect(); 
	void		OnCancelSelect();
	CHMS_OBABenhNhanGhepThan(CWnd *pParent);
	~CHMS_OBABenhNhanGhepThan();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMS_OBABenhNhanGhepThan(); 
	int OnEditHMS_OBABenhNhanGhepThan(); 
	int OnDeleteHMS_OBABenhNhanGhepThan(); 
	int OnSaveHMS_OBABenhNhanGhepThan(); 
	int OnCancelHMS_OBABenhNhanGhepThan(); 
	int OnHMS_OBABenhNhanGhepThanListLoadData(); 
};
#endif
