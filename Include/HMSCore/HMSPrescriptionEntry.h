#ifndef HMSPRESCRIPTIONENTRY_H
#define HMSPRESCRIPTIONENTRY_H

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
//	Email  : hayhv@VIMES.com.vn or hayhv@yahoo.com
//	Website: http://www.VIMES.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@VIMES.com.vn hoac hayhv@yahoo.com
//	Website: http://www.VIMES.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"

class AFX_EXT_CLASS CHMSPrescriptionEntry : public CGuiView{
protected:
	bool	m_bAddOrder;
	bool	m_bQtyOrder;
	long	m_nOrderID;
public:
	CGuiGroupBox	m_wndDrugEntry;
	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;	
	CGuiLabel		m_wndSothangLabel;
	CGuiNumberCtrl	m_wndSothang;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiNumberCtrl	m_wndMaxQuantity;
	CGuiLabel		m_wndIndicationLabel;
	CGuiComboBox	m_wndIndication;
	CGuiLabel		m_wndTimeDayLabel;
	CGuiTextCtrl	m_wndTimeDay;
	CGuiLabel		m_wndTimeQtyLabel;
	CGuiTextCtrl	m_wndTimeQty;
	CGuiLabel		m_wndUsageLabel;
	CGuiTextCtrl	m_wndUsage;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szStockKey;
	CString	m_szOrderDate;
	CString	m_szNameKey;
	CString	m_szUnit;
	CString	m_szStatus;
	CString	m_szDeptID;
	float	m_nQty;
	float	m_nMaxQuantity;
	int		m_nSothang;
	int		m_nLevel;
	CString	m_szIndicationKey;
	CString	m_szTimeDay;
	CString	m_szTimeQty;
	CString	m_szUsage;
	CDbfMap	m_hms_pharma_orderTbl;
	CDbfMap	m_hms_pharma_order_lineTbl;
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
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok();
	//void			OnNameSetfocus();
	//void			OnNameKillfocus(); 
	long			OnNameLoadData();
	void			OnNameAddNew();
	int				OnNameCheckValue();
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	void			OnQtyKillfocus(); 
	int			OnQtyCheckValue();
	int			OnSothangCheckValue();
	//void			OnMaxQuantityChange(); 
	//void			OnMaxQuantitySetfocus(); 
	//void			OnMaxQuantityKillfocus(); 
	int			OnMaxQuantityCheckValue(); 
	void			OnIndicationSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnIndicationSelendok(); 
	//void			OnIndicationSetfocus(); 
	void			OnIndicationKillfocus(); 
	long			OnIndicationLoadData(); 
	void			OnIndicationAddNew(); 
	//void			OnTimeDayChange(); 
	//void			OnTimeDaySetfocus(); 
	//void			OnTimeDayKillfocus(); 
	int			OnTimeDayCheckValue(); 
	//void			OnTimeQtyChange(); 
	//void			OnTimeQtySetfocus(); 
	//void			OnTimeQtyKillfocus(); 
	int			OnTimeQtyCheckValue(); 
	//void			OnUsageChange(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	int			OnUsageCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSPrescriptionEntry();
	~CHMSPrescriptionEntry();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPrescriptionEntry(); 
	int OnEditHMSPrescriptionEntry(); 
	int OnDeleteHMSPrescriptionEntry(); 
	int OnSaveHMSPrescriptionEntry(); 
	int OnCancelHMSPrescriptionEntry(); 
	int OnHMSPrescriptionEntryListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
