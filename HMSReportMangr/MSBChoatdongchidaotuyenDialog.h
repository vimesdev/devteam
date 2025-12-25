#ifndef MSBChoatdongchidaotuyenDialog_H
#define MSBChoatdongchidaotuyenDialog_H

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
class CMSBChoatdongchidaotuyenDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndReportParameters;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndMonthLabel;
	CGuiComboBox	m_wndMonth;
	CGuiLabel		m_wndQuarterLabel;
	CGuiComboBox	m_wndQuarter;
	CGuiLabel		m_wndYearLabel;
	CGuiComboBox	m_wndYear;
	CGuiLabel		m_wndDayLabel;
	CGuiDateCtrl	m_wndDay;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szMonthKey;
	CString	m_szQuarterKey;
	CString	m_szYearKey;
	CString	m_szDay;

	CString m_szRptBy;
	CString m_szCondition;
	bool m_bIsEmpty;
	CDbfMap m_directedonline_report_Tbl;

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnMonthSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMonthSelendok(); 
	//void			OnMonthSetfocus(); 
	//void			OnMonthKillfocus(); 
	long			OnMonthLoadData(); 
	void			OnMonthAddNew(); 
	void			OnQuarterSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnQuarterSelendok(); 
	//void			OnQuarterSetfocus(); 
	//void			OnQuarterKillfocus(); 
	long			OnQuarterLoadData(); 
	void			OnQuarterAddNew(); 
	void			OnYearSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnYearSelendok(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	long			OnYearLoadData(); 
	void			OnYearAddNew(); 
	//void			OnDayChange(); 
	//void			OnDaySetfocus(); 
	//void			OnDayKillfocus(); 
	int			OnDayCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CMSBChoatdongchidaotuyenDialog(CWnd *pParent);
	~CMSBChoatdongchidaotuyenDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddMSBChoatdongchidaotuyenDialog(); 
	int OnEditMSBChoatdongchidaotuyenDialog(); 
	int OnDeleteMSBChoatdongchidaotuyenDialog(); 
	int OnSaveMSBChoatdongchidaotuyenDialog(); 
	int OnCancelMSBChoatdongchidaotuyenDialog(); 
	int OnMSBChoatdongchidaotuyenDialogListLoadData();
	CString GetDate(CString szReportBy, CString szInputKey, CString szYear);
};
#endif
