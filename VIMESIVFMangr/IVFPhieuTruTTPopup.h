#ifndef IVFPHIEUTRUTTPOPUP_H
#define IVFPHIEUTRUTTPOPUP_H

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
#include "GuiPopup.h"
#include "DbField.h"
class CIVFPhieuTruTTPopup : public CGuiPopup{
protected:
public:
	CString	m_szID;
	long	m_nPhieuTruId; //so orderid(hpc_orderid)
	long	m_nDocumentNo;	
	CString m_szIDLocation;
	CString m_szIDThung;
	CString	m_szIDGia;
	CGuiLabel		m_wndCassetteLabel;
	CGuiComboBox	m_wndCassette;
	CGuiLabel		m_wndNhan_thanhLabel;
	CGuiComboBox	m_wndNhan_thanh;
	CGuiLabel		m_wndTopLabel;
	CGuiComboBox	m_wndTop;
	CGuiLabel		m_wndNhan_congLabel;
	CGuiComboBox	m_wndNhan_cong;
	CGuiLabel		m_wndso_luongLabel;
	CGuiNumberCtrl	m_wndso_luong;
	CGuiLabel		m_wnddon_vi_1Label;
	CGuiLabel		m_wndmat_doLabel;
	CGuiTextCtrl	m_wndmat_do;
	CGuiLabel		m_wnddon_vi_2Label;
	CGuiLabel		m_wndtien_toiLabel;
	CGuiTextCtrl	m_wndtien_toi;
	CGuiLabel		m_wnddon_vi_3Label;
	CGuiLabel		m_wndKhong_tien_toiLabel;
	CGuiTextCtrl	m_wndKhong_tien_toi;
	CGuiLabel		m_wndDon_vi4;
	CGuiLabel		m_wndHinh_dangLabel;
	CGuiTextCtrl	m_wndHinh_dang;
	CGuiLabel		m_wndDon_vi5;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szCassetteKey;
	CString	m_szNhan_thanhKey;
	CString	m_szTopKey;
	CString	m_szNhan_congKey;
	float	m_nso_luong;
	CString	m_szmat_do;
	CString	m_sztien_toi;
	CString	m_szKhong_tien_toi;
	CString	m_szHinh_dang;
	void			OnCassetteSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCassetteSelendok(); 
	//void			OnCassetteSetfocus(); 
	//void			OnCassetteKillfocus(); 
	long			OnCassetteLoadData(); 
	//void			OnCassetteAddNew(); 
	void			OnTopSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTopSelendok(); 
	//void			OnTopSetfocus(); 
	//void			OnTopKillfocus(); 
	long			OnTopLoadData(); 
	//void			OnTopAddNew(); 
	long			OnNhan_thanhLoadData();
	long			OnNhan_congLoadData();
	//void			Onso_luongChange(); 
	//void			Onso_luongSetfocus(); 
	//void			Onso_luongKillfocus(); 
	int			Onso_luongCheckValue(); 
	//void			Onmat_doChange(); 
	//void			Onmat_doSetfocus(); 
	//void			Onmat_doKillfocus(); 
	int			Onmat_doCheckValue(); 
	//void			Ontien_toiChange(); 
	//void			Ontien_toiSetfocus(); 
	//void			Ontien_toiKillfocus(); 
	int			Ontien_toiCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CIVFPhieuTruTTPopup(CWnd *pParent, int nMode);
	~CIVFPhieuTruTTPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFPhieuTruTTPopup(); 
	int OnEditIVFPhieuTruTTPopup(); 
	int OnDeleteIVFPhieuTruTTPopup(); 
	int OnSaveIVFPhieuTruTTPopup(); 
	int OnCancelIVFPhieuTruTTPopup(); 
	int OnIVFPhieuTruTTPopupListLoadData(); 
};
#endif
