-- Function: pms_purchaseorderln_delete()

-- DROP FUNCTION pms_purchaseorderln_delete();

CREATE OR REPLACE FUNCTION pms_purchaseorderln_delete(
	poid varchar(15),
	sitemid integer
)
  RETURNS integer AS
$BODY$
DECLARE
	tmpInt	INTEGER;
	tmpStr	TEXT;
	tmpRec	RECORD;
BEGIN
	SELECT INTO tmpStr pmpo_status
	FROM pms_purchaseorder
	WHERE pmpo_id=poid;
	IF(NOT FOUND OR tmpStr != 'O') THEN
		RETURN -1;
	END IF;
	DELETE FROM pms_purchaseorderln
	WHERE pmpol_id=poid
		AND pmpol_sitemid=sitemid;
	DELETE FROM pms_stockitems
	WHERE pmsi_sitemid=sitemid;
	RETURN 1;
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE;

