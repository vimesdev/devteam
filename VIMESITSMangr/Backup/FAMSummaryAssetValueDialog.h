#ifndef FAMSUMMARYASSETVALUEDIALOG_H
#define FAMSUMMARYASSETVALUEDIALOG_H

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
class CFAMSummaryAssetValueDialog : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndReportParameters;
	CGuiLabel		m_wndFromMonthLabel;
	CGuiComboBox	m_wndFromMonth;
	CGuiLabel		m_wndToMonthLabel;
	CGuiComboBox	m_wndToMonth;
	CGuiLabel		m_wndYearLabel;
	CGuiComboBox	m_wndYear;
	CGuiLabel		m_wndCategoryLabel;
	CGuiComboBox	m_wndCategory;
	CGuiButton		m_wndPrintPreview;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndClose;
	CString	m_szFromMonthKey;
	CString	m_szToMonthKey;
	CString	m_szYearKey;
	CString	m_szCategoryKey;
	void			OnFromMonthSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnFromMonthSelendok(); 
	//void			OnFromMonthSetfocus(); 
	//void			OnFromMonthKillfocus(); 
	long			OnFromMonthLoadData(); 
	void			OnFromMonthAddNew(); 
	void			OnToMonthSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnToMonthSelendok(); 
	//void			OnToMonthSetfocus(); 
	//void			OnToMonthKillfocus(); 
	long			OnToMonthLoadData(); 
	void			OnToMonthAddNew(); 
	void			OnYearSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnYearSelendok(); 
	//void			OnYearSetfocus(); 
	//void			OnYearKillfocus(); 
	long			OnYearLoadData(); 
	void			OnYearAddNew(); 
	void			OnCategorySelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnCategorySelendok(); 
	//void			OnCategorySetfocus(); 
	//void			OnCategoryKillfocus(); 
	long			OnCategoryLoadData(); 
	void			OnCategoryAddNew(); 
	void			OnPrintPreviewSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect(); 
	void			OnCloseSelect(); 
	void			OnPrint(bool bPreview = false);
	CFAMSummaryAssetValueDialog(CWnd *pParent);
	~CFAMSummaryAssetValueDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddFAMSummaryAssetValueDialog(); 
	int OnEditFAMSummaryAssetValueDialog(); 
	int OnDeleteFAMSummaryAssetValueDialog(); 
	int OnSaveFAMSummaryAssetValueDialog(); 
	int OnCancelFAMSummaryAssetValueDialog(); 
	int OnFAMSummaryAssetValueDialogListLoadData(); 
};
#endif
