#ifndef HMSUPDATERESULPACS_H
#define HMSUPDATERESULPACS_H

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
class CHMSUpdateResulPACS : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGroupDescription;
	CGuiGroupBox	m_wndGroupconclusion;
	CGuiTextCtrl	m_wndResult;
	CGuiTextCtrl	m_wndConclusion;
	CGuiTextCtrl	m_wndRemark;
	CGuiButton		m_wndUpdateResult;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndSave;
	CGuiGroupBox	m_wndGroupOtherReviews;
	CString	m_szResult;
	CString	m_szConclusion;
	CString	m_szRemark;
	CString	m_szItems;
	long			m_nOrderID;
	
	//void			On2Change(); 
	//void			On2Setfocus(); 
	//void			On2Killfocus(); 
	int			On2CheckValue(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	//void			OnRemarkChange(); 
	//void			OnRemarkSetfocus(); 
	//void			OnRemarkKillfocus(); 
	int			OnRemarkCheckValue(); 
	void			OnUpdateResultSelect(); 
	void			OnPrintSelect(); 
	void			OnCancelSelect(); 
	void			OnSaveSelect(); 
	CHMSUpdateResulPACS(CWnd *pParent);
	~CHMSUpdateResulPACS();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSUpdateResulPACS(); 
	int OnEditHMSUpdateResulPACS(); 
	int OnDeleteHMSUpdateResulPACS(); 
	int OnSaveHMSUpdateResulPACS(); 
	int OnCancelHMSUpdateResulPACS(); 
	int OnHMSUpdateResulPACSListLoadData(); 
};
#endif
