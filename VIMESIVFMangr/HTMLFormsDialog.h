#ifndef HTMLFORMSDIALOG_H
#define HTMLFORMSDIALOG_H

#include "GuiDialog.h"
#include "GridListView.h"
#include "HTMLForms.h"


class CHTMLFormsDialog : public CGuiDialog
{
protected:
	CString		m_szFormType;
public:
	
	CString		m_szType;
	long		m_nDocumentNo;
	CString		m_szDeptID;
	int			m_nRefIndex;
	int			m_nRoomID;
	bool		m_bFound;
	long		m_nOptIdx;
	CString		m_szOptKey;
	CString	m_szSearch;
	
	CGridListView	m_wndList;
	CGuiLabel		m_wndOptLabel;
	CGuiComboBox	m_wndOpt;
	CHTMLForms	m_wndHtml;
	CGuiTextCtrl	m_wndSearch;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndUpdate;
	CGuiButton		m_wndSave;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndClose;
	CGuiButton		m_wndRefresh;


	void			OnListSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnListSelendok(); 
	//void			OnListSetfocus(); 
	//void			OnListKillfocus(); 
	long			OnListLoadData(); 

	void			OnOptSelectChange(int nOldItemSel, int nNewItemSel); 
	void			OnOptSelendok(); 
	//void			OnOptSetfocus(); 
	//void			OnOptKillfocus(); 
	long			OnOptLoadData(); 

	void			OnTabSelectChange(int nOld, int nNew); 
	void			OnAddSelect(); 
	void			OnUpdateSelect(); 
	void			OnSaveSelect(); 
	void			OnCancelSelect(); 
	void			OnPrintSelect(); 
	void			OnCloseSelect();
	int			OnSearchCheckValue();
	void			OnRefreshSelect();
	
	CHTMLFormsDialog(CWnd *pParent);
	~CHTMLFormsDialog();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void UpdateJson(BOOL bSaveAndValidate);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int SetMode(int nMode);
	int OnAddHMSTreatmentHtmlDialog(); 
	int OnEditHMSTreatmentHtmlDialog(); 
	int OnDeleteHMSTreatmentHtmlDialog(); 
	int OnSaveHMSTreatmentHtmlDialog(); 
	int OnCancelHMSTreatmentHtmlDialog(); 
	int OnHMSTreatmentHtmlDialogListLoadData(); 
	virtual BOOL PreTranslateMessage(MSG* pMsg);

};

#endif