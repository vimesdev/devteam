#ifndef HMSDAILYORDERDETAIL_H
#define HMSDAILYORDERDETAIL_H
#include "GuiUtils.h"
#include "GuiView.h"
#include "DbField.h"
class AFX_EXT_CLASS CHMSDailyOrderDetail : public CGuiView{
protected:
public:
	CGuiGroupBox	m_wndDetailInformation;
	CGuiListCtrl	m_wndDetailList;
	CGuiListCtrl	m_wndPatientOrder;
	int			OnDetailListLoadData(); 
	int			OnDetailListSelectChange(int nOldItem, int nNewItem); 
	int			OnDetailListDblClick(); 
	int			OnDetailListDeleteItem(); 
	int			OnPatientOrderLoadData(); 
	int			OnPatientOrderSelectChange(int nOldItem, int nNewItem); 
	int			OnPatientOrderDblClick(); 
	int			OnPatientOrderDeleteItem(); 
	CHMSDailyOrderDetail();
	~CHMSDailyOrderDetail();
	void OnCreateComponents();
	void OnInitializeComponents();
	void OnSetWindowEvents();
	void OnDoDataExchange(CDataExchange* pDX);
	void GetDataToScreen();
	void GetScreenToData();
	void SetDefaultValues();
	int OnAddHMSDailyOrderDetail(); 
	int OnEditHMSDailyOrderDetail(); 
	int OnDeleteHMSDailyOrderDetail(); 
	int OnSaveHMSDailyOrderDetail(); 
	int OnCancelHMSDailyOrderDetail(); 
};
#endif
