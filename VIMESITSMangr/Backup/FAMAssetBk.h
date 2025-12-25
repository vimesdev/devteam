#ifndef FAMASSET_H
#define FAMASSET_H

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
#include "GuiView.h"
#include "DbField.h"
#include "FAMAssetType.h"
#include "FAMAssetDept.h"
#include "FAMAssetDepreciation.h"
#include "FAMMaintenance.h"
#include "FAMAssetNote.h"
#include "FAMAttachment.h"
#include "FAMUsageProcess.h"

class CFAMAsset : public CGuiView{
protected:
public:

	CFAMAssetType m_wndAssetType;
	CFAMAssetDept m_wndAssetDept;
	CFAMAssetDepreciation m_wndAssetDeprec;
	CFAMMaintenance m_wndAssetMaint;
	CFAMAssetNote m_wndAssetNote;
	CFAMAttachment m_wndAttachment;
	CFAMUsageProcess m_wndUsageProcess;

	CGuiGroupBox	m_wndAssetInformation;
	CGuiGroupBox	m_wndAssets;
	CGuiLabel		m_wndAssetNumberLabel;
	CGuiTextCtrl	m_wndAssetNumber;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndPurchaseNumberLabel;
	CGuiTextCtrl	m_wndPurchaseNumber;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndVendorLabel;
	CGuiComboBox	m_wndVendor;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndPurchaseDateLabel;
	CGuiDateCtrl	m_wndPurchaseDate;
	CGuiLabel		m_wndLocationLabel;
	CGuiTextCtrl	m_wndLocation;
	CGuiLabel		m_wndInServiceLabel;
	CGuiDateCtrl	m_wndInService;
	CGuiLabel		m_wndSubLocationLabel;
	CGuiComboBox	m_wndSubLocation;
	CGuiLabel		m_wndPurchasePriceLabel;
	CGuiNumberCtrl	m_wndPurchasePrice;
	CGuiLabel		m_wndEmployeeLabel;
	CGuiTextCtrl	m_wndEmployee;
	CGuiLabel		m_wndCurrentDeprValueLabel;
	CGuiNumberCtrl	m_wndCurrentDeprValue;
	CGuiLabel		m_wndManufactureLabel;
	CGuiTextCtrl	m_wndManufacture;
	CGuiLabel		m_wndCurrentValueLabel;
	CGuiNumberCtrl	m_wndCurrentValue;
	CGuiLabel		m_wndBrandLabel;
	CGuiTextCtrl	m_wndBrand;
	CGuiLabel		m_wndSalvageValueLabel;
	CGuiNumberCtrl	m_wndSalvage;
	CGuiLabel		m_wndModelLabel;
	CGuiTextCtrl	m_wndModel;
	CGuiLabel		m_wndSerialLabel;
	CGuiTextCtrl	m_wndSerial;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndConditionLabel;
	CGuiComboBox	m_wndCondition;
	CGuiTabCtrl	m_wndSearchTab;
	CGuiTabCtrl	m_wndAssetTab;
	CGuiPictureCtrl	m_wndImage;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szAssetNumber;
	CString	m_szName;
	CString	m_szPurchaseNumber;
	CString	m_szUnit;
	CString	m_szCategoryKey;
	CString	m_szVendorKey;
	CString	m_szTypeKey;
	CString	m_szPurchaseDate;
	CString	m_szLocation;
	CString	m_szInService;
	CString	m_szSubLocation;
	long	m_nPurchasePrice;
	CString	m_szEmployee;
	long	m_nCurrentDeprValue;
	CString	m_szManufacture;
	long	m_nCurrentValue;
	CString	m_szBrand;
	long	m_nSalvage;
	CString	m_szModel;
	CString	m_szSerial;
	CString	m_szStatusKey;
	CString	m_szConditionKey;
	CDbfMap	m_fam_assetTbl;

	bool m_isDeposed;
	CString m_szOStatus;
	CString m_szType;
	int m_nIndex;

