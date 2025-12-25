#ifndef DCMMANAGER_H
#define DCMMANAGER_H

#include "gdiplus.h"
using namespace Gdiplus;

#define DCMModality				_T("0008,0060")
#define DCMAccesionNumber		_T("0008,0050")
#define DCMPatientName			_T("0010,0010")
#define DCMPatientID			_T("0010,0020")
#define DCMPatientBirthDate		_T("0010,0030")
#define DCMPatientSex			_T("0010,0040")

#define DCMStudyDate			_T("0008,0020")
#define DCMStudyTime			_T("0008,0030")
#define DCMSOPClassUID			_T("0008,0016")
#define DCMSOPInstanceUID		_T("0008,0018")
#define DCMStudyInstanceUID		_T("0020,000d")
#define DCMStudyID				_T("0020,0010")
#define DCMStudyDescription		_T("0008,1030")

#define DCMSeriesDate			_T("0008,0021")
#define DCMSeriesTime			_T("0008,0031")
#define DCMSeriesDescription	_T("0008,103e")
#define DCMSeriesNumber			_T("0020,0011")
#define DCMSeriesInstanceUID	_T("0020,000e")

#define DCMBodyPart				_T("0018,0015")
#define DCMNumberOfFrame		_T("0028,0008")
#define DCMNumberOfSeriesRelatedInstances _T("0020,1209")
#define DCMOtherPatientIDs      _T("0010,1000")
#define DCMInstanceNumber		_T("0008,0050")

typedef unsigned long	ulong;
typedef unsigned int	uint;




typedef struct tagDCMTAGINFO{
	uint	group;
	uint	element;
	uint	length;
	CString			keyString;
	CString			descString;
	CString			valString;
}DCMTAGINFO;

class CDcmSeries;
class CDCmImage;
class CDcmFindTag;
class CDcmInformation;
typedef CArray<CDcmInformation*,CDcmInformation*> DcmInformationList;


class __declspec(dllexport) CDcmFindTag{

public:		
	CString	m_szSpecificCharacterSet;
	CString	m_szAccesionNumber;
	CString	m_szPatientID;
	CString	m_szPatientName;
	CString m_szPatientBirthDate;
	CString m_szPatientAge;
	CString m_szPatientSex;
	
	CString m_szSeriesDate;
	CString m_szSeriesTime;
	CString m_szSeriesDescription;
	CString m_szSeriesInstanceUID;
	CString m_szSOPClassUID;	
	CString m_szSOPInstanceUID;
	CString m_szStudyDate;
	CString m_szStudyTime;
	CString m_szStudyInstanceUID;
	CString m_szStudyDescription;
	CString m_szStudyID;
	CString m_szModality;
	CString m_szModalitiesInStudy;
	CString m_szQueryRetrieveLevel;
	CString m_szSeriesNumber;
	CString	m_szImages;
	CString m_szBodyPart;
	CString m_szNumberOfSeriesReletedInstances;

	CDcmFindTag();
	CDcmFindTag(CDcmFindTag* org);
	~CDcmFindTag();
	void AddData(void* dataset);

};

