#ifndef CANCERPRESCRIPTIONLINEEDITDLG_H
#define CANCERPRESCRIPTIONLINEEDITDLG_H

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
class CCancerPrescriptionLineEditDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndProductLabel;
	CGuiTextCtrl	m_wndProduct;
	CGuiLabel		m_wndUomLabel;
	CGuiTextCtrl	m_wndUom;
	CGuiLabel		m_wndManufactureLabel;
	CGuiTextCtrl	m_wndManufacture;
	CGuiLabel		m_wndLotNoLabel;
	CGuiTextCtrl	m_wndLotNo;
	CGuiLabel		m_wndExprDateLabel;
	CGuiDateCtrl	m_wndExprDate;
	CGuiLabel		m_wndLieuDungTTLabel;
	CGuiNumberCtrl	m_wndLieuDungTT;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiNumberCtrl	m_wndLieuDungBN;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndDungTichTPLabel;
	CGuiNumberCtrl	m_wndDungTichTP;
	CGuiLabel		m_wndDonviLabel;
	CGuiComboBox	m_wndDonvi;
	CString	m_szProduct;
	CString	m_szUom;
	CString	m_szManufacture;
	CString	m_szLotNo;
	CString	m_szExprDate;
	
	long	m_nUnitPrice;
	float	m_nLieuDungTT;
	float	m_nLieuDungBN;
	float	m_nDungTichTP;
	CString	m_szDonviKey;
	long	m_nOrderID;
	long	m_nProductID;
	long	m_nProduct_ItemID;
	long	m_nOrderLineID;
	long	m_nOrderItemLineID;

	//void			OnProductChange(); 
	//void			OnProductSetfocus(); 
	//void			OnProductKillfocus(); 
	int			OnProductCheckValue(); 
	//void			OnUomChange(); 
	//void			OnUomSetfocus(); 
	//void			OnUomKillfocus(); 
	int			OnUomCheckValue(); 
	//void			OnManufactureChange(); 
	//void			OnManufactureSetfocus(); 
	//void			OnManufactureKillfocus(); 
	int			OnManufactureCheckValue(); 
	//void			OnLotNoChange(); 
	//void			OnLotNoSetfocus(); 
	//void			OnLotNoKillfocus(); 
	int			OnLotNoCheckValue(); 
	//void			OnExprDateChange(); 
	//void			OnExprDateSetfocus(); 
	//void			OnExprDateKillfocus(); 
	int			OnExprDateCheckValue(); 
	//void			OnLieuDungTTChange(); 
	//void			OnLieuDungTTSetfocus(); 
	//void			OnLieuDungTTKillfocus(); 
	int			OnLieuDungTTCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnLieuDungBNChange(); 
	//void			OnLieuDungBNSetfocus(); 
	//void			OnLieuDungBNKillfocus(); 
	int			OnLieuDungBNCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	//void			OnDungTichTPChange(); 
	//void			OnDungTichTPSetfocus(); 
	//void			OnDungTichTPKillfocus(); 
	int			OnDungTichTPCheckValue(); 
	//void			OnDonviChange(); 
	//void			OnDonviSetfocus(); 
	//void			OnDonviKillfocus(); 
	int			OnDonviCheckValue(); 
	int			OnDonviLoadData(); 
	CCancerPrescriptionLineEditDlg(CWnd *pParent);
	~CCancerPrescriptionLineEditDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCancerPrescriptionLineEditDlg(); 
	int OnEditCancerPrescriptionLineEditDlg(); 
	int OnDeleteCancerPrescriptionLineEditDlg(); 
	int OnSaveCancerPrescriptionLineEditDlg(); 
	int OnCancelCancerPrescriptionLineEditDlg(); 
	int OnCancerPrescriptionLineEditDlgListLoadData(); 
};
#endif
