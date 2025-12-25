#ifndef IVFLABPHIEUCHUYENDIALOG_H
#define IVFLABPHIEUCHUYENDIALOG_H

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
class CIVFLabPhieuChuyenDialog : public CGuiDialog{
protected:
	long	m_nDocumentNo;
	long	m_nOrderID;
	CString GetCheckedData();
public:
	CString			m_szTypeId;
	CGuiLabel		m_wndSophieuLabel;
	CGuiTextCtrl	m_wndSophieu;
	CGuiLabel		m_wndLoai_phieuLabel;
	CGuiComboBox	m_wndLoai_phieu;
	CGuiLabel		m_wndNgayChuyenLabel;
	CGuiDateCtrl	m_wndNgayChuyen;
	CGuiLabel		m_wndNguoiChuyenLabel;
	CGuiComboBox	m_wndNguoichuyen;
	CGuiLabel		m_wndNguoi_checklistLabel;
	CGuiComboBox	m_wndNguoi_checklist;
	CGuiLabel		m_wndKet_quaLabel;
	CGuiComboBox	m_wndKet_qua;
	CGuiLabel		m_wndPhoiLabel;
	CGuiComboBox	m_wndPhoi;
	CGuiButton		m_wndAddLine;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndTerminate;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndUpdateResult;
	CString	m_szSophieu;
	CString	m_szLoai_phieuKey;
	CString	m_szNgayChuyen;
	CString	m_szNguoichuyenKey;
	CString	m_szNguoi_checklistKey;
	CString	m_szKet_quaKey;
	CString	m_szPhoiKey;
	//void			OnSophieuChange(); 
	//void			OnSophieuSetfocus(); 
	//void			OnSophieuKillfocus(); 
	int			OnSophieuCheckValue(); 
	void			OnLoai_phieuSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLoai_phieuSelendok(); 
	//void			OnLoai_phieuSetfocus(); 
	//void			OnLoai_phieuKillfocus(); 
	long			OnLoai_phieuLoadData(); 
	//void			OnLoai_phieuAddNew(); 
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
	void			OnNguoi_checklistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoi_checklistSelendok(); 
	//void			OnNguoi_checklistSetfocus(); 
	//void			OnNguoi_checklistKillfocus(); 
	long			OnNguoi_checklistLoadData(); 
	//void			OnNguoi_checklistAddNew(); 
	void			OnKet_quaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnKet_quaSelendok(); 
	//void			OnKet_quaSetfocus(); 
	//void			OnKet_quaKillfocus(); 
	long			OnKet_quaLoadData(); 
	//void			OnKet_quaAddNew(); 
	void			OnPhoiSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPhoiSelendok(); 
	//void			OnPhoiSetfocus(); 
	//void			OnPhoiKillfocus(); 
	long			OnPhoiLoadData(); 
	//void			OnPhoiAddNew(); 
	void			OnAddLineSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnTerminateSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void		OnUpdateResultSelect();
	CIVFLabPhieuChuyenDialog(CWnd *pParent, long nDocNo, long nID);
	~CIVFLabPhieuChuyenDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuChuyenDialog(); 
	int OnEditIVFLabPhieuChuyenDialog(); 
	int OnDeleteIVFLabPhieuChuyenDialog(); 
	int OnSaveIVFLabPhieuChuyenDialog(); 
	int OnCancelIVFLabPhieuChuyenDialog(); 
	int OnIVFLabPhieuChuyenDialogListLoadData(); 
};
#endif
