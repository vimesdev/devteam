#ifndef VIMESSETTINGPARAMETERSDIALOG_H
#define VIMESSETTINGPARAMETERSDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
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
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
#include "VIMESGeneralSetupDialog.h"

class CVIMESSettingParametersDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndSettingParameters;
	CGuiLabel		m_wndTableNameLabel;
	CGuiTextCtrl	m_wndTableName;
	CGuiLabel		m_wndIDFieldNameLabel;
	CGuiTextCtrl	m_wndIDFieldName;
	CGuiLabel		m_wndIDFieldTypeLabel;
	CGuiComboBox	m_wndIDFieldType;
	CGuiLabel		m_wndDescFieldNameLabel;
	CGuiTextCtrl	m_wndDescFieldName;
	CGuiButton		m_wndSetup;
	CGuiButton		m_wndReset;
	CGuiButton		m_wndClose;
	CString	m_szTableName;
	CString	m_szIDFieldName;
	CString	m_szIDFieldTypeKey;
	CString	m_szDescFieldName;
	//void			OnTableNameChange(); 
	//void			OnTableNameSetfocus(); 
	//void			OnTableNameKillfocus(); 
	int			OnTableNameCheckValue(); 
	//void			OnIDFieldNameChange(); 
	//void			OnIDFieldNameSetfocus(); 
	//void			OnIDFieldNameKillfocus(); 
	int			OnIDFieldNameCheckValue(); 
	void			OnIDFieldTypeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnIDFieldTypeSelendok(); 
	//void			OnIDFieldTypeSetfocus(); 
	//void			OnIDFieldTypeKillfocus(); 
	long			OnIDFieldTypeLoadData(); 
	void			OnIDFieldTypeAddNew(); 
	//void			OnDescFieldNameChange(); 
	//void			OnDescFieldNameSetfocus(); 
	//void			OnDescFieldNameKillfocus(); 
	int			OnDescFieldNameCheckValue(); 
	void			OnSetupSelect(); 
	void			OnResetSelect(); 
	void			OnCloseSelect(); 
	CVIMESSettingParametersDialog(CWnd *pParent);
	~CVIMESSettingParametersDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddVIMESSettingParametersDialog(); 
	int OnEditVIMESSettingParametersDialog(); 
	int OnDeleteVIMESSettingParametersDialog(); 
	int OnSaveVIMESSettingParametersDialog(); 
	int OnCancelVIMESSettingParametersDialog(); 
	int OnVIMESSettingParametersDialogListLoadData(); 
};
#endif
