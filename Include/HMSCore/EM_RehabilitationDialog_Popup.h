#ifndef EM_REHABILITATIONDIALOG_POPUP_H
#define EM_REHABILITATIONDIALOG_POPUP_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright Â© Viet Nam Medical Software Joint Stock Company. 2005-2012. 			
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
class CEM_RehabilitationDialog_Popup : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndItemInformation;
	CGuiLabel		m_wndDateLabel;
	CGuiDateCtrl	m_wndDate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiHeaderCtrl	m_wndHeader;
	CGuiLabel		m_wndCountLabel;
	CGuiNumberCtrl	m_wndCount;
	CGuiLabel		m_wndTreatmentLabel;
	CGuiTextCtrl	m_wndTreatment;
	CGuiLabel		m_wndDosageLabel;
	CGuiTextCtrl	m_wndDosage;
	CGuiLabel		m_wndTimeLabel;
	CGuiTimeCtrl	m_wndTime;
	CGuiLabel		m_wndTreattimeLabel;
	CGuiNumberCtrl	m_wndTreattime;
	CGuiLabel		m_wndCommentLable;
	CGuiTextCtrl	m_wndComment;
	CGuiLabel		m_wndPerformerLabel;
	CGuiTextCtrl	m_wndPerformer;
	CString	m_szDate;
	long	m_nCount;
	CString	m_szTreatment;
	CString	m_szDosage;
	CString	m_szTime;
	long	m_nTreattime;
	CString	m_szComment;
	CString	m_szPerformer;
    CWnd *m_pWndHRT;	
	long m_nRehabilitID;
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	//void			OnCountChange(); 
	//void			OnCountSetfocus(); 
	//void			OnCountKillfocus(); 
	int			OnCountCheckValue(); 
	//void			OnTreatmentChange(); 
	//void			OnTreatmentSetfocus(); 
	//void			OnTreatmentKillfocus(); 
	int			OnTreatmentCheckValue(); 
	//void			OnDosageChange(); 
	//void			OnDosageSetfocus(); 
	//void			OnDosageKillfocus(); 
	int			OnDosageCheckValue(); 
	//void			OnTimeChange(); 
	//void			OnTimeSetfocus(); 
	//void			OnTimeKillfocus(); 
	int			OnTimeCheckValue(); 
	//void			OnTreattimeChange(); 
	//void			OnTreattimeSetfocus(); 
	//void			OnTreattimeKillfocus(); 
	int			OnTreattimeCheckValue(); 
	//void			OnCommentChange(); 
	//void			OnCommentSetfocus(); 
	//void			OnCommentKillfocus(); 
	int			OnCommentCheckValue(); 
	//void			OnPerformerChange(); 
	//void			OnPerformerSetfocus(); 
	//void			OnPerformerKillfocus(); 
	int			OnPerformerCheckValue(); 
	CEM_RehabilitationDialog_Popup(CWnd *pParent, int nMode);
	~CEM_RehabilitationDialog_Popup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEM_RehabilitationDialog_Popup(); 
	int OnEditEM_RehabilitationDialog_Popup(); 
	int OnDeleteEM_RehabilitationDialog_Popup(); 
	int OnSaveEM_RehabilitationDialog_Popup(); 
	int OnCancelEM_RehabilitationDialog_Popup(); 
	int OnEM_RehabilitationDialog_PopupListLoadData(); 
};
#endif
