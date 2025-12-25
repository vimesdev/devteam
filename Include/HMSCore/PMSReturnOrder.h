#ifndef PMSCabinetReturnOrder_H
#define PMSCabinetReturnOrder_H

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
#include "PMSReturnOrderEntry.h"

class CPMSCabinetReturnOrder : public CGuiView{
protected:
	CString		m_szType;
	CString		m_szCreatedBy;
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiButton		m_wndIDButton;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndImportStockLabel;
	CGuiComboBox	m_wndImportStock;
	CGuiLabel		m_wndReturnStockLabel;
	CGuiComboBox	m_wndReturnStock;
	CGuiLabel		m_wndDeliverByLabel;
	CGuiTextCtrl	m_wndDeliverBy;
	CGuiLabel		m_wndReceiveByLabel;
	CGuiTextCtrl	m_wndReceiveBy;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiTextCtrl	m_wndDepartment;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAddEntry;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndAccept;
	CPMSReturnOrderEntry m_wndInputEntry;

	CString	m_szID;
	CString	m_szOrderDate;
	CString	m_szOrderTime;
	CString	m_szStatus;
	CString	m_szStatusDesc;
	CString	m_szTypeKey;
	CString	m_szImportStockKey;
	CString	m_szReturnStockKey;
	CString	m_szDeliverBy;
	CString	m_szReceiveBy;
	CString	m_szDescription;
	CString	m_szDepartment;
	CString	m_szDepartmentKey;
	CDbfMap	m_pms_return_orderTbl;
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
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	void			OnTypeAddNew(); 
	void			OnImportStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnImportStockSelendok(); 
	//void			OnImportStockSetfocus(); 
	//void			OnImportStockKillfocus(); 
	long			OnImportStockLoadData(); 
	void			OnImportStockAddNew(); 
	void			OnReturnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReturnStockSelendok(); 
	//void			OnReturnStockSetfocus(); 
	//void			OnReturnStockKillfocus(); 
	long			OnReturnStockLoadData(); 
	void			OnReturnStockAddNew(); 
	//void			OnDeliverByChange(); 
	//void			OnDeliverBySetfocus(); 
	//void			OnDeliverByKillfocus(); 
	int			OnDeliverByCheckValue(); 
	//void			OnReceiveByChange(); 
	//void			OnReceiveBySetfocus(); 
	//void			OnReceiveByKillfocus(); 
	int			OnReceiveByCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnDepartmentChange(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	int			OnDepartmentCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddEntrySelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnAcceptSelect(); 
	CPMSCabinetReturnOrder();
	~CPMSCabinetReturnOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSCabinetReturnOrder(); 
	int OnEditPMSCabinetReturnOrder(); 
	int OnDeletePMSCabinetReturnOrder(); 
	int OnSavePMSCabinetReturnOrder(); 
	int OnCancelPMSCabinetReturnOrder(); 
	int OnPMSCabinetReturnOrderListLoadData(); 
	void ShowInput(bool bShow);
};
#endif
