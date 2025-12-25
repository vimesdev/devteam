#ifndef IVFKETQUADIALOG_H
#define IVFKETQUADIALOG_H

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
class AFX_EXT_CLASS CIVFKetQuaDialog : public CGuiDialog{
protected:
	long	m_nOrderID;
	CString	m_szOrderType;
public:
	CGuiLabel		m_wndBetaHCGLabel;
	CGuiComboBox	m_wndBetaHCG;
	CGuiLabel		m_wndThailamsangLabel;
	CGuiComboBox	m_wndThailamsang;
	CGuiLabel		m_wndSoluongthaiLabel;
	CGuiNumberCtrl	m_wndSoluongthai;
	CGuiLabel		m_wndKetcucsankhoaLabel;
	CGuiComboBox	m_wndKetcucsankhoa;
	CGuiButton		m_wndKetquacls;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szBetaHCGKey;
	CString	m_szThailamsangKey;
	long	m_nSoluongthai;
	CString	m_szKetcucsankhoaKey;
	void			OnBetaHCGSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnBetaHCGSelendok(); 
	//void			OnBetaHCGSetfocus(); 
	//void			OnBetaHCGKillfocus(); 
	long			OnBetaHCGLoadData(); 
	//void			OnBetaHCGAddNew(); 
	void			OnThailamsangSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnThailamsangSelendok(); 
	//void			OnThailamsangSetfocus(); 
	//void			OnThailamsangKillfocus(); 
	long			OnThailamsangLoadData(); 
	//void			OnThailamsangAddNew(); 
	//void			OnSoluongthaiChange(); 
	//void			OnSoluongthaiSetfocus(); 
	//void			OnSoluongthaiKillfocus(); 
	int			OnSoluongthaiCheckValue(); 
	void			OnKetcucsankhoaSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnKetcucsankhoaSelendok(); 
	//void			OnKetcucsankhoaSetfocus(); 
	//void			OnKetcucsankhoaKillfocus(); 
	long			OnKetcucsankhoaLoadData(); 
	//void			OnKetcucsankhoaAddNew(); 
	void			OnKetquaclsSelect(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CIVFKetQuaDialog(CWnd *pParent, long nOrderID, CString szOrderType);
	~CIVFKetQuaDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddIVFKetQuaDialog(); 
	int OnEditIVFKetQuaDialog(); 
	int OnDeleteIVFKetQuaDialog(); 
	int OnSaveIVFKetQuaDialog(); 
	int OnCancelIVFKetQuaDialog(); 
	int OnIVFKetQuaDialogListLoadData(); 
};
#endif
