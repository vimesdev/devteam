CREATE TABLE hms_admissionfile_config(
	hafc_deptid varchar(7),
	hafc_reportname varchar(81),
	hafc_desc varchar(254),
	hafc_inactive varchar(1) default 'N',
	PRIMARY KEY(hafc_deptid)
);
