#ifndef FAMINVENTORYDLG_H
#define FAMINVENTORYDLG_H

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
class CFAMInventoryDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInventoriedGroupLabel;
	CGuiLabel		m_wndInventoryDateLabel;
	CGuiDateCtrl	m_wndInventoryDate;
	CGuiLabel		m_wndLevel1Label;
	CGuiNumberCtrl	m_wndLevel1;
	CGuiLabel		m_wndLevel2Label;
	CGuiNumberCtrl	m_wndLevel2;
	CGuiLabel		m_wndLevel3Label;
	CGuiNumberCtrl	m_wndLevel3;
	CGuiLabel		m_wndLevel4Label;
	CGuiNumberCtrl	m_wndLevel4;
	CGuiLabel		m_wndLevel5Label;
	CGuiNumberCtrl	m_wndLevel5;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szInventoryDate;
	CString	m_szLevel1;
	CString	m_szLevel2;
	CString	m_szLevel3;
	CString	m_szLevel4;
	CString	m_szLevel5;
	CString	m_szNote;
	CString szAssetNo;
	long	nIndex;
	CDbfMap m_fam_inventory_tbl;
	//void			OnInventoryDateChange(); 
	//void			OnInventoryDateSetfocus(); 
	//void			OnInventoryDateKillfocus(); 
	int			OnInventoryDateCheckValue(); 
	//void			OnLevel1Change(); 
	//void			OnLevel1Setfocus(); 
	//void			OnLevel1Killfocus(); 
	int			OnLevel1CheckValue(); 
	//void			OnLevel2Change(); 
	//void			OnLevel2Setfocus(); 
	//void			OnLevel2Killfocus(); 
	int			OnLevel2CheckValue(); 
	//void			OnLevel3Change(); 
	//void			OnLevel3Setfocus(); 
	//void			OnLevel3Killfocus(); 
	int			OnLevel3CheckValue(); 
	//void			OnLevel4Change(); 
	//void			OnLevel4Setfocus(); 
	//void			OnLevel4Killfocus(); 
	int			OnLevel4CheckValue(); 
	//void			OnLevel5Change(); 
	//void			OnLevel5Setfocus(); 
	//void			OnLevel5Killfocus(); 
	int			OnLevel5CheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CFAMInventoryDlg(CWnd *pParent);
	~CFAMInventoryDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMInventoryDlg(); 
	int OnEditFAMInventoryDlg(); 
	int OnDeleteFAMInventoryDlg(); 
	int OnSaveFAMInventoryDlg(); 
	int OnCancelFAMInventoryDlg(); 
	int OnFAMInventoryDlgListLoadData(); 
};
#endif
