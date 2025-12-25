//*******************************************************************************
//
// MFCGraphicsManagerD2D.h: interface for the CMFCGraphicsManagerD2D class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCGRAPHICSMANAGERD2D_H__847B8B25_AE4A_44E1_B1E8_CFE353B89B48__INCLUDED_)
#define AFX_MFCGRAPHICSMANAGERD2D_H__847B8B25_AE4A_44E1_B1E8_CFE353B89B48__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "MFCGraphicsManager.h"

interface ID2D1RenderTarget;
interface ID2D1DCRenderTarget;
interface ID2D1BitmapRenderTarget;
interface ID2D1Factory;
interface IDWriteFactory;
interface IDWriteGdiInterop;
interface IWICImagingFactory;
interface ID2D1Layer;
interface ID2D1StrokeStyle;
interface ID2D1Brush;
interface ID2D1Bitmap;
interface IDWriteTextFormat;

typedef enum AFX_D2D1_FACTORY_TYPE
{
	AFX_D2D1_FACTORY_TYPE_SINGLE_THREADED = 0,
	AFX_D2D1_FACTORY_TYPE_MULTI_THREADED = 1,
	AFX_D2D1_FACTORY_TYPE_FORCE_DWORD = 0xffffffff

} AFX_D2D1_FACTORY_TYPE;

enum AFX_DWRITE_FACTORY_TYPE
{
    AFX_DWRITE_FACTORY_TYPE_SHARED,
    AFX_DWRITE_FACTORY_TYPE_ISOLATED
};

class AFX_EXT_CLASS CMFCGraphicsManagerD2D : public CMFCGraphicsManager  
{
	friend struct MFCGLOBAL_DATA;

	DECLARE_DYNCREATE(CMFCGraphicsManagerD2D)

public:
	CMFCGraphicsManagerD2D(CDC* pDC = NULL, BOOL bDoubleBuffering = TRUE, CMFCGraphicsManagerParams* pParams = NULL);
	virtual ~CMFCGraphicsManagerD2D();

	virtual CMFCGraphicsManager* CreateOffScreenManager(const CMFCRect& rect, CMFCImage* pImageDest);

protected:
	CMFCGraphicsManagerD2D(const CMFCRect& rectDest, CMFCImage* pImageDest);

// Attributes:
public:
	virtual BOOL IsValid() const;

	virtual void BindDC(CDC* pDC, BOOL bDoubleBuffering = TRUE);
	virtual void BindDC(CDC* pDC, const CRect& rect);

	static BOOL m_bCheckLineOffsets;
	static BOOL m_bForceSoftwareRendering;
	static BOOL m_bUseFontConversion;	// Convert font names using GDI interop

// overrides:
public:
	virtual BOOL BeginDraw();
	virtual void EndDraw();

	virtual void Clear(const CMFCColor& color = CMFCColor());

	virtual void DrawLine(	
		const CMFCPoint& ptFrom, const CMFCPoint& ptTo, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL);

	virtual void DrawLines(	
		const CMFCPointsArray& arPoints, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL);

	virtual void DrawScatter(
		const CMFCPointsArray& arPoints, const CMFCBrush& brush, double dblPointSize, UINT nStyle = 0);

	virtual void DrawRectangle(
		const CMFCRect& rect, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL);

	virtual void FillRectangle(
		const CMFCRect& rect, const CMFCBrush& brush);

	virtual void DrawRoundedRectangle(
		const CMFCRoundedRect& rect, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL);

	virtual void FillRoundedRectangle(
		const CMFCRoundedRect& rect, const CMFCBrush& brush);

	virtual void DrawEllipse(
		const CMFCEllipse& ellipse, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL);

	virtual void FillEllipse(
		const CMFCEllipse& ellipse, const CMFCBrush& brush);

	virtual void DrawArc(
		const CMFCEllipse& ellipse, double dblStartAngle, double dblFinishAngle, BOOL bIsClockwise,
		const CMFCBrush& brush, double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL);

	virtual void DrawArc(
		const CMFCPoint& ptFrom, const CMFCPoint& ptTo, const CMFCSize sizeRadius, 
		BOOL bIsClockwise, BOOL bIsLargeArc,
		const CMFCBrush& brush, double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL);

	virtual void DrawGeometry(
		const CMFCGeometry& geometry, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL);

	virtual void FillGeometry(
		const CMFCGeometry& geometry, const CMFCBrush& brush);

	virtual void DrawImage(
		const CMFCImage& image, const CMFCPoint& ptDest, const CMFCSize& sizeDest = CMFCSize(),
		double opacity = 1., CMFCImage::AFX_IMAGE_INTERPOLATION_MODE interpolationMode = CMFCImage::AFX_IMAGE_INTERPOLATION_MODE_LINEAR, 
		const CMFCRect& rectSrc = CMFCRect());

	virtual void DrawText(
		const CString& strText, const CMFCRect& rectText, const CMFCTextFormat& textFormat,
		const CMFCBrush& foregroundBrush);

	virtual CMFCSize GetTextSize(const CString& strText, const CMFCTextFormat& textFormat, double dblWidth = 0., BOOL bIgnoreTextRotation = FALSE);

	virtual void SetClipRect(const CMFCRect& rectClip, int nFlags = RGN_COPY);
	virtual void SetClipArea(const CMFCGeometry& geometry, int nFlags = RGN_COPY);
	virtual void ReleaseClipArea();

