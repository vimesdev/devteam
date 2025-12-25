#include "HMSCuredTreatmentDlg.h"
#include "MainFrm.h"
/*static void _OnDocNoChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnDocNoChange();
} */
/*static void _OnDocNoSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnDocNoSetfocus();} */ 
/*static void _OnDocNoKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnDocNoKillfocus();
} */
static int _OnDocNoCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnDocNoCheckValue();
} 
/*static void _OnIDChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnIDChange();
} */
/*static void _OnIDSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnIDSetfocus();} */ 
/*static void _OnIDKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnIDKillfocus();
} */
static int _OnIDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnIDCheckValue();
} 
/*static void _OnEnterDateChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnEnterDateChange();
} */
/*static void _OnEnterDateSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnEnterDateSetfocus();} */ 
/*static void _OnEnterDateKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnEnterDateKillfocus();
} */
static int _OnEnterDateCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnEnterDateCheckValue();
} 
/*static void _OnExtractionChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnExtractionChange();
} */
/*static void _OnExtractionSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnExtractionSetfocus();} */ 
/*static void _OnExtractionKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnExtractionKillfocus();
} */
static int _OnExtractionCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnExtractionCheckValue();
} 
/*static void _OnS3ChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnS3Change();
} */
/*static void _OnS3SetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnS3Setfocus();} */ 
/*static void _OnS3KillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnS3Killfocus();
} */
static int _OnS3CheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnS3CheckValue();
} 
/*static void _OnT2ChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnT2Change();
} */
/*static void _OnT2SetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnT2Setfocus();} */ 
/*static void _OnT2KillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnT2Killfocus();
} */
static int _OnT2CheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnT2CheckValue();
} 
/*static void _OnT3ChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnT3Change();
} */
/*static void _OnT3SetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnT3Setfocus();} */ 
/*static void _OnT3KillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnT3Killfocus();
} */
static int _OnT3CheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnT3CheckValue();
} 
/*static void _OnCRChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCRChange();
} */
/*static void _OnCRSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCRSetfocus();} */ 
/*static void _OnCRKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCRKillfocus();
} */
static int _OnCRCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCRCheckValue();
} 
/*static void _OnTMChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnTMChange();
} */
/*static void _OnTMSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnTMSetfocus();} */ 
/*static void _OnTMKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnTMKillfocus();
} */
static int _OnTMCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnTMCheckValue();
} 
/*static void _OnVQRChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnVQRChange();
} */
/*static void _OnVQRSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnVQRSetfocus();} */ 
/*static void _OnVQRKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnVQRKillfocus();
} */
static int _OnVQRCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnVQRCheckValue();
} 
/*static void _OnBChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnBChange();
} */
/*static void _OnBSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnBSetfocus();} */ 
/*static void _OnBKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnBKillfocus();
} */
static int _OnBCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnBCheckValue();
} 
/*static void _OnCCChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCCChange();
} */
/*static void _OnCCSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCCSetfocus();} */ 
/*static void _OnCCKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCCKillfocus();
} */
static int _OnCCCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCCCheckValue();
} 
/*static void _OnIMChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnIMChange();
} */
/*static void _OnIMSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnIMSetfocus();} */ 
/*static void _OnIMKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnIMKillfocus();
} */
static int _OnIMCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnIMCheckValue();
}
/*static void _OnR8ChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnR8Change();
} */
/*static void _OnR8SetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnR8Setfocus();} */ 
/*static void _OnR8KillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnR8Killfocus();
} */
static int _OnR8CheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnR8CheckValue();
} 
/*static void _OnHTChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHTChange();
} */
/*static void _OnHTSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHTSetfocus();} */ 
/*static void _OnHTKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHTKillfocus();
} */
static int _OnHTCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnHTCheckValue();
} 
/*static void _OnHKChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHKChange();
} */
/*static void _OnHKSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHKSetfocus();} */ 
/*static void _OnHKKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHKKillfocus();
} */
static int _OnHKCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnHKCheckValue();
} 
/*static void _OnHKTChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHKTChange();
} */
/*static void _OnHKTSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHKTSetfocus();} */ 
/*static void _OnHKTKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHKTKillfocus();
} */
static int _OnHKTCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnHKTCheckValue();
} 
/*static void _OnNDChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnNDChange();
} */
/*static void _OnNDSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnNDSetfocus();} */ 
/*static void _OnNDKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnNDKillfocus();
} */
static int _OnNDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnNDCheckValue();
} 
/*static void _OnHKMNDChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHKMNDChange();
} */
/*static void _OnHKMNDSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHKMNDSetfocus();} */ 
/*static void _OnHKMNDKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnHKMNDKillfocus();
} */
static int _OnHKMNDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnHKMNDCheckValue();
} 
/*static void _OnCAUNChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUNChange();
} */
/*static void _OnCAUNSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUNSetfocus();} */ 
/*static void _OnCAUNKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUNKillfocus();
} */
static int _OnCAUNCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCAUNCheckValue();
} 
/*static void _OnCAUDChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUDChange();
} */
/*static void _OnCAUDSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUDSetfocus();} */ 
/*static void _OnCAUDKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUDKillfocus();
} */
static int _OnCAUDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCAUDCheckValue();
} 
/*static void _OnCAUDTTChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUDTTChange();
} */
/*static void _OnCAUDTTSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUDTTSetfocus();} */ 
/*static void _OnCAUDTTKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUDTTKillfocus();
} */
static int _OnCAUDTTCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCAUDTTCheckValue();
} 
/*static void _OnCAUSChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSChange();
} */
/*static void _OnCAUSSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSSetfocus();} */ 
/*static void _OnCAUSKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSKillfocus();
} */
static int _OnCAUSCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSCheckValue();
} 
/*static void _OnCAUSTTChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSTTChange();
} */
/*static void _OnCAUSTTSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSTTSetfocus();} */ 
/*static void _OnCAUSTTKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSTTKillfocus();
} */
static int _OnCAUSTTCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSTTCheckValue();
} 
/*static void _OnCAUSCCChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSCCChange();
} */
/*static void _OnCAUSCCSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSCCSetfocus();} */ 
/*static void _OnCAUSCCKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSCCKillfocus();
} */
static int _OnCAUSCCCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCAUSCCCheckValue();
} 
/*static void _OnPIVONChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVONChange();
} */
/*static void _OnPIVONSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVONSetfocus();} */ 
/*static void _OnPIVONKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVONKillfocus();
} */
static int _OnPIVONCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnPIVONCheckValue();
} 
/*static void _OnPIVODChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVODChange();
} */
/*static void _OnPIVODSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVODSetfocus();} */ 
/*static void _OnPIVODKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVODKillfocus();
} */
static int _OnPIVODCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnPIVODCheckValue();
} 
/*static void _OnPIVODTTChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVODTTChange();
} */
/*static void _OnPIVODTTSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVODTTSetfocus();} */ 
/*static void _OnPIVODTTKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVODTTKillfocus();
} */
static int _OnPIVODTTCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnPIVODTTCheckValue();
} 
/*static void _OnPIVOSChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSChange();
} */
/*static void _OnPIVOSSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSSetfocus();} */ 
/*static void _OnPIVOSKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSKillfocus();
} */
static int _OnPIVOSCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSCheckValue();
} 
/*static void _OnPIVOSTTChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSTTChange();
} */
/*static void _OnPIVOSTTSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSTTSetfocus();} */ 
/*static void _OnPIVOSTTKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSTTKillfocus();
} */
static int _OnPIVOSTTCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSTTCheckValue();
} 
/*static void _OnPIVOSCCChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSCCChange();
} */
/*static void _OnPIVOSCCSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSCCSetfocus();} */ 
/*static void _OnPIVOSCCKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSCCKillfocus();
} */
static int _OnPIVOSCCCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnPIVOSCCCheckValue();
} 
/*static void _OnCHUPNChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPNChange();
} */
/*static void _OnCHUPNSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPNSetfocus();} */ 
/*static void _OnCHUPNKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPNKillfocus();
} */
static int _OnCHUPNCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPNCheckValue();
} 
/*static void _OnCHUPDChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPDChange();
} */
/*static void _OnCHUPDSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPDSetfocus();} */ 
/*static void _OnCHUPDKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPDKillfocus();
} */
static int _OnCHUPDCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPDCheckValue();
} 
/*static void _OnCHUPDTTChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPDTTChange();
} */
/*static void _OnCHUPDTTSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPDTTSetfocus();} */ 
/*static void _OnCHUPDTTKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPDTTKillfocus();
} */
static int _OnCHUPDTTCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPDTTCheckValue();
} 
/*static void _OnCHUPSChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSChange();
} */
/*static void _OnCHUPSSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSSetfocus();} */ 
/*static void _OnCHUPSKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSKillfocus();
} */
static int _OnCHUPSCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSCheckValue();
} 
/*static void _OnCHUPSTTChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSTTChange();
} */
/*static void _OnCHUPSTTSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSTTSetfocus();} */ 
/*static void _OnCHUPSTTKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSTTKillfocus();
} */
static int _OnCHUPSTTCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSTTCheckValue();
} 
/*static void _OnCHUPSCCChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSCCChange();
} */
/*static void _OnCHUPSCCSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSCCSetfocus();} */ 
/*static void _OnCHUPSCCKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSCCKillfocus();
} */
static int _OnCHUPSCCCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnCHUPSCCCheckValue();
} 
/*static void _OnDGChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnDGChange();
} */
/*static void _OnDGSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnDGSetfocus();} */ 
/*static void _OnDGKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnDGKillfocus();
} */
static int _OnDGCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnDGCheckValue();
} 
/*static void _OnOCChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnOCChange();
} */
/*static void _OnOCSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnOCSetfocus();} */ 
/*static void _OnOCKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnOCKillfocus();
} */
static int _OnOCCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnOCCheckValue();
} 
/*static void _OnBRChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnBRChange();
} */
/*static void _OnBRSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnBRSetfocus();} */ 
/*static void _OnBRKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnBRKillfocus();
} */
static int _OnBRCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnBRCheckValue();
} 
/*static void _OnXposChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnXposChange();
} */
/*static void _OnXposSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnXposSetfocus();} */ 
/*static void _OnXposKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnXposKillfocus();
} */
static int _OnXposCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnXposCheckValue();
} 
/*static void _OnVAChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnVAChange();
} */
/*static void _OnVASetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnVASetfocus();} */ 
/*static void _OnVAKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnVAKillfocus();
} */
static int _OnVACheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnVACheckValue();
}
/*static void _OnMCLChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnMCLChange();
} */
/*static void _OnMCLSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnMCLSetfocus();} */ 
/*static void _OnMCLKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnMCLKillfocus();
} */
static int _OnMCLCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnMCLCheckValue();
} 
/*static void _OnGCCChangeFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnGCCChange();
} */
/*static void _OnGCCSetfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnGCCSetfocus();} */ 
/*static void _OnGCCKillfocusFnc(CWnd *pWnd){
	((CHMSCuredTreatmentDlg *)pWnd)->OnGCCKillfocus();
} */
static int _OnGCCCheckValueFnc(CWnd *pWnd){
	return ((CHMSCuredTreatmentDlg *)pWnd)->OnGCCCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSCuredTreatmentDlg *pVw = (CHMSCuredTreatmentDlg *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSCuredTreatmentDlg *pVw = (CHMSCuredTreatmentDlg *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddHMSCuredTreatmentDlgFnc(CWnd *pWnd){
	 return ((CHMSCuredTreatmentDlg*)pWnd)->OnAddHMSCuredTreatmentDlg();
} 
static int _OnEditHMSCuredTreatmentDlgFnc(CWnd *pWnd){
	 return ((CHMSCuredTreatmentDlg*)pWnd)->OnEditHMSCuredTreatmentDlg();
} 
static int _OnDeleteHMSCuredTreatmentDlgFnc(CWnd *pWnd){
	 return ((CHMSCuredTreatmentDlg*)pWnd)->OnDeleteHMSCuredTreatmentDlg();
} 
static int _OnSaveHMSCuredTreatmentDlgFnc(CWnd *pWnd){
	 return ((CHMSCuredTreatmentDlg*)pWnd)->OnSaveHMSCuredTreatmentDlg();
} 
static int _OnCancelHMSCuredTreatmentDlgFnc(CWnd *pWnd){
	 return ((CHMSCuredTreatmentDlg*)pWnd)->OnCancelHMSCuredTreatmentDlg();
} 
CHMSCuredTreatmentDlg::CHMSCuredTreatmentDlg(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CHMSCuredTreatmentDlg::~CHMSCuredTreatmentDlg(){
}
void CHMSCuredTreatmentDlg::OnCreateComponents(){
	m_wndCuredTreatment.Create(this, _T("Cured Treatment"), 5, 4, 980, 509);
	m_wndcontrol_7.Create(this, _T("N\x1ED9i \x64ung \x64i\x1EC1u tr\x1ECB"), 10, 60, 975, 145);
	m_wndcontrol_8.Create(this, _T("L\x1EAFp h\xE0m"), 10, 150, 975, 205);
	m_wndcontrol_9.Create(this, _T("\x43\x1EA7u"), 10, 210, 975, 265);
	m_wndcontrol_10.Create(this, _T("PIVO"), 10, 270, 975, 325);
	m_wndcontrol_11.Create(this, _T("\x43h\x1EE5p"), 10, 330, 975, 385);
	m_wndcontrol_22.Create(this, _T("H\xE0m n\x1EAFn"), 10, 390, 975, 445);
	m_wndcontrol_23.Create(this, _T("Kh\xE1\x63"), 10, 450, 975, 505);
	m_wndDocNoLabel.Create(this, _T("Doc No"), 10, 30, 115, 55);
	m_wndDocNo.Create(this,120, 30, 330, 55); 
	m_wndIDLabel.Create(this, _T("ID"), 335, 30, 435, 55);
	m_wndID.Create(this,440, 30, 650, 55); 
	m_wndEnterDateLabel.Create(this, _T("Enter Date"), 655, 30, 755, 55);
	m_wndEnterDate.Create(this,760, 30, 970, 55); 
	m_wndExtractionLabel.Create(this, _T("Extraction"), 15, 85, 115, 110);
	m_wndExtraction.Create(this,120, 85, 170, 110); 
	m_wndS3Label.Create(this, _T("S\xE2u ng\xE0"), 175, 85, 275, 110);
	m_wndS3.Create(this,280, 85, 330, 110); 
	m_wndT2Label.Create(this, _T("T2"), 335, 85, 435, 110);
	m_wndT2.Create(this,440, 85, 490, 110); 
	m_wndT3Label.Create(this, _T("T3"), 495, 85, 595, 110);
	m_wndT3.Create(this,600, 85, 650, 110); 
	m_wndCRLabel.Create(this, _T("\x43\x61o r\x103ng"), 655, 85, 755, 110);
	m_wndCR.Create(this,760, 85, 810, 110); 
	m_wndVQRLabel.Create(this, _T("VQ r\x103ng"), 815, 85, 915, 110);
	m_wndVQR.Create(this,920, 85, 970, 110); 
	m_wndTMLabel.Create(this, _T("Th\x1EA9m m\x1EF9"), 15, 115, 115, 140);
	m_wndTM.Create(this,120, 115, 170, 140); 
	m_wndBLabel.Create(this, _T("\x42\x1EC7nh kh\xE1\x63"), 175, 115, 275, 140);
	m_wndB.Create(this,280, 115, 330, 140); 
	m_wndCCLabel.Create(this, _T("\x43\x1EAFt \x63u\x1ED1ng"), 335, 115, 435, 140);
	m_wndCC.Create(this,440, 115, 490, 140); 
	m_wndIMLabel.Create(this, _T("Impl\x61nt"), 495, 115, 595, 140);
	m_wndIM.Create(this,600, 115, 650, 140); 
	m_wndR8Label.Create(this, _T("R\x103ng s\x1ED1 \x38"), 655, 115, 755, 140);
	m_wndR8.Create(this,760, 115, 810, 140); 
	m_wndHTLabel.Create(this, _T("H\xE0m th\xE1o l\x1EAFp"), 15, 175, 115, 200);
	m_wndHT.Create(this,120, 175, 170, 200); 
	m_wndHKLabel.Create(this, _T("H\xE0m khung"), 175, 175, 275, 200);
	m_wndHK.Create(this,280, 175, 330, 200); 
	m_wndHKTLabel.Create(this, _T("HK Tit\x61n"), 335, 175, 435, 200);
	m_wndHKT.Create(this,440, 175, 490, 200); 
	m_wndNDLabel.Create(this, _T("H\xE0m nh\x1EF1\x61 \x64\x1EBBo"), 495, 175, 595, 200);
	m_wndND.Create(this,600, 175, 650, 200); 
	m_wndHKMNDLabel.Create(this, _T("HK m\xF3\x63 N\x44"), 655, 175, 755, 200);
	m_wndHKMND.Create(this,760, 175, 810, 200); 
	m_wndCAUNLabel.Create(this, _T("Nh\x1EF1\x61"), 15, 235, 115, 260);
	m_wndCAUN.Create(this,120, 235, 170, 260); 
	m_wndCAUDLabel.Create(this, _T("\x110\xFA\x63"), 175, 235, 275, 260);
	m_wndCAUD.Create(this,280, 235, 330, 260); 
	m_wndCAUDTTLabel.Create(this, _T("\xD0\xFA\x63 Tit\x61n"), 335, 235, 435, 260);
	m_wndCAUDTT.Create(this,440, 235, 490, 260); 
	m_wndCAUSLabel.Create(this, _T("S\x1EE9"), 495, 235, 595, 260);
	m_wndCAUS.Create(this,600, 235, 650, 260); 
	m_wndCAUSTTLabel.Create(this, _T("S\x1EE9 Tit\x61n"), 655, 235, 755, 260);
	m_wndCAUSTT.Create(this,760, 235, 810, 260); 
	m_wndCAUSCCLabel.Create(this, _T("S\x1EE9 \x43\x65r\x63on"), 815, 235, 915, 260);
	m_wndCAUSCC.Create(this,920, 235, 970, 260); 
	m_wndPIVONLabel.Create(this, _T("Nh\x1EF1\x61"), 13, 295, 113, 320);
	m_wndPIVON.Create(this,118, 295, 168, 320); 
	m_wndPIVODLabel.Create(this, _T("\x110\xFA\x63"), 173, 295, 273, 320);
	m_wndPIVOD.Create(this,278, 295, 328, 320); 
	m_wndPIVODTTLabel.Create(this, _T("\xD0\xFA\x63 Tit\x61n"), 333, 295, 433, 320);
	m_wndPIVODTT.Create(this,438, 295, 488, 320); 
	m_wndPIVOSLabel.Create(this, _T("S\x1EE9"), 493, 295, 593, 320);
	m_wndPIVOS.Create(this,598, 295, 648, 320); 
	m_wndPIVOSTTLabel.Create(this, _T("S\x1EE9 Tit\x61n"), 653, 295, 753, 320);
	m_wndPIVOSTT.Create(this,758, 295, 808, 320); 
	m_wndPIVOSCCLabel.Create(this, _T("S\x1EE9 \x43\x65r\x63on"), 813, 295, 913, 320);
	m_wndPIVOSCC.Create(this,918, 295, 968, 320); 
	m_wndCHUPNLabel.Create(this, _T("Nh\x1EF1\x61"), 15, 355, 115, 380);
	m_wndCHUPN.Create(this,120, 355, 170, 380); 
	m_wndCHUPDLabel.Create(this, _T("\x110\xFA\x63"), 175, 355, 275, 380);
	m_wndCHUPD.Create(this,280, 355, 330, 380); 
	m_wndCHUPDTTLabel.Create(this, _T("\xD0\xFA\x63 Tit\x61n"), 335, 355, 435, 380);
	m_wndCHUPDTT.Create(this,440, 355, 490, 380); 
	m_wndCHUPSLabel.Create(this, _T("S\x1EE9"), 495, 355, 595, 380);
	m_wndCHUPS.Create(this,600, 355, 650, 380); 
	m_wndCHUPSTTLabel.Create(this, _T("S\x1EE9 Tit\x61n"), 655, 355, 755, 380);
	m_wndCHUPSTT.Create(this,760, 355, 810, 380); 
	m_wndCHUPSCCLabel.Create(this, _T("S\x1EE9 \x43\x65r\x63on"), 815, 355, 915, 380);
	m_wndCHUPSCC.Create(this,920, 355, 970, 380); 
	m_wndDGLabel.Create(this, _T("\x110\x1A1n gi\x1EA3n"), 15, 415, 115, 440);
	m_wndDG.Create(this,120, 415, 170, 440); 
	m_wndOCLabel.Create(this, _T("\x1ED0\x63"), 175, 415, 275, 440);
	m_wndOC.Create(this,280, 415, 330, 440); 
	m_wndBRLabel.Create(this, _T("Bracket"), 335, 415, 435, 440);
	m_wndBR.Create(this,440, 415, 490, 440); 
	m_wndXposLabel.Create(this, _T("\x43h\x1ED1t \x58pos"), 15, 475, 115, 500);
	m_wndXpos.Create(this,120, 475, 170, 500); 
	m_wndVALabel.Create(this, _T("V\xE1 h\xE0m"), 175, 475, 275, 500);
	m_wndVA.Create(this,280, 475, 330, 500); 
	m_wndMCLLabel.Create(this, _T("M\xE0ng \x63\xE1\x63 lo\x1EA1i"), 335, 475, 435, 500);
	m_wndMCL.Create(this,440, 475, 490, 500); 
	m_wndGCCLabel.Create(this, _T("G\x1EAFn \x63\x1EA7u \x63h\x1EE5p"), 495, 475, 595, 500);
	m_wndGCC.Create(this,600, 475, 650, 500); 
	m_wndSave.Create(this, _T("Save"), 805, 510, 885, 535);
	m_wndCancel.Create(this, _T("Cancel"), 890, 510, 970, 535);

}
void CHMSCuredTreatmentDlg::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndDocNo.SetLimitText(35);
	m_wndDocNo.SetCheckValue(true);
	m_wndID.SetLimitText(35);
	m_wndID.SetCheckValue(true);
	//m_wndEnterDate.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEnterDate.SetCheckValue(true);
	m_wndExtraction.SetLimitText(5);
	m_wndExtraction.SetCheckValue(true);
	m_wndS3.SetLimitText(5);
	m_wndS3.SetCheckValue(true);
	m_wndT2.SetLimitText(5);
	m_wndT2.SetCheckValue(true);
	m_wndT3.SetLimitText(5);
	m_wndT3.SetCheckValue(true);
	m_wndCR.SetLimitText(5);
	m_wndCR.SetCheckValue(true);
	m_wndTM.SetLimitText(5);
	m_wndTM.SetCheckValue(true);
	m_wndVQR.SetLimitText(5);
	m_wndVQR.SetCheckValue(true);
	m_wndB.SetLimitText(5);
	m_wndB.SetCheckValue(true);
	m_wndCC.SetLimitText(5);
	m_wndCC.SetCheckValue(true);
	m_wndIM.SetLimitText(5);
	m_wndIM.SetCheckValue(true);
	m_wndR8.SetLimitText(5);
	m_wndR8.SetCheckValue(true);
	m_wndHT.SetLimitText(5);
	m_wndHT.SetCheckValue(true);
	m_wndHK.SetLimitText(5);
	m_wndHK.SetCheckValue(true);
	m_wndHKT.SetLimitText(5);
	m_wndHKT.SetCheckValue(true);
	m_wndND.SetLimitText(5);
	m_wndND.SetCheckValue(true);
	m_wndHKMND.SetLimitText(5);
	m_wndHKMND.SetCheckValue(true);
	m_wndCAUN.SetLimitText(5);
	m_wndCAUN.SetCheckValue(true);
	m_wndCAUD.SetLimitText(5);
	m_wndCAUD.SetCheckValue(true);
	m_wndCAUDTT.SetLimitText(5);
	m_wndCAUDTT.SetCheckValue(true);
	m_wndCAUS.SetLimitText(5);
	m_wndCAUS.SetCheckValue(true);
	m_wndCAUSTT.SetLimitText(5);
	m_wndCAUSTT.SetCheckValue(true);
	m_wndCAUSCC.SetLimitText(5);
	m_wndCAUSCC.SetCheckValue(true);
	m_wndPIVON.SetLimitText(5);
	m_wndPIVON.SetCheckValue(true);
	m_wndPIVOD.SetLimitText(5);
	m_wndPIVOD.SetCheckValue(true);
	m_wndPIVODTT.SetLimitText(5);
	m_wndPIVODTT.SetCheckValue(true);
	m_wndPIVOS.SetLimitText(5);
	m_wndPIVOS.SetCheckValue(true);
	m_wndPIVOSTT.SetLimitText(5);
	m_wndPIVOSTT.SetCheckValue(true);
	m_wndPIVOSCC.SetLimitText(5);
	m_wndPIVOSCC.SetCheckValue(true);
	m_wndCHUPN.SetLimitText(5);
	m_wndCHUPN.SetCheckValue(true);
	m_wndCHUPD.SetLimitText(5);
	m_wndCHUPD.SetCheckValue(true);
	m_wndCHUPDTT.SetLimitText(5);
	m_wndCHUPDTT.SetCheckValue(true);
	m_wndCHUPS.SetLimitText(5);
	m_wndCHUPS.SetCheckValue(true);
	m_wndCHUPSTT.SetLimitText(5);
	m_wndCHUPSTT.SetCheckValue(true);
	m_wndCHUPSCC.SetLimitText(5);
	m_wndCHUPSCC.SetCheckValue(true);
	m_wndDG.SetLimitText(5);
	m_wndDG.SetCheckValue(true);
	m_wndOC.SetLimitText(5);
	m_wndOC.SetCheckValue(true);
	m_wndBR.SetLimitText(5);
	m_wndBR.SetCheckValue(true);
	m_wndXpos.SetLimitText(5);
	m_wndXpos.SetCheckValue(true);
	m_wndVA.SetLimitText(5);
	m_wndVA.SetCheckValue(true);
	m_wndMCL.SetLimitText(5);
	m_wndMCL.SetCheckValue(true);
	m_wndGCC.SetLimitText(5);
	m_wndGCC.SetCheckValue(true);

	m_tbl_cured.SetTableName(_T("hms_curedtreatment"));
	m_tbl_cured.AddField(_T("hct_createdby"), dfText, 15);
	m_tbl_cured.AddField(_T("hct_createddate"), dfDateTime);
	m_tbl_cured.AddField(_T("hct_updatedby"), dfText, 15);
	m_tbl_cured.AddField(_T("hct_updateddate"), dfDateTime);
	m_tbl_cured.AddField(_T("hct_docno"), dfLong);
	m_tbl_cured.AddField(_T("hct_idx"), dfLong);
	m_tbl_cured.AddField(_T("hct_date"), dfDateTime);

	m_tbl_cured.AddField(_T("hct_extraction"), dfLong);
	m_tbl_cured.AddField(_T("hct_s3"), dfLong);
	m_tbl_cured.AddField(_T("hct_t2"), dfLong);
	m_tbl_cured.AddField(_T("hct_t3"), dfLong);
	m_tbl_cured.AddField(_T("hct_tm"), dfLong);
	m_tbl_cured.AddField(_T("hct_cr"), dfLong);
	m_tbl_cured.AddField(_T("hct_vqr"), dfLong);
	m_tbl_cured.AddField(_T("hct_b"), dfLong);
	m_tbl_cured.AddField(_T("hct_cc"), dfLong);
	m_tbl_cured.AddField(_T("hct_im"), dfLong);
	m_tbl_cured.AddField(_T("hct_r8"), dfLong);

	m_tbl_cured.AddField(_T("hct_ht"), dfLong);
	m_tbl_cured.AddField(_T("hct_hk"), dfLong);
	m_tbl_cured.AddField(_T("hct_hkt"), dfLong);
	m_tbl_cured.AddField(_T("hct_nd"), dfLong);
	m_tbl_cured.AddField(_T("hct_hkmnd"), dfLong);

	m_tbl_cured.AddField(_T("hct_cau_n"), dfLong);
	m_tbl_cured.AddField(_T("hct_cau_d"), dfLong);
	m_tbl_cured.AddField(_T("hct_cau_dtt"), dfLong);
	m_tbl_cured.AddField(_T("hct_cau_s"), dfLong);
	m_tbl_cured.AddField(_T("hct_cau_stt"), dfLong);
	m_tbl_cured.AddField(_T("hct_cau_scc"), dfLong);

	m_tbl_cured.AddField(_T("hct_pivo_n"), dfLong);
	m_tbl_cured.AddField(_T("hct_pivo_d"), dfLong);
	m_tbl_cured.AddField(_T("hct_pivo_dtt"), dfLong);
	m_tbl_cured.AddField(_T("hct_pivo_s"), dfLong);
	m_tbl_cured.AddField(_T("hct_pivo_stt"), dfLong);
	m_tbl_cured.AddField(_T("hct_pivo_scc"), dfLong);

	m_tbl_cured.AddField(_T("hct_chup_n"), dfLong);
	m_tbl_cured.AddField(_T("hct_chup_d"), dfLong);
	m_tbl_cured.AddField(_T("hct_chup_dtt"), dfLong);
	m_tbl_cured.AddField(_T("hct_chup_s"), dfLong);
	m_tbl_cured.AddField(_T("hct_chup_stt"), dfLong);
	m_tbl_cured.AddField(_T("hct_chup_scc"), dfLong);

	m_tbl_cured.AddField(_T("hct_dg"), dfLong);
	m_tbl_cured.AddField(_T("hct_oc"), dfLong);
	m_tbl_cured.AddField(_T("hct_br"), dfLong);

	m_tbl_cured.AddField(_T("hct_xpos"), dfLong);
	m_tbl_cured.AddField(_T("hct_va"), dfLong);
	m_tbl_cured.AddField(_T("hct_mcl"), dfLong);
	m_tbl_cured.AddField(_T("hct_gcc"), dfLong);

	m_wndDocNo.SetReadOnly(TRUE);
	m_wndID.SetReadOnly(TRUE);
	m_wndEnterDate.SetReadOnly(TRUE);
}
void CHMSCuredTreatmentDlg::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndDocNo.SetEvent(WE_CHANGE, _OnDocNoChangeFnc);
	//m_wndDocNo.SetEvent(WE_SETFOCUS, _OnDocNoSetfocusFnc);
	//m_wndDocNo.SetEvent(WE_KILLFOCUS, _OnDocNoKillfocusFnc);
	m_wndDocNo.SetEvent(WE_CHECKVALUE, _OnDocNoCheckValueFnc);
	//m_wndID.SetEvent(WE_CHANGE, _OnIDChangeFnc);
	//m_wndID.SetEvent(WE_SETFOCUS, _OnIDSetfocusFnc);
	//m_wndID.SetEvent(WE_KILLFOCUS, _OnIDKillfocusFnc);
	m_wndID.SetEvent(WE_CHECKVALUE, _OnIDCheckValueFnc);
	//m_wndEnterDate.SetEvent(WE_CHANGE, _OnEnterDateChangeFnc);
	//m_wndEnterDate.SetEvent(WE_SETFOCUS, _OnEnterDateSetfocusFnc);
	//m_wndEnterDate.SetEvent(WE_KILLFOCUS, _OnEnterDateKillfocusFnc);
	m_wndEnterDate.SetEvent(WE_CHECKVALUE, _OnEnterDateCheckValueFnc);
	//m_wndExtraction.SetEvent(WE_CHANGE, _OnExtractionChangeFnc);
	//m_wndExtraction.SetEvent(WE_SETFOCUS, _OnExtractionSetfocusFnc);
	//m_wndExtraction.SetEvent(WE_KILLFOCUS, _OnExtractionKillfocusFnc);
	m_wndExtraction.SetEvent(WE_CHECKVALUE, _OnExtractionCheckValueFnc);
	//m_wndS3.SetEvent(WE_CHANGE, _OnS3ChangeFnc);
	//m_wndS3.SetEvent(WE_SETFOCUS, _OnS3SetfocusFnc);
	//m_wndS3.SetEvent(WE_KILLFOCUS, _OnS3KillfocusFnc);
	m_wndS3.SetEvent(WE_CHECKVALUE, _OnS3CheckValueFnc);
	//m_wndT2.SetEvent(WE_CHANGE, _OnT2ChangeFnc);
	//m_wndT2.SetEvent(WE_SETFOCUS, _OnT2SetfocusFnc);
	//m_wndT2.SetEvent(WE_KILLFOCUS, _OnT2KillfocusFnc);
	m_wndT2.SetEvent(WE_CHECKVALUE, _OnT2CheckValueFnc);
	//m_wndT3.SetEvent(WE_CHANGE, _OnT3ChangeFnc);
	//m_wndT3.SetEvent(WE_SETFOCUS, _OnT3SetfocusFnc);
	//m_wndT3.SetEvent(WE_KILLFOCUS, _OnT3KillfocusFnc);
	m_wndT3.SetEvent(WE_CHECKVALUE, _OnT3CheckValueFnc);
	//m_wndCR.SetEvent(WE_CHANGE, _OnCRChangeFnc);
	//m_wndCR.SetEvent(WE_SETFOCUS, _OnCRSetfocusFnc);
	//m_wndCR.SetEvent(WE_KILLFOCUS, _OnCRKillfocusFnc);
	m_wndCR.SetEvent(WE_CHECKVALUE, _OnCRCheckValueFnc);
	//m_wndTM.SetEvent(WE_CHANGE, _OnTMChangeFnc);
	//m_wndTM.SetEvent(WE_SETFOCUS, _OnTMSetfocusFnc);
	//m_wndTM.SetEvent(WE_KILLFOCUS, _OnTMKillfocusFnc);
	m_wndTM.SetEvent(WE_CHECKVALUE, _OnTMCheckValueFnc);
	//m_wndVQR.SetEvent(WE_CHANGE, _OnVQRChangeFnc);
	//m_wndVQR.SetEvent(WE_SETFOCUS, _OnVQRSetfocusFnc);
	//m_wndVQR.SetEvent(WE_KILLFOCUS, _OnVQRKillfocusFnc);
	m_wndVQR.SetEvent(WE_CHECKVALUE, _OnVQRCheckValueFnc);
	//m_wndB.SetEvent(WE_CHANGE, _OnBChangeFnc);
	//m_wndB.SetEvent(WE_SETFOCUS, _OnBSetfocusFnc);
	//m_wndB.SetEvent(WE_KILLFOCUS, _OnBKillfocusFnc);
	m_wndB.SetEvent(WE_CHECKVALUE, _OnBCheckValueFnc);
	//m_wndCC.SetEvent(WE_CHANGE, _OnCCChangeFnc);
	//m_wndCC.SetEvent(WE_SETFOCUS, _OnCCSetfocusFnc);
	//m_wndCC.SetEvent(WE_KILLFOCUS, _OnCCKillfocusFnc);
	m_wndCC.SetEvent(WE_CHECKVALUE, _OnCCCheckValueFnc);
	//m_wndIM.SetEvent(WE_CHANGE, _OnIMChangeFnc);
	//m_wndIM.SetEvent(WE_SETFOCUS, _OnIMSetfocusFnc);
	//m_wndIM.SetEvent(WE_KILLFOCUS, _OnIMKillfocusFnc);
	m_wndIM.SetEvent(WE_CHECKVALUE, _OnIMCheckValueFnc);
	//m_wndR8.SetEvent(WE_CHANGE, _OnR8ChangeFnc);
	//m_wndR8.SetEvent(WE_SETFOCUS, _OnR8SetfocusFnc);
	//m_wndR8.SetEvent(WE_KILLFOCUS, _OnR8KillfocusFnc);
	m_wndR8.SetEvent(WE_CHECKVALUE, _OnR8CheckValueFnc);
	//m_wndHT.SetEvent(WE_CHANGE, _OnHTChangeFnc);
	//m_wndHT.SetEvent(WE_SETFOCUS, _OnHTSetfocusFnc);
	//m_wndHT.SetEvent(WE_KILLFOCUS, _OnHTKillfocusFnc);
	m_wndHT.SetEvent(WE_CHECKVALUE, _OnHTCheckValueFnc);
	//m_wndHK.SetEvent(WE_CHANGE, _OnHKChangeFnc);
	//m_wndHK.SetEvent(WE_SETFOCUS, _OnHKSetfocusFnc);
	//m_wndHK.SetEvent(WE_KILLFOCUS, _OnHKKillfocusFnc);
	m_wndHK.SetEvent(WE_CHECKVALUE, _OnHKCheckValueFnc);
	//m_wndHKT.SetEvent(WE_CHANGE, _OnHKTChangeFnc);
	//m_wndHKT.SetEvent(WE_SETFOCUS, _OnHKTSetfocusFnc);
	//m_wndHKT.SetEvent(WE_KILLFOCUS, _OnHKTKillfocusFnc);
	m_wndHKT.SetEvent(WE_CHECKVALUE, _OnHKTCheckValueFnc);
	//m_wndND.SetEvent(WE_CHANGE, _OnNDChangeFnc);
	//m_wndND.SetEvent(WE_SETFOCUS, _OnNDSetfocusFnc);
	//m_wndND.SetEvent(WE_KILLFOCUS, _OnNDKillfocusFnc);
	m_wndND.SetEvent(WE_CHECKVALUE, _OnNDCheckValueFnc);
	//m_wndHKMND.SetEvent(WE_CHANGE, _OnHKMNDChangeFnc);
	//m_wndHKMND.SetEvent(WE_SETFOCUS, _OnHKMNDSetfocusFnc);
	//m_wndHKMND.SetEvent(WE_KILLFOCUS, _OnHKMNDKillfocusFnc);
	m_wndHKMND.SetEvent(WE_CHECKVALUE, _OnHKMNDCheckValueFnc);
	//m_wndCAUN.SetEvent(WE_CHANGE, _OnCAUNChangeFnc);
	//m_wndCAUN.SetEvent(WE_SETFOCUS, _OnCAUNSetfocusFnc);
	//m_wndCAUN.SetEvent(WE_KILLFOCUS, _OnCAUNKillfocusFnc);
	m_wndCAUN.SetEvent(WE_CHECKVALUE, _OnCAUNCheckValueFnc);
	//m_wndCAUD.SetEvent(WE_CHANGE, _OnCAUDChangeFnc);
	//m_wndCAUD.SetEvent(WE_SETFOCUS, _OnCAUDSetfocusFnc);
	//m_wndCAUD.SetEvent(WE_KILLFOCUS, _OnCAUDKillfocusFnc);
	m_wndCAUD.SetEvent(WE_CHECKVALUE, _OnCAUDCheckValueFnc);
	//m_wndCAUDTT.SetEvent(WE_CHANGE, _OnCAUDTTChangeFnc);
	//m_wndCAUDTT.SetEvent(WE_SETFOCUS, _OnCAUDTTSetfocusFnc);
	//m_wndCAUDTT.SetEvent(WE_KILLFOCUS, _OnCAUDTTKillfocusFnc);
	m_wndCAUDTT.SetEvent(WE_CHECKVALUE, _OnCAUDTTCheckValueFnc);
	//m_wndCAUS.SetEvent(WE_CHANGE, _OnCAUSChangeFnc);
	//m_wndCAUS.SetEvent(WE_SETFOCUS, _OnCAUSSetfocusFnc);
	//m_wndCAUS.SetEvent(WE_KILLFOCUS, _OnCAUSKillfocusFnc);
	m_wndCAUS.SetEvent(WE_CHECKVALUE, _OnCAUSCheckValueFnc);
	//m_wndCAUSTT.SetEvent(WE_CHANGE, _OnCAUSTTChangeFnc);
	//m_wndCAUSTT.SetEvent(WE_SETFOCUS, _OnCAUSTTSetfocusFnc);
	//m_wndCAUSTT.SetEvent(WE_KILLFOCUS, _OnCAUSTTKillfocusFnc);
	m_wndCAUSTT.SetEvent(WE_CHECKVALUE, _OnCAUSTTCheckValueFnc);
	//m_wndCAUSCC.SetEvent(WE_CHANGE, _OnCAUSCCChangeFnc);
	//m_wndCAUSCC.SetEvent(WE_SETFOCUS, _OnCAUSCCSetfocusFnc);
	//m_wndCAUSCC.SetEvent(WE_KILLFOCUS, _OnCAUSCCKillfocusFnc);
	m_wndCAUSCC.SetEvent(WE_CHECKVALUE, _OnCAUSCCCheckValueFnc);
	//m_wndPIVON.SetEvent(WE_CHANGE, _OnPIVONChangeFnc);
	//m_wndPIVON.SetEvent(WE_SETFOCUS, _OnPIVONSetfocusFnc);
	//m_wndPIVON.SetEvent(WE_KILLFOCUS, _OnPIVONKillfocusFnc);
	m_wndPIVON.SetEvent(WE_CHECKVALUE, _OnPIVONCheckValueFnc);
	//m_wndPIVOD.SetEvent(WE_CHANGE, _OnPIVODChangeFnc);
	//m_wndPIVOD.SetEvent(WE_SETFOCUS, _OnPIVODSetfocusFnc);
	//m_wndPIVOD.SetEvent(WE_KILLFOCUS, _OnPIVODKillfocusFnc);
	m_wndPIVOD.SetEvent(WE_CHECKVALUE, _OnPIVODCheckValueFnc);
	//m_wndPIVODTT.SetEvent(WE_CHANGE, _OnPIVODTTChangeFnc);
	//m_wndPIVODTT.SetEvent(WE_SETFOCUS, _OnPIVODTTSetfocusFnc);
	//m_wndPIVODTT.SetEvent(WE_KILLFOCUS, _OnPIVODTTKillfocusFnc);
	m_wndPIVODTT.SetEvent(WE_CHECKVALUE, _OnPIVODTTCheckValueFnc);
	//m_wndPIVOS.SetEvent(WE_CHANGE, _OnPIVOSChangeFnc);
	//m_wndPIVOS.SetEvent(WE_SETFOCUS, _OnPIVOSSetfocusFnc);
	//m_wndPIVOS.SetEvent(WE_KILLFOCUS, _OnPIVOSKillfocusFnc);
	m_wndPIVOS.SetEvent(WE_CHECKVALUE, _OnPIVOSCheckValueFnc);
	//m_wndPIVOSTT.SetEvent(WE_CHANGE, _OnPIVOSTTChangeFnc);
	//m_wndPIVOSTT.SetEvent(WE_SETFOCUS, _OnPIVOSTTSetfocusFnc);
	//m_wndPIVOSTT.SetEvent(WE_KILLFOCUS, _OnPIVOSTTKillfocusFnc);
	m_wndPIVOSTT.SetEvent(WE_CHECKVALUE, _OnPIVOSTTCheckValueFnc);
	//m_wndPIVOSCC.SetEvent(WE_CHANGE, _OnPIVOSCCChangeFnc);
	//m_wndPIVOSCC.SetEvent(WE_SETFOCUS, _OnPIVOSCCSetfocusFnc);
	//m_wndPIVOSCC.SetEvent(WE_KILLFOCUS, _OnPIVOSCCKillfocusFnc);
	m_wndPIVOSCC.SetEvent(WE_CHECKVALUE, _OnPIVOSCCCheckValueFnc);
	//m_wndCHUPN.SetEvent(WE_CHANGE, _OnCHUPNChangeFnc);
	//m_wndCHUPN.SetEvent(WE_SETFOCUS, _OnCHUPNSetfocusFnc);
	//m_wndCHUPN.SetEvent(WE_KILLFOCUS, _OnCHUPNKillfocusFnc);
	m_wndCHUPN.SetEvent(WE_CHECKVALUE, _OnCHUPNCheckValueFnc);
	//m_wndCHUPD.SetEvent(WE_CHANGE, _OnCHUPDChangeFnc);
	//m_wndCHUPD.SetEvent(WE_SETFOCUS, _OnCHUPDSetfocusFnc);
	//m_wndCHUPD.SetEvent(WE_KILLFOCUS, _OnCHUPDKillfocusFnc);
	m_wndCHUPD.SetEvent(WE_CHECKVALUE, _OnCHUPDCheckValueFnc);
	//m_wndCHUPDTT.SetEvent(WE_CHANGE, _OnCHUPDTTChangeFnc);
	//m_wndCHUPDTT.SetEvent(WE_SETFOCUS, _OnCHUPDTTSetfocusFnc);
	//m_wndCHUPDTT.SetEvent(WE_KILLFOCUS, _OnCHUPDTTKillfocusFnc);
	m_wndCHUPDTT.SetEvent(WE_CHECKVALUE, _OnCHUPDTTCheckValueFnc);
	//m_wndCHUPS.SetEvent(WE_CHANGE, _OnCHUPSChangeFnc);
	//m_wndCHUPS.SetEvent(WE_SETFOCUS, _OnCHUPSSetfocusFnc);
	//m_wndCHUPS.SetEvent(WE_KILLFOCUS, _OnCHUPSKillfocusFnc);
	m_wndCHUPS.SetEvent(WE_CHECKVALUE, _OnCHUPSCheckValueFnc);
	//m_wndCHUPSTT.SetEvent(WE_CHANGE, _OnCHUPSTTChangeFnc);
	//m_wndCHUPSTT.SetEvent(WE_SETFOCUS, _OnCHUPSTTSetfocusFnc);
	//m_wndCHUPSTT.SetEvent(WE_KILLFOCUS, _OnCHUPSTTKillfocusFnc);
	m_wndCHUPSTT.SetEvent(WE_CHECKVALUE, _OnCHUPSTTCheckValueFnc);
	//m_wndCHUPSCC.SetEvent(WE_CHANGE, _OnCHUPSCCChangeFnc);
	//m_wndCHUPSCC.SetEvent(WE_SETFOCUS, _OnCHUPSCCSetfocusFnc);
	//m_wndCHUPSCC.SetEvent(WE_KILLFOCUS, _OnCHUPSCCKillfocusFnc);
	m_wndCHUPSCC.SetEvent(WE_CHECKVALUE, _OnCHUPSCCCheckValueFnc);
	//m_wndDG.SetEvent(WE_CHANGE, _OnDGChangeFnc);
	//m_wndDG.SetEvent(WE_SETFOCUS, _OnDGSetfocusFnc);
	//m_wndDG.SetEvent(WE_KILLFOCUS, _OnDGKillfocusFnc);
	m_wndDG.SetEvent(WE_CHECKVALUE, _OnDGCheckValueFnc);
	//m_wndOC.SetEvent(WE_CHANGE, _OnOCChangeFnc);
	//m_wndOC.SetEvent(WE_SETFOCUS, _OnOCSetfocusFnc);
	//m_wndOC.SetEvent(WE_KILLFOCUS, _OnOCKillfocusFnc);
	m_wndOC.SetEvent(WE_CHECKVALUE, _OnOCCheckValueFnc);
	//m_wndBR.SetEvent(WE_CHANGE, _OnBRChangeFnc);
	//m_wndBR.SetEvent(WE_SETFOCUS, _OnBRSetfocusFnc);
	//m_wndBR.SetEvent(WE_KILLFOCUS, _OnBRKillfocusFnc);
	m_wndBR.SetEvent(WE_CHECKVALUE, _OnBRCheckValueFnc);
	//m_wndXpos.SetEvent(WE_CHANGE, _OnXposChangeFnc);
	//m_wndXpos.SetEvent(WE_SETFOCUS, _OnXposSetfocusFnc);
	//m_wndXpos.SetEvent(WE_KILLFOCUS, _OnXposKillfocusFnc);
	m_wndXpos.SetEvent(WE_CHECKVALUE, _OnXposCheckValueFnc);
	//m_wndVA.SetEvent(WE_CHANGE, _OnVAChangeFnc);
	//m_wndVA.SetEvent(WE_SETFOCUS, _OnVASetfocusFnc);
	//m_wndVA.SetEvent(WE_KILLFOCUS, _OnVAKillfocusFnc);
	m_wndVA.SetEvent(WE_CHECKVALUE, _OnVACheckValueFnc);
	//m_wndMCL.SetEvent(WE_CHANGE, _OnMCLChangeFnc);
	//m_wndMCL.SetEvent(WE_SETFOCUS, _OnMCLSetfocusFnc);
	//m_wndMCL.SetEvent(WE_KILLFOCUS, _OnMCLKillfocusFnc);
	m_wndMCL.SetEvent(WE_CHECKVALUE, _OnMCLCheckValueFnc);
	//m_wndGCC.SetEvent(WE_CHANGE, _OnGCCChangeFnc);
	//m_wndGCC.SetEvent(WE_SETFOCUS, _OnGCCSetfocusFnc);
	//m_wndGCC.SetEvent(WE_KILLFOCUS, _OnGCCKillfocusFnc);
	m_wndGCC.SetEvent(WE_CHECKVALUE, _OnGCCCheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	GetDataToScreen();

}
void CHMSCuredTreatmentDlg::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndDocNo.GetDlgCtrlID(), m_nDocNo);
	DDX_Text(pDX, m_wndID.GetDlgCtrlID(), m_nID);
	DDX_TextEx(pDX, m_wndEnterDate.GetDlgCtrlID(), m_szEnterDate);
	DDX_Text(pDX, m_wndExtraction.GetDlgCtrlID(), m_nExtraction);
	DDX_Text(pDX, m_wndS3.GetDlgCtrlID(), m_nS3);
	DDX_Text(pDX, m_wndT2.GetDlgCtrlID(), m_nT2);
	DDX_Text(pDX, m_wndT3.GetDlgCtrlID(), m_nT3);
	DDX_Text(pDX, m_wndCR.GetDlgCtrlID(), m_nCR);
	DDX_Text(pDX, m_wndTM.GetDlgCtrlID(), m_nTM);
	DDX_Text(pDX, m_wndVQR.GetDlgCtrlID(), m_nVQR);
	DDX_Text(pDX, m_wndB.GetDlgCtrlID(), m_nB);
	DDX_Text(pDX, m_wndCC.GetDlgCtrlID(), m_nCC);
	DDX_Text(pDX, m_wndIM.GetDlgCtrlID(), m_nIM);
	DDX_Text(pDX, m_wndR8.GetDlgCtrlID(), m_nR8);
	DDX_Text(pDX, m_wndHT.GetDlgCtrlID(), m_nHT);
	DDX_Text(pDX, m_wndHK.GetDlgCtrlID(), m_nHK);
	DDX_Text(pDX, m_wndHKT.GetDlgCtrlID(), m_nHKT);
	DDX_Text(pDX, m_wndND.GetDlgCtrlID(), m_nND);
	DDX_Text(pDX, m_wndHKMND.GetDlgCtrlID(), m_nHKMND);
	DDX_Text(pDX, m_wndCAUN.GetDlgCtrlID(), m_nCAUN);
	DDX_Text(pDX, m_wndCAUD.GetDlgCtrlID(), m_nCAUD);
	DDX_Text(pDX, m_wndCAUDTT.GetDlgCtrlID(), m_nCAUDTT);
	DDX_Text(pDX, m_wndCAUS.GetDlgCtrlID(), m_nCAUS);
	DDX_Text(pDX, m_wndCAUSTT.GetDlgCtrlID(), m_nCAUSTT);
	DDX_Text(pDX, m_wndCAUSCC.GetDlgCtrlID(), m_nCAUSCC);
	DDX_Text(pDX, m_wndPIVON.GetDlgCtrlID(), m_nPIVON);
	DDX_Text(pDX, m_wndPIVOD.GetDlgCtrlID(), m_nPIVOD);
	DDX_Text(pDX, m_wndPIVODTT.GetDlgCtrlID(), m_nPIVODTT);
	DDX_Text(pDX, m_wndPIVOS.GetDlgCtrlID(), m_nPIVOS);
	DDX_Text(pDX, m_wndPIVOSTT.GetDlgCtrlID(), m_nPIVOSTT);
	DDX_Text(pDX, m_wndPIVOSCC.GetDlgCtrlID(), m_nPIVOSCC);
	DDX_Text(pDX, m_wndCHUPN.GetDlgCtrlID(), m_nCHUPN);
	DDX_Text(pDX, m_wndCHUPD.GetDlgCtrlID(), m_nCHUPD);
	DDX_Text(pDX, m_wndCHUPDTT.GetDlgCtrlID(), m_nCHUPDTT);
	DDX_Text(pDX, m_wndCHUPS.GetDlgCtrlID(), m_nCHUPS);
	DDX_Text(pDX, m_wndCHUPSTT.GetDlgCtrlID(), m_nCHUPSTT);
	DDX_Text(pDX, m_wndCHUPSCC.GetDlgCtrlID(), m_nCHUPSCC);
	DDX_Text(pDX, m_wndDG.GetDlgCtrlID(), m_nDG);
	DDX_Text(pDX, m_wndOC.GetDlgCtrlID(), m_nOC);
	DDX_Text(pDX, m_wndBR.GetDlgCtrlID(), m_nBR);
	DDX_Text(pDX, m_wndXpos.GetDlgCtrlID(), m_nXpos);
	DDX_Text(pDX, m_wndVA.GetDlgCtrlID(), m_nVA);
	DDX_Text(pDX, m_wndMCL.GetDlgCtrlID(), m_nMCL);
	DDX_Text(pDX, m_wndGCC.GetDlgCtrlID(), m_nGCC);

}
void CHMSCuredTreatmentDlg::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_curedtreatment WHERE hct_docno = %d AND hct_idx = %d"), m_nDocNo, m_nID);
	rs.ExecSQL(szSQL);
	if(!rs.IsEOF())
	{
		m_nDocNo;
		m_nID;
		m_szEnterDate;

		m_nExtraction = ToLong(rs.GetValue(_T("hct_extraction")));
		m_nS3 = ToLong(rs.GetValue(_T("hct_s3")));
		m_nT2 = ToLong(rs.GetValue(_T("hct_t2")));
		m_nT3 = ToLong(rs.GetValue(_T("hct_t3")));
		m_nTM = ToLong(rs.GetValue(_T("hct_tm")));
		m_nCR = ToLong(rs.GetValue(_T("hct_cr")));
		m_nVQR = ToLong(rs.GetValue(_T("hct_vqr")));
		m_nB = ToLong(rs.GetValue(_T("hct_b")));
		m_nCC = ToLong(rs.GetValue(_T("hct_cc")));
		m_nIM = ToLong(rs.GetValue(_T("hct_im")));
		m_nR8 = ToLong(rs.GetValue(_T("hct_r8")));

		m_nHT = ToLong(rs.GetValue(_T("hct_ht")));
		m_nHK = ToLong(rs.GetValue(_T("hct_hk")));
		m_nHKT = ToLong(rs.GetValue(_T("hct_hkt")));
		m_nND = ToLong(rs.GetValue(_T("hct_nd")));
		m_nHKMND = ToLong(rs.GetValue(_T("hct_hkmnd")));

		m_nCAUN = ToLong(rs.GetValue(_T("hct_cau_n")));
		m_nCAUD = ToLong(rs.GetValue(_T("hct_cau_d")));
		m_nCAUDTT = ToLong(rs.GetValue(_T("hct_cau_dtt")));
		m_nCAUS = ToLong(rs.GetValue(_T("hct_cau_s")));
		m_nCAUSTT = ToLong(rs.GetValue(_T("hct_cau_stt")));
		m_nCAUSCC = ToLong(rs.GetValue(_T("hct_cau_scc")));

		m_nPIVON = ToLong(rs.GetValue(_T("hct_pivo_n")));
		m_nPIVOD = ToLong(rs.GetValue(_T("hct_pivo_d")));
		m_nPIVODTT = ToLong(rs.GetValue(_T("hct_pivo_dtt")));
		m_nPIVOS = ToLong(rs.GetValue(_T("hct_pivo_s")));
		m_nPIVOSTT = ToLong(rs.GetValue(_T("hct_pivo_stt")));
		m_nPIVOSCC = ToLong(rs.GetValue(_T("hct_pivo_scc")));

		m_nCHUPN = ToLong(rs.GetValue(_T("hct_chup_n")));
		m_nCHUPD = ToLong(rs.GetValue(_T("hct_chup_d")));
		m_nCHUPDTT = ToLong(rs.GetValue(_T("hct_chup_dtt")));
		m_nCHUPS = ToLong(rs.GetValue(_T("hct_chup_s")));
		m_nCHUPSTT = ToLong(rs.GetValue(_T("hct_chup_stt")));
		m_nCHUPSCC = ToLong(rs.GetValue(_T("hct_chup_scc")));

		m_nDG = ToLong(rs.GetValue(_T("hct_dg")));
		m_nOC = ToLong(rs.GetValue(_T("hct_oc")));
		m_nBR = ToLong(rs.GetValue(_T("hct_br")));

		m_nXpos = ToLong(rs.GetValue(_T("hct_xpos")));
		m_nVA = ToLong(rs.GetValue(_T("hct_va")));
		m_nMCL = ToLong(rs.GetValue(_T("hct_mcl")));	
		m_nGCC = ToLong(rs.GetValue(_T("hct_gcc")));

		SetMode(VM_EDIT);
	}
	else
		SetMode(VM_ADD);
}
void CHMSCuredTreatmentDlg::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_tbl_cured.SetValue(_T("hct_createdby"), pMF->GetCurrentUser());
	m_tbl_cured.SetValue(_T("hct_createddate"), pMF->GetSysDateTime());
	m_tbl_cured.SetValue(_T("hct_updatedby"), pMF->GetCurrentUser());
	m_tbl_cured.SetValue(_T("hct_updateddate"), pMF->GetSysDateTime());

	m_tbl_cured.SetValue(_T("hct_docno"), m_nDocNo);
	m_tbl_cured.SetValue(_T("hct_idx"), m_nID);
	m_tbl_cured.SetValue(_T("hct_date"), m_szEnterDate);

	m_tbl_cured.SetValue(_T("hct_extraction"), m_nExtraction);
	m_tbl_cured.SetValue(_T("hct_s3"), m_nS3);
	m_tbl_cured.SetValue(_T("hct_t2"), m_nT2);
	m_tbl_cured.SetValue(_T("hct_t3"), m_nT3);
	m_tbl_cured.SetValue(_T("hct_tm"), m_nTM);
	m_tbl_cured.SetValue(_T("hct_cr"), m_nCR);
	m_tbl_cured.SetValue(_T("hct_vqr"), m_nVQR);
	m_tbl_cured.SetValue(_T("hct_b"), m_nB);
	m_tbl_cured.SetValue(_T("hct_cc"), m_nCC);
	m_tbl_cured.SetValue(_T("hct_im"), m_nIM);
	m_tbl_cured.SetValue(_T("hct_r8"), m_nR8);

	m_tbl_cured.SetValue(_T("hct_ht"), m_nHT);
	m_tbl_cured.SetValue(_T("hct_hk"), m_nHK);
	m_tbl_cured.SetValue(_T("hct_hkt"), m_nHKT);
	m_tbl_cured.SetValue(_T("hct_nd"), m_nND);
	m_tbl_cured.SetValue(_T("hct_hkmnd"), m_nHKMND);

	m_tbl_cured.SetValue(_T("hct_cau_n"), m_nCAUN);
	m_tbl_cured.SetValue(_T("hct_cau_d"), m_nCAUD);
	m_tbl_cured.SetValue(_T("hct_cau_dtt"), m_nCAUDTT);
	m_tbl_cured.SetValue(_T("hct_cau_s"), m_nCAUS);
	m_tbl_cured.SetValue(_T("hct_cau_stt"), m_nCAUSTT);
	m_tbl_cured.SetValue(_T("hct_cau_scc"), m_nCAUSCC);

	m_tbl_cured.SetValue(_T("hct_pivo_n"), m_nPIVON);
	m_tbl_cured.SetValue(_T("hct_pivo_d"), m_nPIVOD);
	m_tbl_cured.SetValue(_T("hct_pivo_dtt"), m_nPIVODTT);
	m_tbl_cured.SetValue(_T("hct_pivo_s"), m_nPIVOS);
	m_tbl_cured.SetValue(_T("hct_pivo_stt"), m_nPIVOSTT);
	m_tbl_cured.SetValue(_T("hct_pivo_scc"), m_nPIVOSCC);

	m_tbl_cured.SetValue(_T("hct_chup_n"), m_nCHUPN);
	m_tbl_cured.SetValue(_T("hct_chup_d"), m_nCHUPD);
	m_tbl_cured.SetValue(_T("hct_chup_dtt"), m_nCHUPDTT);
	m_tbl_cured.SetValue(_T("hct_chup_s"), m_nCHUPS);
	m_tbl_cured.SetValue(_T("hct_chup_stt"), m_nCHUPSTT);
	m_tbl_cured.SetValue(_T("hct_chup_scc"), m_nCHUPSCC);

	m_tbl_cured.SetValue(_T("hct_dg"), m_nDG);
	m_tbl_cured.SetValue(_T("hct_oc"), m_nOC);
	m_tbl_cured.SetValue(_T("hct_br"), m_nBR);

	m_tbl_cured.SetValue(_T("hct_xpos"), m_nXpos);
	m_tbl_cured.SetValue(_T("hct_va"), m_nVA);
	m_tbl_cured.SetValue(_T("hct_mcl"), m_nMCL);
	m_tbl_cured.SetValue(_T("hct_gcc"), m_nGCC);
	
}
void CHMSCuredTreatmentDlg::SetDefaultValues(){

	m_nExtraction=0;
	m_nS3=0;
	m_nT2=0;
	m_nT3=0;
	m_nCR=0;
	m_nTM=0;
	m_nVQR=0;
	m_nB=0;
	m_nCC=0;
	m_nIM=0;
	m_nR8=0;
	m_nHT=0;
	m_nHK=0;
	m_nHKT=0;
	m_nND=0;
	m_nHKMND=0;
	m_nCAUN=0;
	m_nCAUD=0;
	m_nCAUDTT=0;
	m_nCAUS=0;
	m_nCAUSTT=0;
	m_nCAUSCC=0;
	m_nPIVON=0;
	m_nPIVOD=0;
	m_nPIVODTT=0;
	m_nPIVOS=0;
	m_nPIVOSTT=0;
	m_nPIVOSCC=0;
	m_nCHUPN=0;
	m_nCHUPD=0;
	m_nCHUPDTT=0;
	m_nCHUPS=0;
	m_nCHUPSTT=0;
	m_nCHUPSCC=0;
	m_nDG=0;
	m_nOC=0;
	m_nBR=0;
	m_nXpos=0;
	m_nVA=0;
	m_nMCL=0;
	m_nGCC=0;

}
int CHMSCuredTreatmentDlg::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 0, 1, -1);
			m_wndExtraction.SetFocus();
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 1, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
/*void CHMSCuredTreatmentDlg::OnDocNoChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnDocNoSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnDocNoKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnDocNoCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnIDChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnIDSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnIDKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnIDCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnEnterDateChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnEnterDateSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnEnterDateKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnEnterDateCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnExtractionChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnExtractionSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnExtractionKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnExtractionCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnS3Change(){
	
} */
/*void CHMSCuredTreatmentDlg::OnS3Setfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnS3Killfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnS3CheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnT2Change(){
	
} */
/*void CHMSCuredTreatmentDlg::OnT2Setfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnT2Killfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnT2CheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnT3Change(){
	
} */
/*void CHMSCuredTreatmentDlg::OnT3Setfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnT3Killfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnT3CheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCRChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCRSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCRKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCRCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnTMChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnTMSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnTMKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnTMCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnVQRChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnVQRSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnVQRKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnVQRCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnBChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnBSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnBKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnBCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCCChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCCSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCCKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCCCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnIMChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnIMSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnIMKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnIMCheckValue(){
	return 0;
}
/*void CHMSCuredTreatmentDlg::OnR8Change(){
	
} */
/*void CHMSCuredTreatmentDlg::OnR8Setfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnR8Killfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnR8CheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnHTChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnHTSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnHTKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnHTCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnHKChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnHKSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnHKKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnHKCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnHKTChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnHKTSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnHKTKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnHKTCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnNDChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnNDSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnNDKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnNDCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnHKMNDChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnHKMNDSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnHKMNDKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnHKMNDCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCAUNChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUNSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUNKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCAUNCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCAUDChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUDSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUDKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCAUDCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCAUDTTChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUDTTSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUDTTKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCAUDTTCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCAUSChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUSSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUSKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCAUSCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCAUSTTChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUSTTSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUSTTKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCAUSTTCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCAUSCCChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUSCCSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCAUSCCKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCAUSCCCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnPIVONChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVONSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVONKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnPIVONCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnPIVODChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVODSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVODKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnPIVODCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnPIVODTTChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVODTTSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVODTTKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnPIVODTTCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnPIVOSChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVOSSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVOSKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnPIVOSCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnPIVOSTTChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVOSTTSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVOSTTKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnPIVOSTTCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnPIVOSCCChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVOSCCSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnPIVOSCCKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnPIVOSCCCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCHUPNChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPNSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPNKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCHUPNCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCHUPDChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPDSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPDKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCHUPDCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCHUPDTTChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPDTTSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPDTTKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCHUPDTTCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCHUPSChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPSSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPSKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCHUPSCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCHUPSTTChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPSTTSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPSTTKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCHUPSTTCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnCHUPSCCChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPSCCSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnCHUPSCCKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnCHUPSCCCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnDGChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnDGSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnDGKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnDGCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnOCChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnOCSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnOCKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnOCCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnBRChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnBRSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnBRKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnBRCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnXposChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnXposSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnXposKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnXposCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnVAChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnVASetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnVAKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnVACheckValue(){
	return 0;
}
/*void CHMSCuredTreatmentDlg::OnMCLChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnMCLSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnMCLKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnMCLCheckValue(){
	return 0;
} 
/*void CHMSCuredTreatmentDlg::OnGCCChange(){
	
} */
/*void CHMSCuredTreatmentDlg::OnGCCSetfocus(){
	
} */
/*void CHMSCuredTreatmentDlg::OnGCCKillfocus(){
	
} */
int CHMSCuredTreatmentDlg::OnGCCCheckValue(){
	return 0;
} 
void CHMSCuredTreatmentDlg::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSCuredTreatmentDlg();
} 
void CHMSCuredTreatmentDlg::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSCuredTreatmentDlg::OnAddHMSCuredTreatmentDlg(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSCuredTreatmentDlg::OnEditHMSCuredTreatmentDlg(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSCuredTreatmentDlg::OnDeleteHMSCuredTreatmentDlg(){
//  	if(GetMode() != VM_VIEW)
//  		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
//  	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
//  		return -1;
 	szSQL.Format(_T("DELETE FROM hms_curedtreatment WHERE hct_docno = %ld AND hct_idx = %ld"), m_nDocNo, m_nID);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		CGuiDialog::OnOK();
 	}
	return 0;
}
int CHMSCuredTreatmentDlg::OnSaveHMSCuredTreatmentDlg(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		szSQL = m_tbl_cured.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
		szWhere.Format(_T(" WHERE hct_docno = %d AND hct_idx = %d"), m_nDocNo, m_nID);
		szSQL = m_tbl_cured.GetUpdateSQL(_T("hct_createdby,hct_createddate, hct_docno, hct_idx"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		CGuiDialog::OnOK();
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSCuredTreatmentDlg::OnCancelHMSCuredTreatmentDlg(){
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
int CHMSCuredTreatmentDlg::OnHMSCuredTreatmentDlgListLoadData(){
	return 0;
}
