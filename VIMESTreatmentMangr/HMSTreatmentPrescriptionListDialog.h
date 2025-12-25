#ifndef HMSOPERATIONSCHEDULEPATIENTLISTDIALOG_H
#define HMSOPERATIONSCHEDULEPATIENTLISTDIALOG_H

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
#include "GridListView.h"

///////////////////////////////////////////
//THEM DON THUOC TU DON CUA BAC SY
//////////////////////////////////////////

class CHMSTreatmentPrescriptionListDialog : public CGuiDialog{
protected:
public:
	long			m_nBatchId;
	CString			m_szBatchNo;
	long			m_nOID;
	CString			m_szDeptId;
	CString			m_szPerformDeptId;
	CString			m_szOrderDate;
	CString			m_szOrderType;

	CGuiGroupBox	m_wndPatientList;
	CGuiLabel		m_wndDateLabel;
	CGuiComboBox	m_wndDate;
	CGuiLabel		m_wndDoctorLabel;
	CGuiComboBox	m_wndDoctor;
	CGuiButton		m_wndRefresh;
	CGridListView	m_wndList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szDateKey;
	CString	m_szDoctorKey;
	void			OnDateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDateSelendok(); 
	//void			OnDateSetfocus(); 
	//void			OnDateKillfocus(); 
	long			OnDateLoadData(); 
	//void			OnDateAddNew(); 
	void			OnDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDoctorSelendok(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	long			OnDoctorLoadData(); 
	//void			OnDoctorAddNew(); 
	void			OnRefreshSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CHMSTreatmentPrescriptionListDialog(CWnd *pParent);
	~CHMSTreatmentPrescriptionListDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentPrescriptionListDialog(); 
	int OnEditHMSTreatmentPrescriptionListDialog(); 
	int OnDeleteHMSTreatmentPrescriptionListDialog(); 
	int OnSaveHMSTreatmentPrescriptionListDialog(); 
	int OnCancelHMSTreatmentPrescriptionListDialog(); 
	int OnHMSTreatmentPrescriptionListDialogListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};
#endif
