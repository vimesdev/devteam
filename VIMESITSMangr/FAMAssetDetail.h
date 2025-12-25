#ifndef FAMASSETDETAIL_H
#define FAMASSETDETAIL_H

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
#include "FAMAssetTypeDetail.h"
#include "FAMAssetDept.h"
#include "FAMAssetDepreciation.h"
#include "FAMMaintenance.h"
//#include "FAMAssetNote.h"
#include "FAMAttachment.h"
#include "FAMUsageProcess.h"
#include "FAMAssetExtraInformation.h"
#include "FAMAccessories.h"
#include "IncReasonSetupDialog.h"
#include "ConditionSetupDialog.h"
#include "FAMInventory.h"
#include "FAMInventoryDlg.h"
#include "FAMTransfer.h"

class CFAMAssetDetail : public CGuiView{
protected:   
public:

	CFAMAssetTypeDetail m_wndAssetTypeDetail;
	CFAMAssetDept m_wndAssetDept;
	CFAMAssetDepreciation m_wndAssetDeprec;
	CFAMMaintenance m_wndAssetMaint;
	//CFAMAssetDetailNote m_wndAssetNote;
	CFAMAttachment m_wndAttachment;
	CFAMUsageProcess m_wndUsageProcess;
	CFAMTransfer m_wndTransfer;
	CFAMAccessories m_wndAccessory;
	CFAMInventory m_wndInventory;


	CGuiGroupBox	m_wndAssetInformation;
	CGuiGroupBox	m_wndAssets;
	CGuiListCtrl	m_wndList;
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
	CGuiLabel		m_wndManufacturedDateLabel;
	CGuiNumberCtrl	m_wndManufacturedDate;
	CGuiLabel		m_wndGuaranteeDurationLabel;
	CGuiTextCtrl	m_wndGuaranteeDuration;
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
	CGuiLabel		m_wndVendorLabel;
	CGuiComboBox	m_wndVendor;
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
	CGuiLabel		m_wndDeprValueLabel;
	CGuiNumberCtrl	m_wndDeprValue;
	CGuiLabel		m_wndDeprTimeLabel;
	CGuiNumberCtrl	m_wndDeprTime;
	CGuiLabel		m_wndSearchByNameLabel;
	CGuiTextCtrl	m_wndSearchByName;
	CGuiTabCtrl	m_wndAssetTab;
	CGuiPictureCtrl	m_wndImage;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndSearchDeptLabel;
	CGuiComboBox	m_wndSearchDept;

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
	long	m_nDeprTime;
	CString	m_szUsedDate;
	double	m_nDeprValue;
	double	m_nCurrentValue;
	CString	m_szAssetAccountKey;
	CString	m_szDeprAccountKey;
	CString	m_szExpenseAccountKey;
	CString	m_szSourcesKey;
	CString	m_szIncDate;
	CString	m_szIncReasonKey;
	CString m_szSearchByName;
	CString	m_szTypeKey;
	CString	m_szSearchDeptKey;
	CDbfMap	m_fam_assetTbl;

	bool m_isDeposed;
	bool m_isEdit;
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

