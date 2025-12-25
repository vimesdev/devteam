#ifndef RISRESULTDIALOG_H
#define RISRESULTDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2006-2008.			
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
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
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
class CRISResultDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndResultInformation;
	CGuiLabel		m_wndResultLabel;
	CGuiTextCtrl	m_wndResult;
	CGuiLabel		m_wndConclutionLabel;
	CGuiTextCtrl	m_wndConclution;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndPrint;
	CString	m_szResult;
	CString	m_szConclution;
	//void			OnResultChange(); 
	//void			OnResultSetfocus(); 
	//void			OnResultKillfocus(); 
	int			OnResultCheckValue(); 
	//void			OnConclutionChange(); 
	//void			OnConclutionSetfocus(); 
	//void			OnConclutionKillfocus(); 
	int			OnConclutionCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	void			OnPrintSelect(); 
	CRISResultDialog();
	~CRISResultDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddRISResultDialog(); 
	int OnEditRISResultDialog(); 
	int OnDeleteRISResultDialog(); 
	int OnSaveRISResultDialog(); 
	int OnCancelRISResultDialog(); 
	int OnRISResultDialogListLoadData(); 
};
#endif
