#ifndef HMSFINDPATIENTINFORMATIONDIALOG_H
#define HMSFINDPATIENTINFORMATIONDIALOG_H

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
class CHMSFindPatientinformationDialog : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndthongtinnguoinha;
	CGuiLabel		m_wndFindDocumentLabel;
	CGuiNumberCtrl	m_wndFindDocument;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYob;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndMobileLabel;
	CGuiTextCtrl	m_wndMobile;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiTextCtrl	m_wndDepartment;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiListCtrl	m_wndRelativeList;
	CGuiButton		m_wndXemphieukham;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	long	m_nFindDocument;
	long    m_nDocumentNo;
	long	m_nDocno;
	int		m_ntreattime;
	CString	m_szPatientName;
	CString	m_szYob;
	CString	m_szSex;
	CString	m_szMobile;
	CString	m_szAddress;
	CString	m_szDepartment;
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
	//void			OnMobileChange(); 
	//void			OnMobileSetfocus(); 
	//void			OnMobileKillfocus(); 
	int			OnMobileCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnDepartmentChange(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	int			OnDepartmentCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect();
	void			OnEditSelect();
	long			OnRelativeListLoadData();
	void			OnXemphieukhamSelect();
	void			OnRelativeListSelectChange(int nOldItem, int nNewItem);
	CHMSFindPatientinformationDialog(CWnd *pParent);
	~CHMSFindPatientinformationDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFindPatientinformationDialog(); 
	int OnEditHMSFindPatientinformationDialog(); 
	int OnDeleteHMSFindPatientinformationDialog(); 
	int OnSaveHMSFindPatientinformationDialog(); 
	int OnCancelHMSFindPatientinformationDialog(); 
	int OnHMSFindPatientinformationDialogListLoadData(); 
};
#endif
