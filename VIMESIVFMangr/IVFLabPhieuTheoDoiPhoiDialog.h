#ifndef IVFLABPHIEUTHEODOIPHOIDIALOG_H
#define IVFLABPHIEUTHEODOIPHOIDIALOG_H

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
class CIVFLabPhieuTheoDoiPhoiDialog : public CGuiDialog{
protected:
	long			m_nID;
public:
	CGuiLabel		m_wndSo_phieuLabel;
	CGuiTextCtrl	m_wndSo_phieu;
	CGuiLabel		m_wndDoc_noLabel;
	CGuiNumberCtrl	m_wndDoc_no;
	CGuiLabel		m_wndNgay_choc_hutLabel;
	CGuiDateCtrl	m_wndNgay_choc_hut;
	CGuiLabel		m_wndSo_trung_thuLabel;
	CGuiNumberCtrl	m_wndSo_trung_thu;
	CGuiLabel		m_wndSo_trung_gvLabel;
	CGuiNumberCtrl	m_wndSo_trung_gv;
	CGuiLabel		m_wndSo_trung_miLabel;
	CGuiNumberCtrl	m_wndSo_trung_mi;
	CGuiLabel		m_wndSo_trung_truong_thanhLabel;
	CGuiNumberCtrl	m_wndSo_trung_truong_thanh;
	CGuiLabel		m_wndSo_trung_thu_tinhLabel;
	CGuiNumberCtrl	m_wndSo_trung_thu_tinh;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndTerminate;
	CGuiButton		m_wndResult;
	CGuiListCtrl	m_wndList;
	CString	m_szSo_phieu;
	long	m_nDoc_no;
	CString	m_szNgay_choc_hut;
	long	m_nSo_trung_thu;
	long	m_nSo_trung_gv;
	long	m_nSo_trung_mi;
	long	m_nSo_trung_truong_thanh;
	long	m_nSo_trung_thu_tinh;
	//void			OnSo_phieuChange(); 
	//void			OnSo_phieuSetfocus(); 
	//void			OnSo_phieuKillfocus(); 
	int			OnSo_phieuCheckValue(); 
	//void			OnDoc_noChange(); 
	//void			OnDoc_noSetfocus(); 
	//void			OnDoc_noKillfocus(); 
	int			OnDoc_noCheckValue(); 
	//void			OnNgay_choc_hutChange(); 
	//void			OnNgay_choc_hutSetfocus(); 
	//void			OnNgay_choc_hutKillfocus(); 
	int			OnNgay_choc_hutCheckValue(); 
	//void			OnSo_trung_thuChange(); 
	//void			OnSo_trung_thuSetfocus(); 
	//void			OnSo_trung_thuKillfocus(); 
	int			OnSo_trung_thuCheckValue(); 
	//void			OnSo_trung_truong_thanhChange(); 
	//void			OnSo_trung_truong_thanhSetfocus(); 
	//void			OnSo_trung_truong_thanhKillfocus(); 
	int			OnSo_trung_truong_thanhCheckValue(); 
	//void			OnSo_trung_thu_tinhChange(); 
	//void			OnSo_trung_thu_tinhSetfocus(); 
	//void			OnSo_trung_thu_tinhKillfocus(); 
	int			OnSo_trung_thu_tinhCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnTerminateSelect(); 
	void			OnResultSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CIVFLabPhieuTheoDoiPhoiDialog(CWnd *pParent, long nDocNo, long nID);
	~CIVFLabPhieuTheoDoiPhoiDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuTheoDoiPhoiDialog(); 
	int OnEditIVFLabPhieuTheoDoiPhoiDialog(); 
	int OnDeleteIVFLabPhieuTheoDoiPhoiDialog(); 
	int OnSaveIVFLabPhieuTheoDoiPhoiDialog(); 
	int OnCancelIVFLabPhieuTheoDoiPhoiDialog(); 
	int OnIVFLabPhieuTheoDoiPhoiDialogListLoadData(); 
};
#endif
