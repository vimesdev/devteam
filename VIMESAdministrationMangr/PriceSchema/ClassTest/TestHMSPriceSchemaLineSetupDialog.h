#include "../HMSPriceSchemaLineSetupDialog.h"
class CTestHMSPriceSchemaLineSetupDialog
{
public:
	CTestHMSPriceSchemaLineSetupDialog()
	{
		_tprintf(_T("\ntest_onexpenseloaddata: %d"), test_onexpenseloaddata());
		_tprintf(_T("\ntest_onpriceschemaloaddata: %d"), test_onpriceschemaloaddata());
	};
	int test_onexpenseloaddata(){
		CHMSPriceSchemaLineSetupDialog dlg(NULL, 0);
		dlg.m_szPriceSchemaKey = _T("21");
		return dlg.OnExpenseLoadData();	
	};
	int test_onpriceschemaloaddata(){
		CHMSPriceSchemaLineSetupDialog dlg(NULL, 0);
		return dlg.OnPriceSchemaLoadData();		
	};
};