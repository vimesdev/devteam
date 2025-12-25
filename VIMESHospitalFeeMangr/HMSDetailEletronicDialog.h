#ifndef HMSDETAILELETRONICDIALOG_H
#define HMSDETAILELETRONICDIALOG_H

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
class CHMSDetailEletronicDialog : public CGuiDialog
{
protected:
public:
	CGuiGroupBox	m_wndDepositInformation;
	CGuiLabel		m_wndPatternLabel;
	CGuiTextCtrl	m_wndPattern;
	CGuiLabel		m_wndNguoiPHLabel;
	CGuiTextCtrl	m_wndNguoiPH;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndDatePHLabel;
	CGuiDateTimeCtrl	m_wndDatePH;
	CGuiLabel		m_wndPrintCountLabel;
	CGuiNumberCtrl	m_wndPrintCount;
	CGuiLabel		m_wndReceiptNoLabel;
	CGuiNumberCtrl	m_wndReceiptNo;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndEdit;
	CGuiLabel		m_wndSerialLabel;
	CGuiTextCtrl	m_wndSerial;
	CGuiButton		m_wndPrint;
	CGuiLabel		m_wndCusNameLabel;
	CGuiTextCtrl	m_wndCusName;
	CGuiLabel		m_wndBuyerLabel;
	CGuiTextCtrl	m_wndBuyer;
	CGuiLabel		m_wndCusTaxCodeLabel;
	CGuiTextCtrl	m_wndCusTaxCode;
	CGuiLabel		m_wndDescription;
	CGuiLabel		m_wndType;
	CGuiButton		m_wndCreate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndDelete;

	CString	m_szPattern;
	CString	m_szNguoiPH;
	CString	m_szStatusKey;
	CString	m_szDatePH;
	CString m_szDeptType;
	CString m_szInvUserID;
	CString m_szInvPassword;
	CString m_szCusName;

	long	m_nPrintCount;
	CString	m_szReceiptNo;
	long	m_nAmount;
	long	m_nDocumentNo;
	double	m_nKey;
	double	m_nPkey;
	CString	m_szAddress;
	CString	m_szSerial;
	CString	m_szBuyer;
	CString	m_szCusTaxCode;
	CDbfMap	m_hms_electronicTbl;

	//void			OnPatternChange(); 
	//void			OnPatternSetfocus(); 
	//void			OnPatternKillfocus(); 
	int			OnPatternCheckValue(); 
	//void			OnNguoiPHChange(); 
	//void			OnNguoiPHSetfocus(); 
	//void			OnNguoiPHKillfocus(); 
	int			OnNguoiPHCheckValue(); 
	void			OnStatusSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStatusSelendok(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	long			OnStatusLoadData(); 
	//void			OnStatusAddNew(); 
	//void			OnDatePHChange(); 
	//void			OnDatePHSetfocus(); 
	//void			OnDatePHKillfocus(); 
	int			OnDatePHCheckValue(); 
	//void			OnPrintCountChange(); 
	//void			OnPrintCountSetfocus(); 
	//void			OnPrintCountKillfocus(); 
	int			OnPrintCountCheckValue(); 
	//void			OnReceiptNoChange(); 
	//void			OnReceiptNoSetfocus(); 
	//void			OnReceiptNoKillfocus(); 
	int			OnReceiptNoCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnPostSelect(); 
	void			OnCloseSelect(); 
	void			OnEditSelect();
	int				OnPostPayment();
	int				OnPostDrug();
	int				OnPostRefund();

	int				OnPostPayment_ITT(long nPkey);
	int				OnPostDrug_ITT(long nPkey);
	int				OnPostRefund_ITT(long nPkey);

	//void			OnSerialChange(); 
	//void			OnSerialSetfocus(); 
	//void			OnSerialKillfocus(); 
	int			OnSerialCheckValue(); 
	void			OnPrintSelect(); 
	//void			OnBuyerChange(); 
	//void			OnBuyerSetfocus(); 
	//void			OnBuyerKillfocus(); 
	int			OnBuyerCheckValue(); 
	//void			OnCusTaxCodeChange(); 
	//void			OnCusTaxCodeSetfocus(); 
	//void			OnCusTaxCodeKillfocus(); 
	int			OnCusTaxCodeCheckValue(); 
	void			OnCreateSelect(); 
	void			OnSaveSelect(); 
	void			OnDeleteSelect(); 
	void	PrintHD();
	void	PrintBienbaninsaoHD();
	void	PrintBienbandieuchinhHD();
	void	PrintBienbanthuhoiHD();
	void	PrintGiaycamdoanHD();

	CHMSDetailEletronicDialog(CWnd *pParent);
	~CHMSDetailEletronicDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDetailEletronicDialog(); 
	int OnEditHMSDetailEletronicDialog(); 
	int OnDeleteHMSDetailEletronicDialog(); 
	int OnSaveHMSDetailEletronicDialog();
	int OnSaveHMSDetailEletronicDialog_IV();
	int OnSaveHMSDetailEletronicDialog_RF();
	int OnCancelHMSDetailEletronicDialog(); 
	int OnHMSDetailEletronicDialogListLoadData(); 
};
#endif
