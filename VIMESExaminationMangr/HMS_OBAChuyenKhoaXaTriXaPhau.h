#ifndef HMS_OBACHUYENKHOAXATRIXAPHAU_H
#define HMS_OBACHUYENKHOAXATRIXAPHAU_H

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
class CHMS_OBAChuyenKhoaXaTriXaPhau : public CHMSBenhAnView{
protected:
public:
	CGuiLabel		m_wndTitle;
	CGuiLabel		m_wndTienSu;
	CGuiCheckBox	m_wndHutThuoc;
	CGuiLabel		m_wndNamLabel;
	CGuiTextCtrl	m_wndNam;
	CGuiCheckBox	m_wndUongRuouBia;
	CGuiLabel		m_wndNam1Label;
	CGuiTextCtrl	m_wndNam1;
	CGuiLabel		m_wndNgheNghiepLabel;
	CGuiTextCtrl	m_wndNgheNghiep;
	CGuiLabel		m_wndTienSuGDLabel;
	CGuiTextCtrl	m_wndTienSuGD;
	CGuiLabel		m_wndKhacLabel;
	CGuiTextCtrl	m_wndKhac;
	CGuiLabel		m_wndToanTrang;
	CGuiLabel		m_wndECOGLabel;
	CGuiTextCtrl	m_wndECOG;
	CGuiLabel		m_wndKPSLabel;
	CGuiTextCtrl	m_wndKPS;
	CGuiLabel		m_wndNangLabel;
	CGuiTextCtrl	m_wndNang;
	CGuiLabel		m_wndKg;
	CGuiLabel		m_wndCaoLabel;
	CGuiTextCtrl	m_wndCao;
	CGuiLabel		m_wndCm;
	CGuiLabel		m_wndKham;
	CGuiLabel		m_wndTrieuChungLamSangLabel;
	CGuiTextCtrl	m_wndTrieuChungLamSang;
	CGuiLabel		m_wndCoQuanBenhLyLabel;
	CGuiTextCtrl	m_wndCoQuanBenhLy;
	CGuiLabel		m_wndCacXetNghiemCanLuuYLabel;
	CGuiTextCtrl	m_wndCacXetNghiemCanLuuY;
	CGuiLabel		m_wndChanDoanLabel;
	CGuiTextCtrl	m_wndChanDoan;
	CGuiLabel		m_wndPPDTTruocLabel;
	CGuiTextCtrl	m_wndPPDTTruoc;
	long m_nDocumentNo;
	BOOL	m_bHutThuoc;
	CString	m_szNam;
	BOOL	m_bUongRuouBia;
	CString	m_szNam1;
	CString	m_szNgheNghiep;
	CString	m_szTienSuGD;
	CString	m_szKhac;
	CString	m_szECOG;
	CString	m_szKPS;
	CString	m_szNang;
	CString	m_szCao;
	CString	m_szTrieuChungLamSang;
	CString	m_szCoQuanBenhLy;
	CString	m_szCacXetNghiemCanLuuY;
	CString	m_szChanDoan;
	CString	m_szPPDTTruoc;
	void			OnHutThuocSelect(); 
	//void			OnNamChange(); 
	//void			OnNamSetfocus(); 
	//void			OnNamKillfocus(); 
	int			OnNamCheckValue(); 
	void			OnUongRuouBiaSelect(); 
	//void			OnNam1Change(); 
	//void			OnNam1Setfocus(); 
	//void			OnNam1Killfocus(); 
	int			OnNam1CheckValue(); 
	//void			OnNgheNghiepChange(); 
	//void			OnNgheNghiepSetfocus(); 
	//void			OnNgheNghiepKillfocus(); 
	int			OnNgheNghiepCheckValue(); 
	//void			OnTienSuGDChange(); 
	//void			OnTienSuGDSetfocus(); 
	//void			OnTienSuGDKillfocus(); 
	int			OnTienSuGDCheckValue(); 
	//void			OnKhacChange(); 
	//void			OnKhacSetfocus(); 
	//void			OnKhacKillfocus(); 
	int			OnKhacCheckValue(); 
	//void			OnECOGChange(); 
	//void			OnECOGSetfocus(); 
	//void			OnECOGKillfocus(); 
	int			OnECOGCheckValue(); 
	//void			OnKPSChange(); 
	//void			OnKPSSetfocus(); 
	//void			OnKPSKillfocus(); 
	int			OnKPSCheckValue(); 
	//void			OnNangChange(); 
	//void			OnNangSetfocus(); 
	//void			OnNangKillfocus(); 
	int			OnNangCheckValue(); 
	//void			OnCaoChange(); 
	//void			OnCaoSetfocus(); 
	//void			OnCaoKillfocus(); 
	int			OnCaoCheckValue(); 
	//void			OnTrieuChungLamSangChange(); 
	//void			OnTrieuChungLamSangSetfocus(); 
	//void			OnTrieuChungLamSangKillfocus(); 
	int			OnTrieuChungLamSangCheckValue(); 
	//void			OnCoQuanBenhLyChange(); 
	//void			OnCoQuanBenhLySetfocus(); 
	//void			OnCoQuanBenhLyKillfocus(); 
	int			OnCoQuanBenhLyCheckValue(); 
	//void			OnCacXetNghiemCanLuuYChange(); 
	//void			OnCacXetNghiemCanLuuYSetfocus(); 
	//void			OnCacXetNghiemCanLuuYKillfocus(); 
	int			OnCacXetNghiemCanLuuYCheckValue(); 
	//void			OnChanDoanChange(); 
	//void			OnChanDoanSetfocus(); 
	//void			OnChanDoanKillfocus(); 
	int			OnChanDoanCheckValue(); 
	//void			OnPPDTTruocChange(); 
	//void			OnPPDTTruocSetfocus(); 
	//void			OnPPDTTruocKillfocus(); 
	int			OnPPDTTruocCheckValue(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	bool			OnUpdateSelect(); 
	void		OnCancelSelect();
	CHMS_OBAChuyenKhoaXaTriXaPhau(CWnd *pParent);
	~CHMS_OBAChuyenKhoaXaTriXaPhau();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMS_OBAChuyenKhoaXaTriXaPhau(); 
	int OnEditHMS_OBAChuyenKhoaXaTriXaPhau(); 
	int OnDeleteHMS_OBAChuyenKhoaXaTriXaPhau(); 
	int OnSaveHMS_OBAChuyenKhoaXaTriXaPhau(); 
	int OnCancelHMS_OBAChuyenKhoaXaTriXaPhau(); 
	int OnHMS_OBAChuyenKhoaXaTriXaPhauListLoadData(); 
};
#endif
