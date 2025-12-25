#ifndef HMSPRESCRIPTIONGROUPDIALOG_H
#define HMSPRESCRIPTIONGROUPDIALOG_H

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
class CHMSPrescriptionGroupDialog : public CGuiDialog
{

protected:
	HTREEITEM	m_hItem;
	CString		m_szUsedByChecked;
public:
	CGuiLabel		m_wndUsedByLabel;
	CGuiComboBox	m_wndUsedBy;
	CString			m_szUsedByKey;
	long			OnUsedByLoadData();
	int				m_nID;
	long			m_nIdx;
	CGuiLabel		m_wndObjectLabel;
	CGuiComboBox	m_wndObject;
	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiGroupBox	m_wndPrescriptionGroup;
	CGuiLabel		m_wndGroupIDLabel;
	CGuiTextCtrl	m_wndGroupID;
	CGuiLabel		m_wndIndexLabel;
	CGuiNumberCtrl	m_wndIndex;
	CGuiLabel		m_wndGroupNameLabel;
	CGuiTextCtrl	m_wndGroupName;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiCheckBox	m_wndHCTypeLabel;
	CGuiCheckBox	m_wndTYCLabel;
	CGuiCheckBox	m_wndIVFLabel;
	CGuiCheckBox	m_wndSMM2Label;
	CGuiCheckBox	m_wndTYCHALabel;

	CString	m_szObjectKey;
	CString	m_szStockKey;
	CString	m_szGroupID;
	CString	m_szObjects;
	long	m_nIndex;
	long	m_nLevel;
	CString	m_szGroupName;
	CString	m_szNote;
	CString m_szParentid;
	BOOL	m_bHCTypeLabel;
	BOOL	m_bTYCLabel;
	BOOL	m_bIVFLabel;
	BOOL	m_bSMM2Label;
	BOOL	m_bTYCHALabel;
	CDbfMap	m_hms_pharma_groupTbl;

	void			OnObjectSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnObjectSelendok(); 
	//void			OnObjectSetfocus(); 
	void			OnObjectKillfocus(); 
	long			OnObjectLoadData(); 
	void			OnObjectAddNew(); 
	void			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStockSelendok(); 
	//void			OnStockSetfocus(); 
	//void			OnStockKillfocus(); 
	long			OnStockLoadData(); 
	void			OnStockAddNew(); 
	//void			OnGroupIDChange(); 
	//void			OnGroupIDSetfocus(); 
	//void			OnGroupIDKillfocus(); 
	int			OnGroupIDCheckValue(); 
	//void			OnIndexChange(); 
	//void			OnIndexSetfocus(); 
	//void			OnIndexKillfocus(); 
	int			OnIndexCheckValue(); 
	//void			OnGroupNameChange(); 
	//void			OnGroupNameSetfocus(); 
	//void			OnGroupNameKillfocus(); 
	int			OnGroupNameCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnHCTypeLabelSelect();
	void			OnTYCLabelSelect();
	void			OnIVFLabelSelect();
	void			OnSMM2LabelSelect();
	void			OnTYCHALabelSelect(); 
	CHMSPrescriptionGroupDialog(CWnd *pParent);

	~CHMSPrescriptionGroupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPrescriptionGroupDialog(); 
	int OnEditHMSPrescriptionGroupDialog(); 
	int OnDeleteHMSPrescriptionGroupDialog(); 
	int OnSaveHMSPrescriptionGroupDialog(); 
	int OnCancelHMSPrescriptionGroupDialog(); 
	int OnHMSPrescriptionGroupDialogListLoadData(); 
	void	SetCheckedData(void* pControl, CString szChecked);
};
#endif