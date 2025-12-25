#ifndef PIECHARTWND_H
#define PIECHARTWND_H

#pragma once
#include <gdiplus.h>
#include <map>
#include <vector>
#include "libchartdef.h"

using namespace Gdiplus;
using namespace std;
// CPieChartWnd

struct chart_element;
typedef chart_element* CHARTITEM;

class  AFX_EXT_CLASS CPieChartWnd : public CWnd
{
	DECLARE_DYNAMIC(CPieChartWnd)

public:
	CPieChartWnd();
	virtual ~CPieChartWnd();

protected:

	//The structure used to hold the data elements used in 3-D style drawing
	struct pie_3d_properties{
		float f_InclineAngle;	//The transformed angle for 3-D pie chart
		PointF pt_InPie;	//The location point for a single element on upper face of pie
		GraphicsPath path;	//The visible path object from the side view
	};
private:
	//The basic data structure which holds the pie chart item data
	struct chart_element{
		double d_value;
		float f_percentage;
		float f_angle;	
		float f_ColorGradL;
		float f_ColorGradD;
		Color cr_GradientL;
		Color cr_GradientD;
		Color cr_Base;
		CString s_label;
		CString s_element;
		pie_3d_properties pie_3d_props;
		int i_ID;
		BOOL b_select;
		
	};
//The color lable properties, these are relatively resized.
	struct label_size{
		int wdth;
		int hght;
		int xGapLeft;
		int xGapRight;	//can b removed
		int yGap;
		CString sFont;
		INT fStyle;
	};
	//The rectangle area which shows the % values of each pie item
	struct	label_rect_info{
		int lbRctHght;
		int lbIndex;
		int lbVisibleRectHght;
		Color lbTextColor;
		Color lbValueRectColor;
		CString sMaxLenString;
	};
//Background parameters
	struct background_params{
		Color cr_backgrnd;
		Color cr_GradientL;
		Color cr_GradientD;
		float f_ColorGradL;
		float f_ColorGradD;
		CString s_ChartTittle;
		CString sFont;
		INT fStyle;

	};
//Three pie chart styles
public:
	enum pie_chart_style {
      DoughnutStyle,
      TwoDStyle,
      ThreeDStyle,
   };

private:

CScrollBar m_VscrollBar;
int i_elementIndex;	//The index value used in inserting elements
float fl_startAngle;	//Starting angle for the pie elements
float fl_startAngleIncline;	//Transformed starting angle for 3-D pie
float fl_InclineAngle;	//The inclination angle for 3-D pie
float f_depth;		//The height for the 3-D pie
double d_totalVal; //total value of all  pie items
COLORREF cr_parentClr;	//Set this color to paint the outline of the window in the same color of parent
label_size lb_param;
label_rect_info lb_info;
background_params bkg_params;

Color cr_HighlightColor;
CString s_saveImage;	//The image path to save the pie chart
BOOL b_SaveFlag;	//Save flag set in to save the image
BOOL b_ShowPercentages;
map<int, chart_element*> map_pChart;	//The map holds the pie elements
ULONG_PTR m_gdiplusToken;
pie_chart_style pie_ChartStyle;

protected:
	DECLARE_MESSAGE_MAP()
	
private: //internal functions//
	//Drawing functions for 3 different styles
	void Draw2DStyle(CDC* pDc);	
	void DrawDoughnutStyle(CDC* pDc);
	void Draw3DStyle(CDC* pDc);

	void Draw2DStyle(CDC* pDc, CRect rect);	
	void DrawDoughnutStyle(CDC* pDc, CRect rect);
	void Draw3DStyle(CDC* pDc, CRect rect);
	
