#ifndef PRODUCTIMPORTALL_H
#define PRODUCTIMPORTALL_H

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
#include "VIMESCORE_E10Def.h"

class AFX_EXT_CLASS CProductImportAll : public CGuiDialog{
protected:
	int IsMaped(int nCol);
public:
	CString m_szCurrentDir;
	CString m_szUID;
	CDbfMap			m_m_product_import_bl;
	CArray<MapColumn, MapColumn>	m_maps;
	void AddRefColumn(CString szField, CString szColName, int width=100);

	CGridListView	m_wndList;
	CGuiButton		m_wndSheet;
	CGuiButton		m_wndValid;
	CGuiButton		m_wndImport;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndValidated;
	CGuiRadioButton	m_wndInvalidate;
	CGuiRadioButton	m_wndImported;
	CGuiButton		m_wndSysCategory;
	int	m_nState;
	
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnSheetSelect(); 
	void			OnValidSelect(); 
	void			OnImportSelect(); 
	void			OnAllSelect(); 
	void			OnValidatedSelect(); 
	void			OnInvalidateSelect(); 
	void			OnImportedSelect(); 
	void			OnSysCategorySelect(); 
	CProductImportAll(CWnd *pParent);
	~CProductImportAll();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductImportAll(); 
	int OnEditProductImportAll(); 
	int OnDeleteProductImportAll(); 
	int OnSaveProductImportAll(); 
	int OnCancelProductImportAll(); 
	int OnProductImportAllListLoadData(); 
	int OnImportToTable();
};
#endif
