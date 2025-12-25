#include "../HMSExpenseTypeDialog.h"
#include "../../MainFrm.h"
class CTestHMSExpenseTypeDialog
{
public:
	CTestHMSExpenseTypeDialog()
	{
		_tprintf(_T("\ntest_ondelete: %d")
			, test_ondelete());
	}
	int test_ondelete()
	{
		CHMSExpenseTypeDialog dlg(NULL);
		dlg.SetMode(VM_VIEW);
		dlg.m_nExpenseTypeID = 3;
		return dlg.OnDeleteHMSExpenseTypeDialog();
		return 0;
	}

};