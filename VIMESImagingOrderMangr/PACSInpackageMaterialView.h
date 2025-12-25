#ifndef PACSINPACKAGEMATERIALVIEW_H
#define PACSINPACKAGEMATERIALVIEW_H

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
class CPACSInpackageMaterialView : public CGuiView{
protected:
	long	m_nOrder_id;
	long	m_nDoc_no;
	CString	m_szItem_id;
public:
	CGuiGroupBox	m_wndOrderList;
	CGuiRadioButton	m_wndWaitting;
	CGuiRadioButton	m_wndPerformed;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiGroupBox	m_wndStatus;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndRefresh;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndMaterialList;
	CGuiButton		m_wndAddMaterial;
	CGuiCheckBox	m_wndCheckAll;
	int	m_nWaitting;
	int	m_nPerformed;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szSearch;
	BOOL	m_bCheckAll;
	void			OnWaittingSelect(); 
	void			OnPerformedSelect(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnRefreshSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnMaterialListLoadData(); 
	void			OnMaterialListSelectChange(int nOldItem, int nNewItem); 
	void			OnMaterialListDblClick(); 
	int			OnMaterialListDeleteItem(); 
	void			OnAddMaterialSelect(); 
	void		OnCheckAllSelect();
	CPACSInpackageMaterialView();
	~CPACSInpackageMaterialView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPACSInpackageMaterialView(); 
	int OnEditPACSInpackageMaterialView(); 
	int OnDeletePACSInpackageMaterialView(); 
	int OnSavePACSInpackageMaterialView(); 
	int OnCancelPACSInpackageMaterialView(); 
	int OnPACSInpackageMaterialViewListLoadData();
	void OnResizeLayout();
};
#endif
