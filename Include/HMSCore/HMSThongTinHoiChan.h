#ifndef HMSTHONGTINHOICHAN_H
#define HMSTHONGTINHOICHAN_H

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
class AFX_EXT_CLASS CHMSThongTinHoiChan : public CGuiDialog{
protected:
	long	m_nDocumentNo;
	CString m_szPatientName;
	CString m_szDeptID;
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndLabelCap;
	CGuiComboBox	m_wndCap;
	CGuiLabel		m_wndLabelLan;
	CGuiNumberCtrl	m_wndLan;
	CGuiLabel		m_wndLabelDocNo;
	CGuiNumberCtrl	m_wndDocNo;
	CGuiLabel		m_wndLabelName;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndLabelDiaDiem;
	CGuiTextCtrl	m_wndDiaDiem;
	CGuiLabel		m_wndLabelTGHoiChan;
	CGuiDateTimeCtrl	m_wndTGHoiChan;
	CGuiButton		m_wndThanhVienThamGia;
	CGuiLabel		m_wndLabelLyDo;
	CGuiTextCtrl	m_wndLyDo;
	CGuiLabel		m_wndLabelTGBatDau;
	CGuiDateTimeCtrl	m_wndTGBatDau;
	CGuiLabel		m_wndLabelChuTri;
	CGuiTextCtrl	m_wndChuTri;
	CGuiLabel		m_wndLabelThuKy;
	CGuiTextCtrl	m_wndThuKy;
	CGuiLabel		m_wndLabelBenhLy;
	CGuiLabel		m_wndLabelBenhLy2;
	CGuiLabel		m_wndLabelBenhLy3;
	CGuiLabel		m_wndLabelBenhLy4;
	CGuiTextCtrl	m_wndBenhLy;
	CGuiLabel		m_wndLabelYKien;
	CGuiLabel		m_wndLabelYKien2;
	CGuiLabel		m_wndLabelYKien3;
	CGuiLabel		m_wndLabelYKien4;
	CGuiTextCtrl	m_wndYKien;
	CGuiLabel		m_wndLabelKetLuan;
	CGuiLabel		m_wndLabelChanDoan;
	CGuiTextCtrl	m_wndChanDoan;
	CGuiLabel		m_wndLabelCLSThem;
	CGuiLabel		m_wndLabelCLSThem2;
	CGuiLabel		m_wndLabelCLSThem3;
	CGuiTextCtrl	m_wndCLSThem;
	CGuiLabel		m_wndLabelDieuTri;
	CGuiLabel		m_wndLabelDieuTri2;
	CGuiTextCtrl	m_wndDieuTri;
	CGuiLabel		m_wndLabelYeuCauKhac;
	CGuiTextCtrl	m_wndYeuCauKhac;
	CGuiLabel		m_wndLabelTGKetThuc;
	CGuiDateTimeCtrl	m_wndTGKetThuc;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndCancel;
	CString	m_szCapKey;
	long	m_nLan;
	long	m_nDocNo;
	CString	m_szName;
	CString	m_szDiaDiem;
	CString	m_szTGHoiChan;
	CString	m_szLyDo;
	CString	m_szTGBatDau;
	CString	m_szChuTri;
	CString	m_szThuKy;
	CString	m_szBenhLy;
	CString	m_szYKien;
	CString	m_szChanDoan;
	CString	m_szCLSThem;
	CString	m_szDieuTri;
	CString	m_szYeuCauKhac;
	CString	m_szTGKetThuc;
	void			OnCapSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCapSelendok(); 
	//void			OnCapSetfocus(); 
	//void			OnCapKillfocus(); 
	long			OnCapLoadData(); 
	//void			OnCapAddNew(); 
	//void			OnLanChange(); 
	//void			OnLanSetfocus(); 
	//void			OnLanKillfocus(); 
	int			OnLanCheckValue(); 
	//void			OnDocNoChange(); 
	//void			OnDocNoSetfocus(); 
	//void			OnDocNoKillfocus(); 
	int			OnDocNoCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnDiaDiemChange(); 
	//void			OnDiaDiemSetfocus(); 
	//void			OnDiaDiemKillfocus(); 
	int			OnDiaDiemCheckValue(); 
	//void			OnTGHoiChanChange(); 
	//void			OnTGHoiChanSetfocus(); 
	//void			OnTGHoiChanKillfocus(); 
	int			OnTGHoiChanCheckValue(); 
	void			OnThanhVienThamGiaSelect(); 
	//void			OnLyDoChange(); 
	//void			OnLyDoSetfocus(); 
	//void			OnLyDoKillfocus(); 
	int			OnLyDoCheckValue(); 
	//void			OnTGBatDauChange(); 
	//void			OnTGBatDauSetfocus(); 
	//void			OnTGBatDauKillfocus(); 
	int			OnTGBatDauCheckValue(); 
	//void			OnChuTriChange(); 
	//void			OnChuTriSetfocus(); 
	//void			OnChuTriKillfocus(); 
	int			OnChuTriCheckValue(); 
	//void			OnThuKyChange(); 
	//void			OnThuKySetfocus(); 
	//void			OnThuKyKillfocus(); 
	int			OnThuKyCheckValue(); 
	//void			OnBenhLyChange(); 
	//void			OnBenhLySetfocus(); 
	//void			OnBenhLyKillfocus(); 
	int			OnBenhLyCheckValue(); 
	//void			OnYKienChange(); 
	//void			OnYKienSetfocus(); 
	//void			OnYKienKillfocus(); 
	int			OnYKienCheckValue(); 
	//void			OnChanDoanChange(); 
	//void			OnChanDoanSetfocus(); 
	//void			OnChanDoanKillfocus(); 
	int			OnChanDoanCheckValue(); 
	//void			OnCLSThemChange(); 
	//void			OnCLSThemSetfocus(); 
	//void			OnCLSThemKillfocus(); 
	int			OnCLSThemCheckValue(); 
	//void			OnDieuTriChange(); 
	//void			OnDieuTriSetfocus(); 
	//void			OnDieuTriKillfocus(); 
	int			OnDieuTriCheckValue(); 
	//void			OnYeuCauKhacChange(); 
	//void			OnYeuCauKhacSetfocus(); 
	//void			OnYeuCauKhacKillfocus(); 
	int			OnYeuCauKhacCheckValue(); 
	//void			OnTGKetThucChange(); 
	//void			OnTGKetThucSetfocus(); 
	//void			OnTGKetThucKillfocus(); 
	int			OnTGKetThucCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnPrintSelect(); 
	void			OnPrint(); 
	void			OnPrint2(); 
	void			OnPrint3(); 
	void			OnCancelSelect(); 
	CHMSThongTinHoiChan(CWnd *pParent, long nDocNo, CString szName, CString szDeptID);
	~CHMSThongTinHoiChan();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMThongTinHoiChan(); 
	int OnEditTMThongTinHoiChan(); 
	int OnDeleteTMThongTinHoiChan(); 
	int OnSaveTMThongTinHoiChan(); 
	int OnCancelTMThongTinHoiChan(); 
	int OnTMThongTinHoiChanListLoadData(); 
};
#endif
