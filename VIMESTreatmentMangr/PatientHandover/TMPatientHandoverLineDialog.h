#ifndef TMPATIENTHANDOVERLINEDIALOG_H
#define TMPATIENTHANDOVERLINEDIALOG_H

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
class CTMPatientHandoverLineDialog : public CGuiDialog{
protected:
	long	m_nOrderId;
public:
	CGuiGroupBox	m_wndDiagnosticGroup;
	CGuiGroupBox	m_wndSuggestionGroup;
	CGuiLabel		m_wndDocNoLabel;
	CGuiComboBox	m_wndDocNo;
	CGuiCheckBox	m_wndPreviousHandover;
	CGuiGroupBox	m_wndParaclinicalResultGroup;
	CGuiLabel		m_wndShift;
	CGuiTextCtrl	m_wndDiagnostic;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAddItem;
	CGuiTextCtrl	m_wndParaclinicalResult;
	CGuiTextCtrl	m_wndSuggestion;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szDocNoKey;
	BOOL	m_bPreviousHandover;
	CString	m_szDiagnostic;
	CString	m_szParaclinicalResult;
	CString	m_szSuggestion;
	void			OnDocNoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDocNoSelendok(); 
	//void			OnDocNoSetfocus(); 
	//void			OnDocNoKillfocus(); 
	long			OnDocNoLoadData(); 
	//void			OnDocNoAddNew(); 
	void			OnPreviousHandoverSelect(); 
	void		OnShiftLabelSelect();
	//void			OnDiagnosticChange(); 
	//void			OnDiagnosticSetfocus(); 
	//void			OnDiagnosticKillfocus(); 
	int			OnDiagnosticCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddItemSelect(); 
	//void			OnParaclinicalResultChange(); 
	//void			OnParaclinicalResultSetfocus(); 
	//void			OnParaclinicalResultKillfocus(); 
	int			OnParaclinicalResultCheckValue(); 
	//void			OnSuggestionChange(); 
	//void			OnSuggestionSetfocus(); 
	//void			OnSuggestionKillfocus(); 
	int			OnSuggestionCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CTMPatientHandoverLineDialog(CWnd *pParent);
	~CTMPatientHandoverLineDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddTMPatientHandoverLineDialog(); 
	int OnEditTMPatientHandoverLineDialog(); 
	int OnDeleteTMPatientHandoverLineDialog(); 
	int OnSaveTMPatientHandoverLineDialog(); 
	int OnCancelTMPatientHandoverLineDialog(); 
	int OnTMPatientHandoverLineDialogListLoadData(); 
};
#endif
