//*******************************************************************************
//
// MFCGridFilter.h 
//

#if !defined(AFX_MFCGRIDFILTER_H__10CABCAB_AAB9_4933_906E_4097D230362A__INCLUDED_)
#define AFX_MFCGRIDFILTER_H__10CABCAB_AAB9_4933_906E_4097D230362A__INCLUDED_



#include "GuiDefs.h"
/////////////////////////////////////////////////////////////////////////////
// AFX_FILTER_COLUMN_INFO

struct AFX_EXT_CLASS AFX_FILTER_COLUMN_INFO	// used by filter callback function
{
// Construction
	AFX_FILTER_COLUMN_INFO () : nCol (-1), bAll (TRUE) {}
	AFX_FILTER_COLUMN_INFO (const AFX_FILTER_COLUMN_INFO& src)
	{
		Copy (src);
	}

	void Clear ();
	void Copy (const AFX_FILTER_COLUMN_INFO& src);
	BOOL IsEmpty () const;

// Attributes
	int				nCol;		// Column index

	CString			strFilter;	// Filter string text

	BOOL			bAll;
	CStringList		lstValues;	// Allowed values
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridFilterParams - stores filter info for columns

class AFX_EXT_CLASS CMFCGridFilterParams
{
	friend class CMFCGridFilter;

// Construction:
public:
	CMFCGridFilterParams ();
	~CMFCGridFilterParams ();

// Operations:
public:
	void AddColumn (int nColumn, AFX_FILTER_COLUMN_INFO* pParam = NULL);
	void ClearColumn (int nColumn);
	void ClearAll ();

	AFX_FILTER_COLUMN_INFO* Column(int nColumn)
	{
		AFX_FILTER_COLUMN_INFO* pParam = NULL;

		if (m_mapColumns.Lookup(nColumn, pParam) && pParam != NULL)
		{
			ASSERT(pParam->nCol == nColumn);
		}

		return pParam;
	}

// Attributes:
protected:
	CMap<int, int, AFX_FILTER_COLUMN_INFO*, AFX_FILTER_COLUMN_INFO*> m_mapColumns;
};

/////////////////////////////////////////////////////////////////////////////
// CMFCGridFilter
// Implements the default callback function, stores filter info for one or all columns.

class CMFCGridCtrl;
class CMFCGridRow;

class AFX_EXT_CLASS CMFCGridFilter : public CObject
{
// Construction:
public:
	CMFCGridFilter ();
	virtual ~CMFCGridFilter() {}

	void SetFilter (CMFCGridCtrl* pOwnerGrid);

// Overrides:
public:
	virtual AFX_FILTER_COLUMN_INFO* GetColumnInfo (int nColumn);
	virtual BOOL FilterFunc (CMFCGridRow* pRow, AFX_FILTER_COLUMN_INFO* pParam); // The default implementation

// Attributes:
protected:
	CMFCGridCtrl*			m_pOwnerGrid;

public:
	CMFCGridFilterParams	m_params;
	BOOL					m_bOneColumnOnly;

public:
	static LRESULT CALLBACK pfnFilterCallback (WPARAM wParam, LPARAM lParam);
};


#endif // !defined(AFX_MFCGRIDFILTER_H__10CABCAB_AAB9_4933_906E_4097D230362A__INCLUDED_)
