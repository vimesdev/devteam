#include "../HMSPriceSchemaCopierDialog.h"
class CTestHMSPriceSchemaCopierDialog
{
public:
	CTestHMSPriceSchemaCopierDialog()
	{
		_tprintf(_T("\ntest_onsave: %d"), test_onsave());
	};
	int test_onsave()
	{
		CHMSPriceSchemaCopierDialog dlg(NULL);
		dlg.OnInitDialog();
		dlg.m_szName =_T("test copy cow cauas");
		dlg.m_szSourceKey = _T("4");
		return dlg.OnSaveHMSPriceSchemaCopierDialog();
	};
};