	void			OnSearchTabSelectChange(int nOld, int nNew); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
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
	//void			OnManufacturedDateChange(); 
	//void			OnManufacturedDateSetfocus(); 
	//void			OnManufacturedDateKillfocus(); 
	int			OnManufacturedDateCheckValue(); 
	//void			OnGuaranteeDurationChange(); 
	//void			OnGuaranteeDurationSetfocus(); 
	//void			OnGuaranteeDurationKillfocus(); 
	int			OnGuaranteeDurationCheckValue(); 
	void			OnMadeInSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMadeInSelendok(); 
	//void			OnMadeInSetfocus(); 
	//void			OnMadeInKillfocus(); 
	long			OnMadeInLoadData(); 
	void			OnMadeInAddNew(); 
	void			OnManufactureSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnManufactureSelendok(); 
	//void			OnManufactureSetfocus(); 
	//void			OnManufactureKillfocus(); 
	long			OnManufactureLoadData(); 
	void			OnManufactureAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	long			OnUnitLoadData();
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnAccessoriesChange(); 
	//void			OnAccessoriesSetfocus(); 
	//void			OnAccessoriesKillfocus(); 
	int			OnAccessoriesCheckValue(); 
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	void			OnCategoryAddNew(); 
	void			OnConditionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnConditionSelendok(); 
	//void			OnConditionSetfocus(); 
	//void			OnConditionKillfocus(); 
	long			OnConditionLoadData(); 
	void			OnConditionAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	void			OnEmployeerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEmployeerSelendok(); 
	//void			OnEmployeerSetfocus(); 
	//void			OnEmployeerKillfocus(); 
	long			OnEmployeerLoadData(); 
	void			OnEmployeerAddNew(); 
	void			OnVendorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVendorSelendok(); 
	//void			OnVendorSetfocus(); 
	//void			OnVendorKillfocus(); 
	long			OnVendorLoadData(); 
	void			OnVendorAddNew(); 
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
	//void			OnPurchaseDateKillfocus(); 
	//void			OnPurchaseDateChange(); 
	//void			OnPurchaseDateSetfocus(); 
	void			OnPurchaseDateKillfocus(); 
	int			OnPurchaseDateCheckValue(); 
	//void			OnPurchasePriceChange(); 
	//void			OnPurchasePriceSetfocus(); 
	void			OnPurchasePriceKillfocus(); 
	int			OnPurchasePriceCheckValue(); 
	//void			OnDeprTimeChange(); 
	//void			OnDeprTimeSetfocus(); 
	//void			OnDeprTimeKillfocus(); 
	//int			OnDeprTimeCheckValue(); 
	//void			OnUsedDateChange(); 
	//void			OnUsedDateSetfocus(); 
	//void			OnUsedDateKillfocus(); 
	int			OnUsedDateCheckValue(); 
	//void			OnDeprValueChange(); 
	//void			OnDeprValueSetfocus(); 
	//void			OnDeprValueKillfocus(); 
	int			OnDeprValueCheckValue(); 
	//void			OnCurrentValueChange(); 
	//void			OnCurrentValueSetfocus(); 
	//void			OnCurrentValueKillfocus(); 
	int			OnCurrentValueCheckValue(); 
	//void			OnAssetAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSourcesSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSourcesSelendok(); 
	//void			OnSourcesSetfocus(); 
	//void			OnSourcesKillfocus(); 
	long			OnSourcesLoadData(); 
	void			OnSourcesAddNew(); 
	//void			OnIncDateChange(); 
	//void			OnIncDateSetfocus(); 
	//void			OnIncDateKillfocus(); 
	int			OnIncDateCheckValue(); 
	void			OnIncReasonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIncReasonSelendok(); 
	//void			OnIncReasonSetfocus(); 
	//void			OnIncReasonKillfocus(); 
	long			OnIncReasonLoadData(); 
	void			OnIncReasonAddNew();
	//void			OnDeprTimeChange(); 
	//void			OnDeprTimeSetfocus(); 
	//void			OnDeprTimeKillfocus(); 
	int			OnDeprTimeCheckValue(); 
	void			OnSearchByNameChange(); 
	//void			OnSearchByNameSetfocus(); 
	void			OnSearchByNameKillfocus(); 
	int			OnSearchByNameCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnSearchDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSearchDeptSelendok(); 
	//void			OnSearchDeptSetfocus(); 
	//void			OnSearchDeptKillfocus(); 
	long			OnSearchDeptLoadData(); 
	//void			OnSearchDeptAddNew(); 
	void			OnAssetTabSelectChange(int nOld, int nNew);
	void			OnManufactureLabelSelect();
	void			OnCategoryLabelSelect();
	void			OnCurrentValueLabelSelect();
	void			OnIncReasonLabelSelect();
	void			OnConditionLabelSelect();
	void			SetItemSel(CGuiListCtrl *pList, CString szID, int nIndex);
	//void			OnManufactureLabelMouseMove(UINT nFlags, CPoint point);
	void			ResetData();
	int				FindSelectIndex(CString szValue, CGuiListCtrl *pList);

	CFAMAssetDetail();
	~CFAMAssetDetail();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMAsset(); 
	int OnEditFAMAsset(); 
	int OnDeleteFAMAsset(); 
	int OnSaveFAMAsset(); 
	int OnCancelFAMAsset(); 
	int OnEditAsset();
	int OnSaveAsset();
	int OnFAMAssetDetailLoadData();
	void ChangeCostNTime();
	BOOL UploadImage(CString szFileName);
	BOOL UnlinkImage(CString szFileName);
	BOOL DownloadImage();
	int OnPrintImportOrder();
	int OnFixedAssetCard();
	void CheckUser();
	int OnCancelAssetList();
};
#endif
