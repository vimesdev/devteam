#ifndef PMSPRESCRIPTIONRETURNDIALOG_H
#define PMSPRESCRIPTIONRETURNDIALOG_H

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
class CPMSPrescriptionReturnDialog : public CGuiDialog{
protected:
	CString		m_szInPatient;
	CString		m_szDocType;
public:
	
	long	m_nID;
	long	m_nOrderID;
	int		m_nStorageID;
	CGuiNumberCtrl*	m_pCtrl;
	CGuiGroupBox	m_wndReturnInformation;
	CGuiGroupBox	m_wndPatientProfiles;
	CGuiTextCtrl	m_wndDepartment;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiGroupBox	m_wndItemInformation;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndAgeLabel;
	CGuiTextCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndRemoveAll;
	CGuiButton		m_wndRemoveItem;
	CGuiButton		m_wndAddItem;
	CGuiButton		m_wndAddAll;
	CGuiListCtrl	m_wndReturnList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szDepartment;
	CGuiLabel		m_wndDescriptionLael;
	CGuiComboBox	m_wndDescription;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	CString	m_szAge;
	CString	m_szSex;
	CString	m_szDescriptionKey;
	CDbfMap	m_hms_pharmareturnorderTbl;
	//void			OnDepartmentChange(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	int			OnDepartmentCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	int			OnReturnQuantityCheckValue();
	void			OnReturnQuantityKillfocus(); 

	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem();
	int			OnListSelectAllItem();
	int			OnListUnSelectAllItem();
	void			OnRemoveAllSelect(); 
	void			OnRemoveItemSelect(); 
	void			OnAddItemSelect(); 
	void			OnAddAllSelect(); 
	long			OnReturnListLoadData(); 
	void			OnReturnListSelectChange(int nOldItem, int nNewItem); 
	void			OnReturnListDblClick(); 
	int			OnReturnListDeleteItem(); 
	int			OnReturnListSelectAllItem();
	int			OnReturnListUnSelectAllItem();
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	long			OnDescriptionLoadData();
	int			OnDescriptionCheckValue();
	CPMSPrescriptionReturnDialog(CWnd *pParent, int nMode, CString szInpatient=_T("E"));
	~CPMSPrescriptionReturnDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSPrescriptionReturnDialog(); 
	int OnEditPMSPrescriptionReturnDialog(); 
	int OnDeletePMSPrescriptionReturnDialog(); 
	int OnSavePMSPrescriptionReturnDialog(); 
	int OnCancelPMSPrescriptionReturnDialog(); 
	int OnPMSPrescriptionReturnDialogListLoadData(); 
};
#endif
