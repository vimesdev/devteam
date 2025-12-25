#ifndef HMSSurgeryInfoView_H
#define HMSSurgeryInfoView_H

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
#include "HMSSurgeryChargeView.h"
#include "HMSSurgeryScheduleMatView.h"
#include "HMSSurgeryExtraInfoView.h"

class CHMSSurgeryInfoView : public CGuiView{
protected:
public:
	CHMSSurgeryExtraInfoView	m_wndExtraSurgery;
	CHMSSurgeryChargeView	m_wndSurgeryCharge;
	CHMSSurgeryScheduleMatView	m_wndMat;
	bool	m_bLogPaidOpt;
	BOOL	m_bAllList;
	

	CWnd*	m_wndOrderList;
	long	m_nOrderID;
	CString	m_szDoctor;
	long	m_nRefIdx;
	bool	m_bPrimary;
	CString	m_szCreatedBy;
	CString	m_szDepartmentID;
	CString	m_szStatus;
	CString	m_szDeptType;
	CString m_szPayment;
	CString m_szAdmitDate;

	float	m_nQuantity;
	int		m_nChargePercentDef;
	

	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndSurgeryShiftLabel;
	CGuiComboBox	m_wndSurgeryShift;
	CGuiLabel		m_wndNameLabel;
	CGuiCheckBox	m_wndAll;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndReferenceLabel;
	CGuiTextCtrl	m_wndReference;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiLabel		m_wndPerformDeptLabel;
	CGuiComboBox	m_wndPerformDept;
	CGuiLabel		m_wndPerformDateLabel;
	CGuiDateTimeCtrl	m_wndPerformDate;
	CGuiLabel		m_wndPerformPlaceLabel;
	CGuiComboBox	m_wndPerformPlace;
	CGuiLabel		m_wndPractitionerLabel;
	CGuiComboBox	m_wndPractitioner;
	CGuiLabel		m_wndAnesthetistLabel;
	CGuiComboBox	m_wndAnesthetist;
	CGuiLabel		m_wndAssistantLabel;
	CGuiComboBox	m_wndAssistant;
	CGuiLabel		m_wndAssistant2Label;
	CGuiComboBox	m_wndAssistant2;
	CGuiLabel		m_wndDemonstratorLabel;
	CGuiComboBox	m_wndDemonstrator;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndInPkgLabel;
	CGuiNumberCtrl	m_wndChargeAmount;
	CGuiButton		m_wndChargePercent;

	CGuiTextCtrl	m_wndNote;
	CGuiTabCtrl	m_wndTab;
	CGuiButton		m_wndScheduleOpt;

	CString	m_szDiagnostic;
	CString	m_szTypeKey;
	CString	m_szOrderDate;
	CString	m_szSurgeryShiftKey;
	CString	m_szNameKey;
	CString	m_szReference;
	double	m_nUnitPrice;
	CString	m_szReason;
	CString	m_szPerformDeptKey;
	CString	m_szPerformDate;
	CString	m_szPerformPlaceKey;
	CString	m_szPractitionerKey;
	CString	m_szAnesthetistKey;
	CString	m_szAssistantKey;
	CString	m_szAssistant2Key;
	CString	m_szDemonstratorKey;
	double	m_nAmount;
	double	m_nChargeAmount;
	int		m_nChargePercent;
	CString	m_szNote;
//	double	m_nUnitPrice;

	CDbfMap	m_hms_operationTbl;


	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnSurgeryShiftSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSurgeryShiftSelendok(); 
	//void			OnSurgeryShiftSetfocus(); 
	//void			OnSurgeryShiftKillfocus(); 
	long			OnSurgeryShiftLoadData(); 
	//void			OnSurgeryShiftAddNew(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	//void			OnReferenceChange(); 
	//void			OnReferenceSetfocus(); 
	//void			OnReferenceKillfocus(); 
	int			OnReferenceCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
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

	void			OnPerformPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformPlaceSelendok(); 
	//void			OnPerformPlaceSetfocus(); 
	//void			OnPerformPlaceKillfocus(); 
	long			OnPerformPlaceLoadData(); 
	//void			OnPerformPlaceAddNew(); 

	void		OnScheduleOptClick();
	void			OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPractitionerSelendok(); 
	//void			OnPractitionerSetfocus(); 
	//void			OnPractitionerKillfocus(); 
	long			OnPractitionerLoadData(); 
	//void			OnPractitionerAddNew(); 
	void			OnAnesthetistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAnesthetistSelendok(); 
	//void			OnAnesthetistSetfocus(); 
	//void			OnAnesthetistKillfocus(); 
	long			OnAnesthetistLoadData(); 
	//void			OnAnesthetistAddNew(); 
	void			OnAssistantSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAssistantSelendok(); 
	//void			OnAssistantSetfocus(); 
	//void			OnAssistantKillfocus(); 
	long			OnAssistantLoadData(); 
	//void			OnAssistantAddNew(); 
	void			OnAssistant2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAssistant2Selendok(); 
	//void			OnAssistant2Setfocus(); 
	//void			OnAssistant2Killfocus(); 
	long			OnAssistant2LoadData(); 
	//void			OnAssistant2AddNew(); 
	//void			OnDemonstratorChange(); 
	//void			OnDemonstratorSetfocus(); 
	//void			OnDemonstratorKillfocus(); 
	int				OnDemonstratorCheckValue(); 
	long			OnDemonstratorLoadData(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	CHMSSurgeryInfoView();
	~CHMSSurgeryInfoView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSurgeryInfoView(); 
	int OnEditHMSSurgeryInfoView(); 
	int OnDeleteHMSSurgeryInfoView(); 
	int OnSaveHMSSurgeryInfoView(); 
	int OnCancelHMSSurgeryInfoView(); 
	int OnHMSSurgeryInfoViewListLoadData(); 


	CString		GetCurrentStatus();
	void		Load(long nOrderID);
	void	OnAddOptUser(CString szGroup, CString& szKey);
	void	OnAddOptName();
	void	OnAllSelect();
	void	CalcAmount();
	void	CalcChargeAmount();
	void	OnChargePercentSelect();

};
#endif
