#ifndef EDUCLASSORDER_H
#define EDUCLASSORDER_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright © Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hoang Van Hay, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2012.
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
class CEduClassOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndClassInforGroupBox;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndClassIDLabel;
	CGuiTextCtrl	m_wndClassID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndStartDateLabel;
	CGuiDateCtrl	m_wndStartDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateCtrl	m_wndEndDate;
	CGuiLabel		m_wndManagerLabel;
	CGuiComboBox	m_wndManager;
	CGuiLabel		m_wndTeacherLabel;
	CGuiComboBox	m_wndTeacher;
	CGuiLabel		m_wndTotalNumberLabel;
	CGuiNumberCtrl	m_wndTotalNumber;
	CGuiLabel		m_wndContentLabel;
	CGuiTextCtrl	m_wndContent;
	CGuiLabel		m_wndNodeLabel;
	CGuiTextCtrl	m_wndNode;
	CGuiLabel		m_wndSourceLabel;
	CGuiComboBox	m_wndSource;
	CGuiLabel		m_wndLocationLabel;
	CGuiTextCtrl	m_wndLocation;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndDeptReceiveLabel;
	CGuiComboBox	m_wndDeptReceive;
	CGuiLabel		m_wndWorkUnitLabel;
	CGuiComboBox	m_wndWorkUnit;
	CGuiLabel		m_wndDecideLabel;
	CGuiTextCtrl	m_wndDecide;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndAddLine;
	CGuiListCtrl	m_wndList;
	long	m_nID;
	CString	m_szClassID;
	CString	m_szName;
	CString	m_szStartDate;
	CString	m_szEndDate;
	CString	m_szManagerKey;
	CString	m_szTeacherKey;
	long	m_nTotalNumber;
	CString	m_szContent;
	CString	m_szNode;
	CString	m_szSourceKey;
	CString	m_szLocation;
	CString	m_szTypeKey;
	CString	m_szDeptReceiveKey;
	CString	m_szWorkUnitKey;
	CString	m_szDecide;
	CString	m_szPhone;
	CString	m_szStatusKey;
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnClassIDChange(); 
	//void			OnClassIDSetfocus(); 
	//void			OnClassIDKillfocus(); 
	int			OnClassIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnStartDateChange(); 
	//void			OnStartDateSetfocus(); 
	//void			OnStartDateKillfocus(); 
	int			OnStartDateCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	void			OnManagerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnManagerSelendok(); 
	//void			OnManagerSetfocus(); 
	//void			OnManagerKillfocus(); 
	long			OnManagerLoadData(); 
	//void			OnManagerAddNew(); 
	void			OnTeacherSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTeacherSelendok(); 
	//void			OnTeacherSetfocus(); 
	//void			OnTeacherKillfocus(); 
	long			OnTeacherLoadData(); 
	//void			OnTeacherAddNew(); 
	//void			OnTotalNumberChange(); 
	//void			OnTotalNumberSetfocus(); 
	//void			OnTotalNumberKillfocus(); 
	int			OnTotalNumberCheckValue(); 
	//void			OnContentChange(); 
	//void			OnContentSetfocus(); 
	//void			OnContentKillfocus(); 
	int			OnContentCheckValue(); 
	//void			OnNodeChange(); 
	//void			OnNodeSetfocus(); 
	//void			OnNodeKillfocus(); 
	int			OnNodeCheckValue(); 
	void			OnSourceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSourceSelendok(); 
	//void			OnSourceSetfocus(); 
	//void			OnSourceKillfocus(); 
	long			OnSourceLoadData(); 
	//void			OnSourceAddNew(); 
	//void			OnLocationChange(); 
	//void			OnLocationSetfocus(); 
	//void			OnLocationKillfocus(); 
	int			OnLocationCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnDeptReceiveSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptReceiveSelendok(); 
	//void			OnDeptReceiveSetfocus(); 
	//void			OnDeptReceiveKillfocus(); 
	long			OnDeptReceiveLoadData(); 
	//void			OnDeptReceiveAddNew(); 
	void			OnWorkUnitSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWorkUnitSelendok(); 
	//void			OnWorkUnitSetfocus(); 
	//void			OnWorkUnitKillfocus(); 
	long			OnWorkUnitLoadData(); 
	//void			OnWorkUnitAddNew(); 
	//void			OnDecideChange(); 
	//void			OnDecideSetfocus(); 
	//void			OnDecideKillfocus(); 
	int			OnDecideCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	void			OnAddSelect(); 
	void			OnSaveSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnAddLineSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CEduClassOrder();
	~CEduClassOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEduClassOrder(); 
	int OnEditEduClassOrder(); 
	int OnDeleteEduClassOrder(); 
	int OnSaveEduClassOrder(); 
	int OnCancelEduClassOrder(); 
	int OnEduClassOrderListLoadData(); 
};
#endif
