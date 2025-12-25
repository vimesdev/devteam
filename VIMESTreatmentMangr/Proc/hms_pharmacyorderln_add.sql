-- Function: hms_pharmacyorderln_add()

-- DROP FUNCTION hms_pharmacyorderln_add();

CREATE OR REPLACE FUNCTION hms_pharmacyorderln_add(
	orderno	integer,
	stockid 	integer,
	itemid	varchar(15),
	orderqty	integer,
	usage	varchar(128)
)
  RETURNS integer AS
$BODY$
DECLARE
	tmpInt	INTEGER;
	orderQty2	INTEGER;
	tmpRec	RECORD;
BEGIN
	tmpInt := orderQty;
	FOR tmpRec IN
	SELECT 
		pmsi_lineidx,
		pmsi_id as itemid,
		pmi_name,
		pmg_unit,
		pmsi_onhandqty-pmsi_orderqty as qty
	FROM pms_generic
	LEFT JOIN pms_items ON(pmi_genericid=pmg_id)
	LEFT JOIN pms_stockitems ON(pmsi_itemid=pmi_id)
	LEFT JOIN pms_stockinventory on(pmsi_sitemid=pmsi_id)
	WHERE pmsi_stockid=stockid
		AND pmsi_itemid=itemid
		AND pmsi_onhandqty-pmsi_orderqty > 0
	LOOP

		IF(tmpRec.qty < tmpInt) THEN
			orderQty2 := tmpRec.qty;
			tmpInt := tmpInt - tmpRec.qty;
		ELSe
			orderQty2 := orderQty;
			tmpInt := 0;
		END IF;
		INSERT INTO hms_pharmacyorderln(
			hpol_orderno, hpol_itemid, hpol_stockline, hpol_name, 
			hpol_unit, hpol_orderqty, hpol_issueqty, hpol_return, hpol_usage, hpol_dose)
		VALUES (orderNo,  tmpRec.pmi_itemid, tmpRec.pmsi_lineidx, tmpRec.pmi_name, 
			tmpRec.pmi_unit, tmpInt, tmpInt, 'N', usage, '');
		IF(tmpInt <= 0) THEN
			Exit;
		END IF;
	END LOOP;

    RETURN 0;
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE;

