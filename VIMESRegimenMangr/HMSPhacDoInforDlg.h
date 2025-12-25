#ifndef HMSPHACDOINFORDLG_H
#define HMSPHACDOINFORDLG_H

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
class CHMSPhacDoInforDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndgrpPhacDoinfor;
	CGuiLabel		m_wndPhacDoLabel;
	CGuiTextCtrl	m_wndTenPhacDo;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndApply;
	CGuiLabel		m_wndStatusLabel;
	CGuiDateCtrl	m_wndApplyDate;

	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiLabel		m_wndNumberDaysLabel;
	CGuiNumberCtrl	m_wndNumberDays;
	CGuiLabel		m_wndVersionLabel;
	CGuiTextCtrl	m_wndVersion;
	CGuiLabel		m_wndApplyDateLabel;
	CGuiCheckBox	m_wndisActive;
	
	CString	m_szCategoryKey;
	CString	m_szTenPhacDo;
	CString	m_szNote;
	long	m_nNumberDays;
	CString	m_szVersion;
	CString	m_szApplyDate;
	int m_nMode;
	long m_nID;
	BOOL	m_bisActive;

	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 

	//void			OnTenPhacDoChange(); 
	//void			OnTenPhacDoSetfocus(); 
	//void			OnTenPhacDoKillfocus(); 
	int			OnTenPhacDoCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	int			OnApplyDateCheckValue();
		int			OnNumberDaysCheckValue(); 
	//void			OnVersionChange(); 
	//void			OnVersionSetfocus(); 
	//void			OnVersionKillfocus(); 
	int			OnVersionCheckValue(); 


	void			OnApplySelect();
	void			OnCategoryLabelSelect();
	void			OnisActiveSelect();
	CHMSPhacDoInforDlg(CWnd *pParent,int nMode);
	~CHMSPhacDoInforDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSPhacDoInforDlg(); 
	int OnEditHMSPhacDoInforDlg(); 
	int OnDeleteHMSPhacDoInforDlg(); 
	int OnSaveHMSPhacDoInforDlg(); 
	int OnCancelHMSPhacDoInforDlg(); 
	int OnHMSPhacDoInforDlgListLoadData(); 
};
#endif
