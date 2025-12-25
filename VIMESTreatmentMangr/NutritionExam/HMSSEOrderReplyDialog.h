#ifndef HMSSEORDERREPLYDIALOG_H
#define HMSSEORDERREPLYDIALOG_H

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
class CHMSSEOrderReplyDialog : public CGuiDialog{
protected:
	
public:
	long	m_nOrderID;
	CGuiGroupBox	m_wndContent;
	CGuiLabel		m_wndExamLabel;
	CGuiTextCtrl	m_wndExam;
	CGuiLabel		m_wndTestLabel;
	CGuiTextCtrl	m_wndTest;
	CGuiLabel		m_wndDiagnosticLabel;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiLabel		m_wndMethodLabel;
	CGuiTextCtrl	m_wndMethod;
	CGuiLabel		m_wndRemarkLabel;
	CGuiTextCtrl	m_wndRemark;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szExam;
	CString	m_szTest;
	CString	m_szDiagnostic;
	CString	m_szMethod;
	CString	m_szRemark;
	//void			OnExamChange(); 
	//void			OnExamSetfocus(); 
	//void			OnExamKillfocus(); 
	int			OnExamCheckValue(); 
	//void			OnTestChange(); 
	//void			OnTestSetfocus(); 
	//void			OnTestKillfocus(); 
	int			OnTestCheckValue(); 
	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	//void			OnMethodChange(); 
	//void			OnMethodSetfocus(); 
	//void			OnMethodKillfocus(); 
	int			OnMethodCheckValue(); 
	//void			OnRemarkChange(); 
	//void			OnRemarkSetfocus(); 
	//void			OnRemarkKillfocus(); 
	int			OnRemarkCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSSEOrderReplyDialog(CWnd *pParent);
	~CHMSSEOrderReplyDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSSEOrderReplyDialog(); 
	int OnEditHMSSEOrderReplyDialog(); 
	int OnDeleteHMSSEOrderReplyDialog(); 
	int OnSaveHMSSEOrderReplyDialog(); 
	int OnCancelHMSSEOrderReplyDialog(); 
	int OnHMSSEOrderReplyDialogListLoadData(); 
};
#endif
