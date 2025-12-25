#ifndef HMSParaclinicalListSetup_H
#define HMSParaclinicalListSetup_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
#include "ListPane.h"
#include "HMSMapCircular.h"


class CHMSParaclinicalListSetup : public CGuiView{
protected:
	CArray<CString, CString&> m_arCode;
public:
	CString	m_szCode;
	CString	m_szFeeID;
	CListPane	m_wndParaclinicalList;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiListCtrl	m_wndFeeList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiCheckBox	m_wndInactive;
	CGuiLabel		m_wndFindLabel;
	CGuiTextCtrl	m_wndFind;
	CGuiButton		m_wndFilter;
	CGuiCheckBox	m_wndApplyDateLabel;
	CGuiDateCtrl	m_wndApplyDate;
	CGuiCheckBox	m_wndDurationFilter;
	CGuiCheckBox	m_wndGenderFilter;

	CString	m_szFind;
	BOOL	m_bApplyDate;
	CString m_szApplyDate;
	BOOL	m_bInactive;
	BOOL	m_bDurationFilter;
	BOOL	m_bGenderFilter;
	CHMSMapcircular m_wndMapCircular;
	int			OnParaclinicalListLoadData(); 
	int			OnParaclinicalListSelectChange(int nOldItem, int nNewItem); 
	int			OnParaclinicalListDblClick(); 
	int			OnParaclinicalListDeleteItem(); 
	int			OnFeeListLoadData(); 
	int			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	int			OnFeeListDblClick(); 
	int			OnFeeListDeleteItem(); 
	int			OnFeeListSortIndex();
	int			OnListShowLogItem();
	int			OnFilterSelect(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnApplyDateLabelSelect();
	int			OnApplyDateCheckValue();
	int			OnFindChange();
	int			OnSetSubGroup();
	int			OnSetSubItem();
	void		OnInactiveSelect();
	void		OnDurationFilterSelect();
	void		OnGenderFilterSelect();
	void		OnListEditOldPrice();
	int			OnListCopyItemFee();
	int			OnListEditItemFee();
	int			OnUpdatePacsGroup();
	int			OnUpdateChildItemList();
	CHMSParaclinicalListSetup();
	~CHMSParaclinicalListSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalListSetup(); 
	int OnEditHMSParaclinicalListSetup(); 
	int OnDeleteHMSParaclinicalListSetup(); 
	int OnSaveHMSParaclinicalListSetup(); 
	int OnCancelHMSParaclinicalListSetup(); 
	int OnHMSParaclinicalListSetupListLoadData();
	int OnUpdateExtraInforItemList();
};
#endif
