#ifndef ITEMINTERACTIONPOPUP_H
#define ITEMINTERACTIONPOPUP_H

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
class CItemInteractionPopup : public CGuiPopup{
protected:
public:
	CWnd * m_pWnd;
	int m_nCaseID;
	long m_nFirstItemID;
	long m_nSecondItemID;
	CDbfMap	m_hms_interaction_caseTbl;
	CDbfMap	m_hms_interaction_lineTbl;
	CGuiGroupBox	m_wndGenericInformation;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndX;
	CGuiLabel		m_wndItemLabel;
	CGuiComboBox	m_wndItem;
	CString	m_szName;
	CString	m_szTypeKey;
	CString	m_szDescription;
	CString	m_szItemKey;
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnSaveSelect(); 
	void			OnXSelect(); 
	void			OnItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemSelendok(); 
	//void			OnItemSetfocus(); 
	//void			OnItemKillfocus(); 
	long			OnItemLoadData(); 
	//void			OnItemAddNew(); 
	CItemInteractionPopup(CWnd *pParent);
	~CItemInteractionPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddItemInteractionPopup(); 
	int OnEditItemInteractionPopup(); 
	int OnDeleteItemInteractionPopup(); 
	int OnSaveItemInteractionPopup(); 
	int OnCancelItemInteractionPopup(); 
	int OnItemInteractionPopupListLoadData(); 
};
#endif
