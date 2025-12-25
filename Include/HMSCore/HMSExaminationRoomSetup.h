#ifndef HMSEXAMINATIONROOMSETUP_H
#define HMSEXAMINATIONROOMSETUP_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSExaminationRoomSetup : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndExaminationRoomsList;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szDepartmentKey;
	CString	m_szTypeKey;
	long	m_nID;
	CString	m_szName;
	CDbfMap	m_hms_examroomTbl;
	int			OnListLoadData(); 
	int			OnListSelectChange(int nOldItem, int nNewItem); 
	int			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnDepartmentSelendok(); 
	//int			OnDepartmentSetfocus(); 
	//int			OnDepartmentKillfocus(); 
	int			OnDepartmentLoadData(); 
	int			OnDepartmentAddNew(); 
	int			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnTypeSelendok(); 
	//int			OnTypeSetfocus(); 
	//int			OnTypeKillfocus(); 
	int			OnTypeLoadData(); 
	int			OnTypeAddNew(); 
	//int			OnIDChange(); 
	//int			OnIDSetfocus(); 
	//int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//int			OnNameChange(); 
	//int			OnNameSetfocus(); 
	//int			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	CHMSExaminationRoomSetup();
	~CHMSExaminationRoomSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExaminationRoomSetup(); 
	int OnEditHMSExaminationRoomSetup(); 
	int OnDeleteHMSExaminationRoomSetup(); 
	int OnSaveHMSExaminationRoomSetup(); 
	int OnCancelHMSExaminationRoomSetup(); 
	int OnHMSExaminationRoomSetupListLoadData(); 
};
#endif
