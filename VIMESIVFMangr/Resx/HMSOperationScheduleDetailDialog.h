#ifndef HMSOPERATIONSCHEDULEDETAILDIALOG_H
#define HMSOPERATIONSCHEDULEDETAILDIALOG_H

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
class CHMSOperationScheduleDetailDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndSurgeryInfor;
	CGuiLabel		m_wndPerformPlaceLabel;
	CGuiComboBox	m_wndPerformPlace;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndPerformDeptLabel;
	CGuiComboBox	m_wndPerformDept;
	CGuiLabel		m_wndPerformDateLabel;
	CGuiDateTimeCtrl	m_wndPerformDate;
	CGuiLabel		m_wndTableLabel;
	CGuiComboBox	m_wndTable;
	CGuiLabel		m_wndIndexLabel;
	CGuiNumberCtrl	m_wndIndex;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndSurgeryNameLabel;
	CGuiComboBox	m_wndSurgeryName;
	CGuiLabel		m_wndCommentLabel;
	CGuiTextCtrl	m_wndComment;
	CGuiLabel		m_wndBeforeSurgeryLabel;
	CGuiComboBox	m_wndBeforeSurgery;
	CGuiLabel		m_wndAntibioticBackup;
	CGuiRadioButton	m_wndYes;
	CGuiRadioButton	m_wndNo;
	CGuiLabel		m_wndAnesthesiaMethodLabel;
	CGuiComboBox	m_wndAnesthesiaMethod;
	CGuiLabel		m_wndSurgeonLabel;
	CGuiComboBox	m_wndSurgeon;
	CGuiLabel		m_wndAssistLabel;
	CGuiComboBox	m_wndAssist;
	CGuiLabel		m_wndAssist2Label;
	CGuiComboBox	m_wndAssist2;
	CGuiLabel		m_wndBeginTimeLabel;
	CGuiDateTimeCtrl	m_wndBeginTime;
	CGuiLabel		m_wndEndTimeLabel;
	CGuiDateTimeCtrl	m_wndEndTime;
	CGuiLabel		m_wndTGDukienLabel;
	CGuiTextCtrl	m_wndTGDukien;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndRateLabel;
	CGuiComboBox	m_wndRate;
	CGuiLabel		m_wndMachineLabel;
	CGuiComboBox	m_wndMachine;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndAddDrugMaterial;
	CString	m_szPerformPlaceKey;
	CString	m_szOrderDate;
	CString	m_szPerformDeptKey;
	CString	m_szPerformDate;
	CString	m_szTableKey;
	long	m_nIndex;
	CString	m_szDiagnostic;
	CString	m_szSurgeryNameKey;
	CString	m_szComment;
	CString	m_szBeforeSurgeryKey;
	int	m_nYes;
	int	m_nNo;
	CString	m_szAnesthesiaMethodKey;
	CString	m_szSurgeonKey;
	CString	m_szAssistKey;
	CString	m_szAssist2Key;
	CString	m_szBeginTime;
	CString	m_szEndTime;
	CString	m_szTGDukien;
	long	m_nQuantity;
	CString	m_szRateKey;
	CString	m_szMachineKey;
	void			OnPerformPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformPlaceSelendok(); 
	//void			OnPerformPlaceSetfocus(); 
	//void			OnPerformPlaceKillfocus(); 
	long			OnPerformPlaceLoadData(); 
	//void			OnPerformPlaceAddNew(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformDeptSelendok(); 
	//void			OnPerformDeptSetfocus(); 
	//void			OnPerformDeptKillfocus(); 
	long			OnPerformDeptLoadData(); 
	//void			OnPerformDeptAddNew(); 
	//void			OnPerformDateChange(); 
	//void			OnPerformDateSetfocus(); 
	//void			OnPerformDateKillfocus(); 
	int			OnPerformDateCheckValue(); 
	void			OnTableSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTableSelendok(); 
	//void			OnTableSetfocus(); 
	//void			OnTableKillfocus(); 
	long			OnTableLoadData(); 
	//void			OnTableAddNew(); 
	//void			OnIndexChange(); 
	//void			OnIndexSetfocus(); 
	//void			OnIndexKillfocus(); 
	int			OnIndexCheckValue(); 
	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	void			OnSurgeryNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSurgeryNameSelendok(); 
	//void			OnSurgeryNameSetfocus(); 
	//void			OnSurgeryNameKillfocus(); 
	long			OnSurgeryNameLoadData(); 
	//void			OnSurgeryNameAddNew(); 
	//void			OnCommentChange(); 
	//void			OnCommentSetfocus(); 
	//void			OnCommentKillfocus(); 
	int			OnCommentCheckValue(); 
	void			OnBeforeSurgerySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBeforeSurgerySelendok(); 
	//void			OnBeforeSurgerySetfocus(); 
	//void			OnBeforeSurgeryKillfocus(); 
	long			OnBeforeSurgeryLoadData(); 
	//void			OnBeforeSurgeryAddNew(); 
	void			OnYesSelect(); 
	void			OnNoSelect(); 
	void			OnAnesthesiaMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAnesthesiaMethodSelendok(); 
	//void			OnAnesthesiaMethodSetfocus(); 
	//void			OnAnesthesiaMethodKillfocus(); 
	long			OnAnesthesiaMethodLoadData(); 
	//void			OnAnesthesiaMethodAddNew(); 
	void			OnSurgeonSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSurgeonSelendok(); 
	//void			OnSurgeonSetfocus(); 
	//void			OnSurgeonKillfocus(); 
	long			OnSurgeonLoadData(); 
	//void			OnSurgeonAddNew(); 
	void			OnAssistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAssistSelendok(); 
	//void			OnAssistSetfocus(); 
	//void			OnAssistKillfocus(); 
	long			OnAssistLoadData(); 
	//void			OnAssistAddNew(); 
	void			OnAssist2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAssist2Selendok(); 
	//void			OnAssist2Setfocus(); 
	//void			OnAssist2Killfocus(); 
	long			OnAssist2LoadData(); 
	//void			OnAssist2AddNew(); 
	//void			OnBeginTimeChange(); 
	//void			OnBeginTimeSetfocus(); 
	//void			OnBeginTimeKillfocus(); 
	int			OnBeginTimeCheckValue(); 
	//void			OnEndTimeChange(); 
	//void			OnEndTimeSetfocus(); 
	//void			OnEndTimeKillfocus(); 
	int			OnEndTimeCheckValue(); 
	//void			OnTGDukienChange(); 
	//void			OnTGDukienSetfocus(); 
	//void			OnTGDukienKillfocus(); 
	int			OnTGDukienCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnRateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRateSelendok(); 
	//void			OnRateSetfocus(); 
	//void			OnRateKillfocus(); 
	long			OnRateLoadData(); 
	//void			OnRateAddNew(); 
	void			OnMachineSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMachineSelendok(); 
	//void			OnMachineSetfocus(); 
	//void			OnMachineKillfocus(); 
	long			OnMachineLoadData(); 
	//void			OnMachineAddNew(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnAddDrugMaterialSelect(); 
	CHMSOperationScheduleDetailDialog(CWnd *pParent);
	~CHMSOperationScheduleDetailDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOperationScheduleDetailDialog(); 
	int OnEditHMSOperationScheduleDetailDialog(); 
	int OnDeleteHMSOperationScheduleDetailDialog(); 
	int OnSaveHMSOperationScheduleDetailDialog(); 
	int OnCancelHMSOperationScheduleDetailDialog(); 
	int OnHMSOperationScheduleDetailDialogListLoadData(); 
};
#endif
