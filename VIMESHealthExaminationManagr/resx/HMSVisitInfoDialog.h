#ifndef HMSVISITINFODIALOG_H
#define HMSVISITINFODIALOG_H

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
class CHMSVisitInfoDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndVisitInformation;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndYobLabel;
	CGuiTextCtrl	m_wndYob;
	CGuiLabel		m_wndGenderLabel;
	CGuiTextCtrl	m_wndGender;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndCardIDLabel;
	CGuiTextCtrl	m_wndCardID;
	CGuiLabel		m_wndVisitToTimeLabel;
	CGuiDateTimeCtrl	m_wndVisitToTime;
	CGuiLabel		m_wndTimeOutLabel;
	CGuiDateTimeCtrl	m_wndTimeOut;
	CGuiLabel		m_wndVisitorLabel;
	CGuiTextCtrl	m_wndVisitor;
	CGuiLabel		m_wndDepositLabel;
	CGuiNumberCtrl	m_wndDeposit;
	CGuiLabel		m_wndRefundLabel;
	CGuiNumberCtrl	m_wndRefund;
	CGuiLabel		m_wndConsignmentLabel;
	CGuiTextCtrl	m_wndConsignment;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szPatientName;
	CString	m_szYob;
	CString	m_szGender;
	CString	m_szAddress;
	CString	m_szCardID;
	CString	m_szVisitToTime;
	CString	m_szTimeOut;
	CString	m_szVisitor;
	long	m_nDeposit;
	long	m_nRefund;
	CString	m_szConsignment;
	CString	m_szNote;
	CDbfMap	m_hms_visitinfoTbl;
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnYobChange(); 
	//void			OnYobSetfocus(); 
	//void			OnYobKillfocus(); 
	int			OnYobCheckValue(); 
	//void			OnGenderChange(); 
	//void			OnGenderSetfocus(); 
	//void			OnGenderKillfocus(); 
	int			OnGenderCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	//void			OnCardIDChange(); 
	//void			OnCardIDSetfocus(); 
	//void			OnCardIDKillfocus(); 
	int			OnCardIDCheckValue(); 
	//void			OnVisitToTimeChange(); 
	//void			OnVisitToTimeSetfocus(); 
	//void			OnVisitToTimeKillfocus(); 
	int			OnVisitToTimeCheckValue(); 
	//void			OnTimeOutChange(); 
	//void			OnTimeOutSetfocus(); 
	//void			OnTimeOutKillfocus(); 
	int			OnTimeOutCheckValue(); 
	//void			OnVisitorChange(); 
	//void			OnVisitorSetfocus(); 
	//void			OnVisitorKillfocus(); 
	int			OnVisitorCheckValue(); 
	//void			OnDepositChange(); 
	//void			OnDepositSetfocus(); 
	//void			OnDepositKillfocus(); 
	int			OnDepositCheckValue(); 
	//void			OnRefundChange(); 
	//void			OnRefundSetfocus(); 
	//void			OnRefundKillfocus(); 
	int			OnRefundCheckValue(); 
	//void			OnConsignmentChange(); 
	//void			OnConsignmentSetfocus(); 
	//void			OnConsignmentKillfocus(); 
	int			OnConsignmentCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CHMSVisitInfoDialog(CWnd *pParent);
	~CHMSVisitInfoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSVisitInfoDialog(); 
	int OnEditHMSVisitInfoDialog(); 
	int OnDeleteHMSVisitInfoDialog(); 
	int OnSaveHMSVisitInfoDialog(); 
	int OnCancelHMSVisitInfoDialog(); 
	int OnHMSVisitInfoDialogListLoadData(); 
};
#endif
