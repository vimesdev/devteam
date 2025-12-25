#ifndef SysInsuranceView_H
#define SysInsuranceView_H

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
#include "GuiView.h"
#include "DbField.h"
#include "DetailPatientDialog.h"
#include "PatientListErrorDialog.h"
#include "HMSInsuranceCheckIn.h"

class CSysInsuranceView : public CGuiView
{
protected:
public:

	CHMSInsuranceCheckIn m_wndCheckIn;
	CGuiGroupBox	m_wndGrp1;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiRadioButton	m_wndOutPatient;
	CGuiRadioButton	m_wndInPatient;
	CGuiRadioButton	m_wndAll;
	CGuiButton		m_wndLoad;
	CGuiButton		m_wndExportXml;
	CGuiLabel		m_wndDocnoLabel;
	CGuiNumberCtrl	m_wndDocno;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndDeptIDLaBel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiListCtrl	m_wndListPatient;
	CGuiLabel		m_wndTotalLabel;
	CGuiTextCtrl	m_wndtotal;
	CGuiLabel		m_wndSendedLabel;
	CGuiTextCtrl	m_wndsended;
	CGuiLabel		m_wndCancedLabel;
	CGuiTextCtrl	m_wndCanced;
	CGuiButton		m_wndOpen;
	CGuiTextCtrl	m_wndDirectory;
	CGuiButton		m_wndbrowse;
	CGuiCheckBox	m_wndQNOject;
	CGuiCheckBox    m_wndBHBQP;
	CGuiCheckBox    m_wndBHXH;
	CGuiCheckBox	m_wndLoadFromTmpTable;
	CGuiCheckBox	m_wndShowDiff;
	CString	m_szFromDate;
	CString	m_szToDate;
	int	m_nOutPatient;
	int	m_nInPatient;
	int	m_nAll;
	long	m_nDocno;
	CString	m_szStatusKey;
	CString	m_szDeptKey;
	CString	m_szPatientName;
	CString	m_sztotal;
	CString	m_szsended;
	CString	m_szCanced;
	CString	m_szDirectory;
	CString m_szArrayDocno;
	bool	m_bImport;
	BOOL	m_bQNObject;
	BOOL	m_bBHBQP;
	BOOL	m_bBHXH;
	BOOL	m_bLoadFromTmpTable;
	BOOL	m_bShowDiff;
BOOL	m_bUseMaLK;
	CString m_szCaseInvoiceTreattime;
	void			OnOpenSelect(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnOutPatientSelect(); 
	void			OnInPatientSelect(); 
	void			OnAllSelect(); 
	void			OnLoadSelect(); 
	void			OnExportXmlSelect(); 
	//void			OnDocnoChange(); 
	//void			OnDocnoSetfocus(); 
	//void			OnDocnoKillfocus(); 
	int			OnDocnoCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	void			OnStatusAddNew(); 
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	void			OnDeptAddNew(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	long			OnListPatientLoadData(); 
	void			OnListPatientSelectChange(int nOldItem, int nNewItem); 
	void			OnListPatientDblClick(); 
	int			OnListPatientDeleteItem(); 
	//void			OntotalChange(); 
	//void			OntotalSetfocus(); 
	//void			OntotalKillfocus(); 
	int			OntotalCheckValue(); 
	//void			OnsendedChange(); 
	//void			OnsendedSetfocus(); 
	//void			OnsendedKillfocus(); 
	int			OnsendedCheckValue(); 
	//void			OnCancedChange(); 
	//void			OnCancedSetfocus(); 
	//void			OnCancedKillfocus(); 
	int			OnCancedCheckValue(); 
	//void			OnDirectoryChange(); 
	//void			OnDirectorySetfocus(); 
	//void			OnDirectoryKillfocus(); 
	int			OnDirectoryCheckValue(); 
	void			OnbrowseSelect();
	void			OnLoadFromTmpTableSelect();
	void			OnShowDiffSelect();
	CSysInsuranceView();
	~CSysInsuranceView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSysInsuranceView(); 
	int OnEditSysInsuranceView(); 
	int OnDeleteSysInsuranceView(); 
	int OnSaveSysInsuranceView(); 
	int OnCancelSysInsuranceView(); 
	int OnSysInsuranceViewListLoadData();
	int OnListChangeMonthQT();
	CString GetQueryString();
	CString GetQueryStringFromTable();
	int OnReCheckOut();
	int OnExportFromMaLK();

	int OnReCheckOutPatientError();

	int OnMarkAll();
	int OnUnMarkAll();
	int OnUnApprove();
	int OnExportFileTongHop();
	int OnDeleteDaTa();
	int OnExportBH();
	int OnCheckDocumentError();
	int OnCheckLoiCacHoSoDaTao();
	int OnExportDrugNotMap();
	int OnCheckDocumentWarning();
	int OnExport4210(bool bBQP = false);
	int XMLSigner(char szPath[MAX_PATH],CString szFileName);
	int OnExportFileTongHopNotSend();
	int OnImportListPatientFromExcel();
	int OnExportFromTable();
	int OnExportInsuranceReport();
	int	ExportPatientListToExcel();	
	int OnImportListPatientByMaLK();
};
#endif
