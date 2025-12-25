#ifndef IVFOPERATIONORDER_H
#define IVFOPERATIONORDER_H

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
#include "HMSOperationGeneralView.h"
#include "HMSOperationMaterialView.h"
#include "HMSINOperationMaterialView.h"
#include "HMSSurgeryChargeView.h"
#include "HMSOperationExtraInfoView.h"

class AFX_EXT_CLASS CIVFOperationOrder : public CGuiView{
protected:
	long	m_nOrderID;
	CString	m_szDoctor;
	CString m_szItemID;
	long	m_nRefIdx;
	CString	m_szStatus;
	CString m_szFeeType;
public:

	CString	m_szCreatedBy;
	CString	m_szDepartmentID;
	
	void	RefreshData();

	CHMSOperationGeneralView	m_wndGeneralView;
	CHMSOperationMaterialView	m_wndMaterialView;
	CHMSINOperationMaterialView	m_wndINMaterialView;
	CHMSOperationMaterialView	m_wndMaterialPreparingView;
	CHMSOperationExtraInfoView	m_wndExtraInfoView;

	CGuiGroupBox	m_wndOperationInformation;
	CGuiTextCtrl	m_wndSearch;
	CGuiListCtrl	m_wndOrderList;
	CGuiTextCtrl	m_wndDescription;
	CGuiTabCtrl	m_wndTab;
	CString	m_szSearch;
	CString	m_szDescription;
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 

	long			OnOrderListLoadData(); 
	void			OnOrderListSelectChange(int nOldItem, int nNewItem); 
	void			OnOrderListDblClick(); 
	int			OnOrderListDeleteItem(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	CIVFOperationOrder();
	~CIVFOperationOrder();
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
	int OnNhapPhieuPhucHoiChucNang();
	int OnPrintOrderC6();
	void OnDescription();
	void OnOperation();
	void OnResizeLayout();
	void OnUpdateInfo();
	int OnOperationIvffree();
	int OnTestListPriceChangeRequired();
};
#endif