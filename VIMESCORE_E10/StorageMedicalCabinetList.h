#ifndef StorageMedicalCabinetList_H
#define StorageMedicalCabinetList_H

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
#include "GridListCtrl.h"


class AFX_EXT_CLASS CStorageMedicalCabinetList : public CGuiView{
protected:
public:
	CWnd*			m_wndOrder;

	bool			m_bImportForm;
	long			m_nID;
	
	CGuiGroupBox	m_wndOrderList;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndTransactionTypeLabel;
	CGuiComboBox	m_wndTransactionType;
	CGuiLabel		m_wndFromStorageLabel;
	CGuiComboBox	m_wndFromStorage;
	CGuiLabel		m_wndToStorageLabel;
	CGuiComboBox	m_wndToStorage;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiButton		m_wndRefresh;
	CGuiListCtrl	m_wndList;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndOpening;
	CGuiRadioButton	m_wndSended;
	CGuiRadioButton	m_wndApproved;
	CGuiCheckBox	m_wndCreatedByReceiver;
	CGuiCheckBox	m_wndCreatedByIssuer;

	CGuiButton		m_wndView;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szTransactionTypeKey;
	CString	m_szFromStorageKey;
	CString	m_szToStorageKey;
	CString	m_szOrderNo;
	BOOL	m_bCreatedByReceiver;
	BOOL	m_bCreatedByIssuer;

	int		m_nStatus;

		
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransactionTypeSelendok(); 
	//void			OnTransactionTypeSetfocus(); 
	//void			OnTransactionTypeKillfocus(); 
	long			OnTransactionTypeLoadData(); 
	void			OnTransactionTypeAddNew(); 
	void			OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromStorageSelendok(); 
	//void			OnFromStorageSetfocus(); 
	//void			OnFromStorageKillfocus(); 
	long			OnFromStorageLoadData(); 
	void			OnFromStorageAddNew(); 
	void			OnToStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnToStorageSelendok(); 
	//void			OnToStorageSetfocus(); 
	//void			OnToStorageKillfocus(); 
	long			OnToStorageLoadData(); 
	void			OnToStorageAddNew(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 

	void			OnRefreshSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAllSelect(); 
	void			OnOpeningSelect(); 
	void			OnSendedSelect(); 
	void			OnApprovedSelect(); 

	void			OnCreatedByReceiverSelect(); 
	void			OnCreatedByIssuerSelect();
	void OnResizeLayout();


	void			OnViewSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnRecalcOrder();

	CStorageMedicalCabinetList();
	~CStorageMedicalCabinetList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddStorageMedicalCabinetList(); 
	int OnEditStorageMedicalCabinetList(); 
	int OnDeleteStorageMedicalCabinetList(); 
	int OnSaveStorageMedicalCabinetList(); 
	int OnCancelStorageMedicalCabinetList(); 
	int OnStorageMedicalCabinetListListLoadData(); 
	void	SetImportForm(bool bFlag);
	void	Refresh();
	void			OnResolveDebt();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	DECLARE_MESSAGE_MAP()

};
#endif
