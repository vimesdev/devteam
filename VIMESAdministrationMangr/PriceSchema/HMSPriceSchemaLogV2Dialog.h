#ifndef HMSPRICESCHEMALOGV2DIALOG_H
#define HMSPRICESCHEMALOGV2DIALOG_H

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
class CHMSPriceSchemaLogV2Dialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGroup;
	CGuiLabel		m_wndCb1Label;
	CGuiComboBox	m_wndCb1;
	CGuiLabel		m_wndCb2Label;
	CGuiComboBox	m_wndCb2;
	CGuiListCtrl	m_wndList1;
	CGuiListCtrl	m_wndList2;
	CGuiTextCtrl	m_wndText;
	CString	m_szCb1Key;
	CString	m_szCb2Key;
	CString	m_szText;
	void			OnCb1SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCb1Selendok(); 
	//void			OnCb1Setfocus(); 
	//void			OnCb1Killfocus(); 
	long			OnCb1LoadData(); 
	//void			OnCb1AddNew(); 
	void			OnCb2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCb2Selendok(); 
	//void			OnCb2Setfocus(); 
	//void			OnCb2Killfocus(); 
	long			OnCb2LoadData(); 
	//void			OnCb2AddNew(); 
	long			OnList1LoadData(); 
	void			OnList1SelectChange(int nOldItem, int nNewItem); 
	void			OnList1DblClick(); 
	int			OnList1DeleteItem(); 
	long			OnList2LoadData(); 
	void			OnList2SelectChange(int nOldItem, int nNewItem); 
	void			OnList2DblClick(); 
	int			OnList2DeleteItem(); 
	//void			OnTextChange(); 
	//void			OnTextSetfocus(); 
	//void			OnTextKillfocus(); 
	int			OnTextCheckValue(); 
	CHMSPriceSchemaLogV2Dialog(CWnd *pParent);
	~CHMSPriceSchemaLogV2Dialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPriceSchemaLogV2Dialog(); 
	int OnEditHMSPriceSchemaLogV2Dialog(); 
	int OnDeleteHMSPriceSchemaLogV2Dialog(); 
	int OnSaveHMSPriceSchemaLogV2Dialog(); 
	int OnCancelHMSPriceSchemaLogV2Dialog(); 
	int OnHMSPriceSchemaLogV2DialogListLoadData(); 
};
#endif
