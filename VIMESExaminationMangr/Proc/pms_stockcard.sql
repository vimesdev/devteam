
/*select pmst_id,
	pmst_orderdate,
	pmi_name,
	pmi_unit,
	pmstl_qty,
	pmst_expstockid,
	pmst_impstockid,
	pmst_deptid
FROM pms_stocktransfer
LEFT JOIN pms_stocktransfer_line ON(pmstl_id=pmst_id)
LEFT JOIN pms_stockitems ON(pmsi_id=pmstl_sitemid)
LEFT JOIN pms_items ON(pmi_id=pmsi_itemid)
ORDER BY pmst_id,  pmst_orderdate, pmsi_itemid
*/

SELECT invoiceno,
	invoicedate,
	case when invoicetype in('P','X','Z') then
		(select pmsl_name from pms_stocklist where pmsl_stockid=impstockid)
		when invoicetype not in('B', 'P','X','Z') then
		(select pmsl_name from pms_stocklist where pmsl_stockid=expstockid)
		when invoicetype in('B', 'Y') then
		(select sd_name from sys_dept where sd_id=deptid)
	else	' ' end as description,
	sitemid,
	impqty+expqty as qty
FROM
(
SELECT pmpo_id as invoiceno, 
	cast(pmpo_date as timestamp) as invoicedate,
	pmpo_stockid as impstockid,
	0 as expstockid,
	'' as deptid,
	pmpo_status as status,
	'P' as invoicetype,
	pmpol_sitemid as sitemid,
	pmpol_qty as impqty,
	0 as expqty	
FROM pms_purchase_order
LEFT JOIN pms_purchase_order_line ON(pmpo_id=pmpol_id)
UNION ALL
SELECT pmro_id,
	pmro_orderdate,
	pmro_impstockid,
	pmro_retstockid,
	pmro_retdeptid,
	pmro_status,
	pmro_type,
	pmrol_sitemid,
	pmrol_qty,
	0	
FROM pms_return_order
LEFT JOIN pms_return_order_line ON(pmro_id=pmrol_id)
UNION ALL
SELECT pmst_id,
	pmst_orderdate,
	pmst_expstockid,
	pmst_impstockid,
	pmst_deptid,
	pmst_status,
	pmst_type,
	pmstl_sitemid,
	0,
	pmstl_qty
FROM pms_stocktransfer
LEFT JOIN pms_stocktransfer_line ON(pmst_id=pmstl_id)
) as tbl
ORDER BY invoicedate

	