#ifndef HMSPRESCRIPTIONAPPROVE_H
#define HMSPRESCRIPTIONAPPROVE_H

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
class CHMSPrescriptionApprove : public CGuiView{
protected:
	long		m_nTransactionID;
	long		m_nOrderID;
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndPrescriptionInformation;
	CGuiGroupBox	m_wndLines;
	CGuiGroupBox	m_wndInformationBar;
	CGuiLabel		m_wndTITLE;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndTotalPatientLabel;
	CGuiNumberCtrl	m_wndTotalPatient;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndSheetNoLabel;
	CGuiTextCtrl	m_wndSheetNo;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiListCtrl	m_wndOrderList;
	CGuiCheckBox	m_wndApprovedOrder;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndLine;
	CGuiButton		m_wndApprove;
	CGuiButton		m_wndDiscard;
	CString	m_szID;
	long	m_nTotalPatient;
	long	m_nTotalAmount;
	CString	m_szSheetNo;
	CString	m_szDepartmentKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	BOOL	m_bApprovedOrder;
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnTotalPatientChange(); 
	//void			OnTotalPatientSetfocus(); 
	//void			OnTotalPatientKillfocus(); 
	int			OnTotalPatientCheckValue(); 
	//void			OnTotalAmountChange(); 
	//void			OnTotalAmountSetfocus(); 
	//void			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	//void			OnSheetNoChange(); 
	//void			OnSheetNoSetfocus(); 
	//void			OnSheetNoKillfocus(); 
	int			OnSheetNoCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	void			OnApprovedOrderSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnLineLoadData(); 
	void			OnLineSelectChange(int nOldItem, int nNewItem); 
	void			OnLineDblClick(); 
	int			OnLineDeleteItem(); 
	void			OnApproveSelect(); 
	void			OnDiscardSelect(); 
	CHMSPrescriptionApprove();
	~CHMSPrescriptionApprove();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPrescriptionApprove(); 
	int OnEditHMSPrescriptionApprove(); 
	int OnDeleteHMSPrescriptionApprove(); 
	int OnSaveHMSPrescriptionApprove(); 
	int OnCancelHMSPrescriptionApprove(); 
	int OnHMSPrescriptionApproveListLoadData(); 
};
#endif
