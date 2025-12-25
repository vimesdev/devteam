#ifndef PRRECORDSUMMARY_H
#define PRRECORDSUMMARY_H

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
class AFX_EXT_CLASS CPRRecordSummary : public CGuiDialog{
protected:
	void PrintbyWord();
	bool	m_bComInit;
public:
	long			m_nDocumentNo;
	long			m_nIdx;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiTextCtrl	m_wndRecordNo;
	CGuiLabel		m_wndClinographyLabel;
	CGuiTextCtrl	m_wndClinography;
	CGuiLabel		m_wndParaclinicResultLabel;
	CGuiTextCtrl	m_wndParaclinicResult;
	CGuiLabel		m_wndTreatmentMethodLabel;
	CGuiTextCtrl	m_wndTreatmentMethod;
	CGuiLabel		m_wndAdmissionStatusLabel;
	CGuiTextCtrl	m_wndAdmissionStatus;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CString	m_szRecordNo;
	CString	m_szClinography;
	CString	m_szParaclinicResult;
	CString	m_szTreatmentMethod;
	CString	m_szAdmissionStatus;
	CString	m_szNote;
	//void			OnClinographyChange(); 
	//void			OnClinographySetfocus(); 
	//void			OnClinographyKillfocus(); 
	int			OnClinographyCheckValue(); 
	//void			OnParaclinicResultChange(); 
	//void			OnParaclinicResultSetfocus(); 
	//void			OnParaclinicResultKillfocus(); 
	void			OnParaclinicalResultLabelSelect();
	int			OnParaclinicResultCheckValue(); 
	//void			OnTreatmentMethodChange(); 
	//void			OnTreatmentMethodSetfocus(); 
	//void			OnTreatmentMethodKillfocus(); 
	int			OnTreatmentMethodCheckValue(); 
	//void			OnAdmissionStatusChange(); 
	//void			OnAdmissionStatusSetfocus(); 
	//void			OnAdmissionStatusKillfocus(); 
	int			OnAdmissionStatusCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			PrintRecordSummary();
	
	CPRRecordSummary(CWnd *pParent);
	~CPRRecordSummary();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPRRecordSummary(); 
	int OnEditPRRecordSummary(); 
	int OnDeletePRRecordSummary(); 
	int OnSavePRRecordSummary(); 
	int OnCancelPRRecordSummary(); 
	int OnPRRecordSummaryListLoadData(); 
};
#endif
