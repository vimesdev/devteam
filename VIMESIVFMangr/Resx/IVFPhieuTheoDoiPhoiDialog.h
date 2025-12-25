#ifndef IVFPHIEUTHEODOIPHOIDIALOG_H
#define IVFPHIEUTHEODOIPHOIDIALOG_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CIVFPhieuTheoDoiPhoiDialog : public CGuiDialog{
protected:
public:
	CGuiCheckBox	m_wndXinTrung;
	CGuiLabel		m_wndKyThuat;
	CGuiCheckBox	m_wndIVF;
	CGuiCheckBox	m_wndICSI;
	CGuiCheckBox	m_wndICSIAOA;
	CGuiLabel		m_wndNgayChocHutLabel;
	CGuiDateCtrl	m_wndNgayChocHut;
	CGuiLabel		m_wndTinhTrung;
	CGuiCheckBox	m_wndTuoi;
	CGuiCheckBox	m_wndTru;
	CGuiCheckBox	m_wndPESA;
	CGuiCheckBox	m_wndTESE;
	CGuiLabel		m_wndBSChocHutLabel;
	CGuiComboBox	m_wndBSChocHut;
	CGuiLabel		m_wndVLabel;
	CGuiTextCtrl	m_wndV;
	CGuiLabel		m_wndMl;
	CGuiLabel		m_wndMDLabel;
	CGuiTextCtrl	m_wndMD;
	CGuiLabel		m_wnd10^6ml;
	CGuiLabel		m_wndDDLabel;
	CGuiTextCtrl	m_wndDD;
	CGuiLabel		m_wndpercentLabel1;
	CGuiLabel		m_wndHDLabel;
	CGuiTextCtrl	m_wndHD;
	CGuiLabel		m_wndPercentLabel2;
	CGuiLabel		m_wndGioHCGLabel;
	CGuiTimeCtrl	m_wndGioHCG;
	CGuiLabel		m_wndGioChocHutLabel;
	CGuiTimeCtrl	m_wndGioChocHut;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDanhgiachatluongtrungLabel;
	CGuiTextCtrl	m_wndDanhgiachatluongtrung;
	CGuiLabel		m_wndNhanXetLabel;
	CGuiTextCtrl	m_wndNhanXet;
	CGuiLabel		m_wndDanhgiachatluongtinhtrungLabel;
	CGuiTextCtrl	m_wndDanhgiachatluongtinhtrung;
	CGuiLabel		m_wndTongSoTrungLabel;
	CGuiNumberCtrl	m_wndTongSoTrung;
	CGuiLabel		m_wndSoTrungICSILabel;
	CGuiNumberCtrl	m_wndSoTrungICSI;
	CGuiLabel		m_wndThuTinhLabel;
	CGuiNumberCtrl	m_wndThuTinh;
	CGuiLabel		m_wndDanhGiaChatLuongPhoiLabel;
	CGuiTextCtrl	m_wndDanhGiaChatLuongPhoi;
	CGuiLabel		m_wndTongSoPhoiLabel;
	CGuiNumberCtrl	m_wndTongSoPhoi;
	CGuiLabel		m_wndSoPhoiChuyenLabel;
	CGuiNumberCtrl	m_wndSoPhoiChuyen;
	CGuiLabel		m_wndSoPhoiTruLabel;
	CGuiNumberCtrl	m_wndSoPhoiTru;
	CGuiLabel		m_wndLanLabel;
	CGuiNumberCtrl	m_wndLan;
	CGuiLabel		m_wndChuyenPhoiLabel;
	CGuiCheckBox	m_wndDe;
	CGuiCheckBox	m_wndChuyenPhoi_Kho;
	CGuiLabel		m_wndPozziCatheter;
	CGuiLabel		m_wndNMTCLabel;
	CGuiNumberCtrl	m_wndNMTC;
	CGuiLabel		m_wndSotPhoiLabel;
	CGuiNumberCtrl	m_wndSotPhoi;
	CGuiLabel		m_wndChuyenLan;
	CGuiCheckBox	m_wndSach;
	CGuiCheckBox	m_wndNhay;
	CGuiCheckBox	m_wndMau;
	CGuiLabel		m_wndPARALabel;
	CGuiNumberCtrl	m_wndPARA;
	CGuiLabel		m_wndGioAHLabel;
	CGuiTimeCtrl	m_wndGioAH;
	CGuiLabel		m_wndNguoiAHLabel;
	CGuiComboBox	m_wndNguoiAH;
	CGuiLabel		m_wndChiDinhLabel;
	CGuiTextCtrl	m_wndChiDinh;
	CGuiLabel		m_wndGioCPLabel;
	CGuiTimeCtrl	m_wndGioCP;
	CGuiLabel		m_wndNguoiLoadLabel;
	CGuiComboBox	m_wndNguoiLoad;
	CGuiLabel		m_wndBacsiCPLabel;
	CGuiComboBox	m_wndBacsiCP;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	BOOL	m_bXinTrung;
	BOOL	m_bIVF;
	BOOL	m_bICSI;
	BOOL	m_bICSIAOA;
	CString	m_szNgayChocHut;
	BOOL	m_bTuoi;
	BOOL	m_bTru;
	BOOL	m_bPESA;
	BOOL	m_bTESE;
	CString	m_szBSChocHutKey;
	CString	m_szV;
	CString	m_szMD;
	CString	m_szDD;
	CString	m_szHD;
	CString	m_szGioHCG;
	CString	m_szGioChocHut;
	CString	m_szDanhgiachatluongtrung;
	CString	m_szNhanXet;
	CString	m_szDanhgiachatluongtinhtrung;
	long	m_nTongSoTrung;
	long	m_nSoTrungICSI;
	long	m_nThuTinh;
	CString	m_szDanhGiaChatLuongPhoi;
	long	m_nTongSoPhoi;
	long	m_nSoPhoiChuyen;
	long	m_nSoPhoiTru;
	long	m_nLan;
	BOOL	m_bDe;
	BOOL	m_bChuyenPhoi_Kho;
	long	m_nNMTC;
	long	m_nSotPhoi;
	BOOL	m_bSach;
	BOOL	m_bNhay;
	BOOL	m_bMau;
	long	m_nPARA;
	CString	m_szGioAH;
	CString	m_szNguoiAHKey;
	CString	m_szChiDinh;
	CString	m_szGioCP;
	CString	m_szNguoiLoadKey;
	CString	m_szBacsiCPKey;
	void			OnXinTrungSelect(); 
	void			OnIVFSelect(); 
	void			OnICSISelect(); 
	void			OnICSIAOASelect(); 
	//void			OnNgayChocHutChange(); 
	//void			OnNgayChocHutSetfocus(); 
	//void			OnNgayChocHutKillfocus(); 
	int			OnNgayChocHutCheckValue(); 
	void			OnTuoiSelect(); 
	void			OnTruSelect(); 
	void			OnPESASelect(); 
	void			OnTESESelect(); 
	void			OnBSChocHutSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBSChocHutSelendok(); 
	//void			OnBSChocHutSetfocus(); 
	//void			OnBSChocHutKillfocus(); 
	long			OnBSChocHutLoadData(); 
	//void			OnBSChocHutAddNew(); 
	//void			OnVChange(); 
	//void			OnVSetfocus(); 
	//void			OnVKillfocus(); 
	int			OnVCheckValue(); 
	//void			OnMDChange(); 
	//void			OnMDSetfocus(); 
	//void			OnMDKillfocus(); 
	int			OnMDCheckValue(); 
	//void			OnDDChange(); 
	//void			OnDDSetfocus(); 
	//void			OnDDKillfocus(); 
	int			OnDDCheckValue(); 
	//void			OnHDChange(); 
	//void			OnHDSetfocus(); 
	//void			OnHDKillfocus(); 
	int			OnHDCheckValue(); 
	//void			OnGioHCGChange(); 
	//void			OnGioHCGSetfocus(); 
	//void			OnGioHCGKillfocus(); 
	int			OnGioHCGCheckValue(); 
	//void			OnGioChocHutChange(); 
	//void			OnGioChocHutSetfocus(); 
	//void			OnGioChocHutKillfocus(); 
	int			OnGioChocHutCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnDanhgiachatluongtrungChange(); 
	//void			OnDanhgiachatluongtrungSetfocus(); 
	//void			OnDanhgiachatluongtrungKillfocus(); 
	int			OnDanhgiachatluongtrungCheckValue(); 
	//void			OnNhanXetChange(); 
	//void			OnNhanXetSetfocus(); 
	//void			OnNhanXetKillfocus(); 
	int			OnNhanXetCheckValue(); 
	//void			OnDanhgiachatluongtinhtrungChange(); 
	//void			OnDanhgiachatluongtinhtrungSetfocus(); 
	//void			OnDanhgiachatluongtinhtrungKillfocus(); 
	int			OnDanhgiachatluongtinhtrungCheckValue(); 
	//void			OnTongSoTrungChange(); 
	//void			OnTongSoTrungSetfocus(); 
	//void			OnTongSoTrungKillfocus(); 
	int			OnTongSoTrungCheckValue(); 
	//void			OnSoTrungICSIChange(); 
	//void			OnSoTrungICSISetfocus(); 
	//void			OnSoTrungICSIKillfocus(); 
	int			OnSoTrungICSICheckValue(); 
	//void			OnThuTinhChange(); 
	//void			OnThuTinhSetfocus(); 
	//void			OnThuTinhKillfocus(); 
	int			OnThuTinhCheckValue(); 
	//void			OnDanhGiaChatLuongPhoiChange(); 
	//void			OnDanhGiaChatLuongPhoiSetfocus(); 
	//void			OnDanhGiaChatLuongPhoiKillfocus(); 
	int			OnDanhGiaChatLuongPhoiCheckValue(); 
	//void			OnTongSoPhoiChange(); 
	//void			OnTongSoPhoiSetfocus(); 
	//void			OnTongSoPhoiKillfocus(); 
	int			OnTongSoPhoiCheckValue(); 
	//void			OnSoPhoiChuyenChange(); 
	//void			OnSoPhoiChuyenSetfocus(); 
	//void			OnSoPhoiChuyenKillfocus(); 
	int			OnSoPhoiChuyenCheckValue(); 
	//void			OnSoPhoiTruChange(); 
	//void			OnSoPhoiTruSetfocus(); 
	//void			OnSoPhoiTruKillfocus(); 
	int			OnSoPhoiTruCheckValue(); 
	//void			OnLanChange(); 
	//void			OnLanSetfocus(); 
	//void			OnLanKillfocus(); 
	int			OnLanCheckValue(); 
	void			OnDeSelect(); 
	void			OnChuyenPhoi_KhoSelect(); 
	//void			OnNMTCChange(); 
	//void			OnNMTCSetfocus(); 
	//void			OnNMTCKillfocus(); 
	int			OnNMTCCheckValue(); 
	//void			OnSotPhoiChange(); 
	//void			OnSotPhoiSetfocus(); 
	//void			OnSotPhoiKillfocus(); 
	int			OnSotPhoiCheckValue(); 
	void			OnSachSelect(); 
	void			OnNhaySelect(); 
	void			OnMauSelect(); 
	//void			OnPARAChange(); 
	//void			OnPARASetfocus(); 
	//void			OnPARAKillfocus(); 
	int			OnPARACheckValue(); 
	//void			OnGioAHChange(); 
	//void			OnGioAHSetfocus(); 
	//void			OnGioAHKillfocus(); 
	int			OnGioAHCheckValue(); 
	void			OnNguoiAHSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoiAHSelendok(); 
	//void			OnNguoiAHSetfocus(); 
	//void			OnNguoiAHKillfocus(); 
	long			OnNguoiAHLoadData(); 
	//void			OnNguoiAHAddNew(); 
	//void			OnChiDinhChange(); 
	//void			OnChiDinhSetfocus(); 
	//void			OnChiDinhKillfocus(); 
	int			OnChiDinhCheckValue(); 
	//void			OnGioCPChange(); 
	//void			OnGioCPSetfocus(); 
	//void			OnGioCPKillfocus(); 
	int			OnGioCPCheckValue(); 
	void			OnNguoiLoadSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoiLoadSelendok(); 
	//void			OnNguoiLoadSetfocus(); 
	//void			OnNguoiLoadKillfocus(); 
	long			OnNguoiLoadLoadData(); 
	//void			OnNguoiLoadAddNew(); 
	void			OnBacsiCPSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBacsiCPSelendok(); 
	//void			OnBacsiCPSetfocus(); 
	//void			OnBacsiCPKillfocus(); 
	long			OnBacsiCPLoadData(); 
	//void			OnBacsiCPAddNew(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CIVFPhieuTheoDoiPhoiDialog(CWnd *pParent);
	~CIVFPhieuTheoDoiPhoiDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFPhieuTheoDoiPhoiDialog(); 
	int OnEditIVFPhieuTheoDoiPhoiDialog(); 
	int OnDeleteIVFPhieuTheoDoiPhoiDialog(); 
	int OnSaveIVFPhieuTheoDoiPhoiDialog(); 
	int OnCancelIVFPhieuTheoDoiPhoiDialog(); 
	int OnIVFPhieuTheoDoiPhoiDialogListLoadData(); 
};
#endif
