
#if !defined(AFX_MFCGRAPHICSMANAGER_H__979A73FE_851A_4E39_B412_4F2C22047E28__INCLUDED_)
#define AFX_MFCGRAPHICSMANAGER_H__979A73FE_851A_4E39_B412_4F2C22047E28__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <afxwin.h>
#include <afxcontrolbars.h>
// Graphics Manager supported features:

#define AFX_GRAPHICS_MANAGER_COLOR_OPACITY	0x0001
#define AFX_GRAPHICS_MANAGER_CAP_STYLE		0x0002
#define AFX_GRAPHICS_MANAGER_LINE_JOIN		0x0004
#define AFX_GRAPHICS_MANAGER_ANTIALIAS		0x0008
#define AFX_GRAPHICS_MANAGER_LOCALE		0x0010
#define AFX_GRAPHICS_MANAGER_SCALING		0x0020

////////////////////////////////////////////////////////////////////////////////////
// CMFCPoint

class AFX_EXT_CLASS AFX_NOVTABLE CMFCPoint
{
// constructors & destructors
public:
	CMFCPoint()
		: x(0.)
		, y(0.)
		, z(0.)
	{
	}

	CMFCPoint(double X, double Y, double Z = 0.)
		: x(X)
		, y(Y)
		, z(Z)
	{
	}

	CMFCPoint(const CMFCPoint& pt)
		: x(pt.x)
		, y(pt.y)
		, z(pt.z)
	{
	}

	CMFCPoint(const CPoint& pt)
		: x((double)pt.x)
		, y((double)pt.y)
		, z(0)
	{
	}

// member functions
public:
	void SetPoint(double X, double Y, double Z = 0.)
	{
		x = X;
		y = Y;
		z = Z;
	}

	void SetPoint(const CMFCPoint& pt)
	{
		SetPoint (pt.x, pt.y, pt.z);
	}

	void Offset(double X, double Y, double Z = 0.)
	{
		x += X;
		y += Y;
		z += Z;
	}

	void Offset(const CMFCPoint& pt)
	{
		Offset (pt.x, pt.y, pt.z);
	}

	void Swap()
	{
		double tmp = x;
		x = y;
		y = tmp;
	}

	CMFCPoint Ortho() const
	{
		return CMFCPoint(-y, x);
	}

	void Scale(double dblRatio, const CMFCPoint& ptOffset = CMFCPoint())
	{
		Scale(dblRatio, dblRatio, dblRatio, ptOffset);
	}

	void Scale(const CMFCPoint& ptRatio, const CMFCPoint& ptOffset = CMFCPoint())
	{
		Scale(ptRatio.x, ptRatio.y, ptRatio.z, ptOffset);
	}

	void Scale(double dblRatioX, double dblRatioY, double dblRatioZ, const CMFCPoint& ptOffset = CMFCPoint())
	{
		x = ptOffset.x + (x - ptOffset.x) * dblRatioX;
		y = ptOffset.y + (y - ptOffset.y) * dblRatioY;
		z = ptOffset.z + (z - ptOffset.z) * dblRatioZ;
	}

// operators
public:
	CMFCPoint& operator = (const CMFCPoint& pt)
	{
		x = pt.x;
		y = pt.y;
		z = pt.z;
		return *this;
	}

	const CMFCPoint& operator += (const CMFCPoint& pt)
	{
		Offset (pt.x, pt.y, pt.z);
		return *this;
	}

	const CMFCPoint& operator -= (const CMFCPoint& pt)
	{
		Offset (-pt.x, -pt.y, -pt.z);
		return *this;
	}

	const CMFCPoint& operator *= (double value)
	{
		x *= value;
		y *= value;
		z *= value;
		return *this;
	}

	const CMFCPoint& operator /= (double value)
	{
		_ASSERTE(value != 0.0);
		x /= value;
		y /= value;
		z /= value;
		return *this;
	}

	bool operator == (const CMFCPoint& pt) const
	{
		return x == pt.x && y == pt.y && z == pt.z;
	}

	bool operator != (const CMFCPoint& pt) const
	{
		return x != pt.x || y != pt.y || z != pt.z;
	}

	CMFCPoint operator + (const CMFCPoint& pt) const
	{
		return CMFCPoint(x + pt.x, y + pt.y, z + pt.z);
	}

	CMFCPoint operator - (const CMFCPoint& pt) const
	{
		return CMFCPoint(x - pt.x, y - pt.y, z - pt.z);
	}

	CMFCPoint operator - () const
	{
		return CMFCPoint(-x, -y, -z);
	}

	CMFCPoint operator * (double value) const
	{
		return CMFCPoint(x * value, y * value, z * value);
	}

	CMFCPoint operator / (double value) const
	{
		_ASSERTE(value != 0.0);
		return CMFCPoint(x / value, y / value, z / value);
	}

	operator CPoint() const
	{
		return CPoint((long)x, (long)y);
	}

public:
	double x;
	double y;
	double z;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCSize

class AFX_EXT_CLASS AFX_NOVTABLE CMFCSize
{
// constructors & destructors
public:
	CMFCSize()
		: cx(0.)
		, cy(0.)
	{
	}

	CMFCSize(double w, double h)
		: cx(w)
		, cy(h)
	{
	}

	CMFCSize(const CMFCSize& sz)
		: cx(sz.cx)
		, cy(sz.cy)
	{
	}

	CMFCSize(const CSize& sz)
		: cx((double)sz.cx)
		, cy((double)sz.cy)
	{
	}

// public member function
public:
	bool IsNull() const
	{
		return cx == 0.0 && cy == 0.0;
	}

	bool IsEmpty() const
	{
		return cx == 0.0 || cy == 0.0;
	}

	bool IsValid() const
	{
		return cx >= 0.0 && cy >= 0.0;
	}

	double Width() const
	{
		return cx;
	}

	double Height() const
	{
		return cy;
	}

	void SetSize(double w, double h)
	{
		cx = w;
		cy = h;
	}

	void SetSize(const CMFCSize& sz)
	{
		SetSize (sz.cx, sz.cy);
	}

	void SetSizeEmpty()
	{
		SetSize(0.0, 0.0);
	}

	void Inflate(double w, double h)
	{
		cx += w;
		cy += h;
	}

	void Inflate(const CMFCSize& sz)
	{
		Inflate(sz.cx, sz.cy);
	}

	void Deflate(double w, double h)
	{
		cx -= w;
		cy -= h;
	}

	void Deflate(const CMFCSize& sz)
	{
		Deflate(sz.cx, sz.cy);
	}

	void Swap()
	{
		double tmp = cx;
		cx = cy;
		cy = tmp;
	}

	void Scale(double dblRatio)
	{
		Scale(dblRatio, dblRatio);
	}
	
	void Scale(double dblRatioX, double dblRatioY)
	{
		cx *= dblRatioX;
		cy *= dblRatioY;
	}

// public operators
public:
	const CMFCSize& operator = (const CMFCSize& sz)
	{
		cx = sz.cx;
		cy = sz.cy;
		return *this;
	}

	bool operator == (const CMFCSize& sz) const
	{
		return cx == sz.cx && cy == sz.cy;
	}

	bool operator != (const CMFCSize& sz) const
	{
		return cx != sz.cx || cy != sz.cy;
	}

	const CMFCSize& operator += (const CMFCSize& sz)
	{
		Inflate(sz.cx, sz.cy);
		return *this;
	}

	const CMFCSize& operator -= (const CMFCSize& sz)
	{
		Deflate(sz.cx, sz.cy);
		return *this;
	}

	const CMFCSize& operator *= (double value)
	{
		cx *= value;
		cy *= value;
		return *this;
	}

	const CMFCSize& operator /= (double value)
	{
		_ASSERTE(value != 0.0);
		cx /= value;
		cy /= value;
		return *this;
	}

	CMFCSize operator + (const CMFCSize& sz) const
	{
		return CMFCSize(cx + sz.cx, cy + sz.cy);
	}

	CMFCSize operator - (const CMFCSize& sz) const
	{
		return CMFCSize(cx - sz.cx, cy - sz.cy);
	}

	CMFCSize operator * (double value) const
	{
		return CMFCSize(cx * value, cy * value);
	}

	CMFCSize operator / (double value) const
	{
		_ASSERTE(value != 0.0);
		return CMFCSize(cx / value, cy / value);
	}

	operator CSize() const
	{
		return CSize((long)cx, (long)cy);
	}

public:
	double	cx;
	double	cy;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCRect

class AFX_EXT_CLASS AFX_NOVTABLE CMFCRect
{
// constructors & destructors
public:
	CMFCRect()
		: left  (0.)
		, top   (0.)
		, right (0.)
		, bottom(0.)
	{
	}

	CMFCRect(double l, double t, double r, double b)
		: left  (l)
		, top   (t)
		, right (r)
		, bottom(b)
	{
	}

	CMFCRect(const CMFCPoint& ptLT, const CMFCPoint& ptRB)
		: left  (ptLT.x)
		, top   (ptLT.y)
		, right (ptRB.x)
		, bottom(ptRB.y)
	{
	}

	CMFCRect(const CMFCPoint& pt, const CMFCSize& sz)
		: left  (pt.x)
		, top   (pt.y)
		, right (pt.x + sz.cx)
		, bottom(pt.y + sz.cy)
	{
	}

	CMFCRect(const CMFCRect& rt)
		: left  (rt.left)
		, top   (rt.top)
		, right (rt.right)
		, bottom(rt.bottom)
	{
	}

	CMFCRect(const CRect& rt)
		: left  ((double)rt.left)
		, top   ((double)rt.top)
		, right ((double)rt.right)
		, bottom((double)rt.bottom)
	{
	}

public:
	enum AFX_RECT_POINT
	{
		AFX_RECT_POINT_FIRST         = 0,
		AFX_RECT_POINT_TOP_LEFT      = AFX_RECT_POINT_FIRST,
		AFX_RECT_POINT_TOP_CENTER    = 1,
		AFX_RECT_POINT_TOP_RIGHT     = 2, 
		AFX_RECT_POINT_CENTER_RIGHT  = 3,
		AFX_RECT_POINT_BOTTOM_RIGHT  = 4,
		AFX_RECT_POINT_BOTTOM_CENTER = 5,
		AFX_RECT_POINT_BOTTOM_LEFT   = 6,
		AFX_RECT_POINT_CENTER_LEFT   = 7,
		AFX_RECT_POINT_CENTER        = 8,
		AFX_RECT_POINT_NULL          = 9,
		AFX_RECT_POINT_LAST          = AFX_RECT_POINT_NULL
	};

// public member function
public:
	bool IsRectNull() const
	{
		return left == 0.0 && top == 0.0 && right == 0.0 && bottom == 0.0;
	}

	bool IsRectEmpty() const
	{
		return left == right || top == bottom;
	}

	bool IsValid() const
	{
		return left < right && top < bottom;
	}

	bool PtInRect(double x, double y) const
	{
		return left <= x && right >= x && top <= y && bottom >= y;
	}

	bool PtInRect(const CMFCPoint& pt) const
	{
		return PtInRect (pt.x, pt.y);
	}

