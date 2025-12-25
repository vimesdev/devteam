#ifndef HMSGUIDEEXAMCONTRACT_H
#define HMSGUIDEEXAMCONTRACT_H

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
class CHMSGuideExamContract : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndNoiXetNghiemLabel;
	CGuiTextCtrl	m_wndNoiXetNghiem;
	CGuiLabel		m_wndNoiDungLabel;
	CGuiLabel		m_wndBuongLabel;
	CGuiLabel		m_wndGhiChuLabel;
	CGuiLabel		m_wndKhamLamSangLabel;
	CGuiTextCtrl	m_wndKhamLamSangPhong;
	CGuiTextCtrl	m_wndKhamLamSangGhiChu;
	CGuiLabel		m_wndDienTimLabel;
	CGuiTextCtrl	m_wndDienTimPhong;
	CGuiTextCtrl	m_wndDienTimGhiChu;
	CGuiLabel		m_wndTaiMuiHongLabel;
	CGuiTextCtrl	m_wndTaiMuiHongPhong;
	CGuiTextCtrl	m_wndTaiMuiHongGhiChu;
	CGuiLabel		m_wndMatLabel;
	CGuiTextCtrl	m_wndMatPhong;
	CGuiTextCtrl	m_wndMatPhongGhiChu;
	CGuiLabel		m_wndSanLabel;
	CGuiTextCtrl	m_wndSanPhong;
	CGuiTextCtrl	m_wndSanGhiChu;
	CGuiLabel		m_wndSieuAmLabel;
	CGuiTextCtrl	m_wndSieuAmPhong;
	CGuiTextCtrl	m_wndSieuAmGhiChu;
	CGuiLabel		m_wndXQuangLabel;
	CGuiTextCtrl	m_wndXQuangPhong;
	CGuiTextCtrl	m_wndXQuangGhiChu;
	CGuiLabel		m_wndXNKhacLabel;
	CGuiTextCtrl	m_wndXNKhacPhong;
	CGuiTextCtrl	m_wndXNKhacGhiChu;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CString	m_szNoiXetNghiem;
	CString	m_szKhamLamSangPhong;
	CString	m_szKhamLamSangGhiChu;
	CString	m_szDienTimPhong;
	CString	m_szDienTimGhiChu;
	CString	m_szTaiMuiHongPhong;
	CString	m_szTaiMuiHongGhiChu;
	CString	m_szMatPhong;
	CString	m_szMatPhongGhiChu;
	CString	m_szSanPhong;
	CString	m_szSanGhiChu;
	CString	m_szSieuAmPhong;
	CString	m_szSieuAmGhiChu;
	CString	m_szXQuangPhong;
	CString	m_szXQuangGhiChu;
	CString	m_szXNKhacPhong;
	CString	m_szXNKhacGhiChu;
	long     m_nContractId;
	//void			OnNoiXetNghiemChange(); 
	//void			OnNoiXetNghiemSetfocus(); 
	//void			OnNoiXetNghiemKillfocus(); 
	int			OnNoiXetNghiemCheckValue(); 
	//void			OnKhamLamSangPhongChange(); 
	//void			OnKhamLamSangPhongSetfocus(); 
	//void			OnKhamLamSangPhongKillfocus(); 
	int			OnKhamLamSangPhongCheckValue(); 
	//void			OnKhamLamSangGhiChuChange(); 
	//void			OnKhamLamSangGhiChuSetfocus(); 
	//void			OnKhamLamSangGhiChuKillfocus(); 
	int			OnKhamLamSangGhiChuCheckValue(); 
	//void			OnDienTimPhongChange(); 
	//void			OnDienTimPhongSetfocus(); 
	//void			OnDienTimPhongKillfocus(); 
	int			OnDienTimPhongCheckValue(); 
	//void			OnDienTimGhiChuChange(); 
	//void			OnDienTimGhiChuSetfocus(); 
	//void			OnDienTimGhiChuKillfocus(); 
	int			OnDienTimGhiChuCheckValue(); 
	//void			OnTaiMuiHongPhongChange(); 
	//void			OnTaiMuiHongPhongSetfocus(); 
	//void			OnTaiMuiHongPhongKillfocus(); 
	int			OnTaiMuiHongPhongCheckValue(); 
	//void			OnTaiMuiHongGhiChuChange(); 
	//void			OnTaiMuiHongGhiChuSetfocus(); 
	//void			OnTaiMuiHongGhiChuKillfocus(); 
	int			OnTaiMuiHongGhiChuCheckValue(); 
	//void			OnMatPhongChange(); 
	//void			OnMatPhongSetfocus(); 
	//void			OnMatPhongKillfocus(); 
	int			OnMatPhongCheckValue(); 
	//void			OnMatPhongGhiChuChange(); 
	//void			OnMatPhongGhiChuSetfocus(); 
	//void			OnMatPhongGhiChuKillfocus(); 
	int			OnMatPhongGhiChuCheckValue(); 
	//void			OnSanPhongChange(); 
	//void			OnSanPhongSetfocus(); 
	//void			OnSanPhongKillfocus(); 
	int			OnSanPhongCheckValue(); 
	//void			OnSanGhiChuChange(); 
	//void			OnSanGhiChuSetfocus(); 
	//void			OnSanGhiChuKillfocus(); 
	int			OnSanGhiChuCheckValue(); 
	//void			OnSieuAmPhongChange(); 
	//void			OnSieuAmPhongSetfocus(); 
	//void			OnSieuAmPhongKillfocus(); 
	int			OnSieuAmPhongCheckValue(); 
	//void			OnSieuAmGhiChuChange(); 
	//void			OnSieuAmGhiChuSetfocus(); 
	//void			OnSieuAmGhiChuKillfocus(); 
	int			OnSieuAmGhiChuCheckValue(); 
	//void			OnXQuangPhongChange(); 
	//void			OnXQuangPhongSetfocus(); 
	//void			OnXQuangPhongKillfocus(); 
	int			OnXQuangPhongCheckValue(); 
	//void			OnXQuangGhiChuChange(); 
	//void			OnXQuangGhiChuSetfocus(); 
	//void			OnXQuangGhiChuKillfocus(); 
	int			OnXQuangGhiChuCheckValue(); 
	//void			OnXNKhacPhongChange(); 
	//void			OnXNKhacPhongSetfocus(); 
	//void			OnXNKhacPhongKillfocus(); 
	int			OnXNKhacPhongCheckValue(); 
	//void			OnXNKhacGhiChuChange(); 
	//void			OnXNKhacGhiChuSetfocus(); 
	//void			OnXNKhacGhiChuKillfocus(); 
	int			OnXNKhacGhiChuCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CHMSGuideExamContract(CWnd *pParent);
	~CHMSGuideExamContract();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSGuideExamContract(); 
	int OnEditHMSGuideExamContract(); 
	int OnDeleteHMSGuideExamContract(); 
	int OnSaveHMSGuideExamContract(); 
	int OnCancelHMSGuideExamContract(); 
	int OnHMSGuideExamContractListLoadData(); 
};
#endif
