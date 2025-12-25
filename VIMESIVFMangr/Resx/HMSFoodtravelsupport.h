#ifndef HMSFOODTRAVELSUPPORT_H
#define HMSFOODTRAVELSUPPORT_H

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
class CHMSFoodtravelsupport : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiGroupBox	m_wndInformationdistribution;
	CGuiGroupBox	m_wndListfood;
	CGuiLabel		m_wndPatientnameLabel;
	CGuiTextCtrl	m_wndPatientname;
	CGuiLabel		m_wndAgeLabel;
	CGuiDateCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndDocnoLabel;
	CGuiNumberCtrl	m_wndDocno;
	CGuiLabel		m_wndDepidLabel;
	CGuiTextCtrl	m_wndDepid;
	CGuiLabel		m_wndInsuranceLabel;
	CGuiTextCtrl	m_wndInsurance;
	CGuiLabel		m_wndAdmitdateLabel;
	CGuiDateTimeCtrl	m_wndAdmitdate;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndDistanceLabel;
	CGuiTextCtrl	m_wndHomeToHospital;
	CGuiLabel		m_wndSourceLabel;
	CGuiComboBox	m_wndSource;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiListCtrl	m_wndListItem;
	CString	m_szPatientname;
	CString	m_szAge;
	CString	m_szSex;
	long	m_nDocno;
	CString	m_szDepid;
	CString	m_szInsurance;
	CString	m_szAdmitdate;
	CString	m_szAddress;
	CString	m_szHomeToHospital;
	CString	m_szSourceKey;
	CDbfMap	m_hms_foodtravelsupportTbl;
	CDbfMap	m_hms_patientTbl;
	CDbfMap	m_hms_treatment_recordTbl;
	//void			OnPatientnameChange(); 
	//void			OnPatientnameSetfocus(); 
	//void			OnPatientnameKillfocus(); 
	int			OnPatientnameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnDocnoChange(); 
	//void			OnDocnoSetfocus(); 
	//void			OnDocnoKillfocus(); 
	int			OnDocnoCheckValue(); 
	//void			OnDepidChange(); 
	//void			OnDepidSetfocus(); 
	//void			OnDepidKillfocus(); 
	int			OnDepidCheckValue(); 
	//void			OnInsuranceChange(); 
	//void			OnInsuranceSetfocus(); 
	//void			OnInsuranceKillfocus(); 
	int			OnInsuranceCheckValue(); 
	//void			OnAdmitdateChange(); 
	//void			OnAdmitdateSetfocus(); 
	//void			OnAdmitdateKillfocus(); 
	int			OnAdmitdateCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnHomeToHospitalChange(); 
	//void			OnHomeToHospitalSetfocus(); 
	//void			OnHomeToHospitalKillfocus(); 
	int			OnHomeToHospitalCheckValue(); 
	void			OnSourceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSourceSelendok(); 
	//void			OnSourceSetfocus(); 
	//void			OnSourceKillfocus(); 
	long			OnSourceLoadData(); 
	void			OnSourceAddNew(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	long			OnListItemLoadData(); 
	void			OnListItemSelectChange(int nOldItem, int nNewItem); 
	void			OnListItemDblClick(); 
	int			OnListItemDeleteItem(); 
	CHMSFoodtravelsupport(CWnd *pParent);
	~CHMSFoodtravelsupport();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFoodtravelsupport(); 
	int OnEditHMSFoodtravelsupport(); 
	int OnDeleteHMSFoodtravelsupport(); 
	int OnSaveHMSFoodtravelsupport(); 
	int OnCancelHMSFoodtravelsupport(); 
	int OnHMSFoodtravelsupportListLoadData(); 
};
#endif
