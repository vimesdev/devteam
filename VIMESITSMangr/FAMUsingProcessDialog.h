#ifndef FAMUSINGPROCESSDIALOG_H
#define FAMUSINGPROCESSDIALOG_H

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
//#include "FAMUsageProcess.h"

class CFAMUsingProcessDialog : public CGuiDialog{
protected:
public:

	//CFAMUsageProcess m_wndUsageProcess;
	//int m_nCount;
	//CString m_szGetDate;

	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndCurrentValueLabel;
	CGuiNumberCtrl	m_wndCurrentValue;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndDepartmentLabel;
	CGuiComboBox	m_wndDepartment;

	CGuiLabel		m_wndEmployeeLabel;
	CGuiComboBox	m_wndEmployee;
	CGuiTextCtrl	m_wndEmployee1;

	CGuiLabel		m_wndDeliverByLabel;
	CGuiComboBox	m_wndDeliverBy;
	CGuiTextCtrl	m_wndDeliverBy1;

	CGuiLabel		m_wndReceiveByLabel;
	CGuiComboBox	m_wndReceiveBy;
	CGuiTextCtrl	m_wndReceiveBy1;

	CGuiLabel		m_wndDeposeToLabel;
	CGuiTextCtrl	m_wndDeposeTo;
	CGuiButton		m_wndbtnSave;
	CGuiButton		m_wndbtnCancel;

	CString m_szAssetNo;
	int m_nIndex;
	CString	m_szTypeKey;
	double	m_nCurrentValue;
	CString	m_szFromDate;
	CString	m_szToDate;
	//CString m_szOldDepartment;
	CString	m_szDepartmentKey;

	CString	m_szEmployeeKey;
	CString m_szEmployee;

	CString	m_szDeliverByKey;
	CString	m_szDeliverBy;

	CString	m_szReceiveByKey;
	CString	m_szReceiveBy;

	CString	m_szDeposeTo;
	CDbfMap	m_fam_usingprocessTbl;

	CString m_szDType;		//Bien loai dieu chuyen tai san(Thanh ly)
	CString m_szNType;
	CString m_szIStatus;	//Bien trang thai dang su dung
	CString m_szOStatus;	//Bien trang thai khong su dung
	CString m_szStatus;
	bool isSetDep;			//Bien kiem tra trang thai thanh ly tai san
	bool m_bChangeDept;
	bool m_bUsed;
	bool m_bShow;
	//CString m_szDept;
	CString m_szTypeFilter;

	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnDepartmentSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDepartmentSelendok(); 
	//void			OnDepartmentSetfocus(); 
	void			OnDepartmentKillfocus(); 
	long			OnDepartmentLoadData(); 
	void			OnDepartmentAddNew(); 
	void			OnDeliverBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeliverBySelendok(); 
	//void			OnDeliverBySetfocus(); 
	//void			OnDeliverByKillfocus(); 
	long			OnDeliverByLoadData(); 
	void			OnDeliverByAddNew(); 
	void			OnReceiveBySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReceiveBySelendok(); 
	//void			OnReceiveBySetfocus(); 
	//void			OnReceiveByKillfocus(); 
	long			OnReceiveByLoadData(); 
	void			OnReceiveByAddNew(); 
	//void			OnCurrentValueChange(); 
	//void			OnCurrentValueSetfocus(); 
	//void			OnCurrentValueKillfocus(); 
	int			OnCurrentValueCheckValue(); 
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	void			OnTypeAddNew(); 
	void			OnEmployeeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnEmployeeSelendok(); 
	//void			OnEmployeeSetfocus(); 
	//void			OnEmployeeKillfocus(); 
	long			OnEmployeeLoadData(); 
	void			OnEmployeeAddNew(); 
	//void			OnDeposeToChange(); 
	//void			OnDeposeToSetfocus(); 
	//void			OnDeposeToKillfocus(); 
	int			OnDeposeToCheckValue();

	//void			OnDeliverBy1Change(); 
	//void			OnDeliverBy1Setfocus(); 
	//void			OnDeliverBy1Killfocus(); 
	int			OnDeliverBy1CheckValue();

	//void			OnReceiveBy1Change(); 
	//void			OnReceiveBy1Setfocus(); 
	//void			OnReceiveBy1Killfocus(); 
	int			OnReceiveBy1CheckValue();

	//void			OnEmployee1Change(); 
	//void			OnEmployee1Setfocus(); 
	//void			OnEmployee1Killfocus(); 
	int			OnEmployee1CheckValue();

	void			OnbtnSaveSelect(); 
	void			OnbtnCancelSelect(); 
	CFAMUsingProcessDialog(CWnd *pParent);
	~CFAMUsingProcessDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMUsingProcessDialog(); 
	int OnEditFAMUsingProcessDialog(); 
	int OnDeleteFAMUsingProcessDialog(); 
	int OnSaveFAMUsingProcessDialog(); 
	int OnCancelFAMUsingProcessDialog(); 
	int OnFAMUsingProcessDialogListLoadData(); 
};
#endif
