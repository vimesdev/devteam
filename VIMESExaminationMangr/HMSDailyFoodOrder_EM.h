#ifndef HMSDailyFoodOrderEM_H
#define HMSDailyFoodOrderEM_H

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


class CHMSDailyFoodOrder_EM : public CGuiView
{

protected:
public:
	long	m_nOID;	//Order ID
	long	m_nTransactionID;
	long	m_nOrderID;
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
	
	
	void			RefreshData();
	void			LoadRationList(long nID);
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndRationInformation;
	CGuiGroupBox	m_wndGroupListRation;
	CGridListCtrl	m_wndOrderList;
	CGridListCtrl	m_wndPatientList;
	CGridListCtrl	m_wndRationList;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiButton		m_wndFind;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndIssueDateLabel;
	CGuiDateTimeCtrl	m_wndIssueDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndPrintedLabel;
	CGuiNumberCtrl	m_wndPrinted;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiCheckBox	m_wndHaucan;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndSend;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndPrintDeliveryRations;
	CGuiButton		m_wndAddRation;
	CGuiButton		m_wndAddAutomatic;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiNumberCtrl	m_wndTotalNumber;
	
	CGuiCheckBox	m_wndPrimary;
	CGuiCheckBox	m_wndBaoSua;

	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szOrderTime;
	CString	m_szIssueDate;
	CString	m_szPatientName;

	CString	m_szStatus;
	CString	m_szStatusDesc;
	long	m_nPrinted;
	long	m_nTotalNumber;
	BOOL	m_bPrimary;
	BOOL	m_bHaucan;
	BOOL	m_bBaoSua;
	
	CString	m_szNote;
	CDbfMap	m_feefoodTbl;
	long		OnOrderListLoadData(); 
	void		OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void		OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	int			OnOrderListPrintDeliveryRation(); 
	int			OnExportOrderDeliveryRation();
	int			OnOrderListPrintSheetDate();
	int			OnOrderListPrintSheetPublicity();	
	long		OnPatientListLoadData(); 
	void		OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void		OnPatientListDblClick(); 
	int			OnPatientListIssueAll(); 
	int			OnPatientListIssue(); 
	int			OnPatientListRollback(); 
	int			OnPatientListDeleteItem(); 
	long		OnRationListLoadData(); 
	void		OnRationListSelectChange(int nOldItem, int nNewItem); 
	void		OnRationListDblClick(); 
	int			OnRationListAddEntry(); 
	int			OnRationListDeleteItem(); 
	int			OnRationListReturnRation();
	int			OnOrderListAddFromServicePkg(); 
	int			OnOrderListAddFromServiceFamilyPkg();

	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 


	//void		OnOrderNoChange(); 
	//void		OnOrderNoSetfocus(); 
	//void		OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	void			OnFindSelect();
	void			OnBaoSuaSelect();
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
	void			OnPrintDeliveryRationsSelect(); 

	void			OnAddRationSelect(); 
	void			OnAddAutomaticSelect(); 
	void			OnPrintDelivery(long nOID, LPCTSTR lpszOrderDate, bool bPreview, bool bRelative=false);
	void			OnPrintDeliverySummery(long nOID, LPCTSTR lpszOrderDate, bool bPreview);	
	int				OnChangeRation();
	//CHMSDailyFoodOrder_EM(CWnd *pParent);
	CHMSDailyFoodOrder_EM();
	~CHMSDailyFoodOrder_EM();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDailyFoodOrder(); 
	int OnEditHMSDailyFoodOrder(); 
	int OnDeleteHMSDailyFoodOrder(); 
	int OnSaveHMSDailyFoodOrder(); 
	int OnCancelHMSDailyFoodOrder(); 
	int OnHMSDailyFoodOrderListLoadData(); 
	void	Refresh(long nTransactionID, long nPharmaOID);
	long	GetTransactionID(int nStorageID);
	int OnPhieuAnMienPhi();
	void GetOrderStatus();
};
#endif
