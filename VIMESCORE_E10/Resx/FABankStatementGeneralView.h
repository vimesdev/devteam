#ifndef FABANKSTATEMENTGENERALVIEW_H
#define FABANKSTATEMENTGENERALVIEW_H

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
class CFABankStatementGeneralView : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndVoucherInformation;
	CGuiGroupBox	m_wndBank1Information;
	CGuiGroupBox	m_wndBank2Information;
	CGuiLabel		m_wndVoucherNoLabel;
	CGuiTextCtrl	m_wndVoucherNo;
	CGuiLabel		m_wndVoucherDateLabel;
	CGuiDateCtrl	m_wndVoucherDate;
	CGuiLabel		m_wndAccountingDateLabel;
	CGuiDateCtrl	m_wndAccountingDate;
	CGuiLabel		m_wndDocumentLabel;
	CGuiTextCtrl	m_wndDocument;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiTextCtrl	m_wndObjectName;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndBankAccount1Label;
	CGuiTextCtrl	m_wndBankAccount1;
	CGuiTextCtrl	m_wndBankAccount1Name;
	CGuiLabel		m_wndBankAccount2Label;
	CGuiComboBox	m_wndBankAccount2;
	CGuiTextCtrl	m_wndBankName2;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CString	m_szVoucherNo;
	CString	m_szVoucherDate;
	CString	m_szAccountingDate;
	CString	m_szDocument;
	CString	m_szObjectKey;
	CString	m_szObjectName;
	CString	m_szAddress;
	CString	m_szBankAccount1;
	CString	m_szBankAccount1Name;
	CString	m_szBankAccount2Key;
	CString	m_szBankName2;
	CString	m_szReason;
	//void			OnVoucherNoChange(); 
	//void			OnVoucherNoSetfocus(); 
	//void			OnVoucherNoKillfocus(); 
	int			OnVoucherNoCheckValue(); 
	//void			OnVoucherDateChange(); 
	//void			OnVoucherDateSetfocus(); 
	//void			OnVoucherDateKillfocus(); 
	int			OnVoucherDateCheckValue(); 
	//void			OnAccountingDateChange(); 
	//void			OnAccountingDateSetfocus(); 
	//void			OnAccountingDateKillfocus(); 
	int			OnAccountingDateCheckValue(); 
	//void			OnDocumentChange(); 
	//void			OnDocumentSetfocus(); 
	//void			OnDocumentKillfocus(); 
	int			OnDocumentCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	//void			OnObjectNameChange(); 
	//void			OnObjectNameSetfocus(); 
	//void			OnObjectNameKillfocus(); 
	int			OnObjectNameCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnBankAccount1Change(); 
	//void			OnBankAccount1Setfocus(); 
	//void			OnBankAccount1Killfocus(); 
	int			OnBankAccount1CheckValue(); 
	//void			OnBankAccount1NameChange(); 
	//void			OnBankAccount1NameSetfocus(); 
	//void			OnBankAccount1NameKillfocus(); 
	int			OnBankAccount1NameCheckValue(); 
	void			OnBankAccount2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBankAccount2Selendok(); 
	//void			OnBankAccount2Setfocus(); 
	//void			OnBankAccount2Killfocus(); 
	long			OnBankAccount2LoadData(); 
	//void			OnBankAccount2AddNew(); 
	//void			OnBankName2Change(); 
	//void			OnBankName2Setfocus(); 
	//void			OnBankName2Killfocus(); 
	int			OnBankName2CheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	CFABankStatementGeneralView();
	~CFABankStatementGeneralView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFABankStatementGeneralView(); 
	int OnEditFABankStatementGeneralView(); 
	int OnDeleteFABankStatementGeneralView(); 
	int OnSaveFABankStatementGeneralView(); 
	int OnCancelFABankStatementGeneralView(); 
	int OnFABankStatementGeneralViewListLoadData(); 
};
#endif
