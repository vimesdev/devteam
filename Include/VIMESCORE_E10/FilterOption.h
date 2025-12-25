#ifndef FILTEROPTION_H
#define FILTEROPTION_H

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
class CFilterOption : public CGuiPopup{
protected:
public:
	CGuiGroupBox	m_wndFilterOption;
	CGuiLabel		m_wndFilterByLabel;
	CGuiComboBox	m_wndFilterBy;
	CGuiLabel		m_wndOperatorLabel;
	CGuiComboBox	m_wndOperator;
	CGuiLabel		m_wndGroupByLabel;
	CGuiComboBox	m_wndGroupBy;
	CGuiLabel		m_wndSortByLabel;
	CGuiComboBox	m_wndSortBy;
	CGuiLabel		m_wndSortDirectionLabel;
	CGuiComboBox	m_wndSortDirection;
	CGuiLabel		m_wndDataPeriodLabel;
	CGuiComboBox	m_wndDataPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndClear;
	CGuiButton		m_wndDefault;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szFilterByKey;
	CString	m_szOperatorKey;
	CString	m_szGroupByKey;
	CString	m_szSortByKey;
	CString	m_szSortDirectionKey;
	CString	m_szDataPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	void			OnFilterBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFilterBySelendok(); 
	//void			OnFilterBySetfocus(); 
	//void			OnFilterByKillfocus(); 
	long			OnFilterByLoadData(); 
	//void			OnFilterByAddNew(); 
	void			OnOperatorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOperatorSelendok(); 
	//void			OnOperatorSetfocus(); 
	//void			OnOperatorKillfocus(); 
	long			OnOperatorLoadData(); 
	//void			OnOperatorAddNew(); 
	void			OnGroupBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupBySelendok(); 
	//void			OnGroupBySetfocus(); 
	//void			OnGroupByKillfocus(); 
	long			OnGroupByLoadData(); 
	//void			OnGroupByAddNew(); 
	void			OnSortBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSortBySelendok(); 
	//void			OnSortBySetfocus(); 
	//void			OnSortByKillfocus(); 
	long			OnSortByLoadData(); 
	//void			OnSortByAddNew(); 
	void			OnSortDirectionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSortDirectionSelendok(); 
	//void			OnSortDirectionSetfocus(); 
	//void			OnSortDirectionKillfocus(); 
	long			OnSortDirectionLoadData(); 
	//void			OnSortDirectionAddNew(); 
	void			OnDataPeriodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDataPeriodSelendok(); 
	//void			OnDataPeriodSetfocus(); 
	//void			OnDataPeriodKillfocus(); 
	long			OnDataPeriodLoadData(); 
	//void			OnDataPeriodAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnClearSelect(); 
	void			OnDefaultSelect(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CFilterOption(CWnd *pParent);
	~CFilterOption();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFilterOption(); 
	int OnEditFilterOption(); 
	int OnDeleteFilterOption(); 
	int OnSaveFilterOption(); 
	int OnCancelFilterOption(); 
	int OnFilterOptionListLoadData(); 
};
#endif
