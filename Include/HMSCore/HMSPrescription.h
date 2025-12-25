#ifndef HMSPRESCRIPTION_H
#define HMSPRESCRIPTION_H

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
#include "HMSPrescriptionPopup.h"
#include "TaskbarNotifier.h"	

class AFX_EXT_CLASS CHMSPrescription : public CGuiView{
protected:
public:	
	CTaskbarNotifier		m_wndNotification;
	CDialogBar		m_wndDlgBar;
	CHMSPrescriptionPopup m_wndPopup;
	bool			m_bIsFunctionalFoods;

	bool			m_bAddEntry;
	int				m_nStockID;
	int				m_nItem;
	long			m_nOrderID;

	CString			m_szStatus;
	CString			m_szoperaID;
	CString			m_szCreatedBy;	
	CString			m_szDoctor;
	CString			m_szIsPaid;
	void			RefreshData();

	CGuiGroupBox	m_wndPrescriptionInformation;
	CGuiListCtrl	m_wndOrderList;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndAdviceLabel;
	CGuiTextCtrl	m_wndAdvice;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSend;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndAddFoods;
	CGuiTextCtrl	m_wndTestResultWaring;
	CGuiButton		m_wndShowLog;
	CString	m_szTestResultWaring;

	CGuiListCtrl	m_wndDrugInfoList;
	CString			m_szAdvice;
	
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	int			OnOrderListSmartPrescription(); 
	int			OnOldPrescriprion();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnRecalOrderQty();
	int			OnListDeleteItem(); 
	int			OnListEditQuantityItem(); 
	int			OnListAddMaterialItem();
	int			OnTestResultWaringCheckValue();

	void		OnAddExternalPrescription();
	void		OnAddAdvice();
	void			OnListEditDrugUsage(); 

	//void			OnAdviceChange(); 
	//void			OnAdviceSetfocus(); 
	//void			OnAdviceKillfocus(); 
	int			OnAdviceCheckValue(); 
	void			OnAddSelect(); 
	
	void			OnDeleteSelect(); 
	void			OnSendSelect(); 
	void			OnPrintSelect(); 
	void			OnPrintPreview();
	void			OnPrintPreviewDeliveryOrder();
	void			OnAddFunctionalFoodsSelect();
	void			OnShowLogSelect();
	void			OnPrintPreview2();
	CHMSPrescription();
	~CHMSPrescription();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	void ShowPopup();
	void HidePopup();
	int SetMode(int nMode);
	int OnAddHMSPrescription(); 
	int OnEditHMSPrescription(); 
	int OnDeleteHMSPrescription(); 
	int OnSaveHMSPrescription(); 
	int OnCancelHMSPrescription(); 
	int OnHMSPrescriptionListLoadData(); 
	
	int OnPrescriptionApproved();
	void OnAfterClosePopup();
	CString	GetOrderStatus();
	
	bool	CheckBeforePrint();
	void	OnConfirmIssueDrug();
	void PrintPrescription();
	void	Refresh(long nOrderID);

	virtual BOOL PreTranslateMessage(MSG *pMsg);

	void	OnResizeLayout();
	void	InVongDeoTay();
	void	OnOrderListPrintConsultancy();
    CString IsA11Patient();
};
#endif
