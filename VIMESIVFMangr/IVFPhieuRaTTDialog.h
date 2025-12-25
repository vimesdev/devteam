#ifndef IVFPHIEURATTDIALOG_H
#define IVFPHIEURATTDIALOG_H

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

class CIVFPhieuRaTTDialog : public CGuiDialog{
protected:
	long	m_nDocNo;
	long	m_nOrderId;
	BOOL	m_bApproval;
public:
	CGuiLabel		m_wndso_phieuLabel;
	CGuiTextCtrl	m_wndso_phieu;
	CGuiLabel		m_wndngay_raLabel;
	CGuiDateCtrl	m_wndngay_ra;
	CGuiLabel		m_wndTrangthaiLabel;
	CGuiTextCtrl	m_wndTrangthai;
	CGuiLabel		m_wnddocnoLabel;
	CGuiNumberCtrl	m_wnddocno;
	CGuiLabel		m_wndnguoi_truLabel;
	CGuiTextCtrl	m_wndnguoi_tru;
	CGuiLabel		m_wndnguoi_raLabel;
	CGuiComboBox	m_wndnguoi_ra;
	CGuiLabel		m_wndNguoichecklistLabel;
	CGuiLabel		m_wndthungLabel;
	CGuiComboBox	m_wndNguoichecklist;
	CGuiComboBox	m_wndthung;
	CGuiLabel		m_wndgiaLabel;
	CGuiComboBox	m_wndgia;
	CGuiButton		m_wndAddLine;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndSaveAndAccept;
	CGuiListCtrl	m_wndList;
	CString	m_szso_phieu;
	CString	m_szngay_ra;
	CString	m_szTrangthai;
	CString	m_sznguoi_tru;
	CString	m_sznguoi_raKey;
	CString	m_szNguoichecklistKey;
	CString	m_szthungKey;
	CString	m_szgiaKey;
	//void			Onso_phieuChange(); 
	//void			Onso_phieuSetfocus(); 
	//void			Onso_phieuKillfocus(); 
	int			Onso_phieuCheckValue(); 
	//void			Onngay_raChange(); 
	//void			Onngay_raSetfocus(); 
	//void			Onngay_raKillfocus(); 
	int			Onngay_raCheckValue(); 
	//void			OnTrangthaiChange(); 
	//void			OnTrangthaiSetfocus(); 
	//void			OnTrangthaiKillfocus(); 
	int			OnTrangthaiCheckValue(); 
	//void			OndocnoChange(); 
	//void			OndocnoSetfocus(); 
	//void			OndocnoKillfocus(); 
	int			OndocnoCheckValue(); 
	//void			Onnguoi_truChange(); 
	//void			Onnguoi_truSetfocus(); 
	//void			Onnguoi_truKillfocus(); 
	int			Onnguoi_truCheckValue(); 
	void			Onnguoi_raSelectChange(int nOldItemSel, int nNewItemSel); 
	void			Onnguoi_raSelendok(); 
	//void			Onnguoi_raSetfocus(); 
	//void			Onnguoi_raKillfocus(); 
	long			Onnguoi_raLoadData(); 
	//void			Onnguoi_raAddNew(); 
	void			OnNguoichecklistSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoichecklistSelendok(); 
	//void			OnNguoichecklistSetfocus(); 
	//void			OnNguoichecklistKillfocus(); 
	long			OnNguoichecklistLoadData(); 
	//void			OnNguoichecklistAddNew(); 
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
	void			OnAddLineSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnSaveAndAcceptSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CIVFPhieuRaTTDialog(CWnd *pParent, long nOrderID, BOOL bApproval);
	~CIVFPhieuRaTTDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFPhieuRaTTDialog(); 
	int OnEditIVFPhieuRaTTDialog(); 
	int OnDeleteIVFPhieuRaTTDialog(); 
	int OnSaveIVFPhieuRaTTDialog(); 
	int OnCancelIVFPhieuRaTTDialog(); 
	int OnIVFPhieuRaTTDialogListLoadData(); 
};
#endif
