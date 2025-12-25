#ifndef HMSPARACLINICALDESCDIALOG_H
#define HMSPARACLINICALDESCDIALOG_H

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
class CHMSParaclinicalDescDialog : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndDescLabel;
	CGuiTextCtrl	m_wndDesc;
	CGuiButton		m_wndOk;
	CString	m_szDesc;
	long			m_nOrderID;
	CString	m_szItems;
	//void			OnDescChange(); 
	//void			OnDescSetfocus(); 
	//void			OnDescKillfocus(); 
	int			OnDescCheckValue(); 
	void			OnOkSelect(); 
	CHMSParaclinicalDescDialog(CWnd *pParent);
	~CHMSParaclinicalDescDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalDescDialog(); 
	int OnEditHMSParaclinicalDescDialog(); 
	int OnDeleteHMSParaclinicalDescDialog(); 
	int OnSaveHMSParaclinicalDescDialog(); 
	int OnCancelHMSParaclinicalDescDialog(); 
	int OnHMSParaclinicalDescDialogListLoadData(); 
};
#endif
