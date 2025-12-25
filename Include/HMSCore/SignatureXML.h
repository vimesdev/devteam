#ifndef SIGNATUREXML_H
#define SIGNATUREXML_H

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
class CSignatureXML : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndCreateddateLabel;
	CGuiDateTimeCtrl	m_wndCreateddate;
	CGuiLabel		m_wndCreatedbyLabel;
	CGuiTextCtrl	m_wndCreatedby;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndSexLabel;
	CGuiComboBox	m_wndSex;
	CGuiLabel		m_wndDobLabel;
	CGuiDateTimeCtrl	m_wndDob;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndSignatureLabel;
	CGuiTextCtrl	m_wndSignatureBy;
	CGuiLabel		m_wndSignatureTimeLabel;
	CGuiDateTimeCtrl	m_wndSignatureTime;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiButton		m_wndSignature;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPreview;
	CGuiLabel		m_wndStatusXMLLabel;
	CGuiTextCtrl	m_wndStatusXML;
	CGuiLabel		m_wndXMLIDLabel;
	CGuiTextCtrl	m_wndXMLID;
	CString	m_szCreateddate;
	CString	m_szCreatedby;
	CString	m_szPatientName;
	CString	m_szSexKey;
	CString	m_szDob;
	CString	m_szAddress;
	CString	m_szSignatureBy;
	CString	m_szSignatureTime;
	CString	m_szStatus;
	CString	m_szStatusXML;
	CString	m_szXMLID;
	CString m_szID;
	CString m_szFileName;
	CString m_szRptName;
	CString m_szType;
	long m_nDocNo, m_nOrderID;
	CString m_szSignatureID;
	CString m_szFormID;
	CString GetStatus();

	CString m_szUserName, m_szPassword, m_szAccess_token, m_szToken_ID;
	//void			OnCreateddateChange(); 
	//void			OnCreateddateSetfocus(); 
	//void			OnCreateddateKillfocus(); 
	int			OnCreateddateCheckValue(); 
	//void			OnCreatedbyChange(); 
	//void			OnCreatedbySetfocus(); 
	//void			OnCreatedbyKillfocus(); 
	int			OnCreatedbyCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	void			OnSexSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnSexSelendok(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	long			OnSexLoadData(); 
	//void			OnSexAddNew(); 
	//void			OnDobChange(); 
	//void			OnDobSetfocus(); 
	//void			OnDobKillfocus(); 
	int			OnDobCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnSignatureByChange(); 
	//void			OnSignatureBySetfocus(); 
	//void			OnSignatureByKillfocus(); 
	int			OnSignatureByCheckValue(); 
	//void			OnSignatureTimeChange(); 
	//void			OnSignatureTimeSetfocus(); 
	//void			OnSignatureTimeKillfocus(); 
	int			OnSignatureTimeCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	void			OnSignatureSelect(); 
	void			OnCancelSelect(); 
	void			OnPreviewSelect(); 
	//void			OnStatusXMLChange(); 
	//void			OnStatusXMLSetfocus(); 
	//void			OnStatusXMLKillfocus(); 
	int			OnStatusXMLCheckValue(); 
	//void			OnXMLIDChange(); 
	//void			OnXMLIDSetfocus(); 
	//void			OnXMLIDKillfocus(); 
	int			OnXMLIDCheckValue(); 
	bool OnCreateXML_Chungsinh(long nID, long nDocumentNo);
	bool OnCreateXML_baotu(long nDocumentNo);
	bool OnSigXML_Chungsinh(long nID, long nDocumentNo);
	bool OnPostXML(long nID, long nDocumentNo, CString szDataXML,int nLoaiHS);
	void OnGetToken();
	void OnPostApi_giayksk();
	bool OnCreateXML_capgiayksk(long nID, long nDocumentNo,CString* szFileNameReturn);

	CSignatureXML(CWnd *pParent,CString szForm=_T(""));
	~CSignatureXML();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddSignatureXML(); 
	int OnEditSignatureXML(); 
	int OnDeleteSignatureXML(); 
	int OnSaveSignatureXML(); 
	int OnCancelSignatureXML(); 
	int OnSignatureXMLListLoadData(); 
	void*	WriteXMLData(LPCTSTR lpszNodeName, CRecord* rs, void* xmlNode, bool bUpper=true);
	
};
#endif
