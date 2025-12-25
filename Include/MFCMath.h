//*******************************************************************************

#ifndef __MFCMATH_H
#define __MFCMATH_H

#ifndef _USE_MATH_DEFINES
    #define _USE_MATH_DEFINES
#endif

#include <math.h>

#ifndef M_PI   // pi
    #define M_PI       3.14159265358979323846
#endif

#ifndef M_PI_2 // pi/2
	#define M_PI_2     1.57079632679489661923
#endif

#ifndef M_LN2  // ln(2)
	#define M_LN2      0.693147180559945309417
#endif


#include "MFCGraphicsManager.h"

inline int afx_sqr(int value)
{
	return value * value;
};

inline double afx_sqr(double value)
{
	return value * value;
};

inline int afx_sign(int value)
{
	if (value == 0)
	{
		return 0;
	}

	return value > 0 ? 1 : -1;
}

inline double afx_sign(double value)
{
	if (value == 0.0)
	{
		return 0.0;
	}

	return value > 0.0 ? 1.0 : -1.0;
}

inline int afx_round(double val)
{
    return int((val - int(val - 0.5)) >= 0.5 ? val + 0.5 : val - 0.5);
}

inline double afx_frac(double value)
{
	return value - (int)value;
}

inline double afx_clamp(double value, double low, double high)
{
	return value < low ? low : (value > high ? high : value);
}

inline int afx_clamp(int value, int low, int high)
{
	return value < low ? low : (value > high ? high : value);
}

inline double afx_clamp_to_byte(double value)
{
	return afx_clamp(value, 0.0, 255.0);
}

inline double afx_distance(double dx, double dy)
{
	return sqrt(dx * dx + dy * dy);
}

inline double afx_distance(const CMFCPoint& pt1, const CMFCPoint& pt2)
{
	return afx_distance(pt2.x - pt1.x, pt2.y - pt1.y);
}

inline CMFCPoint afx_lineCenter (const CMFCPoint& pt1, const CMFCPoint& pt2)
{
    return CMFCPoint ((pt1.x + pt2.x) / 2.0, (pt1.y + pt2.y) / 2.0);
}

inline double afx_angle (double dx, double dy)
{
	if (dy == 0)
	{
		return (dx < 0.0) ? -M_PI : 0.0;
	}

	return atan2 (dy, dx);
}

inline double afx_angle (const CMFCPoint& pt1, const CMFCPoint& pt2, BOOL invY = FALSE)
{
	return afx_angle (pt2.x - pt1.x, invY ? pt1.y - pt2.y : pt2.y - pt1.y);
}

inline double afx_deg2rad(double value)
{
	return value * M_PI / 180.0;
}

inline double afx_rad2deg(double value)
{
	return value * 180.0 / M_PI;
}

inline double afx_normal_of_3D_vector(const double vect[3])
{
	return sqrt(vect[0] * vect[0] + vect[1] * vect[1] + vect[2] * vect[2]);
}

inline double afx_normalize_3D_vector(double vect[3])
{
	double dblVal = 0.; 

	if ((dblVal = afx_normal_of_3D_vector(vect)) != 0.)
	{
		for (int i = 0; i < 3; i++)
		{
			vect[i] /= dblVal;
		}
	}

	return dblVal;
}

inline void afx_cross_3D_vectors(const double vect1[3], const double vect2[3], double vect3[3])
{
	vect3[0] = vect1[1] * vect2[2] - vect1[2] * vect2[1]; 
	vect3[1] = vect1[2] * vect2[0] - vect1[0] * vect2[2];
	vect3[2] = vect1[0] * vect2[1] - vect1[1] * vect2[0];
}

inline int afx_scale(int value, double scale)
{
	return scale == 1.0 ? value : (int)ceil(scale * value);
}

AFX_EXT_CLASS double afx_double_precision(double value, int precision);

// returns positive value if p2 is located on the left side from the line defined by p0 and p1
// negative - on the right side
// 0 - on the line
// the direction is defined by vector p1 - p0
inline int afx_classify_point2D(const CMFCPoint& p0, const CMFCPoint& p1, const CMFCPoint& p2) 
{
	return (int)afx_sign((p1.x - p0.x) * (p2.y - p0.y) - (p2.x - p0.x) * (p1.y - p0.y));
}

