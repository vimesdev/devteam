#ifndef SRMBIENBANDANHGIACAPCOSO_H
#define SRMBIENBANDANHGIACAPCOSO_H

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
class CSRMBienbandanhgiacapcoso : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndFilterGroup;
	CGuiGroupBox	m_wndAdditionInfo;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndTopicIDLabel;
	CGuiTextCtrl	m_wndTopicID;
	CGuiLabel		m_wndTopicNameLabel;
	CGuiTextCtrl	m_wndTopicName;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndSessionTimeLabel;
	CGuiLabel		m_wndFromDateSTLabel;
	CGuiDateCtrl	m_wndFromDateST;
	CGuiLabel		m_wndToDateSTLabel;
	CGuiDateCtrl	m_wndToDateST;
	CGuiLabel		m_wndMemberLabel;
	CGuiTextCtrl	m_wndMember;
	CGuiLabel		m_wndAbsentLabel;
	CGuiNumberCtrl	m_wndAbsent;
	CGuiLabel		m_wndMemberListLabel;
	CGuiTextCtrl	m_wndMemberList;
	CGuiLabel		m_wndBoKHCNLabel;
	CGuiTextCtrl	m_wndBoKHCN;
	CGuiLabel		m_wndCTKHCNLabel;
	CGuiTextCtrl	m_wndCTKHCN;
	CGuiLabel		m_wndVanPhongChuongTrinhLabel;
	CGuiTextCtrl	m_wndVanPhongChuongTrinh;
	CGuiLabel		m_wndCoquanchuquanLabel;
	CGuiTextCtrl	m_wndCoquanchuquan;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szTopicID;
	CString	m_szTopicName;
	CString	m_szFromDateST;
	CString	m_szToDateST;
	CString	m_szMember;
	long	m_nAbsent;
	CString	m_szMemberList;
	CString	m_szBoKHCN;
	CString	m_szCTKHCN;
	CString	m_szVanPhongChuongTrinh;
	CString	m_szCoquanchuquan;
	CString m_szTID;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnTopicIDChange(); 
	//void			OnTopicIDSetfocus(); 
	//void			OnTopicIDKillfocus(); 
	int			OnTopicIDCheckValue(); 
	//void			OnTopicNameChange(); 
	//void			OnTopicNameSetfocus(); 
	void			OnTopicNameKillfocus(); 
	int			OnTopicNameCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnFromDateSTChange(); 
	//void			OnFromDateSTSetfocus(); 
	//void			OnFromDateSTKillfocus(); 
	int			OnFromDateSTCheckValue(); 
	//void			OnToDateSTChange(); 
	//void			OnToDateSTSetfocus(); 
	//void			OnToDateSTKillfocus(); 
	int			OnToDateSTCheckValue(); 
	//void			OnMemberChange(); 
	//void			OnMemberSetfocus(); 
	//void			OnMemberKillfocus(); 
	int			OnMemberCheckValue(); 
	//void			OnAbsentChange(); 
	//void			OnAbsentSetfocus(); 
	//void			OnAbsentKillfocus(); 
	int			OnAbsentCheckValue(); 
	//void			OnMemberListChange(); 
	//void			OnMemberListSetfocus(); 
	//void			OnMemberListKillfocus(); 
	int			OnMemberListCheckValue(); 
	//void			OnBoKHCNChange(); 
	//void			OnBoKHCNSetfocus(); 
	//void			OnBoKHCNKillfocus(); 
	int			OnBoKHCNCheckValue(); 
	//void			OnCTKHCNChange(); 
	//void			OnCTKHCNSetfocus(); 
	//void			OnCTKHCNKillfocus(); 
	int			OnCTKHCNCheckValue(); 
	//void			OnVanPhongChuongTrinhChange(); 
	//void			OnVanPhongChuongTrinhSetfocus(); 
	//void			OnVanPhongChuongTrinhKillfocus(); 
	int			OnVanPhongChuongTrinhCheckValue(); 
	//void			OnCoquanchuquanChange(); 
	//void			OnCoquanchuquanSetfocus(); 
	//void			OnCoquanchuquanKillfocus(); 
	int			OnCoquanchuquanCheckValue(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnPrint2();
	void			OnPrint3();
	CSRMBienbandanhgiacapcoso(CWnd *pParent);
	~CSRMBienbandanhgiacapcoso();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSRMBienbandanhgiacapcoso(); 
	int OnEditSRMBienbandanhgiacapcoso(); 
	int OnDeleteSRMBienbandanhgiacapcoso(); 
	int OnSaveSRMBienbandanhgiacapcoso(); 
	int OnCancelSRMBienbandanhgiacapcoso(); 
	int OnSRMBienbandanhgiacapcosoListLoadData(); 
};
#endif
