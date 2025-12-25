#ifndef TMOPERATIONLIST_H
#define TMOPERATIONLIST_H
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
class CTMOperationList : public CGuiView
{

protected:
public:

	CGuiGroupBox	m_wndReportFilter;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndDeptLabel;
	CGuiListCtrl	    m_wndDept;
	CGuiRadioButton	m_wndInsurance;
	CGuiRadioButton	m_wndService;
	CGuiRadioButton	m_wndPolicy;
	CGuiCheckBox	m_wndPayment;
	CGuiCheckBox	m_wndPayment2;
	CGuiCheckBox	m_wndSurgery;
	CGuiCheckBox	m_wndOperation;
	CGuiCheckBox	m_wndParaclinical;
	CGuiCheckBox	m_wndKPL;
	CGuiCheckBox	m_wndAll;
	CGuiCheckBox	m_wndInpatient;
	CGuiCheckBox	m_wndOutpatient;
	CGuiCheckBox	m_wndFromExam;
	CGuiCheckBox	m_wndBNTYC;
	CGuiCheckBox	m_wndKBNTYC;
	CGuiCheckBox	m_wndGiamDau;
	CGuiButton		m_wndExport;
	CGuiCheckBox	m_wndDichvu_TYC;
	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szDeptKey;
	int	m_nInsurance;
	int	m_nService;
	int	m_nPolicy;
	BOOL	m_bPayment;
	BOOL	m_bPayment2;
	BOOL	m_bSurgery;
	BOOL	m_bOperation;
	BOOL	m_bParaclinical;
	BOOL	m_bKPL;
	BOOL	m_bAll;
	BOOL	m_bInpatient;
	BOOL	m_bOutpatient;
	BOOL	m_bFromExam;
	BOOL	m_bBNTYC;
	BOOL	m_bKBNTYC;
	BOOL	m_bGiamDau;
	BOOL	m_bDichvu_TYC;
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
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData();
	void			OnDeptDblClick();
	//void			OnDeptAddNew(); 
	void			OnPrintSelect(); 
	void			OnInsuranceSelect(); 
	void			OnServiceSelect(); 
	void			OnPolicySelect(); 
	void			OnPaymentSelect(); 
	void			OnPayment2Select(); 
	void			OnSurgerySelect(); 
	void			OnOperationSelect(); 
	void			OnParaclinicalSelect(); 
	void			OnKPLSelect(); 
	void			OnAllSelect(); 
	void			OnInpatientSelect(); 
	void			OnOutpatientSelect(); 
	void			OnFromExamSelect(); 
	void			OnBNTYCSelect(); 
	void			OnKBNTYCSelect(); 
	void			OnGiamDauSelect();
	void			OnDichvu_TYCSelect(); 
	void			OnExportSelect(); 
	void			OnExport1(); 
	void			OnExport2(); 
	CTMOperationList(CWnd* pParent);
	~CTMOperationList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMOperationList(); 
	int OnEditTMOperationList(); 
	int OnDeleteTMOperationList(); 
	int OnSaveTMOperationList(); 
	int OnCancelTMOperationList(); 
	int OnTMOperationListListLoadData();
	CString GetQuerySring();
	CString GetQuerySring1();
	CString GetItemAbbreviation(CString szItemName, CString szExtraWord=_T(""));
	CString GetNameUser(CString UserName, CString LastName =_T(""));
};
#endif