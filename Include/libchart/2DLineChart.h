// 2DLineChart.h: interface for the C2DLineChart class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_2DLineChart_H__6E24F5B7_34EC_44F6_9B2A_2C7E899DF73F__INCLUDED_)
#define AFX_2DLineChart_H__6E24F5B7_34EC_44F6_9B2A_2C7E899DF73F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define AT_LINE_DRAW_ALL		30
#define AT_LINE_DRAW_SERIES		31


struct _2DLineChartValues
{
	int index;
	int value;
	struct _2DLineChartValues* next;
};

struct _2DLineChartSeries
{
	int index;
	COLORREF color;
	CString text;
	struct _2DLineChartValues* values;
	struct _2DLineChartSeries* next;
};

struct _2DLineChartSegments
{
	int index;
	CString text;
	struct _2DLineChartSegments* next;
};

class  AFX_EXT_CLASS C2DLineChart  
{
public:
	COLORREF GetLegendTextColor();
	void SetLegendTextColor( COLORREF t_color );
	COLORREF GetLegendBackgroundColor();
	void SetLegendBackgroundColor( COLORREF l_bgcolor );
	COLORREF GetLabelsColor();
	void SetLabelsColor( COLORREF l_color );
	void UpdateAnimation();
	void SetGraphAnimation( BOOL g_animation, int a_type );
	void DeleteSeries( int s_index );
	void AddSeries( CString s_text, COLORREF s_color );
	void SetValue( int s_segment, int s_series, int s_value );
	void DeleteSegment( int s_index );
	void AddSegment( CString s_text );
	void SetFullSize( CSize full_size );
	void SetGraphSize( CSize g_size );
	void SetGraphPosition( CPoint g_position );
	void SetGraphBkColor( COLORREF g_bkColor );
	int GetGraphAnimationPercent();
	BOOL GetGraphAnimation();
	void BuildGraphLegend( HDC hDC );
	void BuildGraph( HDC hDC );
	void ClearGraph();
	C2DLineChart( CPoint g_position, CSize g_size );
	virtual ~C2DLineChart();

private:
	COLORREF m_LegendTextColor;
	COLORREF m_LegendBackgroundColor;
	COLORREF m_LabelsColor;
	int m_SegmentsPercent;
	CPoint* m_DrawSeriesPoints;
	int m_BlendSeriesCompleted;
	int m_BlendSegmentsCompleted;
	HBITMAP m_hOldBlendBitmap;
	HBITMAP m_hBlendBitmap;
	HDC m_hBlendDC;
	BOOL m_AnimationPauseStart;
	int m_AnimationPause;
	int m_DrawSeriesCompleted;
	int m_DrawSegmentsCompleted;
	int m_AnimationType;
	int m_AnimationPercent;
	BOOL m_Animation;
	COLORREF m_GraphBkColor;
	CFont* m_ValueFont;
	CFont* m_SegmentFont;
	CFont* m_LegendFont;
	int m_SeriesNumber;
	int m_SegmentsNumber;
	CSize m_FullSize;
	CSize m_Size;
	CPoint m_Position;
	struct _2DLineChartSeries* m_Series;
	struct _2DLineChartSegments* m_Segments;
};

#endif // !defined(AFX_2DLineChart_H__6E24F5B7_34EC_44F6_9B2A_2C7E899DF73F__INCLUDED_)
