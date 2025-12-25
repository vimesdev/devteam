#ifndef FAINVOICE_H
#define FAINVOICE_H

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
class AFX_EXT_CLASS CFAInvoice : public CGuiDialog{
protected:
	CArray<CWnd*, CWnd*>	m_Buttons;
public:
	long		m_nInvoiceID;
	CString		m_szDocType;
	CString		m_szStatus;

	CArray<CWnd*, CWnd*> m_sectionWnds;
	CArray<int, int>	m_sectionHeights;
	
	CGuiTabCtrl	m_wndTab;

	CDbfMap		m_fa_invoiceTbl;
	CRecord*	m_rsInvoice;

	CFAInvoice(CWnd *pParent);
	~CFAInvoice();
	virtual void OnCreateComponents();
	virtual void OnInitializeComponents();
	virtual void OnSetWindowEvents();
	virtual void OnDoDataExchange(CDataExchange* pDX);
	virtual void GetDataToScreen();
	virtual void GetScreenToData();
	virtual void SetDefaultValues();
	virtual int		SetMode(int nMode);
	virtual void	OnTabSelectChange(int nOld, int nNew); 
	virtual void	OnButtonClick(int nIndex);
	int OnAddFAInvoice(); 
	int OnEditFAInvoice(); 
	int OnDeleteFAInvoice(); 
	int OnSaveFAInvoice(); 
	int OnCancelFAInvoice(); 
	int OnFAInvoiceListLoadData(); 

	
	CGuiButton*	CreateButton(LPCTSTR lpszCaption, int nWidth=80);
	CGuiButton*	GetButton(int nIndex);
	void	RecalcLayout();
	void	OnButtonSelect();
	
	void	AddSection(CWnd *pWnd, int nHeight);
	void	SetSectionHeight(int nIndex, int  nHeight);
	long	GetInvoiceID();
	CDbfMap*	GetDbf();
	long	CreateNewInvoice();
	void	CancelInvoice();
	void	LoadData(long nInvoiceID);
	CString	GetDocType();
	CString	GetPostedStatus();
	void	UpdatePostedLabel();

	DECLARE_MESSAGE_MAP()
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
#endif
