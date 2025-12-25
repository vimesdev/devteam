#ifndef IVFLABPHIEUTHUCHIENIUIDLG_H
#define IVFLABPHIEUTHUCHIENIUIDLG_H

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
class CIVFLabPhieuThucHienIUIDlg : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndSoPhieuLabel;
	CGuiTextCtrl	m_wndSoPhieu;
	CGuiLabel		m_wndHoSoLabel;
	CGuiNumberCtrl	m_wndHoSo;
	CGuiLabel		m_wndHoVaTenLabel;
	CGuiGroupBox	m_wndTruocLocRua;
	CGuiGroupBox	m_wndSauLocRua;
	CGuiTextCtrl	m_wndHoVaTen;
	CGuiLabel		m_wndLoaiPhieuLabel;
	CGuiComboBox	m_wndLoaiPhieu;
	CGuiLabel		m_wndTrangThaiLabel;
	CGuiTextCtrl	m_wndTrangThai;
	CGuiLabel		m_wndNguoiTaoLabel;
	CGuiComboBox	m_wndNguoiTao;
	CGuiLabel		m_wndNgayTaoLabel;
	CGuiDateCtrl	m_wndNgayTao;
	CGuiLabel		m_wndNguoiDuyetLabel;
	CGuiComboBox	m_wndNguoiDuyet;
	CGuiLabel		m_wndNgayDuyetLabel;
	CGuiDateCtrl	m_wndNgayDuyet;
	CGuiLabel		m_wndPhieuLocRuaLabel;
	CGuiComboBox	m_wndPhieuLocRua;
	CGuiLabel		m_wndTheTichLabel;
	CGuiNumberCtrl	m_wndTheTich;
	CGuiLabel		m_wndMl;
	CGuiLabel		m_wndTheTich2Label;
	CGuiNumberCtrl	m_wndTheTich2;
	CGuiLabel		m_wndU4;
	CGuiLabel		m_wndMatDoLabel;
	CGuiNumberCtrl	m_wndMatDo;
	CGuiLabel		m_wndMatDo2Label;
	CGuiNumberCtrl	m_wndMatDo2;
	CGuiLabel		m_wndU5;
	CGuiLabel		m_wndU2;
	CGuiLabel		m_wndDiDongLabel;
	CGuiNumberCtrl	m_wndDiDong;
	CGuiLabel		m_wndU3;
	CGuiLabel		m_wndDiDong2Label;
	CGuiNumberCtrl	m_wndDiDong2;
	CGuiLabel		m_wndU6;
	CGuiLabel		m_wndPhieuTTLabel;
	CGuiComboBox	m_wndPhieuTT;
	CGuiLabel		m_wndTuTheTuCungLabel;
	CGuiComboBox	m_wndTuTheTuCung;
	CGuiLabel		m_wndDoKhoLabel;
	CGuiComboBox	m_wndDoKho;
	CGuiLabel		m_wndKepCoTuCungLabel;
	CGuiComboBox	m_wndKepCoTuCung;
	CGuiLabel		m_wndCatheterLabel;
	CGuiComboBox	m_wndCatheter;
	CGuiLabel		m_wndDonThuocLabel;
	CGuiComboBox	m_wndDonThuoc;
	CGuiTextCtrl	m_wndThuocsauTT;
	CGuiButton		m_wndApproval;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szSoPhieu;
	long	m_nHoSo;
	CString	m_szHoVaTen;
	CString	m_szLoaiPhieuKey;
	CString	m_szTrangThai;
	CString	m_szNguoiTaoKey;
	CString	m_szNgayTao;
	CString	m_szNguoiDuyetKey;
	CString	m_szNgayDuyet;
	CString	m_szPhieuLocRuaKey;
	long	m_nTheTich;
	long	m_nTheTich2;
	long	m_nMatDo;
	long	m_nMatDo2;
	long	m_nDiDong;
	long	m_nDiDong2;
	CString	m_szPhieuTTKey;
	CString	m_szTuTheTuCungKey;
	CString	m_szDoKhoKey;
	CString	m_szKepCoTuCungKey;
	CString	m_szCatheterKey;
	CString	m_szDonThuocKey;
	CString	m_szThuocsauTT;
	//void			OnSoPhieuChange(); 
	//void			OnSoPhieuSetfocus(); 
	//void			OnSoPhieuKillfocus(); 
	int			OnSoPhieuCheckValue(); 
	//void			OnHoSoChange(); 
	//void			OnHoSoSetfocus(); 
	//void			OnHoSoKillfocus(); 
	int			OnHoSoCheckValue(); 
	//void			OnHoVaTenChange(); 
	//void			OnHoVaTenSetfocus(); 
	//void			OnHoVaTenKillfocus(); 
	int			OnHoVaTenCheckValue(); 
	void			OnLoaiPhieuSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLoaiPhieuSelendok(); 
	//void			OnLoaiPhieuSetfocus(); 
	//void			OnLoaiPhieuKillfocus(); 
	long			OnLoaiPhieuLoadData(); 
	//void			OnLoaiPhieuAddNew(); 
	//void			OnTrangThaiChange(); 
	//void			OnTrangThaiSetfocus(); 
	//void			OnTrangThaiKillfocus(); 
	int			OnTrangThaiCheckValue(); 
	void			OnNguoiTaoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoiTaoSelendok(); 
	//void			OnNguoiTaoSetfocus(); 
	//void			OnNguoiTaoKillfocus(); 
	long			OnNguoiTaoLoadData(); 
	//void			OnNguoiTaoAddNew(); 
	//void			OnNgayTaoChange(); 
	//void			OnNgayTaoSetfocus(); 
	//void			OnNgayTaoKillfocus(); 
	int			OnNgayTaoCheckValue(); 
	void			OnNguoiDuyetSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoiDuyetSelendok(); 
	//void			OnNguoiDuyetSetfocus(); 
	//void			OnNguoiDuyetKillfocus(); 
	long			OnNguoiDuyetLoadData(); 
	//void			OnNguoiDuyetAddNew(); 
	//void			OnNgayDuyetChange(); 
	//void			OnNgayDuyetSetfocus(); 
	//void			OnNgayDuyetKillfocus(); 
	int			OnNgayDuyetCheckValue(); 
	void			OnPhieuLocRuaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPhieuLocRuaSelendok(); 
	//void			OnPhieuLocRuaSetfocus(); 
	//void			OnPhieuLocRuaKillfocus(); 
	long			OnPhieuLocRuaLoadData(); 
	//void			OnPhieuLocRuaAddNew(); 
	//void			OnTheTichChange(); 
	//void			OnTheTichSetfocus(); 
	//void			OnTheTichKillfocus(); 
	int			OnTheTichCheckValue(); 
	//void			OnTheTich2Change(); 
	//void			OnTheTich2Setfocus(); 
	//void			OnTheTich2Killfocus(); 
	int			OnTheTich2CheckValue(); 
	//void			OnMatDoChange(); 
	//void			OnMatDoSetfocus(); 
	//void			OnMatDoKillfocus(); 
	int			OnMatDoCheckValue(); 
	//void			OnMatDo2Change(); 
	//void			OnMatDo2Setfocus(); 
	//void			OnMatDo2Killfocus(); 
	int			OnMatDo2CheckValue(); 
	//void			OnDiDongChange(); 
	//void			OnDiDongSetfocus(); 
	//void			OnDiDongKillfocus(); 
	int			OnDiDongCheckValue(); 
	//void			OnDiDong2Change(); 
	//void			OnDiDong2Setfocus(); 
	//void			OnDiDong2Killfocus(); 
	int			OnDiDong2CheckValue(); 
	void			OnPhieuTTSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPhieuTTSelendok(); 
	//void			OnPhieuTTSetfocus(); 
	//void			OnPhieuTTKillfocus(); 
	long			OnPhieuTTLoadData(); 
	//void			OnPhieuTTAddNew(); 
	void			OnTuTheTuCungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTuTheTuCungSelendok(); 
	//void			OnTuTheTuCungSetfocus(); 
	//void			OnTuTheTuCungKillfocus(); 
	long			OnTuTheTuCungLoadData(); 
	//void			OnTuTheTuCungAddNew(); 
	void			OnDoKhoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoKhoSelendok(); 
	//void			OnDoKhoSetfocus(); 
	//void			OnDoKhoKillfocus(); 
	long			OnDoKhoLoadData(); 
	//void			OnDoKhoAddNew(); 
	void			OnKepCoTuCungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnKepCoTuCungSelendok(); 
	//void			OnKepCoTuCungSetfocus(); 
	//void			OnKepCoTuCungKillfocus(); 
	long			OnKepCoTuCungLoadData(); 
	//void			OnKepCoTuCungAddNew(); 
	void			OnCatheterSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCatheterSelendok(); 
	//void			OnCatheterSetfocus(); 
	//void			OnCatheterKillfocus(); 
	long			OnCatheterLoadData(); 
	//void			OnCatheterAddNew(); 
	void			OnDonThuocSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDonThuocSelendok(); 
	//void			OnDonThuocSetfocus(); 
	//void			OnDonThuocKillfocus(); 
	long			OnDonThuocLoadData(); 
	//void			OnDonThuocAddNew(); 
	//void			OnThuocsauTTChange(); 
	//void			OnThuocsauTTSetfocus(); 
	//void			OnThuocsauTTKillfocus(); 
	int			OnThuocsauTTCheckValue(); 
	void			OnApprovalSelect(); 
	void			OnPrintSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CIVFLabPhieuThucHienIUIDlg(CWnd *pParent, long nDoc_no, long nOrder_id);
	~CIVFLabPhieuThucHienIUIDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuThucHienIUIDlg(); 
	int OnEditIVFLabPhieuThucHienIUIDlg(); 
	int OnDeleteIVFLabPhieuThucHienIUIDlg(); 
	int OnSaveIVFLabPhieuThucHienIUIDlg(); 
	int OnCancelIVFLabPhieuThucHienIUIDlg(); 
	int OnIVFLabPhieuThucHienIUIDlgListLoadData(); 
};
#endif
