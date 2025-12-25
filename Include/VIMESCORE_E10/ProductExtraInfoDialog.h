#ifndef PRODUCTEXTRAINFODIALOG_H
#define PRODUCTEXTRAINFODIALOG_H

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
class CProductExtraInfoDialog : public CGuiDialog{
protected:
public:
	CWnd* m_pWndRef;
	long	m_nPackageID;
	long	m_nContractID;
	CString	m_szAppendixID;
	CString m_szPartnerID;
	long	m_nID;
	long	m_nActiveIngredientID;
	bool	m_bAppendixMode;
	CString	m_szProductTenderID;

	CDbfMap m_product_extra_infoTbl;
	
	CGuiGroupBox	m_wndCurrentInfo;
	CGuiLabel		m_wndHoatchatLabel;
	CGuiComboBox	m_wndHoatchat;
	CGuiLabel		m_wndMahoatchatLabel;
	CGuiTextCtrl	m_wndMahoatchat;
	CGuiLabel		m_wndMathuocbvLabel;
	CGuiComboBox	m_wndMathuocbv;
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
	CGuiTextCtrl	m_wndMaduongdung;
	CGuiLabel		m_wndDuongdungLabel;
	CGuiTextCtrl	m_wndDuongdung;
	CGuiLabel		m_wndDongiaDukienLabel;
	CGuiNumberCtrl	m_wndDongiaDukien;
	CGuiLabel		m_wndDongiaTTLabel;
	CGuiNumberCtrl	m_wndDongiaTT;
	CGuiLabel		m_wndSoluongTTLabel;
	CGuiNumberCtrl	m_wndSoluongTT;
	CGuiLabel		m_wndSoluongDukienLabel;
	CGuiNumberCtrl	m_wndSoluongDukien;
	CGuiLabel		m_wndNuocsxLabel;
	CGuiComboBox	m_wndNuocsx;
	CGuiLabel		m_wndHangsxLabel;
	CGuiComboBox	m_wndHangsx;
	CGuiLabel		m_wndManhomvtytLabel;
	CGuiTextCtrl	m_wndManhomvtyt;
	CGuiLabel		m_wndPackageLabel;
	CGuiTextCtrl	m_wndPackage;
	CGuiLabel		m_wndPackageGrpLabel;
	CGuiTextCtrl	m_wndPackageGrp;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szHoatchatKey;
	CString	m_szMahoatchat;
	CString	m_szMathuocbvKey;
	CString	m_szTenthuoc;
	CString	m_szHamluong;
	CString	m_szDonvitinh;
	CString	m_szSodangky;
	CString	m_szDonggoi;
	CString	m_szMaduongdung;
	CString	m_szDuongdung;
	double	m_nDongiaDukien;
	double	m_nDongiaTT;
	double	m_nSoluongTT;
	double	m_nSoluongDukien;
	CString	m_szNuocsxKey;
	CString	m_szHangsxKey;
	CString	m_szManhomvtyt;
	CString	m_szPackage;
	CString	m_szPackageGrp;
	void			OnHoatchatSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHoatchatSelendok(); 
	//void			OnHoatchatSetfocus(); 
	//void			OnHoatchatKillfocus(); 
	long			OnHoatchatLoadData(); 
	//void			OnHoatchatAddNew(); 
	//void			OnMahoatchatChange(); 
	//void			OnMahoatchatSetfocus(); 
	//void			OnMahoatchatKillfocus(); 
	int			OnMahoatchatCheckValue(); 
	void			OnMathuocbvSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMathuocbvSelendok(); 
	//void			OnMathuocbvSetfocus(); 
	//void			OnMathuocbvKillfocus(); 
	long			OnMathuocbvLoadData(); 
	//void			OnMathuocbvAddNew(); 
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
	//void			OnMaduongdungChange(); 
	//void			OnMaduongdungSetfocus(); 
	//void			OnMaduongdungKillfocus(); 
	int			OnMaduongdungCheckValue(); 
	//void			OnDuongdungChange(); 
	//void			OnDuongdungSetfocus(); 
	//void			OnDuongdungKillfocus(); 
	int			OnDuongdungCheckValue(); 
	//void			OnDongiaDukienChange(); 
	//void			OnDongiaDukienSetfocus(); 
	//void			OnDongiaDukienKillfocus(); 
	int			OnDongiaDukienCheckValue(); 
	//void			OnDongiaTTChange(); 
	//void			OnDongiaTTSetfocus(); 
	//void			OnDongiaTTKillfocus(); 
	int			OnDongiaTTCheckValue(); 
	//void			OnSoluongTTChange(); 
	//void			OnSoluongTTSetfocus(); 
	//void			OnSoluongTTKillfocus(); 
	int			OnSoluongTTCheckValue(); 
	//void			OnSoluongDukienChange(); 
	//void			OnSoluongDukienSetfocus(); 
	//void			OnSoluongDukienKillfocus(); 
	int			OnSoluongDukienCheckValue(); 
	void			OnNuocsxSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNuocsxSelendok(); 
	//void			OnNuocsxSetfocus(); 
	//void			OnNuocsxKillfocus(); 
	long			OnNuocsxLoadData(); 
	//void			OnNuocsxAddNew(); 
	void			OnHangsxSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHangsxSelendok(); 
	//void			OnHangsxSetfocus(); 
	//void			OnHangsxKillfocus(); 
	long			OnHangsxLoadData(); 
	//void			OnHangsxAddNew(); 
	//void			OnManhomvtytChange(); 
	//void			OnManhomvtytSetfocus(); 
	//void			OnManhomvtytKillfocus(); 
	int			OnManhomvtytCheckValue(); 
	//void			OnPackageChange(); 
	//void			OnPackageSetfocus(); 
	//void			OnPackageKillfocus(); 
	int			OnPackageCheckValue(); 
	//void			OnPackageGrpChange(); 
	//void			OnPackageGrpSetfocus(); 
	//void			OnPackageGrpKillfocus(); 
	int			OnPackageGrpCheckValue(); 
	void			OnAddNewProduct();
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CProductExtraInfoDialog(CWnd *pParent, int nMode, CString szAppendixID=_T(""));
	~CProductExtraInfoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddProductExtraInfoDialog(); 
	int OnEditProductExtraInfoDialog(); 
	int OnDeleteProductExtraInfoDialog(); 
	int OnSaveProductExtraInfoDialog(); 
	int OnCancelProductExtraInfoDialog(); 
	int OnProductExtraInfoDialogListLoadData(); 
};
#endif
