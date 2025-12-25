#ifndef HMSCHECKQRPAYDLG_H
#define HMSCHECKQRPAYDLG_H

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
class CHMSCheckQRPayDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformations;
	CGuiLabel		m_wndKeyLabel;
	CGuiNumberCtrl	m_wndKey;
	CGuiLabel		m_wndDocNoLabel;
	CGuiNumberCtrl	m_wndDocNo;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndAmountLabel;
	CGuiNumberCtrl	m_wndAmount;
	CGuiButton		m_wndSearch;
	CGuiButton		m_wndUpdate;
	CGuiLabel		m_wndDetailLabel;
	CGuiTextCtrl	m_wndDetail;
	CGuiLabel		m_wndRefNumberLabel;
	CGuiTextCtrl	m_wndRefNumber;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	long	m_nKey;
	long	m_nDocNo;
	CString	m_szStatus;
	long	m_nAmount;
	CString	m_szDetail;
	CString	m_szRefNumber;
	CString	m_szPatientName;
	CString m_szUrlBank;
	CStringA m_szFromDateAnsi;
	CStringA m_szToDateAnsi;
	//void			OnKeyChange(); 
	//void			OnKeySetfocus(); 
	//void			OnKeyKillfocus(); 
	int			OnKeyCheckValue(); 
	//void			OnDocNoChange(); 
	//void			OnDocNoSetfocus(); 
	//void			OnDocNoKillfocus(); 
	int			OnDocNoCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnAmountChange(); 
	//void			OnAmountSetfocus(); 
	//void			OnAmountKillfocus(); 
	int			OnAmountCheckValue(); 
	void			OnSearchSelect(); 
	void			OnUpdateSelect(); 
	//void			OnDetailChange(); 
	//void			OnDetailSetfocus(); 
	//void			OnDetailKillfocus(); 
	int			OnDetailCheckValue(); 
	//void			OnRefNumberLabelChange(); 
	//void			OnRefNumberLabelSetfocus(); 
	//void			OnRefNumberLabelKillfocus(); 
	int			OnRefNumberLabelCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue();
	CHMSCheckQRPayDlg(CWnd *pParent);
	~CHMSCheckQRPayDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCheckQRPayDlg(); 
	int OnEditHMSCheckQRPayDlg(); 
	int OnDeleteHMSCheckQRPayDlg(); 
	int OnSaveHMSCheckQRPayDlg(); 
	int OnCancelHMSCheckQRPayDlg(); 
	int OnHMSCheckQRPayDlgListLoadData(); 
};
#endif
