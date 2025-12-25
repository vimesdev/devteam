#ifndef PMSIMPORTSHEETLIST_H
#define PMSIMPORTSHEETLIST_H

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
class CPMSImportSheetList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndGeneralDepartmentUsage;
	CGuiLabel		m_wndItemGroupLabel;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiComboBox	m_wndItemGroup;
	CGuiLabel		m_wndSupplierLabel;
	CGuiComboBox	m_wndSupplier;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndInternal;
	CGuiRadioButton	m_wndKho708;
	CGuiRadioButton	m_wndPaid;
	CGuiCheckBox	m_wndGroupByType;
	CGuiCheckBox	m_wndGeneralReports;
	CGuiButton		m_wndPrintPreview;
	CGuiButton		m_wndExport;
	CGuiLabel		m_wndContractsLabel;
	CGuiComboBox	m_wndContracts;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szStorageKey;
	CString	m_szItemGroupKey;
	CString	m_szSupplierKey;
	int	m_nAll;
	int	m_nInternal;
	int	m_nKho708;
	int	m_nPaid;
	BOOL	m_bGroupByType;
	BOOL	m_bGeneralReports;
	CString	m_szContractsKey;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	void			OnItemGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemGroupSelendok(); 
	//void			OnItemGroupSetfocus(); 
	//void			OnItemGroupKillfocus(); 
	long			OnItemGroupLoadData(); 
	//void			OnItemGroupAddNew(); 
	void			OnSupplierSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSupplierSelendok(); 
	//void			OnSupplierSetfocus(); 
	//void			OnSupplierKillfocus(); 
	long			OnSupplierLoadData(); 
	//void			OnSupplierAddNew(); 
	void			OnAllSelect(); 
	void			OnInternalSelect(); 
	void			OnKho708Select(); 
	void			OnPaidSelect(); 
	void			OnGroupByTypeSelect(); 
	void			OnGeneralReportsSelect(); 
	void			OnPrintPreviewSelect(); 
	void			OnExportSelect(); 
	void			OnContractsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnContractsSelendok(); 
	//void			OnContractsSetfocus(); 
	//void			OnContractsKillfocus(); 
	long			OnContractsLoadData(); 
	//void			OnContractsAddNew(); 
	CPMSImportSheetList();
	~CPMSImportSheetList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void SetDefaultValues();
	int SetMode(int nMode);
};
#endif
