#ifndef SYSPAPERVIEW_H
#define SYSPAPERVIEW_H

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
class CSysPaperView : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndGrp1;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiRadioButton	m_wndDischargeSheet;
	CGuiRadioButton	m_wndBirthCertificate;
	CGuiRadioButton	m_wndInsuranceLeave;
	CGuiButton		m_wndLoad;
	CGuiButton		m_wndExportXml;
	CGuiListCtrl	m_wndListPatient;
	CGuiButton		m_wndOpen;
	CGuiTextCtrl	m_wndDirectory;
	CGuiButton		m_wndbrowse;
	CGuiRadioButton	m_wndMaternityLeave;
	CGuiRadioButton	m_wndProfileSumery;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CString	m_szFromDate;
	CString	m_szToDate;
	int	m_nDischargeSheet;
	int	m_nBirthCertificate;
	int	m_nInsuranceLeave;
	CString	m_szDirectory;
	int	m_nMaternityLeave;
	int	m_nProfileSumery;
	CString	m_szStatusKey;
	CString m_szType;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnDischargeSheetSelect(); 
	void			OnBirthCertificateSelect(); 
	void			OnInsuranceLeaveSelect(); 
	void			OnLoadSelect(); 
	void			OnExportXmlSelect(); 
	long			OnListPatientLoadData(); 
	void			OnListPatientSelectChange(int nOldItem, int nNewItem); 
	void			OnListPatientDblClick(); 
	int			OnListPatientDeleteItem(); 
	void			OnOpenSelect(); 
	//void			OnDirectoryChange(); 
	//void			OnDirectorySetfocus(); 
	//void			OnDirectoryKillfocus(); 
	int			OnDirectoryCheckValue(); 
	void			OnbrowseSelect(); 
	void			OnMaternityLeaveSelect(); 
	void			OnProfileSumerySelect(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	CSysPaperView();
	~CSysPaperView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSysPaperView(); 
	int OnEditSysPaperView(); 
	int OnDeleteSysPaperView(); 
	int OnSaveSysPaperView(); 
	int OnCancelSysPaperView(); 
	int OnSysPaperViewListLoadData();
	int OnMarkAll();
	int OnUnMarkAll();
};
#endif
