#ifndef ADCONTRACTLIQUIDATIONDLG_H
#define ADCONTRACTLIQUIDATIONDLG_H

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
class CAdContractLiquidationDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndOrderNoLabel;
	CGuiTextCtrl	m_wndOrderNo;
	CGuiLabel		m_wndContractIDLabel;
	CGuiNumberCtrl	m_wndContractID;
	CGuiLabel		m_wndStatusLabel;
	CGuiComboBox	m_wndStatus;
	CGuiLabel		m_wndPostedByLabel;
	CGuiComboBox	m_wndPostedBy;
	CGuiLabel		m_wndPostedDateLabel;
	CGuiDateCtrl	m_wndPostedDate;
	CGuiLabel		m_wndImportedAmountLabel;
	CGuiNumberCtrl	m_wndImportedAmount;
	CGuiLabel		m_wndPaidAmountLabel;
	CGuiNumberCtrl	m_wndPaidAmount;
	CGuiLabel		m_wndUnpaidAmountLabel;
	CGuiNumberCtrl	m_wndUnpaidAmount;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	long	m_nOrderID;
	CString	m_szOrderNo;
	long	m_nContractID;
	CString	m_szStatusKey;
	CString	m_szPostedByKey;
	CString	m_szPostedDate;
	long	m_nImportedAmount;
	long	m_nPaidAmount;
	long	m_nUnpaidAmount;
	CDbfMap	m_AD_CONTRACT_LIQUIDATIONTbl;
	//void			OnOrderIDChange(); 
	//void			OnOrderIDSetfocus(); 
	//void			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	//void			OnOrderNoChange(); 
	//void			OnOrderNoSetfocus(); 
	//void			OnOrderNoKillfocus(); 
	int			OnOrderNoCheckValue(); 
	//void			OnContractIDChange(); 
	//void			OnContractIDSetfocus(); 
	//void			OnContractIDKillfocus(); 
	int			OnContractIDCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	void			OnPostedBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPostedBySelendok(); 
	//void			OnPostedBySetfocus(); 
	//void			OnPostedByKillfocus(); 
	long			OnPostedByLoadData(); 
	//void			OnPostedByAddNew(); 
	//void			OnPostedDateChange(); 
	//void			OnPostedDateSetfocus(); 
	//void			OnPostedDateKillfocus(); 
	int			OnPostedDateCheckValue(); 
	//void			OnImportedAmountChange(); 
	//void			OnImportedAmountSetfocus(); 
	//void			OnImportedAmountKillfocus(); 
	int			OnImportedAmountCheckValue(); 
	//void			OnPaidAmountChange(); 
	//void			OnPaidAmountSetfocus(); 
	//void			OnPaidAmountKillfocus(); 
	int			OnPaidAmountCheckValue(); 
	//void			OnUnpaidAmountChange(); 
	//void			OnUnpaidAmountSetfocus(); 
	//void			OnUnpaidAmountKillfocus(); 
	int			OnUnpaidAmountCheckValue(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CAdContractLiquidationDlg(CWnd *pParent);
	~CAdContractLiquidationDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdContractLiquidationDlg(); 
	int OnEditAdContractLiquidationDlg(); 
	int OnDeleteAdContractLiquidationDlg(); 
	int OnSaveAdContractLiquidationDlg(); 
	int OnCancelAdContractLiquidationDlg(); 
	int OnAdContractLiquidationDlgListLoadData(); 
};
#endif
