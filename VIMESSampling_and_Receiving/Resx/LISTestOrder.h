#ifndef LISTESTORDER_H
#define LISTESTORDER_H

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
class CLISTestOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndTestOrderInformation;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiNumberCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndFDeptLabel;
	CGuiTextCtrl	m_wndFDept;
	CGuiLabel		m_wndFRoomLabel;
	CGuiNumberCtrl	m_wndFRoom;
	CGuiLabel		m_wndPDeptLabel;
	CGuiTextCtrl	m_wndPDept;
	CGuiLabel		m_wndPRoomLabel;
	CGuiComboBox	m_wndPRoom;
	CGuiLabel		m_wndPractitionerLabel;
	CGuiComboBox	m_wndPractitioner;
	CGuiLabel		m_wndPerformDateLabel;
	CGuiDateTimeCtrl	m_wndPerformDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndResultLabel;
	CGuiTextCtrl	m_wndResult;
	CGuiLabel		m_wndDescLabel;
	CGuiTextCtrl	m_wndDesc;
	CGuiLabel		m_wndRemarkLabel;
	CGuiTextCtrl	m_wndRemark;
	CGuiLabel		m_wndObjectLabel;
	CGuiTextCtrl	m_wndObject;
	CGuiListCtrl	m_wndTestList;
	CGuiLabel		m_wndTestNameLabel;
	CGuiTextCtrl	m_wndTestName;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndCreatedByLabel;
	CGuiTextCtrl	m_wndCreatedBy;
	CGuiLabel		m_wndUpdatedByLabel;
	CGuiTextCtrl	m_wndUpdatedBy;
	long	m_nDocumentNo;
	long	m_nOrderNo;
	CString	m_szOrderDate;
	CString	m_szDoctor;
	CString	m_szFDept;
	long	m_nFRoom;
	CString	m_szPDept;
	CString	m_szPRoomKey;
	CString	m_szPractitionerKey;
	CString	m_szPerformDate;
	CString	m_szStatus;
	CString	m_szResult;
	CString	m_szDesc;
	CString	m_szRemark;
	CString	m_szObject;
	CString	m_szTestName;
	CString	m_szCreatedBy;
	CString	m_szUpdatedBy;
	CDbfMap	m_hms_testorderTbl;
	//int			OnDocumentNoChange(); 
	//int			OnDocumentNoSetfocus(); 
	//int			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//int			OnOrderNoChange(); 
	//int			OnOrderNoSetfocus(); 
	//int			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//int			OnOrderDateChange(); 
	//int			OnOrderDateSetfocus(); 
	//int			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//int			OnDoctorChange(); 
	//int			OnDoctorSetfocus(); 
	//int			OnDoctorKillfocus(); 
	int			OnDoctorCheckValue(); 
	//int			OnFDeptChange(); 
	//int			OnFDeptSetfocus(); 
	//int			OnFDeptKillfocus(); 
	int			OnFDeptCheckValue(); 
	//int			OnFRoomChange(); 
	//int			OnFRoomSetfocus(); 
	//int			OnFRoomKillfocus(); 
	int			OnFRoomCheckValue(); 
	//int			OnPDeptChange(); 
	//int			OnPDeptSetfocus(); 
	//int			OnPDeptKillfocus(); 
	int			OnPDeptCheckValue(); 
	int			OnPRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnPRoomSelendok(); 
	//int			OnPRoomSetfocus(); 
	//int			OnPRoomKillfocus(); 
	int			OnPRoomLoadData(); 
	int			OnPRoomAddNew(); 
	int			OnPractitionerSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnPractitionerSelendok(); 
	//int			OnPractitionerSetfocus(); 
	//int			OnPractitionerKillfocus(); 
	int			OnPractitionerLoadData(); 
	int			OnPractitionerAddNew(); 
	//int			OnPerformDateChange(); 
	//int			OnPerformDateSetfocus(); 
	//int			OnPerformDateKillfocus(); 
	int			OnPerformDateCheckValue(); 
	//int			OnStatusChange(); 
	//int			OnStatusSetfocus(); 
	//int			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//int			OnResultChange(); 
	//int			OnResultSetfocus(); 
	//int			OnResultKillfocus(); 
	int			OnResultCheckValue(); 
	//int			OnDescChange(); 
	//int			OnDescSetfocus(); 
	//int			OnDescKillfocus(); 
	int			OnDescCheckValue(); 
	//int			OnRemarkChange(); 
	//int			OnRemarkSetfocus(); 
	//int			OnRemarkKillfocus(); 
	int			OnRemarkCheckValue(); 
	//int			OnObjectChange(); 
	//int			OnObjectSetfocus(); 
	//int			OnObjectKillfocus(); 
	int			OnObjectCheckValue(); 
	int			OnTestListLoadData(); 
	int			OnTestListSelectChange(int nOldItem, int nNewItem); 
	int			OnTestListDblClick(); 
	int			OnTestListDeleteItem(); 
	//int			OnTestNameChange(); 
	//int			OnTestNameSetfocus(); 
	//int			OnTestNameKillfocus(); 
	int			OnTestNameCheckValue(); 
	int			OnUpdateSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	int			OnPrintSelect(); 
	//int			OnCreatedByChange(); 
	//int			OnCreatedBySetfocus(); 
	//int			OnCreatedByKillfocus(); 
	int			OnCreatedByCheckValue(); 
	//int			OnUpdatedByChange(); 
	//int			OnUpdatedBySetfocus(); 
	//int			OnUpdatedByKillfocus(); 
	int			OnUpdatedByCheckValue(); 
	CLISTestOrder();
	~CLISTestOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddLISTestOrder(); 
	int OnEditLISTestOrder(); 
	int OnDeleteLISTestOrder(); 
	int OnSaveLISTestOrder(); 
	int OnCancelLISTestOrder(); 
	int OnLISTestOrderListLoadData(); 
};
#endif
