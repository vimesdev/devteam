#ifndef EDUTRANSFERORDER_H
#define EDUTRANSFERORDER_H

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
class CEduTransferOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndGroupInformation;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndDocIDLabel;
	CGuiTextCtrl	m_wndDocID;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndContentLabel;
	CGuiTextCtrl	m_wndContent;
	CGuiLabel		m_wndDateLabel;
	CGuiDateTimeCtrl	m_wndDate;
	CGuiLabel		m_wndStartDateLabel;
	CGuiDateTimeCtrl	m_wndStartDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateTimeCtrl	m_wndEndDate;
	CGuiLabel		m_wndTeacherLabel;
	CGuiComboBox	m_wndTeacher;
	CGuiLabel		m_wndLocationLabel;
	CGuiTextCtrl	m_wndLocation;
	CGuiLabel		m_wndProjectLabel;
	CGuiTextCtrl	m_wndProject;
	CGuiLabel		m_wndResultLabel;
	CGuiComboBox	m_wndResult;
	CGuiLabel		m_wndUnitLabel;
	CGuiComboBox	m_wndWorkUnit;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndAddLine;
	long	m_nID;
	CString	m_szDocID;
	CString	m_szStatusKey;
	CString	m_szNameKey;
	CString	m_szContent;
	CString	m_szDate;
	CString	m_szStartDate;
	CString	m_szEndDate;
	CString	m_szTeacherKey;
	CString	m_szLocation;
	CString	m_szProject;
	CString	m_szResultKey;
	CString	m_szWorkUnitKey;
	CString	m_szNote;
	CDbfMap	m_edu_transferorderTbl;
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnDocIDChange(); 
	//void			OnDocIDSetfocus(); 
	//void			OnDocIDKillfocus(); 
	int			OnDocIDCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	//void			OnContentChange(); 
	//void			OnContentSetfocus(); 
	//void			OnContentKillfocus(); 
	int			OnContentCheckValue(); 
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//void			OnStartDateChange(); 
	//void			OnStartDateSetfocus(); 
	//void			OnStartDateKillfocus(); 
	int			OnStartDateCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	void			OnTeacherSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTeacherSelendok(); 
	//void			OnTeacherSetfocus(); 
	//void			OnTeacherKillfocus(); 
	long			OnTeacherLoadData(); 
	//void			OnTeacherAddNew(); 
	//void			OnLocationChange(); 
	//void			OnLocationSetfocus(); 
	//void			OnLocationKillfocus(); 
	int			OnLocationCheckValue(); 
	//void			OnProjectChange(); 
	//void			OnProjectSetfocus(); 
	//void			OnProjectKillfocus(); 
	int			OnProjectCheckValue(); 
	void			OnResultSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnResultSelendok(); 
	//void			OnResultSetfocus(); 
	//void			OnResultKillfocus(); 
	long			OnResultLoadData(); 
	//void			OnResultAddNew(); 
	void			OnWorkUnitSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnWorkUnitSelendok(); 
	//void			OnWorkUnitSetfocus(); 
	//void			OnWorkUnitKillfocus(); 
	long			OnWorkUnitLoadData(); 
	//void			OnWorkUnitAddNew(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnAddLineSelect(); 
	CEduTransferOrder();
	~CEduTransferOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEduTransferOrder(); 
	int OnEditEduTransferOrder(); 
	int OnDeleteEduTransferOrder(); 
	int OnSaveEduTransferOrder(); 
	int OnCancelEduTransferOrder(); 
	int OnEduTransferOrderListLoadData(); 
};
#endif
