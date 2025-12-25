-- Function: hms_procedures()

-- DROP FUNCTION hms_procedures();

CREATE OR REPLACE FUNCTION hms_pharmacyorder_add(
ordertype 	varchar(1),
userid 	varchar(15),
orderdate 	date,
sheetidx	integer,
stockid 	integer,
patientno 	integer,
docno 	integer,
deptid	varchar(7),
roomid 	integer,
bedid 	integer,
receptidx 	integer,
doctor 	varchar(15)
)
  RETURNS integer AS
$BODY$
DECLARE
  tmpInt	INTEGER;
  tmpRec	RECORD;
BEGIN
--Kiem tra neu ton tai mot phieu dang mo thi lay so order do ra
	SELECT INTO tmpInt hpo_orderno
	FROM hms_pharmacyorder
	WHERE 	hpo_docno=docno
		AND hpo_type=ordertype
		AND date(hpo_orderdate)=orderdate
		AND hpo_stockid=stockid 
		AND hpo_sheetidx=sheetidx
		AND hpo_deptid=deptid
		AND hpo_roomid=roomid
		AND hpo_bedid=bedid
		AND hpo_receptidx=receptidx		
		AND hpo_doctor=doctor
		AND hpo_status IN('O','S')
		AND hpo_payment='N';
	IF(tmpInt > 0) THEN
		RETURN tmpInt;
	END IF;
	SELECT INTO tmpInt coalesce(max(hpo_orderno), 0)+1
	FROM hms_pharmacyorder;
	INSERT INTO hms_pharmacyorder(
            hpo_createdby, hpo_createddate, hpo_updatedby, hpo_updateddate, 
            hpo_orderno, hpo_patientno, hpo_docno, hpo_deptid, hpo_roomid, hpo_bedid, hpo_receptidx, 
		hpo_orderdate, hpo_doctor, hpo_issuedate, hpo_issuer, 
		hpo_status, hpo_payment, hpo_type, hpo_stockid, hpo_sheetidx, hpo_advice)
    VALUES (userid, current_timestamp, userid, current_timestamp, 
		tmpInt, patientno, docno, deptid, roomid, bedid, receptidx, 
		orderdate, doctor, current_timestamp, '', 
		'O', 'N', ordertype, stockid, sheetidx, '');
    RETURN tmpInt;
END;
$BODY$
  LANGUAGE 'plpgsql' VOLATILE;
--ALTER FUNCTION hms_pharmacyorder_add() OWNER TO postgres;
