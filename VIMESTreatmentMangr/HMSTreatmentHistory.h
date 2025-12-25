#ifndef HMSTREATMENTHISTORY_H
#define HMSTREATMENTHISTORY_H

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
class CHMSTreatmentHistory : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndInformationSearch;
	CGuiGroupBox	m_wndGroupPatient;
	CGuiGroupBox	m_wndGroupDocument;
	CGuiLabel		m_wndLastNameLabel;
	CGuiTextCtrl	m_wndLastName;
	CGuiLabel		m_wndMidNameLabel;
	CGuiTextCtrl	m_wndMidName;
	CGuiLabel		m_wndFirstNameLabel;
	CGuiTextCtrl	m_wndFirstName;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndAddressLabel;
	CGuiComboBox	m_wndAddress;
	CGuiButton		m_wndSearch;
	CGuiListCtrl	m_wndListPatient;
	CGuiListCtrl	m_wndListDocument;
	CString	m_szLastName;
	CString	m_szMidName;
	CString	m_szFirstName;
	long	m_nDocumentNo;
	long	m_nPatientNo;
	CString	m_szAddressKey;
	//void			OnLastNameChange(); 
	//void			OnLastNameSetfocus(); 
	//void			OnLastNameKillfocus(); 
	int			OnLastNameCheckValue(); 
	//void			OnMidNameChange(); 
	//void			OnMidNameSetfocus(); 
	//void			OnMidNameKillfocus(); 
	int			OnMidNameCheckValue(); 
	//void			OnFirstNameChange(); 
	//void			OnFirstNameSetfocus(); 
	//void			OnFirstNameKillfocus(); 
	int			OnFirstNameCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	void			OnAddressSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnAddressSelendok(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	long			OnAddressLoadData(); 
	void			OnAddressAddNew(); 
	void			OnSearchSelect(); 
	long			OnListPatientLoadData(); 
	void			OnListPatientSelectChange(int nOldItem, int nNewItem); 
	void			OnListPatientDblClick(); 
	int			OnListPatientDeleteItem(); 
	long			OnListDocumentLoadData(); 
	void			OnListDocumentSelectChange(int nOldItem, int nNewItem); 
	void			OnListDocumentDblClick(); 
	int			OnListDocumentDeleteItem(); 
	void		OnListDocumentEditDiagnostic();
	CHMSTreatmentHistory(CWnd *pParent);
	~CHMSTreatmentHistory();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentHistory(); 
	int OnEditHMSTreatmentHistory(); 
	int OnDeleteHMSTreatmentHistory(); 
	int OnSaveHMSTreatmentHistory(); 
	int OnCancelHMSTreatmentHistory(); 
	int OnHMSTreatmentHistoryListLoadData(); 
};
#endif
