// CImg.h : interface of the CImg class

// Purpose:	Declaration of the Platform Independent Image Class
// Author:	Alejandro Aguilar Sierra
// Created:	1995
// Copyright:	(c) 1995, Alejandro Aguilar Sierra <asierra@servidor.unam.mx>
// This software is based in part on the work of the Independent JPEG Group.
// Modifications by Troels K. aug. 2001
// Modifications by ing.davide.pizzolato@libero.it

#ifndef __img_H__
#define __img_H__

#include <windows.h>
#include <tchar.h>
#include <stdio.h> // FILE

#ifndef _countof
   #define _countof(array) (sizeof(array)/sizeof((array)[0]))
#endif

#ifdef CIMAGE_EXPORTS
   #define IMAGEAPI __declspec(dllexport)
#else
   #ifdef _IMAGEDLL
      #define IMAGEAPI __declspec(dllimport)
   #else
      #define IMAGEAPI 
   #endif
#endif

/////////////////////////////////////////////////////////////////////////////
// CImgBase - virtual base class

class IMAGEAPI CImgBase
{
// Attributes
public:
   void*	m_handle; //contains the header, the palette, the bits

// Construction
public:
   CImgBase(void);

// Operations
public:
   BOOL IsOpen(void) const { return (m_handle != NULL) ; }

// New virtuals
public:
	virtual ~CImgBase();
   virtual void Close(void);
	
   virtual BOOL DrawImplementation(HDC hdc, int xDst, int yDst, int cxDst, int cyDst, 
                                            int xSrc, int ySrc, int cxSrc, int cySrc) = 0;
};

/////////////////////////////////////////////////////////////////////////////
// CImg formats enumerator
enum img_type
{
   ENUM_img_format_bmp,
   ENUM_img_format_gif,
   ENUM_img_format_jpeg,
   ENUM_img_format_png,
   ENUM_img_format_icon,
   ENUM_img_format_tiff,
   ENUM_img_format_enumcount,
   ENUM_img_format_empty = -1,
};

// needed for png & gif
#pragma pack(1)
struct rgb_color_struct { BYTE r,g,b; };
#pragma pack()

// needed for png & mng
#define COLORTYPE_PALETTE	1
#define COLORTYPE_COLOR		2
#define COLORTYPE_ALPHA		4


#define _PI	3.1415926f											// Value of PI
#define _BITS_PER_PIXEL_32	32									// 32-bit color depth
#define _BITS_PER_PIXEL_24	24									// 24-bit color depth
#define _PIXEL	DWORD											// Pixel
#define _RGB(r,g,b)	(((r) << 16) | ((g) << 8) | (b))			// Convert to RGB
#define _GetRValue(c)	((BYTE)(((c) & 0x00FF0000) >> 16))		// Red color component
#define _GetGValue(c)	((BYTE)(((c) & 0x0000FF00) >> 8))		// Green color component
#define _GetBValue(c)	((BYTE)((c) & 0x000000FF))				// Blue color component
#define _NOISE_WIDTH	192
#define _NOISE_HEIGHT	192
#define _NOISE_DEPTH	64


typedef long fixed;												// Our new fixed point type
#define itofx(x) ((x) << 8)										// Integer to fixed point
#define ftofx(x) (long)((x) * 256)								// Float to fixed point
#define dtofx(x) (long)((x) * 256)								// Double to fixed point
#define fxtoi(x) ((x) >> 8)										// Fixed point to integer
#define fxtof(x) ((float) (x) / 256)							// Fixed point to float
#define fxtod(x) ((double)(x) / 256)							// Fixed point to double
#define Mulfx(x,y) (((x) * (y)) >> 8)							// Multiply a fixed by a fixed
#define Divfx(x,y) (((x) << 8) / (y))							// Divide a fixed by a fixed


enum InterpolationMethod {
		IM_NEAREST_NEIGHBOUR=1,
		IM_BILINEAR		=2,
		IM_BSPLINE		=3,
		IM_BICUBIC		=4,
		IM_BICUBIC2		=5,
		IM_LANCZOS		=6,
		IM_BOX			=7,
		IM_HERMITE		=8,
		IM_HAMMING		=9,
		IM_SINC			=10,
		IM_BLACKMAN		=11,
		IM_BESSEL		=12,
		IM_GAUSSIAN		=13,
		IM_QUADRATIC	=14,
		IM_MITCHELL		=15,
		IM_CATROM		=16,
		IM_HANNING		=17,
		IM_POWER		=18
	};



/////////////////////////////////////////////////////////////////////////////
// CImg

