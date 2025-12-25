#ifndef AMPRINTFORMS_H
#define AMPRINTFORMS_H

#include "ReportDocument.h"
#include "Excel.h"

class AFX_EXT_CLASS CAMPrintForms
{
public:
	void PrintPurchaseOrder(long nOrderID, int nForm_id=1);
	void In_phieu_de_nghi_tt(long nOrder_id);
	void In_phieu_de_nghi_tt_mau2(long nOrder_id);
	void In_danh_sach_de_nghi_tt(long nOrder_id);
	void In_danh_sach_tam_ung_hop_dong(long nOrder_id);
	void OnPrintFooterUser(CReportSection* rptFooter, CString szFieldEx=_T(""), CString szFieldSkip=_T(""));
};
#endif