#ifndef HMSAnestheticScheduleDetail_H
#define HMSAnestheticScheduleDetail_H

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
#include "GridListView.h"
class CHMSAnestheticScheduleDetail : public CGuiView{
protected:
public:
	long			m_nMaterialOID;
	CWnd*			m_wndOrderList;
	CGuiGroupBox	m_wndSurgeryInfor;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiComboBox	m_wndDocumentNoComBo;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndPerformDeptLabel;
	CGuiComboBox	m_wndPerformDept;
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
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndAddDrugMaterial;
	//CGridListView	m_wndDrugList;
	CGuiListCtrl	m_wndDrugList;
	CString	m_szDocumentNoKey;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	CString	m_szOrderDate;
	CString	m_szPerformDeptKey;
	CString	m_szTableKey;
	long	m_nIndex;
	CString	m_szDiagnostic;
	CString	m_szSurgeryNameKey;
	CString	m_szComment;
	CString	m_szBeforeSurgeryKey;
	int	m_nYes;
	CString	m_szAnesthesiaMethodKey;
	CString	m_szSurgeonKey;
	CString	m_szAssistKey;
	CString	m_szAssist2Key;

	long		m_nPatientNo;
	long		m_nOperationID;
	CString		m_szMatStatus;
	CString		m_szObjectType;
	CString		m_szOldOrderDate;
	CString		m_szOpStatus;
	CString		m_szPOrder;

	CDbfMap		m_hms_operation_Tbl;

	void			OnDocumentNoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDocumentNoSelendok(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	long			OnDocumentNoLoadData(); 
	//void			OnDocumentNoAddNew(); 
	int				OnDocumentNoCheckValue();
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
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
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnAddDrugMaterialSelect(); 
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	int			OnRefreshDrugList();
	CHMSAnestheticScheduleDetail();
	~CHMSAnestheticScheduleDetail();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAnestheticScheduleDetail(); 
	int OnEditHMSAnestheticScheduleDetail(); 
	int OnDeleteHMSAnestheticScheduleDetail(); 
	int OnSaveHMSAnestheticScheduleDetail(); 
	int OnCancelHMSAnestheticScheduleDetail(); 
	int OnHMSAnestheticScheduleDetailListLoadData(); 
	CString GetOrderStatus();
	int LoadPatientInfo();
protected:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};
#endif
