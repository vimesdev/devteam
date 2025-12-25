#ifndef SYSSETUPDIR_H
#define SYSSETUPDIR_H

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
class CSYSSetUpDir : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndSetUpDir;
	CGuiLabel		m_wndBHXHLabel;
	CGuiTextCtrl	m_wndPathBHXH;
	CGuiLabel		m_wndBHBQPLabel;
	CGuiTextCtrl	m_wndPathBHBQP;
	CGuiButton		m_wndBrBHXH;
	CGuiButton		m_wndOpeanBHXH;
	CGuiButton		m_wndBrBHBQP;
	CGuiButton		m_wndOpenBHBQP;
	CGuiButton		m_wndClose;
	CString	m_szPathBHXH;
	CString	m_szPathBHBQP;
	//void			OnPathBHXHChange(); 
	//void			OnPathBHXHSetfocus(); 
	//void			OnPathBHXHKillfocus(); 
	int			OnPathBHXHCheckValue(); 
	//void			OnPathBHBQPChange(); 
	//void			OnPathBHBQPSetfocus(); 
	//void			OnPathBHBQPKillfocus(); 
	int			OnPathBHBQPCheckValue(); 
	void			OnBrBHXHSelect(); 
	void			OnOpeanBHXHSelect(); 
	void			OnBrBHBQPSelect(); 
	void			OnOpenBHBQPSelect(); 
	void			OnCloseSelect(); 
	CSYSSetUpDir(CWnd *pParent);
	~CSYSSetUpDir();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSYSSetUpDir(); 
	int OnEditSYSSetUpDir(); 
	int OnDeleteSYSSetUpDir(); 
	int OnSaveSYSSetUpDir(); 
	int OnCancelSYSSetUpDir(); 
	int OnSYSSetUpDirListLoadData(); 
};
#endif
