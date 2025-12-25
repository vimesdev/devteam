#ifndef HMSDailyOrderView_H
#define HMSDailyOrderView_H

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
#include "GridListCtrl.h"
#include "HMSDailyOrderPatientList.h"
#include "ListNotification.h"
#include "Excel.h"

class CHMSDailyOrderView : public CGuiView
{
protected:
public:
	long	m_nBatchID;	//Order ID
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
	CString	m_szStatus;
	
	BOOL	m_bMultipleDay;
	long	m_nDays;
	CString m_szOrderDateEntry;
	CString	m_szPatientNameKey;
	CHMSDailyOrderPatientList	m_wndPatientList2;
	CListNotification			m_wndNotifications;
	
	void			RefreshData();
	void			LoadDrugList(long nID);
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndDrugInformation;
	CGuiListCtrl	m_wndOrderList;
	CGuiListCtrl	m_wndDrugList;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiButton		m_wndFind;
	CGuiCheckBox	m_wndCancerOpt;

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
	CGuiTabCtrl		m_wndTab;

	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szOrderTime;
	CString	m_szIssueDate;
	CString m_szPaitentNameSearch;
	
	CString	m_szOrderStatus;
	CString	m_szStatusDesc;
	long	m_nPrinted;
	int		m_nPatientCount;
	CString	m_szNote;
	BOOL	m_bCancerOpt;

	CDbfMap	m_transactionTbl;
	long		OnOrderListLoadData(); 
	void		OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void		OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	int			OnOrderListPrintDeliveryDrug(); 
	int			OnExportOrderDeliveryDrug();
	int			OnOrderListPrintSheetDate();
	int			OnOrderListPrintSheetPublicity();	
	long		OnDrugListLoadData(); 
	void		OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void		OnDrugListDblClick(); 
	int			OnDrugListAddEntry(); 
	int			OnDrugListDeleteItem(); 
	int			OnDrugListReturnDrug(); 

	int			OnAddFromLogs();


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
	void			OnPrintDetailbyStorage();
	void			OnPrintSynthesisbyStorage();
	void			OnPrintDeliveryDrugsSelect(); 
	void			OnAddDrugSelect(); 
	void			OnPrintPatientSummeryDrug(int nDocumentNo, CString szRefeorder_ID);
	void			OnPrintDelivery(CString szTranstionID, LPCTSTR lpszOrderDate);
	void			OnExportDelivery_Lanscape(long nOID, LPCTSTR lpszOrderDate);
	void			OnExportDelivery_Portraid(long nOID, LPCTSTR lpszOrderDate);
	int			OnPreviewDeliveryDetail();
	void	OnExportDeliveryDetail();
	void	OnExportDeliveryDetailDaily(CExcel& xls, CString szOrderNo, int nStorageID, long nProductID);
	//CHMSDailyOrderView(CWnd *pParent);
	CHMSDailyOrderView();
	~CHMSDailyOrderView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDailyOrderView(); 
	int OnEditHMSDailyOrderView(); 
	int OnDeleteHMSDailyOrderView(); 
	int OnSaveHMSDailyOrderView(); 
	int OnCancelHMSDailyOrderView(); 
	int OnHMSDailyOrderViewListLoadData(); 
	void	Refresh(long nTransactionID, long nPharmaOID);
	long	GetTransactionID(int nStorageID, CString szObjectType=_T("I"));
	CString	GetOrderStatus(long nTransactionID);
	void	LoadDrugList(long nDocumentNo, CString szOrderDate);

	void	OnResizeLayout();
};
#endif
