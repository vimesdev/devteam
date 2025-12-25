#ifndef HMSPRESCRIPTIONBATCHPOPUP_H
#define HMSPRESCRIPTIONBATCHPOPUP_H

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
#include "GuiPopup.h"
#include "DbField.h"
class CHMSPrescriptionBatchPopup : public CGuiPopup{
protected:
public:
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndDayNumberLabel;
	CGuiNumberCtrl	m_wndDayNumber;
	CGuiLabel		m_wndItemLabel;
	CGuiNumberCtrl	m_wndItem;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndQuantityForDayLabel;
	CGuiNumberCtrl	m_wndQuantityForDay;
	CGuiLabel		m_wndIndicationLabel;
	CGuiTextCtrl	m_wndIndication;
	CGuiLabel		m_wndUsageLabel;
	CGuiComboBox	m_wndUsage;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szFromDate;
	long	m_nDayNumber;
	long	m_nItem;
	long	m_nQuantity;
	long	m_nQuantityForDay;
	CString	m_szIndication;
	CString	m_szUsageKey;
	CDbfMap	m_hms_ipharmaorder_batchTbl;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnDayNumberChange(); 
	//void			OnDayNumberSetfocus(); 
	//void			OnDayNumberKillfocus(); 
	int			OnDayNumberCheckValue(); 
	//void			OnItemChange(); 
	//void			OnItemSetfocus(); 
	//void			OnItemKillfocus(); 
	int			OnItemCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnQuantityForDayChange(); 
	//void			OnQuantityForDaySetfocus(); 
	//void			OnQuantityForDayKillfocus(); 
	int			OnQuantityForDayCheckValue(); 
	//void			OnIndicationChange(); 
	//void			OnIndicationSetfocus(); 
	//void			OnIndicationKillfocus(); 
	int			OnIndicationCheckValue(); 
	void			OnUsageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUsageSelendok(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	long			OnUsageLoadData(); 
	//void			OnUsageAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSPrescriptionBatchPopup(CWnd *pParent, int nMode);
	~CHMSPrescriptionBatchPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPrescriptionBatchPopup(); 
	int OnEditHMSPrescriptionBatchPopup(); 
	int OnDeleteHMSPrescriptionBatchPopup(); 
	int OnSaveHMSPrescriptionBatchPopup(); 
	int OnCancelHMSPrescriptionBatchPopup(); 
	int OnHMSPrescriptionBatchPopupListLoadData(); 
};
#endif
