#ifndef NAVIGATIONRAIL_H
#define NAVIGATIONRAIL_H

#pragma once
#include <vector>
#include <afxdockablepane.h>
#include <afxtaskspane.h>
#include "icons.h"

class CNavigationRail;

class AFX_EXT_CLASS CNavigationRailDestination {

	friend class CNavigationRail;
protected:

	int			m_imageID;
	IconData	m_icon;
	CRect		m_padding;
	CString		m_name;
	CString		m_tooltip;
	int			m_group;
	UINT		m_state;
	CRect		m_rect;
	DWORD		m_userData;
	UINT		m_cmdID;
	CSize		m_size;
	CWnd* m_pWnd;
public:
	CNavigationRailDestination(
		int nGroup,
		UINT nID,
		LPCTSTR lpszName,
		CWnd* pWnd = NULL
	) : m_cmdID(nID), m_name(lpszName), m_group(nGroup),
		m_state(ODS_DEFAULT), m_padding(CRect(5, 5, 5, 5)), m_userData(0), m_pWnd(pWnd)
	{
	}
	~CNavigationRailDestination() {}
	void SetState(UINT state) { m_state = state; }
	UINT GetState() { return m_state; }
	void SetGroup(int group) { m_group = group; }
	int	GetGroup() { return m_group; }
	void SetRect(CRect rc) { m_rect = rc; }
	CRect GetRect() { return m_rect; }
	void SetPadding(CRect padding) { m_padding = padding; }
	void SetName(LPCTSTR lpszName) { m_name = lpszName; }
	LPCTSTR GetName() { return m_name; }
	UINT	GetCommandID() { return m_cmdID; }
	void	SetImage(int nImageID) { m_imageID = nImageID; }
	int		GetImageID() { return m_imageID; }
	DWORD	GetUseData() { return m_userData; }
	void	SetUseData(DWORD useData) { m_userData = useData; }
	void	SetSize(CSize size) { m_size = size; }
	CSize	GetSize() { return m_size; }

	void	SetView(CWnd* pWnd) { m_pWnd = pWnd; }
	CWnd* GetView() { return m_pWnd; }
};



class AFX_EXT_CLASS CNavigationRail :
	public CMFCTasksPane
{
protected:
	int		m_cmdSelectedID;
	int		m_minWidth;
	int		m_minExtendedWidth;
	int		m_maxWidth;
	CMFCTasksPaneTask* m_pTaskSelected;
	std::vector<CNavigationRailDestination*>	m_destinations;
	CWnd* m_pWndActive;
public:
	CNavigationRail();
	~CNavigationRail();

	void Add(CNavigationRailDestination* pDestination);
	void RemoveAt(int nIndex);
	void RemoveByCommand(UINT nCmdID);
	void Remove(CNavigationRailDestination* pDestination);
	void RemoveAll();
	CNavigationRailDestination* Get(UINT nCmdID);
	std::vector<CNavigationRailDestination*>* GetList() { return &m_destinations; }

	void Show(BOOL bShow, UINT nDefaultCmdID=0);

	void SetActive(UINT nCmdID);
	virtual void OnDrawTasks(CDC* pDC, CRect rectWorkArea);
	virtual void OnClickTask(int nGroupNumber, int nTaskNumber, UINT nCmdID, DWORD_PTR dwUserData);

	DECLARE_MESSAGE_MAP()
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnDestroy();
};


#endif