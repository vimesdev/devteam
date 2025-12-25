#ifndef GUIMAINFRAME_H
#define GUIMAINFRAME_H 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) VIETNAM MEDICAL SOFTWARE JOINT STOCK COMPANY. 2008-2010.							  
//	All rights reserved.
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	hayhv@vimes.com.vn or hayhv@yahoo.com
//	http://www.vimes.com.vn
//
//	Ban quy cua CONG TY CO PHAN PHAN MEM Y TE VIET NAM (VIMES).
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh (GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	hayhv@vimes.com.vn hoac hayhv@yahoo.com
//	http://www.vimes.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////


// CGuiMainFrame frame
#include <afxframewndex.h>
#include <afxtempl.h>
#include "GuiToolBar.h"
#include "GuiStatusBar.h"
#include "GuiTabCtrl.h"
#include "GuiMenu.h"
#include "Db.h"
#include "Record.h"
#include "DateTime.h"
#include "LayoutCtrl.h"
#include "GuiDlgBar.h"
#include "GuiWaitDialog.h"
#include "odbc.h"

#include "PdfSignatureServer.h"



//Define layout mode
#define LAYOUT_NONE			0x000
#define LAYOUT_TABCTRL		0x001
#define LAYOUT_TASKPANEL	0x002
#define LAYOUT_DOCPANE		0x004

#define CMD_REFRESHDATA		10001

//Define Message Type
#define MT_LOGIN	0
#define MT_ACCEPT	1
#define MT_TEXT		2
#define MT_SENDFILE	3
#define MT_RECVFILE	4
#define MT_EXECSQL	5
#define MT_COMMAND	6
#define MT_LOGOUT	7
#define DATADIR	"DATA"

//Log event
#define LOG_INSERT	1
#define LOG_UPDATE	2
#define LOG_DELETE	3
#define LOG_CHANGE	4
#define LOG_CANCEL	5
#define LOG_SEND	6
#define LOG_ACCEPT	7
#define LOG_ISSUE	8


class SocketClient;
class CMFCToolBarEx;
class CMFCCaptionBarEx;
class CWidgetDrawer;
class CMFCBackstage;
class CReportPrinter;

class AFX_EXT_CLASS CGuiMainFrame : public CFrameWndEx
{

	DECLARE_DYNCREATE(CGuiMainFrame)
	DECLARE_GUIMENU()
	int		m_nBackend;
	ULONG_PTR gdiplusToken;
	CString		m_szCurrentDirectory;
	CString		m_szStatusDescription;
	CString		m_szStatusNote;
	CString		m_szStatusKey;


protected:
	HICON	m_hIcon;
	UINT	m_nHitTest;
	
	CString		m_szServerPort;
	float	m_nScreenDPI;
	CMFCBackstage*	m_pBackstage;    
	CGuiStatusBar	m_wndStatusBar;
    bool m_bEnableSwitchModule;

	std::vector<CString> m_vPermList;
    
    

public:
	CGuiMainFrame();           // protected constructor used by dynamic creation
	virtual ~CGuiMainFrame();
	CRect	GetCaptionRect();
	CSize	GetFrameSize() const;
	int HitTest(CPoint point);
	bool	m_bLogin;
	bool	m_bEnableLogin;
	int		m_nLoginCount;
	int		m_nLayoutStyle;
	bool	m_bWorking;
	CWnd*	m_pWorkingView;
	CArray<CWnd*, CWnd*> m_arWorkingView;
	CMap<CString, LPCTSTR, CWnd*, CWnd*>	m_mapWindows;
	CMap<CString, LPCTSTR, CString, CString> m_props;
	CString		m_szTitle;
	CString		m_szModuleID;
	CString		m_szModuleName;

	CWnd*			m_pChildView;
	CGuiMenu*		m_pMainMenu;
	CMFCCaptionBarEx* m_pAppBar;
	CMFCStatusBar*	m_pStatusbar;


	CSize	m_szSize;
	CString m_szUser;
	CString m_szPassword;
	CString m_szDatabase;
	CString m_szHost;
	CString m_szPort;
	CString m_szVersion;
	
	float		m_nScreenRatio;
	int			m_nFontSize;
	void	SetVersion(CString szVersion);
	void	ReconstructFont(int nSize);
	CStringArray	m_ReplicationHosts;	
	CArray<CDb*,CDb*> m_DbInstances;
	CString m_szURL;
	
	CPdfSignatureServer*	m_pSignServer;
	CString m_szSignTitle;
public:
	bool		m_bConnecting;
	CDb			m_db;
	//Khai bao bien db replication
	CDb*		m_dbRe;

	CRecord*	m_rs;

	CString			m_szHealthService;
	CString			m_szHospitalName;


	
	CDb*	CreateDbInstance();
	CDb*	GetDbInstance(int nIndex);

	float	GetScreenRatio();
	int		GetFontSize();
	bool	OpenDatabase();
	bool	OnSystemLogin();
	void	OnSystemLogout();
	bool	IsSystemLogin();
	void	SetEnableLogin(bool bEnable);
	bool	IsEnableLogin();
	void	OnSystemChangePassword();
	void	SetLayoutStyle(int nLayoutStyle);
	int		GetLayoutStyle();
	int		CreateToolBar();
	int		CreateStatusBar();
	virtual void	CreatePane();
	BOOL	CreateDialogBar();
	CWnd*	GetPane();
	void	SetActivePane(int nIndex);
	int		AddView(LPCTSTR lpszCaption, CWnd *pWnd);
	virtual void OnCreateComponents();
	virtual void OnInitializes();
	virtual void OnCleanup();
	virtual void OnLoadSystem();
	virtual void OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData);
	
	int			ExecSQL(LPCTSTR lpszSQL);
	CString		ExecDML(LPCTSTR lpszSQL);
	CString		GetHost(){ return m_szHost;}
	CString		GetPort() { return m_szPort;}
	CString		GetCurrentUser();
	CString		GetCurrentPassword();
	CString		GetDatabase(){ return m_szDatabase; }
	CString		GetSysDate(int nFmt=yyyymmdd);
	CString		GetSysTime(int nFmt=hhmm);
	CString		GetSysDateTime(int nFmt=yyyymmdd|hhmm);
	bool		SetStartWork(CWnd *pView, LPCTSTR lpszTitle);
	void		SetStatusText(LPCTSTR lpszText, int nIndex=0);
	void		FinishWork(CWnd *pWnd);
	void		FinishAllWorks();
	bool		IsWorking();
	bool		IsServerConnecting();
	BOOL		CheckPermission(CString szPermID);
	CString		GetModuleID();
	CString		GetVersion();
	BOOL		CheckVersion();
	BOOL		lo_import(LPCTSTR szName, LPCTSTR szFileName);
	BOOL		lo_export(LPCTSTR szName, LPCTSTR szFileName);
	BOOL		lo_unlink(LPCTSTR szName);

	BOOL		UploadFile(LPCTSTR szName, LPCTSTR szFileName);
    BOOL		UploadFile(LPCTSTR szName, LPCTSTR szFileName, LPCTSTR lpszDesc);
    BOOL		UploadData(LPCTSTR szName, std::string base64);
	BOOL		DownloadFile(LPCTSTR szName, LPCTSTR szFileName);
	BOOL		UnlinkFile(LPCTSTR szName);
	void		BeginTransaction();
	void		Commit();
	void		Rollback();
	void		MD5Encrypt(char* szPassword, char* szSalt, LPTSTR lpszBuffer);
	LPCTSTR		GetLocalIP();
	bool		RebootServer();
	bool		RestartService();
	SocketClient GetSocket();
	int			CallFunction(LPCTSTR lpszModuleName, LPCTSTR lpszFunctionName, void* pStack);
	void		SystemLog(LPCTSTR lpszEvent, LPCTSTR lpszDesc);
	CString		GetCurrentDirectory();
	void		AddRefWindow(LPCTSTR lpszWindowName, CWnd *pWnd);
	CWnd*		GetRefWindow(LPCTSTR lpszWindowName);
	void		RemoveRefWindow(LPCTSTR lpszWindowName);

	//Ham AddProp them bien toan cuc trong cac module
	void	AddProp(LPCTSTR lpszName, CString szValue);
	//Ham GetProp lay gia tri bien toan cuc trong cac module
	CString GetProp(LPCTSTR lpszName);

	virtual void RecalcLayout(BOOL bNotify = TRUE);
	float		GetScreenDPI();
	void		ShowBackstage(CView* pNewView);
	void		SwitchView(CWnd* pOldView, CWnd* pNewView);
    
	virtual CString GetSignatureUnikey(CReportPrinter *pPrinter, CString szForm,
                                       CString lpszSignID, long nDocumentNo,
                                       long nOrderId, CString szCode = _T(""));


protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
	

	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnNcCalcSize(BOOL bCalcValidRects, NCCALCSIZE_PARAMS* lpncsp);
	afx_msg void OnNcPaint();
	afx_msg void OnNcLButtonDblClk(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonDown(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonUp(UINT nHitTest, CPoint point);
#ifdef _WIN32_WINNT_MAXVER
	afx_msg LRESULT OnNcHitTest(CPoint point);
#else
	afx_msg UINT OnNcHitTest(CPoint point);
#endif
	afx_msg BOOL OnNcActivate(BOOL bActive);
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg LRESULT OnSetText (WPARAM wParam,LPARAM lParam);
	afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnNcMouseMove(UINT nHitTest, CPoint point);
	DECLARE_MESSAGE_MAP()
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
public:
	LRESULT OnHotKey(WPARAM wParam, LPARAM lParam);
	afx_msg BOOL OnNcCreate(LPCREATESTRUCT lpCreateStruct);
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};

static CWaitDialog	m_theAppWait;

void AFX_EXT_CLASS AfxBeginWait();
void AFX_EXT_CLASS AfxEndWait();


#if defined(DEV_BUILD) || defined(_DEBUG)
#define IS_DEV_BUILD 1
#endif

#endif