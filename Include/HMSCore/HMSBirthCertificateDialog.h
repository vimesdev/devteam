#ifndef HMSBIRTHCERTIFICATEDIALOG_H
#define HMSBIRTHCERTIFICATEDIALOG_H

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
class AFX_EXT_CLASS CHMSBirthCertificateDialog : public CGuiDialog
{
protected:
public:
	CGuiLabel		m_wndIdxLabel;
	CGuiNumberCtrl	m_wndIdx;
	CGuiLabel		m_wndBookNoLabel;
	CGuiNumberCtrl	m_wndBookNo;
	CGuiLabel		m_wndIndexLabel;
	CGuiNumberCtrl	m_wndIndex;
	CGuiGroupBox	m_wndBirthCertificateInfo;
	CGuiLabel		m_wndMaGCSLabel;
	CGuiTextCtrl	m_wndMaGCS;
	CGuiLabel		m_wndLancapLabel;
	CGuiComboBox	m_wndLancap;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYearOfBirthLabel;
	CGuiNumberCtrl	m_wndYearOfBirth;
	CGuiLabel		m_wndEthnicLabel;
	CGuiComboBox	m_wndEthnic;
	CGuiLabel		m_wndBHYTLabel;
	CGuiTextCtrl	m_wndBHYT;
	CGuiLabel		m_wndIDCardPassportLabel;
	CGuiTextCtrl	m_wndIDCard;
	CGuiLabel		m_wndNgaycapLabel;
	CGuiDateCtrl	m_wndNgaycap;
	CGuiLabel		m_wndPlaceRegistrationLabel;
	CGuiTextCtrl	m_wndPlaceRegistration;
	CGuiLabel		m_wndBirthTimeLabel;
	CGuiDateTimeCtrl	m_wndBirthTime;
	CGuiLabel		m_wndBirthPlaceLabel;
	CGuiTextCtrl	m_wndBirthPlace;
	CGuiLabel		m_wndNumberChildLabel;
	CGuiNumberCtrl	m_wndNumberChild;
	CGuiLabel		m_wndSexOfChildLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndWeightLabel;
	CGuiNumberCtrl	m_wndWeight;
	CGuiLabel		m_wndHealthStatusLabel;
	CGuiTextCtrl	m_wndHealthStatus;
	CGuiLabel		m_wndIntendedNameLabel;
	CGuiTextCtrl	m_wndIntendedName;

	CGuiLabel		m_wndTenChaLabel;
	CGuiTextCtrl	m_wndTenCha;


