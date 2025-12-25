#ifndef HMSCancerPrescriptionPopupEX_H
#define HMSCancerPrescriptionPopupEX_H

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
#include "GuiPopup.h"
#include "DbField.h"
#include "GuiAutoTextCtrl.h"
#include "HMSDrugOrdering.h"

class CHMSCancerPrescriptionPopupEx : public CGuiPopup{
protected:
public:	
	CString	m_szOrders;
	long	m_nIdx;
	long	m_nTreatIdx;
	CString	m_szTreatDate;
	CString	m_szOrderDate;
	CString	m_szStorageObjects;


	CGuiGroupBox	m_wndPrescriptionInput;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndUnitLabel;
	CGuiComboBox	m_wndUnit;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiLabel		m_wndIndicationLabel;
	CGuiComboBox	m_wndIndication;
	CGuiLabel		m_wndUsageLabel;
	CGuiTextCtrl	m_wndUsage;
	CGuiLabel		m_wndSpeedLabel;
	CGuiTextCtrl	m_wndSpeed;
	
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString		m_szName;
	CString		m_szUnitKey;
	float	m_nQty;
	float	m_nMaxQuantity;
	CString	m_szIndicationKey;
	CString	m_szSpeed;
	CString	m_szUsage;

	CDbfMap	m_hms_prescriptionTbl;
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	int				OnNameCheckValue(); 
	//void			OnNameAddNew(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus();
	long			OnUnitLoadData(); 
	int			OnUnitCheckValue(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
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
	
//	CHMSCancerPrescriptionPopupEx();
	CHMSCancerPrescriptionPopupEx(CWnd *pParent, int nMode=VM_ADD, int x=0, int y =0);
	~CHMSCancerPrescriptionPopupEx();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCancerPrescriptionPopupEx(); 
	int OnEditHMSCancerPrescriptionPopupEx(); 
	int OnDeleteHMSCancerPrescriptionPopupEx(); 
	int OnSaveHMSCancerPrescriptionPopupEx(); 
	int OnCancelHMSCancerPrescriptionPopupEx(); 
	int OnHMSCancerPrescriptionPopupExListLoadData(); 
	//Ham ket thua tu lop CGuiPopup;
//	void	ShowPopup(CWnd* pWndRef, int nShowPopup=WPS_BOTTOM);
//	void	ClosePopup();
//	void	CreatePopup(bool bInPackage=false);


	DECLARE_MESSAGE_MAP()

};
#endif