	bool RtInRect(double l, double t, double r, double b) const
	{
		return left <= l && right >= r && top <= t && bottom >= b;
	}

	bool RtInRect(const CMFCRect& rt) const
	{
		return RtInRect(rt.left, rt.top, rt.right, rt.bottom);
	}

	void Normalize()
	{
		if (right < left)
		{
			SwapLeftRight();
		}

		if (bottom < top)
		{
			SwapTopBottom();
		}
	}

	CMFCRect NormalizedRect () const
	{
		CMFCRect rect(*this);
		rect.Normalize ();
		return rect;
	}

	double Width() const
	{
		return right - left;
	}

	void SetWidth(double w)
	{
		right = left + w;
	}

	double Height() const
	{
		return bottom - top;
	}

	void SetHeight(double h)
	{
		bottom = top + h;
	}

	void OffsetRect(double x, double y)
	{
		left   += x;
		right  += x;
		top    += y;
		bottom += y;
	}

	void OffsetRect(const CMFCPoint& pt)
	{
		OffsetRect (pt.x, pt.y);
	}

	void OffsetRect(const CMFCSize& sz)
	{
		OffsetRect (sz.cx, sz.cy);
	}

	void SetPoint(double x, double y)
	{
		OffsetRect(x - left, y - top);
	}

	void SetPoint(const CMFCPoint& pt)
	{
		SetPoint (pt.x, pt.y);
	}

	void SetSize(double w, double h)
	{
		right  = left + w;
		bottom = top  + h;
	}

	void SetSize(const CMFCSize& sz)
	{
		SetSize (sz.cx, sz.cy);
	}

	CMFCSize Size() const
	{
		return CMFCSize(Width(), Height());
	}

	void SetRect(double l, double t, double r, double b)
	{
		left   = l;
		top    = t;
		right  = r;
		bottom = b;
	}

	void SetRect(const CMFCPoint& ptLT, const CMFCPoint& ptRB)
	{
		SetRect (ptLT.x, ptLT.y, ptRB.x, ptRB.y);
	}

	void SetRect(const CMFCPoint& pt, const CMFCSize& sz)
	{
		SetRect(pt.x, pt.y, pt.x + sz.cx, pt.y + sz.cy);
	}

	void SetRect(const CMFCRect& rt)
	{
		SetRect(rt.left, rt.top, rt.right, rt.bottom);
	}

	CMFCPoint CenterPoint() const
	{
		return CMFCPoint((left + right) / 2.0, (top + bottom) / 2.0);
	}

	double Length() const
	{
		CMFCSize sz(Size());
		return 2.0 * ((sz.cx < 0.0 ? -sz.cx : sz.cx) + (sz.cy < 0.0 ? -sz.cy : sz.cy));
	}

	double Area() const
	{
		double a = Width() * Height();
		if (a < 0.0)
		{
			a = -a;
		}

		return a;
	}

	BOOL IntersectRect(const CMFCRect& rt)
	{
		*this &= rt;
		return !IsRectEmpty();
	}

	BOOL IntersectRect(const CMFCRect& rt1, const CMFCRect& rt2)
	{
		*this = rt1 & rt2;
		return !IsRectEmpty();
	}

	void UnionRect(const CMFCRect& rt)
	{
		*this |= rt;
	}

	void UnionRect(const CMFCRect& rt1, const CMFCRect& rt2)
	{
		*this = rt1 | rt2;
	}

	CMFCPoint TopLeft() const
	{
		return CMFCPoint(left, top);
	}

	CMFCPoint TopCenter() const
	{
		return CMFCPoint((left + right) / 2.0, top);
	}

	CMFCPoint TopRight() const
	{
		return CMFCPoint(right, top);
	}

	CMFCPoint CenterRight() const
	{
		return CMFCPoint(right, (top + bottom) / 2.0);
	}

	CMFCPoint BottomRight() const
	{
		return CMFCPoint(right, bottom);
	}

	CMFCPoint BottomCenter() const
	{
		return CMFCPoint((left + right) / 2.0, bottom);
	}

	CMFCPoint BottomLeft() const
	{
		return CMFCPoint(left, bottom);
	}

	CMFCPoint CenterLeft() const
	{
		return CMFCPoint(left, (top + bottom) / 2.0);
	}

	CMFCPoint RectPoint(AFX_RECT_POINT point) const
	{
		switch (point)
		{
		case AFX_RECT_POINT_TOP_LEFT:
			return TopLeft();
		case AFX_RECT_POINT_TOP_CENTER:
			return TopCenter();
		case AFX_RECT_POINT_TOP_RIGHT:
			return TopRight();
		case AFX_RECT_POINT_CENTER_RIGHT:
			return CenterRight();
		case AFX_RECT_POINT_BOTTOM_RIGHT:
			return BottomRight();
		case AFX_RECT_POINT_BOTTOM_CENTER:
			return BottomCenter();
		case AFX_RECT_POINT_BOTTOM_LEFT:
			return BottomLeft();
		case AFX_RECT_POINT_CENTER_LEFT:
			return CenterLeft();
		case AFX_RECT_POINT_CENTER:
			return CenterPoint();
		}

		return CMFCPoint();
	}

	void InflateRect(double l, double t, double r, double b)
	{
		left   -= l;
		top    -= t;
		right  += r;
		bottom += b;
	}

	void InflateRect(double x, double y)
	{
		InflateRect (x, y, x, y);
	}

	void InflateRect(const CMFCPoint& pt)
	{
		InflateRect (pt.x, pt.y, pt.x, pt.y);
	}

	void InflateRect(const CMFCSize& sz)
	{
		InflateRect (sz.cx, sz.cy, sz.cx, sz.cy);
	}

	void InflateRect(const CMFCRect& rt)
	{
		InflateRect (rt.left, rt.top, rt.right, rt.bottom);
	}

	void DeflateRect(double l, double t, double r, double b)
	{
		left   += l;
		top    += t;
		right  -= r;
		bottom -= b;
	}

	void DeflateRect(double x, double y)
	{
		DeflateRect (x, y, x, y);
	}

	void DeflateRect(const CMFCPoint& pt)
	{
		DeflateRect (pt.x, pt.y, pt.x, pt.y);
	}

	void DeflateRect(const CMFCSize& sz)
	{
		DeflateRect (sz.cx, sz.cy, sz.cx, sz.cy);
	}

	void DeflateRect(const CMFCRect& rt)
	{
		DeflateRect (rt.left, rt.top, rt.right, rt.bottom);
	}

	void SwapLeftRight()
	{
		double tmp = left;
		left = right;
		right = tmp;
	}

	void SwapTopBottom()
	{
		double tmp = top;
		top = bottom;
		bottom = tmp;
	}

	void Swap()
	{
		SwapLeftRight ();
		SwapTopBottom ();
	}

	void SetRectEmpty()
	{
		left = right = top = bottom = 0.;
	}

	void Scale(const CMFCSize& szRatio, AFX_RECT_POINT point = AFX_RECT_POINT_NULL)
	{
		Scale(szRatio.cx, szRatio.cy, RectPoint(point));
	}

	void Scale(const CMFCSize& szRatio, const CMFCPoint& ptOffset)
	{
		Scale(szRatio.cx, szRatio.cy, ptOffset);
	}

	void Scale(double dblRatio, const CMFCPoint& ptOffset = CMFCPoint())
	{
		Scale(dblRatio, dblRatio, ptOffset);
	}

	void Scale(double dblRatioX, double dblRatioY, const CMFCPoint& ptOffset = CMFCPoint())
	{
		CMFCSize size(Size());

		left = ptOffset.x + (left - ptOffset.x) * dblRatioX;
		top  = ptOffset.y + (top - ptOffset.y) * dblRatioY;
		SetSize (size.cx * dblRatioX, size.cy * dblRatioY);
	}

// public operators
public:
	const CMFCRect& operator = (const CMFCRect& rt)
	{
		left   = rt.left;
		top    = rt.top;
		right  = rt.right;
		bottom = rt.bottom;
		return *this;
	}

	bool operator == (const CMFCRect& rt) const
	{
		return left == rt.left && top == rt.top && right == rt.right && bottom == rt.bottom;
	}

	bool operator != (const CMFCRect& rt) const
	{
		return !(*this == rt);
	}

	const CMFCRect& operator &= (const CMFCRect& rt)
	{
		*this = *this & rt;
		return *this;
	}

	const CMFCRect& operator |= (const CMFCRect& rt)
	{
		*this = *this | rt;
		return *this;
	}

	const CMFCRect& operator += (const CMFCPoint& pt)
	{
		OffsetRect (pt.x, pt.y);
		return *this;
	}

	const CMFCRect& operator -= (const CMFCPoint& pt)
	{
		OffsetRect (-pt.x, -pt.y);
		return *this;
	}

	const CMFCRect& operator += (const CMFCSize& sz)
	{
		SetSize (Width() + sz.cx, Height() + sz.cy);
		return *this;
	}

	const CMFCRect& operator -= (const CMFCSize& sz)
	{
		SetSize (Width() - sz.cx, Height() - sz.cy);
		return *this;
	}

	CMFCRect operator & (const CMFCRect& rt) const
	{
		CMFCRect tmp;
		tmp.left   = max(left  , rt.left  );
		tmp.right  = min(right , rt.right );
		tmp.top    = max(top   , rt.top   );
		tmp.bottom = min(bottom, rt.bottom);

		if (tmp.left >= tmp.right || tmp.top >= tmp.bottom)
		{
			tmp.SetRectEmpty();
		}

		return tmp;
	}

	CMFCRect operator | (const CMFCRect& rt) const
	{
		if (IsValid())
		{
			if (rt.IsValid())
			{
				CMFCRect tmp;
				tmp.left   = min(left  , rt.left  );
				tmp.right  = max(right , rt.right );
				tmp.top    = min(top   , rt.top   );
				tmp.bottom = max(bottom, rt.bottom);
				return tmp;
			}
			else
			{
				return *this;
			}
		}
		else
		{
			CMFCRect tmp(rt);
			return tmp;
		}
	}

	CMFCRect operator + (const CMFCPoint& pt) const
	{
		CMFCRect tmp;
		tmp.left   = left   + pt.x;
		tmp.right  = right  + pt.x;
		tmp.top    = top    + pt.y;
		tmp.bottom = bottom + pt.y;
		return tmp;
	}

	CMFCRect operator - (const CMFCPoint& pt) const
	{
		CMFCRect tmp;
		tmp.left   = left   - pt.x;
		tmp.right  = right  - pt.x;
		tmp.top    = top    - pt.y;
		tmp.bottom = bottom - pt.y;
		return tmp;
	}

	operator CRect() const
	{
		return CRect((long)left, (long)top, (long)right, (long)bottom);
	}

public:
	double	left;
	double	right;
	double	top;
	double	bottom;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCRoundedRect

class AFX_EXT_CLASS AFX_NOVTABLE CMFCRoundedRect
{
// constructors & destructors
public:
	CMFCRoundedRect()
		: radiusX(0)
		, radiusY(0)
	{
	}

	CMFCRoundedRect(const CMFCRect& rectSrc, double radiusXSrc, double radiusYSrc)
		: rect   (rectSrc)
		, radiusX(radiusXSrc)
		, radiusY(radiusYSrc)
	{
	}