void PrintPoint3D(const CMFCPoint& pt);


AFX_EXT_CLASS double afx_normalize_rad(double value);
AFX_EXT_CLASS double afx_normalize_deg(double value);

AFX_EXT_CLASS int afx_pointInLine (const CMFCPoint& pt1, const CMFCPoint& pt2,
                                        const CMFCPoint& ptTest, double precision);

AFX_EXT_CLASS bool afx_linesIntersection (
                            const CMFCPoint& pt1, const CMFCPoint& pt2,
                            const CMFCPoint& pt3, const CMFCPoint& pt4,
                            double& outX, double& outY);

AFX_EXT_CLASS bool afx_pointInPolygon (CMFCPoint* pPoints, int nPoints, const CMFCPoint& ptTest);

AFX_EXT_CLASS bool afx_pointInPie (const CMFCRect& rect, double dblAngleStart, double dblAngleFinish, const CMFCPoint& ptTest, double dblDoughnutPercent = 0.);

AFX_EXT_CLASS bool afx_clockwise (const CMFCPoint& pt1, const CMFCPoint& pt2, const CMFCPoint& pt3);

AFX_EXT_CLASS void afx_setLineLength (const CMFCPoint& pt1, CMFCPoint& pt2, double dNewLength);

AFX_EXT_CLASS BOOL afx_CS_clip(const CMFCRect& rect, CMFCPoint& point1, CMFCPoint& point2);
AFX_EXT_CLASS int afx_CS_clip_inv(const CMFCRect& rect, CMFCPoint& pt1_1, CMFCPoint& pt1_2,
									CMFCPoint* pt2_1 = NULL, CMFCPoint* pt2_2 = NULL);
AFX_EXT_CLASS BOOL afx_CS_intersect(const CMFCRect& rect, const CMFCPoint& point1, const CMFCPoint& point2,
									CMFCPoint& point);

AFX_EXT_CLASS BOOL afx_IsFullEllipse(double dblStartAngle, double dblFinishAngle, BOOL bIsClockwise, double dblPrecision);

AFX_EXT_CLASS double afx_get_tile_size(const CMFCSize& size, int nTiles);

class AFX_EXT_CLASS CMFCVector
{
public:
	CMFCVector()
		: m_Size (0)
		, m_pData(NULL)
	{
	}
	CMFCVector(int size)
		: m_Size (0)
		, m_pData(NULL)
	{
		Create(size);
	}
	CMFCVector(int size, double value)
		: m_Size (0)
		, m_pData(NULL)
	{
		Create(size, value);
	}

	~CMFCVector()
	{
		Destroy();
	}

	BOOL IsEmpty() const
	{
		return m_pData == NULL;
	}

	int GetSize() const
	{
		return m_Size;
	}

	const double* GetData() const
	{
		return m_pData;
	}

	void Create(int size)
	{
		if (size <= 0)
		{
			ASSERT(FALSE);
			return;
		}

		Destroy();

		m_Size = size;
		m_pData = new double[m_Size];
	}

	void Create(int size, double value)
	{
		Create(size);
		if (!IsEmpty ())
		{
			Fill(value);
		}
	}

	void Destroy()
	{
		if (!IsEmpty())
		{
			delete [] m_pData;
			m_pData = NULL;
		}
	}

	void Fill(double value)
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return;
		}

		for (int x = 0; x < m_Size; x++)
		{
			m_pData[x] = value;
		}
	}

	double Sum() const
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return 0.0;
		}

		double sum = 0.0;
		for (int i = 0; i < m_Size; i++)
		{
			sum += m_pData[i];
		}

		return sum;
	}

	void Swap()
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return;
		}

		for (int i = 0; i < m_Size / 2; i++)
		{
			double temp = m_pData[i];
			m_pData[i] = m_pData[m_Size - i - 1];
			m_pData[m_Size - i - 1] = temp;
		}
	}

	double& operator[](int index)
	{
		ASSERT(0 <= index && index < m_Size);
		return m_pData[index];
	}
	const double& operator[](int index) const
	{
		ASSERT(0 <= index && index < m_Size);
		return m_pData[index];
	}

protected:
	int		m_Size;
	double*	m_pData;
};

