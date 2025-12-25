#ifndef HMSTREATMOVEMENTDIALOG_H
#define HMSTREATMOVEMENTDIALOG_H

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
class CHMSTreatMovementDialog : public CGuiDialog
{
protected:
public:
	long		m_nDocumentNo;
	long		m_nID;
	long		m_nRefIdx;
	bool		m_bReturnFlag;
	bool		m_bReturnMode;
	CString		m_szDocStatus;

	CGuiGroupBox	m_wndDepartmentMovementInformation;	
	CGuiLabel		m_wndSendDepartmentLabel;
	CGuiTextCtrl	m_wndSendDepartment;
	CGuiListCtrl	m_wndSendToDepartment;
	CGuiLabel		m_wndPerformDepartmentLabel;
	CGuiComboBox	m_wndPerformDepartment;
	CGuiLabel		m_wndSendDateLabel;
	CGuiDateTimeCtrl	m_wndSendDate;
	CGuiLabel		m_wndTerminatedDateLabel;
	CGuiDateTimeCtrl	m_wndTerminatedDate;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndSend;
	CGuiButton		m_wndReturnDept;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndAdd;
	CString	m_szSendDepartment;
	CString	m_szSendDepartmentKey;
	CString	m_szPerformDepartmentKey;
	CString	m_szSendDate;
	CString	m_szTerminatedDate;
	CString	m_szNote;
	CString	m_szStatus;
	CDbfMap	m_hms_treat_movementTbl;
	//void			OnSendDepartmentChange(); 
	//void			OnSendDepartmentSetfocus(); 
	//void			OnSendDepartmentKillfocus(); 
	int			OnSendDepartmentCheckValue();
	long			OnSendToDepartmentLoadData();
	void			OnPerformDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformDepartmentSelendok(); 
	//void			OnPerformDepartmentSetfocus(); 
	//void			OnPerformDepartmentKillfocus(); 
	long			OnPerformDepartmentLoadData(); 
	//void			OnPerformDepartmentAddNew(); 
	//void			OnSendDateChange(); 
	//void			OnSendDateSetfocus(); 
	//void			OnSendDateKillfocus(); 
	int			OnSendDateCheckValue(); 
	//void			OnTerminatedDateChange(); 
	//void			OnTerminatedDateSetfocus(); 
	//void			OnTerminatedDateKillfocus(); 
	int			OnTerminatedDateCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnSendSelect(); 
	int			OnReturnDeptSelect(); 
	void			OnCloseSelect();
	void			OnAddSelect();
	CHMSTreatMovementDialog(CWnd *pParent);
	~CHMSTreatMovementDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatMovementDialog(); 
	int OnEditHMSTreatMovementDialog(); 
	int OnDeleteHMSTreatMovementDialog(); 
	int OnSaveHMSTreatMovementDialog(); 
	int OnCancelHMSTreatMovementDialog(); 
	int OnHMSTreatMovementDialogListLoadData(); 
};
#endif