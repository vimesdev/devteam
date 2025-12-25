#ifndef HMSDYNBEDLEVELDIALOG_H
#define HMSDYNBEDLEVELDIALOG_H

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
class CHMSDynBedLevelDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndBedInformation;
	CGuiLabel		m_wndLevel1Label;
	CGuiComboBox	m_wndLevel1;
	CGuiLabel		m_wndDays1Label;
	CGuiNumberCtrl	m_wndDays1;
	CGuiLabel		m_wndLevel2Label;
	CGuiComboBox	m_wndLevel2;
	CGuiLabel		m_wndDays2Label;
	CGuiNumberCtrl	m_wndDays2;
	CGuiLabel		m_wndLevel3Label;
	CGuiComboBox	m_wndLevel3;
	CGuiLabel		m_wndDays3Label;
	CGuiNumberCtrl	m_wndDays3;
	CGuiLabel		m_wndLevel4Label;
	CGuiComboBox	m_wndLevel4;
	CGuiLabel		m_wndDays4Label;
	CGuiNumberCtrl	m_wndDays4;
	CGuiLabel		m_wndLevel5Label;
	CGuiComboBox	m_wndLevel5;
	CGuiLabel		m_wndDays5Label;
	CGuiNumberCtrl	m_wndDays5;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szLevel1Key;
	long	m_nDays1;
	CString	m_szLevel2Key;
	long	m_nDays2;
	CString	m_szLevel3Key;
	long	m_nDays3;
	CString	m_szLevel4Key;
	long	m_nDays4;
	CString	m_szLevel5Key;
	long	m_nDays5;
	void			OnLevel1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevel1Selendok(); 
	//void			OnLevel1Setfocus(); 
	//void			OnLevel1Killfocus(); 
	long			OnLevel1LoadData(); 
	//void			OnLevel1AddNew(); 
	//void			OnDays1Change(); 
	//void			OnDays1Setfocus(); 
	//void			OnDays1Killfocus(); 
	int			OnDays1CheckValue(); 
	void			OnLevel2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevel2Selendok(); 
	//void			OnLevel2Setfocus(); 
	//void			OnLevel2Killfocus(); 
	long			OnLevel2LoadData(); 
	//void			OnLevel2AddNew(); 
	//void			OnDays2Change(); 
	//void			OnDays2Setfocus(); 
	//void			OnDays2Killfocus(); 
	int			OnDays2CheckValue(); 
	void			OnLevel3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevel3Selendok(); 
	//void			OnLevel3Setfocus(); 
	//void			OnLevel3Killfocus(); 
	long			OnLevel3LoadData(); 
	//void			OnLevel3AddNew(); 
	//void			OnDays3Change(); 
	//void			OnDays3Setfocus(); 
	//void			OnDays3Killfocus(); 
	int			OnDays3CheckValue(); 
	void			OnLevel4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevel4Selendok(); 
	//void			OnLevel4Setfocus(); 
	//void			OnLevel4Killfocus(); 
	long			OnLevel4LoadData(); 
	//void			OnLevel4AddNew(); 
	//void			OnDays4Change(); 
	//void			OnDays4Setfocus(); 
	//void			OnDays4Killfocus(); 
	int			OnDays4CheckValue(); 
	void			OnLevel5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevel5Selendok(); 
	//void			OnLevel5Setfocus(); 
	//void			OnLevel5Killfocus(); 
	long			OnLevel5LoadData(); 
	//void			OnLevel5AddNew(); 
	//void			OnDays5Change(); 
	//void			OnDays5Setfocus(); 
	//void			OnDays5Killfocus(); 
	int			OnDays5CheckValue(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CHMSDynBedLevelDialog(CWnd *pParent);
	~CHMSDynBedLevelDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDynBedLevelDialog(); 
	int OnEditHMSDynBedLevelDialog(); 
	int OnDeleteHMSDynBedLevelDialog(); 
	int OnSaveHMSDynBedLevelDialog(); 
	int OnCancelHMSDynBedLevelDialog(); 
	int OnHMSDynBedLevelDialogListLoadData(); 
};
#endif
