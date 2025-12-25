#include "HMSSampleScheduleInfoDialog.h"
#include "MainFrm.h"
static void _OnKhoa1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnKhoa1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnKhoa1SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa1Selendok();
}
/*static void _OnKhoa1SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa1Killfocus();
}*/
/*static void _OnKhoa1KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa1Killfocus();
}*/
static long _OnKhoa1LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa1LoadData();
}
/*static void _OnKhoa1AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa1AddNew();
}*/
static void _OnCa1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCa1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCa1SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCa1Selendok();
}
/*static void _OnCa1SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCa1Killfocus();
}*/
/*static void _OnCa1KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCa1Killfocus();
}*/
static long _OnCa1LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCa1LoadData();
}
/*static void _OnCa1AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCa1AddNew();
}*/
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartDateCheckValue();
} 
/*static void _OnStartTimeChangeFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartTimeChange();
} */
/*static void _OnStartTimeSetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartTimeSetfocus();} */ 
/*static void _OnStartTimeKillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartTimeKillfocus();
} */
static int _OnStartTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartTimeCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndDateCheckValue();
} 
/*static void _OnEndTimeChangeFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndTimeChange();
} */
/*static void _OnEndTimeSetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndTimeSetfocus();} */ 
/*static void _OnEndTimeKillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndTimeKillfocus();
} */
static int _OnEndTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndTimeCheckValue();
} 
static void _OnCua1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua1SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua1Selendok();
}
/*static void _OnCua1SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua1Killfocus();
}*/
/*static void _OnCua1KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua1Killfocus();
}*/
static long _OnCua1LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua1LoadData();
}
/*static void _OnCua1AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua1AddNew();
}*/
static void _OnUser1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser1SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser1Selendok();
}
/*static void _OnUser1SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser1Killfocus();
}*/
/*static void _OnUser1KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser1Killfocus();
}*/
static long _OnUser1LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser1LoadData();
}
/*static void _OnUser1AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser1AddNew();
}*/
static void _OnCua2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua2SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua2Selendok();
}
/*static void _OnCua2SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua2Killfocus();
}*/
/*static void _OnCua2KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua2Killfocus();
}*/
static long _OnCua2LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua2LoadData();
}
/*static void _OnCua2AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua2AddNew();
}*/
static void _OnUser2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser2SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser2Selendok();
}
/*static void _OnUser2SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser2Killfocus();
}*/
/*static void _OnUser2KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser2Killfocus();
}*/
static long _OnUser2LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser2LoadData();
}
/*static void _OnUser2AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser2AddNew();
}*/
static void _OnCua3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua3SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua3Selendok();
}
/*static void _OnCua3SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua3Killfocus();
}*/
/*static void _OnCua3KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua3Killfocus();
}*/
static long _OnCua3LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua3LoadData();
}
/*static void _OnCua3AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua3AddNew();
}*/
static void _OnUser3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser3SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser3Selendok();
}
/*static void _OnUser3SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser3Killfocus();
}*/
/*static void _OnUser3KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser3Killfocus();
}*/
static long _OnUser3LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser3LoadData();
}
/*static void _OnUser3AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser3AddNew();
}*/
static void _OnCua4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua4SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua4Selendok();
}
/*static void _OnCua4SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua4Killfocus();
}*/
/*static void _OnCua4KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua4Killfocus();
}*/
static long _OnCua4LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua4LoadData();
}
/*static void _OnCua4AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua4AddNew();
}*/
static void _OnUser4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser4SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser4Selendok();
}
/*static void _OnUser4SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser4Killfocus();
}*/
/*static void _OnUser4KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser4Killfocus();
}*/
static long _OnUser4LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser4LoadData();
}
/*static void _OnUser4AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser4AddNew();
}*/
static void _OnKhoa2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnKhoa2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnKhoa2SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa2Selendok();
}
/*static void _OnKhoa2SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa2Killfocus();
}*/
/*static void _OnKhoa2KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa2Killfocus();
}*/
static long _OnKhoa2LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa2LoadData();
}
/*static void _OnKhoa2AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa2AddNew();
}*/
static void _OnCa2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCa2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCa2SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCa2Selendok();
}
/*static void _OnCa2SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCa2Killfocus();
}*/
/*static void _OnCa2KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCa2Killfocus();
}*/
static long _OnCa2LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCa2LoadData();
}
/*static void _OnCa2AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCa2AddNew();
}*/
/*static void _OnStartDate1ChangeFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartDate1Change();
} */
/*static void _OnStartDate1SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartDate1Setfocus();} */ 
/*static void _OnStartDate1KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartDate1Killfocus();
} */
static int _OnStartDate1CheckValueFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartDate1CheckValue();
} 
/*static void _OnStartTime1ChangeFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartTime1Change();
} */
/*static void _OnStartTime1SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartTime1Setfocus();} */ 
/*static void _OnStartTime1KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartTime1Killfocus();
} */
static int _OnStartTime1CheckValueFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnStartTime1CheckValue();
} 
/*static void _OnEndDate1ChangeFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndDate1Change();
} */
/*static void _OnEndDate1SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndDate1Setfocus();} */ 
/*static void _OnEndDate1KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndDate1Killfocus();
} */
static int _OnEndDate1CheckValueFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndDate1CheckValue();
} 
/*static void _OnEndTime1ChangeFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndTime1Change();
} */
/*static void _OnEndTime1SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndTime1Setfocus();} */ 
/*static void _OnEndTime1KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndTime1Killfocus();
} */
static int _OnEndTime1CheckValueFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnEndTime1CheckValue();
} 
static void _OnCua5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua5SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua5Selendok();
}
/*static void _OnCua5SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua5Killfocus();
}*/
/*static void _OnCua5KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua5Killfocus();
}*/
static long _OnCua5LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua5LoadData();
}
/*static void _OnCua5AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua5AddNew();
}*/
static void _OnUser5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser5SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser5Selendok();
}
/*static void _OnUser5SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser5Killfocus();
}*/
/*static void _OnUser5KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser5Killfocus();
}*/
static long _OnUser5LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser5LoadData();
}
/*static void _OnUser5AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser5AddNew();
}*/
static void _OnCua6SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua6SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua6SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua6Selendok();
}
/*static void _OnCua6SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua6Killfocus();
}*/
/*static void _OnCua6KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua6Killfocus();
}*/
static long _OnCua6LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua6LoadData();
}
/*static void _OnCua6AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua6AddNew();
}*/
static void _OnUser6SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser6SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser6SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser6Selendok();
}
/*static void _OnUser6SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser6Killfocus();
}*/
/*static void _OnUser6KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser6Killfocus();
}*/
static long _OnUser6LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser6LoadData();
}
/*static void _OnUser6AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser6AddNew();
}*/
static void _OnCua7SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua7SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua7SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua7Selendok();
}
/*static void _OnCua7SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua7Killfocus();
}*/
/*static void _OnCua7KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua7Killfocus();
}*/
static long _OnCua7LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua7LoadData();
}
/*static void _OnCua7AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua7AddNew();
}*/
static void _OnUser7SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser7SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser7SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser7Selendok();
}
/*static void _OnUser7SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser7Killfocus();
}*/
/*static void _OnUser7KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser7Killfocus();
}*/
static long _OnUser7LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser7LoadData();
}
/*static void _OnUser7AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser7AddNew();
}*/
static void _OnCua8SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua8SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua8SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua8Selendok();
}
/*static void _OnCua8SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua8Killfocus();
}*/
/*static void _OnCua8KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua8Killfocus();
}*/
static long _OnCua8LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua8LoadData();
}
/*static void _OnCua8AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua8AddNew();
}*/
static void _OnUser8SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser8SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser8SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser8Selendok();
}
/*static void _OnUser8SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser8Killfocus();
}*/
/*static void _OnUser8KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser8Killfocus();
}*/
static long _OnUser8LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser8LoadData();
}
/*static void _OnUser8AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser8AddNew();
}*/
static void _OnLockScheduleSelectFnc(CWnd *pWnd){
	 ((CHMSSampleScheduleInfoDialog*)pWnd)->OnLockScheduleSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMSSampleScheduleInfoDialog *pVw = (CHMSSampleScheduleInfoDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSSampleScheduleInfoDialog *pVw = (CHMSSampleScheduleInfoDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSSampleScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSSampleScheduleInfoDialog*)pWnd)->OnAddCHMSSampleScheduleInfoDialog();
} 
static int _OnEditCHMSSampleScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSSampleScheduleInfoDialog*)pWnd)->OnEditCHMSSampleScheduleInfoDialog();
} 
static int _OnDeleteCHMSSampleScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSSampleScheduleInfoDialog*)pWnd)->OnDeleteCHMSSampleScheduleInfoDialog();
} 
static int _OnSaveCHMSSampleScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSSampleScheduleInfoDialog*)pWnd)->OnSaveCHMSSampleScheduleInfoDialog();
} 
static int _OnCancelCHMSSampleScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CHMSSampleScheduleInfoDialog*)pWnd)->OnCancelCHMSSampleScheduleInfoDialog();
}CHMSSampleScheduleInfoDialog::CHMSSampleScheduleInfoDialog(CWnd *pParent):
	CGuiDialog(pParent)
	{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 555;
	SetDefaultValues();
	}
