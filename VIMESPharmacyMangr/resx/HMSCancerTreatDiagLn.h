#ifndef HMSCANCERTREATDIAGLN_H
#define HMSCANCERTREATDIAGLN_H

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
class CHMSCancerTreatDiagLn : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndTenThuocLabel;
	CGuiTextCtrl	m_wndTenThuoc;
	CGuiLabel		m_wndDonViLabel;
	CGuiComboBox	m_wndDonVi;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndLieuDungM2Label;
	CGuiNumberCtrl	m_wndLieuDungM2;
	CGuiComboBox	m_wndDVLieudung;
	CGuiLabel		m_wndSoChuKyLabel;
	CGuiNumberCtrl	m_wndSoChuKy;
	CGuiLabel		m_wndNgayDungLabel;
	CGuiTextCtrl	m_wndNgayDung;
	CGuiLabel		m_wndSoNgayLapLaiCKLabel;
	CGuiNumberCtrl	m_wndSoNgayLapLaiCK;
	CGuiLabel		m_wndLieuDungBNLabel;
	CGuiNumberCtrl	m_wndLieuDungBN;
	CGuiLabel		m_wndSoLuongLinhLabel;
	CGuiNumberCtrl	m_wndSoLuongLinh;
	CGuiLabel		m_wndDungMoiLabel;
	CGuiComboBox	m_wndDungMoi;
	CGuiLabel		m_wndDungMoiQtyLabel;
	CGuiNumberCtrl	m_wndDungMoiQty;
	CGuiLabel		m_wndTheTichLabel;
	CGuiNumberCtrl	m_wndTheTich;
	CGuiLabel		m_wndThoiGianSDLabel;
	CGuiNumberCtrl	m_wndThoiGianSD;
	CGuiComboBox	m_wndDVTruyen;
	CGuiLabel		m_wndUsageLabel;
	CGuiComboBox	m_wndUsage;
	CGuiLabel		m_wndGFGLabel;
	CGuiNumberCtrl	m_wndGFG;
	CGuiLabel		m_wndUsageDescLabel;
	CGuiTextCtrl	m_wndUsageDesc;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szTenThuoc;
	CString	m_szDonViKey;
	CString	m_szTypeKey;
	long	m_nLieuDungM2;
	CString	m_szDVLieudungKey;
	long	m_nSoChuKy;
	CString	m_szNgayDung;
	long	m_nSoNgayLapLaiCK;
	long	m_nLieuDungBN;
	long	m_nSoLuongLinh;
	CString	m_szDungMoiKey;
	long	m_nDungMoiQty;
	long	m_nTheTich;
	long	m_nThoiGianSD;
	CString	m_szDVTruyenKey;
	CString	m_szUsageKey;
	long	m_nGFG;
	CString	m_szUsageDesc;
	//void			OnTenThuocChange(); 
	//void			OnTenThuocSetfocus(); 
	//void			OnTenThuocKillfocus(); 
	int			OnTenThuocCheckValue(); 
	void			OnDonViSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDonViSelendok(); 
	//void			OnDonViSetfocus(); 
	//void			OnDonViKillfocus(); 
	long			OnDonViLoadData(); 
	//void			OnDonViAddNew(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnLieuDungM2Change(); 
	//void			OnLieuDungM2Setfocus(); 
	//void			OnLieuDungM2Killfocus(); 
	int			OnLieuDungM2CheckValue(); 
	void			OnDVLieudungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDVLieudungSelendok(); 
	//void			OnDVLieudungSetfocus(); 
	//void			OnDVLieudungKillfocus(); 
	long			OnDVLieudungLoadData(); 
	//void			OnDVLieudungAddNew(); 
	//void			OnSoChuKyChange(); 
	//void			OnSoChuKySetfocus(); 
	//void			OnSoChuKyKillfocus(); 
	int			OnSoChuKyCheckValue(); 
	//void			OnNgayDungChange(); 
	//void			OnNgayDungSetfocus(); 
	//void			OnNgayDungKillfocus(); 
	int			OnNgayDungCheckValue(); 
	//void			OnSoNgayLapLaiCKChange(); 
	//void			OnSoNgayLapLaiCKSetfocus(); 
	//void			OnSoNgayLapLaiCKKillfocus(); 
	int			OnSoNgayLapLaiCKCheckValue(); 
	//void			OnLieuDungBNChange(); 
	//void			OnLieuDungBNSetfocus(); 
	//void			OnLieuDungBNKillfocus(); 
	int			OnLieuDungBNCheckValue(); 
	//void			OnSoLuongLinhChange(); 
	//void			OnSoLuongLinhSetfocus(); 
	//void			OnSoLuongLinhKillfocus(); 
	int			OnSoLuongLinhCheckValue(); 
	void			OnDungMoiSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDungMoiSelendok(); 
	//void			OnDungMoiSetfocus(); 
	//void			OnDungMoiKillfocus(); 
	long			OnDungMoiLoadData(); 
	//void			OnDungMoiAddNew(); 
	//void			OnDungMoiQtyChange(); 
	//void			OnDungMoiQtySetfocus(); 
	//void			OnDungMoiQtyKillfocus(); 
	int			OnDungMoiQtyCheckValue(); 
	//void			OnTheTichChange(); 
	//void			OnTheTichSetfocus(); 
	//void			OnTheTichKillfocus(); 
	int			OnTheTichCheckValue(); 
	//void			OnThoiGianSDChange(); 
	//void			OnThoiGianSDSetfocus(); 
	//void			OnThoiGianSDKillfocus(); 
	int			OnThoiGianSDCheckValue(); 
	void			OnDVTruyenSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDVTruyenSelendok(); 
	//void			OnDVTruyenSetfocus(); 
	//void			OnDVTruyenKillfocus(); 
	long			OnDVTruyenLoadData(); 
	//void			OnDVTruyenAddNew(); 
	void			OnUsageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUsageSelendok(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	long			OnUsageLoadData(); 
	//void			OnUsageAddNew(); 
	//void			OnGFGChange(); 
	//void			OnGFGSetfocus(); 
	//void			OnGFGKillfocus(); 
	int			OnGFGCheckValue(); 
	//void			OnUsageDescChange(); 
	//void			OnUsageDescSetfocus(); 
	//void			OnUsageDescKillfocus(); 
	int			OnUsageDescCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CHMSCancerTreatDiagLn(CWnd *pParent);
	~CHMSCancerTreatDiagLn();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCancerTreatDiagLn(); 
	int OnEditHMSCancerTreatDiagLn(); 
	int OnDeleteHMSCancerTreatDiagLn(); 
	int OnSaveHMSCancerTreatDiagLn(); 
	int OnCancelHMSCancerTreatDiagLn(); 
	int OnHMSCancerTreatDiagLnListLoadData(); 
};
#endif
