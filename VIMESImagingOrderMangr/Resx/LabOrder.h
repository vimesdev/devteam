#ifndef LABORDER_H
#define LABORDER_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2006-2008.			
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
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
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
class CLabOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiListCtrl	m_wndSpecimemList;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiNumberCtrl	m_wndOrderNo;
	CGuiLabel		m_wndBarcodeLabel;
	CGuiTextCtrl	m_wndBarcode;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndPerformedDateLabel;
	CGuiDateTimeCtrl	m_wndPerformedDate;
	CGuiLabel		m_wndPerformerLabel;
	CGuiComboBox	m_wndPerformer;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiLabel		m_wndPaymentStateLabel;
	CGuiTextCtrl	m_wndPaymentState;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	long	m_nOrderNo;
	CString	m_szBarcode;
	CString	m_szOrderDate;
	CString	m_szDoctor;
	CString	m_szPerformedDate;
	CString	m_szPerformerKey;
	CString	m_szObject;
	CString	m_szPaymentState;
	CString	m_szPatientName;
	CString	m_szAge;
	CDbfMap	m_hms_pcorderTbl;
	long			OnSpecimemListLoadData(); 
	void			OnSpecimemListSelectChange(int nOldItem, int nNewItem); 
	void			OnSpecimemListDblClick(); 
	int			OnSpecimemListDeleteItem(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnBarcodeChange(); 
	//void			OnBarcodeSetfocus(); 
	//void			OnBarcodeKillfocus(); 
	int			OnBarcodeCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnDoctorChange(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	int			OnDoctorCheckValue(); 
	//void			OnPerformedDateChange(); 
	//void			OnPerformedDateSetfocus(); 
	//void			OnPerformedDateKillfocus(); 
	int			OnPerformedDateCheckValue(); 
	void			OnPerformerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformerSelendok(); 
	//void			OnPerformerSetfocus(); 
	//void			OnPerformerKillfocus(); 
	long			OnPerformerLoadData(); 
	void			OnPerformerAddNew(); 
	//void			OnObjectChange(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	//void			OnPaymentStateChange(); 
	//void			OnPaymentStateSetfocus(); 
	//void			OnPaymentStateKillfocus(); 
	int			OnPaymentStateCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	CLabOrder();
	~CLabOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddLabOrder(); 
	int OnEditLabOrder(); 
	int OnDeleteLabOrder(); 
	int OnSaveLabOrder(); 
	int OnCancelLabOrder(); 
	int OnLabOrderListLoadData(); 
};
#endif
