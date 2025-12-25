#ifndef HMSICD10GROUP_H
#define HMSICD10GROUP_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Medical Informatics Technology and Equipment Join Stock Company 2008-2010.			
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
//	Ban quyen cua Cong Ty Co Phan Thiet Bi Va Cong Nghe Tin Hoc Y Te MITECO., JSC. 2006-2008.
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
class CHMSICD10GroupSetup : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndDiseaseGroupInformation;
	CGuiLabel		m_wndNamLabel;
	CGuiTextCtrl	m_wndName;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	int		m_nID;
	CString	m_szName;
	CDbfMap	m_hms_icdgroupTbl;
	//void			OnNamChange(); 
	//void			OnNamSetfocus(); 
	//void			OnNamKillfocus(); 
	int			OnNamCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	CHMSICD10GroupSetup(CWnd *pParent);
	~CHMSICD10GroupSetup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSICD10Group(); 
	int OnEditHMSICD10Group(); 
	int OnDeleteHMSICD10Group(); 
	int OnSaveHMSICD10Group(); 
	int OnCancelHMSICD10Group(); 
	int OnHMSICD10GroupListLoadData(); 
};
#endif
