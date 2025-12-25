#ifndef BHDETAILXML130_H
#define BHDETAILXML130_H

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
#include "TreeCtrlEx.h"
class CBHDetailXML130 : public CGuiDialog{
protected:
public:
	CTreeCtrlEx		m_wndTreeView;
	CGuiListCtrl	m_wndListFee;
	CGuiButton		m_wndLoad;
	CGuiButton		m_wndCheck;
	CGuiLabel		m_wndColLabel;
	CGuiComboBox	m_wndCol;
	CString			m_szMaLK;
	CString			m_szXMLTable;
	CString			m_szColKey;
	long			OnListFeeLoadData(); 
	void			OnListFeeSelectChange(int nOldItem, int nNewItem); 
	void			OnListFeeDblClick(); 
	int			OnListFeeDeleteItem(); 
	void			OnLoadSelect(); 
	void			OnCheckSelect(); 
	long			OnTreeViewLoadData(); 
	void			OnTreeViewSelectChange(int nOldItem, int nNewItem); 
	void			OnTreeViewDblClick(); 
	int			OnTreeViewDeleteItem(); 
	long		OnColLoadData();
	void		OnColSelenok();
	CBHDetailXML130(CWnd *pParent);
	~CBHDetailXML130();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddBHDetailXML130(); 
	int OnEditBHDetailXML130(); 
	int OnDeleteBHDetailXML130(); 
	int OnSaveBHDetailXML130(); 
	int OnCancelBHDetailXML130(); 
	int OnBHDetailXML130ListLoadData(); 
	void		OnGroupTreeSelChange(HTREEITEM, HTREEITEM);
};
#endif
