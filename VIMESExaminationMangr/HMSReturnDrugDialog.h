#ifndef HMSRETURNDRUGDIALOG_H
#define HMSRETURNDRUGDIALOG_H

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
class CHMSReturnDrugDialog : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndDrugInformation;
	CGuiLabel		m_wndItemIDLabel;
	CGuiTextCtrl	m_wndItemID;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiTextCtrl	m_wndDrugName;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiLabel		m_wndOrderQuantityLabel;
	CGuiNumberCtrl	m_wndOrderQuantity;
	CGuiLabel		m_wndIssueQuantityLabel;
	CGuiNumberCtrl	m_wndIssueQuantity;
	CGuiButton		m_wndOK;
	CGuiButton		m_wndCancel;
	float	m_nOrderQuantity;
	float	m_nIssueQuantity;
	
	long	m_nBatchID;
	long	m_nTransactionID;
	long	m_nOrderID;
	long	m_nProduct_ID;
	CString	m_szItemID;
	CString	m_szDrugName;
	CString	m_szUnit;
	int		m_nIdx;
	long	m_nRefIdx;
	double	m_nUnitPrice;

	//void			OnItemIDChange(); 
	//void			OnItemIDSetfocus(); 
	//void			OnItemIDKillfocus(); 
	int			OnItemIDCheckValue(); 
	//void			OnDrugNameChange(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	int			OnDrugNameCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 

	//void			OnOrderQuantityChange(); 
	//void			OnOrderQuantitySetfocus(); 
	//void			OnOrderQuantityKillfocus(); 
	int			OnOrderQuantityCheckValue(); 
	//void			OnIssueQuantityChange(); 
	//void			OnIssueQuantitySetfocus(); 
	//void			OnIssueQuantityKillfocus(); 
	int			OnIssueQuantityCheckValue(); 
	void			OnOKSelect(); 
	void			OnCancelSelect(); 
	CHMSReturnDrugDialog(CWnd *pParent);
	~CHMSReturnDrugDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSReturnDrugDialog(); 
	int OnEditHMSReturnDrugDialog(); 
	int OnDeleteHMSReturnDrugDialog(); 
	int OnSaveHMSReturnDrugDialog(); 
	int OnCancelHMSReturnDrugDialog(); 
	int OnHMSReturnDrugDialogListLoadData(); 
};
#endif
