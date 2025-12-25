#include "../HMSExpenseTypeSetupDialog.h"
#include "../../MainFrm.h"
class CTestHMSExpenseTypeSetupDialog
{
public:
	CTestHMSExpenseTypeSetupDialog()
	{
		_tprintf(_T("\ntest_onsave: %d")
			, test_onsave());
		_tprintf(_T("\ntest_getdatatoscreen: %s")
			, test_getdatatoscreen());
	}
	int test_onsave(){
		CHMSExpenseTypeSetupDialog dlg(NULL, VM_EDIT);
		dlg.OnInitDialog();
		dlg.m_nExpenseTypeID = 3;
		dlg.m_szName = _T("testtestxxx");
		return dlg.OnSaveHMSExpenseTypeSetupDialog();
		return 0;
	};
	CString test_getdatatoscreen()
	{
		CHMSExpenseTypeSetupDialog dlg(NULL, VM_EDIT);
		CString tmpStr;
		dlg.m_nExpenseTypeID = 3;
		dlg.OnInitDialog();
		dlg.UpdateJson(TRUE);
		dlg.m_jData.ToString(tmpStr);
		return tmpStr;
	}
};