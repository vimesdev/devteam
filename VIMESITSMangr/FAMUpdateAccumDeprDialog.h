#ifndef FAMUPDATEACCUMDEPRDIALOG_H
#define FAMUPDATEACCUMDEPRDIALOG_H

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
#include "afxmt.h"

class CFAMUpdateAccumDeprDialog : public CGuiDialog
{
protected:
public:
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndLoadingLabel;
	CGuiLabel		m_wndStatusLabel;
	CProgressCtrl	m_wndProgress;
	CGuiLabel		m_wndProcessingLabel;

	CWinThread *ptrThread;	
	CEvent CancelEvent;
	CArray<CString, CString&> array;
	int m_nMaxRange;
	//CString	m_szLoadingLabel;
	//CString m_szStatusLabel;
	void			OnUpdateSelect();
	void			OnCancelSelect();
	void			OnCloseSelect(); 
	//void			OnProgressChange(); 
	//void			OnProgressSetfocus(); 
	//void			OnProgressKillfocus(); 
	int			OnProgressCheckValue(); 
	CFAMUpdateAccumDeprDialog(CWnd *pParent);
	~CFAMUpdateAccumDeprDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMUpdateAccumDeprDialog(); 
	int OnEditFAMUpdateAccumDeprDialog(); 
	int OnDeleteFAMUpdateAccumDeprDialog(); 
	int OnSaveFAMUpdateAccumDeprDialog(); 
	int OnCancelFAMUpdateAccumDeprDialog(); 
	int OnFAMUpdateAccumDeprDialogListLoadData();
	BOOL DoEvents();
	int GetAssetNoArray();
	LRESULT OnThreadMessage(WPARAM wParam, LPARAM);
	DECLARE_MESSAGE_MAP()
};
#endif
