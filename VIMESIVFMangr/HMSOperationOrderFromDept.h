#ifndef HMSOPERATIONORDERFROMDEPT_H
#define HMSOPERATIONORDERFROMDEPT_H

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
class CHMSOperationOrderFromDept : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOperationInformation;
	CGuiGroupBox	m_wndProfiles;	
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndPerformDeptLabel;
	CGuiComboBox	m_wndPerformDept;
	CGuiLabel		m_wndInsensibleMethodLabel;
	CGuiTextCtrl	m_wndInsensibleMethod;
	CGuiLabel		m_wndAfterOperationLabel;
	CGuiTextCtrl	m_wndBeforeOperation;
	CGuiLabel		m_wndBeforeOperationLabel;
	CGuiTextCtrl	m_wndAfterOperation;
	CGuiLabel		m_wndPractitionerLabel;
	CGuiComboBox	m_wndPractitioner;
	CGuiLabel		m_wndPerformDateLabel;
	CGuiDateTimeCtrl	m_wndPerformDate;
	CGuiLabel		m_wndAnesthetistLabel;
	CGuiComboBox	m_wndAnesthetist;
	CGuiLabel		m_wndAssistantLabel;
	CGuiComboBox	m_wndAssistant;
	CGuiLabel		m_wndUser4Label;
	CGuiComboBox	m_wndUser4;
	CGuiLabel		m_wndUser5Label;
	CGuiComboBox	m_wndUser5;
	CGuiLabel		m_wndUser6Label;
	CGuiComboBox	m_wndUser6;
	CGuiLabel		m_wndUser7Label;
	CGuiComboBox	m_wndUser7;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiNumberCtrl	m_wndRecordNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndWorkplaceLabel;
	CGuiTextCtrl	m_wndWorkplace;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiLabel		m_wndDeptLabel;
	CGuiTextCtrl	m_wndDept;
	CGuiListCtrl	m_wndDrugList;
	CGuiButton		m_wndAddDrugLine;

	CString	m_szGroupKey;
	CString	m_szOrderDate;
	CString	m_szNameKey;
	CString	m_szPerformDeptKey;
	CString	m_szInsensibleMethod;
	CString	m_szBeforeOperation;
	CString	m_szAfterOperation;
	CString	m_szPractitionerKey;
	CString	m_szPerformDate;
	CString	m_szAnesthetistKey;
	CString	m_szAssistantKey;
	CString	m_szUser4Key;
	CString	m_szUser5Key;
	CString	m_szUser6Key;
	CString	m_szUser7Key;
	CString	m_szNote;
	CString	m_szTypeKey;
	long	m_nDocumentNo;
	long	m_nRecordNo;
	long	m_nOrderID;
	CString	m_szPatientName;
	CString	m_szSex;
	CString	m_szAge;
	CString	m_szAddress;
	CString	m_szWorkplace;
	CString	m_szObject;
	CString	m_szDept;
	CString m_szStatus;

	CDbfMap	m_hms_operationTbl;
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	//void			OnGroupAddNew(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	void			OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformDeptSelendok(); 
	//void			OnPerformDeptSetfocus(); 
	//void			OnPerformDeptKillfocus(); 
	long			OnPerformDeptLoadData(); 
	//void			OnPerformDeptAddNew(); 
	//void			OnInsensibleMethodChange(); 
	//void			OnInsensibleMethodSetfocus(); 
	//void			OnInsensibleMethodKillfocus(); 
	int			OnInsensibleMethodCheckValue(); 
	//void			OnBeforeOperationChange(); 
	//void			OnBeforeOperationSetfocus(); 
	//void			OnBeforeOperationKillfocus(); 
	int			OnBeforeOperationCheckValue(); 
	//void			OnAfterOperationChange(); 
	//void			OnAfterOperationSetfocus(); 
	//void			OnAfterOperationKillfocus(); 
	int			OnAfterOperationCheckValue(); 
	void			OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPractitionerSelendok(); 
	//void			OnPractitionerSetfocus(); 
	//void			OnPractitionerKillfocus(); 
	long			OnPractitionerLoadData(); 
	//void			OnPractitionerAddNew(); 
	//void			OnPerformDateChange(); 
	//void			OnPerformDateSetfocus(); 
	//void			OnPerformDateKillfocus(); 
	int			OnPerformDateCheckValue(); 
	void			OnAnesthetistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAnesthetistSelendok(); 
	//void			OnAnesthetistSetfocus(); 
	//void			OnAnesthetistKillfocus(); 
	long			OnAnesthetistLoadData(); 
	//void			OnAnesthetistAddNew(); 
	void			OnAssistantSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAssistantSelendok(); 
	//void			OnAssistantSetfocus(); 
	//void			OnAssistantKillfocus(); 
	long			OnAssistantLoadData(); 
	//void			OnAssistantAddNew(); 
	void			OnUser4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser4Selendok(); 
	//void			OnUser4Setfocus(); 
	//void			OnUser4Killfocus(); 
	long			OnUser4LoadData(); 
	//void			OnUser4AddNew(); 
	void			OnUser5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser5Selendok(); 
	//void			OnUser5Setfocus(); 
	//void			OnUser5Killfocus(); 
	long			OnUser5LoadData(); 
	//void			OnUser5AddNew(); 
	void			OnUser6SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser6Selendok(); 
	//void			OnUser6Setfocus(); 
	//void			OnUser6Killfocus(); 
	long			OnUser6LoadData(); 
	//void			OnUser6AddNew(); 
	void			OnUser7SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUser7Selendok(); 
	//void			OnUser7Setfocus(); 
	//void			OnUser7Killfocus(); 
	long			OnUser7LoadData(); 
	//void			OnUser7AddNew(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnWorkplaceChange(); 
	//void			OnWorkplaceSetfocus(); 
	//void			OnWorkplaceKillfocus(); 
	int			OnWorkplaceCheckValue(); 
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	//void			OnDeptChange(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	void			OnAddDrugLineSelect(); 
	void			OnPrintOperation(CString szReportName);
	int			OnDeptCheckValue(); 
	CHMSOperationOrderFromDept();
	~CHMSOperationOrderFromDept();

	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOperationOrderFromDept(); 
	int OnEditHMSOperationOrderFromDept(); 
	int OnDeleteHMSOperationOrderFromDept(); 
	int OnSaveHMSOperationOrderFromDept(); 
	int OnCancelHMSOperationOrderFromDept(); 
	int OnHMSOperationOrderFromDeptListLoadData(); 
};
#endif
