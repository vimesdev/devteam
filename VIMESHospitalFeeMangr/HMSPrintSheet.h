#ifndef HMSPRINTSHEET_H
#define HMSPRINTSHEET_H

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
class CHMSPrintSheet : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGroupBox;
	CGuiCheckBox	m_wndSummarizeExaSheet;
	CGuiCheckBox	m_wndPrintPrescription;
	CGuiCheckBox	m_wndPrintGeneralExaminationCost;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiLabel		m_wndSuggestionLabel;
	CGuiTextCtrl	m_wndSuggestion;

	CGuiButton		m_wndOk;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndPrintInvoice;
	BOOL	m_bSummarizeExaSheet;
	BOOL	m_bPrintPrescription;
	BOOL	m_bPrintGeneralExaminationCost;
	BOOL	m_bPrintInvoice;
	CString	m_szConclusion;
	CString	m_szSuggestion;

	void			OnSummarizeExaSheetSelect(); 
	void			OnPrintPrescriptionSelect(); 
	void			OnPrintGeneralExaminationCostSelect(); 
	void			OnOkSelect(); 
	void			OnCloseSelect(); 
	void			OnPrintInvoiceSelect(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	//void			OnSuggestionChange(); 
	//void			OnSuggestionSetfocus(); 
	//void			OnSuggestionKillfocus(); 
	int			OnSuggestionCheckValue(); 

	CHMSPrintSheet(CWnd *pParent);
	~CHMSPrintSheet();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPrintSheet(); 
	int OnEditHMSPrintSheet(); 
	int OnDeleteHMSPrintSheet(); 
	int OnSaveHMSPrintSheet(); 
	int OnCancelHMSPrintSheet(); 
	int OnHMSPrintSheetListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
