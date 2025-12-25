CREATE OR REPLACE FUNCTION "HMS_SMFEE_GENERATION"
(
    vType NVARCHAR2,
    vDeptID NVARCHAR2,
    vRoomID    INTEGER,
    vRefIdx    INTEGER,
    vPatientNo INTEGER,
    vDocNo     INTEGER,
    vObjectType NVARCHAR2,
    vInsRate   INTEGER,
    vOrderID   INTEGER,
    vOrderLine INTEGER,
    vOrderDate DATE,
    vItemID NVARCHAR2,
    vQty NUMBER
)
 RETURN INTEGER
  AS
    vRes       INTEGER;
    vUnitPrice NUMBER(15, 3);
    vServPrice NUMBER(15, 3);
    vInsPrice  NUMBER(15, 3);
    vPolPrice  NUMBER(15, 3);
    vReqPrice  NUMBER(15, 3);
    vCost      NUMBER(15, 3);
    vInsPaid   NUMBER(15, 3);
    vPolPaid   NUMBER(15, 3);
    vDiscount  NUMBER(15, 3);
    vDiffCost  NUMBER(15, 3);
    vDiffPaid  NUMBER(15, 3);
    vPatDebt   NUMBER(15, 3);
    vPatPaid   NUMBER(15, 3);
    vInsPayment NVARCHAR2(1);
    vPolPayment NVARCHAR2(1);
    vDiffPayment NVARCHAR2(1);
    vReqPayment NVARCHAR2(1);
    vFeeType NVARCHAR2(15);
    vGroup NVARCHAR2(15);
    vName NVARCHAR2(254);
    vUnit NVARCHAR2(254);
    vRequestRoom INTEGER;
    vInsUnpaid NVARCHAR2(1);
    vHitech NVARCHAR2(1);
  BEGIN
    vRes         := 0;
    vUnitPrice   := 0;
    vServPrice   := 0;
    vInsPrice    := 0;
    vPolPrice    := 0;
    vReqPrice    := 0;
    vCost        := 0;
    vInsPaid     := 0;
    vPolPaid     := 0;
    vDiffCost    := 0;
    vDiffPaid    := 0;
    vPatDebt     := 0;
    vPatPaid     := 0;
    vInsPayment  := 'Y';
    vPolPayment  := 'Y';
    vDiffPayment := 'N';
    vReqPayment  := 'N';
    vRequestRoom := 0;
    vDiscount    := 0;
    vInsUnpaid   := 'N';
    vHitech      := 'N';
    --Truong hop loai phi la thuoc, vat tu
    IF(vType = 'D') THEN
      SELECT product_producttype,
        product_name,
        trim(product_uomname),
        product_saleprice1,
        product_saleprice2,
        product_saleprice3,
        product_saleprice4,
        product_ispaid1,
        product_ispaid2,
        product_ispaid3
      INTO vGroup,
        vName,
        vUnit,
        vServPrice,
        vInsPrice,
        vPolPrice,
        vReqPrice,
        vInsPayment,
        vPolPayment,
        vDiffPayment
      FROM m_productitem_view
      WHERE product_item_id=CAST(vItemID AS INTEGER);
      dbms_output.put_line(vServPrice);
    ELSE
      SELECT hfl_groupid,
        hfl_name,
        trim(hfl_unit),
        hfl_servprice,
        hfl_insprice,
        hfl_polprice,
        hfl_reqprice,
        hfl_inspaid,
        hfl_polpaid,
        hfl_diffpaid,
        hfl_hitech
      INTO vGroup,
        vName,
        vUnit,
        vServPrice,
        vInsPrice,
        vPolPrice,
        vReqPrice,
        vInsPayment,
        vPolPayment,
        vDiffPayment,
        vHitech
      FROM hms_fee_list
      WHERE hfl_feeid=vItemID;
    END IF;
    IF (vInsPayment = 'N') THEN
      vInsUnpaid  := 'Y';
    END IF;
    IF (vInsRate = 0) THEN
      vInsPayment := 'N';
    END IF;
    --Truong hop tinh gia BHYT
    vUnitPrice                               := vServPrice;
    IF vObjectType IN('I','C') AND vInsPayment='Y' THEN
      vUnitPrice                             := vInsPrice;
      vDiscount                              := vUnitPrice*vInsRate/100.0;
      dbms_output.put_line(vName||':'||vDiscount||':'||vUnitPrice);
    IF (vDiffPayment ='Y' AND vInsPrice >=0 AND vServPrice > vInsPrice) THEN
        -- vUnitPrice                           := vServPrice;
        vDiffCost := vServPrice-vInsPrice;
        --  vUnitPrice := vServPrice;
      END IF;
    END IF;
    IF vObjectType IN('D','P') AND vPolPayment='Y' THEN
      vUnitPrice                             := vPolPrice;
      vInsPaid                               := 0;
      vDiscount                              := vUnitPrice*vInsRate/100.0;
    IF (vDiffPayment='Y' AND vPolPrice >=0 AND vServPrice > vPolPrice) THEN
        --  vUnitPrice                           := vServPrice;
        vDiffCost := vServPrice-vPolPrice;
        --  vUnitPrice := vServPrice;
      END IF;
    END IF;
    --Neu la nguoi nuoc ngoai
    IF(vObjectType ='X') THEN
      vCost       := vServprice;
    END IF;
    --Tinh phi theo giai yeu cau
    IF(vRequestRoom > 0 AND vReqprice > 0) THEN
      vUnitPrice   := vReqprice;
      vInsPrice    := vInsprice;
      vPolPrice    := vPolprice;
      vInsPaid     := 0;
      vDiscount    := 0;
      vDiffCost    := 0;
    END IF;
    --Truong hop dac viet mien giam 100%
    IF (vObjectType='Z') THEN
      vInsPrice   := vUnitPrice;
      vPolPrice   := vUnitPrice;
      vDiscount   := vUnitPrice;
      vInsPaid    := 0;
      vDiffCost   := 0;
    END IF;
    vCost     := vQty*vUnitPrice;
    vInsPaid  := vQty*vInsPrice;
    vDiffCost := vQty*vDiffCost;
    vDiscount := vQty*vDiscount;
    vPatDebt  := vCost-vDiscount;
    UPDATE hms_fee
    SET hfe_unitprice=vUnitPrice,
      hfe_insprice   =vInsPrice,
      hfe_polprice   =vPolPrice,
      hfe_cost       =vCost,
      hfe_inspaid    =vInsPaid,
      hfe_discount   =vDiscount,
      hfe_diffCost   =vDiffCost,
      hfe_patdebt    =vPatDebt,
      hfe_quantity   =vQty,
      hfe_hitech     =vHitech
    WHERE hfe_docno  =vDocno
    AND hfe_deptid   =vDeptID
    AND hfe_refidx   =vRefIdx
    AND hfe_orderid  =vOrderID
    AND hfe_orderline=vorderLine
    AND hfe_itemid   =vItemID
    AND hfe_class   <>'X';
    IF SQL%NOTFOUND THEN
      INSERT
      INTO hms_fee
        (
          hfe_patientno,
          hfe_docno,
          hfe_deptid,
          hfe_refidx,
          hfe_orderid,
          hfe_orderline,
          hfe_type,
          hfe_group,
          hfe_itemid,
          hfe_desc,
          hfe_unit,
          hfe_quantity,
          hfe_unitprice,
          hfe_insprice,
          hfe_polprice,
          hfe_cost,
          hfe_inspaid,
          hfe_discount,
          hfe_diffcost,
          hfe_diffpaid,
          hfe_patdebt,
          hfe_patpaid,
          hfe_hitech
        )
        VALUES
        (
          vPatientNo,
          vDocNo,
          vDeptID,
          vRefIdx,
          vOrderID,
          vOrderLine,
          vType,
          vGroup,
          vItemID,
          vName,
          vUnit,
          vQty,
          vUnitPrice,
          vInsPrice,
          vPolPrice,
          vCost,
          vInsPaid,
          vDiscount,
          vDiffCost,
          0,
          vPatDebt,
          0,
          vHitech
        );
    END IF;
    /*
    IF(vDiffCost > 0) THEN
    UPDATE hms_fee
    SET hfe_unitprice=vDiffCost,
    hfe_insprice   = 0,
    hfe_polprice   = 0,
    hfe_cost       =vDiffCost,
    hfe_inspaid    =0,
    hfe_discount   =0,
    hfe_diffCost   =vDiffCost,
    hfe_patdebt    =vDiffCost,
    hfe_quantity   =vQty
    WHERE hfe_docno  =vDocno
    AND hfe_deptid   =vDeptID
    AND hfe_refidx   =vRefIdx
    AND hfe_orderid  =vOrderID
    AND hfe_orderline=vorderLine
    AND hfe_itemid   =vItemID
    AND hfe_class    = 'X';
    IF SQL%NOTFOUND THEN
    INSERT
    INTO hms_fee
    (
    hfe_class,
    hfe_patientno,
    hfe_docno,
    hfe_deptid,
    hfe_refidx,
    hfe_orderid,
    hfe_orderline,
    hfe_type,
    hfe_group,
    hfe_itemid,
    hfe_desc,
    hfe_unit,
    hfe_quantity,
    hfe_unitprice,
    hfe_insprice,
    hfe_polprice,
    hfe_cost,
    hfe_inspaid,
    hfe_discount,
    hfe_diffcost,
    hfe_diffpaid,
    hfe_patdebt,
    hfe_patpaid
    )
    VALUES
    (
    'X',
    vPatientNo,
    vDocNo,
    vDeptID,
    vRefIdx,
    vOrderID,
    vOrderLine,
    vType,
    vGroup,
    vItemID,
    '[CL]'
    ||vName,
    vUnit,
    vQty,
    vDiffCost,
    0,
    0,
    vDiffCost*vQty,
    0,
    0,
    0,
    0,
    vDiffCost*vQty,
    0
    );
    END IF;
    END IF;
    */
    RETURN vRes;
  EXCEPTION
  WHEN NO_DATA_FOUND THEN
    RETURN -1;
  WHEN VALUE_ERROR THEN
    RETURN -2;
  WHEN OTHERS THEN
    RETURN -3;
  END;