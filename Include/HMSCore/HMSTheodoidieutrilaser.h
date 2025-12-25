#ifndef CHMSTHEODOIDIEUTRILASER_H
#define CHMSTHEODOIDIEUTRILASER_H

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
class CHMSTheodoidieutrilaser : public CGuiDialog
{
protected:	
public:
	CGuiGroupBox	m_wndThongtinbenhnhan;
	CGuiTextCtrl	m_wndGioi;
	CGuiLabel		m_wndGioiLabel;
	CGuiLabel		m_wndHovatenLabel;
	CGuiTextCtrl	m_wndHovaten;
	CGuiLabel		m_wndNamsinhlabel;
	CGuiTextCtrl	m_wndNamsinh;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndNgaydieutriLabel;
	CGuiDateCtrl	m_wndNgaydieutri;
	CGuiLabel		m_wndSolandieutrilabel;
	CGuiNumberCtrl	m_wndSoladieutri;
	CGuiLabel		m_wndSoluotdieutriLabel;
	CGuiNumberCtrl	m_wndSoluot;
	CGuiLabel		m_wndBuocsonglabel;
	CGuiTextCtrl	m_wndBuocsong;
	CGuiLabel		m_wndDorongtialabel;
	CGuiTextCtrl	m_wndDorongtia;
	CGuiLabel		m_wndNangluongLabel;
	CGuiTextCtrl	m_wndNangluong;
	CGuiLabel		m_wndTansuatlabel;
	CGuiTextCtrl	m_wndTansuat;
	CGuiLabel		m_wndChedolamlanhlabel;
	CGuiTextCtrl	m_wndChedolamlanh;	
	CGuiLabel		m_wndnguoituvanlabel;
	CGuiComboBox	m_wndnguoituvan;
	CGuiLabel		m_wndbsthuchienlabel;
	CGuiComboBox	m_wndbsthuchien;
	CGuiLabel		m_wndddphulabel;
	CGuiComboBox	m_wndddphu;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndClose;
	CString	m_szGioi;
	CString	m_szHovaten;
	CString	m_szNamsinh;
	CString	m_szNgaydieutri;
	long	m_nSoladieutri;
	long	m_nSoluot;
	CString	m_szBuocsong;
	CString	m_szDorongtia;
	CString	m_szNangluong;
	CString	m_szTansuat;
	CString	m_szChedolamlanh;
	CString	m_sznguoituvanKey;
	CString	m_szbsthuchienKey;
	CString	m_szddphuKey;
	long m_nOrderID;
	int	 OnSoluotCheckValue();
	CDbfMap HMS_LASERTREATMENT_LIST_Tbl;
	int m_nIndex;	
	//void			OnGioiChange(); 
	//void			OnGioiSetfocus(); 
	//void			OnGioiKillfocus(); 
	int			OnGioiCheckValue(); 
	//void			OnHovatenChange(); 
	//void			OnHovatenSetfocus(); 
	//void			OnHovatenKillfocus(); 
	int			OnHovatenCheckValue(); 
	//void			OnNamsinhChange(); 
	//void			OnNamsinhSetfocus(); 
	//void			OnNamsinhKillfocus(); 
	int			OnNamsinhCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnNgaydieutriChange(); 
	//void			OnNgaydieutriSetfocus(); 
	//void			OnNgaydieutriKillfocus(); 
	int			OnNgaydieutriCheckValue(); 
	//void			OnSoladieutriChange(); 
	//void			OnSoladieutriSetfocus(); 
	//void			OnSoladieutriKillfocus(); 
	int			OnSoladieutriCheckValue(); 
	//void			OnBuocsongChange(); 
	//void			OnBuocsongSetfocus(); 
	//void			OnBuocsongKillfocus(); 
	int			OnBuocsongCheckValue(); 
	//void			OnDorongtiaChange(); 
	//void			OnDorongtiaSetfocus(); 
	//void			OnDorongtiaKillfocus(); 
	int			OnDorongtiaCheckValue(); 
	//void			OnNangluongChange(); 
	//void			OnNangluongSetfocus(); 
	//void			OnNangluongKillfocus(); 
	int			OnNangluongCheckValue(); 
	//void			OnTansuatChange(); 
	//void			OnTansuatSetfocus(); 
	//void			OnTansuatKillfocus(); 
	int			OnTansuatCheckValue(); 
	//void			OnChedolamlanhChange(); 
	//void			OnChedolamlanhSetfocus(); 
	//void			OnChedolamlanhKillfocus(); 
	int			OnChedolamlanhCheckValue();
	long			OnnguoituvanLoadData();
	long			OnbsthuchienLoadData();
	long			OnddphuLoadData();
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect();
	void			OnPrintSelect();
	void			OnExportSelect(); 
	void			OnCloseSelect(); 
	CHMSTheodoidieutrilaser(CWnd *pParent);
	~CHMSTheodoidieutrilaser();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddCHMSTheodoidieutrilaser(); 
	int OnEditCHMSTheodoidieutrilaser(); 
	int OnDeleteCHMSTheodoidieutrilaser(); 
	int OnSaveCHMSTheodoidieutrilaser(); 
	int OnCancelCHMSTheodoidieutrilaser(); 
	int OnCHMSTheodoidieutrilaserListLoadData(); 
};
#endif