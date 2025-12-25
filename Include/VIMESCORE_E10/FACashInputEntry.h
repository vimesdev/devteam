#ifndef FACASHINPUTENTRY_H
#define FACASHINPUTENTRY_H

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
class CFACashInputEntry : public CGuiPopup{
protected:
public:
	CString		m_szCashAccounts;

	CString		m_szDocType;
	BOOL		m_bTaxIncluded;
	CWnd*		m_pWndLines;

	long		m_nInvoiceID;
	long		m_nInvoiceLine_ID;

	CGuiHeaderCtrl	m_wndCaption;
	CGuiTextCtrl	m_wndDescription;
	CGuiComboBox	m_wndDebitAcct;
	CGuiComboBox	m_wndCreditAcct;
	CGuiNumberCtrl	m_wndAmount;
	CGuiComboBox	m_wndTaxAcct;
	CGuiComboBox	m_wndTaxID;
	CGuiNumberCtrl	m_wndTaxAmount;
	CGuiButton		m_wndSave;

	CString	m_szDescription;
	CString	m_szDebitAcctKey;
	CString	m_szCreditAcctKey;
	long	m_nAmount;
	CString	m_szTaxAcctKey;
	CString	m_szTaxIDKey;
	
	CDbfMap	m_cashline_Tbl;

	void			OnCaptionSelectChange(int nOld, int nNew); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnDebitAcctSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDebitAcctSelendok(); 
	//void			OnDebitAcctSetfocus(); 
	//void			OnDebitAcctKillfocus(); 
	long			OnDebitAcctLoadData(); 
	//void			OnDebitAcctAddNew(); 
	void			OnCreditAcctSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCreditAcctSelendok(); 
	//void			OnCreditAcctSetfocus(); 
	//void			OnCreditAcctKillfocus(); 
	long			OnCreditAcctLoadData(); 
	//void			OnCreditAcctAddNew(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnTaxAcctSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxAcctSelendok(); 
	//void			OnTaxAcctSetfocus(); 
	//void			OnTaxAcctKillfocus(); 
	long			OnTaxAcctLoadData(); 
	//void			OnTaxAcctAddNew(); 
	void			OnTaxIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxIDSelendok(); 
	//void			OnTaxIDSetfocus(); 
	//void			OnTaxIDKillfocus(); 
	long			OnTaxIDLoadData(); 
	//void			OnTaxIDAddNew(); 
	int				OnTaxAcctCheckValue();
	void			OnSaveSelect();
	
	CFACashInputEntry(CWnd *pParent, CString szDocType, long nInvoiceID, int nMode, BOOL bTaxIncluded = TRUE);
	~CFACashInputEntry();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFACashInputEntry(); 
	int OnEditFACashInputEntry(); 
	int OnDeleteFACashInputEntry(); 
	int OnSaveFACashInputEntry(); 
	int OnCancelFACashInputEntry(); 
	int OnFACashInputEntryListLoadData(); 
};
#endif
