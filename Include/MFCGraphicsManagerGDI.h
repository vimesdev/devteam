//*******************************************************************************
//
// MFCGraphicsManagerD2D.h: interface for the CMFCGraphicsManagerD2D class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCGRAPHICSMANAGERGDI_H__847B8B25_AE4A_44E1_B1E8_CFE353B89B48__INCLUDED_)
#define AFX_MFCGRAPHICSMANAGERGDI_H__847B8B25_AE4A_44E1_B1E8_CFE353B89B48__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include <afxdrawmanager.h>
#include "MFCGraphicsManager.h"


class AFX_EXT_CLASS CMFCGraphicsManagerGDI : public CMFCGraphicsManager
{
	DECLARE_DYNCREATE(CMFCGraphicsManagerGDI)

public:
	CMFCGraphicsManagerGDI(CDC* pDC = NULL, BOOL bDoubleBuffering = TRUE, CMFCGraphicsManagerParams* pParams = NULL);
	virtual ~CMFCGraphicsManagerGDI();

	virtual CMFCGraphicsManager* CreateOffScreenManager(const CMFCRect& rect, CMFCImage* pImageDest);

protected:
	CMFCGraphicsManagerGDI(const CMFCRect& rectDest, CMFCImage* pImageDest);

// Attributes:
public:
	static void EnableTransparency(BOOL bEnable = TRUE);
	static BOOL IsTransparencyEnabled()
	{
		return m_bTransparency;
	}

	CDC* GetDCPaint()
	{
		return m_pDCPaint;
	}

	static BOOL m_bCheckForAttribDC;
	static BOOL m_bExtendedMappingMode;

// overrides:
public:
	virtual BOOL IsValid() const
	{
		return TRUE;
	}

	virtual void BindDC(CDC* pDC, BOOL bDoubleBuffering = TRUE);
	virtual void BindDC(CDC* pDC, const CRect& /*rect*/)
	{
		BindDC(pDC);
	}

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

	virtual void SetClipArea(const CMFCGeometry& geometry, int nFlags = RGN_COPY);
	virtual void ReleaseClipArea();

	virtual void CombineGeometry(CMFCGeometry& geometryDest, const CMFCGeometry& geometrySrc1, const CMFCGeometry& geometrySrc2, int nFlags);
	virtual void GetGeometryBoundingRect(const CMFCGeometry& geometry, CMFCRect& rect);

	virtual void EnableAntialiasing(BOOL bEnable = TRUE);
	virtual BOOL IsAntialiasingEnabled() const;

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

	virtual LPVOID CreateStrokeStyle(CMFCStrokeStyle& /*style*/) { return NULL; }
	virtual BOOL DestroyStrokeStyle(CMFCStrokeStyle& /*style*/) { return FALSE; }

	void FillGradientByType (const CRect& rect, const CMFCBrush& brush);
	BOOL FillTransparentGradient(const CRect& rect, CMFCBrush& brush);

	HPEN CreateGDIPen(const CMFCBrush& brush, const CMFCStrokeStyle* pStrokeStyle, double lineWidth);
	void CreateBrushImage(CMFCBrush& brush);

// Attributes:
protected:
	CDC*				m_pDC;
	CDC*				m_pDCPaint;
	CMemDC*				m_pMemDC;
	CDrawingManager*	m_pDM;
	BOOL				m_bDoubleBuffering;
	CBitmap				m_bmpScreen;
	CBitmap*			m_pBmpScreenOld;
	CDC					m_dcScreen;
	static BOOL			m_bTransparency;
	BOOL				m_bIsAntialiasing;

private:
	BOOL				m_bCheckHVLine;
};

#endif // !defined(AFX_MFCGRAPHICSMANAGERGDI_H__847B8B25_AE4A_44E1_B1E8_CFE353B89B48__INCLUDED_)
