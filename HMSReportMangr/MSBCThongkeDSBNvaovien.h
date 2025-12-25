#ifndef MSBCThongkeDSBNvaovien_H
#define MSBCThongkeDSBNvaovien_H

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
class CMSBCThongkeDSBNvaovien : public CGuiView{
protected:
public:
	CGuiButton		m_wndLoad;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiGroupBox	m_wndInwardListReport;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndSectionLabel;
	CGuiComboBox	m_wndSection;
	CGuiLabel		m_wndDepartmentLab;
	CGuiComboBox	m_wndDepartment;
	CGuiButton		m_wndExport;
	CGuiRadioButton	m_wndAll;
	CGuiRadioButton	m_wndInPatient;
	CGuiRadioButton	m_wndOutPatient;
	CGuiListCtrl	m_wndList;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szObjectKey;
	CString	m_szSectionKey;
	CString	m_szDepartmentKey;
	int	m_nAll;
	int	m_nInPatient;
	int	m_nOutPatient;
	CString m_szCondition;
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
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
	//void			OnObjectAddNew(); 
	void			OnSectionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSectionSelendok(); 
	//void			OnSectionSetfocus(); 
	//void			OnSectionKillfocus(); 
	long			OnSectionLoadData(); 
	//void			OnSectionAddNew(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnLoadSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAllSelect(); 
	void			OnInPatientSelect(); 
	void			OnOutPatientSelect(); 
	CMSBCThongkeDSBNvaovien();
	~CMSBCThongkeDSBNvaovien();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddMSBCThongkeDSBNvaovien(); 
	int OnEditMSBCThongkeDSBNvaovien(); 
	int OnDeleteMSBCThongkeDSBNvaovien(); 
	int OnSaveMSBCThongkeDSBNvaovien(); 
	int OnCancelMSBCThongkeDSBNvaovien(); 
	int OnMSBCThongkeDSBNvaovienListLoadData(); 
	CString GetQueryString();
};
#endif
