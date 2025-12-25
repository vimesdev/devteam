#ifndef SELECTCERTIFICATEDIALOG_H
#define SELECTCERTIFICATEDIALOG_H

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
#include <wincrypt.h>
static HCERTSTORE	hStore = NULL;

class CSelectCertificateDialog : public CGuiDialog{
protected:
    

public:
	CString			m_szSerial;
	CString			m_szCertData;
	int				m_nCertLength;
	CString			m_szSignPartner;
	CString			m_szSignUserID;
	CString			m_szSignPasswd;
	CString			m_szInformation;
	CString			m_szComment;
	BOOL			m_bServerSignature;
	BOOL			m_bSignTitle;
	BOOL			m_bCommentInput;

	bool	m_bPending;
    CString m_szSignatureId;
    CString m_szSignField;
    long	m_nDocumentNo;

	HCERTSTORE		m_hCertStore;
	PCCERT_CONTEXT	m_pCertContext;

	CGuiGroupBox	m_wndSignatureInformation;
	CGuiTextCtrl	m_wndSignatureName;
	CGuiButton		m_wndSignExtra;
	CGuiTextCtrl	m_wndInformation;
	CGuiTextCtrl	m_wndComment;
	CGuiLabel		m_wndPasswordLabel;
	CGuiTextCtrl	m_wndPassword;
	CGuiLabel		m_wndConfirmLabel;
	CGuiTextCtrl	m_wndConfirm;
	CGuiButton		m_wndDetail;
	CGuiCheckBox	m_wndServerSign;
	CGuiCheckBox	m_wndTitleSigner;
	CGuiCheckBox	m_wndCommentInput;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szSignatureName;
	CString	m_szPassword;
	CString	m_szConfirm;
	void			OnSignExtraSelect(); 
	//void			OnSignatureNameChange(); 
	//void			OnSignatureNameSetfocus(); 
	//void			OnSignatureNameKillfocus(); 
	int			OnSignatureNameCheckValue(); 
	//void			OnPasswordChange(); 
	//void			OnPasswordSetfocus(); 
	//void			OnPasswordKillfocus(); 
	int			OnPasswordCheckValue(); 
	//void			OnConfirmChange(); 
	//void			OnConfirmSetfocus(); 
	//void			OnConfirmKillfocus(); 
	int			OnConfirmCheckValue(); 
	void			OnDetailSelect(); 
	void			OnServerSignSelect(); 
	void			OnTitleSignerSelect(); 
	void			OnCommentInputSelect(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CSelectCertificateDialog(CWnd *pParent, int nMode);
	~CSelectCertificateDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSelectCertificateDialog(); 
	int OnEditSelectCertificateDialog(); 
	int OnDeleteSelectCertificateDialog(); 
	int OnSaveSelectCertificateDialog(); 
	int OnCancelSelectCertificateDialog(); 
	int OnSelectCertificateDialogListLoadData(); 
};
#endif