	void DrawLabels(Graphics* graphics);	//Draw the color and % value labels
	int GetVerticalScrollPos(int iScrollPos, BOOL bDrag);	//Used to pre calculate the vertical position for the scroller
	void UpdatePieChart(void);	//Update the pie items percentages
	Color CalculateGradientLight(Color crBase, float fGrad);	//function to calculate the gradient light color for a given color, gradient value
	Color CalculateGradientDark(Color crBase, float fGrad);		//function to calculate the gradient dark color for a given color, gradient value
	void GetBoundRect(LPRECT rect);	//The rectangle are of the pie chart alone
	void ResetItemScrollBar(void);	//Reset the scrollbar range and positions
	void CalculateLabelRect(void);	//Pre calculate the rectangle area of the % labels 
	void DrawPiechartPecentages(Graphics* pGraphics, float flStartAngle);	//Drawing function for the % values on pie chart
	BOOL ReArrangeElementMap(void);	//Function used to rearrange the element map in removing items.
	void DrawBackGround(Graphics* pGraphics);	//Drawing function for the background area
	void Get3DBounds(LPRECT rectTop, LPRECT rectBtm);	//Get the two bounding areas for 3-D style draw
	void CalcuatePieElemetPoints(void);	//Calculate the lying angle intersections of pie elements on the pie 
	void UpdatePiechartPoints(void);	//Update the pie element points in 3-D draw for starting angle and inclination changes.
	float CacluateInclineAngle(PointF ptElement, CRect rectTop);
	void Draw3DStyleArc(Graphics* pGraphics, chart_element* pElement,  REAL flStart, REAL flElementAngle, BOOL bDraw);	//Drawing function for side faces for 3-D style draw.
	BOOL HasElement(CString sElement);	//Check the element exist by its element name ID
	BOOL SaveImageInternal(Bitmap* btImage);
	int SetSelectedPieElement(CPoint point);	//Find the element which lies on the clicked area

public: //External functions//
	//Insert item function
	CHARTITEM InsertItem(CString sElement, CString sLabel, double dValue, Color crColor);
	
	//Remove item functions
	BOOL RemoveItem(CString sElement);
	BOOL RemoveItem(int iElementID);
	BOOL RemoveItem(CHARTITEM pItem);

	//Item update functions
	BOOL UpdateItemLabel(CHARTITEM pItem, CString sLabel);
	BOOL UpdateItemValue(CHARTITEM pItem, double dVal);
	BOOL UpdateItemColor(CHARTITEM pItem, Color crItem);

	//Font set functions
	void SetLabelFont(LOGFONT lf);
	void SetTitleFont(LOGFONT sFontName);

	//Color set functions
	void SetLabelBoxColor(Color crTextColor);
	void SetBackgrndColor(Color crBkgColor);
	void SetLabelColor(Color crLbColor);
	void SetItemHighlightColor(Color crHighlightColor);
	//Use to set the window outline color to the same as parent
	void SetParentWindowColor(COLORREF crParent);
	//Gradient set functions
	BOOL SetPieElementGradientLight(CHARTITEM pItem, float flGradientVal);
	BOOL SetPieElementGradientDark(CHARTITEM pItem, float flGradientVal);
	BOOL SetBackGroundGradientLight(float flGradientVal);
	BOOL SetBackGroundGradientDark(float flGradientVal);
	BOOL SetPieElementGradientDarkAll(float flGradientVal);
	BOOL SetPieElementGradientLightAll(float flGradientVal);
	
	void SetPieChartTitle(CString sTittle);
	void SetPieChartStyle(pie_chart_style pChartStyle);

	void SetStartAngle(float flAngle);
	void SetInclineAngle(float flAngle);
	BOOL SetDepth(float fDepth);

	//Element arranging functions
	void sortPiechartElements(BOOL bClockWise);
	void SortToOrginalOrder(void);

	BOOL SaveImage(CString sPath);
	virtual BOOL Create(LPCTSTR lpCaption, const RECT& rect, CWnd* pParentWnd, UINT nID);
	
	//Disable or enable % vaules to be printed on top of pie
	void ShowPercentagesOnPie(BOOL bShow);	

	//Getter functions
	CHARTITEM GetSelectedElement(void);
	CHARTITEM GetCHARTITEM(CString sElement);
	int GetElementID(CString sElement);
	float GetBackGroungGrLight(void);
	float GetBackgroundGrDark(void);
	float GetElementGrLight(CHARTITEM pItem);
	float GetElementGrDark(CHARTITEM pItem);
	CString GetElementName(CHARTITEM pItem);

private:
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};


#endif