#ifndef HMSPATIENTPAYMENTORERDIALOG_H
#define HMSPATIENTPAYMENTORERDIALOG_H

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
class CHMSPatientPaymentOrerDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPaymentOrderInformation;
	CGuiLabel		m_wndPaymentNoLabel;
	CGuiTextCtrl	m_wndPaymentNo;
	CGuiLabel		m_wndPaymentDateLabel;
	CGuiTextCtrl	m_wndPaymentDate;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiLabel		m_wndPaymentTypeLabel;
	CGuiComboBox	m_wndPaymentType;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiButton		m_wndAddButton;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szPaymentNo;
	CString	m_szPaymentDate;
	CString	m_szReason;
	CString	m_szPaymentTypeKey;
	long	m_nAmount;
	long	m_nTotalAmount;
	//void			OnPaymentNoChange(); 
	//void			OnPaymentNoSetfocus(); 
	//void			OnPaymentNoKillfocus(); 
	int			OnPaymentNoCheckValue(); 
	//void			OnPaymentDateChange(); 
	//void			OnPaymentDateSetfocus(); 
	//void			OnPaymentDateKillfocus(); 
	int			OnPaymentDateCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	void			OnPaymentTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentTypeSelendok(); 
	//void			OnPaymentTypeSetfocus(); 
	//void			OnPaymentTypeKillfocus(); 
	long			OnPaymentTypeLoadData(); 
	//void			OnPaymentTypeAddNew(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnAddButtonSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSPatientPaymentOrerDialog(CWnd *pParent);
	~CHMSPatientPaymentOrerDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientPaymentOrerDialog(); 
	int OnEditHMSPatientPaymentOrerDialog(); 
	int OnDeleteHMSPatientPaymentOrerDialog(); 
	int OnSaveHMSPatientPaymentOrerDialog(); 
	int OnCancelHMSPatientPaymentOrerDialog(); 
	int OnHMSPatientPaymentOrerDialogListLoadData(); 
};
#endif
