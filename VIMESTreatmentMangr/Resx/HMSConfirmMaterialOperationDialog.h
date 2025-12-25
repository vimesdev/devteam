#ifndef HMSCONFIRMMATERIALOPERATIONDIALOG_H
#define HMSCONFIRMMATERIALOPERATIONDIALOG_H

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
class CHMSConfirmMaterialOperationDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndMaterialDrugInformation;
	CGuiLabel		m_wndOperationNameLabel;
	CGuiTextCtrl	m_wndOperationName;
	CGuiLabel		m_wndReferenceLabel;
	CGuiComboBox	m_wndReference;
	CGuiCheckBox	m_wndScoliosisOperation;
	CGuiCheckBox	m_wndInsurancePaid;
	CGuiLabel		m_wndMaxInsurancePaidLabel;
	CGuiNumberCtrl	m_wndMaxInsurancePaid;
	CGuiCheckBox	m_wndMaterialStandardApply;
	CGuiLabel		m_wndStandardAmountLabel;
	CGuiNumberCtrl	m_wndStandardAmount;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szOperationName;
	CString	m_szReferenceKey;
	BOOL	m_bScoliosisOperation;
	BOOL	m_bInsurancePaid;
	long	m_nMaxInsurancePaid;
	BOOL	m_bMaterialStandardApply;
	long	m_nStandardAmount;
	//void			OnOperationNameChange(); 
	//void			OnOperationNameSetfocus(); 
	//void			OnOperationNameKillfocus(); 
	int			OnOperationNameCheckValue(); 
	void			OnReferenceSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnReferenceSelendok(); 
	//void			OnReferenceSetfocus(); 
	//void			OnReferenceKillfocus(); 
	long			OnReferenceLoadData(); 
	//void			OnReferenceAddNew(); 
	void			OnScoliosisOperationSelect(); 
	void			OnInsurancePaidSelect(); 
	//void			OnMaxInsurancePaidChange(); 
	//void			OnMaxInsurancePaidSetfocus(); 
	//void			OnMaxInsurancePaidKillfocus(); 
	int			OnMaxInsurancePaidCheckValue(); 
	void			OnMaterialStandardApplySelect(); 
	//void			OnStandardAmountChange(); 
	//void			OnStandardAmountSetfocus(); 
	//void			OnStandardAmountKillfocus(); 
	int			OnStandardAmountCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CHMSConfirmMaterialOperationDialog(CWnd *pParent);
	~CHMSConfirmMaterialOperationDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSConfirmMaterialOperationDialog(); 
	int OnEditHMSConfirmMaterialOperationDialog(); 
	int OnDeleteHMSConfirmMaterialOperationDialog(); 
	int OnSaveHMSConfirmMaterialOperationDialog(); 
	int OnCancelHMSConfirmMaterialOperationDialog(); 
	int OnHMSConfirmMaterialOperationDialogListLoadData(); 
};
#endif
