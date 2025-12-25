#ifndef IVFSETUPLISTDLG_H
#define IVFSETUPLISTDLG_H
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CIVFSetupListDlg : public CGuiDialog{
protected:
public:
	CGuiLabel	m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel	m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel	m_wndTypeLabel;
	CGuiNumberCtrl	m_wndType;
	CGuiButton	m_wndOk;
	CGuiButton	m_wndCancel;
	CGuiGroupBox	m_wndSetupInformation;
	CString	m_szID;
	CString	m_szName;
	long	m_nType;
	BOOL	m_bAdd;
	CDbfMap	m_sys_setuplistTbl;
	int			OnIDChange(); 
	int			OnIDSetfocus(); 
	int			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	int			OnNameChange(); 
	int			OnNameSetfocus(); 
	int			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	int			OnTypeChange(); 
	int			OnTypeSetfocus(); 
	int			OnTypeKillfocus(); 
	int			OnTypeCheckValue(); 
	int			OnOKSel(); 
	int			OnCancelSel(); 
	CIVFSetupListDlg();
	~CIVFSetupListDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
};
#endif
