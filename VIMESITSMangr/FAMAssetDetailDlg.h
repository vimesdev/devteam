#ifndef FAMASSETDETAILDLG_H
#define FAMASSETDETAILDLG_H

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
class CFAMAssetDetailDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndAssetInformation;
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
	CGuiLabel		m_wndMadeInLabel;
	CGuiComboBox	m_wndMadeIn;
	CGuiLabel		m_wndVendorLabel;
	CGuiComboBox	m_wndVendor;
	CGuiLabel		m_wndManufactureLabel;
	CGuiComboBox	m_wndManufacture;
	CGuiLabel		m_wndManufacturedDateLabel;
	CGuiNumberCtrl	m_wndManufacturedDate;
	CGuiLabel		m_wndGuaranteeDurationLabel;
	CGuiTextCtrl	m_wndGuaranteeDuration;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndUnitLabel;
	CGuiComboBox	m_wndUnit;
	CGuiLabel		m_wndConditionLabel;
	CGuiComboBox	m_wndCondition;
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
	CGuiLabel		m_wndUsedDateLabel;
	CGuiDateCtrl	m_wndUsedDate;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szAssetNo;
	CString	m_szName;
	CString	m_szDescription;
	CString	m_szModel;
	CString	m_szSerial;
	CString	m_szMadeInKey;
	CString	m_szVendorKey;
	CString	m_szManufactureKey;
	long	m_nManufacturedDate;
	CString	m_szGuaranteeDuration;
	CString	m_szCategoryKey;
	long	m_nQuantity;
	CString	m_szUnitKey;
	CString	m_szConditionKey;
	CString	m_szPowerCircuitKey;
	CString	m_szVoltage;
	CString	m_szCapacity;
	CString	m_szPurchaseDate;
	long	m_nPurchasePrice;
	CString	m_szUsedDate;
	CString	m_szDepartmentKey;
	CString m_szCurAssetNo;
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
	void			OnMadeInSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMadeInSelendok(); 
	//void			OnMadeInSetfocus(); 
	//void			OnMadeInKillfocus(); 
	long			OnMadeInLoadData(); 
	//void			OnMadeInAddNew(); 
	void			OnVendorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVendorSelendok(); 
	//void			OnVendorSetfocus(); 
	//void			OnVendorKillfocus(); 
	long			OnVendorLoadData(); 
	//void			OnVendorAddNew(); 
	void			OnManufactureSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnManufactureSelendok(); 
	//void			OnManufactureSetfocus(); 
	//void			OnManufactureKillfocus(); 
	long			OnManufactureLoadData(); 
	//void			OnManufactureAddNew(); 
	//void			OnManufacturedDateChange(); 
	//void			OnManufacturedDateSetfocus(); 
	//void			OnManufacturedDateKillfocus(); 
	int			OnManufacturedDateCheckValue(); 
	//void			OnGuaranteeDurationChange(); 
	//void			OnGuaranteeDurationSetfocus(); 
	//void			OnGuaranteeDurationKillfocus(); 
	int			OnGuaranteeDurationCheckValue(); 
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	//void			OnCategoryAddNew(); 
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
	void			OnConditionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnConditionSelendok(); 
	//void			OnConditionSetfocus(); 
	//void			OnConditionKillfocus(); 
	long			OnConditionLoadData(); 
	//void			OnConditionAddNew(); 
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
	//void			OnPurchaseDateKillfocus(); 
	int			OnPurchaseDateCheckValue(); 
	//void			OnPurchasePriceChange(); 
	//void			OnPurchasePriceSetfocus(); 
	//void			OnPurchasePriceKillfocus(); 
	int			OnPurchasePriceCheckValue(); 
	//void			OnUsedDateChange(); 
	//void			OnUsedDateSetfocus(); 
	//void			OnUsedDateKillfocus(); 
	int			OnUsedDateCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnCloseSelect(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CFAMAssetDetailDlg(CWnd *pParent);
	~CFAMAssetDetailDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMAssetDetailDlg(); 
	int OnEditFAMAssetDetailDlg(); 
	int OnDeleteFAMAssetDetailDlg(); 
	int OnSaveFAMAssetDetailDlg(); 
	int OnCancelFAMAssetDetailDlg(); 
	int OnFAMAssetDetailDlgListLoadData(); 
};
#endif
