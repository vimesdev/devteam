#ifndef FAMTRANSFERDIALOG_H
#define FAMTRANSFERDIALOG_H

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
class CFAMTransferDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndTransferIDLabel;
	CGuiTextCtrl	m_wndTransferID;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndFromDeptLabel;
	CGuiComboBox	m_wndFromDept;
	CGuiLabel		m_wndToDeptLabel;
	CGuiComboBox	m_wndToDept;
	CGuiLabel		m_wndQtyLevelLabel;
	CGuiTextCtrl	m_wndQtyLevel;
	CGuiButton		m_wndbtnSave;
	CGuiButton		m_wndbtnCancel;
	CString	m_szTransferID;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szFromDeptKey;
	CString	m_szEmployeeKey;
	CString	m_szToDeptKey;
	CString	m_szQtyLevel;

	CDbfMap m_tbl_famtransfer;
	long m_nIndex;
	CString m_szAssetNo;
	bool m_bChangeDept;
	
	//void			OnTransferIDChange(); 
	//void			OnTransferIDSetfocus(); 
	//void			OnTransferIDKillfocus(); 
	int			OnTransferIDCheckValue(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnFromDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromDeptSelendok(); 
	//void			OnFromDeptSetfocus(); 
	//void			OnFromDeptKillfocus(); 
	long			OnFromDeptLoadData(); 
	//void			OnFromDeptAddNew(); 
	void			OnToDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnToDeptSelendok(); 
	//void			OnToDeptSetfocus(); 
	//void			OnToDeptKillfocus(); 
	long			OnToDeptLoadData(); 
	//void			OnToDeptAddNew(); 
	//void			OnQtyLevelChange(); 
	//void			OnQtyLevelSetfocus(); 
	//void			OnQtyLevelKillfocus(); 
	int			OnQtyLevelCheckValue(); 
	void			OnbtnSaveSelect(); 
	void			OnbtnCancelSelect(); 
	CFAMTransferDialog(CWnd *pParent);
	~CFAMTransferDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMTransferDialog(); 
	int OnEditFAMTransferDialog(); 
	int OnDeleteFAMTransferDialog(); 
	int OnSaveFAMTransferDialog(); 
	int OnCancelFAMTransferDialog(); 
	int OnFAMTransferDialogListLoadData(); 
};
#endif
