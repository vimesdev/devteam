#ifndef PMSDailyDrugOrderLISTDialog_H
#define PMSDailyDrugOrderLISTDialog_H

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
#include "GuiDialog.h"
#include "DbField.h"
class AFX_EXT_CLASS CPMSDailyDrugOrderListDialog : public CGuiDialog{
protected:
public:
	long		m_nOID;
	CString		m_szOrderNo;
	CString		m_szStockList;
	CGuiGroupBox	m_wndOrderInformation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndFromStockLabel;
	CGuiComboBox	m_wndFromStock;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndAllStatus;
	CGuiCheckBox	m_wndOpenStatus;
	CGuiCheckBox	m_wndSendStatus;
	CGuiCheckBox	m_wndIssueStatus;
	
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szFromStockKey;
	CString	m_szDeptKey;
//	CString	m_szOrderNo;
	CString	m_szOrderType;
	BOOL	m_bAllStatus;
	BOOL	m_bOpenStatus;
	BOOL	m_bSendStatus;
	BOOL	m_bIssueStatus;
	CDbfMap	m_dm_purchaseorderlnTbl;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnFromStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromStockSelendok(); 
	//void			OnFromStockSetfocus(); 
	//void			OnFromStockKillfocus(); 
	long			OnFromStockLoadData(); 
	void			OnFromStockAddNew(); 
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	void			OnDeptAddNew(); 
	int			OnOrderNoCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int				OnListSelectItem(); 
	void			OnPrintSelect(); 
	void			OnCancelSelect(); 
	void			OnAllStatusCheck();
	void			OnOpenStatusCheck();
	void			OnSendStatusCheck();
	void			OnIssueStatusCheck();
	CPMSDailyDrugOrderListDialog(CWnd *pParent);
	~CPMSDailyDrugOrderListDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSDailyDrugOrderListDialog(); 
	int OnEditPMSDailyDrugOrderListDialog(); 
	int OnDeletePMSDailyDrugOrderListDialog(); 
	int OnSavePMSDailyDrugOrderListDialog(); 
	int OnCancelPMSDailyDrugOrderListDialog(); 
	int OnPMSDailyDrugOrderListDialogListLoadData(); 
};
#endif
