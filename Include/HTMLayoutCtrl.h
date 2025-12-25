#ifndef HTMLAYOUTCTRL_H
#define HTMLAYOUTCTRL_H

#pragma once

#include "htmlayout/htmlayout.h"
#include "htmlayout/htmprint.h"
#include "htmlayout/htmlayout_behavior.h"
#include "htmlayout/htmlayout_dom.hpp"
#include "htmlayout/behaviors/notifications.h"


#include "htmlayout/value.h" 
#include "htmlayout/htmlayout_dom.hpp"
#include "htmlayout/htmlayout_value.hpp"
#include "htmlayout/htmlayout_aux.h" // utf8 
#include "htmlayout/htmlite.h"

#include <afxtempl.h>

using namespace htmlayout;

#ifndef PDFIUM
#define PDFIUM 1

typedef struct fpdf_document_t__* FPDF_DOCUMENT;
typedef struct fpdf_form_handle_t__* FPDF_FORMHANDLE;
typedef struct fpdf_page_t__* FPDF_PAGE; 

#endif

AFX_EXT_CLASS extern UINT WM_HTML_RELOAD;

// CHTMLayoutCtrl

//bool GetHtmlResource(LPCTSTR pszName, /*out*/PBYTE& pb, /*out*/DWORD& cb, HMODULE hModule);
HBITMAP GetPageBitmap(const HDC hDC, FPDF_PAGE page, FPDF_FORMHANDLE form_handle, int width, int height, double scale);

class AFX_EXT_CLASS CHTMLayoutCtrl : 
	public CView,
	public htmlayout::event_handler


{
	DECLARE_DYNAMIC(CHTMLayoutCtrl)

	PrintEx* m_pPrinter; //HTMLLayout print manager
	CRect m_rcPrintArea; //print area in printer device units
	int m_scaled_width;  //scaled width of the print area for 1:1 scale

	double m_margin_left; //page margins in inches
	double m_margin_top;
	double m_margin_right;
	double m_margin_bottom;
	double m_offsetY;

	CSize  m_measured;

	LPCBYTE	m_pcb;
	DWORD		m_dataSize;
	bool		m_bExport;
	CString	m_szVersion;
	void	MakeSignature(LPCTSTR lpszFile,CSize szPaperSize);
	int		m_nMode;
	bool	m_bLoaded;
	CString		m_szFilter;
public:

	CString		m_szType;
	long		m_nDocumentNo;
	CString		m_szDeptID;
	int			m_nRefIndex;
	int			m_nRoomID;
	long		m_nOptIdx;
	long		m_nTreatIdx;
	long		m_nTreatTime;
	long		m_nFormID;
	CString		m_szForm;
	

	long m_nOrderId;
	CString m_szTableName;
	CString m_szUID;
	CString m_szTableView;
	CString m_szWhere;

	//Cac bien dung cho ky so
	CString		m_szTempNo;
	CString		m_szSignatureID;
	CString		m_szSignType;
	CString		m_szCategory;
	CString		m_szSignStatus;
	CString		m_szDesc;
	CString		m_szDocNo;
	CString		m_szOrderId;
	CString		m_szReference;
	CString		m_szFile;
	CString		m_szHasSignature;
	BYTE*		m_pdfBuffer;

	CString		m_szDefaultPrinter;

	//Cac bien load pdf
	FPDF_DOCUMENT m_pdfDoc;
	FPDF_FORMHANDLE	m_pdfFormHandle;
	FPDF_PAGE	m_pdfPage;
	int		m_nPages;
	CSize	m_szPageSize;
	int		m_nPaperType;
	int		m_nOrientation;

	CMap<int,int, FPDF_PAGE,FPDF_PAGE>	m_pages;
	CStringArray	m_ROFields;

	CHTMLayoutCtrl();
	virtual ~CHTMLayoutCtrl();

	void	Cleanup();

	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual void OnPrepareDC(CDC* pDC, CPrintInfo* pInfo = NULL);

	afx_msg void OnFilePrintPreview();
	afx_msg void OnFilePrint();
	afx_msg void OnPdfPrint();

	void	EnableControls(bool bFlag=true);
	void	EnableControl(LPCTSTR lpszName, bool bEnable);
	void	UpdateData(bool baveAndValidate=true);

	BOOL	SaveData(long nDocumentNo, bool bSaveAll = true);
	BOOL	SaveAsJson(long nDocumentNo);
	BOOL	Save(LPCTSTR lpszFile);
	void	OnAfterLoadData();
	bool	SetValue(LPCTSTR lpszName, CString szValue);
	void	GetValue(LPCTSTR lpszName, CString& szValue);
	void	SetMode(int nMode);
	int		GetMode();

	bool	Load(LPCTSTR lpszFile);
	bool	isLoaded() { return m_bLoaded; }

	
	virtual bool	LoadData(LPCTSTR lpszFilter=_T(""));
	virtual void	LoadDefault();

	dom::element Find(LPCTSTR lpszName);
	bool	ExportPDF(LPCTSTR lpszFileName, bool bOpen = false);
	bool	Signature(bool bPreview);
	bool	LoadSignature(LPCTSTR lpszSignatureID=NULL);
	CString CreateSignID();
	bool	PostAndPrintDocx(bool preview, bool print=true, bool sign=true);

	bool GetEMRData(long nDocNo, int nTreatTime, CString szType, CString szFilter, CString& szData);
	bool SaveEMRData(CString szType, CString szName, long nDocNo, CString szDeptId, long nRefIdx, int nRoomId, long nOptIdx, CString szData);
	void SaveFormData();
	void LoadFormData(CString szID);

	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
    
	

	DECLARE_MESSAGE_MAP()

public:
	// Generic creator
	virtual BOOL Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID);

	// Generic creator allowing extended style bits
	virtual BOOL CreateEx(DWORD dwExStyle, DWORD dwStyle, const RECT& rect,
		CWnd* pParentWnd, UINT nID);

	// Load html from memory buffer
	bool LoadHtml(LPCBYTE pb, DWORD nBytes);
	// load html from resource by name
	bool LoadHtmlResource(LPCTSTR pszName, HMODULE hModule = NULL);
	// load html from resource by id
	bool LoadHtmlResource(DWORD resID, HMODULE hModule = NULL);

	// Overridables

	// custom behavior notifications, see behaviors/notifications.h
	virtual LRESULT OnBehaviorNotify(UINT uMsg, WPARAM wParam, LPARAM lParam);

	// non-HTMLayout notifications
	virtual LRESULT OnHtmlGenericNotifications(UINT uMsg, WPARAM wParam, LPARAM lParam);

	// create control for <INPUT>, <WIDGET>, <TEXTAREA>, <SELECT>
	virtual LRESULT OnCreateControl(LPNMHL_CREATE_CONTROL pnmcc);

	// post-control-creation notification. Good place to set additional styles for builtin controls
	virtual LRESULT OnControlCreated(LPNMHL_CREATE_CONTROL pnmcc);

	// your chance to destroy child control in your own way. ::DestroyWindow used by default
	virtual LRESULT OnDestroyControl(LPNMHL_DESTROY_CONTROL pnmhl);

	// All hyperlink notifications generated by the hyperlink behavior.
	virtual LRESULT OnHyperLink(NMHL_HYPERLINK* pnmhl);
	virtual LRESULT OnHyperLinkEnter(NMHL_HYPERLINK* pnmhl);
	virtual LRESULT OnHyperLinkLeave(NMHL_HYPERLINK* pnmhl);
	virtual LRESULT OnHyperLinkClick(NMHL_HYPERLINK* pnmhl);

	// Override this to load data (images or css sheets) from places other than this app resources.
	virtual LRESULT OnLoadData(LPNMHL_LOAD_DATA pnmld);

	// Data arrived. Handle this if you want to store them somewhere for future use.
	virtual LRESULT OnDataLoaded(LPNMHL_DATA_LOADED pnmld);

	// All resources are in place.
	virtual LRESULT OnDocumentComplete();

	// Attach your own behavior to the element
	virtual LRESULT OnAttachBehavior( LPNMHL_ATTACH_BEHAVIOR lpab );

	void PostNcDestroy();

	// DOM helpers
	int     GetAttrInt(HELEMENT he, LPCSTR attrName, int defaultValue = 0);
	CString GetElementType(HELEMENT he);
	CString GetAttr(HELEMENT he, LPCSTR attrName);
	bool    HasAttr(HELEMENT he, LPCSTR attrName);

