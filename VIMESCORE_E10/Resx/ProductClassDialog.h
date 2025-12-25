#ifndef PRODUCTCLASSDIALOG_H
#define PRODUCTCLASSDIALOG_H

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
class CProductClassDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGenericInformation;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndATCCodeLabel;
	CGuiTextCtrl	m_wndATCCode;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndEffectGroupLabel;
	CGuiComboBox	m_wndEffectGroup;
	CGuiLabel		m_wndClassGroupLabel;
	CGuiComboBox	m_wndClassGroup;
	CGuiLabel		m_wndIndexLabel;
	CGuiNumberCtrl	m_wndIndex;
	CGuiLabel		m_wndIndicationLabel;
	CGuiTextCtrl	m_wndIndication;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndActive;
	CGuiCheckBox	m_wndAdvise;
	CString	m_szID;
	CString	m_szATCCode;
	CString	m_szName;
	CString	m_szUnit;
	CString	m_szEffectGroupKey;
	CString	m_szClassGroupKey;
	long	m_nIndex;
	CString	m_szIndication;
	BOOL	m_bActive;
	BOOL	m_bAdvise;
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnATCCodeChange(); 
	//void			OnATCCodeSetfocus(); 
	//void			OnATCCodeKillfocus(); 
	int			OnATCCodeCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	void			OnEffectGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEffectGroupSelendok(); 
	//void			OnEffectGroupSetfocus(); 
	//void			OnEffectGroupKillfocus(); 
	long			OnEffectGroupLoadData(); 
	//void			OnEffectGroupAddNew(); 
	void			OnClassGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnClassGroupSelendok(); 
	//void			OnClassGroupSetfocus(); 
	//void			OnClassGroupKillfocus(); 
	long			OnClassGroupLoadData(); 
	//void			OnClassGroupAddNew(); 
	//void			OnIndexChange(); 
	//void			OnIndexSetfocus(); 
	//void			OnIndexKillfocus(); 
	int			OnIndexCheckValue(); 
	//void			OnIndicationChange(); 
	//void			OnIndicationSetfocus(); 
	//void			OnIndicationKillfocus(); 
	int			OnIndicationCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnActiveSelect(); 
	void			OnAdviseSelect(); 
	CProductClassDialog(CWnd *pParent);
	~CProductClassDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductClassDialog(); 
	int OnEditProductClassDialog(); 
	int OnDeleteProductClassDialog(); 
	int OnSaveProductClassDialog(); 
	int OnCancelProductClassDialog(); 
	int OnProductClassDialogListLoadData(); 
};
#endif
