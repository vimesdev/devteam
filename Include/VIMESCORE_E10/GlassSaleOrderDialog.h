#ifndef GLASSSALEORDERDIALOG_H
#define GLASSSALEORDERDIALOG_H

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
//////////////////////////////////////
//sa_discount: lưu tổng số tiền miễn giảm (cái này có thể cho gõ trực tiếp toàn đơn hàng hay miễn giảm theo từng line)
//sal_discount: miễn giảm theo từng line(nếu có 1 line sal_discount > 0 thì ko cho phép gõ số tiền miễn giảm trong đơn nưa)
//
class CGlassSaleOrderDialog : public CGuiDialog{
protected:
public:
	CString		m_szPaymentStatus;
	CString		m_szPrevStorage;
	CString		m_szPrevType;
	CString		m_szObjectType;
	long		m_nSaleOrderID;

	long		m_nPatientNo;
	int			m_nMaxQuantity;
	CString		m_szProdCountry;
	CString		m_szStatus;
	CString		m_szStatusDesc;
	CString		m_szUnit;
	CDbfMap	m_sale_orderTbl;
	CDbfMap	m_sale_orderlineTbl;
	CDbfMap m_hms_patientTbl;
	CDbfMap	m_hms_docTbl;


	CGuiGroupBox	m_wndVoucherInformation;
	CGuiGroupBox	m_wndItemInformation;
	CGuiGroupBox	m_wndLines;
	CGuiGroupBox	m_wndThiLucKhongKinh;
	CGuiGroupBox	m_wndThiLucCoKinh;
	CGuiGroupBox	m_wndNhanAp;
	CGuiGroupBox	m_wndGeneralInformation;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndCustomerNameLabel;
	CGuiTextCtrl	m_wndCustomerName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYob;
	CGuiLabel		m_wndGenderLabel;
	CGuiComboBox	m_wndGender;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndMatTraiLabel;
	CGuiTextCtrl	m_wndMatTrai;
	CGuiLabel		m_wndMatPhaiLabel;
	CGuiTextCtrl	m_wndMatPhai;
	CGuiLabel		m_wndCKMattraiLabel;
	CGuiTextCtrl	m_wndCKMattrai;
	CGuiLabel		m_wndCKMatphaiLabel;
	CGuiTextCtrl	m_wndCKMatphai;
	CGuiLabel		m_wndNAMattraiLabel;
	CGuiTextCtrl	m_wndNAMattrai;
	CGuiLabel		m_wndNAMatphaiLabel;
	CGuiTextCtrl	m_wndNAMatphai;
	CGuiLabel		m_wndGuaranteeLabel;
	CGuiComboBox	m_wndGuarantee;
	CGuiLabel		m_wndRecheckTimeLabel;
	CGuiTextCtrl	m_wndRecheckTime;


	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndApprovedDateLabel;
	CGuiDateCtrl	m_wndApprovedDate;
	CGuiLabel		m_wndSubAmountLabel;
	CGuiNumberCtrl	m_wndSubAmount;
	CGuiLabel		m_wndTaxAmountLabel;
	CGuiNumberCtrl	m_wndTaxAmount;
	//check vao thì cho phép nhập số tiền miễn giảm.
	//không tích thì tự động tính trong trường hợp các line có setup được miễn giảm
	CGuiCheckBox	m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;


	CGuiLabel		m_wndItemNameLabel;
	CGuiComboBox	m_wndItemName;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndOnHandLabel;
	CGuiNumberCtrl	m_wndOnHand;
	CGuiLabel		m_wndSellingPriceLabel;
	CGuiNumberCtrl	m_wndSellingPrice;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndPrint;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAddLine;

