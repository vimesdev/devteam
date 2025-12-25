#ifndef HMSPHACDOLINESETTINGDLG_H
#define HMSPHACDOLINESETTINGDLG_H

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
#include "HMSPhacDoDetailView.h"
class CHMSPhacDoLineSettingDlg : public CGuiDialog{
protected:
public:
	CGuiButton		m_wndLoad;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiGroupBox	m_wndGrpPhacDo;
	CGuiButton		m_wndSave;
	CGuiLabel		m_wndPhacDoLabel;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiLabel		m_wndNgayPhacDoLabel;
	CGuiNumberCtrl	m_wndNgayPhacDo;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiLabel		m_wndHuongXuTriLabel;
	CGuiTextCtrl	m_wndHuongXuTri;
	CGuiLabel		m_wndCheDoAnLabel;
	CGuiComboBox	m_wndCheDoAn;
	CGuiLabel		m_wndCheDoChamSocLabel;
	CGuiTextCtrl	m_wndCheDoChamSoc;
	CGuiButton		m_wndAddFee;
	CGuiButton		m_wndAddGeneric;
	CGuiListCtrl	m_wndList;
	CGuiTabCtrl	m_wndTab;
	CString	m_szSearch;
	long	m_nNgayPhacDo;
	CString	m_szNote;
	CString	m_szHuongXuTri;
	CString	m_szCheDoAnKey;
	CString	m_szCheDoChamSoc;
	CHMSPhacDoDetailView m_wndFeeView;
	CHMSPhacDoDetailView m_wndDrugView;

	CDbfMap			m_hms_phacdo_treatment_day;

	long	m_nPhacDoID;
	long	m_nPhacDoLineID;
	void			OnLoadSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	//void			OnNgayPhacDoChange(); 
	//void			OnNgayPhacDoSetfocus(); 
	//void			OnNgayPhacDoKillfocus(); 
	int			OnNgayPhacDoCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	//void			OnHuongXuTriChange(); 
	//void			OnHuongXuTriSetfocus(); 
	//void			OnHuongXuTriKillfocus(); 
	int			OnHuongXuTriCheckValue(); 
	void			OnCheDoAnSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCheDoAnSelendok(); 
	//void			OnCheDoAnSetfocus(); 
	//void			OnCheDoAnKillfocus(); 
	long			OnCheDoAnLoadData(); 
	//void			OnCheDoAnAddNew(); 
	//void			OnCheDoChamSocChange(); 
	//void			OnCheDoChamSocSetfocus(); 
	//void			OnCheDoChamSocKillfocus(); 
	int			OnCheDoChamSocCheckValue(); 
	void			OnAddFeeSelect(); 
	void			OnAddGenericSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	CHMSPhacDoLineSettingDlg(CWnd *pParent);
	~CHMSPhacDoLineSettingDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPhacDoLineSettingDlg(); 
	int OnEditHMSPhacDoLineSettingDlg(); 
	int OnDeleteHMSPhacDoLineSettingDlg(); 
	int OnSaveHMSPhacDoLineSettingDlg(); 
	int OnCancelHMSPhacDoLineSettingDlg(); 
	int OnHMSPhacDoLineSettingDlgListLoadData(); 
};
#endif