	CGuiLabel		m_wndMidwifeLabel;
	CGuiComboBox	m_wndMidwife;
	CGuiLabel		m_wndVoterLabel;
	CGuiComboBox	m_wndVoter;
	CGuiCheckBox	m_wndSurgery;
	CGuiCheckBox	m_wndUnder32Weeks;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndInvongdeotayme;
	CGuiLabel		m_wndNoitamtrulabel;
	CGuiTextCtrl	m_wndNoitamtru;
	long	m_nIdx;
	long	m_nBookNo;
	long	m_nIndex;
	CString	m_szMaGCS;
	CString	m_szLancapKey;
	CString	m_szPatientName;
	long	m_nYearOfBirth;
	CString	m_szEthnicKey;
	CString	m_szBHYT;
	CString	m_szIDCard;
	CString	m_szNgaycap;
	CString	m_szPlaceRegistration;
	CString	m_szBirthTime;
	CString	m_szBirthPlace;
	CString m_szTencha;
	long	m_nNumberChild;
	CString	m_szSexKey;
	double	m_nWeight;
	CString	m_szHealthStatus;
	CString	m_szIntendedName;
	CString	m_szMidwifeKey;
	CString	m_szVoterKey;
	BOOL	m_bSurgery;
	BOOL	m_bUnder32Weeks;
	long	m_nDocNo;
	long	m_nID;
    CString m_szissignature;
	CString	m_szAddress;
	CString	m_szNoitamtru;
	CDbfMap m_hms_birthcertificateTbl;
	//void			OnIdxChange(); 
	//void			OnIdxSetfocus(); 
	//void			OnIdxKillfocus(); 
	int			OnIdxCheckValue(); 
	//void			OnBookNoChange(); 
	//void			OnBookNoSetfocus(); 
	//void			OnBookNoKillfocus(); 
	int			OnBookNoCheckValue(); 
	//void			OnIndexChange(); 
	//void			OnIndexSetfocus(); 
	//void			OnIndexKillfocus(); 
	int			OnIndexCheckValue(); 
	//void			OnMaGCSChange(); 
	//void			OnMaGCSSetfocus(); 
	//void			OnMaGCSKillfocus(); 
	int			OnMaGCSCheckValue(); 
	void			OnLancapSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLancapSelendok(); 
	//void			OnLancapSetfocus(); 
	//void			OnLancapKillfocus(); 
	long			OnLancapLoadData(); 
	//void			OnLancapAddNew(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYearOfBirthChange(); 
	//void			OnYearOfBirthSetfocus(); 
	//void			OnYearOfBirthKillfocus(); 
	int			OnYearOfBirthCheckValue(); 
	void			OnEthnicSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEthnicSelendok(); 
	//void			OnEthnicSetfocus(); 
	//void			OnEthnicKillfocus(); 
	long			OnEthnicLoadData(); 
	//void			OnEthnicAddNew(); 
	//void			OnBHYTChange(); 
	//void			OnBHYTSetfocus(); 
	//void			OnBHYTKillfocus(); 
	int			OnBHYTCheckValue(); 
	//void			OnIDCardChange(); 
	//void			OnIDCardSetfocus(); 
	//void			OnIDCardKillfocus(); 
	int			OnIDCardCheckValue(); 
	//void			OnNgaycapChange(); 
	//void			OnNgaycapSetfocus(); 
	//void			OnNgaycapKillfocus(); 
	int			OnNgaycapCheckValue(); 
	//void			OnPlaceRegistrationChange(); 
	//void			OnPlaceRegistrationSetfocus(); 
	//void			OnPlaceRegistrationKillfocus(); 
	int			OnPlaceRegistrationCheckValue(); 
	//void			OnBirthTimeChange(); 
	//void			OnBirthTimeSetfocus(); 
	//void			OnBirthTimeKillfocus(); 
	int			OnBirthTimeCheckValue(); 
	//void			OnBirthPlaceChange(); 
	//void			OnBirthPlaceSetfocus(); 
	//void			OnBirthPlaceKillfocus(); 
	int			OnBirthPlaceCheckValue(); 
	//void			OnNumberChildChange(); 
	//void			OnNumberChildSetfocus(); 
	//void			OnNumberChildKillfocus(); 
	int			OnNumberChildCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok();
	void			OnInvongdeotaymeSelect();
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	//void			OnWeightChange(); 
	//void			OnWeightSetfocus(); 
	//void			OnWeightKillfocus(); 
	int			OnWeightCheckValue(); 
	//void			OnHealthStatusChange(); 
	//void			OnHealthStatusSetfocus(); 
	//void			OnHealthStatusKillfocus(); 
	int			OnHealthStatusCheckValue(); 
	//void			OnIntendedNameChange(); 
	//void			OnIntendedNameSetfocus(); 
	//void			OnIntendedNameKillfocus(); 
	int			OnIntendedNameCheckValue(); 
	int			OnTenChaCheckValue(); 
	void			OnMidwifeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMidwifeSelendok(); 
	//void			OnMidwifeSetfocus(); 
	//void			OnMidwifeKillfocus(); 
	long			OnMidwifeLoadData(); 
	//void			OnMidwifeAddNew(); 
	void			OnVoterSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVoterSelendok(); 
	//void			OnVoterSetfocus(); 
	//void			OnVoterKillfocus(); 
	long			OnVoterLoadData(); 
	//void			OnVoterAddNew(); 
	void			OnSurgerySelect(); 
	void			OnUnder32WeeksSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect();
	void			OnAddSelect();
	void			OnUpdatePatientInforSelect();
	int			OnNoitamtruCheckValue(); 
	CHMSBirthCertificateDialog(CWnd *pParent);
	~CHMSBirthCertificateDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBirthCertificateDialog(); 
	int OnEditHMSBirthCertificateDialog(); 
	int OnDeleteHMSBirthCertificateDialog(); 
	int OnSaveHMSBirthCertificateDialog(); 
	int OnCancelHMSBirthCertificateDialog(); 
	int OnHMSBirthCertificateDialogListLoadData(); 
	void OnListPrintBracelet();
	void OnInVongDeoTay(int nIdx = 1);
};
#endif