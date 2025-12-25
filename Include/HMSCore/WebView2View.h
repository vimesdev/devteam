#ifndef WEBVIEW2VIEW_H
#define WEBVIEW2VIEW_H

// WebView2BrowserView.h : interface of the CWebView2View class
//

#pragma once
#include <afxwin.h>
#include <wil/com.h>
#include <WebView2.h>
#include <wil/wrl.h>
#include <functional>
#include <string>

extern std::atomic<long> g_views;
extern std::atomic<long> g_browsers;
extern wil::com_ptr<ICoreWebView2Environment> g_webViewEnvironment;


class AFX_EXT_CLASS CWebView2View : public CView
{	
	long m_Id;
	
	// WebView2 members merged from BrowserWindowEdge
	wil::com_ptr<ICoreWebView2Controller> m_webViewController;
	wil::com_ptr<ICoreWebView2> m_webView;	
	std::wstring m_initialUri;
	bool m_isWebViewReady;

	std::function<void()> m_onWebViewFirstInitialized = nullptr;
	
	// Event tokens
	EventRegistrationToken m_WebMessageReceivedToken = {};
	EventRegistrationToken m_NavigationStartingToken = {};
	EventRegistrationToken m_NavigationCompletedToken = {};
	EventRegistrationToken m_ProcessFailedToken = {};
	EventRegistrationToken m_DevToolsSecurityToken = {};
	EventRegistrationToken m_DevToolsLogToken = {};
	
	// Event brokers
	Microsoft::WRL::ComPtr<ICoreWebView2WebMessageReceivedEventHandler> m_MessageBroker;
	Microsoft::WRL::ComPtr<ICoreWebView2NavigationStartingEventHandler> m_NavigationStartingBroker;
	Microsoft::WRL::ComPtr<ICoreWebView2NavigationCompletedEventHandler> m_NavigationCompletedBroker;
	Microsoft::WRL::ComPtr<ICoreWebView2ProcessFailedEventHandler> m_ProcessFailedBroker;
	Microsoft::WRL::ComPtr<ICoreWebView2DevToolsProtocolEventReceivedEventHandler> m_devToolsSecurityBroker;
	Microsoft::WRL::ComPtr<ICoreWebView2DevToolsProtocolEventReceivedEventHandler> m_devToolsLogBroker;
	
	Microsoft::WRL::Wrappers::Event NavigationCompletedEvent;
	
	void Init(std::wstring initialUri = L"https://www.bing.com/", std::function<void()> webviewCreatedCallback = nullptr);
	bool InitWebView();
	HRESULT SetEventsAndBrokers();
	HRESULT OnCreateEnvironmentCompleted(HRESULT result, ICoreWebView2Environment *env);
	HRESULT OnCreateControllerCompleted(HRESULT result, ICoreWebView2Controller *controller);
	void RunAsync(std::function<void(void)> callback);
	afx_msg LRESULT OnRunAsync(WPARAM wParam, LPARAM lParam);

public: // create from serialization only
	CWebView2View(LPCTSTR lpszUrl=NULL);
	DECLARE_DYNCREATE(CWebView2View)

public:
// Attributes
public:

// Operations
public:
    // Hàm khởi tạo WebView từ DLL
    bool Initialize();
    bool IsInited();
    // Hàm giải phóng WebView và DLL
    void Cleanup();
    HRESULT Browser(HWND hWnd, std::wstring url, int nShow = SW_SHOW);
    HRESULT CreateWebView(HWND m_hWnd, CRect rect, std::wstring userDataFolder);
    HRESULT Navigate(std::wstring url);
    HRESULT NavigateToString(std::wstring content);
    HRESULT GoRoute(std::wstring url);
    void ExecuteScriptWithResult(std::wstring script,
                                 std::function<void(const std::wstring &)>);
    void SendStringWebMessage(std::wstring message);
    
    HRESULT AddInitializeScript(std::wstring script, Microsoft::WRL::ComPtr<ICoreWebView2AddScriptToExecuteOnDocumentCreatedCompletedHandler> handler = nullptr);
    HRESULT InjectScript(std::wstring script, Microsoft::WRL::ComPtr<ICoreWebView2ExecuteScriptCompletedHandler> handler = nullptr);
    bool Login(LPCTSTR lpszMod = nullptr);
    bool IsLoging();
    void Resize(CRect rect);
    void Resize(RECT bounds = RECT());
    void Show(BOOL bShow);
    void ClearCache();
    void SetHighDPIAwareness();
    
    // Static methods from BrowserWindowEdge
    static BOOL InitInstance(HINSTANCE hInstance);
    static std::wstring s2ws(const std::string& str);
    static std::string ws2s(const std::wstring& wstr);
    static void CheckFailure(HRESULT hr, LPCWSTR errorMessage);
    static std::wstring GetAppDataDirectory();
    static std::wstring GetFullPathFor(LPCWSTR relativePath);
    static std::wstring GetFilePathAsURI(std::wstring fullPath);

    // Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
    virtual void OnDraw(CDC * /*pDC*/);

	virtual void OnInitialUpdate(); // called first time after construct
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	

// Implementation
public:
	virtual ~CWebView2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_Label_View;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
//	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	virtual void OnActivateView(BOOL bActivate, CView* pActivateView, CView* pDeactiveView);
    virtual void PostNcDestroy();
    afx_msg void OnDestroy();
};

#endif