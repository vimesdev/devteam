#ifndef PRODUCTEXTRAINFOSETUP_H
#define PRODUCTEXTRAINFOSETUP_H

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
class CProductExtraInfoSetup : public CGuiDialog{
protected:
	long m_nID;
	long m_nProductID;
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndItemList;
	CGuiGroupBox	m_wndUnMap;
	CGuiGroupBox	m_wndMaped;
	CGuiGroupBox	m_wndCurrentInfo;
	CGuiGroupBox	m_wndAdditionalInfo;
	
	CGuiLabel		m_wndYearLabel;
	CGuiNumberCtrl	m_wndYear;
	CGuiLabel		m_wndContractLabel;
	CGuiComboBox	m_wndContract;
	CGuiLabel		m_wndTypeLabel;
	CGuiTextCtrl	m_wndType;
	CGuiLabel		m_wndGroupLabel;
	CGuiTextCtrl	m_wndGroup;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndSearch;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndMapNameLabel;
	CGuiComboBox	m_wndMapName;
	CGuiListCtrl	m_wndUnMapList;
	CGuiListCtrl	m_wndMapedList;
	CGuiLabel		m_wndMahoatchatLabel;
	CGuiTextCtrl	m_wndMahoatchat;
	CGuiLabel		m_wndHoatchatLabel;
	CGuiTextCtrl	m_wndHoatchat;
	CGuiLabel		m_wndDuongdungLabel;
	CGuiTextCtrl	m_wndDuongdung;
	CGuiLabel		m_wndHamluongLabel;
	CGuiTextCtrl	m_wndHamluong;
	CGuiLabel		m_wndTenthuocLabel;
	CGuiTextCtrl	m_wndTenthuoc;
	CGuiLabel		m_wndSodangkyLabel;
	CGuiTextCtrl	m_wndSodangky;
	CGuiLabel		m_wndDonggoiLabel;
	CGuiTextCtrl	m_wndDonggoi;
	CGuiLabel		m_wndDonvitinhLabel;
	CGuiTextCtrl	m_wndDonvitinh;
	CGuiLabel		m_wndDongiaLabel;
	CGuiNumberCtrl	m_wndDongia;
	CGuiLabel		m_wndDongiattLabel;
	CGuiNumberCtrl	m_wndDongiatt;
	CGuiLabel		m_wndHangsxLabel;
	CGuiTextCtrl	m_wndHangsx;
	CGuiLabel		m_wndNuocsxLabel;
	CGuiTextCtrl	m_wndNuocsx;
	CGuiLabel		m_wndNhathauLabel;
	CGuiTextCtrl	m_wndNhathau;
	CGuiLabel		m_wndMathuocbvLabel;
	CGuiTextCtrl	m_wndMathuocbv;
	CGuiLabel		m_wndMaduongdungLabel;
	CGuiTextCtrl	m_wndMaduongdung;
	CGuiLabel		m_wndSoluongLabel;
	CGuiNumberCtrl	m_wndSoluong;
	CGuiLabel		m_wndQuyetdinhLabel;
	CGuiTextCtrl	m_wndQuyetdinh;
	CGuiLabel		m_wndCongboLabel;
	CGuiDateCtrl	m_wndCongbo;
	CGuiLabel		m_wndManhomvtytLabel;
	CGuiTextCtrl	m_wndManhomvtyt;
	CGuiLabel		m_wndTennhomvtytLabel;
	CGuiTextCtrl	m_wndTennhomvtyt;
	CGuiLabel		m_wndMahieuLabel;
	CGuiTextCtrl	m_wndMahieu;
	CGuiLabel		m_wndDinhmucLabel;
	CGuiNumberCtrl	m_wndDinhmuc;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	long	m_nYear;
	CString	m_szContractKey;
	CString	m_szType;
	CString	m_szGroup;
	CString	m_szName;
	CString	m_szMahoatchat;
	CString	m_szHoatchat;
	CString	m_szDuongdung;
	CString	m_szHamluong;
	CString	m_szTenthuoc;
	CString	m_szSodangky;
	CString	m_szDonggoi;
	CString	m_szDonvitinh;
	long	m_nDongia;
	long	m_nDongiatt;
	CString	m_szHangsx;
	CString	m_szNuocsx;
	CString	m_szNhathau;
	CString	m_szMathuocbv;
	CString	m_szMaduongdung;
	long	m_nSoluong;
	CString	m_szQuyetdinh;
	CString	m_szCongbo;
	CString	m_szManhomvtyt;
	CString	m_szTennhomvtyt;
	CString	m_szMahieu;
	long	m_nDinhmuc;

	CDbfMap m_m_product_extra_infoTbl;
	int		m_nSelectedItem;

