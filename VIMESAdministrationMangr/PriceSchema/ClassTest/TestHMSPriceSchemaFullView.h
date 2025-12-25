#include "../HMSPriceSchemaFullView.h"
#include "../../MainFrm.h"
class CTestHMSPriceSchemaFullView
{
public:
	CTestHMSPriceSchemaFullView()
	{
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		_tprintf(_T("\ntest_onschemalistloaddata: %d")
			, test_onschemalistloaddata());
		_tprintf(_T("\ntest_onexpenselistloaddata: %d")
			, test_onexpenselistloaddata());
		_tprintf(_T("\ntest_onfeelistloaddata: %d")
			, test_onfeelistloaddata());
		_tprintf(_T("\ntest_onfeeloaddata: %d")
			, test_onfeeloaddata());
		_tprintf(_T("\ntest_onexpenseloaddata: %d")
			, test_onexpenseloaddata());
		_tprintf(_T("\ntest_onschemalistselectchange: %d")
			, test_onschemalistselectchange());
	};
	int test_onschemalistloaddata(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		return pMF->m_wndPriceSchemaFullView.OnSchemaListLoadData();
	};
	int test_onexpenselistloaddata(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		return pMF->m_wndPriceSchemaFullView.OnExpenseListLoadData();
	};
	int test_onfeelistloaddata(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		return pMF->m_wndPriceSchemaFullView.OnFeeListLoadData();
	};
	int test_onfeeloaddata(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		return pMF->m_wndPriceSchemaFullView.OnFeeLoadData();
	};
	int test_onexpenseloaddata(){
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		return pMF->m_wndPriceSchemaFullView.OnExpenseLoadData();
	};
	int test_onschemalistselectchange()
	{
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		pMF->m_wndPriceSchemaFullView.OnSchemaListLoadData();
		pMF->m_wndPriceSchemaFullView.m_wndSchemaList.SetCurSel(1);
		return pMF->m_wndPriceSchemaFullView.m_wndFeeList.GetItemCount()
			+pMF->m_wndPriceSchemaFullView.m_wndExpenseList.GetItemCount();
	}	
};