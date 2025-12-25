#ifndef GLSSALEORDERDIALOG_H
#define GLSSALEORDERDIALOG_H

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

class CGLSSaleOrderDialog : public CGuiDialog
{

protected:
	CString		m_szPaymentStatus;
	CString		m_szPrevStorage;
	CString		m_szPrevType;
	CString		m_szObjectType;
public:
	bool		m_bFunctionalFood;
	long		m_nSaleOrderID;
	long		m_nDocNo;
	long		m_nPatientNo;
	void		OnAddFunctionalFood();
	CGuiButton		m_wndAddFunctionalFood;
	void			OnAddFunctionalFoodSelect();
	CGuiGroupBox	m_wndGeneralInformation;
	CGuiGroupBox	m_wndVoucherInformation;
	CGuiGroupBox	m_wndThiluckhongkinh;
	CGuiGroupBox	m_wndThiluckinhcu;
	CGuiGroupBox	m_wndSBDTCanBangHaiMat;
	CGuiGroupBox	m_wndDonKinhnhinxa;
	CGuiGroupBox	m_wndDonKinhnhingan;
	CGuiLabel		m_wndMatPhaiLabel;
	CGuiTextCtrl	m_wndMat_Phai;
	CGuiLabel		m_wndMatTraiLabel;
	CGuiTextCtrl	m_wndMat_Trai;
	CGuiLabel		m_wndMatPhai1Label;
	CGuiTextCtrl	m_wndMat_Phai1;
	CGuiLabel		m_wndMatTrai1Label;
	CGuiTextCtrl	m_wndMat_Trai1;
	CGuiLabel		m_wndMatPhai2Label;
	CGuiTextCtrl	m_wndMat_Phai2;
	CGuiLabel		m_wndMatTrai2Label;
	CGuiTextCtrl	m_wndMat_Trai2;
	CGuiLabel		m_wndMatPhai3Label;
	CGuiTextCtrl	m_wndMat_Phai3;
	CGuiLabel		m_wndMatTrai3Label;
	CGuiTextCtrl	m_wndMat_Trai3;
	CGuiLabel		m_wndPD1Label;
	CGuiTextCtrl	m_wndPD1;
	CGuiLabel		m_wndMatPhai4Label;
	CGuiTextCtrl	m_wndMat_Phai4;
	CGuiLabel		m_wndMatTrai4Label;
	CGuiTextCtrl	m_wndMat_Trai4;
	CGuiLabel		m_wndPD2Label;
	CGuiTextCtrl	m_wndPD2;
	CGuiGroupBox	m_wndItemInformation;
	CGuiGroupBox	m_wndLines;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndDeptLabel;
	CGuiComboBox	m_wndDept;
	CGuiLabel		m_wndCustomerNameLabel;
	CGuiTextCtrl	m_wndCustomerName;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndApprovedDateLabel;
	CGuiDateCtrl	m_wndApprovedDate;
	CGuiLabel		m_wndItemNameLabel;
	CGuiComboBox	m_wndItemName;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndMaxQuantityLable;
	CGuiNumberCtrl	m_wndMaxQuantity;
	CGuiLabel		m_wndSellingPriceLabel;
	CGuiNumberCtrl	m_wndSellingPrice;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndStatusLable;
	CGuiTextCtrl	m_wndStatus;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndAddLine;
	CGuiListCtrl	m_wndList;
	CString	m_szStorageKey;
	CString	m_szTypeKey;
	CString	m_szCustomerName;
	CString	m_szPhone;
	CString	m_szAddress;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szApprovedDate;
	CString	m_szItemNameKey;
	CString	m_szDeptKey;
	CString	m_szProdCountry;
	CString m_szUnit;
	CString m_szUsage;
	CString m_szStatus;
	CString m_szStatusDesc;

	CString	m_szMat_Phai;
	CString	m_szMat_Trai;
	CString	m_szMat_Phai1;
	CString	m_szMat_Trai1;
	CString	m_szMat_Phai2;
	CString	m_szMat_Trai2;
	CString	m_szMat_Phai3;
	CString	m_szMat_Trai3;
	CString	m_szPD1;
	CString	m_szMat_Phai4;
	CString	m_szMat_Trai4;
	CString	m_szPD2;

	double	m_nTotalAmount;
	double	m_nQuantity;
	double	m_nSellingPrice;
	double m_nMaxQuantity;

	CString	m_szNote;
	CDbfMap	m_sale_orderTbl;
	CDbfMap	m_sale_orderlineTbl;
	CDbfMap m_gls_sale_orderTbl;
	CDbfMap m_hms_patientTbl;
	CDbfMap	m_hms_docTbl;
	
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	int				OnTypeCheckValue();
	//void			OnCustomerNameChange(); 
	//void			OnCustomerNameSetfocus(); 
	//void			OnCustomerNameKillfocus(); 
	int			OnCustomerNameCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnApprovedDateChange(); 
	//void			OnApprovedDateSetfocus(); 
	//void			OnApprovedDateKillfocus(); 
	int			OnApprovedDateCheckValue(); 
	void			OnItemNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemNameSelendok(); 
	//void			OnItemNameSetfocus(); 
	//void			OnItemNameKillfocus(); 
	long			OnItemNameLoadData(); 
	//void			OnItemNameAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnSellingPriceChange(); 
	//void			OnSellingPriceSetfocus(); 
	//void			OnSellingPriceKillfocus(); 
	int			OnSellingPriceCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnDiscardSelect(); 
	void			OnConfirmSelect();
	void			OnApprovalSelect(); 
	void			OnPrintSelect(); 
	void			OnAddLineSelect();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick();
	int			OnListPostToDuocQG();
	int			OnListDeleteItem(); 
	int			OnListAddItem();
	int			OnListRefreshItem();
	int			OnListPayment();
	int			OnStorageCheckValue();
	int			OnMat_PhaiCheckValue();	
	int			OnMat_TraiCheckValue();	
	int			OnMat_Phai1CheckValue(); 	
	int			OnMat_Trai1CheckValue();	
	int			OnMat_Phai2CheckValue();	
	int			OnMat_Trai2CheckValue();	
	int			OnMat_Phai3CheckValue();	
	int			OnMat_Trai3CheckValue();	
	int			OnPD1CheckValue();	
	int			OnMat_Phai4CheckValue();	
	int			OnMat_Trai4CheckValue();	
	int			OnPD2CheckValue(); 
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	//void			OnDeptAddNew(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	void PrintDrugDelivery(long nOrderID, bool bPreview, bool bDirect);
	void PrintGLSDelivery(long nOrderID, bool bPreview, bool bDirect);
	CGLSSaleOrderDialog(CWnd *pParent, int nMode);
	~CGLSSaleOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSSaleOrderDialog(); 
	int OnEditPMSSaleOrderDialog(); 
	int OnDeletePMSSaleOrderDialog(); 
	int OnSavePMSSaleOrderDialog(); 
	int OnDiscardPMSSaleOrderDialog(); 
	int OnPMSSaleOrderDialogListLoadData(); 
	void OnInitializeParameters();

};
#endif
