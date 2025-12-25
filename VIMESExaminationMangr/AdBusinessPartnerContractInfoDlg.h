#ifndef ADBUSINESSPARTNERCONTRACTINFODLG_H
#define ADBUSINESSPARTNERCONTRACTINFODLG_H

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
class CAdBusinessPartnerContractInfoDlg : public CGuiDialog{
protected:
	
public:
	CWnd*			m_pParentWnd;
	CGuiGroupBox	m_wndContractInfo;
	CGuiLabel		m_wndContractIDLabel;
	CGuiTextCtrl	m_wndContractID;
	CGuiLabel		m_wndExamDateLabel;
	CGuiDateCtrl	m_wndExamDate;
	CGuiLabel		m_wndContractNoLabel;
	CGuiTextCtrl	m_wndContractNo;
	CGuiLabel		m_wndContractDateLabel;
	CGuiDateCtrl	m_wndContractDate;
	CGuiLabel		m_wndInvoiceDateLabel;
	CGuiDateCtrl	m_wndInvoiceDate;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szExamDate;
	CString	m_szContractID;
	CString	m_szContractNo;
	CString	m_szContractDate;
	CString	m_szInvoiceDate;
	CString	m_szTypeKey;
	long	m_nAmount;
	CString	m_szDescription;
	CString	m_szNote;
	CDbfMap m_tblPartnerInfo;
	CString m_szPartnerID;
	int		m_nContractID;
	//void			OnExamDateChange(); 
	//void			OnExamDateSetfocus(); 
	//void			OnExamDateKillfocus(); 
	int			OnExamDateCheckValue(); 
	//void			OnContractIDChange(); 
	//void			OnContractIDSetfocus(); 
	//void			OnContractIDKillfocus(); 
	int			OnContractIDCheckValue(); 
	//void			OnContractNoChange(); 
	//void			OnContractNoSetfocus(); 
	//void			OnContractNoKillfocus(); 
	int			OnContractNoCheckValue(); 
	//void			OnContractDateChange(); 
	//void			OnContractDateSetfocus(); 
	//void			OnContractDateKillfocus(); 
	int			OnContractDateCheckValue(); 
	//void			OnInvoiceDateChange(); 
	//void			OnInvoiceDateSetfocus(); 
	//void			OnInvoiceDateKillfocus(); 
	int			OnInvoiceDateCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CAdBusinessPartnerContractInfoDlg(CWnd *pParent);
	~CAdBusinessPartnerContractInfoDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdBusinessPartnerContractInfoDlg(); 
	int OnEditAdBusinessPartnerContractInfoDlg(); 
	int OnDeleteAdBusinessPartnerContractInfoDlg(); 
	int OnSaveAdBusinessPartnerContractInfoDlg(); 
	int OnCancelAdBusinessPartnerContractInfoDlg(); 
	int OnAdBusinessPartnerContractInfoDlgListLoadData(); 
};
#endif
