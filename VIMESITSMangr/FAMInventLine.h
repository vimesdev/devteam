#ifndef FAMINVENTLINE_H
#define FAMINVENTLINE_H

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
class CFAMInventLine : public CGuiView{
protected:
public:
	CGuiListCtrl	m_wndItemList;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndItemNameLabel;
	CGuiComboBox	m_wndItemName;
	CGuiLabel		m_wndQualityLevel;
	CGuiRadioButton	m_wndLevel1;
	CGuiRadioButton	m_wndLevel2;
	CGuiRadioButton	m_wndLevel3;
	CGuiRadioButton	m_wndLevel4;
	CGuiRadioButton	m_wndLevel5;
	CGuiCheckBox	m_wndLiquidRequest;
	CGuiCheckBox	m_wndTransferRequest;
	CGuiButton		m_wndSaveItem;
	CString	m_szDepartmentKey;
	CString	m_szItemNameKey;
	CString m_szQty;
	int	m_nLevel1;
	int	m_nLevel2;
	int	m_nLevel3;
	int	m_nLevel4;
	int	m_nLevel5;
	BOOL	m_bLiquidRequest;
	BOOL	m_bTransferRequest;
	CDbfMap m_tbl_line;
	CString m_szOrderNo;
	long m_nIndex;
	CString m_szName;
	CString m_szSet;
	CString m_szTranLineID;
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
	void			OnLevel1Select(); 
	void			OnLevel2Select(); 
	void			OnLevel3Select(); 
	void			OnLevel4Select(); 
	void			OnLevel5Select(); 
	void			OnLiquidRequestSelect(); 
	void			OnTransferRequestSelect(); 
	void			OnSaveItemSelect(); 
	CFAMInventLine();
	~CFAMInventLine();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMInventLine(); 
	int OnEditFAMInventLine(); 
	int OnDeleteFAMInventLine(); 
	int OnSaveFAMInventLine(); 
	int OnCancelFAMInventLine(); 
	int OnFAMInventLineListLoadData(); 
};
#endif