	CMFCRoundedRect(double l, double t, double r, double b, double radiusXSrc, double radiusYSrc)
		: rect   (l, t, r, b)
		, radiusX(radiusXSrc)
		, radiusY(radiusYSrc)
	{
	}

public:
	BOOL IsEmpty() const
	{
		return rect.IsRectEmpty() || radiusX == 0. || radiusY == 0.;
	}

	void Scale(const CMFCSize& szRatio, CMFCRect::AFX_RECT_POINT point = CMFCRect::AFX_RECT_POINT_NULL)
	{
		Scale(szRatio.cx, szRatio.cy, rect.RectPoint(point));
	}

	void Scale(const CMFCSize& szRatio, const CMFCPoint& ptOffset)
	{
		Scale(szRatio.cx, szRatio.cy, ptOffset);
	}

	void Scale(double dblRatioX, double dblRatioY, const CMFCPoint& ptOffset = CMFCPoint())
	{
		rect.Scale(dblRatioX, dblRatioY, ptOffset);
		radiusX *= dblRatioX;
		radiusY *= dblRatioY;
	}

public:
	CMFCRect	rect;
	double		radiusX;
	double		radiusY;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCEllipse

class AFX_EXT_CLASS AFX_NOVTABLE CMFCEllipse
{
// constructors & destructors
public:
	CMFCEllipse()
		: radiusX(0)
		, radiusY(0)
	{
	}

	CMFCEllipse(const CMFCPoint& ptSrc, double radiusXSrc, double radiusYSrc)
		: point  (ptSrc)
		, radiusX(radiusXSrc)
		, radiusY(radiusYSrc)
	{
	}

	CMFCEllipse(const CMFCPoint& ptSrc, const CMFCSize& szSrc)
		: point  (ptSrc)
		, radiusX(szSrc.cx * .5)
		, radiusY(szSrc.cy * .5)
	{
	}

	CMFCEllipse(const CMFCRect& rect)
		: point  (rect.CenterPoint())
		, radiusX(rect.Width() * .5)
		, radiusY(rect.Height() * .5)
	{
	}

public:
	BOOL IsNull() const
	{
		return radiusX <= 0. || radiusY <= 0.;
	}

	void Scale(const CMFCSize& szRatio, CMFCRect::AFX_RECT_POINT pointIn = CMFCRect::AFX_RECT_POINT_NULL)
	{
		Scale(szRatio.cx, szRatio.cy, ((CMFCRect)*this).RectPoint(pointIn));
	}

	void Scale(const CMFCSize& szRatio, const CMFCPoint& ptOffset)
	{
		Scale(szRatio.cx, szRatio.cy, ptOffset);
	}

	void Scale(double dblRatioX, double dblRatioY, const CMFCPoint& ptOffset = CMFCPoint())
	{
		point.Scale(dblRatioX, dblRatioY, 1.0, ptOffset);
		radiusX *= dblRatioX;
		radiusY *= dblRatioY;
	}

	operator CMFCRect() const { return CMFCRect(point.x - radiusX, point.y - radiusY, point.x + radiusX, point.y + radiusY); }

	// semimajor axis
	double A() const;
	
	// semiminor axis
	double B() const;
	
	// eccentricity (0 <= e < 1) 1 - error
	double E() const;

    // focal distance
    double C() const;

    // focal parameter
	double P() const;
	double Length() const;
	double Area() const;
	double GetRadius(double dblAngle) const;

	// get point of the ellipse. angle in rad
	CMFCPoint GetPoint(double dblAngle, BOOL bInvertY = TRUE) const;

public:
	CMFCPoint	point;
	double		radiusX;
	double		radiusY;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCPointsArray

class AFX_EXT_CLASS CMFCPointsArray : public CArray<CMFCPoint, const CMFCPoint&>
{
public:
	CMFCPointsArray() {}
	CMFCPointsArray(int nNewSize, int nGrowBy = -1)
	{
		SetSize(nNewSize, nGrowBy);
	}

	~CMFCPointsArray() {}

	CMFCRect GetBoundsRect() const;
	CMFCPoint GetBoundsCenter() const
	{
		return GetBoundsRect ().CenterPoint ();
	}

	void StoreBoundsRect(const CMFCRect& rect) {m_rectBounds = rect;}

	void Multiply(double value)
	{
		Multiply(value, value, value);
	}

	void Multiply(double valueX, double valueY, double valueZ = 1.0)
	{
		CMFCPoint* pPoints = GetData ();
		for(int i = 0; i < GetSize(); i++)
		{
			CMFCPoint& xpt = (*pPoints++);
			xpt.x *= valueX;
			xpt.y *= valueY;
			xpt.z *= valueZ;
		}
	}

	void Offset(const CMFCPoint& pt)
	{
		Offset(pt.x, pt.y, pt.z);
	}

	void Offset(double valueX, double valueY, double valueZ = 0.0)
	{
		CMFCPoint* pPoints = GetData ();
		for(int i = 0; i < GetSize(); i++)
		{
			CMFCPoint& xpt = (*pPoints++);
			xpt.x += valueX;
			xpt.y += valueY;
			xpt.z += valueZ;
		}
	}

	void Scale(const CMFCSize& szRatio, CMFCRect::AFX_RECT_POINT point = CMFCRect::AFX_RECT_POINT_CENTER)
	{
		Scale(GetBoundsRect ().RectPoint (point), szRatio.cx, szRatio.cy);
	}

	void Scale(const CMFCSize& szRatio, const CMFCPoint& ptOffset = CMFCPoint())
	{
		Scale(ptOffset, szRatio.cx, szRatio.cy);
	}

	void Scale(double value, CMFCRect::AFX_RECT_POINT point = CMFCRect::AFX_RECT_POINT_CENTER)
	{
		Scale(GetBoundsRect ().RectPoint (point), value, value);
	}

	void Scale(double valueX, double valueY, CMFCRect::AFX_RECT_POINT point = CMFCRect::AFX_RECT_POINT_CENTER)
	{
		Scale(GetBoundsRect ().RectPoint (point), valueX, valueY);
	}

	void Scale(const CMFCPoint& ptOffset, double dblRatioX, double dblRatioY, double dblRatioZ = 1.0);

	void Rotate(double angle, CMFCRect::AFX_RECT_POINT point = CMFCRect::AFX_RECT_POINT_CENTER)
	{
		Rotate(GetBoundsRect ().RectPoint (point), angle);
	}

	void Rotate(const CMFCPoint& ptOffset, double angle);

	const CMFCPointsArray& operator +=(const CMFCPoint& pt)
	{
		Offset(pt.x, pt.y, pt.z);
		return *this;
	}

	const CMFCPointsArray& operator -=(const CMFCPoint& pt)
	{
		Offset(-pt.x, -pt.y, -pt.z);
		return *this;
	}

	const CMFCPointsArray& operator *=(double value)
	{
		Multiply(value, value, value);
		return *this;
	}

	const CMFCPointsArray& operator /=(double value)
	{
		_ASSERTE(value != 0.0);
		value = 1.0 / value;
		Multiply(value, value, value);
		return *this;
	}

	const CMFCPointsArray& operator=(const CMFCPointsArray& src)
	{
		Copy(src);
		return *this;
	}
protected:
	CMFCRect m_rectBounds;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCGraphicsResource

class CMFCGraphicsManager;

class AFX_EXT_CLASS CMFCGraphicsResource : public CObject
{
	DECLARE_DYNAMIC(CMFCGraphicsResource)

protected:
	CMFCGraphicsResource()
	{
		m_lpHandle1 = m_lpHandle2 = m_lpHandle = NULL;
		m_pGM = NULL;
		m_bIsTemporary = FALSE;
	}

	virtual ~CMFCGraphicsResource()
	{
	}

public:
	virtual BOOL IsNull() const
	{
		return m_lpHandle == NULL;
	};

	LPVOID GetHandle() const
	{
		return m_lpHandle;
	}

	LPVOID GetHandle1() const
	{
		return m_lpHandle1;
	}

	LPVOID GetHandle2() const
	{
		return m_lpHandle2;
	}

	CMFCGraphicsManager* GetGraphicsManager() const
	{
		return m_pGM;
	}

	void Set(CMFCGraphicsManager* pGM, LPVOID lpHandle, LPVOID lpHandle1 = NULL, LPVOID lpHandle2 = NULL);

	virtual void Destroy(BOOL bDetachFromGM = TRUE) = 0;

	LPVOID Detach()
	{
		LPVOID lpHandle = m_lpHandle;
		m_lpHandle = NULL;
		return lpHandle;
	}

	void SetTemporary()
	{
		m_bIsTemporary = TRUE;
	}

	BOOL IsTemporary() const
	{
		return m_bIsTemporary;
	}

protected:
	LPVOID					m_lpHandle;
	CMFCGraphicsManager*	m_pGM;
	LPVOID					m_lpHandle1;
	LPVOID					m_lpHandle2;
	BOOL					m_bIsTemporary;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCGeometry

class AFX_EXT_CLASS CMFCGeometry : public CMFCGraphicsResource
{
	DECLARE_DYNAMIC(CMFCGeometry)

	enum AFX_FILL_MODE
	{
		AFX_FILL_MODE_FIRST     = 0,
		AFX_FILL_MODE_ALTERNATE = AFX_FILL_MODE_FIRST,
		AFX_FILL_MODE_WINDING   = 1,
		AFX_FILL_MODE_LAST      = AFX_FILL_MODE_WINDING
	};

public:
	CMFCGeometry()
		: m_FillMode(AFX_FILL_MODE_WINDING)
	{
	}

	virtual ~CMFCGeometry()
	{
		Destroy();
	}

	virtual void Destroy(BOOL bDetachFromGM = TRUE);

	AFX_FILL_MODE GetFillMode() const
	{
		return m_FillMode;
	}
	void SetFillMode(AFX_FILL_MODE fillMode)
	{
		m_FillMode = fillMode;
	}

	virtual CMFCRect GetBoundsRect();

	void Scale(const CMFCSize& szRatio, CMFCRect::AFX_RECT_POINT point = CMFCRect::AFX_RECT_POINT_NULL)
	{
		Scale(szRatio.cx, szRatio.cy, GetBoundsRect().RectPoint(point));
	}

	void Scale(const CMFCSize& szRatio, const CMFCPoint& ptOffset)
	{
		Scale(szRatio.cx, szRatio.cy, ptOffset);
	}

	virtual void Scale(double dblRatioX, double dblRatioY, const CMFCPoint& ptOffset = CMFCPoint());

protected:
	AFX_FILL_MODE m_FillMode;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCRectangleGeometry

class AFX_EXT_CLASS CMFCRectangleGeometry : public CMFCGeometry
{
	DECLARE_DYNAMIC(CMFCRectangleGeometry)

public:
	CMFCRectangleGeometry(const CMFCRect& rect)
	{
		m_rect = rect;
	}

	const CMFCRect& GetRectangle() const
	{
		return m_rect;
	}

	virtual BOOL IsNull() const
	{
		return m_rect.IsRectNull() && m_lpHandle == NULL;
	}

