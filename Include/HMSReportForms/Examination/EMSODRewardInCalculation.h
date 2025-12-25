#ifndef EMSODREWARDINCALCULATION_H
#define EMSODREWARDINCALCULATION_H

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
//#include "../ReportBase.h"
#include "DbField.h"
#include "Excel.h"
class CEMSODRewardInCalculation : public CGuiView
	//, public CReportBase
{
protected:
	CMap<int, int, CString, LPCTSTR> m_mSuperSonicLabel;
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mDepartmentLabel;
	CMap<CString, LPCTSTR, CString, LPCTSTR> m_mFeeGroupLabel;
	CMap<CString, LPCTSTR, int, int> m_mNormMap;
public:
	CGuiGroupBox	m_wndReportCondition;
	CGuiLabel		m_wndFromDateLabel;
	CGuiDateTimeCtrl	m_wndFromDate;
	CGuiLabel		m_wndToDateLabel;
	CGuiDateTimeCtrl	m_wndToDate;
	CGuiLabel		m_wndPerformDeptLabel;
	CGuiComboBox	m_wndPerformDept;
	CGuiLabel		m_wndPerformRoomLabel;
	CGuiComboBox	m_wndPerformRoom;
	CGuiLabel		m_wndPerformDoctorLabel;
	CGuiComboBox	m_wndPerformDoctor;
	CGuiLabel		m_wndFeeGroupLabel;
	CGuiComboBox	m_wndFeeGroup;
	CGuiCheckBox	m_wndGroupByFee;
	CGuiButton		m_wndExport;
	CGuiListCtrl	m_wndList;
	CString	m_szFromDate;
	CString	m_szToDate;
	CString	m_szPerformDeptKey;
	CString	m_szPerformRoomKey;
	CString	m_szPerformDoctorKey;
	CString m_szFeeGroupKey;
	BOOL	m_bGroupByFee;
	//void			OnFromDateChange(); 
	//void			OnFromDateSetfocus(); 
	//void			OnFromDateKillfocus(); 
	int			OnFromDateCheckValue(); 
	//void			OnToDateChange(); 
	//void			OnToDateSetfocus(); 
	//void			OnToDateKillfocus(); 
	int			OnToDateCheckValue(); 
	void			OnPerformDeptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformDeptSelendok(); 
	//void			OnPerformDeptSetfocus(); 
	//void			OnPerformDeptKillfocus(); 
	long			OnPerformDeptLoadData(); 
	//void			OnPerformDeptAddNew(); 
	void			OnPerformRoomSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformRoomSelendok(); 
	//void			OnPerformRoomSetfocus(); 
	//void			OnPerformRoomKillfocus(); 
	long			OnPerformRoomLoadData(); 
	//void			OnPerformRoomAddNew(); 
	void			OnPerformDoctorSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnPerformDoctorSelendok(); 
	//void			OnPerformDoctorSetfocus(); 
	//void			OnPerformDoctorKillfocus(); 
	long			OnPerformDoctorLoadData(); 
	//void			OnPerformDoctorAddNew(); 
	long			OnFeeGroupLoadData();
	void			OnExportSelect(); 
	int				OnCheckBeforeExport(CExcel* xls, CRecord* rs);
	CString GetQueryString();
	void GetDataFromCombo(CString& szWhere, CGuiComboBox* pCombo, CString szKey, CString szFieldName, bool bCheck=false, bool bNumber=false);
	void GetDataFromDate(CString& szWhere, CString szFromDate, CString szToDate, bool bTimestamp);
	CString BuildQueryString(CString szWhere, CString szOrderBy, CString szGroupBy);
	void WriteGroupHeader(CExcel* xls, CRecord* rs, int& nRow, int& nPrevRow, long& nTotalConversion, long& nTotalExam, CString& szPrevDate, CString& szPrevFeeGroup, CString& szPrevGroup, bool bEOF=false);
	//void WriteGroupHeader(CExcel* xls, CRecord* rs, int& nRow, int& nPrevRow, CString& szPrevDate, CString& szPrevFeeGroup, CString& szPrevGroup);
	void WriteHeaderDescr(CExcel* xls, CRecord* rs, int& nRow, long& nTotalExam, CString& szPrevDate, CString& szPrevFeeGroup, CString& szPrevGroup, bool& bWriteSummary, bool& bNewNorm, 
		CString& szNewFeeGroup, bool& bDateChange, long nTotalConversion, int nPrevRow);
	void WriteHeaderSummary(CExcel* xls, int nPrevRow, long nTotalConversion, bool bWriteSummary);
	void PassNormToCell(CExcel* xls, int& nRow, int& nPrevRow, long& nTotalConversion, bool& bWriteSummary, CString& szPrevFeeGroup, 
		CString& szNewFeeGroup, bool& bNewNorm, bool& bDateChange);
	void WriteTotalExam(CExcel* xls, int& nRow, long& nTotalExam);
	void WriteDetail(CExcel* xls, CRecord* rs, int& nRow, long& nTotalConversion, long& nTotalExam);
	long			OnListLoadData();
	CEMSODRewardInCalculation(CWnd *pParent);
	~CEMSODRewardInCalculation();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void SetDefaultValues();
	int SetMode(int nMode);


};
#endif
