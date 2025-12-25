#ifndef rptMedicalCabinetGeneralExportReportDialog_H
#define rptMedicalCabinetGeneralExportReportDialog_H

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
class rptMedicalCabinetGeneralExportReportDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndReportParameters;
	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndDrugTypeLabel;
	CGuiComboBox	m_wndDrugType;
	CGuiCheckBox	m_wndSurgeryAndOperation;
	CGuiButton		m_wndPrintPreview;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndClose;
	CString	m_szStockKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szObjectKey;
	CString	m_szDrugTypeKey;
	BOOL	m_bSurgeryAndOperation;
	void			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStockSelendok(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	long			OnStockLoadData(); 
	void			OnStockAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	void			OnObjectAddNew(); 
	void			OnDrugTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDrugTypeSelendok(); 
	//void			OnDrugTypeSetfocus(); 
	//void			OnDrugTypeKillfocus(); 
	long			OnDrugTypeLoadData(); 
	void			OnDrugTypeAddNew(); 
	void			OnSurgeryAndOperationSelect(); 
	void			OnPrintPreviewSelect(); 
	void			OnExportSelect(); 
	void			OnCloseSelect(); 
	rptMedicalCabinetGeneralExportReportDialog(CWnd *pParent);
	~rptMedicalCabinetGeneralExportReportDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddrptMedicalCabinetGeneralExportReportDialog(); 
	int OnEditrptMedicalCabinetGeneralExportReportDialog(); 
	int OnDeleterptMedicalCabinetGeneralExportReportDialog(); 
	int OnSaverptMedicalCabinetGeneralExportReportDialog(); 
	int OnCancelrptMedicalCabinetGeneralExportReportDialog(); 
	int OnrptMedicalCabinetGeneralExportReportDialogListLoadData(); 
};
#endif
