#ifndef CFMDOCUMENTPRINTER_H
#define CFMDOCUMENTPRINTER_H

#include "GuiUtils.h"
#include "HMSMainFrame.h"
typedef CArray<double, double> tArrAmount;
struct sItem{
	CString szPostedDate;
	int		nType;
	double  nAmount;
};
typedef CArray<sItem, sItem> tArrItem;

class CFMDocumentPrinter{
private:
	BOOL m_bSOD;
	CString m_szObject;
public:
	CFMDocumentPrinter(CString szDocType, tArrItem* pArrItem, BOOL bSOD, CString szObject=_T(""), CString szFromDate=_T("")
		, CString szToDate=_T(""));
	~CFMDocumentPrinter();
	void OnPrintFooterUser(CReportSection *rptFooter);
	CString m_szFromDate;
	CString m_szToDate;
};
#endif