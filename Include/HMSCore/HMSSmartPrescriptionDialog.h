#ifndef HMSPRESCRIPTIONINTELLIGENTDIALOG_H
#define HMSPRESCRIPTIONINTELLIGENTDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Storage Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@miteco.com.vn hoac hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
#include "TreeCtrlEx.h"

class AFX_EXT_CLASS CHMSSmartPrescriptionDialog : public CGuiDialog
{
protected:
public:
	int		m_nID;
	int		m_nOrderID;
	int		m_nIDX;
	float	m_nQty;
	int		m_nReforder_id;
	int		m_nLevel1;
	int		m_nLevel2;
	int		m_nLevel3;
	int		m_nStorageID;
	bool	m_bInpackage;
	long	m_nTreatIdx;

	CString	m_szType;
	CString	m_szItemID;
	CString m_szCountryID;
	CString	m_szUsage;
	CString	m_szNameKey;
	CString	m_szStorageName;
	CString m_szStorageType;
	CString m_szOrg_ID;
	

	CGuiGroupBox	m_wndPrescriptionGroup;
	CGuiGroupBox	m_wndDrugInformation;
	CGuiListCtrl	m_wndGroupList;
	CTreeCtrlEx		m_wndGroupTree;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndStorageLabel;
	CGuiTextCtrl	m_wndStorage;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl m_wndOrderDate;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndCancel;
	CString	m_szStorageKey;
	CString	m_szOrderDate;
	CDbfMap	m_hms_pharma_group_lineTbl;
	
	CDbfMap	m_hms_pharmaorderTbl;
	CDbfMap	m_hms_pharmaorder_lineTbl;

	long			OnGroupListLoadData(); 
	void			OnGroupListSelectChange(int nOldItem, int nNewItem); 
	void			OnGroupListDblClick(); 
	int			OnGroupListDeleteItem(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	void			OnStorageAddNew(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	void			OnApplySelect(); 
	void			OnCancelSelect(); 
	CHMSSmartPrescriptionDialog(CWnd *pParent);
	~CHMSSmartPrescriptionDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPrescriptionIntelligentDialog(); 
	int OnEditHMSPrescriptionIntelligentDialog(); 
	int OnDeleteHMSPrescriptionIntelligentDialog(); 
	int OnSaveHMSPrescriptionIntelligentDialog(); 
	int OnCancelHMSPrescriptionIntelligentDialog(); 
	int OnHMSPrescriptionIntelligentDialogListLoadData();
	void OnGroupTreeSelChange(HTREEITEM, HTREEITEM);

	virtual BOOL PreTranslateMessage(MSG *pMsg);

};
#endif
