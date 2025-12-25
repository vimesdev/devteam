#ifndef E10_TRACKITEM_H
#define E10_TRACKITEM_H
#include "MainFrame_E10.h"
class CE10_TrackItem{
public:
	double m_nQtyOnhand;
	CE10_TrackItem(long nInvoiceNo, long nProductItemID);
	CString GetQueryString(long nInvoiceNo, long nItemID);
	int OnCheckBeforeExport(CExcel* xls, CRecord* rs);
	void	OnWriteExInfo(CExcel* xls, long nInvoiceNo, long nItemID, double& nQtyOnhand);
	void	OnWriteDetail(CExcel* xls, CRecord* rs);
};
#endif