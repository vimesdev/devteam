#ifndef SOMPREGNANCYINFORMATIONVIEW_H
#define SOMPREGNANCYINFORMATIONVIEW_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
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
#include "GuiDialog.h"
#include "DbField.h"
class CSOMPregnancyInformationView : public CGuiDialog
{
protected: CString m_szPermGroupID;
public:
	CGuiGroupBox	m_wndParaclinicalInformation;
	CGuiButton		m_wndSearch;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndMobileLabel;
	CGuiTextCtrl	m_wndMobileNumber;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiRadioButton	m_wndOneWeek;
	CGuiRadioButton	m_wndTwoWeek;
	CGuiRadioButton	m_wndThreeWeek;
	CGuiRadioButton	m_wndAllWeek;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiNumberCtrl	m_wndTotalDeposit;
	CGuiButton		m_wndUpdate;
	CGuiCheckBox	m_wndDeposit;
	CString	m_szDeptKey;
	CString	m_szMobileNumber;
	CString	m_szFromDate;
	BOOL	m_bDeposit;
	int	m_nOneWeek;
	int	m_nTwoWeek;
	int	m_nThreeWeek;
	int	m_nAllWeek;
	CString	m_szToDate;
	long	m_nTotalDeposit;
	void			OnSearchSelect(); 
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData();
	void			OnUpdateSelect(); 
	//void			OnDeptAddNew(); 
	//void			OnMobileNumberChange(); 
	//void			OnMobileNumberSetfocus(); 
	//void			OnMobileNumberKillfocus(); 
	int			OnMobileNumberCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	void			OnOneWeekSelect(); 
	void			OnTwoWeekSelect(); 
	void			OnThreeWeekSelect(); 
	void			OnAllWeekSelect();
	void			OnDepositSelect(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnTotalDepositChange(); 
	//void			OnTotalDepositSetfocus(); 
	//void			OnTotalDepositKillfocus(); 
	int			OnTotalDepositCheckValue(); 
	CSOMPregnancyInformationView(CWnd *pParent);
	~CSOMPregnancyInformationView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddParaclinicalInformationView(); 
	int OnEditParaclinicalInformationView(); 
	int OnDeleteParaclinicalInformationView(); 
	int OnSaveParaclinicalInformationView(); 
	int OnCancelParaclinicalInformationView(); 
	int OnParaclinicalInformationViewListLoadData(); 
};
#endif