#ifndef HMSCOVID19VACCININFORDIALOG_H
#define HMSCOVID19VACCININFORDIALOG_H

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
class CHMSCovid19VaccinInforDialog : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndDescGroupBox;
	CGuiCheckBox	m_wndTheFirst;
	CGuiComboBox	m_wndVaccine1;
	CGuiLabel		m_wndVaccine2Label;
	CGuiLabel		m_wndVaccine1Label;
	CGuiCheckBox	m_wndTheSecond;
	CGuiComboBox	m_wndVaccine2;
	CGuiLabel		m_wndSetupVaccineLabel;
	CGuiLabel		m_wndDate1Label;
	CGuiDateCtrl	m_wndFirstDate;	
	CGuiLabel		m_wndDate2Label;
	CGuiDateCtrl	m_wndSecondDate;
	CGuiCheckBox	m_wndThe3th;
	CGuiLabel		m_wndVaccine3Label;
	CGuiComboBox	m_wndVaccine3;
	CGuiLabel		m_wndDate3Label;
	CGuiDateCtrl	m_wndDate3;
	CGuiCheckBox	m_wndThe4th;
	CGuiComboBox	m_wndVaccine4;
	CGuiLabel		m_wndVaccine4Label;
	CGuiLabel		m_wndDate4Label;
	CGuiDateCtrl	m_wndDate4;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndSetupDrugandMaterial;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndPrintnumberLabel;
	CGuiNumberCtrl	m_wndPrintnumber;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndActive;
	
	BOOL	m_bTheFirst;
	CString	m_szVaccine1Key;
	BOOL	m_bTheSecond;
	CString	m_szVaccine2Key;

	CString	m_szFirstDate;	
	CString	m_szSecondDate;
	BOOL	m_bThe3th;
	CString	m_szVaccine3Key;
	CString	m_szDate3;
	BOOL	m_bThe4th;
	CString	m_szVaccine4Key;
	CString	m_szDate4;
	long	m_nPrintnumber;
	BOOL	m_bActive;
	int	m_nActive2;
	int	m_nActive3;
	int	m_nActive4;
	
	void			OnTheFirstSelect();	
	void			OnVaccine1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVaccine1Selendok(); 
	//void			OnVaccine1Setfocus(); 
	//void			OnVaccine1Killfocus(); 
	long			OnVaccine1LoadData(); 
	//void			OnVaccine1AddNew(); 
	void			OnTheSecondSelect(); 
	void			OnVaccine2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVaccine2Selendok(); 
	//void			OnVaccine2Setfocus(); 
	//void			OnVaccine2Killfocus(); 
	long			OnVaccine2LoadData(); 
	//void			OnVaccine2AddNew(); 
	void			OnThe3thSelect(); 
	void			OnVaccine3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVaccine3Selendok(); 	
	long			OnVaccine3LoadData();
	int			    OnDate3CheckValue(); 
	
	void			OnThe4thSelect(); 
	void			OnVaccine4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVaccine4Selendok(); 	
	long			OnVaccine4LoadData();
	int			    OnDate4CheckValue();

	void			OnUpdateSelect();
	void			OnSaveSelect(); 
	void			OnCancelSelect();
	void			OnPrintSelect();
	void			OnCloseSelect();
	void			OnActiveSelect();
	void			OnPrintVer1(bool m_bPreview, bool m_bDirect);
	void			OnPrintVer2(bool m_bPreview, bool m_bDirect);
	
	CHMSCovid19VaccinInforDialog(CWnd *pParent);
	~CHMSCovid19VaccinInforDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	void OnSetupVaccineSelect();
	void OnSetupDrugandMaterial();
	int			OnFirstDateCheckValue();
	int			OnSecondDateCheckValue(); 
	int SetMode(int nMode);
	int OnAddHMSCovid19VaccinInforDialog(); 
	int OnEditHMSCovid19VaccinInforDialog(); 
	int OnDeleteHMSCovid19VaccinInforDialog(); 
	int OnSaveHMSCovid19VaccinInforDialog(); 
	int OnCancelHMSCovid19VaccinInforDialog(); 
	int OnHMSCovid19VaccinInforDialogListLoadData(); 
};
#endif
