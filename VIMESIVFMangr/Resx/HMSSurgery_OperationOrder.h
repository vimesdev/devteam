#ifndef HMSSURGERY_OPERATIONORDER_H
#define HMSSURGERY_OPERATIONORDER_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Medical Informatics Technology and Equipment Join Stock Company. 2008-2010. 			
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
//	Ban quyen cua Cong Ty Co Phan Thiet Bi va Cong Nghe Tin Hoc Y Te MITECO 2008-2010.
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
class CHMSSurgery_OperationOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndSurgery_OperationInformation;
	CGuiListCtrl	m_wndOrderList;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndPerformDateLabel;
	CGuiDateTimeCtrl	m_wndPerformDate;
	CGuiLabel		m_wndMethodLabel;
	CGuiComboBox	m_wndMethod;
	CGuiLabel		m_wndInsensibleMethodLabel;
	CGuiTextCtrl	m_wndInsensibleMethod;
	CGuiLabel		m_wndAfterSOLabel;
	CGuiTextCtrl	m_wndBeforeSO;
	CGuiLabel		m_wndBeforeSOLabel;
	CGuiTextCtrl	m_wndAfterSO;
	CGuiLabel		m_wndSurgeonLabel;
	CGuiComboBox	m_wndPractitioner;
	CGuiLabel		m_wndAnesthetistLabel;
	CGuiComboBox	m_wndAnesthetist;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndPerformDeptLabel;
	CGuiComboBox	m_wndPerformDept;
	CString	m_szOrderDate;
	CString	m_szPerformDate;
	CString	m_szMethodKey;
	CString	m_szInsensibleMethod;
	CString	m_szBeforeSO;
	CString	m_szAfterSO;
	CString	m_szPractitionerKey;
	CString	m_szAnesthetistKey;
	CString	m_szNote;
	CString	m_szPerformDeptKey;
	CDbfMap	m_hms_soperationTbl;
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnPerformDateChange(); 
	//void			OnPerformDateSetfocus(); 
	//void			OnPerformDateKillfocus(); 
	int			OnPerformDateCheckValue(); 
	void			OnMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMethodSelendok(); 
	//void			OnMethodSetfocus(); 
	//void			OnMethodKillfocus(); 
	long			OnMethodLoadData(); 
	void			OnMethodAddNew(); 
	//void			OnInsensibleMethodChange(); 
	//void			OnInsensibleMethodSetfocus(); 
	//void			OnInsensibleMethodKillfocus(); 
	int			OnInsensibleMethodCheckValue(); 
	//void			OnBeforeSOChange(); 
	//void			OnBeforeSOSetfocus(); 
	//void			OnBeforeSOKillfocus(); 
	int			OnBeforeSOCheckValue(); 
	//void			OnAfterSOChange(); 
	//void			OnAfterSOSetfocus(); 
	//void			OnAfterSOKillfocus(); 
	int			OnAfterSOCheckValue(); 
	void			OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPractitionerSelendok(); 
	//void			OnPractitionerSetfocus(); 
	//void			OnPractitionerKillfocus(); 
	long			OnPractitionerLoadData(); 
	void			OnPractitionerAddNew(); 
	void			OnAnesthetistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAnesthetistSelendok(); 
	//void			OnAnesthetistSetfocus(); 
	//void			OnAnesthetistKillfocus(); 
	long			OnAnesthetistLoadData(); 
	void			OnAnesthetistAddNew(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnAddSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformDeptSelendok(); 
	//void			OnPerformDeptSetfocus(); 
	//void			OnPerformDeptKillfocus(); 
	long			OnPerformDeptLoadData(); 
	void			OnPerformDeptAddNew(); 
	CHMSSurgery_OperationOrder();
	~CHMSSurgery_OperationOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSurgery_OperationOrder(); 
	int OnEditHMSSurgery_OperationOrder(); 
	int OnDeleteHMSSurgery_OperationOrder(); 
	int OnSaveHMSSurgery_OperationOrder(); 
	int OnCancelHMSSurgery_OperationOrder(); 
	int OnHMSSurgery_OperationOrderListLoadData(); 
	void RefreshView(long nDocNo, int nReceptIdx);

};
#endif
