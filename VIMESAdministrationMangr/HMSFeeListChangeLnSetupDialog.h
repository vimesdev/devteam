#ifndef HMSFEELISTCHANGELNSETUPDIALOG_H
#define HMSFEELISTCHANGELNSETUPDIALOG_H

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
class CHMSFeeListChangeLnSetupDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndSearchCircularLabel;
	CGuiComboBox	m_wndSearchCircular;
	CGuiLabel		m_wndSearchNameLabel;	
	CGuiTextCtrl	m_wndSearchName;
	CGuiButton		m_wndSearch;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndCircularLabel;
	CGuiComboBox	m_wndCircular;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndItemLabel;
	CGuiComboBox	m_wndItem;
	CGuiLabel		m_wndNewServPriceLabel;
	CGuiNumberCtrl	m_wndNewServicePrice;
	CGuiLabel		m_wndNewInsPriceLabel;
	CGuiNumberCtrl	m_wndNewInsPrice;
	CGuiLabel		m_wndNewPolPriceLabel;
	CGuiNumberCtrl	m_wndNewPolPrice;
	CGuiLabel		m_wndOldServPriceLabel;
	CGuiNumberCtrl	m_wndOldServPrice;
	CGuiLabel		m_wndOldInsPriceLabel;
	CGuiNumberCtrl	m_wndOldInsPrice;
	CGuiLabel		m_wndOldPolPriceLabel;
	CGuiNumberCtrl	m_wndOldPolPrice;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndImport;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CString	m_szSearchCircularKey;
	CString	m_szSearchName;
	CString	m_szCircularKey;
	CString	m_szTypeKey;
	CString	m_szItemKey;
	long	m_nNewServicePrice;
	long	m_nNewInsPrice;
	long	m_nNewPolPrice;
	long	m_nOldServPrice;
	long	m_nOldInsPrice;
	long	m_nOldPolPrice;
	long    m_nOid;
	CString m_szName;

	CString m_szCircular;

	CDbfMap	m_hms_feelist_changelnTbl;
	void			OnSearchCircularSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSearchCircularSelendok(); 
	//void			OnSearchCircularSetfocus(); 
	//void			OnSearchCircularKillfocus(); 
	long			OnSearchCircularLoadData(); 
	//void			OnSearchCircularAddNew(); 
	//void			OnSearchNameChange(); 
	//void			OnSearchNameSetfocus(); 
	//void			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void			OnSearchSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnCircularSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCircularSelendok(); 
	//void			OnCircularSetfocus(); 
	//void			OnCircularKillfocus(); 
	long			OnCircularLoadData(); 
	//void			OnCircularAddNew(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnItemSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemSelendok(); 
	//void			OnItemSetfocus(); 
	//void			OnItemKillfocus(); 
	long			OnItemLoadData(); 
	//void			OnItemAddNew(); 
	//void			OnNewServicePriceChange(); 
	//void			OnNewServicePriceSetfocus(); 
	//void			OnNewServicePriceKillfocus(); 
	int			OnNewServicePriceCheckValue(); 
	//void			OnNewInsPriceChange(); 
	//void			OnNewInsPriceSetfocus(); 
	//void			OnNewInsPriceKillfocus(); 
	int			OnNewInsPriceCheckValue(); 
	//void			OnNewPolPriceChange(); 
	//void			OnNewPolPriceSetfocus(); 
	//void			OnNewPolPriceKillfocus(); 
	int			OnNewPolPriceCheckValue(); 
	//void			OnOldServPriceChange(); 
	//void			OnOldServPriceSetfocus(); 
	//void			OnOldServPriceKillfocus(); 
	int			OnOldServPriceCheckValue(); 
	//void			OnOldInsPriceChange(); 
	//void			OnOldInsPriceSetfocus(); 
	//void			OnOldInsPriceKillfocus(); 
	int			OnOldInsPriceCheckValue(); 
	//void			OnOldPolPriceChange(); 
	//void			OnOldPolPriceSetfocus(); 
	//void			OnOldPolPriceKillfocus(); 
	int			OnOldPolPriceCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnExportSelect(); 
	void			OnImportSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CHMSFeeListChangeLnSetupDialog(CWnd *pParent);
	~CHMSFeeListChangeLnSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeeListChangeLnSetupDialog(); 
	int OnEditHMSFeeListChangeLnSetupDialog(); 
	int OnDeleteHMSFeeListChangeLnSetupDialog(); 
	int OnSaveHMSFeeListChangeLnSetupDialog(); 
	int OnCancelHMSFeeListChangeLnSetupDialog(); 
	int OnHMSFeeListChangeLnSetupDialogListLoadData(); 
	void	OnCircularLabelSelect();
	void OnApplyPrice();
};
#endif
