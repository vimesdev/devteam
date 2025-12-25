#ifndef PMSYSORDERTODUOCQG_H
#define PMSYSORDERTODUOCQG_H

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
class AFX_EXT_CLASS CPMSysOrderToDuocQG : public CGuiDialog{
protected:
public:
	long	m_nDocNo;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndStatusLabel;
	CGuiGroupBox	m_wndOrderInformation;
	CGuiTextCtrl	m_wndStatus;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPname;
	CGuiLabel		m_wndAgeLabel;
	CGuiNumberCtrl	m_wndAge;
	CGuiLabel		m_wndSexLabel;
	CGuiTextCtrl	m_wndSex;
	CGuiLabel		m_wndAddressLabel;
	CGuiTextCtrl	m_wndAddress;
	CGuiLabel		m_wndICDLabel;
	CGuiComboBox	m_wndICD;
	CGuiLabel		m_wndConclusionLabel;
	CGuiTextCtrl	m_wndConclusion;
	CGuiLabel		m_wndDoctorLabel;
	CGuiTextCtrl	m_wndDoctor;
	CGuiLabel		m_wndMaQGLabel;
	CGuiTextCtrl	m_wndmaQG;
	CGuiLabel		m_wndMAHDQGLabel;
	CGuiTextCtrl	m_wndMaHDQG;
	CGuiButton		m_wndPostToAPI;
	CGuiButton		m_wndUnPost;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiListCtrl	m_wndListPost;
	CGuiListCtrl	m_wndDrugList;
	long	m_nOrderID;
	CString	m_szStatus;
	CString	m_szPname;
	long	m_nAge;
	int m_nStockID;
	CString	m_szSex;
	CString	m_szAddress;
	CString	m_szICDKey;
	CString	m_szConclusion;
	CString	m_szDoctor;
	CString	m_szmaQG;
	CString	m_szMaHDQG;
	CDbfMap	m_hms_lienthong_orderTbl;
	//void			OnOrderIDChange(); 
	//void			OnOrderIDSetfocus(); 
	//void			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	//void			OnPnameChange(); 
	//void			OnPnameSetfocus(); 
	//void			OnPnameKillfocus(); 
	int			OnPnameCheckValue(); 
	//void			OnAgeChange(); 
	//void			OnAgeSetfocus(); 
	//void			OnAgeKillfocus(); 
	int			OnAgeCheckValue(); 
	//void			OnSexChange(); 
	//void			OnSexSetfocus(); 
	//void			OnSexKillfocus(); 
	int			OnSexCheckValue(); 
	//void			OnAddressChange(); 
	//void			OnAddressSetfocus(); 
	//void			OnAddressKillfocus(); 
	int			OnAddressCheckValue(); 
	void			OnICDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnICDSelendok(); 
	//void			OnICDSetfocus(); 
	//void			OnICDKillfocus(); 
	long			OnICDLoadData(); 
	//void			OnICDAddNew(); 
	//void			OnConclusionChange(); 
	//void			OnConclusionSetfocus(); 
	//void			OnConclusionKillfocus(); 
	int			OnConclusionCheckValue(); 
	//void			OnDoctorChange(); 
	//void			OnDoctorSetfocus(); 
	//void			OnDoctorKillfocus(); 
	int			OnDoctorCheckValue(); 
	//void			OnmaQGChange(); 
	//void			OnmaQGSetfocus(); 
	//void			OnmaQGKillfocus(); 
	int			OnmaQGCheckValue(); 
	//void			OnMaHDQGChange(); 
	//void			OnMaHDQGSetfocus(); 
	//void			OnMaHDQGKillfocus(); 
	int			OnMaHDQGCheckValue(); 
	void			OnPostToAPISelect(); 
	void			OnUnPostSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	long			OnListPostLoadData(); 
	void			OnListPostSelectChange(int nOldItem, int nNewItem); 
	void			OnListPostDblClick(); 
	int			OnListPostDeleteItem(); 
	long			OnDrugListLoadData(); 
	void			OnDrugListSelectChange(int nOldItem, int nNewItem); 
	void			OnDrugListDblClick(); 
	int			OnDrugListDeleteItem(); 
	CPMSysOrderToDuocQG(CWnd *pParent);
	~CPMSysOrderToDuocQG();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSysOrderToDuocQG(); 
	int OnEditPMSysOrderToDuocQG(); 
	int OnDeletePMSysOrderToDuocQG(); 
	int OnSavePMSysOrderToDuocQG(); 
	int OnCancelPMSysOrderToDuocQG(); 
	int OnPMSysOrderToDuocQGListLoadData(); 
	long	LoadICD(CWnd* pWnd, CString szKey);
};
#endif
