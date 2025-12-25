#ifndef ATMCUSTOMERLIST_H
#define ATMCUSTOMERLIST_H

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

class AFX_EXT_CLASS CATMCustomerList : public CGuiView {
protected:
	CString m_szCardId;
	long	m_nPatientNo;
	long	m_nId;
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndCustomerList;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndFind;
	CGuiButton		m_wndPrintCard;
	CGridListView	m_wndList;
	//CGuiListCtrl	m_wndList;
	CGuiButton		m_wndRegistration;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndLock;
	CGuiButton		m_wndUnLock;
	CGuiButton		m_wndSwapCard;
	CGuiButton		m_wndMergePatient;

	CString	m_szSearch;
	CString m_szFromDate;
	CString m_szToDate;
	CString m_szStatusKey;
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnFindSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListExport();
	void			OnRegistrationSelect(); 
	void			OnUpdateSelect(); 
	void			OnLockSelect(); 
	void			OnUnLockSelect(); 
	void			OnSwapCardSelect();
	void			OnMergePatientSelect();
	void			OnPrintCardSelect();
	long			OnStatusLoadData();
	void			OnStatusSelendok();
	CATMCustomerList();
	~CATMCustomerList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddATMCustomerList(); 
	int OnEditATMCustomerList(); 
	int OnDeleteATMCustomerList(); 
	int OnSaveATMCustomerList(); 
	int OnCancelATMCustomerList(); 
	int OnATMCustomerListListLoadData(); 
	void OnResizeLayout();
	
};
#endif
