select * from sys_version;

insert into sys_version
values('SMM', '2.0');
commit;

CREATE TABLE hms_patient_surgery
(
  hps_patientno number(10, 0), -- Ma benh nhan
  hps_docno number(10, 0) NOT NULL,
  hps_recordno number(10, 0) NOT NULL,
  hps_pname nvarchar2(65),
  hps_birthdate date,
  hps_sex nvarchar2(1),
  hps_provid number(10, 0),
  hps_distid number(10, 0),
  hps_villid number(10, 0),
  hps_address nvarchar2(254),
  hps_deptid nvarchar2(7),
  hps_object number(10, 0),
  hps_cardno nvarchar2(25),
  hps_discount number(10, 0),
  CONSTRAINT hms_patient_surgery_pkey PRIMARY KEY (hps_docno, hps_recordno)
);

CREATE TABLE hms_surgery_detail
(
  hsd_createby nvarchar2(15),
  hsd_updateby nvarchar2(15),
  hsd_patientno number(10, 0),
  hsd_docno number(10, 0),
  hsd_recordno number(10, 0),
  hsd_deptid nvarchar2(7),
  hsd_tdeptid nvarchar2(7),
  hsd_refidx number(10, 0), -- Ma link den tablel hms_opera.ho_idx
  hsd_refitem nvarchar2(13),
  hsd_idx number(10, 0) NOT NULL,
  hsd_date timestamp,
  hsd_opera_table number(10, 0),
  hsd_category nvarchar2(1), -- Loai, Mo phien, mo cap cuu, mo thuong
  hsd_subcategory number(10, 0), -- Dung cho mo ky thuat cao
  hsd_normal nvarchar2(1), -- B: Lon, N: Vua
  hsd_anaes_method nvarchar2(15), -- phuong phap gay me, te reference hms_anaesthetic_method(ham_idx)
  hsd_anes_method number(10, 0), -- Phuong phap vo cam
  hsd_anes_result nvarchar2(1), -- ket qua vo cam
  hsd_anes_method2 number(10, 0),
  hsd_anes_result2 nvarchar2(1),
  hsd_surgeon nvarchar2(15), -- Phau thuat vien
  hsd_anesthetist nvarchar2(15), -- Bac si gay me
  hsd_assist1 nvarchar2(15), -- Phu chinh
  hsd_assist2 nvarchar2(15), -- Giup viec 1
  hsd_assist3 nvarchar2(15), -- Giup viec 2
  hsd_rank number(10, 0), -- So luong
  hsd_amount number(15, 3), -- So tien
  hsd_status nvarchar2(1),
  hsd_assist nvarchar2(15),
  hsd_diagnostic nvarchar2(254), -- Chan doan
  hsd_beforesurgery nvarchar2(254), -- Truoc phau thuat
  hsd_aftersurgery nvarchar2(254), -- Sau phau thuat
  hsd_comment nvarchar2(254),
  hsd_object number(10, 0),
  hsd_cardno nvarchar2(25),
  CONSTRAINT hms_surgery_detail_pkey PRIMARY KEY (hsd_idx)
);

CREATE SEQUENCE hms_surgery_detail_hsd_idx_asq start with 1 increment by 1;

CREATE OR REPLACE TRIGGER hms_surgery_detail_hsd_idx_atr
BEFORE INSERT ON hms_surgery_detail
FOR EACH ROW
DECLARE
max_id NUMBER;
cur_asq NUMBER;
BEGIN
IF :new.hsd_idx IS NULL THEN
  SELECT hms_surgery_detail_hsd_idx_asq.nextval INTO :new.hsd_idx FROM DUAL;
ELSE
  SELECT GREATEST(NVL(MAX(hsd_idx), 0), :new.hsd_idx) INTO max_id FROM hms_surgery_detail;
  SELECT hms_surgery_detail_hsd_idx_asq.nextval INTO cur_asq FROM DUAL;
  WHILE cur_asq < max_id
  LOOP
    SELECT hms_surgery_detail_hsd_idx_asq.nextval INTO cur_asq FROM DUAL;
  END LOOP;
END IF;
END;


--ho_practitioner: nguoi thuc hien
--ho_anesthetist: bác si gây mê
--ho_assistant: nguoi phu mo
--ho_user4: gây mê phu 1
--ho_user5: phu mo 2
--ho_user6: vòng ngoài
--ho_user7: phu mo 3


alter table hms_operation add ho_recordno number(10, 0);
alter table hms_operation add ho_opera_table number(10, 0);
alter table hms_operation add ho_subcategory number(10, 0); -- Dung cho mo ky thuat cao
alter table hms_operation add ho_normal nvarchar2(1); -- B: Lon, N: Vua
alter table hms_operation add ho_anaes_method nvarchar2(15); -- phuong phap gay me, te reference hms_anaesthetic_method(ham_idx)
alter table hms_operation add ho_anes_method number(10, 0); -- Phuong phap vo cam
alter table hms_operation add ho_anes_result nvarchar2(1); -- ket qua vo cam
alter table hms_operation add ho_anes_method2 number(10, 0);
alter table hms_operation add ho_anes_result2 nvarchar2(1);
alter table hms_operation add ho_diagnostic nvarchar2(254);
alter table hms_operation add ho_comment nvarchar2(254);
alter table hms_operation add ho_object number(10, 0);
alter table hms_operation add ho_cardno nvarchar2(25);


CREATE TABLE hms_anaesthetic_method
(
  ham_idx number(10, 0) NOT NULL,
  ham_name nvarchar2(128),
  CONSTRAINT hms_anaesthetic_method_pkey PRIMARY KEY (ham_idx)
);

