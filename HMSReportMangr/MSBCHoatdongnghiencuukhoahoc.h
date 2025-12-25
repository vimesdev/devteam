#ifndef MSBCHoatdongnghiencuukhoahoc_H
#define MSBCHoatdongnghiencuukhoahoc_H

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
class CMSBCHoatdongnghiencuukhoahoc : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndFilter;
	CGuiLabel		m_wndDomainsLabel;
	CGuiComboBox	m_wndDomains;
	CGuiLabel		m_wndMngLevelSLabel;
	CGuiComboBox	m_wndMngLevel;
	CGuiLabel		m_wndConditionLabel;
	CGuiComboBox	m_wndCondition;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndExit;
	CString	m_szDomainsKey;
	CString	m_szMngLevelKey;
	CString	m_szConditionKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	void			OnDomainsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDomainsSelendok(); 
	//void			OnDomainsSetfocus(); 
	//void			OnDomainsKillfocus(); 
	long			OnDomainsLoadData(); 
	//void			OnDomainsAddNew(); 
	void			OnMngLevelSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMngLevelSelendok(); 
	//void			OnMngLevelSetfocus(); 
	//void			OnMngLevelKillfocus(); 
	long			OnMngLevelLoadData(); 
	//void			OnMngLevelAddNew(); 
	void			OnConditionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnConditionSelendok(); 
	//void			OnConditionSetfocus(); 
	//void			OnConditionKillfocus(); 
	long			OnConditionLoadData(); 
	//void			OnConditionAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnExitSelect(); 
	CMSBCHoatdongnghiencuukhoahoc();
	~CMSBCHoatdongnghiencuukhoahoc();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddMSBCHoatdongnghiencuukhoahoc(); 
	int OnEditMSBCHoatdongnghiencuukhoahoc(); 
	int OnDeleteMSBCHoatdongnghiencuukhoahoc(); 
	int OnSaveMSBCHoatdongnghiencuukhoahoc(); 
	int OnCancelMSBCHoatdongnghiencuukhoahoc(); 
	int OnMSBCHoatdongnghiencuukhoahocListLoadData(); 
};
#endif
