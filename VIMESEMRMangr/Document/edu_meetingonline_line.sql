
CREATE SEQUENCE edu_meetingonline_line_id_seq
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 9223372036854775807
  START 1
  CACHE 1;
ALTER TABLE edu_meetingonline_line_id_seq
  OWNER TO postgres;
GRANT ALL ON TABLE edu_meetingonline_line_id_seq TO public;
GRANT ALL ON TABLE edu_meetingonline_line_id_seq TO vimes;


CREATE TABLE edu_meetingonline_line
(
  emol_id integer NOT NULL DEFAULT nextval('edu_meetingonline_line_id_seq'::regclass),
  emol_createdby character varying(15),
  emol_createddate timestamp without time zone DEFAULT now(),
  emol_updatedby character varying(15),
  emol_updateddate timestamp without time zone,
  emol_transfer_id integer,
  emol_student_id character varying(15),  
  emol_name character varying(65),  
  emol_birthdate date,
  emol_sex character varying(3),
  emol_ethnic integer DEFAULT 1,
  emol_address character varying(254),
  emol_occupation integer,
  emol_position integer,
  emol_rank integer DEFAULT 0,  
  emol_phone character varying(12),
  emol_cardid character varying(25),  -- cmnd, thẻ căn cước
  emol_date date,
  emol_startdate date,
  emol_enddate date,
  emol_deptid character varying(7), -- khoa lam việc   
  emol_workunit character varying(200), -- đơn vị công tác
  emol_note character varying(254),
  emol_status character varying(1) DEFAULT 'O'::character varying,  
  CONSTRAINT edu_meetingonline_line_pkey PRIMARY KEY (emol_id)  
)
WITH (
  OIDS=FALSE
);
ALTER TABLE edu_meetingonline_line
  OWNER TO postgres;
GRANT ALL ON TABLE edu_meetingonline_line TO postgres;
GRANT ALL ON TABLE edu_meetingonline_line TO public;
GRANT ALL ON TABLE edu_meetingonline_line TO vimes;
