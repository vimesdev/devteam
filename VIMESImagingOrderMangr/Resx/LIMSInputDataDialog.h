#ifndef LIMSINPUTDATADIALOG_H
#define LIMSINPUTDATADIALOG_H

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
class CLIMSInputDataDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndNormalIndex;
	CGuiLabel		m_wndCodeLabel;
	CGuiTextCtrl	m_wndCode;
	CGuiLabel		m_wndCodeInLabel;
	CGuiTextCtrl	m_wndCodeIn;
	CGuiLabel		m_wndRefCodeLabel;
	CGuiComboBox	m_wndRefCode;
	CGuiLabel		m_wndNameLabel;
	CGuiTextCtrl	m_wndName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndFemaleLabel;
	CGuiTextCtrl	m_wndFemale;
	CGuiLabel		m_wndMaleLabel;
	CGuiTextCtrl	m_wndMale;
	CGuiLabel		m_wndMinLabel;
	CGuiTextCtrl	m_wndMin;
	CGuiLabel		m_wndMaxLabel;
	CGuiTextCtrl	m_wndMax;
	CGuiCheckBox	m_wndPrint;
	CGuiCheckBox	m_wndActive;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szCode;
	CString	m_szCodeIn;
	CString	m_szRefCodeKey;
	CString	m_szName;
	CString	m_szUnit;
	CString	m_szFemale;
	CString	m_szMale;
	CString	m_szMin;
	CString	m_szMax;
	BOOL	m_bPrint;
	BOOL	m_bActive;
	CDbfMap	m_lims_instrument_dataTbl;
	//void			OnCodeChange(); 
	//void			OnCodeSetfocus(); 
	//void			OnCodeKillfocus(); 
	int			OnCodeCheckValue(); 
	//void			OnCodeInChange(); 
	//void			OnCodeInSetfocus(); 
	//void			OnCodeInKillfocus(); 
	int			OnCodeInCheckValue(); 
	void			OnRefCodeSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRefCodeSelendok(); 
	//void			OnRefCodeSetfocus(); 
	//void			OnRefCodeKillfocus(); 
	long			OnRefCodeLoadData(); 
	void			OnRefCodeAddNew(); 
	//void			OnNameChange(); 
	//void			OnNameSetfocus(); 
	//void			OnNameKillfocus(); 
	int			OnNameCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnFemaleChange(); 
	//void			OnFemaleSetfocus(); 
	//void			OnFemaleKillfocus(); 
	int			OnFemaleCheckValue(); 
	//void			OnMaleChange(); 
	//void			OnMaleSetfocus(); 
	//void			OnMaleKillfocus(); 
	int			OnMaleCheckValue(); 
	//void			OnMinChange(); 
	//void			OnMinSetfocus(); 
	//void			OnMinKillfocus(); 
	int			OnMinCheckValue(); 
	//void			OnMaxChange(); 
	//void			OnMaxSetfocus(); 
	//void			OnMaxKillfocus(); 
	int			OnMaxCheckValue(); 
	void			OnPrintSelect(); 
	void			OnActiveSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CLIMSInputDataDialog();
	~CLIMSInputDataDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddLIMSInputDataDialog(); 
	int OnEditLIMSInputDataDialog(); 
	int OnDeleteLIMSInputDataDialog(); 
	int OnSaveLIMSInputDataDialog(); 
	int OnCancelLIMSInputDataDialog(); 
	int OnLIMSInputDataDialogListLoadData(); 
};
#endif
