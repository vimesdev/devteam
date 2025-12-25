#ifndef PRODUCTSYNCIMPORTDIALOG_H
#define PRODUCTSYNCIMPORTDIALOG_H

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

class AFX_EXT_CLASS CProductSyncImportDialog : public CGuiDialog{
protected:
	CDbfMap m_tbl;
	CArray<MapColumn, MapColumn>	m_maps;
	CDbfMap			m_product_import_tbl;
	void AddRefColumn(CString szField, CString szColName, int nWidth=100);
public:
	CGridListView	m_wndList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndXLSFileLabel;
	CGuiTextCtrl	m_wndXLSFile;
	CGuiButton		m_wndBrowse;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szID;
	CString	m_szDescription;
	CString	m_szXLSFile;
	int			OnListDownloadItem(); 
	int			OnListImportItem(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnXLSFileChange(); 
	//void			OnXLSFileSetfocus(); 
	//void			OnXLSFileKillfocus(); 
	int			OnXLSFileCheckValue(); 
	void			OnBrowseSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnCancelSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CProductSyncImportDialog(CWnd *pParent);
	~CProductSyncImportDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductSyncImportDialog(); 
	int OnEditProductSyncImportDialog(); 
	int OnDeleteProductSyncImportDialog(); 
	int OnSaveProductSyncImportDialog(); 
	int OnCancelProductSyncImportDialog(); 
	int OnProductSyncImportDialogListLoadData(); 
	int OnImportToTable();
};
#endif
