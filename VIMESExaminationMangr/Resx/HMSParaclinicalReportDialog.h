#ifndef HMSPARACLINICALREPORTDIALOG_H
#define HMSPARACLINICALREPORTDIALOG_H

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Viet Nam Medical Software Join Stock Company. 2005-2010. 			
//	All rights reserved. 
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	Email  : hayhv@vimes.com.vn or hayhv@yahoo.com
//	Website: http://www.vimes.com.vn
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Ban quyen cua Cong Ty Co Phan Phan Mem Y Te Viet Nam 2005-2010.
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
class CHMSParaclinicalReportDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndReportParameters;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateCtrl	m_wndToDate;
	CGuiLabel		m_wndRoomLabel;
	CGuiComboBox	m_wndRoom;
	CGuiCheckBox	m_wndInputResults;
	CGuiCheckBox	m_wndFeeAccepted;
	CGuiListCtrl	m_wndList;
	CGuiButton		m_wndRun;
	CGuiButton		m_wndPreview;
	CGuiButton		m_wndExportXLS;
	CGuiButton		m_wndClose;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szRoomKey;
	BOOL	m_bInputResults;
	BOOL	m_bFeeAccepted;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnRoomSelendok(); 
	//void			OnRoomSetfocus(); 
	//void			OnRoomKillfocus(); 
	long			OnRoomLoadData(); 
	void			OnRoomAddNew(); 
	void			OnInputResultsSelect(); 
	void			OnFeeAcceptedSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnRunSelect(); 
	void			OnPreviewSelect(); 
	void			OnExportXLSSelect(); 
	void			OnCloseSelect(); 
	CHMSParaclinicalReportDialog(CWnd *pParent);
	~CHMSParaclinicalReportDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSParaclinicalReportDialog(); 
	int OnEditHMSParaclinicalReportDialog(); 
	int OnDeleteHMSParaclinicalReportDialog(); 
	int OnSaveHMSParaclinicalReportDialog(); 
	int OnCancelHMSParaclinicalReportDialog(); 
	int OnHMSParaclinicalReportDialogListLoadData(); 
};
#endif
