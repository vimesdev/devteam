#ifndef HMSBENHANHIEMMUON_TOMTAT_H
#define HMSBENHANHIEMMUON_TOMTAT_H

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
class CHMSBenhAnHiemMuon_TomTat : public CGuiView{
protected:
public:
	CGuiLabel		m_wndcontrol_0;
	CGuiLabel		m_wndHoTenVoLabel;
	CGuiTextCtrl	m_wndHoTenVo;
	CGuiLabel		m_wndNamSinhVoLabel;
	CGuiNumberCtrl	m_wndNamSinhVo;
	CGuiLabel		m_wndHoTenChongLabel;
	CGuiTextCtrl	m_wndHoTenChong;
	CGuiLabel		m_wndNamSinhChongLabel;
	CGuiNumberCtrl	m_wndNamSinhChong;
	CGuiLabel		m_wndVoSinhLabel;
	CGuiNumberCtrl	m_wndVoSinh;
	CGuiLabel		m_wndTienSuLabel;
	CGuiTextCtrl	m_wndTienSu;
	CGuiLabel		m_wndCacVanDeLabel;
	CGuiTextCtrl	m_wndCacVanDe;
	CGuiLabel		m_wndChanDoanSoBoLabel;
	CGuiTextCtrl	m_wndChanDoanSoBo;
	CGuiLabel		m_wndHuongDieuTriLabel;
	CGuiTextCtrl	m_wndHuongDieuTri;
	CGuiLabel		m_wndcontrol_19;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szHoTenVo;
	long	m_nNamSinhVo;
	CString	m_szHoTenChong;
	long	m_nNamSinhChong;
	long	m_nVoSinh;
	CString	m_szTienSu;
	CString	m_szCacVanDe;
	CString	m_szChanDoanSoBo;
	CString	m_szHuongDieuTri;
	long m_nDocumentNo;
	//void			OnHoTenVoChange(); 
	//void			OnHoTenVoSetfocus(); 
	//void			OnHoTenVoKillfocus(); 
	int			OnHoTenVoCheckValue(); 
	//void			OnNamSinhVoChange(); 
	//void			OnNamSinhVoSetfocus(); 
	//void			OnNamSinhVoKillfocus(); 
	int			OnNamSinhVoCheckValue(); 
	//void			OnHoTenChongChange(); 
	//void			OnHoTenChongSetfocus(); 
	//void			OnHoTenChongKillfocus(); 
	int			OnHoTenChongCheckValue(); 
	//void			OnNamSinhChongChange(); 
	//void			OnNamSinhChongSetfocus(); 
	//void			OnNamSinhChongKillfocus(); 
	int			OnNamSinhChongCheckValue(); 
	//void			OnVoSinhChange(); 
	//void			OnVoSinhSetfocus(); 
	//void			OnVoSinhKillfocus(); 
	int			OnVoSinhCheckValue(); 
	//void			OnTienSuChange(); 
	//void			OnTienSuSetfocus(); 
	//void			OnTienSuKillfocus(); 
	int			OnTienSuCheckValue(); 
	//void			OnCacVanDeChange(); 
	//void			OnCacVanDeSetfocus(); 
	//void			OnCacVanDeKillfocus(); 
	int			OnCacVanDeCheckValue(); 
	//void			OnChanDoanSoBoChange(); 
	//void			OnChanDoanSoBoSetfocus(); 
	//void			OnChanDoanSoBoKillfocus(); 
	int			OnChanDoanSoBoCheckValue(); 
	//void			OnHuongDieuTriChange(); 
	//void			OnHuongDieuTriSetfocus(); 
	//void			OnHuongDieuTriKillfocus(); 
	int			OnHuongDieuTriCheckValue(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSBenhAnHiemMuon_TomTat();
	~CHMSBenhAnHiemMuon_TomTat();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBenhAnHiemMuon_TomTat(); 
	int OnEditHMSBenhAnHiemMuon_TomTat(); 
	int OnDeleteHMSBenhAnHiemMuon_TomTat(); 
	int OnSaveHMSBenhAnHiemMuon_TomTat(); 
	int OnCancelHMSBenhAnHiemMuon_TomTat(); 
	int OnHMSBenhAnHiemMuon_TomTatListLoadData(); 
	void OnPrint();
	void OnGetDataExist();
	void GetNameDOB();
};
#endif
