#ifndef HMSDYNBEDITEMSSETUPDIALOG_H
#define HMSDYNBEDITEMSSETUPDIALOG_H

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
class CHMSDynBedItemsSetupDialog : public CGuiDialog{
protected:
public:
	int				m_nID;
	int				m_nLine;

	CGuiLabel		m_wndDaysLabel;
	CGuiNumberCtrl	m_wndDays;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiGroupBox	m_wndBedLevelInformation;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiLabel		m_wndRequirePriceLabel;
	CGuiNumberCtrl	m_wndRequirePrice;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	long	m_nDays;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	long	m_nPolicyPrice;
	long	m_nRequirePrice;
	CDbfMap	m_hms_dynbedlist_itemsTbl;
	//void			OnDaysChange(); 
	//void			OnDaysSetfocus(); 
	//void			OnDaysKillfocus(); 
	int			OnDaysCheckValue(); 
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
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSDynBedItemsSetupDialog(CWnd *pParent);
	~CHMSDynBedItemsSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDynBedItemsSetupDialog(); 
	int OnEditHMSDynBedItemsSetupDialog(); 
	int OnDeleteHMSDynBedItemsSetupDialog(); 
	int OnSaveHMSDynBedItemsSetupDialog(); 
	int OnCancelHMSDynBedItemsSetupDialog(); 
	int OnHMSDynBedItemsSetupDialogListLoadData(); 
};
#endif
