-- Table: edu_student_order

-- DROP TABLE edu_student_order;

CREATE TABLE edu_student_order
(
  eso_id integer NOT NULL DEFAULT nextval('edu_student_order_id_seq'::regclass),
  eso_createdby character varying(15),
  eso_createddate timestamp without time zone DEFAULT now(),
  eso_updatedby character varying(15),
  eso_updateddate timestamp without time zone,
  eso_class_id integer,
  eso_student_id character varying(15),  
  eso_surname character varying(15),
  eso_midname character varying(45),
  eso_firstname character varying(15),
  eso_birthdate date,
  eso_sex character varying(3),
  eso_ethnic integer DEFAULT 1,
  eso_address character varying(254),
  eso_occupation integer,
  eso_position integer,
  eso_rank integer DEFAULT 0,  
  eso_phone character varying(12),
  eso_cardid character varying(25),  -- cmnd, thẻ căn cước
  eso_date date,
  eso_startdate date,
  eso_enddate date,
  eso_deptid character varying(7), -- khoa lam việc
  eso_technique character varying(1), -- trình độ chuyên môn (Nội khoa, sản, nhi ..)
  eso_certificate character varying(15), -- chứng chỉ hành nghề
  eso_decide character varying(15), -- quyết định cử đi học
  eso_decidedate date, -- ngày quyết
  eso_content character varying(115), -- nội dung đào tạo
  eso_projectid character varying(5), -- mã đề án đào tạo
  eso_placeso_id  character varying(5), -- đơn vị đào tạo  
  eso_certificate_receive character varying(115), -- mã bằng, chứng chỉ được cấp
  eso_deptid_receive character varying(7), -- khoa tiếp nhận
  eso_result character varying(1), -- mã bằng, chứng chỉ được cấp  
  eso_typeid character varying(2), -- loại( nhân viên bv = NV, sinh vien = SV, Tap huan = TH)
  eso_workunit character varying(2), -- đơn vị công tác
  eso_note character varying(254),
  eso_status character varying(1) DEFAULT 'O'::character varying,  
  CONSTRAINT edu_student_order_pkey PRIMARY KEY (eso_id)  
)
WITH (
  OIDS=FALSE
);
ALTER TABLE edu_student_order
  OWNER TO postgres;
GRANT ALL ON TABLE edu_student_order TO postgres;
GRANT ALL ON TABLE edu_student_order TO public;
GRANT ALL ON TABLE edu_student_order TO vimes;
