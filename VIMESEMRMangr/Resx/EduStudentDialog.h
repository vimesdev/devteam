#ifndef EDUSTUDENTDIALOG_H
#define EDUSTUDENTDIALOG_H

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
class CEduStudentDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGroupInformation;
	CGuiGroupBox	m_wndPicture;
	CGuiLabel		m_wndClassIDLabel;
	CGuiNumberCtrl	m_wndClassID;
	CGuiLabel		m_wndStudentIDLabel;
	CGuiTextCtrl	m_wndStudentID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndEthnicLabel;
	CGuiComboBox	m_wndEthnic;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndOccupationLabel;
	CGuiComboBox	m_wndOccupation;
	CGuiLabel		m_wndPositionLabel;
	CGuiComboBox	m_wndPosition;
	CGuiLabel		m_wndRankLabel;
	CGuiComboBox	m_wndRank;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndCardIDLabel;
	CGuiTextCtrl	m_wndCardID;
	CGuiLabel		m_wndDateLabel;
	CGuiDateCtrl	m_wndDate;
	CGuiLabel		m_wndStartDateLabel;
	CGuiDateCtrl	m_wndStartDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateCtrl	m_wndEndDate;
	CGuiLabel		m_wndDeptIDLabel;
	CGuiComboBox	m_wndDeptID;
	CGuiLabel		m_wndTechniqueLabel;
	CGuiTextCtrl	m_wndTechnique;
	CGuiLabel		m_wndCertificateLabel;
	CGuiTextCtrl	m_wndCertificate;
	CGuiLabel		m_wndDecideLabel;
	CGuiTextCtrl	m_wndDecide;
	CGuiLabel		m_wndDecideDateLabel;
	CGuiDateCtrl	m_wndDecideDate;
	CGuiLabel		m_wndContentLabel;
	CGuiTextCtrl	m_wndContent;
	CGuiLabel		m_wndProjectIDLabel;
	CGuiTextCtrl	m_wndProjectID;
	CGuiLabel		m_wndPlacesIDLabel;
	CGuiTextCtrl	m_wndPlacesID;
	CGuiLabel		m_wndCertificateReceiveLabel;
	CGuiTextCtrl	m_wndCertificateReceive;
	CGuiLabel		m_wndDeptidReceiveLabel;
	CGuiComboBox	m_wndDeptidReceive;
	CGuiLabel		m_wndResultLabel;
	CGuiComboBox	m_wndResult;
	CGuiLabel		m_wndTypeIDLabel;
	CGuiComboBox	m_wndTypeID;
	CGuiLabel		m_wndWorkUnitLabel;
	CGuiTextCtrl	m_wndWorkUnit;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	long	m_nClassID;
	CString	m_szStudentID;
	CString	m_szName;
	CString	m_szBirthDate;
	CString	m_szSexKey;
	CString	m_szEthnicKey;
	CString	m_szAddress;
	CString	m_szOccupationKey;
	CString	m_szPositionKey;
	CString	m_szRankKey;
	CString	m_szPhone;
	CString	m_szCardID;
	CString	m_szDate;
	CString	m_szStartDate;
	CString	m_szEndDate;
	CString	m_szDeptIDKey;
	CString	m_szTechnique;
	CString	m_szCertificate;
	CString	m_szDecide;
	CString	m_szDecideDate;
	CString	m_szContent;
	CString	m_szProjectID;
	CString	m_szPlacesID;
	CString	m_szCertificateReceive;
	CString	m_szDeptidReceiveKey;
	CString	m_szResultKey;
	CString	m_szTypeIDKey;
	CString	m_szWorkUnit;
	CString	m_szNote;
	CString	m_szStatusKey;
	CDbfMap	m_edu_studentTbl;
	//void			OnClassIDChange(); 
	//void			OnClassIDSetfocus(); 
	//void			OnClassIDKillfocus(); 
	int			OnClassIDCheckValue(); 
	//void			OnStudentIDChange(); 
	//void			OnStudentIDSetfocus(); 
	//void			OnStudentIDKillfocus(); 
	int			OnStudentIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnBirthDateChange(); 
	//void			OnBirthDateSetfocus(); 
	//void			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	void			OnEthnicSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEthnicSelendok(); 
	//void			OnEthnicSetfocus(); 
	//void			OnEthnicKillfocus(); 
	long			OnEthnicLoadData(); 
	//void			OnEthnicAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	void			OnOccupationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOccupationSelendok(); 
	//void			OnOccupationSetfocus(); 
	//void			OnOccupationKillfocus(); 
	long			OnOccupationLoadData(); 
	//void			OnOccupationAddNew(); 
	void			OnPositionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPositionSelendok(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	long			OnPositionLoadData(); 
	//void			OnPositionAddNew(); 
	void			OnRankSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRankSelendok(); 
	//void			OnRankSetfocus(); 
	//void			OnRankKillfocus(); 
	long			OnRankLoadData(); 
	//void			OnRankAddNew(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnCardIDChange(); 
	//void			OnCardIDSetfocus(); 
	//void			OnCardIDKillfocus(); 
	int			OnCardIDCheckValue(); 
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//void			OnStartDateChange(); 
	//void			OnStartDateSetfocus(); 
	//void			OnStartDateKillfocus(); 
	int			OnStartDateCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	void			OnDeptIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptIDSelendok(); 
	//void			OnDeptIDSetfocus(); 
	//void			OnDeptIDKillfocus(); 
	long			OnDeptIDLoadData(); 
	//void			OnDeptIDAddNew(); 
	//void			OnTechniqueChange(); 
	//void			OnTechniqueSetfocus(); 
	//void			OnTechniqueKillfocus(); 
	int			OnTechniqueCheckValue(); 
	//void			OnCertificateChange(); 
	//void			OnCertificateSetfocus(); 
	//void			OnCertificateKillfocus(); 
	int			OnCertificateCheckValue(); 
	//void			OnDecideChange(); 
	//void			OnDecideSetfocus(); 
	//void			OnDecideKillfocus(); 
	int			OnDecideCheckValue(); 
	//void			OnDecideDateChange(); 
	//void			OnDecideDateSetfocus(); 
	//void			OnDecideDateKillfocus(); 
	int			OnDecideDateCheckValue(); 
	//void			OnContentChange(); 
	//void			OnContentSetfocus(); 
	//void			OnContentKillfocus(); 
	int			OnContentCheckValue(); 
	//void			OnProjectIDChange(); 
	//void			OnProjectIDSetfocus(); 
	//void			OnProjectIDKillfocus(); 
	int			OnProjectIDCheckValue(); 
	//void			OnPlacesIDChange(); 
	//void			OnPlacesIDSetfocus(); 
	//void			OnPlacesIDKillfocus(); 
	int			OnPlacesIDCheckValue(); 
	//void			OnCertificateReceiveChange(); 
	//void			OnCertificateReceiveSetfocus(); 
	//void			OnCertificateReceiveKillfocus(); 
	int			OnCertificateReceiveCheckValue(); 
	void			OnDeptidReceiveSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptidReceiveSelendok(); 
	//void			OnDeptidReceiveSetfocus(); 
	//void			OnDeptidReceiveKillfocus(); 
	long			OnDeptidReceiveLoadData(); 
	//void			OnDeptidReceiveAddNew(); 
	void			OnResultSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnResultSelendok(); 
	//void			OnResultSetfocus(); 
	//void			OnResultKillfocus(); 
	long			OnResultLoadData(); 
	//void			OnResultAddNew(); 
	void			OnTypeIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeIDSelendok(); 
	//void			OnTypeIDSetfocus(); 
	//void			OnTypeIDKillfocus(); 
	long			OnTypeIDLoadData(); 
	//void			OnTypeIDAddNew(); 
	//void			OnWorkUnitChange(); 
	//void			OnWorkUnitSetfocus(); 
	//void			OnWorkUnitKillfocus(); 
	int			OnWorkUnitCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	void			OnAddSelect(); 
	void			OnSaveSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CEduStudentDialog(CWnd *pParent);
	~CEduStudentDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEduStudentDialog(); 
	int OnEditEduStudentDialog(); 
	int OnDeleteEduStudentDialog(); 
	int OnSaveEduStudentDialog(); 
	int OnCancelEduStudentDialog(); 
	int OnEduStudentDialogListLoadData(); 
};
#endif
