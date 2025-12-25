-- Function: pms_purchaseorderln_add(userid character varying, poid character varying, itemid character varying, barcode character varying, lotno character varying, qty integer, unitprice numeric, vatprice numeric, sellingprice numeric, retailprice numeric, hasexp character varying, expdate date, countryid character varying, mfgid character varying, originalid integer)

-- DROP FUNCTION pms_purchaseorderln_add(userid character varying, poid character varying, itemid character varying, barcode character varying, lotno character varying, qty integer, unitprice numeric, vatprice numeric, sellingprice numeric, retailprice numeric, hasexp character varying, expdate date, countryid character varying, mfgid character varying, originalid integer);

CREATE OR REPLACE FUNCTION pms_purchaseorderln_add(userid character varying, poid character varying, itemid character varying, barcode character varying, lotno character varying, qty integer, unitprice numeric, vatprice numeric, sellingprice numeric, retailprice numeric, hasexp character varying, expdate date, countryid character varying, mfgid character varying, originalid integer)
  RETURNS integer AS
$BODY$
DECLARE
	tmpInt	INTEGER;
	sitemid	INTEGER;
	tmpRec	RECORD;
BEGIN
	
	SELECT INTO sitemid pmsi_id
	FROM pms_stockitems
	WHERE 
		pmsi_poid=poid
		AND pmsi_itemid=itemid
		AND pmsi_lotno=lotno
		AND pmsi_countryid=countryid
		AND pmsi_mfgid=mfgid
		AND pmsi_originalid=originalid
		AND pmsi_unitprice=unitprice
		AND pmsi_vatprice=vatprice
		AND pmsi_expdate=expdate;
	IF(NOT FOUND) THEN
		SELECT INTO sitemid coalesce(MAX(pmsi_id), 0)+1
		FROM pms_stockitems;
		INSERT INTO pms_stockitems(
		    pmsi_createdby, pmsi_createddate, pmsi_updatedby, pmsi_updateddate, 
		    pmsi_id, pmsi_poid, pmsi_itemid, pmsi_barcode, pmsi_unitprice, 
		    pmsi_vatprice, pmsi_sellingprice, pmsi_retailprice, pmsi_hasexp, 
		    pmsi_expdate, pmsi_lotno, pmsi_countryid, pmsi_mfgid, pmsi_originalid)
		VALUES (userid, current_timestamp, userid, current_timestamp, 
		    sitemid, poid, itemid, barcode, unitprice, 
		    vatprice, sellingprice, retailprice, hasexp, 
		    expdate, lotno, countryid, mfgid, originalid);
	ELSE
		UPDATE pms_stockitems 
		SET pmsi_updatedby = userid,
			pmsi_updateddate=current_timestamp
		WHERE pmsi_id=sitemid;		
	END IF;
	
	UPDATE pms_purchaseorderln
	SET pmpol_qty=pmpol_qty+qty
	WHERE pmpol_id=poid
		AND pmpol_itemid=itemid
		AND pmpol_sitemid=sitemid;
	IF (NOT FOUND) THEN
		INSERT INTO pms_purchaseorderln(
			pmpol_createdby, pmpol_createddate, pmpol_updatedby, pmpol_updateddate, 
			pmpol_id, pmpol_itemid, pmpol_sitemid, pmpol_qty)
		VALUES (userid, current_timestamp, userid, current_timestamp, 
			poid, itemid, sitemid, qty);
		IF(NOT FOUND) THEN
			RETURN -1;
		END IF;
	END IF;

	RETURN sitemid;
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE;
ALTER FUNCTION pms_purchaseorderln_add(userid character varying, poid character varying, itemid character varying, barcode character varying, lotno character varying, qty integer, unitprice numeric, vatprice numeric, sellingprice numeric, retailprice numeric, hasexp character varying, expdate date, countryid character varying, mfgid character varying, originalid integer) OWNER TO postgres;
