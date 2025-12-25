#ifndef IVFPHIEUTRUDIALOG_H
#define IVFPHIEUTRUDIALOG_H

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
class CIVFPhieutruDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndIdLabel;
	CGuiNumberCtrl	m_wndId;
	CGuiLabel		m_wndSophieuLabel;
	CGuiTextCtrl	m_wndSophieu;
	CGuiLabel		m_wndSohosoLabel;
	CGuiNumberCtrl	m_wndSohoso;
	CGuiLabel		m_wndMabenhnhanLabel;
	CGuiTextCtrl	m_wndMabenhnhan;
	CGuiLabel		m_wndHovatenLabel;
	CGuiTextCtrl	m_wndHovaten;
	CGuiLabel		m_wndNgaysinhLabel;
	CGuiDateCtrl	m_wndNgaysinh;
	CGuiLabel		m_wndDungcuLabel;
	CGuiComboBox	m_wndDungcu;
	CGuiLabel		m_wndPhuongphaptruLabel;
	CGuiComboBox	m_wndPhuongphaptru;
	CGuiLabel		m_wndMoitruongtruLabel;
	CGuiComboBox	m_wndMoitruongtru;
	CGuiLabel		m_wndThungtruLabel;
	CGuiComboBox	m_wndThungtru;
	CGuiLabel		m_wndGiatruLabel;
	CGuiComboBox	m_wndGiatru;
	CGuiLabel		m_wndCassetteLabel;
	CGuiComboBox	m_wndCassette;
	CGuiLabel		m_wndTopLabel;
	CGuiNumberCtrl	m_wndTop;
	CGuiLabel		m_wndMautopLabel;
	CGuiTextCtrl	m_wndMautop;
	CGuiLabel		m_wndSophoiLabel;
	CGuiNumberCtrl	m_wndSophoi;
	CGuiLabel		m_wndNgaychochutLabel;
	CGuiDateCtrl	m_wndNgaychochut;
	CGuiLabel		m_wndNgaydoinitoLabel;
	CGuiDateCtrl	m_wndNgaydoinito;
	CGuiLabel		m_wndSoluongmauLabel;
	CGuiNumberCtrl	m_wndSoluongmau;
	CGuiLabel		m_wndGiaidoanLabel;
	CGuiTextCtrl	m_wndGiaidoan;
	CGuiLabel		m_wndNoitiepnhanLabel;
	CGuiComboBox	m_wndNoitiepnhan;
	CGuiLabel		m_wndTgtiepnhanLabel;
	CGuiDateTimeCtrl	m_wndTgtiepnhan;
	CGuiLabel		m_wndNguoiluutruLabel;
	CGuiComboBox	m_wndNguoiluutru;
	CGuiLabel		m_wndTgluuLabel;
	CGuiDateTimeCtrl	m_wndTgluu;
	CGuiLabel		m_wndNgayhethanLabel;
	CGuiDateCtrl	m_wndNgayhethan;
	CGuiLabel		m_wndGhichuLabel;
	CGuiTextCtrl	m_wndGhichu;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	long	m_nId;
	CString	m_szSophieu;
	long	m_nSohoso;
	CString	m_szMabenhnhan;
	CString	m_szHovaten;
	CString	m_szNgaysinh;
	CString	m_szDungcuKey;
	CString	m_szPhuongphaptruKey;
	CString	m_szMoitruongtruKey;
	CString	m_szThungtruKey;
	CString	m_szGiatruKey;
	CString	m_szCassetteKey;
	long	m_nTop;
	CString	m_szMautop;
	long	m_nSophoi;
	CString	m_szNgaychochut;
	CString	m_szNgaydoinito;
	long	m_nSoluongmau;
	CString	m_szGiaidoan;
	CString	m_szNoitiepnhanKey;
	CString	m_szTgtiepnhan;
	CString	m_szNguoiluutruKey;
	CString	m_szTgluu;
	CString	m_szNgayhethan;
	CString	m_szGhichu;
	CDbfMap	m_ivf_phieutruTbl;
	//void			OnIdChange(); 
	//void			OnIdSetfocus(); 
	//void			OnIdKillfocus(); 
	int			OnIdCheckValue(); 
	//void			OnSophieuChange(); 
	//void			OnSophieuSetfocus(); 
	//void			OnSophieuKillfocus(); 
	int			OnSophieuCheckValue(); 
	//void			OnSohosoChange(); 
	//void			OnSohosoSetfocus(); 
	//void			OnSohosoKillfocus(); 
	int			OnSohosoCheckValue(); 
	//void			OnMabenhnhanChange(); 
	//void			OnMabenhnhanSetfocus(); 
	//void			OnMabenhnhanKillfocus(); 
	int			OnMabenhnhanCheckValue(); 
	//void			OnHovatenChange(); 
	//void			OnHovatenSetfocus(); 
	//void			OnHovatenKillfocus(); 
	int			OnHovatenCheckValue(); 
	//void			OnNgaysinhChange(); 
	//void			OnNgaysinhSetfocus(); 
	//void			OnNgaysinhKillfocus(); 
	int			OnNgaysinhCheckValue(); 
	void			OnDungcuSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDungcuSelendok(); 
	//void			OnDungcuSetfocus(); 
	//void			OnDungcuKillfocus(); 
	long			OnDungcuLoadData(); 
	//void			OnDungcuAddNew(); 
	void			OnPhuongphaptruSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPhuongphaptruSelendok(); 
	//void			OnPhuongphaptruSetfocus(); 
	//void			OnPhuongphaptruKillfocus(); 
	long			OnPhuongphaptruLoadData(); 
	//void			OnPhuongphaptruAddNew(); 
	void			OnMoitruongtruSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMoitruongtruSelendok(); 
	//void			OnMoitruongtruSetfocus(); 
	//void			OnMoitruongtruKillfocus(); 
	long			OnMoitruongtruLoadData(); 
	//void			OnMoitruongtruAddNew(); 
	void			OnThungtruSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThungtruSelendok(); 
	//void			OnThungtruSetfocus(); 
	//void			OnThungtruKillfocus(); 
	long			OnThungtruLoadData(); 
	//void			OnThungtruAddNew(); 
	void			OnGiatruSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGiatruSelendok(); 
	//void			OnGiatruSetfocus(); 
	//void			OnGiatruKillfocus(); 
	long			OnGiatruLoadData(); 
	//void			OnGiatruAddNew(); 
	void			OnCassetteSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCassetteSelendok(); 
	//void			OnCassetteSetfocus(); 
	//void			OnCassetteKillfocus(); 
	long			OnCassetteLoadData(); 
	//void			OnCassetteAddNew(); 
	//void			OnTopChange(); 
	//void			OnTopSetfocus(); 
	//void			OnTopKillfocus(); 
	int			OnTopCheckValue(); 
	//void			OnMautopChange(); 
	//void			OnMautopSetfocus(); 
	//void			OnMautopKillfocus(); 
	int			OnMautopCheckValue(); 
	//void			OnSophoiChange(); 
	//void			OnSophoiSetfocus(); 
	//void			OnSophoiKillfocus(); 
	int			OnSophoiCheckValue(); 
	//void			OnNgaychochutChange(); 
	//void			OnNgaychochutSetfocus(); 
	//void			OnNgaychochutKillfocus(); 
	int			OnNgaychochutCheckValue(); 
	//void			OnNgaydoinitoChange(); 
	//void			OnNgaydoinitoSetfocus(); 
	//void			OnNgaydoinitoKillfocus(); 
	int			OnNgaydoinitoCheckValue(); 
	//void			OnSoluongmauChange(); 
	//void			OnSoluongmauSetfocus(); 
	//void			OnSoluongmauKillfocus(); 
	int			OnSoluongmauCheckValue(); 
	//void			OnGiaidoanChange(); 
	//void			OnGiaidoanSetfocus(); 
	//void			OnGiaidoanKillfocus(); 
	int			OnGiaidoanCheckValue(); 
	void			OnNoitiepnhanSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNoitiepnhanSelendok(); 
	//void			OnNoitiepnhanSetfocus(); 
	//void			OnNoitiepnhanKillfocus(); 
	long			OnNoitiepnhanLoadData(); 
	//void			OnNoitiepnhanAddNew(); 
	//void			OnTgtiepnhanChange(); 
	//void			OnTgtiepnhanSetfocus(); 
	//void			OnTgtiepnhanKillfocus(); 
	int			OnTgtiepnhanCheckValue(); 
	void			OnNguoiluutruSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoiluutruSelendok(); 
	//void			OnNguoiluutruSetfocus(); 
	//void			OnNguoiluutruKillfocus(); 
	long			OnNguoiluutruLoadData(); 
	//void			OnNguoiluutruAddNew(); 
	//void			OnTgluuChange(); 
	//void			OnTgluuSetfocus(); 
	//void			OnTgluuKillfocus(); 
	int			OnTgluuCheckValue(); 
	//void			OnNgayhethanChange(); 
	//void			OnNgayhethanSetfocus(); 
	//void			OnNgayhethanKillfocus(); 
	int			OnNgayhethanCheckValue(); 
	//void			OnGhichuChange(); 
	//void			OnGhichuSetfocus(); 
	//void			OnGhichuKillfocus(); 
	int			OnGhichuCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CIVFPhieutruDialog(CWnd *pParent);
	~CIVFPhieutruDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFPhieutruDialog(); 
	int OnEditIVFPhieutruDialog(); 
	int OnDeleteIVFPhieutruDialog(); 
	int OnSaveIVFPhieutruDialog(); 
	int OnCancelIVFPhieutruDialog(); 
	int OnIVFPhieutruDialogListLoadData(); 
};
#endif
