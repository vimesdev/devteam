#ifndef CHMSDAILYFOODORDER_H
#define CHMSDAILYFOODORDER_H

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
class CCHMSDailyFoodOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndDrugInformation;
	CGuiGroupBox	m_wndGroupListDrug;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiButton		m_wndFind;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateCtrl	m_wndOrderDate;
	CGuiLabel		m_wndIssueDateLabel;
	CGuiDateCtrl	m_wndIssueDate;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndSend;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndDeptLabel;
	CGuiTextCtrl	m_wndDept;
	CGuiListCtrl	m_wndOrderList;
	CGuiListCtrl	m_wndPatientList;
	CGuiListCtrl	m_wndDrugList;
	CGuiLabel		m_wndTypeLabel;
	CGuiTextCtrl	m_wndType;
	CGuiNumberCtrl	m_wndTotalCount;
	CString	m_szOrderNo;
	CString	m_szOrderDate;
	CString	m_szIssueDate;
	CString	m_szStatus;
	CString	m_szNote;
	CString	m_szPatientName;
	CString	m_szDept;
	CString	m_szType;
	long	m_nTotalCount;
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	void			OnFindSelect(); 
	//void			OnOrderDateChange(); 
	//void			OnOrderDateSetfocus(); 
	//void			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//void			OnIssueDateChange(); 
	//void			OnIssueDateSetfocus(); 
	//void			OnIssueDateKillfocus(); 
	int			OnIssueDateCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnSendSelect(); 
	void			OnPrintSelect(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnDeptChange(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	int			OnDeptCheckValue(); 
	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	//void			OnTypeChange(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	int			OnTypeCheckValue(); 
	//void			OnTotalCountChange(); 
	//void			OnTotalCountSetfocus(); 
	//void			OnTotalCountKillfocus(); 
	int			OnTotalCountCheckValue(); 
	CCHMSDailyFoodOrder();
	~CCHMSDailyFoodOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSDailyFoodOrder(); 
	int OnEditCHMSDailyFoodOrder(); 
	int OnDeleteCHMSDailyFoodOrder(); 
	int OnSaveCHMSDailyFoodOrder(); 
	int OnCancelCHMSDailyFoodOrder(); 
	int OnCHMSDailyFoodOrderListLoadData(); 
};
#endif
