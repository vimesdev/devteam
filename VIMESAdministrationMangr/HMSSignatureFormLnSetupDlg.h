#ifndef HMSSIGNATUREFORMLNSETUPDLG_H
#define HMSSIGNATUREFORMLNSETUPDLG_H

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
class CHMSSignatureFormLnSetupDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndSignListGroup;
	CGuiListCtrlEx	m_wndList;
	CGuiLabel		m_wndSignNameLabel;
	CGuiTextCtrl	m_wndSignName;
	CGuiLabel		m_wndSignDefaultLabel;
	CGuiTextCtrl	m_wndSignDefault;
	CGuiLabel		m_wndSignDescLabel;
	CGuiTextCtrl	m_wndSignDesc;
	CGuiCheckBox	m_wndSignHanging;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndClose;
	CString	m_szSignName;
	CString	m_szSignDefault;
	CString	m_szSignDesc;
	BOOL	m_bSignHanging;
	CString m_szFormID;
	int		m_nSignID;
	CDbfMap	m_hms_signature_formlnTbl;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnSignNameChange(); 
	//void			OnSignNameSetfocus(); 
	//void			OnSignNameKillfocus(); 
	int			OnSignNameCheckValue(); 
	//void			OnSignDefaultChange(); 
	//void			OnSignDefaultSetfocus(); 
	//void			OnSignDefaultKillfocus(); 
	int			OnSignDefaultCheckValue(); 
	//void			OnSignDescChange(); 
	//void			OnSignDescSetfocus(); 
	//void			OnSignDescKillfocus(); 
	int			OnSignDescCheckValue(); 
	void			OnSignHangingSelect(); 
	void			OnAddSelect(); 
	void			OnEditSelect(); 
	void			OnDeleteSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnCloseSelect(); 
	void OnListSwapItem();
	CHMSSignatureFormLnSetupDlg(CWnd *pParent);
	~CHMSSignatureFormLnSetupDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	
	int SetMode(int nMode);
	int OnAddHMSSignatureFormLnSetupDlg(); 
	int OnEditHMSSignatureFormLnSetupDlg(); 
	int OnDeleteHMSSignatureFormLnSetupDlg(); 
	int OnSaveHMSSignatureFormLnSetupDlg(); 
	int OnCancelHMSSignatureFormLnSetupDlg(); 
	int OnHMSSignatureFormLnSetupDlgListLoadData(); 
};
#endif