class AFX_EXT_CLASS CMFCMatrix
{
public:
	CMFCMatrix()
		: m_Rows (0)
		, m_Cols (0)
		, m_pData(NULL)
	{
	}
	CMFCMatrix(int rows, int cols)
		: m_Rows (0)
		, m_Cols (0)
		, m_pData(NULL)
	{
		Create(rows, cols);
	}
	CMFCMatrix(int rows, int cols, double value)
		: m_Rows (0)
		, m_Cols (0)
		, m_pData(NULL)
	{
		Create(rows, cols, value);
	}

	void LoadIdentity()
	{
		if (IsEmpty() || m_Rows != m_Cols)
		{
			return;
		}

		for (int y = 0; y < m_Rows; y++)
		{
			double* pRow = m_pData[y];

			for (int x = 0; x < m_Cols; x++)
			{
				if (x != y)
				{
					*pRow++ = 0.;
				}
				else
				{
					*pRow++ = 1.;
				}
			}
		}
	}

	virtual ~CMFCMatrix()
	{
		Destroy();
	}

	BOOL IsEmpty() const
	{
		return m_pData == NULL;
	}

	int GetRows() const
	{
		return m_Rows;
	}

	int GetCols() const
	{
		return m_Cols;
	}

	double** const GetData() const
	{
		return m_pData;
	}

	void Create(int rows, int cols)
	{
		if (rows <= 0 || cols <= 0)
		{
			ASSERT(FALSE);
			return;
		}

		Destroy();

		m_Rows = rows;
		m_Cols = cols;

		m_pData = (double**)(new LPVOID[m_Rows]);
		for (int y = 0; y < m_Rows; y++)
		{
			m_pData[y] = new double[m_Cols];
		}
	}

	void Create(int rows, int cols, double value)
	{
		Create(rows, cols);
		if (!IsEmpty ())
		{
			Fill(value);
		}
	}

	void Destroy()
	{
		if (!IsEmpty())
		{
			for (int y = 0; y < m_Rows; y++)
			{
				delete [] m_pData[y];
			}

			delete [] m_pData;
			m_pData = NULL;
		}
	}

	void Fill(double value)
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return;
		}

		for (int y = 0; y < m_Rows; y++)
		{
			double* pRow = m_pData[y];

			for (int x = 0; x < m_Cols; x++)
			{
				*pRow++ = value;
			}
		}
	}

	void SetMatrix(const CMFCMatrix& src)
	{
		Create(src.GetRows(), src.GetCols(), 0);

		for (int i = 0; i < src.GetRows(); i++)
		{
			const double* pRow = src[i];
			memcpy(m_pData[i], pRow, sizeof(double) * m_Cols);
		}
	}

	void GetRow(CMFCVector& vector, int index) const
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return;
		}

		if (index < 0 || m_Rows <= index)
		{
			ASSERT(FALSE);
			return;
		}

		vector.Create(m_Cols);
		memcpy((double*)vector.GetData(), m_pData[index], sizeof(double) * m_Cols);
	}

	void SetRow(const CMFCVector& vector, int index)
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return;
		}

		if (index < 0 || m_Rows <= index)
		{
			ASSERT(FALSE);
			return;
		}

		if (vector.GetSize() != m_Cols)
		{
			ASSERT(FALSE);
			return;
		}

		memcpy(m_pData[index], vector.GetData(), sizeof(double) * m_Cols);
	}

	void GetColumn(CMFCVector& vector, int index) const
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return;
		}

		if (index < 0 || m_Cols <= index)
		{
			ASSERT(FALSE);
			return;
		}

		vector.Create(m_Rows);

		for (int i = 0; i < m_Rows; i++)
		{
			vector[i] = m_pData[i][index];
		}
	}

	void SetColumn(const CMFCVector& vector, int index)
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return;
		}

		if (index < 0 || m_Cols <= index)
		{
			ASSERT(FALSE);
			return;
		}

		if (vector.GetSize() != m_Rows)
		{
			ASSERT(FALSE);
			return;
		}

		for (int i = 0; i < m_Rows; i++)
		{
			m_pData[i][index] = vector[i];
		}
	}

	double Sum() const
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return 0.0;
		}

		double sum = 0.0;
		for (int y = 0; y < m_Rows; y++)
		{
			double* pRow = m_pData[y];
			for (int x = 0; x < m_Cols; x++)
			{
				sum += pRow[x];
			}
		}

		return sum;
	}

	double SumRow(int index) const
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return 0.0;
		}

		if (index < 0 || m_Rows <= index)
		{
			ASSERT(FALSE);
			return 0.0;
		}

		double sum = 0.0;
		double* pRow = m_pData[index];
		for (int i = 0; i < m_Cols; i++)
		{
			sum += pRow[i];
		}

		return sum;
	}

	double SumColumn(int index) const
	{
		if (IsEmpty())
		{
			ASSERT(FALSE);
			return 0.0;
		}

		if (index < 0 || m_Cols <= index)
		{
			ASSERT(FALSE);
			return 0.0;
		}

		double sum = 0.0;
		for (int i = 0; i < m_Rows; i++)
		{
			sum += m_pData[i][index];
		}

		return sum;
	}

	double* operator[](int index)
	{
		ASSERT(0 <= index && index < m_Rows);
		return m_pData[index];
	}
	const double* operator[](int index) const
	{
		ASSERT(0 <= index && index < m_Rows);
		return m_pData[index];
	}

