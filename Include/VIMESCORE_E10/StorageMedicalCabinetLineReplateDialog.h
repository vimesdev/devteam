#ifndef STORAGEMEDICALCABINETLINEREPLATEDIALOG_H
#define STORAGEMEDICALCABINETLINEREPLATEDIALOG_H

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
class CStorageMedicalCabinetLineReplateDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformationitemsorder;
	CGuiGroupBox	m_wndInformationItemsReplate;
	CGuiLabel		m_wndProductLabel;
	CGuiTextCtrl	m_wndProduct;
	CGuiLabel		m_wndUomLabel;
	CGuiTextCtrl	m_wndUom;
	CGuiLabel		m_wndManufactureLabel;
	CGuiTextCtrl	m_wndManufacture;
	CGuiLabel		m_wndExprDateLabel;
	CGuiDateCtrl	m_wndExprDate;
	CGuiLabel		m_wndLotNoLabel;
	CGuiTextCtrl	m_wndLotNo;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndProductNewLabel;
	CGuiComboBox	m_wndProductNew;
	CGuiLabel		m_wndUnitOfMeasureLabel;
	CGuiTextCtrl	m_wndUnitOfMeasure;
	CGuiLabel		m_wndManufactureNewLabel;
	CGuiTextCtrl	m_wndManufactureNew;
	CGuiLabel		m_wndExprDateNewLabel;
	CGuiDateCtrl	m_wndExprDateNew;
	CGuiLabel		m_wndLotNoNewLabel;
	CGuiTextCtrl	m_wndLotNoNew;
	CGuiLabel		m_wndUnitPriceNewLabel;
	CGuiNumberCtrl	m_wndUnitPriceNew;
	CGuiLabel		m_wndOrderQtyLabel;
	CGuiNumberCtrl	m_wndOrderQty;
	CString	m_szProductName;
	CString	m_szUom;
	CString	m_szManufacture;
	CString	m_szExprDate;
	CString	m_szLotNo;
	CString m_szType;
	long	m_nUnitPrice;
	long	m_nQuantity;
	long	m_nOrderID;
	long	m_nProduct_ID;
	long	m_nProductNew_ID;
	int		m_nStorageID;
	int		m_nStorageToID;
	int		m_nOrderLine;
	long	m_nProductItemID;

	CString	m_szProductNewKey;
	CString	m_szUnitOfMeasure;
	CString	m_szManufactureNew;
	CString	m_szExprDateNew;
	CString	m_szLotNoNew;
	long	m_nUnitPriceNew;
	long	m_nOrderQty;
	CDbfMap	m_transactionlineTbl;

	void			OnProductSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductSelendok(); 
	//void			OnProductSetfocus(); 
	//void			OnProductKillfocus(); 
	long			OnProductLoadData(); 
	//void			OnProductAddNew(); 
	//void			OnUomChange(); 
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	int			OnUomCheckValue(); 
	//void			OnManufactureChange(); 
	//void			OnManufactureSetfocus(); 
	//void			OnManufactureKillfocus(); 
	int			OnManufactureCheckValue(); 
	//void			OnExprDateChange(); 
	//void			OnExprDateSetfocus(); 
	//void			OnExprDateKillfocus(); 
	int			OnExprDateCheckValue(); 
	//void			OnLotNoChange(); 
	//void			OnLotNoSetfocus(); 
	//void			OnLotNoKillfocus(); 
	int			OnLotNoCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnProductNewSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProductNewSelendok(); 
	//void			OnProductNewSetfocus(); 
	//void			OnProductNewKillfocus(); 
	long			OnProductNewLoadData(); 
	//void			OnProductNewAddNew(); 
	//void			OnUnitOfMeasureChange(); 
	//void			OnUnitOfMeasureSetfocus(); 
	//void			OnUnitOfMeasureKillfocus(); 
	int			OnUnitOfMeasureCheckValue(); 
	//void			OnManufactureNewChange(); 
	//void			OnManufactureNewSetfocus(); 
	//void			OnManufactureNewKillfocus(); 
	int			OnManufactureNewCheckValue(); 
	//void			OnExprDateNewChange(); 
	//void			OnExprDateNewSetfocus(); 
	//void			OnExprDateNewKillfocus(); 
	int			OnExprDateNewCheckValue(); 
	//void			OnLotNoNewChange(); 
	//void			OnLotNoNewSetfocus(); 
	//void			OnLotNoNewKillfocus(); 
	int			OnLotNoNewCheckValue(); 
	//void			OnUnitPriceNewChange(); 
	//void			OnUnitPriceNewSetfocus(); 
	//void			OnUnitPriceNewKillfocus(); 
	int			OnUnitPriceNewCheckValue(); 
	//void			OnOrderQtyChange(); 
	//void			OnOrderQtySetfocus(); 
	//void			OnOrderQtyKillfocus(); 
	int			OnOrderQtyCheckValue(); 
	CStorageMedicalCabinetLineReplateDialog(CWnd *pParent);
	~CStorageMedicalCabinetLineReplateDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddStorageMedicalCabinetLineReplateDialog(); 
	int OnEditStorageMedicalCabinetLineReplateDialog(); 
	int OnDeleteStorageMedicalCabinetLineReplateDialog(); 
	int OnSaveStorageMedicalCabinetLineReplateDialog(); 
	int OnCancelStorageMedicalCabinetLineReplateDialog(); 
	int OnStorageMedicalCabinetLineReplateDialogListLoadData(); 
};
#endif
