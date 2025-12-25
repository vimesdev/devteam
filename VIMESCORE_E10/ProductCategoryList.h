#ifndef PRODUCTCATEGORYLIST_H
#define PRODUCTCATEGORYLIST_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
#include "TreeCtrlEx.h"
class AFX_EXT_CLASS CProductCategoryList : public CGuiView{
protected:
	HTREEITEM		m_hItem;
public:
	CGuiGroupBox	m_wndGroupInformation;
	CGuiGroupBox	m_wndSearchInformation;
	CGuiLabel		m_wndSearchNameLabel;
	CGuiTextCtrl	m_wndSearchName;
	CGuiButton		m_wndSearch;

	CTreeCtrlEx		m_wndGroupTree;

	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CString	m_szParentID;
	CString	m_szCurrentID;
	long	m_nID;
	CString	m_szName;
	CString	m_szSearchName;
	int		m_nLevel;
	int		m_nSubItem;
	CDbfMap	m_product_categoryTbl;

	int			OnSearchSelect();
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnListLoadData(UINT nFlag=TVE_EXPAND);

	//int			OnSearchNameSetfocus(); 
	//int			OnSearchNameKillfocus(); 
	int			OnSearchNameCheckValue(); 
	void		OnGroupTreeSelChange(HTREEITEM, HTREEITEM);
	CProductCategoryList();
	~CProductCategoryList();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddProductCategoryList(); 
	int OnEditProductCategoryList(); 
	int OnDeleteProductCategoryList(); 
	int OnSaveProductCategoryList(); 
	int OnCancelProductCategoryList(); 
	int	SetMode(int nMode);

	void Refresh();
	//int CountTreeItems(CTreeCtrl *pTree, HTREEITEM hItem, BOOL Recurse);
	//CString GetItemText(CTreeCtrl *pTree, HTREEITEM hItem);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	BOOL PreTranslateMessage(MSG *pMsg);
	void OnResizeLayout();
};
#endif
