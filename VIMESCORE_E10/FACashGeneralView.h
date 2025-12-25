#ifndef FACASHGENERALVIEW_H
#define FACASHGENERALVIEW_H

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
#include "FACashAdditionView.h"

class CFACashGeneralView : public CGuiView{
protected:
public:
	CString		m_szDocType;

	CFACashAdditionView	m_wndAdditionView;

	CGuiGroupBox	m_wndVoucherInformation;
	CGuiGroupBox	m_wndGeneralInformation;
	CGuiLabel		m_wndVoucherNoLabel;
	CGuiTextCtrl	m_wndVoucherNo;
	CGuiLabel		m_wndVoucherDateLabel;
	CGuiDateCtrl	m_wndVoucherDate;
	CGuiLabel		m_wndAccountingDateLabel;
	CGuiDateCtrl	m_wndAccountingDate;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiTextCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiTextCtrl	m_wndObjectName;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiLabel		m_wndReferenceLabel;
	CGuiTextCtrl	m_wndReference;
	CGuiCheckBox	m_wndTaxIncluded;

	CString	m_szVoucherNo;
	CString	m_szVoucherDate;
	CString	m_szAccountingDate;
	CString	m_szDocumentNo;
	CString	m_szObjectKey;
	CString	m_szObjectName;
	CString	m_szAddress;
	CString	m_szReason;
	CString	m_szReference;
	BOOL	m_bIsTaxIncluded;


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
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
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
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	//void			OnReferenceChange(); 
	//void			OnReferenceSetfocus(); 
	void			OnReferenceKillfocus(); 
	int			OnReferenceCheckValue(); 
	void		OnTaxIncludedSelect();

	CFACashGeneralView();
	~CFACashGeneralView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFACashGeneralView(); 
	int OnEditFACashGeneralView(); 
	int OnDeleteFACashGeneralView(); 
	int OnSaveFACashGeneralView(); 
	int OnCancelFACashGeneralView(); 
	int OnFACashGeneralViewListLoadData(); 
	void	GetData(CRecord* rs);
	void	SetData(CDbfMap* dbf);
};
#endif
