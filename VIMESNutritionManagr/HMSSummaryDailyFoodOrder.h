#ifndef CHMSSUMMARYDAILYFOODORDER_H
#define CHMSSUMMARYDAILYFOODORDER_H

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
class CHMSSummaryDailyFoodOrder : public CGuiView
{
protected:
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndGroupListDrug;
	CGuiLabel		m_wndFormDateLabel;
	CGuiDateCtrl	m_wndFormDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiButton		m_wndPrint;
	CGuiListCtrl	m_wndOrderList;
	CGuiButton		m_wndRefresh;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;	
	CGuiCheckBox	m_wndAllDept;
	CGuiCheckBox	m_wndTheo_Ngay_Duyet;

	CString	m_szFormDate;
	CString	m_szToDate;
	
	CString	m_szFromTime;
	CString	m_szToTime;

	CString	m_szStatusKey;
	CString	m_szObjectKey;
	CString	m_szSQL;
	
	BOOL	m_bAllDept;
	BOOL	m_bTheo_Ngay_Duyet;
	//void			OnFormDateChange(); 
	//void			OnFormDateSetfocus(); 
	//void			OnFormDateKillfocus(); 
	int			OnFormDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	void			OnPrintSelect(); 
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	void			OnPrintDeliverySummery(LPCTSTR lpszFromDate, LPCTSTR lpszToDate);
	void OnResizeLayout();
	void			OnRefreshSelect(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew();
	void			OnTheo_Ngay_DuyetSelect(); 

	CHMSSummaryDailyFoodOrder();
	~CHMSSummaryDailyFoodOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSSummaryDailyFoodOrder(); 
	int OnEditCHMSSummaryDailyFoodOrder(); 
	int OnDeleteCHMSSummaryDailyFoodOrder(); 
	int OnSaveCHMSSummaryDailyFoodOrder(); 
	int OnCancelCHMSSummaryDailyFoodOrder(); 
	int OnCHMSSummaryDailyFoodOrderListLoadData(); 
};
#endif
