#ifndef ACCCASHINPUT_H
#define ACCCASHINPUT_H

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
#include "GuiPopup.h"
#include "DbField.h"
class CAccCashInput : public CListItemEdit{
protected:
	
public:
	int		m_nEditMode;
	CString	m_szInvoiceType;
	CString	m_szCashID;
	CString	m_szLineID;

	CGuiTextCtrl	m_wndDescription;
	CGuiComboBox	m_wndDebitAccount;
	CGuiComboBox	m_wndCreditAccount;

	CGuiNumberCtrl	m_wndAmount;
	CGuiComboBox	m_wndTaxID;
	CGuiNumberCtrl	m_wndTaxAmount;
	CGuiComboBox	m_wndTaxAccount;
	CGuiComboBox	m_wndJobID;

	CString	m_szDebitAccountKey;
	CString	m_szCreditAccountKey;
	CString	m_szDescription;
	double	m_nAmount;
	CString	m_szTaxIDKey;
	double	m_nTaxAmount;
	CString	m_szTaxAccountKey;
	CString	m_szJobIDKey;
	CDbfMap	m_fa_cashlineTbl;

	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnDebitAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDebitAccountSelendok(); 
	//void			OnDebitAccountSetfocus(); 
	//void			OnDebitAccountKillfocus(); 
	long			OnDebitAccountLoadData(); 
	void			OnDebitAccountAddNew(); 
	void			OnCreditAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCreditAccountSelendok(); 
	//void			OnCreditAccountSetfocus(); 
	//void			OnCreditAccountKillfocus(); 
	long			OnCreditAccountLoadData(); 
	void			OnCreditAccountAddNew(); 

	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnAmountClick(); 
	void			OnTaxIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxIDSelendok(); 
	//void			OnTaxIDSetfocus(); 
	void			OnTaxIDKillfocus(); 
	long			OnTaxIDLoadData(); 
	void			OnTaxIDAddNew(); 
	int				OnTaxIDCheckValue(); 
	void			OnTaxAccountSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxAccountSelendok(); 
	//void			OnTaxAccountSetfocus(); 
	//void			OnTaxAccountKillfocus(); 
	long			OnTaxAccountLoadData(); 
	void			OnTaxAccountAddNew(); 
	void			OnJobIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnJobIDSelendok(); 
	//void			OnJobIDSetfocus(); 
	//void			OnJobIDKillfocus(); 
	long			OnJobIDLoadData(); 
	void			OnJobIDAddNew(); 
	CAccCashInput();
	CAccCashInput(CWnd *pParent);
	~CAccCashInput();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAccCashInput(); 
	int OnEditAccCashInput(); 
	int OnDeleteAccCashInput(); 
	int OnSaveAccCashInput(); 
	int OnCancelAccCashInput(); 
	int OnAccCashInputListLoadData();
	int OnOK();
	void ApplyToList();
	void OnCancel();
	void SetReference(CString szInvoiceType, CString szCashID, CString szLineID);

};
#endif
