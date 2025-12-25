#ifndef EMRPatientList_H
#define EMRPatientList_H

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
///////////////////////
// Rename CEMRPatientList => CHMSEMRPatientList
//////////////////////
class AFX_EXT_CLASS CEMRPatientList : public CGuiView{
protected:
public:
    CGuiView*		m_pDetailView;

	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndSearch;
	CGuiListCtrl	m_wndRecordList;
	CGuiLabel		m_wndArchivalNoLabel;
	CGuiTextCtrl	m_wndArchivalNo;
	CGuiLabel		m_wndTotalLabel;
	CGuiNumberCtrl	m_wndTotal;
	CGuiLabel		m_wndTreatmentTypeLabel;
	CGuiComboBox	m_wndTreatmentType;
	CGuiCheckBox	m_wndPatientDead;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndDontSend;
	CGuiRadioButton	m_wndSend;
	CGuiRadioButton	m_wndReturn;
	CGuiRadioButton	m_wndApprove;

	CGuiCheckBox	m_wndOutPatient;

	CGuiButton		m_wndSetDocBh;
	
	CString	m_szFromDate;
	CString	m_szToDate;
	long	m_nDocumentNo;
	long	m_nTotal;
	CString	m_szDepartmentKey;
	CString	m_szName;
	CString m_szArchivalNo;
	int	m_nInPatient;
	int	m_nOutPatient;
	CString	m_szTreatmentTypeKey;
	CDbfMap	m_hms_patient_recordTbl;

	//long m_nDoNo;
	BOOL	m_bPatientDead;
	CString m_szSuggestion;
	CString m_szSearch;
	CString m_szStatus;
	int	m_nAll;
	int	m_nSend;
	int	m_nReturn;
	int	m_nApprove;
	int m_nDontSend;

	BOOL	m_bOutPatient;

	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	void			OnTreatmentTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTreatmentTypeSelendok(); 
	//void			OnTreatmentTypeSetfocus(); 
	//void			OnTreatmentTypeKillfocus(); 
	long			OnTreatmentTypeLoadData(); 
	//void			OnTreatmentTypeAddNew(); 

	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue();
	int			OnArchivalNoCheckValue(); 
	void			OnSearchSelect(); 
	long			OnRecordListLoadData(); 
	void			OnRecordListSelectChange(int nOldItem, int nNewItem); 
	void			OnRecordListDblClick(); 
	int			OnRecordListExport();
	int			OnRecordListDeleteItem();
	void			OnInPatientSelect(); 
	void			OnOutPatientSelect();
	void			OnAllSelect();
	void			OnDontSendSelect();
	void			OnSendSelect(); 
	void			OnReturnSelect(); 
	void			OnApproveSelect();
	int				OnRecordListRecord();
	int				OnRecordListSendRecord();
	int				OnRecordListUndoRecord();
	CString			GetStatus(long nDocno);
	void			OnSetDocBHSelect();

	CEMRPatientList();
	~CEMRPatientList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEMRPatientList(); 
	int OnEditEMRPatientList(); 
	int OnDeleteEMRPatientList(); 
	int OnSaveEMRPatientList(); 
	int OnCancelEMRPatientList(); 
	int OnEMRPatientListListLoadData(); 
	void OnResizeLayout();
};
#endif
