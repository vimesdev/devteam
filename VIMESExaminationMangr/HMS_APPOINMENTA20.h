#ifndef HMS_APPOINMENTA20_H
#define HMS_APPOINMENTA20_H

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
class CHMS_APPOINMENTA20 : public CGuiDialog
{
protected:
public:
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiGroupBox	m_wndInformationAppointment;
	CGuiDateCtrl	m_wndToDate;
	CGuiButton		m_wndLoad;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDateLabel;
	CGuiDateCtrl	m_wndDate;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wnd5MciLabel;
	CGuiNumberCtrl	m_wnd5Mci;
	CGuiLabel		m_wndXoaMoGiapLabel;
	CGuiNumberCtrl	m_wndXoaMoGiap;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szDate;
	long	m_nQty;
	long	m_nQtyOld;

	long	m_n5Mci;
	long	m_n5MciOld;

	long	m_nXoaMoGiap;
	long	m_nXoaMoGiapOld;

	long	m_nqty_diff;
	long	m_nqty_diffOld;
	long    m_nHAS_5mci_diff;
	long	m_nHAS_xoamo_diff;
	CString	m_szNote;
	CDbfMap m_hms_appointment_setupTbl;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnLoadSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	//void			On5MciChange(); 
	//void			On5MciSetfocus(); 
	//void			On5MciKillfocus(); 
	int			On5MciCheckValue(); 
	//void			OnXoaMoGiapChange(); 
	//void			OnXoaMoGiapSetfocus(); 
	//void			OnXoaMoGiapKillfocus(); 
	int			OnXoaMoGiapCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	int			OnListExport();
	CHMS_APPOINMENTA20(CWnd *pParent);
	~CHMS_APPOINMENTA20();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMS_APPOINMENTA20(); 
	int OnEditHMS_APPOINMENTA20(); 
	int OnDeleteHMS_APPOINMENTA20(); 
	int OnSaveHMS_APPOINMENTA20(); 
	int OnCancelHMS_APPOINMENTA20(); 
	int OnHMS_APPOINMENTA20ListLoadData(); 
};
#endif