	virtual void Scale(double dblRatioX, double dblRatioY, const CMFCPoint& ptOffset = CMFCPoint());

protected:
	CMFCRect	m_rect;
};

////////////////////////////////////////////////////////////////////////////////////
//  CMFCRoundedRectangleGeometry

class AFX_EXT_CLASS CMFCRoundedRectangleGeometry : public CMFCGeometry
{
	DECLARE_DYNAMIC(CMFCRoundedRectangleGeometry)

public:
	CMFCRoundedRectangleGeometry(const CMFCRoundedRect& rectRounded) :
		m_rectRounded(rectRounded)
	{
		m_rectRounded = rectRounded;
	}

	const CMFCRoundedRect& GetRoundedRect() const
	{
		return m_rectRounded;
	}

	virtual BOOL IsNull() const
	{
		return m_rectRounded.IsEmpty();
	}

	virtual void Scale(double dblRatioX, double dblRatioY, const CMFCPoint& ptOffset = CMFCPoint());

protected:
	CMFCRoundedRect	m_rectRounded;
};

////////////////////////////////////////////////////////////////////////////////////
//  CMFCEllipseGeometry

class AFX_EXT_CLASS CMFCEllipseGeometry : public CMFCGeometry
{
	DECLARE_DYNAMIC(CMFCEllipseGeometry)

public:
	CMFCEllipseGeometry(const CMFCEllipse& ellipse)
	{
		m_Ellipse = ellipse;
	}

	CMFCEllipseGeometry(const CMFCRect& rect) :
		m_Ellipse(rect.CenterPoint(), rect.Width() / 2., rect.Height() / 2.)
	{
	}

	const CMFCEllipse& GetEllipse() const
	{
		return m_Ellipse;
	}

	virtual BOOL IsNull() const
	{
		return m_Ellipse.IsNull() && m_lpHandle == NULL;
	}

	virtual void Scale(double dblRatioX, double dblRatioY, const CMFCPoint& ptOffset = CMFCPoint());

protected:
	CMFCEllipse	m_Ellipse;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCPolygonGeometry

class AFX_EXT_CLASS CMFCPolygonGeometry : public CMFCGeometry
{
	DECLARE_DYNAMIC(CMFCPolygonGeometry)

public:
	enum AFX_CURVE_TYPE
	{
		AFX_CURVE_TYPE_FIRST  = 0,
		AFX_CURVE_TYPE_LINE   = AFX_CURVE_TYPE_FIRST,
		AFX_CURVE_TYPE_BEZIER = 1,
		AFX_CURVE_TYPE_LAST   = AFX_CURVE_TYPE_BEZIER
	};

	CMFCPolygonGeometry()
	{
		m_bIsClosed = TRUE;
		m_curveType = AFX_CURVE_TYPE_LINE;
	}

	CMFCPolygonGeometry(const CMFCPointsArray& arPoints, BOOL bIsClosed = TRUE,
		AFX_CURVE_TYPE curveType = AFX_CURVE_TYPE_LINE)
	{
		SetPoints(arPoints, bIsClosed, curveType);
	}

	void SetPoints(const CMFCPointsArray& arPoints, BOOL bIsClosed = TRUE, 
		AFX_CURVE_TYPE curveType = AFX_CURVE_TYPE_LINE)
	{
		Clear();

		m_arPoints.Copy(arPoints);

		m_bIsClosed = bIsClosed;
		m_curveType = curveType;
	}

	const CMFCPointsArray& GetPoints() const
	{
		return m_arPoints;
	}

	void Clear();

	virtual BOOL IsNull() const
	{
		return m_arPoints.GetSize() == 0 && m_lpHandle == NULL;
	}

	BOOL IsClosed() const
	{
		return m_bIsClosed;
	}

	AFX_CURVE_TYPE GetCurveType() const
	{
		return m_curveType;
	}

	virtual void Scale(double dblRatioX, double dblRatioY, const CMFCPoint& ptOffset = CMFCPoint());
	
protected:
	CMFCPointsArray	m_arPoints;
	BOOL				m_bIsClosed;
	AFX_CURVE_TYPE		m_curveType;
};

class AFX_EXT_CLASS CMFCSplineGeometry : public CMFCGeometry
{
	DECLARE_DYNAMIC(CMFCSplineGeometry)

	enum AFX_SPLINE_TYPE
	{
		AFX_SPLINE_TYPE_FIRST   = 0,
		AFX_SPLINE_TYPE_KB      = AFX_SPLINE_TYPE_FIRST,	// Kochanek-Bartels spline
		AFX_SPLINE_TYPE_HERMITE = 1,						// Hermite spline
		AFX_SPLINE_TYPE_LAST    = AFX_SPLINE_TYPE_HERMITE
	};

public:
	CMFCSplineGeometry()
	{
		m_bIsClosed = TRUE;
	}

	CMFCSplineGeometry(const CMFCPointsArray& arPoints, AFX_SPLINE_TYPE type, 
		BOOL bIsClosed = TRUE, double tension = 0.0, double bias = 0.0, double continuity = 0.0)
	{
		SetPoints(arPoints, type, bIsClosed, tension, bias, continuity);
	}

	void SetPoints(const CMFCPointsArray& arPoints, AFX_SPLINE_TYPE type, 
		BOOL bIsClosed = TRUE, double tension = 0.0, double bias = 0.0, double continuity = 0.0);

	void SetPoints(const CMFCPointsArray& arPoints, BOOL bIsClosed = TRUE)
	{
		m_arPoints.RemoveAll();
		m_arPoints.Append(arPoints);
		m_bIsClosed = bIsClosed;
	}

	const CMFCPointsArray& GetPoints() const
	{
		return m_arPoints;
	}

	void Clear();

	virtual BOOL IsNull() const
	{
		return m_arPoints.GetSize() == 0 && m_lpHandle == NULL;
	}

	BOOL IsClosed() const
	{
		return m_bIsClosed;
	}

	virtual void Scale(double dblRatioX, double dblRatioY, const CMFCPoint& ptOffset = CMFCPoint());
	
protected:
	CMFCPointsArray	m_arPoints;
	BOOL				m_bIsClosed;
};

class AFX_EXT_CLASS CMFCLineSegment : public CObject
{
	DECLARE_DYNAMIC(CMFCLineSegment)

public:
	CMFCLineSegment(const CMFCPoint& point)
	{
		m_Point = point;
	}

	CMFCPoint	m_Point;
};

class AFX_EXT_CLASS CMFCBezierSegment : public CObject
{
	DECLARE_DYNAMIC(CMFCBezierSegment)

public:
	CMFCBezierSegment(const CMFCPoint& point1, const CMFCPoint& point2, const CMFCPoint& point3)
	{
		m_Point1 = point1;
		m_Point2 = point2;
		m_Point3 = point3;
	}

	CMFCPoint	m_Point1;
	CMFCPoint	m_Point2;
	CMFCPoint	m_Point3;
};

class AFX_EXT_CLASS CMFCArcSegment : public CObject
{
	DECLARE_DYNAMIC(CMFCArcSegment)

public:
	CMFCArcSegment(const CMFCPoint& point, const CMFCSize& radius, BOOL bIsClockwise, BOOL bIsLargeArc, double dblRotationAngle)
	{
		m_Point = point;
		m_Radius = radius;
		m_bIsClockwise = bIsClockwise;
		m_bIsLargeArc = bIsLargeArc;
		m_dblRotationAngle = dblRotationAngle;
	}

	CMFCPoint GetArcCenter(const CMFCPoint& ptFrom, BOOL& bIsLargeArc, double& rX, double& rY) const;

	CMFCPoint	m_Point;
	CMFCSize	m_Radius;
	BOOL		m_bIsClockwise;
	BOOL		m_bIsLargeArc;
	double		m_dblRotationAngle;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCComplexGeometry

class AFX_EXT_CLASS CMFCComplexGeometry : public CMFCGeometry
{
	DECLARE_DYNAMIC(CMFCComplexGeometry)

public:
	CMFCComplexGeometry(const CMFCPoint& ptStart = CMFCPoint(-1., -1.), BOOL bIsClosed = TRUE)
	{
		m_ptStart = ptStart;
		m_bIsClosed = bIsClosed;
	}

	virtual ~CMFCComplexGeometry()
	{
		Clear();
	}

	void SetClosed(BOOL bIsClosed = TRUE)
	{
		m_bIsClosed = bIsClosed;
	}

	BOOL IsClosed() const
	{
		return m_bIsClosed;
	}

	void SetStart(const CMFCPoint& ptStart)
	{
		m_ptStart = ptStart;
	}

	void AddLine(const CMFCPoint& pt);
	void AddBezier(const CMFCPoint& pt1, const CMFCPoint& pt2, const CMFCPoint& pt3);
	void AddArc(const CMFCPoint& pt, const CMFCSize szRadius, 
		BOOL bIsClockwise = TRUE, BOOL bIsLargeArc = FALSE, double dblRotationAngle = 0.);
	void AddPoints(const CMFCPointsArray& arPoints, CMFCPolygonGeometry::AFX_CURVE_TYPE curveType);

	void Clear();

	const CMFCPoint& GetStartPoint() const
	{
		return m_ptStart;
	}

	const CObArray& GetSegments() const
	{
		return m_arSegments;
	}

	virtual BOOL IsEmpty() const
	{
		return m_arSegments.GetSize() == 0;
	}

