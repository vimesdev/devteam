#include "stdafx.h"
#include "HMSDbfMapParser.h"
#include "StringToken.h"
CHMSDbfMapParser::CHMSDbfMapParser()
{
}

void CHMSDbfMapParser::PushRowData(CDbfMap* pDbfm, bool bEdited)
{
	if (pDbfm == NULL)
	{
		return;
	}
	CString szFieldName, szValue;
	bool bFound = false;
	for (int i = 0; i < pDbfm->GetCount(); i++)
	{
		bFound = false;
		CDbField dbf = pDbfm->GetField(i);
		szFieldName = dbf.GetName();
		szValue = dbf.ToString();
		for (int i = 0; i < m_arrRows.GetCount(); i++)
		{
			RowData rd = m_arrRows.GetAt(i);
			if (rd.field_name != szFieldName)
			{
				continue;
			}
			if (bEdited)
			{
				rd.new_data = szValue;
			}
			else
			{
				rd.old_data = szValue;
			}
			m_arrRows.SetAt(i, rd);
			bFound = true;
		}
		if (bFound == false)
		{
			RowData rd={};
			rd.field_name = szFieldName;
			rd.old_data = szValue;
			if (bEdited)
			{
				rd.new_data = szValue;
			}
			m_arrRows.Add(rd);
		}
	}
}

CString CHMSDbfMapParser::GetRowChange(CString szExcept)
{
	CString szRowChange, szExceptField;
	szRowChange.Empty();
	CStringToken tok(szExcept);
	bool bIsExceptField = false;
	for (int i = 0; i < m_arrRows.GetCount(); i++)
	{
		bIsExceptField = false;
		RowData rd = m_arrRows.GetAt(i);	
		for (int j = 0; j < tok.GetSize(); j++)
		{
			tok.GetAt(i, szExceptField);
			if (rd.field_name == szExceptField)
			{
				bIsExceptField = true;
				continue;
			}
		}
		if (bIsExceptField)
		{
			continue;
		}
		if (rd.old_data == rd.new_data)
		{
			continue;
		}
		if (!szRowChange.IsEmpty())
		{
			szRowChange += _T("| ");
		}
		szRowChange.AppendFormat(_T("[%s] (%s)->(%s)"), rd.field_name, rd.old_data, rd.new_data);
	}
	return szRowChange;
}

void CHMSDbfMapParser::Clear()
{
	m_arrRows.RemoveAll();
}