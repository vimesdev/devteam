#ifndef HMSCONFIGSETUPDLG_H
#define HMSCONFIGSETUPDLG_H

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
class CHMSConfigSetupDlg : public CGuiDialog{
protected:
	int m_nType;//0:text;1:date;2:number
public:
	CGuiGroupBox	m_wndConfigSetup;
	CGuiLabel		m_wndNameLabel;
	CGuiComboBox	m_wndName;
	CGuiLabel		m_wndValueLabel;
	CGuiTextCtrl	m_wndValueText;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiNumberCtrl	m_wndValueNumber;
	CGuiDateTimeCtrl	m_wndValueDate;
	CString	m_szNameKey;
	CString	m_szValueText;
	long	m_nValueNumber;
	CString	m_szValueDate;
	void			OnNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNameSelendok(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	long			OnNameLoadData(); 
	//void			OnNameAddNew(); 
	//void			OnValueTextChange(); 
	//void			OnValueTextSetfocus(); 
	//void			OnValueTextKillfocus(); 
	int			OnValueTextCheckValue(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	//void			OnValueNumberChange(); 
	//void			OnValueNumberSetfocus(); 
	//void			OnValueNumberKillfocus(); 
	int			OnValueNumberCheckValue(); 
	//void			OnValueDateChange(); 
	//void			OnValueDateSetfocus(); 
	//void			OnValueDateKillfocus(); 
	int			OnValueDateCheckValue(); 
	CHMSConfigSetupDlg(CWnd *pParent);
	~CHMSConfigSetupDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSConfigSetupDlg(); 
	int OnEditHMSConfigSetupDlg(); 
	int OnDeleteHMSConfigSetupDlg(); 
	int OnSaveHMSConfigSetupDlg(); 
	int OnCancelHMSConfigSetupDlg(); 
	int OnHMSConfigSetupDlgListLoadData(); 
};
#endif
