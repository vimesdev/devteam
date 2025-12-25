#ifndef FAMSRDEPRCACULATION_H
#define FAMSRDEPRCACULATION_H

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
class CFAMSRDeprCaculation : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndMethod;
	CGuiGroupBox	m_wndCompDepr;
	CGuiRadioButton	m_wndStraightLine;
	CGuiRadioButton	m_wndReducing;
	CGuiLabel		m_wndExpiryDate;
	CGuiDateCtrl	m_wndExDate;
	CGuiLabel		m_wndFromDate;
	CGuiDateCtrl	m_wndStartDate;
	CGuiLabel		m_wndToDate;
	CGuiDateCtrl	m_wndCompDate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndCompAll;
	CGuiCheckBox	m_wndCustom;

	int	m_nStraightLine;
	int	m_nReducing;
	CString	m_szExDate;
	CString	m_szStartDate;
	CString	m_szCompDate;
	BOOL	m_bCompAll;
	BOOL	m_bCustom;

	CString m_szDeprMethod;

	void			OnStraightLineSelect(); 
	void			OnReducingSelect(); 
	//void			OnExDateChange(); 
	//void			OnExDateSetfocus(); 
	//void			OnExDateKillfocus(); 
	int			OnExDateCheckValue(); 
	//void			OnStartDateChange(); 
	//void			OnStartDateSetfocus(); 
	//void			OnStartDateKillfocus(); 
	int			OnStartDateCheckValue(); 
	//void			OnCompDateChange(); 
	//void			OnCompDateSetfocus(); 
	//void			OnCompDateKillfocus(); 
	int			OnCompDateCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCompAllSelect(); 
	void			OnCustomSelect(); 
	CFAMSRDeprCaculation(CWnd *pParent);
	~CFAMSRDeprCaculation();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMSRDeprCaculation(); 
	int OnEditFAMSRDeprCaculation(); 
	int OnDeleteFAMSRDeprCaculation(); 
	int OnSaveFAMSRDeprCaculation(); 
	int OnCancelFAMSRDeprCaculation(); 
	int OnFAMSRDeprCaculationListLoadData(); 
	void OnFormLoad();
	bool ComputeDepreciation();
};
#endif
