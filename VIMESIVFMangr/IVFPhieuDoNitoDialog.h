#ifndef IVFPHIEUDONITODIALOG_H
#define IVFPHIEUDONITODIALOG_H

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
class CIVFPhieuDoNitoDialog : public CGuiDialog{
protected:
	long			m_nID;
public:
	CGuiLabel		m_wndngay_doLabel;
	CGuiDateCtrl	m_wndngay_do;
	CGuiLabel		m_wndNguoidoLabel;
	CGuiComboBox	m_wndNguoido;
	CGuiGroupBox	m_wndDetail;
	CGuiGroupBox	m_wndInformation;
	CGuiLabel		m_wndDiengiaiLabel;
	CGuiTextCtrl	m_wndDiengiai;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndAddLine;
	CGuiListCtrl	m_wndList;
	CString	m_szngay_do;
	CString	m_szNguoidoKey;
	CString	m_szDiengiai;
	//void			Onngay_doChange(); 
	//void			Onngay_doSetfocus(); 
	//void			Onngay_doKillfocus(); 
	int			Onngay_doCheckValue(); 
	void			OnNguoidoSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNguoidoSelendok(); 
	//void			OnNguoidoSetfocus(); 
	//void			OnNguoidoKillfocus(); 
	long			OnNguoidoLoadData(); 
	//void			OnNguoidoAddNew(); 
	//void			OnDiengiaiChange(); 
	//void			OnDiengiaiSetfocus(); 
	//void			OnDiengiaiKillfocus(); 
	int			OnDiengiaiCheckValue(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnAddLineSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	CIVFPhieuDoNitoDialog(CWnd *pParent, long nID, int nMode);
	~CIVFPhieuDoNitoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFPhieuDoNitoDialog(); 
	int OnEditIVFPhieuDoNitoDialog(); 
	int OnDeleteIVFPhieuDoNitoDialog(); 
	int OnSaveIVFPhieuDoNitoDialog(); 
	int OnCancelIVFPhieuDoNitoDialog(); 
	int OnIVFPhieuDoNitoDialogListLoadData(); 
};
#endif
