#ifndef HMSORDERBLOODSHEET_H
#define HMSORDERBLOODSHEET_H

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
class AFX_EXT_CLASS CHMSOrderBloodSheet : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndInformationOrderBlood;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndDocnoLabel;
	CGuiGroupBox	m_wndInformationPatient;
	CGuiNumberCtrl	m_wndDocNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndyob;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndDiagnosisLabel;
	CGuiTextCtrl	m_wndDiagnosis;
	CGuiLabel		m_wndBloodTypeLabel;
	CGuiComboBox	m_wndBloodType;
	CGuiLabel		m_wndTypeRhLabel;
	CGuiComboBox	m_wndTypeRh;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiLabel		m_wndBloodProductsOrderLabel;
	CGuiComboBox	m_wndBloodProducts;
	CGuiLabel		m_wndQty1Label;
	CGuiNumberCtrl	m_wndQty1;
	CGuiComboBox	m_wndBloodProducts2;
	CGuiLabel		m_wndQty2Label;
	CGuiNumberCtrl	m_wndQty2;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CString	m_szDeptKey;
	CString	m_szNote;
	long	m_nDocNo;
	CString	m_szPatientName;
	CString	m_szyob;
	CString	m_szSexKey;
	CString	m_szDiagnosis;
	CString	m_szBloodTypeKey;
	CString	m_szTypeRhKey;
	long	m_nQty;
	CString	m_szBloodProductsKey;
	long	m_nQty1;
	CString	m_szBloodProducts2Key;
	long	m_nQty2;
	CString m_szFormType;
	CString m_szFormName;
	int m_nIdx;
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	//void			OnDeptAddNew(); 
	//void			OnDocNoChange(); 
	//void			OnDocNoSetfocus(); 
	//void			OnDocNoKillfocus(); 
	int			OnDocNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnyobChange(); 
	//void			OnyobSetfocus(); 
	//void			OnyobKillfocus(); 
	int			OnyobCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	//void			OnDiagnosisChange(); 
	//void			OnDiagnosisSetfocus(); 
	//void			OnDiagnosisKillfocus(); 
	int			OnDiagnosisCheckValue(); 
	void			OnBloodTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBloodTypeSelendok(); 
	//void			OnBloodTypeSetfocus(); 
	//void			OnBloodTypeKillfocus(); 
	long			OnBloodTypeLoadData(); 
	//void			OnBloodTypeAddNew(); 
	void			OnTypeRhSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeRhSelendok(); 
	//void			OnTypeRhSetfocus(); 
	//void			OnTypeRhKillfocus(); 
	long			OnTypeRhLoadData(); 
	//void			OnTypeRhAddNew(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	void			OnBloodProductsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBloodProductsSelendok(); 
	//void			OnBloodProductsSetfocus(); 
	//void			OnBloodProductsKillfocus(); 
	long			OnBloodProductsLoadData(); 
	//void			OnBloodProductsAddNew(); 
	//void			OnQty1Change(); 
	//void			OnQty1Setfocus(); 
	//void			OnQty1Killfocus(); 
	int			OnQty1CheckValue(); 
	void			OnBloodProducts2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBloodProducts2Selendok(); 
	//void			OnBloodProducts2Setfocus(); 
	//void			OnBloodProducts2Killfocus(); 
	long			OnBloodProducts2LoadData(); 
	//void			OnBloodProducts2AddNew(); 
	//void			OnQty2Change(); 
	//void			OnQty2Setfocus(); 
	//void			OnQty2Killfocus(); 
	int			OnQty2CheckValue();
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
	void			OnCloseSelect(); 
	CHMSOrderBloodSheet(CWnd *pParent);
	~CHMSOrderBloodSheet();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOrderBloodSheet(); 
	int OnEditHMSOrderBloodSheet(); 
	int OnDeleteHMSOrderBloodSheet(); 
	int OnSaveHMSOrderBloodSheet(); 
	int OnCancelHMSOrderBloodSheet(); 
	int OnHMSOrderBloodSheetListLoadData(); 
	void OnAddOrder();
};
#endif
