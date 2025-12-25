#include "HMS_OBADTDauThatNgucOnDinh.h"
#include "MainFrm.h"
#include "ReportDocument.h"
/*static void _OnLanKhamChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnLanKhamChange();
} */
/*static void _OnLanKhamSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnLanKhamSetfocus();} */ 
/*static void _OnLanKhamKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnLanKhamKillfocus();
} */
static int _OnLanKhamCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnLanKhamCheckValue();
} 
/*static void _OnNamChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnNamChange();
} */
/*static void _OnNamSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnNamSetfocus();} */ 
/*static void _OnNamKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnNamKillfocus();
} */
static int _OnNamCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnNamCheckValue();
} 
/*static void _OnHoVaTenChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHoVaTenChange();
} */
/*static void _OnHoVaTenSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHoVaTenSetfocus();} */ 
/*static void _OnHoVaTenKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHoVaTenKillfocus();
} */
static int _OnHoVaTenCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHoVaTenCheckValue();
} 
/*static void _OnTuoiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTuoiChange();
} */
/*static void _OnTuoiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTuoiSetfocus();} */ 
/*static void _OnTuoiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTuoiKillfocus();
} */
static int _OnTuoiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTuoiCheckValue();
} 
/*static void _OnHutThuocLaChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHutThuocLaChange();
} */
/*static void _OnHutThuocLaSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHutThuocLaSetfocus();} */ 
/*static void _OnHutThuocLaKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHutThuocLaKillfocus();
} */
static int _OnHutThuocLaCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHutThuocLaCheckValue();
} 
/*static void _OnBenhKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnBenhKhacChange();
} */
/*static void _OnBenhKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnBenhKhacSetfocus();} */ 
/*static void _OnBenhKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnBenhKhacKillfocus();
} */
static int _OnBenhKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnBenhKhacCheckValue();
} 
static void _OnKhoThoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnKhoThoSelect();
}
static void _OnDauNgucSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnDauNgucSelect();
}
static void _OnHoiHopTrongNgucSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnHoiHopTrongNgucSelect();
}
static void _OnHoSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnHoSelect();
}
/*static void _OnTrieuChungKhac2ChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTrieuChungKhac2Change();
} */
/*static void _OnTrieuChungKhac2SetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTrieuChungKhac2Setfocus();} */ 
/*static void _OnTrieuChungKhac2KillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTrieuChungKhac2Killfocus();
} */
static int _OnTrieuChungKhac2CheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTrieuChungKhac2CheckValue();
} 
static void _OnDaNiemMacHongSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnDaNiemMacHongSelect();
}
static void _OnTimTaiSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnTimTaiSelect();
}
static void _OnPhuSelectFnc(CWnd *pWnd){
	 ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnPhuSelect();
}
/*static void _OnMachChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnMachChange();
} */
/*static void _OnMachSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnMachSetfocus();} */ 
/*static void _OnMachKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnMachKillfocus();
} */
static int _OnMachCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnMachCheckValue();
} 
/*static void _OnHAChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHAChange();
} */
/*static void _OnHASetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHASetfocus();} */ 
/*static void _OnHAKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHAKillfocus();
} */
static int _OnHACheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHACheckValue();
} 
/*static void _OnTanSoTimChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTanSoTimChange();
} */
/*static void _OnTanSoTimSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTanSoTimSetfocus();} */ 
/*static void _OnTanSoTimKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTanSoTimKillfocus();
} */
static int _OnTanSoTimCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTanSoTimCheckValue();
} 
/*static void _OnTiengThoiTamThuChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTiengThoiTamThuChange();
} */
/*static void _OnTiengThoiTamThuSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTiengThoiTamThuSetfocus();} */ 
/*static void _OnTiengThoiTamThuKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTiengThoiTamThuKillfocus();
} */
static int _OnTiengThoiTamThuCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTiengThoiTamThuCheckValue();
} 
/*static void _OnTamTruongChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTamTruongChange();
} */
/*static void _OnTamTruongSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTamTruongSetfocus();} */ 
/*static void _OnTamTruongKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTamTruongKillfocus();
} */
static int _OnTamTruongCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTamTruongCheckValue();
} 
/*static void _OnTiengRalesPhoiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTiengRalesPhoiChange();
} */
/*static void _OnTiengRalesPhoiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTiengRalesPhoiSetfocus();} */ 
/*static void _OnTiengRalesPhoiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTiengRalesPhoiKillfocus();
} */
static int _OnTiengRalesPhoiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTiengRalesPhoiCheckValue();
} 
/*static void _OnViTriChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnViTriChange();
} */
/*static void _OnViTriSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnViTriSetfocus();} */ 
/*static void _OnViTriKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnViTriKillfocus();
} */
static int _OnViTriCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnViTriCheckValue();
} 
/*static void _OnTrieuChungKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTrieuChungKhacChange();
} */
/*static void _OnTrieuChungKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTrieuChungKhacSetfocus();} */ 
/*static void _OnTrieuChungKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTrieuChungKhacKillfocus();
} */
static int _OnTrieuChungKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTrieuChungKhacCheckValue();
} 
/*static void _OnBCChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnBCChange();
} */
/*static void _OnBCSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnBCSetfocus();} */ 
/*static void _OnBCKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnBCKillfocus();
} */
static int _OnBCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnBCCheckValue();
} 
/*static void _OnGranChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnGranChange();
} */
/*static void _OnGranSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnGranSetfocus();} */ 
/*static void _OnGranKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnGranKillfocus();
} */
static int _OnGranCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnGranCheckValue();
} 
/*static void _OnHCChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHCChange();
} */
/*static void _OnHCSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHCSetfocus();} */ 
/*static void _OnHCKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHCKillfocus();
} */
static int _OnHCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHCCheckValue();
} 
/*static void _OnHSTChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHSTChange();
} */
/*static void _OnHSTSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHSTSetfocus();} */ 
/*static void _OnHSTKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHSTKillfocus();
} */
static int _OnHSTCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnHSTCheckValue();
} 
/*static void _OnTCChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTCChange();
} */
/*static void _OnTCSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTCSetfocus();} */ 
/*static void _OnTCKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTCKillfocus();
} */
static int _OnTCCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnTCCheckValue();
} 
/*static void _OnGlucoseChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnGlucoseChange();
} */
/*static void _OnGlucoseSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnGlucoseSetfocus();} */ 
/*static void _OnGlucoseKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnGlucoseKillfocus();
} */
static int _OnGlucoseCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnGlucoseCheckValue();
} 
/*static void _OnUreCreChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnUreCreChange();
} */
/*static void _OnUreCreSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnUreCreSetfocus();} */ 
/*static void _OnUreCreKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnUreCreKillfocus();
} */
static int _OnUreCreCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnUreCreCheckValue();
} 
/*static void _OnOTPTChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnOTPTChange();
} */
/*static void _OnOTPTSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnOTPTSetfocus();} */ 
/*static void _OnOTPTKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnOTPTKillfocus();
} */
static int _OnOTPTCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnOTPTCheckValue();
} 
/*static void _OnDienTimChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnDienTimChange();
} */
/*static void _OnDienTimSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnDienTimSetfocus();} */ 
/*static void _OnDienTimKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnDienTimKillfocus();
} */
static int _OnDienTimCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnDienTimCheckValue();
} 
/*static void _OnSieuAmTimChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnSieuAmTimChange();
} */
/*static void _OnSieuAmTimSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnSieuAmTimSetfocus();} */ 
/*static void _OnSieuAmTimKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnSieuAmTimKillfocus();
} */
static int _OnSieuAmTimCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnSieuAmTimCheckValue();
} 
/*static void _OnXQPhoiChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnXQPhoiChange();
} */
/*static void _OnXQPhoiSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnXQPhoiSetfocus();} */ 
/*static void _OnXQPhoiKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnXQPhoiKillfocus();
} */
static int _OnXQPhoiCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnXQPhoiCheckValue();
} 
/*static void _OnXNKhacChangeFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnXNKhacChange();
} */
/*static void _OnXNKhacSetfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnXNKhacSetfocus();} */ 
/*static void _OnXNKhacKillfocusFnc(CWnd *pWnd){
	((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnXNKhacKillfocus();
} */
static int _OnXNKhacCheckValueFnc(CWnd *pWnd){
	return ((CHMS_OBADTDauThatNgucOnDinh *)pWnd)->OnXNKhacCheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMS_OBADTDauThatNgucOnDinh *pVw = (CHMS_OBADTDauThatNgucOnDinh *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMS_OBADTDauThatNgucOnDinh *pVw = (CHMS_OBADTDauThatNgucOnDinh *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnUpdateSelectFnc(CWnd *pWnd){
	CHMS_OBADTDauThatNgucOnDinh *pVw = (CHMS_OBADTDauThatNgucOnDinh *)pWnd;
	pVw->OnUpdateSelect();
} 
static int _OnAddHMS_OBADTDauThatNgucOnDinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnAddHMS_OBADTDauThatNgucOnDinh();
} 
static int _OnEditHMS_OBADTDauThatNgucOnDinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnEditHMS_OBADTDauThatNgucOnDinh();
} 
static int _OnDeleteHMS_OBADTDauThatNgucOnDinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnDeleteHMS_OBADTDauThatNgucOnDinh();
} 
static int _OnSaveHMS_OBADTDauThatNgucOnDinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnSaveHMS_OBADTDauThatNgucOnDinh();
} 
static int _OnCancelHMS_OBADTDauThatNgucOnDinhFnc(CWnd *pWnd){
	 return ((CHMS_OBADTDauThatNgucOnDinh*)pWnd)->OnCancelHMS_OBADTDauThatNgucOnDinh();
} 
CHMS_OBADTDauThatNgucOnDinh::CHMS_OBADTDauThatNgucOnDinh(CWnd *pParent){

	m_nDlgWidth = 1019;
	m_nDlgHeight = 1216;
	SetDefaultValues();
	m_szRecordType = _T("OBA_DAUTHATNGUC");
}
CHMS_OBADTDauThatNgucOnDinh::~CHMS_OBADTDauThatNgucOnDinh(){
}
void CHMS_OBADTDauThatNgucOnDinh::OnCreateComponents(){


	m_wndTitle.Create(this, _T("\x110I\x1EC0U TR\x1ECA NGO\x1EA0I TR\xDA \x42\x1EC6NH \x110\x41U TH\x1EAET NG\x1EF0\x43 \x1ED4N \x110\x1ECANH"), 5, 5, 650, 30);
	m_wndLanKhamLabel.Create(this, _T("L\x1EA7n kh\xE1m"), 185, 35, 265, 60);
	m_wndLanKham.Create(this,270, 35, 350, 60); 
	m_wndNamLabel.Create(this, _T("N\x103m"), 355, 35, 435, 60);
	m_wndNam.Create(this,440, 35, 520, 60); 
	m_wndHoVaTenLabel.Create(this, _T("H\x1ECD v\xE0 t\xEAn"), 5, 65, 85, 90);
	m_wndHoVaTen.Create(this,90, 65, 650, 90); 
	m_wndTuoiLabel.Create(this, _T("N\x103m sinh"), 655, 65, 735, 90);
	m_wndTuoi.Create(this,740, 65, 785, 90); 
	m_wndTienSu.Create(this, _T("Ti\x1EC1n s\x1EED"), 5, 95, 85, 120);
	m_wndHutThuocLaLabel.Create(this, _T("H\xFAt thu\x1ED1\x63"), 90, 95, 190, 120);
	m_wndHutThuocLa.Create(this,195, 95, 275, 120); 
	m_wndSLThuocLa.Create(this, _T("Bao/N\x103m"), 280, 95, 360, 120);
	m_wndBenhKhacLabel.Create(this, _T("\x42\x1EC7nh kh\xE1\x63"), 90, 125, 190, 150);
	m_wndBenhKhac.Create(this,195, 125, 785, 150); 
	m_wndTrieuChungChuQuan.Create(this, _T("Tri\x1EC7u \x63h\x1EE9ng \x63h\x1EE7 qu\x61n"), 5, 155, 189, 180);
	m_wndKhoTho.Create(this, _T("Kh\xF3 th\x1EDF"), 90, 185, 190, 210);
	m_wndDauNguc.Create(this, _T("\x110\x61u ng\x1EF1\x63"), 195, 185, 295, 210);
	m_wndHoiHopTrongNguc.Create(this, _T("H\x1ED3i h\x1ED9p tr\x1ED1ng ng\x1EF1\x63"), 300, 185, 460, 210);
	m_wndHo.Create(this, _T("Ho"), 465, 185, 545, 210);
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
	m_wndTiengThoiTamThuLabel.Create(this, _T("Ti\x1EBFng th\x1ED5i t\xE2m thu"), 385, 304, 525, 329);
	m_wndTiengThoiTamThu.Create(this,530, 304, 590, 329); 
	m_wndTamTruongLabel.Create(this, _T("T\xE2m tr\x1B0\x1A1ng"), 595, 304, 675, 329);
	m_wndTamTruong.Create(this,680, 305, 785, 330); 
	m_wndTiengRalesPhoiLabel.Create(this, _T("Ti\x1EBFng r\x61l\x65s ph\x1ED5i"), 90, 334, 190, 359);
	m_wndTiengRalesPhoi.Create(this,195, 334, 380, 359); 
	m_wndViTriLabel.Create(this, _T("V\x1ECB tr\xED"), 385, 335, 525, 360);
	m_wndViTri.Create(this,529, 335, 785, 360); 
	m_wndTrieuChungKhacLabel.Create(this, _T("Tri\x1EC7u \x63h\x1EE9ng"), 90, 364, 190, 389);
	m_wndTrieuChungKhac.Create(this,195, 364, 785, 389); 
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
	m_wndDienTimLabel.Create(this, _T("\x110i\x1EC7n tim"), 90, 485, 190, 510);
	m_wndDienTim.Create(this,195, 485, 785, 510); 
	m_wndSieuAmTimLabel.Create(this, _T("Si\xEAu \xE2m tim"), 90, 514, 190, 539);
	m_wndSieuAmTim.Create(this,195, 514, 785, 539); 
	m_wndXQPhoiLabel.Create(this, _T("XQ ph\x1ED5i"), 90, 544, 190, 569);
	m_wndXQPhoi.Create(this,195, 544, 785, 569); 
	m_wndXNKhacLabel.Create(this, _T("XN kh\xE1\x63"), 90, 574, 190, 599);
	m_wndXNKhac.Create(this,195, 574, 785, 599); 
	
	m_wndlp1.Create(this, _T("l/p"), 595, 274, 630, 299);
	m_wndlp2.Create(this, _T("l/p"), 300, 304, 380, 329);
	m_wndmmHg.Create(this, _T("mmHg"), 740, 273, 790, 298);

}
void CHMS_OBADTDauThatNgucOnDinh::OnInitializeComponents(){
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
	m_wndTrieuChungKhac2.SetLimitText(35);
	m_wndTrieuChungKhac2.SetCheckValue(true);
	m_wndMach.SetLimitText(35);
	m_wndMach.SetCheckValue(true);
	m_wndHA.SetLimitText(35);
	m_wndHA.SetCheckValue(true);
	m_wndTanSoTim.SetLimitText(35);
	m_wndTanSoTim.SetCheckValue(true);
	m_wndTiengThoiTamThu.SetLimitText(35);
	m_wndTiengThoiTamThu.SetCheckValue(true);
	m_wndTamTruong.SetLimitText(35);
	m_wndTamTruong.SetCheckValue(true);
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
	m_wndDienTim.SetLimitText(35);
	m_wndDienTim.SetCheckValue(true);
	m_wndSieuAmTim.SetLimitText(35);
	m_wndSieuAmTim.SetCheckValue(true);
	m_wndXQPhoi.SetLimitText(35);
	m_wndXQPhoi.SetCheckValue(true);
	m_wndXNKhac.SetLimitText(35);
	m_wndXNKhac.SetCheckValue(true);*/

}
void CHMS_OBADTDauThatNgucOnDinh::OnSetWindowEvents(){
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
	m_wndKhoTho.SetEvent(WE_CLICK, _OnKhoThoSelectFnc);
	m_wndDauNguc.SetEvent(WE_CLICK, _OnDauNgucSelectFnc);
	m_wndHoiHopTrongNguc.SetEvent(WE_CLICK, _OnHoiHopTrongNgucSelectFnc);
	m_wndHo.SetEvent(WE_CLICK, _OnHoSelectFnc);
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
	//m_wndTiengThoiTamThu.SetEvent(WE_CHANGE, _OnTiengThoiTamThuChangeFnc);
	//m_wndTiengThoiTamThu.SetEvent(WE_SETFOCUS, _OnTiengThoiTamThuSetfocusFnc);
	//m_wndTiengThoiTamThu.SetEvent(WE_KILLFOCUS, _OnTiengThoiTamThuKillfocusFnc);
	m_wndTiengThoiTamThu.SetEvent(WE_CHECKVALUE, _OnTiengThoiTamThuCheckValueFnc);
	//m_wndTamTruong.SetEvent(WE_CHANGE, _OnTamTruongChangeFnc);
	//m_wndTamTruong.SetEvent(WE_SETFOCUS, _OnTamTruongSetfocusFnc);
	//m_wndTamTruong.SetEvent(WE_KILLFOCUS, _OnTamTruongKillfocusFnc);
	m_wndTamTruong.SetEvent(WE_CHECKVALUE, _OnTamTruongCheckValueFnc);
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
	//m_wndDienTim.SetEvent(WE_CHANGE, _OnDienTimChangeFnc);
	//m_wndDienTim.SetEvent(WE_SETFOCUS, _OnDienTimSetfocusFnc);
	//m_wndDienTim.SetEvent(WE_KILLFOCUS, _OnDienTimKillfocusFnc);
	m_wndDienTim.SetEvent(WE_CHECKVALUE, _OnDienTimCheckValueFnc);
	//m_wndSieuAmTim.SetEvent(WE_CHANGE, _OnSieuAmTimChangeFnc);
	//m_wndSieuAmTim.SetEvent(WE_SETFOCUS, _OnSieuAmTimSetfocusFnc);
	//m_wndSieuAmTim.SetEvent(WE_KILLFOCUS, _OnSieuAmTimKillfocusFnc);
	m_wndSieuAmTim.SetEvent(WE_CHECKVALUE, _OnSieuAmTimCheckValueFnc);
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
void CHMS_OBADTDauThatNgucOnDinh::OnDoDataExchange(CDataExchange* pDX){
	DDX_Text(pDX, m_wndLanKham.GetDlgCtrlID(), m_szLanKham);
	DDX_Text(pDX, m_wndNam.GetDlgCtrlID(), m_nNam);
	DDX_Text(pDX, m_wndHoVaTen.GetDlgCtrlID(), m_szHoVaTen);
	DDX_Text(pDX, m_wndTuoi.GetDlgCtrlID(), m_szTuoi);
	DDX_Text(pDX, m_wndHutThuocLa.GetDlgCtrlID(), m_szHutThuocLa);
	DDX_Text(pDX, m_wndBenhKhac.GetDlgCtrlID(), m_szBenhKhac);
	DDX_Check(pDX, m_wndKhoTho.GetDlgCtrlID(), m_bKhoTho);
	DDX_Check(pDX, m_wndDauNguc.GetDlgCtrlID(), m_bDauNguc);
	DDX_Check(pDX, m_wndHoiHopTrongNguc.GetDlgCtrlID(), m_bHoiHopTrongNguc);
	DDX_Check(pDX, m_wndHo.GetDlgCtrlID(), m_bHo);
	DDX_Text(pDX, m_wndTrieuChungKhac2.GetDlgCtrlID(), m_szTrieuChungKhac2);
	DDX_Check(pDX, m_wndDaNiemMacHong.GetDlgCtrlID(), m_bDaNiemMacHong);
	DDX_Check(pDX, m_wndTimTai.GetDlgCtrlID(), m_bTimTai);
	DDX_Check(pDX, m_wndPhu.GetDlgCtrlID(), m_bPhu);
	DDX_Text(pDX, m_wndMach.GetDlgCtrlID(), m_szMach);
	DDX_Text(pDX, m_wndHA.GetDlgCtrlID(), m_szHA);
	DDX_Text(pDX, m_wndTanSoTim.GetDlgCtrlID(), m_szTanSoTim);
	DDX_Text(pDX, m_wndTiengThoiTamThu.GetDlgCtrlID(), m_szTiengThoiTamThu);
	DDX_Text(pDX, m_wndTamTruong.GetDlgCtrlID(), m_szTamTruong);
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
	DDX_Text(pDX, m_wndDienTim.GetDlgCtrlID(), m_szDienTim);
	DDX_Text(pDX, m_wndSieuAmTim.GetDlgCtrlID(), m_szSieuAmTim);
	DDX_Text(pDX, m_wndXQPhoi.GetDlgCtrlID(), m_szXQPhoi);
	DDX_Text(pDX, m_wndXNKhac.GetDlgCtrlID(), m_szXNKhac);

}
void CHMS_OBADTDauThatNgucOnDinh::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("LanKham")] =  m_szLanKham;
	m_jData[_T("Nam")] =  m_nNam;
	m_jData[_T("HoVaTen")] =  m_szHoVaTen;
	m_jData[_T("Tuoi")] =  m_szTuoi;
	m_jData[_T("HutThuocLa")] =  m_szHutThuocLa;
	m_jData[_T("BenhKhac")] =  m_szBenhKhac;
	m_jData[_T("KhoTho")] =  m_bKhoTho;
	m_jData[_T("DauNguc")] =  m_bDauNguc;
	m_jData[_T("HoiHopTrongNguc")] =  m_bHoiHopTrongNguc;
	m_jData[_T("Ho")] =  m_bHo;
	m_jData[_T("TrieuChungKhac2")] =  m_szTrieuChungKhac2;
	m_jData[_T("DaNiemMacHong")] =  m_bDaNiemMacHong;
	m_jData[_T("TimTai")] =  m_bTimTai;
	m_jData[_T("Phu")] =  m_bPhu;
	m_jData[_T("Mach")] =  m_szMach;
	m_jData[_T("HA")] =  m_szHA;
	m_jData[_T("TanSoTim")] =  m_szTanSoTim;
	m_jData[_T("TiengThoiTamThu")] =  m_szTiengThoiTamThu;
	m_jData[_T("TamTruong")] =  m_szTamTruong;
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
	m_jData[_T("DienTim")] =  m_szDienTim;
	m_jData[_T("SieuAmTim")] =  m_szSieuAmTim;
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
	m_jData[_T("KhoTho")].GetValue(m_bKhoTho);
	m_jData[_T("DauNguc")].GetValue(m_bDauNguc);
	m_jData[_T("HoiHopTrongNguc")].GetValue(m_bHoiHopTrongNguc);
	m_jData[_T("Ho")].GetValue(m_bHo);
	m_jData[_T("TrieuChungKhac2")].GetValue(m_szTrieuChungKhac2);
	m_jData[_T("DaNiemMacHong")].GetValue(m_bDaNiemMacHong);
	m_jData[_T("TimTai")].GetValue(m_bTimTai);
	m_jData[_T("Phu")].GetValue(m_bPhu);
	m_jData[_T("Mach")].GetValue(m_szMach);
	m_jData[_T("HA")].GetValue(m_szHA);
	m_jData[_T("TanSoTim")].GetValue(m_szTanSoTim);
	m_jData[_T("TiengThoiTamThu")].GetValue(m_szTiengThoiTamThu);
	m_jData[_T("TamTruong")].GetValue(m_szTamTruong);
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
	m_jData[_T("DienTim")].GetValue(m_szDienTim);
	m_jData[_T("SieuAmTim")].GetValue(m_szSieuAmTim);
	m_jData[_T("XQPhoi")].GetValue(m_szXQPhoi);
	m_jData[_T("XNKhac")].GetValue(m_szXNKhac);
	}

}
void CHMS_OBADTDauThatNgucOnDinh::GetDataToScreen(){
	GetData();
	return;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType, tmpStr, szData;
	int n = 0;

	szSQL.Format(_T("SELECT COUNT(*) AS solan FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='%s'"), pMF->m_nDocNo, m_szRecordType);
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
void CHMS_OBADTDauThatNgucOnDinh::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CHMS_OBADTDauThatNgucOnDinh::SetDefaultValues(){

	m_szLanKham.Empty();
	m_nNam=0;
	m_szHoVaTen.Empty();
	m_szTuoi.Empty();
	m_szHutThuocLa.Empty();
	m_szBenhKhac.Empty();
	m_bKhoTho=FALSE;
	m_bDauNguc=FALSE;
	m_bHoiHopTrongNguc=FALSE;
	m_bHo=FALSE;
	m_szTrieuChungKhac2.Empty();
	m_bDaNiemMacHong=FALSE;
	m_bTimTai=FALSE;
	m_bPhu=FALSE;
	m_szMach.Empty();
	m_szHA.Empty();
	m_szTanSoTim.Empty();
	m_szTiengThoiTamThu.Empty();
	m_szTamTruong.Empty();
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
	m_szDienTim.Empty();
	m_szSieuAmTim.Empty();
	m_szXQPhoi.Empty();
	m_szXNKhac.Empty();

}
int CHMS_OBADTDauThatNgucOnDinh::SetMode(int nMode){
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
				rs.GetValue(_T("yob"), m_szTuoi);
				
			}
			m_wndHoVaTen.EnableWindow(FALSE);
			m_wndTuoi.EnableWindow(FALSE);
			
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
				rs.GetValue(_T("yob"), m_szTuoi);
				
			}
			m_wndHoVaTen.EnableWindow(FALSE);
			m_wndTuoi.EnableWindow(FALSE);
			
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
/*void CHMS_OBADTDauThatNgucOnDinh::OnLanKhamChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnLanKhamSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnLanKhamKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnLanKhamCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnNamChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnNamSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnNamKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnNamCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnHoVaTenChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnHoVaTenSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnHoVaTenKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnHoVaTenCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnTuoiChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTuoiSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTuoiKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnTuoiCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnHutThuocLaChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnHutThuocLaSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnHutThuocLaKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnHutThuocLaCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnBenhKhacChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnBenhKhacSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnBenhKhacKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnBenhKhacCheckValue(){
	return 0;
} 
	void CHMS_OBADTDauThatNgucOnDinh::OnKhoThoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTDauThatNgucOnDinh::OnDauNgucSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTDauThatNgucOnDinh::OnHoiHopTrongNgucSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTDauThatNgucOnDinh::OnHoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTDauThatNgucOnDinh::OnTrieuChungKhac2Change(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTrieuChungKhac2Setfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTrieuChungKhac2Killfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnTrieuChungKhac2CheckValue(){
	return 0;
} 
	void CHMS_OBADTDauThatNgucOnDinh::OnDaNiemMacHongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTDauThatNgucOnDinh::OnTimTaiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CHMS_OBADTDauThatNgucOnDinh::OnPhuSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CHMS_OBADTDauThatNgucOnDinh::OnMachChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnMachSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnMachKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnMachCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnHAChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnHASetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnHAKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnHACheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnTanSoTimChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTanSoTimSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTanSoTimKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnTanSoTimCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnTiengThoiTamThuChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTiengThoiTamThuSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTiengThoiTamThuKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnTiengThoiTamThuCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnTamTruongChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTamTruongSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTamTruongKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnTamTruongCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnTiengRalesPhoiChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTiengRalesPhoiSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTiengRalesPhoiKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnTiengRalesPhoiCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnViTriChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnViTriSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnViTriKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnViTriCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnTrieuChungKhacChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTrieuChungKhacSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTrieuChungKhacKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnTrieuChungKhacCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnBCChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnBCSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnBCKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnBCCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnGranChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnGranSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnGranKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnGranCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnHCChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnHCSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnHCKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnHCCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnHSTChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnHSTSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnHSTKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnHSTCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnTCChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTCSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnTCKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnTCCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnGlucoseChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnGlucoseSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnGlucoseKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnGlucoseCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnUreCreChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnUreCreSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnUreCreKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnUreCreCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnOTPTChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnOTPTSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnOTPTKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnOTPTCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnDienTimChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnDienTimSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnDienTimKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnDienTimCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnSieuAmTimChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnSieuAmTimSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnSieuAmTimKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnSieuAmTimCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnXQPhoiChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnXQPhoiSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnXQPhoiKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnXQPhoiCheckValue(){
	return 0;
} 
/*void CHMS_OBADTDauThatNgucOnDinh::OnXNKhacChange(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnXNKhacSetfocus(){
	
} */
/*void CHMS_OBADTDauThatNgucOnDinh::OnXNKhacKillfocus(){
	
} */
int CHMS_OBADTDauThatNgucOnDinh::OnXNKhacCheckValue(){
	return 0;
} 
void CHMS_OBADTDauThatNgucOnDinh::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMS_OBADTDauThatNgucOnDinh();
} 
void CHMS_OBADTDauThatNgucOnDinh::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CHMSBenhAnView::PrintRecord(_T("Reports\\HMS\\HMS_OBADTDauThatNgucOnDinh.RPT"));
	return;


	/*CReport rpt;
	UpdateData(true);
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL, *rptDetail = NULL, *rptFooter = NULL, *rptGroupHeader = NULL;
	CString szSQL, tmpStr, szDate, szWhere;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\HMS_OBADTDauThatNgucOnDinh.RPT")))
		return;
	GetDataToScreen();
	rptHeader = rpt.GetReportHeader();
	
	rptHeader->SetValue(_T("LanKham"),m_szLanKham);
	rptHeader->SetValue(_T("Nam"),m_nNam);
	rptHeader->SetValue(_T("HoVaTen"),m_szHoVaTen);
	rptHeader->SetValue(_T("Tuoi"),m_szTuoi);
	rptHeader->SetValue(_T("HutThuocLa"),m_szHutThuocLa);
	rptHeader->SetValue(_T("BenhKhac"),m_szBenhKhac);
	if(m_bKhoTho)
		rptHeader->SetValue(_T("KhoTho"),_T("Y"));
	if(m_bDauNguc)
		rptHeader->SetValue(_T("DauNguc"), _T("Y"));
	if(m_bHoiHopTrongNguc)
		rptHeader->SetValue(_T("HoiHopTrongNguc"),_T("Y"));
	if(m_bHo)
		rptHeader->SetValue(_T("Ho"), _T("Y"));
	rptHeader->SetValue(_T("TrieuChungKhac2"), m_szTrieuChungKhac2);
	if(m_bDaNiemMacHong)
		rptHeader->SetValue(_T("DaNiemMacHong"), _T("Y"));
	if(m_bTimTai)
		rptHeader->SetValue(_T("TimTai"), _T("Y"));
	if(m_bPhu)
		rptHeader->SetValue(_T("Phu"), _T("Y"));
	rptHeader->SetValue(_T("Mach"), m_szMach);
	rptHeader->SetValue(_T("HA"),m_szHA);
	rptHeader->SetValue(_T("TanSoTim"), m_szTanSoTim);
	rptHeader->SetValue(_T("TiengThoiTamThu"), m_szTiengThoiTamThu);
	rptHeader->SetValue(_T("TamTruong"),  m_szTamTruong);
	rptHeader->SetValue(_T("TiengRalesPhoi"),m_szTiengRalesPhoi);
	rptHeader->SetValue(_T("ViTri"),m_szViTri);
	rptHeader->SetValue(_T("TrieuChungKhac"), m_szTrieuChungKhac);
	rptHeader->SetValue(_T("BC"), m_szBC);
	rptHeader->SetValue(_T("Gran"),  m_szGran);
	rptHeader->SetValue(_T("HC"), m_szHC);
	rptHeader->SetValue(_T("HST"),m_szHST);
	rptHeader->SetValue(_T("TC"), m_szTC);
	rptHeader->SetValue(_T("Glucose"),  m_szGlucose);
	rptHeader->SetValue(_T("UreCre"), m_szUreCre);
	rptHeader->SetValue(_T("OTPT"), m_szOTPT);
	rptHeader->SetValue(_T("DienTim"), m_szDienTim);
	rptHeader->SetValue(_T("SieuAmTim"), m_szSieuAmTim);
	rptHeader->SetValue(_T("XQPhoi"),m_szXQPhoi);
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
bool CHMS_OBADTDauThatNgucOnDinh::OnUpdateSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(!IsAllowUpdate())
	{
		ShowMessageBox(_T("Đang tồn tại bệnh án ngoại trú. Không thể tạo được bệnh án mới"));
		return false;
	}
	OnEditHMS_OBADTDauThatNgucOnDinh();
	return true;
} 
int CHMS_OBADTDauThatNgucOnDinh::OnAddHMS_OBADTDauThatNgucOnDinh(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMS_OBADTDauThatNgucOnDinh::OnEditHMS_OBADTDauThatNgucOnDinh(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMS_OBADTDauThatNgucOnDinh::OnDeleteHMS_OBADTDauThatNgucOnDinh(){
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
 		OnCancelHMS_OBADTDauThatNgucOnDinh();
 	}
	return 0;
}
int CHMS_OBADTDauThatNgucOnDinh::OnSaveHMS_OBADTDauThatNgucOnDinh(){
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

	szSQL.Format(_T("DELETE FROM hms_doc_emr WHERE hde_docno=%ld and hde_type='BADT_DAUTHATNGUCONDINH'"), pMF->m_nDocNo);
	pMF->ExecSQL(szSQL);

	CStringArray strList;
	pMF->String2Array(szData, &strList, 2000);
	for (int i =0; i < strList.GetCount();i++)
	{
		tmpStr = strList[i];
		szSQL.Format(_T("HMS_DOC_EMR_CREATE('%s', %ld, '%s', %d, %d, '%s', '%s', '%s') "),
			m_szRecordType,pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), n++, 0, pMF->GetCurrentUser(), pMF->GetCurrentDepartmentID()+_T("DauThatNguc"), tmpStr);
		ret = str2int(pMF->ExecDML(szSQL));
	}

	if(ret > 0)
	{
		SetMode(VM_VIEW);
		szSQL.Format(_T("HMS_OUTPATIENT_CREATE(%ld, '%s', 0, to_timestamp('%s','yyyy/mm/dd hh24:mi:ss'), '%s', 0) "), 
				pMF->m_nDocNo, pMF->GetCurrentDepartmentID(), pMF->GetSysDateTime(), m_szRecordType);
			pMF->ExecDML(szSQL);
	}
	else
		return -1;
	return ret;
}
int CHMS_OBADTDauThatNgucOnDinh::OnCancelHMS_OBADTDauThatNgucOnDinh(){
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
int CHMS_OBADTDauThatNgucOnDinh::OnHMS_OBADTDauThatNgucOnDinhListLoadData(){
	return 0;
}


void CHMS_OBADTDauThatNgucOnDinh::OnCancelSelect()
{
	OnCancelHMS_OBADTDauThatNgucOnDinh();
}