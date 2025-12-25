#if !defined(AFX_CHARTWND_H__45515655_438B_444F_A8F0_77DAC449F81B__INCLUDED_)
#define AFX_CHARTWND_H__45515655_438B_444F_A8F0_77DAC449F81B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CHARTWND.h : header file
#include "libchartdef.h"
#include "2DPieChart.h"
#include "2DBarChart.h"
#include "2DLineChart.h"
//

#define GT_2DBAR		0
#define	GT_2DPIE		1
#define GT_2DLINE		2

#define IDT_ANIMATION	50000
#define ANIMATION_TIME	50

#define GB_SOLID		10
#define GB_GRADIENT		11
#define FT_HORIZONTAL	20
#define FT_VERTICAL		21

/////////////////////////////////////////////////////////////////////////////
// CChartWnd window

class  AFX_EXT_CLASS CChartWnd : public CWnd
{
// Construction
public:
	CChartWnd();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChartWnd)
	public:
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	//}}AFX_VIRTUAL

// Implementation
public:
	void ShowGraphLegend( BOOL legend );
	COLORREF GetGraphLegendTextColor();
	void SetGraphLegendTextColor( COLORREF t_color );
	COLORREF GetGraphLegendBackgroundColor();
	void SetGraphLegendBackgroundColor( COLORREF l_bgcolor );
	COLORREF GetGraphLabelsColor();
	void SetGraphLabelsColor( COLORREF l_color );
	COLORREF GetGraphSubtitleColor();
	COLORREF GetGraphTitleColor();
	void SetGraphSubtitleColor( COLORREF s_color );
	void SetGraphTitleColor( COLORREF t_color );
	BOOL GetGraphSubtitleShadow();
	BOOL GetGraphTitleShadow();
	void SetGraphSubtitleShadow( BOOL s_shadow );
	void SetGraphTitleShadow( BOOL t_shadow );
	int GetGradientFillType();
	void SetGradientFillType( int f_type );
	void SetGraphGradientColors( COLORREF g_col1, COLORREF g_col2 );
	int GetGraphFillType();
	void SetGraphFillType( int g_fill );
	void Delete2DLineChartSeries( int s_index );
	void Add2DLineChartSeries( CString s_text, COLORREF s_color );
	void Set2DLineChartValue( int s_segment, int s_series, int s_value );
	void Delete2DLineChartSegment( int s_index );
	void Add2DLineChartSegment( CString s_text );
	void Detele2DBarChartSeries( int s_index );
	void Add2DBarChartSeries( CString s_text, COLORREF s_color );
	void Set2DBarChartValue( int s_segment, int s_series, int s_value );
	void Delete2DBarChartSegment( int s_index );
	void Add2DBarChartSegment( CString s_text );
	void SetGraphPosition( CPoint g_position );
	void SetGraphSize( CSize g_size );
	void Update2DPieChartSegment( int s_index, int s_percent, COLORREF s_color, CString s_text );
	void SetGraphSubtitle( CString g_subtitle );
	void SetGraphTitle( CString g_title );
	COLORREF GetGraphBackgroundColor();
	void SetGraphBackgroundColor(COLORREF g_bgcolor);
	BOOL GetGraphAnimation();
	void SetGraphAnimation(BOOL g_animation, int a_type);
	void Delete2DPieChartSegment( int s_index );
	void Add2DPieChartSegment( int s_percent, COLORREF s_color, CString s_text );
	void CreateGraph( int g_type );
	virtual ~CChartWnd();

	// Generated message map functions
protected:
	//{{AFX_MSG(CChartWnd)
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	BOOL m_ShowLegend;
	COLORREF m_GraphSubtitleColor;
	COLORREF m_GraphTitleColor;
	BOOL m_GraphSubtitleShadow;
	BOOL m_GraphTitleShadow;
	DWORD m_GraphGradientFillType;
	COLORREF m_GraphGradientColor2;
	COLORREF m_GraphGradientColor1;
	int m_GraphFillType;
	BOOL m_GraphAnimation;
	CFont* m_GraphSubtitleFont;
	CString m_GraphSubtitle;
	CBitmap* m_GradientBitmap;
	CDC* m_GradientDC;
	CBitmap* m_GraphBitmap;
	CDC* m_GraphDC;
	BOOL m_Update;
	CFont* m_GraphTitleFont;
	CString m_GraphTitle;
	COLORREF m_GraphBackgroundColor;
	int m_GraphType;
	CSize m_Size;
	CPoint m_Position;
	C2DLineChart* m_2DLineChart;
	C2DBarChart* m_2DBarChart;
	C2DPieChart* m_2DPieChart;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHARTWND_H__45515655_438B_444F_A8F0_77DAC449F81B__INCLUDED_)
