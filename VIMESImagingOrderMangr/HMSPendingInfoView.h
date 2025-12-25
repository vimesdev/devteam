#ifndef HMSPENDINGINFOVIEW_H
#define HMSPENDINGINFOVIEW_H

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
class CHMSPendingInfoView : public CGuiView
{
protected:
public:
	CString			m_szDeptID;
	int				m_nRoomID;

	CGuiGroupBox	m_wndPending;
	CGuiButton		m_wndClear;
	CGuiGroupBox	m_wndCancel;
	CGuiButton		m_wndCall;
	CGuiListCtrl	m_wndPendingList;
	CGuiListCtrl	m_wndCancelList;
	CGuiCheckBox	m_wndpacsmapdate;
	CGuiButton		m_wndViewPerformRoomStatus;
	BOOL	m_bpacsmapdate;
	void			OnClearSelect();
	void			OnCallSelect();
	long			OnPendingListLoadData();
	void			OnPendingListSelectChange(int nOldItem, int nNewItem);
	void			OnPendingListDblClick();
	int			OnPendingListDeleteItem();
	long			OnCancelListLoadData();
	void			OnCancelListSelectChange(int nOldItem, int nNewItem);
	void			OnCancelListDblClick();
	int			OnCancelListDeleteItem();
	void			OnViewPerformRoomStatusSelect();
	CHMSPendingInfoView();
	~CHMSPendingInfoView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	void OnpacsmapdateSelect();
	int SetMode(int nMode);
	int OnAddHMSPendingInfoView();
	int OnEditHMSPendingInfoView();
	int OnDeleteHMSPendingInfoView();
	int OnSaveHMSPendingInfoView();
	int OnCancelHMSPendingInfoView();
	int OnHMSPendingInfoViewListLoadData();

	void Refresh();
	void OnResizeLayout();
};
#endif