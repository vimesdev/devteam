#include "stdafx.h"
#include "E10_TrackItem.h"

CE10_TrackItem::CE10_TrackItem(long nInvoiceNo, long nProductItemID){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	m_nQtyOnhand = 0;
	CRecord rs(&pMF->m_db);
	CExcel xls;
	rs.ExecSQL(GetQueryString(nInvoiceNo, nProductItemID));
	if (OnCheckBeforeExport(&xls, &rs) < 0) return;
	xls.SetWorksheet(0);
	OnWriteExInfo(&xls, nInvoiceNo, nProductItemID, m_nQtyOnhand);
	OnWriteDetail(&xls, &rs);
	xls.Save(_T("Exports\\THEODOITHUOC.xls"));
}

CString CE10_TrackItem::GetQueryString(long nInvoiceNo, long nProductItemID){
	CString szSQL;
	szSQL.Format(_T(" SELECT impstockid,") \
				_T("   expstockid,") \
				_T("   iodate AS invoicedate,") \
				_T("   orderdate AS orderdate,") \
				_T("   invoiceno,") \
				_T("   invoiceid,") \
				_T("   SUM(qty)     AS qty,") \
				_T("   product_id       AS itemid,") \
				_T("   deptid,") \
				_T("   iotype,") \
				_T("   get_doctype(iotype) as iotypename,") \
				_T("   category,") \
				_T("   descr") \
				_T(" FROM") \
				_T("   (SELECT impstockid,") \
				_T("	 expstockid,") \
				_T("	 invoiceid,") \
				_T("     impdate    AS iodate,") \
				_T("     impinvoice AS invoiceno,") \
				_T("	 orderdate,") \
				_T("     sitemid,") \
				_T("     impqty AS qty,") \
				_T("	 deptid,") \
				_T("     iotype,") \
				_T("     CAST('I' AS NVARCHAR2(1)) as category,") \
				_T("	 descr") \
				_T("   FROM MIV") \
				_T("   UNION ALL") \
				_T("   SELECT expstockid,") \
				_T("	 impstockid,") \
				_T("	 invoiceid,") \
				_T("     expdate,") \
				_T("     expinvoice,") \
				_T("	 orderdate,") \
				_T("     sitemid,") \
				_T("     expqty,") \
				_T("	 deptid,") \
				_T("     iotype,") \
				_T("     category,") \
				_T("	 descr") \
				_T("   FROM MEV") \
				_T("   ) iotbl") \
				_T(" LEFT JOIN m_productitem_view ON(product_item_id=sitemid)") \
				_T(" WHERE qty > 0") \
				_T(" AND impstockid=(select po_storage_id from purchase_order where po_purchase_order_id = %ld)") \
				_T(" AND iodate >= (select po_approveddate from purchase_order where po_purchase_order_id = %ld)") \
				_T(" AND product_item_id = %ld") \
				_T(" GROUP BY impstockid, expstockid, iodate, orderdate, invoiceno, ") \
				_T("		  product_id, iotype, category, deptid, invoiceid, descr, product_item_id") \
				_T(" ORDER BY invoicedate"), nInvoiceNo, nInvoiceNo, nProductItemID);
	return szSQL;
}

int CE10_TrackItem::OnCheckBeforeExport(CExcel* xls, CRecord* rs){
	if (!xls->Load(_T("Exports\\MAU_THEODOITHUOC.xls"))){
		AfxMessageBox(_T("Exports\\MAU_THEODOITHUOC.xls"));
		return -1;
	}
	if (rs->IsEOF()){
		AfxMessageBox(_T("No Data"));
		return -2;
	}
	return 0;
}

