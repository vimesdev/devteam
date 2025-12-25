#ifndef HMSFOODFEESETUPDLG_H
#define HMSFOODFEESETUPDLG_H

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
class CHMSFoodFeeSetupDlg : public CGuiDialog
{

protected:
	long m_nSelectedLine;
public:
	CGuiGroupBox	m_wndFeeInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndSecondNameLabel;
	CGuiTextCtrl	m_wndSecondName;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndCategoryIDLabel;
	CGuiComboBox	m_wndCategoryID;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiCheckBox	m_wndDifferencePay;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndInactive;
	CGuiLabel		m_wndCategorySearchIDLabel;
	CGuiComboBox	m_wndCategorySearchID;
	CGuiLabel		m_wndFindCategoryLabel;
	CGuiComboBox	m_wndFindCategory;
	CGuiLabel		m_wndFindNameLabel;
	CGuiTextCtrl	m_wndFindName;
	CGuiButton		m_wndSearch;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndBaocaoLabel;
	CGuiComboBox	m_wndNhombaocao;
	CGuiCheckBox	m_wndKhoaHCKT;
	CString	m_szName;
	CString	m_szSecondName;
	CString	m_szUnit;
	long	m_nID;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	long	m_nPolicyPrice;
	CString	m_szGroupKey;
	BOOL	m_bDifferencePay;
	BOOL	m_bInactive;
	CString	m_szFindCategoryKey;
	CString	m_szFindName;
	CDbfMap	m_hms_feeTbl;
	CString m_szID;
	CString	m_szCategorySearchIDKey;
	CString m_szCategoryIDKey;
	CString	m_szNhombaocaoKey;
	BOOL	m_bKhoaHCKT;
	long			OnListLoadData(); 
	int			OnListSelectChange(int nOldItem, int nNewItem); 
	int			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListShowLogItem();
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnSecondNameChange(); 
	//void			OnSecondNameSetfocus(); 
	//void			OnSecondNameKillfocus(); 
	int			OnSecondNameCheckValue(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue();
	void			OnCategoryIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategoryIDSelendok(); 
	//void			OnCategoryIDSetfocus(); 
	//void			OnCategoryIDKillfocus(); 
	long			OnCategoryIDLoadData(); 
	//void			OnCategoryIDAddNew();
	//void			OnServicePriceChange(); 
	//void			OnServicePriceSetfocus(); 
	//void			OnServicePriceKillfocus(); 
	int			OnServicePriceCheckValue(); 
	//void			OnInsurancePriceChange(); 
	//void			OnInsurancePriceSetfocus(); 
	//void			OnInsurancePriceKillfocus(); 
	int			OnInsurancePriceCheckValue(); 
	//void			OnPolicyPriceChange(); 
	//void			OnPolicyPriceSetfocus(); 
	//void			OnPolicyPriceKillfocus(); 
	int			OnPolicyPriceCheckValue(); 
	void			OnGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupSelendok(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	//void			OnGroupAddNew(); 
	int			OnDifferencePaySelect(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	void			OnInactiveSelect(); 
	void			OnCategorySearchIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySearchIDSelendok(); 
	//void			OnCategorySearchIDSetfocus(); 
	//void			OnCategorySearchIDKillfocus(); 
	long			OnCategorySearchIDLoadData(); 
	//void			OnCategorySearchIDAddNew(); 
	void			OnFindCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFindCategorySelendok(); 
	//void			OnFindCategorySetfocus(); 
	void			OnFindCategoryKillfocus(); 
	long			OnFindCategoryLoadData(); 
	//void			OnFindCategoryAddNew(); 
	void			OnFindNameChange(); 
	//void			OnFindNameSetfocus(); 
	void			OnFindNameKillfocus(); 
	int			OnFindNameCheckValue(); 
	void			OnSearchSelect(); 
	CHMSFoodFeeSetupDlg(CWnd *pParent);
	~CHMSFoodFeeSetupDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFoodFeeSetupDlg(); 
	int OnEditHMSFoodFeeSetupDlg(); 
	int OnDeleteHMSFoodFeeSetupDlg(); 
	int OnSaveHMSFoodFeeSetupDlg(); 
	int OnCancelHMSFoodFeeSetupDlg(); 
	int OnHMSFoodFeeSetupDlgListLoadData(); 
	void OnCategoryIDSearchLabelSelect();
	long			OnNhombaocaoLoadData();
	void			OnKhoaHCKTSelect();
};
#endif
