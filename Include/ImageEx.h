#ifndef IMAGEEX_H
#define IMAGEEX_H
#include <afxext.h>

#define	CIMAGE_MAX_MEMORY 268435456
/* Stock (i.e. already defined) filters */
#define STOCK_FILTER_BELL								0x00000000
#define STOCK_FILTER_BOX								0x00000001
#define STOCK_FILTER_CATMULLROM         0x00000002
#define STOCK_FILTER_COSINE             0x00000003
#define STOCK_FILTER_CUBICCONVOLUTION   0x00000004
#define STOCK_FILTER_CUBICSPLINE        0x00000005
#define STOCK_FILTER_HERMITE						0x00000006					
#define STOCK_FILTER_LANCZOS3						0x00000007
#define STOCK_FILTER_LANCZOS8						0x00000008
#define STOCK_FILTER_MITCHELL           0x00000009
#define STOCK_FILTER_QUADRATIC          0x0000000A
#define STOCK_FILTER_QUADRATICBSPLINE   0x0000000B
#define STOCK_FILTER_TRIANGLE						0x0000000C

#define STOCK_FILTERS                   0x0000000D


/* Errors */
#define E_INVALID_BITMAP                0x20000001
#define E_INVALID_BITMAP_DATA           0x20000002
#define E_UNABLE_TO_LOAD_BITMAP_BITS		0x20000003
#define E_UNABLE_TO_CREATE_BITMAP				0x20000004
#define	E_INVALID_OUT_BITMAP_DATA				0x20000005
#define E_MEMORY_ERROR									0x20000006
#define E_RESAMPLE_ERROR                0x20000007
#define E_UNABLE_TO_SET_BITMAP          0x20000008
#define E_UNABLE_TO_SET_FILTER          0x20000009

HBITMAP CreateResampledBitmap(HDC hdc, HBITMAP hBmpSource, DWORD dwWidth, DWORD dwHeight, DWORD dwFilter);
HBITMAP CreateUserFilterResampledBitmap(HDC hdc, HBITMAP hBmpSource, DWORD dwWidth, DWORD dwHeight, double (*CustomFilterFunc)(double), double dRadius);

class AFX_EXT_CLASS CImageEx
{
public:
	void*				m_pDib; //contains the header, the palette, the pixels
    BITMAPINFOHEADER    m_bih; //standard header
	BYTE*				m_pImage;
	DWORD				m_dwEffWidth;
	bool				m_bTransparent;
	long				m_nBkgndIndex;
	RGBQUAD				m_nBkgndColor;
	int					m_nBrightness;
	int					m_nContrast;
	int					m_nWidth;
	int					m_nHeight;
	CRect				m_rcImageSelection;
public:
	CImageEx();
	~CImageEx();
	void*	Create(DWORD dwWidth, DWORD dwHeight, DWORD wBpp, DWORD imagetype = 0);
	bool	Load(HBITMAP hBitmap, HPALETTE hPal=0);
	bool	Load(LPCTSTR lpszFileName);
	void	Copy(CImageEx& src, bool bData=true);
	bool	Destroy();
	void	Draw(CDC *pDC, CRect rect);
	long	Draw(HDC hdc, long x=0, long y=0, long cx = -1, long cy = -1);
	long	Draw(HDC hdc, const RECT& rect);

	void	StretchBlt(CDC *pDC, const RECT& rectDest, const RECT& rectSrc, DWORD dwROP=SRCCOPY);
	void	StretchDIBBits(CDC *pDC, const RECT& rectDest, const RECT& rectSrc, DWORD dwROP=SRCCOPY);
	long	GetSize();
	DWORD	GetPaletteSize();
	RGBQUAD* GetPalette() const;
	RGBQUAD GetPaletteColor(BYTE idx);
	bool	GetPaletteColor(BYTE i, BYTE* r, BYTE* g, BYTE* b);
	BYTE*	GetBits(DWORD row = 0);
	WORD	GetBpp() const;
	int		GetWidth() { return m_nWidth;}
	int		GetHeight(){ return m_nHeight; }
	// Image processing
	bool	Gamma(float gamma);
	bool	Light(long brightness, long contrast = 0);
	bool	Lut(BYTE* pLut);
	bool	GetSafeHandle() { return (m_pDib != NULL?true: false);}
	void	SetImageRectSelection(CRect rect);
	operator HBITMAP();
	bool	Resample(long newx, long newy, int mode, CImageEx* iDst);
	bool	IsValid() { return (m_pDib != NULL)?true:false;}
	BYTE*	GetData(){ return m_pImage; }
};


#endif