#ifndef PMSCONTRACTORPURCHARGELIST_H
#define PMSCONTRACTORPURCHARGELIST_H

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
class CPMSContractorPurchargeList : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndImformationpurchare;
	CGuiLabel		m_wndPurcharDateLabel;
	CGuiDateCtrl	m_wndFromdate;
	CGuiButton		m_wndLoad;
	CGuiListCtrl	m_wndListPurchar;
	CGuiListCtrl	m_wndListApp;
	CGuiButton		m_wndAppro;
	CGuiButton		m_wndUnApp;
	CGuiCheckBox	m_wndUnContractor;
	CGuiCheckBox	m_wndNotPrice;
	CGuiButton		m_wndExit;
	CString	m_szFromdate;
	BOOL	m_bUnContractor;
	BOOL	m_bNotPrice;
	CString m_szItemID;
	double m_nInsprice;
	long m_nID;
	long m_nProductID;
	//void			OnFromdateChange(); 
	//void			OnFromdateSetfocus(); 
	//void			OnFromdateKillfocus(); 
	int			OnFromdateCheckValue(); 
	void			OnLoadSelect(); 
	long			OnListPurcharLoadData(); 
	void			OnListPurcharSelectChange(int nOldItem, int nNewItem); 
	void			OnListPurcharDblClick(); 
	int			OnListPurcharDeleteItem(); 
	long			OnListAppLoadData(); 
	void			OnListAppSelectChange(int nOldItem, int nNewItem); 
	void			OnListAppDblClick(); 
	int			OnListAppDeleteItem(); 
	void			OnApproSelect(); 
	void			OnUnAppSelect(); 
	void			OnUnContractorSelect(); 
	void			OnNotPriceSelect(); 
	void			OnExitSelect(); 
	CPMSContractorPurchargeList(CWnd *pParent);
	~CPMSContractorPurchargeList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSContractorPurchargeList(); 
	int OnEditPMSContractorPurchargeList(); 
	int OnDeletePMSContractorPurchargeList(); 
	int OnSavePMSContractorPurchargeList(); 
	int OnCancelPMSContractorPurchargeList(); 
	int OnPMSContractorPurchargeListListLoadData();
	int OnAddUIDToStockItems(long szSitems);
	int OnUnAppSitems(long nItems);
	int OnListUpdatePrice();
};
#endif
