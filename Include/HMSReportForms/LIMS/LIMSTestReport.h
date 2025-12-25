#ifndef LIMSTESTREPORT_H
#define LIMSTESTREPORT_H

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
class CLIMSTestReport : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiListCtrl	m_wndTestGroup;
	CGuiCheckBox	m_wndManualInput;
	CGuiCheckBox	m_wndOutPatient;
	CGuiCheckBox	m_wndInPatient;
	CGuiCheckBox	m_wndAllHospitals;
	CGuiListCtrl	m_wndMachine;
	CGuiButton		m_wndWaitingLabel;
	CGuiNumberCtrl	m_wndWaitingtest;
	CGuiButton		m_wndRunningLabel;
	CGuiNumberCtrl	m_wndRunningtest;
	CGuiButton		m_wndPerformedLabel;
	CGuiNumberCtrl	m_wndPerformedtest;
	CGuiButton		m_wndUploadedlabel;
	CGuiNumberCtrl	m_wndUploadedtest;
	CGuiButton		m_wndRunningMan;
	CGuiButton		m_wndTotalLabel;
	CGuiNumberCtrl	m_wndTotalTest;	
	CGuiButton		m_wndExportByDocno;
	CGuiButton		m_wndExportByOrder;
	CString	m_szFromDate;
	CString	m_szToDate;
	BOOL	m_bManualInput;
	BOOL	m_bOutPatient;
	BOOL	m_bInPatient;
	BOOL	m_bAllHospitals;
	CString	m_szWaitingtest;
	CString	m_szRunningtest;
	CString	m_szPerformedtest;
	CString	m_szUploadedtest;
	CString	m_szTotalTest;
	CString	m_szUserKey;
	CString	m_szPerformDeptKey;
	long	m_nTotalWaiting;
	long	m_nTotalRunning;
	long	m_nTotalPerformed;
	long	m_nTotalUploaded;
	long	m_nTotal;
	int			OnFromDateCheckValue();
	int			OnToDateCheckValue();
	long			OnTestGroupLoadData(); 
	void			OnTestGroupSelectChange(int nOldItem, int nNewItem); 
	void			OnTestGroupDblClick(); 
	int			OnTestGroupDeleteItem();
	void			OnManualInputSelect(); 
	void			OnOutPatientSelect(); 
	void			OnInPatientSelect(); 
	void			OnAllHospitalsSelect(); 
	void			OnWaitingLabelSelect(); 
	//void			OnWaitingtestChange(); 
	//void			OnWaitingtestSetfocus(); 
	//void			OnWaitingtestKillfocus(); 
	int			OnWaitingtestCheckValue(); 
	void			OnRunningLabelSelect(); 
	//void			OnRunningtestChange(); 
	//void			OnRunningtestSetfocus(); 
	//void			OnRunningtestKillfocus(); 
	int			OnRunningtestCheckValue(); 
	void			OnPerformedLabelSelect(); 
	//void			OnPerformedtestChange(); 
	//void			OnPerformedtestSetfocus(); 
	//void			OnPerformedtestKillfocus(); 
	int			OnPerformedtestCheckValue(); 
	void			OnUploadedlabelSelect();
	int			OnTotalTestCheckValue(); 
	void			OnTotalLabelSelect(); 
	//void			OnUploadedtestChange(); 
	//void			OnUploadedtestSetfocus(); 
	//void			OnUploadedtestKillfocus(); 
	int			OnUploadedtestCheckValue(); 
	void			OnRunningManSelect();
	long			OnMachineLoadData(); 
	void			OnMachineSelectChange(int nOldItem, int nNewItem); 
	void			OnMachineDblClick(); 
	int			OnMachineDeleteItem(); 
	void			OnExportByDocnoSelect(); 
	void			OnExportByOrderSelect(); 

	CLIMSTestReport(CWnd *pParent);
	~CLIMSTestReport();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddLIMSTestReport(); 
	int OnEditLIMSTestReport(); 
	int OnDeleteLIMSTestReport(); 
	int OnSaveLIMSTestReport(); 
	int OnCancelLIMSTestReport(); 
	int OnLIMSTestReportListLoadData();
	int OnMachineListCheckAll();
	int OnMachineListUnCheckAll();
};
#endif