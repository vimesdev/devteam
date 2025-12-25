#ifndef HMSREPORTSNAPDLG_H
#define HMSREPORTSNAPDLG_H

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
class CHMSReportSnapDlg : public CGuiDialog{
protected:
	CString			m_szReport_id;
	
public:
	CString			m_szSnap_id;
	CString			m_szReport_date;
	CGuiLabel		m_wndLogDateLabel;
	CGuiComboBox	m_wndLogDate;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndDelete;
	CString	m_szLogDateKey;
	void			OnLogDateSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnLogDateSelendok(); 
	//void			OnLogDateSetfocus(); 
	//void			OnLogDateKillfocus(); 
	long			OnLogDateLoadData(); 
	//void			OnLogDateAddNew(); 
	void			OnExportSelect(); 
	void			OnDeleteSelect();
	CHMSReportSnapDlg(CWnd *pParent, CString szReport_id);
	~CHMSReportSnapDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSReportSnapDlg(); 
	int OnEditHMSReportSnapDlg(); 
	int OnDeleteHMSReportSnapDlg(); 
	int OnSaveHMSReportSnapDlg(); 
	int OnCancelHMSReportSnapDlg(); 
	int OnHMSReportSnapDlgListLoadData(); 
	void	OnExport();
};
#endif
