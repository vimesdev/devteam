#ifndef PAYMENTORDERDIALOG_H
#define PAYMENTORDERDIALOG_H

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
class CPaymentOrderDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndTrong_do_group;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndDateLabel;
	CGuiDateCtrl	m_wndDate;
	CGuiLabel		m_wndProposerLabel;
	CGuiTextCtrl	m_wndProposer;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndApprovalAmountLabel;
	CGuiNumberCtrl	m_wndApprovalAmount;
	CGuiLabel		m_wndReferenceLabel;
	CGuiTextCtrl	m_wndReference;
	CGuiLabel		m_wndPaymentMethodLabel;
	CGuiComboBox	m_wndPaymentMethod;
	CGuiLabel		m_wndChi_truc_tiep_label;
	CGuiNumberCtrl	m_wndChi_truc_tiep;
	CGuiLabel		m_wndChi_mua_vat_tu_hang_hoa_label;
	CGuiNumberCtrl	m_wndChi_mua_vat_tu_hang_hoa;
	CGuiLabel		m_wndChi_mua_tscd_khong_qua_lap_dat_label;
	CGuiNumberCtrl	m_wndChi_mua_tscd_khong_qua_lap_dat;
	CGuiLabel		m_wndChi_mua_tscd_phai_qua_lap_dat_label;
	CGuiNumberCtrl	m_wndChi_mua_tscd_phai_qua_lap_dat;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szTypeKey;
	CString	m_szDate;
	CString	m_szProposer;
	CString	m_szDescription;
	long	m_nAmount;
	long	m_nApprovalAmount;
	CString	m_szReference;
	CString	m_szPaymentMethodKey;
	long	m_nChi_truc_tiep;
	long	m_nChi_mua_vat_tu_hang_hoa;
	long	m_nChi_mua_tscd_khong_qua_lap_dat;
	long	m_nChi_mua_tscd_phai_qua_lap_dat;
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnDateChange(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	int			OnDateCheckValue(); 
	//void			OnProposerChange(); 
	//void			OnProposerSetfocus(); 
	//void			OnProposerKillfocus(); 
	int			OnProposerCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnApprovalAmountChange(); 
	//void			OnApprovalAmountSetfocus(); 
	//void			OnApprovalAmountKillfocus(); 
	int			OnApprovalAmountCheckValue(); 
	//void			OnReferenceChange(); 
	//void			OnReferenceSetfocus(); 
	//void			OnReferenceKillfocus(); 
	int			OnReferenceCheckValue(); 
	void			OnPaymentMethodSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPaymentMethodSelendok(); 
	//void			OnPaymentMethodSetfocus(); 
	//void			OnPaymentMethodKillfocus(); 
	long			OnPaymentMethodLoadData(); 
	//void			OnPaymentMethodAddNew(); 
	//void			OnChi_truc_tiepChange(); 
	//void			OnChi_truc_tiepSetfocus(); 
	//void			OnChi_truc_tiepKillfocus(); 
	int			OnChi_truc_tiepCheckValue(); 
	//void			OnChi_mua_vat_tu_hang_hoaChange(); 
	//void			OnChi_mua_vat_tu_hang_hoaSetfocus(); 
	//void			OnChi_mua_vat_tu_hang_hoaKillfocus(); 
	int			OnChi_mua_vat_tu_hang_hoaCheckValue(); 
	//void			OnChi_mua_tscd_khong_qua_lap_datChange(); 
	//void			OnChi_mua_tscd_khong_qua_lap_datSetfocus(); 
	//void			OnChi_mua_tscd_khong_qua_lap_datKillfocus(); 
	int			OnChi_mua_tscd_khong_qua_lap_datCheckValue(); 
	//void			OnChi_mua_tscd_phai_qua_lap_datChange(); 
	//void			OnChi_mua_tscd_phai_qua_lap_datSetfocus(); 
	//void			OnChi_mua_tscd_phai_qua_lap_datKillfocus(); 
	int			OnChi_mua_tscd_phai_qua_lap_datCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CPaymentOrderDialog(CWnd *pParent);
	~CPaymentOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPaymentOrderDialog(); 
	int OnEditPaymentOrderDialog(); 
	int OnDeletePaymentOrderDialog(); 
	int OnSavePaymentOrderDialog(); 
	int OnCancelPaymentOrderDialog(); 
	int OnPaymentOrderDialogListLoadData(); 
};
#endif
