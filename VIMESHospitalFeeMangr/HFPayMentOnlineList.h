#ifndef HFPAYMENTONLINELIST_H
#define HFPAYMENTONLINELIST_H

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
#include "GuiListCtrlEx.h"

class CHFPayMentOnlineList : public CGuiView{
protected:
public:	
	CGuiGroupBox	m_wndGrpPreriot;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndLoad;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndExport;
	CGuiLabel		m_wndSearchByLabel;
	CGuiComboBox	m_wndSearchBy;
	CGuiButton		m_wndReconciliation;
	CGuiButton		m_wndSearchBtn;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szTypeKey;
	CString	m_szSearch;
	CString	m_szSearchByKey;
	CString m_szPatientName;
	CString m_szUrlBank;
	long m_nAmount;
	long m_nDocumentNo, m_nKey;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnLoadSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnExportSelect(); 
	void			OnSearchBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSearchBySelendok(); 
	//void			OnSearchBySetfocus(); 
	//void			OnSearchByKillfocus(); 
	long			OnSearchByLoadData(); 
	//void			OnSearchByAddNew(); 
	void			OnReconciliationSelect();
	void			OnSearchBtnSelect();
	void ReplaceSpacesWithT(CString& str);
	int OnListPaymentItem();
	CHFPayMentOnlineList();
	~CHFPayMentOnlineList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHFPayMentOnlineList(); 
	int OnEditHFPayMentOnlineList(); 
	int OnDeleteHFPayMentOnlineList(); 
	int OnSaveHFPayMentOnlineList(); 
	int OnCancelHFPayMentOnlineList(); 
	int OnHFPayMentOnlineListListLoadData(); 
	void OnResizeLayout();
};
#endif
