#include "../HMSExpenseSetupDialog.h"
#include "../../MainFrm.h"
class CTestHMSExpenseSetupDialog
{
public:
	CTestHMSExpenseSetupDialog()
	{
		_tprintf(_T("\ntest_onitemloaddata: %d")
			, test_onitemloaddata());
		_tprintf(_T("\ntest_ontypeloaddata: %d")
			, test_ontypeloaddata());
		_tprintf(_T("\ntest_onsave: %d")
			, test_onsave());
		_tprintf(_T("\ntest_getdatatoscreen: %s")
			, test_getdatatoscreen());
	}
	int test_onitemloaddata()
	{
		CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
		CGuiComboBox *pCombo = new CGuiComboBox();
		return pMF->LoadProductItem(pCombo, _T("")); 
		return 0;
	};
	int test_ontypeloaddata()
	{
		CHMSExpenseSetupDialog dlg(NULL, 0);
		return dlg.OnTypeLoadData();
	};
	int test_onsave(){
		CHMSExpenseSetupDialog dlg(NULL, VM_EDIT);
		dlg.m_nExpenseID = 4;
		dlg.m_szName = _T("test4");
		dlg.m_szItemKey = _T("15595");
		dlg.m_szTypeKey = _T("3");
		dlg.m_nPrice = 2000;
		return dlg.OnSaveHMSExpenseSetupDialog();
		return 0;
	};
	CString test_getdatatoscreen()
	{
		CHMSExpenseSetupDialog dlg(NULL, VM_EDIT);
		CString tmpStr;
		dlg.m_nExpenseID = 4;
		dlg.OnInitDialog();
		dlg.UpdateJson(TRUE);
		dlg.m_jData.ToString(tmpStr);
		return tmpStr;
	}
};