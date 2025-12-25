#ifndef HMSDEPARTMENTADMISSIONDIALOG_H
#define HMSDEPARTMENTADMISSIONDIALOG_H

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
class CHMSDepartmentAdmissionDialog : public CGuiDialog{
protected:
public:
	long	m_nDocumentNo;
	CGuiGroupBox	m_wndDepartmentAdmission;
	CGuiLabel		m_wndInDateLabel;
	CGuiDateTimeCtrl	m_wndInDate;
	CGuiLabel		m_wndAdmissionNoLabel;
	CGuiTextCtrl	m_wndAdmissionNo;
	CGuiLabel		m_wndExamineDiseaseLabel;
	CGuiTextCtrl	m_wndExamineDisease;
	CGuiLabel		m_wndAdmissionDiseaseLabel;
	CGuiComboBox	m_wndAdmissionDisease;
	CGuiLabel		m_wndMainDiseaseLabel;
	CGuiComboBox	m_wndMainDisease;
	CGuiLabel		m_wndRelationDiseaseLabel;
	CGuiTextCtrl	m_wndRelationDisease;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szInDate;
	CString	m_szAdmissionNo;
	CString	m_szExamineDisease;
	CString	m_szAdmissionDiseaseKey;
	CString	m_szMainDiseaseKey;
	CString	m_szRelationDisease;
	int		m_nIndex;
	CDbfMap	m_hms_clinical_recordTbl;
	CDbfMap	m_hms_treatment_recordTbl;


	//void			OnInDateChange(); 
	//void			OnInDateSetfocus(); 
	//void			OnInDateKillfocus(); 
	int			OnInDateCheckValue(); 
	//void			OnAdmissionNoChange(); 
	//void			OnAdmissionNoSetfocus(); 
	//void			OnAdmissionNoKillfocus(); 
	int			OnAdmissionNoCheckValue(); 
	//void			OnExamineDiseaseChange(); 
	//void			OnExamineDiseaseSetfocus(); 
	//void			OnExamineDiseaseKillfocus(); 
	int			OnExamineDiseaseCheckValue(); 
	void			OnAdmissionDiseaseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAdmissionDiseaseSelendok(); 
	//void			OnAdmissionDiseaseSetfocus(); 
	//void			OnAdmissionDiseaseKillfocus(); 
	long			OnAdmissionDiseaseLoadData(); 
	void			OnAdmissionDiseaseAddNew(); 
	void			OnMainDiseaseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMainDiseaseSelendok(); 
	//void			OnMainDiseaseSetfocus(); 
	//void			OnMainDiseaseKillfocus(); 
	long			OnMainDiseaseLoadData(); 
	void			OnMainDiseaseAddNew(); 
	//void			OnRelationDiseaseChange(); 
	//void			OnRelationDiseaseSetfocus(); 
	//void			OnRelationDiseaseKillfocus(); 
	int			OnRelationDiseaseCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSDepartmentAdmissionDialog(CWnd *pParent);
	~CHMSDepartmentAdmissionDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDepartmentAdmissionDialog(); 
	int OnEditHMSDepartmentAdmissionDialog(); 
	int OnDeleteHMSDepartmentAdmissionDialog(); 
	int OnSaveHMSDepartmentAdmissionDialog(); 
	int OnCancelHMSDepartmentAdmissionDialog(); 
	int OnHMSDepartmentAdmissionDialogListLoadData(); 
};
#endif
