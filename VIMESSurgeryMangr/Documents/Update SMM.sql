update pms_items set pmi_discount='N' where pmi_discount is null;
commit;

create or replace
FUNCTION         "HMS_PHARMA_XORDER_ROLLBACK" (
    nORDERID INTEGER,
    szUSERID NVARCHAR2,
    nDOCNO   INTEGER)
  RETURN INTEGER
AS
  tmpInt INTEGER;
  szObjectType NVARCHAR2(1);
  nUnitPrice NUMBER(15, 3);
  nInsPrice NUMBER(15, 3);
  nServPrice NUMBER(15, 3);
BEGIN
  tmpInt := 0;
  nUnitPrice := 0;
  dbms_output.put_line('Rollback.'||nORDERID);
  
  SELECT ho_type INTO szObjectType
  FROM hms_object, hms_doc
  WHERE hd_docno=nDOCNO AND hd_object=ho_id;
  
  FOR c1 IN
  (SELECT hpol_orderid,
    hpol_idx,
    hpo_stockid,
    hpol_sitemid,
    hpol_stockline,
    hpol_orderqty
  FROM hms_pharma_xorder
  LEFT JOIN hms_pharma_xorder_line
  ON(hpo_orderid          =hpol_orderid)
  WHERE hpo_orderid       =nORDERID
  AND NVL(hpo_status,'A') ='A'
    --AND NVL(hfe_status,'P')  ='P'
  )
  LOOP
    dbms_output.put_line(C1.hpol_orderqty);
    
      SELECT pmsi_servprice, pmsi_insprice
      INTO nServPrice, nInsPrice
      FROM pms_stockitems
      WHERE pmsi_id=c1.hpol_sitemid;
      
      IF(szObjectType='I' OR szObjectType='C' OR szObjectType='D') THEN
        nUnitPrice := nInsPrice;
      ELSE
        nUnitPrice := nServPrice;
      END IF;
      
      UPDATE hms_pharma_xorder_line
      SET hpol_unitprice=nUnitPrice,
          hfe_refrowid=0
      WHERE hpol_idx=c1.hpol_idx;
    
    UPDATE pms_stockline
    SET pmsl_orderqty =pmsl_orderqty+C1.hpol_orderqty,
      pmsl_quantity   =pmsl_quantity+C1.hpol_orderqty
    WHERE pmsl_stockid=c1.hpo_stockid
    AND pmsl_sitemid  =C1.hpol_sitemid
    AND pmsl_lineidx  = C1.hpol_stockline;
    dbms_output.put_line(C1.hpol_orderqty);
    tmpInt := tmpInt+1;
  END LOOP;
  IF(tmpInt > 0) THEN
    UPDATE hms_pharma_xorder
    SET hpo_status      ='O',
      hpo_updatedby     =szUSERID,
      hpo_updateddate   =CURRENT_TIMESTAMP,
      hpo_issuer        =NULL,
      hpo_issuedate     =NULL
    WHERE hpo_orderid      =nORDERID
    AND NVL(hpo_status,'A')='A';
  END IF;
  RETURN tmpInt;
END;

create or replace
FUNCTION "HMS_SMFEE_CREATE_XDRUGFEE" (
    docno INTEGER,
    objectType VARCHAR2,
    nObjectId INTEGER)
  RETURN INTEGER
AS
  nCost             NUMBER(15, 3);
  nInsPaid          NUMBER(15, 3);
  nDiscount         NUMBER(15, 3);
  nDiffCost         NUMBER(15, 3);
  nPatPaid          NUMBER(15, 3);
  nPatDebt          NUMBER(15, 3);
  nUnitPrice        NUMBER(15, 3);
  nInsPrice         NUMBER(15, 3);
  nPolPrice         NUMBER(15, 3);
  szInsPayment      VARCHAR2(1);
  szDiscount        VARCHAR2(1);
  szPolPayment      VARCHAR2(1);
  szDiffPayment     VARCHAR2(1);
  szCalcInsnInsRate VARCHAR2(1);
  nInsRate          INTEGER;
  nRequestRoom      INTEGER;
  feeType           VARCHAR2(1);
  nCount            INTEGER;
  nRowID            INTEGER;
  objectid          VARCHAR(1);
