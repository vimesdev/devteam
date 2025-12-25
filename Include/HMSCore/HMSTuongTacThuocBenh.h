#ifndef HMSTUONGTACTHUOCBENH_H
#define HMSTUONGTACTHUOCBENH_H

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
class AFX_EXT_CLASS CHMSTuongTacThuocBenh : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndICDCCD;
	CGuiGroupBox	m_wndgrpkhaosat;
	CGuiGroupBox	m_wndgrpXuTri;
	CGuiLabel		m_wndClassNameLabel;
	CGuiGroupBox	m_wndgrpThongtin;
	CGuiTextCtrl	m_wndClassName;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiTextCtrl	m_wndDrugName;
	CGuiLabel		m_wndICDLabel;
	CGuiTextCtrl	m_wndICD10;
	CGuiListCtrl	m_wndListTestResult;
	CGuiListCtrl	m_wndListICD;
	CGuiListCtrl	m_wndListQuery;
	CGuiLabel		m_wndlydochidinh;
	CGuiTextCtrl	m_wndReasion;
	CGuiButton		m_wndChiDinh;
	CGuiButton		m_wndKoChiDinh;
	CString	m_szClassName;
	CString	m_szDrugName;
	CString	m_szICD10;
	CString	m_szReasion;
	CString m_szICD10CCD;
	CString m_szICD10CCDNoNhay;
	long m_nProductID;
	long m_nDocumentNo;
	CString m_szClassIDs;

	//void			OnClassNameChange(); 
	//void			OnClassNameSetfocus(); 
	//void			OnClassNameKillfocus(); 
	int			OnClassNameCheckValue(); 
	//void			OnDrugNameChange(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	int			OnDrugNameCheckValue(); 
	//void			OnICD10Change(); 
	//void			OnICD10Setfocus(); 
	//void			OnICD10Killfocus(); 
	int			OnICD10CheckValue(); 
	long			OnListTestResultLoadData(); 
	void			OnListTestResultSelectChange(int nOldItem, int nNewItem); 
	void			OnListTestResultDblClick(); 
	int			OnListTestResultDeleteItem(); 
	long			OnListICDLoadData(); 
	void			OnListICDSelectChange(int nOldItem, int nNewItem); 
	void			OnListICDDblClick(); 
	int			OnListICDDeleteItem(); 
	long			OnListQueryLoadData(); 
	void			OnListQuerySelectChange(int nOldItem, int nNewItem); 
	void			OnListQueryDblClick(); 
	int			OnListQueryDeleteItem(); 
	//void			OnReasionChange(); 
	//void			OnReasionSetfocus(); 
	//void			OnReasionKillfocus(); 
	int			OnReasionCheckValue(); 
	void			OnChiDinhSelect(); 
	void			OnKoChiDinhSelect(); 
	CHMSTuongTacThuocBenh(CWnd *pParent);
	~CHMSTuongTacThuocBenh();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTuongTacThuocBenh(); 
	int OnEditHMSTuongTacThuocBenh(); 
	int OnDeleteHMSTuongTacThuocBenh(); 
	int OnSaveHMSTuongTacThuocBenh(); 
	int OnCancelHMSTuongTacThuocBenh(); 
	int OnHMSTuongTacThuocBenhListLoadData(); 
	void OnSaveLog(CString szSelect);
	void OnCancel();
};
#endif
