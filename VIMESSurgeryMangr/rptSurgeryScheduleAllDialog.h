#ifndef rptSurgeryScheduleAllDialog_H
#define rptSurgeryScheduleAllDialog_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CrptSurgeryScheduleAllDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiGroupBox	m_wndDeptInfo;
	CGuiGroupBox	m_wndTableInfo;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	//CGuiDateTimeCtrl	m_wndToDate;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndDeptList;
	CGuiListCtrl	m_wndTableList;
	CGuiCheckBox	m_wndTerminated;

	CString	m_szFromDate;
	CString	m_szToDate;
	BOOL	m_bTerminated;

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
	void			PrintFormat1();
	void			PrintFormat2();
	void			OnCloseSelect(); 
	long			OnDeptListLoadData(); 
	void			OnDeptListSelectChange(int nOldItem, int nNewItem); 
	void			OnDeptListDblClick(); 
	int			OnDeptListDeleteItem(); 
	long			OnTableListLoadData(); 
	void			OnTableListSelectChange(int nOldItem, int nNewItem); 
	void			OnTableListDblClick(); 
	int			OnTableListDeleteItem();

	void			OnTerminatedSelect();

	CrptSurgeryScheduleAllDialog(CWnd *pParent);
	~CrptSurgeryScheduleAllDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddrptSurgeryScheduleAllDialog(); 
	int OnEditrptSurgeryScheduleAllDialog(); 
	int OnDeleterptSurgeryScheduleAllDialog(); 
	int OnSaverptSurgeryScheduleAllDialog(); 
	int OnCancelrptSurgeryScheduleAllDialog(); 
	int OnrptSurgeryScheduleAllDialogListLoadData();

	int OnDeptCheckAll();
	int OnDeptUncheckAll();

	int OnTableCheckAll();
	int OnTableUncheckAll();

	CString GetQueryString();
};
#endif
