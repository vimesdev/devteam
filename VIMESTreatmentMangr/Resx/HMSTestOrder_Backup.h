#ifndef HMSTESTORDER_BACKUP_H
#define HMSTESTORDER_BACKUP_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Vietnamese Medical Software Join Stock Company. 2006-2008.			
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
class CHMSTestOrder_Backup : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiListCtrl	m_wndOrderList;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndResultDateLabel;
	CGuiDateCtrl	m_wndResultDate;
	CGuiLabel		m_wndTreatDoctorLabel;
	CGuiComboBox	m_wndTreatDoctor;
	CGuiLabel		m_wndPractitionerLabel;
	CGuiComboBox	m_wndPractitioner;
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
	long	m_nOrderID;
	CString	m_szOrderDate;
	CString	m_szResultDate;
	CString	m_szTreatDoctorKey;
	CString	m_szPractitionerKey;
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
	int			OnTreatDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnTreatDoctorSelendok(); 
	//int			OnTreatDoctorSetfocus(); 
	//int			OnTreatDoctorKillfocus(); 
	int			OnTreatDoctorLoadData(); 
	int			OnTreatDoctorAddNew(); 
	int			OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnPractitionerSelendok(); 
	//int			OnPractitionerSetfocus(); 
	//int			OnPractitionerKillfocus(); 
	int			OnPractitionerLoadData(); 
	int			OnPractitionerAddNew(); 
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
	CHMSTestOrder_Backup();
	~CHMSTestOrder_Backup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTestOrder_Backup(); 
	int OnEditHMSTestOrder_Backup(); 
	int OnDeleteHMSTestOrder_Backup(); 
	int OnSaveHMSTestOrder_Backup(); 
	int OnCancelHMSTestOrder_Backup(); 
	int OnHMSTestOrder_BackupListLoadData(); 
};
#endif
