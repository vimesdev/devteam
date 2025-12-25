#ifndef HMSBEDApplyDynamicPriceDIALOG_H
#define HMSBEDApplyDynamicPriceDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CHMSBedApplyDynamicPriceDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPeriod;
	CGuiLabel		m_wndTreatmentNumberLabel;
	CGuiNumberCtrl	m_wndTreatmentNumber;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndLevelOfPriceLabel;
	CGuiComboBox	m_wndLevelOfPrice;
	CGuiLabel		m_wndPriceLabel;
	CGuiNumberCtrl	m_wndPrice;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	long	m_nTreatmentNumber;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szLevelOfPriceKey;
	long	m_nPrice;
	//void			OnTreatmentNumberChange(); 
	//void			OnTreatmentNumberSetfocus(); 
	//void			OnTreatmentNumberKillfocus(); 
	int			OnTreatmentNumberCheckValue(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnLevelOfPriceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevelOfPriceSelendok(); 
	//void			OnLevelOfPriceSetfocus(); 
	//void			OnLevelOfPriceKillfocus(); 
	long			OnLevelOfPriceLoadData(); 
	void			OnLevelOfPriceAddNew(); 
	//void			OnPriceChange(); 
	//void			OnPriceSetfocus(); 
	//void			OnPriceKillfocus(); 
	int			OnPriceCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSBedApplyDynamicPriceDialog(CWnd *pParent);
	~CHMSBedApplyDynamicPriceDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBedApplyDynamicPriceDialog(); 
	int OnEditHMSBedApplyDynamicPriceDialog(); 
	int OnDeleteHMSBedApplyDynamicPriceDialog(); 
	int OnSaveHMSBedApplyDynamicPriceDialog(); 
	int OnCancelHMSBedApplyDynamicPriceDialog(); 
	int OnHMSBedApplyDynamicPriceDialogListLoadData(); 
};
#endif
