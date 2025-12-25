#ifndef HMSBLOODORDERDIALOG_H
#define HMSBLOODORDERDIALOG_H

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
class CHMSBloodOrderDialog : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndOrderList;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndBloodGroupLabel;
	CGuiComboBox	m_wndBloodGroup;
	CGuiLabel		m_wndTransfusionNumberLabel;
	CGuiNumberCtrl	m_wndTransfusionNumber;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiLabel		m_wndItemLabel;
	CGuiComboBox	m_wndItem;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiButton		m_wndAddLine;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	long	m_nOrderID;
	CString	m_szOrderDate;
	CString	m_szBloodGroupKey;
	long	m_nTransfusionNumber;
	CString	m_szReason;
	CString	m_szItemKey;
	long	m_nQty;
	CDbfMap	m_hms_blood_orderTbl;
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	//void			OnOrderIDChange(); 
	//void			OnOrderIDSetfocus(); 
	//void			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnBloodGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBloodGroupSelendok(); 
	//void			OnBloodGroupSetfocus(); 
	//void			OnBloodGroupKillfocus(); 
	long			OnBloodGroupLoadData(); 
	//void			OnBloodGroupAddNew(); 
	//void			OnTransfusionNumberChange(); 
	//void			OnTransfusionNumberSetfocus(); 
	//void			OnTransfusionNumberKillfocus(); 
	int			OnTransfusionNumberCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	void			OnItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemSelendok(); 
	//void			OnItemSetfocus(); 
	//void			OnItemKillfocus(); 
	long			OnItemLoadData(); 
	//void			OnItemAddNew(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	void			OnAddLineSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CHMSBloodOrderDialog(CWnd *pParent);
	~CHMSBloodOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBloodOrderDialog(); 
	int OnEditHMSBloodOrderDialog(); 
	int OnDeleteHMSBloodOrderDialog(); 
	int OnSaveHMSBloodOrderDialog(); 
	int OnCancelHMSBloodOrderDialog(); 
	int OnHMSBloodOrderDialogListLoadData(); 
};
#endif
