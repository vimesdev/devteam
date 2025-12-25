#ifndef IVFTDKICHTHICHBUONGTRUNGPOPUP_H
#define IVFTDKICHTHICHBUONGTRUNGPOPUP_H

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
class CIVFTDKichthichBuongTrungPopup : public CGuiPopup{
protected:
public:
	CGuiLabel		m_wndNgayCKLabel;
	CGuiDateCtrl	m_wndNgayCK;
	CGuiLabel		m_wndNgayLabel;
	CGuiDateCtrl	m_wndNgay;
	CGuiLabel		m_wndQuyetDinhLabel;
	CGuiTextCtrl	m_wndQuyetDinh;
	CGuiLabel		m_wndCCLabel;
	CGuiTextCtrl	m_wndCC;
	CGuiLabel		m_wndFSHLabel;
	CGuiTextCtrl	m_wndFSH;
	CGuiLabel		m_wndGNRHALabel;
	CGuiTextCtrl	m_wndGNRHA;
	CGuiLabel		m_wndBTPLabel;
	CGuiTextCtrl	m_wndBTP;
	CGuiLabel		m_wndBTTLabel;
	CGuiTextCtrl	m_wndBTT;
	CGuiLabel		m_wndNMTCLabel;
	CGuiTextCtrl	m_wndNMTC;
	CGuiLabel		m_wndBSSALabel;
	CGuiComboBox	m_wndBSSA;
	CGuiLabel		m_wndGhiChuLabel;
	CGuiTextCtrl	m_wndGhiChu;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szNgayCK;
	CString	m_szNgay;
	CString	m_szQuyetDinh;
	CString	m_szCC;
	CString	m_szFSH;
	CString	m_szGNRHA;
	CString	m_szBTP;
	CString	m_szBTT;
	CString	m_szNMTC;
	CString	m_szBSSAKey;
	CString	m_szGhiChu;
	CDbfMap	m_ivf_nangnoanTbl;
	//void			OnNgayCKChange(); 
	//void			OnNgayCKSetfocus(); 
	//void			OnNgayCKKillfocus(); 
	int			OnNgayCKCheckValue(); 
	//void			OnNgayChange(); 
	//void			OnNgaySetfocus(); 
	//void			OnNgayKillfocus(); 
	int			OnNgayCheckValue(); 
	//void			OnQuyetDinhChange(); 
	//void			OnQuyetDinhSetfocus(); 
	//void			OnQuyetDinhKillfocus(); 
	int			OnQuyetDinhCheckValue(); 
	//void			OnCCChange(); 
	//void			OnCCSetfocus(); 
	//void			OnCCKillfocus(); 
	int			OnCCCheckValue(); 
	//void			OnFSHChange(); 
	//void			OnFSHSetfocus(); 
	//void			OnFSHKillfocus(); 
	int			OnFSHCheckValue(); 
	//void			OnGNRHAChange(); 
	//void			OnGNRHASetfocus(); 
	//void			OnGNRHAKillfocus(); 
	int			OnGNRHACheckValue(); 
	//void			OnBTPChange(); 
	//void			OnBTPSetfocus(); 
	//void			OnBTPKillfocus(); 
	int			OnBTPCheckValue(); 
	//void			OnBTTChange(); 
	//void			OnBTTSetfocus(); 
	//void			OnBTTKillfocus(); 
	int			OnBTTCheckValue(); 
	//void			OnNMTCChange(); 
	//void			OnNMTCSetfocus(); 
	//void			OnNMTCKillfocus(); 
	int			OnNMTCCheckValue(); 
	void			OnBSSASelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBSSASelendok(); 
	//void			OnBSSASetfocus(); 
	//void			OnBSSAKillfocus(); 
	long			OnBSSALoadData(); 
	//void			OnBSSAAddNew(); 
	//void			OnGhiChuChange(); 
	//void			OnGhiChuSetfocus(); 
	//void			OnGhiChuKillfocus(); 
	int			OnGhiChuCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CIVFTDKichthichBuongTrungPopup(CWnd *pParent, int nMode);
	~CIVFTDKichthichBuongTrungPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFTDKichthichBuongTrungPopup(); 
	int OnEditIVFTDKichthichBuongTrungPopup(); 
	int OnDeleteIVFTDKichthichBuongTrungPopup(); 
	int OnSaveIVFTDKichthichBuongTrungPopup(); 
	int OnCancelIVFTDKichthichBuongTrungPopup(); 
	int OnIVFTDKichthichBuongTrungPopupListLoadData(); 
};
#endif
