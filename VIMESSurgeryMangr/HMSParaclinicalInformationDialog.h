#ifndef HMSPARACLINICALINFORMATIONDIALOG_H
#define HMSPARACLINICALINFORMATIONDIALOG_H
#include "guidialog.h"
#include "HMSParaclinicalOrder.h"
class CHMSParaclinicalInformationDialog :
	public CGuiDialog
{
public:
	CHMSParaclinicalOrder	m_wndOrder;
    CGuiGroupBox m_wndParaclinicalInformation;
    CGuiLabel m_wndFromDateLabel;
    CGuiDateTimeCtrl m_wndFromDate;
    CGuiLabel m_wndToDateLabel;
    CGuiDateTimeCtrl m_wndToDate;
    CGuiLabel m_wndPatientNoLabel;
    CGuiComboBox m_wndPatientList;
    CGuiListCtrl m_wndList;
    CString m_szFromDate;
    CString m_szToDate;
    CString m_szPatientListKey;
    BOOL m_bFromToDate;
    BOOL m_bCLSTheoMau;
    BOOL m_bCLSTheoCTM;
    long m_nDocumentNo;
    long m_nOrderID;
    int m_nRefIdx;
    int m_nTreattime;
    CString m_szDocStatus;
    // void			OnFromDateChange();
    // void			OnFromDateSetfocus();
    // void			OnFromDateKillfocus();
    int OnFromDateCheckValue();
    // void			OnToDateChange();
    // void			OnToDateSetfocus();
    // void			OnToDateKillfocus();
    int OnToDateCheckValue();
    void OnPatientListSelectChange(int nOldItemSel, int nNewItemSel);
    void OnPatientListSelendok();
    // void			OnPatientListSetfocus();
    // void			OnPatientListKillfocus();
    long OnPatientListLoadData();
    // void			OnPatientListAddNew();
    long OnListLoadData();
    void OnListSelectChange(int nOldItem, int nNewItem);
    void OnListDblClick();
    int OnListDeleteItem(); 

	CHMSParaclinicalInformationDialog(CWnd *pParent, int nMode, long nDocNo, int nRefIdx, long nOrderID);
	~CHMSParaclinicalInformationDialog(void);
	void	OnCreateComponents();
	void	OnInitializeComponents();
	void	OnSetWindowEvents();
    void OnDoDataExchange(CDataExchange *pDX);
    void OnResizeLayout();
};

#endif
