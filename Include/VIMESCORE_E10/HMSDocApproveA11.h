#ifndef HMSDOCAPPROVEA11_H
#define HMSDOCAPPROVEA11_H

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
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CHMSDocApproveA11 : public CGuiView
{
protected:
public:
	CGuiGroupBox	m_wndStatus;
	CGuiGroupBox	m_wndFilterInformation;
	CGuiGroupBox	m_wndPatientList;
	CGuiRadioButton	m_wndTerminated;
	CGuiRadioButton	m_wndApprovedFees;
	CGuiRadioButton	m_wndApproved;
	CGuiRadioButton	m_wndCanceled;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndDocNoLabel;
	CGuiNumberCtrl	m_wndDocNo;
	CGuiLabel		m_wndRecordNoLabel;
	CGuiTextCtrl	m_wndRecordNo;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox	m_wndOutpatient;
	CGuiCheckBox	m_wndInpatient;
	CGuiButton		m_wndApprove;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndFind;
	int	m_nOptStatus;
	CString	m_szDepartmentKey;
	CString	m_szFromDate;
	CString	m_szToDate;
	long	m_nDocNo;
	CString	m_szRecordNo;
	BOOL	m_bOutpatient;
	BOOL	m_bInpatient;
	void			OnTerminatedSelect(); 
	void			OnApprovedFeesSelect(); 
	void			OnApprovedSelect(); 
	void			OnCanceledSelect(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	//void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	//void			OnDepartmentAddNew(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnDocNoChange(); 
	//void			OnDocNoSetfocus(); 
	//void			OnDocNoKillfocus(); 
	int			OnDocNoCheckValue(); 
	//void			OnRecordNoChange(); 
	//void			OnRecordNoSetfocus(); 
	//void			OnRecordNoKillfocus(); 
	int			OnRecordNoCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick();
	void			OnFindSelect();
	int			OnListDeleteItem(); 
	int			OnListApproveItem(); 
	int			OnListCancelItem(); 
	void			OnOutpatientSelect(); 
	void			OnInpatientSelect(); 
	void			OnApproveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSummaryMaterialAndDrug();
	void OnResizeLayout();
	CHMSDocApproveA11();
	~CHMSDocApproveA11();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSDocApprove(); 
	int OnEditHMSDocApprove(); 
	int OnDeleteHMSDocApprove(); 
	int OnSaveHMSDocApprove(); 
	int OnCancelHMSDocApprove(); 
	int OnHMSDocApproveListLoadData(); 
};
#endif
