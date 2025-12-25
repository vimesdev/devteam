-----------------------Bang hms_patient_record-----------------------
CREATE TABLE hms_patient_record
(
  hpr_createdby character varying(15),
  hpr_createddate timestamp without time zone,
  hpr_updatedby character varying(15),
  hpr_updateddate timestamp without time zone,
  hpr_patientno integer,
  hpr_docno integer,
  hpr_idx serial NOT NULL,
  hpr_docrec character varying(35) NOT NULL,
  hpr_admitdeptid character varying(7),
  hpr_enddeptid character varying(7),
  hpr_admitdate timestamp without time zone,
  hpr_enddate timestamp without time zone,
  hpr_storeddate timestamp without time zone,
  hpr_status character varying(1),
  hpr_roomidx integer,
  hpr_cabinetidx integer,
  hpr_draweridx integer,
  hpr_position integer,
  hpr_shortcut character varying(13),
  hpr_comment character varying(512),
  hpr_reverse character varying(1),
  hpr_rvsreason character varying(512),
  CONSTRAINT hms_patient_record_pkey PRIMARY KEY (hpr_idx)
)
WITH (
  OIDS=FALSE
);
ALTER TABLE hms_patient_record OWNER TO postgres;

CREATE INDEX hms_patient_record_hpr_docno_index
  ON hms_patient_record
  USING btree
  (hpr_docno);

CREATE INDEX hms_patient_record_hpr_docrec_index
  ON hms_patient_record
  USING btree
  (hpr_docrec);



----------------Bang hms_patientrec_id-------------------
CREATE TABLE hms_patientrec_id
(
  hpi_idx serial NOT NULL,
  hpi_code character varying(7),
  hpi_desc character varying(81),
  CONSTRAINT hms_patientrec_id_pkey PRIMARY KEY (hpi_idx)
)
WITH (
  OIDS=FALSE
);



-----------------Bang hms_record_borrow-------------------
CREATE TABLE hms_record_borrow
(
  hrb_refidx integer,
  hrb_idx serial NOT NULL,
  hrb_withdrawdate timestamp without time zone,
  hrb_numberdate integer,
  hrb_returndate timestamp without time zone,
  hrb_brstatus character varying(1),
  hrb_borrower character varying(65),
  hrb_deptid character varying(7),
  hrb_membercode character varying(13),
  hrb_reason character varying(254),
  hrb_handover character varying(65),
  hrb_returner character varying(65),
  hrb_receiver character varying(65),
  hrb_rcvstatus character varying(1),
  hrb_note character varying(254),
  hrb_information character varying(254),
  CONSTRAINT hms_record_borrow_pkey PRIMARY KEY (hrb_idx)
)
WITH (
  OIDS=FALSE
);
ALTER TABLE hms_record_borrow OWNER TO postgres;

CREATE INDEX hms_record_borrow_hrb_refidx_index
  ON hms_record_borrow
  USING btree
  (hrb_refidx);



----------------------Function hms_patientrec_calcid--------------------------
CREATE OR REPLACE FUNCTION hms_patientrec_calcid(flag text)
  RETURNS text AS
$BODY$
DECLARE
	 RecNo TEXT;
	 tmpCount INTEGER;
	 tmpLength INTEGER;
	 tmpString TEXT;
BEGIN
	IF (upper(trim(flag)) = 'AYN') THEN
		tmpLength = 0;
		--tmpString = '';
		SELECT hpr_docrec FROM hms_patient_record WHERE hpr_idx=(SELECT max(hpr_idx) FROM hms_patient_record) INTO tmpString;
		SELECT length(trim(tmpString)) INTO tmpLength;
		IF (tmpLength >= 3 OR tmpLength = 0) THEN
			tmpLength = 3;
		END IF;
		SELECT coalesce(max(cast((substr(hpr_docrec, tmpLength, 6)) as integer)), 0)+1 FROM hms_patient_record INTO tmpCount;
		SELECT substr(cast(date_part('year', now()) as text), 3, 2)||lpad(cast(tmpCount as text), 6, '0') INTO RecNo;
	ELSIF (upper(trim(flag)) = 'AIN') THEN
		SELECT coalesce(max(cast(hpr_docrec as integer)), 0)+1 FROM hms_patient_record INTO tmpCount;
		SELECT cast(tmpCount as text) INTO RecNo;
	ELSE  
		RecNo = '';
	END IF;
    RETURN RecNo;
END;
$BODY$
  LANGUAGE plpgsql VOLATILE;


----------------Bang pr_config------------------
CREATE TABLE pr_config
(
  pc_idx serial NOT NULL,
  pc_allpatient varchar(1),
  PRIMARY KEY (pc_idx)
);


----------------Bang hms_patient_record---------------
ALTER TABLE hms_patient_record ADD COLUMN hpr_class varchar(1);