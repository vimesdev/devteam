#ifndef HMSMEDICALCABINETDRUG_H
#define HMSMEDICALCABINETDRUG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Storage Company. 2005-2010. 			
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
#include "GuiView.h"
#include "DbField.h"


class CHMSMedicalCabinetDrug : public CGuiView{
protected:
	int	m_nSelection;
public:
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndDrugInformation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiButton		m_wndLoad;
	CGuiCheckBox	m_wndOperation;
	CGuiListCtrl	m_wndPatientList;
	CGuiListCtrl	m_wndDrugList;
	CGuiButton		m_wndAddDrug;
	CGuiButton		m_wndDeleteDrug;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndPatientNameLable;
	CGuiTextCtrl	m_wndPatientName;
	CGuiButton		m_wndSheetOrderReturn;
	CGuiButton		m_wndStorageDetail;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szPatientName;
	BOOL	m_bOperation;

	long		m_nDocumentNo;
	long		m_nOrderID;
	int			m_nStorageID;
	bool		m_bFound;
	CString		m_szOrderStatus;
	CString		m_szCreatedBy;

	
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	int			OnPatientNameCheckValue(); 
	void			OnLoadSelect(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	int			OnPatientListConfirm(); 
	int			OnPatientListDisconfirm(); 
	int			OnPatientListSearch();
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem();
	void			OnAddDrugSelect(); 
	void			OnDeleteDrugSelect(); 
	void			OnConfirmSelect(); 
	void			OnPrintSelect(); 
	void			OnSheetOrderReturnSelect();
	
	void			OnPrintCabinetDrug(LPCTSTR lpszFromDate, LPCTSTR lpszToDate, CString szUserID);
	void			OnPrintPatientSummeryDrug(int nDocumentNo, CString szFormDate, CString szToDate);
	void			OnStorageDetailSelect(); 
	CHMSMedicalCabinetDrug();
	~CHMSMedicalCabinetDrug();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSMedicalCabinetDrug(); 
	int OnEditHMSMedicalCabinetDrug(); 
	int OnDeleteHMSMedicalCabinetDrug(); 
	int OnSaveHMSMedicalCabinetDrug(); 
	int OnCancelHMSMedicalCabinetDrug(); 
	int OnHMSMedicalCabinetDrugListLoadData(); 
	void Refresh(long nOrderID);
	
	CString	GetCurrentStatus();

	void OnResizeLayout();

	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
};
#endif
