#ifndef SODMONTHLYSTATISTICS_H
#define SODMONTHLYSTATISTICS_H

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
#include "GuiView.h"
#include "DbField.h"
#include "Excel.h"
#define TIEP_DON 0
#define TONG_KHAM 1
#define KHAM_CHUYEN_PHONG 2
#define KHAM_NOP_TIEN 3
#define KHAM_CHUA_THU 4
#define routine(pXcel, pStr, pFromDate, pToDate) {pXcel.CreateSheet(1);pXcel.SetWorksheet(0);\
	pXcel.SetCellText(0, 0, pMF->m_CompanyInfo.sc_pname, 4098, true);\
	pXcel.SetCellText(0, 1, pMF->m_CompanyInfo.sc_name, 4098, true);\
	pStr.Format(_T("T\x1EEB ng\xE0y %s \x111\x1EBFn ng\xE0y %s"), CDate::Convert(pFromDate, yyyymmdd, ddmmyyyy), CDate::Convert(pToDate, yyyymmdd, ddmmyyyy));\
	pXcel.SetCellText(0, 3, pStr, 4098);}
class CSODMonthlyStatistics : public CGuiView{
protected:
	CStringArray m_arrQueryTitle;
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CString	m_szFromDate;
	CString	m_szToDate;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnExport(CExcel* pXcel, long& nRow, int nQueryID, double nData);
	CSODMonthlyStatistics(CWnd *pParent);
	~CSODMonthlyStatistics();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void SetDefaultValues();
	int SetMode(int nMode);
	CString GetQueryString(int nQueryID);
};
#endif
