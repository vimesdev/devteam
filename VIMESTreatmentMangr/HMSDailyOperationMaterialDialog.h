#ifndef HMSDailyOperationMaterialDialog_H
#define HMSDailyOperationMaterialDialog_H

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
#include "GridListCtrl.h"


class CHMSDailyOperationMaterialDialog : public CGuiDialog{
protected:
public:
	long	m_nOID;	//Order ID
	long	m_nTransactionID;

	long	m_nDocumentNo;
	CArray<long,long&> m_transaction_orders;
	CArray<int,int&> m_storages;
	CString	m_szDoctor;
	CString	m_szBatchNo;
	CString	m_szPatientOrderDate;

	CString	m_szIssueState;
	CString	m_szCreatedBy;
	CString	m_szAutoPrintDeliveryVote;
	CString	m_szPrintType;	
	CString	m_szTransactionString;
	CString	m_szStorageString;
	CString m_szTransactionID;
	
	BOOL	m_bMultipleDay;
	long	m_nDays;
	
	CString	m_szPatientNameKey;
	CString	m_szOrderDateEmtry;
	
	void			RefreshData();
	void			LoadDrugList(long nID);
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndDrugInformation;
	CGridListCtrl	m_wndOrderList;
	CGridListCtrl	m_wndPatientList;
	CGridListCtrl	m_wndDrugList;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiButton		m_wndFind;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndIssueDateLabel;
	CGuiDateCtrl	m_wndIssueDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndPrintedLabel;
	CGuiNumberCtrl	m_wndPrinted;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndSend;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndPrintDeliveryDrugs;
	CGuiButton		m_wndAddDrug;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szOrderTime;
	CString	m_szIssueDate;
	
	CString	m_szStatus;
	CString	m_szStatusDesc;
	long	m_nPrinted;
	CString	m_szNote;
	CDbfMap	m_transactionTbl;
	long		OnOrderListLoadData();
	int			OnPreviewDeliveryDetail();
	void		OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void		OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	int			OnOrderListPrintDeliveryDrug(); 
	int			OnExportOrderDeliveryDrug();
	int			OnOrderListPrintSheetDate();
	int			OnOrderListPrintSheetPublicity();	
	long		OnPatientListLoadData(); 
	void		OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void		OnPatientListDblClick(); 
	int			OnPatientListIssueAll(); 
	int			OnPatientListIssue(); 
	int			OnPatientListRollback(); 
	int			OnPatientListDeleteItem(); 
	long		OnDrugListLoadData(); 
	void		OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void		OnDrugListDblClick(); 
	int			OnDrugListAddEntry(); 
	int			OnDrugListDeleteItem(); 
	int			OnDrugListReturnDrug(); 
	//void		OnOrderNoChange(); 
	//void		OnOrderNoSetfocus(); 
	//void		OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	void			OnFindSelect(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnIssueDateChange(); 
	//void			OnIssueDateSetfocus(); 
	//void			OnIssueDateKillfocus(); 
	int			OnIssueDateCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnPrintedChange(); 
	//void			OnPrintedSetfocus(); 
	//void			OnPrintedKillfocus(); 
	int			OnPrintedCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnSendSelect(); 
	void			OnPrintSelect(); 
	void			OnPrintDeliveryDrugsSelect(); 
	void			OnAddDrugSelect(); 
	void			OnPrintPatientSummeryDrug(int nDocumentNo, CString szRefeorder_ID);
	void			OnPrintDelivery(CString szTranstionID, LPCTSTR lpszOrderDate);
	void			OnExportDelivery_Lanscape(long nOID, LPCTSTR lpszOrderDate);
	void			OnExportDelivery_Portraid(long nOID, LPCTSTR lpszOrderDate);
	CHMSDailyOperationMaterialDialog(CWnd *pParent);	
	~CHMSDailyOperationMaterialDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDailyOperationMaterialDialog(); 
	int OnEditHMSDailyOperationMaterialDialog(); 
	int OnDeleteHMSDailyOperationMaterialDialog(); 
	int OnSaveHMSDailyOperationMaterialDialog(); 
	int OnCancelHMSDailyOperationMaterialDialog(); 
	int OnHMSDailyOperationMaterialDialogListLoadData(); 
	void	Refresh(long nTransactionID, long nPharmaOID);
	long	GetTransactionID(int nStorageID);
};
#endif
