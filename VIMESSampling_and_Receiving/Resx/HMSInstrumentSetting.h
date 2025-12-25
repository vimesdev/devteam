#ifndef HMSINSTRUMENTSETTING_H
#define HMSINSTRUMENTSETTING_H

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
class CHMSInstrumentSetting : public CGuiView{
protected:
public:
	CGuiLabel		m_wndIDLabel;
	CGuiNumberCtrl	m_wndID;
	CGuiLabel		m_wndModelLabel;
	CGuiTextCtrl	m_wndModel;
	CGuiGroupBox	m_wndInstrumentSetting;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiGroupBox	m_wndDataList;
	CGuiLabel		m_wndPortLabel;
	CGuiComboBox	m_wndPort;
	CGuiLabel		m_wndBaudRateLabel;
	CGuiComboBox	m_wndBaudRate;
	CGuiLabel		m_wndDataBitsLabel;
	CGuiComboBox	m_wndDataBits;
	CGuiLabel		m_wndParityLabel;
	CGuiComboBox	m_wndParity;
	CGuiLabel		m_wndStopBitsLabel;
	CGuiComboBox	m_wndStopBits;
	CGuiLabel		m_wndFlowControlLabel;
	CGuiComboBox	m_wndFlowControl;
	CGuiListCtrl	m_wndInstrumentList;
	CGuiLabel		m_wndSendTypeLabel;
	CGuiComboBox	m_wndSendType;
	CGuiLabel		m_wndTestGroupLabel;
	CGuiComboBox	m_wndTestGroup;
	CGuiLabel		m_wndProtocolLabel;
	CGuiComboBox	m_wndProtocol;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	long	m_nID;
	CString	m_szModel;
	CString	m_szName;
	CString	m_szPortKey;
	CString	m_szBaudRateKey;
	CString	m_szDataBitsKey;
	CString	m_szParityKey;
	CString	m_szStopBitsKey;
	CString	m_szFlowControlKey;
	CString	m_szSendTypeKey;
	CString	m_szTestGroupKey;
	CString	m_szProtocolKey;
	BOOL	m_bActive;
	CDbfMap	m_hms_instrumentTbl;
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnModelChange(); 
	//void			OnModelSetfocus(); 
	//void			OnModelKillfocus(); 
	int			OnModelCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnPortSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPortSelendok(); 
	//void			OnPortSetfocus(); 
	//void			OnPortKillfocus(); 
	long			OnPortLoadData(); 
	//void			OnPortAddNew(); 
	void			OnBaudRateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBaudRateSelendok(); 
	//void			OnBaudRateSetfocus(); 
	//void			OnBaudRateKillfocus(); 
	long			OnBaudRateLoadData(); 
	//void			OnBaudRateAddNew(); 
	void			OnDataBitsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDataBitsSelendok(); 
	//void			OnDataBitsSetfocus(); 
	//void			OnDataBitsKillfocus(); 
	long			OnDataBitsLoadData(); 
	//void			OnDataBitsAddNew(); 
	void			OnParitySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnParitySelendok(); 
	//void			OnParitySetfocus(); 
	//void			OnParityKillfocus(); 
	long			OnParityLoadData(); 
	//void			OnParityAddNew(); 
	void			OnStopBitsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStopBitsSelendok(); 
	//void			OnStopBitsSetfocus(); 
	//void			OnStopBitsKillfocus(); 
	long			OnStopBitsLoadData(); 
	//void			OnStopBitsAddNew(); 
	void			OnFlowControlSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFlowControlSelendok(); 
	//void			OnFlowControlSetfocus(); 
	//void			OnFlowControlKillfocus(); 
	long			OnFlowControlLoadData(); 
	//void			OnFlowControlAddNew(); 
	long			OnInstrumentListLoadData(); 
	void			OnInstrumentListSelectChange(int nOldItem, int nNewItem); 
	void			OnInstrumentListDblClick(); 
	int			OnInstrumentListDeleteItem(); 
	void			OnSendTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSendTypeSelendok(); 
	//void			OnSendTypeSetfocus(); 
	//void			OnSendTypeKillfocus(); 
	long			OnSendTypeLoadData(); 
	//void			OnSendTypeAddNew(); 
	void			OnTestGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTestGroupSelendok(); 
	//void			OnTestGroupSetfocus(); 
	//void			OnTestGroupKillfocus(); 
	long			OnTestGroupLoadData(); 
	//void			OnTestGroupAddNew(); 
	void			OnProtocolSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProtocolSelendok(); 
	//void			OnProtocolSetfocus(); 
	//void			OnProtocolKillfocus(); 
	long			OnProtocolLoadData(); 
	//void			OnProtocolAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnActiveSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSInstrumentSetting();
	~CHMSInstrumentSetting();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSInstrumentSetting(); 
	int OnEditHMSInstrumentSetting(); 
	int OnDeleteHMSInstrumentSetting(); 
	int OnSaveHMSInstrumentSetting(); 
	int OnCancelHMSInstrumentSetting(); 
	int OnHMSInstrumentSettingListLoadData(); 
};
#endif
