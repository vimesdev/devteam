#ifndef PACSTOTALREPORT_H
#define PACSTOTALREPORT_H

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
class CPACSTotalReport : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndPeriodReportLabel;
	CGuiComboBox	m_wndPeriodReport;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiListCtrl	m_wndRoom;
	CGuiButton		m_wndPreview;
	CGuiButton		m_wndExport;
	long	m_nYear;
	CString	m_szPeriodReportKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	int	m_nOrderDate;
	int	m_nPerformDate;
	//void			OnYearChange(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	int			OnYearCheckValue(); 
	void			OnPeriodReportSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPeriodReportSelendok(); 
	//void			OnPeriodReportSetfocus(); 
	//void			OnPeriodReportKillfocus(); 
	long			OnPeriodReportLoadData(); 
	//void			OnPeriodReportAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue();
	long			OnRoomLoadData(); 
	void			OnRoomSelectChange(int nOldItem, int nNewItem); 
	void			OnRoomDblClick(); 
	int			OnRoomDeleteItem(); 
	void			OnPreviewSelect(); 
	void			OnExportSelect(); 
	void			OnExport1(); 
	void			OnExport2(); 
	void OnExport3(); 
	CPACSTotalReport(CWnd* pParent);
	~CPACSTotalReport();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPACSTotalReport(); 
	int OnEditPACSTotalReport(); 
	int OnDeletePACSTotalReport(); 
	int OnSavePACSTotalReport(); 
	int OnCancelPACSTotalReport(); 
	int OnPACSTotalReportListLoadData(); 
	CString GetQueryString();
	CString GetQueryString1();
	CString GetQueryString2();
	CString GetQueryString3();
	CString GetQueryString4();
	CString GetQueryString5();
    CString GetQueryString3old();
    CString GetQueryString4old();
};
#endif
