#ifndef TEST_H
#define TEST_H

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
class CTest : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndSurNameLabel;
	CGuiTextCtrl	m_wndSurName;
	CGuiLabel		m_wndMidNameLabel;
	CGuiTextCtrl	m_wndMidName;
	CGuiLabel		m_wndFirstNameLabel;
	CGuiTextCtrl	m_wndFirstName;
	CGuiLabel		m_wndBirthDateLabel;
	CGuiDateCtrl	m_wndBirthDate;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szSurName;
	CString	m_szMidName;
	CString	m_szFirstName;
	CString	m_szBirthDate;
	CString	m_szSexKey;
	CDbfMap	m_hms_patientTbl;
	//void			OnSurNameChange(); 
	//void			OnSurNameSetfocus(); 
	//void			OnSurNameKillfocus(); 
	int			OnSurNameCheckValue(); 
	//void			OnMidNameChange(); 
	//void			OnMidNameSetfocus(); 
	//void			OnMidNameKillfocus(); 
	int			OnMidNameCheckValue(); 
	//void			OnFirstNameChange(); 
	//void			OnFirstNameSetfocus(); 
	//void			OnFirstNameKillfocus(); 
	int			OnFirstNameCheckValue(); 
	//void			OnBirthDateChange(); 
	//void			OnBirthDateSetfocus(); 
	//void			OnBirthDateKillfocus(); 
	int			OnBirthDateCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	void			OnSexAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CTest(CWnd *pParent);
	~CTest();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTest(); 
	int OnEditTest(); 
	int OnDeleteTest(); 
	int OnSaveTest(); 
	int OnCancelTest(); 
	int OnTestListLoadData(); 
};
#endif
