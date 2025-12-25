#ifndef HMSFEEDOCUMENT_H
#define HMSFEEDOCUMENT_H

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
#include "GuiView.h"
#include "DbField.h"
class CHMSFeeDocument : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndFeeInformation;
	CGuiListCtrl	m_wndFeeList;
	CGuiLabel		m_wndCostLabel;
	CGuiNumberCtrl	m_wndCost;
	CGuiLabel		m_wndInsPaymentLabel;
	CGuiNumberCtrl	m_wndInsPayment;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndTotalAdvanceLabel;
	CGuiNumberCtrl	m_wndAdvance;
	CGuiLabel		m_wndPaymentLabel;
	CGuiNumberCtrl	m_wndPayment;
	CGuiLabel		m_wndUnpaidLabel;
	CGuiNumberCtrl	m_wndUnpaid;
	long	m_nCost;
	long	m_nInsPayment;
	long	m_nDiscount;
	long	m_nAdvance;
	long	m_nPayment;
	long	m_nUnpaid;
	long			OnFeeListLoadData(); 
	void			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	void			OnFeeListDblClick(); 
	int			OnFeeListDeleteItem(); 
	//void			OnCostChange(); 
	//void			OnCostSetfocus(); 
	//void			OnCostKillfocus(); 
	int			OnCostCheckValue(); 
	//void			OnInsPaymentChange(); 
	//void			OnInsPaymentSetfocus(); 
	//void			OnInsPaymentKillfocus(); 
	int			OnInsPaymentCheckValue(); 
	//void			OnDiscountChange(); 
	//void			OnDiscountSetfocus(); 
	//void			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	//void			OnAdvanceChange(); 
	//void			OnAdvanceSetfocus(); 
	//void			OnAdvanceKillfocus(); 
	int			OnAdvanceCheckValue(); 
	//void			OnPaymentChange(); 
	//void			OnPaymentSetfocus(); 
	//void			OnPaymentKillfocus(); 
	int			OnPaymentCheckValue(); 
	//void			OnUnpaidChange(); 
	//void			OnUnpaidSetfocus(); 
	//void			OnUnpaidKillfocus(); 
	int			OnUnpaidCheckValue(); 
	CHMSFeeDocument();
	~CHMSFeeDocument();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeeDocument(); 
	int OnEditHMSFeeDocument(); 
	int OnDeleteHMSFeeDocument(); 
	int OnSaveHMSFeeDocument(); 
	int OnCancelHMSFeeDocument(); 
	int OnHMSFeeDocumentListLoadData(); 
};
#endif