void CE10_TrackItem::OnWriteExInfo(CExcel* xls, long nInvoiceNo, long nItemID, double& nQtyOnhand){
	CMainFrame_E10 *pMF = (CMainFrame_E10*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT get_storagename(po_storage_id) storage_name, 'T\x1EEB ng\xE0y '||to_char(po_approveddate, 'dd/mm/yyyy hh24:mi:ss') approved_date, ") \
				_T(" m_get_qtyonhand(po_storage_id, %ld, po_approveddate) - (select pol_qtyimport from purchase_orderline where pol_purchase_order_id = po_purchase_order_id and pol_product_item_id = %ld) qty_onhand") \
				_T(" from purchase_order where po_purchase_order_id = %ld"), nItemID, nItemID, nInvoiceNo);
	rs.ExecSQL(szSQL);
	xls->SetCellText(0, 2, rs.GetValue(_T("storage_name")), 4098, true);
	xls->SetCellText(0, 4, rs.GetValue(_T("approved_date")), 4098);
	xls->SetCellText(1, 5, rs.GetValue(_T("qty_onhand")), FMT_NUMBER1);
	rs.GetValue(_T("qty_onhand"), nQtyOnhand);
	//_msg(_T("m_nQtyOnhand: %ld| rsValue: %s| szSQL: %s"), nQtyOnhand, rs.GetValue(_T("qty_onhand")), szSQL);
	//_msg(_T("Value : %s"), rs.GetValue(_T("qty_onhand"))); 
}

void CE10_TrackItem::OnWriteDetail(CExcel* xls, CRecord* rs){
	int nRow = 8, nIdx = 1;
	CString tmpStr, szCategory;
	double nTmp = 0, nTotalImport = 0, nTotalExport = 0, nOnhand = m_nQtyOnhand;
	while (!rs->IsEOF()){
		xls->SetCellText(0, nRow, int2str(nIdx++), FMT_TEXT | FMT_RIGHT);
		xls->SetCellText(1, nRow, rs->GetValue(_T("invoiceno")), 4098);
		rs->GetValue(_T("orderdate"), tmpStr);
		xls->SetCellText(2, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		xls->SetCellText(3, nRow, rs->GetValue(_T("descr")), FMT_TEXT);
		rs->GetValue(_T("invoicedate"), tmpStr);
		xls->SetCellText(4, nRow, CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
		rs->GetValue(_T("category"), szCategory);
		rs->GetValue(_T("qty"), nTmp);
		if (szCategory == _T("I")){
			nOnhand += nTmp;
			nTotalImport += nTmp;
			xls->SetCellText(5, nRow, double2str(nTmp), FMT_NUMBER1);
		}
		else{
			rs->GetValue(_T("iotype"), tmpStr);
			//if (tmpStr == _T("MOV"))
			//	nExpMovement += nTmp;
			//else
			//	nExpPatient += nTmp;
			nOnhand -= nTmp;
			nTotalExport += nTmp;
			xls->SetCellText(6, nRow, double2str(nTmp), FMT_NUMBER1);
		}
		xls->SetCellText(7, nRow, double2str(nOnhand), FMT_NUMBER1);
		nRow++;
		rs->MoveNext();
	}
	xls->SetCellMergedColumns(0, nRow, 5);
	xls->SetCellText(0, nRow, _T("T\x1ED5ng \x63\x1ED9ng: "), 4098, true);
	xls->SetCellText(5, nRow, double2str(nTotalImport), FMT_NUMBER1, true);
	xls->SetCellText(6, nRow, double2str(nTotalExport), FMT_NUMBER1, true);
	xls->SetCellText(7, nRow, double2str(nOnhand), FMT_NUMBER1, true);
	//nRow++;
	//xls->SetCellMergedColumns(0, nRow, 5);
	//xls->SetCellText(0, nRow, _T("Trong \x111\xF3: "), 4098, true);
	//xls->SetCellText(4, nRow+1, _T("\x110i\x1EC1u \x63huy\x1EC3n"), 4098, true);
	//xls->SetCellText(4, nRow+2, _T("\x42N"), 4098, true);
	//nRow++;
	//xls->SetCellText(6, nRow, double2str(nExpMovement), FMT_NUMBER1, true);
	//nRow++;
	//xls->SetCellText(6, nRow, double2str(nExpPatient), FMT_NUMBER1, true);
}