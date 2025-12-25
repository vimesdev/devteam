#ifndef CancerStorageTransactionDialog_H
#define CancerStorageTransactionDialog_H

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
#include "CancerStorageTransactionLines.h"
#include "HMSPatientListDrugDailyView.h"
#include "ListNotification.h"
///////////////////////////////////////////////
//CStorageTransaction: Cac class lien quan den phieu linh thuoc
///////////////////////////////////////////////

class CCancerStorageTransactionDialog : public CGuiDialog{
protected:
	bool		m_bRefresh;
public:
	long		m_nID;	
	CString		m_szCreatedBy;
	CString		m_szStatusDesc;
	CString		m_szStatus;
	CString		m_szPosted;
	CString		m_szOrgID;
	CString		m_szType;
	CString		m_szConfirmed;
	CString		m_szSubmitedBy;


	CCancerStorageTransactionLines	m_wndLines;
	CHMSPatientListDrugDailyView	m_wndPatientList;
	CListNotification			m_wndNotifications;


	CGuiGroupBox	m_wndGeneralInformation;
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndTerms;
	CGuiGroupBox	m_wndSummary;
	CGuiLabel		m_wndFromStorageLabel;
	CGuiComboBox	m_wndFromStorage;
	CGuiLabel		m_wndToDepartmentLabel;
	CGuiComboBox	m_wndToDepartment;
	CGuiLabel		m_wndDelivererLabel;
	CGuiComboBox	m_wndDeliverer;
	CGuiLabel		m_wndReceiverLabel;
	CGuiComboBox	m_wndReceiver;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndAccountingDateLabel;
	CGuiDateCtrl	m_wndAccountingDate;
	CGuiDateTimeCtrl	m_wndApprovedDate;

	CGuiLabel		m_wndTransactionTypeLabel;
	CGuiComboBox	m_wndTransactionType;
	
	CGuiTextCtrl	m_wndNote;

	CGuiLabel		m_wndTotalLinesLabel;
	CGuiNumberCtrl	m_wndTotalLines;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;


	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndAddLine;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndDisconfirm;

	CGuiTabCtrl	m_wndTab;
	CString	m_szFromStorageKey;
	CString	m_szToDepartmentKey;
	CString	m_szDelivererKey;
	CString	m_szReceiverKey;
	CString	m_szDescription;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szAccountingDate;
	CString	m_szApprovedDate;
	CString	m_szTransactionTypeKey;
	
	long	m_nTotalLines;
	double	m_nTotalAmount;
	CDbfMap	m_transactionTbl;
	void			OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromStorageSelendok(); 
	//void			OnFromStorageSetfocus(); 
	//void			OnFromStorageKillfocus(); 
	long			OnFromStorageLoadData(); 
	//void			OnFromStorageAddNew(); 
	void			OnToDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnToDepartmentSelendok(); 
	//void			OnToDepartmentSetfocus(); 
	//void			OnToDepartmentKillfocus(); 
	long			OnToDepartmentLoadData(); 
	//void			OnToDepartmentAddNew(); 
	void			OnDelivererSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDelivererSelendok(); 
	//void			OnDelivererSetfocus(); 
	//void			OnDelivererKillfocus(); 
	long			OnDelivererLoadData(); 
	//void			OnDelivererAddNew(); 
	void			OnReceiverSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReceiverSelendok(); 
	//void			OnReceiverSetfocus(); 
	//void			OnReceiverKillfocus(); 
	long			OnReceiverLoadData(); 
	//void			OnReceiverAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnAccountingDateChange(); 
	//void			OnAccountingDateSetfocus(); 
	//void			OnAccountingDateKillfocus(); 
	int			OnAccountingDateCheckValue(); 
	void			OnTransactionTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTransactionTypeSelendok(); 
	//void			OnTransactionTypeSetfocus(); 
	//void			OnTransactionTypeKillfocus(); 
	long			OnTransactionTypeLoadData(); 
	//void			OnTransactionTypeAddNew(); 
	//void			OnTotalLinesChange(); 
	//void			OnTotalLinesSetfocus(); 
	//void			OnTotalLinesKillfocus(); 
	int			OnTotalLinesCheckValue(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnDiscardSelect(); 
	void			OnPrintSelect(); 
	void			OnPostSelect(); 
	void			OnCloseSelect(); 
	void			OnConfirmSelect(); 
	void			OnDisconfirmSelect(); 
	void			OnAddLineSelect(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	CCancerStorageTransactionDialog(CWnd *pParent, int nMode);
	~CCancerStorageTransactionDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCancerStorageTransactionDialog(); 
	int OnEditCancerStorageTransactionDialog(); 
	int OnDeleteCancerStorageTransactionDialog(); 
	int OnSaveCancerStorageTransactionDialog(); 
	int OnDiscardCancerStorageTransactionDialog(); 
	int OnCancerStorageTransactionDialogListLoadData(); 
	CString GetOrderStatus();
	bool	IsAllowEdit();
	void	LoadNotifications();

};
#endif
