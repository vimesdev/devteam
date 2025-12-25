#ifndef MEMBERDIALOG_H
#define MEMBERDIALOG_H

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
class AFX_EXT_CLASS CMemberDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndMemberInformation;
	CGuiLabel		m_wndMember1Label;
	CGuiTextCtrl	m_wndMember1;
	CGuiLabel		m_wndPositionLabel;
	CGuiTextCtrl	m_wndPosition;
	CGuiLabel		m_wndMember2Label;
	CGuiTextCtrl	m_wndMember2;
	CGuiLabel		m_wndPosition2Label;
	CGuiTextCtrl	m_wndPosition2;
	CGuiLabel		m_wndMember3Label;
	CGuiTextCtrl	m_wndMember3;
	CGuiLabel		m_wndPosition3Label;
	CGuiTextCtrl	m_wndPosition3;
	CGuiLabel		m_wndMember4Label;
	CGuiTextCtrl	m_wndMember4;
	CGuiLabel		m_wndPosition4Label;
	CGuiTextCtrl	m_wndPosition4;
	CGuiLabel		m_wndMember5Label;
	CGuiTextCtrl	m_wndMember5;
	CGuiLabel		m_wndPosition5Label;
	CGuiTextCtrl	m_wndPosition5;
	CGuiLabel		m_wndMember6Label;
	CGuiTextCtrl	m_wndMember6;
	CGuiLabel		m_wndPosition6Label;
	CGuiTextCtrl	m_wndPosition6;
	CGuiLabel		m_wndMember7Label;
	CGuiTextCtrl	m_wndMember7;
	CGuiLabel		m_wndPosition7Label;
	CGuiTextCtrl	m_wndPosition7;
	CGuiLabel		m_wndMember8Label;
	CGuiTextCtrl	m_wndMember8;
	CGuiLabel		m_wndPosition8Label;
	CGuiTextCtrl	m_wndPosition8;
	CGuiLabel		m_wndMember9Label;
	CGuiTextCtrl	m_wndMember9;
	CGuiLabel		m_wndPosition9Label;
	CGuiTextCtrl	m_wndPosition9;
	CGuiLabel		m_wndMember10Label;
	CGuiTextCtrl	m_wndMember10;
	CGuiLabel		m_wndPosition10Label;
	CGuiTextCtrl	m_wndPosition10;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndClose;
	CString	m_szMember1;
	CString	m_szPosition;
	CString	m_szMember2;
	CString	m_szPosition2;
	CString	m_szMember3;
	CString	m_szPosition3;
	CString	m_szMember4;
	CString	m_szPosition4;
	CString	m_szMember5;
	CString	m_szPosition5;
	CString	m_szMember6;
	CString	m_szPosition6;
	CString	m_szMember7;
	CString	m_szPosition7;
	CString	m_szMember8;
	CString	m_szPosition8;
	CString	m_szMember9;
	CString	m_szPosition9;
	CString	m_szMember10;
	CString	m_szPosition10;
	CDbfMap	m_m_memberTbl;

	//void			OnMember1Change(); 
	//void			OnMember1Setfocus(); 
	//void			OnMember1Killfocus(); 
	int			OnMember1CheckValue(); 
	//void			OnPositionChange(); 
	//void			OnPositionSetfocus(); 
	//void			OnPositionKillfocus(); 
	int			OnPositionCheckValue(); 
	//void			OnMember2Change(); 
	//void			OnMember2Setfocus(); 
	//void			OnMember2Killfocus(); 
	int			OnMember2CheckValue(); 
	//void			OnPosition2Change(); 
	//void			OnPosition2Setfocus(); 
	//void			OnPosition2Killfocus(); 
	int			OnPosition2CheckValue(); 
	//void			OnMember3Change(); 
	//void			OnMember3Setfocus(); 
	//void			OnMember3Killfocus(); 
	int			OnMember3CheckValue(); 
	//void			OnPosition3Change(); 
	//void			OnPosition3Setfocus(); 
	//void			OnPosition3Killfocus(); 
	int			OnPosition3CheckValue(); 
	//void			OnMember4Change(); 
	//void			OnMember4Setfocus(); 
	//void			OnMember4Killfocus(); 
	int			OnMember4CheckValue(); 
	//void			OnPosition4Change(); 
	//void			OnPosition4Setfocus(); 
	//void			OnPosition4Killfocus(); 
	int			OnPosition4CheckValue(); 
	//void			OnMember5Change(); 
	//void			OnMember5Setfocus(); 
	//void			OnMember5Killfocus(); 
	int			OnMember5CheckValue(); 
	//void			OnPosition5Change(); 
	//void			OnPosition5Setfocus(); 
	//void			OnPosition5Killfocus(); 
	int			OnPosition5CheckValue(); 
	//void			OnMember6Change(); 
	//void			OnMember6Setfocus(); 
	//void			OnMember6Killfocus(); 
	int			OnMember6CheckValue(); 
	//void			OnPosition6Change(); 
	//void			OnPosition6Setfocus(); 
	//void			OnPosition6Killfocus(); 
	int			OnPosition6CheckValue(); 
	//void			OnMember7Change(); 
	//void			OnMember7Setfocus(); 
	//void			OnMember7Killfocus(); 
	int			OnMember7CheckValue(); 
	//void			OnPosition7Change(); 
	//void			OnPosition7Setfocus(); 
	//void			OnPosition7Killfocus(); 
	int			OnPosition7CheckValue(); 
	//void			OnMember8Change(); 
	//void			OnMember8Setfocus(); 
	//void			OnMember8Killfocus(); 
	int			OnMember8CheckValue(); 
	//void			OnPosition8Change(); 
	//void			OnPosition8Setfocus(); 
	//void			OnPosition8Killfocus(); 
	int			OnPosition8CheckValue(); 
	//void			OnMember9Change(); 
	//void			OnMember9Setfocus(); 
	//void			OnMember9Killfocus(); 
	int			OnMember9CheckValue(); 
	//void			OnPosition9Change(); 
	//void			OnPosition9Setfocus(); 
	//void			OnPosition9Killfocus(); 
	int			OnPosition9CheckValue(); 
	//void			OnMember10Change(); 
	//void			OnMember10Setfocus(); 
	//void			OnMember10Killfocus(); 
	int			OnMember10CheckValue(); 
	//void			OnPosition10Change(); 
	//void			OnPosition10Setfocus(); 
	//void			OnPosition10Killfocus(); 
	int			OnPosition10CheckValue(); 
	void			OnOKSelect(); 
	void			OnCloseSelect(); 
	CMemberDialog(CWnd *pParent);
	~CMemberDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSMemberDialog(); 
	int OnEditPMSMemberDialog(); 
	int OnDeletePMSMemberDialog(); 
	int OnSavePMSMemberDialog(); 
	int OnCancelPMSMemberDialog(); 
	int OnPMSMemberDialogListLoadData(); 
};
#endif
