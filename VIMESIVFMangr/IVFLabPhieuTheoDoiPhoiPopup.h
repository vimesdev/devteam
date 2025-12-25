#ifndef IVFLABPHIEUTHEODOIPHOIPOPUP_H
#define IVFLABPHIEUTHEODOIPHOIPOPUP_H

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
class CIVFLabPhieuTheoDoiPhoiPopup : public CGuiDialog{
protected:
	CString	m_szLineType;
	CString	m_szLineId;
	long	m_nOrderId;
	CString m_szNgayTaoId;
public:
	CGuiLabel		m_wndNgay_phoiLabel;
	CGuiComboBox	m_wndNgay_phoi;
	CGuiLabel		m_wndChat_luongLabel;
	CGuiComboBox	m_wndChat_luong;
	CGuiLabel		m_wndSoluongLabel;
	CGuiNumberCtrl	m_wndSoluong;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiListCtrl	m_wndList;
	CString	m_szNgay_phoiKey;
	CString	m_szChat_luongKey;
	long	m_nSoluong;
	void			OnNgay_phoiSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNgay_phoiSelendok(); 
	//void			OnNgay_phoiSetfocus(); 
	//void			OnNgay_phoiKillfocus(); 
	long			OnNgay_phoiLoadData(); 
	//void			OnNgay_phoiAddNew(); 
	void			OnChat_luongSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChat_luongSelendok(); 
	//void			OnChat_luongSetfocus(); 
	//void			OnChat_luongKillfocus(); 
	long			OnChat_luongLoadData(); 
	//void			OnChat_luongAddNew(); 
	//void			OnSoluongChange(); 
	//void			OnSoluongSetfocus(); 
	//void			OnSoluongKillfocus(); 
	int			OnSoluongCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListAddOutcome();
	CIVFLabPhieuTheoDoiPhoiPopup(CWnd *pParent, long nOrderId, CString szLineType, CString szNgayTaoId);
	~CIVFLabPhieuTheoDoiPhoiPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuTheoDoiPhoiPopup(); 
	int OnEditIVFLabPhieuTheoDoiPhoiPopup(); 
	int OnDeleteIVFLabPhieuTheoDoiPhoiPopup(); 
	int OnSaveIVFLabPhieuTheoDoiPhoiPopup(); 
	int OnCancelIVFLabPhieuTheoDoiPhoiPopup(); 
	int OnIVFLabPhieuTheoDoiPhoiPopupListLoadData(); 
};
#endif
