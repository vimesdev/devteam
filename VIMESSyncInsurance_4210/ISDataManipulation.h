#ifndef ISDATAMANIPULATION_H
#define ISDATAMANIPULATION_H

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
#include "Excel.h"
#include <map>
// An array of integers
typedef std::vector< CString > StrArray;
// Map from strings to array of integers
typedef std::map< CString, StrArray > MapStringArray;

class CISDataManipulation : public CGuiView{
protected:
	CStringArray m_arrColName;
	CString m_SetStatement;
	CString m_WhereStatement;
	MapStringArray m_map;
	MapStringArray::iterator m_itm;
	StrArray::iterator m_iia;
	CExcel m_Xcel;
public:
	CGuiGroupBox	m_wndDataManipulation;
	CGuiGroupBox	m_wndSQLBox;
	CGuiLabel		m_wndDataTableLabel;
	CGuiComboBox	m_wndDataTable;
	CGuiLabel		m_wndKeySearchLabel;
	CGuiTextCtrl	m_wndKeySearch;
	CGuiButton		m_wndLoad;
	CGuiButton		m_wndPreviewData;
	CGuiButton		m_wndImport;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndRecalc;
	CGuiListCtrlEx	m_wndList;
	CGuiTextCtrl	m_wndSQL;
	CString	m_szDataTableKey;
	CString	m_szKeySearch;
	CString m_szSQL;
	void			OnDataTableSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDataTableSelendok(); 
	//void			OnDataTableSetfocus(); 
	//void			OnDataTableKillfocus(); 
	long			OnDataTableLoadData(); 
	//void			OnDataTableAddNew(); 
	//void			OnKeySearchChange(); 
	//void			OnKeySearchSetfocus(); 
	//void			OnKeySearchKillfocus(); 
	int			OnKeySearchCheckValue(); 
	void			OnLoadSelect(); 
	void			OnPreviewDataSelect();
	void			OnImportSelect();
	void			OnUpdateSelect(); 
	void			OnDeleteSelect(); 
	void			OnRecalcSelect();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CISDataManipulation(CWnd *pParent);
	~CISDataManipulation();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void SetDefaultValues();
	int SetMode(int nMode);
	CString GetColumnName(CGuiListCtrlEx* pList, int nCol);
	void GetWhereStatement(int nSel);
	int	 GetKeyColumn(CString szKeyColumn);
	int OnListAddColumn();
	bool IsEditable(CGuiComboBox* pDataTable, CString szColumnName);
	void PopulateMap();
	void IterateMap();
	void OnListSetEdit(CGuiListCtrl* pList);
	int OnListSubItemCheckValue();
	void ShowSQL(CWnd *pWnd);
	void OnPreviewDataInsert();
	int OnListAddColumn(CExcel* xls);
	long OnListInsertData(CExcel* xls);
	void AdjustColumnWidth(CGuiListCtrlEx* pCtrl);
	long OnTableInsertData(CExcel* xls);
	CString GetColumnInsert();
	BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