BEGIN
  nCount     := 0;
  FOR tmpRec IN
  (SELECT hpo_patientno,
    hpo_deptid,
    hpo_roomid,
    hpo_orderid,
    hpo_orderdate,
    hpol_sitemid,
    pmi_typeid         AS hfl_groupid,
    pmi_id             AS hfl_feeid,
    pmi_name           AS hfl_name,
    pmi_unit           AS hfl_unit,
    pmsi_servprice     AS hfl_servprice,
    pmsi_insprice      AS hfl_insprice,
    pmsi_polprice      AS hfl_polprice,
    pmi_inspaid        AS hfl_inspaid,
    pmi_polpaid        AS hfl_polpaid,
    pmi_diffpaid       AS hfl_diffpaid,
    pmi_discount       AS hfl_discount,
    SUM(hpol_issueqty) AS hfl_qty
  FROM hms_pharma_xorder
  LEFT JOIN hms_pharma_xorder_line
  ON(hpo_orderid=hpol_orderid)
  LEFT JOIN pms_stockitems
  ON(hpol_sitemid=pmsi_id)
  LEFT JOIN pms_items
  ON(pmsi_itemid    =pmi_id)
  WHERE hpo_docno   =docno
  AND hfe_refrowid     =0
  AND hpo_status<>'O'
  and hpo_type in('S')
  AND hpol_issueqty > 0
  GROUP BY hpo_patientno,
    hpo_deptid,
    hpo_roomid,
    hpo_orderid,
    hpo_orderdate,
    hpol_sitemid,
    pmi_typeid,
    pmi_id,
    pmi_name,
    pmi_unit,
    pmsi_servprice,
    pmsi_insprice,
    pmsi_polprice,
    pmi_inspaid,
    pmi_polpaid,
    pmi_diffpaid,
    pmi_discount
  ORDER BY hpo_orderdate
  )
  LOOP
    -- raise notice '%: %', tmpRec.hfl_ame, tmpRec.hfl_servprice;
    --Tao lai muc phi kham
    nCost         :=0;
    nDiscount     :=0;
    nDiffCost     :=0;
    nPatPaid      :=0;
    nPatDebt      :=0;
    nInsPrice     :=0;
    nInsPaid      :=0;
    szInsPayment  := tmpRec.hfl_InsPaid;
    szDiscount    := tmpRec.hfl_discount;
    szPolPayment  := tmpRec.hfl_polpaid;
    szDiffPayment := tmpRec.hfl_diffpaid;
    nCost     := tmpRec.hfl_servprice;
    nInsPrice := tmpRec.hfl_InsPrice;
    nPolPrice := tmpRec.hfl_polprice;
    
    --Neu benh nhan la doi tuong dich vu
    IF (nObjectId IN(7)) THEN
      nCost       := tmpRec.hfl_servprice;
      nInsPaid    := 0;
      nDiscount   := 0;
      nPatDebt    := nCost-nDiscount;
    END IF;
    
    --Neu benh nhan la doi tuong mien giam <= 100%
    IF (nObjectId IN(1)) THEN
      nCost       := tmpRec.hfl_polprice;
      nInsPaid    := 0;
      nDiscount   := 0;
      nPatDebt    := 0;
    END IF;
    
    --Neu benh nhan la doi tuong BHYT
    IF(nObjectId IN(2,3,4,5,6,8,9,10)) THEN
      nCost       := tmpRec.hfl_insprice;
      nInsPaid    := 0;
      nDiscount   := tmpRec.hfl_insprice;
      nPatDebt    := 0;
      --nDiffCost       := 0;
      IF (szDiscount='Y') THEN
        nInsPaid  := tmpRec.hfl_insprice;
        nDiscount := 0;
      END IF;
      IF (szInsPayment='N' AND (szDiscount='N' OR NVL(szDiscount, NULL) IS NULL)) THEN
        nInsPaid  := 0;
        nDiscount := 0;
        nPatDebt  := tmpRec.hfl_insprice;
      END IF;
    END IF;
   
    SELECT hms_fee_rowid_asq.nextval INTO nRowID FROM DUAL;
    dbms_output.put_line('ROWID:'||nRowID);
    INSERT
    INTO hms_xfee
      (
        HFE_ROWID,
        HFE_DEPTID,
        HFE_REFIDX,
        HFE_PATIENTNO,
        HFE_DOCNO,
        HFE_INVOICENO,
        HFE_INSINVOICE,
        HFE_CLASS,
        HFE_TYPE,
        HFE_GROUP,
        HFE_SUBGROUP,
        HFE_CATEGORY,
        HFE_FEEGROUP,
        HFE_ITEMID,
        HFE_OBJECTID,
        HFE_STATUS,
        HFE_DATE,
        HFE_HITECH,
        HFE_DESC,
        HFE_UNIT,
        HFE_QUANTITY,
        HFE_UNITPRICE,
        HFE_INSPRICE,
        hfe_polprice,
        hfe_cost,
        hfe_inspaid,
        hfe_discount,
        hfe_diffcost,
        hfe_patdebt,
        hfe_diffpaid,
        hfe_patpaid
      )
      VALUES
      (
        nRowID,
        tmpRec.hpo_deptid,
        tmpRec.hpo_roomid,
        tmpRec.hpo_patientno,
        docNo,
        0,
        0,
        'S',
        'D',
        tmpRec.hfl_groupid,
        '',
        0,
        0,
        tmpRec.hfl_feeid,
        objectId,
        'O',
        tmpRec.hpo_orderdate,
        'N',
        tmpRec.hfl_name,
        tmpRec.hfl_unit,
        tmpRec.hfl_qty,
        nCost,
        tmpRec.hfl_insprice,
        tmpRec.hfl_insprice,
        nCost    *tmpRec.hfl_qty,
        ninspaid *tmpRec.hfl_qty,
        nDiscount*tmpRec.hfl_qty,
        nDiffCost*tmpRec.hfl_qty,
        npatdebt *tmpRec.hfl_qty,
        0,
        0
      );
    IF(SQL%FOUND) THEN
      UPDATE hms_pharma_xorder_line
      SET hfe_refrowid      =nRowID,
        hpol_unitprice   = nCost
      WHERE hpol_orderid =tmpRec.hpo_orderid
      AND hpol_sitemid   =tmpRec.hpol_sitemid;
    END IF;
    nCount := nCount+1;
  END LOOP;
  RETURN nCount;
