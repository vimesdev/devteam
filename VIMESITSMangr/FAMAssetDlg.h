#ifndef FAMASSETDLG_H
#define FAMASSETDLG_H

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
class CFAMAssetDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndAssetInformation;
	CGuiGroupBox	m_wndAccessoriesList;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndAssetNoLabel;
	CGuiMaskCtrl	m_wndAssetNo;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndModelLabel;
	CGuiTextCtrl	m_wndModel;
	CGuiLabel		m_wndSerialLabel;
	CGuiTextCtrl	m_wndSerial;
	CGuiLabel		m_wndDeprTimeLabel;
	CGuiNumberCtrl	m_wndDeprTime;
	CGuiLabel		m_wndMadeInLabel;
	CGuiComboBox	m_wndMadeIn;
	CGuiLabel		m_wndManufactureLabel;
	CGuiComboBox	m_wndManufacture;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndUnitLabel;
	CGuiComboBox	m_wndUnit;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndConditionLabel;
	CGuiComboBox	m_wndCondition;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndEmployeerLabel;
	CGuiComboBox	m_wndEmployeer;
	CGuiLabel		m_wndVendorLabel;
	CGuiComboBox	m_wndVendor;
	CGuiLabel		m_wndPurchaseInvoiceLabel;
	CGuiTextCtrl	m_wndPurchaseInvoice;
	CGuiLabel		m_wndPowerCircuitLabel;
	CGuiComboBox	m_wndPowerCircuit;
	CGuiLabel		m_wndVoltageLabel;
	CGuiTextCtrl	m_wndVoltage;
	CGuiLabel		m_wndCapacityLabel;
	CGuiTextCtrl	m_wndCapacity;
	CGuiLabel		m_wndPurchaseDateLabel;
	CGuiDateCtrl	m_wndPurchaseDate;
	CGuiLabel		m_wndPurchasePriceLabel;
	CGuiNumberCtrl	m_wndPurchasePrice;
	CGuiLabel		m_wndSourcesLabel;
	CGuiComboBox	m_wndSources;
	CGuiLabel		m_wndIncDateLabel;
	CGuiDateCtrl	m_wndIncDate;
	CGuiLabel		m_wndIncReasonLabel;
	CGuiComboBox	m_wndIncReason;
	CGuiLabel		m_wndUsedDateLabel;
	CGuiDateCtrl	m_wndUsedDate;
	CGuiLabel		m_wndDeprValueLabel;
	CGuiNumberCtrl	m_wndDeprValue;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szAssetNo;
	CString	m_szName;
	CString	m_szDescription;
	CString	m_szModel;
	CString	m_szSerial;
	long	m_nManufacturedDate;
	CString	m_szGuaranteeDuration;
	CString	m_szMadeInKey;
	CString	m_szManufactureKey;
	long	m_nQuantity;
	CString	m_szUnitKey;
	CString	m_szAccessories;
	CString	m_szCategoryKey;
	CString	m_szConditionKey;
	CString	m_szDepartmentKey;
	CString	m_szEmployeerKey;
	CString	m_szVendorKey;
	CString	m_szPurchaseInvoice;
	CString	m_szPowerCircuitKey;
	CString	m_szVoltage;
	CString	m_szCapacity;
	CString	m_szPurchaseDate;
	double	m_nPurchasePrice;
	CString	m_szSourcesKey;
	CString	m_szIncDate;
	CString	m_szIncReasonKey;
	CString	m_szUsedDate;
	long	m_nDeprValue;
	long	m_nDeprTime;
	CDbfMap	m_fam_assetTbl;

	bool m_isDeposed;
	CString m_szOStatus;
	CString m_szTransType;
	int m_nIndex;
	long m_nTestRunPrice;
	long m_nTransportPrice;
	CString m_szDeprUnit;
	//bool m_isOpenEx;
	bool m_bEmplShow;
	CString curAssetNo;
	CString szUser;
	CString szJoinedID;
	CString szAssetNo;
	CString	m_szTypeKey;
	int		m_nAccessIdx;
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnAssetNoChange(); 
	//void			OnAssetNoSetfocus(); 
	//void			OnAssetNoKillfocus(); 
	int			OnAssetNoCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnModelChange(); 
	//void			OnModelSetfocus(); 
	//void			OnModelKillfocus(); 
	int			OnModelCheckValue(); 
	//void			OnSerialChange(); 
	//void			OnSerialSetfocus(); 
	//void			OnSerialKillfocus(); 
	int			OnSerialCheckValue(); 
	int			OnGuaranteeDurationCheckValue(); 
	void			OnMadeInSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMadeInSelendok(); 
	//void			OnMadeInSetfocus(); 
	//void			OnMadeInKillfocus(); 
	long			OnMadeInLoadData(); 
	//void			OnMadeInAddNew(); 
	void			OnManufactureSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnManufactureSelendok(); 
	//void			OnManufactureSetfocus(); 
	//void			OnManufactureKillfocus(); 
	long			OnManufactureLoadData(); 
	//void			OnManufactureAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnUnitSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUnitSelendok(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	long			OnUnitLoadData(); 
	//void			OnUnitAddNew(); 
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	//void			OnCategoryAddNew(); 
	void			OnConditionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnConditionSelendok(); 
	//void			OnConditionSetfocus(); 
	//void			OnConditionKillfocus(); 
	long			OnConditionLoadData(); 
	//void			OnConditionAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnEmployeerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEmployeerSelendok(); 
	//void			OnEmployeerSetfocus(); 
	//void			OnEmployeerKillfocus(); 
	long			OnEmployeerLoadData(); 
	//void			OnEmployeerAddNew(); 
	void			OnVendorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVendorSelendok(); 
	//void			OnVendorSetfocus(); 
	//void			OnVendorKillfocus(); 
	long			OnVendorLoadData(); 
	//void			OnVendorAddNew(); 
	//void			OnPurchaseInvoiceChange(); 
	//void			OnPurchaseInvoiceSetfocus(); 
	//void			OnPurchaseInvoiceKillfocus(); 
	int			OnPurchaseInvoiceCheckValue(); 
	void			OnPowerCircuitSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPowerCircuitSelendok(); 
	//void			OnPowerCircuitSetfocus(); 
	//void			OnPowerCircuitKillfocus(); 
	long			OnPowerCircuitLoadData(); 
	//void			OnPowerCircuitAddNew(); 
	//void			OnVoltageChange(); 
	//void			OnVoltageSetfocus(); 
	//void			OnVoltageKillfocus(); 
	int			OnVoltageCheckValue(); 
	//void			OnCapacityChange(); 
	//void			OnCapacitySetfocus(); 
	//void			OnCapacityKillfocus(); 
	int			OnCapacityCheckValue(); 
	//void			OnPurchaseDateChange(); 
	//void			OnPurchaseDateSetfocus(); 
	void			OnPurchaseDateKillfocus(); 
	int			OnPurchaseDateCheckValue(); 
	//void			OnPurchasePriceChange(); 
	//void			OnPurchasePriceSetfocus(); 
	//void			OnPurchasePriceKillfocus(); 
	int			OnPurchasePriceCheckValue(); 
	void			OnSourcesSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSourcesSelendok(); 
	//void			OnSourcesSetfocus(); 
	//void			OnSourcesKillfocus(); 
	long			OnSourcesLoadData(); 
	//void			OnSourcesAddNew(); 
	//void			OnIncDateChange(); 
	//void			OnIncDateSetfocus(); 
	//void			OnIncDateKillfocus(); 
	int			OnIncDateCheckValue(); 
	void			OnIncReasonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIncReasonSelendok(); 
	//void			OnIncReasonSetfocus(); 
	//void			OnIncReasonKillfocus(); 
	long			OnIncReasonLoadData(); 
	//void			OnIncReasonAddNew(); 
	//void			OnUsedDateChange(); 
	//void			OnUsedDateSetfocus(); 
	//void			OnUsedDateKillfocus(); 
	int			OnUsedDateCheckValue(); 
	//void			OnDeprValueChange(); 
	//void			OnDeprValueSetfocus(); 
	//void			OnDeprValueKillfocus(); 
	int			OnDeprValueCheckValue(); 
		//void			OnDeprTimeChange(); 
	//void			OnDeprTimeSetfocus(); 
	//void			OnDeprTimeKillfocus(); 
	int			OnDeprTimeCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem();
	int			OnListEditItem();
	int			OnListDeleteItem(); 
	CFAMAssetDlg(CWnd *pParent);
	~CFAMAssetDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMAssetDlg(); 
	int OnEditFAMAssetDlg(); 
	int OnDeleteFAMAssetDlg(); 
	int OnSaveFAMAssetDlg(); 
	int OnCancelFAMAssetDlg(); 
	int OnFAMAssetDlgListLoadData(); 
};
#endif
