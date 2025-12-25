
CREATE SEQUENCE edu_meetingonline_id_seq
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 9223372036854775807
  START 1
  CACHE 1;
ALTER TABLE edu_meetingonline_id_seq
  OWNER TO postgres;
GRANT ALL ON TABLE edu_meetingonline_id_seq TO public;
GRANT ALL ON TABLE edu_meetingonline_id_seq TO vimes;


-- Table: edu_meetingonline

-- DROP TABLE edu_meetingonline;

CREATE TABLE edu_meetingonline
(
  eml_createdby character varying(15),
  eml_createddate timestamp without time zone,
  eml_updatedby character varying(15),
  eml_updateddate timestamp without time zone DEFAULT now(),
  eml_id integer NOT NULL DEFAULT nextval('edu_meetingonline_id_seq'::regclass),
  eml_doc_id character varying(10), -- Số công văn chi dao
  eml_name character varying(50), -- tên ký thuật chuyển giao
  eml_date timestamp without time zone,
  eml_start_time timestamp without time zone, 
  eml_end_time timestamp without time zone,
  eml_managerid character varying(65), -- người chủ trì
  eml_workunit character varying(10),  --đơn vị chuyển giao
  eml_location  character varying(30), -- địa điểm
  eml_content character varying(200), -- noi dung  
  eml_result character varying(200), -- kết quả chuyển giao
  eml_project character varying(20), -- De an  
  eml_note character varying(200),  
  eml_status character varying(1),  
  CONSTRAINT edu_meetingonline_eml_id PRIMARY KEY (eml_id)
)
WITH (
  OIDS=FALSE
);
ALTER TABLE edu_meetingonline
  OWNER TO postgres;
GRANT ALL ON TABLE edu_meetingonline TO public;
GRANT ALL ON TABLE edu_meetingonline TO vimes;
