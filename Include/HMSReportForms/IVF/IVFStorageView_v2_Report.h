#ifndef IVFSTORAGEVIEW_V2_REPORT_H
#define IVFSTORAGEVIEW_V2_REPORT_H

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
class CIVFStorageView_v2_Report : public CGuiView
{
protected:
public:
	CGuiComboBox	m_wndThietBiTru;
	CGuiLabel		m_wndThietBiTruLabel;
	CGuiCheckBox	m_wndTrutinhtrung;
	CGuiCheckBox	m_wndExpired;
	CGuiCheckBox	m_wndNearlyExpired;
	CGuiCheckBox	m_wndExpiredInMonth;
	CGuiButton		m_wndExPort;
	CGuiGroupBox	m_wndReportInformation;
	CString	m_szThietBiTruKey;
	BOOL	m_bTrutinhtrung;
	BOOL	m_bExpired;
	BOOL	m_bNearlyExpired;
	BOOL	m_bExpiredInMonth;
	void			OnThietBiTruSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThietBiTruSelendok(); 
	//void			OnThietBiTruSetfocus(); 
	//void			OnThietBiTruKillfocus(); 
	long			OnThietBiTruLoadData(); 
	//void			OnThietBiTruAddNew(); 
	void			OnTrutinhtrungSelect(); 
	void			OnExpiredSelect(); 
	void			OnNearlyExpiredSelect(); 
	void			OnExpiredInMonthSelect(); 
	void			OnExPortSelect(); 
	CIVFStorageView_v2_Report(CWnd *pWnd);
	~CIVFStorageView_v2_Report();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCIVFStorageView_v2_Report(); 
	int OnEditCIVFStorageView_v2_Report(); 
	int OnDeleteCIVFStorageView_v2_Report(); 
	int OnSaveCIVFStorageView_v2_Report(); 
	int OnCancelCIVFStorageView_v2_Report(); 
	int OnCIVFStorageView_v2_ReportListLoadData();
	CString GetQueryString();
};
#endif