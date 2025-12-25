
CREATE SEQUENCE edu_transferorder_line_id_seq
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 9223372036854775807
  START 1
  CACHE 1;
ALTER TABLE edu_transferorder_line_id_seq
  OWNER TO postgres;
GRANT ALL ON TABLE edu_transferorder_line_id_seq TO public;
GRANT ALL ON TABLE edu_transferorder_line_id_seq TO vimes;


CREATE TABLE edu_transferorder_line
(
  etol_id integer NOT NULL DEFAULT nextval('edu_transferorder_line_id_seq'::regclass),
  etol_createdby character varying(15),
  etol_createddate timestamp without time zone DEFAULT now(),
  etol_updatedby character varying(15),
  etol_updateddate timestamp without time zone,
  etol_transfer_id integer,
  etol_student_id character varying(15),  
  etol_name character varying(65),  
  etol_birthdate date,
  etol_sex character varying(3),
  etol_ethnic integer DEFAULT 1,
  etol_address character varying(254),
  etol_occupation integer,
  etol_position integer,
  etol_rank integer DEFAULT 0,  
  etol_phone character varying(12),
  etol_cardid character varying(25),  -- cmnd, thẻ căn cước
  etol_date date,
  etol_startdate date,
  etol_enddate date,
  etol_deptid character varying(7), -- khoa lam việc
  etol_technique character varying(1), -- trình độ chuyên môn (Nội khoa, sản, nhi ..)
  etol_certificate character varying(15), -- chứng chỉ hành nghề
  etol_decide character varying(15), -- quyết định cử đi học
  etol_decidedate date, -- ngày quyết
  etol_content character varying(115), -- nội dung đào tạo
  etol_projectid character varying(5), -- mã đề án đào tạo
  etol_placetol_id  character varying(5), -- đơn vị đào tạo  
  etol_certificate_receive character varying(115), -- mã bằng, chứng chỉ được cấp
  etol_deptid_receive character varying(7), -- khoa tiếp nhận
  etol_result character varying(1), -- mã bằng, chứng chỉ được cấp  
  etol_typeid character varying(2), -- loại( nhân viên bv = NV, sinh vien = SV, Tap huan = TH)
  etol_workunit character varying(2), -- đơn vị công tác
  etol_note character varying(254),
  etol_status character varying(1) DEFAULT 'O'::character varying,  
  CONSTRAINT edu_transferorder_line_pkey PRIMARY KEY (etol_id)  
)
WITH (
  OIDS=FALSE
);
ALTER TABLE edu_transferorder_line
  OWNER TO postgres;
GRANT ALL ON TABLE edu_transferorder_line TO postgres;
GRANT ALL ON TABLE edu_transferorder_line TO public;
GRANT ALL ON TABLE edu_transferorder_line TO vimes;
