#ifndef HMSEXAMINATIONQUEUELIST_H
#define HMSEXAMINATIONQUEUELIST_H

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
class CHMSExaminationQueueList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndStatusGroupBox;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndPatientListGroupBox;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndOpening;
	CGuiRadioButton	m_wndExamined;
	CGuiRadioButton	m_wndTerminated;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndTimeLabel;
	CGuiComboBox	m_wndTime;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiButton		m_wndRefreh;
	CGuiListCtrl	m_wndPatientList;
	CGuiNumberCtrl	m_wndNumber;
	CGuiButton		m_wndExport;
	int	m_nAll;
	int	m_nOpening;
	int	m_nExamined;
	int	m_nTerminated;
	CString	m_szRoomKey;
	CString	m_szObjectKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szTimeKey;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	long	m_nNumber;
	int	m_nStatus;
	void			OnAllSelect(); 
	void			OnOpeningSelect(); 
	void			OnExaminedSelect(); 
	void			OnTerminatedSelect(); 
	void			OnRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRoomSelendok(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	long			OnRoomLoadData(); 
	//void			OnRoomAddNew(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnTimeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTimeSelendok(); 
	//void			OnTimeSetfocus(); 
	//void			OnTimeKillfocus(); 
	long			OnTimeLoadData(); 
	//void			OnTimeAddNew(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	void			OnRefrehSelect(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	//void			OnNumberChange(); 
	//void			OnNumberSetfocus(); 
	//void			OnNumberKillfocus(); 
	int			OnNumberCheckValue(); 
	void			OnExportSelect(); 
	CHMSExaminationQueueList();
	~CHMSExaminationQueueList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExaminationQueueList(); 
	int OnEditHMSExaminationQueueList(); 
	int OnDeleteHMSExaminationQueueList(); 
	int OnSaveHMSExaminationQueueList(); 
	int OnCancelHMSExaminationQueueList(); 
	int OnHMSExaminationQueueListListLoadData(); 
	CString GetQueryString();
};
#endif
