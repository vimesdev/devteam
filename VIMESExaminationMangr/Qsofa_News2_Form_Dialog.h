#ifndef QSOFA_NEWS2_FORM_DIALOG_H
#define QSOFA_NEWS2_FORM_DIALOG_H

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
class CQsofa_News2_Form_Dialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndSpO2Label;
	CGuiNumberCtrl	m_wndSpO2;
	CGuiLabel		m_wndHrfLabel;
	CGuiComboBox	m_wndHrf;
	CGuiGroupBox	m_wndThongTinKhamMoRongLabel;
	CGuiLabel		m_wndO2Label;
	CGuiComboBox	m_wndO2;
	CGuiLabel		m_wndGlasgowLabel;
	CGuiNumberCtrl	m_wndGlasgow;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	long	m_nDocNo;
	long	m_nSpO2;
	CString	m_szHrfKey;
	CString	m_szO2Key;
	long	m_nGlasgow;
	CDbfMap	m_HMS_QSOFA_NEWS2Tbl;
	//void			OnSpO2Change(); 
	//void			OnSpO2Setfocus(); 
	//void			OnSpO2Killfocus(); 
	int			OnSpO2CheckValue(); 
	void			OnHrfSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnHrfSelendok(); 
	//void			OnHrfSetfocus(); 
	//void			OnHrfKillfocus(); 
	long			OnHrfLoadData(); 
	//void			OnHrfAddNew(); 
	void			OnO2SelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnO2Selendok(); 
	//void			OnO2Setfocus(); 
	//void			OnO2Killfocus(); 
	long			OnO2LoadData(); 
	//void			OnO2AddNew(); 
	//void			OnGlasgowChange(); 
	//void			OnGlasgowSetfocus(); 
	//void			OnGlasgowKillfocus(); 
	int			OnGlasgowCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CQsofa_News2_Form_Dialog(CWnd *pParent);
	~CQsofa_News2_Form_Dialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void SaveJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddQsofa_News2_Form_Dialog(); 
	int OnEditQsofa_News2_Form_Dialog(); 
	int OnDeleteQsofa_News2_Form_Dialog(); 
	int OnSaveQsofa_News2_Form_Dialog(); 
	int OnCancelQsofa_News2_Form_Dialog(); 
	int OnQsofa_News2_Form_DialogListLoadData(); 
};
#endif