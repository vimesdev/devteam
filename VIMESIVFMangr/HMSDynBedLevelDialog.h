#ifndef HMSDYNBEDLEVELDIALOG_H
#define HMSDYNBEDLEVELDIALOG_H

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
class CHMSDynBedLevelDialog : public CGuiDialog{
protected:
public:
	BOOL			m_bRequestOption;
	int				m_nID;
	float			m_nTreatmentDays;
	CString			m_szFromDate;
	CString			m_szDeptID;
	int				m_nRoomID;

	CGuiGroupBox	m_wndBedInformation;
	CGuiLabel		m_wndLevel1Label;
	CGuiComboBox	m_wndLevel1;
	CGuiLabel		m_wndDays1Label;
	CGuiNumberCtrl	m_wndDays1;

	CGuiLabel		m_wndPayrate1Label;
	CGuiComboBox	m_wndPayrate1;
	CGuiLabel		m_wndLevel2Label;
	CGuiComboBox	m_wndLevel2;
	CGuiLabel		m_wndDays2Label;
	CGuiNumberCtrl	m_wndDays2;
	CGuiLabel		m_wndPayrate2Label;
	CGuiComboBox	m_wndPayrate2;
	CGuiLabel		m_wndLevel3Label;
	CGuiComboBox	m_wndLevel3;
	CGuiLabel		m_wndDays3Label;
	CGuiNumberCtrl	m_wndDays3;
	CGuiLabel		m_wndPayrate3Label;
	CGuiComboBox	m_wndPayrate3;
	CGuiLabel		m_wndLevel4Label;
	CGuiComboBox	m_wndLevel4;
	CGuiLabel		m_wndDays4Label;
	CGuiNumberCtrl	m_wndDays4;
	CGuiLabel		m_wndPayrate4Label;
	CGuiComboBox	m_wndPayrate4;
	CGuiLabel		m_wndLevel5Label;
	CGuiComboBox	m_wndLevel5;
	CGuiLabel		m_wndDays5Label;
	CGuiNumberCtrl	m_wndDays5;
	CGuiLabel		m_wndPayrate5Label;
	CGuiComboBox	m_wndPayrate5;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szLevel1Key;
	float		m_nDays1;
	CString	m_szPayrate1Key;
	CString	m_szLevel2Key;
	float	m_nDays2;
	CString	m_szPayrate2Key;
	CString	m_szLevel3Key;
	float		m_nDays3;
	CString	m_szPayrate3Key;
	CString	m_szLevel4Key;
	float		m_nDays4;
	CString	m_szPayrate4Key;
	CString	m_szLevel5Key;
	float		m_nDays5;
	CString	m_szPayrate5Key;

	CDbfMap	m_hms_bed_itemsTbl;
	void			OnLevel1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevel1Selendok(); 
	//void			OnLevel1Setfocus(); 
	//void			OnLevel1Killfocus(); 
	long			OnLevel1LoadData(); 
	void			OnLevel1AddNew(); 
	//void			OnDays1Change(); 
	//void			OnDays1Setfocus(); 
	//void			OnDays1Killfocus(); 
	int			OnDays1CheckValue(); 
	void			OnPayrate1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPayrate1Selendok(); 
	//void			OnPayrate1Setfocus(); 
	//void			OnPayrate1Killfocus(); 
	long			OnPayrate1LoadData(); 
	//void			OnPayrate1AddNew(); 
	void			OnLevel2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevel2Selendok(); 
	//void			OnLevel2Setfocus(); 
	//void			OnLevel2Killfocus(); 
	long			OnLevel2LoadData(); 
	void			OnLevel2AddNew(); 
	//void			OnDays2Change(); 
	//void			OnDays2Setfocus(); 
	//void			OnDays2Killfocus(); 
	int			OnDays2CheckValue(); 
	void			OnPayrate2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPayrate2Selendok(); 
	//void			OnPayrate2Setfocus(); 
	//void			OnPayrate2Killfocus(); 
	long			OnPayrate2LoadData(); 
	//void			OnPayrate2AddNew(); 
	void			OnLevel3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevel3Selendok(); 
	//void			OnLevel3Setfocus(); 
	//void			OnLevel3Killfocus(); 
	long			OnLevel3LoadData(); 
	void			OnLevel3AddNew(); 
	//void			OnDays3Change(); 
	//void			OnDays3Setfocus(); 
	//void			OnDays3Killfocus(); 
	int			OnDays3CheckValue(); 
	void			OnPayrate3SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPayrate3Selendok(); 
	//void			OnPayrate3Setfocus(); 
	//void			OnPayrate3Killfocus(); 
	long			OnPayrate3LoadData(); 
	//void			OnPayrate3AddNew(); 
	void			OnLevel4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevel4Selendok(); 
	//void			OnLevel4Setfocus(); 
	//void			OnLevel4Killfocus(); 
	long			OnLevel4LoadData(); 
	void			OnLevel4AddNew(); 
	//void			OnDays4Change(); 
	//void			OnDays4Setfocus(); 
	//void			OnDays4Killfocus(); 
	int			OnDays4CheckValue(); 
	void			OnPayrate4SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPayrate4Selendok(); 
	//void			OnPayrate4Setfocus(); 
	//void			OnPayrate4Killfocus(); 
	long			OnPayrate4LoadData(); 
	//void			OnPayrate4AddNew(); 
	void			OnLevel5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLevel5Selendok(); 
	//void			OnLevel5Setfocus(); 
	//void			OnLevel5Killfocus(); 
	long			OnLevel5LoadData(); 
	void			OnLevel5AddNew(); 
	//void			OnDays5Change(); 
	//void			OnDays5Setfocus(); 
	//void			OnDays5Killfocus(); 
	int			OnDays5CheckValue(); 
	void			OnPayrate5SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPayrate5Selendok(); 
	//void			OnPayrate5Setfocus(); 
	//void			OnPayrate5Killfocus(); 
	long			OnPayrate5LoadData(); 
	//void			OnPayrate5AddNew(); 
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
