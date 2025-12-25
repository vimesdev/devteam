#ifndef TMDEATHRECORD_H
#define TMDEATHRECORD_H

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
class CTMDeathRecord : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndDeathTimeLabel;
	CGuiDateTimeCtrl	m_wndDeathTime;
	CGuiLabel		m_wndDeathDiagnosticLabel;
	CGuiTextCtrl	m_wndDeathDiagnostic;
	CGuiLabel		m_wndPathologyDiagnosticLabel;
	CGuiTextCtrl	m_wndPathologyDiagnostic;
	CGuiLabel		m_wndBoardMemberLabel;
	CGuiTextCtrl	m_wndBoardMember;
	CGuiLabel		m_wndSummaryLabel;
	CGuiTextCtrl	m_wndSummary;
	CGuiLabel		m_wndRemarkLabel;
	CGuiTextCtrl	m_wndRemark;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CString	m_szDeathTime;
	CString	m_szDeathDiagnostic;
	CString	m_szPathologyDiagnostic;
	CString	m_szBoardMember;
	CString	m_szSummary;
	CString	m_szRemark;
	CString	m_szConclusion;
	//void			OnDeathTimeChange(); 
	//void			OnDeathTimeSetfocus(); 
	//void			OnDeathTimeKillfocus(); 
	int			OnDeathTimeCheckValue(); 
	//void			OnDeathDiagnosticChange(); 
	//void			OnDeathDiagnosticSetfocus(); 
	//void			OnDeathDiagnosticKillfocus(); 
	int			OnDeathDiagnosticCheckValue(); 
	//void			OnPathologyDiagnosticChange(); 
	//void			OnPathologyDiagnosticSetfocus(); 
	//void			OnPathologyDiagnosticKillfocus(); 
	int			OnPathologyDiagnosticCheckValue(); 
	//void			OnBoardMemberChange(); 
	//void			OnBoardMemberSetfocus(); 
	//void			OnBoardMemberKillfocus(); 
	int			OnBoardMemberCheckValue(); 
	//void			OnSummaryChange(); 
	//void			OnSummarySetfocus(); 
	//void			OnSummaryKillfocus(); 
	int			OnSummaryCheckValue(); 
	//void			OnRemarkChange(); 
	//void			OnRemarkSetfocus(); 
	//void			OnRemarkKillfocus(); 
	int			OnRemarkCheckValue(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			PrintDeathRecord();
	CTMDeathRecord();
	~CTMDeathRecord();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMDeathRecord(); 
	int OnEditTMDeathRecord(); 
	int OnDeleteTMDeathRecord(); 
	int OnSaveTMDeathRecord(); 
	int OnCancelTMDeathRecord(); 
	int OnTMDeathRecordListLoadData(); 
	void OnPathologyDiagnosticLabelSelect();
};
#endif
