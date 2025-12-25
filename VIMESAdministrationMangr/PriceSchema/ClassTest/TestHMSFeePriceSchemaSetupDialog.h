#include "../HMSFeePriceSchemaSetupDialog.h"
#include "../../MainFrm.h"
class CTestHMSFeePriceSchemaSetupDialog
{
public:
	CTestHMSFeePriceSchemaSetupDialog()
	{
		_tprintf(_T("\ntest_onfeetypeloaddata: %d")
			, test_onfeetypeloaddata());
				_tprintf(_T("\ntest_onsave: %d")
			, test_onsave());
	};
	int test_onfeetypeloaddata(){
		CHMSFeePriceSchemaSetupDialog dlg(NULL, 0);
		return dlg.OnFeeTypeLoadData();	
	};
	int test_onlistloaddata(){
		CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
		long nPriceSchemaID = 4;
		int nRet = 0;
		CHMSFeePriceSchemaSetupDialog dlg(NULL, VM_ADD, nPriceSchemaID);
		dlg.OnInitDialog();
		dlg.OnListLoadData();
		return nRet;
		/*
		CGuiListCtrl* pList = new CGuiListCtrl();
		return pMF->LoadFeeList(pList);
		/*
		CHMSFeePriceSchemaSetupDialog dlg(NULL);
		return dlg.OnListLoadData();		
		*/
		return 0;
	};
	int test_onsave()
	{
		CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
		long nPriceSchemaID = 4;
		int nRet = 0;
		CHMSFeePriceSchemaSetupDialog dlg(NULL, VM_ADD, nPriceSchemaID);
		nRet = dlg.OnSaveHMSFeePriceSchemaSetupDialog();
		return nRet;		
	}
};