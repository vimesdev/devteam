#ifndef HMSTRANSFERHOSPITALSETUP_H
#define HMSTRANSFERHOSPITALSETUP_H

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
class CHMSTransferHospitalSetup : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndFilter;
	CGuiLabel		m_wndProvillSearchLabel;
	CGuiComboBox	m_wndProvillSearch;
	CGuiLabel		m_wndDistSearchLabel;
	CGuiComboBox	m_wndDistSearch;
	CGuiLabel		m_wndHospitalNameLabel;
	CGuiGroupBox	m_wndHospitalList;
	CGuiTextCtrl	m_wndHospitalName;
	CGuiCheckBox	m_wndTransferHospital;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndList;
	CString	m_szProvillSearchKey;
	CString	m_szDistSearchKey;
	CString	m_szHospitalName;
	BOOL	m_bTransferHospital;
	void			OnProvillSearchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnProvillSearchSelendok(); 
	//void			OnProvillSearchSetfocus(); 
	//void			OnProvillSearchKillfocus(); 
	long			OnProvillSearchLoadData(); 
	//void			OnProvillSearchAddNew(); 
	void			OnDistSearchSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDistSearchSelendok(); 
	//void			OnDistSearchSetfocus(); 
	//void			OnDistSearchKillfocus(); 
	long			OnDistSearchLoadData(); 
	//void			OnDistSearchAddNew(); 
	//void			OnHospitalNameChange(); 
	//void			OnHospitalNameSetfocus(); 
	//void			OnHospitalNameKillfocus(); 
	int			OnHospitalNameCheckValue(); 
	void			OnTransferHospitalSelect(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CHMSTransferHospitalSetup(CWnd *pParent);
	~CHMSTransferHospitalSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTransferHospitalSetup(); 
	int OnEditHMSTransferHospitalSetup(); 
	int OnDeleteHMSTransferHospitalSetup(); 
	int OnSaveHMSTransferHospitalSetup(); 
	int OnCancelHMSTransferHospitalSetup(); 
	int OnHMSTransferHospitalSetupListLoadData(); 
	void OnListCheckAll();
	void OnListUnCheckAll();
	void OnExportTransferHospital();
};
#endif
