#ifndef HMSTESTORDER_H
#define HMSTESTORDER_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Vietnamese Medical Software Join Stock Company. 2006-2008.			
//	All rights reserved. 
//	This program is protected by Viet nam and interEthnical treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@VIMES.com.vn or hayhv@yahoo.com
//	Website: http://www.VIMES.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
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
class CHMSTestOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiListCtrl	m_wndOrderList;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiTextCtrl	m_wndOrderID;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndResultDateLabel;
	CGuiDateTimeCtrl	m_wndResultDate;
	CGuiLabel		m_wndTreatDoctorLabel;
	CGuiTextCtrl	m_wndTreatDoctor;
	CGuiLabel		m_wndPractitionerLabel;
	CGuiTextCtrl	m_wndPractitioner;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiListCtrl	m_wndTestList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndSave;
	CString	m_szOrderID;
	CString	m_szOrderDate;
	CString	m_szResultDate;
	CString	m_szTreatDoctor;
	CString	m_szPractitioner;
	CString	m_szStatus;
	CString	m_szNote;
	int			OnOrderListLoadData(); 
	int			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	int			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	//int			OnOrderIDChange(); 
	//int			OnOrderIDSetfocus(); 
	//int			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	//int			OnOrderDateChange(); 
	//int			OnOrderDateSetfocus(); 
	//int			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//int			OnResultDateChange(); 
	//int			OnResultDateSetfocus(); 
	//int			OnResultDateKillfocus(); 
	int			OnResultDateCheckValue(); 
	//int			OnTreatDoctorChange(); 
	//int			OnTreatDoctorSetfocus(); 
	//int			OnTreatDoctorKillfocus(); 
	int			OnTreatDoctorCheckValue(); 
	//int			OnPractitionerChange(); 
	//int			OnPractitionerSetfocus(); 
	//int			OnPractitionerKillfocus(); 
	int			OnPractitionerCheckValue(); 
	//int			OnStatusChange(); 
	//int			OnStatusSetfocus(); 
	//int			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//int			OnNoteChange(); 
	//int			OnNoteSetfocus(); 
	//int			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	int			OnTestListLoadData(); 
	int			OnTestListSelectChange(int nOldItem, int nNewItem); 
	int			OnTestListDblClick(); 
	int			OnTestListDeleteItem(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnConfirmSelect(); 
	int			OnCancelSelect(); 
	int			OnPrintSelect(); 
	int			OnSaveSelect(); 
	CHMSTestOrder();
	~CHMSTestOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTestOrder(); 
	int OnEditHMSTestOrder(); 
	int OnDeleteHMSTestOrder(); 
	int OnSaveHMSTestOrder(); 
	int OnCancelHMSTestOrder(); 
	int OnHMSTestOrderListLoadData(); 
};
#endif
