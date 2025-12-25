#ifndef PRODUCTUPDATEDIALOG_H
#define PRODUCTUPDATEDIALOG_H

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
class ProductUpdateDialog : public CGuiDialog
{

protected:
public:
	CGuiGroupBox	m_wndDescGroupBox;
	CGuiLabel		m_wndTenLabel;
	CGuiTextCtrl	m_wndTen;
	CGuiLabel		m_wndTen_AXLabel;
	CGuiTextCtrl	m_wndTen_AX;
	CGuiLabel		m_wndMahieu_label;
	CGuiTextCtrl	m_wndmahieu;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szTen;
	CString	m_szTen_AX;
	CString	m_szmahieu;
	long m_nDocumentNo, m_nOrderId;
	long	m_nProductID;
	CDbfMap m_productTbl;
	//void			OnTenChange(); 
	//void			OnTenSetfocus(); 
	//void			OnTenKillfocus(); 
	int			OnTenCheckValue(); 
	//void			OnTen_AXChange(); 
	//void			OnTen_AXSetfocus(); 
	//void			OnTen_AXKillfocus(); 
	int			OnTen_AXCheckValue(); 
	int			OnmahieuCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	ProductUpdateDialog(CWnd *pParent);
	~ProductUpdateDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOperationUpdateDialog(); 
	int OnEditHMSOperationUpdateDialog(); 
	int OnDeleteHMSOperationUpdateDialog(); 
	int OnSaveHMSOperationUpdateDialog(); 
	int OnCancelHMSOperationUpdateDialog(); 
	int OnHMSOperationUpdateDialogListLoadData(); 
};
#endif