protected:
	int			m_Rows;
	int			m_Cols;
	double**	m_pData;
};

class AFX_EXT_CLASS CMFCVector4 
{
public:
	CMFCVector4(double dblVal = 1)
	{
		Fill(dblVal);
	}

	CMFCVector4(const CMFCPoint& pt)
	{
		FromPoint3D(pt);
	}

	void ToPoint(CMFCPoint& pt) const
	{
		pt.x = m_data[0];
		pt.y = m_data[1];
		pt.z = m_data[2];
	}

	void FromPoint3D(const CMFCPoint& pt)
	{
		m_data[0] = pt.x;
		m_data[1] = pt.y;
		m_data[2] = pt.z;
		m_data[3] = 1;
	}

	void Fill(double dblVal)
	{
		for (int i = 0; i < 4; i++)
		{
			m_data[i] = dblVal;
		}
	}

	void Normalize()
	{
		double dblLen = 0;

		int i = 0;
		for (i = 0; i < 4; i++)
		{
			dblLen += m_data[i] * m_data[i];
		}

		if (dblLen == 0.)
		{
			dblLen = 1.;
		}

		dblLen = sqrt(dblLen);

		for (i = 0; i < 4; i++)
		{
			m_data[i] = m_data[i] / dblLen;
		}
	}

	void SetOpenGLDefaultNormal()
	{
		m_data[0] = 0.;
		m_data[1] = 0.;
		m_data[2] = 1.;
		m_data[3] = 0.;
	}

	BOOL IsOpenGLDefaultNormal() const
	{
		return m_data[0] == 0. && m_data[1] == 0. && m_data[2] == 1. && m_data[3] == 0.;
	}

	BOOL IsNull() const 
	{
		for (int i = 0; i < 4; i++)
		{
			if (m_data[i] != 0.)
			{
				return FALSE;
			}
		}

		return TRUE;
	}

	CMFCVector4& operator=(const CMFCVector4& src)
	{
		for (int i = 0; i < 4; i++)
		{
			m_data[i] = src[i];
		}

		return *this;
	}

	double& operator[](int index)
	{
		ASSERT(0 <= index && index < 4);
		return m_data[index];
	}
	
	const double& operator[](int index) const
	{
		ASSERT(0 <= index && index < 4);
		return m_data[index];
	}

	void MultiplyVectors4x4(const CMFCVector4& v1, const CMFCVector4& v2);

	double MultiplyVectorsScalar(const CMFCVector4& v1);

	void CalcNormal(const CMFCPoint& ptA, const CMFCPoint& ptB, const CMFCPoint& ptC);
	void CalcPlane(const CMFCPointsArray& arPoints);
	void CalcPlane(CMFCPoint arPoints[]);

	double* GetData() {return m_data;}

protected:
	double m_data[4];
};


class AFX_EXT_CLASS CMFCMatrix4x4  
{
public:
	CMFCMatrix4x4(BOOL bMakeIdentity = TRUE)
	{
		if (bMakeIdentity)
		{
			Identity();
		}
		else
		{
			Fill(0.);
		}
	}

	CMFCMatrix4x4(const CMFCMatrix4x4& mSrc)
	{
		CopyFrom(mSrc);
	}

