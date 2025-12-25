#ifndef IVFSTORAGEVIEW_V2_H
#define IVFSTORAGEVIEW_V2_H

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
class CIVFStorageView_v2 : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndStorageInformation;
	CGuiLabel		m_wndThungLabel;
	CGuiComboBox	m_wndThung;
	CGuiLabel		m_wndGiaLabel;
	CGuiComboBox	m_wndGia;
	CGuiLabel		m_wndCassetteLabel;
	CGuiComboBox	m_wndCassette;
	CGuiLabel		m_wndSearchLabel;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndFind;
	CString	m_szThungKey;
	CString	m_szGiaKey;
	CString	m_szCassetteKey;
	CString	m_szSearch;
	void			OnThungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThungSelendok(); 
	//void			OnThungSetfocus(); 
	//void			OnThungKillfocus(); 
	long			OnThungLoadData(); 
	//void			OnThungAddNew(); 
	void			OnGiaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGiaSelendok(); 
	//void			OnGiaSetfocus(); 
	//void			OnGiaKillfocus(); 
	long			OnGiaLoadData(); 
	//void			OnGiaAddNew(); 
	void			OnCassetteSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCassetteSelendok(); 
	//void			OnCassetteSetfocus(); 
	//void			OnCassetteKillfocus(); 
	long			OnCassetteLoadData(); 
	//void			OnCassetteAddNew(); 
	//void			OnSearchChange(); 
	//void			OnSearchSetfocus(); 
	//void			OnSearchKillfocus(); 
	int			OnSearchCheckValue(); 
	void			OnFindSelect(); 
	CIVFStorageView_v2();
	~CIVFStorageView_v2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFStorageView_v2(); 
	int OnEditIVFStorageView_v2(); 
	int OnDeleteIVFStorageView_v2(); 
	int OnSaveIVFStorageView_v2(); 
	int OnCancelIVFStorageView_v2(); 
	int OnIVFStorageView_v2ListLoadData(); 
};
#endif
