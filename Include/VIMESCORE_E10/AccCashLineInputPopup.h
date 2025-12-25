#ifndef ACCCASHLINEINPUTPOPUP_H
#define ACCCASHLINEINPUTPOPUP_H

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
class CAccCashLineInputPopup : public CGuiPopup{
protected:
public:
	//Loai chung tu R:(Phieu thu), P: Phieu chi
	CString	m_szInvoiceType;

	long	m_nCash_ID;
	long	m_nCashLine_ID;
	BOOL	m_bTaxIncluded;
	CString	m_szDefDebitAcct;
	CString	m_szDefCreditAcct;
	CString	m_szDefTaxAcct;

	CGuiLabel		m_wndDebitAccountLabel;
	CGuiComboBox	m_wndDebitAccount;
	CGuiLabel		m_wndCreditAccountLabel;
	CGuiComboBox	m_wndCreditAccount;
	CGuiLabel		m_wndTaxAccountLabel;
	CGuiComboBox	m_wndTaxAccount;
	CGuiLabel		m_wndTaxRateLabel;
	CGuiComboBox	m_wndTaxRate;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szDebitAccountKey;
	CString	m_szCreditAccountKey;
	CString	m_szTaxAccountKey;
	CString	m_szTaxRateKey;
	CString	m_szDescription;
	long	m_nAmount;
	CDbfMap	m_fa_cashlineTbl;
	void			OnDebitAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDebitAccountSelendok(); 
	//void			OnDebitAccountSetfocus(); 
	//void			OnDebitAccountKillfocus(); 
	long			OnDebitAccountLoadData(); 
	//void			OnDebitAccountAddNew(); 
	void			OnCreditAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCreditAccountSelendok(); 
	//void			OnCreditAccountSetfocus(); 
	//void			OnCreditAccountKillfocus(); 
	long			OnCreditAccountLoadData(); 
	//void			OnCreditAccountAddNew(); 
	void			OnTaxAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxAccountSelendok(); 
	//void			OnTaxAccountSetfocus(); 
	//void			OnTaxAccountKillfocus(); 
	long			OnTaxAccountLoadData(); 
	//void			OnTaxAccountAddNew(); 
	int				OnTaxAccountCheckValue(); 
	void			OnTaxRateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxRateSelendok(); 
	//void			OnTaxRateSetfocus(); 
	//void			OnTaxRateKillfocus(); 
	long			OnTaxRateLoadData(); 
	//void			OnTaxRateAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CAccCashLineInputPopup(CWnd *pParent, int  nMode);
	~CAccCashLineInputPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAccCashLineInputPopup(); 
	int OnEditAccCashLineInputPopup(); 
	int OnDeleteAccCashLineInputPopup(); 
	int OnSaveAccCashLineInputPopup(); 
	int OnCancelAccCashLineInputPopup(); 
	int OnAccCashLineInputPopupListLoadData(); 
};
#endif
