#ifndef IVFLABPHIEUTHEODOIPHOIDIALOG_V2_H
#define IVFLABPHIEUTHEODOIPHOIDIALOG_V2_H

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
class CIVFLabPhieuTheoDoiPhoiDialog_v2 : public CGuiDialog{
protected:
	long	m_nOrderId;
	CString m_szNgayTaoId;
public:
	CGuiLabel		m_wndSophieuLabel;
	CGuiTextCtrl	m_wndSophieu;
	CGuiLabel		m_wndNgaychochutLabel;
	CGuiDateCtrl	m_wndNgaychochut;
	CGuiLabel		m_wndTrangthaiLabel;
	CGuiTextCtrl	m_wndTrangthai;
	CGuiLabel		m_wndNguoitaoLabel;
	CGuiTextCtrl	m_wndNguoitao;
	CGuiLabel		m_wndNguoithuchienLabel;
	CGuiComboBox	m_wndNguoithuchien;
	CGuiGroupBox	m_wndSotrung;
	CGuiLabel		m_wndSohosoLabel;
	CGuiNumberCtrl	m_wndSohoso;
	CGuiLabel		m_wndTenbnLabel;
	CGuiTextCtrl	m_wndTenbn;
	CGuiLabel		m_wndDukienLabel;
	CGuiNumberCtrl	m_wndDukien;
	CGuiLabel		m_wndThucthuLabel;
	CGuiNumberCtrl	m_wndThucthu;
	CGuiLabel		m_wndGVLabel;
	CGuiNumberCtrl	m_wndGV;
	CGuiLabel		m_wndMILabel;
	CGuiNumberCtrl	m_wndMI;
	CGuiLabel		m_wndMIILabel;
	CGuiNumberCtrl	m_wndMII;
	CGuiListCtrl	m_wndListNgay;
	CGuiListCtrl	m_wndListCL;
	CGuiButton		m_wndNhapchatluong;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndApproval;
	CString	m_szSophieu;
	CString	m_szNgaychochut;
	CString	m_szTrangthai;
	long	m_nSohoso;
	CString	m_szTenbn;
	long	m_nDukien;
	long	m_nThucthu;
	long	m_nGV;
	long	m_nMI;
	long	m_nMII;
	CString	m_szNguoitao;
	CString	m_szNguoithuchienKey;
	//void			OnSophieuChange(); 
	//void			OnSophieuSetfocus(); 
	//void			OnSophieuKillfocus(); 
	int			OnSophieuCheckValue(); 
	//void			OnNgaychochutChange(); 
	//void			OnNgaychochutSetfocus(); 
	//void			OnNgaychochutKillfocus(); 
	int			OnNgaychochutCheckValue(); 
	//void			OnTrangthaiChange(); 
	//void			OnTrangthaiSetfocus(); 
	//void			OnTrangthaiKillfocus(); 
	int			OnTrangthaiCheckValue(); 
	//void			OnSohosoChange(); 
	//void			OnSohosoSetfocus(); 
	//void			OnSohosoKillfocus(); 
	int			OnSohosoCheckValue(); 
	//void			OnTenbnChange(); 
	//void			OnTenbnSetfocus(); 
	//void			OnTenbnKillfocus(); 
	int			OnTenbnCheckValue(); 
	//void			OnDukienChange(); 
	//void			OnDukienSetfocus(); 
	//void			OnDukienKillfocus(); 
	int			OnDukienCheckValue(); 
	//void			OnThucthuChange(); 
	//void			OnThucthuSetfocus(); 
	//void			OnThucthuKillfocus(); 
	int			OnThucthuCheckValue(); 
	//void			OnGVChange(); 
	//void			OnGVSetfocus(); 
	//void			OnGVKillfocus(); 
	int			OnGVCheckValue(); 
	//void			OnMIChange(); 
	//void			OnMISetfocus(); 
	//void			OnMIKillfocus(); 
	int			OnMICheckValue(); 
	//void			OnMIIChange(); 
	//void			OnMIISetfocus(); 
	//void			OnMIIKillfocus(); 
	int			OnMIICheckValue(); 
	long			OnListNgayLoadData(); 
	void			OnListNgaySelectChange(int nOldItem, int nNewItem); 
	void			OnListNgayDblClick(); 
	int			OnListNgayDeleteItem(); 
	int			OnListNgayAddItem(); 
	long			OnListCLLoadData(); 
	void			OnListCLSelectChange(int nOldItem, int nNewItem); 
	void			OnListCLDblClick(); 
	int			OnListCLDeleteItem(); 
	void			OnNhapchatluongSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnApprovalSelect(); 
	long			OnNguoithuchienLoadData(); 
	CIVFLabPhieuTheoDoiPhoiDialog_v2(CWnd *pParent, long nDocNo, long nId);
	~CIVFLabPhieuTheoDoiPhoiDialog_v2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuTheoDoiPhoiDialog_v2(); 
	int OnEditIVFLabPhieuTheoDoiPhoiDialog_v2(); 
	int OnDeleteIVFLabPhieuTheoDoiPhoiDialog_v2(); 
	int OnSaveIVFLabPhieuTheoDoiPhoiDialog_v2(); 
	int OnCancelIVFLabPhieuTheoDoiPhoiDialog_v2(); 
	int OnIVFLabPhieuTheoDoiPhoiDialog_v2ListLoadData(); 
};
#endif