CHMSSampleScheduleInfoDialog::~CHMSSampleScheduleInfoDialog()
{
}
void CHMSSampleScheduleInfoDialog::OnCreateComponents()
{
	m_wndScheduleInfo.Create(this, _T("Thiết lập lịch trực ca 1"), 6, 4, 600, 214);
	m_wndScheduleInfo1.Create(this, _T("Thiết lập lịch trực ca 2"), 6, 215, 600, 425);
	m_wndKhoa1.Create(this,95, 34, 299, 59); 
	m_wndKhoa1label.Create(this, _T("Khoa 1"), 10, 34, 90, 59);
	m_wndCa1label.Create(this, _T("Ca 1"), 305, 34, 385, 59);
	m_wndCa1.Create(this,390, 33, 595, 58); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 10, 64, 90, 89);
	m_wndStartDate.Create(this,95, 64, 215, 89); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 305, 64, 385, 89);
	m_wndStartTime.Create(this,219, 64, 299, 89); 
	m_wndEndDate.Create(this,390, 64, 510, 89); 
	m_wndEndTime.Create(this,515, 64, 595, 89); 
	m_wndCua1Label.Create(this, _T("Cua 1"), 10, 92, 90, 117);
	m_wndCua1.Create(this,95, 93, 299, 118); 
	m_wndUser1Label.Create(this, _T("User1"), 305, 94, 385, 119);
	m_wndUser1.Create(this,390, 94, 595, 119); 
	m_wndCua2Label.Create(this, _T("Cua 2"), 10, 123, 90, 148);
	m_wndCua2.Create(this,95, 123, 299, 148); 
	m_wndUser2Label.Create(this, _T("User2"), 305, 123, 385, 148);
	m_wndUser2.Create(this,390, 124, 595, 149); 
	m_wndCua3Label.Create(this, _T("Cua 3"), 10, 154, 90, 179);
	m_wndCua3.Create(this,95, 154, 299, 179); 
	m_wndUser3Label.Create(this, _T("User3"), 305, 155, 385, 180);
	m_wndUser3.Create(this,390, 155, 595, 180); 
	m_wndCua4Label.Create(this, _T("Cua 4"), 10, 185, 90, 210);
	m_wndCua4.Create(this,95, 185, 299, 210); 
	m_wndUser4Label.Create(this, _T("User4"), 305, 186, 385, 211);
	m_wndUser4.Create(this,390, 186, 595, 211); 
	m_wndKhoa2label.Create(this, _T("Khoa 2"), 10, 239, 90, 264);
	m_wndKhoa2.Create(this,95, 239, 299, 264); 
	m_wndCa2label.Create(this, _T("Ca 2"), 305, 240, 385, 265);
	m_wndCa2.Create(this,390, 240, 595, 265); 
	m_wndStartDate1Label.Create(this, _T("Start Date1"), 10, 270, 90, 295);
	m_wndStartDate1.Create(this,95, 270, 215, 295); 
	m_wndEndDate1Label.Create(this, _T("End Date1"), 305, 270, 385, 295);
	m_wndStartTime1.Create(this,219, 270, 299, 295); 
	m_wndEndDate1.Create(this,390, 270, 510, 295); 
	m_wndEndTime1.Create(this,515, 270, 595, 295); 
	m_wndCua5Label.Create(this, _T("Cua 5"), 10, 299, 90, 324);
	m_wndCua5.Create(this,95, 299, 299, 324); 
	m_wndUser5Label.Create(this, _T("User5"), 305, 300, 385, 325);
	m_wndUser5.Create(this,390, 300, 595, 325); 
	m_wndCua6Label.Create(this, _T("Cua 6"), 10, 329, 90, 354);
	m_wndCua6.Create(this,95, 329, 299, 354); 
	m_wndUser6Label.Create(this, _T("User6"), 305, 329, 385, 354);
	m_wndUser6.Create(this,390, 330, 595, 355); 
	m_wndCua7Label.Create(this, _T("Cua 7"), 10, 360, 90, 385);
	m_wndCua7.Create(this,95, 360, 299, 385); 
	m_wndUser7Label.Create(this, _T("User7"), 305, 360, 385, 385);
	m_wndUser7.Create(this,390, 361, 595, 386); 
	m_wndCua8Label.Create(this, _T("Cua 8"), 10, 391, 90, 416);
	m_wndCua8.Create(this,95, 391, 299, 416); 
	m_wndUser8Label.Create(this, _T("User8"), 305, 392, 385, 417);
	m_wndUser8.Create(this,390, 392, 595, 417); 
	m_wndLockSchedule.Create(this, _T("Lock Schedule"), 5, 436, 135, 461);
	m_wndUpdate.Create(this, _T("&Update"), 140, 436, 220, 461);
	m_wndClose.Create(this, _T("&Close"), 225, 436, 305, 461);
}
void CHMSSampleScheduleInfoDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndKhoa1.SetCheckValue(true);
	m_wndKhoa1.LimitText(35);
	m_wndCa1.SetCheckValue(true);
	m_wndCa1.LimitText(35);
	m_wndStartDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndStartDate.SetCheckValue(true);
	m_wndStartTime.SetCheckValue(true);
	m_wndEndDate.SetMax(CDate(pMF->GetSysDate()));
	//m_wndEndDate.SetCheckValue(true);
	m_wndEndTime.SetCheckValue(true);
	m_wndCua1.SetCheckValue(true);
	m_wndCua1.LimitText(35);
	m_wndUser1.SetCheckValue(true);
	m_wndUser1.LimitText(1024);
	
	m_wndKhoa2.SetCheckValue(true);
	m_wndKhoa2.LimitText(35);
	m_wndCa2.SetCheckValue(true);
	m_wndCa2.LimitText(35);
	m_wndStartDate1.SetMax(CDate(pMF->GetSysDate()));
	//m_wndStartDate1.SetCheckValue(true);
	m_wndStartTime1.SetCheckValue(true);
	m_wndEndDate1.SetMax(CDate(pMF->GetSysDate()));
	//m_wndEndDate1.SetCheckValue(true);	
	m_wndEndTime1.SetCheckValue(true);
	m_wndCua5.SetCheckValue(true);
	m_wndCua5.LimitText(35);
	m_wndUser5.SetCheckValue(true);
	m_wndUser5.LimitText(1024);
	

	m_wndKhoa1.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndKhoa1.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCa1.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCa1.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCua1.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua1.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndCua2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndCua3.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua3.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndCua4.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua4.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndKhoa2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndKhoa2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCa2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCa2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCua5.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua5.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndCua6.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua6.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndCua7.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua7.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndCua8.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua8.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndUser1.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser1.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser3.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser3.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser4.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser4.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser5.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser5.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser6.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser6.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser7.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser7.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser8.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser8.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_hms_sample_scheduleTbl.SetTableName(_T("hms_sample_schedule"));
	m_hms_sample_scheduleTbl.AddField(_T("hss_createdby"), dfText, 15);
	m_hms_sample_scheduleTbl.AddField(_T("hss_createddate"), dfDateTime);
	m_hms_sample_scheduleTbl.AddField(_T("hss_updatedby"), dfText, 15);
	m_hms_sample_scheduleTbl.AddField(_T("hss_updateddate"), dfDateTime);
	m_hms_sample_scheduleTbl.AddField(_T("hss_idx"), dfLong);
	m_hms_sample_scheduleTbl.AddField(_T("hss_starttime"), dfDateTime);
	m_hms_sample_scheduleTbl.AddField(_T("hss_endtime"), dfDateTime);
	m_hms_sample_scheduleTbl.AddField(_T("hss_starttime1"), dfDateTime);
	m_hms_sample_scheduleTbl.AddField(_T("hss_endtime1"), dfDateTime);
	m_hms_sample_scheduleTbl.AddField(_T("hss_dept"), dfText, 5);
	m_hms_sample_scheduleTbl.AddField(_T("hss_duty"), dfText, 1);
	m_hms_sample_scheduleTbl.AddField(_T("hss_dept1"), dfText, 5);
	m_hms_sample_scheduleTbl.AddField(_T("hss_duty1"), dfText, 1);
	m_hms_sample_scheduleTbl.AddField(_T("hss_status"), dfText, 1);

	m_hms_sample_schedule_lineTbl.SetTableName(_T("hms_sample_schedule_line"));
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_refidx"), dfLong);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate1"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate2"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate3"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate4"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate5"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate6"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate7"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate8"), dfText, 15);

	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user1"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user2"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user3"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user4"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user5"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user6"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user7"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user8"), dfText, 15);


}
void CHMSSampleScheduleInfoDialog::OnSetWindowEvents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndKhoa1.SetEvent(WE_SELENDOK, _OnKhoa1SelendokFnc);
	//m_wndKhoa1.SetEvent(WE_SETFOCUS, _OnKhoa1SetfocusFnc);
	//m_wndKhoa1.SetEvent(WE_KILLFOCUS, _OnKhoa1KillfocusFnc);
	m_wndKhoa1.SetEvent(WE_SELCHANGE, _OnKhoa1SelectChangeFnc);
	m_wndKhoa1.SetEvent(WE_LOADDATA, _OnKhoa1LoadDataFnc);
	//m_wndKhoa1.SetEvent(WE_ADDNEW, _OnKhoa1AddNewFnc);
	m_wndCa1.SetEvent(WE_SELENDOK, _OnCa1SelendokFnc);
	//m_wndCa1.SetEvent(WE_SETFOCUS, _OnCa1SetfocusFnc);
	//m_wndCa1.SetEvent(WE_KILLFOCUS, _OnCa1KillfocusFnc);
	m_wndCa1.SetEvent(WE_SELCHANGE, _OnCa1SelectChangeFnc);
	m_wndCa1.SetEvent(WE_LOADDATA, _OnCa1LoadDataFnc);
	//m_wndCa1.SetEvent(WE_ADDNEW, _OnCa1AddNewFnc);
	//m_wndStartDate.SetEvent(WE_CHANGE, _OnStartDateChangeFnc);
	//m_wndStartDate.SetEvent(WE_SETFOCUS, _OnStartDateSetfocusFnc);
	//m_wndStartDate.SetEvent(WE_KILLFOCUS, _OnStartDateKillfocusFnc);
	m_wndStartDate.SetEvent(WE_CHECKVALUE, _OnStartDateCheckValueFnc);
	//m_wndStartTime.SetEvent(WE_CHANGE, _OnStartTimeChangeFnc);
	//m_wndStartTime.SetEvent(WE_SETFOCUS, _OnStartTimeSetfocusFnc);
	//m_wndStartTime.SetEvent(WE_KILLFOCUS, _OnStartTimeKillfocusFnc);
	m_wndStartTime.SetEvent(WE_CHECKVALUE, _OnStartTimeCheckValueFnc);
	//m_wndEndDate.SetEvent(WE_CHANGE, _OnEndDateChangeFnc);
	//m_wndEndDate.SetEvent(WE_SETFOCUS, _OnEndDateSetfocusFnc);
	//m_wndEndDate.SetEvent(WE_KILLFOCUS, _OnEndDateKillfocusFnc);
	m_wndEndDate.SetEvent(WE_CHECKVALUE, _OnEndDateCheckValueFnc);
	//m_wndEndTime.SetEvent(WE_CHANGE, _OnEndTimeChangeFnc);
	//m_wndEndTime.SetEvent(WE_SETFOCUS, _OnEndTimeSetfocusFnc);
	//m_wndEndTime.SetEvent(WE_KILLFOCUS, _OnEndTimeKillfocusFnc);
	m_wndEndTime.SetEvent(WE_CHECKVALUE, _OnEndTimeCheckValueFnc);
	m_wndCua1.SetEvent(WE_SELENDOK, _OnCua1SelendokFnc);
	//m_wndCua1.SetEvent(WE_SETFOCUS, _OnCua1SetfocusFnc);
	//m_wndCua1.SetEvent(WE_KILLFOCUS, _OnCua1KillfocusFnc);
	m_wndCua1.SetEvent(WE_SELCHANGE, _OnCua1SelectChangeFnc);
	m_wndCua1.SetEvent(WE_LOADDATA, _OnCua1LoadDataFnc);
	//m_wndCua1.SetEvent(WE_ADDNEW, _OnCua1AddNewFnc);
	m_wndUser1.SetEvent(WE_SELENDOK, _OnUser1SelendokFnc);
	//m_wndUser1.SetEvent(WE_SETFOCUS, _OnUser1SetfocusFnc);
	//m_wndUser1.SetEvent(WE_KILLFOCUS, _OnUser1KillfocusFnc);
	m_wndUser1.SetEvent(WE_SELCHANGE, _OnUser1SelectChangeFnc);
	m_wndUser1.SetEvent(WE_LOADDATA, _OnUser1LoadDataFnc);
	//m_wndUser1.SetEvent(WE_ADDNEW, _OnUser1AddNewFnc);
	m_wndCua2.SetEvent(WE_SELENDOK, _OnCua2SelendokFnc);
	//m_wndCua2.SetEvent(WE_SETFOCUS, _OnCua2SetfocusFnc);
	//m_wndCua2.SetEvent(WE_KILLFOCUS, _OnCua2KillfocusFnc);
	m_wndCua2.SetEvent(WE_SELCHANGE, _OnCua2SelectChangeFnc);
	m_wndCua2.SetEvent(WE_LOADDATA, _OnCua2LoadDataFnc);
	//m_wndCua2.SetEvent(WE_ADDNEW, _OnCua2AddNewFnc);
	m_wndUser2.SetEvent(WE_SELENDOK, _OnUser2SelendokFnc);
	//m_wndUser2.SetEvent(WE_SETFOCUS, _OnUser2SetfocusFnc);
	//m_wndUser2.SetEvent(WE_KILLFOCUS, _OnUser2KillfocusFnc);
	m_wndUser2.SetEvent(WE_SELCHANGE, _OnUser2SelectChangeFnc);
	m_wndUser2.SetEvent(WE_LOADDATA, _OnUser2LoadDataFnc);
	//m_wndUser2.SetEvent(WE_ADDNEW, _OnUser2AddNewFnc);
	m_wndCua3.SetEvent(WE_SELENDOK, _OnCua3SelendokFnc);
	//m_wndCua3.SetEvent(WE_SETFOCUS, _OnCua3SetfocusFnc);
	//m_wndCua3.SetEvent(WE_KILLFOCUS, _OnCua3KillfocusFnc);
	m_wndCua3.SetEvent(WE_SELCHANGE, _OnCua3SelectChangeFnc);
	m_wndCua3.SetEvent(WE_LOADDATA, _OnCua3LoadDataFnc);
	//m_wndCua3.SetEvent(WE_ADDNEW, _OnCua3AddNewFnc);
	m_wndUser3.SetEvent(WE_SELENDOK, _OnUser3SelendokFnc);
	//m_wndUser3.SetEvent(WE_SETFOCUS, _OnUser3SetfocusFnc);
	//m_wndUser3.SetEvent(WE_KILLFOCUS, _OnUser3KillfocusFnc);
	m_wndUser3.SetEvent(WE_SELCHANGE, _OnUser3SelectChangeFnc);
	m_wndUser3.SetEvent(WE_LOADDATA, _OnUser3LoadDataFnc);
	//m_wndUser3.SetEvent(WE_ADDNEW, _OnUser3AddNewFnc);
	m_wndCua4.SetEvent(WE_SELENDOK, _OnCua4SelendokFnc);
	//m_wndCua4.SetEvent(WE_SETFOCUS, _OnCua4SetfocusFnc);
	//m_wndCua4.SetEvent(WE_KILLFOCUS, _OnCua4KillfocusFnc);
	m_wndCua4.SetEvent(WE_SELCHANGE, _OnCua4SelectChangeFnc);
	m_wndCua4.SetEvent(WE_LOADDATA, _OnCua4LoadDataFnc);
	//m_wndCua4.SetEvent(WE_ADDNEW, _OnCua4AddNewFnc);
	m_wndUser4.SetEvent(WE_SELENDOK, _OnUser4SelendokFnc);
	//m_wndUser4.SetEvent(WE_SETFOCUS, _OnUser4SetfocusFnc);
	//m_wndUser4.SetEvent(WE_KILLFOCUS, _OnUser4KillfocusFnc);
	m_wndUser4.SetEvent(WE_SELCHANGE, _OnUser4SelectChangeFnc);
	m_wndUser4.SetEvent(WE_LOADDATA, _OnUser4LoadDataFnc);
	//m_wndUser4.SetEvent(WE_ADDNEW, _OnUser4AddNewFnc);
	m_wndKhoa2.SetEvent(WE_SELENDOK, _OnKhoa2SelendokFnc);
	//m_wndKhoa2.SetEvent(WE_SETFOCUS, _OnKhoa2SetfocusFnc);
	//m_wndKhoa2.SetEvent(WE_KILLFOCUS, _OnKhoa2KillfocusFnc);
	m_wndKhoa2.SetEvent(WE_SELCHANGE, _OnKhoa2SelectChangeFnc);
	m_wndKhoa2.SetEvent(WE_LOADDATA, _OnKhoa2LoadDataFnc);
	//m_wndKhoa2.SetEvent(WE_ADDNEW, _OnKhoa2AddNewFnc);
	m_wndCa2.SetEvent(WE_SELENDOK, _OnCa2SelendokFnc);
	//m_wndCa2.SetEvent(WE_SETFOCUS, _OnCa2SetfocusFnc);
	//m_wndCa2.SetEvent(WE_KILLFOCUS, _OnCa2KillfocusFnc);
	m_wndCa2.SetEvent(WE_SELCHANGE, _OnCa2SelectChangeFnc);
	m_wndCa2.SetEvent(WE_LOADDATA, _OnCa2LoadDataFnc);
	//m_wndCa2.SetEvent(WE_ADDNEW, _OnCa2AddNewFnc);
	//m_wndStartDate1.SetEvent(WE_CHANGE, _OnStartDate1ChangeFnc);
	//m_wndStartDate1.SetEvent(WE_SETFOCUS, _OnStartDate1SetfocusFnc);
	//m_wndStartDate1.SetEvent(WE_KILLFOCUS, _OnStartDate1KillfocusFnc);
	m_wndStartDate1.SetEvent(WE_CHECKVALUE, _OnStartDate1CheckValueFnc);
	//m_wndStartTime1.SetEvent(WE_CHANGE, _OnStartTime1ChangeFnc);
	//m_wndStartTime1.SetEvent(WE_SETFOCUS, _OnStartTime1SetfocusFnc);
	//m_wndStartTime1.SetEvent(WE_KILLFOCUS, _OnStartTime1KillfocusFnc);
	m_wndStartTime1.SetEvent(WE_CHECKVALUE, _OnStartTime1CheckValueFnc);
	//m_wndEndDate1.SetEvent(WE_CHANGE, _OnEndDate1ChangeFnc);
	//m_wndEndDate1.SetEvent(WE_SETFOCUS, _OnEndDate1SetfocusFnc);
	//m_wndEndDate1.SetEvent(WE_KILLFOCUS, _OnEndDate1KillfocusFnc);
	m_wndEndDate1.SetEvent(WE_CHECKVALUE, _OnEndDate1CheckValueFnc);
	//m_wndEndTime1.SetEvent(WE_CHANGE, _OnEndTime1ChangeFnc);
	//m_wndEndTime1.SetEvent(WE_SETFOCUS, _OnEndTime1SetfocusFnc);
	//m_wndEndTime1.SetEvent(WE_KILLFOCUS, _OnEndTime1KillfocusFnc);
	m_wndEndTime1.SetEvent(WE_CHECKVALUE, _OnEndTime1CheckValueFnc);
	m_wndCua5.SetEvent(WE_SELENDOK, _OnCua5SelendokFnc);
	//m_wndCua5.SetEvent(WE_SETFOCUS, _OnCua5SetfocusFnc);
	//m_wndCua5.SetEvent(WE_KILLFOCUS, _OnCua5KillfocusFnc);
	m_wndCua5.SetEvent(WE_SELCHANGE, _OnCua5SelectChangeFnc);
	m_wndCua5.SetEvent(WE_LOADDATA, _OnCua5LoadDataFnc);
	//m_wndCua5.SetEvent(WE_ADDNEW, _OnCua5AddNewFnc);
	m_wndUser5.SetEvent(WE_SELENDOK, _OnUser5SelendokFnc);
	//m_wndUser5.SetEvent(WE_SETFOCUS, _OnUser5SetfocusFnc);
	//m_wndUser5.SetEvent(WE_KILLFOCUS, _OnUser5KillfocusFnc);
	m_wndUser5.SetEvent(WE_SELCHANGE, _OnUser5SelectChangeFnc);
	m_wndUser5.SetEvent(WE_LOADDATA, _OnUser5LoadDataFnc);
	//m_wndUser5.SetEvent(WE_ADDNEW, _OnUser5AddNewFnc);
	m_wndCua6.SetEvent(WE_SELENDOK, _OnCua6SelendokFnc);
	//m_wndCua6.SetEvent(WE_SETFOCUS, _OnCua6SetfocusFnc);
	//m_wndCua6.SetEvent(WE_KILLFOCUS, _OnCua6KillfocusFnc);
	m_wndCua6.SetEvent(WE_SELCHANGE, _OnCua6SelectChangeFnc);
	m_wndCua6.SetEvent(WE_LOADDATA, _OnCua6LoadDataFnc);
	//m_wndCua6.SetEvent(WE_ADDNEW, _OnCua6AddNewFnc);
	m_wndUser6.SetEvent(WE_SELENDOK, _OnUser6SelendokFnc);
	//m_wndUser6.SetEvent(WE_SETFOCUS, _OnUser6SetfocusFnc);
	//m_wndUser6.SetEvent(WE_KILLFOCUS, _OnUser6KillfocusFnc);
	m_wndUser6.SetEvent(WE_SELCHANGE, _OnUser6SelectChangeFnc);
	m_wndUser6.SetEvent(WE_LOADDATA, _OnUser6LoadDataFnc);
	//m_wndUser6.SetEvent(WE_ADDNEW, _OnUser6AddNewFnc);
	m_wndCua7.SetEvent(WE_SELENDOK, _OnCua7SelendokFnc);
	//m_wndCua7.SetEvent(WE_SETFOCUS, _OnCua7SetfocusFnc);
	//m_wndCua7.SetEvent(WE_KILLFOCUS, _OnCua7KillfocusFnc);
	m_wndCua7.SetEvent(WE_SELCHANGE, _OnCua7SelectChangeFnc);
	m_wndCua7.SetEvent(WE_LOADDATA, _OnCua7LoadDataFnc);
	//m_wndCua7.SetEvent(WE_ADDNEW, _OnCua7AddNewFnc);
	m_wndUser7.SetEvent(WE_SELENDOK, _OnUser7SelendokFnc);
	//m_wndUser7.SetEvent(WE_SETFOCUS, _OnUser7SetfocusFnc);
	//m_wndUser7.SetEvent(WE_KILLFOCUS, _OnUser7KillfocusFnc);
	m_wndUser7.SetEvent(WE_SELCHANGE, _OnUser7SelectChangeFnc);
	m_wndUser7.SetEvent(WE_LOADDATA, _OnUser7LoadDataFnc);
	//m_wndUser7.SetEvent(WE_ADDNEW, _OnUser7AddNewFnc);
	m_wndCua8.SetEvent(WE_SELENDOK, _OnCua8SelendokFnc);
	//m_wndCua8.SetEvent(WE_SETFOCUS, _OnCua8SetfocusFnc);
	//m_wndCua8.SetEvent(WE_KILLFOCUS, _OnCua8KillfocusFnc);
	m_wndCua8.SetEvent(WE_SELCHANGE, _OnCua8SelectChangeFnc);
	m_wndCua8.SetEvent(WE_LOADDATA, _OnCua8LoadDataFnc);
	//m_wndCua8.SetEvent(WE_ADDNEW, _OnCua8AddNewFnc);
	m_wndUser8.SetEvent(WE_SELENDOK, _OnUser8SelendokFnc);
	//m_wndUser8.SetEvent(WE_SETFOCUS, _OnUser8SetfocusFnc);
	//m_wndUser8.SetEvent(WE_KILLFOCUS, _OnUser8KillfocusFnc);
	m_wndUser8.SetEvent(WE_SELCHANGE, _OnUser8SelectChangeFnc);
	m_wndUser8.SetEvent(WE_LOADDATA, _OnUser8LoadDataFnc);
	//m_wndUser8.SetEvent(WE_ADDNEW, _OnUser8AddNewFnc);
	m_wndLockSchedule.SetEvent(WE_CLICK, _OnLockScheduleSelectFnc);
	m_wndUpdate.SetEvent(WE_CLICK, _OnUpdateSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);	
	SetMode(GetMode());

	if (GetMode() == VM_EDIT)
		GetDataToScreen();
}
void CHMSSampleScheduleInfoDialog::OnDoDataExchange(CDataExchange* pDX)
{
	DDX_TextEx(pDX, m_wndKhoa1.GetDlgCtrlID(), m_szKhoa1Key);
	DDX_TextEx(pDX, m_wndCa1.GetDlgCtrlID(), m_szCa1Key);
	DDX_TextEx(pDX, m_wndStartDate.GetDlgCtrlID(), m_szStartDate);
	DDX_TextEx(pDX, m_wndStartTime.GetDlgCtrlID(), m_szStartTime);
	DDX_TextEx(pDX, m_wndEndDate.GetDlgCtrlID(), m_szEndDate);
	DDX_TextEx(pDX, m_wndEndTime.GetDlgCtrlID(), m_szEndTime);
	DDX_TextEx(pDX, m_wndCua1.GetDlgCtrlID(), m_szCua1Key);
	DDX_TextEx(pDX, m_wndUser1.GetDlgCtrlID(), m_szUser1Key);
	DDX_TextEx(pDX, m_wndCua2.GetDlgCtrlID(), m_szCua2Key);
	DDX_TextEx(pDX, m_wndUser2.GetDlgCtrlID(), m_szUser2Key);
	DDX_TextEx(pDX, m_wndCua3.GetDlgCtrlID(), m_szCua3Key);
	DDX_TextEx(pDX, m_wndUser3.GetDlgCtrlID(), m_szUser3Key);
	DDX_TextEx(pDX, m_wndCua4.GetDlgCtrlID(), m_szCua4Key);
	DDX_TextEx(pDX, m_wndUser4.GetDlgCtrlID(), m_szUser4Key);
	DDX_TextEx(pDX, m_wndKhoa2.GetDlgCtrlID(), m_szKhoa2Key);
	DDX_TextEx(pDX, m_wndCa2.GetDlgCtrlID(), m_szCa2Key);
	DDX_TextEx(pDX, m_wndStartDate1.GetDlgCtrlID(), m_szStartDate1);
	DDX_TextEx(pDX, m_wndStartTime1.GetDlgCtrlID(), m_szStartTime1);
	DDX_TextEx(pDX, m_wndEndDate1.GetDlgCtrlID(), m_szEndDate1);
	DDX_TextEx(pDX, m_wndEndTime1.GetDlgCtrlID(), m_szEndTime1);
	DDX_TextEx(pDX, m_wndCua5.GetDlgCtrlID(), m_szCua5Key);
	DDX_TextEx(pDX, m_wndUser5.GetDlgCtrlID(), m_szUser5Key);
	DDX_TextEx(pDX, m_wndCua6.GetDlgCtrlID(), m_szCua6Key);
	DDX_TextEx(pDX, m_wndUser6.GetDlgCtrlID(), m_szUser6Key);
	DDX_TextEx(pDX, m_wndCua7.GetDlgCtrlID(), m_szCua7Key);
	DDX_TextEx(pDX, m_wndUser7.GetDlgCtrlID(), m_szUser7Key);
	DDX_TextEx(pDX, m_wndCua8.GetDlgCtrlID(), m_szCua8Key);
	DDX_TextEx(pDX, m_wndUser8.GetDlgCtrlID(), m_szUser8Key);
	DDX_Check(pDX, m_wndLockSchedule.GetDlgCtrlID(), m_bLockSchedule);
}

void CHMSSampleScheduleInfoDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;	
	szSQL.Format(_T(" SELECT") \
	_T("     HSS_DEPT AS dept,") \
	_T("     HSS_DUTY AS duty,") \
	_T("     hss_starttime AS starttime,") \
	_T("     hss_endtime AS endtime,") \
	_T("     HSS_DEPT1 AS dept1,") \
	_T("     HSS_DUTY1 AS duty1,") \
	_T("     hss_starttime1 AS starttime1,") \
	_T("     hss_endtime1 AS endtime1,") \
	_T("     hss_status AS status,") \
	_T("    HSSL_GATE1 AS gate1,") \
	_T("    HSSL_GATE2 AS gate2,") \
	_T("    HSSL_GATE3 AS gate3,") \
	_T("    HSSL_GATE4 AS gate4,") \
	_T("    HSSL_GATE5 AS gate5,") \
	_T("    HSSL_GATE6 AS gate6,") \
	_T("    HSSL_GATE7 AS gate7,") \
	_T("    HSSL_GATE8 AS gate8,") \
	_T("    HSSL_USER1 AS user1,") \
	_T("    HSSL_USER2 AS user2,") \
	_T("    HSSL_USER3 AS user3,") \
	_T("    HSSL_USER4 AS user4,") \
	_T("    HSSL_USER5 AS user5,") \
	_T("    HSSL_USER6 AS user6,") \
	_T("    HSSL_USER7 AS user7,") \
	_T("    HSSL_USER8 AS user8   ") \
	_T(" FROM") \
	_T("     hms_sample_schedule") \
	_T("     LEFT JOIN hms_sample_schedule_line ON (hssl_refidx = hss_idx)") \
	_T("WHERE hss_idx=%ld"), m_nIdx);

	rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);

	CDateTime dt;
	CDate date;
	CTimeStamp ts;
	CString szTemp;

	if (!rs.IsEOF())
	{
		rs.GetValue(_T("StartTime"), szTemp);
		dt.ParseDateTime(szTemp);
		date = dt.GetDate();
		ts = dt.GetTime();
		m_szStartDate.Format(_T("%.4d/%.2d/%.2d"), date.GetYear(), date.GetMonth(), date.GetDay());
		m_szStartTime.Format(_T("%.2d:%.2d"), ts.GetHour(), ts.GetMinute());

		rs.GetValue(_T("EndTime"), szTemp);
		dt.ParseDateTime(szTemp);
		date = dt.GetDate();
		ts = dt.GetTime();
		m_szEndDate.Format(_T("%.4d/%.2d/%.2d"), date.GetYear(), date.GetMonth(), date.GetDay());
		m_szEndTime.Format(_T("%.2d:%.2d"), ts.GetHour(), ts.GetMinute());


		rs.GetValue(_T("StartTime1"), szTemp);
		dt.ParseDateTime(szTemp);
		date = dt.GetDate();
		ts = dt.GetTime();
		m_szStartDate1.Format(_T("%.4d/%.2d/%.2d"), date.GetYear(), date.GetMonth(), date.GetDay());
		m_szStartTime1.Format(_T("%.2d:%.2d"), ts.GetHour(), ts.GetMinute());

		rs.GetValue(_T("EndTime1"), szTemp);
		dt.ParseDateTime(szTemp);
		date = dt.GetDate();
		ts = dt.GetTime();
		m_szEndDate1.Format(_T("%.4d/%.2d/%.2d"), date.GetYear(), date.GetMonth(), date.GetDay());
		m_szEndTime1.Format(_T("%.2d:%.2d"), ts.GetHour(), ts.GetMinute());

		rs.GetValue(_T("dept"), m_szKhoa1Key);
		rs.GetValue(_T("duty"), m_szCa1Key);
		rs.GetValue(_T("dept1"), m_szKhoa2Key);
		rs.GetValue(_T("duty1"), m_szCa2Key);
		rs.GetValue(_T("gate1"), m_szCua1Key);
		rs.GetValue(_T("gate2"), m_szCua2Key);
		rs.GetValue(_T("gate3"), m_szCua3Key);
		rs.GetValue(_T("gate4"), m_szCua4Key);
		rs.GetValue(_T("gate5"), m_szCua5Key);
		rs.GetValue(_T("gate6"), m_szCua6Key);
		rs.GetValue(_T("gate7"), m_szCua7Key);
		rs.GetValue(_T("gate8"), m_szCua8Key);

		rs.GetValue(_T("user1"), m_szUser1Key);
		rs.GetValue(_T("user2"), m_szUser2Key);
		rs.GetValue(_T("user3"), m_szUser3Key);
		rs.GetValue(_T("user4"), m_szUser4Key);
		rs.GetValue(_T("user5"), m_szUser5Key);
		rs.GetValue(_T("user6"), m_szUser6Key);
		rs.GetValue(_T("user7"), m_szUser7Key);
		rs.GetValue(_T("user8"), m_szUser8Key);


		rs.GetValue(_T("Status"), szTemp);
		if (szTemp == _T("O"))
			m_bLockSchedule = FALSE;
		else
			m_bLockSchedule = TRUE;

		if (szTemp != _T("O") && !pMF->CheckPermission(_T("4.1")))
			SetMode(VM_VIEW);
		else
			UpdateData(FALSE);
	}
	else
		SetMode(VM_NONE);
}
void CHMSSampleScheduleInfoDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	if (GetMode() == VM_ADD)
	{
		CRecord rs(&pMF->m_db);
		CString szSQL;
		szSQL.Format(_T("SELECT coalesce(Max(hss_idx), 0)+1 AS Idx FROM hms_sample_schedule"));
		rs.ExecSQL(szSQL);

		if (!rs.IsEOF())
			rs.GetValue(_T("Idx"), m_nIdx);

		m_hms_sample_scheduleTbl.SetValue(_T("hss_idx"), m_nIdx);
		m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_refidx"), m_nIdx);
	}

	CString szStartTime, szEndTime,szStartTime1, szEndTime1;
	szStartTime.Format(_T("%s %s"), m_szStartDate, m_szStartTime);
	szEndTime.Format(_T("%s %s"), m_szEndDate, m_szEndTime);

	szStartTime1.Format(_T("%s %s"), m_szStartDate1, m_szStartTime1);
	szEndTime1.Format(_T("%s %s"), m_szEndDate1, m_szEndTime1);

	m_hms_sample_scheduleTbl.SetValue(_T("hss_createdby"), pMF->GetCurrentUser());
	m_hms_sample_scheduleTbl.SetValue(_T("hss_createddate"), pMF->GetSysDateTime());
	m_hms_sample_scheduleTbl.SetValue(_T("hss_updatedby"), pMF->GetCurrentUser());
	m_hms_sample_scheduleTbl.SetValue(_T("hss_updateddate"), pMF->GetSysDateTime());

	m_hms_sample_scheduleTbl.SetValue(_T("hss_starttime"), szStartTime);
	m_hms_sample_scheduleTbl.SetValue(_T("hss_endtime"), szEndTime);

	m_hms_sample_scheduleTbl.SetValue(_T("hss_starttime1"), szStartTime1);
	m_hms_sample_scheduleTbl.SetValue(_T("hss_endtime1"), szEndTime1);

	m_hms_sample_scheduleTbl.SetValue(_T("hss_dept"), m_szKhoa1Key);
	m_hms_sample_scheduleTbl.SetValue(_T("hss_duty"), m_szCa1Key);
	m_hms_sample_scheduleTbl.SetValue(_T("hss_dept1"), m_szKhoa2Key);
	m_hms_sample_scheduleTbl.SetValue(_T("hss_duty1"), m_szCa2Key);
	

	if (m_bLockSchedule)
		m_hms_sample_scheduleTbl.SetValue(_T("hss_status"), _T("T"));
	else
		m_hms_sample_scheduleTbl.SetValue(_T("hss_status"), _T("O"));

	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate1"), m_szCua1Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate2"), m_szCua2Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate3"), m_szCua3Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate4"), m_szCua4Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate5"), m_szCua5Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate6"), m_szCua6Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate7"), m_szCua7Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate8"), m_szCua8Key);

	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user1"), m_szUser1Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user2"), m_szUser2Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user3"), m_szUser3Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user4"), m_szUser4Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user5"), m_szUser5Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user6"), m_szUser6Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user7"), m_szUser7Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user8"), m_szUser8Key);
}
void CHMSSampleScheduleInfoDialog::SetDefaultValues()
{

	m_szKhoa1Key.Empty();
	m_szCa1Key.Empty();
	m_szStartDate.Empty();
	m_szStartTime.Empty();
	m_szEndDate.Empty();
	m_szEndTime.Empty();
	m_szCua1Key.Empty();
	m_szUser1Key.Empty();
	m_szCua2Key.Empty();
	m_szUser2Key.Empty();
	m_szCua3Key.Empty();
	m_szUser3Key.Empty();
	m_szCua4Key.Empty();
	m_szUser4Key.Empty();
	m_szKhoa2Key.Empty();
	m_szCa2Key.Empty();
	m_szStartDate1.Empty();
	m_szStartTime1.Empty();
	m_szEndDate1.Empty();
	m_szEndTime1.Empty();
	m_szCua5Key.Empty();
	m_szUser5Key.Empty();
	m_szCua6Key.Empty();
	m_szUser6Key.Empty();
	m_szCua7Key.Empty();
	m_szUser7Key.Empty();
	m_szCua8Key.Empty();
	m_szUser8Key.Empty();
	m_bLockSchedule=FALSE;

}
int CHMSSampleScheduleInfoDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db);
		CDate dte;
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
			m_szStartDate.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay());
			m_szStartTime.Format(_T("%.2d:%.2d"), 6, 30);
			dte.ParseDate(m_szStartDate);
			if (m_DateTime.GetMonth() == 12 && m_DateTime.GetDay() == 31)
			{
				m_szEndDate.Format(_T("%.4d/01/01"), m_DateTime.GetYear());
			}
			else if (m_DateTime.GetDay() == dte.GetMonthLastDay())
			{
				m_szEndDate.Format(_T("%.4d/%.2d/01"), m_DateTime.GetYear(), m_DateTime.GetMonth());
			}
			else
			{
				m_szEndDate.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay());
			}
			m_szEndTime.Format(_T("%.2d:%.2d"), 7, 30);

			m_szStartDate1.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay());
			m_szStartTime1.Format(_T("%.2d:%.2d"), 7, 31);
			dte.ParseDate(m_szStartDate);
			if (m_DateTime.GetMonth() == 12 && m_DateTime.GetDay() == 31)
			{
				m_szEndDate1.Format(_T("%.4d/01/01"), m_DateTime.GetYear());
			}
			else if (m_DateTime.GetDay() == dte.GetMonthLastDay())
			{
				m_szEndDate1.Format(_T("%.4d/%.2d/01"), m_DateTime.GetYear(), m_DateTime.GetMonth());
			}
			else
			{
				m_szEndDate1.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay());
			}
			m_szEndTime1.Format(_T("%.2d:%.2d"), 17, 00);
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 0, 1, -1); 
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 0, -1);
			m_wndLockSchedule.EnableWindow(FALSE);
 			break; 
 		case VM_NONE:
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 6, -1);
			m_wndLockSchedule.EnableWindow(FALSE);
 			SetDefaultValues();
			m_szStartDate.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay());
			m_szStartTime.Format(_T("%.2d:%.2d"), 6, 30);
			dte.ParseDate(m_szStartDate);
			if (m_DateTime.GetMonth() == 12 && m_DateTime.GetDay() == 31)
			{
				m_szEndDate.Format(_T("%.4d/01/01"), m_DateTime.GetYear());
			}
			else if (m_DateTime.GetDay() == dte.GetMonthLastDay())
			{
				m_szEndDate.Format(_T("%.4d/%.2d/01"), m_DateTime.GetYear(), m_DateTime.GetMonth());
			}
			else
			{
				m_szEndDate.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay());
			}
			m_szEndTime.Format(_T("%.2d:%.2d"), 7, 30);

			m_szStartDate1.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay());
			m_szStartTime1.Format(_T("%.2d:%.2d"), 7, 31);
			dte.ParseDate(m_szStartDate);
			if (m_DateTime.GetMonth() == 12 && m_DateTime.GetDay() == 31)
			{
				m_szEndDate1.Format(_T("%.4d/01/01"), m_DateTime.GetYear());
			}
			else if (m_DateTime.GetDay() == dte.GetMonthLastDay())
			{
				m_szEndDate1.Format(_T("%.4d/%.2d/01"), m_DateTime.GetYear(), m_DateTime.GetMonth());
			}
			else
			{
				m_szEndDate1.Format(_T("%.4d/%.2d/%.2d"), m_DateTime.GetYear(), m_DateTime.GetMonth(), m_DateTime.GetDay());
			}
			m_szEndTime1.Format(_T("%.2d:%.2d"), 17, 00);
 			break;
 		};
		//m_wndStartDate.EnableWindow(FALSE);
		m_wndEndDate.EnableWindow(FALSE);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSSampleScheduleInfoDialog::OnKhoa1SelectChange(int nOldItemSel, int nNewItemSel)
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnKhoa1Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnKhoa1Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnKhoa1Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnKhoa1LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndKhoa1.IsSearchKey() && !m_szKhoa1Key.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szKhoa1Key);
	}
	m_wndKhoa1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type in ('XN','KB','DT') and sd_id='%s' %s ORDER BY id "), pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndKhoa1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnKhoa1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnCa1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCa1Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnCa1Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnCa1Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnCa1LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCa1.IsSearchKey() && !m_szCa1Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCa1Key);
	}
	m_wndCa1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_duty' and ss_code='1' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCa1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;

}
/*void CHMSSampleScheduleInfoDialog::OnCa1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSampleScheduleInfoDialog::OnStartDateChange(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnStartDateSetfocus(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnStartDateKillfocus(){
	
} */
int CHMSSampleScheduleInfoDialog::OnStartDateCheckValue(){
	return 0;
} 
/*void CHMSSampleScheduleInfoDialog::OnStartTimeChange(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnStartTimeSetfocus(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnStartTimeKillfocus(){
	
} */
int CHMSSampleScheduleInfoDialog::OnStartTimeCheckValue(){
	return 0;
} 
/*void CHMSSampleScheduleInfoDialog::OnEndDateChange(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnEndDateSetfocus(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnEndDateKillfocus(){
	
} */
int CHMSSampleScheduleInfoDialog::OnEndDateCheckValue(){
	return 0;
} 
/*void CHMSSampleScheduleInfoDialog::OnEndTimeChange(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnEndTimeSetfocus(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnEndTimeKillfocus(){
	
} */
int CHMSSampleScheduleInfoDialog::OnEndTimeCheckValue(){
	return 0;
} 
void CHMSSampleScheduleInfoDialog::OnCua1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua1Selendok()
{
	 
}
/*void CHMSSampleScheduleInfoDialog::OnCua1Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnCua1Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnCua1LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua1.IsSearchKey() && !m_szCua1Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua1Key);
	}
	m_wndCua1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnCua1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnUser1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser1Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnUser1Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnUser1Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnUser1LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser1.IsSearchKey() && !m_szUser1Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser1Key);
	}
	m_wndUser1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
		
}
/*void CHMSSampleScheduleInfoDialog::OnUser1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnCua2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua2Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnCua2Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnCua2Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnCua2LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua2.IsSearchKey() && !m_szCua2Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua2Key);
	}
	m_wndCua2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnCua2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnUser2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser2Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnUser2Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnUser2Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnUser2LoadData()
{
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser2.IsSearchKey() && !m_szUser2Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser2Key);
	}
	m_wndUser2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
	}
/*void CHMSSampleScheduleInfoDialog::OnUser2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnCua3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua3Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnCua3Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnCua3Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnCua3LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua3.IsSearchKey() && !m_szCua3Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua3Key);
	}
	m_wndCua3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnCua3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnUser3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser3Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnUser3Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnUser3Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnUser3LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser3.IsSearchKey() && !m_szUser3Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser3Key);
	}
	m_wndUser3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
	
}
/*void CHMSSampleScheduleInfoDialog::OnUser3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnCua4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua4Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnCua4Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnCua4Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnCua4LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua4.IsSearchKey() && !m_szCua4Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua4Key);
	}
	m_wndCua4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnCua4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnUser4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser4Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnUser4Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnUser4Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnUser4LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser4.IsSearchKey() && !m_szUser4Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser4Key);
	}
	m_wndUser4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
	
}
/*void CHMSSampleScheduleInfoDialog::OnUser4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnKhoa2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnKhoa2Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnKhoa2Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnKhoa2Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnKhoa2LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndKhoa2.IsSearchKey() && !m_szKhoa2Key.IsEmpty()){
		szWhere.Format(_T(" and sd_id='%s' "), m_szKhoa2Key);
	}
	m_wndKhoa2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT sd_id as id, sd_name as name FROM sys_dept WHERE sd_type in ('XN','KB','DT') and sd_id='%s' %s ORDER BY id "), pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndKhoa2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnKhoa2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnCa2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCa2Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnCa2Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnCa2Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnCa2LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCa2.IsSearchKey() && !m_szCa2Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCa2Key);
	}
	m_wndCa2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_duty' and ss_code='2' %s ORDER BY id "), szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCa2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnCa2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSSampleScheduleInfoDialog::OnStartDate1Change(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnStartDate1Setfocus(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnStartDate1Killfocus(){
	
} */
int CHMSSampleScheduleInfoDialog::OnStartDate1CheckValue(){
	return 0;
} 
/*void CHMSSampleScheduleInfoDialog::OnStartTime1Change(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnStartTime1Setfocus(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnStartTime1Killfocus(){
	
} */
int CHMSSampleScheduleInfoDialog::OnStartTime1CheckValue(){
	return 0;
} 
/*void CHMSSampleScheduleInfoDialog::OnEndDate1Change(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnEndDate1Setfocus(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnEndDate1Killfocus(){
	
} */
int CHMSSampleScheduleInfoDialog::OnEndDate1CheckValue(){
	return 0;
} 
/*void CHMSSampleScheduleInfoDialog::OnEndTime1Change(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnEndTime1Setfocus(){
	
} */
/*void CHMSSampleScheduleInfoDialog::OnEndTime1Killfocus(){
	
} */
int CHMSSampleScheduleInfoDialog::OnEndTime1CheckValue(){
	return 0;
} 
void CHMSSampleScheduleInfoDialog::OnCua5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua5Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnCua5Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnCua5Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnCua5LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua5.IsSearchKey() && !m_szCua5Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua5Key);
	}
	m_wndCua5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnCua5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnUser5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser5Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnUser5Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnUser5Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnUser5LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser5.IsSearchKey() && !m_szUser5Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser5Key);
	}
	m_wndUser5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
