#include "../HMSPriceSchemaSetupDialog.h"
class CTestHMSPriceSchemaSetupDialog
{
public:
	CTestHMSPriceSchemaSetupDialog()
	{
		_tprintf(_T("\ntest_onsave: %d"), test_onsave());
	};
	int test_onsave()
	{
		CHMSPriceSchemaSetupDialog dlg(NULL, VM_ADD);
		dlg.m_szName =_T("test cow cauas");
		return dlg.OnSaveHMSPriceSchemaSetupDialog();
	};
};