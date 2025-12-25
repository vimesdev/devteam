#ifndef HMSADMITDISCHARGEONDEPT_H
#define HMSADMITDISCHARGEONDEPT_H

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

#define TONG_HOP 1
#define TONG_HOP_KHOI 2
#define TONG_HOP_TUONG 3
#define TONG_HOP_MO 4
#define TONG_HOP_MO_V2 5
#define TONG_HOP_MO_V2_CT 6

#define PTLI _T("'B41','B45'")
#define PTLII _T("'B42','B46'")
#define PTLIII _T("'B43','B47'")
#define PTLDB _T("'B44'")

class CHMSAdmitDischargeOnDept : public CGuiView{
protected:
	CString			m_szReport_id;
	int				m_nNoDataCol;
public:
	CGuiGroupBox	m_wndReportFilterInfo;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateCtrl	m_wndFromDate;
	CGuiButton		m_wndLoad;
	CGuiListCtrl	m_wndList;
	CGuiLabel		m_wndDepartmentLab;
	CGuiComboBox	m_wndDept;
	CGuiCheckBox	m_wndOutpatient;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndExport;
	CGuiButton		m_wndCapture;
	CString	m_szFromDate;
	CString m_szToDate;
	CString	m_szDeptKey;
	BOOL	m_bOutpatient;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	void			OnLoadSelect(); 
	long			OnListLoadData(); 
	void			OnListSelectChange(int nOldItem, int nNewItem); 
	void			OnListDblClick(); 
	int			OnListDeleteItem(); 
	void			OnDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnDeptSelendok(); 
	//void			OnDeptSetfocus(); 
	//void			OnDeptKillfocus(); 
	long			OnDeptLoadData(); 
	//void			OnDeptAddNew(); 
	void			OnOutpatientSelect(); 
	void			OnPrintSelect(); 
	void			OnExportSelect();
	void			OnCaptureSelect(); 
	CHMSAdmitDischargeOnDept();
	~CHMSAdmitDischargeOnDept();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSAdmitDischargeOnDept(); 
	int OnEditHMSAdmitDischargeOnDept(); 
	int OnDeleteHMSAdmitDischargeOnDept(); 
	int OnSaveHMSAdmitDischargeOnDept(); 
	int OnCancelHMSAdmitDischargeOnDept(); 
	int OnHMSAdmitDischargeOnDeptListLoadData(); 
	CString GetStringQuery(int nQuery=TONG_HOP);
	CString GetStringQuery1();
	void OnExportTonghop();
	void OnExportChitiet();
	void OnExportLog();
	void ExportLog(CString szSnap_id, CString szReport_date);
	void ExportLog_V2(CString szSnap_id);
	void ExportEx1(CExcel* pXls, int& nRow, CString szSnap_id);
	void ExportEx2(CExcel* pXls, int& nRow, CString szSnap_id);
	void ExportEx3(CExcel* pXls, int& nRow, CString szSnap_id);
	int SaveLog(CString szQuery, CString szOption=_T(""));
	CString OnCreateLob(CString szData);
	void SetRowHeight(CExcel * pXls, int nCol, int nRow, CString szData);
	double	GetRangeWidth(CExcel& xls, int nFromCol, int nToCol);
};
#endif
