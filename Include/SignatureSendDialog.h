#ifndef SignatureSendDialog_H
#define SignatureSendDialog_H

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

#include "GuiDialog.h"

class AFX_EXT_CLASS CSignatureSendDialog : public CGuiDialog{
protected:
public:
    CString			m_szTypeKey;	
    long			m_nID;
    CString			m_szSignatureID;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	
	CGuiLabel		m_wndSendToLabel;
	CGuiComboBox	m_wndSendTo;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndSignFieldLabel;
	CGuiComboBox	m_wndSignField;
	CGuiButton		m_wndAdd;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szDepartmentKey;
	CString	m_szSendToKey;
	CString	m_szNameKey;
	CString	m_szSignFieldKey;
    CString m_szNote;
    std::map<std::string, bool> m_mapSignFields;

	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnSendToSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSendToSelendok(); 
	//void			OnSendToSetfocus(); 
	//void			OnSendToKillfocus(); 
	long			OnSendToLoadData(); 
	//void			OnSendToAddNew(); 
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	void			OnSignFieldSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSignFieldSelendok(); 
	//void			OnSignFieldSetfocus(); 
	//void			OnSignFieldKillfocus(); 
	long			OnSignFieldLoadData(); 
	//void			OnSignFieldAddNew(); 
	void			OnAddSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CSignatureSendDialog(CWnd *pParent, LPCTSTR lpszSignID, std::map<std::string, bool> signFields); 
	~CSignatureSendDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSignatureSendDialog(); 
	int OnEditSignatureSendDialog(); 
	int OnDeleteSignatureSendDialog(); 
	int OnSaveSignatureSendDialog(); 
	int OnCancelSignatureSendDialog(); 
	int OnSignatureSendDialogListLoadData(); 
};
#endif
