#ifndef ACCTAXCALCULATIONSDIALOG_H
#define ACCTAXCALCULATIONSDIALOG_H

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
class CAccTaxCalculationsDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndUntaxesAmountLabel;
	CGuiNumberCtrl	m_wndUntaxesAmount;
	CGuiLabel		m_wndTaxRateLabel;
	CGuiGroupBox	m_wndTaxCalculations;
	CGuiComboBox	m_wndTaxRate;
	CGuiLabel		m_wndTaxAmountLabel;
	CGuiNumberCtrl	m_wndTaxAmount;
	

	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;
	double	m_nUntaxesAmount;
	CString	m_szTaxRateKey;
	double	m_nTaxAmount;
	
	//void			OnUntaxesAmountChange(); 
	//void			OnUntaxesAmountSetfocus(); 
	//void			OnUntaxesAmountKillfocus(); 
	int			OnUntaxesAmountCheckValue(); 
	void			OnTaxRateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnTaxRateSelendok(); 
	//void			OnTaxRateSetfocus(); 
	//void			OnTaxRateKillfocus(); 
	long			OnTaxRateLoadData(); 
	//void			OnTaxRateAddNew(); 
	//void			OnTaxAmountChange(); 
	//void			OnTaxAmountSetfocus(); 
	//void			OnTaxAmountKillfocus(); 
	int			OnTaxAmountCheckValue(); 
	void			OnOKSelect(); 
	void			OnCancelSelect(); 
	CAccTaxCalculationsDialog(CWnd *pParent);
	~CAccTaxCalculationsDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddAccTaxCalculationsDialog(); 
	int OnEditAccTaxCalculationsDialog(); 
	int OnDeleteAccTaxCalculationsDialog(); 
	int OnSaveAccTaxCalculationsDialog(); 
	int OnCancelAccTaxCalculationsDialog(); 
	int OnAccTaxCalculationsDialogListLoadData(); 
};
#endif
