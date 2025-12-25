#ifndef HMSPATIENTCARDINFOView_H
#define HMSPATIENTCARDINFOView_H

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

class CHMSPatientCardInfoView : public CGuiView{
protected:
	CDbfMap		m_hms_smartcardTbl;
	long	m_nSmartCardId;
public:
	CGuiGroupBox	m_wndCardInformation;
	CGuiLabel		m_wndCardNumberLabel;
	CGuiTextCtrl	m_wndCardNumber;
	CGuiLabel		m_wndCardTypeLabel;
	CGuiComboBox	m_wndCardType;
	CGuiLabel		m_wndIssueDateLabel;
	CGuiDateTimeCtrl m_wndIssueDate;
	CGuiLabel		m_wndIssueByLabel;
	CGuiTextCtrl	m_wndIssueBy;
	CGuiLabel		m_wndCardHolderNameLabel;
	CGuiTextCtrl	m_wndCardHolderName;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	
	CGuiButton		m_wndTerminal;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGridListView	m_wndList;
	CString	m_szCardNumber;
	CString	m_szCardTypeKey;
	CString	m_szIssueDate;
	CString	m_szIssueBy;
	CString	m_szCardHolderName;
	CString	m_szStatus;
	CString	m_szDescription;
	//void			OnCardNumberChange(); 
	//void			OnCardNumberSetfocus(); 
	//void			OnCardNumberKillfocus(); 
	int			OnCardNumberCheckValue(); 
	void			OnCardTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCardTypeSelendok(); 
	//void			OnCardTypeSetfocus(); 
	//void			OnCardTypeKillfocus(); 
	long			OnCardTypeLoadData(); 
	//void			OnCardTypeAddNew(); 
	//void			OnIssueDateChange(); 
	//void			OnIssueDateSetfocus(); 
	//void			OnIssueDateKillfocus(); 
	int			OnIssueDateCheckValue(); 
	//void			OnIssueByChange(); 
	//void			OnIssueBySetfocus(); 
	//void			OnIssueByKillfocus(); 
	int			OnIssueByCheckValue(); 
	//void			OnCardHolderNameChange(); 
	//void			OnCardHolderNameSetfocus(); 
	//void			OnCardHolderNameKillfocus(); 
	int			OnCardHolderNameCheckValue(); 
	void			OnCardHolderNameSelect(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 

	void			OnTerminalSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListAddItem(); 
	int			OnListEditItem(); 
	int			OnListDeleteItem(); 
	int			OnListLockItem(); 
	int			OnListUnLockItem(); 
	CHMSPatientCardInfoView();
	~CHMSPatientCardInfoView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientCardInfoView(); 
	int OnEditHMSPatientCardInfoView(); 
	int OnDeleteHMSPatientCardInfoView(); 
	int OnSaveHMSPatientCardInfoView(); 
	int OnCancelHMSPatientCardInfoView(); 
	int OnHMSPatientCardInfoViewListLoadData(); 
};
#endif
