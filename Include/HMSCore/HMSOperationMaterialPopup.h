#ifndef HMSInpatientPrescriptionPOPUP_H
#define HMSInpatientPrescriptionPOPUP_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Storage Company. 2005-2010. 			
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


class CHMSOperationMaterialPopup : public CGuiPopup{
protected:
public:		
	bool	m_bInpaient;
	long	m_nOrderID;
	long	m_nOperationID;
	CString	m_szItemID;
	CString	m_szOrders;
	int		m_nLevel;

	CGuiGroupBox	m_wndInpatientPrescriptionInput;

	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiButton		m_wndDrugReplaced;
	CGuiLabel		m_wndNameLabel;
	CGuiCheckBox	m_wndPrincipleActive;
	CGuiComboBox	m_wndName;

	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiLabel		m_wndOnHandLabel;
	CGuiNumberCtrl	m_wndMaxQuantity;

	CGuiLabel		m_wndUsageLabel;
	CGuiTextCtrl	m_wndUsage;
	CGuiLabel		m_wndDescription;
	
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString		m_szStorageKey;
	CString		m_szOrderDate;
	CString		m_szNameKey;
	CString		m_szUnit;
	CString		m_szProdCountry;
	CString		m_szIndicationKey;
	CString		m_szTimeDay;
	CString		m_szTimeQty;


	float	m_nQty;
	long	m_nMaxQuantity;
	CString	m_szUsage;
	BOOL	m_bPrincipleActive;
	long	m_nTotalCost;
	long	m_nPatientPaid;
	CDbfMap	m_hms_pharmaorderTbl;
	CDbfMap	m_hms_pharmaorder_lineTbl;


	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	void			OnStorageAddNew(); 
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
	void			OnPrincipleActiveSelect(); 
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
	
	CHMSOperationMaterialPopup();
	CHMSOperationMaterialPopup(CWnd *pParent, int nMode);
	~CHMSOperationMaterialPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOperationMaterialPopup(); 
	int OnEditHMSOperationMaterialPopup(); 
	int OnDeleteHMSOperationMaterialPopup(); 
	int OnSaveHMSOperationMaterialPopup(); 
	int OnCancelHMSOperationMaterialPopup(); 
	int OnHMSOperationMaterialPopupListLoadData(); 
	//Ham ket thua tu lop CGuiPopup;
	void	ShowPopup(CWnd* pWndRef, int nShowPopup=WPS_BOTTOM);
	void	ClosePopup();

	DECLARE_MESSAGE_MAP()

};
#endif
