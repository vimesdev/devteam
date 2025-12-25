#ifndef TMBENHAN_H
#define TMBENHAN_H

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
#include "GuiView.h"
#include "DbField.h"
class CTMBenhAn : public CGuiView{
protected:
	long			m_nDocumentNo;
	CString			m_szRecordNo;
public:
	CGuiGroupBox	m_wndAllInformation;
	CGuiGroupBox	m_wndphanhoibenhLabel;
	CGuiGroupBox	m_wndphankhambenhLabel;
	CGuiGroupBox	m_wndphanketluanLabel;
	CGuiLabel		m_wndvaolucLabel;
	CGuiDateTimeCtrl	m_wndvaoluc;
	CGuiLabel		m_wndvaongayLabel;
	CGuiNumberCtrl	m_wndvaongay;
	CGuiLabel		m_wndvaongay2Label;
	CGuiLabel		m_wndlidoLabel;
	CGuiTextCtrl	m_wndlido;
	CGuiLabel		m_wndbenhsuLabel;
	CGuiTextCtrl	m_wndbenhsu;
	CGuiLabel		m_wndtiensuLabel;
	CGuiLabel		m_wndbtLabel;
	CGuiTextCtrl	m_wndbthan;
	CGuiLabel		m_wndgdLabel;
	CGuiTextCtrl	m_wndgdinh;
	CGuiLabel		m_wndtthanLabel;
	CGuiTextCtrl	m_wndtthan;
	CGuiLabel		m_wndmachLabel;
	CGuiTextCtrl	m_wndmach;
	CGuiLabel		m_wndndoLabel;
	CGuiTextCtrl	m_wndndo;
	CGuiLabel		m_wndhapLabel;
	CGuiTextCtrl	m_wndhap;
	CGuiLabel		m_wndnthoLabel;
	CGuiTextCtrl	m_wndntho;
	CGuiLabel		m_wndccaoLabel;
	CGuiTextCtrl	m_wndccao;
	CGuiLabel		m_wndcnangLabel;
	CGuiTextCtrl	m_wndcnang;
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
	CGuiLabel		m_wndbenhanLabel;
	CGuiTextCtrl	m_wndbenhan;
	CGuiLabel		m_wndchandoanLabel;
	CGuiLabel		m_wndcdsbLabel;
	CGuiTextCtrl	m_wndcdsb;
	CGuiLabel		m_wndcdpbLabel;
	CGuiTextCtrl	m_wndcdpb;
	CGuiLabel		m_wndcdxdLabel;
	CGuiTextCtrl	m_wndcdxd;
	CGuiLabel		m_wndkhxnLabel;
	CGuiTextCtrl	m_wndkhxn;
	CGuiLabel		m_wndkhdtLabel;
	CGuiTextCtrl	m_wndkhdt;
	CGuiLabel		m_wndtluongLabel;
	CGuiTextCtrl	m_wndtluong;

	CString	m_szvaoluc;
	int		m_nvaongay;
	CString	m_szlido;
	CString	m_szbenhsu;
	CString	m_szbthan;
	CString	m_szgdinh;
	CString	m_sztthan;
	CString	m_szmach;
	CString	m_szndo;
	CString	m_szhap;
	CString	m_szntho;
	CString	m_szccao;
	CString	m_szcnang;
	CString	m_szthoan;
	CString	m_szhhap;
	CString	m_szthoa;
	CString	m_sztnieu;
	CString	m_szttkinh;
	CString	m_szcxkhop;
	CString	m_szckkhac;
	CString	m_szblkhac;
	CString	m_szxnghiem;
	CString	m_szbenhan;
	CString	m_szcdsb;
	CString	m_szcdpb;
	CString	m_szcdxd;
	CString	m_szkhxn;
	CString	m_szkhdt;
	CString	m_sztluong;
	//void			OnvaolucChange(); 
	//void			OnvaolucSetfocus(); 
	//void			OnvaolucKillfocus(); 
	int			OnvaolucCheckValue(); 
	//void			OnvaongayChange(); 
	//void			OnvaongaySetfocus(); 
	//void			OnvaongayKillfocus(); 
	int			OnvaongayCheckValue(); 
	//void			OnlidoChange(); 
	//void			OnlidoSetfocus(); 
	//void			OnlidoKillfocus(); 
	int			OnlidoCheckValue(); 
	//void			OnbenhsuChange(); 
	//void			OnbenhsuSetfocus(); 
	//void			OnbenhsuKillfocus(); 
	int			OnbenhsuCheckValue(); 
	//void			OnbthanChange(); 
	//void			OnbthanSetfocus(); 
	//void			OnbthanKillfocus(); 
	int			OnbthanCheckValue(); 
	//void			OngdinhChange(); 
	//void			OngdinhSetfocus(); 
	//void			OngdinhKillfocus(); 
	int			OngdinhCheckValue(); 
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
	//void			OnbenhanChange(); 
	//void			OnbenhanSetfocus(); 
	//void			OnbenhanKillfocus(); 
	int			OnbenhanCheckValue(); 
	//void			OncdsbChange(); 
	//void			OncdsbSetfocus(); 
	//void			OncdsbKillfocus(); 
	int			OncdsbCheckValue(); 
	//void			OncdpbChange(); 
	//void			OncdpbSetfocus(); 
	//void			OncdpbKillfocus(); 
	int			OncdpbCheckValue(); 
	//void			OncdxdChange(); 
	//void			OncdxdSetfocus(); 
	//void			OncdxdKillfocus(); 
	int			OncdxdCheckValue(); 
	//void			OnkhxnChange(); 
	//void			OnkhxnSetfocus(); 
	//void			OnkhxnKillfocus(); 
	int			OnkhxnCheckValue(); 
	//void			OnkhdtChange(); 
	//void			OnkhdtSetfocus(); 
	//void			OnkhdtKillfocus(); 
	int			OnkhdtCheckValue(); 
	//void			OntluongChange(); 
	//void			OntluongSetfocus(); 
	//void			OntluongKillfocus(); 
	int			OntluongCheckValue(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	void			OnCancelSelect(); 
	CTMBenhAn(CWnd *pParent, int nMode, long nDocNo, CString szRecordNo);
	~CTMBenhAn();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMBenhAn(); 
	int OnEditTMBenhAn(); 
	int OnDeleteTMBenhAn(); 
	int OnSaveTMBenhAn(); 
	int OnCancelTMBenhAn(); 
	int OnTMBenhAnListLoadData(); 
};



#endif
