#ifndef WARDMEDICALCABINETDRUGORDERLIST_H
#define WARDMEDICALCABINETDRUGORDERLIST_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Joint Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CWardMedicalCabinetDrugOrderList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderStatus;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndOrderInformation;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndOpening;
	CGuiRadioButton	m_wndSended;
	CGuiRadioButton	m_wndApproved;
	CGuiLabel		m_wndFromStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndFind;
	CGuiListCtrl	m_wndOrderList;
	int	m_nAll;
	int	m_nOpening;
	int	m_nSended;
	int	m_nApproved;
	CString	m_szStockKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	void			OnAllSelect(); 
	void			OnOpeningSelect(); 
	void			OnSendedSelect(); 
	void			OnApprovedSelect(); 
	void			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStockSelendok(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	long			OnStockLoadData(); 
	void			OnStockAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnFindSelect(); 
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	CWardMedicalCabinetDrugOrderList();
	~CWardMedicalCabinetDrugOrderList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddWardMedicalCabinetDrugOrderList(); 
	int OnEditWardMedicalCabinetDrugOrderList(); 
	int OnDeleteWardMedicalCabinetDrugOrderList(); 
	int OnSaveWardMedicalCabinetDrugOrderList(); 
	int OnCancelWardMedicalCabinetDrugOrderList(); 
	int OnWardMedicalCabinetDrugOrderListListLoadData(); 
};
#endif
