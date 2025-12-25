#ifndef PMSDailyDrugOrder_H
#define PMSDailyDrugOrder_H

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
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@miteco.com.vn hoac hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
#include "GuiDialog.h"

#include "PMSDailyDrugOrderEntry.h"
class AFX_EXT_CLASS CPMSDailyDrugOrder : public CGuiView{
protected:
	CString		m_szOrderTime;
public:
	long			m_nOID;
	CString			m_szDepartments;
	CString			m_szStockList;

	void			ShowInput(bool bShow);
	CGuiGroupBox	m_wndOrderInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiButton		m_wndIDButton;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndFromStockLabel;
	CGuiComboBox	m_wndFromStock;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndDelivererLabel;
	CGuiTextCtrl	m_wndDeliverer;
	CGuiLabel		m_wndReceiverLabel;
	CGuiTextCtrl	m_wndReceiver;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndAddEntry;
	
	CPMSDailyDrugOrderEntry	m_wndInputEntry;
	CString	m_szType;
	CString	m_szID;
	CString	m_szOrderDate;
	CString	m_szStatus;
	CString	m_szStatusDesc;
	CString	m_szFromStockKey;
	CString	m_szDepartmentKey;
	CString	m_szDeliverer;
	CString	m_szReceiver;
	CString	m_szDescription;
	CString	m_szCreatedBy;
	CDbfMap	m_pms_stocktransferTbl;
	
	//m_szCurrentOrderType: P: Pharmacy, E: Examination Department, T: Treatment Department,PACS , LIS
	CString	m_szCurrentOrderType;
	CString	m_szOrderType;

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	void			OnIDButtonSelect(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	void			OnFromStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromStockSelendok(); 
	//void			OnFromStockSetfocus(); 
	//void			OnFromStockKillfocus(); 
	long			OnFromStockLoadData(); 
	void			OnFromStockAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	//void			OnDelivererChange(); 
	//void			OnDelivererSetfocus(); 
	//void			OnDelivererKillfocus(); 
	int			OnDelivererCheckValue(); 
	//void			OnReceiverChange(); 
	//void			OnReceiverSetfocus(); 
	//void			OnReceiverKillfocus(); 
	int			OnReceiverCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnConfirmSelect(); 
	void			OnAddEntrySelect(); 
	CPMSDailyDrugOrder();
	~CPMSDailyDrugOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSDailyDrugOrder(); 
	int OnEditPMSDailyDrugOrder(); 
	int OnDeletePMSDailyDrugOrder(); 
	int OnSavePMSDailyDrugOrder(); 
	int OnCancelPMSDailyDrugOrder(); 
	int OnPMSDailyDrugOrderListLoadData(); 
	void OnPrintDelivery();
	void OnCancelOrder();
};

class AFX_EXT_CLASS CPMSDailyDrugOrderDialog: public CGuiDialog{
public:
	CPMSDailyDrugOrder	m_wndOrder;
	CPMSDailyDrugOrderDialog(CWnd *pParent):CGuiDialog(pParent){ m_nDlgWidth = 800;	m_nDlgHeight = 600;}
	~CPMSDailyDrugOrderDialog(){}
		void OnCreateComponents(){
			m_wndOrder.Create(this, CRect(0, 0, 800, 600));
			m_wndOrder.m_szCurrentOrderType = _T("M");
			
		}
		void OnInitializeComponents(){
			m_wndOrder.m_wndInputEntry.OnInitDialog();
		}
};
#endif
