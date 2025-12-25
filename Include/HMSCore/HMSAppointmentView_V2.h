#ifndef HMSAPPOINTMENTVIEW_V2_H
#define HMSAPPOINTMENTVIEW_V2_H

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

class AFX_EXT_CLASS CHMSAppointmentView_V2 : public CGuiView{
protected:
	long	m_nDocumentNo;
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndTimeFrameLabel;
	CGuiTimeCtrl	m_wndFromTime;
	CGuiTimeCtrl	m_wndToTime;								
	CGuiLabel		m_wndSearchPatientLabel;
	CGuiTextCtrl	m_wndSearchPatient;
	CGuiButton		m_wndSearch;
	CGuiCheckBox	m_wndOnlyLoginUser;
	CGuiButton		m_wndAppointment;
	CGuiButton		m_wndPrint;
	CGuiListCtrl	m_wndList;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szFromTime;
	CString	m_szToTime;					  
	CString	m_szSearchPatient;
	BOOL	m_bOnlyLoginUser;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnFromTimeChange(); 
	//void			OnFromTimeSetfocus(); 
	//void			OnFromTimeKillfocus(); 
	int			OnFromTimeCheckValue(); 
	//void			OnToTimeChange(); 
	//void			OnToTimeSetfocus(); 
	//void			OnToTimeKillfocus(); 
	int			OnToTimeCheckValue(); 							  
	//void			OnSearchPatientChange(); 
	//void			OnSearchPatientSetfocus(); 
	//void			OnSearchPatientKillfocus(); 
	int			OnSearchPatientCheckValue(); 
	void			OnSearchSelect(); 
	void			OnOnlyLoginUserSelect(); 
	void			OnAppointmentSelect(); 
	void			OnPrintSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSAppointmentView_V2();
	~CHMSAppointmentView_V2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAppointmentView_V2(); 
	int OnEditHMSAppointmentView_V2(); 
	int OnDeleteHMSAppointmentView_V2(); 
	int OnSaveHMSAppointmentView_V2(); 
	int OnCancelHMSAppointmentView_V2(); 
	int OnHMSAppointmentView_V2ListLoadData(); 
	void OnResizeLayout();
};
#endif
