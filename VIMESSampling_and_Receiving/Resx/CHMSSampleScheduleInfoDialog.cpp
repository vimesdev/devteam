#include "CHMSSampleScheduleInfoDialog.h"
#include "MainFrm.h"
static void _OnKhoa1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnKhoa1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnKhoa1SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa1Selendok();
}
/*static void _OnKhoa1SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa1Killfocus();
}*/
/*static void _OnKhoa1KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa1Killfocus();
}*/
static long _OnKhoa1LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa1LoadData();
}
/*static void _OnKhoa1AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa1AddNew();
}*/
static void _OnCa1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnCa1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCa1SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCa1Selendok();
}
/*static void _OnCa1SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCa1Killfocus();
}*/
/*static void _OnCa1KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCa1Killfocus();
}*/
static long _OnCa1LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCa1LoadData();
}
/*static void _OnCa1AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCa1AddNew();
}*/
/*static void _OnStartDateChangeFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartDateChange();
} */
/*static void _OnStartDateSetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartDateSetfocus();} */ 
/*static void _OnStartDateKillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartDateKillfocus();
} */
static int _OnStartDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartDateCheckValue();
} 
/*static void _OnStartTimeChangeFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartTimeChange();
} */
/*static void _OnStartTimeSetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartTimeSetfocus();} */ 
/*static void _OnStartTimeKillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartTimeKillfocus();
} */
static int _OnStartTimeCheckValueFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartTimeCheckValue();
} 
/*static void _OnEndDateChangeFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndDateChange();
} */
/*static void _OnEndDateSetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndDateSetfocus();} */ 
/*static void _OnEndDateKillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndDateKillfocus();
} */
static int _OnEndDateCheckValueFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndDateCheckValue();
} 
/*static void _OnEndTimeChangeFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndTimeChange();
} */
/*static void _OnEndTimeSetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndTimeSetfocus();} */ 
/*static void _OnEndTimeKillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndTimeKillfocus();
} */
static int _OnEndTimeCheckValueFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndTimeCheckValue();
} 
static void _OnCua1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnCua1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua1SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua1Selendok();
}
/*static void _OnCua1SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua1Killfocus();
}*/
/*static void _OnCua1KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua1Killfocus();
}*/
static long _OnCua1LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua1LoadData();
}
/*static void _OnCua1AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua1AddNew();
}*/
static void _OnUser1SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnUser1SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser1SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser1Selendok();
}
/*static void _OnUser1SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser1Killfocus();
}*/
/*static void _OnUser1KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser1Killfocus();
}*/
static long _OnUser1LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser1LoadData();
}
/*static void _OnUser1AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser1AddNew();
}*/
static void _OnCua2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnCua2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua2SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua2Selendok();
}
/*static void _OnCua2SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua2Killfocus();
}*/
/*static void _OnCua2KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua2Killfocus();
}*/
static long _OnCua2LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua2LoadData();
}
/*static void _OnCua2AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua2AddNew();
}*/
static void _OnUser2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnUser2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser2SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser2Selendok();
}
/*static void _OnUser2SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser2Killfocus();
}*/
/*static void _OnUser2KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser2Killfocus();
}*/
static long _OnUser2LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser2LoadData();
}
/*static void _OnUser2AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser2AddNew();
}*/
static void _OnCua3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnCua3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua3SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua3Selendok();
}
/*static void _OnCua3SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua3Killfocus();
}*/
/*static void _OnCua3KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua3Killfocus();
}*/
static long _OnCua3LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua3LoadData();
}
/*static void _OnCua3AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua3AddNew();
}*/
static void _OnUser3SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnUser3SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser3SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser3Selendok();
}
/*static void _OnUser3SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser3Killfocus();
}*/
/*static void _OnUser3KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser3Killfocus();
}*/
static long _OnUser3LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser3LoadData();
}
/*static void _OnUser3AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser3AddNew();
}*/
static void _OnCua4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnCua4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua4SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua4Selendok();
}
/*static void _OnCua4SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua4Killfocus();
}*/
/*static void _OnCua4KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua4Killfocus();
}*/
static long _OnCua4LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua4LoadData();
}
/*static void _OnCua4AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua4AddNew();
}*/
static void _OnUser4SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnUser4SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser4SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser4Selendok();
}
/*static void _OnUser4SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser4Killfocus();
}*/
/*static void _OnUser4KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser4Killfocus();
}*/
static long _OnUser4LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser4LoadData();
}
/*static void _OnUser4AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser4AddNew();
}*/
static void _OnKhoa2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnKhoa2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnKhoa2SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa2Selendok();
}
/*static void _OnKhoa2SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa2Killfocus();
}*/
/*static void _OnKhoa2KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa2Killfocus();
}*/
static long _OnKhoa2LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa2LoadData();
}
/*static void _OnKhoa2AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnKhoa2AddNew();
}*/
static void _OnCa2SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnCa2SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCa2SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCa2Selendok();
}
/*static void _OnCa2SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCa2Killfocus();
}*/
/*static void _OnCa2KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCa2Killfocus();
}*/
static long _OnCa2LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCa2LoadData();
}
/*static void _OnCa2AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCa2AddNew();
}*/
/*static void _OnStartDate1ChangeFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartDate1Change();
} */
/*static void _OnStartDate1SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartDate1Setfocus();} */ 
/*static void _OnStartDate1KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartDate1Killfocus();
} */
static int _OnStartDate1CheckValueFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartDate1CheckValue();
} 
/*static void _OnStartTime1ChangeFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartTime1Change();
} */
/*static void _OnStartTime1SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartTime1Setfocus();} */ 
/*static void _OnStartTime1KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartTime1Killfocus();
} */
static int _OnStartTime1CheckValueFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnStartTime1CheckValue();
} 
/*static void _OnEndDate1ChangeFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndDate1Change();
} */
/*static void _OnEndDate1SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndDate1Setfocus();} */ 
/*static void _OnEndDate1KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndDate1Killfocus();
} */
static int _OnEndDate1CheckValueFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndDate1CheckValue();
} 
/*static void _OnEndTime1ChangeFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndTime1Change();
} */
/*static void _OnEndTime1SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndTime1Setfocus();} */ 
/*static void _OnEndTime1KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndTime1Killfocus();
} */
static int _OnEndTime1CheckValueFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnEndTime1CheckValue();
} 
static void _OnCua5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnCua5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua5SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua5Selendok();
}
/*static void _OnCua5SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua5Killfocus();
}*/
/*static void _OnCua5KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua5Killfocus();
}*/
static long _OnCua5LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua5LoadData();
}
/*static void _OnCua5AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua5AddNew();
}*/
static void _OnUser5SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnUser5SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser5SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser5Selendok();
}
/*static void _OnUser5SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser5Killfocus();
}*/
/*static void _OnUser5KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser5Killfocus();
}*/
static long _OnUser5LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser5LoadData();
}
/*static void _OnUser5AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser5AddNew();
}*/
static void _OnCua6SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnCua6SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua6SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua6Selendok();
}
/*static void _OnCua6SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua6Killfocus();
}*/
/*static void _OnCua6KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua6Killfocus();
}*/
static long _OnCua6LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua6LoadData();
}
/*static void _OnCua6AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua6AddNew();
}*/
static void _OnUser6SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnUser6SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser6SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser6Selendok();
}
/*static void _OnUser6SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser6Killfocus();
}*/
/*static void _OnUser6KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser6Killfocus();
}*/
static long _OnUser6LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser6LoadData();
}
/*static void _OnUser6AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser6AddNew();
}*/
static void _OnCua7SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnCua7SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua7SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua7Selendok();
}
/*static void _OnCua7SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua7Killfocus();
}*/
/*static void _OnCua7KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua7Killfocus();
}*/
static long _OnCua7LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua7LoadData();
}
/*static void _OnCua7AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua7AddNew();
}*/
static void _OnUser7SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnUser7SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser7SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser7Selendok();
}
/*static void _OnUser7SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser7Killfocus();
}*/
/*static void _OnUser7KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser7Killfocus();
}*/
static long _OnUser7LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser7LoadData();
}
/*static void _OnUser7AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser7AddNew();
}*/
static void _OnCua8SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnCua8SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua8SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua8Selendok();
}
/*static void _OnCua8SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua8Killfocus();
}*/
/*static void _OnCua8KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua8Killfocus();
}*/
static long _OnCua8LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua8LoadData();
}
/*static void _OnCua8AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnCua8AddNew();
}*/
static void _OnUser8SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CCHMSSampleScheduleInfoDialog* )pWnd)->OnUser8SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser8SelendokFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser8Selendok();
}
/*static void _OnUser8SetfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser8Killfocus();
}*/
/*static void _OnUser8KillfocusFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser8Killfocus();
}*/
static long _OnUser8LoadDataFnc(CWnd *pWnd){
	return ((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser8LoadData();
}
/*static void _OnUser8AddNewFnc(CWnd *pWnd){
	((CCHMSSampleScheduleInfoDialog *)pWnd)->OnUser8AddNew();
}*/
static void _OnLockScheduleSelectFnc(CWnd *pWnd){
	 ((CCHMSSampleScheduleInfoDialog*)pWnd)->OnLockScheduleSelect();
}
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CCHMSSampleScheduleInfoDialog *pVw = (CCHMSSampleScheduleInfoDialog *)pWnd;
	pVw->OnUpdateSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CCHMSSampleScheduleInfoDialog *pVw = (CCHMSSampleScheduleInfoDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddCHMSSampleScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CCHMSSampleScheduleInfoDialog*)pWnd)->OnAddCHMSSampleScheduleInfoDialog();
} 
static int _OnEditCHMSSampleScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CCHMSSampleScheduleInfoDialog*)pWnd)->OnEditCHMSSampleScheduleInfoDialog();
} 
static int _OnDeleteCHMSSampleScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CCHMSSampleScheduleInfoDialog*)pWnd)->OnDeleteCHMSSampleScheduleInfoDialog();
} 
static int _OnSaveCHMSSampleScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CCHMSSampleScheduleInfoDialog*)pWnd)->OnSaveCHMSSampleScheduleInfoDialog();
} 
static int _OnCancelCHMSSampleScheduleInfoDialogFnc(CWnd *pWnd){
	 return ((CCHMSSampleScheduleInfoDialog*)pWnd)->OnCancelCHMSSampleScheduleInfoDialog();
} 
CCHMSSampleScheduleInfoDialog::CCHMSSampleScheduleInfoDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 555;
	SetDefaultValues();
}
CCHMSSampleScheduleInfoDialog::~CCHMSSampleScheduleInfoDialog(){
}
void CCHMSSampleScheduleInfoDialog::OnCreateComponents(){
	m_wndScheduleInfo.Create(this, _T("Thiet lap lich truc ca 1"), 6, 4, 600, 214);
	m_wndScheduleInfo1.Create(this, _T("Thiet lap lich truc ca 1"), 6, 215, 600, 425);
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
void CCHMSSampleScheduleInfoDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndKhoa1.SetCheckValue(true);
	m_wndKhoa1.LimitText(35);
	m_wndCa1.SetCheckValue(true);
	m_wndCa1.LimitText(35);
	m_wndStartDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndStartDate.SetCheckValue(true);
	m_wndStartTime.SetMax(CTime(pMF->GetSysTime()));
	m_wndStartTime.SetCheckValue(true);
	m_wndEndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndEndDate.SetCheckValue(true);
	m_wndEndTime.SetMax(CTime(pMF->GetSysTime()));
	m_wndEndTime.SetCheckValue(true);
	m_wndCua1.SetCheckValue(true);
	m_wndCua1.LimitText(35);
	m_wndUser1.SetCheckValue(true);
	m_wndUser1.LimitText(1024);
	m_wndCua2.SetCheckValue(true);
	m_wndCua2.LimitText(35);
	m_wndUser2.SetCheckValue(true);
	m_wndUser2.LimitText(1024);
	m_wndCua3.SetCheckValue(true);
	m_wndCua3.LimitText(35);
	m_wndUser3.SetCheckValue(true);
	m_wndUser3.LimitText(1024);
	m_wndCua4.SetCheckValue(true);
	m_wndCua4.LimitText(35);
	m_wndUser4.SetCheckValue(true);
	m_wndUser4.LimitText(1024);
	m_wndKhoa2.SetCheckValue(true);
	m_wndKhoa2.LimitText(35);
	m_wndCa2.SetCheckValue(true);
	m_wndCa2.LimitText(35);
	m_wndStartDate1.SetMax(CDate(pMF->GetSysDate()));
	m_wndStartDate1.SetCheckValue(true);
	m_wndStartTime1.SetMax(CTime(pMF->GetSysTime()));
	m_wndStartTime1.SetCheckValue(true);
	m_wndEndDate1.SetMax(CDate(pMF->GetSysDate()));
	m_wndEndDate1.SetCheckValue(true);
	m_wndEndTime1.SetMax(CTime(pMF->GetSysTime()));
	m_wndEndTime1.SetCheckValue(true);
	m_wndCua5.SetCheckValue(true);
	m_wndCua5.LimitText(35);
	m_wndUser5.SetCheckValue(true);
	m_wndUser5.LimitText(1024);
	m_wndCua6.SetCheckValue(true);
	m_wndCua6.LimitText(35);
	m_wndUser6.SetCheckValue(true);
	m_wndUser6.LimitText(1024);
	m_wndCua7.SetCheckValue(true);
	m_wndCua7.LimitText(35);
	m_wndUser7.SetCheckValue(true);
	m_wndUser7.LimitText(1024);
	m_wndCua8.SetCheckValue(true);
	m_wndCua8.LimitText(35);
	m_wndUser8.SetCheckValue(true);
	m_wndUser8.LimitText(1024);


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



}
void CCHMSSampleScheduleInfoDialog::OnSetWindowEvents(){
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
	SetMode(VM_NONE);

}
void CCHMSSampleScheduleInfoDialog::OnDoDataExchange(CDataExchange* pDX){
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
void CCHMSSampleScheduleInfoDialog::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Khoa1")] =  m_szKhoa1Key;
	m_jData[_T("Ca1")] =  m_szCa1Key;
	m_jData[_T("StartDate")] =  m_szStartDate;
	m_jData[_T("StartTime")] =  m_szStartTime;
	m_jData[_T("EndDate")] =  m_szEndDate;
	m_jData[_T("EndTime")] =  m_szEndTime;
	m_jData[_T("Cua1")] =  m_szCua1Key;
	m_jData[_T("User1")] =  m_szUser1Key;
	m_jData[_T("Cua2")] =  m_szCua2Key;
	m_jData[_T("User2")] =  m_szUser2Key;
	m_jData[_T("Cua3")] =  m_szCua3Key;
	m_jData[_T("User3")] =  m_szUser3Key;
	m_jData[_T("Cua4")] =  m_szCua4Key;
	m_jData[_T("User4")] =  m_szUser4Key;
	m_jData[_T("Khoa2")] =  m_szKhoa2Key;
	m_jData[_T("Ca2")] =  m_szCa2Key;
	m_jData[_T("StartDate1")] =  m_szStartDate1;
	m_jData[_T("StartTime1")] =  m_szStartTime1;
	m_jData[_T("EndDate1")] =  m_szEndDate1;
	m_jData[_T("EndTime1")] =  m_szEndTime1;
	m_jData[_T("Cua5")] =  m_szCua5Key;
	m_jData[_T("User5")] =  m_szUser5Key;
	m_jData[_T("Cua6")] =  m_szCua6Key;
	m_jData[_T("User6")] =  m_szUser6Key;
	m_jData[_T("Cua7")] =  m_szCua7Key;
	m_jData[_T("User7")] =  m_szUser7Key;
	m_jData[_T("Cua8")] =  m_szCua8Key;
	m_jData[_T("User8")] =  m_szUser8Key;
	m_jData[_T("LockSchedule")] =  m_bLockSchedule;
	}
	else
	{
			
	m_jData[_T("Khoa1")].GetValue(m_szKhoa1Key);
	m_jData[_T("Ca1")].GetValue(m_szCa1Key);
	m_jData[_T("StartDate")].GetValue(m_szStartDate);
	m_jData[_T("StartTime")].GetValue(m_szStartTime);
	m_jData[_T("EndDate")].GetValue(m_szEndDate);
	m_jData[_T("EndTime")].GetValue(m_szEndTime);
	m_jData[_T("Cua1")].GetValue(m_szCua1Key);
	m_jData[_T("User1")].GetValue(m_szUser1Key);
	m_jData[_T("Cua2")].GetValue(m_szCua2Key);
	m_jData[_T("User2")].GetValue(m_szUser2Key);
	m_jData[_T("Cua3")].GetValue(m_szCua3Key);
	m_jData[_T("User3")].GetValue(m_szUser3Key);
	m_jData[_T("Cua4")].GetValue(m_szCua4Key);
	m_jData[_T("User4")].GetValue(m_szUser4Key);
	m_jData[_T("Khoa2")].GetValue(m_szKhoa2Key);
	m_jData[_T("Ca2")].GetValue(m_szCa2Key);
	m_jData[_T("StartDate1")].GetValue(m_szStartDate1);
	m_jData[_T("StartTime1")].GetValue(m_szStartTime1);
	m_jData[_T("EndDate1")].GetValue(m_szEndDate1);
	m_jData[_T("EndTime1")].GetValue(m_szEndTime1);
	m_jData[_T("Cua5")].GetValue(m_szCua5Key);
	m_jData[_T("User5")].GetValue(m_szUser5Key);
	m_jData[_T("Cua6")].GetValue(m_szCua6Key);
	m_jData[_T("User6")].GetValue(m_szUser6Key);
	m_jData[_T("Cua7")].GetValue(m_szCua7Key);
	m_jData[_T("User7")].GetValue(m_szUser7Key);
	m_jData[_T("Cua8")].GetValue(m_szCua8Key);
	m_jData[_T("User8")].GetValue(m_szUser8Key);
	m_jData[_T("LockSchedule")].GetValue(m_bLockSchedule);
	}

}
void CCHMSSampleScheduleInfoDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CCHMSSampleScheduleInfoDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CCHMSSampleScheduleInfoDialog::SetDefaultValues(){

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
int CCHMSSampleScheduleInfoDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CCHMSSampleScheduleInfoDialog::OnKhoa1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnKhoa1Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnKhoa1Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnKhoa1Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnKhoa1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndKhoa1.IsSearchKey() && !m_szKhoa1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szKhoa1Key
};
	m_wndKhoa1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndKhoa1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnKhoa1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnCa1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCa1Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnCa1Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnCa1Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnCa1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCa1.IsSearchKey() && !m_szCa1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCa1Key
};
	m_wndCa1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCa1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnCa1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnStartDateChange(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnStartDateSetfocus(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnStartDateKillfocus(){
	
} */
int CCHMSSampleScheduleInfoDialog::OnStartDateCheckValue(){
	return 0;
} 
/*void CCHMSSampleScheduleInfoDialog::OnStartTimeChange(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnStartTimeSetfocus(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnStartTimeKillfocus(){
	
} */
int CCHMSSampleScheduleInfoDialog::OnStartTimeCheckValue(){
	return 0;
} 
/*void CCHMSSampleScheduleInfoDialog::OnEndDateChange(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnEndDateSetfocus(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnEndDateKillfocus(){
	
} */
int CCHMSSampleScheduleInfoDialog::OnEndDateCheckValue(){
	return 0;
} 
/*void CCHMSSampleScheduleInfoDialog::OnEndTimeChange(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnEndTimeSetfocus(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnEndTimeKillfocus(){
	
} */
int CCHMSSampleScheduleInfoDialog::OnEndTimeCheckValue(){
	return 0;
} 
void CCHMSSampleScheduleInfoDialog::OnCua1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCua1Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnCua1Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnCua1Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnCua1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua1.IsSearchKey() && !m_szCua1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCua1Key
};
	m_wndCua1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua1.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnCua1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnUser1SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnUser1Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnUser1Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnUser1Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnUser1LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser1.IsSearchKey() && !m_szUser1Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser1Key
};
	m_wndUser1.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser1.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnUser1AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnCua2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCua2Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnCua2Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnCua2Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnCua2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua2.IsSearchKey() && !m_szCua2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCua2Key
};
	m_wndCua2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnCua2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnUser2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnUser2Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnUser2Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnUser2Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnUser2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser2.IsSearchKey() && !m_szUser2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser2Key
};
	m_wndUser2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser2.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnUser2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnCua3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCua3Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnCua3Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnCua3Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnCua3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua3.IsSearchKey() && !m_szCua3Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCua3Key
};
	m_wndCua3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua3.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnCua3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnUser3SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnUser3Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnUser3Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnUser3Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnUser3LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser3.IsSearchKey() && !m_szUser3Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser3Key
};
	m_wndUser3.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser3.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnUser3AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnCua4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCua4Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnCua4Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnCua4Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnCua4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua4.IsSearchKey() && !m_szCua4Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCua4Key
};
	m_wndCua4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua4.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnCua4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnUser4SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnUser4Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnUser4Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnUser4Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnUser4LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser4.IsSearchKey() && !m_szUser4Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser4Key
};
	m_wndUser4.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser4.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnUser4AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnKhoa2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnKhoa2Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnKhoa2Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnKhoa2Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnKhoa2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndKhoa2.IsSearchKey() && !m_szKhoa2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szKhoa2Key
};
	m_wndKhoa2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndKhoa2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnKhoa2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnCa2SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCa2Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnCa2Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnCa2Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnCa2LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCa2.IsSearchKey() && !m_szCa2Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCa2Key
};
	m_wndCa2.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCa2.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnCa2AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnStartDate1Change(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnStartDate1Setfocus(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnStartDate1Killfocus(){
	
} */
int CCHMSSampleScheduleInfoDialog::OnStartDate1CheckValue(){
	return 0;
} 
/*void CCHMSSampleScheduleInfoDialog::OnStartTime1Change(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnStartTime1Setfocus(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnStartTime1Killfocus(){
	
} */
int CCHMSSampleScheduleInfoDialog::OnStartTime1CheckValue(){
	return 0;
} 
/*void CCHMSSampleScheduleInfoDialog::OnEndDate1Change(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnEndDate1Setfocus(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnEndDate1Killfocus(){
	
} */
int CCHMSSampleScheduleInfoDialog::OnEndDate1CheckValue(){
	return 0;
} 
/*void CCHMSSampleScheduleInfoDialog::OnEndTime1Change(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnEndTime1Setfocus(){
	
} */
/*void CCHMSSampleScheduleInfoDialog::OnEndTime1Killfocus(){
	
} */
int CCHMSSampleScheduleInfoDialog::OnEndTime1CheckValue(){
	return 0;
} 
void CCHMSSampleScheduleInfoDialog::OnCua5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCua5Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnCua5Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnCua5Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnCua5LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua5.IsSearchKey() && !m_szCua5Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCua5Key
};
	m_wndCua5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua5.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnCua5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnUser5SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnUser5Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnUser5Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnUser5Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnUser5LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser5.IsSearchKey() && !m_szUser5Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser5Key
};
	m_wndUser5.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser5.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnUser5AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnCua6SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCua6Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnCua6Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnCua6Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnCua6LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua6.IsSearchKey() && !m_szCua6Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCua6Key
};
	m_wndCua6.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua6.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnCua6AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnUser6SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnUser6Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnUser6Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnUser6Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnUser6LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser6.IsSearchKey() && !m_szUser6Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser6Key
};
	m_wndUser6.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser6.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnUser6AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnCua7SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCua7Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnCua7Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnCua7Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnCua7LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua7.IsSearchKey() && !m_szCua7Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCua7Key
};
	m_wndCua7.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua7.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnCua7AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnUser7SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnUser7Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnUser7Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnUser7Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnUser7LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser7.IsSearchKey() && !m_szUser7Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser7Key
};
	m_wndUser7.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser7.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnUser7AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnCua8SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCua8Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnCua8Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnCua8Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnCua8LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua8.IsSearchKey() && !m_szCua8Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szCua8Key
};
	m_wndCua8.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCua8.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnCua8AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CCHMSSampleScheduleInfoDialog::OnUser8SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnUser8Selendok(){
	 
}
/*void CCHMSSampleScheduleInfoDialog::OnUser8Setfocus(){
	
}*/
/*void CCHMSSampleScheduleInfoDialog::OnUser8Killfocus(){
	
}*/
long CCHMSSampleScheduleInfoDialog::OnUser8LoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser8.IsSearchKey() && !m_szUser8Key.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szUser8Key
};
	m_wndUser8.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUser8.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CCHMSSampleScheduleInfoDialog::OnUser8AddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
	void CCHMSSampleScheduleInfoDialog::OnLockScheduleSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CCHMSSampleScheduleInfoDialog::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CCHMSSampleScheduleInfoDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CCHMSSampleScheduleInfoDialog::OnAddCHMSSampleScheduleInfoDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CCHMSSampleScheduleInfoDialog::OnEditCHMSSampleScheduleInfoDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CCHMSSampleScheduleInfoDialog::OnDeleteCHMSSampleScheduleInfoDialog(){
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
int CCHMSSampleScheduleInfoDialog::OnSaveCHMSSampleScheduleInfoDialog(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnCHMSSampleScheduleInfoDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CCHMSSampleScheduleInfoDialog::OnCancelCHMSSampleScheduleInfoDialog(){
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
int CCHMSSampleScheduleInfoDialog::OnCHMSSampleScheduleInfoDialogListLoadData(){
	return 0;
}
