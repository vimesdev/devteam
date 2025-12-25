#ifndef HMSBIRTHPACKAGELIST_H
#define HMSBIRTHPACKAGELIST_H

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
class CHMSBirthPackageList : public CGuiDialog{
protected:
	long m_nCustomerId;
	long m_nDocNo;
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
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiButton		m_wndLoad;
	//CGuiCheckBox	m_wndRegistered;
	CGuiButton		m_wndRegistered;
	CGuiListCtrlEx	m_wndList;
	CString	m_szFromDate;
	CString	m_szFromTime;
	CString	m_szToDate;
	CString	m_szToTime;
	CString	m_szRoomKey;
	CString	m_szPatientName;
	BOOL	m_bRegistered;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnFromTimeChange(); 
	//void			OnFromTimeSetfocus(); 
	//void			OnFromTimeKillfocus(); 
	int			OnFromTimeCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnToTimeChange(); 
	//void			OnToTimeSetfocus(); 
	//void			OnToTimeKillfocus(); 
	int			OnToTimeCheckValue(); 
	void			OnRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRoomSelendok(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	long			OnRoomLoadData(); 
	//void			OnRoomAddNew(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	void			OnLoadSelect(); 
	void		OnRegisteredSelect();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSBirthPackageList(CWnd *pParent);
	~CHMSBirthPackageList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBirthPackageList(); 
	int OnEditHMSBirthPackageList(); 
	int OnDeleteHMSBirthPackageList(); 
	int OnSaveHMSBirthPackageList(); 
	int OnCancelHMSBirthPackageList(); 
	int OnHMSBirthPackageListListLoadData();
	void OnListAddItem();
	void OnListEditItem();
	void ExportList();
	void OnListAutoReception();
	void OnListManualReception();
	BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
