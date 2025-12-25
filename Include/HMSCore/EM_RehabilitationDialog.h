#ifndef EM_REHABILITATIONDIALOG_H
#define EM_REHABILITATIONDIALOG_H

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
class CEM_RehabilitationDialog : public CGuiDialog{
protected:
public:
	
	CGuiGroupBox	m_wndTreatmentMethods;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndMethodNameLabel;
	CGuiTextCtrl	m_wndMethodName;
	CGuiButton		m_wndMethods;
	CGuiLabel		m_wndBookLabel;
	CGuiComboBox	m_wndBook;
	CGuiLabel		m_wndSheetLabel;
	CGuiComboBox	m_wndSheet;
	CGuiLabel		m_wndRegistrationNumberLabel;
	CGuiTextCtrl	m_wndRegistrationNumber;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiTextCtrl	m_wndMainDisease;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiLabel		m_wndGroupDiseaseLabel;
	CGuiComboBox	m_wndGroupDisease;
	CGuiLabel		m_wndTimeOfDiseaseLabel;
	CGuiTextCtrl	m_wndTimeOfDisease;
	CGuiLabel		m_wndTimesLabel;
	CGuiNumberCtrl	m_wndTimes;
	CGuiLabel		m_wndMachineLabel;
	CGuiComboBox	m_wndMachine;
	CGuiLabel		m_wndTechDosageLabel;
	CGuiTextCtrl	m_wndTechDosage;
	CGuiLabel		m_wndBodyTreatLabel;
	CGuiTextCtrl	m_wndBodyTreat;
	CGuiLabel		m_wndPlacingElectrodeLabel;
	CGuiTextCtrl	m_wndPlacingElectrode;
	CGuiLabel		m_wndTreatmentNumberLabel;
	CGuiNumberCtrl	m_wndTreatmentNumber;
	CGuiLabel		m_wndTreatmentTimeLabel;
	CGuiNumberCtrl	m_wndTreatmentTime;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
    CGuiListCtrlEx m_wndList;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	long	m_nOptIdx;
	long	m_nRehabilitID;

	CString m_szItemIDS;
	CString	m_szOptIdxs;
    CString m_szFilters;
	
	CString	m_szMethodName;
	CString	m_szBookKey;
	CString	m_szSheetKey;
	CString	m_szRegistrationNumber;
	CString	m_szMainDisease;
	CString	m_szRelationDisease;
	CString	m_szGroupDiseaseKey;
	CString	m_szTimeOfDisease;
	long	m_nTimes;
	CString	m_szMachineKey;
	CString	m_szTechDosage;
	CString	m_szBodyTreat;
	CString	m_szPlacingElectrode;
	long	m_nTreatmentNumber;
	long	m_nTreatmentTime;
	CString	m_szDoctorKey;
	CString	m_szExamDate;
    CString m_szExtInfo;

	CDbfMap	m_HMS_REHABILITATIONTbl;
	//void			OnPatientNoChange(); 
	//void			OnPatientNoSetfocus(); 
	//void			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnMethodNameChange(); 
	//void			OnMethodNameSetfocus(); 
	//void			OnMethodNameKillfocus(); 
	int			OnMethodNameCheckValue(); 
	void			OnBookSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBookSelendok(); 
	//void			OnBookSetfocus(); 
	//void			OnBookKillfocus(); 
	long			OnBookLoadData(); 
	//void			OnBookAddNew(); 
	void			OnSheetSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSheetSelendok(); 
	//void			OnSheetSetfocus(); 
	//void			OnSheetKillfocus(); 
	long			OnSheetLoadData(); 
	//void			OnSheetAddNew(); 
	//void			OnRegistrationNumberChange(); 
	//void			OnRegistrationNumberSetfocus(); 
	//void			OnRegistrationNumberKillfocus(); 
	int			OnRegistrationNumberCheckValue(); 
	//void			OnMainDiseaseChange(); 
	//void			OnMainDiseaseSetfocus(); 
	//void			OnMainDiseaseKillfocus(); 
	int			OnMainDiseaseCheckValue(); 
	//void			OnRelationDiseaseChange(); 
	//void			OnRelationDiseaseSetfocus(); 
	//void			OnRelationDiseaseKillfocus(); 
	int			OnRelationDiseaseCheckValue();
	void			OnGroupDiseaseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupDiseaseSelendok(); 
	//void			OnGroupDiseaseSetfocus(); 
	//void			OnGroupDiseaseKillfocus(); 
	long			OnGroupDiseaseLoadData();
	//void			OnTimeOfDiseaseChange(); 
	//void			OnTimeOfDiseaseSetfocus(); 
	//void			OnTimeOfDiseaseKillfocus(); 
	int			OnTimeOfDiseaseCheckValue(); 
	//void			OnTimesChange(); 
	//void			OnTimesSetfocus(); 
	//void			OnTimesKillfocus(); 
	int			OnTimesCheckValue(); 
	void			OnMachineSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMachineSelendok(); 
	//void			OnMachineSetfocus(); 
	//void			OnMachineKillfocus(); 
	long			OnMachineLoadData(); 
	//void			OnMachineAddNew(); 
	//void			OnTechDosageChange(); 
	//void			OnTechDosageSetfocus(); 
	//void			OnTechDosageKillfocus(); 
	int			OnTechDosageCheckValue(); 
	//void			OnBodyTreatChange(); 
	//void			OnBodyTreatSetfocus(); 
	//void			OnBodyTreatKillfocus(); 
	int			OnBodyTreatCheckValue(); 
	//void			OnPlacingElectrodeChange(); 
	//void			OnPlacingElectrodeSetfocus(); 
	//void			OnPlacingElectrodeKillfocus(); 
	int			OnPlacingElectrodeCheckValue(); 
	//void			OnTreatmentNumberChange(); 
	//void			OnTreatmentNumberSetfocus(); 
	//void			OnTreatmentNumberKillfocus(); 
	int			OnTreatmentNumberCheckValue(); 
	//void			OnTreatmentTimeChange(); 
	//void			OnTreatmentTimeSetfocus(); 
	//void			OnTreatmentTimeKillfocus(); 
	int			OnTreatmentTimeCheckValue(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	//void			OnDoctorAddNew();
	void			OnMethodsSelect(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	long OnListLoadData();
    void OnListSelectChange(int nOldItem, int nNewItem);
    void OnListDblClick();
    int OnListDeleteItem(); 
	int OnListAddItem(); 
	CEM_RehabilitationDialog(CWnd *pParent);
	~CEM_RehabilitationDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEM_RehabilitationDialog(); 
	int OnEditEM_RehabilitationDialog(); 
	int OnDeleteEM_RehabilitationDialog(); 
	int OnSaveEM_RehabilitationDialog(); 
	int OnCancelEM_RehabilitationDialog(); 
	int OnEM_RehabilitationDialogListLoadData();
    
 
	int OnAddRehabilitationExtInfo();
    void AppendJsonToExtInfo(const CString &szJsonData);

    CEdit* m_pCurrentEdit;
    int m_nEditItem;
    int m_nEditCol;

public:
    afx_msg void OnEditComplete();
    virtual BOOL PreTranslateMessage(MSG *pMsg);
};
#endif
