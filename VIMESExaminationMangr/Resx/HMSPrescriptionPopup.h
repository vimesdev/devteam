#ifndef HMSPRESCRIPTIONPOPUP_H
#define HMSPRESCRIPTIONPOPUP_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CHMSPrescriptionPopup : public CGuiDialog{
protected:
public:
	long	m_nOrderID;

	CGuiGroupBox	m_wndPrescriptionInput;
	CGuiGroupBox	m_wndPrescription;
	CGuiGroupBox	m_wndPrescriptionSynthesis;
	CGuiGroupBox	m_wndDrugInteractions;
	CGuiListCtrl	m_wndSynthList;
	CGuiListCtrl	m_wndInteractionList;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndProdCountryLabel;
	CGuiTextCtrl	m_wndProdCountry;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiNumberCtrl	m_wndMaxQuantity;
	CGuiLabel		m_wndUsageLabel;
	CGuiTextCtrl	m_wndUsage;
	CGuiCheckBox	m_wndSearchForGenericName;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndPatientPaidLabel;
	CGuiNumberCtrl	m_wndPatientPaid;
	CString	m_szStockKey;
	CString	m_szOrderDate;
	CString	m_szNameKey;
	CString	m_szUnit;
	CString	m_szProdCountry;
	long	m_nQty;
	long	m_nMaxQuantity;
	CString	m_szUsage;
	BOOL	m_bSearchForGenericName;
	long	m_nTotalCost;
	long	m_nPatientPaid;
	CDbfMap	m_hms_pharmacyorderTbl;
	CDbfMap	m_hms_pharmacyorderlnTbl;
	long			OnSynthListLoadData(); 
	void			OnSynthListSelectChange(int nOldItem, int nNewItem); 
	void			OnSynthListDblClick(); 
	int			OnSynthListDeleteItem(); 
	long			OnInteractionListLoadData(); 
	void			OnInteractionListSelectChange(int nOldItem, int nNewItem); 
	void			OnInteractionListDblClick(); 
	int			OnInteractionListDeleteItem(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStockSelendok(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	long			OnStockLoadData(); 
	void			OnStockAddNew(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	void			OnNameAddNew(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnProdCountryChange(); 
	//void			OnProdCountrySetfocus(); 
	//void			OnProdCountryKillfocus(); 
	int			OnProdCountryCheckValue(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	//void			OnMaxQuantityChange(); 
	//void			OnMaxQuantitySetfocus(); 
	//void			OnMaxQuantityKillfocus(); 
	int			OnMaxQuantityCheckValue(); 
	//void			OnUsageChange(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	int			OnUsageCheckValue(); 
	void			OnSearchForGenericNameSelect(); 
	void			OnSaveSelect(); 
	void			OnConfirmSelect(); 
	void			OnCloseSelect(); 
	//void			OnTotalCostChange(); 
	//void			OnTotalCostSetfocus(); 
	//void			OnTotalCostKillfocus(); 
	int			OnTotalCostCheckValue(); 
	//void			OnPatientPaidChange(); 
	//void			OnPatientPaidSetfocus(); 
	//void			OnPatientPaidKillfocus(); 
	int			OnPatientPaidCheckValue(); 
	CHMSPrescriptionPopup(CWnd *pParent);
	~CHMSPrescriptionPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPrescriptionPopup(); 
	int OnEditHMSPrescriptionPopup(); 
	int OnDeleteHMSPrescriptionPopup(); 
	int OnSaveHMSPrescriptionPopup(); 
	int OnCancelHMSPrescriptionPopup(); 
	int OnHMSPrescriptionPopupListLoadData(); 
};
#endif
