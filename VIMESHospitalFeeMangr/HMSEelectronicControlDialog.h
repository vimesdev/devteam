#ifndef HMSEELECTRONICCONTROLDIALOG_H
#define HMSEELECTRONICCONTROLDIALOG_H

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
class CHMSEelectronicControlDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndGroupFilterData;
	CGuiGroupBox	m_wndGroupListInvoice;
	CGuiButton		m_wndLoadData;
	CGuiButton		m_wndPost;
	CGuiButton		m_wndClose;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndInvoiceNoLabel;
	CGuiNumberCtrl	m_wndInvoiceNo;
	CString	m_szFromDate;
	CString	m_szToDate;
	
	CString m_szPatientName;
	CString m_szStatus;
	CString m_szPattern;
	CString m_szCreateDate;
	CString m_szArisingDate;
	CString m_szType;
	CString m_szSerial;

	long m_nAmount;
	long m_nDocNo;
	

	CDbfMap	m_hms_electronicTbl;
	long	m_nInvoiceNo;
	void			OnLoadDataSelect(); 
	void			OnPostSelect(); 
	void			OnCloseSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	//void			OnInvoiceNoChange(); 
	//void			OnInvoiceNoSetfocus(); 
	//void			OnInvoiceNoKillfocus(); 
	int			OnInvoiceNoCheckValue(); 
	CHMSEelectronicControlDialog(CWnd *pParent);
	~CHMSEelectronicControlDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSEelectronicControlDialog(); 
	int OnEditHMSEelectronicControlDialog(); 
	int OnDeleteHMSEelectronicControlDialog(); 
	int OnSaveHMSEelectronicControlDialog(); 
	int OnCancelHMSEelectronicControlDialog(); 
	int OnHMSEelectronicControlDialogListLoadData(); 
	int GetDataInvoice(CString szFromDate, CString szToDate);
};
#endif
