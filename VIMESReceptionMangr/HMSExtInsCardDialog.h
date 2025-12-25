#ifndef HMSExtInsCardDialog_H
#define HMSExtInsCardDialog_H

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
//class Nhap thong tin the cua cac cong ty BH
/**Nang cap
	alter table hms_doc add hd_is_extins nvarchar2(1);
	ALTER TABLE hms_doc  MODIFY (hd_is_extins DEFAULT 'N');
	alter table hms_fee_invoice add hfe_extins_payment number(15,3);
	ALTER TABLE hms_fee_invoice  MODIFY (hfe_extins_payment DEFAULT 0 );
	alter table hms_fee_invoice add hfe_extins_unpaid number(15, 3);
	ALTER TABLE hms_fee_invoice  MODIFY (hfe_extins_unpaid DEFAULT 0 );
	alter table hms_fee add hfe_extins_paid nvarchar2(1);
	ALTER TABLE hms_fee  MODIFY (hfe_extins_paid DEFAULT 'N');
	alter table hms_fee_cancel add hfe_extins_paid nvarchar2(1);
	ALTER TABLE hms_fee_cancel  MODIFY (hfe_extins_paid DEFAULT 'N');

	ALTER TABLE HMS_FEE  MODIFY (HFE_FEE_ID NOT NULL);
	ALTER TABLE HMS_FEE  MODIFY (HFE_PATIENTNO DEFAULT 0 );
	ALTER TABLE HMS_FEE  MODIFY (HFE_DOCNO DEFAULT 0 );
	ALTER TABLE HMS_FEE  MODIFY (HFE_ISREQ DEFAULT 'N' );
	ALTER TABLE HMS_FEE  MODIFY (HFE_INFERTILITY DEFAULT 'N' );
	ALTER TABLE HMS_FEE  MODIFY (HFE_CARDIDX DEFAULT 0 );
	ALTER TABLE HMS_FEE  MODIFY (HFE_SALARY DEFAULT 0 );
	ALTER TABLE HMS_FEE  MODIFY (HFE_STENT_LINE DEFAULT 0 );
	ALTER TABLE HMS_FEE  MODIFY (HFE_TREAT_PACKAGE_ID DEFAULT 0 );
	ALTER TABLE HMS_FEE  MODIFY (HFE_TREAT_INPACKAGE DEFAULT 'N' );
	
	ALTER TABLE HMS_FEE_DEPOSIT  MODIFY (HFE_AMOUNT DEFAULT 0 );
	ALTER TABLE HMS_FEE_DEPOSIT  MODIFY (HFE_PATPAID DEFAULT 0 );
	
	alter table hms_treatment_record add htr_treat_mode nvarchar2(3);
	ALTER TABLE hms_treatment_record  MODIFY (htr_treat_mode DEFAULT 'A' );

	make HMS_FEE_INVOICE_TRG

	
*/
class CHMSExtInsCardDialog : public CGuiDialog
{
protected:
public:
	long		m_nExtInsCardId;

	CGuiLabel		m_wndPatientNoLabel;
	CGuiNumberCtrl	m_wndPatientNo;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiGroupBox	m_wndCardInformation;
	CGuiGroupBox	m_wndCardList;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndCompanyLabel;
	CGuiComboBox	m_wndCompany;
	CGuiLabel		m_wndCardNoLabel;
	CGuiTextCtrl	m_wndCardNo;
	CGuiButton		m_wndCheck;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndRegDateLabel;
	CGuiDateCtrl	m_wndRegDate;
	CGuiLabel		m_wndExpDateLabel;
	CGuiDateCtrl	m_wndExpDate;
	CGuiLabel		m_wndOutpatientPaymentLabel;
	CGuiNumberCtrl	m_wndOutpatientPayment;
	CGuiLabel		m_wndInpatientPaymentLabel;
	CGuiNumberCtrl	m_wndInpatientPayment;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiListCtrl	    m_wndList;
	
	long	m_nPatientNo;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	CString	m_szCompanyKey;
	CString	m_szCardNo;
	CString	m_szTypeKey;
	CString	m_szRegDate;
	CString	m_szExpDate;
	long	m_nOutpatientPayment;
	long	m_nInpatientPayment;
	CDbfMap	m_hms_extins_cardTbl;
	//void			OnPatientNoChange(); 
	//void			OnPatientNoSetfocus(); 
	//void			OnPatientNoKillfocus(); 
	int			OnPatientNoCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	void			OnCompanySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCompanySelendok(); 
	//void			OnCompanySetfocus(); 
	//void			OnCompanyKillfocus(); 
	long			OnCompanyLoadData(); 
	//void			OnCompanyAddNew(); 
	//void			OnCardNoChange(); 
	//void			OnCardNoSetfocus(); 
	//void			OnCardNoKillfocus(); 
	int			OnCardNoCheckValue(); 
	void			OnCheckSelect(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnRegDateChange(); 
	//void			OnRegDateSetfocus(); 
	//void			OnRegDateKillfocus(); 
	int			OnRegDateCheckValue(); 
	//void			OnExpDateChange(); 
	//void			OnExpDateSetfocus(); 
	//void			OnExpDateKillfocus(); 
	int			OnExpDateCheckValue(); 
	//void			OnOutpatientPaymentChange(); 
	//void			OnOutpatientPaymentSetfocus(); 
	//void			OnOutpatientPaymentKillfocus(); 
	int			OnOutpatientPaymentCheckValue(); 
	//void			OnInpatientPaymentChange(); 
	//void			OnInpatientPaymentSetfocus(); 
	//void			OnInpatientPaymentKillfocus(); 
	int			OnInpatientPaymentCheckValue();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			    OnListDeleteItem();
	void			OnAddSelect(); 
	void			OnDeleteSelect();
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	void			OnCompanySelect(); 

	CHMSExtInsCardDialog(CWnd *pParent);
	~CHMSExtInsCardDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExtInsCardDialog(); 
	int OnAddCHMSExtInsCardDialog();
	int OnUpdateHMSExtInsCardDialog(); 
	int OnDeleteHMSExtInsCardDialog(); 
	int OnSaveHMSExtInsCardDialog(); 
	int OnCancelHMSExtInsCardDialog(); 
	int OnHMSExtInsCardDialogListLoadData();	
};
#endif