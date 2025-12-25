#ifndef PRODUCTEDITPRICEDIALOG_H
#define PRODUCTEDITPRICEDIALOG_H

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
class CProductEditPriceDialog : public CGuiDialog{
protected:
public:
	CString			m_szStorageCategory;
	long			m_nProductItem_ID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndUomLabel;
	CGuiTextCtrl	m_wndUom;
	CGuiGroupBox	m_wndEditPriceInformation;
	CGuiLabel		m_wndMfgLabel;
	CGuiTextCtrl	m_wndMfg;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndLotNoLabel;
	CGuiTextCtrl	m_wndLotNo;
	CGuiLabel		m_wndTaxPriceLabel;
	CGuiNumberCtrl	m_wndTaxPrice;
	CGuiLabel		m_wndExpiryLabel;
	CGuiDateCtrl	m_wndExpiry;
	CGuiLabel		m_wndSalePriceLabel;
	CGuiNumberCtrl	m_wndSalePrice;
	CGuiLabel		m_wndInsPriceLabel;
	CGuiNumberCtrl	m_wndInsPrice;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;

	CString	m_szName;
	CString	m_szUom;
	CString	m_szMfg;
	double	m_nUnitPrice;
	CString	m_szLotNo;
	double	m_nTaxPrice;
	CString	m_szExpiry;
	double	m_nSalePrice;
	double	m_nInsPrice;


	CString	m_szName_Old;
	CString	m_szUom_old;
	CString	m_szMfg_old;
	double	m_nUnitPrice_old;
	CString	m_szLotNo_old;
	double	m_nTaxPrice_old;
	CString	m_szExpiry_old;
	double	m_nSalePrice_old;
	double	m_nInsPrice_old;
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnUomChange(); 
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	int			OnUomCheckValue(); 
	//void			OnMfgChange(); 
	//void			OnMfgSetfocus(); 
	//void			OnMfgKillfocus(); 
	int			OnMfgCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnLotNoChange(); 
	//void			OnLotNoSetfocus(); 
	//void			OnLotNoKillfocus(); 
	int			OnLotNoCheckValue(); 
	//void			OnTaxPriceChange(); 
	//void			OnTaxPriceSetfocus(); 
	//void			OnTaxPriceKillfocus(); 
	int			OnTaxPriceCheckValue(); 
	//void			OnExpiryChange(); 
	//void			OnExpirySetfocus(); 
	//void			OnExpiryKillfocus(); 
	int			OnExpiryCheckValue(); 
	//void			OnSalePriceChange(); 
	//void			OnSalePriceSetfocus(); 
	//void			OnSalePriceKillfocus(); 
	int			OnSalePriceCheckValue(); 
	//void			OnInsPriceChange(); 
	//void			OnInsPriceSetfocus(); 
	//void			OnInsPriceKillfocus(); 
	int			OnInsPriceCheckValue(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CProductEditPriceDialog(CWnd *pParent);
	~CProductEditPriceDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductEditPriceDialog(); 
	int OnEditProductEditPriceDialog(); 
	int OnDeleteProductEditPriceDialog(); 
	int OnSaveProductEditPriceDialog(); 
	int OnCancelProductEditPriceDialog(); 
	int OnProductEditPriceDialogListLoadData(); 
	int OnSaveExpiry();
};
#endif
