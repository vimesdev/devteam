#ifndef HMSPATIENTNOCHANGEDIALOG_H
#define HMSPATIENTNOCHANGEDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CHMSPatientNoChangeDialog : public CGuiDialog
{
protected:
public:
	CGuiLabel		m_wndOldDocNoLabel;
	CGuiNumberCtrl	m_wndOldDocumentNo;
	CGuiLabel		m_wndPatientNo1Label;
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndNewPatientInformation;
	CGuiNumberCtrl	m_wndPatientNo1;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndNewDocumentNoLabel;
	CGuiNumberCtrl	m_wndNewDocumentNo;
	CGuiLabel		m_wndYOBLabel;
	CGuiTextCtrl	m_wndYOB;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndInsCardLabel;
	CGuiTextCtrl	m_wndInsCard;

	CGuiLabel		m_wndPatientNo2Label;
	CGuiNumberCtrl	m_wndPatientNo2;
	CGuiLabel		m_wndPatientName2Label;
	CGuiTextCtrl	m_wndPatientName2;
	CGuiLabel		m_wndYOB2Label;
	CGuiTextCtrl	m_wndYOB2;
	CGuiLabel		m_wndSex2Label;
	CGuiTextCtrl	m_wndSex2;
	CGuiLabel		m_wndAddress2Label;
	CGuiTextCtrl	m_wndAddress2;
	CGuiLabel		m_wndInsCard2Label;
	CGuiTextCtrl	m_wndInsCard2;

	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;
	long	m_nOldDocumentNo;
	long	m_nPatientNo1;
	CString	m_szPatientName;
	long	m_nNewDocumentNo;
	long	m_nPatientNo2;
	CString	m_szPatientName2;
	CString	m_szYOB;
	CString	m_szSex;
	CString	m_szAddress;
	CString	m_szInsCard;
	CString	m_szYOB2;
	CString	m_szSex2;
	CString	m_szAddress2;
	CString	m_szInsCard2;
	//void			OnOldDocumentNoChange(); 
	//void			OnOldDocumentNoSetfocus(); 
	//void			OnOldDocumentNoKillfocus(); 
	int			OnOldDocumentNoCheckValue(); 
	//void			OnPatientNo1Change(); 
	//void			OnPatientNo1Setfocus(); 
	//void			OnPatientNo1Killfocus(); 
	int			OnPatientNo1CheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnNewDocumentNoChange(); 
	//void			OnNewDocumentNoSetfocus(); 
	//void			OnNewDocumentNoKillfocus(); 
	int			OnNewDocumentNoCheckValue(); 
	//void			OnPatientNo2Change(); 
	//void			OnPatientNo2Setfocus(); 
	//void			OnPatientNo2Killfocus(); 
	int			OnPatientNo2CheckValue(); 
	//void			OnPatientName2Change(); 
	//void			OnPatientName2Setfocus(); 
	//void			OnPatientName2Killfocus(); 
	int			OnPatientName2CheckValue();
	int			OnYOBCheckValue();	
	int			OnSexCheckValue();	
	int			OnAddressCheckValue();	
	int			OnInsCardCheckValue();
	int			OnYOB2CheckValue();	
	int			OnSex2CheckValue();	
	int			OnAddress2CheckValue();	
	int			OnInsCard2CheckValue(); 
	void			OnOKSelect(); 
	void			OnCancelSelect(); 
	bool IsTreatmentTerminate(int nDocnoNew, int nDocNoOld);
	CHMSPatientNoChangeDialog(CWnd *pParent);
	~CHMSPatientNoChangeDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPatientNoChangeDialog(); 
	int OnEditHMSPatientNoChangeDialog(); 
	int OnDeleteHMSPatientNoChangeDialog(); 
	int OnSaveHMSPatientNoChangeDialog(); 
	int OnCancelHMSPatientNoChangeDialog(); 
	int OnHMSPatientNoChangeDialogListLoadData(); 
};
#endif