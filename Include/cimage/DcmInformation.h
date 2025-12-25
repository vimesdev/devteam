#ifndef DCMINFORMATION_H
#define DCMINFORMATION_H

#include "gdiplus.h"
using namespace Gdiplus;

typedef struct _Point3D {
		_Point3D() {
			x = 0;
			y = 0;
			z = 0;
		};
		double x;
		double y;
		double z;
	} Point3D;
	
	typedef Point3D Vector;

	typedef struct _Orientation {
		Vector x;
		Vector y;
	} Orientation;

class DecoderRegistration;



class __declspec(dllexport) CDcmInformation
{
	void*	m_pDcmFileFormat;
	void*	m_pDicomImage;
	void*	m_pixels;
	void	FreeBitmap();
	//static const DecoderRegistration m_decoderRegistration;
public:
	CString	m_szFileName;
	
	CString	m_szModality;
	
	

	CString m_szSOPClassUID;;
	CString m_szSOPInstanceUID;;
	CString	m_szStudyInstanceUID;
	CString	m_szStudyDescription;
	CString	m_szStudyDate;
	CString	m_szStudyTime;
	CString	m_szSeriesInstanceUID;
	CString	m_szSeriesDescription;
	CString	m_szSeriesDate;
	CString	m_szSeriesTime;
	CString	m_szSeriesNumber;

	//Generic	
	CString	m_szIntitutionName;
	CString m_szIntitutionAddress;
	CString	m_szPatientID;
	CString	m_szPatientName;
	CString	m_szPatientBirthDate;
	CString	m_szPatientSex;
	CString m_szAcquisitionDate;
	CString m_szAcquisitionTime;
	CString m_szAccessionNumber;
	CString	m_szPatientOrientation;
	CString m_szImageOrientation;
	CString m_szOrientationString;


	//CR
	CString	m_szStationName;
	CString m_szStudyID;
	CString m_szContrastBolusAgent;
	CString	m_szSerialNumberInfo;
	CString m_szBodyPartExamined;
	CString m_szPatientPosition;
	CString m_szImageComment;
	CString m_szLUTWindowLevel;
	CString m_szERMF;
	CString m_szPixelSpacingType;
	CString m_szPixelSpacingDesc;

	//CT
	CString m_szManufacturer;
	CString m_szManufacturerModelName;
	CString m_szImageNumberInfo;
	CString m_szPatientLocationInfo;
	CString m_szManificationInfo;
	CString m_szLateralityInfo;
	CString m_szImageSize;
	CString m_szImageID;
	CString m_szConvolutionKernel;
	CString m_szKVP;
	CString m_szXRayTurbe;
	CString m_szThicknessAndPitch;
	CString m_szGantryDetectorTilt;
	CString m_szExposureTime;
	CString m_szGantyPeriod;
	CString m_szTableSpeed;
	CString m_szScanPitchRatio;
	CString m_szDFOV;

	//MR
	CString m_szMagneticFieldStrength;
	CString m_szEchoTrainLength;
	CString m_szRepetitionTime;
	CString m_szEchoTime;
	CString m_szReceivingCoil;
	CString m_szSliceThickness;
	CString	m_szSpacingBetweenSlices;
	//NM
	CString m_szRadiopharmaceutical;
	CString m_szEnergyWindowName;
	CString m_szCountsAccumulated;
	CString m_szActualFrameDuration;

	
	Point3D	m_position;
	Orientation m_orientation;

	int		m_nInstanceCount;
	int		m_nSize;
	int		m_nDepth;
	int		m_nBpp;
	int		m_nBitsAllocated;
	int		m_nBitsStored;
	int		m_nHighbit;
	int		m_nWidth;
	int		m_nHeight;
	bool	m_IsColor;
    double	m_nSlope;
	int		m_nIntercept;
	bool	m_IsSigned;
	int		m_nInstanceNumber;
	double	m_nSpacing_x;
	double	m_nSpacing_y;
	int		m_nIndex;
	double	m_nWindowMin;
	double	m_nWindowMax;	
	double	m_nDefaultWindowCenter;
	double	m_nDefaultWindowWidth;
	double	m_nWindowCenter;
	double	m_nWindowWidth;
	double	m_nCurWindowCenter;
	double	m_nCurWindowWidth;
	int		m_nNumberOfFrame;
	
	float	m_fRotate;
	bool	m_bFlipX;
	bool	m_bFlipY;
	bool	m_bGrey;
	bool	m_bInvert;
	bool	m_IsOpen;
	bool	m_IsChangeData;
	int		m_nCurrentFrame;

	BITMAPINFO*	m_pbmi;
	Bitmap*	m_pBitmap;

	CDcmInformation(void);
	~CDcmInformation(void);
	void	Reset();
	void	LoadFile(LPCTSTR lpszFile);
	bool	IsOpen();
	BITMAPINFO*	GetBitmapInfo();
	Bitmap*	GetBitmap();
	double	GetWindowWidth();
	double	GetWindowCenter();
	void	SetWindowWidth(double windowWidth);
	void	SetWindowCenter(double windowCenter);
	void	SetMinMaxWindow();
	void	GetMinMaxWindow(double& center, double& max);
	void	SetRotate(float fRotate);
	void	SetFlipX(bool bFlip);
	void	SetFlipY(bool bFlip);
	void	SetGrey(bool bGrey);
	void	SetInvert(bool bInvert);
	void	MoveFirstFrame();
	void	MoveNextFrame();
	void	MovePrevFrame();
	void	MoveLastFrame();
	void	SetCurrentFrame(int nFrame);
	int		GetCurrentFrame();
	int		GetNumberOfFrame();
	bool	Save();
	bool	SaveAs(LPCTSTR lpszFileName);


	bool	transform_to_viewport(const Point3D& a, Point3D& b);
	bool	transform_to_world(const Point3D& a, Point3D& b);
};

#endif
