#ifndef HMSEXTRAPATIENTPACKAGEDIALOG_H
#define HMSEXTRAPATIENTPACKAGEDIALOG_H

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
class CHMSExtraPatientPackageDialog : public CGuiDialog{
protected:
	
public:
	long		m_nDocumentNo;

	CGuiGroupBox	m_wndPackageInformation;
	CGuiLabel		m_wndFindDocumentLabel;
	CGuiNumberCtrl	m_wndFindDocument;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYob;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiTextCtrl	m_wndDepartment;
	CGuiLabel		m_wndPackageLabel;
	CGuiComboBox	m_wndPackage;
	CGuiLabel		m_wndBeginDateLabel;
	CGuiDateTimeCtrl	m_wndBeginDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateTimeCtrl	m_wndEndDate;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiButton		m_wndBedDiagram;
	CGuiTextCtrl	m_wndBed;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	long	m_nFindDocument;
	CString	m_szPatientName;
	CString	m_szYob;
	CString	m_szSex;
	CString	m_szAddress;
	CString	m_szDepartment;
	CString	m_szPackageKey;
	CString	m_szBeginDate;
	CString	m_szEndDate;
	long	m_nQuantity;
	CString	m_szBed;
	CString	m_szDescription;
	//void			OnFindDocumentChange(); 
	//void			OnFindDocumentSetfocus(); 
	//void			OnFindDocumentKillfocus(); 
	int			OnFindDocumentCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYobChange(); 
	//void			OnYobSetfocus(); 
	//void			OnYobKillfocus(); 
	int			OnYobCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnDepartmentChange(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	int			OnDepartmentCheckValue(); 
	void			OnPackageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPackageSelendok(); 
	//void			OnPackageSetfocus(); 
	//void			OnPackageKillfocus(); 
	long			OnPackageLoadData(); 
	//void			OnPackageAddNew(); 
	//void			OnBeginDateChange(); 
	//void			OnBeginDateSetfocus(); 
	//void			OnBeginDateKillfocus(); 
	int			OnBeginDateCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnBedDiagramSelect(); 
	//void			OnBedChange(); 
	//void			OnBedSetfocus(); 
	//void			OnBedKillfocus(); 
	int			OnBedCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSExtraPatientPackageDialog(CWnd *pParent, int nMode);
	~CHMSExtraPatientPackageDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExtraPatientPackageDialog(); 
	int OnEditHMSExtraPatientPackageDialog(); 
	int OnDeleteHMSExtraPatientPackageDialog(); 
	int OnSaveHMSExtraPatientPackageDialog(); 
	int OnCancelHMSExtraPatientPackageDialog(); 
	int OnHMSExtraPatientPackageDialogListLoadData(); 
};
#endif
