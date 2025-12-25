#ifndef REPORTPRINTER_H
#define REPORTPRINTER_H
#include<math.h>
#include <afxwin.h>
#include "ReportEnginer.h"
#include "Excel.h"
#include "HTMLayoutCtrl.h"
#include "PdfSignature.h"
#include "Tracker.h"
#include "GuiButton.h"
#define		ZOOMFITWIDTH	1
#define		ZOOMFITHEIGHT	2
#define		ZOOMMING		3
typedef struct tagSIGNINFO{
	CRect	rc;
	int		page;
} SIGNINFO;

#ifndef PDFIUM
#define PDFIUM 1

typedef struct fpdf_document_t__* FPDF_DOCUMENT;
typedef struct fpdf_form_handle_t__* FPDF_FORMHANDLE;
typedef struct fpdf_page_t__* FPDF_PAGE;

#endif

#define SIGN_MODE_SIGN  0X01
#define SIGN_MODE_CANCEL  0X02

class CDrawSignObject;

class AFX_EXT_CLASS CReportPrinter :
	public CScrollView
{

	DECLARE_DYNCREATE(CReportPrinter)

	struct SubReportInfo{
		int nPage;
		int nFirst;
		int nLast;
	};
	struct PageInfo{
		int nPage;
		int nFirst;
		int nLast;
	};
	void(*_exportXLSFnc)(CWnd *pWnd);
	void(*_printCallbackFnc)(CWnd *pWnd);
	CFont	m_def_font;
	CString	m_szDriverName;
	CString	m_szPrinterName;
	CString	m_szPortName;
	CString m_szExportFile;
	CString m_szDefaultPrinter;
    

	HANDLE	m_hDevMode;
	HANDLE	m_hDevNames;
	CWnd*	m_pWndFocus;
	CMap<CString,LPCTSTR, CString, CString&> arMapFields;

	CMultiRectTracker	m_multiTrack;
	CObList				m_objects;

	CRectTracker	m_tracker;
    CDrawSignObject* m_pTrackerSign;
    CRect	m_rcTracker;
    bool	m_bSignTracking;    
	CString m_szPdfFile;
    CGuiButton m_wndSign;
    CGuiButton m_wndCancelSign;
    void ShowSignButton(bool bShow = true);

public:
	// Printing information
	CSize       m_CharSize;
	int         m_nPageHeight;
	CSize       m_LogicalPageSize,      // Page size in gridctrl units.
		m_PaperSize;            // Page size in device units.
	CFont       m_PrinterFont;  // for the printer
	int			m_nFirstRow;
	bool		m_bPrintReportHeaderOddPage;

	int		m_nMode;
	int		m_nSaveDC;
	CSize	m_szWindowOrg;
	CSize	m_szViewportOrg;
	CPoint	m_ptOffset;
	CRect	m_rcPrint;
	CRect	m_rcPage;
	bool	m_bBeginPrint;
	int		m_nZoomState;
	int		m_nPrintCopies;
	CString	m_szCurrentReportName;
	CDC*	m_pPrintDC;
	HDC		m_hDCPrint;

	int		m_nColumn;


	float	m_nZoom;
	float	m_nPrintScale;
	CPoint	m_ptOrig;
	bool	m_bDrag;
	bool	m_bZoomDraging;
	int		m_nPages;
	int		m_nPosition;
	int		m_nNumberOfCopies;
	int		m_nOldPaperType;	
	int		m_nOldOrientation;
	bool	m_bPrintLastPageFooter;
	CString m_szReportType;

	CString m_szTitle;
	CString m_szType;
	CString m_szForms;
	CString m_szDocumentNo;
	CString m_szOrderNo;
	CString m_szReference;
	BOOL	m_bEMR;
	BOOL	m_bSignature;
	UINT	m_nSignState;
	CPoint	m_offset;
	
	
	UINT	m_nSignatureMode;
	CString m_szSignatureID;
	CString m_szSignStatus;
	CString	m_szSignFormID;
	CString m_szPdfName;
	CString m_szPdfData;
    CString m_szFinish;

	BYTE*	m_pdfBuffer;
	long	m_docno;
	long	m_orderId;
	CString m_reference;
	CString m_szDescription;
	CRect	m_rcSignActive;
	int		m_nSignatureIndex;
	CString m_szSignNameFocused;
	bool	m_bEnableEMR;
	int		m_nSignCount;
	int		m_nSignedCount;
    CString m_szIsDigiSign;
    CString m_szDefaultSignField;
	CFrameWnd	*m_pFrame;
	CWnd*	m_pWndMain;

	CHTMLayoutCtrl* m_pHTMLayout;
	FPDF_DOCUMENT m_pdfDoc;
	FPDF_FORMHANDLE	m_pdfFormHandle;
	FPDF_PAGE	m_pdfPage;

	CSingleDocTemplate*	m_pTemplate;
	CString	m_szVersion;
	int		m_nMovePage;
	// Operations

	HWND	m_hwndViewer;
	void*	m_pds;
	CSize	m_szPageSize;
	CSize	m_szLogicalSize;

	float	m_nZoomPercentage;
	int		m_nTotalPage;
	int		m_nCurrentPage;
	int		m_nLeftMargin;
	int		m_nTopMargin;
	int		m_nRightMargin;
	int		m_nBottomMargin;
	int		m_nHeaderHeight;
	int		m_nFooterHeight;
	int		m_nPaperType;
	int		m_nPrintPaper;
	int		m_nOrientation;
	int		m_nPageCount;
	CRect	m_rcMargin;

	bool	m_bLoaded;
	bool	m_bDesign;
	bool	m_bPrintDirect;
	bool	m_bPrinted;
	bool	m_bPrintPageNumber;
	bool	m_bPrintPageHeader;
	CReportSection*	m_ReportHeader;
	CReportSection*	m_ReportFooter;
	CReportSection*	m_PageHeader;
	CReportSection*	m_PageFooter;
	CReportSection*	m_PageDetail;


	CMap<int,int, FPDF_PAGE,FPDF_PAGE>	m_pages;
	CMap<int,int, CRect, CRect>	m_rcPages;
	int m_pageIndex;
	CReportItem* m_patientSignObj;
	CImage m_img;
	CMap<CString,LPCTSTR, SIGNINFO, SIGNINFO>	m_SignInfo;
    CMap<CString, LPCTSTR, std::string, std::string> m_signatureFiles;
    



	CArray<CReportSection*, CReportSection*> m_aGroupHeader;
	CArray<CReportSection*, CReportSection*> m_aDetail;
	CArray<CReportSection*, CReportSection*> m_aGroupFooter;
	CArray<SubReportInfo, SubReportInfo&> m_SubReport;
	CArray<PageInfo, PageInfo&> m_PageInfo;
	CArray<int, int>	m_xlsColumnWidths;
	CArray<CReportItem*, CReportItem*> m_items;
    
	std::map<std::string, bool> m_SignedFields;

	CReportPrinter(void);
	~CReportPrinter(void);
	void	Cleanup();

	bool	Load(LPCTSTR lpszFileName);
	bool	LoadFromURL(LPCTSTR lpszURL,LPCTSTR lpszFile);
	bool	Read(CArchive& ar);
	void	LoadSignatureForm(LPCTSTR lpszFormID);
	void	SetSignMode(UINT nMode);

	void	ResetScrollSizes();	
	void	SetMargins(int nLeft, int nTop, int nRight, int nBottom);
	int		SetPaperType(int nType, int nOrientation);
	void	SetZoom(float nZoom);
	void	SetNumberOfCopies(int nNumberOfCopies);
	void	SetPrintPaper(int nPaperType);
	CSize	GetPaperSize();
	CSize	GetPaperSize(int nPaperType);
	int		GetPaperType();
	int		GetOrientation();
	int		GetTotalPage();
	int		GetCurrentPage();
	int		GetZoomScale();

	void	ProcessCommand(UINT nID);


	void	PrintPage(CDC *pDC, CRect& rect, int nPage, float nZoom=1);
	void	PrintHeader(CDC *pDC, CRect& rect);

	void	OnFilePrint();
	void	OnPdfPrint();
	bool	OnFilePrintPreview();
	void	SetXLSColumnWidth(int width, ...);

	bool	ExportToXLS();
	bool	ExportToXLS(CExcel *xls, CReportSection* rs, int& nCurrentRow);
	bool	ExportToPDF_V1(LPCTSTR lpszFileName, bool bOpen = false);
	bool	ExportToPDF(LPCTSTR lpszFileName, bool bOpen = false);
	bool	ExportToHTML(LPCTSTR lpszFileName, bool bOpen = false);
	bool	PrintToFile();
	void	ResetContents();
	void	ResetScrollBars();
	void	ComputePageSize(BOOL bOpen=FALSE);
	void	SetPageSize(CSize size);
	void	DocToClient(CRect& rect);
	void	DocToClient(CPoint& point);
	void	ClientToDoc(CPoint& point);
	void	ClientToDoc(CRect& rect);
	CPoint	GetCenterScrollPosition(void);
	int		FloatToInt(float fNumber);

	void	PrintSetup();
	void	ZoomIn();
	void	ZoomOut();
	void	DoZoom(float nZoom);
	void	FitPage();
	void	FitWidth();
	void	MoveFirst();
	void	MoveLast();
	void	MoveNext();
	void	MovePrev();
	void	MoveTo(int nPage);


	void	MapObjectsToXLS();

	BOOL	IsRectVisible(CRect rcClipBox, CRect rcItem);
	void	DrawPage(CDC *pDC, CRect rcItem);
	void	BeginPrint(CDC *pDC, CRect rect);
	void	InvalidClient();
	void	DrawPage(CDC *pDC);
	void	SetColumn(int nCol);
	void	SetPrintLastPageFooter(bool bFlag);
	void	SetExportFile(LPCTSTR lpszExportName);


	CReportSection*	GetReportHeader();
	CReportSection*	GetReportFooter();
	CReportSection*	GetPageHeader();
	CReportSection*	GetPageFooter();
	CReportSection*	GetGroupHeader(int nIndex=0);
	CReportSection*	GetGroupFooter(int nIndex=0);
	CReportSection*	GetDetail(int nIndex=0);
	CReportSection*	AddDetail(CReportSection* rs=NULL);
	CString	GetVersion() { return m_szVersion; }

	void OnInitialUpdate();
	void	SetExportCallback(void* pCallback);
	void	SetPrintCallback(void* pCallback);
	bool	IsPrinted();
	void	SetFieldValue(LPCTSTR lpszName, CString szValue);
	CString	DumpInformation();
	void	OnPrepareHTML();

	//Cac function lien quan den chu ky
	bool	HasSignature();
	bool	GetSignInfo(CString szSignID);
	CString GetSignPdfName();
	bool	PostSignature(CString szSignKey=_T(""));
    bool	OnSignature(LPCTSTR lpszSignName = _T(""), bool bSign = true);
	CString GetUnableValue(LPCTSTR szName);
	void	EnableEMR(bool bFlag){ m_bEnableEMR = bFlag;}
	bool	Signature(LPCTSTR lpszName, CRect rc, bool bUpload=true);
	void	CancelSignature();
	void	SendSignature();
	void	OnAfterSignature(LPCTSTR lpszFile);
	bool	IsSignedField(LPCTSTR lpszSignName);
	int		AnnoHitTest(CPoint point);
	void	UpdateInformations();
    void	SignManual();
    void	CancelSignManual();
    CString CreateSignaturePending(long nDocNo, long nOrderId,
                                   LPCTSTR lpszItemID = _T(""));
    void	AddSignatureFile(LPCTSTR lpszFile, LPCTSTR lpszSingautreID);
    CString GetSignatureID();

protected:
	virtual void OnDraw(CDC* /*pDC*/);

	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);

	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrintPreview(CDC* pDC, CPrintInfo* pInfo, POINT point, CPreviewView* pView);
	virtual void PostNcDestroy();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnPrepareDC(CDC* pDC, CPrintInfo* pInfo = NULL);

	virtual BOOL OnScroll(UINT nScrollCode, UINT nPos, BOOL bDoScroll = TRUE);
	virtual BOOL OnScrollBy(CSize sizeScroll, BOOL bDoScroll = TRUE);

	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg BOOL OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message);
	afx_msg void OnDestroy();
	afx_msg void OnNcDestroy();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnWindowPosChanging(WINDOWPOS* lpwndpos);

	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
    virtual BOOL PreTranslateMessage(MSG *pMsg);
};




#endif
