#ifndef FAMADJUSTMENTLINE_H
#define FAMADJUSTMENTLINE_H

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
class CFAMAdjustmentLine : public CGuiView{
protected:
public:
	CGuiListCtrl	m_wndItemList;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndItemNameLabel;
	CGuiComboBox	m_wndItemName;
	CGuiLabel		m_wndOldCostLabel;
	CGuiNumberCtrl	m_wndOldCost;
	CGuiLabel		m_wndNewCostLabel;
	CGuiNumberCtrl	m_wndNewCost;
	CGuiButton		m_wndSaveItem;
	CString	m_szDepartmentKey;
	CString	m_szItemNameKey;
	double	m_nOldCost;
	double	m_nNewCost;
	long	m_nDeprTime;
	CString m_szUsedate;
	CDbfMap m_tbl_line;
	CString m_szOrderNo;
	CString szTranLineID;
	CString m_szName;
	long m_nIndex;
	long			OnItemListLoadData(); 
	void			OnItemListSelectChange(int nOldItem, int nNewItem); 
	void			OnItemListDblClick(); 
	int			OnItemListDeleteItem(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnItemNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemNameSelendok(); 
	//void			OnItemNameSetfocus(); 
	//void			OnItemNameKillfocus(); 
	long			OnItemNameLoadData(); 
	//void			OnItemNameAddNew(); 
	//void			OnOldCostChange(); 
	//void			OnOldCostSetfocus(); 
	//void			OnOldCostKillfocus(); 
	int			OnOldCostCheckValue(); 
	//void			OnNewCostChange(); 
	//void			OnNewCostSetfocus(); 
	//void			OnNewCostKillfocus(); 
	int			OnNewCostCheckValue(); 
	void			OnSaveItemSelect(); 
	CFAMAdjustmentLine();
	~CFAMAdjustmentLine();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMAdjustmentLine(); 
	int OnEditFAMAdjustmentLine(); 
	int OnDeleteFAMAdjustmentLine(); 
	int OnSaveFAMAdjustmentLine(); 
	int OnCancelFAMAdjustmentLine(); 
	int OnFAMAdjustmentLineListLoadData(); 
};
#endif
