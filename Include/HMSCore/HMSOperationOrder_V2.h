#ifndef HMSOPERATIONORDER_V2_H
#define HMSOPERATIONORDER_V2_H

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
#include "HMSOperationGeneralView_V2.h"
#include "HMSOperationMaterialView_V2.h"


class AFX_EXT_CLASS CHMSOperationOrder_V2 : public CGuiView{
protected:
	long	m_nOrderID;
	
	CString m_szItemID;
	long	m_nRefIdx;
	CString	m_szStatus;
public:
	long	m_nPatientNo;
	long	m_nDocumentNo;

	CString	m_szCreatedBy;
	CString	m_szDepartmentID;
	CString m_szObject;
	CString	m_szDoctor;

	void	RefreshData(long nDocumentNo=0);

	CHMSOperationGeneralView_V2	m_wndGeneralView;
	CHMSOperationMaterialView_V2	m_wndMaterialView;
	CHMSOperationMaterialView_V2	m_wndMaterialPreparingView;

	CGuiGroupBox	m_wndOperationInformation;
	CGuiListCtrl	m_wndOrderList;
	CGuiTabCtrl	m_wndTab;

	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	CHMSOperationOrder_V2();
	~CHMSOperationOrder_V2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOperationOrder(); 
	int OnEditHMSOperationOrder(); 
	int OnDeleteHMSOperationOrder(); 
	int OnSaveHMSOperationOrder(); 
	int OnCancelHMSOperationOrder(); 
	int OnHMSOperationOrderListLoadData(); 
	int OnModifyItemFee();
	int	OnEditOperation();
	int	OnPrintMaterial();
	int	OnPrintHitech();
	
	void	OnResizeLayout();
};
#endif
