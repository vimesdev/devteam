#ifndef HMSMATERIALCONSUMPTIONDETAILPATIENT_H
#define HMSMATERIALCONSUMPTIONDETAILPATIENT_H

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
#include "afxtempl.h"

class CHMSMaterialconsumptiondetailpatient : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndReportCriteria;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndLoad;
	CGuiButton		m_wndExport;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndFacCheck;
	CGuiLabel		m_wndReportNameLable;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString m_szSQL;
	CString m_szItemID[50], m_szNameDrug[50];
	BOOL	m_bFacCheck;
	CRecord *rs;
	int m_nColumn;
	

	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnPrintSelect(); 
	void			OnLoadSelect(); 
	void			OnExportSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem();
	
	void			OnFacCheckSelect(); 
	CHMSMaterialconsumptiondetailpatient(CWnd *pParent);
	~CHMSMaterialconsumptiondetailpatient();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSMaterialconsumptiondetailpatient(); 
	int OnEditHMSMaterialconsumptiondetailpatient(); 
	int OnDeleteHMSMaterialconsumptiondetailpatient(); 
	int OnSaveHMSMaterialconsumptiondetailpatient(); 
	int OnCancelHMSMaterialconsumptiondetailpatient(); 
	int OnHMSMaterialconsumptiondetailpatientListLoadData(); 
};
#endif
