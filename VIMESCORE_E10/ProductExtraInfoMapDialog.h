#ifndef PRODUCTEXTRAINFOMAPDIALOG_H
#define PRODUCTEXTRAINFOMAPDIALOG_H

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
class CProductExtraInfoMapDialog : public CGuiDialog{
protected:
	long m_nID;
	long m_nProductID;
	CDbfMap m_m_product_extra_infoTbl;
	int		m_nSelectedItem;
	bool	m_bLoadFlag;
public:
	CGuiGroupBox	m_wndSearchInformation;
	CGuiGroupBox	m_wndCurrentInfo;
	CGuiGroupBox	m_wndUnMap;
	CGuiGroupBox	m_wndMaped;
	CGuiGroupBox	m_wndItemList;
	CGuiLabel		m_wndContractLabel;
	CGuiComboBox	m_wndContract;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiButton		m_wndSearch;
	CGuiCheckBox	m_wndUnMapFlag;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndMapNameLabel;
	CGuiComboBox	m_wndMapName;
	CGuiButton		m_wndMap;
	CGuiLabel		m_wndHoatchatLabel;
	CGuiTextCtrl	m_wndHoatchat;
	CGuiLabel		m_wndMahoatchatLabel;
	CGuiTextCtrl	m_wndMahoatchat;
	CGuiLabel		m_wndMathuocbvLabel;
	CGuiTextCtrl	m_wndMathuocbv;
	CGuiLabel		m_wndTenthuocLabel;
	CGuiTextCtrl	m_wndTenthuoc;
	CGuiLabel		m_wndHamluongLabel;
	CGuiTextCtrl	m_wndHamluong;
	CGuiLabel		m_wndDonvitinhLabel;
	CGuiTextCtrl	m_wndDonvitinh;
	CGuiLabel		m_wndSodangkyLabel;
	CGuiTextCtrl	m_wndSodangky;
	CGuiLabel		m_wndDonggoiLabel;
	CGuiTextCtrl	m_wndDonggoi;
	CGuiLabel		m_wndMaduongdungLabel;
	CGuiComboBox	m_wndMaduongdung;
	CGuiLabel		m_wndDuongdungLabel;
	CGuiTextCtrl	m_wndDuongdung;
	CGuiLabel		m_wndDongiaLabel;
	CGuiNumberCtrl	m_wndDongia;
	CGuiLabel		m_wndDongiattLabel;
	CGuiNumberCtrl	m_wndDongiatt;
	CGuiLabel		m_wndSoluongLabel;
	CGuiNumberCtrl	m_wndSoluong;
	CGuiLabel		m_wndDinhmucLabel;
	CGuiNumberCtrl	m_wndDinhmuc;
	CGuiLabel		m_wndQuyetdinhLabel;
	CGuiComboBox	m_wndQuyetdinh;
	CGuiLabel		m_wndCongboLabel;
	CGuiDateCtrl	m_wndCongbo;
	CGuiLabel		m_wndNhathauLabel;
	CGuiTextCtrl	m_wndNhathau;
	CGuiLabel		m_wndNuocsxLabel;
	CGuiTextCtrl	m_wndNuocsx;
	CGuiLabel		m_wndHangsxLabel;
	CGuiTextCtrl	m_wndHangsx;

