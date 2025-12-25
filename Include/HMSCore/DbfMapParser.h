#ifndef DbfMapParser_H
#define DbfMapParser_H

#include "GuiUtils.h"
#include "DbMap.h"
typedef struct tagRowData
{
	CString field_name;
	CString old_data;
	CString new_data;
} RowData;

class AFX_EXT_CLASS CDbfMapParser
{
public:
	CArray<RowData, RowData> m_arrRows;
	void PushRowData(CDbfMap* pDbfm, bool bEdited=false);
	CString GetRowChange(CString szExcept=_T(""));
	CDbfMapParser();
	void Clear();
};
#endif