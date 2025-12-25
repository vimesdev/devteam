
CREATE SEQUENCE edu_teacher_id_seq
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 9223372036854775807
  START 1
  CACHE 1;
ALTER TABLE edu_teacher_id_seq
  OWNER TO postgres;
GRANT ALL ON TABLE edu_teacher_id_seq TO public;
GRANT ALL ON TABLE edu_teacher_id_seq TO vimes;

-- Table: edu_teacher

-- DROP TABLE edu_teacher;

CREATE TABLE edu_teacher
(
  et_id integer NOT NULL DEFAULT nextval('edu_teacher_id_seq'::regclass),
  et_createdby character varying(15),
  et_createddate timestamp without time zone DEFAULT now(),
  et_updatedby character varying(15),
  et_updateddate timestamp without time zone,  
  et_teacher_id character varying(15),  
  et_surname character varying(15),
  et_midname character varying(45),
  et_firstname character varying(15),
  et_birthdate date,
  et_sex character varying(3),
  et_ethnic integer DEFAULT 1,
  et_address character varying(254),
  et_occupation integer,
  et_position integer,  
  et_phone character varying(12),
  et_cardid character varying(25),  -- cmnd, thẻ căn cước
  et_date date,  
  et_deptid character varying(7), -- khoa lam việc
  et_technique character varying(1), -- trình độ chuyên môn (Nội khoa, sản, nhi ..)
  et_certificate character varying(15), -- chứng chỉ hành nghề  
  et_content character varying(115), -- nội dung đào tạo 
  et_workunit character varying(2), -- đơn vị công tác
  et_note character varying(254),
  et_status character varying(1) DEFAULT 'O'::character varying,  
  CONSTRAINT edu_teacher_pkey PRIMARY KEY (et_id)
)
WITH (
  OIDS=FALSE
);
ALTER TABLE edu_teacher
  OWNER TO postgres;
GRANT ALL ON TABLE edu_teacher TO postgres;
GRANT ALL ON TABLE edu_teacher TO public;
GRANT ALL ON TABLE edu_teacher TO vimes;
