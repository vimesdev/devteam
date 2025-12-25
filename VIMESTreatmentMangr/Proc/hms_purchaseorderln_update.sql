-- Function: pms_purchaseorderln_update(sitemid integer, userid character varying, poid character varying, itemid character varying, barcode character varying, lotno character varying, qty integer, unitprice numeric, vatprice numeric, sellingprice numeric, retailprice numeric, hasexp character varying, expdate date, countryid character varying, mfgid character varying, originalid integer)

-- DROP FUNCTION pms_purchaseorderln_update(sitemid integer, userid character varying, poid character varying, itemid character varying, barcode character varying, lotno character varying, qty integer, unitprice numeric, vatprice numeric, sellingprice numeric, retailprice numeric, hasexp character varying, expdate date, countryid character varying, mfgid character varying, originalid integer);

CREATE OR REPLACE FUNCTION pms_purchaseorderln_update(sitemid integer, userid character varying, poid character varying, itemid character varying, barcode character varying, lotno character varying, qty integer, unitprice numeric, vatprice numeric, sellingprice numeric, retailprice numeric, hasexp character varying, expdate date, countryid character varying, mfgid character varying, originalid integer)
  RETURNS integer AS
$BODY$
DECLARE
	tmpInt	INTEGER;
	tmpRec	RECORD;
BEGIN
	
	UPDATE pms_stockitems
	SET
		pmsi_poid=poid,
		pmsi_itemid=itemid,
		pmsi_barcode=barcode,
		pmsi_lotno=lotno,
		pmsi_countryid=countryid,
		pmsi_mfgid=mfgid,
		pmsi_originalid=originalid,
		pmsi_unitprice=unitprice,
		pmsi_vatprice=vatprice,
		pmsi_expdate=expdate
	WHERE pmsi_id=sitemid;

	
	UPDATE pms_purchaseorderln
	SET pmpol_qty=qty
	WHERE pmpol_id=poid
		AND pmpol_itemid=itemid
		AND pmpol_sitemid=sitemid;
	RETURN sitemid;
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE;
ALTER FUNCTION pms_purchaseorderln_update(sitemid integer, userid character varying, poid character varying, itemid character varying, barcode character varying, lotno character varying, qty integer, unitprice numeric, vatprice numeric, sellingprice numeric, retailprice numeric, hasexp character varying, expdate date, countryid character varying, mfgid character varying, originalid integer) OWNER TO postgres;
