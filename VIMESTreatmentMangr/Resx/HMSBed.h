#ifndef HMSBED_H
#define HMSBED_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSBed : public CGuiView{
protected:
public:
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiLabel		m_wndBedLabel;
	CGuiComboBox	m_wndBed;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiLabel		m_wndNurseLabel;
	CGuiComboBox	m_wndNurse;
	CGuiLabel		m_wndInDateLabel;
	CGuiDateTimeCtrl	m_wndInDate;
	CGuiLabel		m_wndOutDateLabel;
	CGuiDateTimeCtrl	m_wndOutDate;
	CGuiListCtrl	m_wndBedList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndTerminate;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndUpdatedByLabel;
	CGuiTextCtrl	m_wndUpdatedBy;
	CString	m_szRoomKey;
	CString	m_szBedKey;
	CString	m_szDoctorKey;
	CString	m_szNurseKey;
	CString	m_szInDate;
	CString	m_szOutDate;
	CString	m_szUpdatedBy;
	int			OnRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnRoomSelendok(); 
	//int			OnRoomSetfocus(); 
	//int			OnRoomKillfocus(); 
	int			OnRoomLoadData(); 
	int			OnRoomAddNew(); 
	int			OnBedSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnBedSelendok(); 
	//int			OnBedSetfocus(); 
	//int			OnBedKillfocus(); 
	int			OnBedLoadData(); 
	int			OnBedAddNew(); 
	int			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnDoctorSelendok(); 
	//int			OnDoctorSetfocus(); 
	//int			OnDoctorKillfocus(); 
	int			OnDoctorLoadData(); 
	int			OnDoctorAddNew(); 
	int			OnNurseSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnNurseSelendok(); 
	//int			OnNurseSetfocus(); 
	//int			OnNurseKillfocus(); 
	int			OnNurseLoadData(); 
	int			OnNurseAddNew(); 
	//int			OnInDateChange(); 
	//int			OnInDateSetfocus(); 
	//int			OnInDateKillfocus(); 
	int			OnInDateCheckValue(); 
	//int			OnOutDateChange(); 
	//int			OnOutDateSetfocus(); 
	//int			OnOutDateKillfocus(); 
	int			OnOutDateCheckValue(); 
	int			OnBedListLoadData(); 
	int			OnBedListSelectChange(int nOldItem, int nNewItem); 
	int			OnBedListDblClick(); 
	int			OnBedListDeleteItem(); 
	int			OnAddSelect(); 
	int			OnTerminateSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	//int			OnUpdatedByChange(); 
	//int			OnUpdatedBySetfocus(); 
	//int			OnUpdatedByKillfocus(); 
	int			OnUpdatedByCheckValue(); 
	CHMSBed();
	~CHMSBed();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddHMSBed(); 
	int OnEditHMSBed(); 
	int OnDeleteHMSBed(); 
	int OnSaveHMSBed(); 
	int OnCancelHMSBed(); 
};
#endif
