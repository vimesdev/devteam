#include "../HMSExpenseDialog.h"
#include "../../MainFrm.h"
class CTestHMSExpenseDialog
{
public:
	CTestHMSExpenseDialog()
	{
		_tprintf(_T("\ntest_ondelete: %d")
			, test_ondelete());
		_tprintf(_T("\ntest_onlistloaddata: %d")
			, test_onlistloaddata());
	}
	int test_ondelete()
	{
		CHMSExpenseDialog dlg(NULL);
		dlg.SetMode(VM_VIEW);
		dlg.m_nExpenseID = 22;
		return dlg.OnDeleteHMSExpenseDialog();
		return 0;
	}

	int test_onlistloaddata()
	{
		try
		{
			CHMSExpenseDialog dlg(NULL);
			return dlg.OnListLoadData();
		}
		catch (CException* e)
		{
			e->ReportError();
		}
		return 0;
	}
};