/*
class CDicomImagePrivate;

class __declspec(dllexport) CDcmImage{
		CDicomImagePrivate *d;
protected:
		CString m_szFileName;
		ulong	m_nFrameCount;
		int				m_nRows;
		int				m_nCols;
		BITMAPINFO*		m_pbmi;  
		void*			m_pBitmap;
		void*			m_pControl;
		void	Reset();
		CDcmSeries*	m_pSeries;
public:
		double	m_windowWidth;
		double	m_windowCenter;
		CDcmImage();
		CDcmImage(CDcmSeries* pSeries);
		

		~CDcmImage();
		void	SetSeries(CDcmSeries* pSeries);
		void	SetDataset(void* dataset);
		bool	SetBitmap(void* newBitmap);
		void*	GetBitmap();
		void	SetControl(void *newControl);
		void*	GetControl();
		void	SetFileName(LPCTSTR lpszFileName);
		LPCTSTR	GetFileName();
		int		GetRows();
		int		GetCols();
		CDcmSeries* GetSeries();
		BITMAPINFO*	GetBitmapInfo();

	
};

class __declspec(dllexport) CDcmSeries{
protected:
	
	CList<CDcmImage*, CDcmImage*>	m_SeriesObjects;
	CList<void*, void*>		m_dcmDatasets;
	int		m_nSeriesNumber;
	CString m_szFileName;
	ulong	m_nFrameCount;
	Bitmap*	m_pBitmap;
public:
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
	CString	m_szIntitutionName;
	CString	m_szModality;
	CString	m_szStationName;
	CString	m_szPatientID;
	CString	m_szPatientName;
	CString	m_szPatientBirthDate;
	CString	m_szPatientSex;
	CString	m_szModel;
	CString	m_szDate;
	CString	m_szTime;

	int		m_nInstanceCount;
	CArray<void*,void*> m_pixels;
	int		m_size;
	int		m_depth;
	int		m_bpp;
	int		m_bits_allocated;
	int		m_bits_stored;
	int		m_highbit;
	int		m_width;
	int		m_height;
	bool	m_iscolor;
    double	m_slope;
	int		m_intercept;
	bool	m_is_signed;
	double	m_default_windowcenter;
	double	m_default_windowwidth;
	int		m_instancenumber;
	double	m_spacing_x;
	double	m_spacing_y;
	int		m_index;
	double	m_min;
	double	m_max;	
	double	m_nWindowCenter;
	double	m_nWindowWidth;
	float	m_fRotate;
	void*	m_pDataset;

	CDcmSeries();
	~CDcmSeries();
	void	SetSeriesNumber(int nSeriesNumber);
	int		GetSeriesNumber();
	void	SetSeriesInstanceUID(LPCTSTR lpszSeriesInstanceUID);
	LPCTSTR GetSeriesInstanceUID();
	void	SetFileName(LPCTSTR lpszFileName);
	LPCTSTR GetFileName();
	int		CreateInstance(void *dataset, LPCTSTR lpszFile=_T(""));

	int		AddFromDataset(void *dataset, LPCTSTR lpszFile=_T(""));
	int		AddObject(CDcmImage* newObj);
	int		InsertObject(int nIndex, CDcmImage* newObj);
	bool	RemoveObject(int nIndex);
	void	RemoveAllObject();
	CDcmImage*	GetObject(int nIndex);
	int		GetObjectCount();


	Bitmap*	CreateBitmap(int nFrame);
	void		ScaleToByte(UINT* pixels, int stride, int nWindowCenter,int nWindowWidth);
	double		RescaleFromBuffer(int nItem);
	double		RescaleToBuffer(int nItem);


};

*/

class __declspec(dllexport) CDcmManager
{
	CString	m_szClientAETitle;
	CString	m_szServerAETitle;
	CString	m_szServerAddress;
	int		m_nLocalPort;
	int		m_nServerPort;

	CString	m_szImageDirectory;
	bool	m_bLoaded;
	int		m_nFrameCount;
	
	CArray<DCMTAGINFO,DCMTAGINFO&> m_DicomTags;
	CArray<CDcmFindTag*, CDcmFindTag*> m_FindTags;
public:
	
	CString	m_szSOPInstanceUID;
	
	CString	m_szPatientID;
	CString	m_szPatientName;
	CString	m_szPatientBirthDate;
	CString	m_szPatientSex;
	CString	m_szPatientAge;
	CString	m_szStudyDate;
	CString	m_szStudyTime;
	CString	m_szModality;
	CString m_szManufacture;
	CString	m_szInstitutionName;
	CString	m_szReferringPhysicianName;
	CString	m_szStationName;
	CString	m_szStudyDescription;
	CString	m_szOtherPatientIDs;
	CString	m_szStudyInstanceUID;
	CString	m_szSerialInstanceUID;
	CString	m_SOPInstanceUID;
	CString	m_szInstanceNumber;

	double	m_dWindowWidth;
	double	m_dWindowCenter;
	ulong		m_nImageWidth;
	ulong		m_nImageHeight;

	CPtrArray		m_arBitmaps;
	CArray<void*,void*>		m_pDcmFiles;
	CArray<void*,void*>		m_dcmDataset;
	
	CDcmSeries*		m_pCurrentDcmSeries;
	CList<CDcmSeries*,CDcmSeries*> m_dcmSeries;
	
	CStringArray	m_arSeries;
	CArray<CDcmInformation*, CDcmInformation*> m_arDcmInfo;
	CArray<CDcmInformation*, CDcmInformation*> m_arSelectionDcmInfo;
	
	

	//Pointer of DicomImage class
	void*		m_DicomImage;
	//Point of DcmFileFormat class
	void*		m_DicomFileFormat;

	//List of files
	CStringArray	m_DicomFiles;

	CDcmManager(void);
	~CDcmManager(void);
	void	CleanupDicomFiles();

	bool	IsLoaded();	

