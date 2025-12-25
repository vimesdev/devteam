#ifndef IVFLabTaoPhoiList_H
#define IVFLabTaoPhoiList_H

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


class CIVFLabTaoPhoiList : public CGuiView{
protected:
public:
	CString		m_szOrderType;

	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl		m_wndSearch;
	CGuiButton		m_wndRefresh;
	CGridListView	m_wndList;
	
	CGuiRadioButton	m_wndWaiting;
	CGuiRadioButton	m_wndInProgress;
	CGuiRadioButton	m_wndPerformed;
	CGuiCheckBox	m_wndOldPatient;

	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szTypeKey;
	CString m_szStatusKey;
	CString	m_szSearch;
	int		m_nState;
	BOOL	m_bOldPatient;
	
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
	long		OnStatusLoadData();
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnRefreshSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListCreateItem();
	int			OnListEditItem();
	int			OnListRollbackItem();
	int			OnListCreatePhieutru();
	int			OnListCreatePhieura();

	void			OnWaitingSelect(); 
	void			OnInProgressSelect();
	void			OnPerformedSelect(); 
	void			OnOldPatientSelect();
	
	CIVFLabTaoPhoiList();
	~CIVFLabTaoPhoiList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabTruList(); 
	int OnEditIVFLabTruList(); 
	int OnDeleteIVFLabTruList(); 
	int OnSaveIVFLabTruList(); 
	int OnCancelIVFLabTruList(); 
	int OnIVFLabTruListListLoadData(); 
	void OnResizeLayout();

};
#endif
