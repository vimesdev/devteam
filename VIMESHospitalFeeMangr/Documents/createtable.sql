drop table hms_fee;
drop table hms_invfee;
drop table hms_xfee
CREATE TABLE hms_invfee(
 hif_createdby varchar(15),
 hif_createddate timestamp,
 hif_updatedby varchar(15),
 hif_updateddate timestamp,
 hif_patientno integer,
 hif_docno integer,
 hif_invoiceno integer,
 hif_type varchar(1),
 hif_status varchar(1),
 hif_deskno integer,
 hif_bookno varchar(7),
 hif_serialno varchar(7),
 hif_recvno integer,
 hif_recvdate timestamp,
 hif_recveiver varchar(15),
 hif_locked varchar(1),
 hif_lockeddate timestamp,
 hif_locker varchar(15),
 hif_posted varchar(1),
 hif_posteddate timestamp,
 hif_poster varchar(15),
 hif_desc varchar(254),
 PRIMARY KEY(hif_patientno, hif_docno, hif_invoiceno)
);

CREATE INDEX hms_invfee_hif_patientno_index on hms_invfee(hif_patientno);
CREATE INDEX hms_invfee_hif_docno_index on hms_invfee(hif_docno);

create table hms_fee(
 hf_createdby varchar(15),
 hf_createddate timestamp,
 hf_updatedby varchar(15),
 hf_updateddate timestamp,
 hf_patientno integer,
 hf_docno integer,
 hf_idx integer,
 hf_status varchar(1),
 hf_invoiceno integer, --So hoa don thu phi reference hms_invfee (hif_invoiceno)
 hf_deptid varchar(7),
 hf_roomid integer,
 hf_bedid integer,
 hf_receptidx integer,
 hf_category varchar(1),
 hf_class varchar(1),
 hf_type varchar(1),
 hf_groupid varchar(7),
 hf_subgroup varchar(7),
 hf_feeid varchar(11),
 hf_desc varchar(254),
 hf_unit  varchar(15),
 hf_qty  numeric(10, 2),
 hf_object varchar(1),
 hf_cardidx integer,
 hf_orderno varchar(15),
 hf_orderln integer,
 hf_feetype varchar(1), --I: Insurance, D: Discount, S: Service, O: Other 
 hf_cost numeric(10, 2),
 hf_discount numeric(10, 2),
 hf_patdept numeric(10, 2),
 hf_patpaid numeric(10, 2),
 hf_unpaid numeric(10, 2),
 hf_advpaid numeric(10, 2),
 hf_advno integer,
PRIMARY KEY(hf_patientno, hf_docno, hf_idx )
);
CREATE INDEX hms_fee_hf_deptid_index on hms_fee(hf_deptid);
CREATE INDEX hms_fee_hf_patientno_index on hms_fee(hf_patientno);
CREATE INDEX hms_fee_hf_docno_index on hms_fee(hf_docno);

-- Table: hms_xfee

-- DROP TABLE hms_xfee;

CREATE TABLE hms_xfee
(
  haf_deptid character varying(7),
  haf_roomid integer,
  haf_bedid integer,
  haf_invoiceno integer NOT NULL,
  haf_amount numeric(10,2),
  haf_desc character varying(254),
  CONSTRAINT hms_xfee_pkey PRIMARY KEY (haf_invoiceno)
) 
WITHOUT OIDS;
ALTER TABLE hms_xfee OWNER TO postgres;

alter table hms_invfeectl add column hifc_curval integer;
CREATE TABLE hms_invfeectl(
 hifc_userid varchar(15),
 hifc_seriano varchar(15),
 hifc_bookno integer,
 hifc_start integer,
 hifc_end  integer,
 hifc_curval integer,
PRIMARY KEY(hifc_userid)
);
