#ifndef IVFLABPHIEUHUYTTDIALOG_H
#define IVFLABPHIEUHUYTTDIALOG_H

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
class CIVFLabPhieuHuyTTDialog : public CGuiDialog{
protected:
public:
	long			m_nOrderID;
	CGuiLabel		m_wndSophieuLabel;
	CGuiTextCtrl	m_wndSophieu;
	CGuiLabel		m_wndLoai_phieuLabel;
	CGuiComboBox	m_wndLoai_phieu;
	CGuiLabel		m_wndNgaytaoLabel;
	CGuiDateCtrl	m_wndNgaytao;
	CGuiLabel		m_wndNguoitaoLabel;
	CGuiTextCtrl	m_wndNguoitao;
	CGuiLabel		m_wndSohosoLabel;
	CGuiNumberCtrl	m_wndSohoso;
	CGuiLabel		m_wndHovatenLabel;
	CGuiTextCtrl	m_wndHovaten;
	CGuiLabel		m_wndNgayThucHienLabel;
	CGuiDateCtrl	m_wndNgayThucHien;
	CGuiLabel		m_wndNguoiThucHienLabel;
	CGuiComboBox	m_wndNguoithuchien;
	CGuiLabel		m_wndSophoiLabel;
	CGuiNumberCtrl	m_wndSophoi;
	CGuiLabel		m_wndNguoi_checklistLabel;
	CGuiComboBox	m_wndNguoi_checklist;
	CGuiLabel		m_wndPhoiLabel;
	CGuiComboBox	m_wndPhoi;
	CGuiButton		m_wndAddLine;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndTerminate;
	CGuiListCtrl	m_wndList;
	CString	m_szSophieu;
	CString	m_szLoai_phieuKey;
	CString	m_szNgaytao;
	CString	m_szNguoitao;
	long	m_nSohoso;
	CString	m_szHovaten;
	CString	m_szNgayThucHien;
	CString	m_szNguoithuchienKey;
	long	m_nSophoi;
	CString	m_szNguoi_checklistKey;
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
	//void			OnNgayThucHienChange(); 
	//void			OnNgayThucHienSetfocus(); 
	//void			OnNgayThucHienKillfocus(); 
	int			OnNgayThucHienCheckValue(); 
	void			OnNguoithuchienSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoithuchienSelendok(); 
	//void			OnNguoithuchienSetfocus(); 
	//void			OnNguoithuchienKillfocus(); 
	long			OnNguoithuchienLoadData(); 
	//void			OnNguoithuchienAddNew(); 
	//void			OnSophoiChange(); 
	//void			OnSophoiSetfocus(); 
	//void			OnSophoiKillfocus(); 
	int			OnSophoiCheckValue(); 
	void			OnNguoi_checklistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoi_checklistSelendok(); 
	//void			OnNguoi_checklistSetfocus(); 
	//void			OnNguoi_checklistKillfocus(); 
	long			OnNguoi_checklistLoadData(); 
	//void			OnNguoi_checklistAddNew(); 
	void			OnPhoiSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPhoiSelendok(); 
	//void			OnPhoiSetfocus(); 
	//void			OnPhoiKillfocus(); 
	long			OnPhoiLoadData(); 
	//void			OnPhoiAddNew(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnTerminateSelect(); 
	void			OnAddLineSelect();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CIVFLabPhieuHuyTTDialog(CWnd *pParent);
	~CIVFLabPhieuHuyTTDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuHuyPhoiDialog(); 
	int OnEditIVFLabPhieuHuyPhoiDialog(); 
	int OnDeleteIVFLabPhieuHuyPhoiDialog(); 
	int OnSaveIVFLabPhieuHuyPhoiDialog(); 
	int OnCancelIVFLabPhieuHuyPhoiDialog(); 
	int OnIVFLabPhieuHuyPhoiDialogListLoadData(); 
};
#endif
