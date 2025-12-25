#ifndef HMSOperationScheduleAddEntryPopup_H
#define HMSOperationScheduleAddEntryPopup_H

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
#include "GuiPopup.h"
#include "DbField.h"

class AFX_EXT_CLASS CHMSOperationScheduleAddEntryPopup : public CGuiPopup
{
protected:
public:
	CGuiLabel		m_wndItemNameLabel;
	CGuiComboBox	m_wndItemName;
	CGuiLabel		m_wndQuantityLabel;
	CGuiGroupBox	m_wndItemInfor;
	CGuiNumberCtrl	m_wndQuantity;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndClose;
	CString	m_szItemNameKey;
	long	m_nQuantity;
	CString	m_szNote;

	CDbfMap m_hms_op_materialorder_Tbl;

	long m_nDocNo;
	long m_nOperationID;
	double m_nUnitPrice;
	CString m_szOrderDate;
	CString m_szObjType;


	void			OnItemNameSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnItemNameSelendok(); 
	//void			OnItemNameSetfocus(); 
	//void			OnItemNameKillfocus(); 
	long			OnItemNameLoadData(); 
	//void			OnItemNameAddNew(); 
	//void			OnQuantityChange(); 
	//void			OnQuantitySetfocus(); 
	//void			OnQuantityKillfocus(); 
	int			OnQuantityCheckValue(); 
	//void			OnNoteChange(); 
	//void			OnNoteSetfocus(); 
	//void			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	void			OnSaveSelect(); 
	void			OnCloseSelect(); 
	CHMSOperationScheduleAddEntryPopup();
	CHMSOperationScheduleAddEntryPopup(CWnd *pParent, int nMode);
	~CHMSOperationScheduleAddEntryPopup();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSOperationScheduleAddEntryPopup(); 
	int OnEditHMSOperationScheduleAddEntryPopup(); 
	int OnDeleteHMSOperationScheduleAddEntryPopup(); 
	int OnSaveHMSOperationScheduleAddEntryPopup(); 
	int OnCancelHMSOperationScheduleAddEntryPopup(); 
	int OnHMSOperationScheduleAddEntryPopupListLoadData();

	void	ShowPopup(CWnd* pWndRef, int nShowPopup = WPS_BOTTOM);
	void	ClosePopup();
};
#endif
