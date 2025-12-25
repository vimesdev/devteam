#ifndef ADPRODUCTACCOUNT_H
#define ADPRODUCTACCOUNT_H

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
class CAdProductAccount : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndProductAccount;
	CGuiLabel		m_wndMaterialExpenseLabel;
	CGuiComboBox	m_wndMaterialExpense;
	CGuiLabel		m_wndLaborExpenseLabel;
	CGuiComboBox	m_wndLaborExpense;
	CGuiLabel		m_wndPrepaidExpenseLabel;
	CGuiComboBox	m_wndPrepaidExpense;
	CGuiLabel		m_wndPayableExpenseLabel;
	CGuiComboBox	m_wndPayableExpense;
	CGuiLabel		m_wndGeneralExpenseLabel;
	CGuiComboBox	m_wndGeneralExpense;
	CGuiLabel		m_wndUnfinishedWorkLabel;
	CGuiComboBox	m_wndUnfinishedWork;
	CString	m_szID;
	CString	m_szMaterialExpenseKey;
	CString	m_szLaborExpenseKey;
	CString	m_szPrepaidExpenseKey;
	CString	m_szPayableExpenseKey;
	CString	m_szGeneralExpenseKey;
	CString	m_szUnfinishedWorkKey;
	CDbfMap	m_ad_productTbl;
	void			OnMaterialExpenseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnMaterialExpenseSelendok(); 
	//void			OnMaterialExpenseSetfocus(); 
	//void			OnMaterialExpenseKillfocus(); 
	long			OnMaterialExpenseLoadData(); 
	//void			OnMaterialExpenseAddNew(); 
	void			OnLaborExpenseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLaborExpenseSelendok(); 
	//void			OnLaborExpenseSetfocus(); 
	//void			OnLaborExpenseKillfocus(); 
	long			OnLaborExpenseLoadData(); 
	//void			OnLaborExpenseAddNew(); 
	void			OnPrepaidExpenseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPrepaidExpenseSelendok(); 
	//void			OnPrepaidExpenseSetfocus(); 
	//void			OnPrepaidExpenseKillfocus(); 
	long			OnPrepaidExpenseLoadData(); 
	//void			OnPrepaidExpenseAddNew(); 
	void			OnPayableExpenseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPayableExpenseSelendok(); 
	//void			OnPayableExpenseSetfocus(); 
	//void			OnPayableExpenseKillfocus(); 
	long			OnPayableExpenseLoadData(); 
	//void			OnPayableExpenseAddNew(); 
	void			OnGeneralExpenseSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnGeneralExpenseSelendok(); 
	//void			OnGeneralExpenseSetfocus(); 
	//void			OnGeneralExpenseKillfocus(); 
	long			OnGeneralExpenseLoadData(); 
	//void			OnGeneralExpenseAddNew(); 
	void			OnUnfinishedWorkSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUnfinishedWorkSelendok(); 
	//void			OnUnfinishedWorkSetfocus(); 
	//void			OnUnfinishedWorkKillfocus(); 
	long			OnUnfinishedWorkLoadData(); 
	//void			OnUnfinishedWorkAddNew(); 
	CAdProductAccount();
	~CAdProductAccount();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAdProductAccount(); 
	int OnEditAdProductAccount(); 
	int OnDeleteAdProductAccount(); 
	int OnSaveAdProductAccount(); 
	int OnCancelAdProductAccount(); 
	int OnAdProductAccountListLoadData(); 
};
#endif
