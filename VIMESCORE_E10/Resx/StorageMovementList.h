#ifndef STORAGEMOVEMENTLIST_H
#define STORAGEMOVEMENTLIST_H

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
class CStorageMovementList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderList;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndFromStorageLabel;
	CGuiComboBox	m_wndFromStorage;
	CGuiLabel		m_wndToStorageLabel;
	CGuiComboBox	m_wndToStorage;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiButton		m_wndRefresh;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndOpening;
	CGuiRadioButton	m_wndSended;
	CGuiRadioButton	m_wndApproved;
	CGuiButton		m_wndView;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiListCtrl	m_wndList;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szFromStorageKey;
	CString	m_szToStorageKey;
	CString	m_szOrderNo;
	int	m_nAll;
	int	m_nOpening;
	int	m_nSended;
	int	m_nApproved;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromStorageSelendok(); 
	//void			OnFromStorageSetfocus(); 
	//void			OnFromStorageKillfocus(); 
	long			OnFromStorageLoadData(); 
	//void			OnFromStorageAddNew(); 
	void			OnToStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnToStorageSelendok(); 
	//void			OnToStorageSetfocus(); 
	//void			OnToStorageKillfocus(); 
	long			OnToStorageLoadData(); 
	//void			OnToStorageAddNew(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	void			OnRefreshSelect(); 
	void			OnAllSelect(); 
	void			OnOpeningSelect(); 
	void			OnSendedSelect(); 
	void			OnApprovedSelect(); 
	void			OnViewSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CStorageMovementList();
	~CStorageMovementList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddStorageMovementList(); 
	int OnEditStorageMovementList(); 
	int OnDeleteStorageMovementList(); 
	int OnSaveStorageMovementList(); 
	int OnCancelStorageMovementList(); 
	int OnStorageMovementListListLoadData(); 
};
#endif
