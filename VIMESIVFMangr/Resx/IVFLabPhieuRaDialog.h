#ifndef IVFLABPHIEURADIALOG_H
#define IVFLABPHIEURADIALOG_H

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
class CIVFLabPhieuRaDialog : public CGuiDialog{
protected:
public:
	CGuiNumberCtrl	m_wndSophieu;
	CGuiLabel		m_wndSophieuLabel;
	CGuiLabel		m_wndIdLabel;
	CGuiNumberCtrl	m_wndId;
	CGuiLabel		m_wndSohosoLabel;
	CGuiNumberCtrl	m_wndSohoso;
	CGuiLabel		m_wndMabenhnhanLabel;
	CGuiTextCtrl	m_wndMabenhnhan;
	CGuiLabel		m_wndHovatenLabel;
	CGuiTextCtrl	m_wndHovaten;
	CGuiLabel		m_wndNgaysinhLabel;
	CGuiDateCtrl	m_wndNgaysinh;
	CGuiLabel		m_wndThungLabel;
	CGuiComboBox	m_wndThung;
	CGuiLabel		m_wndGiaLabel;
	CGuiComboBox	m_wndGia;
	CGuiLabel		m_wndCassetteLabel;
	CGuiComboBox	m_wndCassette;
	CGuiLabel		m_wndTopLabel;
	CGuiComboBox	m_wndTop;
	CGuiLabel		m_wndNguoithuchienLabel;
	CGuiComboBox	m_wndNguoithuchien;
	CGuiLabel		m_wndTgthuchienLabel;
	CGuiDateTimeCtrl	m_wndTgthuchien;
	CGuiLabel		m_wndNguoichecklistLabel;
	CGuiComboBox	m_wndNguoichecklist;
	CGuiLabel		m_wndTgchecklistLabel;
	CGuiDateTimeCtrl	m_wndTgchecklist;
	CGuiLabel		m_wndMoitruongraLabel;
	CGuiComboBox	m_wndMoitruongra;
	CGuiLabel		m_wndPhuongphapraLabel;
	CGuiComboBox	m_wndPhuongphapra;
	CGuiLabel		m_wndChatluongphoiLabel;
	CGuiComboBox	m_wndChatluongphoi;
	CGuiCheckBox	m_wndAH;
	CGuiLabel		m_wndGhichuLabel;
	CGuiTextCtrl	m_wndGhichu;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	long	m_nSophieu;
	long	m_nId;
	long	m_nSohoso;
	CString	m_szMabenhnhan;
	CString	m_szHovaten;
	CString	m_szNgaysinh;
	CString	m_szThungKey;
	CString	m_szGiaKey;
	CString	m_szCassetteKey;
	CString	m_szTopKey;
	CString	m_szNguoithuchienKey;
	CString	m_szTgthuchien;
	CString	m_szNguoichecklistKey;
	CString	m_szTgchecklist;
	CString	m_szMoitruongraKey;
	CString	m_szPhuongphapraKey;
	CString	m_szChatluongphoiKey;
	BOOL	m_bAH;
	CString	m_szGhichu;
	CDbfMap	m_ivf_phieuraTbl;
	//void			OnSophieuChange(); 
	//void			OnSophieuSetfocus(); 
	//void			OnSophieuKillfocus(); 
	int			OnSophieuCheckValue(); 
	//void			OnIdChange(); 
	//void			OnIdSetfocus(); 
	//void			OnIdKillfocus(); 
	int			OnIdCheckValue(); 
	//void			OnSohosoChange(); 
	//void			OnSohosoSetfocus(); 
	//void			OnSohosoKillfocus(); 
	int			OnSohosoCheckValue(); 
	//void			OnMabenhnhanChange(); 
	//void			OnMabenhnhanSetfocus(); 
	//void			OnMabenhnhanKillfocus(); 
	int			OnMabenhnhanCheckValue(); 
	//void			OnHovatenChange(); 
	//void			OnHovatenSetfocus(); 
	//void			OnHovatenKillfocus(); 
	int			OnHovatenCheckValue(); 
	//void			OnNgaysinhChange(); 
	//void			OnNgaysinhSetfocus(); 
	//void			OnNgaysinhKillfocus(); 
	int			OnNgaysinhCheckValue(); 
	void			OnThungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThungSelendok(); 
	//void			OnThungSetfocus(); 
	//void			OnThungKillfocus(); 
	long			OnThungLoadData(); 
	//void			OnThungAddNew(); 
	void			OnGiaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGiaSelendok(); 
	//void			OnGiaSetfocus(); 
	//void			OnGiaKillfocus(); 
	long			OnGiaLoadData(); 
	//void			OnGiaAddNew(); 
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
	void			OnNguoithuchienSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoithuchienSelendok(); 
	//void			OnNguoithuchienSetfocus(); 
	//void			OnNguoithuchienKillfocus(); 
	long			OnNguoithuchienLoadData(); 
	//void			OnNguoithuchienAddNew(); 
	//void			OnTgthuchienChange(); 
	//void			OnTgthuchienSetfocus(); 
	//void			OnTgthuchienKillfocus(); 
	int			OnTgthuchienCheckValue(); 
	void			OnNguoichecklistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoichecklistSelendok(); 
	//void			OnNguoichecklistSetfocus(); 
	//void			OnNguoichecklistKillfocus(); 
	long			OnNguoichecklistLoadData(); 
	//void			OnNguoichecklistAddNew(); 
	//void			OnTgchecklistChange(); 
	//void			OnTgchecklistSetfocus(); 
	//void			OnTgchecklistKillfocus(); 
	int			OnTgchecklistCheckValue(); 
	void			OnMoitruongraSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMoitruongraSelendok(); 
	//void			OnMoitruongraSetfocus(); 
	//void			OnMoitruongraKillfocus(); 
	long			OnMoitruongraLoadData(); 
	//void			OnMoitruongraAddNew(); 
	void			OnPhuongphapraSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPhuongphapraSelendok(); 
	//void			OnPhuongphapraSetfocus(); 
	//void			OnPhuongphapraKillfocus(); 
	long			OnPhuongphapraLoadData(); 
	//void			OnPhuongphapraAddNew(); 
	void			OnChatluongphoiSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChatluongphoiSelendok(); 
	//void			OnChatluongphoiSetfocus(); 
	//void			OnChatluongphoiKillfocus(); 
	long			OnChatluongphoiLoadData(); 
	//void			OnChatluongphoiAddNew(); 
	void			OnAHSelect(); 
	//void			OnGhichuChange(); 
	//void			OnGhichuSetfocus(); 
	//void			OnGhichuKillfocus(); 
	int			OnGhichuCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CIVFLabPhieuRaDialog(CWnd *pParent);
	~CIVFLabPhieuRaDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuRaDialog(); 
	int OnEditIVFLabPhieuRaDialog(); 
	int OnDeleteIVFLabPhieuRaDialog(); 
	int OnSaveIVFLabPhieuRaDialog(); 
	int OnCancelIVFLabPhieuRaDialog(); 
	int OnIVFLabPhieuRaDialogListLoadData(); 
};
#endif
