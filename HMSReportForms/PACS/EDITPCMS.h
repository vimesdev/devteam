#ifndef EDITPCMS_H
#define EDITPCMS_H

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
class CEDITPCMS : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndEditPcmsOrder;
	CGuiLabel		m_wndOrderidLabel;
	CGuiNumberCtrl	m_wndOrderid;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndPRoomLabel;
	CGuiComboBox	m_wndPRoom;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiButton		m_wndUpdateStatus;
	CGuiButton		m_wndUpdatePRoom;
	CGuiButton		m_wndUpdateDoctor;
	long	m_nOrderid;
	long	m_nOrderlineid;
	CString	m_szPRoomKey;
	CString	m_szDoctorKey;
	//void			OnOrderidChange(); 
	//void			OnOrderidSetfocus(); 
	//void			OnOrderidKillfocus(); 
	int			OnOrderidCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnPRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPRoomSelendok(); 
	//void			OnPRoomSetfocus(); 
	//void			OnPRoomKillfocus(); 
	long			OnPRoomLoadData(); 
	//void			OnPRoomAddNew(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	//void			OnDoctorAddNew(); 
	void			OnUpdateStatusSelect(); 
	void			OnUpdatePRoomSelect(); 
	void			OnUpdateDoctorSelect(); 
	CEDITPCMS(CWnd *pParent);
	~CEDITPCMS();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddEDITPCMS(); 
	int OnEditEDITPCMS(); 
	int OnDeleteEDITPCMS(); 
	int OnSaveEDITPCMS(); 
	int OnCancelEDITPCMS(); 
	int OnEDITPCMSListLoadData(); 
};
#endif
