#ifndef HMSDailyOrderAddEntry_H
#define HMSDailyOrderAddEntry_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
#include "DbField.h"
#include "GuiPopup.h"
#define m_nDaysMax 15
class CHMSDailyOrderAddEntry : public CGuiPopup{
protected:
	bool	m_bAddOrder;
	long	m_nID[m_nDaysMax];
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szDept;
	int		m_nRoomID;
	int		m_nBedID;
	int		m_nRefIndex;
	int		m_nType;
public:
	CWnd*	m_pWndOrder;
	long	m_nBatchID;
	long	m_nTransactionID;
	CString	m_szBatchNo;
	CString	m_szStorages;


	CString	m_szDoctor;
	int		m_nStorageID;
	long	m_nLineIdx;
	int		m_nObjectID;
	CString	m_szCurrentOrderDate;
	CString	m_szStorageString;
	CString	m_szObjectString;

	
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;

	CGuiCheckBox	m_wndMultipleDay;
	CGuiNumberCtrl	m_wndDays;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiComboBox	m_wndPatientName;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiTextCtrl	m_wndDocumentNo;

	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiNumberCtrl	m_wndMaxQuantity;
	CGuiLabel		m_wndIndicationLabel;
	CGuiComboBox	m_wndIndication;
	CGuiLabel		m_wndTimeDayLabel;
	CGuiTextCtrl	m_wndTimeDay;
	CGuiLabel		m_wndTimeQtyLabel;
	CGuiTextCtrl	m_wndTimeQty;
	CGuiLabel		m_wndUsageLabel;
	CGuiTextCtrl	m_wndUsage;
	CGuiCheckBox	m_wndDrugStoreOption;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;

	CString	m_szStorageKey;
	BOOL	m_bMultipleDay;
	int		m_nDays;
	int		m_nMaxDays;
	
	CString	m_szPatientNameKey;
	CString	m_szOrderDate;
	CString	m_szNameKey;
	float	m_nQty;
	float	m_nMaxQuantity;
	CString	m_szIndicationKey;
	CString	m_szTimeDay;
	CString	m_szTimeQty;
	CString	m_szUsage;
	BOOL	m_bInDrugstore;

	CDbfMap	m_hms_pharmaorderTbl;
	CDbfMap	m_hms_pharmaorder_lineTbl;
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	void			OnMultipleDaySelect(); 
	void			OnDaysChange(); 
	//void			OnDaysSetfocus(); 
	//void			OnDaysKillfocus(); 
	int			OnDaysCheckValue(); 
	void			OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPatientNameSelendok(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	long			OnPatientNameLoadData(); 
	void			OnPatientNameAddNew(); 
	void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	void			OnNameAddNew(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	//void			OnMaxQuantityChange(); 
	//void			OnMaxQuantitySetfocus(); 
	//void			OnMaxQuantityKillfocus(); 
	int			OnMaxQuantityCheckValue(); 
	void			OnIndicationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIndicationSelendok(); 
	//void			OnIndicationSetfocus(); 
	void			OnIndicationKillfocus(); 
	long			OnIndicationLoadData(); 
	void			OnIndicationAddNew(); 
	int				OnIndicationCheckValue();

	//void			OnTimeDayChange(); 
	//void			OnTimeDaySetfocus(); 
	//void			OnTimeDayKillfocus(); 
	int			OnTimeDayCheckValue(); 
	//void			OnTimeQtyChange(); 
	//void			OnTimeQtySetfocus(); 
	//void			OnTimeQtyKillfocus(); 
	int			OnTimeQtyCheckValue(); 
	//void			OnUsageChange(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	int			OnUsageCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnInDrugstoreCheck(); 
	
	CHMSDailyOrderAddEntry(CWnd *pParent, int nMode, int nType=0);
	~CHMSDailyOrderAddEntry();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDailyOrderAddEntry(); 
	int OnEditHMSDailyOrderAddEntry(); 
	int OnDeleteHMSDailyOrderAddEntry(); 
	int OnSaveHMSDailyOrderAddEntry(); 
	int OnCancelHMSDailyOrderAddEntry(); 
	int OnHMSDailyOrderAddEntryListLoadData(); 
	BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
