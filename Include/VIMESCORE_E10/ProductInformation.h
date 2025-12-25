#ifndef PRODUCTINFORMATION_H
#define PRODUCTINFORMATION_H

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
class CProductInformation : public CGuiView{
protected:
	long	m_nProductID;
public:
	CGuiLabel		m_wndProductNameLabel;
	CGuiTextCtrl	m_wndProductName;
	CGuiLabel		m_wndProductTypeLabel;
	CGuiTextCtrl	m_wndProductType;
	CGuiLabel		m_wndProductCategoryLabel;
	CGuiTextCtrl	m_wndProductCategory;
	CGuiGroupBox	m_wndProductInformation;
	CGuiLabel		m_wndGenericLabel;
	CGuiTextCtrl	m_wndGeneric;
	CGuiLabel		m_wndMfgLabel;
	CGuiTextCtrl	m_wndMfg;
	CGuiLabel		m_wndSerialNoLabel;
	CGuiTextCtrl	m_wndSerialNo;
	CGuiLabel		m_wndSpecificationLabel;
	CGuiTextCtrl	m_wndSpecification;
	CString	m_szProductName;
	CString	m_szProductType;
	CString	m_szProductCategory;
	CString	m_szGeneric;
	CString	m_szMfg;
	CString	m_szSerialNo;
	CString	m_szSpecification;
	//void			OnProductNameChange(); 
	//void			OnProductNameSetfocus(); 
	//void			OnProductNameKillfocus(); 
	int			OnProductNameCheckValue(); 
	//void			OnProductTypeChange(); 
	//void			OnProductTypeSetfocus(); 
	//void			OnProductTypeKillfocus(); 
	int			OnProductTypeCheckValue(); 
	//void			OnProductCategoryChange(); 
	//void			OnProductCategorySetfocus(); 
	//void			OnProductCategoryKillfocus(); 
	int			OnProductCategoryCheckValue(); 
	//void			OnGenericChange(); 
	//void			OnGenericSetfocus(); 
	//void			OnGenericKillfocus(); 
	int			OnGenericCheckValue(); 
	//void			OnMfgChange(); 
	//void			OnMfgSetfocus(); 
	//void			OnMfgKillfocus(); 
	int			OnMfgCheckValue(); 
	//void			OnSerialNoChange(); 
	//void			OnSerialNoSetfocus(); 
	//void			OnSerialNoKillfocus(); 
	int			OnSerialNoCheckValue(); 
	//void			OnSpecificationChange(); 
	//void			OnSpecificationSetfocus(); 
	//void			OnSpecificationKillfocus(); 
	int			OnSpecificationCheckValue(); 
	CProductInformation();
	~CProductInformation();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductInformation(); 
	int OnEditProductInformation(); 
	int OnDeleteProductInformation(); 
	int OnSaveProductInformation(); 
	int OnCancelProductInformation(); 
	int OnProductInformationListLoadData(); 
	void Refresh(long nProductID);
};
#endif
