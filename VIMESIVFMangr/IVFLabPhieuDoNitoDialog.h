#ifndef IVFLABPHIEUDONITODIALOG_H
#define IVFLABPHIEUDONITODIALOG_H

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
class CIVFLabPhieuDoNitoDialog : public CGuiDialog{
protected:
	CString		m_szID;
	CString		m_szStatus;
public:
	CGuiLabel		m_wndSophieuLabel;
	CGuiTextCtrl	m_wndSophieu;
	CGuiLabel		m_wndNgaydoLabel;
	CGuiDateCtrl	m_wndNgaydo;
	CGuiLabel		m_wndNguoidoLabel;
	CGuiComboBox	m_wndNguoido;
	CGuiLabel		m_wndDiengiaiLabel;
	CGuiTextCtrl	m_wndDiengiai;
	CGuiLabel		m_wndThungLabel;
	CGuiComboBox	m_wndThung;
	CGuiButton		m_wndAddLine;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndSaveAndAccept;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szSophieu;
	CString	m_szNgaydo;
	CString	m_szNguoidoKey;
	CString	m_szDiengiai;
	CString	m_szThungKey;
	CDbfMap	m_ivf_phieu_do_nitoTbl;
	//void			OnSophieuChange(); 
	//void			OnSophieuSetfocus(); 
	//void			OnSophieuKillfocus(); 
	int			OnSophieuCheckValue(); 
	//void			OnNgaydoChange(); 
	//void			OnNgaydoSetfocus(); 
	//void			OnNgaydoKillfocus(); 
	int			OnNgaydoCheckValue(); 
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
	void			OnThungSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThungSelendok(); 
	//void			OnThungSetfocus(); 
	//void			OnThungKillfocus(); 
	long			OnThungLoadData(); 
	//void			OnThungAddNew(); 
	void			OnAddLineSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnSaveAndAcceptSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CIVFLabPhieuDoNitoDialog(CWnd *pParent, CString szID, int nMode);
	~CIVFLabPhieuDoNitoDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFLabPhieuDoNitoDialog(); 
	int OnEditIVFLabPhieuDoNitoDialog(); 
	int OnDeleteIVFLabPhieuDoNitoDialog(); 
	int OnSaveIVFLabPhieuDoNitoDialog(BOOL bAccept=FALSE); 
	int OnCancelIVFLabPhieuDoNitoDialog(); 
	int OnIVFLabPhieuDoNitoDialogListLoadData(); 
};
#endif
