#ifndef IVFSINGLEADDITIONALINFOVIEW_H
#define IVFSINGLEADDITIONALINFOVIEW_H

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
#include "GuiView.h"
#include "DbField.h"
class CIVFSingleAdditionalInfoView : public CGuiView{
protected:
public:
	long			m_nDocumentNo;
	long			m_nPatientNo;
	CGuiGroupBox	m_wndProfiles;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndPatientDOBLabel;
	CGuiNumberCtrl	m_wndPatientDOB;
	CGuiLabel		m_wndDDocumentNoLabel;
	CGuiNumberCtrl	m_wndDDocumentNo;
	CGuiButton		m_wndHFind;
	CGuiLabel		m_wndPatientJobLabel;
	CGuiComboBox	m_wndPatientJob;
	CGuiLabel		m_wndPatientIDNumLabel;
	CGuiTextCtrl	m_wndPatientIDNum;
	CGuiLabel		m_wndDIDIssueDateLabel;
	CGuiDateCtrl	m_wndDIDIssueDate;
	CGuiLabel		m_wndDIDIssuePlaceLabel;
	CGuiTextCtrl	m_wndDIDIssuePlace;
	CGuiLabel		m_wndPatientPlaceOfOriginLabel;
	CGuiComboBox	m_wndPatientPlaceOfOrigin;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndPatientEmailLabel;
	CGuiTextCtrl	m_wndPatientEmail;
	CGuiCheckBox	m_wndArmyObject;
	CString	m_szPatientName;
	long	m_nPatientDOB;
	long	m_nDDocumentNo;
	CString	m_szPatientJobKey;
	CString	m_szPatientIDNum;
	CString	m_szDIDIssueDate;
	CString	m_szDIDIssuePlace;
	CString	m_szPatientPlaceOfOriginKey;
	CString	m_szAddress;
	CString	m_szPhone;
	CString	m_szPatientEmail;
	BOOL	m_bArmyObject;
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnPatientDOBChange(); 
	//void			OnPatientDOBSetfocus(); 
	//void			OnPatientDOBKillfocus(); 
	int			OnPatientDOBCheckValue(); 
	//void			OnDDocumentNoChange(); 
	//void			OnDDocumentNoSetfocus(); 
	//void			OnDDocumentNoKillfocus(); 
	int			OnDDocumentNoCheckValue(); 
	void			OnHFindSelect(); 
	void			OnPatientJobSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPatientJobSelendok(); 
	//void			OnPatientJobSetfocus(); 
	//void			OnPatientJobKillfocus(); 
	long			OnPatientJobLoadData(); 
	//void			OnPatientJobAddNew(); 
	//void			OnPatientIDNumChange(); 
	//void			OnPatientIDNumSetfocus(); 
	//void			OnPatientIDNumKillfocus(); 
	int			OnPatientIDNumCheckValue(); 
	//void			OnDIDIssueDateChange(); 
	//void			OnDIDIssueDateSetfocus(); 
	//void			OnDIDIssueDateKillfocus(); 
	int			OnDIDIssueDateCheckValue(); 
	//void			OnDIDIssuePlaceChange(); 
	//void			OnDIDIssuePlaceSetfocus(); 
	//void			OnDIDIssuePlaceKillfocus(); 
	int			OnDIDIssuePlaceCheckValue(); 
	void			OnPatientPlaceOfOriginSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPatientPlaceOfOriginSelendok(); 
	//void			OnPatientPlaceOfOriginSetfocus(); 
	//void			OnPatientPlaceOfOriginKillfocus(); 
	long			OnPatientPlaceOfOriginLoadData(); 
	//void			OnPatientPlaceOfOriginAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnPatientEmailChange(); 
	//void			OnPatientEmailSetfocus(); 
	//void			OnPatientEmailKillfocus(); 
	int			OnPatientEmailCheckValue(); 
	void			OnArmyObjectSelect(); 
	CIVFSingleAdditionalInfoView();
	~CIVFSingleAdditionalInfoView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFPatientInfoView(); 
	int OnEditIVFPatientInfoView(); 
	int OnDeleteIVFPatientInfoView(); 
	int OnSaveIVFPatientInfoView(); 
	int OnCancelIVFPatientInfoView(); 
	int OnIVFPatientInfoViewListLoadData(); 
	void	OnPrint();
};
#endif
