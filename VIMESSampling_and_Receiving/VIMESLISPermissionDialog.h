#ifndef HMSPARACLINICALPERMDIALOG_H
#define HMSPARACLINICALPERMDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Medical Informatics Technology and Equipment Join Stock Company. 2008-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@miteco.com.vn or hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Thiet Bi va Cong Nghe Tin Hoc Y Te MITECO 2008-2010.
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh(GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	Email  : hayhv@miteco.com.vn hoac hayhv@yahoo.com
//	Website: http://www.miteco.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CVIMESLISPermissionDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndParaclinicalGroup;
	CGuiLabel		m_wndUserNameLabel;
	CGuiComboBox	m_wndUserName;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndClose;
	CString	m_szUserNameKey;
	CDbfMap	m_hms_paraclinicalpermTbl;
	void			OnUserNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnUserNameSelendok(); 
	//void			OnUserNameSetfocus(); 
	//void			OnUserNameKillfocus(); 
	long			OnUserNameLoadData(); 
	void			OnUserNameAddNew(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnApplySelect(); 
	void			OnCloseSelect(); 
	CVIMESLISPermissionDialog(CWnd *pParent);
	~CVIMESLISPermissionDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalPermDialog(); 
	int OnEditHMSParaclinicalPermDialog(); 
	int OnDeleteHMSParaclinicalPermDialog(); 
	int OnSaveHMSParaclinicalPermDialog(); 
	int OnCancelHMSParaclinicalPermDialog(); 
	int OnHMSParaclinicalPermDialogListLoadData(); 
};

#endif
