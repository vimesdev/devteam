#ifndef HMSSURGERYMATERIALDRUGDIALOG_H
#define HMSSURGERYMATERIALDRUGDIALOG_H

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

class CHMSSurgeryMaterialDrugDialog : public CGuiView
{

public:
	long	m_nOrderID;
	bool	m_bAddOrder;
	long	m_nPatientNo;
	long	m_nDocumentNo;
	long	m_nRefIndex;

	CString m_szDept;
	CString	m_szObject;
	CString m_szObjectType;
	CString m_szItemID;


	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndDrugName;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiButton		m_wndSave;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiGroupBox	m_wndMaterialDrugInformation;

	CString	m_szStockKey;
	CString	m_szDrugNameKey;
	CString m_szDrugName;
	CString m_szUsage;

	float	m_nQuantity;
	float	m_nMaxQuantity;
	CString	m_szOrderDate;

	bool	m_bInsCardExpire;
	bool	m_bIsPrecision;

	CDbfMap	m_hms_pharma_orderTbl;
	CDbfMap m_hms_pharma_order_lineTbl;


	void			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStockSelendok(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	long			OnStockLoadData(); 
	void			OnStockAddNew(); 
	void			OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDrugNameSelendok(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	long			OnDrugNameLoadData(); 
	void			OnDrugNameAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnSaveSelect(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	CHMSSurgeryMaterialDrugDialog();
	~CHMSSurgeryMaterialDrugDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSurgeryMaterialDrugDialog(); 
	int OnEditHMSSurgeryMaterialDrugDialog(); 
	int OnDeleteHMSSurgeryMaterialDrugDialog(); 
	int OnSaveHMSSurgeryMaterialDrugDialog(); 
	int OnCancelHMSSurgeryMaterialDrugDialog(); 
	int OnHMSSurgeryMaterialDrugDialogListLoadData(); 

	DECLARE_MESSAGE_MAP()
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnClose();
#if _MSC_VER >= 1500
	afx_msg LRESULT OnNcHitTest(CPoint point);
#else
	afx_msg UINT OnNcHitTest(CPoint point);
#endif
};
#endif
