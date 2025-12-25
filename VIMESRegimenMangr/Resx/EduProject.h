#ifndef EDUPROJECT_H
#define EDUPROJECT_H

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
class CEduProject : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndInformationGroup;
	CGuiGroupBox	m_wndGroupSearch;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndStartTimeLabel;
	CGuiDateTimeCtrl	m_wndStartTime;
	CGuiLabel		m_wndEndTimeLabel;
	CGuiDateTimeCtrl	m_wndEndTime;
	CGuiLabel		m_wndContentLabel;
	CGuiTextCtrl	m_wndContent;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndSourceLabel;
	CGuiComboBox	m_wndSource;
	CGuiLabel		m_wndLocationLabel;
	CGuiTextCtrl	m_wndLocation;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndUserLabel;
	CGuiComboBox	m_wndUser;
	CGuiLabel		m_wndApprovedbyLabel;
	CGuiComboBox	m_wndApprovedby;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndCreatedDateLabel;
	CGuiDateTimeCtrl	m_wndCreatedDate;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndNameSearhLabel;
	CGuiTextCtrl	m_wndNameSearh;
	CGuiLabel		m_wndContentSearchLabel;
	CGuiTextCtrl	m_wndContentSearch;
	CGuiButton		m_wndRefesh;
	CGuiLabel		m_wndTypeSearchLabel;
	CGuiComboBox	m_wndTypeSearch;
	CGuiListCtrl	m_wndList;
	long	m_nID;
	CString	m_szName;
	CString	m_szStartTime;
	CString	m_szEndTime;
	CString	m_szContent;
	CString	m_szNote;
	CString	m_szSourceKey;
	CString	m_szLocation;
	CString	m_szTypeKey;
	CString	m_szUserKey;
	CString	m_szApprovedbyKey;
	CString	m_szStatusKey;
	CString	m_szCreatedDate;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szNameSearh;
	CString	m_szContentSearch;
	CString	m_szTypeSearchKey;
	CDbfMap	m_edu_projectTbl;
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnStartTimeChange(); 
	//void			OnStartTimeSetfocus(); 
	//void			OnStartTimeKillfocus(); 
	int			OnStartTimeCheckValue(); 
	//void			OnEndTimeChange(); 
	//void			OnEndTimeSetfocus(); 
	//void			OnEndTimeKillfocus(); 
	int			OnEndTimeCheckValue(); 
	//void			OnContentChange(); 
	//void			OnContentSetfocus(); 
	//void			OnContentKillfocus(); 
	int			OnContentCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnSourceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSourceSelendok(); 
	//void			OnSourceSetfocus(); 
	//void			OnSourceKillfocus(); 
	long			OnSourceLoadData(); 
	//void			OnSourceAddNew(); 
	//void			OnLocationChange(); 
	//void			OnLocationSetfocus(); 
	//void			OnLocationKillfocus(); 
	int			OnLocationCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnUserSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUserSelendok(); 
	//void			OnUserSetfocus(); 
	//void			OnUserKillfocus(); 
	long			OnUserLoadData(); 
	//void			OnUserAddNew(); 
	void			OnApprovedbySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnApprovedbySelendok(); 
	//void			OnApprovedbySetfocus(); 
	//void			OnApprovedbyKillfocus(); 
	long			OnApprovedbyLoadData(); 
	//void			OnApprovedbyAddNew(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	//void			OnCreatedDateChange(); 
	//void			OnCreatedDateSetfocus(); 
	//void			OnCreatedDateKillfocus(); 
	int			OnCreatedDateCheckValue(); 
	void			OnAddSelect(); 
	void			OnSaveSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnNameSearhChange(); 
	//void			OnNameSearhSetfocus(); 
	//void			OnNameSearhKillfocus(); 
	int			OnNameSearhCheckValue(); 
	//void			OnContentSearchChange(); 
	//void			OnContentSearchSetfocus(); 
	//void			OnContentSearchKillfocus(); 
	int			OnContentSearchCheckValue(); 
	void			OnRefeshSelect(); 
	void			OnTypeSearchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSearchSelendok(); 
	//void			OnTypeSearchSetfocus(); 
	//void			OnTypeSearchKillfocus(); 
	long			OnTypeSearchLoadData(); 
	//void			OnTypeSearchAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CEduProject();
	~CEduProject();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEduProject(); 
	int OnEditEduProject(); 
	int OnDeleteEduProject(); 
	int OnSaveEduProject(); 
	int OnCancelEduProject(); 
	int OnEduProjectListLoadData(); 
};
#endif
