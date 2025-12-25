#ifndef IVFLABTOPLINEPOPUP_H
#define IVFLABTOPLINEPOPUP_H

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
#include "GuiPopup.h"
#include "DbField.h"
class CIVFLabTopLinePopup : public CGuiPopup{
protected:
public:
	CWnd*	m_pWndOrder;
	long	m_nPhieuTruId; //so orderid(hpc_orderid)
	long	m_nDocumentNo;	
	CString m_szIDLocation;
	CString m_szIDThung;
	CString	m_szIDGia;
	CString	m_szStorageTopId;

	CGuiLabel		m_wndCassetteLabel;
	CGuiComboBox	m_wndCassette;
	CGuiLabel		m_wndNhanCassetteLabel;
	CGuiComboBox	m_wndNhanCassette;
	CGuiLabel		m_wndMaucassetteLabel;
	CGuiComboBox	m_wndMaucassette;
	CGuiLabel		m_wndTopLabel;
	CGuiComboBox	m_wndTop;
	CGuiLabel		m_wndMautopLabel;
	CGuiComboBox	m_wndMautop;
	CGuiLabel		m_wndSophoiLabel;
	CGuiNumberCtrl	m_wndSophoi;
	CGuiLabel		m_wndLoaiLabel;
	CGuiComboBox	m_wndLoai;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szCassetteKey;
	CString m_szMaucasetteKey;
	CString m_szNhanCassetteKey;
	CString	m_szTopKey;
	CString	m_szMautopKey;
	long	m_nSophoi;
	CString	m_szLoaiKey;
	CDbfMap	m_ivf_storage_top_lineTbl;
	long			OnNhanCassetteLoadData();
	void			OnCassetteSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCassetteSelendok(); 
	//void			OnCassetteSetfocus(); 
	//void			OnCassetteKillfocus(); 
	long			OnCassetteLoadData(); 
	//void			OnCassetteAddNew(); 
	long			OnMaucasetteLoadData();
	void			OnTopSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTopSelendok(); 
	//void			OnTopSetfocus(); 
	//void			OnTopKillfocus(); 
	long			OnTopLoadData(); 
	//void			OnTopAddNew(); 
	void			OnMautopSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMautopSelendok(); 
	//void			OnMautopSetfocus(); 
	//void			OnMautopKillfocus(); 
	long			OnMautopLoadData(); 
	//void			OnMautopAddNew(); 
	//void			OnSophoiChange(); 
	//void			OnSophoiSetfocus(); 
	//void			OnSophoiKillfocus(); 
	int			OnSophoiCheckValue(); 
	void			OnLoaiSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLoaiSelendok(); 
	//void			OnLoaiSetfocus(); 
	//void			OnLoaiKillfocus(); 
	long			OnLoaiLoadData(); 
	//void			OnLoaiAddNew(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CIVFLabTopLinePopup(CWnd *pParent, int nMode);
	~CIVFLabTopLinePopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuTruPopup(); 
	int OnEditIVFLabPhieuTruPopup(); 
	int OnDeleteIVFLabPhieuTruPopup(); 
	int OnSaveIVFLabPhieuTruPopup(); 
	int OnCancelIVFLabPhieuTruPopup(); 
	int OnIVFLabPhieuTruPopupListLoadData(); 
};
#endif
