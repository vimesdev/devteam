#ifndef BANKCUSTOMER_H
#define BANKCUSTOMER_H

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
class AFX_EXT_CLASS CBankCustomer : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndNguoinop;
	CGuiGroupBox	m_wndnguoibenh;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndEmailLabel;
	CGuiTextCtrl	m_wndEmail;
	CGuiLabel		m_wndAcountNumberLabel;
	CGuiTextCtrl	m_wndAcountNumber;
	CGuiLabel		m_wndIDCardLabel;
	CGuiTextCtrl	m_wndIDCard;
	CGuiLabel		m_wndRelationLabel;
	CGuiComboBox	m_wndRelation;
	CGuiLabel		m_wndCreateddateLabel;
	CGuiDateCtrl	m_wndCreateddate;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndTreatIdxLabel;
	CGuiNumberCtrl	m_wndTreatIdx;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiTextCtrl	m_wndTTNguoihuong;
	CGuiButton		m_wndCheckTK;
	CGuiLabel		m_wndBankNameLabel;
	CGuiComboBox	m_wndBankName;
	CGuiLabel		m_wndBrandNameLabel;
	CGuiTextCtrl	m_wndBrandName;
	CGuiLabel		m_wndyobLabel;
	CGuiDateCtrl	m_wndYOB;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiListCtrl	m_wndOrderList;
	CGuiCheckBox	m_wndByqr;
	CGuiCheckBox	m_wndIspatient;

	CString	m_szName;
	CString	m_szAddress;
	CString	m_szPhone;
	CString	m_szEmail;
	CString	m_szAcountNumber;
	CString	m_szIDCard;
	CString	m_szRelationKey;
	CString	m_szCreateddate;
	CString	m_szPatientName;
	long	m_nDocumentNo;
	long	m_nTreatIdx;
	long    m_nIdx;
	CString m_szDeptID;
	CString	m_szStatus;
	CString	m_szTTNguoihuong;

	CString	m_szBankNameKey;
	CString	m_szBrandName;
	CString	m_szYOB;
	BOOL	m_bByqr;
	BOOL	m_bIspatient;
	BOOL	m_bCheckCCCD;
	LPCTSTR m_szIDCardFM;

	CDbfMap	m_hms_bankcustomerlistTbl;
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnEmailChange(); 
	//void			OnEmailSetfocus(); 
	//void			OnEmailKillfocus(); 
	int			OnEmailCheckValue(); 
	//void			OnAcountNumberChange(); 
	//void			OnAcountNumberSetfocus(); 
	//void			OnAcountNumberKillfocus(); 
	int			OnAcountNumberCheckValue(); 
	//void			OnIDCardChange(); 
	//void			OnIDCardSetfocus(); 
	//void			OnIDCardKillfocus(); 
	int			OnIDCardCheckValue(); 
	void			OnRelationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRelationSelendok(); 
	//void			OnRelationSetfocus(); 
	//void			OnRelationKillfocus(); 
	long			OnRelationLoadData(); 
	//void			OnRelationAddNew(); 
	//void			OnCreateddateChange(); 
	//void			OnCreateddateSetfocus(); 
	//void			OnCreateddateKillfocus(); 
	int			OnCreateddateCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnTreatIdxChange(); 
	//void			OnTreatIdxSetfocus(); 
	//void			OnTreatIdxKillfocus(); 
	int			OnTreatIdxCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnTTNguoihuongChange(); 
	//void			OnTTNguoihuongSetfocus(); 
	//void			OnTTNguoihuongKillfocus(); 
	int			OnTTNguoihuongCheckValue();
	int			OnBankNameCheckValue(); 	
	int			OnBrandNameCheckValue();
	int			OnYOBCheckValue(); 
	long			OnOrderListLoadData(); 
	long			OnBankNameLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnCheckTKSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect();
	void			OnByqrSelect(); 
	void			OnIspatientSelect(); 
	CBankCustomer(CWnd *pParent);
	~CBankCustomer();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddBankCustomer(); 
	int OnEditBankCustomer(); 
	int OnDeleteBankCustomer(); 
	int OnSaveBankCustomer(); 
	int OnCancelBankCustomer(); 
	int OnBankCustomerListLoadData(); 
	void CheckCCCD(LPCTSTR lpszCard);
	int ProcessIdCardQrInput(CString szInfo);
};
#endif