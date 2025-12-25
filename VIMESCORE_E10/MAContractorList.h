#ifndef MACONTRACTORLIST_H
#define MACONTRACTORLIST_H

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
#include "GuiDialog.h"
#include "DbField.h"
class CMAContractorList : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndItemIDLabel;
	CGuiTextCtrl	m_wndItemid;
	CGuiTextCtrl	m_wndTenBietDuoc;
	CGuiLabel		m_wndMaThuocLabel;
	CGuiTextCtrl	m_wndMaquanly;
	CGuiLabel		m_wndDonViLabel;
	CGuiTextCtrl	m_wndDonVi;
	CGuiLabel		m_wndDuongDungLabel;
	CGuiComboBox	m_wndDuongDung;
	CGuiLabel		m_wndHamLuongLabel;
	CGuiTextCtrl	m_wndHamLuong;
	CGuiLabel		m_wndSoHopDongLabel;
	CGuiComboBox	m_wndSoHopDong;
	CGuiLabel		m_wndDongGoiLabel;
	CGuiTextCtrl	m_wndDongGoi;
	CGuiLabel		m_wndNhaThauLabel;
	CGuiComboBox	m_wndNhaThau;
	CGuiLabel		m_wndQuyetDinhLabel;
	CGuiComboBox	m_wndQuyetDinh;
	CGuiLabel		m_wndNgayCongBoLabel;
	CGuiDateCtrl	m_wndNgayCongBo;
	CGuiLabel		m_wndGroupIDLabel;
	CGuiComboBox	m_wndGroupID;

	CGuiLabel		m_wndPackageLabel;
	CGuiTextCtrl	m_wndPackage;

	CGuiLabel		m_wndMaCSKBLabel;
	CGuiTextCtrl	m_wndMaCSKB;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiNumberCtrl	m_wndUnitPrice;
	CGuiNumberCtrl	m_wndQty;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndExit;
	CGuiListCtrl	m_wndList;
	CGuiTextCtrl	m_wndDrugName;
	CGuiLabel		m_wndQtyLabel;
	CGuiLabel		m_wndUnitPriceLabel;
	CGuiLabel		m_wndTenBietDuocLabel;
	CString	m_szItemid;
	CString	m_szTenBietDuoc;
	CString	m_szMaquanly;
	CString	m_szDuongDungKey;
	CString	m_szHamLuong;
	CString	m_szSoHopDongKey;
	CString	m_szDongGoi;
	CString	m_szNhaThauKey;
	CString	m_szQuyetDinhKey;
	CString	m_szNgayCongBo;
	CString	m_szMaCSKB;
	CString m_szDonVi;
	CString m_szGroupIDKey;
	CString m_szPackage;
	long		m_nQty;
	double	m_nUnitPrice;
	long m_nUID;
	long m_nProductID;
	CString	m_szDrugName;
	CDbfMap m_pms_contractorlistTbl;
	//void			OnItemidChange(); 
	//void			OnItemidSetfocus(); 
	//void			OnItemidKillfocus(); 
	int			OnItemidCheckValue(); 
	//void			OnTenBietDuocChange(); 
	//void			OnTenBietDuocSetfocus(); 
	//void			OnTenBietDuocKillfocus(); 
	int			OnTenBietDuocCheckValue(); 
	int			OnPackageCheckValue(); 
	//void			OnMaquanlyChange(); 
	//void			OnMaquanlySetfocus(); 
	//void			OnMaquanlyKillfocus(); 
	int			OnMaquanlyCheckValue(); 
	int			OnDonViCheckValue(); 
	void			OnDuongDungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDuongDungSelendok(); 
	//void			OnDuongDungSetfocus(); 
	//void			OnDuongDungKillfocus(); 
	long			OnDuongDungLoadData(); 
	void			OnDuongDungAddNew(); 
					
	void			OnGroupIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGroupIDSelendok(); 
	//void			OnDuongDungSetfocus(); 
	//void			OnDuongDungKillfocus(); 
	long			OnGroupIDLoadData(); 
	//void			OnGroupIDAddNew(); 

	//void			OnHamLuongChange(); 
	//void			OnHamLuongSetfocus(); 
	//void			OnHamLuongKillfocus(); 
	int			OnHamLuongCheckValue(); 
	//void			OnSoHopDongChange(); 
	//void			OnSoHopDongSetfocus(); 
	//void			OnSoHopDongKillfocus(); 
	int			OnSoHopDongCheckValue(); 
	long		OnSoHopDongLoadData();
	//void			OnDongGoiChange(); 
	//void			OnDongGoiSetfocus(); 
	//void			OnDongGoiKillfocus(); 
	int			OnDongGoiCheckValue(); 
	void			OnNhaThauSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNhaThauSelendok(); 
	//void			OnNhaThauSetfocus(); 
	//void			OnNhaThauKillfocus(); 
	long			OnNhaThauLoadData(); 
	void			OnNhaThauAddNew(); 
	//void			OnNgayCongBoChange(); 
	//void			OnNgayCongBoSetfocus(); 
	//void			OnNgayCongBoKillfocus(); 
	int			OnNgayCongBoCheckValue(); 
	void			OnQuyetDinhSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnQuyetDinhSelendok(); 
	//void			OnQuyetDinhSetfocus(); 
	//void			OnQuyetDinhKillfocus(); 
	long			OnQuyetDinhLoadData(); 
	void			OnQuyetDinhAddNew(); 
	//void			OnMaCSKBChange(); 
	//void			OnMaCSKBSetfocus(); 
	//void			OnMaCSKBKillfocus(); 
	int			OnMaCSKBCheckValue(); 
	//void			OnUnitPriceChange(); 
	//void			OnUnitPriceSetfocus(); 
	//void			OnUnitPriceKillfocus(); 
	int			OnUnitPriceCheckValue(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
		void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnExitSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnDrugNameChange(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	int			OnDrugNameCheckValue(); 
	CMAContractorList(CWnd *pParent);
	~CMAContractorList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSContractorList(); 
	int OnEditPMSContractorList(); 
	int OnDeletePMSContractorList(); 
	int OnSavePMSContractorList(); 
	int OnCancelPMSContractorList(); 
	int OnPMSContractorListListLoadData(); 
};
#endif