	//void			OnAssetNumberChange(); 
	//void			OnAssetNumberSetfocus(); 
	//void			OnAssetNumberKillfocus(); 
	int			OnAssetNumberCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnPurchaseNumberChange(); 
	//void			OnPurchaseNumberSetfocus(); 
	//void			OnPurchaseNumberKillfocus(); 
	int			OnPurchaseNumberCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	void			OnCategoryAddNew(); 
	void			OnVendorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVendorSelendok(); 
	//void			OnVendorSetfocus(); 
	//void			OnVendorKillfocus(); 
	long			OnVendorLoadData(); 
	void			OnVendorAddNew(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	void			OnTypeAddNew(); 
	//void			OnPurchaseDateChange(); 
	//void			OnPurchaseDateSetfocus(); 
	void			OnPurchaseDateKillfocus(); 
	int			OnPurchaseDateCheckValue(); 
	//void			OnLocationChange(); 
	//void			OnLocationSetfocus(); 
	//void			OnLocationKillfocus(); 
	int			OnLocationCheckValue(); 
	//void			OnInServiceChange(); 
	void			OnInServiceSetfocus(); 
	void			OnInServiceKillfocus(); 
	int			OnInServiceCheckValue(); 
	void			OnSubLocationSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnSubLocationSelendok(); 
	//void			OnSubLocationChange(); 
	//void			OnSubLocationSetfocus(); 
	//void			OnSubLocationKillfocus(); 
	//int			OnSubLocationCheckValue();
	long			OnSubLocationLoadData(); 
	void			OnSubLocationAddNew();
	//void			OnPurchasePriceChange(); 
	//void			OnPurchasePriceSetfocus(); 
	//void			OnPurchasePriceKillfocus(); 
	int			OnPurchasePriceCheckValue(); 
	//void			OnEmployeeChange(); 
	//void			OnEmployeeSetfocus(); 
	//void			OnEmployeeKillfocus(); 
	int			OnEmployeeCheckValue(); 
	//void			OnCurrentDeprValueChange(); 
	//void			OnCurrentDeprValueSetfocus(); 
	//void			OnCurrentDeprValueKillfocus(); 
	int			OnCurrentDeprValueCheckValue(); 
	//void			OnManufactureChange(); 
	//void			OnManufactureSetfocus(); 
	//void			OnManufactureKillfocus(); 
	int			OnManufactureCheckValue(); 
	//void			OnCurrentValueChange(); 
	//void			OnCurrentValueSetfocus(); 
	//void			OnCurrentValueKillfocus(); 
	int			OnCurrentValueCheckValue(); 
	//void			OnBrandChange(); 
	//void			OnBrandSetfocus(); 
	//void			OnBrandKillfocus(); 
	int			OnBrandCheckValue(); 
	//void			OnSalvageChange(); 
	//void			OnSalvageSetfocus(); 
	//void			OnSalvageKillfocus(); 
	int			OnSalvageCheckValue(); 
	//void			OnModelChange(); 
	//void			OnModelSetfocus(); 
	//void			OnModelKillfocus(); 
	int			OnModelCheckValue(); 
	//void			OnSerialChange(); 
	//void			OnSerialSetfocus(); 
	//void			OnSerialKillfocus(); 
	int			OnSerialCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	void			OnStatusSetfocus(); 
	void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	void			OnStatusAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnConditionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnConditionSelendok(); 
	//void			OnConditionSetfocus(); 
	void			OnConditionKillfocus(); 
	long			OnConditionLoadData(); 
	void			OnConditionAddNew(); 
	void			OnSearchTabSelectChange(int nOld, int nNew); 
	void			OnAssetTabSelectChange(int nOld, int nNew); 
	void			OnImageSelectChange(int nOld, int nNew); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CFAMAsset();
	~CFAMAsset();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnCheckInServiceDate();
	int SetMode(int nMode);
	int OnAddFAMAsset(); 
	int OnEditFAMAsset(); 
	int OnDeleteFAMAsset(); 
	int OnSaveFAMAsset(); 
	int OnCancelFAMAsset(); 
	int OnFAMAssetListLoadData(); 
};
#endif
