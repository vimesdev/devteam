#ifndef HMSBBTHONGQUAMODLG_H
#define HMSBBTHONGQUAMODLG_H

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
class AFX_EXT_CLASS CHMSBBThongQuaMoDlg : public CGuiDialog{
protected:
	CDbfMap	m_tblThongQuaMo;
	long	m_nOrderID;
	void	OnPrint(CString szFileName, CRecord* pRs);
public:
	CGuiLabel		m_wndChu_tri_tqmLabel;
	CGuiComboBox	m_wndChu_tri_tqm;
	CGuiLabel		m_wndThu_kyLabel;
	CGuiComboBox	m_wndThu_ky;
	CGuiLabel		m_wndThanh_vien_tham_giaLabel;
	CGuiComboBox	m_wndThanh_vien_tham_gia;
	CGuiLabel		m_wndThong_qua_mo_lucLabel;
	CGuiDateTimeCtrl	m_wndThong_qua_mo_luc;
	CGuiTextCtrl	m_wndDs_thanh_vien;
	CGuiLabel		m_wndTom_tatLabel;
	CGuiTextCtrl	m_wndTom_tat;
	CGuiLabel		m_wndY_kien_thao_luanLabel;
	CGuiTextCtrl	m_wndY_kien_thao_luan;
	CGuiLabel		m_wndKet_luanLabel;
	CGuiTextCtrl	m_wndKet_luan;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndPrint;
	CString	m_szChu_tri_tqmKey;
	CString	m_szThu_kyKey;
	CString	m_szThanh_vien_tham_giaKey;
	CString	m_szThong_qua_mo_luc;
	CString	m_szDs_thanh_vien;
	CString	m_szTom_tat;
	CString	m_szY_kien_thao_luan;
	CString	m_szKet_luan;
	void			OnChu_tri_tqmSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnChu_tri_tqmSelendok(); 
	//void			OnChu_tri_tqmSetfocus(); 
	//void			OnChu_tri_tqmKillfocus(); 
	long			OnChu_tri_tqmLoadData(); 
	//void			OnChu_tri_tqmAddNew(); 
	void			OnThu_kySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThu_kySelendok(); 
	//void			OnThu_kySetfocus(); 
	//void			OnThu_kyKillfocus(); 
	long			OnThu_kyLoadData(); 
	//void			OnThu_kyAddNew(); 
	void			OnThanh_vien_tham_giaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThanh_vien_tham_giaSelendok(); 
	//void			OnThanh_vien_tham_giaSetfocus(); 
	//void			OnThanh_vien_tham_giaKillfocus(); 
	long			OnThanh_vien_tham_giaLoadData(); 
	//void			OnThanh_vien_tham_giaAddNew(); 
	//void			OnThong_qua_mo_lucChange(); 
	//void			OnThong_qua_mo_lucSetfocus(); 
	//void			OnThong_qua_mo_lucKillfocus(); 
	int			OnThong_qua_mo_lucCheckValue(); 
	//void			OnDs_thanh_vienChange(); 
	//void			OnDs_thanh_vienSetfocus(); 
	//void			OnDs_thanh_vienKillfocus(); 
	int			OnDs_thanh_vienCheckValue(); 
	//void			OnTom_tatChange(); 
	//void			OnTom_tatSetfocus(); 
	//void			OnTom_tatKillfocus(); 
	int			OnTom_tatCheckValue(); 
	//void			OnY_kien_thao_luanChange(); 
	//void			OnY_kien_thao_luanSetfocus(); 
	//void			OnY_kien_thao_luanKillfocus(); 
	int			OnY_kien_thao_luanCheckValue(); 
	//void			OnKet_luanChange(); 
	//void			OnKet_luanSetfocus(); 
	//void			OnKet_luanKillfocus(); 
	int			OnKet_luanCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	CHMSBBThongQuaMoDlg(CWnd *pParent, long nOrderID);
	~CHMSBBThongQuaMoDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSBBThongQuaMoDlg(); 
	int OnEditHMSBBThongQuaMoDlg(); 
	int OnDeleteHMSBBThongQuaMoDlg(); 
	int OnSaveHMSBBThongQuaMoDlg(); 
	int OnCancelHMSBBThongQuaMoDlg(); 
	int OnHMSBBThongQuaMoDlgListLoadData(); 
};
#endif
