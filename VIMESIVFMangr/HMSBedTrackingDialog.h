#ifndef HMSBEDTRACKINGDIALOG_H
#define HMSBEDTRACKINGDIALOG_H

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
#include "GridListView.h"
class CHMSBedTrackingDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndBedInformation;
	CGridListView	m_wndList;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiButton		m_wndRefresh;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndMove;
	CGuiButton		m_wndClose;
	CString	m_szTypeKey;
	CString	m_szRoomKey;
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	void			OnRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRoomSelendok(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	long			OnRoomLoadData(); 
	//void			OnRoomAddNew(); 
	void			OnRefreshSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListEditItem();
	int			OnListMoveItem();
	void			OnEditSelect(); 
	void			OnMoveSelect(); 
	void			OnCloseSelect(); 
	CHMSBedTrackingDialog(CWnd *pParent);
	~CHMSBedTrackingDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBedTrackingDialog(); 
	int OnEditHMSBedTrackingDialog(); 
	int OnDeleteHMSBedTrackingDialog(); 
	int OnSaveHMSBedTrackingDialog(); 
	int OnCancelHMSBedTrackingDialog(); 
	int OnHMSBedTrackingDialogListLoadData(); 
};
#endif
