#ifndef HMSPhacDoPrescriptionPopup_H
#define HMSPhacDoPrescriptionPopup_H

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
#include "GuiDialog.h"
#include "DbField.h"
#include "GuiAutoTextCtrl.h"
#include "HMSDrugOrdering.h"

class  CHMSPhacDoPrescriptionPopup : public CGuiDialog
{
protected:
public:	
	int		m_nStorageId;
	long	m_nProductId;
	long	m_nDocumentNo;
	long	m_nClassID;

	long	m_nOrderID;
	CString	m_szOrders;
	int		m_nLevel1;
	int		m_nLevel2;
	int		m_nLevel3;
	bool	m_bInPackage;
	bool	m_bOutLine;
	bool	m_bIsReq;
	long	m_nTreatIdx;
	CString	m_szTreatDate;
	CString	m_szOrderDate;
	CString	m_szStorageObjects;
	CString m_szStorageCabinets;


	CGuiGroupBox	m_wndPrescriptionInput;

	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiCheckBox	m_wndServiceWarehouse;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiCheckBox	m_wndGenericSearch;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;

	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiLabel		m_wndOnHand;
	CGuiNumberCtrl	m_wndMaxQuantity;
	CGuiLabel		m_wndIndicationLabel;
	CGuiComboBox	m_wndIndication;
	CGuiLabel		m_wndSpeedLabel;
	CGuiTextCtrl	m_wndSpeed;

	CGuiLabel		m_wndUsageLabel;
	CGuiTextCtrl	m_wndUsage;
	
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;

	CGuiCheckBox	m_wndNotDailyOrder;
	CGuiLabel		m_wndTimeDayLabel;
	CGuiTextCtrl	m_wndTimeDay;
	CGuiLabel		m_wndTimeQtyLabel;
	CGuiTextCtrl	m_wndTimeQty;
	CGuiCheckBox	m_wndInsuranceUnpaid;


	CString		m_szStorageKey;
	BOOL	m_bServiceWarehouse;
	CString		m_szNameKey;
	BOOL	m_bGenericSearch;
	CString		m_szUnit;
	
	CDbfMap	m_hms_ipharmaorderTbl;

	float	m_nQty;
	float	m_nMaxQuantity;
	CString	m_szIndicationKey;
	CString	m_szSpeed;
	CString	m_szUsage;


	float	m_nHoursqty;
	CString	m_szPointOxy;

	BOOL	m_bNotDailyOrder;
	CString	m_szTimeDay;
	CString	m_szTimeQty;
	BOOL	m_bInsuranceUnpaid;	

	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	void			OnServiceWarehouseSelect(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	void			OnGenericSearchSelect(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	//void			OnMaxQuantityChange(); 
	//void			OnMaxQuantitySetfocus(); 
	//void			OnMaxQuantityKillfocus(); 
	int			OnMaxQuantityCheckValue(); 
	void			OnIndicationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIndicationSelendok(); 
	//void			OnIndicationSetfocus(); 
	//void			OnIndicationKillfocus(); 
	long			OnIndicationLoadData(); 
	int				OnIndicationCheckValue();
	//void			OnIndicationAddNew(); 
	//void			OnSpeedChange(); 
	//void			OnSpeedSetfocus(); 
	//void			OnSpeedKillfocus(); 
	int			OnSpeedCheckValue(); 
	//void			OnUsageChange(); 
	void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	int			OnUsageCheckValue();
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 

	void			OnNotDailyOrderSelect(); 
	//void			OnTimeDayChange(); 
	//void			OnTimeDaySetfocus(); 
	//void			OnTimeDayKillfocus(); 
	int			OnTimeDayCheckValue(); 
	//void			OnTimeQtyChange(); 
	//void			OnTimeQtySetfocus(); 
	//void			OnTimeQtyKillfocus(); 
	int			OnTimeQtyCheckValue(); 
	void			OnInsuranceUnpaidSelect(); 

	
//	CHMSPhacDoPrescriptionPopup();
	CHMSPhacDoPrescriptionPopup(CWnd *pParent, int nMode=VM_ADD, int x=0, int y =0);
	~CHMSPhacDoPrescriptionPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPhacDoPrescriptionPopup(); 
	int OnEditHMSPhacDoPrescriptionPopup(); 
	int OnDeleteHMSPhacDoPrescriptionPopup(); 
	int OnSaveHMSPhacDoPrescriptionPopup(); 
	int OnCancelHMSPhacDoPrescriptionPopup(); 
	int OnHMSPhacDoPrescriptionPopupListLoadData(); 
	//Ham ket thua tu lop CGuiPopup;
//	void	ShowPopup(CWnd* pWndRef, int nShowPopup=WPS_BOTTOM);
//	void	ClosePopup();
//	void	CreatePopup(bool bInPackage=false);
	
	DECLARE_MESSAGE_MAP()

};
#endif