#ifndef ADBUSINESSPARTNERCONTRACTLIST_H
#define ADBUSINESSPARTNERCONTRACTLIST_H

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
#include "GuiView.h"
#include "DbField.h"
class CAdBusinessPartnerContractList : public CGuiView{
protected:
public:
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndPatientList;
	CGuiButton		m_wndCreateContract;
	CGuiButton		m_wndDeleteContract;
	CGuiButton		m_wndPrintContract;
	CGuiButton		m_wndAddPatient;
	CGuiButton		m_wndDeletePatient;
	CString			m_szPartnerID;
	CString			m_szContractID;
	int				m_nContractLineID;
	int				m_nContractID;
	long			m_nPatientNo;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnPatientListLoadData(); 
	void			OnPatientListSelectChange(int nOldItem, int nNewItem); 
	void			OnPatientListDblClick(); 
	int			OnPatientListDeleteItem(); 
	void			OnCreateContractSelect(); 
	void			OnDeleteContractSelect();
	void			OnParaclinicPackage();
	void			OnPrintContractSelect(); 
	void			OnAddPatientSelect(); 
	void			OnDeletePatientSelect(); 
	CAdBusinessPartnerContractList();
	~CAdBusinessPartnerContractList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdBusinessPartnerContractList(); 
	int OnEditAdBusinessPartnerContractList(); 
	int OnDeleteAdBusinessPartnerContractList(); 
	int OnSaveAdBusinessPartnerContractList(); 
	int OnCancelAdBusinessPartnerContractList(); 
	int OnAdBusinessPartnerContractListListLoadData(); 

	void OnAddContract();
	void OnEditContract();
	void OnDeleteContract();

	void OnPatientListAddItem();
	void OnPatientListEditItem();

	void OnContractTestList();
};
#endif
