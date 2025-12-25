#ifndef HMSDAILYORDER_H
#define HMSDAILYORDER_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CHMSDailyOrder : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndOrderInformation;
	CGuiLabel		m_wndOrderIDLabel;
	CGuiNumberCtrl	m_wndOrderID;
	CGuiLabel		m_wndOrderDateLabel;
	CGuiDateTimeCtrl	m_wndOrderDate;
	CGuiLabel		m_wndIssueDateLabel;
	CGuiDateTimeCtrl	m_wndIssueDate;
	CGuiLabel		m_wndNoteLabel;
	CGuiTextCtrl	m_wndNote;
	CGuiTabCtrl	m_wndDetailTab;
	CGuiButton		m_wndAdd;
	CGuiButton		m_wndEdit;
	CGuiButton		m_wndDelete;
	CGuiButton		m_wndConfirm;
	CGuiButton		m_wndCancel;
	CGuiButton		m_wndPrint;
	CGuiButton		m_wndSave;
	CGuiLabel		m_wndStockLabel;
	CGuiComboBox	m_wndStock;
	CGuiButton		m_wndPrintDelivery;
	CGuiButton		m_wndFind;
	CGuiLabel		m_wndStatusLabel;
	CGuiTextCtrl	m_wndStatus;
	long	m_nOrderID;
	CString	m_szOrderDate;
	CString	m_szIssueDate;
	CString	m_szNote;
	CString	m_szStockKey;
	CString	m_szStatus;
	//m_szCurrentOrderType: P: Pharmacy, E: Examination Department, T: Treatment Department
	CString	m_szCurrentOrderType;
	//int			OnOrderIDChange(); 
	//int			OnOrderIDSetfocus(); 
	//int			OnOrderIDKillfocus(); 
	int			OnOrderIDCheckValue(); 
	//int			OnOrderDateChange(); 
	//int			OnOrderDateSetfocus(); 
	//int			OnOrderDateKillfocus(); 
	int			OnOrderDateCheckValue(); 
	//int			OnIssueDateChange(); 
	//int			OnIssueDateSetfocus(); 
	//int			OnIssueDateKillfocus(); 
	int			OnIssueDateCheckValue(); 
	//int			OnNoteChange(); 
	//int			OnNoteSetfocus(); 
	//int			OnNoteKillfocus(); 
	int			OnNoteCheckValue(); 
	int			OnDetailTabSelectChange(int nOld, int nNew); 
	int			OnAddSelect(); 
	int			OnEditSelect(); 
	int			OnDeleteSelect(); 
	int			OnConfirmSelect(); 
	int			OnCancelSelect(); 
	int			OnPrintSelect(); 
	int			OnSaveSelect(); 
	int			OnStockSelectChange(int nOldItemSel, int nNewItemSel); 
	int			OnStockSelendok(); 
	//int			OnStockSetfocus(); 
	//int			OnStockKillfocus(); 
	int			OnStockLoadData(); 
	int			OnStockAddNew(); 
	int			OnPrintDeliverySelect(); 
	int			OnFindSelect(); 
	//int			OnStatusChange(); 
	//int			OnStatusSetfocus(); 
	//int			OnStatusKillfocus(); 
	int			OnStatusCheckValue(); 
	CHMSDailyOrder();
	~CHMSDailyOrder();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddHMSDailyOrder(); 
	int OnEditHMSDailyOrder(); 
	int OnDeleteHMSDailyOrder(); 
	int OnSaveHMSDailyOrder(); 
	int OnCancelHMSDailyOrder(); 
};
#endif
