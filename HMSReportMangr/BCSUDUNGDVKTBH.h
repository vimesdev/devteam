#ifndef BCSUDUNGDVKTBH_H
#define BCSUDUNGDVKTBH_H

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
class CBCSUDUNGDVKTBH : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiRadioButton	m_wndOperation;
	CGuiRadioButton	m_wndParaclinical;
	CGuiRadioButton	m_wndAll;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndOperationGroupLabel;
	CGuiComboBox	m_wndOperationGroup;
	CGuiLabel		m_wndParaclinicalGroupLabel;
	CGuiComboBox	m_wndParaclinicalGroup;
	CGuiButton		m_wndExport;
	CGuiListCtrl	m_wndList;
	int	m_nOperation;
	int	m_nParaclinical;
	int	m_nAll;
	CString	m_szName;
	CString	m_szOperationGroupKey;
	CString	m_szParaclinicalGroupKey;
	void			OnOperationSelect(); 
	void			OnParaclinicalSelect(); 
	void			OnAllSelect(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	void			OnOperationGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOperationGroupSelendok(); 
	//void			OnOperationGroupSetfocus(); 
	//void			OnOperationGroupKillfocus(); 
	long			OnOperationGroupLoadData(); 
	//void			OnOperationGroupAddNew(); 
	void			OnParaclinicalGroupSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnParaclinicalGroupSelendok(); 
	//void			OnParaclinicalGroupSetfocus(); 
	//void			OnParaclinicalGroupKillfocus(); 
	long			OnParaclinicalGroupLoadData(); 
	//void			OnParaclinicalGroupAddNew(); 
	void			OnExportSelect();
	void			OnExport1();
	void			OnExport2();
	void			OnExport3();
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CBCSUDUNGDVKTBH();
	~CBCSUDUNGDVKTBH();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddBCSUDUNGDVKTBH(); 
	int OnEditBCSUDUNGDVKTBH(); 
	int OnDeleteBCSUDUNGDVKTBH(); 
	int OnSaveBCSUDUNGDVKTBH(); 
	int OnCancelBCSUDUNGDVKTBH(); 
	int OnBCSUDUNGDVKTBHListLoadData();
	CString GetQueryString();
};
#endif
