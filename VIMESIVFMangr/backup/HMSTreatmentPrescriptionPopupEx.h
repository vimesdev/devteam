#ifndef HMSTreatmentPrescriptionPopupEX_H
#define HMSTreatmentPrescriptionPopupEX_H

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

class CHMSTreatmentPrescriptionPopupEx : public CGuiPopup{
protected:
	
public:
	CWnd*	m_pParentOwner;
	CString	m_szOrders;
	long	m_nIdx;
	long	m_nTreatIdx;
	CString	m_szTreatDate;
	CString	m_szOrderDate;
	CString	m_szStorageObjects;

    
	CGuiGroupBox	m_wndPrescriptionInput;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
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
	CGuiLabel		m_wndPeriodDayLabel;
	CGuiComboBox	m_wndPeriodDay;
	CGuiLabel		m_wndDosageLabel;
	CGuiNumberCtrl	m_wndDosage;
	CGuiLabel		m_wndTimeDayLabel;
	CGuiNumberCtrl	m_wndTimeDay;
	CGuiLabel		m_wndTimeQtyLabel;
	CGuiNumberCtrl	m_wndTimeQty;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndDayNumLabel;
	CGuiNumberCtrl	m_wndDayNum;
	
	CGuiLabel		m_wndUsageUnitLabel;
	CGuiComboBox	m_wndUsageUnit;
	CGuiLabel		m_wndTimeLabel;
	CGuiTimeCtrl	m_wndTime;

	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndCreateAppointment;
	CString		m_szNameKey;
	CString		m_szUnitKey;
	float	m_nQty;
	float	m_nMaxQuantity;
	CString	m_szIndicationKey;
	CString	m_szSpeed;
	CString m_szPeriodDayKey;
	CString	m_szUsage;
	int		m_nDosage;
	int		m_nTimeDay;
	int		m_nTimeQty;
	CString	m_szFromDate;
	int		m_nDayNum;
	CString m_szUsageUnitKey;
	CString m_szTime;

	CDbfMap	m_hms_prescriptionTbl;
	long			OnUsageUnitLoadData();
	int				OnUsageUnitCheckValue();
	int				OnTimeCheckValue();
	void			OnNameLabelSelect();
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
	long		OnPeriodDayLoadData();
	//void			OnSpeedChange(); 
	//void			OnSpeedSetfocus(); 
	//void			OnSpeedKillfocus(); 
	int			OnSpeedCheckValue(); 
	int			OnTimeQtyCheckValue();
	//void			OnUsageChange(); 
	void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	int			OnUsageCheckValue();
	int			OnDayNumCheckValue();
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnCreateAppointmentSelect();
//	CHMSTreatmentPrescriptionPopupEx();
	CHMSTreatmentPrescriptionPopupEx(CWnd *pParent, int nMode=VM_ADD, int x=0, int y =0);
	~CHMSTreatmentPrescriptionPopupEx();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentPrescriptionPopupEx(); 
	int OnEditHMSTreatmentPrescriptionPopupEx(); 
	int OnDeleteHMSTreatmentPrescriptionPopupEx(); 
	int OnSaveHMSTreatmentPrescriptionPopupEx(); 
	int OnCancelHMSTreatmentPrescriptionPopupEx(); 
	int OnHMSTreatmentPrescriptionPopupExListLoadData(); 
	//Ham ket thua tu lop CGuiPopup;
//	void	ShowPopup(CWnd* pWndRef, int nShowPopup=WPS_BOTTOM);
	void	ClosePopup();
//	void	CreatePopup(bool bInPackage=false);


	DECLARE_MESSAGE_MAP()

};
#endif