	virtual BOOL IsNull() const
	{
		return m_arSegments.GetSize() == 0 && m_lpHandle == NULL;
	}

protected:
	CMFCPoint	m_ptStart;
	CObArray	m_arSegments;
	BOOL		m_bIsClosed;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCColor

class AFX_EXT_CLASS CMFCColor
{
public:
    enum AFX_COLOR
    {
        AliceBlue = 0xF0F8FF,
        AntiqueWhite = 0xFAEBD7,
        Aqua = 0x00FEFE,
        Aquamarine = 0x7FFFD4,
        Azure = 0xF0FFFF,
        Beige = 0xF5F5DC,
        Bisque = 0xFFE4C4,
        Black = 0x000000,
        BlanchedAlmond = 0xFFEBCD,
        Blue = 0x0000FF,
        BlueViolet = 0x8A2BE2,
        Brown = 0xA52A2A,
        BurlyWood = 0xDEB887,
        CadetBlue = 0x5F9EA0,
        Chartreuse = 0x7FFF00,
        Chocolate = 0xD2691E,
        Coral = 0xFF7F50,
        CornflowerBlue = 0x6495ED,
        Cornsilk = 0xFFF8DC,
        Crimson = 0xDC143C,
        Cyan = 0x00FFFF,
        DarkBlue = 0x00008B,
        DarkCyan = 0x008B8B,
        DarkGoldenrod = 0xB8860B,
        DarkGray = 0xA9A9A9,
        DarkGreen = 0x006400,
        DarkKhaki = 0xBDB76B,
        DarkMagenta = 0x8B008B,
        DarkOliveGreen = 0x556B2F,
        DarkOrange = 0xFF8C00,
        DarkOrchid = 0x9932CC,
        DarkRed = 0x8B0000,
        DarkSalmon = 0xE9967A,
        DarkSeaGreen = 0x8FBC8F,
        DarkSlateBlue = 0x483D8B,
        DarkSlateGray = 0x2F4F4F,
        DarkTurquoise = 0x00CED1,
        DarkViolet = 0x9400D3,
        DeepPink = 0xFF1493,
        DeepSkyBlue = 0x00BFFF,
        DimGray = 0x696969,
        DodgerBlue = 0x1E90FF,
        Firebrick = 0xB22222,
        FloralWhite = 0xFFFAF0,
        ForestGreen = 0x228B22,
        Fuchsia = 0xFE00FE,
        Gainsboro = 0xDCDCDC,
        GhostWhite = 0xF8F8FF,
        Gold = 0xFFD700,
        Goldenrod = 0xDAA520,
        Gray = 0x808080,
        Green = 0x008000,
        GreenYellow = 0xADFF2F,
        Honeydew = 0xF0FFF0,
        HotPink = 0xFF69B4,
        IndianRed = 0xCD5C5C,
        Indigo = 0x4B0082,
        Ivory = 0xFFFFF0,
        Khaki = 0xF0E68C,
        Lavender = 0xE6E6FA,
        LavenderBlush = 0xFFF0F5,
        LawnGreen = 0x7CFC00,
        LemonChiffon = 0xFFFACD,
        LightBlue = 0xADD8E6,
        LightCoral = 0xF08080,
        LightCyan = 0xE0FFFF,
        LightGoldenrodYellow = 0xFAFAD2,
        LightGreen = 0x90EE90,
        LightGray = 0xD3D3D3,
        LightPink = 0xFFB6C1,
        LightSalmon = 0xFFA07A,
        LightSeaGreen = 0x20B2AA,
        LightSkyBlue = 0x87CEFA,
        LightSlateGray = 0x778899,
        LightSteelBlue = 0xB0C4DE,
        LightYellow = 0xFFFFE0,
        Lime = 0x00FF00,
        LimeGreen = 0x32CD32,
        Linen = 0xFAF0E6,
        Magenta = 0xFF00FF,
        Maroon = 0x800000,
        MediumAquamarine = 0x66CDAA,
        MediumBlue = 0x0000CD,
        MediumOrchid = 0xBA55D3,
        MediumPurple = 0x9370DB,
        MediumSeaGreen = 0x3CB371,
        MediumSlateBlue = 0x7B68EE,
        MediumSpringGreen = 0x00FA9A,
        MediumTurquoise = 0x48D1CC,
        MediumVioletRed = 0xC71585,
        MidnightBlue = 0x191970,
        MintCream = 0xF5FFFA,
        MistyRose = 0xFFE4E1,
        Moccasin = 0xFFE4B5,
        NavajoWhite = 0xFFDEAD,
        Navy = 0x000080,
        OldLace = 0xFDF5E6,
        Olive = 0x808000,
        OliveDrab = 0x6B8E23,
        Orange = 0xFFA500,
        OrangeRed = 0xFF4500,
        Orchid = 0xDA70D6,
        PaleGoldenrod = 0xEEE8AA,
        PaleGreen = 0x98FB98,
        PaleTurquoise = 0xAFEEEE,
        PaleVioletRed = 0xDB7093,
        PapayaWhip = 0xFFEFD5,
        PeachPuff = 0xFFDAB9,
        Peru = 0xCD853F,
        Pink = 0xFFC0CB,
        Plum = 0xDDA0DD,
        PowderBlue = 0xB0E0E6,
        Purple = 0x800080,
        Red = 0xFF0000,
        RosyBrown = 0xBC8F8F,
        RoyalBlue = 0x4169E1,
        SaddleBrown = 0x8B4513,
        Salmon = 0xFA8072,
        SandyBrown = 0xF4A460,
        SeaGreen = 0x2E8B57,
        SeaShell = 0xFFF5EE,
        Sienna = 0xA0522D,
        Silver = 0xC0C0C0,
        SkyBlue = 0x87CEEB,
        SlateBlue = 0x6A5ACD,
        SlateGray = 0x708090,
        Snow = 0xFFFAFA,
        SpringGreen = 0x00FF7F,
        SteelBlue = 0x4682B4,
        Tan = 0xD2B48C,
        Teal = 0x008080,
        Thistle = 0xD8BFD8,
        Tomato = 0xFF6347,
        Turquoise = 0x40E0D0,
        Violet = 0xEE82EE,
        Wheat = 0xF5DEB3,
        White = 0xFFFFFF,
        WhiteSmoke = 0xF5F5F5,
        Yellow = 0xFFFF00,
        YellowGreen = 0x9ACD32,
    };

	CMFCColor()
	{
		r = g = b = 0.;
		a = 0.;
	}

	CMFCColor(double rSrc, double gSrc, double bSrc, double aSrc = 1.)
	{
		ASSERT(rSrc >= 0. && rSrc <= 1.);
		ASSERT(gSrc >= 0. && gSrc <= 1.);
		ASSERT(bSrc >= 0. && bSrc <= 1.);
		ASSERT(aSrc >= 0. && aSrc <= 1.);

		r = rSrc;
		g = gSrc;
		b = bSrc;
		a = aSrc;
	}

	CMFCColor(AFX_COLOR color, double aSrc = 1.)
	{
		ASSERT(aSrc >= 0. && aSrc <= 1.);

		r = GetBValue((COLORREF)color) / 255.0f;
		g = GetGValue((COLORREF)color) / 255.0f;
		b = GetRValue((COLORREF)color) / 255.0f;
		a = aSrc;
	}

	CMFCColor(COLORREF color, double aSrc = 1.)
	{
		SetRGB(color, aSrc);
	}

	BOOL operator == (const CMFCColor& rOther) const
	{
		return r == rOther.r && g == rOther.g && b == rOther.b && a == rOther.a;
	}
	
	BOOL operator != (const CMFCColor& rOther) const
	{
		return r != rOther.r || g != rOther.g || b != rOther.b || a != rOther.a;
	}

	BOOL operator > (const CMFCColor& rOther) const
	{
		return CompareWith(rOther) > 0;
	}

	BOOL operator >= (const CMFCColor& rOther) const
	{
		return CompareWith(rOther) >= 0;
	}

	BOOL operator < (const CMFCColor& rOther) const
	{
		return CompareWith(rOther) < 0;
	}
	
	BOOL operator <= (const CMFCColor& rOther) const
	{
		return CompareWith(rOther) <= 0;
	}

	operator COLORREF() const;

	BOOL IsNull() const
	{
		return r == 0. && g == 0. && b == 0. && a == 0.;
	}

	void SetRGB(COLORREF color, double aSrc = 1.)
	{
		ASSERT(aSrc >= 0. && aSrc <= 1.);

		r = GetRValue(color) / 255.0f;
		g = GetGValue(color) / 255.0f;
		b = GetBValue(color) / 255.0f;
		a = aSrc;
	}

	void MakeLighter(double dblRatio = .1);
	void MakeDarker(double dblRatio = .1);
	void MakePale(double dblLum = .97);

	BOOL IsDark() const;
	BOOL IsLight() const;
	BOOL IsPale() const;

	int CompareWith(const CMFCColor& rOther) const;

	CString ToString() const;

#ifndef _MFCCHART_STANDALONE
	static const CArray<COLORREF, COLORREF>& GetRGBArray();
	static BOOL CreatePalette(CPalette& palette);
#endif

	double	r;
	double	g;
	double	b;
	double	a;

protected:

#ifndef _MFCCHART_STANDALONE
	static void AddColorToArray(AFX_COLOR colorName, const CString& strColorLabel = _T(""));
#endif
	static CArray<COLORREF, COLORREF>	m_arColors;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCImage

class AFX_EXT_CLASS CMFCImage : public CMFCGraphicsResource
{
public:
	enum AFX_IMAGE_INTERPOLATION_MODE
	{
		AFX_IMAGE_INTERPOLATION_MODE_FIRST            = 0,
		AFX_IMAGE_INTERPOLATION_MODE_NEAREST_NEIGHBOR = AFX_IMAGE_INTERPOLATION_MODE_FIRST,
		AFX_IMAGE_INTERPOLATION_MODE_LINEAR           = 1,
		AFX_IMAGE_INTERPOLATION_MODE_LAST             = AFX_IMAGE_INTERPOLATION_MODE_LINEAR
	};

// Construction:
public:
	CMFCImage(UINT uiResID = 0, LPCTSTR lpszType = NULL);
	CMFCImage(const CString& strPath);
	CMFCImage(const CMFCImage& srcImage);
	CMFCImage(HICON hIcon, CSize sizeIcon = CSize(16, 16), BOOL bIsAlpha = FALSE);
	CMFCImage(HBITMAP hBmp, BOOL bIsIgnoreAlpha = FALSE);

	virtual ~CMFCImage()
	{
		Destroy();
	}

protected:
	void CommonInit();

// Attributes:
public:
	virtual BOOL IsEmpty() const
	{
		return m_uiResID == 0 && m_hIcon == NULL && m_hBitmap == NULL && m_strPath.IsEmpty();
	}

	UINT GetResourceID() const
	{
		return m_uiResID;
	}

	LPCTSTR GetResourceType() const
	{
		return m_szType;
	}

	LPCTSTR GetPath() const
	{
		return m_strPath;
	}

	CMFCSize GetSize(CMFCGraphicsManager* pGM = 0) const;
	void Resize(const CMFCSize& sizeDest);

	HICON GetIcon() const
	{
		return m_hIcon;
	}

	CSize GetIconSize() const
	{
		return m_sizeIcon;
	}

	BOOL IsAlphaIcon() const
	{
		return m_bIsAlphaIcon;
	}

	HBITMAP GetBitmap() const
	{
		return m_hBitmap;
	}

	BOOL IsIgnoreAlphaBitmap() const
	{
		return m_bIsIgnoreAlphaBitmap;
	}

	double GetLightRatio() const
	{
		return m_dblLightRatio;
	}

	void SetMap3DColorsInGDI(BOOL bSet = TRUE)
	{
		m_bMap3dColorsInGDI = bSet;
	}

	BOOL IsMap3dColorsInGDI() const
	{
		return m_bMap3dColorsInGDI;
	}

	const CMFCColor& GetColorTheme() const
	{	
		return m_clrTheme;
	}

	BOOL NeedToPrepare() const
	{
		return m_dblLightRatio != 1.0 || !m_clrTheme.IsNull();
	}

	const CMFCSize& GetDestSize() const
	{
		return m_sizeDest;
	}

// Operations:
public:
	BOOL CopyTo(CMFCImage& imageDest, const CMFCRect& rectSrc = CMFCRect()) const;
	virtual void Destroy(BOOL bDetachFromGM = TRUE);

	void CopyFrom(const CMFCImage& srcImage);
	BOOL CompareWith(const CMFCImage& image) const;

	void Load(UINT uiResID = 0, LPCTSTR lpszType = NULL);
	void Load(const CString& strPath);

	CMFCImage& operator = (const CMFCImage& image);
	bool operator == (const CMFCImage& src) const;

	HBITMAP ExportToBitmap();

	void Clear();

	void MakeLighter(double dblRatio);
	void MakeDarker(double dblRatio);
	void MakePale(double dblLum);
	void MakeNormal();

