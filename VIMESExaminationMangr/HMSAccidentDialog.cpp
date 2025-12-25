#include "HMSAccidentDialog.h"
#include "MainFrm.h"
static void _OnCauseOfAccidentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnCauseOfAccidentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCauseOfAccidentSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnCauseOfAccidentSelendok();
}
/*static void _OnCauseOfAccidentSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnCauseOfAccidentKillfocus();
}*/
/*static void _OnCauseOfAccidentKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnCauseOfAccidentKillfocus();
}*/
static long _OnCauseOfAccidentLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnCauseOfAccidentLoadData();
}
/*static void _OnCauseOfAccidentAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnCauseOfAccidentAddNew();
}*/
static void _OnAccidentPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnAccidentPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAccidentPlaceSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAccidentPlaceSelendok();
}
/*static void _OnAccidentPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAccidentPlaceKillfocus();
}*/
/*static void _OnAccidentPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAccidentPlaceKillfocus();
}*/
static long _OnAccidentPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnAccidentPlaceLoadData();
}
/*static void _OnAccidentPlaceAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAccidentPlaceAddNew();
}*/
static void _OnTransportUsedSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnTransportUsedSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransportUsedSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportUsedSelendok();
}
/*static void _OnTransportUsedSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportUsedKillfocus();
}*/
/*static void _OnTransportUsedKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportUsedKillfocus();
}*/
static long _OnTransportUsedLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnTransportUsedLoadData();
}
/*static void _OnTransportUsedAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportUsedAddNew();
}*/
static void _OnTransportCausedAccidentSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnTransportCausedAccidentSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransportCausedAccidentSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportCausedAccidentSelendok();
}
/*static void _OnTransportCausedAccidentSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportCausedAccidentKillfocus();
}*/
/*static void _OnTransportCausedAccidentKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportCausedAccidentKillfocus();
}*/
static long _OnTransportCausedAccidentLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnTransportCausedAccidentLoadData();
}
/*static void _OnTransportCausedAccidentAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportCausedAccidentAddNew();
}*/
static void _OnExplosiveSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnExplosiveSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnExplosiveSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnExplosiveSelendok();
}
/*static void _OnExplosiveSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnExplosiveKillfocus();
}*/
/*static void _OnExplosiveKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnExplosiveKillfocus();
}*/
static long _OnExplosiveLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnExplosiveLoadData();
}
/*static void _OnExplosiveAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnExplosiveAddNew();
}*/
/*static void _OnAccidentTimeChangeFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAccidentTimeChange();
} */
/*static void _OnAccidentTimeSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAccidentTimeSetfocus();} */ 
/*static void _OnAccidentTimeKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAccidentTimeKillfocus();
} */
static int _OnAccidentTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnAccidentTimeCheckValue();
} 
static void _OnFirstAidSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnFirstAidSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFirstAidSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnFirstAidSelendok();
}
/*static void _OnFirstAidSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnFirstAidKillfocus();
}*/
/*static void _OnFirstAidKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnFirstAidKillfocus();
}*/
static long _OnFirstAidLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnFirstAidLoadData();
}
/*static void _OnFirstAidAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnFirstAidAddNew();
}*/
static void _OnFirstAidPlaceSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnFirstAidPlaceSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnFirstAidPlaceSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnFirstAidPlaceSelendok();
}
/*static void _OnFirstAidPlaceSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnFirstAidPlaceKillfocus();
}*/
/*static void _OnFirstAidPlaceKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnFirstAidPlaceKillfocus();
}*/
static long _OnFirstAidPlaceLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnFirstAidPlaceLoadData();
}
/*static void _OnFirstAidPlaceAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnFirstAidPlaceAddNew();
}*/
static void _OnTransportToHospitalSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnTransportToHospitalSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnTransportToHospitalSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportToHospitalSelendok();
}
/*static void _OnTransportToHospitalSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportToHospitalKillfocus();
}*/
/*static void _OnTransportToHospitalKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportToHospitalKillfocus();
}*/
static long _OnTransportToHospitalLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnTransportToHospitalLoadData();
}
/*static void _OnTransportToHospitalAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnTransportToHospitalAddNew();
}*/
/*static void _OnEmergencyTimeChangeFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnEmergencyTimeChange();
} */
/*static void _OnEmergencyTimeSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnEmergencyTimeSetfocus();} */ 
/*static void _OnEmergencyTimeKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnEmergencyTimeKillfocus();
} */
static int _OnEmergencyTimeCheckValueFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnEmergencyTimeCheckValue();
} 
static void _OnPatientStateSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnPatientStateSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPatientStateSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnPatientStateSelendok();
}
/*static void _OnPatientStateSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnPatientStateKillfocus();
}*/
/*static void _OnPatientStateKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnPatientStateKillfocus();
}*/
static long _OnPatientStateLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnPatientStateLoadData();
}
/*static void _OnPatientStateAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnPatientStateAddNew();
}*/
static void _OnWearHelmetSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnWearHelmetSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnWearHelmetSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnWearHelmetSelendok();
}
/*static void _OnWearHelmetSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnWearHelmetKillfocus();
}*/
/*static void _OnWearHelmetKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnWearHelmetKillfocus();
}*/
static long _OnWearHelmetLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnWearHelmetLoadData();
}
/*static void _OnWearHelmetAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnWearHelmetAddNew();
}*/
static void _OnPutOnHelmetStrapSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnPutOnHelmetStrapSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnPutOnHelmetStrapSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnPutOnHelmetStrapSelendok();
}
/*static void _OnPutOnHelmetStrapSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnPutOnHelmetStrapKillfocus();
}*/
/*static void _OnPutOnHelmetStrapKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnPutOnHelmetStrapKillfocus();
}*/
static long _OnPutOnHelmetStrapLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnPutOnHelmetStrapLoadData();
}
/*static void _OnPutOnHelmetStrapAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnPutOnHelmetStrapAddNew();
}*/
static void _OnHelmetBrokenSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnHelmetBrokenSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnHelmetBrokenSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnHelmetBrokenSelendok();
}
/*static void _OnHelmetBrokenSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnHelmetBrokenKillfocus();
}*/
/*static void _OnHelmetBrokenKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnHelmetBrokenKillfocus();
}*/
static long _OnHelmetBrokenLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnHelmetBrokenLoadData();
}
/*static void _OnHelmetBrokenAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnHelmetBrokenAddNew();
}*/
/*static void _OnHelmetManufacturerChangeFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnHelmetManufacturerChange();
} */
/*static void _OnHelmetManufacturerSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnHelmetManufacturerSetfocus();} */ 
/*static void _OnHelmetManufacturerKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnHelmetManufacturerKillfocus();
} */
static int _OnHelmetManufacturerCheckValueFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnHelmetManufacturerCheckValue();
} 
static void _OnUseAlcoholSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnUseAlcoholSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnUseAlcoholSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnUseAlcoholSelendok();
}
/*static void _OnUseAlcoholSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnUseAlcoholKillfocus();
}*/
/*static void _OnUseAlcoholKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnUseAlcoholKillfocus();
}*/
static long _OnUseAlcoholLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnUseAlcoholLoadData();
}
/*static void _OnUseAlcoholAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnUseAlcoholAddNew();
}*/
static void _OnSensorialSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnSensorialSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSensorialSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnSensorialSelendok();
}
/*static void _OnSensorialSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnSensorialKillfocus();
}*/
/*static void _OnSensorialKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnSensorialKillfocus();
}*/
static long _OnSensorialLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnSensorialLoadData();
}
/*static void _OnSensorialAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnSensorialAddNew();
}*/
/*static void _OnBloodAlcoholConcentrationChangeFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnBloodAlcoholConcentrationChange();
} */
/*static void _OnBloodAlcoholConcentrationSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnBloodAlcoholConcentrationSetfocus();} */ 
/*static void _OnBloodAlcoholConcentrationKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnBloodAlcoholConcentrationKillfocus();
} */
static int _OnBloodAlcoholConcentrationCheckValueFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnBloodAlcoholConcentrationCheckValue();
} 
/*static void _OnBreathAlcoholConcentrationChangeFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnBreathAlcoholConcentrationChange();
} */
/*static void _OnBreathAlcoholConcentrationSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnBreathAlcoholConcentrationSetfocus();} */ 
/*static void _OnBreathAlcoholConcentrationKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnBreathAlcoholConcentrationKillfocus();
} */
static int _OnBreathAlcoholConcentrationCheckValueFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnBreathAlcoholConcentrationCheckValue();
} 
static void _OnCranialTraumaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnCranialTraumaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnCranialTraumaSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnCranialTraumaSelendok();
}
/*static void _OnCranialTraumaSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnCranialTraumaKillfocus();
}*/
/*static void _OnCranialTraumaKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnCranialTraumaKillfocus();
}*/
static long _OnCranialTraumaLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnCranialTraumaLoadData();
}
/*static void _OnCranialTraumaAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnCranialTraumaAddNew();
}*/
static void _OnGlassgowSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnGlassgowSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnGlassgowSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnGlassgowSelendok();
}
/*static void _OnGlassgowSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnGlassgowKillfocus();
}*/
/*static void _OnGlassgowKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnGlassgowKillfocus();
}*/
static long _OnGlassgowLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnGlassgowLoadData();
}
/*static void _OnGlassgowAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnGlassgowAddNew();
}*/
static void _OnSpineTraumaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnSpineTraumaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnSpineTraumaSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnSpineTraumaSelendok();
}
/*static void _OnSpineTraumaSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnSpineTraumaKillfocus();
}*/
/*static void _OnSpineTraumaKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnSpineTraumaKillfocus();
}*/
static long _OnSpineTraumaLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnSpineTraumaLoadData();
}
/*static void _OnSpineTraumaAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnSpineTraumaAddNew();
}*/
static void _OnOtherTraumaSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnOtherTraumaSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOtherTraumaSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnOtherTraumaSelendok();
}
/*static void _OnOtherTraumaSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnOtherTraumaKillfocus();
}*/
/*static void _OnOtherTraumaKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnOtherTraumaKillfocus();
}*/
static long _OnOtherTraumaLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnOtherTraumaLoadData();
}
/*static void _OnOtherTraumaAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnOtherTraumaAddNew();
}*/
static void _OnAdmissionSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnAdmissionSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnAdmissionSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAdmissionSelendok();
}
/*static void _OnAdmissionSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAdmissionKillfocus();
}*/
/*static void _OnAdmissionKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAdmissionKillfocus();
}*/
static long _OnAdmissionLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnAdmissionLoadData();
}
/*static void _OnAdmissionAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnAdmissionAddNew();
}*/
static void _OnEmergencyOperationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnEmergencyOperationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnEmergencyOperationSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnEmergencyOperationSelendok();
}
/*static void _OnEmergencyOperationSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnEmergencyOperationKillfocus();
}*/
/*static void _OnEmergencyOperationKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnEmergencyOperationKillfocus();
}*/
static long _OnEmergencyOperationLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnEmergencyOperationLoadData();
}
/*static void _OnEmergencyOperationAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnEmergencyOperationAddNew();
}*/
static void _OnDeathSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSAccidentDialog* )pWnd)->OnDeathSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnDeathSelendokFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnDeathSelendok();
}
/*static void _OnDeathSetfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnDeathKillfocus();
}*/
/*static void _OnDeathKillfocusFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnDeathKillfocus();
}*/
static long _OnDeathLoadDataFnc(CWnd *pWnd){
	return ((CHMSAccidentDialog *)pWnd)->OnDeathLoadData();
}
/*static void _OnDeathAddNewFnc(CWnd *pWnd){
	((CHMSAccidentDialog *)pWnd)->OnDeathAddNew();
}*/
static void _OnAddSelectFnc(CWnd *pWnd){
	CHMSAccidentDialog *pVw = (CHMSAccidentDialog *)pWnd;
	pVw->OnAddSelect();
} 
static void _OnEditSelectFnc(CWnd *pWnd){
	CHMSAccidentDialog *pVw = (CHMSAccidentDialog *)pWnd;
	pVw->OnEditSelect();
} 
static void _OnDeleteSelectFnc(CWnd *pWnd){
	CHMSAccidentDialog *pVw = (CHMSAccidentDialog *)pWnd;
	pVw->OnDeleteSelect();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CHMSAccidentDialog *pVw = (CHMSAccidentDialog *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CHMSAccidentDialog *pVw = (CHMSAccidentDialog *)pWnd;
	pVw->OnCancelSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSAccidentDialog *pVw = (CHMSAccidentDialog *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddHMSAccidentDialogFnc(CWnd *pWnd){
	 return ((CHMSAccidentDialog*)pWnd)->OnAddHMSAccidentDialog();
} 
static int _OnEditHMSAccidentDialogFnc(CWnd *pWnd){
	 return ((CHMSAccidentDialog*)pWnd)->OnEditHMSAccidentDialog();
} 
static int _OnDeleteHMSAccidentDialogFnc(CWnd *pWnd){
	 return ((CHMSAccidentDialog*)pWnd)->OnDeleteHMSAccidentDialog();
} 
static int _OnSaveHMSAccidentDialogFnc(CWnd *pWnd){
	 return ((CHMSAccidentDialog*)pWnd)->OnSaveHMSAccidentDialog();
} 
static int _OnCancelHMSAccidentDialogFnc(CWnd *pWnd){
	 return ((CHMSAccidentDialog*)pWnd)->OnCancelHMSAccidentDialog();
} 
CHMSAccidentDialog::CHMSAccidentDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 730;
	m_nDlgHeight = 515;
	SetDefaultValues();
}
CHMSAccidentDialog::~CHMSAccidentDialog(){
}
void CHMSAccidentDialog::OnCreateComponents(){
	m_wndGeneralInformation.Create(this, _T("General Information"), 5, 5, 390, 360);
	m_wndHelmetUsedInfor.Create(this, _T("Helmet Used Information"), 395, 5, 725, 210);
	m_wndAlcoholUsedInfor.Create(this, _T("Alcohol Used Information"), 395, 215, 725, 360);
	m_wndTraumaStatus.Create(this, _T("Trauma Status"), 5, 365, 390, 480);
	m_wndTreat.Create(this, _T("Treat"), 395, 365, 725, 480);
	m_wndCauseOfAccidentLabel.Create(this, _T("Cause of Accident"), 10, 30, 170, 55);
	m_wndCauseOfAccident.Create(this,175, 30, 375, 55); 
	m_wndAccidentPlaceLabel.Create(this, _T("Accident Place"), 10, 60, 170, 85);
	m_wndAccidentPlace.Create(this,175, 60, 375, 85); 
	m_wndTransportUsedLabel.Create(this, _T("Transport Used"), 10, 90, 170, 115);
	m_wndTransportUsed.Create(this,175, 90, 375, 115); 
	m_wndTransportCausedAccidentLabel.Create(this, _T("Transport Caused"), 10, 120, 170, 145);
	m_wndTransportCausedAccident.Create(this,175, 120, 375, 145); 
	m_wndExplosiveLabel.Create(this, _T("Explosive"), 10, 150, 170, 175);
	m_wndExplosive.Create(this,175, 150, 375, 175); 
	m_wndAccidentTimeLabel.Create(this, _T("Accident Time"), 10, 180, 170, 205);
	m_wndAccidentTime.Create(this,175, 180, 300, 205); 
	m_wndFirstAidLabel.Create(this, _T("First Aid"), 10, 210, 170, 235);
	m_wndFirstAid.Create(this,175, 210, 300, 235); 
	m_wndFirstAidPlaceLabel.Create(this, _T("First Aid Place"), 10, 240, 170, 265);
	m_wndFirstAidPlace.Create(this,175, 240, 375, 265); 
	m_wndTransportToHospitalLabel.Create(this, _T("Transport To Hospital"), 10, 270, 170, 295);
	m_wndTransportToHospital.Create(this,175, 270, 375, 295); 
	m_wndEmergencyTimeLabel.Create(this, _T("Emergency Time"), 10, 300, 170, 325);
	m_wndEmergencyTime.Create(this,175, 300, 300, 325); 
	m_wndPatientStateLabel.Create(this, _T("Patient State"), 10, 330, 170, 355);
	m_wndPatientState.Create(this,175, 330, 375, 355); 
	m_wndWearHelmetLabel.Create(this, _T("Wear Helmet"), 400, 30, 555, 55);
	m_wndWearHelmet.Create(this,560, 30, 720, 55); 
	m_wndPutOnHelmetStrapLabel.Create(this, _T("Put On Helmet Strap"), 400, 60, 555, 85);
	m_wndPutOnHelmetStrap.Create(this,560, 60, 720, 85); 
	m_wndHelmetBrokenLabel.Create(this, _T("Helmet Broken"), 400, 90, 555, 115);
	m_wndHelmetBroken.Create(this,560, 90, 720, 115); 
	m_wndHelmetManufacturerLabel.Create(this, _T("Helmet Manufacturer"), 400, 120, 555, 145);
	m_wndHelmetManufacturer.Create(this, 560, 120, 720, 205, 1, 0, 1); 
	m_wndUseAlcoholLabel.Create(this, _T("Use Alcohol"), 400, 240, 570, 265);
	m_wndUseAlcohol.Create(this,575, 240, 720, 265); 
	m_wndSensorialLabel.Create(this, _T("Sensorial"), 400, 270, 570, 295);
	m_wndSensorial.Create(this,575, 270, 720, 295); 
	m_wndBloodAlcoholConcentrationLabel.Create(this, _T("Blood Alcohol Concentration"), 400, 300, 570, 325);
	m_wndBloodAlcoholConcentration.Create(this,575, 300, 720, 325); 
	m_wndBreathAlcoholConcentrationLabel.Create(this, _T("Breath Alcohol Concentration"), 400, 330, 570, 355);
	m_wndBreathAlcoholConcentration.Create(this,575, 330, 720, 355); 
	m_wndCranialTraumaLabel.Create(this, _T("Cranial Trauma"), 10, 390, 170, 415);
	m_wndCranialTrauma.Create(this,175, 390, 240, 415); 
	m_wndGlassgowLabel.Create(this, _T("Glassgow"), 245, 390, 310, 415);
	m_wndGlassgow.Create(this,315, 390, 385, 415); 
	m_wndSpineTraumaLabel.Create(this, _T("Spine Trauma"), 10, 420, 170, 445);
	m_wndSpineTrauma.Create(this,175, 420, 385, 445); 
	m_wndOtherTraumaLabel.Create(this, _T("Other Trauma"), 10, 450, 170, 475);
	m_wndOtherTrauma.Create(this,175, 450, 385, 475); 
	m_wndAdmissionLabel.Create(this, _T("Admission"), 400, 390, 560, 415);
	m_wndAdmission.Create(this,565, 390, 720, 415); 
	m_wndEmergencyOperationLabel.Create(this, _T("Emergency Operation"), 400, 420, 560, 445);
	m_wndEmergencyOperation.Create(this,565, 420, 720, 445); 
	m_wndDeathLabel.Create(this, _T("Death"), 400, 450, 560, 475);
	m_wndDeath.Create(this,565, 450, 720, 475); 
	m_wndAdd.Create(this, _T("&Add"), 220, 485, 300, 510);
	m_wndEdit.Create(this, _T("&Edit"), 305, 485, 385, 510);
	m_wndDelete.Create(this, _T("&Delete"), 390, 485, 470, 510);
	m_wndSave.Create(this, _T("&Save"), 475, 485, 555, 510);
	m_wndCancel.Create(this, _T("&Cancel"), 560, 485, 640, 510);
	m_wndClose.Create(this, _T("&Close"), 646, 484, 726, 509);

}
void CHMSAccidentDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndCauseOfAccident.SetCheckValue(true);
	//m_wndAccidentPlace.SetCheckValue(true);
	//m_wndTransportUsed.SetCheckValue(true);
	//m_wndTransportCausedAccident.SetCheckValue(true);
	//m_wndExplosive.SetCheckValue(true);
	m_wndAccidentTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndAccidentTime.SetCheckValue(true);
	//m_wndFirstAid.SetCheckValue(true);
	m_wndFirstAid.LimitText(81);
	//m_wndFirstAidPlace.SetCheckValue(true);
	//m_wndTransportToHospital.SetCheckValue(true);
	m_wndEmergencyTime.SetMax(CDateTime(pMF->GetSysDateTime()));
	m_wndEmergencyTime.SetCheckValue(true);
	//m_wndPatientState.SetCheckValue(true);
	//m_wndWearHelmet.SetCheckValue(true);
	m_wndWearHelmet.LimitText(81);
	//m_wndPutOnHelmetStrap.SetCheckValue(true);
	m_wndPutOnHelmetStrap.LimitText(81);
	//m_wndHelmetBroken.SetCheckValue(true);
	m_wndHelmetBroken.LimitText(81);
	m_wndHelmetManufacturer.SetMultiLine(TRUE);
	m_wndHelmetManufacturer.SetLimitText(81);
	//m_wndHelmetManufacturer.SetCheckValue(true);
	//m_wndUseAlcohol.SetCheckValue(true);
	m_wndUseAlcohol.LimitText(81);
	//m_wndSensorial.SetCheckValue(true);
	m_wndSensorial.LimitText(81);
	m_wndBloodAlcoholConcentration.SetNumberDecimal(0);
	m_wndBreathAlcoholConcentration.SetNumberDecimal(0);
	//m_wndBloodAlcoholConcentration.SetCheckValue(true);
	//m_wndBreathAlcoholConcentration.SetCheckValue(true);
	//m_wndCranialTrauma.SetCheckValue(true);
	m_wndCranialTrauma.LimitText(81);
	//m_wndGlassgow.SetColumnKey(0);
	//m_wndGlassgow.SetCheckValue(true);
	//m_wndSpineTrauma.SetCheckValue(true);
	m_wndSpineTrauma.LimitText(81);
	//m_wndOtherTrauma.SetCheckValue(true);
	//m_wndAdmission.SetCheckValue(true);
	m_wndAdmission.LimitText(81);
	//m_wndEmergencyOperation.SetCheckValue(true);
	m_wndEmergencyOperation.LimitText(81);
	//m_wndDeath.SetCheckValue(true);
	

	m_wndCauseOfAccident.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCauseOfAccident.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndAccidentPlace.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndAccidentPlace.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndTransportUsed.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTransportUsed.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndTransportCausedAccident.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTransportCausedAccident.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndExplosive.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndExplosive.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndFirstAid.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFirstAid.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndFirstAidPlace.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndFirstAidPlace.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndTransportToHospital.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndTransportToHospital.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndPatientState.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPatientState.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndWearHelmet.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndWearHelmet.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndPutOnHelmetStrap.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndPutOnHelmetStrap.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndHelmetBroken.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndHelmetBroken.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndUseAlcohol.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndUseAlcohol.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndSensorial.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSensorial.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);


	m_wndCranialTrauma.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndCranialTrauma.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndGlassgow.InsertColumn(0, _T("Score"), CFMT_TEXT, 70);
	m_wndGlassgow.InsertColumn(1, _T("Description"), CFMT_TEXT, 0);


	m_wndSpineTrauma.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndSpineTrauma.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndOtherTrauma.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndOtherTrauma.InsertColumn(1, _T("Description"), CFMT_TEXT, 250);


	m_wndAdmission.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndAdmission.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndEmergencyOperation.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndEmergencyOperation.InsertColumn(1, _T("Description"), CFMT_TEXT, 150);


	m_wndDeath.InsertColumn(0, _T("ID"), CFMT_TEXT, 50);
	m_wndDeath.InsertColumn(1, _T("Description"), CFMT_TEXT, 200);

	m_hms_accidentTbl.SetTableName(_T("hms_accident"));
	m_hms_accidentTbl.AddField(_T("ha_createdby"), dfText, 15); 
	m_hms_accidentTbl.AddField(_T("ha_createddate"), dfDateTime); 
	m_hms_accidentTbl.AddField(_T("ha_updatedby"), dfText, 15); 
	m_hms_accidentTbl.AddField(_T("ha_updateddate"), dfDateTime); 
	m_hms_accidentTbl.AddField(_T("ha_docno"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_reason"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_material"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_acc_place"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_acc_time"), dfDateTime); 
	m_hms_accidentTbl.AddField(_T("ha_emer_time"), dfDateTime); 
	m_hms_accidentTbl.AddField(_T("ha_first_aid"), dfText, 1); 
	m_hms_accidentTbl.AddField(_T("ha_aid_place"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_transport_to"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_transport_used"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_transport_cause"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_patientstate"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_cranial"), dfText, 1); 
	m_hms_accidentTbl.AddField(_T("ha_glassgow"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_spine"), dfText, 1); 
	m_hms_accidentTbl.AddField(_T("ha_other_trauma"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_admission"), dfText, 1); 
	m_hms_accidentTbl.AddField(_T("ha_emer_operation"), dfText, 1); 
	m_hms_accidentTbl.AddField(_T("ha_death"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_helmet"), dfText, 1); 
	m_hms_accidentTbl.AddField(_T("ha_protected"), dfText, 1); 
	m_hms_accidentTbl.AddField(_T("ha_helmet_mfg"), dfText, 81); 
	m_hms_accidentTbl.AddField(_T("ha_hat_break"), dfText, 1); 
	m_hms_accidentTbl.AddField(_T("ha_wine_beer"), dfText, 1); 
	m_hms_accidentTbl.AddField(_T("ha_sense"), dfText, 1); 
	m_hms_accidentTbl.AddField(_T("ha_blood_per"), dfLong); 
	m_hms_accidentTbl.AddField(_T("ha_breathe_per"), dfLong); 

}
void CHMSAccidentDialog::OnSetWindowEvents()
{
	m_wndCauseOfAccident.SetEvent(WE_SELENDOK, _OnCauseOfAccidentSelendokFnc);
	//m_wndCauseOfAccident.SetEvent(WE_SETFOCUS, _OnCauseOfAccidentSetfocusFnc);
	//m_wndCauseOfAccident.SetEvent(WE_KILLFOCUS, _OnCauseOfAccidentKillfocusFnc);
	m_wndCauseOfAccident.SetEvent(WE_SELCHANGE, _OnCauseOfAccidentSelectChangeFnc);
	m_wndCauseOfAccident.SetEvent(WE_LOADDATA, _OnCauseOfAccidentLoadDataFnc);
	//m_wndCauseOfAccident.SetEvent(WE_ADDNEW, _OnCauseOfAccidentAddNewFnc);
	m_wndAccidentPlace.SetEvent(WE_SELENDOK, _OnAccidentPlaceSelendokFnc);
	//m_wndAccidentPlace.SetEvent(WE_SETFOCUS, _OnAccidentPlaceSetfocusFnc);
	//m_wndAccidentPlace.SetEvent(WE_KILLFOCUS, _OnAccidentPlaceKillfocusFnc);
	m_wndAccidentPlace.SetEvent(WE_SELCHANGE, _OnAccidentPlaceSelectChangeFnc);
	m_wndAccidentPlace.SetEvent(WE_LOADDATA, _OnAccidentPlaceLoadDataFnc);
	//m_wndAccidentPlace.SetEvent(WE_ADDNEW, _OnAccidentPlaceAddNewFnc);
	m_wndTransportUsed.SetEvent(WE_SELENDOK, _OnTransportUsedSelendokFnc);
	//m_wndTransportUsed.SetEvent(WE_SETFOCUS, _OnTransportUsedSetfocusFnc);
	//m_wndTransportUsed.SetEvent(WE_KILLFOCUS, _OnTransportUsedKillfocusFnc);
	m_wndTransportUsed.SetEvent(WE_SELCHANGE, _OnTransportUsedSelectChangeFnc);
	m_wndTransportUsed.SetEvent(WE_LOADDATA, _OnTransportUsedLoadDataFnc);
	//m_wndTransportUsed.SetEvent(WE_ADDNEW, _OnTransportUsedAddNewFnc);
	m_wndTransportCausedAccident.SetEvent(WE_SELENDOK, _OnTransportCausedAccidentSelendokFnc);
	//m_wndTransportCausedAccident.SetEvent(WE_SETFOCUS, _OnTransportCausedAccidentSetfocusFnc);
	//m_wndTransportCausedAccident.SetEvent(WE_KILLFOCUS, _OnTransportCausedAccidentKillfocusFnc);
	m_wndTransportCausedAccident.SetEvent(WE_SELCHANGE, _OnTransportCausedAccidentSelectChangeFnc);
	m_wndTransportCausedAccident.SetEvent(WE_LOADDATA, _OnTransportCausedAccidentLoadDataFnc);
	//m_wndTransportCausedAccident.SetEvent(WE_ADDNEW, _OnTransportCausedAccidentAddNewFnc);
	m_wndExplosive.SetEvent(WE_SELENDOK, _OnExplosiveSelendokFnc);
	//m_wndExplosive.SetEvent(WE_SETFOCUS, _OnExplosiveSetfocusFnc);
	//m_wndExplosive.SetEvent(WE_KILLFOCUS, _OnExplosiveKillfocusFnc);
	m_wndExplosive.SetEvent(WE_SELCHANGE, _OnExplosiveSelectChangeFnc);
	m_wndExplosive.SetEvent(WE_LOADDATA, _OnExplosiveLoadDataFnc);
	//m_wndExplosive.SetEvent(WE_ADDNEW, _OnExplosiveAddNewFnc);
	//m_wndAccidentTime.SetEvent(WE_CHANGE, _OnAccidentTimeChangeFnc);
	//m_wndAccidentTime.SetEvent(WE_SETFOCUS, _OnAccidentTimeSetfocusFnc);
	//m_wndAccidentTime.SetEvent(WE_KILLFOCUS, _OnAccidentTimeKillfocusFnc);
	m_wndAccidentTime.SetEvent(WE_CHECKVALUE, _OnAccidentTimeCheckValueFnc);
	m_wndFirstAid.SetEvent(WE_SELENDOK, _OnFirstAidSelendokFnc);
	//m_wndFirstAid.SetEvent(WE_SETFOCUS, _OnFirstAidSetfocusFnc);
	//m_wndFirstAid.SetEvent(WE_KILLFOCUS, _OnFirstAidKillfocusFnc);
	m_wndFirstAid.SetEvent(WE_SELCHANGE, _OnFirstAidSelectChangeFnc);
	m_wndFirstAid.SetEvent(WE_LOADDATA, _OnFirstAidLoadDataFnc);
	//m_wndFirstAid.SetEvent(WE_ADDNEW, _OnFirstAidAddNewFnc);
	m_wndFirstAidPlace.SetEvent(WE_SELENDOK, _OnFirstAidPlaceSelendokFnc);
	//m_wndFirstAidPlace.SetEvent(WE_SETFOCUS, _OnFirstAidPlaceSetfocusFnc);
	//m_wndFirstAidPlace.SetEvent(WE_KILLFOCUS, _OnFirstAidPlaceKillfocusFnc);
	m_wndFirstAidPlace.SetEvent(WE_SELCHANGE, _OnFirstAidPlaceSelectChangeFnc);
	m_wndFirstAidPlace.SetEvent(WE_LOADDATA, _OnFirstAidPlaceLoadDataFnc);
	//m_wndFirstAidPlace.SetEvent(WE_ADDNEW, _OnFirstAidPlaceAddNewFnc);
	m_wndTransportToHospital.SetEvent(WE_SELENDOK, _OnTransportToHospitalSelendokFnc);
	//m_wndTransportToHospital.SetEvent(WE_SETFOCUS, _OnTransportToHospitalSetfocusFnc);
	//m_wndTransportToHospital.SetEvent(WE_KILLFOCUS, _OnTransportToHospitalKillfocusFnc);
	m_wndTransportToHospital.SetEvent(WE_SELCHANGE, _OnTransportToHospitalSelectChangeFnc);
	m_wndTransportToHospital.SetEvent(WE_LOADDATA, _OnTransportToHospitalLoadDataFnc);
	//m_wndTransportToHospital.SetEvent(WE_ADDNEW, _OnTransportToHospitalAddNewFnc);
	//m_wndEmergencyTime.SetEvent(WE_CHANGE, _OnEmergencyTimeChangeFnc);
	//m_wndEmergencyTime.SetEvent(WE_SETFOCUS, _OnEmergencyTimeSetfocusFnc);
	//m_wndEmergencyTime.SetEvent(WE_KILLFOCUS, _OnEmergencyTimeKillfocusFnc);
	m_wndEmergencyTime.SetEvent(WE_CHECKVALUE, _OnEmergencyTimeCheckValueFnc);
	m_wndPatientState.SetEvent(WE_SELENDOK, _OnPatientStateSelendokFnc);
	//m_wndPatientState.SetEvent(WE_SETFOCUS, _OnPatientStateSetfocusFnc);
	//m_wndPatientState.SetEvent(WE_KILLFOCUS, _OnPatientStateKillfocusFnc);
	m_wndPatientState.SetEvent(WE_SELCHANGE, _OnPatientStateSelectChangeFnc);
	m_wndPatientState.SetEvent(WE_LOADDATA, _OnPatientStateLoadDataFnc);
	//m_wndPatientState.SetEvent(WE_ADDNEW, _OnPatientStateAddNewFnc);
	m_wndWearHelmet.SetEvent(WE_SELENDOK, _OnWearHelmetSelendokFnc);
	//m_wndWearHelmet.SetEvent(WE_SETFOCUS, _OnWearHelmetSetfocusFnc);
	//m_wndWearHelmet.SetEvent(WE_KILLFOCUS, _OnWearHelmetKillfocusFnc);
	m_wndWearHelmet.SetEvent(WE_SELCHANGE, _OnWearHelmetSelectChangeFnc);
	m_wndWearHelmet.SetEvent(WE_LOADDATA, _OnWearHelmetLoadDataFnc);
	//m_wndWearHelmet.SetEvent(WE_ADDNEW, _OnWearHelmetAddNewFnc);
	m_wndPutOnHelmetStrap.SetEvent(WE_SELENDOK, _OnPutOnHelmetStrapSelendokFnc);
	//m_wndPutOnHelmetStrap.SetEvent(WE_SETFOCUS, _OnPutOnHelmetStrapSetfocusFnc);
	//m_wndPutOnHelmetStrap.SetEvent(WE_KILLFOCUS, _OnPutOnHelmetStrapKillfocusFnc);
	m_wndPutOnHelmetStrap.SetEvent(WE_SELCHANGE, _OnPutOnHelmetStrapSelectChangeFnc);
	m_wndPutOnHelmetStrap.SetEvent(WE_LOADDATA, _OnPutOnHelmetStrapLoadDataFnc);
	//m_wndPutOnHelmetStrap.SetEvent(WE_ADDNEW, _OnPutOnHelmetStrapAddNewFnc);
	m_wndHelmetBroken.SetEvent(WE_SELENDOK, _OnHelmetBrokenSelendokFnc);
	//m_wndHelmetBroken.SetEvent(WE_SETFOCUS, _OnHelmetBrokenSetfocusFnc);
	//m_wndHelmetBroken.SetEvent(WE_KILLFOCUS, _OnHelmetBrokenKillfocusFnc);
	m_wndHelmetBroken.SetEvent(WE_SELCHANGE, _OnHelmetBrokenSelectChangeFnc);
	m_wndHelmetBroken.SetEvent(WE_LOADDATA, _OnHelmetBrokenLoadDataFnc);
	//m_wndHelmetBroken.SetEvent(WE_ADDNEW, _OnHelmetBrokenAddNewFnc);
	//m_wndHelmetManufacturer.SetEvent(WE_CHANGE, _OnHelmetManufacturerChangeFnc);
	//m_wndHelmetManufacturer.SetEvent(WE_SETFOCUS, _OnHelmetManufacturerSetfocusFnc);
	//m_wndHelmetManufacturer.SetEvent(WE_KILLFOCUS, _OnHelmetManufacturerKillfocusFnc);
	m_wndHelmetManufacturer.SetEvent(WE_CHECKVALUE, _OnHelmetManufacturerCheckValueFnc);
	m_wndUseAlcohol.SetEvent(WE_SELENDOK, _OnUseAlcoholSelendokFnc);
	//m_wndUseAlcohol.SetEvent(WE_SETFOCUS, _OnUseAlcoholSetfocusFnc);
	//m_wndUseAlcohol.SetEvent(WE_KILLFOCUS, _OnUseAlcoholKillfocusFnc);
	m_wndUseAlcohol.SetEvent(WE_SELCHANGE, _OnUseAlcoholSelectChangeFnc);
	m_wndUseAlcohol.SetEvent(WE_LOADDATA, _OnUseAlcoholLoadDataFnc);
	//m_wndUseAlcohol.SetEvent(WE_ADDNEW, _OnUseAlcoholAddNewFnc);
	m_wndSensorial.SetEvent(WE_SELENDOK, _OnSensorialSelendokFnc);
	//m_wndSensorial.SetEvent(WE_SETFOCUS, _OnSensorialSetfocusFnc);
	//m_wndSensorial.SetEvent(WE_KILLFOCUS, _OnSensorialKillfocusFnc);
	m_wndSensorial.SetEvent(WE_SELCHANGE, _OnSensorialSelectChangeFnc);
	m_wndSensorial.SetEvent(WE_LOADDATA, _OnSensorialLoadDataFnc);
	//m_wndSensorial.SetEvent(WE_ADDNEW, _OnSensorialAddNewFnc);
	//m_wndBloodAlcoholConcentration.SetEvent(WE_CHANGE, _OnBloodAlcoholConcentrationChangeFnc);
	//m_wndBloodAlcoholConcentration.SetEvent(WE_SETFOCUS, _OnBloodAlcoholConcentrationSetfocusFnc);
	//m_wndBloodAlcoholConcentration.SetEvent(WE_KILLFOCUS, _OnBloodAlcoholConcentrationKillfocusFnc);
	m_wndBloodAlcoholConcentration.SetEvent(WE_CHECKVALUE, _OnBloodAlcoholConcentrationCheckValueFnc);
	//m_wndBreathAlcoholConcentration.SetEvent(WE_CHANGE, _OnBreathAlcoholConcentrationChangeFnc);
	//m_wndBreathAlcoholConcentration.SetEvent(WE_SETFOCUS, _OnBreathAlcoholConcentrationSetfocusFnc);
	//m_wndBreathAlcoholConcentration.SetEvent(WE_KILLFOCUS, _OnBreathAlcoholConcentrationKillfocusFnc);
	m_wndBreathAlcoholConcentration.SetEvent(WE_CHECKVALUE, _OnBreathAlcoholConcentrationCheckValueFnc);
	m_wndCranialTrauma.SetEvent(WE_SELENDOK, _OnCranialTraumaSelendokFnc);
	//m_wndCranialTrauma.SetEvent(WE_SETFOCUS, _OnCranialTraumaSetfocusFnc);
	//m_wndCranialTrauma.SetEvent(WE_KILLFOCUS, _OnCranialTraumaKillfocusFnc);
	m_wndCranialTrauma.SetEvent(WE_SELCHANGE, _OnCranialTraumaSelectChangeFnc);
	m_wndCranialTrauma.SetEvent(WE_LOADDATA, _OnCranialTraumaLoadDataFnc);
	//m_wndCranialTrauma.SetEvent(WE_ADDNEW, _OnCranialTraumaAddNewFnc);
	m_wndGlassgow.SetEvent(WE_SELENDOK, _OnGlassgowSelendokFnc);
	//m_wndGlassgow.SetEvent(WE_SETFOCUS, _OnGlassgowSetfocusFnc);
	//m_wndGlassgow.SetEvent(WE_KILLFOCUS, _OnGlassgowKillfocusFnc);
	m_wndGlassgow.SetEvent(WE_SELCHANGE, _OnGlassgowSelectChangeFnc);
	m_wndGlassgow.SetEvent(WE_LOADDATA, _OnGlassgowLoadDataFnc);
	//m_wndGlassgow.SetEvent(WE_ADDNEW, _OnGlassgowAddNewFnc);
	m_wndSpineTrauma.SetEvent(WE_SELENDOK, _OnSpineTraumaSelendokFnc);
	//m_wndSpineTrauma.SetEvent(WE_SETFOCUS, _OnSpineTraumaSetfocusFnc);
	//m_wndSpineTrauma.SetEvent(WE_KILLFOCUS, _OnSpineTraumaKillfocusFnc);
	m_wndSpineTrauma.SetEvent(WE_SELCHANGE, _OnSpineTraumaSelectChangeFnc);
	m_wndSpineTrauma.SetEvent(WE_LOADDATA, _OnSpineTraumaLoadDataFnc);
	//m_wndSpineTrauma.SetEvent(WE_ADDNEW, _OnSpineTraumaAddNewFnc);
	m_wndOtherTrauma.SetEvent(WE_SELENDOK, _OnOtherTraumaSelendokFnc);
	//m_wndOtherTrauma.SetEvent(WE_SETFOCUS, _OnOtherTraumaSetfocusFnc);
	//m_wndOtherTrauma.SetEvent(WE_KILLFOCUS, _OnOtherTraumaKillfocusFnc);
	m_wndOtherTrauma.SetEvent(WE_SELCHANGE, _OnOtherTraumaSelectChangeFnc);
	m_wndOtherTrauma.SetEvent(WE_LOADDATA, _OnOtherTraumaLoadDataFnc);
	//m_wndOtherTrauma.SetEvent(WE_ADDNEW, _OnOtherTraumaAddNewFnc);
	m_wndAdmission.SetEvent(WE_SELENDOK, _OnAdmissionSelendokFnc);
	//m_wndAdmission.SetEvent(WE_SETFOCUS, _OnAdmissionSetfocusFnc);
	//m_wndAdmission.SetEvent(WE_KILLFOCUS, _OnAdmissionKillfocusFnc);
	m_wndAdmission.SetEvent(WE_SELCHANGE, _OnAdmissionSelectChangeFnc);
	m_wndAdmission.SetEvent(WE_LOADDATA, _OnAdmissionLoadDataFnc);
	//m_wndAdmission.SetEvent(WE_ADDNEW, _OnAdmissionAddNewFnc);
	m_wndEmergencyOperation.SetEvent(WE_SELENDOK, _OnEmergencyOperationSelendokFnc);
	//m_wndEmergencyOperation.SetEvent(WE_SETFOCUS, _OnEmergencyOperationSetfocusFnc);
	//m_wndEmergencyOperation.SetEvent(WE_KILLFOCUS, _OnEmergencyOperationKillfocusFnc);
	m_wndEmergencyOperation.SetEvent(WE_SELCHANGE, _OnEmergencyOperationSelectChangeFnc);
	m_wndEmergencyOperation.SetEvent(WE_LOADDATA, _OnEmergencyOperationLoadDataFnc);
	//m_wndEmergencyOperation.SetEvent(WE_ADDNEW, _OnEmergencyOperationAddNewFnc);
	m_wndDeath.SetEvent(WE_SELENDOK, _OnDeathSelendokFnc);
	//m_wndDeath.SetEvent(WE_SETFOCUS, _OnDeathSetfocusFnc);
	//m_wndDeath.SetEvent(WE_KILLFOCUS, _OnDeathKillfocusFnc);
	m_wndDeath.SetEvent(WE_SELCHANGE, _OnDeathSelectChangeFnc);
	m_wndDeath.SetEvent(WE_LOADDATA, _OnDeathLoadDataFnc);
	//m_wndDeath.SetEvent(WE_ADDNEW, _OnDeathAddNewFnc);
	m_wndAdd.SetEvent(WE_CLICK, _OnAddSelectFnc);
	m_wndEdit.SetEvent(WE_CLICK, _OnEditSelectFnc);
	m_wndDelete.SetEvent(WE_CLICK, _OnDeleteSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);

	//m_nDocNo = 10006016;
	GetDataToScreen();
}
void CHMSAccidentDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndCauseOfAccident.GetDlgCtrlID(), m_szCauseOfAccidentKey);
	DDX_TextEx(pDX, m_wndAccidentPlace.GetDlgCtrlID(), m_szAccidentPlaceKey);
	DDX_TextEx(pDX, m_wndTransportUsed.GetDlgCtrlID(), m_szTransportUsedKey);
	DDX_TextEx(pDX, m_wndTransportCausedAccident.GetDlgCtrlID(), m_szTransportCausedAccidentKey);
	DDX_TextEx(pDX, m_wndExplosive.GetDlgCtrlID(), m_szExplosiveKey);
	DDX_TextEx(pDX, m_wndAccidentTime.GetDlgCtrlID(), m_szAccidentTime);
	DDX_TextEx(pDX, m_wndFirstAid.GetDlgCtrlID(), m_szFirstAidKey);
	DDX_TextEx(pDX, m_wndFirstAidPlace.GetDlgCtrlID(), m_szFirstAidPlaceKey);
	DDX_TextEx(pDX, m_wndTransportToHospital.GetDlgCtrlID(), m_szTransportToHospitalKey);
	DDX_TextEx(pDX, m_wndEmergencyTime.GetDlgCtrlID(), m_szEmergencyTime);
	DDX_TextEx(pDX, m_wndPatientState.GetDlgCtrlID(), m_szPatientStateKey);
	DDX_TextEx(pDX, m_wndWearHelmet.GetDlgCtrlID(), m_szWearHelmetKey);
	DDX_TextEx(pDX, m_wndPutOnHelmetStrap.GetDlgCtrlID(), m_szPutOnHelmetStrapKey);
	DDX_TextEx(pDX, m_wndHelmetBroken.GetDlgCtrlID(), m_szHelmetBrokenKey);
	DDX_Text(pDX, m_wndHelmetManufacturer.GetDlgCtrlID(), m_szHelmetManufacturer);
	DDX_TextEx(pDX, m_wndUseAlcohol.GetDlgCtrlID(), m_szUseAlcoholKey);
	DDX_TextEx(pDX, m_wndSensorial.GetDlgCtrlID(), m_szSensorialKey);
	DDX_Text(pDX, m_wndBloodAlcoholConcentration.GetDlgCtrlID(), m_nBloodAlcoholConcentration);
	DDX_Text(pDX, m_wndBreathAlcoholConcentration.GetDlgCtrlID(), m_nBreathAlcoholConcentration);
	DDX_TextEx(pDX, m_wndCranialTrauma.GetDlgCtrlID(), m_szCranialTraumaKey);
	DDX_TextEx(pDX, m_wndGlassgow.GetDlgCtrlID(), m_szGlassgowKey);
	DDX_TextEx(pDX, m_wndSpineTrauma.GetDlgCtrlID(), m_szSpineTraumaKey);
	DDX_TextEx(pDX, m_wndOtherTrauma.GetDlgCtrlID(), m_szOtherTraumaKey);
	DDX_TextEx(pDX, m_wndAdmission.GetDlgCtrlID(), m_szAdmissionKey);
	DDX_TextEx(pDX, m_wndEmergencyOperation.GetDlgCtrlID(), m_szEmergencyOperationKey);
	DDX_TextEx(pDX, m_wndDeath.GetDlgCtrlID(), m_szDeathKey);

}
void CHMSAccidentDialog::GetDataToScreen()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM hms_accident WHERE ha_docno=%ld"), m_nDocNo);
	rs.ExecSQL(szSQL);
	if (!rs.IsEOF())
	{
		rs.GetValue(_T("ha_reason"), m_szCauseOfAccidentKey);
		rs.GetValue(_T("ha_material"), m_szExplosiveKey);
		rs.GetValue(_T("ha_acc_place"), m_szAccidentPlaceKey);
		rs.GetValue(_T("ha_acc_time"), m_szAccidentTime);
		rs.GetValue(_T("ha_emer_time"), m_szEmergencyTime);
		rs.GetValue(_T("ha_first_aid"), m_szFirstAidKey);
		rs.GetValue(_T("ha_aid_place"), m_szFirstAidPlaceKey);
		rs.GetValue(_T("ha_transport_to"), m_szTransportToHospitalKey);
		rs.GetValue(_T("ha_transport_used"), m_szTransportUsedKey);
		rs.GetValue(_T("ha_transport_cause"), m_szTransportCausedAccidentKey);
		rs.GetValue(_T("ha_patientstate"), m_szPatientStateKey);
		rs.GetValue(_T("ha_cranial"), m_szCranialTraumaKey);
		rs.GetValue(_T("ha_glassgow"), m_szGlassgowKey);
		rs.GetValue(_T("ha_spine"), m_szSpineTraumaKey);
		rs.GetValue(_T("ha_other_trauma"), m_szOtherTraumaKey);
		rs.GetValue(_T("ha_admission"), m_szAdmissionKey);
		rs.GetValue(_T("ha_emer_operation"), m_szEmergencyOperationKey);
		rs.GetValue(_T("ha_death"), m_szDeathKey);
		rs.GetValue(_T("ha_helmet"), m_szWearHelmetKey);
		rs.GetValue(_T("ha_protected"), m_szPutOnHelmetStrapKey);
		rs.GetValue(_T("ha_helmet_mfg"), m_szHelmetManufacturer);
		rs.GetValue(_T("ha_hat_break"), m_szHelmetBrokenKey);
		rs.GetValue(_T("ha_wine_beer"), m_szUseAlcoholKey);
		rs.GetValue(_T("ha_sense"), m_szSensorialKey);
		rs.GetValue(_T("ha_blood_per"), m_nBloodAlcoholConcentration);
		rs.GetValue(_T("ha_breathe_per"), m_nBreathAlcoholConcentration);
		SetMode(VM_VIEW);
	}
	else
		SetMode(VM_NONE);

}
void CHMSAccidentDialog::GetScreenToData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateData(TRUE);
	m_hms_accidentTbl.SetValue(_T("ha_createdby"), pMF->GetCurrentUser());
	m_hms_accidentTbl.SetValue(_T("ha_createddate"), pMF->GetSysDateTime());
	m_hms_accidentTbl.SetValue(_T("ha_updatedby"), pMF->GetCurrentUser());
	m_hms_accidentTbl.SetValue(_T("ha_updateddate"), pMF->GetSysDateTime());
	m_hms_accidentTbl.SetValue(_T("ha_docno"), m_nDocNo);
	m_hms_accidentTbl.SetValue(_T("ha_reason"), m_szCauseOfAccidentKey);
	m_hms_accidentTbl.SetValue(_T("ha_material"), m_szExplosiveKey);
	m_hms_accidentTbl.SetValue(_T("ha_acc_place"), m_szAccidentPlaceKey);
	m_hms_accidentTbl.SetValue(_T("ha_acc_time"), m_szAccidentTime);
	m_hms_accidentTbl.SetValue(_T("ha_emer_time"), m_szEmergencyTime);
	m_hms_accidentTbl.SetValue(_T("ha_first_aid"), m_szFirstAidKey);
	m_hms_accidentTbl.SetValue(_T("ha_aid_place"), m_szFirstAidPlaceKey);
	m_hms_accidentTbl.SetValue(_T("ha_transport_to"), m_szTransportToHospitalKey);
	m_hms_accidentTbl.SetValue(_T("ha_transport_used"), m_szTransportUsedKey);
	m_hms_accidentTbl.SetValue(_T("ha_transport_cause"), m_szTransportCausedAccidentKey);
	m_hms_accidentTbl.SetValue(_T("ha_patientstate"), m_szPatientStateKey);
	m_hms_accidentTbl.SetValue(_T("ha_cranial"), m_szCranialTraumaKey);
	m_hms_accidentTbl.SetValue(_T("ha_glassgow"), m_szGlassgowKey);
	m_hms_accidentTbl.SetValue(_T("ha_spine"), m_szSpineTraumaKey);
	m_hms_accidentTbl.SetValue(_T("ha_other_trauma"), m_szOtherTraumaKey);
	m_hms_accidentTbl.SetValue(_T("ha_admission"), m_szAdmissionKey);
	m_hms_accidentTbl.SetValue(_T("ha_emer_operation"), m_szEmergencyOperationKey);
	m_hms_accidentTbl.SetValue(_T("ha_death"), m_szDeathKey);
	m_hms_accidentTbl.SetValue(_T("ha_helmet"), m_szWearHelmetKey);
	m_hms_accidentTbl.SetValue(_T("ha_protected"), m_szPutOnHelmetStrapKey);
	m_hms_accidentTbl.SetValue(_T("ha_helmet_mfg"), m_szHelmetManufacturer);
	m_hms_accidentTbl.SetValue(_T("ha_hat_break"), m_szHelmetBrokenKey);
	m_hms_accidentTbl.SetValue(_T("ha_wine_beer"), m_szUseAlcoholKey);
	m_hms_accidentTbl.SetValue(_T("ha_sense"), m_szSensorialKey);
	m_hms_accidentTbl.SetValue(_T("ha_blood_per"), m_nBloodAlcoholConcentration);
	m_hms_accidentTbl.SetValue(_T("ha_breathe_per"), m_nBreathAlcoholConcentration);

}
void CHMSAccidentDialog::SetDefaultValues(){

	m_szCauseOfAccidentKey.Empty();
	m_szAccidentPlaceKey.Empty();
	m_szTransportUsedKey.Empty();
	m_szTransportCausedAccidentKey.Empty();
	m_szExplosiveKey.Empty();
	m_szAccidentTime.Empty();
	m_szFirstAidKey.Empty();
	m_szFirstAidPlaceKey.Empty();
	m_szTransportToHospitalKey.Empty();
	m_szEmergencyTime.Empty();
	m_szPatientStateKey.Empty();
	m_szWearHelmetKey.Empty();
	m_szPutOnHelmetStrapKey.Empty();
	m_szHelmetBrokenKey.Empty();
	m_szHelmetManufacturer.Empty();
	m_szUseAlcoholKey.Empty();
	m_szSensorialKey.Empty();
	m_nBloodAlcoholConcentration=0;
	m_nBreathAlcoholConcentration=0;
	m_szCranialTraumaKey.Empty();
	m_szGlassgowKey.Empty();
	m_szSpineTraumaKey.Empty();
	m_szOtherTraumaKey.Empty();
	m_szAdmissionKey.Empty();
	m_szEmergencyOperationKey.Empty();
	m_szDeathKey.Empty();

}
int CHMSAccidentDialog::SetMode(int nMode)
{
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 		CString szSQL; 
 		CRecord rs(&pMF->m_db); 
  		switch(nMode)
		{ 
 		case VM_ADD: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1); 
 			SetDefaultValues();
			SetControlState(3);
			m_wndGlassgow.EnableWindow(FALSE);
			m_wndSensorial.EnableWindow(FALSE);
			m_wndBloodAlcoholConcentration.EnableWindow(FALSE);
			m_wndBreathAlcoholConcentration.EnableWindow(FALSE);
			m_wndEmergencyOperation.EnableWindow(FALSE);
			m_wndCauseOfAccident.SetFocus();
			m_szEmergencyTime = pMF->GetSysDateTime();
 			break; 
 		case VM_EDIT: 
 			EnableControls(TRUE); 
 			EnableButtons(TRUE, 3, 4, 5, -1);
			SetControlState(3);
			m_wndGlassgow.EnableWindow(FALSE);
			m_wndSensorial.EnableWindow(FALSE);
			m_wndBloodAlcoholConcentration.EnableWindow(FALSE);
			m_wndBreathAlcoholConcentration.EnableWindow(FALSE);
			m_wndEmergencyOperation.EnableWindow(FALSE);
			OnCauseOfAccidentSelendok();
			OnWearHelmetSelendok();
			OnUseAlcoholSelendok();
			OnCranialTraumaSelendok();
			OnAdmissionSelendok();
			m_wndCauseOfAccident.SetFocus();
 			break; 
 		case VM_VIEW: 
 			EnableControls(FALSE); 
 			EnableButtons(FALSE, 0, 3, 4, -1);
			m_wndEdit.SetFocus();
 			break; 
 		case VM_NONE: 
 			EnableControls(FALSE); 
 			EnableButtons(TRUE, 0, 5, -1);
			m_wndAdd.SetFocus();
 			SetDefaultValues(); 
 			break; 
 		}; 
 		UpdateData(FALSE); 
 		return nOldMode; 
}
void CHMSAccidentDialog::OnCauseOfAccidentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnCauseOfAccidentSelendok()
{
	UpdateData(TRUE);
	if (ToInt(m_szCauseOfAccidentKey) == 1 || ToInt(m_szCauseOfAccidentKey) == 2)
	{
		SetControlState(1);
	}
	/*else if (ToInt(m_szCauseOfAccidentKey) == 3)
	{
		SetControlState(2);
	}*/
	else
	{
		SetControlState(2);
	}
	UpdateData(FALSE);
}
/*void CHMSAccidentDialog::OnCauseOfAccidentSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnCauseOfAccidentKillfocus(){
	
}*/
long CHMSAccidentDialog::OnCauseOfAccidentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndCauseOfAccident.IsSearchKey() && ToInt(m_szCauseOfAccidentKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szCauseOfAccidentKey);
	}
	m_wndCauseOfAccident.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_reason' %s ORDER BY CAST(ss_code AS INT)"), szWhere); 
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCauseOfAccident.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnCauseOfAccidentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnAccidentPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnAccidentPlaceSelendok(){
	 
}
/*void CHMSAccidentDialog::OnAccidentPlaceSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnAccidentPlaceKillfocus(){
	
}*/
long CHMSAccidentDialog::OnAccidentPlaceLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndAccidentPlace.IsSearchKey() && ToInt(m_szAccidentPlaceKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szAccidentPlaceKey);
	}
	m_wndAccidentPlace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_place' %s ORDER BY CAST(ss_code AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAccidentPlace.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnAccidentPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnTransportUsedSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnTransportUsedSelendok(){
	 
}
/*void CHMSAccidentDialog::OnTransportUsedSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnTransportUsedKillfocus(){
	
}*/
long CHMSAccidentDialog::OnTransportUsedLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndTransportUsed.IsSearchKey() && ToInt(m_szTransportUsedKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szTransportUsedKey);
	}
	m_wndTransportUsed.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_transused' %s ORDER BY CAST(ss_code AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransportUsed.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnTransportUsedAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnTransportCausedAccidentSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnTransportCausedAccidentSelendok(){
	 
}
/*void CHMSAccidentDialog::OnTransportCausedAccidentSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnTransportCausedAccidentKillfocus(){
	
}*/
long CHMSAccidentDialog::OnTransportCausedAccidentLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndTransportCausedAccident.IsSearchKey() && ToInt(m_szTransportCausedAccidentKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szTransportCausedAccidentKey);
	}
	m_wndTransportCausedAccident.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_transcaused' %s ORDER BY CAST(ss_code AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransportCausedAccident.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnTransportCausedAccidentAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnExplosiveSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnExplosiveSelendok(){
	 
}
/*void CHMSAccidentDialog::OnExplosiveSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnExplosiveKillfocus(){
	
}*/
long CHMSAccidentDialog::OnExplosiveLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndExplosive.IsSearchKey() && ToInt(m_szExplosiveKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szExplosiveKey);
	}
	m_wndExplosive.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_explosive' %s ORDER BY CAST(ss_code AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndExplosive.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnExplosiveAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAccidentDialog::OnAccidentTimeChange(){
	
} */
/*void CHMSAccidentDialog::OnAccidentTimeSetfocus(){
	
} */
/*void CHMSAccidentDialog::OnAccidentTimeKillfocus(){
	
} */
int CHMSAccidentDialog::OnAccidentTimeCheckValue(){
	return 0;
} 
void CHMSAccidentDialog::OnFirstAidSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnFirstAidSelendok(){
	 
}
/*void CHMSAccidentDialog::OnFirstAidSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnFirstAidKillfocus(){
	
}*/
long CHMSAccidentDialog::OnFirstAidLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndFirstAid.IsSearchKey() && !m_szFirstAidKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szFirstAidKey);
	}
	m_wndFirstAid.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_firstaid' %s ORDER BY ss_code DESC"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFirstAid.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnFirstAidAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnFirstAidPlaceSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnFirstAidPlaceSelendok(){
	 
}
/*void CHMSAccidentDialog::OnFirstAidPlaceSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnFirstAidPlaceKillfocus(){
	
}*/
long CHMSAccidentDialog::OnFirstAidPlaceLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndFirstAidPlace.IsSearchKey() && ToInt(m_szFirstAidPlaceKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szFirstAidPlaceKey);
	}
	m_wndFirstAidPlace.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_aidplace' %s ORDER BY CAST(ss_code AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndFirstAidPlace.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnFirstAidPlaceAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnTransportToHospitalSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnTransportToHospitalSelendok(){
	 
}
/*void CHMSAccidentDialog::OnTransportToHospitalSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnTransportToHospitalKillfocus(){
	
}*/
long CHMSAccidentDialog::OnTransportToHospitalLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndTransportToHospital.IsSearchKey() && ToInt(m_szTransportToHospitalKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szTransportToHospitalKey);
	}
	m_wndTransportToHospital.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_transto' %s ORDER BY CAST(ss_code AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTransportToHospital.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnTransportToHospitalAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAccidentDialog::OnEmergencyTimeChange(){
	
} */
/*void CHMSAccidentDialog::OnEmergencyTimeSetfocus(){
	
} */
/*void CHMSAccidentDialog::OnEmergencyTimeKillfocus(){
	
} */
int CHMSAccidentDialog::OnEmergencyTimeCheckValue()
{
	if (CompareDateTime(m_szEmergencyTime, m_szAccidentTime) <= 0)
	{
		m_wndEmergencyTime.SetToolTipMessage(_T("This value must be greater than Accident Time"));
		return -1;
	}
	return 0;
} 
void CHMSAccidentDialog::OnPatientStateSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnPatientStateSelendok(){
	 
}
/*void CHMSAccidentDialog::OnPatientStateSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnPatientStateKillfocus(){
	
}*/
long CHMSAccidentDialog::OnPatientStateLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndPatientState.IsSearchKey() && ToInt(m_szPatientStateKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szPatientStateKey);
	}
	m_wndPatientState.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_patientstate' %s ORDER BY CAST(ss_code AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPatientState.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnPatientStateAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnWearHelmetSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnWearHelmetSelendok()
{
	UpdateData(TRUE);
	if (m_szWearHelmetKey.Trim().MakeUpper() == _T("Y"))
	{
		m_wndPutOnHelmetStrap.EnableWindow(TRUE);
		m_wndHelmetBroken.EnableWindow(TRUE);
		m_wndHelmetManufacturer.EnableWindow(TRUE);
	}
	else
	{
		m_wndPutOnHelmetStrap.EnableWindow(FALSE);
		m_wndHelmetBroken.EnableWindow(FALSE);
		m_wndHelmetManufacturer.EnableWindow(FALSE);
	}
	UpdateData(FALSE);
}
/*void CHMSAccidentDialog::OnWearHelmetSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnWearHelmetKillfocus(){
	
}*/
long CHMSAccidentDialog::OnWearHelmetLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndWearHelmet.IsSearchKey() && !m_szWearHelmetKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szWearHelmetKey);
	}
	m_wndWearHelmet.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_wearhelmet' %s ORDER BY ss_code DESC"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndWearHelmet.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnWearHelmetAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnPutOnHelmetStrapSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnPutOnHelmetStrapSelendok(){
	 
}
/*void CHMSAccidentDialog::OnPutOnHelmetStrapSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnPutOnHelmetStrapKillfocus(){
	
}*/
long CHMSAccidentDialog::OnPutOnHelmetStrapLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndPutOnHelmetStrap.IsSearchKey() && !m_szPutOnHelmetStrapKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szPutOnHelmetStrapKey);
	}
	m_wndPutOnHelmetStrap.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_putstrap' %s ORDER BY ss_code DESC"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndPutOnHelmetStrap.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnPutOnHelmetStrapAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnHelmetBrokenSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnHelmetBrokenSelendok(){
	 
}
/*void CHMSAccidentDialog::OnHelmetBrokenSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnHelmetBrokenKillfocus(){
	
}*/
long CHMSAccidentDialog::OnHelmetBrokenLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndHelmetBroken.IsSearchKey() && !m_szHelmetBrokenKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szHelmetBrokenKey);
	}
	m_wndHelmetBroken.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_helmetbroken' %s ORDER BY ss_code DESC"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndHelmetBroken.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnHelmetBrokenAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAccidentDialog::OnHelmetManufacturerChange(){
	
} */
/*void CHMSAccidentDialog::OnHelmetManufacturerSetfocus(){
	
} */
/*void CHMSAccidentDialog::OnHelmetManufacturerKillfocus(){
	
} */
int CHMSAccidentDialog::OnHelmetManufacturerCheckValue(){
	return 0;
} 
void CHMSAccidentDialog::OnUseAlcoholSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnUseAlcoholSelendok()
{
	UpdateData(TRUE);
	if (m_szUseAlcoholKey.Trim().MakeUpper() == _T("Y"))
	{
		m_wndSensorial.EnableWindow(TRUE);
		m_wndBloodAlcoholConcentration.EnableWindow(TRUE);
		m_wndBreathAlcoholConcentration.EnableWindow(TRUE);
	}
	else
	{
		m_wndSensorial.EnableWindow(FALSE);
		m_wndBloodAlcoholConcentration.EnableWindow(FALSE);
		m_wndBreathAlcoholConcentration.EnableWindow(FALSE);
	}
	UpdateData(FALSE);
}
/*void CHMSAccidentDialog::OnUseAlcoholSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnUseAlcoholKillfocus(){
	
}*/
long CHMSAccidentDialog::OnUseAlcoholLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndUseAlcohol.IsSearchKey() && !m_szUseAlcoholKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szUseAlcoholKey);
	}
	m_wndUseAlcohol.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_usealcohol' %s ORDER BY ss_code DESC"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndUseAlcohol.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnUseAlcoholAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnSensorialSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnSensorialSelendok(){
	 
}
/*void CHMSAccidentDialog::OnSensorialSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnSensorialKillfocus(){
	
}*/
long CHMSAccidentDialog::OnSensorialLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndSensorial.IsSearchKey() && !m_szSensorialKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSensorialKey);
	}
	m_wndSensorial.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_sensorial' %s ORDER BY CAST(ss_code AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSensorial.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnSensorialAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CHMSAccidentDialog::OnBloodAlcoholConcentrationChange(){
	
} */
/*void CHMSAccidentDialog::OnBloodAlcoholConcentrationSetfocus(){
	
} */
/*void CHMSAccidentDialog::OnBloodAlcoholConcentrationKillfocus(){
	
} */
int CHMSAccidentDialog::OnBloodAlcoholConcentrationCheckValue()
{
	if (m_nBloodAlcoholConcentration < 0)
		return -1;
	return 0;
} 
/*void CHMSAccidentDialog::OnBreathAlcoholConcentrationChange(){
	
} */
/*void CHMSAccidentDialog::OnBreathAlcoholConcentrationSetfocus(){
	
} */
/*void CHMSAccidentDialog::OnBreathAlcoholConcentrationKillfocus(){
	
} */
int CHMSAccidentDialog::OnBreathAlcoholConcentrationCheckValue()
{
	if (m_nBreathAlcoholConcentration < 0)
		return -1;
	return 0;
} 
void CHMSAccidentDialog::OnCranialTraumaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnCranialTraumaSelendok()
{
	UpdateData(TRUE);
	if (m_szCranialTraumaKey.Trim().MakeUpper() == _T("Y"))
		m_wndGlassgow.EnableWindow(TRUE);
	else
		m_wndGlassgow.EnableWindow(FALSE);
	UpdateData(FALSE);
}
/*void CHMSAccidentDialog::OnCranialTraumaSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnCranialTraumaKillfocus(){
	
}*/
long CHMSAccidentDialog::OnCranialTraumaLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndCranialTrauma.IsSearchKey() && !m_szCranialTraumaKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szCranialTraumaKey);
	}
	m_wndCranialTrauma.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_cranial' %s ORDER BY ss_code DESC"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndCranialTrauma.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnCranialTraumaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnGlassgowSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnGlassgowSelendok()
{
}
/*void CHMSAccidentDialog::OnGlassgowSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnGlassgowKillfocus(){
	
}*/
long CHMSAccidentDialog::OnGlassgowLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndGlassgow.IsSearchKey() && ToInt(m_szGlassgowKey) > 0)
	{
		szWhere.Format(_T(" AND ss_desc='%s' "), m_szGlassgowKey);
	}
	m_wndGlassgow.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_desc AS Score, ss_desc AS Description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_glassgow' %s ORDER BY CAST(ss_desc AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndGlassgow.AddItems(
			rs.GetValue(_T("Score")), 
			rs.GetValue(_T("Description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnGlassgowAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnSpineTraumaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnSpineTraumaSelendok(){
	 
}
/*void CHMSAccidentDialog::OnSpineTraumaSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnSpineTraumaKillfocus(){
	
}*/
long CHMSAccidentDialog::OnSpineTraumaLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndSpineTrauma.IsSearchKey() && !m_szSpineTraumaKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szSpineTraumaKey);
	}
	m_wndSpineTrauma.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_spine' %s ORDER BY ss_code DESC"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndSpineTrauma.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnSpineTraumaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnOtherTraumaSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnOtherTraumaSelendok(){
	 
}
/*void CHMSAccidentDialog::OnOtherTraumaSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnOtherTraumaKillfocus(){
	
}*/
long CHMSAccidentDialog::OnOtherTraumaLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndOtherTrauma.IsSearchKey() && ToInt(m_szOtherTraumaKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szOtherTraumaKey);
	}
	m_wndOtherTrauma.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_othertrauma' %s ORDER BY CAST(ss_code AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOtherTrauma.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnOtherTraumaAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnAdmissionSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnAdmissionSelendok()
{
	UpdateData(TRUE);
	if (m_szAdmissionKey.Trim().MakeUpper() == _T("Y"))
	{
		m_wndEmergencyOperation.EnableWindow(TRUE);
		//m_wndEmergencyOperation.SetCheckValue(true);
	}
	else
	{
		m_wndEmergencyOperation.EnableWindow(FALSE);
		//m_wndEmergencyOperation.SetCheckValue(false);
	}
}
/*void CHMSAccidentDialog::OnAdmissionSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnAdmissionKillfocus(){
	
}*/
long CHMSAccidentDialog::OnAdmissionLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndAdmission.IsSearchKey() && !m_szAdmissionKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szAdmissionKey);
	}
	m_wndAdmission.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_admission' %s ORDER BY ss_code DESC"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndAdmission.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnAdmissionAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnEmergencyOperationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnEmergencyOperationSelendok(){
	 
}
/*void CHMSAccidentDialog::OnEmergencyOperationSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnEmergencyOperationKillfocus(){
	
}*/
long CHMSAccidentDialog::OnEmergencyOperationLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndEmergencyOperation.IsSearchKey() && !m_szEmergencyOperationKey.IsEmpty())
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szEmergencyOperationKey);
	}
	m_wndEmergencyOperation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_operation' %s ORDER BY ss_code DESC"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndEmergencyOperation.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnEmergencyOperationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnDeathSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSAccidentDialog::OnDeathSelendok(){
	 
}
/*void CHMSAccidentDialog::OnDeathSetfocus(){
	
}*/
/*void CHMSAccidentDialog::OnDeathKillfocus(){
	
}*/
long CHMSAccidentDialog::OnDeathLoadData()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	szWhere.Empty();
	if(m_wndDeath.IsSearchKey() && ToInt(m_szDeathKey) > 0)
	{
		szWhere.Format(_T(" AND ss_code='%s' "), m_szDeathKey);
	}
	m_wndDeath.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT ss_code AS id, ss_desc AS description FROM sys_sel")\
		         _T(" WHERE ss_id='hms_accident_death' %s ORDER BY CAST(ss_code AS INT)"), szWhere);
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDeath.AddItems(
			rs.GetValue(_T("id")), 
			rs.GetValue(_T("description")), NULL);
		rs.MoveNext();
	}
	return nCount;
}
/*void CHMSAccidentDialog::OnDeathAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSAccidentDialog::OnAddSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnAddHMSAccidentDialog();
} 
void CHMSAccidentDialog::OnEditSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnEditHMSAccidentDialog();
} 
void CHMSAccidentDialog::OnDeleteSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnDeleteHMSAccidentDialog();
} 
void CHMSAccidentDialog::OnSaveSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnSaveHMSAccidentDialog();
} 
void CHMSAccidentDialog::OnCancelSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	OnCancelHMSAccidentDialog();
} 
void CHMSAccidentDialog::OnCloseSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CDialog::OnCancel();
} 
int CHMSAccidentDialog::OnAddHMSAccidentDialog()
{
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSAccidentDialog::OnEditHMSAccidentDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSAccidentDialog::OnDeleteHMSAccidentDialog()
{
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL; 
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO) 
 		return -1; 
	szSQL.Format(_T("DELETE FROM hms_accident WHERE ha_docno=%ld"), m_nDocNo);
	//MessageBox(szSQL);
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret >= 0)
	{ 
		GetDataToScreen();
 		//OnCancelHMSAccidentDialog(); 
 	}
	return 0;
}
int CHMSAccidentDialog::OnSaveHMSAccidentDialog()
{
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT) 
 		return -1; 
 	if(!IsValidateData()) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
 	CString szSQL;
 	if(GetMode() == VM_ADD)
	{ 
 		szSQL = m_hms_accidentTbl.GetInsertSQL(); 
 	} 
 	else if(GetMode() == VM_EDIT)
	{ 
 		CString szWhere; 
		szWhere.Format(_T(" WHERE ha_docno=%ld"), m_nDocNo);
 		szSQL = m_hms_accidentTbl.GetUpdateSQL(_T("ha_createdby, ha_createddate, ha_docno")); 
 		szSQL += szWhere; 
 	} 
    _fmsg(_T("%s"), szSQL); 
 	int ret = pMF->ExecSQL(szSQL); 
 	if(ret > 0) 
 	{ 
 		//OnHMSAccidentDialogListLoadData(); 
 		//SetMode(VM_VIEW);
		GetDataToScreen();
 	} 
 	/*else 
 	{ 
 	}*/ 
 	return ret; 
 	//return 0; 
}
int CHMSAccidentDialog::OnCancelHMSAccidentDialog()
{
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
int CHMSAccidentDialog::OnHMSAccidentDialogListLoadData()
{
	return 0;
}
void CHMSAccidentDialog::SetControlState(int bState)
{
	if (bState == 1)
	{
		m_wndExplosive.EnableWindow(FALSE);
		//m_wndExplosive.SetCheckValue(false);
		m_wndWearHelmet.EnableWindow(TRUE);
	}
	else if (bState == 2)
	{
		m_wndExplosive.EnableWindow(TRUE);
		//m_wndExplosive.SetCheckValue(true);
		m_wndWearHelmet.EnableWindow(FALSE);
		m_wndPutOnHelmetStrap.EnableWindow(FALSE);
		m_wndHelmetBroken.EnableWindow(FALSE);
		m_wndHelmetManufacturer.EnableWindow(FALSE);
	}
	else
	{
		m_wndExplosive.EnableWindow(FALSE);
		//m_wndExplosive.SetCheckValue(false);
		m_wndWearHelmet.EnableWindow(FALSE);
		m_wndPutOnHelmetStrap.EnableWindow(FALSE);
		m_wndHelmetBroken.EnableWindow(FALSE);
		m_wndHelmetManufacturer.EnableWindow(FALSE);
	}
}
