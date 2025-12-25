#ifndef SignatureFormListDlg_H
#define SignatureFormListDlg_H

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
class CSignatureFormListDlg : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiLabel		m_wndTypeSelectLabel;
	CGuiComboBox	m_wndTypeSelect;
	CGuiLabel		m_wndFileNameLabel;
	CGuiTextCtrl	m_wndFileName;
	CGuiLabel		m_wndTitleLabel;
	CGuiTextCtrl	m_wndTitle;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndFormsLabel;
	CGuiTextCtrl	m_wndForms;
	CGuiLabel		m_wndDocumentLabel;
	CGuiTextCtrl	m_wndDocument;
	CGuiLabel		m_wndOrderLabel;
	CGuiTextCtrl	m_wndOrder;
	CGuiLabel		m_wndReferenceLabel;
	CGuiTextCtrl	m_wndReference;
	CGuiCheckBox	m_wndIsEMR;
	CGuiCheckBox	m_wndIsSignature;
	CGuiCheckBox	m_wndIsTransfer;
	CGuiCheckBox	m_wndIsGenDocx;
	CGuiCheckBox	m_wndCheckFinish;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndAutoAdd;
	CGuiLabel		m_wndTypeLabel;
	CGuiCheckBox	m_wndMultilSheet;
	CGuiCheckBox	m_wndInOpt;
	CGuiLabel		m_wndModuleLabel;
	CGuiComboBox	m_wndModule;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiButton		m_wndClose;
    CGuiCheckBox m_wndDigiSign;
    CGuiCheckBox m_wndDigiSignSearch;

	CString	m_szSearch;
	CString	m_szTypeSelectKey;
	CString	m_szFileName;
	CString	m_szTitle;
	CString	m_szTypeKey;
	CString	m_szForms;
	CString	m_szDocument;
	CString	m_szOrder;
	CString	m_szReference;
	BOOL	m_bIsEMR;
	BOOL	m_bIsSignature;
	BOOL	m_bIsTransfer;
	BOOL	m_bIsGendocx;
	CString m_szActive;
	CString m_szUID;
	BOOL	m_bMultilSheet;
	BOOL	m_bInOpt;
	CString	m_szModuleKey;
	CString	m_szDepartmentKey;
    BOOL m_bDigiSign;
    BOOL m_bDigiSignSearch;
	BOOL	m_bCheckFinish;
	CDbfMap			m_hms_signature_formTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListDeactiveItem();
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnTypeSelectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelectSelendok(); 
	//void			OnTypeSelectSetfocus(); 
	//void			OnTypeSelectKillfocus(); 
	long			OnTypeSelectLoadData(); 
	//void			OnTypeSelectAddNew(); 
	//void			OnFileNameChange(); 
	//void			OnFileNameSetfocus(); 
	//void			OnFileNameKillfocus(); 
	int			OnFileNameCheckValue(); 
	//void			OnTitleChange(); 
	//void			OnTitleSetfocus(); 
	//void			OnTitleKillfocus(); 
	int			OnTitleCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnFormsChange(); 
	//void			OnFormsSetfocus(); 
	//void			OnFormsKillfocus(); 
	int			OnFormsCheckValue(); 
	//void			OnDocumentChange(); 
	//void			OnDocumentSetfocus(); 
	//void			OnDocumentKillfocus(); 
	int			OnDocumentCheckValue(); 
	//void			OnOrderChange(); 
	//void			OnOrderSetfocus(); 
	//void			OnOrderKillfocus(); 
	int			OnOrderCheckValue(); 
	//void			OnReferenceChange(); 
	//void			OnReferenceSetfocus(); 
	//void			OnReferenceKillfocus(); 
	int			OnReferenceCheckValue(); 
	void			OnIsEMRSelect(); 
	void			OnIsSignatureSelect();
	void			OnIsTransferSelect();
	void			OnIsGenDocxSeelct();
	void			OnCheckFinishSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnAutoAddSelect();
	void			OnAutoAddMAUBA();
	void			OnAutoAddMauHTMLCHUYENMON();
	void			OnMultilSheetSelect();
	void			OnInOptSelect();
	void			OnModuleSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnModuleSelendok();
	//void			OnModuleSetfocus(); 
	//void			OnModuleKillfocus(); 
	long			OnModuleLoadData();
	//void			OnModuleAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnDepartmentSelendok();
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData();
	//void			OnDepartmentAddNew(); 
	void			OnCloseSelect();
    void OnDigiSignSelect(); 
	void OnDigiSignSearchSelect(); 
	CSignatureFormListDlg(CWnd *pParent);
	~CSignatureFormListDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSignatureFormListDlg(); 
	int OnEditSignatureFormListDlg(); 
	int OnDeleteSignatureFormListDlg(); 
	int OnSaveSignatureFormListDlg(); 
	int OnCancelSignatureFormListDlg(); 
	int OnSignatureFormListDlgListLoadData();
	int OnListSetIndex();
	void SetCheckData(CGuiComboBox* pCombo, CString szData);
};
#endif
