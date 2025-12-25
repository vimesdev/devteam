#ifndef RS232PORTCONFIGUREDIALOG_H
#define RS232PORTCONFIGUREDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2006-2008.			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Name (VIMES., JSC). 2006-2008.
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
class CRS232PortConfigureDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndRSPortConfigure;
	CGuiLabel		m_wndPortLabel;
	CGuiComboBox	m_wndPort;
	CGuiLabel		m_wndBaudrateLabel;
	CGuiComboBox	m_wndBaudrate;
	CGuiLabel		m_wndDatabitsLabel;
	CGuiComboBox	m_wndDatabits;
	CGuiLabel		m_wndParityLabel;
	CGuiComboBox	m_wndParity;
	CGuiLabel		m_wndFlowControlLabel;
	CGuiComboBox	m_wndFlowControl;
	CGuiLabel		m_wndStopbitsLabel;
	CGuiComboBox	m_wndStopbits;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szPortKey;
	CString	m_szBaudrateKey;
	CString	m_szDatabitsKey;
	CString	m_szParityKey;
	CString	m_szFlowControlKey;
	CString	m_szStopbitsKey;
	void			OnPortSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPortSelendok(); 
	//void			OnPortSetfocus(); 
	//void			OnPortKillfocus(); 
	long			OnPortLoadData(); 
	void			OnPortAddNew(); 
	void			OnBaudrateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBaudrateSelendok(); 
	//void			OnBaudrateSetfocus(); 
	//void			OnBaudrateKillfocus(); 
	long			OnBaudrateLoadData(); 
	void			OnBaudrateAddNew(); 
	void			OnDatabitsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDatabitsSelendok(); 
	//void			OnDatabitsSetfocus(); 
	//void			OnDatabitsKillfocus(); 
	long			OnDatabitsLoadData(); 
	void			OnDatabitsAddNew(); 
	void			OnParitySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnParitySelendok(); 
	//void			OnParitySetfocus(); 
	//void			OnParityKillfocus(); 
	long			OnParityLoadData(); 
	void			OnParityAddNew(); 
	void			OnFlowControlSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFlowControlSelendok(); 
	//void			OnFlowControlSetfocus(); 
	//void			OnFlowControlKillfocus(); 
	long			OnFlowControlLoadData(); 
	void			OnFlowControlAddNew(); 
	void			OnStopbitsSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStopbitsSelendok(); 
	//void			OnStopbitsSetfocus(); 
	//void			OnStopbitsKillfocus(); 
	long			OnStopbitsLoadData(); 
	void			OnStopbitsAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CRS232PortConfigureDialog();
	~CRS232PortConfigureDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddRS232PortConfigureDialog(); 
	int OnEditRS232PortConfigureDialog(); 
	int OnDeleteRS232PortConfigureDialog(); 
	int OnSaveRS232PortConfigureDialog(); 
	int OnCancelRS232PortConfigureDialog(); 
	int OnRS232PortConfigureDialogListLoadData(); 
};
#endif
