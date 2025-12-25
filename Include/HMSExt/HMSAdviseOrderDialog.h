#ifndef HMSADVISEORDERDIALOG_H
#define HMSADVISEORDERDIALOG_H

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
#include "HMSAdviseColistin.h"

class AFX_EXT_CLASS CHMSAdviseOrderDialog : public CGuiDialog{
protected:
public:
	CString m_szType;
	long	m_nOrderId;
	CString m_szStatus;
	CString m_szOrderDate;

	CHMSAdviseColistin	m_wndForm;
	CGuiButton		m_wndExchangeMessage;
	CGuiCheckBox	m_wndShowPrescription;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndDisconfirm;
	CGuiButton		m_wndAdvise;
	CGuiButton		m_wndClose;
	BOOL	m_bShowPrescription;
	void			OnExchangeMessageSelect(); 
	void			OnShowPrescriptionSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnConfirmSelect(); 
	void			OnDisconfirmSelect(); 
	void			OnAdviseSelect(); 
	void			OnCloseSelect(); 
	CHMSAdviseOrderDialog(CWnd *pParent, int nMode, long nOrderId);
	~CHMSAdviseOrderDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAdviseOrderDialog(); 
	int OnEditHMSAdviseOrderDialog(); 
	int OnDeleteHMSAdviseOrderDialog(); 
	int OnSaveHMSAdviseOrderDialog(); 
	int OnCancelHMSAdviseOrderDialog(); 
	int OnHMSAdviseOrderDialogListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	CString GetOrderStatus();
};
#endif