	void Colorize(const CMFCColor& clr);

protected:
	UINT		m_uiResID;
	LPCTSTR		m_szType;
	CString		m_strPath;
	HICON		m_hIcon;
	CSize		m_sizeIcon;
	BOOL		m_bIsAlphaIcon;
	HBITMAP		m_hBitmap;
	BOOL		m_bIsIgnoreAlphaBitmap;
	double		m_dblLightRatio;
	BOOL		m_bMap3dColorsInGDI;
	CMFCColor	m_clrTheme;
	CMFCSize	m_sizeDest;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCBrush

class AFX_EXT_CLASS CMFCBrush : public CMFCGraphicsResource
{
public:
	enum AFX_GRADIENT_TYPE
	{
		AFX_GRADIENT_TYPE_FIRST          = 0,
		AFX_NO_GRADIENT                  = AFX_GRADIENT_TYPE_FIRST,
		AFX_GRADIENT_HORIZONTAL          = 1,
		AFX_GRADIENT_VERTICAL            = 2,
		AFX_GRADIENT_DIAGONAL_LEFT       = 3,
		AFX_GRADIENT_DIAGONAL_RIGHT      = 4,
		AFX_GRADIENT_CENTER_HORIZONTAL   = 5,
		AFX_GRADIENT_CENTER_VERTICAL     = 6,
		AFX_GRADIENT_RADIAL_TOP          = 7,
		AFX_GRADIENT_RADIAL_CENTER       = 8,
		AFX_GRADIENT_RADIAL_BOTTOM       = 9,
		AFX_GRADIENT_RADIAL_LEFT         = 10,
		AFX_GRADIENT_RADIAL_RIGHT        = 11,
		AFX_GRADIENT_RADIAL_TOP_LEFT     = 12,
		AFX_GRADIENT_RADIAL_TOP_RIGHT    = 13,
		AFX_GRADIENT_RADIAL_BOTTOM_LEFT  = 14,
		AFX_GRADIENT_RADIAL_BOTTOM_RIGHT = 15,
		AFX_GRADIENT_BEVEL               = 16,
		AFX_GRADIENT_PIPE_VERTICAL       = 17,
		AFX_GRADIENT_PIPE_HORIZONTAL     = 18,
		AFX_GRADIENT_TYPE_LAST           = AFX_GRADIENT_PIPE_HORIZONTAL
	};

public:
	CMFCBrush();

	CMFCBrush(const CMFCColor& color, double opacity = 1.);
	CMFCBrush(const CMFCColor& color, const CMFCColor& colorGradient, 
		AFX_GRADIENT_TYPE gradientType, double opacity = 1.);
	CMFCBrush(const CMFCColor& color, AFX_GRADIENT_TYPE gradientType, double opacity = 1.);

	CMFCBrush(const CMFCImage& image, const CMFCColor& clrFillAlt, BOOL bIsWaterMarkImage);

	CMFCBrush(const CMFCBrush& brush);

	virtual ~CMFCBrush()
	{
		Destroy();
	}

	virtual void Destroy(BOOL bDetachFromGM = TRUE);

	CMFCBrush& operator = (const CMFCBrush& src)
	{
		CopyFrom(src);
		return *this;
	}

	CMFCBrush& operator = (const CMFCColor& color)
	{
		SetColor(color);
		return *this;
	}

	bool operator == (const CMFCBrush& src) const
	{
		return (CompareWith(src) == TRUE);
	}

public:
	const BOOL IsEmpty() const
	{
		return m_color.IsNull() && m_colorGradient.IsNull() && m_TextureImage.IsEmpty();
	}

	void Empty()
	{
		SetColor(CMFCColor());
		m_TextureImage = CMFCImage();
	}

	BOOL IsTransparent() const
	{
		return (m_opacity < 1.) || (m_color.a < 1.) || (m_gradientType != AFX_NO_GRADIENT && m_colorGradient.a < 1.);
	}

	const CMFCColor& GetColor() const
	{
		return m_color;
	}

	const CMFCColor& GetGradientColor() const
	{
		return m_colorGradient;
	}

	AFX_GRADIENT_TYPE GetGradientType() const
	{
		return m_gradientType;
	}

	CMFCImage& GetTextureImage()
	{
		return m_TextureImage;
	}
	const CMFCImage& GetTextureImage() const
	{
		return m_TextureImage;
	}

	BOOL HasTextureImage() const
	{
		return !m_TextureImage.IsEmpty();
	}

	BOOL IsWaterMarkImage() const
	{
		return m_bIsWaterMarkImage;
	}

	void SetOpacity(double opacity);
	double GetOpacity() const
	{
		return m_opacity;
	}

	int GetPenWidth() const
	{
		return m_nPenWidth;
	}

	int GetPenStyle() const
	{
		return m_nPenStyle;
	}

	int GetBevelSize() const
	{
		return m_nBevelSize;
	}

	void SetBevelSize(int nBevelSize)
	{
		m_nBevelSize = nBevelSize;
	}

	void SetColor(const CMFCColor& color, double opacity = 1.);
	void SetColors(const CMFCColor& color, const CMFCColor& colorGradient, 
		AFX_GRADIENT_TYPE gradientType, double opacity = 1.);

	void MakeLighter(double dblRatio = .1);
	void MakeDarker(double dblRatio = .1);
	void MakePale(double dblLum = .97);

	void SetTextureImage(const CMFCImage& image, const CMFCColor& clrFillAlt, BOOL bIsWaterMark = FALSE);
	void ClearTextureImage();

	void SetPenAttributes(int nWidth, int nStyle);

	CMFCToolBarImages& GetImage()
	{
		return m_Image;
	}

	void CopyFrom(const CMFCBrush& src);
	BOOL CompareWith(const CMFCBrush& src) const;

protected:
	void CommonInit();

	double				m_opacity;
	CMFCColor			m_color;
	CMFCColor			m_colorGradient;
	AFX_GRADIENT_TYPE	m_gradientType;
	int					m_nPenWidth;
	int					m_nPenStyle;
	int					m_nBevelSize;
	CMFCToolBarImages	m_Image;
	CMFCImage			m_TextureImage;
	BOOL				m_bIsWaterMarkImage;
};

class AFX_EXT_CLASS CMFCStrokeStyle : public CMFCGraphicsResource
{
public:
	enum AFX_CAP_STYLE
	{
		AFX_CAP_STYLE_FIRST    = 0,
		AFX_CAP_STYLE_FLAT     = AFX_CAP_STYLE_FIRST,
		AFX_CAP_STYLE_SQUARE   = 1,
		AFX_CAP_STYLE_ROUND    = 2,
		AFX_CAP_STYLE_TRIANGLE = 3,
		AFX_CAP_STYLE_LAST     = AFX_CAP_STYLE_TRIANGLE
	};

	enum AFX_LINE_JOIN
	{
		AFX_LINE_JOIN_FIRST          = 0,
		AFX_LINE_JOIN_MITER          = AFX_LINE_JOIN_FIRST,
		AFX_LINE_JOIN_BEVEL          = 1,
		AFX_LINE_JOIN_ROUND          = 2,
		AFX_LINE_JOIN_MITER_OR_BEVEL = 3,
		AFX_LINE_JOIN_LAST           = AFX_LINE_JOIN_MITER_OR_BEVEL
	};

	enum AFX_DASH_STYLE
	{
		AFX_DASH_STYLE_FIRST        = 0,
		AFX_DASH_STYLE_SOLID        = AFX_DASH_STYLE_FIRST,
		AFX_DASH_STYLE_DASH         = 1,
		AFX_DASH_STYLE_DOT          = 2,
		AFX_DASH_STYLE_DASH_DOT     = 3,
		AFX_DASH_STYLE_DASH_DOT_DOT = 4,
		AFX_DASH_STYLE_CUSTOM       = 5,
		AFX_DASH_STYLE_LAST         = AFX_DASH_STYLE_CUSTOM
	};

// Construction:
public:
	CMFCStrokeStyle(
		AFX_CAP_STYLE startCap = AFX_CAP_STYLE_FLAT,
		AFX_CAP_STYLE endCap = AFX_CAP_STYLE_FLAT,
		AFX_CAP_STYLE dashCap = AFX_CAP_STYLE_FLAT,
		AFX_LINE_JOIN lineJoin = AFX_LINE_JOIN_MITER,
		FLOAT miterLimit = 10.0f,
		AFX_DASH_STYLE dashStyle = AFX_DASH_STYLE_SOLID,
		FLOAT dashOffset = 0.0f);

	CMFCStrokeStyle(
		const CArray<FLOAT, FLOAT>& arDashes,
		AFX_CAP_STYLE startCap = AFX_CAP_STYLE_FLAT,
		AFX_CAP_STYLE endCap = AFX_CAP_STYLE_FLAT,
		AFX_CAP_STYLE dashCap = AFX_CAP_STYLE_FLAT,
		AFX_LINE_JOIN lineJoin = AFX_LINE_JOIN_MITER,
		FLOAT miterLimit = 10.0f,
		FLOAT dashOffset = 0.0f);

	CMFCStrokeStyle(const CMFCStrokeStyle& strokeStyle);

	virtual ~CMFCStrokeStyle()
	{
		Destroy();
	}

	CMFCStrokeStyle& operator = (const CMFCStrokeStyle& src)
	{
		CopyFrom(src);
		return *this;
	}

	bool operator == (const CMFCStrokeStyle& src) const
	{
		return (CompareWith(src) == TRUE);
	}

	void CopyFrom(const CMFCStrokeStyle& strokeStyle);

	BOOL CompareWith(const CMFCStrokeStyle& strokeStyle) const;

// Attributes:
public:
	const BOOL IsEmpty() const
	{
		return CompareWith(CMFCStrokeStyle());
	}

	void SetDashStyle(AFX_DASH_STYLE dashStyle, FLOAT dashOffset = 0.0f);

	const CArray<FLOAT, FLOAT>& GetDashes() const
	{
		return m_arDashes;
	}

	AFX_CAP_STYLE GetStartCap() const
	{
		return m_startCap;
	}

	AFX_CAP_STYLE GetEndCap() const
	{
		return m_endCap;
	}

	AFX_CAP_STYLE GetDashCap() const
	{
		return  m_dashCap;
	}

	AFX_LINE_JOIN GetLineJoin() const
	{
		return m_lineJoin;
	}

	FLOAT GetMitterLimit() const
	{
		return m_miterLimit;
	}

	AFX_DASH_STYLE GetDashStyle() const
	{
		return m_dashStyle;
	}

	FLOAT GetDashOffset() const
	{
		return m_dashOffset;
	}

// Operations:
	virtual void Destroy(BOOL bDetachFromGM = TRUE);

protected:
	void CommonInit();

