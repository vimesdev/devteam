#ifndef PMPRODUCTCLASSINTERACTIONLINE_H
#define PMPRODUCTCLASSINTERACTIONLINE_H

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

class CPMProductClassInteractionLine : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndgrpthietla;
	CGuiLabel		m_wndFeeIDLabel;
	CGuiComboBox	m_wndFeeID;
	CGuiLabel		m_wndCondisionLabel;
	CGuiComboBox	m_wndCondision;
	CGuiLabel		m_wndValueLabel;
	CGuiNumberCtrl	m_wndValue;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndDescLabel;
	CGuiTextCtrl	m_wndDesc;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndClose;
	CGuiLabel		m_wndValue2Label;
	CGuiNumberCtrl	m_wndValue2;
	CGuiCheckBox	m_wndShowWarning;
	CGuiLabel		m_wndLink;
	CString	m_szFeeIDKey;
	CString	m_szCondisionKey;
	float	m_nValue;
	float	m_nValue2;
	CString	m_szUnit;
	CString	m_szDesc;
	BOOL	m_bShowWarning;
	CDbfMap	m_tblLine;
	long	m_nClassID;
	CString m_szICD;
	long	m_nID;
	void			OnFeeIDSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFeeIDSelendok(); 
	//void			OnFeeIDSetfocus(); 
	//void			OnFeeIDKillfocus(); 
	long			OnFeeIDLoadData(); 
	//void			OnFeeIDAddNew(); 
	void			OnCondisionSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCondisionSelendok(); 
	//void			OnCondisionSetfocus(); 
	//void			OnCondisionKillfocus(); 
	long			OnCondisionLoadData(); 
	//void			OnCondisionAddNew(); 
	//void			OnValueChange(); 
	//void			OnValueSetfocus(); 
	//void			OnValueKillfocus(); 
	int			OnValueCheckValue(); 
	int			OnValue2CheckValue();
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	//void			OnDescChange(); 
	//void			OnDescSetfocus(); 
	//void			OnDescKillfocus(); 
	int			OnDescCheckValue(); 
	void			OnAddSelect(); 
	void			OnCloseSelect(); 
	void			OnShowWarningSelect(); 							   
	CPMProductClassInteractionLine(CWnd *pParent);
	~CPMProductClassInteractionLine();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMProductClassInteractionLine(); 
	int OnEditPMProductClassInteractionLine(); 
	int OnDeletePMProductClassInteractionLine(); 
	int OnSavePMProductClassInteractionLine(); 
	int OnCancelPMProductClassInteractionLine(); 
	int OnPMProductClassInteractionLineListLoadData(); 
};
#endif
