#ifndef IVFTHEODOIDIEUTRINAMDIALOG_H
#define IVFTHEODOIDIEUTRINAMDIALOG_H

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
class CIVFTheodoiDieutriNamDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndNgaylocruaLabel;
	CGuiDateTimeCtrl	m_wndNgaylocrua;
	CGuiLabel		m_wndTglaymauLabel;
	CGuiDateTimeCtrl	m_wndTglaymau;
	CGuiLabel		m_wndTgnhanmauLabel;
	CGuiDateTimeCtrl	m_wndTgnhanmau;
	CGuiLabel		m_wndNguontinhtrungLabel;
	CGuiComboBox	m_wndNguontinhtrung;
	CGuiLabel		m_wndNgaykiengxuattinhLabel;
	CGuiDateCtrl	m_wndNgaykiengxuattinh;
	CGuiLabel		m_wndChatluongtinhtrungtruoclocruaLabel;
	CGuiComboBox	m_wndChatluongtinhtrungtruoclocrua;
	CGuiLabel		m_wndChatluongtinhtrungsaulocruaLabel;
	CGuiComboBox	m_wndChatluongtinhtrungsaulocrua;
	CGuiLabel		m_wndHinhthuctinhtrungLabel;
	CGuiComboBox	m_wndHinhthuctinhtrung;
	CGuiLabel		m_wndNoilaytinhtrungLabel;
	CGuiComboBox	m_wndNoilaytinhtrung;
	CGuiLabel		m_wndCachlaytinhtrungLabel;
	CGuiComboBox	m_wndCachlaytinhtrung;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szNgaylocrua;
	CString	m_szTglaymau;
	CString	m_szTgnhanmau;
	CString	m_szNguontinhtrungKey;
	CString	m_szNgaykiengxuattinh;
	CString	m_szChatluongtinhtrungtruoclocruaKey;
	CString	m_szChatluongtinhtrungsaulocruaKey;
	CString	m_szHinhthuctinhtrungKey;
	CString	m_szNoilaytinhtrungKey;
	CString	m_szCachlaytinhtrungKey;
	//void			OnNgaylocruaChange(); 
	//void			OnNgaylocruaSetfocus(); 
	//void			OnNgaylocruaKillfocus(); 
	int			OnNgaylocruaCheckValue(); 
	//void			OnTglaymauChange(); 
	//void			OnTglaymauSetfocus(); 
	//void			OnTglaymauKillfocus(); 
	int			OnTglaymauCheckValue(); 
	//void			OnTgnhanmauChange(); 
	//void			OnTgnhanmauSetfocus(); 
	//void			OnTgnhanmauKillfocus(); 
	int			OnTgnhanmauCheckValue(); 
	void			OnNguontinhtrungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguontinhtrungSelendok(); 
	//void			OnNguontinhtrungSetfocus(); 
	//void			OnNguontinhtrungKillfocus(); 
	long			OnNguontinhtrungLoadData(); 
	//void			OnNguontinhtrungAddNew(); 
	//void			OnNgaykiengxuattinhChange(); 
	//void			OnNgaykiengxuattinhSetfocus(); 
	//void			OnNgaykiengxuattinhKillfocus(); 
	int			OnNgaykiengxuattinhCheckValue(); 
	void			OnChatluongtinhtrungtruoclocruaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChatluongtinhtrungtruoclocruaSelendok(); 
	//void			OnChatluongtinhtrungtruoclocruaSetfocus(); 
	//void			OnChatluongtinhtrungtruoclocruaKillfocus(); 
	long			OnChatluongtinhtrungtruoclocruaLoadData(); 
	//void			OnChatluongtinhtrungtruoclocruaAddNew(); 
	void			OnChatluongtinhtrungsaulocruaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChatluongtinhtrungsaulocruaSelendok(); 
	//void			OnChatluongtinhtrungsaulocruaSetfocus(); 
	//void			OnChatluongtinhtrungsaulocruaKillfocus(); 
	long			OnChatluongtinhtrungsaulocruaLoadData(); 
	//void			OnChatluongtinhtrungsaulocruaAddNew(); 
	void			OnHinhthuctinhtrungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHinhthuctinhtrungSelendok(); 
	//void			OnHinhthuctinhtrungSetfocus(); 
	//void			OnHinhthuctinhtrungKillfocus(); 
	long			OnHinhthuctinhtrungLoadData(); 
	//void			OnHinhthuctinhtrungAddNew(); 
	void			OnNoilaytinhtrungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNoilaytinhtrungSelendok(); 
	//void			OnNoilaytinhtrungSetfocus(); 
	//void			OnNoilaytinhtrungKillfocus(); 
	long			OnNoilaytinhtrungLoadData(); 
	//void			OnNoilaytinhtrungAddNew(); 
	void			OnCachlaytinhtrungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCachlaytinhtrungSelendok(); 
	//void			OnCachlaytinhtrungSetfocus(); 
	//void			OnCachlaytinhtrungKillfocus(); 
	long			OnCachlaytinhtrungLoadData(); 
	//void			OnCachlaytinhtrungAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CIVFTheodoiDieutriNamDialog(CWnd *pParent);
	~CIVFTheodoiDieutriNamDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFTheodoiDieutriNamDialog(); 
	int OnEditIVFTheodoiDieutriNamDialog(); 
	int OnDeleteIVFTheodoiDieutriNamDialog(); 
	int OnSaveIVFTheodoiDieutriNamDialog(); 
	int OnCancelIVFTheodoiDieutriNamDialog(); 
	int OnIVFTheodoiDieutriNamDialogListLoadData(); 
};
#endif
