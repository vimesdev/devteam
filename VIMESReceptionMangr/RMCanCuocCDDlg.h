#ifndef RMCANCUOCCDDLG_H
#define RMCANCUOCCDDLG_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CRMCanCuocCDDlg : public CGuiDialog{
protected:
public:
	JSONVALUE m_jData;
	CString m_szQrInput;
	CString m_szIdCardIssueDate;
	CGuiGroupBox	m_wndPatientInfor;
	CGuiGroupBox	m_wndCardInfor;
	CGuiLabel		m_wndCCCDLabel;
	CGuiTextCtrl	m_wndCCCD;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndEthnicLabel;
	CGuiComboBox	m_wndEthnic;							 
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndCardnoLabel;
	CGuiTextCtrl	m_wndCardno;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndCheckin;
	CGuiLabel		m_wndRegCodeLabel;
	CGuiComboBox	m_wndRegCode;
	CGuiLabel		m_wndAreaLabel;
	CGuiComboBox	m_wndArea;
	CGuiLabel		m_wndDiscountLabel;
	CGuiTextCtrl	m_wndDiscount;

	CString	m_szCCCD;
	CString	m_szPatientName;
	CString	m_szBirthDate;
	CString	m_szSexKey;
	CString	m_szEthnicKey;					   
	CString	m_szAddress;
	CString	m_szCardno;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szRegCodeKey;
	CString	m_szAreaKey;
	CString m_szCode;
	CString m_szAccess_token;
	CString m_szPassword;
	CString m_szUserName;
	CString m_szToken_ID;
	CString m_szURL;
	int m_nDiscount;
	int m_nGroupID;
	CWnd*	m_pWndOrder;
	//void			OnCCCDChange(); 
	//void			OnCCCDSetfocus(); 
	//void			OnCCCDKillfocus(); 
	int			OnCCCDCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnBirthDateChange(); 
	//void			OnBirthDateSetfocus(); 
	//void			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	void			OnEthnicSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEthnicSelendok(); 
	//void			OnEthnicSetfocus(); 
	//void			OnEthnicKillfocus(); 
	long			OnEthnicLoadData(); 
	//void			OnEthnicAddNew(); 																
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnCardnoChange(); 
	//void			OnCardnoSetfocus(); 
	//void			OnCardnoKillfocus(); 
	int			OnCardnoCheckValue(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnCloseSelect(); 
	void			OnCheckinSelect(); 
	void			OnRegCodeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRegCodeSelendok(); 
	//void			OnRegCodeSetfocus(); 
	//void			OnRegCodeKillfocus(); 
	long			OnRegCodeLoadData(); 
	//void			OnRegCodeAddNew(); 
	void			OnAreaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAreaSelendok(); 
	//void			OnAreaSetfocus(); 
	//void			OnAreaKillfocus(); 
	long			OnAreaLoadData(); 
	//void			OnAreaAddNew(); 
	CRMCanCuocCDDlg(CWnd *pParent);
	~CRMCanCuocCDDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddRMCanCuocCDDlg(); 
	int OnEditRMCanCuocCDDlg(); 
	int OnDeleteRMCanCuocCDDlg(); 
	int OnSaveRMCanCuocCDDlg(); 
	int OnCancelRMCanCuocCDDlg(); 
	int OnRMCanCuocCDDlgListLoadData(); 
	bool CheckInCardInfor();
};
#endif
