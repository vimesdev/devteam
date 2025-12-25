#ifndef IVFLABPHIEUCHUYENDIDIALOG_H
#define IVFLABPHIEUCHUYENDIDIALOG_H

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
class CIVFLabPhieuChuyenDiDialog : public CGuiDialog{
protected:
	CString	m_szLoai_phieuKey;
	long	m_nOrder_id;
	CString m_szMark;
public:
	CGuiLabel		m_wndSophieuLabel;
	CGuiTextCtrl	m_wndSophieu;
	CGuiLabel		m_wndTrang_thaiLabel;
	CGuiTextCtrl	m_wndTrang_thai;
	CGuiLabel		m_wndNgaytaoLabel;
	CGuiDateCtrl	m_wndNgaytao;
	CGuiLabel		m_wndNguoitaoLabel;
	CGuiTextCtrl	m_wndNguoitao;
	CGuiLabel		m_wndSohosoLabel;
	CGuiNumberCtrl	m_wndSohoso;
	CGuiLabel		m_wndHovatenLabel;
	CGuiTextCtrl	m_wndHovaten;
	CGuiLabel		m_wndNgayChuyenLabel;
	CGuiDateCtrl	m_wndNgayChuyen;
	CGuiLabel		m_wndNguoiChuyenLabel;
	CGuiComboBox	m_wndNguoichuyen;
	CGuiLabel		m_wndNoi_nhanLabel;
	CGuiComboBox	m_wndNoi_nhan;
	CGuiLabel		m_wndNguoi_checklistLabel;
	CGuiComboBox	m_wndNguoi_checklist;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndTerminate;
	CGuiLabel		m_wndSophoiLabel;
	CGuiNumberCtrl	m_wndSophoi;

	CString	m_szSophieu;
	CString	m_szTrang_thai;
	CString	m_szNgaytao;
	CString	m_szNguoitao;
	long	m_nSohoso;
	CString	m_szHovaten;
	CString	m_szNgayChuyen;
	CString	m_szNguoichuyenKey;
	CString	m_szNoi_nhanKey;
	CString	m_szNguoi_checklistKey;
	long	m_nSophoi;

	//void			OnSophieuChange(); 
	//void			OnSophieuSetfocus(); 
	//void			OnSophieuKillfocus(); 
	int			OnSophieuCheckValue(); 
	//void			OnTrang_thaiChange(); 
	//void			OnTrang_thaiSetfocus(); 
	//void			OnTrang_thaiKillfocus(); 
	int			OnTrang_thaiCheckValue(); 
	//void			OnNgaytaoChange(); 
	//void			OnNgaytaoSetfocus(); 
	//void			OnNgaytaoKillfocus(); 
	int			OnNgaytaoCheckValue(); 
	//void			OnNguoitaoChange(); 
	//void			OnNguoitaoSetfocus(); 
	//void			OnNguoitaoKillfocus(); 
	int			OnNguoitaoCheckValue(); 
	//void			OnSohosoChange(); 
	//void			OnSohosoSetfocus(); 
	//void			OnSohosoKillfocus(); 
	int			OnSohosoCheckValue(); 
	//void			OnHovatenChange(); 
	//void			OnHovatenSetfocus(); 
	//void			OnHovatenKillfocus(); 
	int			OnHovatenCheckValue(); 
	//void			OnNgayChuyenChange(); 
	//void			OnNgayChuyenSetfocus(); 
	//void			OnNgayChuyenKillfocus(); 
	int			OnNgayChuyenCheckValue(); 
	void			OnNguoichuyenSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoichuyenSelendok(); 
	//void			OnNguoichuyenSetfocus(); 
	//void			OnNguoichuyenKillfocus(); 
	long			OnNguoichuyenLoadData(); 
	//void			OnNguoichuyenAddNew(); 
	void			OnNoi_nhanSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNoi_nhanSelendok(); 
	//void			OnNoi_nhanSetfocus(); 
	//void			OnNoi_nhanKillfocus(); 
	long			OnNoi_nhanLoadData(); 
	//void			OnNoi_nhanAddNew(); 
	void			OnNguoi_checklistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoi_checklistSelendok(); 
	//void			OnNguoi_checklistSetfocus(); 
	//void			OnNguoi_checklistKillfocus(); 
	long			OnNguoi_checklistLoadData(); 
	//void			OnNguoi_checklistAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnTerminateSelect(); 
	CIVFLabPhieuChuyenDiDialog(CWnd *pParent, long nOrder_id, CString szLoai_phieuKey);
	~CIVFLabPhieuChuyenDiDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuChuyenDiDialog(); 
	int OnEditIVFLabPhieuChuyenDiDialog(); 
	int OnDeleteIVFLabPhieuChuyenDiDialog(); 
	int OnSaveIVFLabPhieuChuyenDiDialog(); 
	int OnCancelIVFLabPhieuChuyenDiDialog(); 
	int OnIVFLabPhieuChuyenDiDialogListLoadData(); 
};
#endif
