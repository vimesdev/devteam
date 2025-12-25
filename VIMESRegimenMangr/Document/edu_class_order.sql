-- Table: edu_project

-- DROP TABLE edu_project;

CREATE TABLE edu_project
(
  eco_createdby character varying(15),
  eco_createddate timestamp without time zone,
  eco_updatedby character varying(15),
  eco_updateddate timestamp without time zone DEFAULT now(),
  eco_id integer NOT NULL DEFAULT nextval('edu_project_id_seq'::regclass),  
  eco_name character varying(50),
  eco_start_time timestamp without time zone, 
  eco_end_time timestamp without time zone,
  eco_managerid character varying(15), -- người quản lý  
  eco_content character varying(200), -- noi dung
  eco_note character varying(200),
  eco_sourceid character varying(2), -- nguồn kinh phí  
  eco_location  character varying(30),
  eco_type  character varying(3), -- loai (dao tao lien tuc, lop tap huan)  
  eco_createdby character varying(15), -- người tạo
  eco_approvedby character varying(15), --người duyệt
  eco_status character varying(1),  
  CONSTRAINT edu_project_eco_id PRIMARY KEY (eco_id)
)
WITH (
  OIDS=FALSE
);
ALTER TABLE edu_project
  OWNER TO postgres;
GRANT ALL ON TABLE edu_project TO public;
GRANT ALL ON TABLE edu_project TO vimes;
