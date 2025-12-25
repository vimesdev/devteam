#ifndef IVFLABPHIEUTRUDIALOG_H
#define IVFLABPHIEUTRUDIALOG_H

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
class CIVFLabPhieuTruDialog : public CGuiDialog{
protected:
	CString		m_szLineId;
public:
	CString		m_szIDLocation;
	CString		m_szStatus;
	bool		m_bAccepted;

	CGuiLabel		m_wndSophieuLabel;
	CGuiTextCtrl	m_wndSophieu;
	CGuiLabel		m_wndIdLabel;
	CGuiNumberCtrl	m_wndId;
	CGuiLabel		m_wndLoaiphieuLabel;
	CGuiComboBox	m_wndLoaiphieu;
	CGuiLabel		m_wndSohosoLabel;
	CGuiNumberCtrl	m_wndSohoso;
	CGuiLabel		m_wndMabenhnhanLabel;
	CGuiTextCtrl	m_wndMabenhnhan;
	CGuiLabel		m_wndHovatenLabel;
	CGuiTextCtrl	m_wndHovaten;
	CGuiLabel		m_wndNgaysinhLabel;
	CGuiDateCtrl	m_wndNgaysinh;
	CGuiLabel		m_wndNgaychochutLabel;
	CGuiDateCtrl	m_wndNgaychochut;
	CGuiLabel		m_wndSoluongmauLabel;
	CGuiNumberCtrl	m_wndSoluongmau;
	CGuiLabel		m_wndNguoichecklistLabel;
	CGuiComboBox	m_wndNguoichecklist;
	CGuiLabel		m_wndNgayphoiLabel;
	CGuiComboBox	m_wndNgayphoi;
	CGuiLabel		m_wndNgaydoinitoLabel;
	CGuiDateCtrl	m_wndNgaydoinito;
	CGuiLabel		m_wndNoitiepnhanLabel;
	CGuiComboBox	m_wndNoitiepnhan;
	CGuiLabel		m_wndTgtiepnhanLabel;
	CGuiDateTimeCtrl	m_wndTgtiepnhan;
	CGuiLabel		m_wndNguoiluutruLabel;
	CGuiComboBox	m_wndNguoiluutru;
	CGuiLabel		m_wndTgluuLabel;
	CGuiDateTimeCtrl	m_wndTgluu;
	CGuiLabel		m_wndPhuongphaptruLabel;
	CGuiComboBox	m_wndPhuongphaptru;
	CGuiLabel		m_wndMoitruongtruLabel;
	CGuiComboBox	m_wndMoitruongtru;
	CGuiLabel		m_wndDungcuLabel;
	CGuiComboBox	m_wndDungcu;
	CGuiLabel		m_wndThungtruLabel;
	CGuiComboBox	m_wndThungtru;
	CGuiLabel		m_wndGiatruLabel;
	CGuiComboBox	m_wndGiatru;
	CGuiLabel		m_wndThoi_luongLabel;
	CGuiNumberCtrl	m_wndThoi_luong;
	CGuiLabel		m_wndThang;
	CGuiLabel		m_wndNgayhethanLabel;
	CGuiDateCtrl	m_wndNgayhethan;
	CGuiCheckBox	m_wndAH;
	CGuiLabel		m_wndNgayhethanmoiLabel;
	CGuiDateCtrl	m_wndNgayhethanmoi;
	CGuiLabel		m_wndGhichuLabel;
	CGuiTextCtrl	m_wndGhichu;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAddCassette;
	CGuiButton		m_wndSaveAndAccept;
	CString	m_szSophieu;
	long	m_nId;
	CString	m_szLoaiphieuKey;
	long	m_nDocumentNo;
	CString	m_szMabenhnhan;
	CString	m_szHovaten;
	CString	m_szNgaysinh;
	CString	m_szNgaychochut;
	long	m_nSoluongmau;
	CString	m_szNguoichecklistKey;
	CString	m_szNgayphoiKey;
	CString	m_szNgaydoinito;
	CString	m_szNoitiepnhanKey;
	CString	m_szTgtiepnhan;
	CString	m_szNguoiluutruKey;
	CString	m_szTgluu;
	CString	m_szPhuongphaptruKey;
	CString	m_szMoitruongtruKey;
	CString	m_szDungcuKey;
	CString	m_szThungtruKey;
	CString	m_szGiatruKey;
	int		m_nThoi_luong;
	CString	m_szNgayhethan;
	CString	m_szNgayhethanmoi;
	BOOL	m_bAH;
	CString	m_szGhichu;
	CDbfMap	m_ivf_phieutruTbl;
	long		OnNguoichecklistLoadData();
	//void			OnSophieuChange(); 
	//void			OnSophieuSetfocus(); 
	//void			OnSophieuKillfocus(); 
	int			OnSophieuCheckValue(); 
	//void			OnIdChange(); 
	//void			OnIdSetfocus(); 
	//void			OnIdKillfocus(); 
	int			OnIdCheckValue(); 
	void			OnLoaiphieuSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLoaiphieuSelendok(); 
	//void			OnLoaiphieuSetfocus(); 
	//void			OnLoaiphieuKillfocus(); 
	long			OnLoaiphieuLoadData(); 
	//void			OnLoaiphieuAddNew(); 
	//void			OnSohosoChange(); 
	//void			OnSohosoSetfocus(); 
	//void			OnSohosoKillfocus(); 
	int			OnSohosoCheckValue(); 
	void		OnSohosoLabelSelect();
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
	//void			OnNgaychochutChange(); 
	//void			OnNgaychochutSetfocus(); 
	//void			OnNgaychochutKillfocus(); 
	int			OnNgaychochutCheckValue(); 
	//void			OnSoluongmauChange(); 
	//void			OnSoluongmauSetfocus(); 
	//void			OnSoluongmauKillfocus(); 
	int			OnSoluongmauCheckValue(); 
	void			OnNgayphoiSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNgayphoiSelendok(); 
	//void			OnNgayphoiSetfocus(); 
	//void			OnNgayphoiKillfocus(); 
	long			OnNgayphoiLoadData(); 
	//void			OnNgayphoiAddNew(); 
	//void			OnNgaydoinitoChange(); 
	//void			OnNgaydoinitoSetfocus(); 
	//void			OnNgaydoinitoKillfocus(); 
	int			OnNgaydoinitoCheckValue(); 
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
	void			OnDungcuSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDungcuSelendok(); 
	//void			OnDungcuSetfocus(); 
	//void			OnDungcuKillfocus(); 
	long			OnDungcuLoadData(); 
	//void			OnDungcuAddNew(); 
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
	int			OnThoi_luongCheckValue();
	//void			OnNgayhethanChange(); 
	//void			OnNgayhethanSetfocus(); 
	//void			OnNgayhethanKillfocus(); 
	int			OnNgayhethanCheckValue(); 
	//void			OnGhichuChange(); 
	//void			OnGhichuSetfocus(); 
	//void			OnGhichuKillfocus(); 
	int			OnGhichuCheckValue(); 
	void			OnUpdateSelect();
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	int			OnListAddLine();
	void			OnAddCassetteSelect(); 
	void			OnSaveAndAccept(); 
	CIVFLabPhieuTruDialog(CWnd *pParent, long nDocumentNo, long nId, bool bAccepted=false);
	~CIVFLabPhieuTruDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	int  GetInfo();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuTruDialog(); 
	int OnEditIVFLabPhieuTruDialog(); 
	int OnDeleteIVFLabPhieuTruDialog(); 
	int OnSaveIVFLabPhieuTruDialog(); 
	int OnCancelIVFLabPhieuTruDialog(); 
	int OnIVFLabPhieuTruDialogListLoadData(); 
	LRESULT WindowProc(UINT message, WPARAM, LPARAM);
};
#endif
