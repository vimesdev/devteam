#ifndef HMSPATIENTDOCUMENTEX_H
#define HMSPATIENTDOCUMENTEX_H

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
#include "HMSOperationOrder_V2.h"
#include "HMSParaclinicalOrder_V2.h"
#include "HMSPrescription.h"

///////////////////////////////////////////
//HO SO KHAM BENH
///////////////////////////////////////////

class CHMSPatientDocumentEx : public CGuiView{
protected:
public:
	CHMSOperationOrder_V2		m_wndOperationOrder;
	CHMSParaclinicalOrder_V2	m_wndParaclinical;
	CHMSPrescription		m_wndPrescription;

	CGuiGroupBox	m_wndProfiles;
	CGuiGroupBox	m_wndPatientList;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYob;
	CGuiLabel		m_wndGenderLabel;
	CGuiTextCtrl	m_wndGender;
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
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndSearch;
	CGuiLabel		m_wndStatus;
	CGuiRadioButton	m_wndWatiing;
	CGuiRadioButton	m_wndPerformed;
	CGuiTabCtrl	m_wndExaminationTab;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	CString	m_szYob;
	CString	m_szGender;
	CString	m_szOccupation;
	CString	m_szAddress;
	CString	m_szWorkplace;
	CString	m_szObject;
	CString m_szObjectDesc;
	CString	m_szCardNo;
	CString	m_szFromDate;
	CString	m_szToDate;
	int	m_nPerformed;
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
	//void			OnYobChange(); 
	//void			OnYobSetfocus(); 
	//void			OnYobKillfocus(); 
	int			OnYobCheckValue(); 
	//void			OnGenderChange(); 
	//void			OnGenderSetfocus(); 
	//void			OnGenderKillfocus(); 
	int			OnGenderCheckValue(); 
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
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnSearchSelect(); 
	void			OnWatiingSelect(); 
	void			OnPerformedSelect(); 
	void			OnExaminationTabSelectChange(int nOld, int nNew); 
	CHMSPatientDocumentEx();
	~CHMSPatientDocumentEx();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientDocumentEx(); 
	int OnEditHMSPatientDocumentEx(); 
	int OnDeleteHMSPatientDocumentEx(); 
	int OnSaveHMSPatientDocumentEx(); 
	int OnCancelHMSPatientDocumentEx(); 
	int OnHMSPatientDocumentExListLoadData(); 
	void OnResizeLayout();
    //void OnViewEMR();
};
#endif
