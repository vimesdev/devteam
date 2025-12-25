#ifndef ATMINFORMATIONDIALOG_H
#define ATMINFORMATIONDIALOG_H

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
#include "ATMPatientInfoView.h"
#include "ATMInvoiceView.h"
#include "ATMDocAttachment.h"
class AFX_EXT_CLASS CATMInformationDialog : public CGuiDialog{
protected:
public:
	long		m_nDiscardedId;
	CWnd*		m_pMainFrame;
	CATMPatientInfoView	m_wndPatientInfo;
	CATMInvoiceView		m_wndInvoice;
	CATMDocAttachment	m_wndDocAttach;
	long			m_nPatientNo;
	long			m_nActiveDocument;
	CGuiLabel		m_wndCardIdLabel;
	CGuiTextCtrl	m_wndCardId;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndRegDateLabel;
	CGuiGroupBox	m_wndCardInformation;
	CGuiDateCtrl	m_wndRegDate;
	CGuiLabel		m_wndExpDateLabel;
	CGuiDateCtrl	m_wndExpDate;
	CGuiLabel		m_wndBalanceLabel;
	CGuiNumberCtrl	m_wndBalance;
	CGuiLabel		m_wndDepositLabel;
	CGuiNumberCtrl	m_wndDeposit;
	CGuiTabCtrl		m_wndTab;
	CGuiCheckBox	m_wndActive;
	CGuiCheckBox	m_wndValidDate;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szCardId;
	CString	m_szStatus;
	CString	m_szStatusDesc;
	CString	m_szRegDate;
	CString	m_szExpDate;
	long	m_nBalance;
	long	m_nDeposit;
	BOOL	m_bActive;
	BOOL	m_bValidDate;
	CDbfMap	m_HMS_SMARTCARDTbl;
	CDbfMap m_hms_patientTbl;
	CDbfMap	m_hms_docTbl;
	//void			OnCardIdChange(); 
	//void			OnCardIdSetfocus(); 
	//void			OnCardIdKillfocus(); 
	int			OnCardIdCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnRegDateChange(); 
	//void			OnRegDateSetfocus(); 
	//void			OnRegDateKillfocus(); 
	int			OnRegDateCheckValue(); 
	//void			OnExpDateChange(); 
	//void			OnExpDateSetfocus(); 
	//void			OnExpDateKillfocus(); 
	int			OnExpDateCheckValue(); 
	//void			OnBalanceChange(); 
	//void			OnBalanceSetfocus(); 
	//void			OnBalanceKillfocus(); 
	int			OnBalanceCheckValue(); 
	//void			OnDepositChange(); 
	//void			OnDepositSetfocus(); 
	//void			OnDepositKillfocus(); 
	int			OnDepositCheckValue(); 
	void			OnTabSelectChange(int nOld, int nNew); 
	void			OnActiveSelect(); 
	void			OnValidDateSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CATMInformationDialog(CWnd *pParent, int nMode);
	~CATMInformationDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddATMInformationDialog(); 
	int OnEditATMInformationDialog(); 
	int OnDeleteATMInformationDialog(); 
	int OnSaveATMInformationDialog(); 
	int OnCancelATMInformationDialog(); 
	int OnATMInformationDialogListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
