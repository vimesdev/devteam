-- Sequence:edu_class_id_seq

-- DROP SEQUENCE edu_class_id_seq;

CREATE SEQUENCE edu_class_id_seq
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 9223372036854775807
  START 1
  CACHE 1;
ALTER TABLE edu_class_id_seq
  OWNER TO postgres;
GRANT ALL ON TABLE edu_class_id_seq TO public;
GRANT ALL ON TABLE edu_class_id_seq TO vimes;

-- Sequence:edu_student_id_seq

-- DROP SEQUENCE edu_student_id_seq;

CREATE SEQUENCE edu_student_id_seq
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 9223372036854775807
  START 1
  CACHE 1;
ALTER TABLE edu_student_id_seq
  OWNER TO postgres;
GRANT ALL ON TABLE edu_student_id_seq TO public;
GRANT ALL ON TABLE edu_student_id_seq TO vimes;


-- Sequence:edu_class_order_id_seq

-- DROP SEQUENCE edu_class_order_id_seq;

CREATE SEQUENCE edu_class_order_id_seq
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 9223372036854775807
  START 1
  CACHE 1;
ALTER TABLE edu_class_order_id_seq
  OWNER TO postgres;
GRANT ALL ON TABLE edu_class_order_id_seq TO public;
GRANT ALL ON TABLE edu_class_order_id_seq TO vimes;


-- Sequence:edu_student_order_id_seq

-- DROP SEQUENCE edu_student_order_id_seq;

CREATE SEQUENCE edu_student_order_id_seq
  INCREMENT 1
  MINVALUE 1
  MAXVALUE 9223372036854775807
  START 1
  CACHE 1;
ALTER TABLE edu_student_order_id_seq
  OWNER TO postgres;
GRANT ALL ON TABLE edu_student_order_id_seq TO public;
GRANT ALL ON TABLE edu_student_order_id_seq TO vimes;