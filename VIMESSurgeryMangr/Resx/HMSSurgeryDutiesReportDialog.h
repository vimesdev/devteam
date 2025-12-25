#ifndef HMSSURGERYDUTIESREPORTDIALOG_H
#define HMSSURGERYDUTIESREPORTDIALOG_H

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
class CHMSSurgeryDutiesReportDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndReportParameters;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndDoctor1Label;
	CGuiComboBox	m_wndDoctor1;
	CGuiLabel		m_wndNurses1Label;
	CGuiComboBox	m_wndNurses1;
	CGuiLabel		m_wndNurses2Label;
	CGuiComboBox	m_wndNurses2;
	CGuiLabel		m_wndNurses3Label;
	CGuiComboBox	m_wndNurses3;
	CGuiLabel		m_wndNurses4Label;
	CGuiComboBox	m_wndNurses4;
	CGuiLabel		m_wndNurses5Label;
	CGuiComboBox	m_wndNurses5;
	CGuiButton		m_wndLoadReport;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndClose;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szDoctorKey;
	CString	m_szDoctor1Key;
	CString	m_szNurses1Key;
	CString	m_szNurses2Key;
	CString	m_szNurses3Key;
	CString	m_szNurses4Key;
	CString	m_szNurses5Key;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	void			OnDoctorAddNew(); 
	void			OnDoctor1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctor1Selendok(); 
	//void			OnDoctor1Setfocus(); 
	//void			OnDoctor1Killfocus(); 
	long			OnDoctor1LoadData(); 
	void			OnDoctor1AddNew(); 
	void			OnNurses1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses1Selendok(); 
	//void			OnNurses1Setfocus(); 
	//void			OnNurses1Killfocus(); 
	long			OnNurses1LoadData(); 
	void			OnNurses1AddNew(); 
	void			OnNurses2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses2Selendok(); 
	//void			OnNurses2Setfocus(); 
	//void			OnNurses2Killfocus(); 
	long			OnNurses2LoadData(); 
	void			OnNurses2AddNew(); 
	void			OnNurses3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses3Selendok(); 
	//void			OnNurses3Setfocus(); 
	//void			OnNurses3Killfocus(); 
	long			OnNurses3LoadData(); 
	void			OnNurses3AddNew(); 
	void			OnNurses4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses4Selendok(); 
	//void			OnNurses4Setfocus(); 
	//void			OnNurses4Killfocus(); 
	long			OnNurses4LoadData(); 
	void			OnNurses4AddNew(); 
	void			OnNurses5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNurses5Selendok(); 
	//void			OnNurses5Setfocus(); 
	//void			OnNurses5Killfocus(); 
	long			OnNurses5LoadData(); 
	void			OnNurses5AddNew(); 
	void			OnLoadReportSelect(); 
	void			OnExportSelect(); 
	void			OnCloseSelect(); 
	CHMSSurgeryDutiesReportDialog(CWnd *pParent);
	~CHMSSurgeryDutiesReportDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSurgeryDutiesReportDialog(); 
	int OnEditHMSSurgeryDutiesReportDialog(); 
	int OnDeleteHMSSurgeryDutiesReportDialog(); 
	int OnSaveHMSSurgeryDutiesReportDialog(); 
	int OnCancelHMSSurgeryDutiesReportDialog(); 
	int OnHMSSurgeryDutiesReportDialogListLoadData(); 
};
#endif
