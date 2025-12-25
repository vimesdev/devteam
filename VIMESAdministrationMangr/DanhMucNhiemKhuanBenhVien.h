#ifndef DANHMUCNHIEMKHUANBV_H
#define DANHMUCNHIEMKHUANBV_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CDanhMucNhiemKhuanBenhVienSetup : public CGuiView
{

protected:
public:
	CGuiGroupBox	m_wndDanhMucNhiemKhuanBenhVienInformatioin;
	CGuiLabel		m_wndFindLabel;
	CGuiTextCtrl	m_wndFind;
	CGuiListCtrl	m_wndDanhMucNhiemKhuanBenhVienList;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndModuleLabel;
	CGuiComboBox	m_wndModule;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndGroupLabel;
	CGuiComboBox	m_wndGroup;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString			m_szFind;
	CString	m_szID;
	CString	m_szModuleKey;
	CString	m_szDescription;
	CString	m_szGroupKey;
	CDbfMap	m_sys_DanhMucNhiemKhuanBenhVienTbl;
	int			OnDanhMucNhiemKhuanBenhVienListLoadData(); 
	int			OnDanhMucNhiemKhuanBenhVienListSelectChange(int nOldItem, int nNewItem); 
	int			OnDanhMucNhiemKhuanBenhVienListDblClick(); 
	int			OnDanhMucNhiemKhuanBenhVienListDeleteItem();
	void			OnFindChange(); 
	//void			OnFindSetfocus(); 
	//void			OnFindKillfocus(); 
	int			OnFindCheckValue(); 
	//int			OnIDChange(); 
	//int			OnIDSetfocus(); 
	//int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	int			OnModuleSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnModuleSelendok(); 
	//int			OnModuleSetfocus(); 
	//int			OnModuleKillfocus(); 
	int			OnModuleLoadData(); 
	int			OnModuleAddNew(); 
	//int			OnDescriptionChange(); 
	//int			OnDescriptionSetfocus(); 
	//int			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue();
	long		OnGroupLoadData(); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnSaveSelect(); 
	int			OnCancelSelect(); 
	CDanhMucNhiemKhuanBenhVienSetup();
	~CDanhMucNhiemKhuanBenhVienSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddDanhMucNhiemKhuanBenhVien(); 
	int OnEditDanhMucNhiemKhuanBenhVien(); 
	int OnDeleteDanhMucNhiemKhuanBenhVien(); 
	int OnSaveDanhMucNhiemKhuanBenhVien(); 
	int OnCancelDanhMucNhiemKhuanBenhVien();
	int SetMode(int nMode);
	void Refresh();
};
#endif