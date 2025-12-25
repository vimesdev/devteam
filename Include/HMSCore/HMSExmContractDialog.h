#ifndef HMSEXMCONTRACTDIALOG_H
#define HMSEXMCONTRACTDIALOG_H

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
class CHMSExmContractDialog : public CGuiDialog
{

protected:
public:
	long	m_nContractId;
	CGuiGroupBox	m_wndContractPackage;
	CGuiLabel		m_wndTypeLabel;
	CGuiComboBox	m_wndType;
	CGuiLabel		m_wndContractNoLabel;
	CGuiTextCtrl	m_wndContractNo;
	CGuiLabel		m_wndContractDateLabel;
	CGuiDateCtrl	m_wndContractDate;
	CGuiLabel		m_wndCompanyLabel;
	CGuiButton		m_wndAddCompany;
	CGuiComboBox	m_wndCompany;
	CGuiLabel		m_wndExamDateLabel;
	CGuiDateCtrl	m_wndExamDate;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndDescriptionLabel;
	CGuiTextCtrl	m_wndDescription;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CGuiCheckBox	m_wndFreeBreakf;
	CString	m_szTypeKey;
	CString	m_szContractNo;
	CString	m_szContractDate;
	CString	m_szCompanyKey;
	CString	m_szExamDate;
	CString	m_szObjectKey;
	CString	m_szDescription;
	CDbfMap	m_hms_exm_contractTbl;
	void			OnTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTypeSelendok(); 
	//void			OnTypeSetfocus(); 
	//void			OnTypeKillfocus(); 
	long			OnTypeLoadData(); 
	//void			OnTypeAddNew(); 
	//void			OnContractNoChange(); 
	//void			OnContractNoSetfocus(); 
	//void			OnContractNoKillfocus(); 
	int			OnContractNoCheckValue(); 
	//void			OnContractDateChange(); 
	//void			OnContractDateSetfocus(); 
	//void			OnContractDateKillfocus(); 
	int			OnContractDateCheckValue(); 
	void			OnAddCompanySelect(); 
	void			OnCompanySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCompanySelendok(); 
	//void			OnCompanySetfocus(); 
	//void			OnCompanyKillfocus(); 
	long			OnCompanyLoadData(); 
	//void			OnCompanyAddNew(); 
	//void			OnExamDateChange(); 
	//void			OnExamDateSetfocus(); 
	//void			OnExamDateKillfocus(); 
	int			OnExamDateCheckValue(); 
	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	//void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	//void			OnObjectAddNew(); 
	//void			OnDescriptionChange(); 
	//void			OnDescriptionSetfocus(); 
	//void			OnDescriptionKillfocus(); 
	int			OnDescriptionCheckValue();
	BOOL	m_bFreeBreakf;
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSExmContractDialog(CWnd *pParent, int nMode);
	~CHMSExmContractDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSExmContractDialog(); 
	int OnEditHMSExmContractDialog(); 
	int OnDeleteHMSExmContractDialog(); 
	int OnSaveHMSExmContractDialog(); 
	int OnCancelHMSExmContractDialog(); 
	int OnHMSExmContractDialogListLoadData();
	void			OnFreeBreakfSelect(); 
};
#endif
