#ifndef HFNTTTOTALFOOD_H
#define HFNTTTOTALFOOD_H

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
class CHFNTTTotalFood : public CGuiView
{
protected:
	CString			m_szProductNameStr;//Store product name to display on report
	CString			m_szProductIDStr;//Store product id for dynamic alias on query
	CString			m_szProductNameStr2;//Store product name to display on report
	CString			m_szProductIDStr2;//Store product id for dynamic alias on query
	CString			m_szProductNameStr3;//Store product name to display on report
	CString			m_szProductIDStr3;//Store product id for dynamic alias on query
	CString			m_szProductNameStr4;//Store product name to display on report
	CString			m_szProductIDStr4;//Store product id for dynamic alias on query
	CString			m_szProductNameStr5;//Store product name to display on report
	CString			m_szProductIDStr5;//Store product id for dynamic alias on query
public:
	CGuiGroupBox	m_wndReportFilter;
	CGuiLabel		m_wndDateLabel;
	CGuiDateCtrl	m_wndDate;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndBreakfast;
	CGuiRadioButton	m_wndLunch;
	CGuiRadioButton	m_wndDinner;
	CGuiCheckBox	m_wndHauCan;
	CGuiButton		m_wndExport;
	CGuiCheckBox	m_wndtruoc10h;
	CGuiCheckBox	m_wndsau10h;
	CGuiCheckBox	m_wndbaocat;
	CString	m_szDate;
	CString	m_szDepartmentKey;
	int	m_nAll;
	int	m_nBreakfast;
	int	m_nLunch;
	int	m_nDinner;
	BOOL	m_bHauCan;
	BOOL	m_btruoc10h;
	BOOL	m_bsau10h;
	BOOL	m_bbaocat;
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnAllSelect(); 
	void			OnBreakfastSelect(); 
	void			OnLunchSelect(); 
	void			OnDinnerSelect(); 
	void			OnExportSelect();
	void			Ontruoc10hSelect(); 
	void			Onsau10hSelect();
	void			OnbaocatSelect();
	CHFNTTTotalFood(CWnd *pParent);
	~CHFNTTTotalFood();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddNTTTotalFood(); 
	int OnEditNTTTotalFood(); 
	int OnDeleteNTTTotalFood(); 
	int OnSaveNTTTotalFood(); 
	int OnCancelNTTTotalFood(); 
	int OnNTTTotalFoodListLoadData(); 
	CString GetQueryString();
	CString GetQueryStringItems();
	CString GetQueryStringTotal();
	CString GetQueryStringTotal10h();
	CString GetQueryStringCOMA1A16();
	CString GetQueryStringCOM();
	CString GetQueryStringCHAO();
	CString GetQueryStringOT();
	CString GetQueryStringSua();
	CString GetQueryStringHCKT();
	void OnInitDataStringCOMA1A16();
	void OnInitDataStringCOM();
	void OnInitDataStringCHAO();
	void OnInitDataStringOT();
	void OnInitDataStringSua();
	void OnExport_ALL();
	void OnExportHCKT();
};
#endif
