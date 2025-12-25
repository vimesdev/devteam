#ifndef REPORTDOCUMENT_H
#define REPORTDOCUMENT_H

#include "guimainframe.h"
#include "ReportMain.h"
#include "ReportPrinter.h"
#include "PdfSignature.h"

class AFX_EXT_CLASS CReport
	
{
protected:
	bool	m_bDesign;
	CReportMain*	m_pReportMain;
	CReportPrinter*	m_pPrinter;
	CWnd*	m_pOldFrame;
	CString	m_szCurrentDir;
	bool	m_bEnablePrint;	
public:
	
	CReport(void);
	~CReport(void);
	bool Init(LPCTSTR lpszFileName, bool bPrintPage=false, bool bPrintPageHeader=false, int nNumberOfCopies=1, bool bPrintLastPage=false);
	/////////////////////////////////////////////////////////
	//Ham nay cho phep goi form tu may chu web
	//Cu phap goi nhu sau
	// CReport rpt;
	// rpt.InitURL(_T("report/tenfile.rpt"));
	// hoac
	// rpt.InitURL(_T("report?file=tenfile.rpt"));
	// Neu dung function InitURL thi trong hms_config phai cai cai host va port cho web service
	// Ex: update hms_config set sys_web_url='http://10.0.76.252:8080';
	//////////////////////////////////////////////////////////////////////////
	bool InitURL(LPCTSTR lpszFileName, bool bPrintPage=false, bool bPrintPageHeader=false, int nNumberOfCopies=1, bool bPrintLastPage=false);

	bool Init(CHTMLayoutCtrl* pCtrl, bool bPrintPage=false, bool bPrintPageHeader=false, int nNumberOfCopies=1, bool bPrintLastPage=false);
	//////////////////////////////////
	//Ham post yeu cau len server va tra ve du lieu json
	//Vi du:
	//CReport rpt;
	//rpt.Post('api/baocao_tonghopkham_benh?tungay=2019/01/01&denngay=2019/12/31');
	//rpt.PrintPreview();
	//
	////////////////////////////////////////////////
	bool Post(LPCTSTR lpszApi, SignatureData* pSig=NULL);
	void SetMargins(int left, int top, int right, int bottom);
	bool PrintPreview(bool bEnablePrint=true);
	void PrintToFile(){};
	bool Print(bool bDirect=false);
	bool IsPrinted();
	bool SavePDF(LPCTSTR lpszFileName, bool bOpen = false);
	void SetExportFile(LPCTSTR lpszFile);
	void EnableHeaderOddPage(bool bFlag);
	void SetDescription(LPCTSTR lpszDesc);
	
	bool Signature( LPCTSTR lpszSignName);
    void AddSignatureFile(LPCTSTR lpszFile, LPCTSTR lpszSignatureID = _T(""));

	CReportPrinter* GetReportDocument(){ return m_pPrinter; }
	CReportSection*	GetReportHeader();
	CReportSection*	GetReportFooter();
	CReportSection*	GetPageHeader();
	CReportSection*	GetPageFooter();
	CReportSection*	GetGroupHeader(int nIndex=0);
	CReportSection*	GetGroupFooter(int nIndex=0);
	CReportSection*	GetDetail(int nIndex=0);
	CReportSection*	AddDetail(CReportSection* rs=NULL);
	void			ResetContent();
	int				GetPageType();
	bool			IsDesign(){ return m_bDesign;}
	void			SetExportCallback(void* pCallback);
	void			SetPrintCallback(void* pCallback);
	CReportPrinter*	GetReportPrinter(){ return m_pPrinter;}
    CString CreateSignaturePending(long nDocNo, long nOrderId,
                                   LPCTSTR lpszItem = _T(""));
    CString			GetSignatureID();
};



#endif
