#ifndef HMSINFERTILITYINFO_H
#define HMSINFERTILITYINFO_H

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
class CHMSInfertilityInfo : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndProfiles;
	CGuiLabel		m_wndWifeNameLabel;
	CGuiTextCtrl	m_wndWifeName;
	CGuiLabel		m_wndWifeDOBLabel;
	CGuiNumberCtrl	m_wndWifeDOB;
	CGuiLabel		m_wndWifeDocumentNoLabel;
	CGuiNumberCtrl	m_wndWDocumentNo;
	CGuiButton		m_wndWFind;
	CGuiLabel		m_wndWifeJobLabel;
	CGuiComboBox	m_wndWifeJob;
	CGuiLabel		m_wndWifePlaceOfOriginLabel;
	CGuiComboBox	m_wndWifePlaceOfOrigin;
	CGuiLabel		m_wndHusNameLabel;
	CGuiTextCtrl	m_wndHusName;
	CGuiLabel		m_wndHusDOBLabel;
	CGuiNumberCtrl	m_wndHusDOB;
	CGuiLabel		m_wndHDocumentNoLabel;
	CGuiNumberCtrl	m_wndHDocumentNo;
	CGuiButton		m_wndHFind;
	CGuiLabel		m_wndHusJobLabel;
	CGuiComboBox	m_wndHusJob;
	CGuiLabel		m_wndHusPlaceOfOriginLabel;
	CGuiComboBox	m_wndHusPlaceOfOrigin;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndMarriedYearLabel;
	CGuiNumberCtrl	m_wndMarriedYear;
	CGuiCheckBox	m_wndArmyObject;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szWifeName;
	long	m_nWifeDOB;
	CString	m_szWifeJob;
	CString	m_szWifeJobKey;
	CString	m_szWifePlaceOfOriginKey;
	CString	m_szHusName;
	long	m_nHusDOB;
	CString	m_szHusJob;
	CString	m_szHusJobKey;
	CString	m_szHusPlaceOfOriginKey;
	CString	m_szAddress;
	CString	m_szPhone;
	long	m_nMarriedYear;
	long	m_nDocumentNo;
	long	m_nPatientNo;
	BOOL	m_bArmyObject;
	CString m_szBirthdate;
	CString m_szGender;
	CString m_szdtlAddress;
	CString m_szTelephone;
	long		m_nYob;
	CString	m_szRefName;
	CString m_szRefJob;
	CString m_szPatientName;
	CWnd * m_pWndInfertilityInfo;
	long	m_nWDocumentNo;
	long	m_nHDocumentNo;

	//void			OnWifeNameChange(); 
	//void			OnWifeNameSetfocus(); 
	//void			OnWifeNameKillfocus(); 
	int			OnWifeNameCheckValue(); 
	//void			OnWifeDOBChange(); 
	//void			OnWifeDOBSetfocus(); 
	//void			OnWifeDOBKillfocus(); 
	int			OnWifeDOBCheckValue(); 
	//void			OnWDocumentNoChange(); 
	//void			OnWDocumentNoSetfocus(); 
	//void			OnWDocumentNoKillfocus(); 
	int			OnWDocumentNoCheckValue(); 
	void			OnWFindSelect(); 
	void			OnWifeJobSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWifeJobSelendok(); 
	//void			OnWifeJobSetfocus(); 
	//void			OnWifeJobKillfocus(); 
	long			OnWifeJobLoadData(); 
	//void			OnWifeJobAddNew(); 
	void			OnWifePlaceOfOriginSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWifePlaceOfOriginSelendok(); 
	//void			OnWifePlaceOfOriginSetfocus(); 
	//void			OnWifePlaceOfOriginKillfocus(); 
	long			OnWifePlaceOfOriginLoadData(); 
	//void			OnWifePlaceOfOriginAddNew(); 
	//void			OnHusNameChange(); 
	//void			OnHusNameSetfocus(); 
	//void			OnHusNameKillfocus(); 
	int			OnHusNameCheckValue(); 
	//void			OnHusDOBChange(); 
	//void			OnHusDOBSetfocus(); 
	//void			OnHusDOBKillfocus(); 
	int			OnHusDOBCheckValue(); 
	//void			OnHDocumentNoChange(); 
	//void			OnHDocumentNoSetfocus(); 
	//void			OnHDocumentNoKillfocus(); 
	int			OnHDocumentNoCheckValue(); 
	void			OnHFindSelect();
	void			OnHusJobSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHusJobSelendok(); 
	//void			OnHusJobSetfocus(); 
	//void			OnHusJobKillfocus(); 
	long			OnHusJobLoadData(); 
	//void			OnHusJobAddNew(); 
	void			OnHusPlaceOfOriginSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHusPlaceOfOriginSelendok(); 
	//void			OnHusPlaceOfOriginSetfocus(); 
	//void			OnHusPlaceOfOriginKillfocus(); 
	long			OnHusPlaceOfOriginLoadData(); 
	//void			OnHusPlaceOfOriginAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnMarriedYearChange(); 
	//void			OnMarriedYearSetfocus(); 
	//void			OnMarriedYearKillfocus(); 
	int			OnMarriedYearCheckValue(); 
	void			OnArmyObjectSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSInfertilityInfo();
	~CHMSInfertilityInfo();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSInfertilityInfo(); 
	int OnEditHMSInfertilityInfo(); 
	int OnDeleteHMSInfertilityInfo(); 
	int OnSaveHMSInfertilityInfo(); 
	int OnCancelHMSInfertilityInfo(); 
	int OnHMSInfertilityInfoListLoadData(); 
	void OnPrint();
	void OnGetGenderDOB();
};
#endif
