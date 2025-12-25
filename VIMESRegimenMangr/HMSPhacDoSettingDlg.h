#ifndef HMSPHACDOSETTINGDLG_H
#define HMSPHACDOSETTINGDLG_H

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
#include "HMSPhacDoDetailView.h"
#include "TreeCtrlEx.h"
class  CHMSPhacDoSettingDlg : public CGuiView{
protected:
	HTREEITEM		m_hItem;
public:
	CGuiGroupBox	m_wndGrpPhacDo;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndLoad;
	CGuiButton		m_wndAdd;
	CGuiLabel		m_wndPhacDoLabel;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndTenPhacDoLabel;
	CGuiTextCtrl	m_wndTenPhacDo;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiTabCtrl	m_wndTab;
	CGuiButton		m_wndAddICD10;
	CGuiButton		m_wndAddFee;
	CGuiButton		m_wndAddGeneric;
	CGuiButton		m_wndAddATCcode;
	CGuiButton		m_wndHiveActive;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndAddTreatMentDay;
	CGuiLabel		m_wndDinhNghiaLabel;
	CGuiTextCtrl	m_wndDinhNghiaPhacDo;
	CGuiButton		m_wndAttactFile;

	CTreeCtrlEx		m_wndGroupTree;

	CString	m_szSearch;
	CString	m_szTenPhacDo;
	CString	m_szNote;
	CString	m_szDinhNghiaPhacDo;
	long m_nID;
	long m_nContractId;
	
	CWnd*			m_wndOrder;
	CHMSPhacDoDetailView m_wndICDView;
	CHMSPhacDoDetailView m_wndFeeView;
	CHMSPhacDoDetailView m_wndDrugView;
	CHMSPhacDoDetailView m_wndAttactFileView;
	void		OnGroupTreeSelChange(HTREEITEM, HTREEITEM);

	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnLoadSelect(); 
	void			OnAddSelect(); 
	long			OnListLoadData(UINT nFlag=TVE_EXPAND); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnTenPhacDoChange(); 
	//void			OnTenPhacDoSetfocus(); 
	//void			OnTenPhacDoKillfocus(); 
	int			OnTenPhacDoCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	void			OnAddICD10Select(); 
	void			OnAddFeeSelect(); 
	void			OnAddGenericSelect(); 
	void			OnAddATCcodeSelect(); 
	void			OnHiveActiveSelect(); 
	void			OnEditSelect(); 
	void			OnAddTreatMentDaySelect(); 
	//void			OnDinhNghiaPhacDoChange(); 
	//void			OnDinhNghiaPhacDoSetfocus(); 
	//void			OnDinhNghiaPhacDoKillfocus(); 
	int			OnDinhNghiaPhacDoCheckValue(); 
	void			OnAttactFileSelect(); 
	CHMSPhacDoSettingDlg();
	~CHMSPhacDoSettingDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPhacDoSettingDlg(); 
	int OnEditHMSPhacDoSettingDlg(); 
	int OnDeleteHMSPhacDoSettingDlg(); 
	int OnSaveHMSPhacDoSettingDlg(); 
	int OnCancelHMSPhacDoSettingDlg(); 
	int OnHMSPhacDoSettingDlgListLoadData(); 
};
#endif
