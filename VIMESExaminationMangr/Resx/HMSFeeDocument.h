#ifndef HMSFEEDOCUMENT_H
#define HMSFEEDOCUMENT_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class CHMSFeeDocument : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndFeeInformation;
	CGuiListCtrl	m_wndFeeList;
	CGuiLabel		m_wndCostLabel;
	CGuiNumberCtrl	m_wndCost;
	CGuiLabel		m_wndDiscountLabel;
	CGuiNumberCtrl	m_wndDiscount;
	CGuiLabel		m_wndPaymentLabel;
	CGuiNumberCtrl	m_wndPayment;
	CGuiLabel		m_wndSumInWordLabel;
	CGuiTextCtrl	m_wndSumInWord;
	CGuiLabel		m_wndRemainLabel;
	CGuiNumberCtrl	m_wndRemain;
	long	m_nCost;
	long	m_nDiscount;
	long	m_nPayment;
	CString	m_szSumInWord;
	long	m_nRemain;
	int			OnFeeListLoadData(); 
	int			OnFeeListSelectChange(int nOldItem, int nNewItem); 
	int			OnFeeListDblClick(); 
	int			OnFeeListDeleteItem(); 
	//int			OnCostChange(); 
	//int			OnCostSetfocus(); 
	//int			OnCostKillfocus(); 
	int			OnCostCheckValue(); 
	//int			OnDiscountChange(); 
	//int			OnDiscountSetfocus(); 
	//int			OnDiscountKillfocus(); 
	int			OnDiscountCheckValue(); 
	//int			OnPaymentChange(); 
	//int			OnPaymentSetfocus(); 
	//int			OnPaymentKillfocus(); 
	int			OnPaymentCheckValue(); 
	//int			OnSumInWordChange(); 
	//int			OnSumInWordSetfocus(); 
	//int			OnSumInWordKillfocus(); 
	int			OnSumInWordCheckValue(); 
	//int			OnRemainChange(); 
	//int			OnRemainSetfocus(); 
	//int			OnRemainKillfocus(); 
	int			OnRemainCheckValue(); 
	CHMSFeeDocument();
	~CHMSFeeDocument();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddHMSFeeDocument(); 
	int OnEditHMSFeeDocument(); 
	int OnDeleteHMSFeeDocument(); 
	int OnSaveHMSFeeDocument(); 
	int OnCancelHMSFeeDocument(); 
};
#endif