	AFX_CAP_STYLE			m_startCap;
	AFX_CAP_STYLE			m_endCap;
	AFX_CAP_STYLE			m_dashCap;
	AFX_LINE_JOIN			m_lineJoin;
	FLOAT					m_miterLimit;
	AFX_DASH_STYLE			m_dashStyle;
	FLOAT					m_dashOffset;
	CArray<FLOAT, FLOAT>	m_arDashes;
};

class AFX_EXT_CLASS CMFCTextFormat : public CMFCGraphicsResource
{
	friend class CMFCGraphicsManagerGDI;

public:
	enum AFX_TEXT_ALIGNMENT
	{
		AFX_TEXT_ALIGNMENT_FIRST    = 0,
		AFX_TEXT_ALIGNMENT_LEADING  = AFX_TEXT_ALIGNMENT_FIRST,
		AFX_TEXT_ALIGNMENT_TRAILING = 1,
		AFX_TEXT_ALIGNMENT_CENTER   = 2,
		AFX_TEXT_ALIGNMENT_LAST     = AFX_TEXT_ALIGNMENT_CENTER
	};

	enum AFX_FONT_STYLE
	{
		AFX_FONT_STYLE_FIRST   = 0,
		AFX_FONT_STYLE_NORMAL  = AFX_FONT_STYLE_FIRST,
		AFX_FONT_STYLE_OBLIQUE = 1,
		AFX_FONT_STYLE_ITALIC  = 2,
		AFX_FONT_STYLE_LAST    = AFX_FONT_STYLE_ITALIC
	};

public:
	CMFCTextFormat();

	CMFCTextFormat(
		const CString& strFontFamily,
		float fFontSize,
		long lFontWeight = FW_REGULAR,
		AFX_FONT_STYLE fontStyle = AFX_FONT_STYLE_NORMAL,
		LPCTSTR lpszFontLocale = NULL,
		double dblScaleRatio = 1.0);

	CMFCTextFormat(
		BYTE bCharSet,
		const CString& strFontFamily,
		float fFontSize,
		long lFontWeight = FW_REGULAR,
		AFX_FONT_STYLE fontStyle = AFX_FONT_STYLE_NORMAL,
		double dblScaleRatio = 1.0);

	CMFCTextFormat(const LOGFONT& lf);

	CMFCTextFormat(const CMFCTextFormat& textFormat);

	virtual ~CMFCTextFormat()
	{
		Destroy();
	}

	BOOL Create(
		const CString& strFontFamily,
		float fFontSize,
		long lFontWeight = FW_REGULAR,
		AFX_FONT_STYLE fontStyle = AFX_FONT_STYLE_NORMAL,
		LPCTSTR lpszFontLocale = NULL,
		double dblScaleRatio = 1.0);

	BOOL CreateFromLogFont(const LOGFONT& lf);
	void ExportToLogFont(LOGFONT& lf) const;

	virtual void Destroy(BOOL bDetachFromGM = TRUE);

	void CopyFrom(const CMFCTextFormat& from);
	BOOL CompareWith(const CMFCTextFormat& src) const;

	CMFCTextFormat& operator = (const CMFCTextFormat& src)
	{
		CopyFrom(src);
		return *this;
	}
	
	bool operator == (const CMFCTextFormat& src) const
	{
		return !!CompareWith(src);
	}

	bool operator != (const CMFCTextFormat& src) const
	{
		return !CompareWith(src);
	}

	BOOL IsEmpty() const
	{
		return m_strFontFamily.IsEmpty() || m_fFontSize == 0.0f;
	}

	static void AdjustTextSize(double dblAngle, CMFCSize& sz);

protected:
	void CommonInit();

// Attributes:
public:
	const CString& GetFontFamily() const
	{
		return m_strFontFamily;
	}

	float GetFontSize() const
	{
		return m_fFontSize;
	}

	float GetOriginalFontSize() const
	{
		return m_fFontSizeOriginal;
	}

	long GetFontWeight() const
	{
		return m_lFontWeight;
	}

	AFX_FONT_STYLE	GetFontStyle() const
	{
		return m_fontStyle;
	}

	CString	GetFontLocale() const
	{
		return m_strFontLocale;
	}

	AFX_TEXT_ALIGNMENT	GetTextAlignment() const
	{
		return m_textAlignment;
	}

	AFX_TEXT_ALIGNMENT	GetTextVerticalAlignment() const
	{
		return m_textAlignmentVert;
	}

	void SetWordWrap(BOOL bWordWrap = TRUE)
	{
		m_bWordWrap = bWordWrap;
	}

	BOOL IsWordWrap() const
	{
		return m_bWordWrap;
	}

	void SetTextAlignment(AFX_TEXT_ALIGNMENT textAlignment)
	{
		m_textAlignment = textAlignment;
	}

	void SetTextVerticalAlignment(AFX_TEXT_ALIGNMENT textAlignment)
	{
		m_textAlignmentVert = textAlignment;
	}

	void SetFontFamily(const CString& strFontFamily);

	void SetFontSize(float fFontSize);

	void SetFontWeight(long lFontWeight);

	void SetFontStyle(AFX_FONT_STYLE style);

	void SetClipText(BOOL bSet = TRUE)
	{
		m_bClipText = bSet;
	}

	BOOL IsClipText() const
	{
		return m_bClipText;
	}

	BOOL FromLogFont() const
	{
		return m_bFromLogFont;
	}

	double GetDrawingAngle() const
	{
		return m_dblDrawingAngle;
	}

	void SetDrawingAngle(double dblDrawingAngle)
	{
		if (m_dblDrawingAngle != dblDrawingAngle)
		{
			m_dblDrawingAngle = dblDrawingAngle;
			m_bDrawingAngleWasChanged = TRUE;
		}
	}

	BOOL IsUnderline() const
	{
		return m_bIsUnderline;
	}

	void SetUnderline(BOOL bSet = TRUE);

	BOOL IsStrikethrough() const
	{
		return m_bIsStrikethrough;
	}

	void SetStrikethrough(BOOL bSet = TRUE);

	BOOL IsEndEllipsis() const
	{
		return m_bIsEndEllipsis;
	}

	void SetEndEllipsis(BOOL bSet = TRUE);

	BYTE GetCharSet() const;
	static CString CharSetToLocale(BYTE bCharSet);

	void Scale(double dblRatio);
	void ResetSize();

// Attributes:
protected:
	CString				m_strFontFamily;
	float				m_fFontSize;
	BOOL				m_bIsUnderline;
	BOOL				m_bIsStrikethrough;
	BOOL				m_bIsEndEllipsis;
	float				m_fFontSizeOriginal;
	long				m_lFontWeight;
	AFX_FONT_STYLE		m_fontStyle;
	CString				m_strFontLocale;
	AFX_TEXT_ALIGNMENT	m_textAlignment;
	AFX_TEXT_ALIGNMENT	m_textAlignmentVert;
	BOOL				m_bWordWrap;
	BOOL				m_bClipText;
	BOOL				m_bFromLogFont;
	double				m_dblDrawingAngle;
	BOOL				m_bDrawingAngleWasChanged;
};

////////////////////////////////////////////////////////////////////////////////////
// CMFCGraphicsManager

// 3D Pie/Doughnut drawing flags:

#define AFX_3D_DRAW_TOP			0x0001
#define AFX_3D_DRAW_SIDE1			0x0002
#define AFX_3D_DRAW_SIDE2			0x0004
#define AFX_3D_DRAW_EDGE1			0x0008
#define AFX_3D_DRAW_EDGE2			0x0010
#define AFX_3D_DRAW_INTERNAL_SIDE	0x0020
#define AFX_3D_DRAW_ALL			0xFFFF

struct AFX_EXT_CLASS CMFCGraphicsManagerParams
{
	CMFCGraphicsManagerParams()
	{
		bUseSoftwareRendering = FALSE;
		bAlphaModePremultiplied = FALSE;
		dpiX = dpiY = 0.0;
	}

	BOOL bUseSoftwareRendering;
	BOOL bAlphaModePremultiplied;
    float dpiX;
    float dpiY;
};

class AFX_EXT_CLASS CMFCGraphicsManager : public CObject  
{
	friend class CMFCGeometry;
	friend class CMFCTextFormat;
	friend class CMFCBrush;
	friend class CMFCImage;
	friend class CMFCStrokeStyle;
	friend class CMFCGraphicsResource;

	DECLARE_DYNAMIC(CMFCGraphicsManager)

public:
	enum AFX_GRAPHICS_MANAGER
	{
		AFX_GRAPHICS_MANAGER_DEFAULT = 0,
		AFX_GRAPHICS_MANAGER_GDI,
		AFX_GRAPHICS_MANAGER_D2D
	};
	
public:
	static CMFCGraphicsManager* CreateInstance(
		AFX_GRAPHICS_MANAGER manager = AFX_GRAPHICS_MANAGER_DEFAULT, BOOL bFallback = TRUE,
		CMFCGraphicsManagerParams* pParams = NULL);

	CMFCGraphicsManager();
	virtual ~CMFCGraphicsManager();

	virtual CMFCGraphicsManager* CreateOffScreenManager(const CMFCRect& rect, CMFCImage* pImageDest) = 0;

	BOOL IsSupported(UINT nFeatureMask)
	{
		return (m_nSupportedFeatures & nFeatureMask) == nFeatureMask;
	}

	AFX_GRAPHICS_MANAGER GetType() const
	{
		return m_Type;
	}

	BOOL IsOffscreen() const
	{
		return m_pImageDest != NULL;
	}

	void CleanResources(BOOL bDetach = FALSE);

	void SetDrawShadowMode(BOOL bSet = TRUE, const CMFCPoint& ptOffset = CMFCPoint(2.0, 2.0));
	void SetDrawShadowMode(BOOL bSet, const CMFCColor& color, int nTransparencyPercent, int nAngle, int nDistance);

	BOOL IsDrawShadowMode() const
	{
		return m_bIsDrawShadowMode;
	}

	const CMFCPoint& GetShadowOffset() const
	{
		return m_ptShadowOffset;
	}

	void SetGradientRectangle(const CMFCRect& rect)
	{
		m_rectCurrGradient = rect;
	}

	const CMFCRect& GetGradientRectangle() const
	{
		return m_rectCurrGradient;
	}

	void SetCurrentOpacity(double dblOpacity)
	{
		m_dblCurrentOpacity = dblOpacity;
	}

	double GetCurrentOpacity() const
	{
		return m_dblCurrentOpacity;
	}

protected:
	CMFCGraphicsManager(const CMFCRect& rectDest, CMFCImage* pImageDest);

// Overrides:
public:
	virtual BOOL IsValid() const = 0;

	virtual void BindDC(CDC* pDC, BOOL bDoubleBuffering = TRUE) = 0;
	virtual void BindDC(CDC* pDC, const CRect& rect) = 0;

	virtual BOOL BeginDraw() = 0;
	virtual void EndDraw() = 0;

	virtual void Clear(const CMFCColor& color = CMFCColor()) = 0;

	virtual void DrawLine(	
		const CMFCPoint& ptFrom, const CMFCPoint& ptTo, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL) = 0;

	virtual void DrawLine(	
		double x1, double y1, double x2, double y2, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL)
	{
		DrawLine(
			CMFCPoint(x1, y1), CMFCPoint(x2, y2), brush, lineWidth, pStrokeStyle);
	}

	virtual void DrawLines(	
		const CMFCPointsArray& arPoints, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL) = 0;

	virtual void DrawScatter(
		const CMFCPointsArray& arPoints, const CMFCBrush& brush, double dblPointSize, UINT nStyle = 0) = 0;

