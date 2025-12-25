#ifndef IVFLABPHIEUGIAHANDIALOG_H
#define IVFLABPHIEUGIAHANDIALOG_H

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
class CIVFLabPhieuGiaHanDialog : public CGuiDialog{
protected:
	long			m_nDocNo;
	long			m_nID;
	BOOL			m_bAccept;
public:
	CGuiLabel		m_wndSophieuLabel;
	CGuiTextCtrl	m_wndSophieu;
	CGuiLabel		m_wndNguoigiahanLabel;
	CGuiComboBox	m_wndNguoi_gia_han;
	CGuiLabel		m_wndNgayGiaHanLabel;
	CGuiDateCtrl	m_wndngay_gia_han;
	CGuiLabel		m_wndThoiluongLabel;
	CGuiNumberCtrl	m_wndThoiluong;
	CGuiLabel		m_wndNgayhethanLabel;
	CGuiDateCtrl	m_wndNgayhethan;
	CGuiLabel		m_wndDiengiaiLabel;
	CGuiTextCtrl	m_wndDiengiai;
	CGuiLabel		m_wndPhieutruLabel;
	CGuiComboBox	m_wndphieu_tru;
	CGuiButton		m_wndAddLine;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndAccept;
	CGuiListCtrl	m_wndList;
	CString	m_szSophieu;
	CString	m_szNguoi_gia_hanKey;
	CString	m_szngay_gia_han;
	long	m_nThoiluong;
	CString	m_szNgayhethan;
	CString	m_szDiengiai;
	CString	m_szphieu_truKey;
	//void			OnSophieuChange(); 
	//void			OnSophieuSetfocus(); 
	//void			OnSophieuKillfocus(); 
	int			OnSophieuCheckValue(); 
	void			OnNguoi_gia_hanSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoi_gia_hanSelendok(); 
	//void			OnNguoi_gia_hanSetfocus(); 
	//void			OnNguoi_gia_hanKillfocus(); 
	long			OnNguoi_gia_hanLoadData(); 
	//void			OnNguoi_gia_hanAddNew(); 
	//void			Onngay_gia_hanChange(); 
	//void			Onngay_gia_hanSetfocus(); 
	//void			Onngay_gia_hanKillfocus(); 
	int			Onngay_gia_hanCheckValue(); 
	//void			OnThoiluongChange(); 
	//void			OnThoiluongSetfocus(); 
	//void			OnThoiluongKillfocus(); 
	int			OnThoiluongCheckValue(); 
	//void			OnNgayhethanChange(); 
	//void			OnNgayhethanSetfocus(); 
	//void			OnNgayhethanKillfocus(); 
	int			OnNgayhethanCheckValue(); 
	//void			OnDiengiaiChange(); 
	//void			OnDiengiaiSetfocus(); 
	//void			OnDiengiaiKillfocus(); 
	int			OnDiengiaiCheckValue(); 
	void			Onphieu_truSelectChange(int nOldItemSel, int nNewItemSel); 
	void			Onphieu_truSelendok(); 
	//void			Onphieu_truSetfocus(); 
	//void			Onphieu_truKillfocus(); 
	long			Onphieu_truLoadData(); 
	//void			Onphieu_truAddNew(); 
	void			OnAddLineSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnAcceptSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CIVFLabPhieuGiaHanDialog(CWnd *pParent, long nDocNo, long nId);
	~CIVFLabPhieuGiaHanDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuGiaHanDialog(); 
	int OnEditIVFLabPhieuGiaHanDialog(); 
	int OnDeleteIVFLabPhieuGiaHanDialog(); 
	int OnSaveIVFLabPhieuGiaHanDialog(); 
	int OnCancelIVFLabPhieuGiaHanDialog(); 
	int OnIVFLabPhieuGiaHanDialogListLoadData(); 
};
#endif
