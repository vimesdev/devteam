#ifndef TMPHIEUSOKETTRUOCMOV2_H
#define TMPHIEUSOKETTRUOCMOV2_H

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
#include "ReportDocument.h"
class AFX_EXT_CLASS CTMPhieuSoKetTruocMo_V2 : public CGuiDialog
{	
	long			m_nDocumentNo;
	int				m_nRefIdx;
	long			m_nOrderID;
protected:
public:
    
	CGuiGroupBox	m_wndPreoperationSummarize;
	CGuiLabel		m_wndDocNoLabel;
	CGuiNumberCtrl	m_wndDocNo;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndOperationNameLabel;
	CGuiTextCtrl	m_wndOperationName;
	CGuiLabel		m_wndls;
	CGuiTextCtrl	m_wndlamsang;
	CGuiButton		m_wndAdd;
	CGuiLabel		m_wndcls;
	CGuiListCtrl	m_wndcanlamsang;
	CGuiLabel		m_wndcdtm;
	CGuiTextCtrl	m_wndchandoantruocmo;
	CGuiLabel		m_wnddkkhdt;
	CGuiLabel		m_wndtlcm;
	CGuiTextCtrl	m_wndtienluongcuocmo;
	CGuiLabel		m_wndytnc;
	CGuiTextCtrl	m_wndyeutonguyco;
	CGuiLabel		m_wnddtvt;
	CGuiTextCtrl	m_wnddutruvattu;
	CGuiLabel		m_wnddtm;
	CGuiTextCtrl	m_wnddutrumau;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndCancel;
	CGuiLabel		m_wndxnkhac;
	CGuiTextCtrl	m_wndxetnghiemkhac;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndCloneData;

	CGuiLabel		m_wndChu_tri_tqmLabel;
	CGuiComboBox	m_wndChu_tri_tqm;
	CGuiLabel		m_wndThanh_vien_tham_giaLabel;
	CGuiComboBox	m_wndThanh_vien_tham_gia;
	CGuiLabel		m_wndThong_qua_mo_lucLabel;
	CGuiDateTimeCtrl	m_wndThong_qua_mo_luc;
	CGuiTextCtrl	m_wndDs_thanh_vien;


	CGuiLabel		m_wndHuongdieutrilabel;
	CGuiTextCtrl	m_wndHuongdieutri;
	CGuiLabel		m_wndYkienthaoluanlabel;
	CGuiTextCtrl	m_wndYkienthaoluan;

	long	m_nDocNo;
	CString	m_szName;
	CString	m_szOperationName;
	CString	m_szlamsang;
	CString	m_szchandoantruocmo;
	CString	m_sztienluongcuocmo;
	CString	m_szyeutonguyco;
	CString	m_szdutruvattu;
	CString	m_szdutrumau;
	CString m_szxetnghiemkhac;

	CString	m_szChu_tri_tqmKey;
	CString	m_szThanh_vien_tham_giaKey;
	CString	m_szThong_qua_mo_luc;
	CString	m_szDs_thanh_vien;
	CString	m_szHuongdieutri;
	CString	m_szYkienthaoluan;
	CString m_szbthan;
	bool m_bIsAddTem;
	int OncanlamsangAddItem();
	int	OncanlamsangDeleteItem(); 

	//void			OnDocNoChange(); 
	//void			OnDocNoSetfocus(); 
	//void			OnDocNoKillfocus(); 
	int			OnDocNoCheckValue(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnOperationNameChange(); 
	//void			OnOperationNameSetfocus(); 
	//void			OnOperationNameKillfocus(); 
	int			OnOperationNameCheckValue(); 
	//void			OnlamsangChange(); 
	//void			OnlamsangSetfocus(); 
	//void			OnlamsangKillfocus(); 
	int			OnlamsangCheckValue(); 
	void			OnAddSelect(); 
	long			OncanlamsangLoadData(); 
	void			OncanlamsangSelectChange(int nOldItem, int nNewItem); 
	void			OncanlamsangDblClick(); 

	void			OnThanh_vien_tham_giaSelendok(); 
	//void			OnchandoantruocmoChange(); 
	//void			OnchandoantruocmoSetfocus(); 
	//void			OnchandoantruocmoKillfocus(); 
	int			OnchandoantruocmoCheckValue(); 
	//void			OntienluongcuocmoChange(); 
	//void			OntienluongcuocmoSetfocus(); 
	//void			OntienluongcuocmoKillfocus(); 
	int			OntienluongcuocmoCheckValue(); 
	//void			OnyeutonguycoChange(); 
	//void			OnyeutonguycoSetfocus(); 
	//void			OnyeutonguycoKillfocus(); 
	int			OnyeutonguycoCheckValue(); 
	//void			OndutruvattuChange(); 
	//void			OndutruvattuSetfocus(); 
	//void			OndutruvattuKillfocus(); 
	int			OndutruvattuCheckValue(); 
	//void			OndutrumauChange(); 
	//void			OndutrumauSetfocus(); 
	//void			OndutrumauKillfocus(); 
	int			OndutrumauCheckValue(); 
	void			OnSaveSelect(); 
	void			OnPrintSelect(); 
	void			OnPrint(); 
	void			OnPrint2();
	void			OnPrint3();
	void			OnCancelSelect(); 
	void			OnUpdateSelect();
	void			OnCloseSelect();
	//void			OnxetnghiemkhacChange(); 
	//void			OnxetnghiemkhacSetfocus(); 
	//void			OnxetnghiemkhacKillfocus(); 
	int			OnxetnghiemkhacCheckValue();
	long		OnChu_tri_tqmLoadData(); 
	long		OnThanh_vien_tham_giaLoadData();
	int			OnThong_qua_mo_lucCheckValue();
	int			OnDs_thanh_vienCheckValue();
	int			OnHuongdieutriCheckValue();
	int			OnYkienthaoluanCheckValue(); 

	CTMPhieuSoKetTruocMo_V2(CWnd *pParent, int nMode, long nDocNo, int nRefIdx, long nOrderID);
	~CTMPhieuSoKetTruocMo_V2();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPhieuSoKetTruocMo(); 
	int OnEditPhieuSoKetTruocMo(); 
	int OnDeletePhieuSoKetTruocMo(); 
	int OnSavePhieuSoKetTruocMo(); 
	int OnCancelPhieuSoKetTruocMo(); 
	int OnPhieuSoKetTruocMoListLoadData(); 
	void OnPrintResultSection(CReport* pRpt, CString szLineIds);
	void OnCloneDataSelect();
};
#endif