class IMAGEAPI CImg : public CImgBase
{
public:
//extensible information collector
typedef struct tagCImgInfo 
{
	DWORD	dwEffWidth;			//DWORD aligned scan line width
	BYTE*	pImage;				//THE IMAGE BITS
	BYTE*	pImageOrg;
	void*	pGhost;				//if this is a ghost, pGhost point to the body
//	char	szFileName[_MAX_PATH];
	enum	 img_type dwFileType;			//original image format
	BYTE	bColorType;			//used for PNG, MNG
	char	szLastError[256];	//debugging
	int		nBkgndIndex;		//used for GIF, PNG, MNG
	BYTE	nQuality;			//used for JPEG
	int		nFrame;				//used for TIF, GIF, MNG : actual frame
	int		nNumFrames;			//used for TIF, GIF, MNG : total number of frames
	DWORD	dwFrameDelay;		//used for GIF, MNG
} CImgINFO;
protected:
   BITMAPINFOHEADER  m_header; //standard header
	CImgINFO			m_info; //extended information
public:
	CImg();
   CImg(enum img_type);
   CImg(DWORD dwWidth, DWORD dwHeight, WORD wBPP);
	CImg(const CImg&);
	CImg(HBITMAP, int BPP = -1); //Windows resource
	CImg(HICON);		//Windows resource
	CImg(HANDLE hMem);		//Windows objects (clipboard)
	CImg(LPCSTR  filename, enum img_type);
	CImg(LPCWSTR filename, enum img_type);
	CImg(FILE*, DWORD imagetype=0);
	CImg& operator=(const CImg&);

   BOOL Attach(const CImg&);
   BOOL Detach(CImg* dst);

	void*	Create(DWORD dwWidth, DWORD dwHeight, WORD wBPP);
	void	Clear(BYTE bval=0);
	BOOL  Copy(const CImg& src);
	HANDLE CopyToHandle(HANDLE hMem);
	void	Transfer(CImg* src);
	BOOL	IsInside(int x, int y);
	////////////////////////////////////////////////////////////////////////////////
	bool CImg::Crop(const RECT& rect, CImg* iDst);
	////////////////////////////////////////////////////////////////////////////////
	bool CImg::Crop(long left, long top, long right, long bottom, CImg* iDst);

	unsigned long	GetLength();
	unsigned long	GetImageSize();
	LPBYTE	GetBits();
	BYTE*	GetBits(DWORD row);
	LPBYTE	GetDataBits();

   void EnableTransparency(BOOL bEnable = TRUE);
   BOOL HasTransparency(void) const;
	BOOL SetBkColor(COLORREF crTransparent);

   DWORD	GetWidth (void) const;
   DWORD	GetHeight(void) const;
   SIZE  GetSize  (void) const;

   DWORD	GetEffWidth() const;
	DWORD	GetColorCount() const;
	BYTE	GetColorType() const;
	WORD	GetBPP() const;
	enum img_type GetFileType();
	void SetFileType(enum img_type type);
	LPCSTR GetLastError();

	DWORD	GetPaletteSize();
	int   GetPixelIndex(int x,int y);
	RGBQUAD* GetPalette() const;
	RGBQUAD GetPaletteIndex(int idx) const;
	RGBQUAD GetPixelColor(int x,int y);
	int   FindPaletteIndex(COLORREF) const;
	BOOL	GetRGB(int i, BYTE* r, BYTE* g, BYTE* b);
	BYTE	GetNearestIndex(RGBQUAD);
	BOOL  Draw(HDC hdc, int xDst = 0, int yDst = 0, int cxDst = -1, int cyDst = -1, 
                       int xSrc = 0, int ySrc = 0, int cxSrc = -1, int cySrc = -1);
   BOOL  Draw(HDC hdc, const POINT&);
   BOOL  Draw(HDC hdc, const RECT&);
   BOOL  Draw(HDC hdc, const RECT& dst, const RECT& src);
	BOOL  Tile(HDC hdc, LPCRECT rc);
	BOOL  DrawBicubic(HDC hdc, const RECT& rc);

