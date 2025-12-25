-- Table: public.edu_class

-- DROP TABLE public.edu_class;

CREATE TABLE public.edu_class
(
  ec_createdby character varying(15),
  ec_createddate timestamp without time zone,
  ec_updatedby character varying(15),
  ec_updateddate timestamp without time zone DEFAULT now(),
  ec_id integer NOT NULL DEFAULT nextval('edu_class_id_seq'::regclass),
  ec_order_id integer NOT NULL,
  ec_class_id character varying(10),
  ec_name character varying(50),
  ec_date timestamp without time zone,
  ec_start_time timestamp without time zone,
  ec_end_time timestamp without time zone,
  ec_managerid character varying(15),
  ec_teacher character varying(15),
  ec_teacher1 character varying(15),
  ec_teacher2 character varying(15),
  ec_teacher3 character varying(15),
  ec_total_student integer,
  ec_content character varying(200),
  ec_note character varying(200),
  ec_sourceid character varying(2),
  ec_lesson integer,
  ec_location character varying(30),
  ec_type character varying(3),
  ec_deptid_receive character varying(7),
  ec_workunit character varying(2),
  ec_decide character varying(15),
  ec_president character varying(15),
  ec_phone character varying(12),
  ec_status character varying(1),
  CONSTRAINT edu_class_ec_id PRIMARY KEY (ec_id)
)
WITH (
  OIDS=FALSE
);
ALTER TABLE public.edu_class
  OWNER TO postgres;
GRANT ALL ON TABLE public.edu_class TO postgres;
GRANT ALL ON TABLE public.edu_class TO public;
GRANT ALL ON TABLE public.edu_class TO vimes;
