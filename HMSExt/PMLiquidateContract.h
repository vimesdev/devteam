#ifndef PMLIQUIDATECONTRACT_H
#define PMLIQUIDATECONTRACT_H

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
//#include "GuiUtils.h"
#include "GuiView.h"
#include "HMSExtDef.h"

class AFX_EXT_CLASS CPMLiquidateContract : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndInforMationReport;
	CGuiLabel		m_wndContractpackageLabel;
	CGuiComboBox	m_wndPackage;
	CGuiLabel		m_wndYearLabel;
	CGuiComboBox	m_wndYear;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndPartnerLabel;
	CGuiComboBox	m_wndPartner;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiLabel		m_wndStorageNameLbale;
	CGuiComboBox	m_wndStorage;
	CString	m_szPackageKey;
	CString	m_szYearKey;
	CString	m_szPartnerKey;
	CString	m_szStorageKey;
	BOOL m_bComInit;
	void			OnPackageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPackageSelendok(); 
	//void			OnPackageSetfocus(); 
	//void			OnPackageKillfocus(); 
	long			OnPackageLoadData(); 
	//void			OnPackageAddNew(); 
	void			OnYearSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnYearSelendok(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	long			OnYearLoadData(); 
	//void			OnYearAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnPartnerSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPartnerSelendok(); 
	//void			OnPartnerSetfocus(); 
	//void			OnPartnerKillfocus(); 
	long			OnPartnerLoadData(); 
	//void			OnPartnerAddNew(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnExport();
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	CPMLiquidateContract(CWnd *pParent);
	~CPMLiquidateContract();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMLiquidateContract(); 
	int OnEditPMLiquidateContract(); 
	int OnDeletePMLiquidateContract(); 
	int OnSavePMLiquidateContract(); 
	int OnCancelPMLiquidateContract(); 
	int OnPMLiquidateContractListLoadData(); 
};
#endif
