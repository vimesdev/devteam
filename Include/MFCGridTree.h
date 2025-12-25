#ifndef MFCGRIDTREE_H
#define MFCGRIDTREE_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TreeDlg.h : header file
//

#include "MFCGridCtrl.h"


/////////////////////////////////////////////////////////////////////////////
// CMFCGridTree dialog
//////////////////////////////////////////////////////////////////////////////
/*********************************
Example

m_wndGridTree.EnableColumnAutoSize(TRUE);
m_wndGridTree.SetSingleSel(FALSE);
m_wndGridTree.EnableGroupByBox(FALSE);
m_wndGridTree.SetReadOnly();
m_wndGridTree.SetWholeRowSel();
//m_wndGridTree.EnableHeader(TRUE, AFX_GRID_HEADER_SORT); 

m_wndGridTree.SetRowMarker(FALSE);
m_wndGridTree.EnableGridLines(FALSE);
m_wndGridTree.EnableTreeLines(TRUE);
m_wndGridTree.EnableTreeButtons(TRUE);
m_wndGridTree.SetShowDragContext(FALSE);

m_wndGridTree.InsertColumn(0, _T("Name"), COLUMN0_WIDTH);
m_wndGridTree.InsertColumn(1, _T("Size"), COLUMN1_WIDTH);
m_wndGridTree.InsertColumn(2, _T("Type"), COLUMN2_WIDTH);
m_wndGridTree.InsertColumn(3, _T("Date"), COLUMN3_WIDTH);
m_wndGridTree.InsertColumn(4, _T("Attributes"), COLUMN4_WIDTH);

m_wndGridTree.SetHeaderAlign(1, HDF_RIGHT);
m_wndGridTree.SetColumnAlign(1, HDF_RIGHT);

srand((unsigned)time(NULL));

const int nColumns = m_wndGridTree.GetColumnCount();
// Create root item:
CMFCGridRow* pRoot = m_wndGridTree.CreateRow(nColumns);

pRoot->AllowSubItems();
pRoot->GetItem(0)->SetValue(_T("My Computer"));
pRoot->GetItem(0)->SetImage(0);

m_wndGridTree.AddRow(pRoot, FALSE);

// Create "disk C":
CMFCGridRow* pDiskC = m_wndGridTree.CreateRow(nColumns);

pDiskC->GetItem(0)->SetValue(_T("My Local Disk (C:)"));
pDiskC->GetItem(0)->SetImage(1);
pDiskC->AllowSubItems();

pRoot->AddSubItem(pDiskC, FALSE);

// Create "Users":
CMFCGridRow* pUsers = m_wndGridTree.CreateRow(nColumns);
ASSERT_VALID(pUsers);

pUsers->GetItem(0)->SetValue(_T("Users"));
pUsers->GetItem(0)->SetImage(3);

pRoot->AddSubItem(pUsers, FALSE);

// Create "Network":
CMFCGridRow* pNetwork = m_wndGridTree.CreateRow(nColumns);
ASSERT_VALID(pNetwork);

pNetwork->GetItem(0)->SetValue(_T("Network"));
pNetwork->GetItem(0)->SetImage(4);

pRoot->AddSubItem(pNetwork, FALSE);

// Create "c:\\Images":
CMFCGridRow* pFolder = m_wndGridTree.CreateRow(nColumns);
ASSERT_VALID(pFolder);

pFolder->GetItem(0)->SetValue(_T("Images"));
pFolder->GetItem(0)->SetImage(2);
pFolder->AllowSubItems();

pDiskC->AddSubItem(pFolder, FALSE);
const int nColumns = m_wndGridTree.GetColumnCount();

for (int i = 0; i < 2; i++)
{
	CMFCGridRow* pFile = m_wndGridTree.CreateRow(nColumns);
	ASSERT_VALID(pFile);

	CString strFileName;
	strFileName.Format(_T("Image%04d"), i);

	// Set name + icon:
	pFile->GetItem(0)->SetValue((LPCTSTR)strFileName);
	pFile->GetItem(0)->SetImage(5);

	// Set size:
	pFile->GetItem(1)->SetValue((long)i);

	// Set type:
	pFile->GetItem(2)->SetValue(_T("Image file"));

	// Set date:
	COleDateTime date = COleDateTime::GetCurrentTime() -
		COleDateTimeSpan(i, 0, 0, 0);

	pFile->ReplaceItem(3, new CMFCGridDateTimeItem(date));

	// Set attributes:
	pFile->GetItem(4)->SetValue(i % 2 ? _T("r") : _T(""));

	pFolder->AddSubItem(pFile, FALSE);
}



// Create "c:\\Music":
CMFCGridRow* pFolder2 = m_wndGridTree.CreateRow(nColumns);
ASSERT_VALID(pFolder2);

pFolder2->GetItem(0)->SetValue(_T("Music"));
pFolder2->GetItem(0)->SetImage(2);
pFolder2->AllowSubItems();

pDiskC->AddSubItem(pFolder2, FALSE);
for (int i = 0; i < 3; i++)
{
	CMFCGridRow* pFile = m_wndGridTree.CreateRow(nColumns);
	ASSERT_VALID(pFile);

	CString strFileName;
	strFileName.Format(_T("Song%04d"), i);

	// Set name + icon:
	pFile->GetItem(0)->SetValue((LPCTSTR)strFileName);
	pFile->GetItem(0)->SetImage(6);

	// Set size:
	pFile->GetItem(1)->SetValue((long)i);

	// Set type:
	pFile->GetItem(2)->SetValue(_T("Music file"));

	// Set date:
	COleDateTime date = COleDateTime::GetCurrentTime() -
		COleDateTimeSpan(i, 0, 0, 0);

	pFile->ReplaceItem(3, new CMFCGridDateTimeItem(date));

	// Set attributes:
	pFile->GetItem(4)->SetValue(i % 2 ? _T("r") : _T(""));

	pFolder2->AddSubItem(pFile, FALSE);
}



m_wndGridTree.AdjustLayout();

************************************************************************/



class AFX_EXT_CLASS CMFCGridTree : public CMFCGridCtrl
{
	// Construction
public:
	CMFCGridTree(CWnd* pParent = NULL);   // standard constructor
	//{{AFX_DATA(CMFCGridTree)
	BOOL	m_bMultipleSel;
	BOOL	m_bGridLines;
	BOOL	m_bTreeLines;
	BOOL	m_bTreeButtons;
	BOOL	m_bCheckBoxes;
	//}}AFX_DATA

	void EnableShowTreeLines(BOOL bFlag);
	void EnableShowGridLines(BOOL bFlag);
	void EnableShowTreeButton(BOOL bFlag);
	void EnableShowCheckBox(BOOL bFlag);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCGridTree)

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CMFCGridTree)
	virtual BOOL OnInitTree();
	afx_msg void OnCheckGridlines();
	afx_msg void OnCheckMultiplesel();
	afx_msg void OnCheckTreelines();
	afx_msg void OnCheckTreebuttons();
	afx_msg void OnCheckCheckboxes();
	//}}AFX_MSG
	afx_msg LRESULT OnHeaderCheckClick(WPARAM wp, LPARAM lp);
	afx_msg LRESULT OnCheckClick(WPARAM wp, LPARAM lp);
	DECLARE_MESSAGE_MAP()
	

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TREEDLG_H__8AA0F68E_6117_4B66_8C12_42155CA23060__INCLUDED_)