	void	setWindow(double center, double width);
	//Client settings
	void	SetClientAETitle(LPCTSTR lpszAETitle);
	void	SetClientPort(int nPort);
	//Server Settings
	void	SetServerAETitle(LPCTSTR lpszCalledTitle);
	void	SetServerAddress(LPCTSTR lpszAddress);
	void	SetServerPort(int nPort);
	void	SetOutputDirectory(LPCTSTR lpszDir);
	
	int		LoadDirectory(LPCTSTR lpszDir);	
	int		LoadFile(LPCTSTR lpszFile);
	int		LoadToBitmap(LPCTSTR lpszFile);
	int		ImportDICOMDIR(LPCTSTR lpszFile);
	int		ImportDirectory(LPCTSTR lpszDir);

	int		IsValidateParameters();

	int		echoscu(LPCTSTR lpszParameters=_T(""));
	int		findscu(LPCTSTR lpszParameters=_T(""));
	int		movescu(LPCTSTR lpszParameters=_T(""));
	int		storescu(LPCTSTR lpszParameters=_T(""));	
	int		termscu(LPCTSTR lpszParameters=_T(""));
	
	int		printscu(LPCTSTR lpszParameters=_T(""));
	int		printsprt(LPCTSTR lpszParameters=_T(""));

	void	AddBitmap(void* pBitmap);
	void*	GetBitmap(int nIndex);
	int		GetFrameCount();
	HBITMAP	GetHBITMAP(int nFrame);
	void	GetBitmap(int nFrame, BITMAPINFO &bi, void* data);
	int		GetWidth();
	int		GetHeight();
	void	ReleaseBitmaps();

	void	RemakeBitmap();

	
	bool	CreateDicomFile(LPCTSTR lpszFileName);
	const char*	CreateDicomFileFromHBITMAP(LPCTSTR lpszPath);
	bool	CreateTempDicomFile(LPCTSTR lpszLoadFile, LPCTSTR lpszSaveFile, HBITMAP hbmp);
	bool	ConvertBitmapToDcm(LPCTSTR lpszBitmapFile, LPCTSTR lpszDcmFile, 
		double windowWidth=128, double windowCenter=256, float resolution=1);
	bool	SaveAs(LPCTSTR lpszFileName);	
	bool	UpdateDcmInformation(LPCTSTR lpszFileName);

	CDcmFindTag* GetFindTag(int nIndex);	
	int			GetFindTagCount();

	void	AddTags(void* dataset);
	DCMTAGINFO	GetTag(int nIndex);
	int		GetTagsCount();	
	void	RemoveAllFindTags();
	int		MakeBitmap(int nIndex, CPtrArray& hBitmaps);
	HBITMAP MakeHBITMAP(int nIndex, int nFrame);



	//Series functions
	int			AddSeries(CDcmSeries* dcmseries);
	bool		RemoveSeries(int nIndex);
	void		RemoveAllSeries();
	CDcmSeries*	GetSeries(int nIndex);
	int			GetSeriesCount();
	void		SelectSeries(int nIndex);
	CDcmSeries*	GetSelectedSeries();
	void*		GetFrameData(int nSeriesIndex, int nFrame);
	void		ReplaceBitmap(int nIndex, void* newBmp);	


	int			AddSeriesInstanceUID(LPCTSTR lpszSeriesInstanceUID)	;
	void		SelectSeriesInstanceUID(int nIndex);
	bool		SelectSeriesInstanceUID(LPCTSTR lpszSeriesInstanceUID);
	CDcmInformation*	GetDcmInformation(int nIndex);
	CDcmInformation*	GetDcmInformation(LPCTSTR lpszSeriesInstanceUID, int nIndex);
	int			GetSelectionSeriesCount();
	int			GetNumberOfSeries();
	LPCTSTR		GetSeriesInstanceUID(int nIndex);
	LPCTSTR		GetSOPInstanceUID();

	void		ResetInformation();
	bool		SaveAsDicomFile(LPCTSTR lpszFileName);

	int		AddHBITMAP(HBITMAP hBitmap);
	int		InsertHBITMAP(int nIndex, HBITMAP hBitmap);
	void	RemoveHBITMAP(int nIndex);
	void	ReplaceHBITMAP(int nIndex, HBITMAP hBitmap);

	
	

};

void convert_unicode(const char* szString, CString& szData);
void convert_ascii(LPCTSTR lpszSource, char* szDest);
int GetEncoderClsid(const WCHAR* format, CLSID* pClsid);
#endif

