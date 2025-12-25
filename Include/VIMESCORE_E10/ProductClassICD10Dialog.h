#ifndef PRODUCTCLASSICD10DIALOG_H
#define PRODUCTCLASSICD10DIALOG_H

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
class CProductClassICD10Dialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGenericInformation;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndATCCodeLabel;
	CGuiTextCtrl	m_wndATCCode;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndIndexLabel;
	CGuiNumberCtrl	m_wndIndex;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndIndicationLabel;
	CGuiTextCtrl	m_wndIndication;
	CGuiButton		m_wndAddICD;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndActive;
	

	CGuiLabel		m_wndWarningLabel;
	CGuiTextCtrl	m_wndWarning;

	CGuiLabel		m_wndICD10Label;
	CGuiTextCtrl	m_wndICD10;

	CGuiLabel		m_wndICD10CCDLabel;
	CGuiTextCtrl	m_wndICD10CCD;
	CGuiButton		m_wndAddICDCCD;
	CGuiListCtrl	m_wndListICDCCD;
	CGuiListCtrl	m_wndListQuery;

	long	m_nID;
	CString	m_szATCCode;
	CString	m_szName;
	int		m_nIndex;
	CString	m_szUnit;
	CString	m_szCategoryKey;
	CString	m_szIndication;
	CString m_szICD10;
	CString	m_szICD10CCD;
	BOOL	m_bActive;
	CString	m_szWarning;
	CString m_szICDSelected;
	CDbfMap m_product_classTbl;
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
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	void			OnCategoryAddNew(); 
	//void			OnIndicationChange(); 
	//void			OnIndicationSetfocus(); 
	//void			OnIndicationKillfocus(); 
	int			OnIndicationCheckValue(); 
	void			OnAddICDSelect();
	void			OnAddICDCCDSelect();
	long			OnListICDCCDLoadData(); 
	void			OnListICDCCDSelectChange(int nOldItem, int nNewItem); 
	void			OnListICDCCDDblClick(); 
	int			OnListICDCCDDeleteItem(); 
	long			OnListQueryLoadData(); 
	void			OnListQuerySelectChange(int nOldItem, int nNewItem); 
	void			OnListQueryDblClick(); 
	int			OnListQueryDeleteItem(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnActiveSelect();
	CProductClassICD10Dialog(CWnd *pParent, int nMode);
	~CProductClassICD10Dialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
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
	int OnListICDCCDAddQuery();
};
#endif
