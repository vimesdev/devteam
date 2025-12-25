#ifndef HMSACCEPTINSURANCEDIALOG_H
#define HMSACCEPTINSURANCEDIALOG_H

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
class CHMSAcceptInsuranceDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGeneralCost;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndTotalCostLabel;
	CGuiNumberCtrl	m_wndTotalCost;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscountPaid;
	CGuiLabel		m_wndPatientPaidLabel;
	CGuiNumberCtrl	m_wndPatientPaid;
	CGuiLabel		m_wndUnpaidLabel;
	CGuiNumberCtrl	m_wndUnpaid;
	CGuiLabel		m_wndReceiveNoLabel;
	CGuiNumberCtrl	m_wndReceiveNo;
	CGuiLabel		m_wndAcceptDateLabel;
	CGuiDateCtrl	m_wndAcceptDate;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiComboBox	m_wndDescription;
	CGuiButton		m_wndAccept;
	CGuiButton		m_wndDischarge;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	long	m_nTotalCost;
	long	m_nDiscountPaid;
	long	m_nPatientPaid;
	long	m_nUnpaid;
	long	m_nReceiveNo;
	CString	m_szAcceptDate;
	CString	m_szDescriptionKey;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnTotalCostChange(); 
	//void			OnTotalCostSetfocus(); 
	//void			OnTotalCostKillfocus(); 
	int			OnTotalCostCheckValue(); 
	//void			OnDiscountPaidChange(); 
	//void			OnDiscountPaidSetfocus(); 
	//void			OnDiscountPaidKillfocus(); 
	int			OnDiscountPaidCheckValue(); 
	//void			OnPatientPaidChange(); 
	//void			OnPatientPaidSetfocus(); 
	//void			OnPatientPaidKillfocus(); 
	int			OnPatientPaidCheckValue(); 
	//void			OnUnpaidChange(); 
	//void			OnUnpaidSetfocus(); 
	//void			OnUnpaidKillfocus(); 
	int			OnUnpaidCheckValue(); 
	//void			OnReceiveNoChange(); 
	//void			OnReceiveNoSetfocus(); 
	//void			OnReceiveNoKillfocus(); 
	int			OnReceiveNoCheckValue(); 
	//void			OnAcceptDateChange(); 
	//void			OnAcceptDateSetfocus(); 
	//void			OnAcceptDateKillfocus(); 
	int			OnAcceptDateCheckValue(); 
	void			OnDescriptionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDescriptionSelendok(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	long			OnDescriptionLoadData(); 
	void			OnDescriptionAddNew(); 
	void			OnAcceptSelect(); 
	void			OnDischargeSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CHMSAcceptInsuranceDialog(CWnd *pParent);
	~CHMSAcceptInsuranceDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAcceptInsuranceDialog(); 
	int OnEditHMSAcceptInsuranceDialog(); 
	int OnDeleteHMSAcceptInsuranceDialog(); 
	int OnSaveHMSAcceptInsuranceDialog(); 
	int OnCancelHMSAcceptInsuranceDialog(); 
	int OnHMSAcceptInsuranceDialogListLoadData(); 
};
#endif
