#ifndef HMSEXAMLIST_H
#define HMSEXAMLIST_H

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
class CHMSExamList : public CGuiView{
protected:
public:
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndZoneLabel;
	CGuiGroupBox	m_wndFilterGroup;
	CGuiComboBox	m_wndZone;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiLabel		m_wndDiagnosisLabel;
	CGuiComboBox	m_wndDiagnosis;
	CGuiLabel		m_wndTestLabel;
	CGuiComboBox	m_wndTest;
	CGuiLabel		m_wndFromPlaceLabel;
	CGuiComboBox	m_wndFromPlace;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndSuggestionLabel;
	CGuiComboBox	m_wndSuggestion;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiListCtrl	m_wndList;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szZoneKey;
	CString	m_szRoomKey;
	CString	m_szDiagnosisKey;
	CString	m_szTestKey;
	CString	m_szFromPlaceKey;
	CString	m_szObjectKey;
	CString	m_szDoctorKey;
	CString	m_szStatusKey;
	CString	m_szSuggestionKey;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnZoneSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnZoneSelendok(); 
	//void			OnZoneSetfocus(); 
	//void			OnZoneKillfocus(); 
	long			OnZoneLoadData(); 
	//void			OnZoneAddNew(); 
	void			OnRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRoomSelendok(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	long			OnRoomLoadData(); 
	//void			OnRoomAddNew(); 
	void			OnDiagnosisSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDiagnosisSelendok(); 
	//void			OnDiagnosisSetfocus(); 
	//void			OnDiagnosisKillfocus(); 
	long			OnDiagnosisLoadData(); 
	//void			OnDiagnosisAddNew(); 
	void			OnTestSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTestSelendok(); 
	//void			OnTestSetfocus(); 
	//void			OnTestKillfocus(); 
	long			OnTestLoadData(); 
	//void			OnTestAddNew(); 
	void			OnFromPlaceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromPlaceSelendok(); 
	//void			OnFromPlaceSetfocus(); 
	//void			OnFromPlaceKillfocus(); 
	long			OnFromPlaceLoadData(); 
	//void			OnFromPlaceAddNew(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	//void			OnDoctorAddNew(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	void			OnSuggestionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSuggestionSelendok(); 
	//void			OnSuggestionSetfocus(); 
	//void			OnSuggestionKillfocus(); 
	long			OnSuggestionLoadData(); 
	//void			OnSuggestionAddNew(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSExamList();
	~CHMSExamList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void SetDefaultValues();
	int SetMode(int nMode);
	CString GetQueryString();
	CString GetQueryString_print();
	CString GetQueryString_paraclinic(long nDocNo);
};
#endif