	CGuiLabel		m_wndHopDongLabel;
	//CGuiTextCtrl	m_wndHopDong;
	CGuiComboBox	m_wndHopDong;
	CGuiLabel		m_wndManhomvtytLabel;
	CGuiTextCtrl	m_wndManhomvtyt;
	CGuiLabel		m_wndTennhomvtytLabel;
	CGuiTextCtrl	m_wndTennhomvtyt;
	CGuiLabel		m_wndPackageLabel;
	CGuiTextCtrl	m_wndPackage;
	CGuiLabel		m_wndPackageGrpLabel;
	CGuiTextCtrl	m_wndPackageGrp;
	CGuiListCtrl	m_wndUnMapList;
	CGuiListCtrl	m_wndMapedList;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndImport;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndRefeshMapID;
	CString	m_szContractKey;
	CString	m_szName;
	BOOL	m_bUnMapFlag;
	CString	m_szMapNameKey;
	CString	m_szHoatchat;
	CString	m_szMahoatchat;
	CString	m_szMathuocbv;
	CString	m_szTenthuoc;
	CString	m_szHamluong;
	CString	m_szDonvitinh;
	CString	m_szSodangky;
	CString	m_szDonggoi;
	CString	m_szMaduongdungKey;
	CString	m_szDuongdung;
	long	m_nDongia;
	long	m_nDongiatt;
	long	m_nSoluong;
	long	m_nDinhmuc;
	CString	m_szQuyetdinhKey;
	CString	m_szCongbo;
	CString	m_szNhathau;
	CString	m_szNuocsx;
	CString	m_szHangsx;
	//CString	m_szHopDong;
	CString	m_szHopDongKey;
	CString	m_szManhomvtyt;
	CString	m_szTennhomvtyt;
	CString	m_szPackage;
	CString	m_szPackageGrp;	
	void			OnContractSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnContractSelendok(); 
	//void			OnContractSetfocus(); 
	//void			OnContractKillfocus(); 
	long			OnContractLoadData(); 
	//void			OnContractAddNew(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnSearchSelect(); 
	void			OnUnMapFlagSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnMapNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMapNameSelendok(); 
	//void			OnMapNameSetfocus(); 
	//void			OnMapNameKillfocus(); 
	long			OnMapNameLoadData(); 
	//void			OnMapNameAddNew(); 
	void			OnMapSelect(); 
	//void			OnHoatchatChange(); 
	//void			OnHoatchatSetfocus(); 
	//void			OnHoatchatKillfocus(); 
	int			OnHoatchatCheckValue(); 
	//void			OnMahoatchatChange(); 
	//void			OnMahoatchatSetfocus(); 
	//void			OnMahoatchatKillfocus(); 
	int			OnMahoatchatCheckValue(); 
	//void			OnMathuocbvChange(); 
	//void			OnMathuocbvSetfocus(); 
	//void			OnMathuocbvKillfocus(); 
	int			OnMathuocbvCheckValue(); 
	//void			OnTenthuocChange(); 
	//void			OnTenthuocSetfocus(); 
	//void			OnTenthuocKillfocus(); 
	int			OnTenthuocCheckValue(); 
	//void			OnHamluongChange(); 
	//void			OnHamluongSetfocus(); 
	//void			OnHamluongKillfocus(); 
	int			OnHamluongCheckValue(); 
	//void			OnDonvitinhChange(); 
	//void			OnDonvitinhSetfocus(); 
	//void			OnDonvitinhKillfocus(); 
	int			OnDonvitinhCheckValue(); 
	//void			OnSodangkyChange(); 
	//void			OnSodangkySetfocus(); 
	//void			OnSodangkyKillfocus(); 
	int			OnSodangkyCheckValue(); 
	//void			OnDonggoiChange(); 
	//void			OnDonggoiSetfocus(); 
	//void			OnDonggoiKillfocus(); 
	int			OnDonggoiCheckValue(); 
	void			OnMaduongdungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMaduongdungSelendok(); 
	//void			OnMaduongdungSetfocus(); 
	//void			OnMaduongdungKillfocus(); 
	int			OnMaduongdungLoadData(); 
	//void			OnMaduongdungAddNew(); 
	//void			OnDuongdungChange(); 
	//void			OnDuongdungSetfocus(); 
	//void			OnDuongdungKillfocus(); 
	int			OnDuongdungCheckValue(); 
	//void			OnDongiaChange(); 
	//void			OnDongiaSetfocus(); 
	//void			OnDongiaKillfocus(); 
	int			OnDongiaCheckValue(); 
	//void			OnDongiattChange(); 
	//void			OnDongiattSetfocus(); 
	//void			OnDongiattKillfocus(); 
	int			OnDongiattCheckValue(); 
	//void			OnSoluongChange(); 
	//void			OnSoluongSetfocus(); 
	//void			OnSoluongKillfocus(); 
	int			OnSoluongCheckValue(); 
	//void			OnDinhmucChange(); 
	//void			OnDinhmucSetfocus(); 
	//void			OnDinhmucKillfocus(); 
	int			OnDinhmucCheckValue(); 
	void			OnQuyetdinhSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnQuyetdinhSelendok(); 
	//void			OnQuyetdinhSetfocus(); 
	//void			OnQuyetdinhKillfocus(); 
	int			OnQuyetdinhLoadData(); 
	//void			OnQuyetdinhAddNew(); 
	//void			OnCongboChange(); 
	//void			OnCongboSetfocus(); 
	//void			OnCongboKillfocus(); 
	int			OnCongboCheckValue(); 
	//void			OnNhathauChange(); 
	//void			OnNhathauSetfocus(); 
	//void			OnNhathauKillfocus(); 
	int			OnNhathauCheckValue(); 
	//void			OnNuocsxChange(); 
	//void			OnNuocsxSetfocus(); 
	//void			OnNuocsxKillfocus(); 
	int			OnNuocsxCheckValue(); 
	//void			OnHangsxChange(); 
	//void			OnHangsxSetfocus(); 
	//void			OnHangsxKillfocus(); 
	int			OnHangsxCheckValue(); 
	//void			OnHopDongChange(); 
	//void			OnHopDongSetfocus(); 
	//void			OnHopDongKillfocus(); 
	int			OnHopDongCheckValue(); 
	long		OnHopDongLoadData();
	//void			OnManhomvtytChange(); 
	//void			OnManhomvtytSetfocus(); 
	//void			OnManhomvtytKillfocus(); 
	int			OnManhomvtytCheckValue(); 
	//void			OnTennhomvtytChange(); 
	//void			OnTennhomvtytSetfocus(); 
	//void			OnTennhomvtytKillfocus(); 
	int			OnTennhomvtytCheckValue(); 
	long			OnUnMapListLoadData(); 
	void			OnUnMapListSelectChange(int nOldItem, int nNewItem); 
	void			OnUnMapListDblClick(); 
	int			OnUnMapListDeleteItem(); 
	long			OnMapedListLoadData(); 
	void			OnMapedListSelectChange(int nOldItem, int nNewItem); 
	void			OnMapedListDblClick(); 
	int			OnMapedListDeleteItem(); 
	void			OnExportSelect(); 
	void			OnImportSelect(); 
	void			OnEditSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	void			OnAddSelect();
	void			OnRefeshMapIDSelect();
	CProductExtraInfoMapDialog(CWnd *pParent);
	~CProductExtraInfoMapDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductExtraInfoMapDialog(); 
	int OnEditProductExtraInfoMapDialog(); 
	int OnDeleteProductExtraInfoMapDialog(); 
	int OnSaveProductExtraInfoMapDialog(); 
	int OnCancelProductExtraInfoMapDialog(); 
	int OnProductExtraInfoMapDialogListLoadData(); 
	void OnListExport();
	void OnListCopyItem();
};
#endif
