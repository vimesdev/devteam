#ifndef PHANKHAMBENH_H
#define PHANKHAMBENH_H

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
#include "GuiView.h"
#include "DbField.h"
class CPhanKhamBenh : public CGuiView{
protected:
	long			m_nDocumentNo;
	CString			m_szRecordNo;
public:
	CGuiLabel		m_wndtthanLabel;
	CGuiTextCtrl	m_wndtthan;
	CGuiLabel		m_wndmachLabel;
	CGuiNumberCtrl	m_wndmach;
	CGuiLabel		m_wndndoLabel;
	CGuiNumberCtrl	m_wndndo;
	CGuiLabel		m_wndhapLabel;
	CGuiNumberCtrl	m_wndhap;
	CGuiLabel		m_wndhap2Label;
	CGuiNumberCtrl	m_wndhap2;
	CGuiLabel		m_wndnthoLabel;
	CGuiNumberCtrl	m_wndntho;
	CGuiLabel		m_wndccaoLabel;
	CGuiNumberCtrl	m_wndccao;
	CGuiLabel		m_wndcnangLabel;
	CGuiNumberCtrl	m_wndcnang;
	CGuiLabel		m_wnddinhduongLabel;
	CGuiTextCtrl	m_wnddinhduong;
	CGuiLabel		m_wnddientichdaLabel;
	CGuiTextCtrl	m_wnddientichda;
	CGuiLabel		m_wndcaccoquanLabel;
	CGuiLabel		m_wndthoanLabel;
	CGuiTextCtrl	m_wndthoan;
	CGuiLabel		m_wndhhapLabel;
	CGuiTextCtrl	m_wndhhap;
	CGuiLabel		m_wndthoaLabel;
	CGuiTextCtrl	m_wndthoa;
	CGuiLabel		m_wndtnieuLabel;
	CGuiTextCtrl	m_wndtnieu;
	CGuiLabel		m_wndttkinhLabel;
	CGuiTextCtrl	m_wndttkinh;
	CGuiLabel		m_wndcxkhopLabel;
	CGuiTextCtrl	m_wndcxkhop;
	CGuiLabel		m_wndckkhacLabel;
	CGuiTextCtrl	m_wndckkhac;
	CGuiLabel		m_wndblkhacLabel;
	CGuiTextCtrl	m_wndblkhac;
	CGuiLabel		m_wndxndalamLabel;
	CGuiTextCtrl	m_wndxnghiem;
	CString	m_sztthan;
	long	m_nmach;
	float	m_nndo;
	long	m_nhap;
	long	m_nhap2;
	long	m_nntho;
	long	m_nccao;
	long	m_ncnang;
	CString	m_szdinhduong;
	CString	m_szdientichda;
	CString	m_szthoan;
	CString	m_szhhap;
	CString	m_szthoa;
	CString	m_sztnieu;
	CString	m_szttkinh;
	CString	m_szcxkhop;
	CString	m_szckkhac;
	CString	m_szblkhac;
	CString	m_szxnghiem;
	//void			OntthanChange(); 
	//void			OntthanSetfocus(); 
	//void			OntthanKillfocus(); 
	int			OntthanCheckValue(); 
	//void			OnmachChange(); 
	//void			OnmachSetfocus(); 
	//void			OnmachKillfocus(); 
	int			OnmachCheckValue(); 
	//void			OnndoChange(); 
	//void			OnndoSetfocus(); 
	//void			OnndoKillfocus(); 
	int			OnndoCheckValue(); 
	//void			OnhapChange(); 
	//void			OnhapSetfocus(); 
	//void			OnhapKillfocus(); 
	int			OnhapCheckValue(); 
	//void			Onhap2Change(); 
	//void			Onhap2Setfocus(); 
	//void			Onhap2Killfocus(); 
	int			Onhap2CheckValue();
	//void			OnnthoChange(); 
	//void			OnnthoSetfocus(); 
	//void			OnnthoKillfocus(); 
	int			OnnthoCheckValue(); 
	//void			OnccaoChange(); 
	//void			OnccaoSetfocus(); 
	//void			OnccaoKillfocus(); 
	int			OnccaoCheckValue(); 
	//void			OncnangChange(); 
	//void			OncnangSetfocus(); 
	//void			OncnangKillfocus(); 
	int			OncnangCheckValue();
	//void			OndinhduongChange(); 
	//void			OndinhduongSetfocus(); 
	//void			OndinhduongKillfocus(); 
	int			OndinhduongCheckValue(); 
	//void			OndientichdaChange(); 
	//void			OndientichdaSetfocus(); 
	//void			OndientichdaKillfocus(); 
	int			OndientichdaCheckValue(); 
	//void			OnthoanChange(); 
	//void			OnthoanSetfocus(); 
	//void			OnthoanKillfocus(); 
	int			OnthoanCheckValue(); 
	//void			OnhhapChange(); 
	//void			OnhhapSetfocus(); 
	//void			OnhhapKillfocus(); 
	int			OnhhapCheckValue(); 
	//void			OnthoaChange(); 
	//void			OnthoaSetfocus(); 
	//void			OnthoaKillfocus(); 
	int			OnthoaCheckValue(); 
	//void			OntnieuChange(); 
	//void			OntnieuSetfocus(); 
	//void			OntnieuKillfocus(); 
	int			OntnieuCheckValue(); 
	//void			OnttkinhChange(); 
	//void			OnttkinhSetfocus(); 
	//void			OnttkinhKillfocus(); 
	int			OnttkinhCheckValue(); 
	//void			OncxkhopChange(); 
	//void			OncxkhopSetfocus(); 
	//void			OncxkhopKillfocus(); 
	int			OncxkhopCheckValue(); 
	//void			OnckkhacChange(); 
	//void			OnckkhacSetfocus(); 
	//void			OnckkhacKillfocus(); 
	int			OnckkhacCheckValue(); 
	//void			OnblkhacChange(); 
	//void			OnblkhacSetfocus(); 
	//void			OnblkhacKillfocus(); 
	int			OnblkhacCheckValue(); 
	//void			OnxnghiemChange(); 
	//void			OnxnghiemSetfocus(); 
	//void			OnxnghiemKillfocus(); 
	int			OnxnghiemCheckValue(); 
	//CPhanKhamBenh();
	CPhanKhamBenh(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo);
	~CPhanKhamBenh();
	//void Init(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo);
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPhanKhamBenh(); 
	int OnEditPhanKhamBenh(); 
	int OnDeletePhanKhamBenh(); 
	int OnSavePhanKhamBenh(); 
	int OnCancelPhanKhamBenh(); 
	int OnPhanKhamBenhListLoadData(); 
};
#endif
