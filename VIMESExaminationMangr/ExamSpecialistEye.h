#ifndef EXAMSPECIALISTEYE_H
#define EXAMSPECIALISTEYE_H

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
class CExamSpecialistEye : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndRightEyeLabel;
	CGuiTextCtrl	m_wndRightEye;
	CGuiGroupBox	m_wndcontrol_19;
	CGuiGroupBox	m_wndEyeNoGlass;
	CGuiGroupBox	m_wndEyeHasGlass;
	CGuiLabel		m_wndLeftEyeLabel;
	CGuiGroupBox	m_wndGlaucoma;
	CGuiTextCtrl	m_wndLeftEye;
	CGuiLabel		m_wndRightEye1Label;
	CGuiTextCtrl	m_wndRightEye1;
	CGuiLabel		m_wndLeftEye1Label;
	CGuiTextCtrl	m_wndLeftEye1;
	CGuiLabel		m_wndRightEye2Label;
	CGuiTextCtrl	m_wndRightEye2;
	CGuiLabel		m_wndLeftEye2Label;
	CGuiTextCtrl	m_wndLeftEye2;
	CGuiLabel		m_wndExplorFunctionLabel;
	CGuiTextCtrl	m_wndExplorFunction;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szRightEye;
	CString	m_szLeftEye;
	CString	m_szRightEye1;
	CString	m_szLeftEye1;
	CString	m_szRightEye2;
	CString	m_szLeftEye2;
	CString	m_szExplorFunction;
	CDbfMap	m_hms_advancedexmeyeTbl;

	long m_nDocNo ;
	long m_nPatientno;
	long m_nFacid;
	long m_nID;

	//void			OnRightEyeChange(); 
	//void			OnRightEyeSetfocus(); 
	//void			OnRightEyeKillfocus(); 
	int			OnRightEyeCheckValue(); 
	//void			OnLeftEyeChange(); 
	//void			OnLeftEyeSetfocus(); 
	//void			OnLeftEyeKillfocus(); 
	int			OnLeftEyeCheckValue(); 
	//void			OnRightEye1Change(); 
	//void			OnRightEye1Setfocus(); 
	//void			OnRightEye1Killfocus(); 
	int			OnRightEye1CheckValue(); 
	//void			OnLeftEye1Change(); 
	//void			OnLeftEye1Setfocus(); 
	//void			OnLeftEye1Killfocus(); 
	int			OnLeftEye1CheckValue(); 
	//void			OnRightEye2Change(); 
	//void			OnRightEye2Setfocus(); 
	//void			OnRightEye2Killfocus(); 
	int			OnRightEye2CheckValue(); 
	//void			OnLeftEye2Change(); 
	//void			OnLeftEye2Setfocus(); 
	//void			OnLeftEye2Killfocus(); 
	int			OnLeftEye2CheckValue(); 
	//void			OnExplorFunctionChange(); 
	//void			OnExplorFunctionSetfocus(); 
	//void			OnExplorFunctionKillfocus(); 
	int			OnExplorFunctionCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CExamSpecialistEye(CWnd *pParent);
	~CExamSpecialistEye();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddExamSpecialistEye(); 
	int OnEditExamSpecialistEye(); 
	int OnDeleteExamSpecialistEye(); 
	int OnSaveExamSpecialistEye(); 
	int OnCancelExamSpecialistEye(); 
	int OnExamSpecialistEyeListLoadData(); 
};
#endif
