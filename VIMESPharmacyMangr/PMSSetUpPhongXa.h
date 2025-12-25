#ifndef PMSSETUPPHONGXA_H
#define PMSSETUPPHONGXA_H

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
class CPMSSetUpPhongXa : public CGuiDialog{
protected:
public:
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndFeeIDLabel;
	CGuiTextCtrl	m_wndFeeId;
	CGuiLabel		m_wndFeeNameLabel;
	CGuiTextCtrl	m_wndFeeName;
	CGuiLabel		m_wndPriceLabel;
	CGuiNumberCtrl	m_wndPrice;
	CGuiLabel		m_wndDrugPriceLabel;
	CGuiNumberCtrl	m_wndDrugPrice;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiLabel		m_wndContractLabel;
	CGuiComboBox	m_wndContract;
	CGuiLabel		m_wndma_axLabel;
	CGuiTextCtrl	m_wndma_ax;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndRegCodeLabel;
	CGuiTextCtrl	m_wndRegCode;
	CGuiLabel		m_wndContentLabel;
	CGuiTextCtrl	m_wndContent;
	CGuiLabel		m_wndduong_dungLabel;
	CGuiComboBox	m_wndduong_dung;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiTextCtrl	m_wndDrugName;

	CGuiLabel		m_wndPackageLabel;
	CGuiTextCtrl	m_wndPackage;
	CGuiButton		m_wndGetItem;


	CString	m_szFeeId;
	CString	m_szFeeName;
	long	m_nPrice;
	long	m_nDrugPrice;
	float	m_nQty;
	CString	m_szContractKey;
	CString	m_szma_ax;
	CString	m_szUnit;
	CString	m_szRegCode;
	CString	m_szContent;
	CString	m_szduong_dungKey;
	CString	m_szDrugName;
	CString	m_szPackage;
	CDbfMap m_bh_pxtbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnFeeIdChange(); 
	//void			OnFeeIdSetfocus(); 
	//void			OnFeeIdKillfocus(); 
	int			OnFeeIdCheckValue(); 
	//void			OnFeeNameChange(); 
	//void			OnFeeNameSetfocus(); 
	//void			OnFeeNameKillfocus(); 
	int			OnFeeNameCheckValue(); 
	//void			OnPriceChange(); 
	//void			OnPriceSetfocus(); 
	//void			OnPriceKillfocus(); 
	int			OnPriceCheckValue(); 
	//void			OnDrugPriceChange(); 
	//void			OnDrugPriceSetfocus(); 
	//void			OnDrugPriceKillfocus(); 
	int			OnDrugPriceCheckValue(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	void			OnContractSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnContractSelendok(); 
	//void			OnContractSetfocus(); 
	//void			OnContractKillfocus(); 
	long			OnContractLoadData(); 
	//void			OnContractAddNew(); 
	//void			Onma_axChange(); 
	//void			Onma_axSetfocus(); 
	//void			Onma_axKillfocus(); 
	int			Onma_axCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnRegCodeChange(); 
	//void			OnRegCodeSetfocus(); 
	//void			OnRegCodeKillfocus(); 
	int			OnRegCodeCheckValue(); 
	//void			OnContentChange(); 
	//void			OnContentSetfocus(); 
	//void			OnContentKillfocus(); 
	int			OnContentCheckValue(); 
	void			Onduong_dungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			Onduong_dungSelendok(); 
	//void			Onduong_dungSetfocus(); 
	//void			Onduong_dungKillfocus(); 
	long			Onduong_dungLoadData(); 
	//void			Onduong_dungAddNew(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	//void			OnDrugNameChange(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	int			OnDrugNameCheckValue();
	void			OnGetItemSelect();
	CPMSSetUpPhongXa(CWnd *pParent);
	~CPMSSetUpPhongXa();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSSetUpPhongXa(); 
	int OnEditPMSSetUpPhongXa(); 
	int OnDeletePMSSetUpPhongXa(); 
	int OnSavePMSSetUpPhongXa(); 
	int OnCancelPMSSetUpPhongXa(); 
	int OnPMSSetUpPhongXaListLoadData(); 
};
#endif
