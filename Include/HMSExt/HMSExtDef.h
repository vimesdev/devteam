#ifndef HMSEXTDEF_H
#define HMSEXTDEF_H

#include <afxwin.h>
typedef struct tagMapColumn
{
    CString szFieldName;
    CString szExcelColName;
    int xlsColumn;
    UINT fmt;
    int nWidth;
    tagMapColumn()
    {
        fmt = 0;
        nWidth = 70;
        xlsColumn = -1;
    }
} MapColumn;

typedef struct tagEDITITEM
{
    CString szItemID;
    CString szNote;
    int nQty;
} EDITITEM;

typedef struct tagORDERQTY
{
    long nQtyOrder;
    long nUomRate;
} ORDERQTY;

struct SProductItem
{
    long product_item_id;
    CString product_code;
    CString product_name;
    CString product_classname;
    CString product_uomname;
    CString product_countryname;
    float product_qtyonhand;
    float product_vatprice;
    CString product_uomid;
};

#endif