#include "HMS_OBADTPhoiTacNghenManTinh.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnLanKhamChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnLanKhamChange();
} */
/*static void _OnLanKhamSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnLanKhamSetfocus();} */ 
/*static void _OnLanKhamKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnLanKhamKillfocus();
} */
static int _OnLanKhamCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnLanKhamCheckValue();
} 
/*static void _OnNamChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnNamChange();
} */
/*static void _OnNamSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnNamSetfocus();} */ 
/*static void _OnNamKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnNamKillfocus();
} */
static int _OnNamCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnNamCheckValue();
} 
/*static void _OnHoVaTenChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHoVaTenChange();
} */
/*static void _OnHoVaTenSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHoVaTenSetfocus();} */ 
/*static void _OnHoVaTenKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHoVaTenKillfocus();
} */
static int _OnHoVaTenCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHoVaTenCheckValue();
} 
/*static void _OnTuoiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTuoiChange();
} */
/*static void _OnTuoiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTuoiSetfocus();} */ 
/*static void _OnTuoiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTuoiKillfocus();
} */
static int _OnTuoiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTuoiCheckValue();
} 
/*static void _OnHutThuocLaChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHutThuocLaChange();
} */
/*static void _OnHutThuocLaSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHutThuocLaSetfocus();} */ 
/*static void _OnHutThuocLaKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHutThuocLaKillfocus();
} */
static int _OnHutThuocLaCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHutThuocLaCheckValue();
} 
/*static void _OnBenhKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnBenhKhacChange();
} */
/*static void _OnBenhKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnBenhKhacSetfocus();} */ 
/*static void _OnBenhKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnBenhKhacKillfocus();
} */
static int _OnBenhKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnBenhKhacCheckValue();
} 
/*static void _OnSotChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnSotChange();
} */
/*static void _OnSotSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnSotSetfocus();} */ 
/*static void _OnSotKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnSotKillfocus();
} */
static int _OnSotCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnSotCheckValue();
} 
static void _OnHoKhanSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnHoKhanSelect();
}
static void _OnHoDomSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnHoDomSelect();
}
static void _OnTucNgucSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnTucNgucSelect();
}
static void _OnKhoThoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnKhoThoSelect();
}
/*static void _OnTrieuChungKhac2ChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTrieuChungKhac2Change();
} */
/*static void _OnTrieuChungKhac2SetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTrieuChungKhac2Setfocus();} */ 
/*static void _OnTrieuChungKhac2KillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTrieuChungKhac2Killfocus();
} */
static int _OnTrieuChungKhac2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTrieuChungKhac2CheckValue();
} 
static void _OnDaNiemMacHongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnDaNiemMacHongSelect();
}
static void _OnTimTaiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnTimTaiSelect();
}
static void _OnPhuSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnPhuSelect();
}
/*static void _OnMachChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnMachChange();
} */
/*static void _OnMachSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnMachSetfocus();} */ 
/*static void _OnMachKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnMachKillfocus();
} */
static int _OnMachCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnMachCheckValue();
} 
/*static void _OnHAChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHAChange();
} */
/*static void _OnHASetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHASetfocus();} */ 
/*static void _OnHAKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHAKillfocus();
} */
static int _OnHACheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHACheckValue();
} 
/*static void _OnTanSoTimChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTanSoTimChange();
} */
/*static void _OnTanSoTimSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTanSoTimSetfocus();} */ 
/*static void _OnTanSoTimKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTanSoTimKillfocus();
} */
static int _OnTanSoTimCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTanSoTimCheckValue();
} 
/*static void _OnRRFNPhaiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnRRFNPhaiChange();
} */
/*static void _OnRRFNPhaiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnRRFNPhaiSetfocus();} */ 
/*static void _OnRRFNPhaiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnRRFNPhaiKillfocus();
} */
static int _OnRRFNPhaiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnRRFNPhaiCheckValue();
} 
/*static void _OnRRFNTraiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnRRFNTraiChange();
} */
/*static void _OnRRFNTraiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnRRFNTraiSetfocus();} */ 
/*static void _OnRRFNTraiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnRRFNTraiKillfocus();
} */
static int _OnRRFNTraiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnRRFNTraiCheckValue();
} 
/*static void _OnTiengRalesPhoiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTiengRalesPhoiChange();
} */
/*static void _OnTiengRalesPhoiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTiengRalesPhoiSetfocus();} */ 
/*static void _OnTiengRalesPhoiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTiengRalesPhoiKillfocus();
} */
static int _OnTiengRalesPhoiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTiengRalesPhoiCheckValue();
} 
/*static void _OnViTriChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnViTriChange();
} */
/*static void _OnViTriSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnViTriSetfocus();} */ 
/*static void _OnViTriKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnViTriKillfocus();
} */
static int _OnViTriCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnViTriCheckValue();
} 
/*static void _OnTrieuChungKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTrieuChungKhacChange();
} */
/*static void _OnTrieuChungKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTrieuChungKhacSetfocus();} */ 
/*static void _OnTrieuChungKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTrieuChungKhacKillfocus();
} */
static int _OnTrieuChungKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTrieuChungKhacCheckValue();
} 
/*static void _OnBCChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnBCChange();
} */
/*static void _OnBCSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnBCSetfocus();} */ 
/*static void _OnBCKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnBCKillfocus();
} */
static int _OnBCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnBCCheckValue();
} 
/*static void _OnGranChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnGranChange();
} */
/*static void _OnGranSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnGranSetfocus();} */ 
/*static void _OnGranKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnGranKillfocus();
} */
static int _OnGranCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnGranCheckValue();
} 
/*static void _OnHCChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHCChange();
} */
/*static void _OnHCSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHCSetfocus();} */ 
/*static void _OnHCKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHCKillfocus();
} */
static int _OnHCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHCCheckValue();
} 
/*static void _OnHSTChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHSTChange();
} */
/*static void _OnHSTSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHSTSetfocus();} */ 
/*static void _OnHSTKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHSTKillfocus();
} */
static int _OnHSTCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnHSTCheckValue();
} 
/*static void _OnTCChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTCChange();
} */
/*static void _OnTCSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTCSetfocus();} */ 
/*static void _OnTCKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTCKillfocus();
} */
static int _OnTCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnTCCheckValue();
} 
/*static void _OnGlucoseChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnGlucoseChange();
} */
/*static void _OnGlucoseSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnGlucoseSetfocus();} */ 
/*static void _OnGlucoseKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnGlucoseKillfocus();
} */
static int _OnGlucoseCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnGlucoseCheckValue();
} 
/*static void _OnUreCreChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnUreCreChange();
} */
/*static void _OnUreCreSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnUreCreSetfocus();} */ 
/*static void _OnUreCreKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnUreCreKillfocus();
} */
static int _OnUreCreCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnUreCreCheckValue();
} 
/*static void _OnOTPTChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnOTPTChange();
} */
/*static void _OnOTPTSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnOTPTSetfocus();} */ 
/*static void _OnOTPTKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnOTPTKillfocus();
} */
static int _OnOTPTCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnOTPTCheckValue();
} 
/*static void _OnVCChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnVCChange();
} */
/*static void _OnVCSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnVCSetfocus();} */ 
/*static void _OnVCKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnVCKillfocus();
} */
static int _OnVCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnVCCheckValue();
} 
/*static void _OnFEV1ChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnFEV1Change();
} */
/*static void _OnFEV1SetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnFEV1Setfocus();} */ 
/*static void _OnFEV1KillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnFEV1Killfocus();
} */
static int _OnFEV1CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnFEV1CheckValue();
} 
/*static void _OnFEV1FVCChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnFEV1FVCChange();
} */
/*static void _OnFEV1FVCSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnFEV1FVCSetfocus();} */ 
/*static void _OnFEV1FVCKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnFEV1FVCKillfocus();
} */
static int _OnFEV1FVCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnFEV1FVCCheckValue();
} 
/*static void _OnXQPhoiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnXQPhoiChange();
} */
/*static void _OnXQPhoiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnXQPhoiSetfocus();} */ 
/*static void _OnXQPhoiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnXQPhoiKillfocus();
} */
static int _OnXQPhoiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnXQPhoiCheckValue();
} 
/*static void _OnXNKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnXNKhacChange();
} */
/*static void _OnXNKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnXNKhacSetfocus();} */ 
/*static void _OnXNKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnXNKhacKillfocus();
} */
static int _OnXNKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTPhoiTacNghenManTinh *)pWnd)->OnXNKhacCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_OBADTPhoiTacNghenManTinh *pVw = (CHMS_OBADTPhoiTacNghenManTinh *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMS_OBADTPhoiTacNghenManTinh *pVw = (CHMS_OBADTPhoiTacNghenManTinh *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMS_OBADTPhoiTacNghenManTinh *pVw = (CHMS_OBADTPhoiTacNghenManTinh *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddHMS_OBADTPhoiTacNghenManTinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnAddHMS_OBADTPhoiTacNghenManTinh();
} 
static int _OnEditHMS_OBADTPhoiTacNghenManTinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnEditHMS_OBADTPhoiTacNghenManTinh();
} 
static int _OnDeleteHMS_OBADTPhoiTacNghenManTinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnDeleteHMS_OBADTPhoiTacNghenManTinh();
} 
static int _OnSaveHMS_OBADTPhoiTacNghenManTinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnSaveHMS_OBADTPhoiTacNghenManTinh();
} 
static int _OnCancelHMS_OBADTPhoiTacNghenManTinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTPhoiTacNghenManTinh*)pWnd)->OnCancelHMS_OBADTPhoiTacNghenManTinh();
} 
CHMS_OBADTPhoiTacNghenManTinh::CHMS_OBADTPhoiTacNghenManTinh(CWnd *pParent){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 1216;
	SetDefaultValues();
	m_szRecordType = _T("OBA_PHOITACNGHEN");
}
CHMS_OBADTPhoiTacNghenManTinh::~CHMS_OBADTPhoiTacNghenManTinh(){
}
void CHMS_OBADTPhoiTacNghenManTinh::OnCreateComponents(){
	m_wndTitle.Create(this, _T("\x42\x1EC6NH \xC1N \x110I\x1EC0U TR\x1ECA PH\x1ED4I T\x1EAE\x43 NGH\x1EBCN M\x1EA0N T\xCDNH"), 150, 5, 650, 30);
	m_wndLanKhamLabel.Create(this, _T("L\x1EA7n kh\xE1m"), 185, 35, 265, 60);
	m_wndLanKham.Create(this,270, 35, 350, 60); 
	m_wndNamLabel.Create(this, _T("N\x103m"), 355, 35, 435, 60);
	m_wndNam.Create(this,440, 35, 520, 60); 
	m_wndHoVaTenLabel.Create(this, _T("H\x1ECD v\xE0 t\xEAn"), 5, 65, 85, 90);
	m_wndHoVaTen.Create(this,90, 65, 650, 90); 
	m_wndTuoiLabel.Create(this, _T("N\x103m sinh"), 655, 65, 735, 90);
	m_wndTuoi.Create(this,740, 65, 785, 90); 
	m_wndTienSu.Create(this, _T("Ti\x1EC1n s\x1EED"), 5, 95, 85, 120);
	m_wndHutThuocLaLabel.Create(this, _T("H\xFAt thu\x1ED1\x63 l\xE1"), 90, 95, 190, 120);
	m_wndHutThuocLa.Create(this,195, 95, 275, 120); 
	m_wndSLThuocLa.Create(this, _T("Bao/N\x103m"), 280, 95, 360, 120);
	m_wndBenhKhacLabel.Create(this, _T("\x42\x1EC7nh kh\xE1\x63"), 90, 125, 190, 150);
	m_wndBenhKhac.Create(this,195, 125, 785, 150); 
	m_wndTrieuChungChuQuan.Create(this, _T("Tri\x1EC7u \x63h\x1EE9ng \x63h\x1EE7 qu\x61n"), 5, 155, 189, 180);
	m_wndSotLabel.Create(this, _T("S\x1ED1t"), 90, 185, 190, 210);
	m_wndSot.Create(this,195, 185, 245, 210); 
	m_wndHoKhan.Create(this, _T("Ho khan"), 282, 185, 382, 210);
	m_wndHoDom.Create(this, _T("Ho \x111\x1EDDm"), 387, 185, 487, 210);
	m_wndTucNguc.Create(this, _T("T\x1EE9\x63 ng\x1EF1\x63"), 492, 185, 592, 210);
	m_wndKhoTho.Create(this, _T("Kh\xF3 th\x1EDF"), 597, 185, 697, 210);
	m_wndTrieuChungKhac2Label.Create(this, _T("Tri\x1EC7u \x63h\x1EE9ng kh\xE1\x63"), 90, 215, 190, 240);
	m_wndTrieuChungKhac2.Create(this,195, 215, 785, 240); 
	m_wndKhamBenh.Create(this, _T("Kh\xE1m \x62\x1EC7nh"), 5, 244, 189, 269);
	m_wndDaNiemMacHong.Create(this, _T("\x44\x61 ni\xEAm m\x1EA1\x63 h\x1ED3ng"), 90, 274, 295, 299);
	m_wndTimTai.Create(this, _T("T\xEDm t\xE1i"), 300, 274, 380, 299);
	m_wndPhu.Create(this, _T("Ph\xF9"), 385, 274, 460, 299);
	m_wndMachLabel.Create(this, _T("M\x1EA1\x63h"), 465, 274, 525, 299);
	m_wndMach.Create(this,530, 274, 590, 299); 
	m_wndHALabel.Create(this, _T("HA"), 635, 273, 675, 298);
	m_wndHA.Create(this,680, 273, 740, 298); 
	m_wndTanSoTimLabel.Create(this, _T("T\x1EA7n s\x1ED1 tim"), 90, 304, 190, 329);
	m_wndTanSoTim.Create(this,195, 304, 295, 329); 
	m_wndRRFNPhaiLabel.Create(this, _T("RRFN ph\x1EA3i"), 385, 304, 525, 329);
	m_wndRRFNPhai.Create(this,530, 304, 590, 329); 
	m_wndTraiLabel.Create(this, _T("Tr\xE1i"), 595, 304, 675, 329);
	m_wndRRFNTrai.Create(this,680, 304, 796, 329); 
	m_wndTiengRalesPhoiLabel.Create(this, _T("Ti\x1EBFng r\x61l\x65s ph\x1ED5i"), 90, 334, 190, 359);
	m_wndTiengRalesPhoi.Create(this,195, 334, 380, 359); 
	m_wndViTriLabel.Create(this, _T("V\x1ECB tr\xED"), 385, 335, 525, 360);
	m_wndViTri.Create(this,529, 335, 795, 360); 
	m_wndTrieuChungKhacLabel.Create(this, _T("Tri\x1EC7u \x63h\x1EE9ng kh\xE1\x63"), 90, 364, 190, 389);
	m_wndTrieuChungKhac.Create(this,195, 364, 795, 389); 
	m_wndXetNghiem.Create(this, _T("\x58\xE9t nghi\x1EC7m"), 5, 394, 189, 419);
	m_wndBCLabel.Create(this, _T("BC"), 90, 424, 120, 449);
	m_wndBC.Create(this,125, 424, 190, 449); 
	m_wndGL.Create(this, _T("G/L"), 195, 424, 225, 449);
	m_wndGranLabel.Create(this, _T("Gran"), 230, 424, 270, 449);
	m_wndGran.Create(this,275, 424, 340, 449); 
	m_wndpercent.Create(this, _T("%"), 345, 424, 365, 449);
	m_wndHCLabel.Create(this, _T("HC"), 370, 424, 400, 449);
	m_wndHC.Create(this,405, 424, 470, 449); 
	m_wndGL2.Create(this, _T("G/L"), 475, 424, 505, 449);
	m_wndHSTLabel.Create(this, _T("HST"), 510, 424, 550, 449);
	m_wndHST.Create(this,555, 424, 620, 449); 
	m_wndGL3.Create(this, _T("G/L"), 625, 424, 655, 449);
	m_wndTCLabel.Create(this, _T("TC"), 660, 424, 690, 449);
	m_wndTC.Create(this,695, 424, 760, 449); 
	m_wndL.Create(this, _T("/L"), 765, 424, 785, 449);
	m_wndGlucoseLabel.Create(this, _T("Glucose"), 90, 454, 190, 479);
	m_wndGlucose.Create(this,195, 454, 270, 479); 
	m_wndMmolL.Create(this, _T("mmol/L"), 275, 454, 340, 479);
	m_wndUreCreLabel.Create(this, _T("Ure/Cre"), 345, 455, 400, 480);
	m_wndUreCre.Create(this,405, 455, 505, 480); 
	m_wndMmolL2.Create(this, _T("mmol/L"), 511, 454, 561, 479);
	m_wndOTPTLabel.Create(this, _T("OT/PT"), 565, 454, 620, 479);
	m_wndOTPT.Create(this,625, 454, 760, 479); 
	m_wndUL.Create(this, _T("U/L"), 764, 453, 789, 478);
	m_wndlp1.Create(this, _T("l/p"), 595, 274, 630, 299);
	m_wndlp2.Create(this, _T("l/p"), 300, 304, 380, 329);
	m_wndmmHg.Create(this, _T("mmHg"), 740, 273, 790, 298);
	m_wndDo.Create(this, _T("\x111\x1ED9"), 250, 185, 275, 210);
	m_wndVCLabel.Create(this, _T("VC"), 90, 485, 120, 510);
	m_wndVC.Create(this,125, 485, 190, 510); 
	m_wndpercent2.Create(this, _T("%"), 195, 485, 225, 510);
	m_wndFEV1Label.Create(this, _T("FEV1"), 230, 485, 270, 510);
	m_wndFEV1.Create(this,275, 485, 365, 510); 
	m_wndpercent3.Create(this, _T("%"), 372, 485, 402, 510);
	m_wndFEV1FVCLabel.Create(this, _T("FEV1/FVC"), 405, 485, 505, 510);
	m_wndFEV1FVC.Create(this,510, 485, 620, 510); 
	m_wndpercent4.Create(this, _T("%"), 625, 485, 655, 510);
	m_wndXQPhoiLabel.Create(this, _T("XQ ph\x1ED5i"), 90, 515, 190, 540);
	m_wndXQPhoi.Create(this,195, 515, 785, 540); 
	m_wndXNKhacLabel.Create(this, _T("XN Kh\xE1\x63"), 90, 545, 190, 570);
	m_wndXNKhac.Create(this,195, 545, 785, 570); 



}
void CHMS_OBADTPhoiTacNghenManTinh::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*m_wndLanKham.SetLimitText(35);
	m_wndLanKham.SetCheckValue(true);
	m_wndNam.SetLimitText(16);
	m_wndNam.SetCheckValue(true);
	m_wndHoVaTen.SetLimitText(35);
	m_wndHoVaTen.SetCheckValue(true);
	m_wndTuoi.SetLimitText(35);
	m_wndTuoi.SetCheckValue(true);
	m_wndHutThuocLa.SetLimitText(35);
	m_wndHutThuocLa.SetCheckValue(true);
	m_wndBenhKhac.SetLimitText(35);
	m_wndBenhKhac.SetCheckValue(true);
	m_wndSot.SetLimitText(35);
	m_wndSot.SetCheckValue(true);
	m_wndTrieuChungKhac2.SetLimitText(35);
	m_wndTrieuChungKhac2.SetCheckValue(true);
	m_wndMach.SetLimitText(35);
	m_wndMach.SetCheckValue(true);
	m_wndHA.SetLimitText(35);
	m_wndHA.SetCheckValue(true);
	m_wndTanSoTim.SetLimitText(35);
	m_wndTanSoTim.SetCheckValue(true);
	m_wndRRFNPhai.SetLimitText(35);
	m_wndRRFNPhai.SetCheckValue(true);
	m_wndRRFNTrai.SetLimitText(35);
	m_wndRRFNTrai.SetCheckValue(true);
	m_wndTiengRalesPhoi.SetLimitText(35);
	m_wndTiengRalesPhoi.SetCheckValue(true);
	m_wndViTri.SetLimitText(35);
	m_wndViTri.SetCheckValue(true);
	m_wndTrieuChungKhac.SetLimitText(35);
	m_wndTrieuChungKhac.SetCheckValue(true);
	m_wndBC.SetLimitText(35);
	m_wndBC.SetCheckValue(true);
	m_wndGran.SetLimitText(35);
	m_wndGran.SetCheckValue(true);
	m_wndHC.SetLimitText(35);
	m_wndHC.SetCheckValue(true);
	m_wndHST.SetLimitText(35);
	m_wndHST.SetCheckValue(true);
	m_wndTC.SetLimitText(35);
	m_wndTC.SetCheckValue(true);
	m_wndGlucose.SetLimitText(35);
	m_wndGlucose.SetCheckValue(true);
	m_wndUreCre.SetLimitText(35);
	m_wndUreCre.SetCheckValue(true);
	m_wndOTPT.SetLimitText(35);
	m_wndOTPT.SetCheckValue(true);
	m_wndVC.SetLimitText(35);
	m_wndVC.SetCheckValue(true);
	m_wndFEV1.SetLimitText(35);
	m_wndFEV1.SetCheckValue(true);
	m_wndFEV1FVC.SetLimitText(35);
	m_wndFEV1FVC.SetCheckValue(true);
	m_wndXQPhoi.SetLimitText(35);
	m_wndXQPhoi.SetCheckValue(true);
	m_wndXNKhac.SetLimitText(35);
	m_wndXNKhac.SetCheckValue(true);*/

}
void CHMS_OBADTPhoiTacNghenManTinh::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndLanKham.SetEvent(WE_CHANGE, _OnLanKhamChangeFnc);
	//m_wndLanKham.SetEvent(WE_SETFOCUS, _OnLanKhamSetfocusFnc);
	//m_wndLanKham.SetEvent(WE_KILLFOCUS, _OnLanKhamKillfocusFnc);
	m_wndLanKham.SetEvent(WE_CHECKVALUE, _OnLanKhamCheckValueFnc);
	//m_wndNam.SetEvent(WE_CHANGE, _OnNamChangeFnc);
	//m_wndNam.SetEvent(WE_SETFOCUS, _OnNamSetfocusFnc);
	//m_wndNam.SetEvent(WE_KILLFOCUS, _OnNamKillfocusFnc);
	m_wndNam.SetEvent(WE_CHECKVALUE, _OnNamCheckValueFnc);
	//m_wndHoVaTen.SetEvent(WE_CHANGE, _OnHoVaTenChangeFnc);
	//m_wndHoVaTen.SetEvent(WE_SETFOCUS, _OnHoVaTenSetfocusFnc);
	//m_wndHoVaTen.SetEvent(WE_KILLFOCUS, _OnHoVaTenKillfocusFnc);
	m_wndHoVaTen.SetEvent(WE_CHECKVALUE, _OnHoVaTenCheckValueFnc);
	//m_wndTuoi.SetEvent(WE_CHANGE, _OnTuoiChangeFnc);
	//m_wndTuoi.SetEvent(WE_SETFOCUS, _OnTuoiSetfocusFnc);
	//m_wndTuoi.SetEvent(WE_KILLFOCUS, _OnTuoiKillfocusFnc);
	m_wndTuoi.SetEvent(WE_CHECKVALUE, _OnTuoiCheckValueFnc);
	//m_wndHutThuocLa.SetEvent(WE_CHANGE, _OnHutThuocLaChangeFnc);
	//m_wndHutThuocLa.SetEvent(WE_SETFOCUS, _OnHutThuocLaSetfocusFnc);
	//m_wndHutThuocLa.SetEvent(WE_KILLFOCUS, _OnHutThuocLaKillfocusFnc);
	m_wndHutThuocLa.SetEvent(WE_CHECKVALUE, _OnHutThuocLaCheckValueFnc);
	//m_wndBenhKhac.SetEvent(WE_CHANGE, _OnBenhKhacChangeFnc);
	//m_wndBenhKhac.SetEvent(WE_SETFOCUS, _OnBenhKhacSetfocusFnc);
	//m_wndBenhKhac.SetEvent(WE_KILLFOCUS, _OnBenhKhacKillfocusFnc);
	m_wndBenhKhac.SetEvent(WE_CHECKVALUE, _OnBenhKhacCheckValueFnc);
	//m_wndSot.SetEvent(WE_CHANGE, _OnSotChangeFnc);
	//m_wndSot.SetEvent(WE_SETFOCUS, _OnSotSetfocusFnc);
	//m_wndSot.SetEvent(WE_KILLFOCUS, _OnSotKillfocusFnc);
	m_wndSot.SetEvent(WE_CHECKVALUE, _OnSotCheckValueFnc);
	m_wndHoKhan.SetEvent(WE_CLICK, _OnHoKhanSelectFnc);
	m_wndHoDom.SetEvent(WE_CLICK, _OnHoDomSelectFnc);
	m_wndTucNguc.SetEvent(WE_CLICK, _OnTucNgucSelectFnc);
	m_wndKhoTho.SetEvent(WE_CLICK, _OnKhoThoSelectFnc);
	//m_wndTrieuChungKhac2.SetEvent(WE_CHANGE, _OnTrieuChungKhac2ChangeFnc);
	//m_wndTrieuChungKhac2.SetEvent(WE_SETFOCUS, _OnTrieuChungKhac2SetfocusFnc);
	//m_wndTrieuChungKhac2.SetEvent(WE_KILLFOCUS, _OnTrieuChungKhac2KillfocusFnc);
	m_wndTrieuChungKhac2.SetEvent(WE_CHECKVALUE, _OnTrieuChungKhac2CheckValueFnc);
	m_wndDaNiemMacHong.SetEvent(WE_CLICK, _OnDaNiemMacHongSelectFnc);
	m_wndTimTai.SetEvent(WE_CLICK, _OnTimTaiSelectFnc);
	m_wndPhu.SetEvent(WE_CLICK, _OnPhuSelectFnc);
	//m_wndMach.SetEvent(WE_CHANGE, _OnMachChangeFnc);
	//m_wndMach.SetEvent(WE_SETFOCUS, _OnMachSetfocusFnc);
	//m_wndMach.SetEvent(WE_KILLFOCUS, _OnMachKillfocusFnc);
	m_wndMach.SetEvent(WE_CHECKVALUE, _OnMachCheckValueFnc);
	//m_wndHA.SetEvent(WE_CHANGE, _OnHAChangeFnc);
	//m_wndHA.SetEvent(WE_SETFOCUS, _OnHASetfocusFnc);
	//m_wndHA.SetEvent(WE_KILLFOCUS, _OnHAKillfocusFnc);
	m_wndHA.SetEvent(WE_CHECKVALUE, _OnHACheckValueFnc);
	//m_wndTanSoTim.SetEvent(WE_CHANGE, _OnTanSoTimChangeFnc);
	//m_wndTanSoTim.SetEvent(WE_SETFOCUS, _OnTanSoTimSetfocusFnc);
	//m_wndTanSoTim.SetEvent(WE_KILLFOCUS, _OnTanSoTimKillfocusFnc);
	m_wndTanSoTim.SetEvent(WE_CHECKVALUE, _OnTanSoTimCheckValueFnc);
	//m_wndRRFNPhai.SetEvent(WE_CHANGE, _OnRRFNPhaiChangeFnc);
	//m_wndRRFNPhai.SetEvent(WE_SETFOCUS, _OnRRFNPhaiSetfocusFnc);
	//m_wndRRFNPhai.SetEvent(WE_KILLFOCUS, _OnRRFNPhaiKillfocusFnc);
	m_wndRRFNPhai.SetEvent(WE_CHECKVALUE, _OnRRFNPhaiCheckValueFnc);
	//m_wndRRFNTrai.SetEvent(WE_CHANGE, _OnRRFNTraiChangeFnc);
	//m_wndRRFNTrai.SetEvent(WE_SETFOCUS, _OnRRFNTraiSetfocusFnc);
	//m_wndRRFNTrai.SetEvent(WE_KILLFOCUS, _OnRRFNTraiKillfocusFnc);
	m_wndRRFNTrai.SetEvent(WE_CHECKVALUE, _OnRRFNTraiCheckValueFnc);
	//m_wndTiengRalesPhoi.SetEvent(WE_CHANGE, _OnTiengRalesPhoiChangeFnc);
	//m_wndTiengRalesPhoi.SetEvent(WE_SETFOCUS, _OnTiengRalesPhoiSetfocusFnc);
	//m_wndTiengRalesPhoi.SetEvent(WE_KILLFOCUS, _OnTiengRalesPhoiKillfocusFnc);
	m_wndTiengRalesPhoi.SetEvent(WE_CHECKVALUE, _OnTiengRalesPhoiCheckValueFnc);
	//m_wndViTri.SetEvent(WE_CHANGE, _OnViTriChangeFnc);
	//m_wndViTri.SetEvent(WE_SETFOCUS, _OnViTriSetfocusFnc);
	//m_wndViTri.SetEvent(WE_KILLFOCUS, _OnViTriKillfocusFnc);
	m_wndViTri.SetEvent(WE_CHECKVALUE, _OnViTriCheckValueFnc);
	//m_wndTrieuChungKhac.SetEvent(WE_CHANGE, _OnTrieuChungKhacChangeFnc);
	//m_wndTrieuChungKhac.SetEvent(WE_SETFOCUS, _OnTrieuChungKhacSetfocusFnc);
	//m_wndTrieuChungKhac.SetEvent(WE_KILLFOCUS, _OnTrieuChungKhacKillfocusFnc);
	m_wndTrieuChungKhac.SetEvent(WE_CHECKVALUE, _OnTrieuChungKhacCheckValueFnc);
	//m_wndBC.SetEvent(WE_CHANGE, _OnBCChangeFnc);
	//m_wndBC.SetEvent(WE_SETFOCUS, _OnBCSetfocusFnc);
	//m_wndBC.SetEvent(WE_KILLFOCUS, _OnBCKillfocusFnc);
	m_wndBC.SetEvent(WE_CHECKVALUE, _OnBCCheckValueFnc);
	//m_wndGran.SetEvent(WE_CHANGE, _OnGranChangeFnc);
	//m_wndGran.SetEvent(WE_SETFOCUS, _OnGranSetfocusFnc);
	//m_wndGran.SetEvent(WE_KILLFOCUS, _OnGranKillfocusFnc);
	m_wndGran.SetEvent(WE_CHECKVALUE, _OnGranCheckValueFnc);
	//m_wndHC.SetEvent(WE_CHANGE, _OnHCChangeFnc);
	//m_wndHC.SetEvent(WE_SETFOCUS, _OnHCSetfocusFnc);
	//m_wndHC.SetEvent(WE_KILLFOCUS, _OnHCKillfocusFnc);
	m_wndHC.SetEvent(WE_CHECKVALUE, _OnHCCheckValueFnc);
	//m_wndHST.SetEvent(WE_CHANGE, _OnHSTChangeFnc);
	//m_wndHST.SetEvent(WE_SETFOCUS, _OnHSTSetfocusFnc);
	//m_wndHST.SetEvent(WE_KILLFOCUS, _OnHSTKillfocusFnc);
	m_wndHST.SetEvent(WE_CHECKVALUE, _OnHSTCheckValueFnc);
	//m_wndTC.SetEvent(WE_CHANGE, _OnTCChangeFnc);
	//m_wndTC.SetEvent(WE_SETFOCUS, _OnTCSetfocusFnc);
	//m_wndTC.SetEvent(WE_KILLFOCUS, _OnTCKillfocusFnc);
	m_wndTC.SetEvent(WE_CHECKVALUE, _OnTCCheckValueFnc);
	//m_wndGlucose.SetEvent(WE_CHANGE, _OnGlucoseChangeFnc);
	//m_wndGlucose.SetEvent(WE_SETFOCUS, _OnGlucoseSetfocusFnc);
	//m_wndGlucose.SetEvent(WE_KILLFOCUS, _OnGlucoseKillfocusFnc);
	m_wndGlucose.SetEvent(WE_CHECKVALUE, _OnGlucoseCheckValueFnc);
	//m_wndUreCre.SetEvent(WE_CHANGE, _OnUreCreChangeFnc);
	//m_wndUreCre.SetEvent(WE_SETFOCUS, _OnUreCreSetfocusFnc);
	//m_wndUreCre.SetEvent(WE_KILLFOCUS, _OnUreCreKillfocusFnc);
	m_wndUreCre.SetEvent(WE_CHECKVALUE, _OnUreCreCheckValueFnc);
	//m_wndOTPT.SetEvent(WE_CHANGE, _OnOTPTChangeFnc);
	//m_wndOTPT.SetEvent(WE_SETFOCUS, _OnOTPTSetfocusFnc);
	//m_wndOTPT.SetEvent(WE_KILLFOCUS, _OnOTPTKillfocusFnc);
	m_wndOTPT.SetEvent(WE_CHECKVALUE, _OnOTPTCheckValueFnc);
	//m_wndVC.SetEvent(WE_CHANGE, _OnVCChangeFnc);
	//m_wndVC.SetEvent(WE_SETFOCUS, _OnVCSetfocusFnc);
	//m_wndVC.SetEvent(WE_KILLFOCUS, _OnVCKillfocusFnc);
	m_wndVC.SetEvent(WE_CHECKVALUE, _OnVCCheckValueFnc);
	//m_wndFEV1.SetEvent(WE_CHANGE, _OnFEV1ChangeFnc);
	//m_wndFEV1.SetEvent(WE_SETFOCUS, _OnFEV1SetfocusFnc);
	//m_wndFEV1.SetEvent(WE_KILLFOCUS, _OnFEV1KillfocusFnc);
	m_wndFEV1.SetEvent(WE_CHECKVALUE, _OnFEV1CheckValueFnc);
	//m_wndFEV1FVC.SetEvent(WE_CHANGE, _OnFEV1FVCChangeFnc);
	//m_wndFEV1FVC.SetEvent(WE_SETFOCUS, _OnFEV1FVCSetfocusFnc);
	//m_wndFEV1FVC.SetEvent(WE_KILLFOCUS, _OnFEV1FVCKillfocusFnc);
	m_wndFEV1FVC.SetEvent(WE_CHECKVALUE, _OnFEV1FVCCheckValueFnc);
	//m_wndXQPhoi.SetEvent(WE_CHANGE, _OnXQPhoiChangeFnc);
	//m_wndXQPhoi.SetEvent(WE_SETFOCUS, _OnXQPhoiSetfocusFnc);
	//m_wndXQPhoi.SetEvent(WE_KILLFOCUS, _OnXQPhoiKillfocusFnc);
	m_wndXQPhoi.SetEvent(WE_CHECKVALUE, _OnXQPhoiCheckValueFnc);
	//m_wndXNKhac.SetEvent(WE_CHANGE, _OnXNKhacChangeFnc);
	//m_wndXNKhac.SetEvent(WE_SETFOCUS, _OnXNKhacSetfocusFnc);
	//m_wndXNKhac.SetEvent(WE_KILLFOCUS, _OnXNKhacKillfocusFnc);
	m_wndXNKhac.SetEvent(WE_CHECKVALUE, _OnXNKhacCheckValueFnc);
	
	
	GetDataToScreen();
	m_wndHoVaTen.EnableWindow(FALSE);
	m_wndTuoi.EnableWindow(FALSE);

	SetScrollSizes(MM_TEXT, CSize(700, 700));

}
void CHMS_OBADTPhoiTacNghenManTinh::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndLanKham.GetDlgCtrlID(), m_szLanKham);
	DDX_Text(pDX, m_wndNam.GetDlgCtrlID(), m_nNam);
	DDX_Text(pDX, m_wndHoVaTen.GetDlgCtrlID(), m_szHoVaTen);
	DDX_Text(pDX, m_wndTuoi.GetDlgCtrlID(), m_szTuoi);
	DDX_Text(pDX, m_wndHutThuocLa.GetDlgCtrlID(), m_szHutThuocLa);
	DDX_Text(pDX, m_wndBenhKhac.GetDlgCtrlID(), m_szBenhKhac);
	DDX_Text(pDX, m_wndSot.GetDlgCtrlID(), m_szSot);
	DDX_Check(pDX, m_wndHoKhan.GetDlgCtrlID(), m_bHoKhan);
	DDX_Check(pDX, m_wndHoDom.GetDlgCtrlID(), m_bHoDom);
	DDX_Check(pDX, m_wndTucNguc.GetDlgCtrlID(), m_bTucNguc);
	DDX_Check(pDX, m_wndKhoTho.GetDlgCtrlID(), m_bKhoTho);
	DDX_Text(pDX, m_wndTrieuChungKhac2.GetDlgCtrlID(), m_szTrieuChungKhac2);
	DDX_Check(pDX, m_wndDaNiemMacHong.GetDlgCtrlID(), m_bDaNiemMacHong);
	DDX_Check(pDX, m_wndTimTai.GetDlgCtrlID(), m_bTimTai);
	DDX_Check(pDX, m_wndPhu.GetDlgCtrlID(), m_bPhu);
	DDX_Text(pDX, m_wndMach.GetDlgCtrlID(), m_szMach);
	DDX_Text(pDX, m_wndHA.GetDlgCtrlID(), m_szHA);
	DDX_Text(pDX, m_wndTanSoTim.GetDlgCtrlID(), m_szTanSoTim);
	DDX_Text(pDX, m_wndRRFNPhai.GetDlgCtrlID(), m_szRRFNPhai);
	DDX_Text(pDX, m_wndRRFNTrai.GetDlgCtrlID(), m_szRRFNTrai);
	DDX_Text(pDX, m_wndTiengRalesPhoi.GetDlgCtrlID(), m_szTiengRalesPhoi);
	DDX_Text(pDX, m_wndViTri.GetDlgCtrlID(), m_szViTri);
	DDX_Text(pDX, m_wndTrieuChungKhac.GetDlgCtrlID(), m_szTrieuChungKhac);
	DDX_Text(pDX, m_wndBC.GetDlgCtrlID(), m_szBC);
	DDX_Text(pDX, m_wndGran.GetDlgCtrlID(), m_szGran);
	DDX_Text(pDX, m_wndHC.GetDlgCtrlID(), m_szHC);
	DDX_Text(pDX, m_wndHST.GetDlgCtrlID(), m_szHST);
	DDX_Text(pDX, m_wndTC.GetDlgCtrlID(), m_szTC);
	DDX_Text(pDX, m_wndGlucose.GetDlgCtrlID(), m_szGlucose);
	DDX_Text(pDX, m_wndUreCre.GetDlgCtrlID(), m_szUreCre);
	DDX_Text(pDX, m_wndOTPT.GetDlgCtrlID(), m_szOTPT);
	DDX_Text(pDX, m_wndVC.GetDlgCtrlID(), m_szVC);
	DDX_Text(pDX, m_wndFEV1.GetDlgCtrlID(), m_szFEV1);
	DDX_Text(pDX, m_wndFEV1FVC.GetDlgCtrlID(), m_szFEV1FVC);
	DDX_Text(pDX, m_wndXQPhoi.GetDlgCtrlID(), m_szXQPhoi);
	DDX_Text(pDX, m_wndXNKhac.GetDlgCtrlID(), m_szXNKhac);

}
void CHMS_OBADTPhoiTacNghenManTinh::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("LanKham")] =  m_szLanKham;
	m_jData[_T("Nam")] =  m_nNam;
	m_jData[_T("HoVaTen")] =  m_szHoVaTen;
	m_jData[_T("Tuoi")] =  m_szTuoi;
	m_jData[_T("HutThuocLa")] =  m_szHutThuocLa;
	m_jData[_T("BenhKhac")] =  m_szBenhKhac;
	m_jData[_T("Sot")] =  m_szSot;
	m_jData[_T("HoKhan")] =  m_bHoKhan;
	m_jData[_T("HoDom")] =  m_bHoDom;
	m_jData[_T("TucNguc")] =  m_bTucNguc;
	m_jData[_T("KhoTho")] =  m_bKhoTho;
	m_jData[_T("TrieuChungKhac2")] =  m_szTrieuChungKhac2;
	m_jData[_T("DaNiemMacHong")] =  m_bDaNiemMacHong;
	m_jData[_T("TimTai")] =  m_bTimTai;
	m_jData[_T("Phu")] =  m_bPhu;
	m_jData[_T("Mach")] =  m_szMach;
	m_jData[_T("HA")] =  m_szHA;
	m_jData[_T("TanSoTim")] =  m_szTanSoTim;
	m_jData[_T("RRFNPhai")] =  m_szRRFNPhai;
	m_jData[_T("RRFNTrai")] =  m_szRRFNTrai;
	m_jData[_T("TiengRalesPhoi")] =  m_szTiengRalesPhoi;
	m_jData[_T("ViTri")] =  m_szViTri;
	m_jData[_T("TrieuChungKhac")] =  m_szTrieuChungKhac;
	m_jData[_T("BC")] =  m_szBC;
	m_jData[_T("Gran")] =  m_szGran;
	m_jData[_T("HC")] =  m_szHC;
	m_jData[_T("HST")] =  m_szHST;
	m_jData[_T("TC")] =  m_szTC;
	m_jData[_T("Glucose")] =  m_szGlucose;
	m_jData[_T("UreCre")] =  m_szUreCre;
	m_jData[_T("OTPT")] =  m_szOTPT;
	m_jData[_T("VC")] =  m_szVC;
	m_jData[_T("FEV1")] =  m_szFEV1;
	m_jData[_T("FEV1FVC")] =  m_szFEV1FVC;
	m_jData[_T("XQPhoi")] =  m_szXQPhoi;
	m_jData[_T("XNKhac")] =  m_szXNKhac;
	}
	else
	{
			
	m_jData[_T("LanKham")].GetValue(m_szLanKham);
	m_jData[_T("Nam")].GetValue(m_nNam);
	m_jData[_T("HoVaTen")].GetValue(m_szHoVaTen);
	m_jData[_T("Tuoi")].GetValue(m_szTuoi);
	m_jData[_T("HutThuocLa")].GetValue(m_szHutThuocLa);
	m_jData[_T("BenhKhac")].GetValue(m_szBenhKhac);
	m_jData[_T("Sot")].GetValue(m_szSot);
	m_jData[_T("HoKhan")].GetValue(m_bHoKhan);
	m_jData[_T("HoDom")].GetValue(m_bHoDom);
	m_jData[_T("TucNguc")].GetValue(m_bTucNguc);
	m_jData[_T("KhoTho")].GetValue(m_bKhoTho);
	m_jData[_T("TrieuChungKhac2")].GetValue(m_szTrieuChungKhac2);
	m_jData[_T("DaNiemMacHong")].GetValue(m_bDaNiemMacHong);
	m_jData[_T("TimTai")].GetValue(m_bTimTai);
	m_jData[_T("Phu")].GetValue(m_bPhu);
	m_jData[_T("Mach")].GetValue(m_szMach);
	m_jData[_T("HA")].GetValue(m_szHA);
	m_jData[_T("TanSoTim")].GetValue(m_szTanSoTim);
	m_jData[_T("RRFNPhai")].GetValue(m_szRRFNPhai);
	m_jData[_T("RRFNTrai")].GetValue(m_szRRFNTrai);
	m_jData[_T("TiengRalesPhoi")].GetValue(m_szTiengRalesPhoi);
	m_jData[_T("ViTri")].GetValue(m_szViTri);
	m_jData[_T("TrieuChungKhac")].GetValue(m_szTrieuChungKhac);
	m_jData[_T("BC")].GetValue(m_szBC);
	m_jData[_T("Gran")].GetValue(m_szGran);
	m_jData[_T("HC")].GetValue(m_szHC);
	m_jData[_T("HST")].GetValue(m_szHST);
	m_jData[_T("TC")].GetValue(m_szTC);
	m_jData[_T("Glucose")].GetValue(m_szGlucose);
	m_jData[_T("UreCre")].GetValue(m_szUreCre);
	m_jData[_T("OTPT")].GetValue(m_szOTPT);
	m_jData[_T("VC")].GetValue(m_szVC);
	m_jData[_T("FEV1")].GetValue(m_szFEV1);
	m_jData[_T("FEV1FVC")].GetValue(m_szFEV1FVC);
	m_jData[_T("XQPhoi")].GetValue(m_szXQPhoi);
	m_jData[_T("XNKhac")].GetValue(m_szXNKhac);
	}

}
void CHMS_OBADTPhoiTacNghenManTinh::GetDataToScreen(){

	GetData();
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, tmpStr, szData;
	int n = 0;

	szSQL.Format(_T("SELECT COUNT(*) AS solan FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"), pMF->m_nDocNo,m_szRecordType);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("solan"), n);

	if(n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s' and hde_refidx = %d "), pMF->m_nDocNo,m_szRecordType, i);
			rs.ExecSQL(szSQL);
			rs.GetValue(_T("hde_value"), tmpStr);
			szData.AppendFormat(_T("%s"), tmpStr);
		}
		m_jData.Parse(szData);
		UpdateJson(FALSE);
		SetMode(VM_VIEW);
	}
	else
	{
		SetDefaultValues();
		SetMode(VM_VIEW);
	}

}
void CHMS_OBADTPhoiTacNghenManTinh::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBADTPhoiTacNghenManTinh::SetDefaultValues(){

	m_szLanKham.Empty();
	m_nNam=0;
	m_szHoVaTen.Empty();
	m_szTuoi.Empty();
	m_szHutThuocLa.Empty();
	m_szBenhKhac.Empty();
	m_szSot.Empty();
	m_bHoKhan=FALSE;
	m_bHoDom=FALSE;
	m_bTucNguc=FALSE;
	m_bKhoTho=FALSE;
	m_szTrieuChungKhac2.Empty();
	m_bDaNiemMacHong=FALSE;
	m_bTimTai=FALSE;
	m_bPhu=FALSE;
	m_szMach.Empty();
	m_szHA.Empty();
	m_szTanSoTim.Empty();
	m_szRRFNPhai.Empty();
	m_szRRFNTrai.Empty();
	m_szTiengRalesPhoi.Empty();
	m_szViTri.Empty();
	m_szTrieuChungKhac.Empty();
	m_szBC.Empty();
	m_szGran.Empty();
	m_szHC.Empty();
	m_szHST.Empty();
	m_szTC.Empty();
	m_szGlucose.Empty();
	m_szUreCre.Empty();
	m_szOTPT.Empty();
	m_szVC.Empty();
	m_szFEV1.Empty();
	m_szFEV1FVC.Empty();
	m_szXQPhoi.Empty();
	m_szXNKhac.Empty();

}
int CHMS_OBADTPhoiTacNghenManTinh::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, -1);
 			SetDefaultValues();
			szSQL.Format(_T("SELECT Trim(hp_surname ") \
					_T("            || ' ' ") \
					_T("            || hp_midname ") \
					_T("            || ' ' ") \
					_T("            || hp_firstname)             AS pname, ") \
					_T("       Hms_getage(sysdate, hp_birthdate) AS age, ") \
					_T("       Hms_getsex(hp_sex)                AS sex, ") \
					_T("       Extract(year FROM hp_birthdate)   AS yob ") \
					_T("FROM   hms_patient ") \
					_T("WHERE  hp_patientno = %d "), pMF->m_nPNo);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("pname"), m_szHoVaTen);
				rs.GetValue(_T("age"), m_szTuoi);
				
			}
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 1, -1);
			szSQL.Format(_T("SELECT Trim(hp_surname ") \
					_T("            || ' ' ") \
					_T("            || hp_midname ") \
					_T("            || ' ' ") \
					_T("            || hp_firstname)             AS pname, ") \
					_T("       Hms_getage(sysdate, hp_birthdate) AS age, ") \
					_T("       Hms_getsex(hp_sex)                AS sex, ") \
					_T("       Extract(year FROM hp_birthdate)   AS yob ") \
					_T("FROM   hms_patient ") \
					_T("WHERE  hp_patientno = %d "), pMF->m_nPNo);

			rs.ExecSQL(szSQL);
			if(!rs.IsEOF())
			{
				rs.GetValue(_T("pname"), m_szHoVaTen);
				rs.GetValue(_T("age"), m_szTuoi);
				
			}
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 1, -1);
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
/*void CHMS_OBADTPhoiTacNghenManTinh::OnLanKhamChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnLanKhamSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnLanKhamKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnLanKhamCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnNamChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnNamSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnNamKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnNamCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHoVaTenChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHoVaTenSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHoVaTenKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnHoVaTenCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTuoiChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTuoiSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTuoiKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnTuoiCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHutThuocLaChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHutThuocLaSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHutThuocLaKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnHutThuocLaCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnBenhKhacChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnBenhKhacSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnBenhKhacKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnBenhKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnSotChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnSotSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnSotKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnSotCheckValue(){
	return 0;
} 
	void CHMS_OBADTPhoiTacNghenManTinh::OnHoKhanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTPhoiTacNghenManTinh::OnHoDomSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTPhoiTacNghenManTinh::OnTucNgucSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTPhoiTacNghenManTinh::OnKhoThoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTrieuChungKhac2Change(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTrieuChungKhac2Setfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTrieuChungKhac2Killfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnTrieuChungKhac2CheckValue(){
	return 0;
} 
	void CHMS_OBADTPhoiTacNghenManTinh::OnDaNiemMacHongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTPhoiTacNghenManTinh::OnTimTaiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTPhoiTacNghenManTinh::OnPhuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTPhoiTacNghenManTinh::OnMachChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnMachSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnMachKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnMachCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHAChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHASetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHAKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnHACheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTanSoTimChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTanSoTimSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTanSoTimKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnTanSoTimCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnRRFNPhaiChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnRRFNPhaiSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnRRFNPhaiKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnRRFNPhaiCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnRRFNTraiChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnRRFNTraiSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnRRFNTraiKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnRRFNTraiCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTiengRalesPhoiChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTiengRalesPhoiSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTiengRalesPhoiKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnTiengRalesPhoiCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnViTriChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnViTriSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnViTriKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnViTriCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTrieuChungKhacChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTrieuChungKhacSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTrieuChungKhacKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnTrieuChungKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnBCChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnBCSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnBCKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnBCCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnGranChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnGranSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnGranKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnGranCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHCChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHCSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHCKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnHCCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHSTChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHSTSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnHSTKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnHSTCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTCChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTCSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnTCKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnTCCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnGlucoseChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnGlucoseSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnGlucoseKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnGlucoseCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnUreCreChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnUreCreSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnUreCreKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnUreCreCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnOTPTChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnOTPTSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnOTPTKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnOTPTCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnVCChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnVCSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnVCKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnVCCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnFEV1Change(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnFEV1Setfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnFEV1Killfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnFEV1CheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnFEV1FVCChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnFEV1FVCSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnFEV1FVCKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnFEV1FVCCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnXQPhoiChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnXQPhoiSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnXQPhoiKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnXQPhoiCheckValue(){
	return 0;
} 
/*void CHMS_OBADTPhoiTacNghenManTinh::OnXNKhacChange(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnXNKhacSetfocus(){
	
} */
/*void CHMS_OBADTPhoiTacNghenManTinh::OnXNKhacKillfocus(){
	
} */
int CHMS_OBADTPhoiTacNghenManTinh::OnXNKhacCheckValue(){
	return 0;
} 
void CHMS_OBADTPhoiTacNghenManTinh::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBADTPhoiTacNghenManTinh();
} 
void CHMS_OBADTPhoiTacNghenManTinh::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	CHMSBenhAnView::PrintRecord(_T("Reports\\HMS\\HMS_OBADTPhoiTacNghenManTinh.RPT"));
	return;

	/*CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_OBADTPhoiTacNghenManTinh.RPT")))
		return;
	GetDataToScreen();
	rptHeader = rpt.GetReportHeader();
	
	for (int i = 0; i < m_jData.Size();i++)
	{
			
		std::wstring name;
		name = m_jData.order[i];
		tmpStr.Empty();
		JSONVALUE jv = m_jData[name.c_str()];
		CReportItem *obj = rptHeader->GetItem(name.c_str());
		if(obj->GetType() == REPORT_LABEL)
			continue;

		if(jv.jt == JT_STRING)
		{
			jv.GetValue(tmpStr);
			rptHeader->SetValue(name.c_str(), tmpStr);
		}

		if(jv.jt == JT_NUMBER)
		{
			long d;
			jv.GetValue(d);
			tmpStr.Format(_T("%d"), d);
			

			if(obj->GetType() == REPORT_CHECKBOX)
			{
				rptHeader->SetCheck(name.c_str(), d>0?true:false);
			}
			else
				rptHeader->SetValue(name.c_str(), tmpStr);
		}

		if(jv.jt == JT_BOOL)
		{
			bool b;
			jv.GetValue(b);
			rptHeader->SetCheck(name.c_str(), b);
		}
		
	}

	rptHeader->SetValue(_T("LanKham"),  m_szLanKham);
	rptHeader->SetValue(_T("Nam"), m_nNam);
	rptHeader->SetValue(_T("HoVaTen"),  m_szHoVaTen);
	rptHeader->SetValue(_T("Tuoi"), m_szTuoi);
	rptHeader->SetValue(_T("HutThuocLa"), m_szHutThuocLa);
	rptHeader->SetValue(_T("BenhKhac"), m_szBenhKhac);
	rptHeader->SetValue(_T("Sot"), m_szSot);
	if(m_bHoKhan)
		rptHeader->SetValue(_T("1"),  _T("Y"));
	if(m_bHoKhan)
		rptHeader->SetValue(_T("2"), _T("Y"));
	if(m_bTucNguc)
		rptHeader->SetValue(_T("3"),  _T("Y"));
	if(m_bKhoTho)
		rptHeader->SetValue(_T("4"), _T("Y"));
	rptHeader->SetValue(_T("TrieuChungKhac2"),  m_szTrieuChungKhac2);
	if(m_bDaNiemMacHong)
		rptHeader->SetValue(_T("5"),  _T("Y"));
	if(m_bTimTai)
		rptHeader->SetValue(_T("6"), _T("Y"));
	if(m_bPhu)
	rptHeader->SetValue(_T("7"),  _T("Y"));
	rptHeader->SetValue(_T("Mach"),  m_szMach);
	rptHeader->SetValue(_T("HA"), m_szHA);
	rptHeader->SetValue(_T("TanSoTim"), m_szTanSoTim);
	rptHeader->SetValue(_T("RRFNPhai"),  m_szRRFNPhai);
	rptHeader->SetValue(_T("RRFNTrai"),  m_szRRFNTrai);
	rptHeader->SetValue(_T("TiengRalesPhoi"),  m_szTiengRalesPhoi);
	rptHeader->SetValue(_T("ViTri"),  m_szViTri);
	rptHeader->SetValue(_T("TrieuChungKhac"),  m_szTrieuChungKhac);
	rptHeader->SetValue(_T("BC"), m_szBC);
	rptHeader->SetValue(_T("Gran"),  m_szGran);
	rptHeader->SetValue(_T("HC"),  m_szHC);
	rptHeader->SetValue(_T("HST"),  m_szHST);
	rptHeader->SetValue(_T("TC"), m_szTC);
	rptHeader->SetValue(_T("Glucose"), m_szGlucose);
	rptHeader->SetValue(_T("UreCre"), m_szUreCre);
	rptHeader->SetValue(_T("OTPT"),  m_szOTPT);
	rptHeader->SetValue(_T("VC"),  m_szVC);
	rptHeader->SetValue(_T("FEV1"),  m_szFEV1);
	rptHeader->SetValue(_T("FEV1FVC"),  m_szFEV1FVC);
	rptHeader->SetValue(_T("XQPhoi"),  m_szXQPhoi);
	rptHeader->SetValue(_T("XNKhac"),  m_szXNKhac);
	
	szSQL.Format(_T("select hop_fromdate, hop_todate, hop_recordno from hms_outpatient ") \
		_T(" where hop_docno = %ld and hop_recordtype = '%s'"), pMF->m_nDocNo, m_szRecordType);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hop_fromdate"), tmpStr);
	rptHeader->SetValue(_T("CreatedDate"),   CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("hop_todate"), tmpStr);
	rptHeader->SetValue(_T("EndDate"),   CDate::Convert(tmpStr, yyyymmdd, ddmmyyyy));
	rs.GetValue(_T("hop_recordno"), tmpStr);
	rptHeader->SetValue(_T("RecordNo"), tmpStr);


	rptDetail = rpt.AddDetail();
	rptFooter = rpt.GetReportFooter();
	EndWaitCursor();
	rpt.PrintPreview();*/
} 
bool CHMS_OBADTPhoiTacNghenManTinh::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsAllowUpdate())
	{
		ShowMessageBox(_T("Đang tồn tại bệnh án ngoại trú. Không thể tạo được bệnh án mới"));
		return false;
	}
	OnEditHMS_OBADTPhoiTacNghenManTinh();
	return true;
} 
int CHMS_OBADTPhoiTacNghenManTinh::OnAddHMS_OBADTPhoiTacNghenManTinh(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBADTPhoiTacNghenManTinh::OnEditHMS_OBADTPhoiTacNghenManTinh(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBADTPhoiTacNghenManTinh::OnDeleteHMS_OBADTPhoiTacNghenManTinh(){
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
 		OnCancelHMS_OBADTPhoiTacNghenManTinh();
 	}
	return 0;
}
int CHMS_OBADTPhoiTacNghenManTinh::OnSaveHMS_OBADTPhoiTacNghenManTinh(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;

	//////////////////////////////////////////
	bool res =  CHMSBenhAnView::PostData();
	//return result
	return (int) res;
	//
	/////////////////////////////////////////////


 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;

	CString szData;
	int ret = 0;
	m_jData.ToString(szData);
	int n =0;
	CString tmpStr;
	tmpStr = szData;

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"), pMF->m_nDocNo,m_szRecordType);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_szRecordType,pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), pMF->GetCurrentDepartmentID()+_T("PhoiTacNgheMT"), tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
	}

	if(ret > 0)
	{
		SetMode(VM_VIEW);
		szSQL.Format(_T("HMS_OUTPATIENT_CREATE(%ld, '%s', 0, to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), '%s', 0) "), 
				pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), pMF->GetSysDateTime(),m_szRecordType);
			pMF->ExecDML(szSQL);
	}
	else
		return -1;
	return ret;
}
int CHMS_OBADTPhoiTacNghenManTinh::OnCancelHMS_OBADTPhoiTacNghenManTinh(){
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
int CHMS_OBADTPhoiTacNghenManTinh::OnHMS_OBADTPhoiTacNghenManTinhListLoadData(){
	return 0;
}


void CHMS_OBADTPhoiTacNghenManTinh::OnCancelSelect()
{
	OnCancelHMS_OBADTPhoiTacNghenManTinh();
}