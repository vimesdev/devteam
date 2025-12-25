#ifndef PACSBOIDUONGPTTTC8C_H
#define PACSBOIDUONGPTTTC8C_H

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
class CPACSBOIDUONGPTTTC8C : public CGuiView
{

protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndGroupLabel;
	CGuiListCtrl	m_wndGroup;
	CGuiLabel		m_wndRoomLabel;
	CGuiListCtrl	m_wndRoom;
	CGuiLabel		m_wndItemLabel;
	CGuiTextCtrl	m_wndSerchItem;
	CGuiLabel		m_wndMethodNameLabel;
	CGuiListCtrl	m_wndListItem;
	CGuiButton		m_wndExport;
	CGuiRadioButton	m_wndInsurance;
	CGuiRadioButton	m_wndService;
	CGuiRadioButton	m_wndPolicy;
	CGuiCheckBox	m_wndPerformed;
	CGuiCheckBox	m_wndTYC;
	CString	m_szFromDate;
	CString	m_szToDate;
	int	m_nInsurance;
	int	m_nService;
	int	m_nPolicy;
	CString	m_szSerchItem;
	BOOL	m_bPerformed;
	BOOL	m_bTYC;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	long			OnGroupLoadData(); 
	void			OnGroupSelectChange(int nOldItem, int nNewItem); 
	void			OnGroupDblClick(); 
	int			OnGroupDeleteItem();
	long			OnRoomLoadData(); 
	void			OnRoomSelectChange(int nOldItem, int nNewItem); 
	void			OnRoomDblClick(); 
	int			OnRoomDeleteItem(); 
	long			OnListItemLoadData(); 
	void			OnListItemSelectChange(int nOldItem, int nNewItem); 
	void			OnListItemDblClick(); 
	int			OnListItemDeleteItem(); 
	void			OnExportSelect(); 
	void			OnInsuranceSelect(); 
	void			OnServiceSelect(); 
	void			OnPolicySelect(); 
	void			OnPerformedSelect();
	void			OnTYCSelect();
	int				OnListCheckAllC8C();
	int				OnListCheckAllTYC();
	//void			OnSerchItemChange(); 
	//void			OnSerchItemSetfocus(); 
	//void			OnSerchItemKillfocus(); 
	int			OnSerchItemCheckValue(); 
	CPACSBOIDUONGPTTTC8C(CWnd *pParent);
	~CPACSBOIDUONGPTTTC8C();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPACSBOIDUONGPTTT(); 
	int OnEditPACSBOIDUONGPTTT(); 
	int OnDeletePACSBOIDUONGPTTT(); 
	int OnSavePACSBOIDUONGPTTT(); 
	int OnCancelPACSBOIDUONGPTTT(); 
	int OnPACSBOIDUONGPTTTListLoadData();
	int OnListUnCheckAll();
	int OnListCheckAll();
	int OnListItemCheckAll();
	int OnListItemUnCheckAll();
	CString GetQueryString();
};
#endif
