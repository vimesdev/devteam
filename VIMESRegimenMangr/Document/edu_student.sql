-- Table: edu_student

-- DROP TABLE edu_student;

CREATE TABLE edu_student
(
  es_id integer NOT NULL DEFAULT nextval('edu_student_id_seq'::regclass),
  es_createdby character varying(15),
  es_createddate timestamp without time zone DEFAULT now(),
  es_updatedby character varying(15),
  es_updateddate timestamp without time zone,
  es_class_id integer,
  es_student_id character varying(15),  
  es_surname character varying(15),
  es_midname character varying(45),
  es_firstname character varying(15),
  es_birthdate date,
  es_sex character varying(3),
  es_ethnic integer DEFAULT 1,
  es_address character varying(254),
  es_occupation integer,
  es_position integer,
  es_rank integer DEFAULT 0,  
  es_phone character varying(12),
  es_cardid character varying(25),  -- cmnd, thẻ căn cước
  es_date date,
  es_startdate date,
  es_enddate date,
  es_deptid character varying(7), -- khoa lam việc
  es_technique character varying(1), -- trình độ chuyên môn (Nội khoa, sản, nhi ..)
  es_certificate character varying(15), -- chứng chỉ hành nghề
  es_decide character varying(15), -- quyết định cử đi học
  es_decidedate date, -- ngày quyết
  es_content character varying(115), -- nội dung đào tạo
  es_projectid character varying(5), -- mã đề án đào tạo
  es_places_id  character varying(5), -- đơn vị đào tạo  
  es_certificate_receive character varying(115), -- mã bằng, chứng chỉ được cấp
  es_deptid_receive character varying(7), -- khoa tiếp nhận
  es_result character varying(1), -- mã bằng, chứng chỉ được cấp  
  es_typeid character varying(2), -- loại( nhân viên bv = NV, sinh vien = SV, Tap huan = TH)
  es_workunit character varying(2), -- đơn vị công tác
  es_note character varying(254),
  es_status character varying(1) DEFAULT 'O'::character varying,  
  CONSTRAINT edu_student_pkey PRIMARY KEY (es_id)  
)
WITH (
  OIDS=FALSE
);
ALTER TABLE edu_student
  OWNER TO postgres;
GRANT ALL ON TABLE edu_student TO postgres;
GRANT ALL ON TABLE edu_student TO public;
GRANT ALL ON TABLE edu_student TO vimes;
