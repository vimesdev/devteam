#ifndef HMSSERVICEPACKAGEDETAILDIALOG_H
#define HMSSERVICEPACKAGEDETAILDIALOG_H

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
class CHMSServicePackageDetailDialog : public CGuiDialog{
protected:
public:
	CGuiLabel		m_wndDocumentNoLabel;
	CGuiTextCtrl	m_wndDocumentNo;
	CGuiLabel		m_wndOrderIdLabel;
	CGuiTextCtrl	m_wndOrderId;
	CGuiLabel		m_wndPatientNameLabel;
	CGuiTextCtrl	m_wndPatientName;
	CGuiLabel		m_wndBeginDateLabel;
	CGuiDateTimeCtrl	m_wndBeginDate;
	CGuiLabel		m_wndEndDateLabel;
	CGuiDateTimeCtrl	m_wndEndDate;
	CGuiLabel		m_wndOrderQtyLabel;
	CGuiNumberCtrl	m_wndOrderQty;
	CGuiLabel		m_wndRealQtyLabel;
	CGuiNumberCtrl	m_wndRealQty;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndTerminate;
	CGuiButton		m_wndClose;
	CString	m_szDocumentNo;
	CString	m_szOrderId;
	CString	m_szPatientName;
	CString	m_szBeginDate;
	CString	m_szEndDate;
	long	m_nOrderQty;
	long	m_nRealQty;
	CString	m_szStatus;
	//void			OnDocumentNoChange(); 
	//void			OnDocumentNoSetfocus(); 
	//void			OnDocumentNoKillfocus(); 
	int			OnDocumentNoCheckValue(); 
	//void			OnOrderIdChange(); 
	//void			OnOrderIdSetfocus(); 
	//void			OnOrderIdKillfocus(); 
	int			OnOrderIdCheckValue(); 
	//void			OnPatientNameChange(); 
	//void			OnPatientNameSetfocus(); 
	//void			OnPatientNameKillfocus(); 
	int			OnPatientNameCheckValue(); 
	//void			OnBeginDateChange(); 
	//void			OnBeginDateSetfocus(); 
	//void			OnBeginDateKillfocus(); 
	int			OnBeginDateCheckValue(); 
	//void			OnEndDateChange(); 
	//void			OnEndDateSetfocus(); 
	//void			OnEndDateKillfocus(); 
	int			OnEndDateCheckValue(); 
	//void			OnOrderQtyChange(); 
	//void			OnOrderQtySetfocus(); 
	//void			OnOrderQtyKillfocus(); 
	int			OnOrderQtyCheckValue(); 
	//void			OnRealQtyChange(); 
	//void			OnRealQtySetfocus(); 
	//void			OnRealQtyKillfocus(); 
	int			OnRealQtyCheckValue(); 
	//void			OnStatusChange(); 
	//void			OnStatusSetfocus(); 
	//void			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnTerminateSelect(); 
	void			OnCloseSelect(); 
	CHMSServicePackageDetailDialog(CWnd *pParent);
	~CHMSServicePackageDetailDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSServicePackageDetailDialog(); 
	int OnEditHMSServicePackageDetailDialog(); 
	int OnDeleteHMSServicePackageDetailDialog(); 
	int OnSaveHMSServicePackageDetailDialog(); 
	int OnCancelHMSServicePackageDetailDialog(); 
	int OnHMSServicePackageDetailDialogListLoadData(); 
};
#endif
