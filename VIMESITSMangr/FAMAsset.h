#ifndef FAMASSET_H
#define FAMASSET_H

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
#include "GuiView.h"
#include "DbField.h"
#include "FAMAssetType.h"
#include "FAMAssetDept.h"
#include "FAMAssetDepreciation.h"
#include "FAMMaintenance.h"
//#include "FAMAssetNote.h"
#include "FAMAttachment.h"
#include "FAMUsageProcess.h"
#include "FAMAssetExtraInformation.h"
#include "FAMAccessories.h"
#include "IncReasonSetupDialog.h"
#include "ConditionSetupDialog.h"
#include "FAMInventory.h"
#include "FAMInventoryDlg.h"
#include "FAMTransfer.h"

class CFAMAsset : public CGuiView{
protected:   
public:

	CFAMAssetType m_wndAssetType;
	CFAMAssetDept m_wndAssetDept;
	CFAMAssetDepreciation m_wndAssetDeprec;
	CFAMMaintenance m_wndAssetMaint;
	//CFAMAssetNote m_wndAssetNote;
	CFAMAttachment m_wndAttachment;
	CFAMUsageProcess m_wndUsageProcess;
	CFAMTransfer m_wndTransfer;
	CFAMAccessories m_wndAccessory;
	CFAMInventory m_wndInventory;

	CGuiGroupBox	m_wndAssets;
	CGuiTabCtrl	m_wndSearchTab;
	CGuiListCtrl	m_wndList;
	CGuiTabCtrl	m_wndAssetTab;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndSearchByNameLabel;
	CGuiTextCtrl	m_wndSearchByName;
	//
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndManufactureLabel;
	CGuiComboBox	m_wndManufacture;
	CGuiLabel		m_wndIncReasonLabel;
	CGuiComboBox	m_wndIncReason;
	//
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CString	m_szAssetNo;
	CString	m_szName;
	CString	m_szSearchByName;
	CString m_szAssetType;
	CString m_szTypeKey;
	CDbfMap	m_fam_assetTbl;

	bool m_isDeposed;
	int m_nIndex;
	CString curAssetNo;
	CString szUser;
	CString szJoinedID;

	void			OnSearchTabSelectChange(int nOld, int nNew); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnSearchByNameChange(); 
	//void			OnSearchByNameSetfocus(); 
	void			OnSearchByNameKillfocus(); 
	int			OnSearchByNameCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnAddOldAssetSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnAssetTabSelectChange(int nOld, int nNew);
	
	//void			OnManufactureLabelMouseMove(UINT nFlags, CPoint point);
	void			ResetData();
	int				FindSelectIndex(CString szValue, CGuiListCtrl *pList);

	CFAMAsset();
	~CFAMAsset();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMAsset(); 
	int OnEditFAMAsset(); 
	int OnDeleteFAMAsset(); 
	int OnSaveFAMAsset(); 
	int OnFAMAssetListLoadData();
	void CheckUser();

	/*void OnRecordedIncrease();
	void OnRecordedDecrease();*/
};
#endif
