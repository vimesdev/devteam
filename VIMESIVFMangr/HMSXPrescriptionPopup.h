#ifndef HMSXPrescriptionPopup_H
#define HMSXPrescriptionPopup_H

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
#include "GuiPopup.h"
#include "DbField.h"
#include "GuiAutoTextCtrl.h"


class CHMSXPrescriptionPopup : public CGuiPopup{
protected:
public:	
	long	m_nOrderID;
	CString	m_szOrders;
	CGuiGroupBox	m_wndPrescriptionInput;

	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndQuantityLabel;
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
	CGuiCheckBox	m_wndSearchForGenericName;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString		m_szStockKey;
	CString		m_szOrderDate;
	CString		m_szNameKey;
	CString		m_szUnit;
	CString		m_szProdCountry;
	CString		m_szIndicationKey;
	CString		m_szTimeDay;
	CString		m_szTimeQty;


	long	m_nQty;
	long	m_nMaxQuantity;
	CString	m_szUsage;
	BOOL	m_bSearchForGenericName;
	long	m_nTotalCost;
	long	m_nPatientPaid;
	CDbfMap	m_hms_pharma_orderTbl;
	CDbfMap	m_hms_pharma_order_lineTbl;

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
	void			OnIndicationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIndicationSelendok(); 
	//void			OnIndicationSetfocus(); 
	//void			OnIndicationKillfocus(); 
	long			OnIndicationLoadData(); 
	void			OnIndicationAddNew(); 
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
	
	CHMSXPrescriptionPopup();
	CHMSXPrescriptionPopup(CWnd *pParent);
	~CHMSXPrescriptionPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSXPrescriptionPopup(); 
	int OnEditHMSXPrescriptionPopup(); 
	int OnDeleteHMSXPrescriptionPopup(); 
	int OnSaveHMSXPrescriptionPopup(); 
	int OnCancelHMSXPrescriptionPopup(); 
	int OnHMSXPrescriptionPopupListLoadData(); 
	//Ham ket thua tu lop CGuiPopup;
	void	ShowPopup(CWnd* pWndRef, int nShowPopup=WPS_BOTTOM);
	void	ClosePopup();

	DECLARE_MESSAGE_MAP()

};
#endif
