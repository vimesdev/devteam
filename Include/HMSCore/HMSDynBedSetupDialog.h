#ifndef HMSDYNBEDSETUPDIALOG_H
#define HMSDYNBEDSETUPDIALOG_H

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
class CHMSDynBedSetupDialog : public CGuiDialog{
protected:
public:
	CString			m_szDepartmentKey;
	int				m_nIndex;
	CGuiListCtrl	m_wndPriceList;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiGroupBox	m_wndDynamicBedInformation;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiLabel		m_wndRequirePriceLabel;
	CGuiNumberCtrl	m_wndRequirePrice;
	CGuiCheckBox	m_wndInsurancePaid;
	CGuiCheckBox	m_wndPolicyPaid;
	CGuiCheckBox	m_wndDifferencePaid;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szName;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	long	m_nPolicyPrice;
	long	m_nRequirePrice;
	BOOL	m_bInsurancePaid;
	BOOL	m_bPolicyPaid;
	BOOL	m_bDifferencePaid;
	CDbfMap	m_hms_dynbedlistTbl;
	long			OnPriceListLoadData(); 
	void			OnPriceListSelectChange(int nOldItem, int nNewItem); 
	void			OnPriceListDblClick(); 
	int			OnPriceListDeleteItem(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnServicePriceChange(); 
	//void			OnServicePriceSetfocus(); 
	//void			OnServicePriceKillfocus(); 
	int			OnServicePriceCheckValue(); 
	//void			OnInsurancePriceChange(); 
	//void			OnInsurancePriceSetfocus(); 
	//void			OnInsurancePriceKillfocus(); 
	int			OnInsurancePriceCheckValue(); 
	//void			OnPolicyPriceChange(); 
	//void			OnPolicyPriceSetfocus(); 
	//void			OnPolicyPriceKillfocus(); 
	int			OnPolicyPriceCheckValue(); 
	//void			OnRequirePriceChange(); 
	//void			OnRequirePriceSetfocus(); 
	//void			OnRequirePriceKillfocus(); 
	int			OnRequirePriceCheckValue(); 
	void			OnInsurancePaidSelect(); 
	void			OnPolicyPaidSelect(); 
	void			OnDifferencePaidSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSDynBedSetupDialog(CWnd *pParent);
	~CHMSDynBedSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDynBedSetupDialog(); 
	int OnEditHMSDynBedSetupDialog(); 
	int OnDeleteHMSDynBedSetupDialog(); 
	int OnSaveHMSDynBedSetupDialog(); 
	int OnCancelHMSDynBedSetupDialog(); 
	int OnHMSDynBedSetupDialogListLoadData(); 
};
#endif
