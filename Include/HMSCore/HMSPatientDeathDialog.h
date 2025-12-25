#ifndef HMSPATIENTDEATHDIALOG_H
#define HMSPATIENTDEATHDIALOG_H

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
class AFX_EXT_CLASS CHMSPatientDeathDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndDeathInformation;
	CGuiLabel		m_wndFullNameLabel;
	CGuiTextCtrl	m_wndFullName;
	CGuiLabel		m_wndNationalityLabel;
	CGuiTextCtrl	m_wndNationality;
	CGuiLabel		m_wndPerResidenceLabel;
	CGuiComboBox	m_wndPerResidence;
	CGuiLabel		m_wndDetailPopulationLabel;
	CGuiTextCtrl	m_wndDetailPopulation;
	CGuiLabel		m_wndPaperInfoLabel;
	CGuiTextCtrl	m_wndPaperInfo;
	CGuiLabel		m_wndIssueDateLabel;
	CGuiDateCtrl	m_wndIssueDate;
	CGuiLabel		m_wndIssuePlaceLabel;
	CGuiTextCtrl	m_wndIssuePlace;
	CGuiLabel		m_wndDeathDateLabel;
	CGuiDateTimeCtrl	m_wndDeathDate;
	CGuiLabel		m_wndDeathStateLabel;
	//CGuiComboBox	m_wndDeathState;
	CGuiTextCtrl	m_wndDeathState;
	CGuiLabel		m_wndDeathPlaceLabel;
	CGuiComboBox	m_wndDeathPlace;
	CGuiLabel		m_wndDtlDeathPlaceLabel;
	CGuiTextCtrl	m_wndDtlDeathPlace;
	CGuiLabel		m_wndDeathReasonLabel;
	CGuiTextCtrl	m_wndDeathReason;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CString	m_szFullName;
	CString	m_szNationality;
	CString	m_szPerResidenceKey;
	CString	m_szDetailPopulation;
	CString	m_szPaperInfo;
	CString	m_szIssueDate;
	CString	m_szIssuePlace;
	CString	m_szDeathDate;
	//CString	m_szDeathStateKey;
	CString	m_szDeathState;
	CString	m_szDeathPlaceKey;
	CString	m_szDtlDeathPlace;
	CString	m_szDeathReason;
	CDbfMap	m_hms_patientdeathTbl;

	CRecord *m_rsAddress;
	long m_nPatientNo;
	CString m_szDieState;

	//void			OnFullNameChange(); 
	//void			OnFullNameSetfocus(); 
	//void			OnFullNameKillfocus(); 
	int			OnFullNameCheckValue(); 
	//void			OnNationalityChange(); 
	//void			OnNationalitySetfocus(); 
	//void			OnNationalityKillfocus(); 
	int			OnNationalityCheckValue(); 
	void			OnPerResidenceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerResidenceSelendok(); 
	//void			OnPerResidenceSetfocus(); 
	//void			OnPerResidenceKillfocus(); 
	long			OnPerResidenceLoadData(); 
	void			OnPerResidenceAddNew(); 
	//void			OnDetailPopulationChange(); 
	//void			OnDetailPopulationSetfocus(); 
	//void			OnDetailPopulationKillfocus(); 
	int			OnDetailPopulationCheckValue(); 
	//void			OnPaperInfoChange(); 
	//void			OnPaperInfoSetfocus(); 
	//void			OnPaperInfoKillfocus(); 
	int			OnPaperInfoCheckValue(); 
	//void			OnIssueDateChange(); 
	//void			OnIssueDateSetfocus(); 
	//void			OnIssueDateKillfocus(); 
	int			OnIssueDateCheckValue(); 
	//void			OnIssuePlaceChange(); 
	//void			OnIssuePlaceSetfocus(); 
	//void			OnIssuePlaceKillfocus(); 
	int			OnIssuePlaceCheckValue(); 
	//void			OnDeathDateChange(); 
	//void			OnDeathDateSetfocus(); 
	//void			OnDeathDateKillfocus(); 
	int			OnDeathDateCheckValue(); 
	//void			OnDeathStateSelectChange(int nOldItemSel, int nNewItemSel); 
	//void			OnDeathStateSelendok(); 
	////void			OnDeathStateSetfocus(); 
	////void			OnDeathStateKillfocus(); 
	//long			OnDeathStateLoadData(); 
	//void			OnDeathStateAddNew();
	//void			OnDeathStateChange(); 
	//void			OnDeathStateSetfocus(); 
	//void			OnDeathStateKillfocus(); 
	int			OnDeathStateCheckValue(); 
	void			OnDeathPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeathPlaceSelendok(); 
	//void			OnDeathPlaceSetfocus(); 
	//void			OnDeathPlaceKillfocus(); 
	long			OnDeathPlaceLoadData(); 
	void			OnDeathPlaceAddNew(); 
	//void			OnDtlDeathPlaceChange(); 
	//void			OnDtlDeathPlaceSetfocus(); 
	//void			OnDtlDeathPlaceKillfocus(); 
	int			OnDtlDeathPlaceCheckValue(); 
	//void			OnDeathReasonChange(); 
	//void			OnDeathReasonSetfocus(); 
	//void			OnDeathReasonKillfocus(); 
	int			OnDeathReasonCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(int m_nPatientNo); 
	CHMSPatientDeathDialog(CWnd *pParent);
	~CHMSPatientDeathDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientDeathDialog(); 
	int OnEditHMSPatientDeathDialog(); 
	int OnDeleteHMSPatientDeathDialog(); 
	int OnSaveHMSPatientDeathDialog(); 
	int OnCancelHMSPatientDeathDialog(); 
	int OnHMSPatientDeathDialogListLoadData(); 
};
#endif
