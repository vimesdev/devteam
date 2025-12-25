#ifndef HMSEXMEMPLOYEEDIALOGEX_H
#define HMSEXMEMPLOYEEDIALOGEX_H

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
class CHMSExmEmployeeDialogEX : public CGuiDialog
{
protected:
public:
	long			m_nCompanyId;
	long			m_nContractId;
	int				m_nObjectId;
	long			m_nEmplId;
	CString			m_szDefProvId;

	CGuiGroupBox	m_wndEmployeeInformation;
	CGuiLabel		m_wndEmployeeIdLabel;
	CGuiTextCtrl	m_wndEmployeeId;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndEthnicLabel;
	CGuiComboBox	m_wndEthnic;
	CGuiLabel		m_wndOccupationLabel;
	CGuiComboBox	m_wndOccupation;
	CGuiLabel		m_wndProvillLabel;
	CGuiComboBox	m_wndProvill;
	CGuiLabel		m_wndRankLabel;
	CGuiComboBox	m_wndRank;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiTextCtrl	m_wndDepartment;
	CGuiLabel		m_wndPositionLabel;
	CGuiTextCtrl	m_wndPosition;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiCheckBox	m_wndIsActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	
	CString	m_szEmployeeId;
	long	m_nPatientNo;
	CString	m_szName;
	CString	m_szBirthDate;
	CString	m_szSexKey;
	CString	m_szEthnicKey;
	CString	m_szOccupationKey;
	CString	m_szProvillKey;
	CString	m_szRankKey;
	CString	m_szDepartment;
	CString	m_szPosition;
	CString	m_szNote;
	BOOL	m_bIsActive;
	CDbfMap	m_hms_exm_employeeTbl;
	//void			OnEmployeeIdChange(); 
	//void			OnEmployeeIdSetfocus(); 
	//void			OnEmployeeIdKillfocus(); 
	int			OnEmployeeIdCheckValue(); 
	//void			OnPatientNoChange(); 
	//void			OnPatientNoSetfocus(); 
	//void			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
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
	void			OnOccupationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOccupationSelendok(); 
	//void			OnOccupationSetfocus(); 
	//void			OnOccupationKillfocus(); 
	long			OnOccupationLoadData(); 
	//void			OnOccupationAddNew(); 
	void			OnProvillSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvillSelendok(); 
	//void			OnProvillSetfocus(); 
	//void			OnProvillKillfocus(); 
	long			OnProvillLoadData(); 
	//void			OnProvillAddNew(); 
	void			OnRankSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRankSelendok(); 
	//void			OnRankSetfocus(); 
	//void			OnRankKillfocus(); 
	long			OnRankLoadData(); 
	//void			OnRankAddNew(); 
	//void			OnDepartmentChange(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	int			OnDepartmentCheckValue(); 
	//void			OnPositionChange(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	int			OnPositionCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnIsActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSExmEmployeeDialogEX(CWnd *pParent, int nMode);
	~CHMSExmEmployeeDialogEX();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExmEmployeeDialog(); 
	int OnEditHMSExmEmployeeDialog(); 
	int OnDeleteHMSExmEmployeeDialog(); 
	int OnSaveHMSExmEmployeeDialog(); 
	int OnCancelHMSExmEmployeeDialog(); 
	int OnHMSExmEmployeeDialogListLoadData(); 
};
#endif
