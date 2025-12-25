#ifndef PRODUCTMAPINSURANCEGROUPDIALOG_H
#define PRODUCTMAPINSURANCEGROUPDIALOG_H

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
class CProductMapInsuranceGroupDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndInsuranceGroupLabel;
	CGuiComboBox	m_wndInsuranceGroup;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szNameKey;
	CString	m_szDescription;
	CString	m_szInsuranceGroupKey;
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnInsuranceGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnInsuranceGroupSelendok(); 
	//void			OnInsuranceGroupSetfocus(); 
	//void			OnInsuranceGroupKillfocus(); 
	long			OnInsuranceGroupLoadData(); 
	//void			OnInsuranceGroupAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CProductMapInsuranceGroupDialog(CWnd *pParent);
	~CProductMapInsuranceGroupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductMapInsuranceGroupDialog(); 
	int OnEditProductMapInsuranceGroupDialog(); 
	int OnDeleteProductMapInsuranceGroupDialog(); 
	int OnSaveProductMapInsuranceGroupDialog(); 
	int OnCancelProductMapInsuranceGroupDialog(); 
	int OnProductMapInsuranceGroupDialogListLoadData(); 
};
#endif