END;

create table hms_surgery_schedule
(
  hss_idx number(10, 0) NOT NULL,
  hss_starttime timestamp,
  hss_endtime timestamp,
  hss_doctor nvarchar2(15),
  hss_doctor1 nvarchar2(15),
  hss_nurse1 nvarchar2(15),
  hss_nurse2 nvarchar2(15),
  hss_nurse3 nvarchar2(15),
  hss_nurse4 nvarchar2(15),
  hss_nurse5 nvarchar2(15),
  hss_status nvarchar2(1),
  PRIMARY KEY (hss_idx)
);

CREATE SEQUENCE hms_surgery_sched_hss_idx_asq start with 1 increment by 1;

CREATE OR REPLACE TRIGGER hms_surgery_sched_hss_idx_atr
BEFORE INSERT ON hms_surgery_schedule
FOR EACH ROW
DECLARE
max_id NUMBER;
cur_asq NUMBER;
BEGIN
IF :new.hss_idx IS NULL THEN
  SELECT hms_surgery_sched_hss_idx_asq.nextval INTO :new.hss_idx FROM DUAL;
ELSE
  SELECT GREATEST(NVL(MAX(hss_idx), 0), :new.hss_idx) INTO max_id FROM hms_surgery_schedule;
  SELECT hms_surgery_sched_hss_idx_asq.nextval INTO cur_asq FROM DUAL;
  WHILE cur_asq < max_id
  LOOP
    SELECT hms_surgery_sched_hss_idx_asq.nextval INTO cur_asq FROM DUAL;
  END LOOP;
END IF;
END;