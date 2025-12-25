#ifndef HMSTRACKINGPATIENTFEEDIALOG_H
#define HMSTRACKINGPATIENTFEEDIALOG_H

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
class CHMSTrackingPatientFeeDialog : public CGuiDialog{
protected:
public:

	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndNumberInwardLabel;
	CGuiTextCtrl	m_wndNumberInward;
	CGuiLabel		m_wndFeeLevelLabel;
	CGuiComboBox	m_wndFeeLevel;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndUnpaidLabel;
	CGuiNumberCtrl	m_wndFromMoney;
	CGuiLabel		m_wndSign;
	CGuiNumberCtrl	m_wndToMoney;
	CGuiButton		m_wndSearch;
	CGuiListCtrl	m_wndList;

	CString	m_szDepartmentKey;
	CString	m_szObjectKey;
	long	m_nDocumentNo;
	CString	m_szNumberInward;
	CString	m_szFeeLevelKey;
	CString	m_szPatientName;

	long	m_nFromMoney;
	long	m_nToMoney;

	bool m_bReload;

	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	//void			OnFromMoneyChange(); 
	//void			OnFromMoneySetfocus(); 
	//void			OnFromMoneyKillfocus(); 
	int			OnFromMoneyCheckValue(); 
	//void			OnToMoneyChange(); 
	//void			OnToMoneySetfocus(); 
	//void			OnToMoneyKillfocus(); 
	int			OnToMoneyCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnNumberInwardChange(); 
	//void			OnNumberInwardSetfocus(); 
	//void			OnNumberInwardKillfocus(); 
	int			OnNumberInwardCheckValue();
	void			OnFeeLevelSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFeeLevelSelendok(); 
	//void			OnFeeLevelSetfocus(); 
	//void			OnFeeLevelKillfocus(); 
	long			OnFeeLevelLoadData(); 
	//void			OnFeeLevelAddNew();
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	void			OnSearchSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSTrackingPatientFeeDialog(CWnd *pParent);
	~CHMSTrackingPatientFeeDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTrackingPatientFeeDialog(); 
	int OnEditHMSTrackingPatientFeeDialog(); 
	int OnDeleteHMSTrackingPatientFeeDialog(); 
	int OnSaveHMSTrackingPatientFeeDialog(); 
	int OnCancelHMSTrackingPatientFeeDialog(); 
	int OnHMSTrackingPatientFeeDialogListLoadData();

	int OnReloadData();
	int OnPrintPatientList();

};
#endif
