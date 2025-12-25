#ifndef FMInsuranceIncomeList_H
#define FMInsuranceIncomeList_H

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
class CFMInsuranceIncomeList : public CGuiView
{

protected:
public:
	CString		m_szCashIDS;

	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiLabel		m_wndClerkLabel;
	CGuiComboBox	m_wndClerk;
	CGuiLabel		m_wndOrderByLabel;
	CGuiComboBox	m_wndOrderBy;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndWithoutGeneral;
	CGuiButton		m_wndMarkAll;
	CGuiButton		m_wndUnMark;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiCheckBox	m_wndInpatient;
	CGuiCheckBox	m_wndOutpatient;
	CGuiCheckBox	m_wndDeposit;
	CGuiCheckBox	m_wndEDeposit;
	CGuiCheckBox	m_wndAll;
	CGuiCheckBox	m_wndSoldierWCard;
	CGuiCheckBox	m_wndFree;
	CGuiCheckBox	m_wndSOD;
	CGuiCheckBox	m_wndServicePackage;
	CGuiCheckBox	m_wndABZone;
	CGuiCheckBox	m_wndATMCard;
	CGuiCheckBox	m_wndAllIns;
	CGuiCheckBox	m_wndByMoneyTransfer;

	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szClerkKey;
	CString	m_szOrderByKey;
	CString	m_szStatusKey;
	BOOL	m_bWithoutGeneral;
	int		m_nPatientType;
	BOOL	m_bInpatient;
	BOOL	m_bOutpatient;
	BOOL	m_bDeposit;
	BOOL	m_bEDeposit;
	BOOL	m_bSoldierWCard;
	BOOL	m_bFree;
	BOOL	m_bSOD;
	BOOL	m_bABZone;
	BOOL	m_bServicePackage;
	BOOL	m_bATMCard;
	BOOL	m_bAllIns;
	BOOL	m_bByMoneyTransfer;
	//void			OnYearChange(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	int			OnYearCheckValue(); 
	void			OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReportPeriodSelendok(); 
	//void			OnReportPeriodSetfocus(); 
	//void			OnReportPeriodKillfocus(); 
	long			OnReportPeriodLoadData(); 
	//void			OnReportPeriodAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnClerkSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnClerkSelendok(); 
	//void			OnClerkSetfocus(); 
	//void			OnClerkKillfocus(); 
	long			OnClerkLoadData(); 
	//void			OnClerkAddNew(); 
	void			OnOrderBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOrderBySelendok(); 
	//void			OnOrderBySetfocus(); 
	//void			OnOrderByKillfocus(); 
	long			OnOrderByLoadData(); 
	//void			OnOrderByAddNew(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnWithoutGeneralSelect(); 
	void			OnMarkAllSelect(); 
	void			OnUnMarkSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnExportSelect1();
	void			OnExportSelect2();
	void			OnInpatientSelect(); 
	void			OnOutpatientSelect(); 
	void			OnDepositSelect(); 
	void			OnAllSelect();
	void			OnSODSelect();
	void			OnABZoneSelect(); 
	void			OnServicePackageSelect(); 
	void			OnATMCardSelect();
	void			OnAllInsSelect();
	void			OnByMoneyTransferSelect(); 

	void			OnPrint1stver();
	void			OnPrint2ndver();
	void			OnPrint3rdver();
	void			OnPrint3rdver_A4();
	void			OnPrint3rdver_Ver2();
	void			OnPrint4rdver();

	CString			GetQueryString();
	CString			GetQueryString2();
	CString			GetQueryString3();
	CString			GetQueryString3_Ver2();
	CString			GetQueryString4();
	CString			GetQueryString_check();

	CFMInsuranceIncomeList(CWnd *pWnd);
	~CFMInsuranceIncomeList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFMInsuranceIncomeList(); 
	int OnEditFMInsuranceIncomeList(); 
	int OnDeleteFMInsuranceIncomeList(); 
	int OnSaveFMInsuranceIncomeList(); 
	int OnCancelFMInsuranceIncomeList(); 
	int OnFMInsuranceIncomeListListLoadData();
	int OnListCheckAllIns();
	int OnListUnCheckAllIns();
	int OnListCheckAllSolder();
	int OnListUnCheckAllSolder();
	int OnListCheckAllInsSolder();
	int OnListUnCheckAllInsSolder();
	int OnListCheckAllCardTYC();	
};
#endif