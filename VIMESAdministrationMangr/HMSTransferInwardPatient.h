#ifndef HMSTRANSFERINWARDPATIENT_H
#define HMSTRANSFERINWARDPATIENT_H

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
class CHMSTransferInwardPatient : public CGuiDialog{
protected:
	CString	m_szDept;
public:
	CGuiGroupBox	m_wndPatientInformation;
	CGuiLabel		m_wndDocNoLabel;
	CGuiNumberCtrl	m_wndDocNo;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiTextCtrl	m_wndRecordNo;
	CGuiButton		m_wndTransfer;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndOldDeptLabel;
	CGuiTextCtrl	m_wndOldDept;
	CGuiLabel		m_wndNewDeptLabel;
	CGuiComboBox	m_wndNewDept;
	long	m_nDocNo;
	CString	m_szRecordNo;
	CString	m_szOldDept;
	CString	m_szNewDeptKey;
	//void			OnDocNoChange(); 
	//void			OnDocNoSetfocus(); 
	//void			OnDocNoKillfocus(); 
	int			OnDocNoCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	void			OnTransferSelect(); 
	void			OnCloseSelect(); 
	//void			OnOldDeptChange(); 
	//void			OnOldDeptSetfocus(); 
	//void			OnOldDeptKillfocus(); 
	int			OnOldDeptCheckValue(); 
	void			OnNewDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNewDeptSelendok(); 
	//void			OnNewDeptSetfocus(); 
	//void			OnNewDeptKillfocus(); 
	long			OnNewDeptLoadData(); 
	//void			OnNewDeptAddNew(); 
	CHMSTransferInwardPatient(CWnd *pParent);
	~CHMSTransferInwardPatient();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTransferInwardPatient(); 
	int OnEditHMSTransferInwardPatient(); 
	int OnDeleteHMSTransferInwardPatient(); 
	int OnSaveHMSTransferInwardPatient(); 
	int OnCancelHMSTransferInwardPatient(); 
	int OnHMSTransferInwardPatientListLoadData(); 
	BOOL IsAllowTransfer();
	void OnTransferPatient();
};
#endif
