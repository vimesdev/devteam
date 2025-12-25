#ifndef HMSADDITIONFEESETUPDIALOG_H
#define HMSADDITIONFEESETUPDIALOG_H

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
class CHMSAdditionFeeSetupDialog : public CGuiDialog{
protected:
public:
	CString			m_szFeeID;
	
	CGuiGroupBox	m_wndFeeInformation;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiLabel		m_wndReturnDeptLabel;
	CGuiNumberCtrl	m_wndReturnDept;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndInsDiffPaymentLabel;
	CGuiNumberCtrl	m_wndInsDiffPayment;
	CGuiLabel		m_wndPolicyPriceLabel;
	CGuiNumberCtrl	m_wndPolicyPrice;
	CGuiLabel		m_wndPolDiffPaymentLabel;
	CGuiNumberCtrl	m_wndPolDiffPayment;
	CGuiCheckBox	m_wndHitech;
	CGuiCheckBox	m_wndPlasticSurgery;
	CGuiCheckBox	m_wndHitechMachine;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szName;
	double	m_nServicePrice;
	double	m_nInsurancePrice;
	double	m_nInsDiffPayment;
	double	m_nPolicyPrice;
	double	m_nPolDiffPayment;
	double	m_nRequestPrice;
	double	m_nReturnDept;
	BOOL	m_bDifferencePayment;
	BOOL	m_bInsurancePayment;
	BOOL	m_bPolicyPayment;
	BOOL	m_bHitech;
	BOOL	m_bPlasticSurgery;
	BOOL	m_bHitechMachine;
	BOOL	m_bActive;

	

	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnServicePriceChange(); 
	//void			OnServicePriceSetfocus(); 
	//void			OnServicePriceKillfocus(); 
	int			OnServicePriceCheckValue(); 
	//void			OnReturnDeptChange(); 
	//void			OnReturnDeptSetfocus(); 
	//void			OnReturnDeptKillfocus(); 
	int			OnReturnDeptCheckValue(); 
	//void			OnInsurancePriceChange(); 
	//void			OnInsurancePriceSetfocus(); 
	//void			OnInsurancePriceKillfocus(); 
	int			OnInsurancePriceCheckValue(); 
	//void			OnInsDiffPaymentChange(); 
	//void			OnInsDiffPaymentSetfocus(); 
	//void			OnInsDiffPaymentKillfocus(); 
	int			OnInsDiffPaymentCheckValue(); 
	//void			OnPolicyPriceChange(); 
	//void			OnPolicyPriceSetfocus(); 
	//void			OnPolicyPriceKillfocus(); 
	int			OnPolicyPriceCheckValue(); 
	//void			OnPolDiffPaymentChange(); 
	//void			OnPolDiffPaymentSetfocus(); 
	//void			OnPolDiffPaymentKillfocus(); 
	int			OnPolDiffPaymentCheckValue(); 
	void			OnHitechSelect(); 
	void			OnPlasticSurgerySelect(); 
	void			OnHitechMachineSelect(); 
	void			OnActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSAdditionFeeSetupDialog(CWnd *pParent);
	~CHMSAdditionFeeSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAdditionFeeSetupDialog(); 
	int OnEditHMSAdditionFeeSetupDialog(); 
	int OnDeleteHMSAdditionFeeSetupDialog(); 
	int OnSaveHMSAdditionFeeSetupDialog(); 
	int OnCancelHMSAdditionFeeSetupDialog(); 
	int OnHMSAdditionFeeSetupDialogListLoadData(); 
};
#endif
