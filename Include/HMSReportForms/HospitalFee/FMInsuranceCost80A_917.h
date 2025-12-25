#ifndef FMInsuranceCost80A_917_H
#define FMInsuranceCost80A_917_H

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
class CFMInsuranceCost80A_917 : public CGuiView{
protected:
	//xem 79A
	BOOL			m_bIsInsPurpose;
	BOOL			m_bShowDiff;
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiGroupBox	m_wndInsuranceCardInfo;
	CGuiGroupBox	m_wndDeptInfo;

	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;

	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;

	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;

	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;

	CGuiLabel		m_wndClerkLabel;
	CGuiComboBox	m_wndClerk;

	CGuiCheckBox	m_wndByDischargedDate;
	CGuiCheckBox	m_wndUnapproved;
	CGuiCheckBox	m_wndInsuranceApproval;
	CGuiCheckBox	m_wndOnlyCommander;
	CGuiCheckBox	m_wndSoldierPatient;
	CGuiCheckBox	m_wndLockedDate;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndExportForIns;
	CGuiListCtrl	m_wndCardList;
	CGuiListCtrl	m_wndDeptList;
	CGuiCheckBox	m_wndOverceilMaterial;

	CGuiLabel		m_wndFileNameLabel;
	CGuiComboBox	m_wndFileName;

	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szClerkKey;
	BOOL	m_bByDischargedDate;
	BOOL	m_bUnapproved;
	BOOL	m_bInsuranceApproval;
	BOOL	m_bOnlyCommander;
	BOOL	m_bSoldierPatient;
	BOOL	m_bLockedDate;
	BOOL	m_bOverceilMaterial;
	CString m_szFileNameKey;
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
	void			OnFileNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFileNameSelendok(); 
	//void			OnFileNameSetfocus(); 
	//void			OnFileNameKillfocus(); 
	long			OnFileNameLoadData(); 
	//void			OnFileNameAddNew(); 
	void			OnByDischargedDateSelect();
	void			OnUnapprovedSelect();
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnExportForInsSelect();
	void			OnExportForInsNewSelect();
	void			OnExportForInsNew2Select();
	
	long			OnCardListLoadData(); 
	void			OnCardListSelectChange(int nOldItem, int nNewItem); 
	void			OnCardListDblClick(); 
	int			OnCardListDeleteItem();

	long			OnDeptListLoadData(); 
	void			OnDeptListSelectChange(int nOldItem, int nNewItem); 
	void			OnDeptListDblClick(); 
	int			OnDeptListDeleteItem();


	CFMInsuranceCost80A_917(CWnd* pParent);
	~CFMInsuranceCost80A_917();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFMInsuranceCost80A_917(); 
	int OnEditFMInsuranceCost80A_917(); 
	int OnDeleteFMInsuranceCost80A_917(); 
	int OnSaveFMInsuranceCost80A_917(); 
	int OnCancelFMInsuranceCost80A_917(); 
	int OnFMInsuranceCost80A_917ListLoadData();

	int OnCardListCheckAll();
	int OnCardListUnCheckAll();

	int OnDeptListCheckAll();
	int OnDeptListUnCheckAll();
	CString GetQueryString();
	
	CString GetQueryString_New();
	void GetDataFiltering(CString& szWhere, CString& szOrderBy, CString& szHavingClause, CString& szMaterialID);
	CString GetMainQuery();
	
};
#endif
