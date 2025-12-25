#ifndef PMICD10Class_H
#define PMICD10Class_H

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
class AFX_EXT_CLASS CPMICD10Class : public CGuiDialog{
protected:
public:
	long m_nDocumentNo;
	long m_nPatientNo;
	BOOL m_bInsert;
	long m_nClassID;
	CString m_szDisease;
	CString	GetICDSelected(int nExceptRow=-1);
	CString	GetCoDisease(bool bWithICD=true);
	CGuiListCtrl	m_wndCDList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	long			OnCDListLoadData(); 
	void			OnCDListSelectChange(int nOldItem, int nNewItem); 
	void			OnCDListDblClick(); 
	int			OnCDListDeleteItem();
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CPMICD10Class(CWnd *pParent);
	~CPMICD10Class();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMICD10Class(); 
	int OnEditPMICD10Class(); 
	int OnDeletePMICD10Class(); 
	int OnSavePMICD10Class(); 
	int OnCancelPMICD10Class(); 
	int OnPMICD10ClassListLoadData();
	void	OnICDLoadData();
	void	OnICDSelendok();
	void	PopulateList(int nMode, CString szICD);
	CString	GetDiagnostic(LPCTSTR lpszICD);

	DECLARE_MESSAGE_MAP()
	afx_msg void OnClose();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
