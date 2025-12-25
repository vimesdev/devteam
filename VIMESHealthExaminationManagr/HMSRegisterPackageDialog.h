#ifndef HMSREGISTERPACKAGEDIALOG_H
#define HMSREGISTERPACKAGEDIALOG_H

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


class CHMSRegisterPackageDialog : public CGuiDialog{
protected:
	CDbfMap			m_hms_fee_extraTbl;
public:
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndRelativeInformation;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYob;
	CGuiLabel		m_wndGenderLabel;
	CGuiTextCtrl	m_wndGender;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndCardNumberLabel;
	CGuiTextCtrl	m_wndCardNumber;
	CGuiLabel		m_wndCardTypeLabel;
	CGuiComboBox	m_wndCardType;
	CGuiLabel		m_wndBeginTimeLabel;
	CGuiDateTimeCtrl	m_wndBeginTime;
	CGuiLabel		m_wndOrderQtyLabel;
	CGuiNumberCtrl	m_wndOrderQty;
	CGuiLabel		m_wndTimeOutLabel;
	CGuiDateTimeCtrl	m_wndTimeOut;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndBedLabel;
	CGuiTextCtrl	m_wndBed;
	CGuiLabel		m_wndRelativeNameLabel;
	CGuiTextCtrl	m_wndRelativeName;
	CGuiLabel		m_wndRelationLabel;
	CGuiTextCtrl	m_wndRelation;
	CGuiLabel		m_wndRelativeYobLabel;
	CGuiTextCtrl	m_wndRelativeYob;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;



	long	m_nDocumentNo;
	long	m_nOrderId;
	CString m_szDept;
	CString	m_szPatientName;
	CString	m_szYob;
	CString	m_szGender;
	CString	m_szAddress;	
	CString	m_szCardNumber;
	CString	m_szCardTypeKey;
	CString	m_szBeginTime;
	float	m_nOrderQty;
	CString	m_szTimeOut;
	float	m_nQuantity;
	CString	m_szBed;
	CString	m_szRelativeName;
	CString	m_szRelation;
	CString	m_szRelativeYob;
	CString	m_szNote;
	CString m_szStatus;


	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYobChange(); 
	//void			OnYobSetfocus(); 
	//void			OnYobKillfocus(); 
	int			OnYobCheckValue(); 
	//void			OnGenderChange(); 
	//void			OnGenderSetfocus(); 
	//void			OnGenderKillfocus(); 
	int			OnGenderCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnCardNumberChange(); 
	//void			OnCardNumberSetfocus(); 
	//void			OnCardNumberKillfocus(); 
	int			OnCardNumberCheckValue(); 
	void			OnCardTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCardTypeSelendok(); 
	//void			OnCardTypeSetfocus(); 
	//void			OnCardTypeKillfocus(); 
	long			OnCardTypeLoadData(); 
	//void			OnCardTypeAddNew(); 
	//void			OnBeginTimeChange(); 
	//void			OnBeginTimeSetfocus(); 
	//void			OnBeginTimeKillfocus(); 
	int			OnBeginTimeCheckValue(); 
	//void			OnOrderQtyChange(); 
	//void			OnOrderQtySetfocus(); 
	//void			OnOrderQtyKillfocus(); 
	int			OnOrderQtyCheckValue(); 
	//void			OnTimeOutChange(); 
	//void			OnTimeOutSetfocus(); 
	//void			OnTimeOutKillfocus(); 
	int			OnTimeOutCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnBedChange(); 
	//void			OnBedSetfocus(); 
	//void			OnBedKillfocus(); 
	int			OnBedCheckValue(); 
	//void			OnRelativeNameChange(); 
	//void			OnRelativeNameSetfocus(); 
	//void			OnRelativeNameKillfocus(); 
	int			OnRelativeNameCheckValue(); 
	//void			OnRelationChange(); 
	//void			OnRelationSetfocus(); 
	//void			OnRelationKillfocus(); 
	int			OnRelationCheckValue(); 
	//void			OnRelativeYobChange(); 
	//void			OnRelativeYobSetfocus(); 
	//void			OnRelativeYobKillfocus(); 
	int			OnRelativeYobCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	
	CHMSRegisterPackageDialog(CWnd *pParent, int nMode);
	~CHMSRegisterPackageDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSRegisterPackageDialog(); 
	int OnEditHMSRegisterPackageDialog(); 
	int OnDeleteHMSRegisterPackageDialog(); 
	int OnSaveHMSRegisterPackageDialog(); 
	int OnCancelHMSRegisterPackageDialog(); 
	int OnHMSRegisterPackageDialogListLoadData(); 
};
#endif