	//void			OnYearChange(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	int			OnYearCheckValue(); 
	void			OnContractSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnContractSelendok(); 
	//void			OnContractSetfocus(); 
	//void			OnContractKillfocus(); 
	long			OnContractLoadData(); 
	//void			OnContractAddNew(); 
	//void			OnTypeChange(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	int			OnTypeCheckValue(); 
	//void			OnGroupChange(); 
	//void			OnGroupSetfocus(); 
	//void			OnGroupKillfocus(); 
	int			OnGroupCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnSearchSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnUnMapListLoadData(); 
	void			OnUnMapListSelectChange(int nOldItem, int nNewItem); 
	void			OnUnMapListDblClick(); 
	int			OnUnMapListDeleteItem(); 
	long			OnMapedListLoadData(); 
	void			OnMapedListSelectChange(int nOldItem, int nNewItem); 
	void			OnMapedListDblClick(); 
	int			OnMapedListDeleteItem(); 
	//void			OnMahoatchatChange(); 
	//void			OnMahoatchatSetfocus(); 
	//void			OnMahoatchatKillfocus(); 
	int			OnMahoatchatCheckValue(); 
	//void			OnHoatchatChange(); 
	//void			OnHoatchatSetfocus(); 
	//void			OnHoatchatKillfocus(); 
	int			OnHoatchatCheckValue(); 
	//void			OnDuongdungChange(); 
	//void			OnDuongdungSetfocus(); 
	//void			OnDuongdungKillfocus(); 
	int			OnDuongdungCheckValue(); 
	//void			OnHamluongChange(); 
	//void			OnHamluongSetfocus(); 
	//void			OnHamluongKillfocus(); 
	int			OnHamluongCheckValue(); 
	//void			OnTenthuocChange(); 
	//void			OnTenthuocSetfocus(); 
	//void			OnTenthuocKillfocus(); 
	int			OnTenthuocCheckValue(); 
	//void			OnSodangkyChange(); 
	//void			OnSodangkySetfocus(); 
	//void			OnSodangkyKillfocus(); 
	int			OnSodangkyCheckValue(); 
	//void			OnDonggoiChange(); 
	//void			OnDonggoiSetfocus(); 
	//void			OnDonggoiKillfocus(); 
	int			OnDonggoiCheckValue(); 
	//void			OnDonvitinhChange(); 
	//void			OnDonvitinhSetfocus(); 
	//void			OnDonvitinhKillfocus(); 
	int			OnDonvitinhCheckValue(); 
	//void			OnDongiaChange(); 
	//void			OnDongiaSetfocus(); 
	//void			OnDongiaKillfocus(); 
	int			OnDongiaCheckValue(); 
	//void			OnDongiattChange(); 
	//void			OnDongiattSetfocus(); 
	//void			OnDongiattKillfocus(); 
	int			OnDongiattCheckValue(); 
	//void			OnHangsxChange(); 
	//void			OnHangsxSetfocus(); 
	//void			OnHangsxKillfocus(); 
	int			OnHangsxCheckValue(); 
	//void			OnNuocsxChange(); 
	//void			OnNuocsxSetfocus(); 
	//void			OnNuocsxKillfocus(); 
	int			OnNuocsxCheckValue(); 
	//void			OnNhathauChange(); 
	//void			OnNhathauSetfocus(); 
	//void			OnNhathauKillfocus(); 
	int			OnNhathauCheckValue(); 
	//void			OnMathuocbvChange(); 
	//void			OnMathuocbvSetfocus(); 
	//void			OnMathuocbvKillfocus(); 
	int			OnMathuocbvCheckValue(); 
	//void			OnMaduongdungChange(); 
	//void			OnMaduongdungSetfocus(); 
	//void			OnMaduongdungKillfocus(); 
	int			OnMaduongdungCheckValue(); 
	//void			OnSoluongChange(); 
	//void			OnSoluongSetfocus(); 
	//void			OnSoluongKillfocus(); 
	int			OnSoluongCheckValue(); 
	//void			OnQuyetdinhChange(); 
	//void			OnQuyetdinhSetfocus(); 
	//void			OnQuyetdinhKillfocus(); 
	int			OnQuyetdinhCheckValue(); 
	//void			OnCongboChange(); 
	//void			OnCongboSetfocus(); 
	//void			OnCongboKillfocus(); 
	int			OnCongboCheckValue(); 
	//void			OnManhomvtytChange(); 
	//void			OnManhomvtytSetfocus(); 
	//void			OnManhomvtytKillfocus(); 
	int			OnManhomvtytCheckValue(); 
	//void			OnTennhomvtytChange(); 
	//void			OnTennhomvtytSetfocus(); 
	//void			OnTennhomvtytKillfocus(); 
	int			OnTennhomvtytCheckValue(); 
	//void			OnMahieuChange(); 
	//void			OnMahieuSetfocus(); 
	//void			OnMahieuKillfocus(); 
	int			OnMahieuCheckValue(); 
	//void			OnDinhmucChange(); 
	//void			OnDinhmucSetfocus(); 
	//void			OnDinhmucKillfocus(); 
	int			OnDinhmucCheckValue(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	long		OnHoatchatLoadData();
	long		OnDonvitinhLoadData();
	long		OnHangsxLoadData();
	long		OnNuocsxLoadData();
	long		OnNhathauLoadData();
	long		OnMaduongdungLoadData();
	CProductExtraInfoSetup(CWnd *pParent);
	~CProductExtraInfoSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductExtraInfoSetup(); 
	int OnEditProductExtraInfoSetup(); 
	int OnDeleteProductExtraInfoSetup(); 
	int OnSaveProductExtraInfoSetup(); 
	int OnCancelProductExtraInfoSetup(); 
	int OnProductExtraInfoSetupListLoadData(); 
	void OnListExport();
	void OnListCopyItem();
};
#endif