	virtual void CombineGeometry(CMFCGeometry& geometryDest, const CMFCGeometry& geometrySrc1, const CMFCGeometry& geometrySrc2, int nFlags);
	virtual void GetGeometryBoundingRect(const CMFCGeometry& geometry, CMFCRect& rect);

	virtual void EnableAntialiasing(BOOL bEnable = TRUE);
	virtual BOOL IsAntialiasingEnabled() const;

	virtual BOOL IsBindDCFailed() const
	{
		return m_bIsBindError;
	}

	virtual BOOL IsTransformSupported() const { return TRUE; }
	virtual void SetRotateTransform(double dblAngle, const CMFCPoint& ptCenter);

protected:
	virtual LPVOID CreateGeometry(CMFCGeometry& geometry);
	virtual BOOL DestroyGeometry(CMFCGeometry& geometry);

	virtual LPVOID CreateTextFormat(CMFCTextFormat& textFormat);
	virtual BOOL DestroyTextFormat(CMFCTextFormat& textFormat);

	virtual LPVOID CreateBrush(CMFCBrush& brush);
	virtual BOOL DestroyBrush(CMFCBrush& brush);
	virtual BOOL SetBrushOpacity(CMFCBrush& brush);

	virtual LPVOID CreateImage(CMFCImage& image);
	virtual BOOL DestroyImage(CMFCImage& image);
	virtual CMFCSize GetImageSize(CMFCImage& image);
	virtual BOOL CopyImage(CMFCImage& imageSrc, CMFCImage& imageDest, const CMFCRect& rectSrc);
	virtual HBITMAP ExportImageToBitmap(CMFCImage& image);

	virtual LPVOID CreateStrokeStyle(CMFCStrokeStyle& style);
	virtual BOOL DestroyStrokeStyle(CMFCStrokeStyle& style);

	ID2D1StrokeStyle* CreateStrokeStyle(const CMFCStrokeStyle* pStyle, double dblWidth = 1.);

	ID2D1Brush* PrepareBrush(CMFCBrush& brush, const CMFCPoint& ptFrom, const CMFCPoint& ptTo,
		CMFCBrush::AFX_GRADIENT_TYPE gradientType = CMFCBrush::AFX_GRADIENT_HORIZONTAL);

	ID2D1Brush* PrepareBrush(CMFCBrush& brush, const CMFCRect& rectIn, 
		CMFCBrush::AFX_GRADIENT_TYPE gradientType = CMFCBrush::AFX_GRADIENT_HORIZONTAL);

	void PrepareGradientPoints(ID2D1Brush* pD2DBrush, const CMFCPoint& ptFrom, const CMFCPoint& ptTo,
		CMFCBrush::AFX_GRADIENT_TYPE gradientType = CMFCBrush::AFX_GRADIENT_HORIZONTAL);
	void PrepareGradientPoints(ID2D1Brush* pD2DBrush, const CMFCRect& rectIn, CMFCBrush::AFX_GRADIENT_TYPE gradientType = CMFCBrush::AFX_GRADIENT_HORIZONTAL);

	virtual void OnFillGeometryBevel(const CMFCBrush& brFill, const CMFCGeometry& shape, const CMFCGeometry& shapeInternal);

	BOOL IsGraphicsManagerValid(CMFCGraphicsManager* pGM);

	ID2D1Bitmap* CreateImageFromHBITMAP(HBITMAP hBitmap, BOOL bIsIgnoreAlphaBitmap = FALSE);

	IDWriteTextFormat* CreateTextFormatFromLOGFONT(const LOGFONT& logFont, const CString& strLocale);

// Attributes:
protected:
	CDC*						m_pDC;
	ID2D1DCRenderTarget*		m_dcRenderTarget;
	ID2D1BitmapRenderTarget*	m_pBitmapRenderTarget;
	ID2D1RenderTarget*			m_pRenderTarget;
	ID2D1Layer*					m_pCurrlayer;
	CMFCRect					m_rectClip;
	BOOL						m_bAxisAlignedClipWasPushed;
	CMFCPolygonGeometry		m_CurrGeometry;
	BOOL						m_bIsBindError;
	CBitmap						m_bmpPrint;
	CDC							m_dcPrint;
	CBitmap*					m_pBmpPrintOld;

	static HINSTANCE m_hinstD2DDLL;
	static HINSTANCE m_hinstDWriteDLL;

	static ID2D1Factory* m_pDirect2dFactory;
	static IDWriteFactory* m_pWriteFactory;
	static IDWriteGdiInterop* m_pGDIInterop;
	static IWICImagingFactory* m_pWicFactory;

	static FLOAT m_DesktopDpiX;
	static FLOAT m_DesktopDpiY;

	static BOOL m_bD2DInitialized;

	static BOOL InitD2D(
		AFX_D2D1_FACTORY_TYPE d2dFactoryType = AFX_D2D1_FACTORY_TYPE_SINGLE_THREADED, 
		AFX_DWRITE_FACTORY_TYPE writeFactoryType = AFX_DWRITE_FACTORY_TYPE_ISOLATED);

	static void ReleaseD2DRefs();
};

#endif // !defined(AFX_MFCGRAPHICSMANAGERD2D_H__847B8B25_AE4A_44E1_B1E8_CFE353B89B48__INCLUDED_)