	void Fill(double dblValue)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				m_data[i][j] = dblValue;
			}
		}
	}

	void Identity()
	{
		Fill(0.);
		for (int i = 0; i < 4; i++)
		{
			m_data[i][i] = 1.;
		}
	}

	void Inverse();

	double Det(int nOrder)
	{
		if (nOrder < 1 || nOrder > 4)
		{
			return 0;
		}

		if (nOrder == 1)
		{
			return m_data[0][0];
		}

		if (nOrder == 2)
		{
			return m_data[0][0] * m_data[1][1] - m_data[0][1] * m_data[1][0];
		}

		if (nOrder == 3)
		{
			return m_data[0][0] * m_data[1][1] * m_data[2][2] + m_data[0][1] * m_data[1][2] * m_data[2][0] + 
				m_data[0][2] * m_data[1][0] * m_data[2][1] - m_data[0][2] * m_data[1][1] * m_data[2][0] - 
				m_data[0][1] * m_data[1][0] * m_data[2][2] - m_data[0][0] * m_data[1][2] * m_data[2][1];
		}

		if (m_data[0][0] == 0 || m_data[1][1] == 0 || m_data[2][2] == 0)
		{
			return 0;
		}
		
		double mod[4][4];

		// step 1 - subtract form row 1 row 0 multiplied by m10/m00
		memcpy(mod, m_data, sizeof(double) * 16);

		double dblDiv = mod[1][0] / mod[0][0];

		int i = 0;
		for (i = 0; i < 4; i++)
		{
			mod[1][i] -= mod[0][i] * dblDiv;
		}

		// step 2 - subtract from row 2 row 0 multiplied by m20/m00
		dblDiv = mod[2][0] / mod[0][0];

		for (i = 0; i < 4; i++)
		{
			mod[2][i] -= mod[0][i] * dblDiv;
		}

		// step 3 - subtract from row 3 row 0 multiplied by m30/m00
		dblDiv = mod[3][0] / mod[0][0];

		for (i = 0; i < 4; i++)
		{
			mod[3][i] -= mod[0][i] * dblDiv;
		}

		// step 4 - subtract from row 2 row 1 multiplied by m21/m11
		dblDiv = mod[2][1] / mod[1][1];

		for (i = 0; i < 4; i++)
		{
			mod[2][i] -= mod[1][i] * dblDiv;
		}

		//step 5 - subtract from row 3 row 1 multiplied by m31/m11
		dblDiv = mod[3][1] / mod[1][1];

		for (i = 0; i < 4; i++)
		{
			mod[3][i] -= mod[1][i] * dblDiv;
		}

		// step 6 - subtract from row 3 row 2 multiplied by m32/m22
		dblDiv = mod[3][2] / mod[2][2];

		for (i = 0; i < 4; i++)
		{
			mod[3][i] -= mod[2][i] * dblDiv;
		}

		return mod[0][0] * mod[1][1] * mod[2][2] * mod[3][3];
		
	}

	double* operator[](int index)
	{
		ASSERT(0 <= index && index < 4);
		return m_data[index];
	}
	const double* operator[](int index) const
	{
		ASSERT(0 <= index && index < 4);
		return m_data[index];
	}

	double* GetData() const {return (double*)m_data;}

	void CopyFrom(const CMFCMatrix4x4& mSrc)
	{
		memcpy(m_data, mSrc.GetData(), sizeof(double) * 16);
	}

	void MultiplyMatrixes4x4(const CMFCMatrix4x4& m1, const CMFCMatrix4x4& m2);
	void TransformPoint3D(const CMFCPoint& ptIn, CMFCPoint& ptOut) const;

protected:
	double m_data[4][4];
};

// finds intersection of two lines defined by 4 points
BOOL MFCIntersectPoints2D(const CMFCPoint& ptStart1, const CMFCPoint& ptEnd1, 
					   const CMFCPoint& ptStart2, const CMFCPoint& ptEnd2,
					   CMFCPoint& ptIntersect);
BOOL MFCCalculateIntersectPoint(const CMFCPointsArray& arPoly1, const CMFCPointsArray& arPoly2, 
						CMFCPoint& ptIntersect);
BOOL MFCIntersectTriangle2D(CMFCPoint arPoly1[], CMFCPoint arPoly2[], CMFCPoint arPolyRes[], int& nResCount);

#endif // !defined(__MFCMATH_H)
