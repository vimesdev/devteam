#ifndef STORAGETRANSACTIONLINEINPUTEX_H
#define STORAGETRANSACTIONLINEINPUTEX_H

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
#include "GuiPopup.h"
#include "DbField.h"
class CWardDeliveryOrderLineInputEx : public CGuiPopup{
protected:
public:
	long	m_nOrderID;
	long	m_nOrderLine;
	int		m_nStorageID;
	int		m_nStorageToID;
	long	m_nProductItemID;
	long	m_nOldQtyOrdered;

	CWnd*	m_pWndOrder;
	CWnd*	m_pWndLines;

	CGuiGroupBox	m_wndItemInformation;
	CGuiLabel		m_wndProductLabel;
	CGuiComboBox	m_wndProduct;
	CGuiLabel		m_wndUomLabel;
	CGuiGroupBox	m_wndQuantity;
	CGuiTextCtrl	m_wndUom;
	CGuiLabel		m_wndSoldierLabel;
	CGuiNumberCtrl	m_wndSoldier;
	CGuiLabel		m_wndPolicyLabel;
	CGuiNumberCtrl	m_wndPolicy;
	CGuiLabel		m_wndSoldierInsurnaceLabel;
	CGuiNumberCtrl	m_wndSoldierInsurnace;
	CGuiLabel		m_wndOnHandLabel;
	CGuiNumberCtrl	m_wndOnHand;
	CGuiLabel		m_wndOtherInsuranceLabel;
	CGuiNumberCtrl	m_wndOtherInsurance;
	CGuiLabel		m_wndServiceLabel;
	CGuiNumberCtrl	m_wndService;
	CGuiLabel		m_wndOtherLabel;
	CGuiNumberCtrl	m_wndOther;
	CGuiLabel		m_wndSumQuantityLabel;
	CGuiNumberCtrl	m_wndSumQuantity;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szProductKey;
	CString	m_szUom;
	long	m_nSoldier;
	long	m_nPolicy;
	long	m_nSoldierInsurnace;
	long	m_nOnHand;
	long	m_nOtherInsurance;
	long	m_nService;
	long	m_nOther;
	long	m_nSumQuantity;
	CDbfMap	m_transactionlineTbl;
	void			OnProductSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductSelendok(); 
	//void			OnProductSetfocus(); 
	//void			OnProductKillfocus(); 
	long			OnProductLoadData(); 
	//void			OnProductAddNew(); 
	//void			OnUomChange(); 
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	int			OnUomCheckValue(); 
	//void			OnSoldierChange(); 
	//void			OnSoldierSetfocus(); 
	//void			OnSoldierKillfocus(); 
	int			OnSoldierCheckValue(); 
	//void			OnPolicyChange(); 
	//void			OnPolicySetfocus(); 
	//void			OnPolicyKillfocus(); 
	int			OnPolicyCheckValue(); 
	//void			OnSoldierInsurnaceChange(); 
	//void			OnSoldierInsurnaceSetfocus(); 
	//void			OnSoldierInsurnaceKillfocus(); 
	int			OnSoldierInsurnaceCheckValue(); 
	//void			OnOnHandChange(); 
	//void			OnOnHandSetfocus(); 
	//void			OnOnHandKillfocus(); 
	int			OnOnHandCheckValue(); 
	//void			OnOtherInsuranceChange(); 
	//void			OnOtherInsuranceSetfocus(); 
	//void			OnOtherInsuranceKillfocus(); 
	int			OnOtherInsuranceCheckValue(); 
	//void			OnServiceChange(); 
	//void			OnServiceSetfocus(); 
	//void			OnServiceKillfocus(); 
	int			OnServiceCheckValue(); 
	//void			OnOtherChange(); 
	//void			OnOtherSetfocus(); 
	//void			OnOtherKillfocus(); 
	int			OnOtherCheckValue(); 
	//void			OnSumQuantityChange(); 
	//void			OnSumQuantitySetfocus(); 
	//void			OnSumQuantityKillfocus(); 
	int			OnSumQuantityCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	bool		CheckQuantity();

	CWardDeliveryOrderLineInputEx(CWnd *pParent, int nMode);
	~CWardDeliveryOrderLineInputEx();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddStorageTransactionLineInput(); 
	int OnEditStorageTransactionLineInput(); 
	int OnDeleteStorageTransactionLineInput(); 
	int OnSaveStorageTransactionLineInput(); 
	int OnCancelStorageTransactionLineInput(); 
	int OnStorageTransactionLineInputListLoadData(); 
};
#endif
