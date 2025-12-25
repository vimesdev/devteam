#ifndef HMSSURGERYQUEUE_H
#define HMSSURGERYQUEUE_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Vietnamese Medical Software Join Stock Company. 2006-2008.			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@VIMES.com.vn or hayhv@yahoo.com
//	Website: http://www.VIMES.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@VIMES.com.vn hoac hayhv@yahoo.com
//	Website: http://www.VIMES.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"

class CHMSurgeryQueue : public CGuiView
{
protected:
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndPatientInformation;

	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;

	CGuiTimeCtrl	m_wndFromTime;
	CGuiLabel		m_wndToDateLabel;

	CGuiDateCtrl	m_wndToDate;
	CGuiTimeCtrl	m_wndToTime;

	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;

	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;

	CGuiLabel		m_wndTotalLabel;
	CGuiNumberCtrl	m_wndTotal;

	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;

	CGuiLabel		m_wndAdmissionNoLabel;
	CGuiTextCtrl	m_wndAdmissionNo;

	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;

	CGuiRadioButton	m_wndWaiting;
	CGuiRadioButton	m_wndExamined;
	CGuiRadioButton	m_wndTerminated;

	CGuiButton		m_wndLoad;

	CGuiListCtrl	m_wndPatientList;
	CGuiRadioButton	m_wndOutPatient;
	CGuiRadioButton	m_wndInPatient;
	CGuiCheckBox	m_wndDa_tao_lich_mo;


	CString	m_szFromDate;
	CString	m_szFromTime;
	CString	m_szToDate;
	CString	m_szToTime;
	
	CString	m_szRoomKey;
	CString	m_szDeptKey;

	long	m_nDocumentNo;
	long	m_nTotal;
	CString	m_szAdmissionNo;
	CString	m_szPatientName;
	int	m_nWaiting;

	int	m_nOutPatient;
	int	m_nInPatient;

	CString m_szDeptID;
	long n_curDocNo;
	CString m_szCurStatus;
	CString m_szPNo;
	long m_nPNo;
	BOOL	m_bDa_tao_lich_mo;
	void			OnDa_tao_lich_moSelect();


	//int			OnFromDateChange(); 
	//int			OnFromDateSetfocus(); 
	//int			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//int			OnFromTimeChange(); 
	//int			OnFromTimeSetfocus(); 
	//int			OnFromTimeKillfocus(); 
	int			OnFromTimeCheckValue(); 
	//int			OnToDateChange(); 
	//int			OnToDateSetfocus(); 
	//int			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//int			OnToTimeChange(); 
	//int			OnToTimeSetfocus(); 
	//int			OnToTimeKillfocus(); 
	int			OnToTimeCheckValue();

	int		OnRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	int		OnRoomSelendok();
	//int			OnRoomSetfocus(); 
	//int			OnRoomKillfocus(); 
	int			OnRoomLoadData();
	int			OnRoomAddNew();
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	void			OnDeptAddNew();
	//int			OnDocumentNoChange(); 
	//int			OnDocumentNoSetfocus(); 
	//int			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue();
	//void			OnAdmissionNoChange(); 
	//void			OnAdmissionNoSetfocus(); 
	//void			OnAdmissionNoKillfocus(); 
	int			OnAdmissionNoCheckValue(); 
	//int			OnPatientNameChange(); 
	//int			OnPatientNameSetfocus(); 
	//int			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	int			OnWaitingSelect(); 
	int			OnExaminedSelect(); 
	int			OnTerminatedSelect(); 
	int			OnLoadSelect(); 
	int			OnPatientListLoadData(); 
	int			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	int			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	int			OnPatientListSetEmergency(); 
	int			OnPatientListSetPriority();
	void			OnOutPatientSelect(); 
	void			OnInPatientSelect(); 
	CHMSurgeryQueue();
	~CHMSurgeryQueue();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSurgeryQueue(); 
	int OnEditHMSurgeryQueue(); 
	int OnDeleteHMSurgeryQueue(); 
	int OnSaveHMSurgeryQueue(); 
	int OnCancelHMSurgeryQueue(); 
	int OnHMSurgeryQueueListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	void RefreshData();
	void OnAddPatientToBoard();
	int OnTreatmentAppointment();
	int OnTreatmentPlan();
};
#endif
