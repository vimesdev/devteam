#ifndef HMSMODIFYRATIONDIALOG_H
#define HMSMODIFYRATIONDIALOG_H

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
class CHMSModifyRationDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndModifyRationInformation;
	CGuiLabel		m_wndOldRationLabel;
	CGuiComboBox	m_wndOldRation;
	CGuiLabel		m_wndOldRationQtyLabel;
	CGuiNumberCtrl	m_wndOldRationQty;
	CGuiLabel		m_wndNewRationLabel;
	CGuiComboBox	m_wndNewRation;
	CGuiLabel		m_wndNewRationQtyLabel;
	CGuiNumberCtrl	m_wndNewRationQty;
	CGuiButton		m_wndApply;
	CGuiButton		m_wndCancel;
	CString	m_szOldRationKey;
	long	m_nOldRationQty;
	CString	m_szNewRationKey;
	long	m_nNewRationQty;
	void			OnOldRationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOldRationSelendok(); 
	//void			OnOldRationSetfocus(); 
	//void			OnOldRationKillfocus(); 
	long			OnOldRationLoadData(); 
	//void			OnOldRationAddNew(); 
	//void			OnOldRationQtyChange(); 
	//void			OnOldRationQtySetfocus(); 
	//void			OnOldRationQtyKillfocus(); 
	int			OnOldRationQtyCheckValue(); 
	void			OnNewRationSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnNewRationSelendok(); 
	//void			OnNewRationSetfocus(); 
	//void			OnNewRationKillfocus(); 
	long			OnNewRationLoadData(); 
	//void			OnNewRationAddNew(); 
	//void			OnNewRationQtyChange(); 
	//void			OnNewRationQtySetfocus(); 
	//void			OnNewRationQtyKillfocus(); 
	int			OnNewRationQtyCheckValue(); 
	void			OnApplySelect(); 
	void			OnCancelSelect(); 
	CHMSModifyRationDialog(CWnd *pParent);
	~CHMSModifyRationDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSModifyRationDialog(); 
	int OnEditHMSModifyRationDialog(); 
	int OnDeleteHMSModifyRationDialog(); 
	int OnSaveHMSModifyRationDialog(); 
	int OnCancelHMSModifyRationDialog(); 
	int OnHMSModifyRationDialogListLoadData(); 
};
#endif
