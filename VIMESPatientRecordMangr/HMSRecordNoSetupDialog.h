#ifndef HMSRECORDNOSETUPDIALOG_H
#define HMSRECORDNOSETUPDIALOG_H

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
class CHMSRecordNoSetupDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndArchivalNumberSetup;
	CGuiRadioButton	m_wndManualNumber;
	CGuiRadioButton	m_wndAutoNumber;
	CGuiCheckBox	m_wndYearNumber;
	CGuiTextCtrl	m_wndYearNumberDesc;
	CGuiLabel		m_wndYearNumberEx;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndIncNumber;
	CGuiTextCtrl	m_wndIncNumberDesc;
	CGuiLabel		m_wndIncNumberEx;
	int	m_nManualNumber;
	int	m_nAutoNumber;
	BOOL	m_bYearNumber;
	CString	m_szYearNumberDesc;
	BOOL	m_bIncNumber;
	CString	m_szIncNumberDesc;

	CString m_szDesc;
	CDbfMap m_hms_patientrec_idTbl;

	void			OnManualNumberSelect(); 
	void			OnAutoNumberSelect(); 
	void			OnYearNumberSelect(); 
	//void			OnYearNumberDescChange(); 
	//void			OnYearNumberDescSetfocus(); 
	//void			OnYearNumberDescKillfocus(); 
	int			OnYearNumberDescCheckValue(); 
	void			OnIncNumberSelect(); 
	//void			OnIncNumberDescChange(); 
	//void			OnIncNumberDescSetfocus(); 
	//void			OnIncNumberDescKillfocus(); 
	int			OnIncNumberDescCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSRecordNoSetupDialog(CWnd *pParent);
	~CHMSRecordNoSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSRecordNoSetupDialog(); 
	int OnEditHMSRecordNoSetupDialog(); 
	int OnDeleteHMSRecordNoSetupDialog(); 
	int OnSaveHMSRecordNoSetupDialog(); 
	int OnCancelHMSRecordNoSetupDialog(); 
	int OnHMSRecordNoSetupDialogListLoadData();
};
#endif
