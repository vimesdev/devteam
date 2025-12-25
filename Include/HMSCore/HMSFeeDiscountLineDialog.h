#ifndef HMSFEEDISCOUNTLINEDIALOG_H
#define HMSFEEDISCOUNTLINEDIALOG_H

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
typedef struct tagFEEDISCOUNTITEM{
	CString szType;
	CString	szItemID;
	CString szDesc;
	CString szUnit;
	CString szUnitPrice;
	CString szQty;
	CString szAmount;
}FEEDISCOUNTITEM;

class CHMSFeeDiscountLineDialog : public CGuiDialog{
protected:
public:
	long		m_nPatientNo;
	long		m_nDocumentNo;
	int			m_nObjectID;
	long		m_nInvoiceNo;

	CArray<FEEDISCOUNTITEM, FEEDISCOUNTITEM&> m_items;

	CGuiGroupBox	m_wndFeeInformation;
	CGuiListCtrl	m_wndList;
	CGuiListCtrl	m_wndDiscountList;
	CGuiLabel		m_wndCreatedByLabel;
	CGuiTextCtrl	m_wndCreatedBy;
	CGuiLabel		m_wndReasonLabel;
	CGuiTextCtrl	m_wndReason;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CString	m_szCreatedBy;
	CString	m_szSignedBy;
	CString	m_szReason;
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	long			OnDiscountListLoadData(); 
	void			OnDiscountListSelectChange(int nOldItem, int nNewItem); 
	void			OnDiscountListDblClick(); 
	int			OnDiscountListDeleteItem(); 
	//void			OnCreatedByChange(); 
	//void			OnCreatedBySetfocus(); 
	//void			OnCreatedByKillfocus(); 
	int			OnCreatedByCheckValue(); 
	//void			OnSignedByChange(); 
	//void			OnSignedBySetfocus(); 
	//void			OnSignedByKillfocus(); 
	int			OnSignedByCheckValue(); 
	//void			OnReasonChange(); 
	//void			OnReasonSetfocus(); 
	//void			OnReasonKillfocus(); 
	int			OnReasonCheckValue(); 
	void			OnApplySelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect(); 
	CHMSFeeDiscountLineDialog(CWnd *pParent, int nMode);
	~CHMSFeeDiscountLineDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSFeeDiscountLineDialog(); 
	int OnEditHMSFeeDiscountLineDialog(); 
	int OnDeleteHMSFeeDiscountLineDialog(); 
	int OnSaveHMSFeeDiscountLineDialog(); 
	int OnCancelHMSFeeDiscountLineDialog(); 
	int OnHMSFeeDiscountLineDialogListLoadData();
	void	AddDiscountLine(int nLine);
	
};
#endif
