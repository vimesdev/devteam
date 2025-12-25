#ifndef CANCERPRESCRIPTIONORDERIN_H
#define CANCERPRESCRIPTIONORDERIN_H

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
#include "CancerPrescriptionPrepare.h"
class AFX_EXT_CLASS CCancerPrescriptionOrderIN : public CGuiView{
protected:
	
	long	m_nOrderID;
	long	m_nProductID;
	long	m_nTreatIdx;
	double	m_nUnitPrice;
	CString	m_szIsPaid;
	CString	m_szType;
public:
	bool	m_bPreview;
	//CCancerPrescriptionPrepare	m_wndLines;

	CGuiGroupBox	m_wndPatientProfiles;
	CGuiGroupBox	m_wndOrderLine;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndStatusLabel;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndDocNoLabel;
	CGuiNumberCtrl	m_wndDocNo;
	CGuiNumberCtrl	m_wndOrderNo;

	CGuiButton		m_wndFind;
	CGuiListCtrl	m_wndPatientList;
	CGuiListCtrl	m_wndDrugList;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndImport;
	CGuiButton		m_wndExport;
	CGuiCheckBox	m_wndShowDetailForItems;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndTotalPaymentLabel;
	CGuiNumberCtrl	m_wndTotalPayment;
	CGuiTabCtrl		m_wndTab;

	CString	m_szStorageKey;
	CString	m_szDepartmentKey;
	CString	m_szStatusKey;
	CString	m_szFromDate;
	CString m_szStatus;
	CString	m_szToDate;
	CString	m_szName;
	long	m_nDocNo;
	long	m_nOrderNo;

	BOOL	m_bShowDetailForItems;
	double	m_nTotalAmount;
	double	m_nTotalPayment;
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	void			OnStorageAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	void			OnStatusAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnDocNoChange(); 
	//void			OnDocNoSetfocus(); 
	//void			OnDocNoKillfocus(); 
	int			OnDocNoCheckValue(); 
	int			OnOrderNoCheckValue(); 
	void			OnFindSelect(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	int		OnPatientListExportOrder();
	int		OnPreparationDrug();
	int		OnStorageImport();

	void		InDonhoatrilieu();
	void OnResizeLayout();
	void		InPhieudieuche();
	void		InMauso3();

	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	void			OnPrintSelect(); 
	void			OnImportSelect(); 
	void			OnExportSelect(); 
	void			OnReturnSelect(); 
	void			OnShowDetailForItemsSelect(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	//void			OnTotalPaymentChange(); 
	//void			OnTotalPaymentSetfocus(); 
	//void			OnTotalPaymentKillfocus(); 
	int			OnTotalPaymentCheckValue();

	void		OnRollbackOrder();
	void		OnRecalcOrder();
	CString		GetCurrentStatus();
	CCancerPrescriptionOrderIN();
	~CCancerPrescriptionOrderIN();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSPrescriptionOrder(); 
	int OnEditPMSPrescriptionOrder(); 
	int OnDeletePMSPrescriptionOrder(); 
	int OnSavePMSPrescriptionOrder(); 
	int OnExportPMSPrescriptionOrder(); 
	int OnPMSPrescriptionOrderListLoadData();
	void ShowDetail(bool bDetail);
	void OnDrugListEditUnitPrice();
};
#endif
