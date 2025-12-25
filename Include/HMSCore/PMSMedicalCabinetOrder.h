#ifndef PMSMedicalCabinetOrder_H
#define PMSMedicalCabinetOrder_H

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
#include "PMSMedicalCabinetOrderEntry.h"
class AFX_EXT_CLASS CPMSMedicalCabinetOrder : public CGuiView{
protected:
	CString	m_szOrderTime;
public:
	/*	m_szType: Luu gia tri cac loai phieu bao gom:
		A: Dieu chuyen kho
		B: Cap phat hang ngay
		C: Cap phat tu truc
		D: Xuat thanh ly
		E: Xuat het han
		F: Xuat hong vo
		G: Xuat dieu chinh
		H: Xuat tuyen xa
		O: Xuat khac
	*/

	long			m_nOID;
	CString			m_szStockList;
	CString			m_szDepartments;
	CString			m_szCreatedBy;
	void			ShowInput(bool bShow);
	CGuiGroupBox	m_wndOrderInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiButton		m_wndIDButton;
	CGuiCheckBox	m_wndReturnOrder;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndFromStockLabel;
	CGuiComboBox	m_wndFromStock;
	CGuiLabel		m_wndToStockLabel;
	CGuiComboBox	m_wndToStock;
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
	CPMSMedicalCabinetOrderEntry	m_wndInputEntry;
	CString	m_szType;
	CString	m_szID;
	CString	m_szOrderDate;
	CString	m_szStatus;
	CString	m_szStatusDesc;
	CString	m_szFromStockKey;
	CString	m_szToStockKey;
	CString	m_szDeliverer;
	CString	m_szReceiver;
	CString	m_szDescription;
	CString	m_szDeptID;
	CString	m_szOrderType;	//P: Pharmacy department, T: Treatment Department
	CString	m_szCurrentOrderType;
	CDbfMap	m_transactionTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListSupplementDrugIssued();
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
	void			OnToStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnToStockSelendok(); 
	//void			OnToStockSetfocus(); 
	//void			OnToStockKillfocus(); 
	long			OnToStockLoadData(); 
	void			OnToStockAddNew(); 
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
	void			OnPrintDelivery();
	void			OnCancelOrder();
	CPMSMedicalCabinetOrder();
	~CPMSMedicalCabinetOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSMedicalCabinetOrder(); 
	int OnEditPMSMedicalCabinetOrder(); 
	int OnDeletePMSMedicalCabinetOrder(); 
	int OnSavePMSMedicalCabinetOrder(); 
	int OnCancelPMSMedicalCabinetOrder(); 
	int OnPMSMedicalCabinetOrderListLoadData(); 
	
};
#endif
