#ifndef HMSAnestheticScheduleList_H
#define HMSAnestheticScheduleList_H

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
#include "GridListView.h"
class CHMSAnestheticScheduleList : public CGuiView{
protected:
public:
	CWnd*			m_wndOrder;
	CGuiGroupBox	m_wndPatientListInfo;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiListCtrl	m_wndOrderList;

	//CGridListView	m_wndList;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndDiscard;
	CGuiButton		m_wndPrint;
	CString	m_szFromDate;
	CString	m_szToDate;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	long	m_nMatOID;
	long	m_nOrderID;
	CString	m_szOrderDate;
	CString	m_szPerformPlaceID;


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
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnDeleteSelect(); 
	void			OnConfirmSelect(); 
	void			OnDiscardSelect(); 
	void			OnPrintSelect(); 
	void			OnAddPatientOrder();

	CHMSAnestheticScheduleList();
	~CHMSAnestheticScheduleList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAnestheticScheduleList(); 
	int OnEditHMSAnestheticScheduleList(); 
	int OnDeleteHMSAnestheticScheduleList(); 
	int OnSaveHMSAnestheticScheduleList(); 
	int OnCancelHMSAnestheticScheduleList(); 
	int OnHMSAnestheticScheduleListListLoadData(); 
	void	PrintOperationOrder(bool bPrintAll=true, bool bPreview=true);
	void	PrintOperationOrder2(bool bPrintAll=true, bool bPreview=true);
	void	PrintBBMaterial();
	void	OnPrintMaterialOrder();
	void    OnExportOperationOrder();
	CString	GetQueryString(bool bPrintAll=true);
protected:
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
};
#endif
