#ifndef SYSCHANGEMONTH_H
#define SYSCHANGEMONTH_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CSysChangeMonth : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndSelectMonth;
	CGuiLabel		m_wndMonthLabel;
	CGuiComboBox	m_wndMonth;
	CGuiLabel		m_wndYearLabel;
	CGuiComboBox	m_wndYear;
	CGuiButton		m_wndOk;
	CString	m_szMonthKey;
	CString m_szYearKey;
	CString m_szMaLk;
	void			OnMonthSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMonthSelendok(); 
	//void			OnMonthSetfocus(); 
	//void			OnMonthKillfocus(); 
	long			OnMonthLoadData(); 
	//void			OnMonthAddNew();

	void			OnYearSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnYearSelendok(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	long			OnYearLoadData(); 

	void			OnOkSelect(); 
	CSysChangeMonth(CWnd *pParent);
	~CSysChangeMonth();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSysChangeMonth(); 
	int OnEditSysChangeMonth(); 
	int OnDeleteSysChangeMonth(); 
	int OnSaveSysChangeMonth(); 
	int OnCancelSysChangeMonth(); 
	int OnSysChangeMonthListLoadData(); 
};
#endif
