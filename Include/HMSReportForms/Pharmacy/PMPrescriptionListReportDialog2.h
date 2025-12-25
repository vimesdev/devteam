#ifndef PMPRESCRIPTIONLISTREPORTDIALOG2_H
#define PMPRESCRIPTIONLISTREPORTDIALOG2_H

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
class CPMPrescriptionListReportDialog2 : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiGroupBox	m_wndDeptType;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiRadioButton	m_wndCheckAll;
	CGuiRadioButton	m_wndOutPatient;
	CGuiRadioButton	m_wndInPatient;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndDrugList;
	CGuiButton		m_wndPrintPreview;
	CGuiButton		m_wndExport;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szStockKey;
	CString	m_szObjectKey;
	int	m_nCheckAll;
	int	m_nOutPatient;
	int	m_nInPatient;
	CString	m_szCondition;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStockSelendok(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	long			OnStockLoadData(); 
	//void			OnStockAddNew(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	void			OnCheckAllSelect(); 
	void			OnOutPatientSelect(); 
	void			OnInPatientSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	void            OnExportSelect();
	void			OnPrintPreviewSelect();
	void			OnExport();
	void			OnExportSynthesis();
	void			OnPrintPreview();
	void			OnPrintSynthesis();
	CPMPrescriptionListReportDialog2(CWnd *pParent);
	~CPMPrescriptionListReportDialog2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMPrescriptionListReportDialog2(); 
	int OnEditPMPrescriptionListReportDialog2(); 
	int OnDeletePMPrescriptionListReportDialog2(); 
	int OnSavePMPrescriptionListReportDialog2(); 
	int OnCancelPMPrescriptionListReportDialog2(); 
	int OnPMPrescriptionListReportDialog2ListLoadData(); 
	int OnListCheckC11Room();
	int OnListCheckC12Room();
	int OnListCheckC13Room();
	int OnListUncheckAll();
	CString GetQueryString();
	void            OnPrintDetailByDrug();
	void            OnExportDetailByDrug();
	void            OnPrintDetailByDrug2();
	void            OnExportDetailByDrug2();
};
#endif
