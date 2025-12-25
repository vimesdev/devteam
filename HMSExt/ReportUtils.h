#ifndef REPORTUTILS_H
#define REPORTUTILS_H
#include "ReportDocument.h"
#include "Excel.h"
#include "GuiView.h"
#include "GuiDialog.h"

class AFX_EXT_CLASS CReportUtils
{
public:
	CReportUtils();
	~CReportUtils();
	void PrintDefault(CReport * pRpt);
	void PrintSection(
		CReport* pRpt, 
		erptSection rpt_section, 
		JSONVALUE jv, 
		int nSection_idx=0);
	void PrintJson(CReportSection* pSection, JSONVALUE jv);
	int Export(
		CExcel* pXcel, 
		CString szQuery, 
		CString szFileName, 
		JSONVALUE jFormat, 
		int nFirst_row = 0);
	void LoadReportDate(
		int nYear, 
		int nMonth, 
		CString& szFromDate, 
		CString& szToDate);
	int LoadReportPeriod(
		CWnd* pWnd, 
		CString szKey, 
		CString szFilter=_T(""));
	long LoadExamRoomList(
		CGuiComboBox *pWnd, 
		CString szKey, 
		CString szFilter=_T(""));
	CString GetCheckList(CGuiListCtrl* pList, int nCol=0);
	long LogInteraction_drug_icd(
		long nDocumentNo,
		long nOrderID, 
		CString szUser,
		CString szDrugName,
		CString szICD10, 
		CString szChoice, 
		CString szDescision,
		CString szType);
	int CheckAllergy(long nDoc_no, CGuiDialog* pDlg = NULL);
	void PrintOnExport(
		CWnd* pWnd, 
		void (*)(CWnd*), 
		CString szFileName,
		int nRowData = 6,
		bool bPreview=true);
	void PrintOnExport(CString szFilePath, int nRowData = 6, bool bPreview=true);
	int CreatePopupMenu(CWnd* pWnd, CString szMenuStr);
	void PrintFunctionalFoodConsultancy(long nDoc_no, long nOrder_id, bool bPreview=true);
	bool CheckReportVersion();
	/*Word automation helper*/
	void ExportWord(
		CRecord& rs, CString szFilePath, CString szRepeatingSectionTag=_T(""), 
		BOOL bUseOpenedFile=FALSE, BOOL bVisible=TRUE);

	CString MoneyToStringEx(double dAmount);
	void MoneyToString_V1(CString& szAmount);
};
#endif