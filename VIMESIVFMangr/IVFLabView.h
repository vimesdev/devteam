#ifndef IVFLABVIEW_H
#define IVFLABVIEW_H

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
#include "IVFLabTruList.h"
#include "IVFLabRaList.h"
#include "IVFLabChuyenList.h"
#include "IVFLabNitoList.h"
#include "IVFStorageView.h"
#include "IVFStorageView_v2.h"
#include "IVFLabGiaHanList.h"
#include "IVFLabTaoPhoiList.h"
#include "IVFLabPhieuList.h"
#include "IVFLabHuyList.h"

typedef struct tagTaskInfo{
	CGuiButton* pButton;
	CWnd*	pView;
	CString szCaption;
	UINT	nID;
} TaskInfo;
class CIVFLabView : public CGuiView{
protected:
public:
	CArray<TaskInfo, TaskInfo>	m_tasks;
	int m_nTaskSelected;

	CIVFLabTruList	m_wndListPhieutru;
	CIVFLabRaList	m_wndListPhieura;
	CIVFLabChuyenList m_wndListPhieuchuyen;
	CIVFLabGiaHanList	m_wndListPhieuGiaHan;
	CIVFLabNitoList	m_wndListPhieudoNito;
	CIVFStorageView_v2	m_wndStorageView;
	CIVFLabTaoPhoiList	m_wndListTaoPhoi;
	CIVFLabHuyList	m_wndListHuy;
	CGuiTabCtrl	m_wndView;
	long			OnTaskListLoadData(); 
	void			OnTaskListSelectChange(int nOldItem, int nNewItem); 
	void			OnTaskListDblClick(); 
	int			OnTaskListDeleteItem(); 
	void			OnViewSelectChange(int nOld, int nNew); 
	void	CreateTaskItem(CString szCaption, CWnd* pView, UINT nID);
	void	RecalcLayout();
	int		GetTaskSelected();
	void	SelectTask(int nIndex);
	void	OnTaskItemSelect();
	void OnSettingSelect();
	CIVFLabView();
	~CIVFLabView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabView(); 
	int OnEditIVFLabView(); 
	int OnDeleteIVFLabView(); 
	int OnSaveIVFLabView(); 
	int OnCancelIVFLabView(); 
	int OnIVFLabViewListLoadData(); 
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
#endif