protected:
    

	// HTMLayout callback
	static LRESULT CALLBACK callback(UINT uMsg, WPARAM wParam, LPARAM lParam, LPVOID vParam);

	void SetCallback();

	virtual LRESULT WindowProc( UINT message, WPARAM wParam, LPARAM lParam);
	virtual LRESULT OnHtmlNotify(UINT uMsg, WPARAM wParam, LPARAM lParam);

	virtual LRESULT OnHtmlCommand(NMHL_COMMAND_CLICK *pnmCommand) ;

	LRESULT LoadResourceData(LPNMHL_LOAD_DATA pnmld);

	virtual BOOL on_event (HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason ); 
	virtual BOOL on_key(HELEMENT he, HELEMENT target, UINT event_type, UINT code, UINT keyboardStates);
	virtual void OnElementEvent(dom::element el){};

	bool GetHtmlResource(LPCTSTR pszName, /*out*/PBYTE& pb, /*out*/DWORD& cb, HMODULE hModule);


	bool IsReadOnly(LPCTSTR szField);
	std::wstring fromString(const wchar_t* str);
public:
	HELEMENT	GetRootElement();
	virtual BOOL PreTranslateMessage( MSG* pMsg );
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnNcDestroy();
	afx_msg void OnContextMenu(CWnd* /*pWnd*/, CPoint /*point*/);
    virtual BOOL DestroyWindow();
};

// HTML command map macros:
#define BEGIN_HTML_COMMAND_MAP \
	virtual LRESULT OnHtmlCommand(NMHL_COMMAND_CLICK *pnmCommand) {

#define ON_HTML_COMMAND(WStrHtmlElementId, Proc) \
	if( wcscmp(WStrHtmlElementId,pnmCommand->szElementID) == 0 ) \
{  Proc(); return 0; }

#define END_HTML_COMMAND_MAP \
	return 0; }

#pragma comment(lib, "../lib/HTMLayout.lib")

void writePrintJob(FPDF_PAGE page, FPDF_FORMHANDLE formHandle, HDC hDC, float scale=1.0, float zoom=1.0);
AFX_EXT_CLASS std::string markdownToHtml(const std::string& markdown);

#endif