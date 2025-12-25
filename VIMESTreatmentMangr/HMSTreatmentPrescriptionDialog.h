#ifndef HMSTREATMENTPRESCRIPTIONDIALOG_H
#define HMSTREATMENTPRESCRIPTIONDIALOG_H

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
class CHMSTreatmentPrescriptionDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPrescriptionInformation;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndStorageLabel;
	CGuiComboBox	m_wndStorage;
	CGuiLabel		m_wndUseDateLabel;
	CGuiDateCtrl	m_wndUseDate;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiComboBox	m_wndDrugName;
	CGuiLabel		m_wndUseDatenumLabel;
	CGuiNumberCtrl	m_wndUseDatenum;
	CGuiLabel		m_wndDousageLabel;
	CGuiTextCtrl	m_wndDousage;
	CGuiLabel		m_wndQuantityLabel;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndOnhandLabel;
	CGuiNumberCtrl	m_wndOnhand;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndConfirm;
	CString	m_szStorageKey;
	CString	m_szUseDate;
	CString	m_szDrugNameKey;
	long	m_nUseDatenum;
	CString	m_szDousage;
	long	m_nQuantity;
	long	m_nOnhand;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnStorageSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnStorageSelendok(); 
	//void			OnStorageSetfocus(); 
	//void			OnStorageKillfocus(); 
	long			OnStorageLoadData(); 
	//void			OnStorageAddNew(); 
	//void			OnUseDateChange(); 
	//void			OnUseDateSetfocus(); 
	//void			OnUseDateKillfocus(); 
	int			OnUseDateCheckValue(); 
	void			OnDrugNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDrugNameSelendok(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	long			OnDrugNameLoadData(); 
	//void			OnDrugNameAddNew(); 
	//void			OnUseDatenumChange(); 
	//void			OnUseDatenumSetfocus(); 
	//void			OnUseDatenumKillfocus(); 
	int			OnUseDatenumCheckValue(); 
	//void			OnDousageChange(); 
	//void			OnDousageSetfocus(); 
	//void			OnDousageKillfocus(); 
	int			OnDousageCheckValue(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnOnhandChange(); 
	//void			OnOnhandSetfocus(); 
	//void			OnOnhandKillfocus(); 
	int			OnOnhandCheckValue(); 
	void			OnSaveSelect(); 
	void			OnConfirmSelect(); 
	CHMSTreatmentPrescriptionDialog(CWnd *pParent);
	~CHMSTreatmentPrescriptionDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentPrescriptionDialog(); 
	int OnEditHMSTreatmentPrescriptionDialog(); 
	int OnDeleteHMSTreatmentPrescriptionDialog(); 
	int OnSaveHMSTreatmentPrescriptionDialog(); 
	int OnCancelHMSTreatmentPrescriptionDialog(); 
	int OnHMSTreatmentPrescriptionDialogListLoadData(); 
};
#endif
