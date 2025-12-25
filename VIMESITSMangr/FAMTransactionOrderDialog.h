#ifndef FAMTransactionORDERDIALOG_H
#define FAMTransactionORDERDIALOG_H

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
/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
#include "FAMTransactionOrderLine.h"
//**************************************************
//class CFAMTransactionOrderDialog: HOA DON NHAP KHO
//
//**************************************************

class CFAMTransactionOrderDialog : public CGuiDialog{
protected:
public:
	CFAMTransactionOrderLine	m_wndROL;
	CString					m_szTransactionID;
	bool					m_bRefresh;
	CString					m_szDocType;


	CGuiGroupBox	m_wndGeneralInformation;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndFromStorageLabel;
	CGuiComboBox	m_wndFromStorage;
	CGuiLabel		m_wndToStorageLabel;
	CGuiComboBox	m_wndToStorage;
	CGuiLabel		m_wndDeliveredByLabel;
	CGuiTextCtrl	m_wndDeliveredBy;
	CGuiLabel		m_wndReceivedByLabel;
	CGuiTextCtrl	m_wndReceivedBy;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	
	CGuiTabCtrl	m_wndLineTab;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndImport;
	CGuiButton		m_wndClose;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szFromStorageKey;
	CString	m_szToStorageKey;
	CString	m_szNote;
	CString	m_szStatus;
	CString	m_szDeliveredBy;
	CString	m_szReceivedBy;

	CDbfMap m_transactionTbl;
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromStorageSelendok(); 
	//void			OnFromStorageSetfocus(); 
	//void			OnFromStorageKillfocus(); 
	long			OnFromStorageLoadData(); 
	//void			OnFromStorageAddNew(); 
	void			OnToStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnToStorageSelendok(); 
	//void			OnToStorageSetfocus(); 
	//void			OnToStorageKillfocus(); 
	long			OnToStorageLoadData(); 
	//void			OnToStorageAddNew(); 
	//void			OnDeliveredByChange(); 
	//void			OnDeliveredBySetfocus(); 
	//void			OnDeliveredByKillfocus(); 
	int			OnDeliveredByCheckValue(); 
	//void			OnReceivedByChange(); 
	//void			OnReceivedBySetfocus(); 
	//void			OnReceivedByKillfocus(); 
	int			OnReceivedByCheckValue(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue();
	//void			OnInvoiceDateChange(); 
	//void			OnInvoiceDateSetfocus(); 
	//void			OnInvoiceDateKillfocus(); 
	int			OnInvoiceDateCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	void			OnLineTabSelectChange(int nOld, int nNew); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnImportSelect(); 
	void			OnCloseSelect(); 
	CFAMTransactionOrderDialog(CWnd *pParent, int nMode, CString szDocType);
	~CFAMTransactionOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMTransactionOrderDialog(); 
	int OnEditFAMTransactionOrderDialog(); 
	int OnDeleteFAMTransactionOrderDialog(); 
	int OnSaveFAMTransactionOrderDialog(); 
	int OnCancelFAMTransactionOrderDialog(); 
	int OnFAMTransactionOrderDialogListLoadData(); 
	void	CreateNewOrder();
	void	PrintOrder();
	void	PrintAllocateToDept();
	void	PrintTransfer();

};
#endif
