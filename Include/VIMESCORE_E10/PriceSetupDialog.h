#ifndef PRICESETUPDIALOG_H
#define PRICESETUPDIALOG_H

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
class CPriceSetupDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPriceSetup;
	CGuiLabel		m_wndSale1Label;
	CGuiNumberCtrl	m_wndSale1;
	CGuiLabel		m_wndSale2Label;
	CGuiNumberCtrl	m_wndSale2;
	CGuiLabel		m_wndSale3Label;
	CGuiNumberCtrl	m_wndSale3;
	CGuiLabel		m_wndSale4Label;
	CGuiNumberCtrl	m_wndSale4;
	CGuiCheckBox	m_wndApply1;
	CGuiCheckBox	m_wndApply2;
	CGuiCheckBox	m_wndApply3;
	CGuiCheckBox	m_wndApply4;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;
	double	m_nSale1;
	double	m_nSale2;
	double	m_nSale3;
	double	m_nSale4;
	BOOL	m_bApply1;
	BOOL	m_bApply2;
	BOOL	m_bApply3;
	BOOL	m_bApply4;
	//User-def var
	long	m_nProductID;
	//void			OnSale1Change(); 
	//void			OnSale1Setfocus(); 
	//void			OnSale1Killfocus(); 
	int			OnSale1CheckValue(); 
	//void			OnSale2Change(); 
	//void			OnSale2Setfocus(); 
	//void			OnSale2Killfocus(); 
	int			OnSale2CheckValue(); 
	//void			OnSale3Change(); 
	//void			OnSale3Setfocus(); 
	//void			OnSale3Killfocus(); 
	int			OnSale3CheckValue(); 
	//void			OnSale4Change(); 
	//void			OnSale4Setfocus(); 
	//void			OnSale4Killfocus(); 
	int			OnSale4CheckValue(); 
	void			OnApply1Select(); 
	void			OnApply2Select(); 
	void			OnApply3Select(); 
	void			OnApply4Select(); 
	void			OnOKSelect(); 
	void			OnCancelSelect(); 
	CPriceSetupDialog(CWnd *pParent);
	~CPriceSetupDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPriceSetupDialog(); 
	int OnEditPriceSetupDialog(); 
	int OnDeletePriceSetupDialog(); 
	int OnSavePriceSetupDialog(); 
	int OnCancelPriceSetupDialog(); 
	int OnPriceSetupDialogListLoadData(); 
};
#endif
