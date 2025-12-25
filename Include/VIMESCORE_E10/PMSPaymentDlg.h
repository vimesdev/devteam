#ifndef PMSPAYMENTDLG_H
#define PMSPAYMENTDLG_H
#include "GuiUtils.h"
#include "GuiDialog.h"
#include "DbField.h"
class CPMSPaymentDlg : public CGuiDialog{
protected:
public:
	CGuiGroupBox	m_wndPaymentInformations;
	CGuiLabel		m_wndTotalAmountLabel;
	CGuiNumberCtrl	m_wndTotalAmount;
	CGuiLabel		m_wndTotalPaymentLabel;
	CGuiNumberCtrl	m_wndTotalPayment;
	CGuiLabel		m_wndRemainAmountLabel;
	CGuiNumberCtrl	m_wndRemainAmount;
	CGuiLabel		m_wndPayableLabel;
	CGuiNumberCtrl	m_wndPayable;
	CGuiButton		m_wndPayment;
	CGuiButton		m_wndClose;
	double	m_nSubTotal;
	double	m_nTotalAmount;
	double	m_nTotalPayment;
	double	m_nPaymentAmount;
	double	m_nRemainAmount;
	double	m_nPayable;

	CString m_szInvoiceNo;
	long    m_nOrderID;

	//int			OnTotalAmountChange(); 
	//int			OnTotalAmountSetfocus(); 
	//int			OnTotalAmountKillfocus(); 
	int			OnTotalAmountCheckValue(); 
	//int			OnTotalPaymentChange(); 
	//int			OnTotalPaymentSetfocus(); 
	int			OnTotalPaymentKillfocus(); 
	int			OnTotalPaymentCheckValue(); 
	//int			OnRemainAmountChange(); 
	//int			OnRemainAmountSetfocus(); 
	//int			OnRemainAmountKillfocus(); 
	int			OnRemainAmountCheckValue(); 
	//int			OnPayableChange(); 
	//int			OnPayableSetfocus(); 
	//int			OnPayableKillfocus(); 
	int			OnPayableCheckValue(); 
	int			OnPaymentSelect(); 
	int			OnCloseSelect(); 
	CPMSPaymentDlg(CWnd *pParent);
	~CPMSPaymentDlg();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddPMSPaymentDlg(); 
	int OnEditPMSPaymentDlg(); 
	int OnDeletePMSPaymentDlg(); 
	int OnSavePMSPaymentDlg(); 
	int OnCancelPMSPaymentDlg(); 
};
#endif
