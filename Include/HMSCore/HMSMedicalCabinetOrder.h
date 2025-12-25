#ifndef HMSMEDICALCABINETORDER_H
#define HMSMEDICALCABINETORDER_H

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
#include "GuiView.h"
#include "DbField.h"
class CHMSMedicalCabinetOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndGeneralInformation;
	CGuiGroupBox	m_wndOrderInformation;
	CGuiLabel		m_wndFromStorageLabel;
	CGuiComboBox	m_wndFromStorage;
	CGuiComboBox	m_wndToCabinet;
	CGuiLabel		m_wndToStorageLabel;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndApprovedDateLabel;
	CGuiDateCtrl	m_wndApprovedDate;
	CGuiLabel		m_wndSubTotalLabel;
	CGuiNumberCtrl	m_wndSubTotal;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndSend;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndAddLine;
	CGuiListCtrl	m_wndList;
	CString	m_szFromStorageKey;
	CString	m_szToCabinetKey;
	CString	m_szDescription;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szApprovedDate;
	long	m_nSubTotal;
	long	m_nTotalAmount;
	CDbfMap	m_m_transactionTbl;
	void			OnFromStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromStorageSelendok(); 
	//void			OnFromStorageSetfocus(); 
	//void			OnFromStorageKillfocus(); 
	long			OnFromStorageLoadData(); 
	//void			OnFromStorageAddNew(); 
	void			OnToCabinetSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnToCabinetSelendok(); 
	//void			OnToCabinetSetfocus(); 
	//void			OnToCabinetKillfocus(); 
	long			OnToCabinetLoadData(); 
	//void			OnToCabinetAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
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
	//void			OnSubTotalChange(); 
	//void			OnSubTotalSetfocus(); 
	//void			OnSubTotalKillfocus(); 
	int			OnSubTotalCheckValue(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnDiscardSelect(); 
	void			OnPrintSelect(); 
	void			OnSendSelect(); 
	void			OnCloseSelect(); 
	void			OnAddLineSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSMedicalCabinetOrder();
	~CHMSMedicalCabinetOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSMedicalCabinetOrder(); 
	int OnEditHMSMedicalCabinetOrder(); 
	int OnDeleteHMSMedicalCabinetOrder(); 
	int OnSaveHMSMedicalCabinetOrder(); 
	int OnCancelHMSMedicalCabinetOrder(); 
	int OnHMSMedicalCabinetOrderListLoadData(); 
};
#endif
