#ifndef HMSGENERALRANKSPECIALEXAMINEDIALOG_H
#define HMSGENERALRANKSPECIALEXAMINEDIALOG_H

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

class CHMSGeneralRankSpecialExamineDialog : public CGuiDialog{
protected:
public:
	CString			m_szType;
	CString			m_szDocType;
	CString			m_szDoctorID;
	CGuiGroupBox	m_wndExamineInformation;
	CGuiLabel		m_wndDoctorNameLabel;
	CGuiTextCtrl	m_wndDoctorName;
	CGuiLabel		m_wndExamDateLabel;
	CGuiDateTimeCtrl	m_wndExamDate;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndTemplate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndClear;
	CGuiLabel		m_wndResult;
	CGuiLabel		m_wndCategoryLabel;
	CGuiTextCtrl	m_wndCategory;
	CGuiLabel		m_wndDiseaseLabel;
	CGuiTextCtrl	m_wndDisease;
	CString	m_szDoctorName;
	CString	m_szExamDate;
	CString	m_szDescription;
	CString	m_szCategory;
	CString	m_szDisease;
	//void			OnDoctorNameChange(); 
	//void			OnDoctorNameSetfocus(); 
	//void			OnDoctorNameKillfocus(); 
	int			OnDoctorNameCheckValue(); 
	//void			OnExamDateChange(); 
	//void			OnExamDateSetfocus(); 
	//void			OnExamDateKillfocus(); 
	int			OnExamDateCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	void			OnTemplateSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnClearSelect(); 
	//void			OnCategoryChange(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	int			OnCategoryCheckValue(); 
	//void			OnDiseaseChange(); 
	//void			OnDiseaseSetfocus(); 
	//void			OnDiseaseKillfocus(); 
	int			OnDiseaseCheckValue(); 
	CHMSGeneralRankSpecialExamineDialog(CWnd *pParent, CString szType, CString szTitle=_T(""));
	~CHMSGeneralRankSpecialExamineDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSGeneralRankSpecialExamineDialog(); 
	int OnEditHMSGeneralRankSpecialExamineDialog(); 
	int OnDeleteHMSGeneralRankSpecialExamineDialog(); 
	int OnSaveHMSGeneralRankSpecialExamineDialog(); 
	int OnCancelHMSGeneralRankSpecialExamineDialog(); 
	int OnHMSGeneralRankSpecialExamineDialogListLoadData(); 
	void OnResultClick();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	bool	IsTemplateSet();
	CString GetExamDiagnostic();
};
#endif
