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
static void _OnCua9SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua9SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua9SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua9Selendok();
}
/*static void _OnCua9SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua9Killfocus();
}*/
/*static void _OnCua9KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua9Killfocus();
}*/
static long _OnCua9LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua9LoadData();
}
/*static void _OnCua9AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua9AddNew();
}*/
static void _OnUser9SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser9SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser9SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser9Selendok();
}
/*static void _OnUser9SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser9Killfocus();
}*/
/*static void _OnUser9KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser9Killfocus();
}*/
static long _OnUser9LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser9LoadData();
}
/*static void _OnUser9AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser9AddNew();
}*/
static void _OnCua10SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua10SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua10SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua10Selendok();
}
/*static void _OnCua10SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua10Killfocus();
}*/
/*static void _OnCua10KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua10Killfocus();
}*/
static long _OnCua10LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua10LoadData();
}
/*static void _OnCua10AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua10AddNew();
}*/
static void _OnUser10SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser10SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser10SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser10Selendok();
}
/*static void _OnUser10SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser10Killfocus();
}*/
/*static void _OnUser10KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser10Killfocus();
}*/
static long _OnUser10LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser10LoadData();
}
/*static void _OnUser10AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser10AddNew();
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
static void _OnCua11SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua11SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua11SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua11Selendok();
}
/*static void _OnCua11SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua11Killfocus();
}*/
/*static void _OnCua11KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua11Killfocus();
}*/
static long _OnCua11LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua11LoadData();
}
/*static void _OnCua11AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua11AddNew();
}*/
static void _OnUser11SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser11SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser11SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser11Selendok();
}
/*static void _OnUser11SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser11Killfocus();
}*/
/*static void _OnUser11KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser11Killfocus();
}*/
static long _OnUser11LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser11LoadData();
}
/*static void _OnUser11AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser11AddNew();
}*/
static void _OnCua12SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua12SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua12SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua12Selendok();
}
/*static void _OnCua12SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua12Killfocus();
}*/
/*static void _OnCua12KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua12Killfocus();
}*/
static long _OnCua12LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua12LoadData();
}
/*static void _OnCua12AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua12AddNew();
}*/
static void _OnUser12SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser12SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser12SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser12Selendok();
}
/*static void _OnUser12SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser12Killfocus();
}*/
/*static void _OnUser12KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser12Killfocus();
}*/
static long _OnUser12LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser12LoadData();
}
/*static void _OnUser12AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser12AddNew();
}*/
static void _OnCua13SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua13SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua13SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua13Selendok();
}
/*static void _OnCua13SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua13Killfocus();
}*/
/*static void _OnCua13KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua13Killfocus();
}*/
static long _OnCua13LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua13LoadData();
}
/*static void _OnCua13AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua13AddNew();
}*/
static void _OnUser13SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser13SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser13SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser13Selendok();
}
/*static void _OnUser13SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser13Killfocus();
}*/
/*static void _OnUser13KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser13Killfocus();
}*/
static long _OnUser13LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser13LoadData();
}
/*static void _OnUser13AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser13AddNew();
}*/
static void _OnCua14SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua14SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua14SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua14Selendok();
}
/*static void _OnCua14SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua14Killfocus();
}*/
/*static void _OnCua14KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua14Killfocus();
}*/
static long _OnCua14LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua14LoadData();
}
/*static void _OnCua14AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua14AddNew();
}*/
static void _OnUser14SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser14SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser14SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser14Selendok();
}
/*static void _OnUser14SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser14Killfocus();
}*/
/*static void _OnUser14KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser14Killfocus();
}*/
static long _OnUser14LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser14LoadData();
}
/*static void _OnUser14AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser14AddNew();
}*/
static void _OnCua15SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua15SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua15SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua15Selendok();
}
/*static void _OnCua15SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua15Killfocus();
}*/
/*static void _OnCua15KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua15Killfocus();
}*/
static long _OnCua15LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua15LoadData();
}
/*static void _OnCua15AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua15AddNew();
}*/
static void _OnUser15SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser15SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser15SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser15Selendok();
}
/*static void _OnUser15SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser15Killfocus();
}*/
/*static void _OnUser15KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser15Killfocus();
}*/
static long _OnUser15LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser15LoadData();
}
/*static void _OnUser15AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser15AddNew();
}*/
static void _OnCua16SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua16SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua16SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua16Selendok();
}
/*static void _OnCua16SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua16Killfocus();
}*/
/*static void _OnCua16KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua16Killfocus();
}*/
static long _OnCua16LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua16LoadData();
}
/*static void _OnCua16AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua16AddNew();
}*/
static void _OnUser16SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser16SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser16SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser16Selendok();
}
/*static void _OnUser16SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser16Killfocus();
}*/
/*static void _OnUser16KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser16Killfocus();
}*/
static long _OnUser16LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser16LoadData();
}
/*static void _OnUser16AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser16AddNew();
}*/
static void _OnCua17SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua17SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua17SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua17Selendok();
}
/*static void _OnCua17SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua17Killfocus();
}*/
/*static void _OnCua17KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua17Killfocus();
}*/
static long _OnCua17LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua17LoadData();
}
/*static void _OnCua17AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua17AddNew();
}*/
static void _OnUser17SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser17SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser17SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser17Selendok();
}
/*static void _OnUser27SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser27Killfocus();
}*/
/*static void _OnUser27KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser27Killfocus();
}*/
static long _OnUser17LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser17LoadData();
}
/*static void _OnUser27AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser27AddNew();
}*/
static void _OnCua18SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua18SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua18SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua18Selendok();
}
/*static void _OnCua18SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua18Killfocus();
}*/
/*static void _OnCua18KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua18Killfocus();
}*/
static long _OnCua18LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua18LoadData();
}
/*static void _OnCua18AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua18AddNew();
}*/
static void _OnUser18SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser18SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser18SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser18Selendok();
}
/*static void _OnUser28SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser28Killfocus();
}*/
/*static void _OnUser28KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser28Killfocus();
}*/
static long _OnUser18LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser18LoadData();
}
/*static void _OnUser28AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser28AddNew();
}*/
static void _OnCua19SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua19SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua19SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua19Selendok();
}
/*static void _OnCua19SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua19Killfocus();
}*/
/*static void _OnCua19KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua19Killfocus();
}*/
static long _OnCua19LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua19LoadData();
}
/*static void _OnCua19AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua19AddNew();
}*/
static void _OnUser19SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser19SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser19SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser19Selendok();
}
/*static void _OnUser19SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser19Killfocus();
}*/
/*static void _OnUser19KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser19Killfocus();
}*/
static long _OnUser19LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser19LoadData();
}
/*static void _OnUser19AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser19AddNew();
}*/
static void _OnCua20SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnCua20SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCua20SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua20Selendok();
}
/*static void _OnCua20SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua20Killfocus();
}*/
/*static void _OnCua20KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua20Killfocus();
}*/
static long _OnCua20LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua20LoadData();
}
/*static void _OnCua20AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnCua20AddNew();
}*/
static void _OnUser20SelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSSampleScheduleInfoDialog* )pWnd)->OnUser20SelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUser20SelendokFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser20Selendok();
}
/*static void _OnUser20SetfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser20Killfocus();
}*/
/*static void _OnUser20KillfocusFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser20Killfocus();
}*/
static long _OnUser20LoadDataFnc(CWnd *pWnd){
	return ((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser20LoadData();
}
/*static void _OnUser20AddNewFnc(CWnd *pWnd){
	((CHMSSampleScheduleInfoDialog *)pWnd)->OnUser20AddNew();
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
} 
CHMSSampleScheduleInfoDialog::CHMSSampleScheduleInfoDialog(CWnd *pParent):
	CGuiDialog(pParent)
	{
	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
	}
CHMSSampleScheduleInfoDialog::~CHMSSampleScheduleInfoDialog()
{
}
void CHMSSampleScheduleInfoDialog::OnCreateComponents()
{
	/*m_wndScheduleInfo.Create(this, _T("Thiết lập lịch trực ca 1"), 6, 4, 600, 214);
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
	m_wndScheduleInfo.Create(this, _T("Thiết lập lịch trực ca 1"), 6, 4, 600, 349);
	m_wndScheduleInfo1.Create(this, _T("Thiết lập lịch trực ca 2"), 6, 350, 600, 710);
	m_wndKhoa1.Create(this,95, 23, 299, 48); 
	m_wndKhoa1label.Create(this, _T("Khoa 1"), 10, 23, 90, 48);
	m_wndCa1label.Create(this, _T("Ca 1"), 305, 23, 385, 48);
	m_wndCa1.Create(this,390, 22, 595, 47); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 10, 48, 90, 73);
	m_wndStartDate.Create(this,95, 48, 215, 73); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 305, 48, 385, 73);
	m_wndStartTime.Create(this,219, 48, 299, 73); 
	m_wndEndDate.Create(this,390, 48, 510, 73); 
	m_wndEndTime.Create(this,515, 48, 595, 73); 
	m_wndCua1Label.Create(this, _T("Cua 1"), 10, 74, 90, 99);
	m_wndCua1.Create(this,95, 75, 299, 100); 
	m_wndUser1Label.Create(this, _T("User1"), 305, 76, 385, 101);
	m_wndUser1.Create(this,390, 76, 595, 101); 
	m_wndCua2.Create(this,95, 102, 299, 127); 
	m_wndCua2Label.Create(this, _T("Cua 2"), 10, 102, 90, 127);
	m_wndUser2Label.Create(this, _T("User2"), 305, 102, 385, 127);
	m_wndUser2.Create(this,390, 103, 595, 128); 
	m_wndCua3Label.Create(this, _T("Cua 3"), 10, 130, 90, 155);
	m_wndCua3.Create(this,95, 130, 299, 155); 
	m_wndUser3Label.Create(this, _T("User3"), 305, 131, 385, 156);
	m_wndUser3.Create(this,390, 131, 595, 156); 
	m_wndCua4Label.Create(this, _T("Cua 4"), 10, 158, 90, 183);
	m_wndCua4.Create(this,95, 158, 299, 183); 
	m_wndUser4Label.Create(this, _T("User4"), 305, 159, 385, 184);
	m_wndUser4.Create(this,390, 159, 595, 184); 
	m_wndCua5Label.Create(this, _T("Cua 5"), 10, 186, 90, 211);
	m_wndCua5.Create(this,95, 186, 299, 211); 
	m_wndUser5Label.Create(this, _T("User5"), 305, 187, 385, 212);
	m_wndUser5.Create(this,390, 187, 595, 212); 
	m_wndCua6Label.Create(this, _T("Cua 6"), 10, 213, 90, 238);
	m_wndCua6.Create(this,95, 213, 299, 238); 
	m_wndUser6Label.Create(this, _T("User6"), 305, 213, 385, 238);
	m_wndUser6.Create(this,390, 214, 595, 239); 
	m_wndCua7Label.Create(this, _T("Cua 7"), 10, 241, 90, 266);
	m_wndCua7.Create(this,95, 241, 299, 266); 
	m_wndUser7Label.Create(this, _T("User7"), 305, 241, 385, 266);
	m_wndUser7.Create(this,390, 242, 595, 267); 
	m_wndCua8Label.Create(this, _T("Cua 8"), 10, 269, 90, 294);
	m_wndCua8.Create(this,95, 269, 299, 294); 
	m_wndUser8Label.Create(this, _T("User8"), 305, 270, 385, 295);
	m_wndUser8.Create(this,390, 270, 595, 295); 
	m_wndCua9Label.Create(this, _T("Cua 9"), 10, 296, 90, 321);
	m_wndCua9.Create(this,95, 296, 299, 321); 
	m_wndUser9Label.Create(this, _T("User9"), 305, 296, 385, 321);
	m_wndUser9.Create(this,390, 297, 595, 322); 
	m_wndCua10Label.Create(this, _T("Cua 10"), 10, 324, 90, 349);
	m_wndCua10.Create(this,95, 324, 299, 349); 
	m_wndUser10Label.Create(this, _T("User10"), 305, 325, 385, 350);
	m_wndUser10.Create(this,390, 325, 595, 350); 
	m_wndKhoa2label.Create(this, _T("Khoa 2"), 9, 373, 89, 398);
	m_wndKhoa2.Create(this,94, 373, 298, 398); 
	m_wndCa2label.Create(this, _T("Ca 2"), 304, 373, 384, 398);
	m_wndCa2.Create(this,390, 373, 595, 398); 
	m_wndStartDate1Label.Create(this, _T("Start Date1"), 9, 404, 89, 429);
	m_wndStartDate1.Create(this,94, 404, 214, 429); 
	m_wndStartTime1.Create(this,218, 404, 298, 429); 
	m_wndEndDate1Label.Create(this, _T("End Date1"), 304, 404, 384, 429);
	m_wndEndDate1.Create(this,390, 404, 510, 429); 
	m_wndEndTime1.Create(this,514, 404, 594, 429); 
	m_wndCua11Label.Create(this, _T("Cua 11"), 10, 431, 90, 456);
	m_wndCua11.Create(this,95, 432, 299, 457); 
	m_wndUser11Label.Create(this, _T("User11"), 305, 433, 385, 458);
	m_wndUser11.Create(this,390, 432, 595, 457); 
	m_wndCua12Label.Create(this, _T("Cua 12"), 10, 459, 90, 484);
	m_wndCua12.Create(this,95, 459, 299, 484); 
	m_wndUser12Label.Create(this, _T("User12"), 305, 459, 385, 484);
	m_wndUser12.Create(this,390, 460, 595, 485); 
	m_wndCua13Label.Create(this, _T("Cua 13"), 10, 487, 90, 512);
	m_wndCua13.Create(this,95, 487, 299, 512); 
	m_wndUser13Label.Create(this, _T("User13"), 305, 488, 385, 513);
	m_wndUser13.Create(this,390, 488, 595, 513); 
	m_wndCua14Label.Create(this, _T("Cua 14"), 10, 515, 90, 540);
	m_wndCua14.Create(this,95, 515, 299, 540); 
	m_wndUser14Label.Create(this, _T("User14"), 305, 516, 385, 541);
	m_wndUser14.Create(this,390, 516, 595, 541); 
	m_wndCua15Label.Create(this, _T("Cua 15"), 10, 543, 90, 568);
	m_wndCua15.Create(this,95, 543, 299, 568); 
	m_wndUser15Label.Create(this, _T("User15"), 305, 544, 385, 569);
	m_wndUser15.Create(this,390, 544, 595, 569); 
	m_wndCua16Label.Create(this, _T("Cua 16"), 10, 570, 90, 595);
	m_wndCua16.Create(this,95, 570, 299, 595); 
	m_wndUser16Label.Create(this, _T("User16"), 305, 570, 385, 595);
	m_wndUser16.Create(this,390, 571, 595, 596); 
	m_wndCua17Label.Create(this, _T("Cua 17"), 10, 598, 90, 623);
	m_wndCua17.Create(this,96, 598, 300, 623); 
	m_wndUser17Label.Create(this, _T("User17"), 306, 598, 386, 623);
	m_wndUser17.Create(this,390, 599, 595, 624); 
	m_wndCua18Label.Create(this, _T("Cua 18"), 10, 626, 90, 651);
	m_wndCua18.Create(this,95, 626, 299, 651); 
	m_wndUser18Label.Create(this, _T("User18"), 305, 627, 385, 652);
	m_wndUser18.Create(this,390, 626, 595, 651); 
	m_wndCua19Label.Create(this, _T("Cua 19"), 10, 653, 90, 678);
	m_wndCua19.Create(this,95, 653, 299, 678); 
	m_wndUser19Label.Create(this, _T("User19"), 305, 653, 385, 678);
	m_wndUser19.Create(this,390, 654, 595, 679); 
	m_wndCua20Label.Create(this, _T("Cua 20"), 10, 681, 90, 706);
	m_wndCua20.Create(this,95, 680, 299, 705); 
	m_wndUser20Label.Create(this, _T("User20"), 305, 682, 385, 707);
	m_wndUser20.Create(this,390, 682, 595, 707); 
	m_wndLockSchedule.Create(this, _T("Lock Schedule"), 8, 716, 138, 741);
	m_wndUpdate.Create(this, _T("&Update"), 143, 716, 223, 741);
	m_wndClose.Create(this, _T("&Close"), 228, 716, 308, 741);*/
m_wndScheduleInfo.Create(this, _T("Thiết lập lịch trực ca 1"), 6, 4, 600, 349);
	m_wndScheduleInfo1.Create(this, _T("Thiết lập lịch trực ca 2"), 6, 350, 600, 710);
	m_wndKhoa1.Create(this,95, 23, 299, 48); 
	m_wndKhoa1label.Create(this, _T("Khoa 1"), 10, 23, 90, 48);
	m_wndCa1label.Create(this, _T("Ca 1"), 305, 23, 385, 48);
	m_wndCa1.Create(this,390, 22, 595, 47); 
	m_wndStartDateLabel.Create(this, _T("Start Date"), 10, 48, 90, 73);
	m_wndStartDate.Create(this,95, 48, 215, 73); 
	m_wndEndDateLabel.Create(this, _T("End Date"), 305, 48, 385, 73);
	m_wndStartTime.Create(this,219, 48, 299, 73); 
	m_wndEndDate.Create(this,390, 48, 510, 73); 
	m_wndEndTime.Create(this,515, 48, 595, 73); 
	m_wndCua1Label.Create(this, _T("Cua 1"), 10, 74, 90, 99);
	m_wndCua1.Create(this,95, 75, 299, 100); 
	m_wndUser1Label.Create(this, _T("User1"), 305, 76, 385, 101);
	m_wndUser1.Create(this,390, 76, 595, 101); 
	m_wndCua2.Create(this,95, 102, 299, 127); 
	m_wndCua2Label.Create(this, _T("Cua 2"), 10, 102, 90, 127);
	m_wndUser2Label.Create(this, _T("User2"), 305, 102, 385, 127);
	m_wndUser2.Create(this,390, 103, 595, 128); 
	m_wndCua3Label.Create(this, _T("Cua 3"), 10, 130, 90, 155);
	m_wndCua3.Create(this,95, 130, 299, 155); 
	m_wndUser3Label.Create(this, _T("User3"), 305, 131, 385, 156);
	m_wndUser3.Create(this,390, 131, 595, 156); 
	m_wndCua4Label.Create(this, _T("Cua 4"), 10, 158, 90, 183);
	m_wndCua4.Create(this,95, 158, 299, 183); 
	m_wndUser4Label.Create(this, _T("User4"), 305, 159, 385, 184);
	m_wndUser4.Create(this,390, 159, 595, 184); 
	m_wndCua5Label.Create(this, _T("Cua 5"), 10, 186, 90, 211);
	m_wndCua5.Create(this,95, 186, 299, 211); 
	m_wndUser5Label.Create(this, _T("User5"), 305, 187, 385, 212);
	m_wndUser5.Create(this,390, 187, 595, 212); 
	m_wndCua6Label.Create(this, _T("Cua 6"), 10, 213, 90, 238);
	m_wndCua6.Create(this,95, 213, 299, 238); 
	m_wndUser6Label.Create(this, _T("User6"), 305, 213, 385, 238);
	m_wndUser6.Create(this,390, 214, 595, 239); 
	m_wndCua7Label.Create(this, _T("Cua 7"), 10, 241, 90, 266);
	m_wndCua7.Create(this,95, 241, 299, 266); 
	m_wndUser7Label.Create(this, _T("User7"), 305, 241, 385, 266);
	m_wndUser7.Create(this,390, 242, 595, 267); 
	m_wndCua8Label.Create(this, _T("Cua 8"), 10, 269, 90, 294);
	m_wndCua8.Create(this,95, 269, 299, 294); 
	m_wndUser8Label.Create(this, _T("User8"), 305, 270, 385, 295);
	m_wndUser8.Create(this,390, 270, 595, 295); 
	m_wndCua9Label.Create(this, _T("Cua 9"), 10, 296, 90, 321);
	m_wndCua9.Create(this,95, 296, 299, 321); 
	m_wndUser9Label.Create(this, _T("User9"), 305, 296, 385, 321);
	m_wndUser9.Create(this,390, 297, 595, 322); 
	m_wndCua10Label.Create(this, _T("Cua 10"), 10, 324, 90, 349);
	m_wndCua10.Create(this,95, 324, 299, 349); 
	m_wndUser10Label.Create(this, _T("User10"), 305, 325, 385, 350);
	m_wndUser10.Create(this,390, 325, 595, 350); 
	m_wndKhoa2label.Create(this, _T("Khoa 2"), 9, 373, 89, 398);
	m_wndKhoa2.Create(this,94, 373, 298, 398); 
	m_wndCa2label.Create(this, _T("Ca 2"), 304, 373, 384, 398);
	m_wndCa2.Create(this,390, 373, 595, 398); 
	m_wndStartDate1Label.Create(this, _T("Start Date1"), 9, 404, 89, 429);
	m_wndStartDate1.Create(this,94, 404, 214, 429); 
	m_wndStartTime1.Create(this,218, 404, 298, 429); 
	m_wndEndDate1Label.Create(this, _T("End Date1"), 304, 404, 384, 429);
	m_wndEndDate1.Create(this,390, 404, 510, 429); 
	m_wndEndTime1.Create(this,514, 404, 594, 429); 
	m_wndCua11Label.Create(this, _T("Cua 11"), 10, 431, 90, 456);
	m_wndCua11.Create(this,95, 432, 299, 457); 
	m_wndUser11Label.Create(this, _T("User11"), 305, 433, 385, 458);
	m_wndUser11.Create(this,390, 432, 595, 457); 
	m_wndCua12Label.Create(this, _T("Cua 12"), 10, 459, 90, 484);
	m_wndCua12.Create(this,95, 459, 299, 484); 
	m_wndUser12Label.Create(this, _T("User12"), 305, 459, 385, 484);
	m_wndUser12.Create(this,390, 460, 595, 485); 
	m_wndCua13Label.Create(this, _T("Cua 13"), 10, 487, 90, 512);
	m_wndCua13.Create(this,95, 487, 299, 512); 
	m_wndUser13Label.Create(this, _T("User13"), 305, 488, 385, 513);
	m_wndUser13.Create(this,390, 488, 595, 513); 
	m_wndCua14Label.Create(this, _T("Cua 14"), 10, 515, 90, 540);
	m_wndCua14.Create(this,95, 515, 299, 540); 
	m_wndUser14Label.Create(this, _T("User14"), 305, 516, 385, 541);
	m_wndUser14.Create(this,390, 516, 595, 541); 
	m_wndCua15Label.Create(this, _T("Cua 15"), 10, 543, 90, 568);
	m_wndCua15.Create(this,95, 543, 299, 568); 
	m_wndUser15Label.Create(this, _T("User15"), 305, 544, 385, 569);
	m_wndUser15.Create(this,390, 544, 595, 569); 
	m_wndCua16Label.Create(this, _T("Cua 16"), 10, 570, 90, 595);
	m_wndCua16.Create(this,95, 570, 299, 595); 
	m_wndUser16Label.Create(this, _T("User16"), 305, 570, 385, 595);
	m_wndUser16.Create(this,390, 571, 595, 596); 
	m_wndCua17Label.Create(this, _T("Cua 17"), 10, 598, 90, 623);
	m_wndCua17.Create(this,96, 598, 300, 623); 
	m_wndUser17Label.Create(this, _T("User17"), 306, 598, 386, 623);
	m_wndUser17.Create(this,390, 599, 595, 624); 
	m_wndCua18Label.Create(this, _T("Cua 18"), 10, 626, 90, 651);
	m_wndCua18.Create(this,95, 626, 299, 651); 
	m_wndUser18Label.Create(this, _T("User18"), 305, 627, 385, 652);
	m_wndUser18.Create(this,390, 626, 595, 651); 
	m_wndCua19Label.Create(this, _T("Cua 19"), 10, 653, 90, 678);
	m_wndCua19.Create(this,95, 653, 299, 678); 
	m_wndUser19Label.Create(this, _T("User19"), 305, 653, 385, 678);
	m_wndUser19.Create(this,390, 654, 595, 679); 
	m_wndCua20Label.Create(this, _T("Cua 20"), 10, 681, 90, 706);
	m_wndCua20.Create(this,95, 680, 299, 705); 
	m_wndUser20Label.Create(this, _T("User20"), 305, 682, 385, 707);
	m_wndUser20.Create(this,390, 682, 595, 707); 
	m_wndLockSchedule.Create(this, _T("Lock Schedule"), 606, 610, 736, 635);
	m_wndUpdate.Create(this, _T("&Update"), 606, 645, 736, 670);
	m_wndClose.Create(this, _T("&Close"), 607, 680, 736, 705);

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
	m_wndCua11.SetCheckValue(true);
	m_wndCua11.LimitText(35);
	m_wndUser11.SetCheckValue(true);
	m_wndUser11.LimitText(1024);
	

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


	m_wndCua5.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua5.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua6.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua6.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua7.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua7.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua8.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua8.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua9.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua9.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua10.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua10.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);





	m_wndKhoa2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndKhoa2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCa2.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCa2.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


	m_wndCua11.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua11.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndCua12.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua12.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndCua13.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua13.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);




	m_wndCua14.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua14.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua15.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua15.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua16.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua16.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua17.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua17.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua18.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua18.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua19.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua19.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndCua20.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCua20.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


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

	m_wndUser9.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser9.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser10.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser10.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser11.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser11.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser12.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser12.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser13.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser13.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser14.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser14.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser15.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser15.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser16.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser16.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser17.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser17.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser18.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser18.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser19.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser19.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);

	m_wndUser20.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUser20.InsertColumn(1, _T("Name"), CFMT_TEXT, 150);


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
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate9"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate10"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate11"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate12"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate13"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate14"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate15"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate16"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate17"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate18"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate19"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_gate20"), dfText, 15);


	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user1"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user2"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user3"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user4"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user5"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user6"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user7"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user8"), dfText, 15);

	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user9"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user10"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user11"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user12"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user13"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user14"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user15"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user16"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user17"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user18"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user19"), dfText, 15);
	m_hms_sample_schedule_lineTbl.AddField(_T("hssl_user20"), dfText, 15);


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
	m_wndCua9.SetEvent(WE_SELENDOK, _OnCua9SelendokFnc);
	//m_wndCua9.SetEvent(WE_SETFOCUS, _OnCua9SetfocusFnc);
	//m_wndCua9.SetEvent(WE_KILLFOCUS, _OnCua9KillfocusFnc);
	m_wndCua9.SetEvent(WE_SELCHANGE, _OnCua9SelectChangeFnc);
	m_wndCua9.SetEvent(WE_LOADDATA, _OnCua9LoadDataFnc);
	//m_wndCua9.SetEvent(WE_ADDNEW, _OnCua9AddNewFnc);
	m_wndUser9.SetEvent(WE_SELENDOK, _OnUser9SelendokFnc);
	//m_wndUser9.SetEvent(WE_SETFOCUS, _OnUser9SetfocusFnc);
	//m_wndUser9.SetEvent(WE_KILLFOCUS, _OnUser9KillfocusFnc);
	m_wndUser9.SetEvent(WE_SELCHANGE, _OnUser9SelectChangeFnc);
	m_wndUser9.SetEvent(WE_LOADDATA, _OnUser9LoadDataFnc);
	//m_wndUser9.SetEvent(WE_ADDNEW, _OnUser9AddNewFnc);
	m_wndCua10.SetEvent(WE_SELENDOK, _OnCua10SelendokFnc);
	//m_wndCua10.SetEvent(WE_SETFOCUS, _OnCua10SetfocusFnc);
	//m_wndCua10.SetEvent(WE_KILLFOCUS, _OnCua10KillfocusFnc);
	m_wndCua10.SetEvent(WE_SELCHANGE, _OnCua10SelectChangeFnc);
	m_wndCua10.SetEvent(WE_LOADDATA, _OnCua10LoadDataFnc);
	//m_wndCua10.SetEvent(WE_ADDNEW, _OnCua10AddNewFnc);
	m_wndUser10.SetEvent(WE_SELENDOK, _OnUser10SelendokFnc);
	//m_wndUser10.SetEvent(WE_SETFOCUS, _OnUser10SetfocusFnc);
	//m_wndUser10.SetEvent(WE_KILLFOCUS, _OnUser10KillfocusFnc);
	m_wndUser10.SetEvent(WE_SELCHANGE, _OnUser10SelectChangeFnc);
	m_wndUser10.SetEvent(WE_LOADDATA, _OnUser10LoadDataFnc);
	//m_wndUser10.SetEvent(WE_ADDNEW, _OnUser10AddNewFnc);
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
	m_wndCua11.SetEvent(WE_SELENDOK, _OnCua11SelendokFnc);
	//m_wndCua11.SetEvent(WE_SETFOCUS, _OnCua11SetfocusFnc);
	//m_wndCua11.SetEvent(WE_KILLFOCUS, _OnCua11KillfocusFnc);
	m_wndCua11.SetEvent(WE_SELCHANGE, _OnCua11SelectChangeFnc);
	m_wndCua11.SetEvent(WE_LOADDATA, _OnCua11LoadDataFnc);
	//m_wndCua11.SetEvent(WE_ADDNEW, _OnCua11AddNewFnc);
	m_wndUser11.SetEvent(WE_SELENDOK, _OnUser11SelendokFnc);
	//m_wndUser11.SetEvent(WE_SETFOCUS, _OnUser11SetfocusFnc);
	//m_wndUser11.SetEvent(WE_KILLFOCUS, _OnUser11KillfocusFnc);
	m_wndUser11.SetEvent(WE_SELCHANGE, _OnUser11SelectChangeFnc);
	m_wndUser11.SetEvent(WE_LOADDATA, _OnUser11LoadDataFnc);
	//m_wndUser11.SetEvent(WE_ADDNEW, _OnUser11AddNewFnc);
	m_wndCua12.SetEvent(WE_SELENDOK, _OnCua12SelendokFnc);
	//m_wndCua12.SetEvent(WE_SETFOCUS, _OnCua12SetfocusFnc);
	//m_wndCua12.SetEvent(WE_KILLFOCUS, _OnCua12KillfocusFnc);
	m_wndCua12.SetEvent(WE_SELCHANGE, _OnCua12SelectChangeFnc);
	m_wndCua12.SetEvent(WE_LOADDATA, _OnCua12LoadDataFnc);
	//m_wndCua12.SetEvent(WE_ADDNEW, _OnCua12AddNewFnc);
	m_wndUser12.SetEvent(WE_SELENDOK, _OnUser12SelendokFnc);
	//m_wndUser12.SetEvent(WE_SETFOCUS, _OnUser12SetfocusFnc);
	//m_wndUser12.SetEvent(WE_KILLFOCUS, _OnUser12KillfocusFnc);
	m_wndUser12.SetEvent(WE_SELCHANGE, _OnUser12SelectChangeFnc);
	m_wndUser12.SetEvent(WE_LOADDATA, _OnUser12LoadDataFnc);
	//m_wndUser12.SetEvent(WE_ADDNEW, _OnUser12AddNewFnc);
	m_wndCua13.SetEvent(WE_SELENDOK, _OnCua13SelendokFnc);
	//m_wndCua13.SetEvent(WE_SETFOCUS, _OnCua13SetfocusFnc);
	//m_wndCua13.SetEvent(WE_KILLFOCUS, _OnCua13KillfocusFnc);
	m_wndCua13.SetEvent(WE_SELCHANGE, _OnCua13SelectChangeFnc);
	m_wndCua13.SetEvent(WE_LOADDATA, _OnCua13LoadDataFnc);
	//m_wndCua13.SetEvent(WE_ADDNEW, _OnCua13AddNewFnc);
	m_wndUser13.SetEvent(WE_SELENDOK, _OnUser13SelendokFnc);
	//m_wndUser13.SetEvent(WE_SETFOCUS, _OnUser13SetfocusFnc);
	//m_wndUser13.SetEvent(WE_KILLFOCUS, _OnUser13KillfocusFnc);
	m_wndUser13.SetEvent(WE_SELCHANGE, _OnUser13SelectChangeFnc);
	m_wndUser13.SetEvent(WE_LOADDATA, _OnUser13LoadDataFnc);
	//m_wndUser13.SetEvent(WE_ADDNEW, _OnUser13AddNewFnc);
	m_wndCua14.SetEvent(WE_SELENDOK, _OnCua14SelendokFnc);
	//m_wndCua14.SetEvent(WE_SETFOCUS, _OnCua14SetfocusFnc);
	//m_wndCua14.SetEvent(WE_KILLFOCUS, _OnCua14KillfocusFnc);
	m_wndCua14.SetEvent(WE_SELCHANGE, _OnCua14SelectChangeFnc);
	m_wndCua14.SetEvent(WE_LOADDATA, _OnCua14LoadDataFnc);
	//m_wndCua14.SetEvent(WE_ADDNEW, _OnCua14AddNewFnc);
	m_wndUser14.SetEvent(WE_SELENDOK, _OnUser14SelendokFnc);
	//m_wndUser14.SetEvent(WE_SETFOCUS, _OnUser14SetfocusFnc);
	//m_wndUser14.SetEvent(WE_KILLFOCUS, _OnUser14KillfocusFnc);
	m_wndUser14.SetEvent(WE_SELCHANGE, _OnUser14SelectChangeFnc);
	m_wndUser14.SetEvent(WE_LOADDATA, _OnUser14LoadDataFnc);
	//m_wndUser14.SetEvent(WE_ADDNEW, _OnUser14AddNewFnc);
	m_wndCua15.SetEvent(WE_SELENDOK, _OnCua15SelendokFnc);
	//m_wndCua15.SetEvent(WE_SETFOCUS, _OnCua15SetfocusFnc);
	//m_wndCua15.SetEvent(WE_KILLFOCUS, _OnCua15KillfocusFnc);
	m_wndCua15.SetEvent(WE_SELCHANGE, _OnCua15SelectChangeFnc);
	m_wndCua15.SetEvent(WE_LOADDATA, _OnCua15LoadDataFnc);
	//m_wndCua15.SetEvent(WE_ADDNEW, _OnCua15AddNewFnc);
	m_wndUser15.SetEvent(WE_SELENDOK, _OnUser15SelendokFnc);
	//m_wndUser15.SetEvent(WE_SETFOCUS, _OnUser15SetfocusFnc);
	//m_wndUser15.SetEvent(WE_KILLFOCUS, _OnUser15KillfocusFnc);
	m_wndUser15.SetEvent(WE_SELCHANGE, _OnUser15SelectChangeFnc);
	m_wndUser15.SetEvent(WE_LOADDATA, _OnUser15LoadDataFnc);
	//m_wndUser15.SetEvent(WE_ADDNEW, _OnUser15AddNewFnc);
	m_wndCua16.SetEvent(WE_SELENDOK, _OnCua16SelendokFnc);
	//m_wndCua16.SetEvent(WE_SETFOCUS, _OnCua16SetfocusFnc);
	//m_wndCua16.SetEvent(WE_KILLFOCUS, _OnCua16KillfocusFnc);
	m_wndCua16.SetEvent(WE_SELCHANGE, _OnCua16SelectChangeFnc);
	m_wndCua16.SetEvent(WE_LOADDATA, _OnCua16LoadDataFnc);
	//m_wndCua16.SetEvent(WE_ADDNEW, _OnCua16AddNewFnc);
	m_wndUser16.SetEvent(WE_SELENDOK, _OnUser16SelendokFnc);
	//m_wndUser16.SetEvent(WE_SETFOCUS, _OnUser16SetfocusFnc);
	//m_wndUser16.SetEvent(WE_KILLFOCUS, _OnUser16KillfocusFnc);
	m_wndUser16.SetEvent(WE_SELCHANGE, _OnUser16SelectChangeFnc);
	m_wndUser16.SetEvent(WE_LOADDATA, _OnUser16LoadDataFnc);
	//m_wndUser16.SetEvent(WE_ADDNEW, _OnUser16AddNewFnc);
	m_wndCua17.SetEvent(WE_SELENDOK, _OnCua17SelendokFnc);
	//m_wndCua17.SetEvent(WE_SETFOCUS, _OnCua17SetfocusFnc);
	//m_wndCua17.SetEvent(WE_KILLFOCUS, _OnCua17KillfocusFnc);
	m_wndCua17.SetEvent(WE_SELCHANGE, _OnCua17SelectChangeFnc);
	m_wndCua17.SetEvent(WE_LOADDATA, _OnCua17LoadDataFnc);
	//m_wndCua17.SetEvent(WE_ADDNEW, _OnCua17AddNewFnc);
	m_wndUser17.SetEvent(WE_SELENDOK, _OnUser17SelendokFnc);
	//m_wndUser27.SetEvent(WE_SETFOCUS, _OnUser27SetfocusFnc);
	//m_wndUser27.SetEvent(WE_KILLFOCUS, _OnUser27KillfocusFnc);
	m_wndUser17.SetEvent(WE_SELCHANGE, _OnUser17SelectChangeFnc);
	m_wndUser17.SetEvent(WE_LOADDATA, _OnUser17LoadDataFnc);
	//m_wndUser27.SetEvent(WE_ADDNEW, _OnUser27AddNewFnc);
	m_wndCua18.SetEvent(WE_SELENDOK, _OnCua18SelendokFnc);
	//m_wndCua18.SetEvent(WE_SETFOCUS, _OnCua18SetfocusFnc);
	//m_wndCua18.SetEvent(WE_KILLFOCUS, _OnCua18KillfocusFnc);
	m_wndCua18.SetEvent(WE_SELCHANGE, _OnCua18SelectChangeFnc);
	m_wndCua18.SetEvent(WE_LOADDATA, _OnCua18LoadDataFnc);
	//m_wndCua18.SetEvent(WE_ADDNEW, _OnCua18AddNewFnc);
	m_wndUser18.SetEvent(WE_SELENDOK, _OnUser18SelendokFnc);
	//m_wndUser28.SetEvent(WE_SETFOCUS, _OnUser28SetfocusFnc);
	//m_wndUser28.SetEvent(WE_KILLFOCUS, _OnUser28KillfocusFnc);
	m_wndUser18.SetEvent(WE_SELCHANGE, _OnUser18SelectChangeFnc);
	m_wndUser18.SetEvent(WE_LOADDATA, _OnUser18LoadDataFnc);
	//m_wndUser28.SetEvent(WE_ADDNEW, _OnUser28AddNewFnc);
	m_wndCua19.SetEvent(WE_SELENDOK, _OnCua19SelendokFnc);
	//m_wndCua19.SetEvent(WE_SETFOCUS, _OnCua19SetfocusFnc);
	//m_wndCua19.SetEvent(WE_KILLFOCUS, _OnCua19KillfocusFnc);
	m_wndCua19.SetEvent(WE_SELCHANGE, _OnCua19SelectChangeFnc);
	m_wndCua19.SetEvent(WE_LOADDATA, _OnCua19LoadDataFnc);
	//m_wndCua19.SetEvent(WE_ADDNEW, _OnCua19AddNewFnc);
	m_wndUser19.SetEvent(WE_SELENDOK, _OnUser19SelendokFnc);
	//m_wndUser19.SetEvent(WE_SETFOCUS, _OnUser19SetfocusFnc);
	//m_wndUser19.SetEvent(WE_KILLFOCUS, _OnUser19KillfocusFnc);
	m_wndUser19.SetEvent(WE_SELCHANGE, _OnUser19SelectChangeFnc);
	m_wndUser19.SetEvent(WE_LOADDATA, _OnUser19LoadDataFnc);
	//m_wndUser19.SetEvent(WE_ADDNEW, _OnUser19AddNewFnc);
	m_wndCua20.SetEvent(WE_SELENDOK, _OnCua20SelendokFnc);
	//m_wndCua20.SetEvent(WE_SETFOCUS, _OnCua20SetfocusFnc);
	//m_wndCua20.SetEvent(WE_KILLFOCUS, _OnCua20KillfocusFnc);
	m_wndCua20.SetEvent(WE_SELCHANGE, _OnCua20SelectChangeFnc);
	m_wndCua20.SetEvent(WE_LOADDATA, _OnCua20LoadDataFnc);
	//m_wndCua20.SetEvent(WE_ADDNEW, _OnCua20AddNewFnc);
	m_wndUser20.SetEvent(WE_SELENDOK, _OnUser20SelendokFnc);
	//m_wndUser20.SetEvent(WE_SETFOCUS, _OnUser20SetfocusFnc);
	//m_wndUser20.SetEvent(WE_KILLFOCUS, _OnUser20KillfocusFnc);
	m_wndUser20.SetEvent(WE_SELCHANGE, _OnUser20SelectChangeFnc);
	m_wndUser20.SetEvent(WE_LOADDATA, _OnUser20LoadDataFnc);
	//m_wndUser20.SetEvent(WE_ADDNEW, _OnUser20AddNewFnc);
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
	DDX_TextEx(pDX, m_wndCua5.GetDlgCtrlID(), m_szCua5Key);
	DDX_TextEx(pDX, m_wndUser5.GetDlgCtrlID(), m_szUser5Key);
	DDX_TextEx(pDX, m_wndCua6.GetDlgCtrlID(), m_szCua6Key);
	DDX_TextEx(pDX, m_wndUser6.GetDlgCtrlID(), m_szUser6Key);
	DDX_TextEx(pDX, m_wndCua7.GetDlgCtrlID(), m_szCua7Key);
	DDX_TextEx(pDX, m_wndUser7.GetDlgCtrlID(), m_szUser7Key);
	DDX_TextEx(pDX, m_wndCua8.GetDlgCtrlID(), m_szCua8Key);
	DDX_TextEx(pDX, m_wndUser8.GetDlgCtrlID(), m_szUser8Key);
	DDX_TextEx(pDX, m_wndCua9.GetDlgCtrlID(), m_szCua9Key);
	DDX_TextEx(pDX, m_wndUser9.GetDlgCtrlID(), m_szUser9Key);
	DDX_TextEx(pDX, m_wndCua10.GetDlgCtrlID(), m_szCua10Key);
	DDX_TextEx(pDX, m_wndUser10.GetDlgCtrlID(), m_szUser10Key);
	DDX_TextEx(pDX, m_wndKhoa2.GetDlgCtrlID(), m_szKhoa2Key);
	DDX_TextEx(pDX, m_wndCa2.GetDlgCtrlID(), m_szCa2Key);
	DDX_TextEx(pDX, m_wndStartDate1.GetDlgCtrlID(), m_szStartDate1);
	DDX_TextEx(pDX, m_wndStartTime1.GetDlgCtrlID(), m_szStartTime1);
	DDX_TextEx(pDX, m_wndEndDate1.GetDlgCtrlID(), m_szEndDate1);
	DDX_TextEx(pDX, m_wndEndTime1.GetDlgCtrlID(), m_szEndTime1);
	DDX_TextEx(pDX, m_wndCua11.GetDlgCtrlID(), m_szCua11Key);
	DDX_TextEx(pDX, m_wndUser11.GetDlgCtrlID(), m_szUser11Key);
	DDX_TextEx(pDX, m_wndCua12.GetDlgCtrlID(), m_szCua12Key);
	DDX_TextEx(pDX, m_wndUser12.GetDlgCtrlID(), m_szUser12Key);
	DDX_TextEx(pDX, m_wndCua13.GetDlgCtrlID(), m_szCua13Key);
	DDX_TextEx(pDX, m_wndUser13.GetDlgCtrlID(), m_szUser13Key);
	DDX_TextEx(pDX, m_wndCua14.GetDlgCtrlID(), m_szCua14Key);
	DDX_TextEx(pDX, m_wndUser14.GetDlgCtrlID(), m_szUser14Key);
	DDX_TextEx(pDX, m_wndCua15.GetDlgCtrlID(), m_szCua15Key);
	DDX_TextEx(pDX, m_wndUser15.GetDlgCtrlID(), m_szUser15Key);
	DDX_TextEx(pDX, m_wndCua16.GetDlgCtrlID(), m_szCua16Key);
	DDX_TextEx(pDX, m_wndUser16.GetDlgCtrlID(), m_szUser16Key);
	DDX_TextEx(pDX, m_wndCua17.GetDlgCtrlID(), m_szCua17Key);
	DDX_TextEx(pDX, m_wndUser17.GetDlgCtrlID(), m_szUser17Key);
	DDX_TextEx(pDX, m_wndCua18.GetDlgCtrlID(), m_szCua18Key);
	DDX_TextEx(pDX, m_wndUser18.GetDlgCtrlID(), m_szUser18Key);
	DDX_TextEx(pDX, m_wndCua19.GetDlgCtrlID(), m_szCua19Key);
	DDX_TextEx(pDX, m_wndUser19.GetDlgCtrlID(), m_szUser19Key);
	DDX_TextEx(pDX, m_wndCua20.GetDlgCtrlID(), m_szCua20Key);
	DDX_TextEx(pDX, m_wndUser20.GetDlgCtrlID(), m_szUser20Key);
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
	_T("    HSSL_GATE9 AS gate9,") \
	_T("    HSSL_GATE10 AS gate10,") \
	_T("    HSSL_GATE11 AS gate11,") \
	_T("    HSSL_GATE12 AS gate12,") \
	_T("    HSSL_GATE13 AS gate13,") \
	_T("    HSSL_GATE14 AS gate14,") \
	_T("    HSSL_GATE15 AS gate15,") \
	_T("    HSSL_GATE16 AS gate16,") \
	_T("    HSSL_GATE17 AS gate17,") \
	_T("    HSSL_GATE18 AS gate18,") \
	_T("    HSSL_GATE19 AS gate19,") \
	_T("    HSSL_GATE20 AS gate20,") \
	_T("    HSSL_USER1 AS user1,") \
	_T("    HSSL_USER2 AS user2,") \
	_T("    HSSL_USER3 AS user3,") \
	_T("    HSSL_USER4 AS user4,") \
	_T("    HSSL_USER5 AS user5,") \
	_T("    HSSL_USER6 AS user6,") \
	_T("    HSSL_USER7 AS user7,") \
	_T("    HSSL_USER8 AS user8,   ") \
	_T("    HSSL_USER9 AS user9,   ") \
	_T("    HSSL_USER10 AS user10,   ") \
	_T("    HSSL_USER11 AS user11,   ") \
	_T("    HSSL_USER12 AS user12,   ") \
	_T("    HSSL_USER13 AS user13,   ") \
	_T("    HSSL_USER14 AS user14,   ") \
	_T("    HSSL_USER15 AS user15,   ") \
	_T("    HSSL_USER16 AS user16,   ") \
	_T("    HSSL_USER17 AS user17,   ") \
	_T("    HSSL_USER18 AS user18,   ") \
	_T("    HSSL_USER19 AS user19,   ") \
	_T("    HSSL_USER20 AS user20   ") \
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
		rs.GetValue(_T("gate9"), m_szCua9Key);
		rs.GetValue(_T("gate10"), m_szCua10Key);
		rs.GetValue(_T("gate11"), m_szCua11Key);
		rs.GetValue(_T("gate12"), m_szCua12Key);
		rs.GetValue(_T("gate13"), m_szCua13Key);
		rs.GetValue(_T("gate14"), m_szCua14Key);
		rs.GetValue(_T("gate15"), m_szCua15Key);
		rs.GetValue(_T("gate16"), m_szCua16Key);
		rs.GetValue(_T("gate17"), m_szCua17Key);
		rs.GetValue(_T("gate18"), m_szCua18Key);
		rs.GetValue(_T("gate19"), m_szCua19Key);
		rs.GetValue(_T("gate20"), m_szCua20Key);

		rs.GetValue(_T("user1"), m_szUser1Key);
		rs.GetValue(_T("user2"), m_szUser2Key);
		rs.GetValue(_T("user3"), m_szUser3Key);
		rs.GetValue(_T("user4"), m_szUser4Key);
		rs.GetValue(_T("user5"), m_szUser5Key);
		rs.GetValue(_T("user6"), m_szUser6Key);
		rs.GetValue(_T("user7"), m_szUser7Key);
		rs.GetValue(_T("user8"), m_szUser8Key);
		rs.GetValue(_T("user9"), m_szUser9Key);
		rs.GetValue(_T("user10"), m_szUser10Key);
		rs.GetValue(_T("user11"), m_szUser11Key);
		rs.GetValue(_T("user12"), m_szUser12Key);
		rs.GetValue(_T("user13"), m_szUser13Key);
		rs.GetValue(_T("user14"), m_szUser14Key);
		rs.GetValue(_T("user15"), m_szUser15Key);
		rs.GetValue(_T("user16"), m_szUser16Key);
		rs.GetValue(_T("user17"), m_szUser17Key);
		rs.GetValue(_T("user18"), m_szUser18Key);
		rs.GetValue(_T("user19"), m_szUser19Key);
		rs.GetValue(_T("user20"), m_szUser20Key);


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

	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate9"), m_szCua9Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate10"), m_szCua10Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate11"), m_szCua11Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate12"), m_szCua12Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate13"), m_szCua13Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate14"), m_szCua14Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate15"), m_szCua15Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate16"), m_szCua16Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate17"), m_szCua17Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate18"), m_szCua18Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate19"), m_szCua19Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_gate20"), m_szCua20Key);

	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user1"), m_szUser1Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user2"), m_szUser2Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user3"), m_szUser3Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user4"), m_szUser4Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user5"), m_szUser5Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user6"), m_szUser6Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user7"), m_szUser7Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user8"), m_szUser8Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user9"), m_szUser9Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user10"), m_szUser10Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user11"), m_szUser11Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user12"), m_szUser12Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user13"), m_szUser13Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user14"), m_szUser14Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user15"), m_szUser15Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user16"), m_szUser16Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user17"), m_szUser17Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user18"), m_szUser18Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user19"), m_szUser19Key);
	m_hms_sample_schedule_lineTbl.SetValue(_T("hssl_user20"), m_szUser20Key);
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
	m_szCua5Key.Empty();
	m_szUser5Key.Empty();
	m_szCua6Key.Empty();
	m_szUser6Key.Empty();
	m_szCua7Key.Empty();
	m_szUser7Key.Empty();
	m_szCua8Key.Empty();
	m_szUser8Key.Empty();
	m_szCua9Key.Empty();
	m_szUser9Key.Empty();
	m_szCua10Key.Empty();
	m_szUser10Key.Empty();
	m_szKhoa2Key.Empty();
	m_szCa2Key.Empty();
	m_szStartDate1.Empty();
	m_szStartTime1.Empty();
	m_szEndDate1.Empty();
	m_szEndTime1.Empty();
	m_szCua11Key.Empty();
	m_szUser11Key.Empty();
	m_szCua12Key.Empty();
	m_szUser12Key.Empty();
	m_szCua13Key.Empty();
	m_szUser13Key.Empty();
	m_szCua14Key.Empty();
	m_szUser14Key.Empty();
	m_szCua15Key.Empty();
	m_szUser15Key.Empty();
	m_szCua16Key.Empty();
	m_szUser16Key.Empty();
	m_szCua17Key.Empty();
	m_szUser17Key.Empty();
	m_szCua18Key.Empty();
	m_szUser18Key.Empty();
	m_szCua19Key.Empty();
	m_szUser19Key.Empty();
	m_szCua20Key.Empty();
	m_szUser20Key.Empty();
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
void CHMSSampleScheduleInfoDialog::OnCua8Selendok()
{
	 
}

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
	while(!rs.IsEOF()){ 
		m_wndCua8.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser8SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser8Selendok()
{
	 
}
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
	
	while(!rs.IsEOF()){ 
		m_wndUser8.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
	
}
void CHMSSampleScheduleInfoDialog::OnCua9SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua9Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua9LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua9.IsSearchKey() && !m_szCua9Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua9Key);
	}
	m_wndCua9.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua9.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser9SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser9Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser9LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser9.IsSearchKey() && !m_szUser9Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser9Key);
	}
	m_wndUser9.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser9.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua10SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua10Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua10LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua10.IsSearchKey() && !m_szCua10Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua10Key);
	}
	m_wndCua10.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua10.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser10SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser10Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser10LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser10.IsSearchKey() && !m_szUser10Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser10Key);
	}
	m_wndUser10.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser10.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua11SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua11Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua11LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua11.IsSearchKey() && !m_szCua11Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua11Key);
	}
	m_wndCua11.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua11.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser11SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser11Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser11LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser11.IsSearchKey() && !m_szUser11Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser11Key);
	}
	m_wndUser11.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser11.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua12SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua12Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua12LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua12.IsSearchKey() && !m_szCua12Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua12Key);
	}
	m_wndCua12.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua12.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser12SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser12Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser12LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser12.IsSearchKey() && !m_szUser12Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser12Key);
	}
	m_wndUser12.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser12.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua13SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua13Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua13LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua13.IsSearchKey() && !m_szCua13Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua13Key);
	}
	m_wndCua13.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua13.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser13SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser13Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser13LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser13.IsSearchKey() && !m_szUser13Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser13Key);
	}
	m_wndUser13.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser13.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua14SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua14Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua14LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua14.IsSearchKey() && !m_szCua14Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua14Key);
	}
	m_wndCua14.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua14.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser14SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser14Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser14LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser14.IsSearchKey() && !m_szUser14Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser14Key);
	}
	m_wndUser14.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser14.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua15SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua15Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua15LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua15.IsSearchKey() && !m_szCua15Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua15Key);
	}
	m_wndCua15.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua15.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser15SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser15Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser15LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser15.IsSearchKey() && !m_szUser15Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser15Key);
	}
	m_wndUser15.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser15.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua16SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua16Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua16LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua16.IsSearchKey() && !m_szCua16Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua16Key);
	}
	m_wndCua16.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua16.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser16SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser16Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser16LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser16.IsSearchKey() && !m_szUser16Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser16Key);
	}
	m_wndUser16.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser16.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua17SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua17Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua17LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua17.IsSearchKey() && !m_szCua17Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua17Key);
	}
	m_wndCua17.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua17.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser17SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser17Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser17LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser17.IsSearchKey() && !m_szUser17Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser17Key);
	}
	m_wndUser17.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser17.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua18SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua18Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua18LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua18.IsSearchKey() && !m_szCua18Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua18Key);
	}
	m_wndCua18.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua18.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser18SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser18Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser18LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser18.IsSearchKey() && !m_szUser18Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser18Key);
	}
	m_wndUser18.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser18.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua19SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua19Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua19LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua19.IsSearchKey() && !m_szCua19Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua19Key);
	}
	m_wndCua19.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua19.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser19SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser19Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser19LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser19.IsSearchKey() && !m_szUser19Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser19Key);
	}
	m_wndUser19.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser19.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;	
}
void CHMSSampleScheduleInfoDialog::OnCua20SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnCua20Selendok()
{
	 
}

