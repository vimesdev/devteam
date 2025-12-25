#ifndef HMSADMISSIONCLINICALDIALOG_H
#define HMSADMISSIONCLINICALDIALOG_H

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
class CHMSAdmissionClinicalDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndAdmitDateLabel;
	CGuiDateTimeCtrl	m_wndAdmitDate;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiTextCtrl	m_wndDepartment;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiLabel		m_wndPathologicalLabel;
	CGuiTextCtrl	m_wndPathological;
	CGuiLabel		m_wndDiseasePrehistoryLabel;
	CGuiTextCtrl	m_wndDiseasePrehistory;
	CGuiLabel		m_wndSystemicLabel;
	CGuiTextCtrl	m_wndSystemic;
	CGuiLabel		m_wndPathsOfBodyLabel;
	CGuiTextCtrl	m_wndPathsOfBody;
	CGuiLabel		m_wndTestsLabel;
	CGuiTextCtrl	m_wndTests;
	CGuiLabel		m_wndSummarizeLabel;
	CGuiTextCtrl	m_wndSummarize;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CString	m_szAdmitDate;
	CString	m_szDepartment;
	CString	m_szReason;
	CString	m_szPathological;
	CString	m_szDiseasePrehistory;
	CString	m_szSystemic;
	CString	m_szPathsOfBody;
	CString	m_szTests;
	CString	m_szSummarize;
	CDbfMap	m_hms_clinical_recordTbl;
	//void			OnAdmitDateChange(); 
	//void			OnAdmitDateSetfocus(); 
	//void			OnAdmitDateKillfocus(); 
	int			OnAdmitDateCheckValue(); 
	//void			OnDepartmentChange(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	int			OnDepartmentCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	//void			OnPathologicalChange(); 
	//void			OnPathologicalSetfocus(); 
	//void			OnPathologicalKillfocus(); 
	int			OnPathologicalCheckValue(); 
	//void			OnDiseasePrehistoryChange(); 
	//void			OnDiseasePrehistorySetfocus(); 
	//void			OnDiseasePrehistoryKillfocus(); 
	int			OnDiseasePrehistoryCheckValue(); 
	//void			OnSystemicChange(); 
	//void			OnSystemicSetfocus(); 
	//void			OnSystemicKillfocus(); 
	int			OnSystemicCheckValue(); 
	//void			OnPathsOfBodyChange(); 
	//void			OnPathsOfBodySetfocus(); 
	//void			OnPathsOfBodyKillfocus(); 
	int			OnPathsOfBodyCheckValue(); 
	//void			OnTestsChange(); 
	//void			OnTestsSetfocus(); 
	//void			OnTestsKillfocus(); 
	int			OnTestsCheckValue(); 
	//void			OnSummarizeChange(); 
	//void			OnSummarizeSetfocus(); 
	//void			OnSummarizeKillfocus(); 
	int			OnSummarizeCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CHMSAdmissionClinicalDialog(CWnd *pParent);
	~CHMSAdmissionClinicalDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAdmissionClinicalDialog(); 
	int OnEditHMSAdmissionClinicalDialog(); 
	int OnDeleteHMSAdmissionClinicalDialog(); 
	int OnSaveHMSAdmissionClinicalDialog(); 
	int OnCancelHMSAdmissionClinicalDialog(); 
	int OnHMSAdmissionClinicalDialogListLoadData(); 
};
#endif
