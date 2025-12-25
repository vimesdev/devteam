#ifndef POAUTOCREATEITEMDIALOG_H
#define POAUTOCREATEITEMDIALOG_H

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
class CPOAutoCreateItemDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPatientInformation;
	CGuiGroupBox	m_wndSelectedItems;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiNumberCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiListCtrl	m_wndPatientList;
	CGuiListCtrl	m_wndMaterialList;
	CGuiListCtrl	m_wndSelectedList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szFromDate;
	CString	m_szToDate;
	long	m_nDocumentNo;
	CString	m_szPatientName;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	long			OnMaterialListLoadData(); 
	void			OnMaterialListSelectChange(int nOldItem, int nNewItem); 
	void			OnMaterialListDblClick(); 
	int			OnMaterialListDeleteItem(); 
	long			OnSelectedListLoadData(); 
	void			OnSelectedListSelectChange(int nOldItem, int nNewItem); 
	void			OnSelectedListDblClick(); 
	int			OnSelectedListDeleteItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CPOAutoCreateItemDialog(CWnd *pParent);
	~CPOAutoCreateItemDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPOAutoCreateItemDialog(); 
	int OnEditPOAutoCreateItemDialog(); 
	int OnDeletePOAutoCreateItemDialog(); 
	int OnSavePOAutoCreateItemDialog(); 
	int OnCancelPOAutoCreateItemDialog(); 
	int OnPOAutoCreateItemDialogListLoadData(); 
};
#endif
