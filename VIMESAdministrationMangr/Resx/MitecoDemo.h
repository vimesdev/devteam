#ifndef VIMESDEMO_H
#define VIMESDEMO_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CVIMESDemo : public CGuiView{
protected:
public:
	CGuiLabel	m_wndcontrol_0;
	CGuiButton	m_wndcontrol_1;
	CGuiCheckBox	m_wndcontrol_2;
	CGuiLabel	m_wndLabel_3;
	CGuiComboBox	m_wndcontrol_4;
	CGuiLabel	m_wndLabel_5;
	CGuiTextCtrl	m_wndcontrol_6;
	CGuiLabel	m_wndLabel_7;
	CGuiMaskCtrl	m_wndcontrol_8;
	CGuiLabel	m_wndLabel_9;
	CGuiNumberCtrl	m_wndcontrol_10;
	CGuiLabel	m_wndLabel_11;
	CGuiDateCtrl	m_wndcontrol_12;
	CGuiLabel	m_wndLabel_13;
	CGuiTimeCtrl	m_wndcontrol_14;
	CGuiLabel	m_wndLabel_15;
	CGuiDateTimeCtrl	m_wndcontrol_16;
	CGuiListCtrl	m_wndcontrol_17;
	BOOL	m_bcontrol_2;
	CString	m_szcontrol_4Key;
	CString	m_szcontrol_6;
	CString	m_szcontrol_8;
	long	m_ncontrol_10;
	CString	m_szcontrol_12;
	CString	m_szcontrol_14;
	CString	m_szcontrol_16;
	int			Oncontrol_1Select(); 
	int			Oncontrol_2Select(); 
	int			Oncontrol_4SelectChange(int nOldItemSel, int nNewItemSel); 
	int			Oncontrol_4Setfocus(); 
	int			Oncontrol_4Killfocus(); 
	int			Oncontrol_4LoadData(); 
	int			Oncontrol_4AddNew(); 
	int			Oncontrol_6Change(); 
	int			Oncontrol_6Setfocus(); 
	int			Oncontrol_6Killfocus(); 
	int			Oncontrol_6CheckValue(); 
	int			Oncontrol_8Change(); 
	int			Oncontrol_8Setfocus(); 
	int			Oncontrol_8Killfocus(); 
	int			Oncontrol_8CheckValue(); 
	int			Oncontrol_10Change(); 
	int			Oncontrol_10Setfocus(); 
	int			Oncontrol_10Killfocus(); 
	int			Oncontrol_10CheckValue(); 
	int			Oncontrol_12Change(); 
	int			Oncontrol_12Setfocus(); 
	int			Oncontrol_12Killfocus(); 
	int			Oncontrol_12CheckValue(); 
	int			Oncontrol_14Change(); 
	int			Oncontrol_14Setfocus(); 
	int			Oncontrol_14Killfocus(); 
	int			Oncontrol_14CheckValue(); 
	int			Oncontrol_16Change(); 
	int			Oncontrol_16Setfocus(); 
	int			Oncontrol_16Killfocus(); 
	int			Oncontrol_16CheckValue(); 
	int			Oncontrol_17LoadData(); 
	int			Oncontrol_17SelectChange(int nOldItem, int nNewItem); 
	int			Oncontrol_17DblClick(); 
	int			Oncontrol_17DeleteItem(); 
	CVIMESDemo();
	~CVIMESDemo();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddVIMESDemo(); 
	int OnEditVIMESDemo(); 
	int OnDeleteVIMESDemo(); 
	int OnSaveVIMESDemo(); 
	int OnCancelVIMESDemo(); 
};
#endif
