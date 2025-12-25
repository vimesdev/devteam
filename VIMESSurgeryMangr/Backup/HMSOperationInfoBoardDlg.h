#ifndef HMSOPERATIONINFOBOARDDLG_H
#define HMSOPERATIONINFOBOARDDLG_H

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
class CHMSOperationInfoBoardDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndSurgeryInfo;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiLabel		m_wndOperationTableLabel;
	CGuiNumberCtrl	m_wndOperationTable;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndConsciousDateLabel;
	CGuiDateTimeCtrl	m_wndConsciousDate;
	CGuiLabel		m_wndReturnTimeLabel;
	CGuiNumberCtrl	m_wndReturnTime;
	CGuiLabel		m_wndReturnDeptLabel;
	CGuiComboBox	m_wndReturnDept;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndList;
	CString	m_szRoomKey;
	CString	m_szStatusKey;
	long	m_nReturnTime;
	CString	m_szReturnDeptKey;
	CString m_szBoardID;
	CString m_szDocNo;
	long	m_nDocNo;
	long	m_nRoomID;
	long	m_nOperationTable;
	CString m_szDeptID;
	CString	m_szOperationTable;
	CString	m_szConsciousDate;
	CDbfMap	m_hms_operation_boardTbl;
	void			OnRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRoomSelendok(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	long			OnRoomLoadData(); 
	//void			OnRoomAddNew(); 
	//void			OnOperationTableChange(); 
	//void			OnOperationTableSetfocus(); 
	//void			OnOperationTableKillfocus(); 
	int			OnOperationTableCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	//void			OnConsciousDateChange(); 
	//void			OnConsciousDateSetfocus(); 
	//void			OnConsciousDateKillfocus(); 
	int			OnConsciousDateCheckValue();
	//void			OnReturnTimeChange(); 
	//void			OnReturnTimeSetfocus(); 
	//void			OnReturnTimeKillfocus(); 
	int			OnReturnTimeCheckValue(); 
	void			OnReturnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReturnDeptSelendok(); 
	//void			OnReturnDeptSetfocus(); 
	//void			OnReturnDeptKillfocus(); 
	long			OnReturnDeptLoadData(); 
	//void			OnReturnDeptAddNew(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSOperationInfoBoardDlg(CWnd *pParent);
	~CHMSOperationInfoBoardDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOperationInfoBoardDlg(); 
	int OnEditHMSOperationInfoBoardDlg(); 
	int OnDeleteHMSOperationInfoBoardDlg(); 
	int OnSaveHMSOperationInfoBoardDlg(); 
	int OnCancelHMSOperationInfoBoardDlg(); 
	int OnHMSOperationInfoBoardDlgListLoadData(); 
};
#endif
