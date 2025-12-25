#ifndef HMSHOSPITALS_H
#define HMSHOSPITALS_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CHMSHospitals : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndFilter;
	CGuiLabel		m_wndProvillSearchLabel;
	CGuiComboBox	m_wndProvillSearch;
	CGuiLabel		m_wndDistSearchLabel;
	CGuiComboBox	m_wndDistSearch;
	CGuiLabel		m_wndHostpitalNameLabel;
	CGuiComboBox	m_wndHostpitalName;
	CGuiGroupBox	m_wndHospitalList;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndProvillLabel;
	CGuiComboBox	m_wndProvill;
	CGuiLabel		m_wndDistLabel;
	CGuiTextCtrl	m_wndDist;
	CGuiLabel		m_wndIDLabel;
	CGuiTextCtrl	m_wndID;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szProvillSearchKey;
	CString	m_szDistSearchKey;
	CString	m_szHostpitalNameKey;
	CString	m_szTypeKey;
	CString	m_szProvillKey;
	CString	m_szDist;
	CString	m_szID;
	CString	m_szName;
	CDbfMap	m_hms_hospitalTbl;
	void			OnProvillSearchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvillSearchSelendok(); 
	//void			OnProvillSearchSetfocus(); 
	//void			OnProvillSearchKillfocus(); 
	long			OnProvillSearchLoadData(); 
	void			OnProvillSearchAddNew(); 
	void			OnDistSearchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistSearchSelendok(); 
	//void			OnDistSearchSetfocus(); 
	//void			OnDistSearchKillfocus(); 
	long			OnDistSearchLoadData(); 
	void			OnDistSearchAddNew(); 
	void			OnHostpitalNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHostpitalNameSelendok(); 
	//void			OnHostpitalNameSetfocus(); 
	//void			OnHostpitalNameKillfocus(); 
	long			OnHostpitalNameLoadData(); 
	void			OnHostpitalNameAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	void			OnTypeAddNew(); 
	void			OnProvillSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvillSelendok(); 
	//void			OnProvillSetfocus(); 
	//void			OnProvillKillfocus(); 
	long			OnProvillLoadData(); 
	void			OnProvillAddNew(); 
	//void			OnDistChange(); 
	//void			OnDistSetfocus(); 
	//void			OnDistKillfocus(); 
	int			OnDistCheckValue(); 
	//void			OnIDChange(); 
	//void			OnIDSetfocus(); 
	//void			OnIDKillfocus(); 
	int			OnIDCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSHospitals();
	~CHMSHospitals();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSHospitals(); 
	int OnEditHMSHospitals(); 
	int OnDeleteHMSHospitals(); 
	int OnSaveHMSHospitals(); 
	int OnCancelHMSHospitals(); 
	int OnHMSHospitalsListLoadData(); 
};
#endif