/*void CHMSSampleScheduleInfoDialog::OnUser5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnCua6SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua6Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnCua6Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnCua6Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnCua6LoadData()
{
CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua6.IsSearchKey() && !m_szCua6Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua6Key);
	}
	m_wndCua6.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua6.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnCua6AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnUser6SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser6Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnUser6Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnUser6Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnUser6LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser6.IsSearchKey() && !m_szUser6Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser6Key);
	}
	m_wndUser6.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser6.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
	
}
/*void CHMSSampleScheduleInfoDialog::OnUser6AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnCua7SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua7Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnCua7Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnCua7Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnCua7LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua7.IsSearchKey() && !m_szCua7Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua7Key);
	}
	m_wndCua7.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua7.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnCua7AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnUser7SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser7Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnUser7Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnUser7Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnUser7LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser7.IsSearchKey() && !m_szUser7Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser7Key);
	}
	m_wndUser7.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser7.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
	
}
/*void CHMSSampleScheduleInfoDialog::OnUser7AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnCua8SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua8Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnCua8Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnCua8Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnCua8LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua8.IsSearchKey() && !m_szCua8Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua8Key);
	}
	m_wndCua8.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua8.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
/*void CHMSSampleScheduleInfoDialog::OnCua8AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSSampleScheduleInfoDialog::OnUser8SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser8Selendok(){
	 
}
/*void CHMSSampleScheduleInfoDialog::OnUser8Setfocus(){
	
}*/
/*void CHMSSampleScheduleInfoDialog::OnUser8Killfocus(){
	
}*/
long CHMSSampleScheduleInfoDialog::OnUser8LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser8.IsSearchKey() && !m_szUser8Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser8Key);
	}
	m_wndUser8.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	//_msg(_T("%s"),szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser8.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
	
}
/*void CHMSSampleScheduleInfoDialog::OnUser8AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CHMSSampleScheduleInfoDialog::OnLockScheduleSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CHMSSampleScheduleInfoDialog::OnUpdateSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveCHMSSampleScheduleInfoDialog();	
} 
void CHMSSampleScheduleInfoDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	
} 
int CHMSSampleScheduleInfoDialog::OnAddCHMSSampleScheduleInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSSampleScheduleInfoDialog::OnEditCHMSSampleScheduleInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSSampleScheduleInfoDialog::OnDeleteCHMSSampleScheduleInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelCHMSSampleScheduleInfoDialog();
 	}
	return 0;
}
int CHMSSampleScheduleInfoDialog::OnSaveCHMSSampleScheduleInfoDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL, szSQL1; 
 	if (GetMode() == VM_ADD)
	{ 
		szSQL = m_hms_sample_scheduleTbl.GetInsertSQL();
		szSQL1 = m_hms_sample_schedule_lineTbl.GetInsertSQL();
 	} 
 	else if (GetMode() == VM_EDIT)
	{ 
 		CString szWhere;
		szWhere.Format(_T(" WHERE hss_idx=%ld "), m_nIdx); 
		szSQL = m_hms_sample_scheduleTbl.GetUpdateSQL(_T("hss_idx,hss_createdby,hss_createddate")); 
 		szSQL += szWhere;
		szWhere.Format(_T(" WHERE hssl_refidx=%ld "), m_nIdx);
		szSQL1 = m_hms_sample_schedule_lineTbl.GetUpdateSQL(_T("hssl_refidx"));
		szSQL1 += szWhere;
 	} 
    //_msg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL);
 	if (ret > 0) 
 	{ 
 		//OnHMSSurgeryScheduleInfoDialogListLoadData(); 
 		//SetMode(VM_VIEW);
		pMF->ExecSQL(szSQL1);
		OnOK();
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSSampleScheduleInfoDialog::OnCancelCHMSSampleScheduleInfoDialog(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSSampleScheduleInfoDialog::OnCHMSSampleScheduleInfoDialogListLoadData(){
	return 0;
}


COleDateTime CHMSSampleScheduleInfoDialog::GetFromTime()
{
	COleDateTime dt;
	CString szTemp;

	szTemp.Format(_T("%s %s"), m_szStartDate, m_szStartTime);
	dt.ParseDateTime(szTemp);

	return dt;
}

COleDateTime CHMSSampleScheduleInfoDialog::GetToTime()
{
	COleDateTime dt;
	CString szTemp;

	szTemp.Format(_T("%s %s"), m_szEndDate, m_szEndTime);
	dt.ParseDateTime(szTemp);

	return dt;
}

//CString CHMSSampleScheduleInfoDialog::GetSubject()
//{
//	CString szValue;
//	CString szDoctors, szNurses, szNurses1;
//
//	UpdateData(TRUE);
//
//	szDoctors = _T("\x42\xE1\x63 s\x129: ");
//	szNurses = _T("\x110i\x1EC1u \x64\x1B0\x1EE1ng: ");
//	szNurses1 = _T("Y t\xE1: ");
//
//	if (!m_wndDoctor.GetCurrent(1).Trim().IsEmpty())
//		szDoctors += m_wndDoctor.GetCurrent(1);
//
//	if (!m_wndDoctor1.GetCurrent(1).Trim().IsEmpty())
//		szDoctors += _T(", ") + m_wndDoctor1.GetCurrent(1);
//
//	if (!m_wndNurses1.GetCurrent(1).Trim().IsEmpty())
//		szNurses += m_wndNurses1.GetCurrent(1);
//
//	if (!m_wndNurses2.GetCurrent(1).Trim().IsEmpty())
//		szNurses += _T(", ") + m_wndNurses2.GetCurrent(1);
//
//	if (!m_wndNurses3.GetCurrent(1).Trim().IsEmpty())
//		szNurses1 += m_wndNurses3.GetCurrent(1);
//
//	if (!m_wndNurses4.GetCurrent(1).Trim().IsEmpty())
//		szNurses1 += _T(", ") + m_wndNurses4.GetCurrent(1);
//
//	if (!m_wndNurses5.GetCurrent(1).Trim().IsEmpty())
//		szNurses1 += _T(", ") + m_wndNurses5.GetCurrent(1);
//
//	szValue = szDoctors + _T("\n") + szNurses + _T("\n") + szNurses1;
//
//	return szValue;
//}