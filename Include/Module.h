#ifndef MODULES_H
#define MODULES_H
#pragma once

#include "GuiDefs.h"
#include <afxwin.h>
#include "MFCDockablePane.h"

#define Module_Undefined		_T("")
#define Module_Shortcuts		L"shortcuts"
#define Module_Reception		L"RM"
#define Module_Examination		L"EM"
#define Module_HAR				L"HAR"
#define Module_Surgery			L"SMM"
#define Module_PatientRecord	L"PRC"
#define Module_Treatment		L"TM"
#define Module_HospitalFee		L"HF"
#define Module_Pharmacy			L"PM"
#define Module_Material			L"MM"
#define Module_Bloodbank		L"BB"
#define Module_Nutrition		L"NM"
#define Module_Clothes			L"CM"
#define Module_Laboratory		L"LIS"
#define Module_PACSOrdering		L"PACS"
#define Module_LIS_Barcode		L"LIS_MAP"
#define Module_PACS_Barcode		L"PACSMAP"
#define Module_Asset			L"FA"
#define Module_HRM				L"HRM"
#define Module_Accounting		L"ACC"
#define Module_Reports			L"RPT"
#define Module_DailyMeeting		L"DMM"
#define Module_Admin			L"SYS"
#define Module_GetIP			L"IP"
#define Module_SystemTracker	L"SYS"
#define Module_IVF				L"IVF"




class AFX_EXT_CLASS CModule
{
public:
	CString		mode;	//module id
	CString		name;
	CString		description;
	CMap<LPCTSTR, LPCTSTR, CPane*, CPane*>	panes;
	CView*	m_pActiveView;
	CFrameWnd*	m_pFrame;

	CModule(LPCTSTR mode);
	~CModule();
	int		GetViewCount();
	CView*	GetView(int nIndex);
	CView*	GetView(CString szName);
	LPCTSTR GetViewName(int nIndex);
	LPCTSTR GetViewDescription(LPCTSTR plszName);
	BOOL AddView(CView* pView, LPCTSTR lpszName, LPCTSTR lpszDescrition = _T(""));
	
	void	SetActiveView(int nIndex);
	CView*	GetActiveView() { return m_pActiveView; };
	CFrameWnd* GetFrameWnd() { return m_pFrame; }
	void	AddPane(LPCTSTR szName, CPane* pane);
	CPane* GetPane(LPCTSTR szName);
	void	RemovePane(LPCTSTR szName);
	void	RemoveAll();
	void	ShowPanes(BOOL bShow=TRUE);

};

class AFX_EXT_CLASS CModuleManager {
public:
	CWnd* m_pMainFrame;
	CModuleManager();
	~CModuleManager();

	static CModuleManager* m_pInstance;
	static CModuleManager* __stdcall GetInstance();
	CModule* m_pActiveModule;
	CArray<CModule*, CModule*>	m_Modules;
	CMap<UINT, UINT, CWnd*, CWnd*>	m_Frames;
	void AddFrame(UINT nID, CWnd* pFrame) { m_Frames[nID] = pFrame;  }

	int			AddModule(CModule* pMod) { return m_Modules.Add(pMod); }
	CModule*	AddModule(LPCTSTR mode, LPCTSTR lpszName, LPCTSTR lpszDesc) {
		CModule *newModule = new CModule(mode);
		newModule->name = lpszName;
		newModule->description = lpszDesc;
		AddModule(newModule);
		return newModule;
	}
	CModule* Get(LPCTSTR mode) {
		for (int i = 0; i < m_Modules.GetCount(); i++)
		{
			CModule* mod = m_Modules[i];
			if (mod->mode == mode)
				return mod;
		}
		return NULL;

	}
	CModule* GetAt(int nIndex)
	{
		if (nIndex < 0 || nIndex >= m_Modules.GetCount())
			return NULL;
		CModule* mod = m_Modules[nIndex];
		return mod;
	}

	int GetCount() { return m_Modules.GetCount(); }
	
	void SetActive(LPCTSTR mode)
	{
		CModule* pMod = Get(mode);
		if (pMod)
		{
			if (m_pActiveModule && m_pActiveModule != pMod)
			{
				m_pActiveModule->ShowPanes(FALSE);
			}

			m_pActiveModule = pMod;
			m_pActiveModule->ShowPanes(TRUE);
		}
	}
	void SetActiveAt(int nIndex)
	{
		CModule* pMod = GetAt(nIndex);
		if (pMod) m_pActiveModule = pMod;
	}
	CModule* GetActive()
	{
		return m_pActiveModule;
	}
	void	SetActiveView(int nIndex);
	CView*	GetActiveView();
	CView*	GetView(int nIndex);

	CDocument* GetActiveDocument();
	
};


#endif // ! MODULES_H