CREATE TABLE hms_anesthesia_method
(
  ham_idx number(10, 0) NOT NULL,
  ham_name nvarchar2(128),
  CONSTRAINT hms_anesthesia_method_pkey PRIMARY KEY (ham_idx)
);

CREATE TABLE hms_anesthesia_result
(
  har_idx number(10, 0) NOT NULL,
  har_name nvarchar2(128),
  CONSTRAINT hms_anesthesia_result_pkey PRIMARY KEY (har_idx)
);

CREATE TABLE hms_hitech_operation
(
  hho_idx number(10, 0) NOT NULL,
  hho_name nvarchar2(128),
  CONSTRAINT hms_hitech_operation_pkey PRIMARY KEY (hho_idx)
);

CREATE TABLE hms_surgery_table
(
  hst_idx number(10, 0) NOT NULL,
  hst_name nvarchar2(35),
  CONSTRAINT hms_surgery_table_pkey PRIMARY KEY (hst_idx)
);

CREATE TABLE hms_surgery_type
(
  hst_idx number(10, 0) NOT NULL,
  hst_name nvarchar2(128),
  CONSTRAINT hms_surgery_type_pkey PRIMARY KEY (hst_idx)
);

--Thiet lap user de lay mã khoa thuc hien
alter table hms_fee_group add hfg_desc nvarchar2(35);

alter table hms_pharma_group add hpg_object nvarchar2(3);
alter table hms_pharma_group add hpg_stockid number(10,0);

alter table hms_config add hf_deposit_amount number(15, 3);

alter table hms_pharma_group add primary key hpg_userid;

alter table sys_user add su_hms_smmodule nvarchar2(1);

CREATE TABLE "VIMES"."HMS_FEE_GROUP1" 
(	
  "HFG_ID" NVARCHAR2(10) NOT NULL ENABLE,
	"HFG_NAME" NVARCHAR2(162),
	"HFG_DEPTS" NVARCHAR2(162), 
	"HFG_LEVEL" NUMBER(10,0),
	"HFG_INDEX" NVARCHAR2(10), 
	"HFG_FEEID" NVARCHAR2(2),
	"HFG_ACTIVE" NVARCHAR2(2) DEFAULT 'Y',
	"HFG_REPORT" NCHAR(35),
	"HFG_DESC" NVARCHAR2(35),
	 CONSTRAINT "HMS_FEE_GROUP1_PKE" PRIMARY KEY ("HFG_ID")
)

alter table pms_items add pmi_discount nvarchar2(1);

create table hms_surgery_schedule
(
  hss_idx number(10, 0) NOT NULL,
  hss_starttime timestamp,
  hss_endtime timestamp,
  hss_doctor nvarchar2(15),
  hss_doctor1 nvarchar2(15),
  hss_nurse1 nvarchar2(15),
  hss_nurse2 nvarchar2(15),
  hss_nurse3 nvarchar2(15),
  hss_nurse4 nvarchar2(15),
  hss_nurse5 nvarchar2(15),
  hss_status nvarchar2(1),
  PRIMARY KEY (hss_idx)
);

CREATE SEQUENCE hms_surgery_sched_hss_idx_asq start with 1 increment by 1;

CREATE OR REPLACE TRIGGER hms_surgery_sched_hss_idx_atr
BEFORE INSERT ON hms_surgery_schedule
FOR EACH ROW
DECLARE
max_id NUMBER;
cur_asq NUMBER;
BEGIN
IF :new.hss_idx IS NULL THEN
  SELECT hms_surgery_sched_hss_idx_asq.nextval INTO :new.hss_idx FROM DUAL;
ELSE
  SELECT GREATEST(NVL(MAX(hss_idx), 0), :new.hss_idx) INTO max_id FROM hms_surgery_schedule;
  SELECT hms_surgery_sched_hss_idx_asq.nextval INTO cur_asq FROM DUAL;
  WHILE cur_asq < max_id
  LOOP
    SELECT hms_surgery_sched_hss_idx_asq.nextval INTO cur_asq FROM DUAL;
  END LOOP;
END IF;
END;

drop trigger hms_surgery_sched_hss_idx_atr;
drop sequence hms_surgery_sched_hss_idx_asq;
drop table hms_surgery_schedule;

create table hms_surgery_schedule
(
  hss_createdby nvarchar2(15),
  hss_createddate timestamp,
  hss_updatedby nvarchar2(15),
  hss_updateddate timestamp,
  hss_idx NUMBER(10, 0),
  hss_starttime timestamp,
  hss_endtime timestamp,
  hss_status nvarchar2(1),
  PRIMARY KEY (hss_idx)
);

create table hms_surgery_schedule_line
(
  hssl_refidx NUMBER(10, 0),
  hssl_doctor nvarchar2(15),
  hssl_doctor1 nvarchar2(15),
  hssl_nurse1 nvarchar2(15),
  hssl_nurse2 nvarchar2(15),
  hssl_nurse3 nvarchar2(15),
  hssl_nurse4 nvarchar2(15),
  hssl_nurse5 nvarchar2(15),
  PRIMARY KEY (hssl_refidx)
);

delete from hms_surgery_schedule_line;
delete from hms_surgery_schedule;
commit;


alter table hms_pharmaorder add hpo_reference_id number(38,0);
alter table hms_ipharmaorder add hpo_reference_id number(38,0);

update hms_pharmaorder
set hpo_reference_id=hpo_reforder_id
where hpo_ordertype in('S','M');


update hms_ipharmaorder
set hpo_reference_id=hpo_reforder_id
where hpo_ordertype in('M');


select max(ho_performdate) from hms_operation where ho_pdeptid='B5'

select max(htr_admitdate) from hms_treatment_record where htr_status='I'

