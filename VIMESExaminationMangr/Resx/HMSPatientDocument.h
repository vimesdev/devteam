#ifndef HMSPATIENTDOCUMENT_H
#define HMSPATIENTDOCUMENT_H

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
class CHMSPatientDocument : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndProfiles;
	CGuiGroupBox	m_wndTreatmentInformation;
	CGuiGroupBox	m_wndExaminationReceipts;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndOccupationLabel;
	CGuiTextCtrl	m_wndOccupation;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndWorkplaceLabel;
	CGuiTextCtrl	m_wndWorkplace;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiTextCtrl	m_wndCardNo;
	CGuiButton		m_wndCardInfoBtn;
	CGuiDateCtrl	m_wndExamDate;
	CGuiLabel		m_wndExamDateLabel;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndICDLabel;
	CGuiComboBox	m_wndICD;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiLabel		m_wndSuggestionLabel;
	CGuiComboBox	m_wndSuggestion;
	CGuiLabel		m_wndInDeptLabel;
	CGuiComboBox	m_wndInDept;
	CGuiLabel		m_wndHospitalLabel;
	CGuiComboBox	m_wndHospital;
	CGuiTabCtrl	m_wndExaminationTab;
	CGuiListCtrl	m_wndExamList;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szOccupation;
	CString	m_szAddress;
	CString	m_szWorkplace;
	CString	m_szObject;
	CString	m_szCardNo;
	CString	m_szExamDate;
	CString	m_szStatus;
	CString	m_szICDKey;
	CString	m_szConclusion;
	CString	m_szSuggestionKey;
	CString	m_szInDeptKey;
	CString	m_szHospitalKey;
	//void			OnPatientNoChange(); 
	//void			OnPatientNoSetfocus(); 
	//void			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnOccupationChange(); 
	//void			OnOccupationSetfocus(); 
	//void			OnOccupationKillfocus(); 
	int			OnOccupationCheckValue(); 
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
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	void			OnCardInfoBtnSelect(); 
	//void			OnExamDateChange(); 
	//void			OnExamDateSetfocus(); 
	//void			OnExamDateKillfocus(); 
	int			OnExamDateCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	void			OnICDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnICDSelendok(); 
	//void			OnICDSetfocus(); 
	//void			OnICDKillfocus(); 
	long			OnICDLoadData(); 
	//void			OnICDAddNew(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	void			OnSuggestionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSuggestionSelendok(); 
	//void			OnSuggestionSetfocus(); 
	//void			OnSuggestionKillfocus(); 
	long			OnSuggestionLoadData(); 
	//void			OnSuggestionAddNew(); 
	void			OnInDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnInDeptSelendok(); 
	//void			OnInDeptSetfocus(); 
	//void			OnInDeptKillfocus(); 
	long			OnInDeptLoadData(); 
	//void			OnInDeptAddNew(); 
	void			OnHospitalSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHospitalSelendok(); 
	//void			OnHospitalSetfocus(); 
	//void			OnHospitalKillfocus(); 
	long			OnHospitalLoadData(); 
	//void			OnHospitalAddNew(); 
	void			OnExaminationTabSelectChange(int nOld, int nNew); 
	long			OnExamListLoadData(); 
	void			OnExamListSelectChange(int nOldItem, int nNewItem); 
	void			OnExamListDblClick(); 
	int			OnExamListDeleteItem(); 
	CHMSPatientDocument();
	~CHMSPatientDocument();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientDocument(); 
	int OnEditHMSPatientDocument(); 
	int OnDeleteHMSPatientDocument(); 
	int OnSaveHMSPatientDocument(); 
	int OnCancelHMSPatientDocument(); 
	int OnHMSPatientDocumentListLoadData(); 
};
#endif
