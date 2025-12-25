#ifndef WARDMATERIALDRUGORDER_H
#define WARDMATERIALDRUGORDER_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Joint Stock Company. 2005-2010. 			
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
class CWardMaterialDrugOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndGeneralInformation;
	CGuiGroupBox	m_wndItems;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiTextCtrl	m_wndOrderID;
	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndDeliveByLabel;
	CGuiTextCtrl	m_wndDeliveBy;
	CGuiLabel		m_wndIssueDateLabel;
	CGuiDateTimeCtrl	m_wndIssueDate;
	CGuiLabel		m_wndReceivedByLabel;
	CGuiTextCtrl	m_wndReceivedBy;
	CGuiLabel		m_wndDescrptionLabel;
	CGuiTextCtrl	m_wndDescrption;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndSend;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndAddLine;
	CString	m_szOrderID;
	CString	m_szStockKey;
	CString	m_szOrderDate;
	CString	m_szDeliveBy;
	CString	m_szIssueDate;
	CString	m_szReceivedBy;
	CString	m_szDescrption;
	CString	m_szStatus;
	CDbfMap	m_pms_stockexportTbl;
	//void			OnOrderIDChange(); 
	//void			OnOrderIDSetfocus(); 
	//void			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	void			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStockSelendok(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	long			OnStockLoadData(); 
	void			OnStockAddNew(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnDeliveByChange(); 
	//void			OnDeliveBySetfocus(); 
	//void			OnDeliveByKillfocus(); 
	int			OnDeliveByCheckValue(); 
	//void			OnIssueDateChange(); 
	//void			OnIssueDateSetfocus(); 
	//void			OnIssueDateKillfocus(); 
	int			OnIssueDateCheckValue(); 
	//void			OnReceivedByChange(); 
	//void			OnReceivedBySetfocus(); 
	//void			OnReceivedByKillfocus(); 
	int			OnReceivedByCheckValue(); 
	//void			OnDescrptionChange(); 
	//void			OnDescrptionSetfocus(); 
	//void			OnDescrptionKillfocus(); 
	int			OnDescrptionCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnCancelSelect(); 
	void			OnSaveSelect(); 
	void			OnSendSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	void			OnAddLineSelect(); 
	CWardMaterialDrugOrder();
	~CWardMaterialDrugOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddWardMaterialDrugOrder(); 
	int OnEditWardMaterialDrugOrder(); 
	int OnDeleteWardMaterialDrugOrder(); 
	int OnSaveWardMaterialDrugOrder(); 
	int OnCancelWardMaterialDrugOrder(); 
	int OnWardMaterialDrugOrderListLoadData(); 
};
#endif
