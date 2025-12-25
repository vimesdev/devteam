#ifndef REGIMENORDER_H
#define REGIMENORDER_H

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
#include "GuiView.h"
#include "DbField.h"
class CRegimenOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndCreatedbyLabel;
	CGuiTextCtrl	m_wndCreatedby;
	CGuiLabel		m_wndCreateddateLabel;
	CGuiTextCtrl	m_wndCreateddate;
	CGuiLabel		m_wndIdLabel;
	CGuiNumberCtrl	m_wndId;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndApplyDateLabel;
	CGuiDateCtrl	m_wndApplyDate;
	CGuiLabel		m_wndCategoyLabel;
	CGuiTextCtrl	m_wndCategoy;
	CGuiLabel		m_wndDateDayLabel;
	CGuiNumberCtrl	m_wndDateDay;
	CGuiLabel		m_wndVersionLabel;
	CGuiTextCtrl	m_wndVersion;
	CGuiLabel		m_wndSoluotDTLabel;
	CGuiNumberCtrl	m_wndSoluotDT;
	CGuiLabel		m_wndDanhGiaLabel;
	CGuiNumberCtrl	m_wndDanhGia;
	CGuiTabCtrl	m_wndTab;
	CString	m_szCreatedby;
	CString	m_szCreateddate;
	long	m_nId;
	CString	m_szName;
	CString	m_szNote;
	CString	m_szStatus;
	CString	m_szApplyDate;
	CString	m_szCategoy;
	long	m_nDateDay;
	CString	m_szVersion;
	long	m_nSoluotDT;
	long	m_nDanhGia;
	CDbfMap	m_hms_phacdoTbl;
	//void			OnCreatedbyChange(); 
	//void			OnCreatedbySetfocus(); 
	//void			OnCreatedbyKillfocus(); 
	int			OnCreatedbyCheckValue(); 
	//void			OnCreateddateChange(); 
	//void			OnCreateddateSetfocus(); 
	//void			OnCreateddateKillfocus(); 
	int			OnCreateddateCheckValue(); 
	//void			OnIdChange(); 
	//void			OnIdSetfocus(); 
	//void			OnIdKillfocus(); 
	int			OnIdCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnApplyDateChange(); 
	//void			OnApplyDateSetfocus(); 
	//void			OnApplyDateKillfocus(); 
	int			OnApplyDateCheckValue(); 
	//void			OnCategoyChange(); 
	//void			OnCategoySetfocus(); 
	//void			OnCategoyKillfocus(); 
	int			OnCategoyCheckValue(); 
	//void			OnDateDayChange(); 
	//void			OnDateDaySetfocus(); 
	//void			OnDateDayKillfocus(); 
	int			OnDateDayCheckValue(); 
	//void			OnVersionChange(); 
	//void			OnVersionSetfocus(); 
	//void			OnVersionKillfocus(); 
	int			OnVersionCheckValue(); 
	//void			OnSoluotDTChange(); 
	//void			OnSoluotDTSetfocus(); 
	//void			OnSoluotDTKillfocus(); 
	int			OnSoluotDTCheckValue(); 
	//void			OnDanhGiaChange(); 
	//void			OnDanhGiaSetfocus(); 
	//void			OnDanhGiaKillfocus(); 
	int			OnDanhGiaCheckValue(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	CRegimenOrder();
	~CRegimenOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddRegimenOrder(); 
	int OnEditRegimenOrder(); 
	int OnDeleteRegimenOrder(); 
	int OnSaveRegimenOrder(); 
	int OnCancelRegimenOrder(); 
	int OnRegimenOrderListLoadData(); 
};
#endif
