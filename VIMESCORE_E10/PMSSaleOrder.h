#ifndef DSMSALEORDER_H
#define DSMSALEORDER_H

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
class CPMSSaleOrder : public CGuiView{
protected:
	
public:
	CGuiGroupBox	m_wndSalesInformation;
	CGuiGroupBox	m_wndPaymentInvoiceInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndSaleDateLabel;
	CGuiDateTimeCtrl	m_wndSaleDate;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndPayableAmountLabel;
	CGuiNumberCtrl	m_wndPayableAmount;
	CGuiLabel		m_wndRemainAmountLabel;
	CGuiNumberCtrl	m_wndRemainAmount;
	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndClientNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiComboBox	m_wndName2;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndBarcodeLabel;
	CGuiTextCtrl	m_wndBarcode;
	CGuiLabel		m_wndItemIDLabel;
	CGuiComboBox	m_wndItemID;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndSellingPriceLabel;
	CGuiNumberCtrl	m_wndSellingPrice;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPayment;
	CGuiButton		m_wndFind;
	CGuiButton		m_wndPrint;
	

	double	m_nTotalAmount;
	double	m_nPayableAmount;
	double	m_nRemainAmount;
	CString m_szSaleDate;
	CString	m_szDoctorKey;
	CString m_szName2Key;
	CString	m_szID;
	CString m_szAge;
	CString m_szDeptKey;
	CString m_szStockKey;
	CString	m_szStatus;
	CString	m_szClientID;
	CString	m_szName;
	CString	m_szPhone;
	CString	m_szBarcode;
	CString	m_szItemIDKey;
	CString	m_szUsage;
	CString	m_szStatusKey;
	CString	m_szCreatedBy;

	float	m_nQuantity;
	double	m_nSellingPrice;
	int		m_nOrderID;
	int		m_nStockID;
	bool	m_bAddOrder;
	CString	m_szNote;

	CDbfMap	m_pms_saleorderTbl;
	CDbfMap	m_pms_saleorder_lineTbl;
	int			OnListLoadData(); 
	int			OnListSelectChange(int nOldItem, int nNewItem); 
	int			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//int			OnTotalAmountChange(); 
	//int			OnTotalAmountSetfocus(); 
	//int			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	//int			OnPayableAmountChange(); 
	//int			OnPayableAmountSetfocus(); 
	//int			OnPayableAmountKillfocus(); 
	int			OnPayableAmountCheckValue(); 
	//int			OnRemainAmountChange(); 
	//int			OnRemainAmountSetfocus(); 
	//int			OnRemainAmountKillfocus(); 
	int			OnRemainAmountCheckValue(); 
	void			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStockSelendok(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	long			OnStockLoadData(); 
	void			OnStockAddNew(); 
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	void			OnDeptAddNew(); 
	int			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnDoctorSelendok(); 
	//int			OnDoctorSetfocus(); 
	//int			OnDoctorKillfocus(); 
	int			OnDoctorLoadData(); 
	int			OnDoctorAddNew(); 
	
	int			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnStatusSelendok(); 
	//int			OnStatusSetfocus(); 
	//int			OnStatusKillfocus(); 
	int			OnStatusLoadData(); 
	int			OnStatusAddNew(); 

	int			OnName2SelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnName2Selendok(); 
	//int			OnName2Setfocus(); 
	//int			OnName2Killfocus(); 
	int			OnName2LoadData(); 
	int			OnName2AddNew(); 

	//int			OnIDChange(); 
	//int			OnIDSetfocus(); 
	//int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//int			OnNameChange(); 
	//int			OnNameSetfocus(); 
	//int			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//int			OnBarcodeChange(); 
	//int			OnBarcodeSetfocus(); 
	//int			OnBarcodeKillfocus(); 
	int			OnBarcodeCheckValue(); 
	int			OnItemIDSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnItemIDSelendok(); 
	//int			OnItemIDSetfocus(); 
	//int			OnItemIDKillfocus(); 
	int			OnItemIDLoadData(); 
	int			OnItemIDAddNew(); 
	//int			OnQuantityChange(); 
	//int			OnQuantitySetfocus(); 
	//int			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	int			OnPaymentSelect(); 
	int			OnFindSelect(); 
	int			OnPrintSelect(); 
	//int			OnSellingPriceChange(); 
	//int			OnSellingPriceSetfocus(); 
	//int			OnSellingPriceKillfocus(); 
	int			OnSellingPriceCheckValue(); 
	//int			OnNoteChange(); 
	//int			OnNoteSetfocus(); 
	//int			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 


	CPMSSaleOrder();
	~CPMSSaleOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddPMSSaleOrder(); 
	int OnAddItem();
	int OnEditPMSSaleOrder(); 
	int OnDeletePMSSaleOrder(); 
	int OnSavePMSSaleOrder(); 
	int OnCancelPMSSaleOrder(); 
	void SetMode(int nMode);
	int	UpdateStockQuantity();
};
#endif
