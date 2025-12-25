#ifndef PHANHEDIEUTRINOITRU_H
#define PHANHEDIEUTRINOITRU_H

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
class CPHANHEDIEUTRINOITRU : public CGuiView{
protected:
public:
	CGuiRadioButton	m_wndTreating;
	CGuiRadioButton	m_wndDischargeDept;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiGroupBox	m_wndReportFilterInfo;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndDepartmentLab;
	CGuiComboBox	m_wndDepartment;
	CGuiButton		m_wndLoad;
	CGuiRadioButton	m_wndDischarged;
	CGuiCheckBox	m_wndCombinedTreatment;
	CGuiLabel		m_wndRankIDLab;
	CGuiComboBox	m_wndRankID;
	CGuiLabel		m_wndRanklab;
	CGuiComboBox	m_wndRank;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndPrint;
	CGuiCheckBox	m_wndAllHospitall;
	CGuiCheckBox	m_wndInPatient;
	CGuiCheckBox	m_wndOutPatient;
	CGuiListCtrl	m_wndList;
	CString	m_szRankIDKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szObjectKey;
	CString	m_szDepartmentKey;
	CString	m_szRankKey;
	CString m_szCondition;
	BOOL	m_bCombinedTreatment;
	BOOL	m_bAllHospitall;
	BOOL	m_bInPatient;
	BOOL	m_bOutPatient;
	int	m_nTreating;
	int	m_nDischargeDept;
	int	m_nDischarged;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnLoadSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAllHospitallSelect(); 
	void			OnInPatientSelect(); 
	void			OnOutPatientSelect(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	void			OnRankSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRankSelendok(); 
	//void			OnRankSetfocus(); 
	//void			OnRankKillfocus(); 
	long			OnRankLoadData(); 
	//void			OnRankAddNew(); 
	void			OnCombinedTreatmentSelect(); 
	void			OnTreatingSelect(); 
	void			OnDischargeDeptSelect(); 
	void			OnDischargedSelect(); 
	void			OnRankIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRankIDSelendok(); 
	//void			OnRankIDSetfocus(); 
	//void			OnRankIDKillfocus(); 
	long			OnRankIDLoadData(); 
	//void			OnRankIDAddNew(); 
	CPHANHEDIEUTRINOITRU();
	~CPHANHEDIEUTRINOITRU();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPHANHEDIEUTRINOITRU(); 
	int OnEditPHANHEDIEUTRINOITRU(); 
	int OnDeletePHANHEDIEUTRINOITRU(); 
	int OnSavePHANHEDIEUTRINOITRU(); 
	int OnCancelPHANHEDIEUTRINOITRU(); 
	int OnPHANHEDIEUTRINOITRUListLoadData(); 
	int		OnCheckBeforeExport(CExcel* pXls, CRecord* pRs);
	CString GetQueryString();
	void	OnExport(CExcel* pXls, CRecord* pRs);
	UINT CheckDataType(CString szInput);
};
#endif