long CHMSSampleScheduleInfoDialog::OnCua20LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndCua20.IsSearchKey() && !m_szCua20Key.IsEmpty())
	{
		szWhere.Format(_T(" and ss_code='%s' "), m_szCua20Key);
	}
	m_wndCua20.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code as id, ss_desc as name FROM sys_sel WHERE ss_id='hms_sample_gate' and ss_vndesc ='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);	
	while(!rs.IsEOF()){ 
		m_wndCua20.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("name")), NULL);
		rs.MoveNext();
	}
	return nCount;
	return 0;
}
void CHMSSampleScheduleInfoDialog::OnUser20SelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSSampleScheduleInfoDialog::OnUser20Selendok()
{
	 
}
long CHMSSampleScheduleInfoDialog::OnUser20LoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndUser20.IsSearchKey() && !m_szUser20Key.IsEmpty())
	{
		szWhere.Format(_T(" and SU_USERID='%s' "), m_szUser20Key);
	}
	m_wndUser20.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("select SU_USERID as id, su_name as name from sys_user left join sys_dept on (su_deptid=sd_id) where sd_type in ('XN','KB','DT') and su_deptid='%s' %s ORDER BY id "),pMF->m_szDeptID, szWhere);
	nCount = rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF()){ 
		m_wndUser20.AddItems(
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