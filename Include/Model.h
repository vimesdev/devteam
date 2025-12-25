#ifndef MODEL_H
#define MODEL_H

#pragma once
#include <afxver_.h>
#include "GuiDefs.h"
#include "Db.h"
#include "Record.h"
#include "DateTime.h"
#include "MFCWidget.h"

class CModelView;

#if !defined(_MFC_BLD) && defined(_AFXDLL)
#define AFX_IMPORT_MODEL __declspec(dllimport)
#else
#define AFX_IMPORT_MODEL
#endif

class CModuleInfo;

class AFX_EXT_CLASS CModel : public CObject
{
	BOOL m_bAutoDestroy;

protected:
	BOOL		m_bIsTemporary;
	CDb*		m_pDB;
	int			m_nBackend;
	CString		m_szCurrentDirectory;
	CString		m_szStatusDescription;
	CString		m_szStatusNote;
	CString		m_szStatusKey;
	CString		m_szServerPort;
	bool		m_bLoadSystem;

	static CRuntimeClass*	m_pDefaultModel;
	static CModel*			m_pModel;
	
	HINSTANCE	m_hDefInstance;
public:
	HINSTANCE	m_hResourceDLL;
	CModel(BOOL bTemporary = FALSE);
	virtual ~CModel();

	static CModel* __stdcall CreateInstance(CRuntimeClass* pVisualManager);
	static void __stdcall SetDefaultModel(CRuntimeClass* pRTI);
	static CModel* __stdcall GetInstance();
	

	bool	m_bLogin;
	bool	m_bEnableLogin;
	int		m_nLoginCount;
	bool	m_bWorking;
	CString		m_szModuleID;
	CString		m_szModuleName;




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
	CStringArray	m_ReplicationHosts;
	CArray<CDb*, CDb*> m_DbInstances;
	CMap<CString, LPCTSTR, CString, CString> m_props;
	CString m_szURL;
	
	CArray<CModuleInfo*, CModuleInfo*>	m_modules;
	int		m_nActiveModule;
	CModelView* m_pModelView;
public:
	bool		m_bConnecting;
	CRecord*	m_rs;

	CString			m_szHealthService;
	CString			m_szHospitalName;


	
	CDb*	CreateDbInstance();
	CDb*	GetDbInstance();
	CDb*	GetDbReplicatoin(int nIndex = 0);

	bool	OpenDatabase();
	bool	OnSystemLogin();
	void	OnSystemLogout();
	bool	IsSystemLogin();
	void	EnableLogin(bool bEnable);
	bool	IsEnableLogin();
	void	OnSystemChangePassword();

	virtual void OnInitializes();
	virtual void OnCleanup();
	virtual void OnLoadSystem();
	virtual void OnLoadSystemData(LPCTSTR lpszName, LPCTSTR lpszData);

	int			ExecSQL(LPCTSTR lpszSQL);
	CString		ExecDML(LPCTSTR lpszSQL);
	CString		GetHost() { return m_szHost; }
	CString		GetPort() { return m_szPort; }
	CString		GetCurrentUser();
	CString		GetCurrentPassword();
	CString		GetDatabase() { return m_szDatabase; }
	CString		GetSysDate(int nFmt = yyyymmdd);
	CString		GetSysTime(int nFmt = hhmm);
	CString		GetSysDateTime(int nFmt = yyyymmdd | hhmm);
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
	BOOL		DownloadFile(LPCTSTR szName, LPCTSTR szFileName);
	BOOL		UnlinkFile(LPCTSTR szName);
	void		BeginTransaction();
	void		Commit();
	void		Rollback();
	void		MD5Encrypt(char* szPassword, char* szSalt, LPTSTR lpszBuffer);
	LPCTSTR		GetLocalIP();
	bool		RebootServer();
	bool		RestartService();
	void		SystemLog(LPCTSTR lpszEvent, LPCTSTR lpszDesc);
	CString		GetCurrentDirectory();
	//Ham AddProp them bien toan cuc trong cac module
	void	AddProp(LPCTSTR lpszName, CString szValue);
	//Ham GetProp lay gia tri bien toan cuc trong cac module
	CString GetProp(LPCTSTR lpszName);
	void AddModule(CModuleInfo* pMod);
	CModuleInfo* GetModule(LPCTSTR lpszModuleId);
	CModuleInfo* GetModule(int nIndex);
	CModuleInfo* GetActiveModule();
	void	SetActiveModule(int nModId);
	int		LoadModules();
	CModelView* GetModelView();
	void	SetModelView(CModelView* pModelView);

};



////////////////////////////
//ModuleInfo
//////////////////////////////

class AFX_EXT_CLASS CModuleInfo
{
public:
	CWnd* m_pFrameWnd;
	bool	m_bEnable;
	UINT	m_nID;
	CString m_szModuleId;
	CString m_szName;
	CString m_szDescprition;
	IconData m_icon;
	int		m_nImage;
	HINSTANCE	m_hResourceHandle;

	CArray< CWidgetTile*, CWidgetTile*>	m_Functions;


	CModuleInfo();
	CModuleInfo(CWnd* pFrame, UINT nID, LPCTSTR lpszModuleID, LPCTSTR lpszName, LPCTSTR lpszDesc = _T(""));
	~CModuleInfo();
	int  Add(UINT nCmd, IconData icon, LPCTSTR lpszName, LPCTSTR lpszDesc = _T(""));
	int  Remove(UINT nCmd);
	void Enable(UINT nCmd, BOOL bFlag);
	void RemoveAll();


};





AFX_INLINE CModel* AFXAPI AfxGetModel() { return CModel::GetInstance(); }
AFX_INLINE CDb* AFXAPI AfxDatabase() { return CModel::GetInstance()->GetDbInstance(); }
AFX_INLINE void  AFXAPI AfxSetResourceInstance(LPCTSTR lpszMod, HINSTANCE hInst);
AFX_INLINE HINSTANCE AFXAPI AfxGetResourceInstance(LPCTSTR lpszModule);

#endif // ! MODEL_H_