	virtual void DrawRectangle(
		const CMFCRect& rect, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL) = 0;

	virtual void FillRectangle(
		const CMFCRect& rect, const CMFCBrush& brush) = 0;

	virtual void DrawRoundedRectangle(
		const CMFCRoundedRect& rect, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL) = 0;

	virtual void FillRoundedRectangle(
		const CMFCRoundedRect& rect, const CMFCBrush& brush) = 0;

	virtual void DrawEllipse(
		const CMFCEllipse& ellipse, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL) = 0;

	virtual void FillEllipse(
		const CMFCEllipse& ellipse, const CMFCBrush& brush) = 0;

	virtual void DrawArc(
		const CMFCEllipse& ellipse, double dblStartAngle, double dblFinishAngle, BOOL bIsClockwise,
		const CMFCBrush& brush, double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL) = 0;

	virtual void DrawArc(
		const CMFCPoint& ptFrom, const CMFCPoint& ptTo, const CMFCSize sizeRadius, 
		BOOL bIsClockwise, BOOL bIsLargeArc,
		const CMFCBrush& brush, double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL) = 0;

	virtual void DrawGeometry(
		const CMFCGeometry& geometry, const CMFCBrush& brush, 
		double lineWidth = 1., const CMFCStrokeStyle* pStrokeStyle = NULL) = 0;

	virtual void FillGeometry(
		const CMFCGeometry& geometry, const CMFCBrush& brush) = 0;

	virtual void DrawImage(
		const CMFCImage& image, const CMFCPoint& ptDest, const CMFCSize& sizeDest = CMFCSize(),
		double opacity = 1., CMFCImage::AFX_IMAGE_INTERPOLATION_MODE interpolationMode = CMFCImage::AFX_IMAGE_INTERPOLATION_MODE_LINEAR, 
		const CMFCRect& rectSrc = CMFCRect()) = 0;

	virtual void DrawText(
		const CString& strText, const CMFCRect& rectText, const CMFCTextFormat& textFormat,
		const CMFCBrush& foregroundBrush) = 0;

	virtual CMFCSize GetTextSize(const CString& strText, const CMFCTextFormat& textFormat, double dblWidth = 0., BOOL bIgnoreTextRotation = FALSE) = 0;

	virtual void DrawFillPolygon(const CMFCPointsArray& pts, const CMFCBrush& brFill, const CMFCBrush& brLine);

	virtual void DrawBeveledRectangle(const CMFCRect& rect, const CMFCBrush& brush, 
									int bevel_size = 3, BOOL bDrawBorder = FALSE);

	virtual void DrawPie(
		const CMFCEllipse& ellipse, 
		double dblStartAngle, double dblFinishAngle, 
		const CMFCBrush& brFill, const CMFCBrush& brLine,
		double dblOffsetFromCenter = 0.);

	virtual void Draw3DPie(
		const CMFCEllipse& ellipse, 
		const double dblHeight,
		double dblStartAngle, double dblFinishAngle, 
		const CMFCBrush& brFill, const CMFCBrush& brSideFill, const CMFCBrush& brLine,
		double dblOffsetFromCenter = 0.,
		int nDrawingFlags = AFX_3D_DRAW_ALL);

	virtual void DrawDoughnut(
		const CMFCEllipse& ellipse, 
		double dblHolePerc,	/* 0 - 1 */
		double dblStartAngle, double dblFinishAngle, 
		const CMFCBrush& brFill, const CMFCBrush& brLine,
		double dblOffsetFromCenter = 0.);

	virtual void Draw3DDoughnut(
		const CMFCEllipse& ellipse, 
		const double dblHolePerc,	/* 0 - 1 */
		const double dblHeight,
		double dblStartAngle, double dblFinishAngle, 
		const CMFCBrush& brFill, const CMFCBrush& brSideFill, const CMFCBrush& brLine,
		double dblOffsetFromCenter = 0.,
		int nDrawingFlags = AFX_3D_DRAW_ALL);

	virtual void Draw3DTorus(
		const CMFCEllipse& ellipse, 
		const double dblHeight,
		double dblStartAngle, double dblFinishAngle, 
		const CMFCBrush& brFill, const CMFCBrush& brSideFill, const CMFCBrush& brLine,
		double dblOffsetFromCenter = 0.,
		int nDrawingFlags = AFX_3D_DRAW_ALL);

	virtual void DrawFunnel(const CMFCRect& rectFunnel,
		double dblNeckHeight, double dblNeckWidth,
		const CMFCBrush& brFill, const CMFCBrush& brLine,
		double Y1, double Y2);

	virtual void Draw3DFunnel(const CMFCRect& rectFunnel, double dblDepth,
		double dblNeckHeight, double dblNeckWidth,
		const CMFCBrush& brFill, const CMFCBrush& brLine,
		double Y1, double Y2, BOOL bIsCircularBase = TRUE,
		const CMFCBrush& brTopFill = CMFCBrush());

	virtual void DrawPyramid(const CMFCRect& rectPyramid,
		const CMFCBrush& brFill, const CMFCBrush& brLine,
		double Y1 = -1, double Y2 = -1);

	virtual void Draw3DPyramid(const CMFCRect& rectPyramid, double dblDepth,
		const CMFCBrush& brSideFillLeft, const CMFCBrush& brSideFillRight, const CMFCBrush& brLine,
		double dblXCenterOffset = 0., double Y1 = -1, double Y2 = -1, BOOL bIsCircularBase = FALSE, const CMFCBrush& brTopFill = CMFCBrush());

    virtual void DrawArrow3(
		const CMFCPoint& ptLineStart, const CMFCPoint& ptLineEnd, 
		double arrowLength, const CMFCBrush& brFill, const CMFCBrush& brLine,
		double arrowAngle = 170.0, DWORD dwArrowType = 0);

    virtual void DrawArrow4(
		const CMFCPoint& ptLineStart, const CMFCPoint& ptLineEnd, 
		double arrowLength, const CMFCBrush& brFill, const CMFCBrush& brLine,
		double arrowAngle = 165.0, DWORD dwArrowType = 0);

	virtual void DrawSide(
		const CMFCPoint& pt1, const CMFCPoint& pt2, const CMFCPoint& pt3, const CMFCPoint& pt4,
		const CMFCBrush& brFill, const CMFCBrush& brLine, double lineWidth = 1.);

	virtual void DrawCheckBox(const CMFCRect& rect, int nState, const CMFCColor& clrForeground, const CMFCBrush& brBackground = CMFCBrush());
	virtual void DrawRadioButton(const CMFCRect& rect, BOOL bIsSelected, const CMFCColor& clrForeground, const CMFCBrush& brBackground = CMFCBrush());

	virtual void SetClipRect(const CMFCRect& rectClip, int nFlags = RGN_COPY);
	virtual void SetClipEllipse(const CMFCEllipse& ellipseClip, int nFlags = RGN_COPY);
	virtual void SetClipRoundedRect(const CMFCRoundedRect& rectRounded, int nFlags = RGN_COPY);
	virtual void SetClipArea(const CMFCGeometry& geometry, int nFlags = RGN_COPY) = 0;
	virtual void ReleaseClipArea() = 0;

	virtual void CombineGeometry(CMFCGeometry& geometryDest, const CMFCGeometry& geometrySrc1, const CMFCGeometry& geometrySrc2, int nFlags) = 0;
	virtual void GetGeometryBoundingRect(const CMFCGeometry& geometry, CMFCRect& rect) = 0;

	void Detach(CMFCGraphicsResource* pRes);

	virtual LPVOID CreateGeometry(CMFCGeometry& geometry) = 0;
	virtual BOOL DestroyGeometry(CMFCGeometry& geometry) = 0;

	virtual LPVOID CreateTextFormat(CMFCTextFormat& textFormat) = 0;
	virtual BOOL DestroyTextFormat(CMFCTextFormat& textFormat) = 0;

	virtual LPVOID CreateBrush(CMFCBrush& brush) = 0;
	virtual BOOL DestroyBrush(CMFCBrush& brush) = 0;
	virtual BOOL SetBrushOpacity(CMFCBrush& brush) = 0;

	virtual LPVOID CreateImage(CMFCImage& image) = 0;
	virtual BOOL DestroyImage(CMFCImage& image) = 0;
	virtual CMFCSize GetImageSize(CMFCImage& image) = 0;
	virtual BOOL CopyImage(CMFCImage& imageSrc, CMFCImage& imageDest, const CMFCRect& rectSrc) = 0;
	virtual HBITMAP ExportImageToBitmap(CMFCImage& image) = 0;

	virtual LPVOID CreateStrokeStyle(CMFCStrokeStyle& style) = 0;
	virtual BOOL DestroyStrokeStyle(CMFCStrokeStyle& style) = 0;

	CList<CMFCGraphicsResource*, CMFCGraphicsResource*>	m_lstRes;

	CMFCGraphicsManager* GetOriginal() const
	{
		return m_pOriginal;
	}

	virtual void EnableAntialiasing(BOOL bEnable = TRUE) = 0;
	virtual BOOL IsAntialiasingEnabled() const = 0;

	void EnableTransparentGradient(BOOL bEnable = TRUE)
	{
		m_bIsTransparentGradient = bEnable;
	}

	BOOL IsTransparentGradient() const
	{
		return m_bIsTransparentGradient;
	}

	virtual BOOL IsBindDCFailed() const
	{
		return FALSE;
	}

	void SetScale(double dblScale = 1.)	// 1 - 100%
	{
		if (dblScale > 0.0)
		{
			m_dblScale = dblScale;
		}
	}

	double GetScale() const
	{
		return m_dblScale;
	}

	void SetPrintInfo(CPrintInfo* pInfo)
	{
		m_pPrintInfo = pInfo;
	}

	const CPrintInfo* GetPrintInfo() const
	{
		return m_pPrintInfo;
	}

	virtual BOOL IsTransformSupported() const { return FALSE; }
	virtual void SetRotateTransform(double /*dblAngle*/, const CMFCPoint& /*ptCenter*/) {}
protected:

	virtual void OnFillGeometryBevel(const CMFCBrush& brFill, const CMFCGeometry& shape, const CMFCGeometry& shapeInternal);

	double PrepareBevelColors(const CMFCColor& color, CMFCColor& colorLight, CMFCColor& colorDark);
	BOOL PrepareImage(const CMFCImage& image, HBITMAP hBitmap);

	UINT					m_nSupportedFeatures;
	AFX_GRAPHICS_MANAGER	m_Type;
	CMFCRect				m_rectCurrGradient;
	CMFCImage*				m_pImageDest;
	CMFCRect				m_rectDest;
	CMFCGraphicsManager*	m_pOriginal;
	BOOL					m_bIsTransparentGradient;
	double					m_dblScale;
	CPrintInfo*				m_pPrintInfo;
	BOOL					m_bIsDrawShadowMode;
	CMFCPoint				m_ptShadowOffset;
	CMFCBrush				m_brShadow;
	double					m_dblCurrentOpacity;	// 0 - 1, -1: default
};

#endif // !defined(AFX_MFCGRAPHICSMANAGER_H__979A73FE_851A_4E39_B412_4F2C22047E28__INCLUDED_)