	long	m_nDocumentNo;
	CString	m_szTypeKey;
	CString	m_szStorageKey;
	CString	m_szCustomerName;
	CString	m_szYob;
	CString	m_szGenderKey;
	CString	m_szAddress;
	CString	m_szPhone;
	CString	m_szDescription;
	CString	m_szMatTrai;
	CString	m_szMatPhai;
	CString	m_szCKMattrai;
	CString	m_szCKMatphai;
	CString	m_szNAMattrai;
	CString	m_szNAMatphai;
	CString	m_szGuaranteeKey;
	CString	m_szRecheckTime;
	CString	m_szItemNameKey;
	long	m_nQuantity;
	long	m_nOnHand;
	long	m_nSellingPrice;
	CString	m_szNote;
	long	m_nAmount;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szApprovedDate;
	long	m_nSubAmount;
	long	m_nTaxAmount;
	long	m_nDiscount;
	long	m_nTotalAmount;
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	//void			OnCustomerNameChange(); 
	//void			OnCustomerNameSetfocus(); 
	//void			OnCustomerNameKillfocus(); 
	int			OnCustomerNameCheckValue(); 
	//void			OnYobChange(); 
	//void			OnYobSetfocus(); 
	//void			OnYobKillfocus(); 
	int			OnYobCheckValue(); 
	void			OnGenderSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGenderSelendok(); 
	//void			OnGenderSetfocus(); 
	//void			OnGenderKillfocus(); 
	long			OnGenderLoadData(); 
	//void			OnGenderAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnMatTraiChange(); 
	//void			OnMatTraiSetfocus(); 
	//void			OnMatTraiKillfocus(); 
	int			OnMatTraiCheckValue(); 
	//void			OnMatPhaiChange(); 
	//void			OnMatPhaiSetfocus(); 
	//void			OnMatPhaiKillfocus(); 
	int			OnMatPhaiCheckValue(); 
	//void			OnCKMattraiChange(); 
	//void			OnCKMattraiSetfocus(); 
	//void			OnCKMattraiKillfocus(); 
	int			OnCKMattraiCheckValue(); 
	//void			OnCKMatphaiChange(); 
	//void			OnCKMatphaiSetfocus(); 
	//void			OnCKMatphaiKillfocus(); 
	int			OnCKMatphaiCheckValue(); 
	//void			OnNAMattraiChange(); 
	//void			OnNAMattraiSetfocus(); 
	//void			OnNAMattraiKillfocus(); 
	int			OnNAMattraiCheckValue(); 
	//void			OnNAMatphaiChange(); 
	//void			OnNAMatphaiSetfocus(); 
	//void			OnNAMatphaiKillfocus(); 
	int			OnNAMatphaiCheckValue(); 
	void			OnGuaranteeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGuaranteeSelendok(); 
	//void			OnGuaranteeSetfocus(); 
	//void			OnGuaranteeKillfocus(); 
	long			OnGuaranteeLoadData(); 
	//void			OnGuaranteeAddNew(); 
	//void			OnRecheckTimeChange(); 
	//void			OnRecheckTimeSetfocus(); 
	//void			OnRecheckTimeKillfocus(); 
	int			OnRecheckTimeCheckValue(); 
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
	//void			OnOnHandChange(); 
	//void			OnOnHandSetfocus(); 
	//void			OnOnHandKillfocus(); 
	int			OnOnHandCheckValue(); 
	//void			OnSellingPriceChange(); 
	//void			OnSellingPriceSetfocus(); 
	//void			OnSellingPriceKillfocus(); 
	int			OnSellingPriceCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnApprovalSelect(); 
	void			OnPrintSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
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
	//void			OnSubAmountChange(); 
	//void			OnSubAmountSetfocus(); 
	//void			OnSubAmountKillfocus(); 
	int			OnSubAmountCheckValue(); 
	//void			OnTaxAmountChange(); 
	//void			OnTaxAmountSetfocus(); 
	//void			OnTaxAmountKillfocus(); 
	int			OnTaxAmountCheckValue(); 
	//void			OnDiscountChange(); 
	//void			OnDiscountSetfocus(); 
	//void			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 

	void	GetPatientInfo();

	CGlassSaleOrderDialog(CWnd *pParent, int nMode);
	~CGlassSaleOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddGlassSaleOrderDialog(); 
	int OnEditGlassSaleOrderDialog(); 
	int OnDeleteGlassSaleOrderDialog(); 
	int OnSaveGlassSaleOrderDialog(); 
	int OnCancelGlassSaleOrderDialog(); 
	int OnGlassSaleOrderDialogListLoadData(); 
	void PrintDrugDelivery(long nOrderID, bool bPreview, bool bDirect);
};
#endif
