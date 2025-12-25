#ifndef IVFDONORINFOVIEW_H
#define IVFDONORINFOVIEW_H

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
class CIVFDonorInfoView : public CGuiView{
protected:
public:
	long			m_nDocumentNo;
	long			m_nPatientNo;
	CGuiGroupBox	m_wndProfiles;
	CGuiLabel		m_wndDonorNameLabel;
	CGuiTextCtrl	m_wndDonorName;
	CGuiLabel		m_wndDonorDOBLabel;
	CGuiNumberCtrl	m_wndDonorDOB;
	CGuiLabel		m_wndDDocumentNoLabel;
	CGuiNumberCtrl	m_wndDDocumentNo;
	CGuiButton		m_wndHFind;
	CGuiLabel		m_wndDonorJobLabel;
	CGuiComboBox	m_wndDonorJob;
	CGuiLabel		m_wndDonorIDNumLabel;
	CGuiTextCtrl	m_wndDonorIDNum;
	CGuiLabel		m_wndDIDIssueDateLabel;
	CGuiDateCtrl	m_wndDIDIssueDate;
	CGuiLabel		m_wndDIDIssuePlaceLabel;
	CGuiTextCtrl	m_wndDIDIssuePlace;
	CGuiLabel		m_wndDonorPlaceOfOriginLabel;
	CGuiComboBox	m_wndDonorPlaceOfOrigin;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndPhoneLabel;
	CGuiTextCtrl	m_wndPhone;
	CGuiLabel		m_wndDonorEmailLabel;
	CGuiTextCtrl	m_wndDonorEmail;
	CGuiCheckBox	m_wndArmyObject;
	CString	m_szDonorName;
	long	m_nDonorDOB;
	long	m_nDDocumentNo;
	CString	m_szDonorJobKey;
	CString	m_szDonorIDNum;
	CString	m_szDIDIssueDate;
	CString	m_szDIDIssuePlace;
	CString	m_szDonorPlaceOfOriginKey;
	CString	m_szAddress;
	CString	m_szPhone;
	CString	m_szDonorEmail;
	BOOL	m_bArmyObject;
	//void			OnDonorNameChange(); 
	//void			OnDonorNameSetfocus(); 
	//void			OnDonorNameKillfocus(); 
	int			OnDonorNameCheckValue(); 
	//void			OnDonorDOBChange(); 
	//void			OnDonorDOBSetfocus(); 
	//void			OnDonorDOBKillfocus(); 
	int			OnDonorDOBCheckValue(); 
	//void			OnDDocumentNoChange(); 
	//void			OnDDocumentNoSetfocus(); 
	//void			OnDDocumentNoKillfocus(); 
	int			OnDDocumentNoCheckValue(); 
	void			OnHFindSelect(); 
	void			OnDonorJobSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDonorJobSelendok(); 
	//void			OnDonorJobSetfocus(); 
	//void			OnDonorJobKillfocus(); 
	long			OnDonorJobLoadData(); 
	//void			OnDonorJobAddNew(); 
	//void			OnDonorIDNumChange(); 
	//void			OnDonorIDNumSetfocus(); 
	//void			OnDonorIDNumKillfocus(); 
	int			OnDonorIDNumCheckValue(); 
	//void			OnDIDIssueDateChange(); 
	//void			OnDIDIssueDateSetfocus(); 
	//void			OnDIDIssueDateKillfocus(); 
	int			OnDIDIssueDateCheckValue(); 
	//void			OnDIDIssuePlaceChange(); 
	//void			OnDIDIssuePlaceSetfocus(); 
	//void			OnDIDIssuePlaceKillfocus(); 
	int			OnDIDIssuePlaceCheckValue(); 
	void			OnDonorPlaceOfOriginSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDonorPlaceOfOriginSelendok(); 
	//void			OnDonorPlaceOfOriginSetfocus(); 
	//void			OnDonorPlaceOfOriginKillfocus(); 
	long			OnDonorPlaceOfOriginLoadData(); 
	//void			OnDonorPlaceOfOriginAddNew(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnPhoneChange(); 
	//void			OnPhoneSetfocus(); 
	//void			OnPhoneKillfocus(); 
	int			OnPhoneCheckValue(); 
	//void			OnDonorEmailChange(); 
	//void			OnDonorEmailSetfocus(); 
	//void			OnDonorEmailKillfocus(); 
	int			OnDonorEmailCheckValue(); 
	void			OnArmyObjectSelect(); 
	CIVFDonorInfoView();
	~CIVFDonorInfoView();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFDonorInfoView(); 
	int OnEditIVFDonorInfoView(); 
	int OnDeleteIVFDonorInfoView(); 
	int OnSaveIVFDonorInfoView(); 
	int OnCancelIVFDonorInfoView(); 
	int OnIVFDonorInfoViewListLoadData(); 
};
#endif