   void	BlendPalette(COLORREF cr,int perc);
	void	SetPalette(DWORD n, BYTE *r, BYTE *g, BYTE *b);
	void	SetPalette(const RGBQUAD* pPal,DWORD nColors=256);
	void	SetPalette(const rgb_color_struct *rgb,DWORD nColors=256);
	BOOL  SetPaletteIndex(int idx, BYTE r, BYTE g, BYTE b);
	BOOL  SetPaletteIndex(int idx, RGBQUAD);
	BOOL  SetPaletteIndex(int idx, COLORREF);
	void	SetPixelColor(int x,int y,RGBQUAD);
	void	SetPixelColor(int x,int y,COLORREF);
	void	SetPixelIndex(int x,int y,BYTE i);
	void	SetGreyPalette();
	bool	Lut(BYTE* pLut);
	bool	Lut(BYTE* pLutR, BYTE* pLutG, BYTE* pLutB, BYTE* pLutA=0);
	bool	IsGrayScale();

   RGBQUAD  HSLtoRGB(COLORREF cHSLColor);
	RGBQUAD  RGB2RGBQUAD(COLORREF);
	COLORREF RGBQUAD2RGB (RGBQUAD);
	RGBQUAD  RGBtoHSL(RGBQUAD lRGBColor);
	RGBQUAD  HSLtoRGB(RGBQUAD lHSLColor);
	void	   RGB2BGR(BYTE *buffer, int length);

   BOOL CreateFromFile(LPCSTR  filename, enum img_type);
	BOOL CreateFromFile(LPCWSTR filename, enum img_type);
	BOOL Save(LPCSTR  filename, enum img_type);
	BOOL Save(LPCWSTR filename, enum img_type);

// New virtuals
public:
	virtual BOOL Read (FILE*, enum img_type);
   virtual BOOL Write(FILE*, enum img_type);
   BOOL LoadFile(LPCSTR  filename, enum img_type itype){
	   return CreateFromFile(filename, itype);
   }
   BOOL LoadFile(LPCWSTR filename, enum img_type itype){
	   return CreateFromFile(filename, itype);
   }

   BOOL LoadResource(HRSRC hRes, enum img_type, HMODULE hModule = NULL);
   HBITMAP MakeBitmap();
   HBITMAP MakeBitmap(int nWidth, int nHeight);

// Operations - special effects
public:
   BOOL Flip();
	BOOL Mirror();
	BOOL Negative();
	BOOL GreyScale();
	BOOL Rotate(double angle);
	BOOL Exchange(COLORREF, COLORREF);
	BOOL WalkColors(COLORREF(*manipulate)(BYTE r, BYTE g, BYTE b, LPVOID), LPVOID lpUser = NULL);
	void Contrast(long contrast);
	void Brightness(long brightness);
	bool Resample(long newx, long newy, int mode, CImg* iDst);
	bool Resample(CImg src, long newx, long newy, int mode);

	////////////////////////////////////////////////////////////////////////////////
/**
 * Changes the brightness and the contrast of the image. 
 * \param brightness: can be from -255 to 255, if brightness is negative, the image becomes dark.
 * \param contrast: can be from -100 to 100, the neutral value is 0.
 * \return true if everything is ok
 */


	bool Light(long brightness, long contrast);

	//	gamma can be from 0.1 to 5.
	bool Gamma(float gamma);
	bool GammaRGB(float gammaR, float gammaG, float gammaB);

   const CImgINFO* GetInfo      (void) { return &m_info; }
   const BITMAPINFO * GetBitmapInfo(void) { return (const BITMAPINFO*)m_handle; }

// Implementation
public:
   virtual void Close(void);
	virtual ~CImg();
	virtual BOOL DrawImplementation(HDC hdc, int xDst, int yDst, int cxDst, int cyDst, 
                                            int xSrc, int ySrc, int cxSrc, int cySrc);

protected:
	void Startup();
	void Ghost(CImg *src);
	WORD HueToRGB(WORD n1,WORD n2,WORD hue);
	static float KernelBSpline(const float x);
	static float KernelLinear(const float t);
	static float KernelCubic(const float t);
	static float KernelGeneralizedCubic(const float t, const float a=-1);
	static float KernelLanczosSinc(const float t, const float r = 3);
	static float KernelBox(const float x);
	static float KernelHermite(const float x);
	static float KernelHamming(const float x);
	static float KernelSinc(const float x);
	static float KernelBlackman(const float x);
	static float KernelBessel_J1(const float x);
	static float KernelBessel_P1(const float x);
	static float KernelBessel_Q1(const float x);
	static float KernelBessel_Order1(float x);
	static float KernelBessel(const float x);
	static float KernelGaussian(const float x);
	static float KernelQuadratic(const float x);
	static float KernelMitchell(const float x);
	static float KernelCatrom(const float x);
	static float KernelHanning(const float x);
	static float KernelPower(const float x, const float a = 2);


};

#include "CImg.inl"

#endif // __img_H__
