#ifndef CWardPatientMedicalUsageDialog_V2_H
#define CWardPatientMedicalUsageDialog_V2_H

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
#include "GridListView.h"

class CWardPatientMedicalUsageDialog_V2 : public CGuiDialog
{
protected:
public:
	bool	m_bRefresh;
	long	m_nID;
	long	m_nDocno;
	long	m_nOrderID;
	int		m_nStorageID;
	int		m_nCStorageID;
	CString	m_szDept;
	CString m_szStorages;

	long	m_nTransactionID;
	long	m_nProductItemID;
	CWnd*		m_wndOrder;
	double	m_nQuantity;
	double	m_nUnitPrice;
	double	m_nOnHand;
	CString m_szProductKey;
	CString	m_szProductOrgID;
	CString	m_szTransactionType;


	CGuiGroupBox	m_wndGroupDrugList;
	CGuiGroupBox	m_wndGroupPatientList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndPreview;
	CGuiButton		m_wndClose;
	CGridListView	m_wndPatientList;
	CGridListView	m_wndDrugList;
	CDbfMap	m_transactionlineTbl;
	CGuiLabel		m_wndFromDateLabel;
	CGuiCheckBox	m_wndAll;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiButton		m_wndRefresh;
	CGuiLabel		m_wndObject;
	CGuiCheckBox	m_wndServiceObject;
	CGuiCheckBox	m_wndInsObject;
	CGuiCheckBox	m_wndSolderObject;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiRadioButton	m_wndAllMaterial;
	CGuiRadioButton	m_wndReusableMaterial;
	CGuiRadioButton	m_wndNormalMaterial;
	CGuiLabel		m_wndZoneLabel;
	CGuiComboBox	m_wndZone;
    CGuiCheckBox	m_wndphieutreo;
	CString m_szZoneKey;
	BOOL	m_bAll;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString m_szWhere;
	BOOL	m_bServiceObject;
	BOOL	m_bInsObject;
	BOOL	m_bSolderObject;
	CString	m_szSearch;
	int		m_nMaterialType;
	BOOL	m_bphieutreo;
	void			OnApplySelect(); 
	void			OnPreviewSelect(); 
	void			OnCloseSelect(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListAddToSheetItem(); 
	int			OnPatientListCheckAllItem(); 
	int			OnPatientListUnCheckAllItem(); 
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	void	OnRecalcOrder();
	//
//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnRefreshSelect(); 
	void			OnAllSelect();
	void			OnServiceObjectSelect(); 
	void			OnInsObjectSelect(); 
	void			OnSolderObjectSelect(); 
	void			OnReusableMaterialSelect();
	void			OnNormalMaterialSelect();
	void			OnAllMaterialSelect();
	void			OnSearchChange(); 
	void			OnphieutreoSelect();
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue();
	long		OnZoneLoadData();
	CWardPatientMedicalUsageDialog_V2(CWnd *pParent);
	~CWardPatientMedicalUsageDialog_V2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCWardPatientMedicalUsageDialog_V2(); 
	int OnEditCWardPatientMedicalUsageDialog_V2(); 
	int OnDeleteCWardPatientMedicalUsageDialog_V2(); 
	int OnSaveCWardPatientMedicalUsageDialog_V2(); 
	int OnCancelCWardPatientMedicalUsageDialog_V2(); 
	int OnCWardPatientMedicalUsageDialog_V2ListLoadData();

	int OnPatientListLoadCP();
	int OnPatientListLoadDG();
	int OnPatientListLoadDV();
	int OnPatientListLoadALL();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnClose();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
