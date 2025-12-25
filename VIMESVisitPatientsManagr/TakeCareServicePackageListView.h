#ifndef TakeCareServicePackageListView_H
#define TakeCareServicePackageListView_H

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
#include "GridListView.h"
class CTakeCareServicePackageListView : public CGuiView
{
protected:
	
	
public:
	long	m_nCurDoc;
	long	m_nOrderId;
	long	m_nOrderLineId;
	CString		m_szStatus;

	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndProvillLabel;
	CGuiComboBox	m_wndProvill;
	CGuiLabel		m_wndDistrictLabel;
	CGuiComboBox	m_wndDistrict;
	CGuiLabel		m_wndVillageLabel;
	CGuiComboBox	m_wndVillage;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndCardNumberLabel;
	CGuiTextCtrl	m_wndCardNumber;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiNumberCtrl	m_wndOrderNo;
	CGuiLabel		m_wndServicePackageLabel;
	CGuiComboBox	m_wndServicePackage;
	CGuiLabel		m_wndStatus;
	CGuiRadioButton	m_wndPendingOption;
	CGuiRadioButton	m_wndRegistedOption;
	CGuiRadioButton	m_wndTerminateOption;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndSearch;
	CGuiButton		m_wndClear;
	CGuiButton		m_wndRegister;
	CGuiButton		m_wndRegisterNew;
	CGridListView	m_wndList;
	CString	m_szPatientName;
	CString	m_szPhone;
	CString	m_szProvillKey;
	CString	m_szDistrictKey;
	CString	m_szVillageKey;
	CString	m_szDepartmentKey;
	CString	m_szCardNumber;
	CString	m_szServicePackageKey;
	long	m_nDocumentNo;
	long	m_nOrderNo;
	
	CString	m_szFromDate;
	CString	m_szToDate;
	int	m_nStatusOption;

	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	void			OnProvillSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvillSelendok(); 
	//void			OnProvillSetfocus(); 
	//void			OnProvillKillfocus(); 
	long			OnProvillLoadData(); 
	//void			OnProvillAddNew(); 
	void			OnDistrictSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistrictSelendok(); 
	//void			OnDistrictSetfocus(); 
	//void			OnDistrictKillfocus(); 
	long			OnDistrictLoadData(); 
	//void			OnDistrictAddNew(); 
	void			OnVillageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVillageSelendok(); 
	//void			OnVillageSetfocus(); 
	//void			OnVillageKillfocus(); 
	long			OnVillageLoadData(); 
	//void			OnVillageAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	long			OnServicePackageLoadData(); 
	//void			OnDepartmentAddNew(); 
	//void			OnCardNumberChange(); 
	//void			OnCardNumberSetfocus(); 
	//void			OnCardNumberKillfocus(); 
	int			OnCardNumberCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 

	void			OnPendingOptionSelect(); 
	void			OnRegistedOptionSelect(); 
	void			OnTerminateOptionSelect(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnSearchSelect(); 
	void			OnClearSelect(); 
	void			OnRegisterSelect(); 
	void			OnTerminateSelect();
	void			OnRegisterNewSelect(); 
	

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	
	int			OnListRegisterItem(); 
	int			OnListEditItem(); 
	int			OnListTerminateItem(); 
	int			OnListPrintItem(); 
	int			OnListRollbackItem(); 
	int			OnRegisterTakeCareServicePackage(); 
	int			OnListRevokeItem();

	CTakeCareServicePackageListView();
	~CTakeCareServicePackageListView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTakeCareServicePackageListView(); 
	int OnEditTakeCareServicePackageListView(); 
	int OnDeleteTakeCareServicePackageListView(); 
	int OnSaveTakeCareServicePackageListView(); 
	int OnCancelTakeCareServicePackageListView(); 
	int OnTakeCareServicePackageListViewListLoadData(); 
	void OnResizeLayout();
	BOOL PreTranslateMessage(MSG *pMsg);
	CString		GetOrderStatus();

};
#endif
