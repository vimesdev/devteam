#ifndef ReportDrugMaterialUnpick_H
#define ReportDrugMaterialUnpick_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
#define		IMPORT_EXPORT			1
#define		IMPORT_EXPORT_INSTOCK	2
#define		IMPORT_EXPORT_INSTOCK_DETAILFORMONEY	3
#define		DRUG_USER	4

class CReportDrugMaterialUnpick : public CGuiDialog
{
protected:
public:

	CGuiLabel		m_wndTitle;
	CGuiGroupBox	m_wndReportCondition;
	CGuiGroupBox	m_wndObjectInfo;
	CGuiGroupBox	m_wndDrugTypeInfo;
	CGuiGroupBox	m_wndTableInfo;

	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;

	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;

	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;

	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;

	CGuiButton		m_wndPrintPreview;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndClose;

	CGuiListCtrl	m_wndTypeList;
	CGuiListCtrl	m_wndObjectList;
	CGuiListCtrl	m_wndListFac;

	CString	m_szFromDate;
	CString	m_szToDate;

	CString	m_szStockKey;

	CString	m_szTypeKey;
	CString	m_szObjectKey;
	CString m_szStockName;
	BOOL	m_bReport;
	int			m_nType;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	int			OnCheckAll();
	int			OnUnCheckAll();
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStockSelendok(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	long			OnStockLoadData(); 
	void			OnStockAddNew(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	void			OnTypeAddNew(); 	
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	void			OnObjectAddNew(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	long			OnGroupLoadData(); 
	void			OnGroupAddNew(); 
	void			OnPrintPreviewSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnCloseSelect();

	long			OnTypeListLoadData(); 
	void			OnTypeListSelectChange(int nOldItem, int nNewItem); 
	void			OnTypeListDblClick(); 
	int			OnTypeListDeleteItem(); 
	long			OnObjectListLoadData(); 
	void			OnObjectListSelectChange(int nOldItem, int nNewItem); 
	void			OnObjectListDblClick(); 
	int			OnObjectListDeleteItem();
	long			OnListFacLoadData(); 
	void			OnListFacSelectChange(int nOldItem, int nNewItem); 
	void			OnListFacDblClick(); 
	int				OnListFacDeleteItem();  

	CReportDrugMaterialUnpick(CWnd *pParent);
	~CReportDrugMaterialUnpick();

	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSReportConditionDialog(); 
	int OnEditPMSReportConditionDialog(); 
	int OnDeletePMSReportConditionDialog(); 
	int OnSavePMSReportConditionDialog(); 
	int OnCancelPMSReportConditionDialog(); 
	int OnPMSReportConditionDialogListLoadData();	
	void	OnPrintBaocaosudungthuoctheodoituong(bool bPreview);
	void	OnExportBaocaosudungthuoctheodoituong();

	int OnTypeListCheckAll();
	int OnTypeListUnCheckAll();
	int OnObjectListCheckAll();
	int OnObjectListUnCheckAll();
};
#endif
