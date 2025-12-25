#ifndef HMSDIALYDRUGORDERDIALOG_H
#define HMSDIALYDRUGORDERDIALOG_H

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
class CHMSDialyDrugOrderDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndDrugInformation;
	CGuiListCtrl	m_wndOrderList;
	CGuiListCtrl	m_wndPatientList;
	CGuiListCtrl	m_wndDrugList;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiTextCtrl	m_wndOrderID;
	CGuiButton		m_wndFind;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndAcceptDateLabel;
	CGuiDateCtrl	m_wndAcceptDate;
	CGuiLabel		m_wndStockLabel;
	CGuiTextCtrl	m_wndStock;
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
	CString	m_szOrderID;
	CString	m_szOrderDate;
	CString	m_szAcceptDate;
	CString	m_szStock;
	CString	m_szStatus;
	long	m_nPrinted;
	CString	m_szNote;
	CDbfMap	m_pms_dailydrug_orderTbl;
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	//void			OnOrderIDChange(); 
	//void			OnOrderIDSetfocus(); 
	//void			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	void			OnFindSelect(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnAcceptDateChange(); 
	//void			OnAcceptDateSetfocus(); 
	//void			OnAcceptDateKillfocus(); 
	int			OnAcceptDateCheckValue(); 
	//void			OnStockChange(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	int			OnStockCheckValue(); 
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
	CHMSDialyDrugOrderDialog(CWnd *pParent);
	~CHMSDialyDrugOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDialyDrugOrderDialog(); 
	int OnEditHMSDialyDrugOrderDialog(); 
	int OnDeleteHMSDialyDrugOrderDialog(); 
	int OnSaveHMSDialyDrugOrderDialog(); 
	int OnCancelHMSDialyDrugOrderDialog(); 
	int OnHMSDialyDrugOrderDialogListLoadData(); 
};
#endif
