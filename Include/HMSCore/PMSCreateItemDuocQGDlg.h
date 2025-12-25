#ifndef PMSCREATEITEMDUOCQGDLG_H
#define PMSCREATEITEMDUOCQGDLG_H

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
class CPMSCreateItemDuocQGDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndDrugInforMation;
	CGuiLabel		m_wndDrugNameLabel;
	CGuiTextCtrl	m_wndDrugName;
	CGuiLabel		m_wndRegCodeLabel;
	CGuiTextCtrl	m_wndRegCode;
	CGuiLabel		m_wndHoatChatLabel;
	CGuiTextCtrl	m_wndhoat_chat;
	CGuiLabel		m_wndContentLabel;
	CGuiTextCtrl	m_wndContent;
	CGuiLabel		m_wndQuyCachDGlabel;
	CGuiTextCtrl	m_wndQuyCachDG;
	CGuiLabel		m_wndHangSXLabel;
	CGuiTextCtrl	m_wndHangSX;
	CGuiLabel		m_wndNuocSxLabel;
	CGuiTextCtrl	m_wndNuocSx;
	CGuiLabel		m_wndUnitLabel;
	CGuiTextCtrl	m_wndUnit;
	CGuiButton		m_wndCreate;
	CGuiButton		m_wndExit;
	CString	m_szDrugName;
	CString	m_szRegCode;
	CString	m_szhoat_chat;
	CString	m_szContent;
	CString	m_szQuyCachDG;
	CString	m_szHangSX;
	CString	m_szNuocSx;
	CString	m_szUnit;
	long m_nProduct_item_id;
	int m_nStockID;
	CString m_szMaQg;
	CDbfMap	m_hms_duocQuocGiatbl;
	//void			OnDrugNameChange(); 
	//void			OnDrugNameSetfocus(); 
	//void			OnDrugNameKillfocus(); 
	int			OnDrugNameCheckValue(); 
	//void			OnRegCodeChange(); 
	//void			OnRegCodeSetfocus(); 
	//void			OnRegCodeKillfocus(); 
	int			OnRegCodeCheckValue(); 
	//void			Onhoat_chatChange(); 
	//void			Onhoat_chatSetfocus(); 
	//void			Onhoat_chatKillfocus(); 
	int			Onhoat_chatCheckValue(); 
	//void			OnContentChange(); 
	//void			OnContentSetfocus(); 
	//void			OnContentKillfocus(); 
	int			OnContentCheckValue(); 
	//void			OnQuyCachDGChange(); 
	//void			OnQuyCachDGSetfocus(); 
	//void			OnQuyCachDGKillfocus(); 
	int			OnQuyCachDGCheckValue(); 
	//void			OnHangSXChange(); 
	//void			OnHangSXSetfocus(); 
	//void			OnHangSXKillfocus(); 
	int			OnHangSXCheckValue(); 
	//void			OnNuocSxChange(); 
	//void			OnNuocSxSetfocus(); 
	//void			OnNuocSxKillfocus(); 
	int			OnNuocSxCheckValue(); 
	//void			OnUnitChange(); 
	//void			OnUnitSetfocus(); 
	//void			OnUnitKillfocus(); 
	int			OnUnitCheckValue(); 
	void			OnCreateSelect(); 
	void			OnExitSelect(); 
	CPMSCreateItemDuocQGDlg(CWnd *pParent);
	~CPMSCreateItemDuocQGDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPMSCreateItemDuocQGDlg(); 
	int OnEditPMSCreateItemDuocQGDlg(); 
	int OnDeletePMSCreateItemDuocQGDlg(); 
	int OnSavePMSCreateItemDuocQGDlg(); 
	int OnCancelPMSCreateItemDuocQGDlg(); 
	int OnPMSCreateItemDuocQGDlgListLoadData(); 
};
#endif
