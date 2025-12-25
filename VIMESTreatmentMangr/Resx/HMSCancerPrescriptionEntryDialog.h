#ifndef HMSCANCERPRESCRIPTIONENTRYDIALOG_H
#define HMSCANCERPRESCRIPTIONENTRYDIALOG_H

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
class CHMSCancerPrescriptionEntryDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndOrgNameLabel;
	CGuiComboBox	m_wndOrgName;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiComboBox	m_wndDrugName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndQtyLabel;
	CGuiNumberCtrl	m_wndQty;
	CGuiLabel		m_wndDousageLabel;
	CGuiComboBox	m_wndDousage;
	CGuiLabel		m_wndUsageLabel;
	CGuiTextCtrl	m_wndUsage;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szOrgNameKey;
	CString	m_szStorageKey;
	CString	m_szDrugNameKey;
	CString	m_szUnit;
	long	m_nQty;
	CString	m_szDousageKey;
	CString	m_szUsage;
	void			OnOrgNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOrgNameSelendok(); 
	//void			OnOrgNameSetfocus(); 
	//void			OnOrgNameKillfocus(); 
	long			OnOrgNameLoadData(); 
	//void			OnOrgNameAddNew(); 
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	void			OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDrugNameSelendok(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	long			OnDrugNameLoadData(); 
	//void			OnDrugNameAddNew(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnQtyChange(); 
	//void			OnQtySetfocus(); 
	//void			OnQtyKillfocus(); 
	int			OnQtyCheckValue(); 
	void			OnDousageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDousageSelendok(); 
	//void			OnDousageSetfocus(); 
	//void			OnDousageKillfocus(); 
	long			OnDousageLoadData(); 
	//void			OnDousageAddNew(); 
	//void			OnUsageChange(); 
	//void			OnUsageSetfocus(); 
	//void			OnUsageKillfocus(); 
	int			OnUsageCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSCancerPrescriptionEntryDialog(CWnd *pParent);
	~CHMSCancerPrescriptionEntryDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSCancerPrescriptionEntryDialog(); 
	int OnEditHMSCancerPrescriptionEntryDialog(); 
	int OnDeleteHMSCancerPrescriptionEntryDialog(); 
	int OnSaveHMSCancerPrescriptionEntryDialog(); 
	int OnCancelHMSCancerPrescriptionEntryDialog(); 
	int OnHMSCancerPrescriptionEntryDialogListLoadData(); 
};
#endif
