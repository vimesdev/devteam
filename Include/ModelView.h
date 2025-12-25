#ifndef MODELVIEW_H
#define MODELVIEW_H 
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

#include "Model.h"

// CModelView frame

class AFX_EXT_CLASS CModelView: public CView
{
protected:
	HICON		m_hIcon;
	std::vector<CString> m_lstPerm;
	CString		m_szModuleID;
	CString		m_szModuleName;
	CGuiMenu*	m_pMainMenu;

public:
	CModelView();           // protected constructor used by dynamic creation
	virtual ~CModelView();
	CWnd*				m_pActiveView;
	CArray<CWnd*, CWnd*> m_Views;
	CObList		m_Panes;
	CMap<CString, LPCTSTR, CWnd*, CWnd*>	m_mapWindows;
	CString		m_szTitle;
	CString		m_szFileHelp;
	
	CGuiView* m_pListWrap;
public:
	CDb			m_db;
	//Database replacation
	CDb* m_dbRe;
	CRecord* m_rs;
	

	CWnd* GetMainWnd();
	CDb* CreateDbInstance();
	CDb* GetDbInstance(int nIndex = 0);

	float	GetScreenRatio();
	int		GetFontSize();
	bool	OpenDatabase();
	bool	OnSystemLogin();
	void	OnSystemLogout();
	bool	IsSystemLogin();
	void	EnableLogin(bool bEnable);
	bool	IsEnableLogin();
	void	OnSystemChangePassword();
	void	SetLayoutStyle(int nLayoutStyle);
	int		GetLayoutStyle();
	CWnd* GetPane();
	CWnd* GetPanel() { return GetPane(); }

	void	SetActivePane(int nIndex);
	//Dung cho version cu
	void	SetActivePanel(int nIndex);
	int		AddView(LPCTSTR lpszCaption, CWnd* pWnd, IconData icon = icons::public_icon, LPCTSTR lpszTooltip = _T(""));
	virtual void OnCreateComponents();
	virtual void OnInitializes();
	virtual void OnCleanup();
	virtual void OnActivePane(int nIndex);

	int			ExecSQL(LPCTSTR lpszSQL);
	CString		ExecDML(LPCTSTR lpszSQL);
	CString		GetHost();
	CString		GetPort();
	CString		GetCurrentUser();
	CString		GetCurrentPassword();
	CString		GetDatabase();
	CString		GetSysDate(int nFmt = yyyymmdd);
	CString		GetSysTime(int nFmt = hhmm);
	CString		GetSysDateTime(int nFmt = yyyymmdd | hhmm);
	bool		SetStartWork(CWnd* pView, LPCTSTR lpszTitle);
	void		SetStatusText(LPCTSTR lpszText, int nIndex = 0);
	void		FinishWork(CWnd* pWnd);
	void		FinishAllWorks();
	bool		IsWorking();
	bool		IsServerConnecting();
	BOOL		CheckPermission(CString szPermID);
	CString		GetModuleID();
	CString		GetModuleName();
	CString		GetVersion();
	BOOL		CheckVersion();
	BOOL		lo_import(LPCTSTR szName, LPCTSTR szFileName);
	BOOL		lo_export(LPCTSTR szName, LPCTSTR szFileName);
	BOOL		lo_unlink(LPCTSTR szName);

	BOOL		UploadFile(LPCTSTR szName, LPCTSTR szFileName);
	BOOL		DownloadFile(LPCTSTR szName, LPCTSTR szFileName);
	BOOL		UnlinkFile(LPCTSTR szName);
	void		BeginTransaction();
	void		Commit();
	void		Rollback();
	void		MD5Encrypt(char* szPassword, char* szSalt, LPTSTR lpszBuffer);
	LPCTSTR		GetLocalIP();
	bool		RebootServer();
	bool		RestartService();

	int			CallFunction(LPCTSTR lpszModuleName, LPCTSTR lpszFunctionName, void* pStack);
	void		SystemLog(LPCTSTR lpszEvent, LPCTSTR lpszDesc);
	CString		GetCurrentDirectory();
	void		AddRefWindow(LPCTSTR lpszWindowName, CWnd* pWnd);
	CWnd* GetRefWindow(LPCTSTR lpszWindowName);
	void		RemoveRefWindow(LPCTSTR lpszWindowName);
	CString		GetUserName(LPCTSTR lpszUserID);


	//Ham AddProp them bien toan cuc trong cac module
	void	AddProp(LPCTSTR lpszName, CString szValue);
	//Ham GetProp lay gia tri bien toan cuc trong cac module
	CString GetProp(LPCTSTR lpszName);
	long	LoadSelectionList(CGuiComboBox* pWnd, CString szSelectionID, CString szKey, CString szFilter = _T(""));
	CString	GetSelectionDesc(CString szID, CString szCode);

	void BeginWaitCursor();
	void EndWaitCursor();

	//Cac function virtual dung trong cac class MainFrame
	virtual BOOL OnCmdReports();
	virtual BOOL OnCmdOptions();
	virtual BOOL OnCmdHelps();
	virtual BOOL OnCmdFeedback();
	virtual BOOL OnCmdAccount();

	DECLARE_MESSAGE_MAP()
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnNcDestroy();
	virtual void PostNcDestroy();
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
};

AFX_INLINE CModelView* AFXAPI AfxGetModelView() { return CModel::GetInstance()->GetModelView(); }




#endif