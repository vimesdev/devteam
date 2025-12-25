#ifndef HMSHELPER_H
#define HMSHELPER_H

#pragma once
#include "DbMap.h"

#include "json.h"
#include "rapidjson\document.h"
#include "HTMLayoutCtrl.h"

class AFX_EXT_CLASS CHMSHelper
{
public:
    void PrepareRepeatedOperation(CDbfMap &hms_operationTbl, CString &szSQL);

    int CheckMaDoiTuongKCB(long nDocNo, bool bNotify = false);
    int CheckMaDoiTuongKCB(JSONVALUE jData, bool bNotify = false);
    int CheckMaLoaiKCB(CString szSuggestion, CString szMaLoai);
    int ValidateInsInfo(JSONVALUE jData);

    CString GetSelectionList(CString szID, JSONVALUE &jData);

    void RelocateWindow(CWnd *pWnd, int nX, int nY);

    void PrintDate(CString szMsg);

    void ProcessCardReaderMsg(LPARAM lParam, CString &szIDCard);
    CString parseIDCard0(rapidjson::Document &document);
    bool loadAndSaveImageFromBase64(const std::string &base64_data,
                                    const CString &output_file);
    bool base64Decode(const std::string &base64_data, std::vector<BYTE> &decoded_data);
    bool is_base64(unsigned char c);

    int CheckInteraction(long nDocumentNo, CString szOrderDate,
                         long nProduct_id = 0);
    int CheckNutriExamSchedule();

    /*Json for html*/
    void JsonFromRecord(CString szSQL, JSONVALUE& jv);
    void HtmlSetJsonValue(CHTMLayoutCtrl &wndHtml, JSONVALUE jv);
};

#endif