#ifndef HMSFEECHANGEITEMREQUESTDIALOG_H
#define HMSFEECHANGEITEMREQUESTDIALOG_H

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
class CHMSFeeChangeItemRequestDialog : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndFeeInformation;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndServicePriceLabel;
	CGuiNumberCtrl	m_wndServicePrice;
	CGuiLabel		m_wndInsurancePriceLabel;
	CGuiNumberCtrl	m_wndInsurancePrice;
	CGuiLabel		m_wndRequestPriceLabel;
	CGuiNumberCtrl	m_wndRequestPrice;
	CGuiRadioButton	m_wndNormalPrice;
	CGuiRadioButton	m_wndRequest;
	CGuiRadioButton	m_wndFree;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szName;
	CString m_szItemID;
	CString m_szFeeType;
	long	m_nServicePrice;
	long	m_nInsurancePrice;
	long	m_nRequestPrice;
	long	m_nOrderLineID;
	long	m_nDocumentNo;
	long	m_nOrderId;

	int	m_nNormalPrice;
	int	m_nRequest;
	int m_nFree;

	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnServicePriceChange(); 
	//void			OnServicePriceSetfocus(); 
	//void			OnServicePriceKillfocus(); 
	int			OnServicePriceCheckValue(); 
	//void			OnInsurancePriceChange(); 
	//void			OnInsurancePriceSetfocus(); 
	//void			OnInsurancePriceKillfocus(); 
	int			OnInsurancePriceCheckValue(); 
	//void			OnRequestPriceChange(); 
	//void			OnRequestPriceSetfocus(); 
	//void			OnRequestPriceKillfocus(); 
	int			OnRequestPriceCheckValue(); 
	void			OnNormalPriceSelect(); 
	void			OnRequestSelect();
	void			OnFreeSelect();
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSFeeChangeItemRequestDialog(CWnd *pParent);
	~CHMSFeeChangeItemRequestDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeeChangeItemRequestDialog(); 
	int OnEditHMSFeeChangeItemRequestDialog(); 
	int OnDeleteHMSFeeChangeItemRequestDialog(); 
	int OnSaveHMSFeeChangeItemRequestDialog(); 
	int OnCancelHMSFeeChangeItemRequestDialog(); 
	int OnHMSFeeChangeItemRequestDialogListLoadData(); 
};
#endif