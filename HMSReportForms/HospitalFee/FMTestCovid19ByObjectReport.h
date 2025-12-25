#ifndef FMTESTCOVID19BYOBJECTREPORT_H
#define FMTESTCOVID19BYOBJECTREPORT_H

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
#include "GuiView.h"
#include "DbField.h"
class CFMTestCovid19ByObjectReport : public CGuiView
{
protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndReportPeriodLabel;
	CGuiComboBox	m_wndReportPeriod;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiButton		m_wndPrint;
	CGuiRadioButton	m_wndInsurance;
	CGuiRadioButton	m_wndService;
	CGuiRadioButton	m_wndPolicy;
	CGuiButton		m_wndExport;
	CGuiCheckBox	m_wndTinhnguoinha;
	CGuiCheckBox	m_wndTinhriengbntuong;

	CGuiRadioButton	m_wndAllObject;
	CGuiCheckBox	m_wndNgoaitru;
	CGuiCheckBox	m_wndNoitru;
	CGuiCheckBox	m_wndBobenhnhanquan;
	CGuiCheckBox	m_wndBotheHT;
	CGuiCheckBox	m_wndBonguoinha;
	CGuiCheckBox	m_wndBoBNtuong;
	


	long	m_nYear;
	CString	m_szReportPeriodKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString GetQueryString();
	CString GetQueryString_danhmuc();
	CString GetQueryStringtotal();
	CString GetQueryStringtotalbydept();
	//void			OnYearChange(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	int			OnYearCheckValue();
	int	m_nInsurance;
	int	m_nService;
	int	m_nPolicy;
	BOOL	m_bThatthu;
	int	m_nAllObject;
	BOOL	m_bNgoaitru;
	BOOL	m_bNoitru;
	BOOL	m_bBobenhnhanquan;
	BOOL	m_bBotheHT;
	BOOL	m_bBonguoinha;
	BOOL	m_bTinhnguoinha;
	BOOL	m_bBoBNtuong;
	CGuiCheckBox	m_wndThatthu;
	BOOL	m_bTinhriengbntuong;
	void			OnReportPeriodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReportPeriodSelendok();
	void			OnThatthuSelect();
	//void			OnReportPeriodSetfocus(); 
	//void			OnReportPeriodKillfocus(); 
	long			OnReportPeriodLoadData(); 
	void			OnReportPeriodAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnExportdetail();
	void			OnExporttotal();
	void			OnExporttotalbydept();
	void			OnInsuranceSelect(); 
	void			OnServiceSelect(); 
	void			OnPolicySelect();
	void			OnAllObjectSelect(); 
	void			OnNgoaitruSelect(); 
	void			OnNoitruSelect();
	void			OnBobenhnhanquanSelect(); 
	void			OnBotheHTSelect();
	void			OnBonguoinhaSelect();
	void			OnTinhnguoinhaSelect();
	void			OnBoBNtuongSelect();
	void			OnTinhriengbntuongSelect();
	void			OnExportdetail_danhmuc();
	CFMTestCovid19ByObjectReport(CWnd* pParent);
	~CFMTestCovid19ByObjectReport();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFMInsuranceFeeLossReport(); 
	int OnEditFMInsuranceFeeLossReport(); 
	int OnDeleteFMInsuranceFeeLossReport(); 
	int OnSaveFMInsuranceFeeLossReport(); 
	int OnCancelFMInsuranceFeeLossReport(); 
	int OnFMInsuranceFeeLossReportListLoadData(); 
};
#endif