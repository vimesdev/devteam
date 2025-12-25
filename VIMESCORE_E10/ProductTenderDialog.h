#ifndef PRODUCTTENDERDIALOG_H
#define PRODUCTTENDERDIALOG_H

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

class CProductTenderDialog : public CGuiDialog{
protected:
public:
	CWnd* m_pWndRef;
	CGuiGroupBox	m_wndProductInformation;
	CGuiLabel		m_wndCodeLabel;
	CGuiTextCtrl	m_wndCode;
	CGuiLabel		m_wndActiveIngredientIDLabel;
	CGuiComboBox	m_wndActiveIngredientID;
	CGuiLabel		m_wndActiveIngredientLabel;
	CGuiTextCtrl	m_wndActiveIngredient;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndDosageConcentrationLabel;
	CGuiTextCtrl	m_wndDosageConcentration;
	CGuiLabel		m_wndDosageFormLabel;
	CGuiTextCtrl	m_wndDosageForm;
	CGuiLabel		m_wndRouteOfAdminLabel;
	CGuiComboBox	m_wndRouteOfAdmin;
	CGuiLabel		m_wndUomLabel;
	CGuiComboBox	m_wndUom;
	CGuiLabel		m_wndProductIDLabel;
	CGuiComboBox	m_wndProductID;
	CGuiCheckBox	m_wndIsActive;

	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;

	CString	m_szCode;
	long	m_nActiveIngredientID;
	CString	m_szActiveIngredientIDKey;
	CString	m_szActiveIngredient;
	CString	m_szCategoryKey;
	CString	m_szDosageConcentration;
	CString m_szDosageConcentrationKey;
	CString	m_szDosageFormKey;
	CString	m_szDosageForm;
	CString	m_szRouteOfAdminKey;
	CString	m_szUomKey;
	CString	m_szProductIDKey;
	CDbfMap	m_product_tenderTbl;
	long	m_nProductTenderID;
	CString m_szProductTenderID;
	BOOL	m_bIsActive;
	CString m_szActive;
	CString m_szMpCode;
	//void			OnCodeChange(); 
	//void			OnCodeSetfocus(); 
	//void			OnCodeKillfocus(); 
	int			OnCodeCheckValue();
	void			OnActiveIngredientIDSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnActiveIngredientIDSelendok();
	//void			OnActiveIngredientIDSetfocus(); 
	//void			OnActiveIngredientIDKillfocus(); 
	long			OnActiveIngredientIDLoadData();
	//void			OnActiveIngredientIDAddNew(); 
	//void			OnActiveIngredientChange(); 
	//void			OnActiveIngredientSetfocus(); 
	//void			OnActiveIngredientKillfocus(); 
	int			OnActiveIngredientCheckValue();
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel);
	void			OnCategorySelendok();
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData();
	//void			OnCategoryAddNew(); 
	//void			OnDosageConcentrationChange(); 
	//void			OnDosageConcentrationSetfocus(); 
	//void			OnDosageConcentrationKillfocus(); 
	int			OnDosageConcentrationCheckValue();
	//void			OnDosageFormChange(); 
	//void			OnDosageFormSetfocus(); 
	//void			OnDosageFormKillfocus(); 
	int			OnDosageFormCheckValue();
	void			OnRouteOfAdminSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnRouteOfAdminSelendok();
	//void			OnRouteOfAdminSetfocus(); 
	//void			OnRouteOfAdminKillfocus(); 
	long			OnRouteOfAdminLoadData();
	//void			OnRouteOfAdminAddNew(); 
	void			OnUomSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnUomSelendok();
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	long			OnUomLoadData();
	//void			OnUomAddNew(); 
	void			OnProductIDSelectChange(int nOldItemSel, int nNewItemSel);
	void			OnProductIDSelendok();
	//void			OnProductIDSetfocus(); 
	//void			OnProductIDKillfocus(); 
	long			OnProductIDLoadData();
	//void			OnProductIDAddNew(); 
	void			OnIsActiveSelect();

	void			OnSaveSelect();
	void			OnCloseSelect();

	CProductTenderDialog(CWnd *pParent, int nMode);
	~CProductTenderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductTenderDialog(); 
	int OnEditProductTenderDialog(); 
	int OnDeleteProductTenderDialog(); 
	int OnSaveProductTenderDialog(); 
	int OnCancelProductTenderDialog(); 
	int OnProductTenderDialogListLoadData(); 
};
#endif
