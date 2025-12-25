#ifndef TMPATIENTHANDOVERDIALOG2_H
#define TMPATIENTHANDOVERDIALOG2_H

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
class CTMPatientHandoverDialog2 : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndcontrol_0;
	CGuiGroupBox	m_wndcontrol_1;
	CGuiListCtrl	m_wndcontrol_2;
	CGuiListCtrl	m_wndcontrol_3;
	CGuiLabel		m_wndLabel_4;
	CGuiTextCtrl	m_wndcontrol_5;
	CGuiLabel		m_wndLabel_6;
	CGuiTextCtrl	m_wndcontrol_7;
	CGuiLabel		m_wndLabel_8;
	CGuiTextCtrl	m_wndcontrol_9;
	CGuiLabel		m_wndLabel_10;
	CGuiTextCtrl	m_wndcontrol_11;
	CGuiButton		m_wndcontrol_12;
	CGuiButton		m_wndcontrol_13;
	CGuiButton		m_wndcontrol_14;
	CGuiButton		m_wndcontrol_15;
	CGuiLabel		m_wndLabel_16;
	CGuiDateCtrl	m_wndcontrol_17;
	CString	m_szcontrol_5;
	CString	m_szcontrol_7;
	CString	m_szcontrol_9;
	CString	m_szcontrol_11;
	CString	m_szcontrol_17;
	long			Oncontrol_2LoadData(); 
	void			Oncontrol_2SelectChange(int nOldItem, int nNewItem); 
	void			Oncontrol_2DblClick(); 
	int			Oncontrol_2DeleteItem(); 
	long			Oncontrol_3LoadData(); 
	void			Oncontrol_3SelectChange(int nOldItem, int nNewItem); 
	void			Oncontrol_3DblClick(); 
	int			Oncontrol_3DeleteItem(); 
	//void			Oncontrol_5Change(); 
	//void			Oncontrol_5Setfocus(); 
	//void			Oncontrol_5Killfocus(); 
	int			Oncontrol_5CheckValue(); 
	//void			Oncontrol_7Change(); 
	//void			Oncontrol_7Setfocus(); 
	//void			Oncontrol_7Killfocus(); 
	int			Oncontrol_7CheckValue(); 
	//void			Oncontrol_9Change(); 
	//void			Oncontrol_9Setfocus(); 
	//void			Oncontrol_9Killfocus(); 
	int			Oncontrol_9CheckValue(); 
	//void			Oncontrol_11Change(); 
	//void			Oncontrol_11Setfocus(); 
	//void			Oncontrol_11Killfocus(); 
	int			Oncontrol_11CheckValue(); 
	void			Oncontrol_12Select(); 
	void			Oncontrol_13Select(); 
	void			Oncontrol_14Select(); 
	void			Oncontrol_15Select(); 
	//void			Oncontrol_17Change(); 
	//void			Oncontrol_17Setfocus(); 
	//void			Oncontrol_17Killfocus(); 
	int			Oncontrol_17CheckValue(); 
	CTMPatientHandoverDialog2(CWnd *pParent);
	~CTMPatientHandoverDialog2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMPatientHandoverDialog2(); 
	int OnEditTMPatientHandoverDialog2(); 
	int OnDeleteTMPatientHandoverDialog2(); 
	int OnSaveTMPatientHandoverDialog2(); 
	int OnCancelTMPatientHandoverDialog2(); 
	int OnTMPatientHandoverDialog2ListLoadData(); 
};
#endif
