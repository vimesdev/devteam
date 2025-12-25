#ifndef HMSINPATIENTCHARGEFEEDIALOG_H
#define HMSINPATIENTCHARGEFEEDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
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
#include "GuiDialog.h"
#include "DbField.h"
#include "ListPane.h"
typedef struct FEEITEMDATA{
	CString szFeeID;
	double	nQty;
	double	nPrice;
}FEEITEMDATA;
class CHMSInpatientChargeFeeDialog : public CGuiDialog{
protected:
	CArray<CString, CString&> m_arGroup;
	CArray<FEEITEMDATA, FEEITEMDATA&> m_arItems;
	
	CArray<int, int> m_arQuantity;

	CString	m_szGroup;
	CString	m_szDoctorKey;
	BOOL	m_bAutoPrint;
	BOOL	m_bEnterPatient;
public:
	CGuiGroupBox	m_wndGroupInformation;
	CGuiGroupBox	m_wndGroupPatient;
	CGuiGroupBox	m_wndGroupTest;
	CListPane		m_wndParaclinicalList;	
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiListCtrl	m_wndTestList;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiListCtrl	m_wndSelectList;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;

	CGuiTextCtrl	m_wndRecordNo;

	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiNumberCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndDeptFindLabel;
	CGuiComboBox	m_wndDeptFind;
	CGuiButton		m_wndGroup;
	CString	m_szDepartmentKey;
	CString	m_szSearch;

	long	m_nDocumentNo;
	CString	m_szRecordNo;
	long	m_nPatientNo;
	long	m_nInvoiceNo;
	double	m_nGroupCost;
	bool	m_bAddNew;
	CString	m_szPatientName;
	CString	m_szPatientName2;	
	int		m_nAge;
	CString	m_szSexKey;
	CString	m_szDeptFindKey;
	CString	m_szBirthDate;

	CString	m_szDescription;

	int m_nSel;

	//Table hms_patientTbl: Thong tin benh nhan
	CDbfMap	m_hms_patientTbl;
	//Table hms_doc: Thong tin ho so benh nhan
	CDbfMap	m_hms_docTbl;
	//Table hms_other_fee
	CDbfMap	m_hms_feeTbl;
	CDbfMap	m_hms_fee_invoieceTbl;


	long			OnParaclinicalListLoadData(); 
	void			OnParaclinicalListSelectChange(int nOldItem, int nNewItem); 
	void			OnParaclinicalListDblClick(); 
	int				OnParaclinicalListDeleteItem(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	long			OnTestListLoadData(); 
	void			OnTestListSelectChange(int nOldItem, int nNewItem); 
	void			OnTestListDblClick(); 
	void			OnTestListClick(); 
	int			OnTestListDeleteItem(); 
	void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	long			OnSelectListLoadData(); 
	void			OnSelectListSelectChange(int nOldItem, int nNewItem); 
	void			OnSelectListDblClick(); 
	int			OnSelectListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnGroupSelect(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	int			OnRecordNoCheckValue();
	int				OnPatientNameCheckValue(); 

	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	void			OnSexAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	void			OnDeptFindSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptFindSelendok(); 
	//void			OnDeptFindSetfocus(); 
	//void			OnDeptFindKillfocus(); 
	long			OnDeptFindLoadData(); 
	void			OnDeptFindAddNew(); 
//	void			OnGroupSelect(); 
	void			OnRecalFree();
	int			OnQtyCheckValue(); 

	CHMSInpatientChargeFeeDialog(CWnd *pParent);
	~CHMSInpatientChargeFeeDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSInpatientChargeFeeDialog(); 
	int OnEditHMSInpatientChargeFeeDialog(); 
	int OnDeleteHMSInpatientChargeFeeDialog(); 
	int OnSaveHMSInpatientChargeFeeDialog(); 
	int OnCloseHMSInpatientChargeFeeDialog(); 
	int OnHMSInpatientChargeFeeDialogListLoadData();

	void OnEditQuantity();
	BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
