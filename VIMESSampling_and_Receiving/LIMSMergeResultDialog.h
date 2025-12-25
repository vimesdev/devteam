#ifndef LIMSMERGERESULTDIALOG_H
#define LIMSMERGERESULTDIALOG_H

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
class CLIMSMergeResultDialog : public CGuiDialog{
protected:
public:
	long	m_nOrderID;
	long	m_nOID;
	int		m_nSID;
	int		m_nInstID;
	CString m_szTestGroup;
	CString	m_szName;
	
	CGuiLabel		m_wndInstrumentLabel;
	CGuiComboBox	m_wndInstrument;
	CGuiLabel		m_wndSIDLabel;
	CGuiTextCtrl	m_wndSID;
	CGuiGroupBox	m_wndOrderInformation;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiButton		m_wndSearch;
	CGuiListCtrl	m_wndPatientList;
	CGuiListCtrl	m_wndResList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szInstrumentKey;
	CString	m_szSID;
	CString	m_szPatientName;
	void			OnInstrumentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnInstrumentSelendok(); 
	//void			OnInstrumentSetfocus(); 
	//void			OnInstrumentKillfocus(); 
	long			OnInstrumentLoadData(); 
	//void			OnInstrumentAddNew(); 
	//void			OnSIDChange(); 
	//void			OnSIDSetfocus(); 
	//void			OnSIDKillfocus(); 
	int			OnSIDCheckValue(); 
	void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	void			OnSearchSelect(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	long			OnResListLoadData(); 
	void			OnResListSelectChange(int nOldItem, int nNewItem); 
	void			OnResListDblClick(); 
	int			OnResListDeleteItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CLIMSMergeResultDialog(CWnd *pParent);
	~CLIMSMergeResultDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddLIMSMergeResultDialog(); 
	int OnEditLIMSMergeResultDialog(); 
	int OnDeleteLIMSMergeResultDialog(); 
	int OnSaveLIMSMergeResultDialog(); 
	int OnCancelLIMSMergeResultDialog(); 
	int OnLIMSMergeResultDialogListLoadData(); 
};
#endif
