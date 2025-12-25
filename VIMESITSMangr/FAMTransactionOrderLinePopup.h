#ifndef FAMTransactionORDERLINEPOPUP_H
#define FAMTransactionORDERLINEPOPUP_H

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
class CFAMTransactionOrderLinePopup : public CGuiPopup{
protected:
	CWnd*			m_pParentWnd;
public:
	CString			m_szTransactionID;
	CString			m_szFromStorageID;

	CGuiLabel		m_wndItemNameLabel;
	CGuiComboBox	m_wndItemName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndSeriLabel;
	CGuiTextCtrl	m_wndSeri;
	CGuiLabel		m_wndIntendedUseLabel;
	CGuiComboBox	m_wndIntendedUse;
	CGuiButton		m_wndSaveItem;
	CString	m_szItemNameKey;
	CString	m_szUnit;
	CString m_szIntendedUseKey;
	long	m_nQuantity;
	double	m_nUnitPrice;
	double	m_nAmount;
	CString	m_szSeri;
	CDbfMap		m_transactionLineTbl;

	void			OnItemNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemNameSelendok(); 
	//void			OnItemNameSetfocus(); 
	//void			OnItemNameKillfocus(); 
	long			OnItemNameLoadData(); 
	//void			OnItemNameAddNew(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnSeriChange(); 
	//void			OnSeriSetfocus(); 
	//void			OnSeriKillfocus(); 
	int			OnSeriCheckValue(); 
	void			OnIntendedUseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIntendedUseSelendok(); 
	//void			OnIntendedUseSetfocus(); 
	//void			OnIntendedUseKillfocus(); 
	long			OnIntendedUseLoadData(); 
	//void			OnIntendedUseAddNew(); 
	void			OnSaveItemSelect(); 
	CFAMTransactionOrderLinePopup(CWnd *pParent, int nMode);
	~CFAMTransactionOrderLinePopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMTransactionOrderLinePopup(); 
	int OnEditFAMTransactionOrderLinePopup(); 
	int OnDeleteFAMTransactionOrderLinePopup(); 
	int OnSaveFAMTransactionOrderLinePopup(); 
	int OnCancelFAMTransactionOrderLinePopup(); 
	int OnFAMTransactionOrderLinePopupListLoadData(); 
};
#endif
