#ifndef HMSDAILYORDERADDENTRY_H
#define HMSDAILYORDERADDENTRY_H

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
class CHMSDailyOrderAddEntry : public CGuiView{
protected:
public:
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
	CGuiCheckBox	m_wndSearchForGeneric;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndMark;
	CGuiButton		m_wndUnMark;
	CGuiCheckBox	m_wndPrevPrescription;
	CGuiButton		m_wndAddToOrder;
	CGuiCheckBox	m_wndInsStorage;
	CString	m_szStorageKey;
	BOOL	m_bMultipleDay;
	long	m_nDays;
	CString	m_szPatientNameKey;
	CString	m_szDocumentNo;
	CString	m_szOrderDate;
	CString	m_szNameKey;
	long	m_nQty;
	long	m_nMaxQuantity;
	CString	m_szIndicationKey;
	CString	m_szTimeDay;
	CString	m_szTimeQty;
	CString	m_szUsage;
	BOOL	m_bDrugStoreOption;
	BOOL	m_bSearchForGeneric;
	BOOL	m_bPrevPrescription;
	BOOL	m_bInsStorage;
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	void			OnMultipleDaySelect(); 
	//void			OnDaysChange(); 
	//void			OnDaysSetfocus(); 
	//void			OnDaysKillfocus(); 
	int			OnDaysCheckValue(); 
	void			OnPatientNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPatientNameSelendok(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	long			OnPatientNameLoadData(); 
	//void			OnPatientNameAddNew(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
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
	//void			OnIndicationKillfocus(); 
	long			OnIndicationLoadData(); 
	//void			OnIndicationAddNew(); 
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
	void			OnDrugStoreOptionSelect(); 
	void			OnSearchForGenericSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnMarkSelect(); 
	void			OnUnMarkSelect(); 
	void			OnPrevPrescriptionSelect(); 
	void			OnAddToOrderSelect(); 
	void			OnInsStorageSelect(); 
	CHMSDailyOrderAddEntry();
	~CHMSDailyOrderAddEntry();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
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
};
#endif
