#ifndef HMSOPERATIONMATERIALDIALOGEX_H
#define HMSOPERATIONMATERIALDIALOGEX_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Storage Company. 2005-2010. 			
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
#include "GuiDialog.h"
#include "DbField.h"
#define VM_PREVIEW	0x010

class AFX_EXT_CLASS CHMSOperationMaterialDialogEX : public CGuiDialog{
protected:
	bool	m_bAddOrder;
	
	CString	m_szStatus;
	bool	m_bIsMedicalCabinet;
	int		m_nStorageID;
public:
	bool	m_bArmletOrder;
	CString		m_szCreatedBy;
	CString		m_szDoctor;
	CString	m_szFeeID;
	long	m_nOrderID;
	long	m_nRefIndex;
	int		m_nRoomID;
	int		m_nOldRoomID;
	bool	m_bOutPatient;
	bool	m_bInpackage;
	bool	m_bIsReq;
	BOOL	m_bServicePackage;
	BOOL	m_bViewMaterial;

	CString	m_szOrderDept;
	CString	m_szType;
	CString	m_szDeptType;
	CString m_szProdCountry;
	CString	m_szOperationDate;

	CGuiLabel		m_wndOperationNameLabel;
	CGuiTextCtrl	m_wndOperationName;
	CGuiGroupBox	m_wndDrugEntry;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiNumberCtrl	m_wndMaxQuantity;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndAccept;
	CString	m_szOperationName;
	CString	m_szStorageKey;
	CString	m_szOrderDate;
	CString	m_szNameKey;
	long	m_nQty;
	long	m_nMaxQuantity;
	long    m_nDocumentNo;
	CString	m_szNote;
	CDbfMap	m_hms_pharmaorderTbl;
	CDbfMap	m_hms_pharmaorder_lineTbl;
	CDbfMap	m_hms_ipharmaorderTbl;
	CDbfMap	m_hms_ipharmaorder_lineTbl;



	//void			OnOperationNameChange(); 
	//void			OnOperationNameSetfocus(); 
	//void			OnOperationNameKillfocus(); 
	int			OnOperationNameCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	void			OnConfirmIssueDrug();
	int				OnListDeleteItem(); 
	int				OnAddSmartPrescription();
	int				OnAddSmartPrescriptionEX();
	int				OnAddHCTemplate();
	int				OnOrderListRefresh();
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	void			OnStorageAddNew(); 
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
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	//void			OnMaxQuantityChange(); 
	//void			OnMaxQuantitySetfocus(); 
	//void			OnMaxQuantityKillfocus(); 
	int			OnMaxQuantityCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnAcceptSelect(); 
	CHMSOperationMaterialDialogEX(CWnd *pParent, int x=0, int y=0);
	~CHMSOperationMaterialDialogEX();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOperationMaterialDialog(); 
	int OnEditHMSOperationMaterialDialog(); 
	int OnDeleteHMSOperationMaterialDialog(); 
	int OnSaveHMSOperationMaterialDialog(); 
	int OnCancelHMSOperationMaterialDialog(); 
	int OnHMSOperationMaterialDialogListLoadData(); 
	DECLARE_MESSAGE_MAP()
	afx_msg void OnClose();
	virtual BOOL PreTranslateMessage(MSG* pMsg);

	CString GetOrderStatus();

};
#endif
