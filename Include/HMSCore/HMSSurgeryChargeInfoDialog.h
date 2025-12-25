#ifndef HMSSURGERYCHARGEINFODIALOG_H
#define HMSSURGERYCHARGEINFODIALOG_H

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
class CHMSSurgeryChargeInfoDialog : public CGuiDialog
{
protected:
public:
	long			m_nDocumentNo;
	long			m_nOptIdx;

	CGuiLabel		m_wndOptAmountLabel;
	CGuiNumberCtrl	m_wndOptAmount;
	CGuiLabel		m_wndInsPriceLabel;
	CGuiNumberCtrl	m_wndInsPrice;
	CGuiLabel		m_wndMaterialAmountLabel;
	CGuiNumberCtrl	m_wndMaterialAmount;
	CGuiLabel		m_wndRemainLabel;
	CGuiNumberCtrl	m_wndRemain;
	CGuiLabel		m_wndReturnPercentLabel;
	CGuiNumberCtrl	m_wndReturnPercent;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndGenFee;
	double	m_nOptAmount;
	double	m_nInsPrice;
	double	m_nMaterialAmount;
	double	m_nRemain;
	double	m_nReturnPercent;
	double	m_nAmount;
	//void			OnOptAmountChange(); 
	//void			OnOptAmountSetfocus(); 
	//void			OnOptAmountKillfocus(); 
	int			OnOptAmountCheckValue(); 
	//void			OnInsPriceChange(); 
	//void			OnInsPriceSetfocus(); 
	//void			OnInsPriceKillfocus(); 
	int			OnInsPriceCheckValue(); 
	//void			OnMaterialAmountChange(); 
	//void			OnMaterialAmountSetfocus(); 
	//void			OnMaterialAmountKillfocus(); 
	int			OnMaterialAmountCheckValue(); 
	//void			OnRemainChange(); 
	//void			OnRemainSetfocus(); 
	//void			OnRemainKillfocus(); 
	int			OnRemainCheckValue(); 
	//void			OnReturnPercentChange(); 
	//void			OnReturnPercentSetfocus(); 
	//void			OnReturnPercentKillfocus(); 
	int			OnReturnPercentCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnApplySelect(); 
	void			OnCloseSelect();
	void			OnGenFeeSelect(); 
	CHMSSurgeryChargeInfoDialog(CWnd *pParent);
	~CHMSSurgeryChargeInfoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSurgeryChargeInfoDialog(); 
	int OnEditHMSSurgeryChargeInfoDialog(); 
	int OnDeleteHMSSurgeryChargeInfoDialog(); 
	int OnSaveHMSSurgeryChargeInfoDialog(); 
	int OnCancelHMSSurgeryChargeInfoDialog(); 
	int OnHMSSurgeryChargeInfoDialogListLoadData(); 
};
#endif