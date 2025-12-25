#ifndef RPTASSETDETAILSTATISTICLIST_H
#define RPTASSETDETAILSTATISTICLIST_H

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
class CRPTAssetDetailStatisticList : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndInformationReport;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndVendorLabel;
	CGuiComboBox	m_wndVendor;
	CGuiLabel		m_wndMfgCountryLabel;
	CGuiComboBox	m_wndMfgCountry;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndAssetNoLabel;
	CGuiTextCtrl	m_wndAssetNo;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szTypeKey;
	CString	m_szVendorKey;
	CString	m_szMfgCountryKey;
	CString	m_szDepartmentKey;
	CString	m_szAssetNo;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnExportSelect(); 
	void			OnPrintSelect(); 
	void			OnVendorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnVendorSelendok(); 
	//void			OnVendorSetfocus(); 
	//void			OnVendorKillfocus(); 
	long			OnVendorLoadData(); 
	//void			OnVendorAddNew(); 
	void			OnMfgCountrySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMfgCountrySelendok(); 
	//void			OnMfgCountrySetfocus(); 
	//void			OnMfgCountryKillfocus(); 
	long			OnMfgCountryLoadData(); 
	//void			OnMfgCountryAddNew(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	//void			OnAssetNoChange(); 
	//void			OnAssetNoSetfocus(); 
	//void			OnAssetNoKillfocus(); 
	int			OnAssetNoCheckValue(); 
	CRPTAssetDetailStatisticList(CWnd *pParent);
	~CRPTAssetDetailStatisticList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddRPTAssetDetailStatisticList(); 
	int OnEditRPTAssetDetailStatisticList(); 
	int OnDeleteRPTAssetDetailStatisticList(); 
	int OnSaveRPTAssetDetailStatisticList(); 
	int OnCancelRPTAssetDetailStatisticList(); 
	int OnRPTAssetDetailStatisticListListLoadData(); 
};
#endif
