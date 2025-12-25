#ifndef SMCOSTACCUMULATION_H
#define SMCOSTACCUMULATION_H

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
class CAdCostAccumulation : public CGuiPopup{
protected:
public:
	CGuiLabel		m_wndTypeLabel;
	CGuiGroupBox	m_wndCostAccumulationObject;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndParentLabel;
	CGuiComboBox	m_wndParent;
	CGuiLabel		m_wndCustomerLabel;
	CGuiComboBox	m_wndCustomer;
	CGuiLabel		m_wndStartDateLabel;
	CGuiDateCtrl	m_wndStartDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateCtrl	m_wndEndDate;
	CGuiLabel		m_wndContractValueLabel;
	CGuiNumberCtrl	m_wndContractValue;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndSave;
	CString	m_szTypeKey;
	CString	m_szID;
	CString	m_szName;
	CString	m_szParentKey;
	CString	m_szCustomerKey;
	CString	m_szStartDate;
	CString	m_szEndDate;
	long	m_nContractValue;
	CString	m_szDescription;
	int		m_nMode;
	CDbfMap			m_acc_cost_accumulationTbl;
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	void			OnTypeAddNew(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnParentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnParentSelendok(); 
	//void			OnParentSetfocus(); 
	//void			OnParentKillfocus(); 
	long			OnParentLoadData(); 
	void			OnParentAddNew(); 
	void			OnCustomerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCustomerSelendok(); 
	//void			OnCustomerSetfocus(); 
	//void			OnCustomerKillfocus(); 
	long			OnCustomerLoadData(); 
	void			OnCustomerAddNew(); 
	//void			OnStartDateChange(); 
	//void			OnStartDateSetfocus(); 
	//void			OnStartDateKillfocus(); 
	int			OnStartDateCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	//void			OnContractValueChange(); 
	//void			OnContractValueSetfocus(); 
	//void			OnContractValueKillfocus(); 
	int			OnContractValueCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnSaveSelect(); 
	CAdCostAccumulation(CWnd *pParent);
	~CAdCostAccumulation();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdCostAccumulation(); 
	int OnEditAdCostAccumulation(); 
	int OnDeleteAdCostAccumulation(); 
	int OnSaveAdCostAccumulation(); 
	int OnCancelAdCostAccumulation(); 
	int OnAdCostAccumulationListLoadData(); 
	void ClosePopup();
};
#endif
