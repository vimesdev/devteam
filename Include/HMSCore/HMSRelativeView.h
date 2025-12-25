#ifndef HMSRELATIVEView_H
#define HMSRELATIVEView_H

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
#include "GridListView.h"
class CHMSRelativeView : public CGuiView
{
protected:
public:

	CGuiGroupBox	m_wndRelativeInformation;
	CGuiLabel		m_wndCardNumberLabel;
	CGuiTextCtrl	m_wndCardNumber;
	CGuiLabel		m_wndRelativeNameLabel;
	CGuiTextCtrl	m_wndRelativeName;
	CGuiLabel		m_wndRelationLabel;
	CGuiComboBox	m_wndRelation;
	CGuiLabel		m_wndYobLabel;
	CGuiNumberCtrl	m_wndYob;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndReferenceLabel;
	CGuiTextCtrl	m_wndReference;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGridListView	m_wndList;

	long    m_nIdx;
	CString	m_szCardNumber;
	CString	m_szRelativeName;
	CString	m_szRelationKey;
	long	m_nYob;
	CString	m_szSexKey;
	CString	m_szAddress;
	CString	m_szPhone;
	CString	m_szReference;
	CString	m_szNote;
	CDbfMap	m_hms_relativeTbl;
	//void			OnCardNumberChange(); 
	//void			OnCardNumberSetfocus(); 
	//void			OnCardNumberKillfocus(); 
	int			OnCardNumberCheckValue(); 
	//void			OnRelativeNameChange(); 
	//void			OnRelativeNameSetfocus(); 
	//void			OnRelativeNameKillfocus(); 
	int			OnRelativeNameCheckValue(); 
	void			OnRelationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRelationSelendok(); 
	//void			OnRelationSetfocus(); 
	//void			OnRelationKillfocus(); 
	long			OnRelationLoadData(); 
	//void			OnRelationAddNew(); 
	//void			OnYobChange(); 
	//void			OnYobSetfocus(); 
	//void			OnYobKillfocus(); 
	int			OnYobCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnReferenceChange(); 
	//void			OnReferenceSetfocus(); 
	//void			OnReferenceKillfocus(); 
	int			OnReferenceCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSRelativeView();
	~CHMSRelativeView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSRelativeView(); 
	int OnEditHMSRelativeView(); 
	int OnDeleteHMSRelativeView(); 
	int OnSaveHMSRelativeView(); 
	int OnCancelHMSRelativeView(); 
	int OnHMSRelativeViewListLoadData(); 
};
#endif
