
CREATE SEQUENCE edu_transferorder_id_seq
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 9223372036854775807
  START 1
  CACHE 1;
ALTER TABLE edu_transferorder_id_seq
  OWNER TO postgres;
GRANT ALL ON TABLE edu_transferorder_id_seq TO public;
GRANT ALL ON TABLE edu_transferorder_id_seq TO vimes;


-- Table: edu_transferorder

-- DROP TABLE edu_transferorder;

CREATE TABLE edu_transferorder
(
  eto_createdby character varying(15),
  eto_createddate timestamp without time zone,
  eto_updatedby character varying(15),
  eto_updateddate timestamp without time zone DEFAULT now(),
  eto_id integer NOT NULL DEFAULT nextval('edu_transferorder_id_seq'::regclass),
  eto_doc_id character varying(10), -- Số công văn chi dao
  eto_name character varying(50), -- tên ký thuật chuyển giao
  eto_date timestamp without time zone,
  eto_start_time timestamp without time zone, 
  eto_end_time timestamp without time zone,
  eto_managerid character varying(15), -- người quản lý
  eto_teacher character varying(15), -- giáo viên
  eto_teacher1 character varying(15),
  eto_teacher2 character varying(15),
  eto_teacher3 character varying(15),  
  eto_workunit character varying(10),  --đơn vị chuyển giao
  eto_location  character varying(30), -- địa điểm
  eto_content character varying(200), -- noi dung
  eto_sourceid character varying(2), -- nguồn kinh phí  
  eto_project character varying(20), -- De an  
  eto_result character varying(2), -- kết quả chuyển giao  
  eto_typeid character varying(2), -- TN = tiep nhận tuyen tren, TD= chuyen giao tuyen dưới  
  eto_note character varying(200),  
  eto_status character varying(1),  
  CONSTRAINT edu_transferorder_eto_id PRIMARY KEY (eto_id)
)
WITH (
  OIDS=FALSE
);
ALTER TABLE edu_transferorder
  OWNER TO postgres;
GRANT ALL ON TABLE edu_transferorder TO public;
GRANT ALL ON TABLE edu_transferorder TO vimes;
