#ifndef IVFPHIEUTRUTTDIALOG_H
#define IVFPHIEUTRUTTDIALOG_H

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
class CIVFPhieuTruTTDialog : public CGuiDialog{
protected:
	long		m_nDocumentNo;
	long			m_nId;
	BOOL		m_bAccept;
public:
	CString			m_szIDLocation;
	CGuiGroupBox	m_wndOrderInformation;
	CGuiGroupBox	m_wndDetail;
	CGuiLabel		m_wndso_phieuLabel;
	CGuiTextCtrl	m_wndso_phieu;
	CGuiLabel		m_wnddocnoLabel;
	CGuiNumberCtrl	m_wnddocno;
	CGuiGroupBox	m_wndStorageInformation;
	CGuiLabel		m_wndnguoi_truLabel;
	CGuiTextCtrl	m_wndnguoi_tru;
	CGuiLabel		m_wndnam_sinhLabel;
	CGuiNumberCtrl	m_wndnam_sinh;
	CGuiLabel		m_wndcach_layLabel;
	CGuiComboBox	m_wndcach_lay;
	CGuiLabel		m_wndnoi_layLabel;
	CGuiComboBox	m_wndnoi_lay;
	CGuiLabel		m_wndngay_truLabel;
	CGuiDateCtrl	m_wndngay_tru;
	CGuiLabel		m_wndthoi_luongLabel;
	CGuiNumberCtrl	m_wndthoi_luong;
	CGuiLabel		m_wndthangLabel;
	CGuiLabel		m_wndngay_het_hanLabel;
	CGuiDateCtrl	m_wndngay_het_han;
	CGuiLabel		m_wndthungLabel;
	CGuiComboBox	m_wndthung;
	CGuiLabel		m_wndgiaLabel;
	CGuiComboBox	m_wndgia;
	CGuiLabel		m_wndnhan_vienLabel;
	CGuiComboBox	m_wndnhan_vien;
	CGuiLabel		m_wndNgayhethanmoiLabel;
	CGuiDateCtrl	m_wndNgayhethanmoi;
	CGuiButton		m_wndAddLine;
	CGuiButton		m_wndSaveAndAccept;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndList;
	CString	m_szso_phieu;
	long	m_ndocno;
	CString	m_sznguoi_tru;
	long	m_nnam_sinh;
	CString	m_szcach_layKey;
	CString	m_sznoi_layKey;
	CString	m_szngay_tru;
	long	m_nthoi_luong;
	CString	m_szngay_het_han;
	CString	m_szthungKey;
	CString	m_szgiaKey;
	CString	m_sznhan_vienKey;
	CString	m_szNgayhethanmoi;
	//void			Onso_phieuChange(); 
	//void			Onso_phieuSetfocus(); 
	//void			Onso_phieuKillfocus(); 
	int			Onso_phieuCheckValue(); 
	void		OndocnoLabelSelect();
	//void			OndocnoChange(); 
	//void			OndocnoSetfocus(); 
	//void			OndocnoKillfocus(); 
	int			OndocnoCheckValue(); 
	//void			Onnguoi_truChange(); 
	//void			Onnguoi_truSetfocus(); 
	//void			Onnguoi_truKillfocus(); 
	int			Onnguoi_truCheckValue(); 
	//void			Onnam_sinhChange(); 
	//void			Onnam_sinhSetfocus(); 
	//void			Onnam_sinhKillfocus(); 
	int			Onnam_sinhCheckValue(); 
	void			Oncach_laySelectChange(int nOldItemSel, int nNewItemSel); 
	void			Oncach_laySelendok(); 
	//void			Oncach_laySetfocus(); 
	//void			Oncach_layKillfocus(); 
	long			Oncach_layLoadData(); 
	//void			Oncach_layAddNew(); 
	void			Onnoi_laySelectChange(int nOldItemSel, int nNewItemSel); 
	void			Onnoi_laySelendok(); 
	//void			Onnoi_laySetfocus(); 
	//void			Onnoi_layKillfocus(); 
	long			Onnoi_layLoadData(); 
	//void			Onnoi_layAddNew(); 
	//void			Onngay_truChange(); 
	//void			Onngay_truSetfocus(); 
	//void			Onngay_truKillfocus(); 
	int			Onngay_truCheckValue(); 
	//void			Onthoi_luongChange(); 
	//void			Onthoi_luongSetfocus(); 
	//void			Onthoi_luongKillfocus(); 
	int			Onthoi_luongCheckValue(); 
	//void			Onngay_het_hanChange(); 
	//void			Onngay_het_hanSetfocus(); 
	//void			Onngay_het_hanKillfocus(); 
	int			Onngay_het_hanCheckValue(); 
	void			OnthungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnthungSelendok(); 
	//void			OnthungSetfocus(); 
	//void			OnthungKillfocus(); 
	long			OnthungLoadData(); 
	//void			OnthungAddNew(); 
	void			OngiaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OngiaSelendok(); 
	//void			OngiaSetfocus(); 
	//void			OngiaKillfocus(); 
	long			OngiaLoadData(); 
	//void			OngiaAddNew(); 
	void			Onnhan_vienSelectChange(int nOldItemSel, int nNewItemSel); 
	void			Onnhan_vienSelendok(); 
	//void			Onnhan_vienSetfocus(); 
	//void			Onnhan_vienKillfocus(); 
	long			Onnhan_vienLoadData(); 
	//void			Onnhan_vienAddNew(); 
	void			OnAddLineSelect(); 
	void			OnSaveAndAcceptSelect();
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CIVFPhieuTruTTDialog(CWnd *pParent, long nDocNo, long nId);
	~CIVFPhieuTruTTDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFPhieuTruTTDialog(); 
	int OnEditIVFPhieuTruTTDialog(); 
	int OnDeleteIVFPhieuTruTTDialog(); 
	int OnSaveIVFPhieuTruTTDialog(); 
	int OnCancelIVFPhieuTruTTDialog(); 
	int OnIVFPhieuTruTTDialogListLoadData(); 
};
#endif
