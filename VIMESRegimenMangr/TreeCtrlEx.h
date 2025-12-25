#ifndef TREECTRLEX_H
#define TREECTRLEX_H
#include <map>
#include "GuiUtils.h"

const UINT WMU_ENABLETREEITEM = ::RegisterWindowMessage(_T("WMU_TPS_ENABLETREEITEM"));
 
class  CTreeCtrlEx : public CTreeCtrl
{
// Construction/Destruction
  DECLARE_DYNAMIC(CTreeCtrlEx)

public:
  CTreeCtrlEx();
  virtual ~CTreeCtrlEx();

// Properties
	void SetItemID(const HTREEITEM hItem, LPCTSTR szID);
	void SetItemFace(const HTREEITEM hItem, LPCTSTR face);
	void SetItemSize(const HTREEITEM hItem, int size);
	void SetItemBold(const HTREEITEM hItem, const bool bBold);
	BOOL GetItemBold(const HTREEITEM hItem) const;
	void SetItemColor(const HTREEITEM hItem, const COLORREF color);
	COLORREF GetItemColor(const HTREEITEM hItem) const;
	LPCTSTR GetItemID(const HTREEITEM hItem) const;
	void ExpandItem(HTREEITEM hti, UINT nCode);
	void SetSelChangeCallback(void (*_selChangefnc)(CWnd *pWnd, HTREEITEM oldItem, HTREEITEM newItem));
	void SetDblClickCallback(void (*_DblClickFnc)(CWnd *pWnd, HTREEITEM hItem));

// Members
protected:
  // Inner class storing individual tree item.
	struct sTreeItemProperties
  {
    sTreeItemProperties()
     : color((COLORREF)0xFFFFFFFF)
    {
		memset(face, 0, 35);
		_tcscpy(face, GetFaceName());
		facesize=10;
    }

    //! Tree  item color.
		COLORREF	color;
		TCHAR		face[35];
		int			facesize;
		TCHAR		id[35];
	};

  typedef std::map<HTREEITEM, sTreeItemProperties> tTreeItemProperties;
	tTreeItemProperties m_mapTreeItemProperties;

	void (*_OnSelItemChangeFnc)(CWnd *pCtrl, HTREEITEM oldItem, HTREEITEM newItem);
	void (*_OnDblClickFnc)(CWnd *pCtrl, HTREEITEM hItem);
	
protected:
  //{{AFX_MSG(CTreeCtrlEx)
    afx_msg void OnPaint();
	afx_msg LRESULT OnSetItemColor(WPARAM wParam, LPARAM lParam);
 //}}AFX_MSG
  DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTvnSelchanged(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMDblclk(NMHDR *pNMHDR, LRESULT *pResult);
};

#endif