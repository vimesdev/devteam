#ifndef TMPHIEUSOKETTRUOCMODLGV5_H
#define TMPHIEUSOKETTRUOCMODLGV5_H

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
class CTMPhieuSoKetTruocMoDlg_V5 : public CGuiDialog
{
	long			m_nDocumentNo;
	int				m_nRefIdx;
	long			m_nOrderID;
protected:
public:

	CGuiGroupBox	m_wndParaclinicalInformation;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndPatientNoLabel;
	CGuiComboBox	m_wndPatientList;
	CGuiListCtrl	m_wndList;
	CGuiCheckBox    m_wndCLSTheoMau;
	CGuiCheckBox    m_wndCLSTheoCTM;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CString	m_szFromDate;
	CString	m_szToDate;
	BOOL m_bFromToDate;
	BOOL m_bCLSTheoMau;
	BOOL m_bCLSTheoCTM;
	CString	m_szPatientListKey;
    bool m_bIsAddTem;
    int m_nTreattime;
    CString m_szDocStatus;

	CDbfMap	m_HMS_BEFOREOPTTbl;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnCLSTheoMauSelect(); 
	void			OnCLSTheoCTMSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	CTMPhieuSoKetTruocMoDlg_V5(CWnd *pParent, int nMode, long nDocNo, int nRefIdx, long nOrderID);
	~CTMPhieuSoKetTruocMoDlg_V5();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddPhieuSoKetTruocMoDlg(); 
	int OnEditPhieuSoKetTruocMoDlg(); 
	int OnDeletePhieuSoKetTruocMoDlg(); 
	int OnSavePhieuSoKetTruocMoDlg(); 
	int OnCancelPhieuSoKetTruocMoDlg(); 
	int OnPhieuSoKetTruocMoDlgListLoadData(); 
	int	OnListSelectAll();
	int	OnListUnselectAll();
	void ToKeepNewResult();
	void			OnPatientListSelendok();
	void			OnPatientListSelectChange(int nOldItemSel, int nNewItemSel); 
	long			OnPatientListLoadData(); 

};
#endif