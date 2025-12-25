#include "PhieuChamSocBenhNhanSauKhiMo2.h"
#include "MainFrm.h"
static void _OnOperationSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CPhieuChamSocBenhNhanSauKhiMo2* )pWnd)->OnOperationSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnOperationSelendokFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->OnOperationSelendok();
}
/*static void _OnOperationSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->OnOperationKillfocus();
}*/
/*static void _OnOperationKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->OnOperationKillfocus();
}*/
static long _OnOperationLoadDataFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->OnOperationLoadData();
}
/*static void _OnOperationAddNewFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->OnOperationAddNew();
}*/
/*static void _OnDateChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->OnDateChange();
} */
/*static void _OnDateSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->OnDateSetfocus();} */ 
/*static void _OnDateKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->OnDateKillfocus();
} */
static int _OnDateCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->OnDateCheckValue();
} 
static void _On6hdauSelectFnc(CWnd *pWnd){
	  ((CPhieuChamSocBenhNhanSauKhiMo2*)pWnd)->On6hdauSelect();
}
static void _On18htiepSelectFnc(CWnd *pWnd){
	  ((CPhieuChamSocBenhNhanSauKhiMo2*)pWnd)->On18htiepSelect();
}
static void _Onsau25hSelectFnc(CWnd *pWnd){
	  ((CPhieuChamSocBenhNhanSauKhiMo2*)pWnd)->Onsau25hSelect();
}
/*static void _Ongio1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio1Change();
} */
/*static void _Ongio1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio1Setfocus();} */ 
/*static void _Ongio1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio1Killfocus();
} */
static int _Ongio1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio1CheckValue();
} 
/*static void _Onda1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda1Change();
} */
/*static void _Onda1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda1Setfocus();} */ 
/*static void _Onda1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda1Killfocus();
} */
static int _Onda1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda1CheckValue();
} 
/*static void _Ontg1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg1Change();
} */
/*static void _Ontg1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg1Setfocus();} */ 
/*static void _Ontg1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg1Killfocus();
} */
static int _Ontg1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg1CheckValue();
} 
/*static void _Ondau1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau1Change();
} */
/*static void _Ondau1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau1Setfocus();} */ 
/*static void _Ondau1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau1Killfocus();
} */
static int _Ondau1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau1CheckValue();
} 
/*static void _Onvm1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm1Change();
} */
/*static void _Onvm1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm1Setfocus();} */ 
/*static void _Onvm1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm1Killfocus();
} */
static int _Onvm1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm1CheckValue();
} 
/*static void _Onnt1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt1Change();
} */
/*static void _Onnt1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt1Setfocus();} */ 
/*static void _Onnt1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt1Killfocus();
} */
static int _Onnt1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt1CheckValue();
} 
/*static void _Ondl1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl1Change();
} */
/*static void _Ondl1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl1Setfocus();} */ 
/*static void _Ondl1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl1Killfocus();
} */
static int _Ondl1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl1CheckValue();
} 
/*static void _Ona1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona1Change();
} */
/*static void _Ona1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona1Setfocus();} */ 
/*static void _Ona1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona1Killfocus();
} */
static int _Ona1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona1CheckValue();
} 
/*static void _Onb1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb1Change();
} */
/*static void _Onb1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb1Setfocus();} */ 
/*static void _Onb1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb1Killfocus();
} */
static int _Onb1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb1CheckValue();
} 
/*static void _Onc1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc1Change();
} */
/*static void _Onc1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc1Setfocus();} */ 
/*static void _Onc1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc1Killfocus();
} */
static int _Onc1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc1CheckValue();
} 
/*static void _Onsd1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd1Change();
} */
/*static void _Onsd1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd1Setfocus();} */ 
/*static void _Onsd1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd1Killfocus();
} */
static int _Onsd1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd1CheckValue();
} 
/*static void _Onan1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan1Change();
} */
/*static void _Onan1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan1Setfocus();} */ 
/*static void _Onan1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan1Killfocus();
} */
static int _Onan1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan1CheckValue();
} 
/*static void _Ontd1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd1Change();
} */
/*static void _Ontd1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd1Setfocus();} */ 
/*static void _Ontd1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd1Killfocus();
} */
static int _Ontd1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd1CheckValue();
} 
/*static void _Ondd1ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd1Change();
} */
/*static void _Ondd1SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd1Setfocus();} */ 
/*static void _Ondd1KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd1Killfocus();
} */
static int _Ondd1CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd1CheckValue();
} 
/*static void _Ongio2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio2Change();
} */
/*static void _Ongio2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio2Setfocus();} */ 
/*static void _Ongio2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio2Killfocus();
} */
static int _Ongio2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio2CheckValue();
} 
/*static void _Onda2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda2Change();
} */
/*static void _Onda2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda2Setfocus();} */ 
/*static void _Onda2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda2Killfocus();
} */
static int _Onda2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda2CheckValue();
} 
/*static void _Ontg2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg2Change();
} */
/*static void _Ontg2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg2Setfocus();} */ 
/*static void _Ontg2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg2Killfocus();
} */
static int _Ontg2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg2CheckValue();
} 
/*static void _Ondau2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau2Change();
} */
/*static void _Ondau2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau2Setfocus();} */ 
/*static void _Ondau2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau2Killfocus();
} */
static int _Ondau2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau2CheckValue();
} 
/*static void _Onvm2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm2Change();
} */
/*static void _Onvm2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm2Setfocus();} */ 
/*static void _Onvm2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm2Killfocus();
} */
static int _Onvm2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm2CheckValue();
} 
/*static void _Onnt2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt2Change();
} */
/*static void _Onnt2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt2Setfocus();} */ 
/*static void _Onnt2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt2Killfocus();
} */
static int _Onnt2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt2CheckValue();
} 
/*static void _Ondl2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl2Change();
} */
/*static void _Ondl2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl2Setfocus();} */ 
/*static void _Ondl2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl2Killfocus();
} */
static int _Ondl2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl2CheckValue();
} 
/*static void _Ona2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona2Change();
} */
/*static void _Ona2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona2Setfocus();} */ 
/*static void _Ona2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona2Killfocus();
} */
static int _Ona2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona2CheckValue();
} 
/*static void _Onb2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb2Change();
} */
/*static void _Onb2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb2Setfocus();} */ 
/*static void _Onb2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb2Killfocus();
} */
static int _Onb2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb2CheckValue();
} 
/*static void _Onc2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc2Change();
} */
/*static void _Onc2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc2Setfocus();} */ 
/*static void _Onc2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc2Killfocus();
} */
static int _Onc2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc2CheckValue();
} 
/*static void _Onsd2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd2Change();
} */
/*static void _Onsd2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd2Setfocus();} */ 
/*static void _Onsd2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd2Killfocus();
} */
static int _Onsd2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd2CheckValue();
} 
/*static void _Onan2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan2Change();
} */
/*static void _Onan2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan2Setfocus();} */ 
/*static void _Onan2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan2Killfocus();
} */
static int _Onan2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan2CheckValue();
} 
/*static void _Ontd2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd2Change();
} */
/*static void _Ontd2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd2Setfocus();} */ 
/*static void _Ontd2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd2Killfocus();
} */
static int _Ontd2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd2CheckValue();
} 
/*static void _Ondd2ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd2Change();
} */
/*static void _Ondd2SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd2Setfocus();} */ 
/*static void _Ondd2KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd2Killfocus();
} */
static int _Ondd2CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd2CheckValue();
} 
/*static void _Ongio3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio3Change();
} */
/*static void _Ongio3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio3Setfocus();} */ 
/*static void _Ongio3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio3Killfocus();
} */
static int _Ongio3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio3CheckValue();
} 
/*static void _Onda3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda3Change();
} */
/*static void _Onda3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda3Setfocus();} */ 
/*static void _Onda3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda3Killfocus();
} */
static int _Onda3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda3CheckValue();
} 
/*static void _Ontg3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg3Change();
} */
/*static void _Ontg3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg3Setfocus();} */ 
/*static void _Ontg3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg3Killfocus();
} */
static int _Ontg3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg3CheckValue();
} 
/*static void _Ondau3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau3Change();
} */
/*static void _Ondau3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau3Setfocus();} */ 
/*static void _Ondau3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau3Killfocus();
} */
static int _Ondau3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau3CheckValue();
} 
/*static void _Onvm3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm3Change();
} */
/*static void _Onvm3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm3Setfocus();} */ 
/*static void _Onvm3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm3Killfocus();
} */
static int _Onvm3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm3CheckValue();
} 
/*static void _Onnt3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt3Change();
} */
/*static void _Onnt3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt3Setfocus();} */ 
/*static void _Onnt3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt3Killfocus();
} */
static int _Onnt3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt3CheckValue();
} 
/*static void _Ondl3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl3Change();
} */
/*static void _Ondl3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl3Setfocus();} */ 
/*static void _Ondl3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl3Killfocus();
} */
static int _Ondl3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl3CheckValue();
} 
/*static void _Ona3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona3Change();
} */
/*static void _Ona3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona3Setfocus();} */ 
/*static void _Ona3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona3Killfocus();
} */
static int _Ona3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona3CheckValue();
} 
/*static void _Onb3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb3Change();
} */
/*static void _Onb3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb3Setfocus();} */ 
/*static void _Onb3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb3Killfocus();
} */
static int _Onb3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb3CheckValue();
} 
/*static void _Onc3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc3Change();
} */
/*static void _Onc3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc3Setfocus();} */ 
/*static void _Onc3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc3Killfocus();
} */
static int _Onc3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc3CheckValue();
} 
/*static void _Onsd3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd3Change();
} */
/*static void _Onsd3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd3Setfocus();} */ 
/*static void _Onsd3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd3Killfocus();
} */
static int _Onsd3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd3CheckValue();
} 
/*static void _Onan3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan3Change();
} */
/*static void _Onan3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan3Setfocus();} */ 
/*static void _Onan3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan3Killfocus();
} */
static int _Onan3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan3CheckValue();
} 
/*static void _Ontd3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd3Change();
} */
/*static void _Ontd3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd3Setfocus();} */ 
/*static void _Ontd3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd3Killfocus();
} */
static int _Ontd3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd3CheckValue();
} 
/*static void _Ondd3ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd3Change();
} */
/*static void _Ondd3SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd3Setfocus();} */ 
/*static void _Ondd3KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd3Killfocus();
} */
static int _Ondd3CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd3CheckValue();
} 
/*static void _Ongio4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio4Change();
} */
/*static void _Ongio4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio4Setfocus();} */ 
/*static void _Ongio4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio4Killfocus();
} */
static int _Ongio4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio4CheckValue();
} 
/*static void _Onda4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda4Change();
} */
/*static void _Onda4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda4Setfocus();} */ 
/*static void _Onda4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda4Killfocus();
} */
static int _Onda4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda4CheckValue();
} 
/*static void _Ontg4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg4Change();
} */
/*static void _Ontg4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg4Setfocus();} */ 
/*static void _Ontg4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg4Killfocus();
} */
static int _Ontg4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg4CheckValue();
} 
/*static void _Ondau4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau4Change();
} */
/*static void _Ondau4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau4Setfocus();} */ 
/*static void _Ondau4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau4Killfocus();
} */
static int _Ondau4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau4CheckValue();
} 
/*static void _Onvm4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm4Change();
} */
/*static void _Onvm4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm4Setfocus();} */ 
/*static void _Onvm4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm4Killfocus();
} */
static int _Onvm4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm4CheckValue();
} 
/*static void _Onnt4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt4Change();
} */
/*static void _Onnt4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt4Setfocus();} */ 
/*static void _Onnt4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt4Killfocus();
} */
static int _Onnt4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt4CheckValue();
} 
/*static void _Ondl4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl4Change();
} */
/*static void _Ondl4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl4Setfocus();} */ 
/*static void _Ondl4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl4Killfocus();
} */
static int _Ondl4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl4CheckValue();
} 
/*static void _Ona4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona4Change();
} */
/*static void _Ona4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona4Setfocus();} */ 
/*static void _Ona4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona4Killfocus();
} */
static int _Ona4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona4CheckValue();
} 
/*static void _Onb4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb4Change();
} */
/*static void _Onb4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb4Setfocus();} */ 
/*static void _Onb4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb4Killfocus();
} */
static int _Onb4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb4CheckValue();
} 
/*static void _Onc4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc4Change();
} */
/*static void _Onc4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc4Setfocus();} */ 
/*static void _Onc4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc4Killfocus();
} */
static int _Onc4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc4CheckValue();
} 
/*static void _Onsd4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd4Change();
} */
/*static void _Onsd4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd4Setfocus();} */ 
/*static void _Onsd4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd4Killfocus();
} */
static int _Onsd4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd4CheckValue();
} 
/*static void _Onan4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan4Change();
} */
/*static void _Onan4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan4Setfocus();} */ 
/*static void _Onan4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan4Killfocus();
} */
static int _Onan4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan4CheckValue();
} 
/*static void _Ontd4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd4Change();
} */
/*static void _Ontd4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd4Setfocus();} */ 
/*static void _Ontd4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd4Killfocus();
} */
static int _Ontd4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd4CheckValue();
} 
/*static void _Ondd4ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd4Change();
} */
/*static void _Ondd4SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd4Setfocus();} */ 
/*static void _Ondd4KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd4Killfocus();
} */
static int _Ondd4CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd4CheckValue();
} 
/*static void _Ongio5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio5Change();
} */
/*static void _Ongio5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio5Setfocus();} */ 
/*static void _Ongio5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio5Killfocus();
} */
static int _Ongio5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio5CheckValue();
} 
/*static void _Onda5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda5Change();
} */
/*static void _Onda5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda5Setfocus();} */ 
/*static void _Onda5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda5Killfocus();
} */
static int _Onda5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda5CheckValue();
} 
/*static void _Ontg5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg5Change();
} */
/*static void _Ontg5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg5Setfocus();} */ 
/*static void _Ontg5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg5Killfocus();
} */
static int _Ontg5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg5CheckValue();
} 
/*static void _Ondau5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau5Change();
} */
/*static void _Ondau5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau5Setfocus();} */ 
/*static void _Ondau5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau5Killfocus();
} */
static int _Ondau5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau5CheckValue();
} 
/*static void _Onvm5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm5Change();
} */
/*static void _Onvm5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm5Setfocus();} */ 
/*static void _Onvm5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm5Killfocus();
} */
static int _Onvm5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm5CheckValue();
} 
/*static void _Onnt5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt5Change();
} */
/*static void _Onnt5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt5Setfocus();} */ 
/*static void _Onnt5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt5Killfocus();
} */
static int _Onnt5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt5CheckValue();
} 
/*static void _Ondl5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl5Change();
} */
/*static void _Ondl5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl5Setfocus();} */ 
/*static void _Ondl5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl5Killfocus();
} */
static int _Ondl5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl5CheckValue();
} 
/*static void _Ona5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona5Change();
} */
/*static void _Ona5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona5Setfocus();} */ 
/*static void _Ona5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona5Killfocus();
} */
static int _Ona5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona5CheckValue();
} 
/*static void _Onb5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb5Change();
} */
/*static void _Onb5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb5Setfocus();} */ 
/*static void _Onb5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb5Killfocus();
} */
static int _Onb5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb5CheckValue();
} 
/*static void _Onc5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc5Change();
} */
/*static void _Onc5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc5Setfocus();} */ 
/*static void _Onc5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc5Killfocus();
} */
static int _Onc5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc5CheckValue();
} 
/*static void _Onsd5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd5Change();
} */
/*static void _Onsd5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd5Setfocus();} */ 
/*static void _Onsd5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd5Killfocus();
} */
static int _Onsd5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd5CheckValue();
} 
/*static void _Onan5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan5Change();
} */
/*static void _Onan5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan5Setfocus();} */ 
/*static void _Onan5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan5Killfocus();
} */
static int _Onan5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan5CheckValue();
} 
/*static void _Ontd5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd5Change();
} */
/*static void _Ontd5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd5Setfocus();} */ 
/*static void _Ontd5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd5Killfocus();
} */
static int _Ontd5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd5CheckValue();
} 
/*static void _Ondd5ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd5Change();
} */
/*static void _Ondd5SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd5Setfocus();} */ 
/*static void _Ondd5KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd5Killfocus();
} */
static int _Ondd5CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd5CheckValue();
} 
/*static void _Ongio6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio6Change();
} */
/*static void _Ongio6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio6Setfocus();} */ 
/*static void _Ongio6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio6Killfocus();
} */
static int _Ongio6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio6CheckValue();
} 
/*static void _Onda6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda6Change();
} */
/*static void _Onda6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda6Setfocus();} */ 
/*static void _Onda6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda6Killfocus();
} */
static int _Onda6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda6CheckValue();
} 
/*static void _Ontg6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg6Change();
} */
/*static void _Ontg6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg6Setfocus();} */ 
/*static void _Ontg6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg6Killfocus();
} */
static int _Ontg6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg6CheckValue();
} 
/*static void _Ondau6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau6Change();
} */
/*static void _Ondau6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau6Setfocus();} */ 
/*static void _Ondau6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau6Killfocus();
} */
static int _Ondau6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau6CheckValue();
} 
/*static void _Onvm6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm6Change();
} */
/*static void _Onvm6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm6Setfocus();} */ 
/*static void _Onvm6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm6Killfocus();
} */
static int _Onvm6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm6CheckValue();
} 
/*static void _Onnt6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt6Change();
} */
/*static void _Onnt6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt6Setfocus();} */ 
/*static void _Onnt6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt6Killfocus();
} */
static int _Onnt6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt6CheckValue();
} 
/*static void _Ondl6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl6Change();
} */
/*static void _Ondl6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl6Setfocus();} */ 
/*static void _Ondl6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl6Killfocus();
} */
static int _Ondl6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl6CheckValue();
} 
/*static void _Ona6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona6Change();
} */
/*static void _Ona6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona6Setfocus();} */ 
/*static void _Ona6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona6Killfocus();
} */
static int _Ona6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona6CheckValue();
} 
/*static void _Onb6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb6Change();
} */
/*static void _Onb6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb6Setfocus();} */ 
/*static void _Onb6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb6Killfocus();
} */
static int _Onb6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb6CheckValue();
} 
/*static void _Onc6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc6Change();
} */
/*static void _Onc6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc6Setfocus();} */ 
/*static void _Onc6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc6Killfocus();
} */
static int _Onc6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc6CheckValue();
} 
/*static void _Onsd6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd6Change();
} */
/*static void _Onsd6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd6Setfocus();} */ 
/*static void _Onsd6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd6Killfocus();
} */
static int _Onsd6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd6CheckValue();
} 
/*static void _Onan6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan6Change();
} */
/*static void _Onan6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan6Setfocus();} */ 
/*static void _Onan6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan6Killfocus();
} */
static int _Onan6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan6CheckValue();
} 
/*static void _Ontd6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd6Change();
} */
/*static void _Ontd6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd6Setfocus();} */ 
/*static void _Ontd6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd6Killfocus();
} */
static int _Ontd6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd6CheckValue();
} 
/*static void _Ondd6ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd6Change();
} */
/*static void _Ondd6SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd6Setfocus();} */ 
/*static void _Ondd6KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd6Killfocus();
} */
static int _Ondd6CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd6CheckValue();
} 
/*static void _Ongio7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio7Change();
} */
/*static void _Ongio7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio7Setfocus();} */ 
/*static void _Ongio7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio7Killfocus();
} */
static int _Ongio7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ongio7CheckValue();
} 
/*static void _Onda7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda7Change();
} */
/*static void _Onda7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda7Setfocus();} */ 
/*static void _Onda7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda7Killfocus();
} */
static int _Onda7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onda7CheckValue();
} 
/*static void _Ontg7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg7Change();
} */
/*static void _Ontg7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg7Setfocus();} */ 
/*static void _Ontg7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg7Killfocus();
} */
static int _Ontg7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontg7CheckValue();
} 
/*static void _Ondau7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau7Change();
} */
/*static void _Ondau7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau7Setfocus();} */ 
/*static void _Ondau7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau7Killfocus();
} */
static int _Ondau7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondau7CheckValue();
} 
/*static void _Onvm7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm7Change();
} */
/*static void _Onvm7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm7Setfocus();} */ 
/*static void _Onvm7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm7Killfocus();
} */
static int _Onvm7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onvm7CheckValue();
} 
/*static void _Onnt7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt7Change();
} */
/*static void _Onnt7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt7Setfocus();} */ 
/*static void _Onnt7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt7Killfocus();
} */
static int _Onnt7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onnt7CheckValue();
} 
/*static void _Ondl7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl7Change();
} */
/*static void _Ondl7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl7Setfocus();} */ 
/*static void _Ondl7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl7Killfocus();
} */
static int _Ondl7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondl7CheckValue();
} 
/*static void _Ona7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona7Change();
} */
/*static void _Ona7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona7Setfocus();} */ 
/*static void _Ona7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona7Killfocus();
} */
static int _Ona7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ona7CheckValue();
} 
/*static void _Onb7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb7Change();
} */
/*static void _Onb7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb7Setfocus();} */ 
/*static void _Onb7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb7Killfocus();
} */
static int _Onb7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onb7CheckValue();
} 
/*static void _Onc7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc7Change();
} */
/*static void _Onc7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc7Setfocus();} */ 
/*static void _Onc7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc7Killfocus();
} */
static int _Onc7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onc7CheckValue();
} 
/*static void _Onsd7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd7Change();
} */
/*static void _Onsd7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd7Setfocus();} */ 
/*static void _Onsd7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd7Killfocus();
} */
static int _Onsd7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onsd7CheckValue();
} 
/*static void _Onan7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan7Change();
} */
/*static void _Onan7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan7Setfocus();} */ 
/*static void _Onan7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan7Killfocus();
} */
static int _Onan7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Onan7CheckValue();
} 
/*static void _Ontd7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd7Change();
} */
/*static void _Ontd7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd7Setfocus();} */ 
/*static void _Ontd7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd7Killfocus();
} */
static int _Ontd7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ontd7CheckValue();
} 
/*static void _Ondd7ChangeFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd7Change();
} */
/*static void _Ondd7SetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd7Setfocus();} */ 
/*static void _Ondd7KillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd7Killfocus();
} */
static int _Ondd7CheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd)->Ondd7CheckValue();
} 
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPhieuChamSocBenhNhanSauKhiMo2 *pVw = (CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPhieuChamSocBenhNhanSauKhiMo2 *pVw = (CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CPhieuChamSocBenhNhanSauKhiMo2 *pVw = (CPhieuChamSocBenhNhanSauKhiMo2 *)pWnd;
	pVw->OnCloseSelect();
} 
static int _OnAddPhieuChamSocBenhNhanSauKhiMo2Fnc(CWnd *pWnd){
	 return ((CPhieuChamSocBenhNhanSauKhiMo2*)pWnd)->OnAddPhieuChamSocBenhNhanSauKhiMo2();
} 
static int _OnEditPhieuChamSocBenhNhanSauKhiMo2Fnc(CWnd *pWnd){
	 return ((CPhieuChamSocBenhNhanSauKhiMo2*)pWnd)->OnEditPhieuChamSocBenhNhanSauKhiMo2();
} 
static int _OnDeletePhieuChamSocBenhNhanSauKhiMo2Fnc(CWnd *pWnd){
	 return ((CPhieuChamSocBenhNhanSauKhiMo2*)pWnd)->OnDeletePhieuChamSocBenhNhanSauKhiMo2();
} 
static int _OnSavePhieuChamSocBenhNhanSauKhiMo2Fnc(CWnd *pWnd){
	 return ((CPhieuChamSocBenhNhanSauKhiMo2*)pWnd)->OnSavePhieuChamSocBenhNhanSauKhiMo2();
} 
static int _OnCancelPhieuChamSocBenhNhanSauKhiMo2Fnc(CWnd *pWnd){
	 return ((CPhieuChamSocBenhNhanSauKhiMo2*)pWnd)->OnCancelPhieuChamSocBenhNhanSauKhiMo2();
} 
CPhieuChamSocBenhNhanSauKhiMo2::CPhieuChamSocBenhNhanSauKhiMo2(){

	m_nDlgWidth = 1029;
	m_nDlgHeight = 773;
	SetDefaultValues();
}
CPhieuChamSocBenhNhanSauKhiMo2::~CPhieuChamSocBenhNhanSauKhiMo2(){
}
void CPhieuChamSocBenhNhanSauKhiMo2::OnCreateComponents(){
	m_wndAllInformation.Create(this, _T("All Information"), 5, 5, 880, 510);
	m_wndOperationLabel.Create(this, _T("Operation Name"), 10, 30, 280, 55);
	m_wndOperation.Create(this,285, 30, 875, 55); 
	m_wndDateLabel.Create(this, _T("Date"), 10, 60, 280, 85);
	m_wndDate.Create(this,285, 60, 450, 85); 
	m_wnd6hdau.Create(this, _T("6h dau"), 490, 60, 570, 85);
	m_wnd18htiep.Create(this, _T("18h tiep"), 625, 60, 705, 85);
	m_wndsau25h.Create(this, _T("sau 25h"), 760, 60, 840, 85);
	m_wndgioLabel.Create(this, _T("Gio"), 10, 90, 280, 115);
	m_wnddaLabel.Create(this, _T("Da hong (+)"), 0, 10, 120, 280);
	m_wndtrigiacLabel.Create(this, _T("Tri giac: tinh (+)"), 0, 10, 150, 280);
	m_wnddauLabel.Create(this, _T("Dau (+)"), 0, 0, 10, 180);
	m_wndvetmoLabel.Create(this, _T("Vet mo: kho (+)"), 0, 0, 10, 210);
	m_wndnuoctieuLabel.Create(this, _T("Nuoc tieu"), 10, 240, 280, 265);
	m_wnddanluuLabel.Create(this, _T("Dan luu"), 10, 270, 280, 295);
	m_wndaLabel.Create(this, _T("1"), 2, 0, 10, 300);
	m_wndbLabel.Create(this, _T("3"), 4, 0, 10, 330);
	m_wndcLabel.Create(this, _T("5"), 6, 0, 10, 360);
	m_wndsondLabel.Create(this, _T("Sond da day / non"), 10, 390, 280, 415);
	m_wndanLabel.Create(this, _T("An duoc (+)"), 0, 10, 420, 280);
	m_wndkhacLabel.Create(this, _T("TD khac"), 10, 450, 280, 475);
	m_wnddieuduongLabel.Create(this, _T("Ten DD theo doi"), 10, 480, 280, 505);
	m_wndgio1.Create(this,285, 90, 365, 115); 
	m_wndda1.Create(this,285, 120, 365, 145); 
	m_wndtg1.Create(this,285, 150, 365, 175); 
	m_wnddau1.Create(this,285, 180, 365, 205); 
	m_wndvm1.Create(this,285, 210, 365, 235); 
	m_wndnt1.Create(this,285, 240, 365, 265); 
	m_wnddl1.Create(this,285, 270, 365, 295); 
	m_wnda1.Create(this,285, 300, 365, 325); 
	m_wndb1.Create(this,285, 330, 365, 355); 
	m_wndc1.Create(this,285, 360, 365, 385); 
	m_wndsd1.Create(this,285, 390, 365, 415); 
	m_wndan1.Create(this,285, 420, 365, 445); 
	m_wndtd1.Create(this,285, 450, 365, 475); 
	m_wnddd1.Create(this,285, 480, 365, 505); 
	m_wndgio2.Create(this,370, 90, 450, 115); 
	m_wndda2.Create(this,370, 120, 450, 145); 
	m_wndtg2.Create(this,370, 150, 450, 175); 
	m_wnddau2.Create(this,370, 180, 450, 205); 
	m_wndvm2.Create(this,370, 210, 450, 235); 
	m_wndnt2.Create(this,370, 240, 450, 265); 
	m_wnddl2.Create(this,370, 270, 450, 295); 
	m_wnda2.Create(this,370, 300, 450, 325); 
	m_wndb2.Create(this,370, 330, 450, 355); 
	m_wndc2.Create(this,370, 360, 450, 385); 
	m_wndsd2.Create(this,370, 390, 450, 415); 
	m_wndan2.Create(this,370, 420, 450, 445); 
	m_wndtd2.Create(this,370, 450, 450, 475); 
	m_wnddd2.Create(this,370, 480, 450, 505); 
	m_wndgio3.Create(this,455, 90, 535, 115); 
	m_wndda3.Create(this,455, 120, 535, 145); 
	m_wndtg3.Create(this,455, 150, 535, 175); 
	m_wnddau3.Create(this,455, 180, 535, 205); 
	m_wndvm3.Create(this,455, 210, 535, 235); 
	m_wndnt3.Create(this,455, 240, 535, 265); 
	m_wnddl3.Create(this,455, 270, 535, 295); 
	m_wnda3.Create(this,455, 300, 535, 325); 
	m_wndb3.Create(this,455, 330, 535, 355); 
	m_wndc3.Create(this,455, 360, 535, 385); 
	m_wndsd3.Create(this,455, 390, 535, 415); 
	m_wndan3.Create(this,455, 420, 535, 445); 
	m_wndtd3.Create(this,455, 450, 535, 475); 
	m_wnddd3.Create(this,455, 480, 535, 505); 
	m_wndgio4.Create(this,540, 90, 620, 115); 
	m_wndda4.Create(this,540, 120, 620, 145); 
	m_wndtg4.Create(this,540, 150, 620, 175); 
	m_wnddau4.Create(this,540, 180, 620, 205); 
	m_wndvm4.Create(this,540, 210, 620, 235); 
	m_wndnt4.Create(this,540, 240, 620, 265); 
	m_wnddl4.Create(this,540, 270, 620, 295); 
	m_wnda4.Create(this,540, 300, 620, 325); 
	m_wndb4.Create(this,540, 330, 620, 355); 
	m_wndc4.Create(this,540, 360, 620, 385); 
	m_wndsd4.Create(this,540, 390, 620, 415); 
	m_wndan4.Create(this,540, 420, 620, 445); 
	m_wndtd4.Create(this,540, 450, 620, 475); 
	m_wnddd4.Create(this,540, 480, 620, 505); 
	m_wndgio5.Create(this,625, 90, 705, 115); 
	m_wndda5.Create(this,625, 120, 705, 145); 
	m_wndtg5.Create(this,625, 150, 705, 175); 
	m_wnddau5.Create(this,625, 180, 705, 205); 
	m_wndvm5.Create(this,625, 210, 705, 235); 
	m_wndnt5.Create(this,625, 240, 705, 265); 
	m_wnddl5.Create(this,625, 270, 705, 295); 
	m_wnda5.Create(this,625, 300, 705, 325); 
	m_wndb5.Create(this,625, 330, 705, 355); 
	m_wndc5.Create(this,625, 360, 705, 385); 
	m_wndsd5.Create(this,625, 390, 705, 415); 
	m_wndan5.Create(this,625, 420, 705, 445); 
	m_wndtd5.Create(this,625, 450, 705, 475); 
	m_wnddd5.Create(this,625, 480, 705, 505); 
	m_wndgio6.Create(this,710, 90, 790, 115); 
	m_wndda6.Create(this,710, 120, 790, 145); 
	m_wndtg6.Create(this,710, 150, 790, 175); 
	m_wnddau6.Create(this,710, 180, 790, 205); 
	m_wndvm6.Create(this,710, 210, 790, 235); 
	m_wndnt6.Create(this,710, 240, 790, 265); 
	m_wnddl6.Create(this,710, 270, 790, 295); 
	m_wnda6.Create(this,710, 300, 790, 325); 
	m_wndb6.Create(this,710, 330, 790, 355); 
	m_wndc6.Create(this,710, 359, 790, 384); 
	m_wndsd6.Create(this,710, 390, 790, 415); 
	m_wndan6.Create(this,710, 420, 790, 445); 
	m_wndtd6.Create(this,710, 450, 790, 475); 
	m_wnddd6.Create(this,710, 480, 790, 505); 
	m_wndgio7.Create(this,795, 90, 875, 115); 
	m_wndda7.Create(this,795, 120, 875, 145); 
	m_wndtg7.Create(this,795, 150, 875, 175); 
	m_wnddau7.Create(this,795, 180, 875, 205); 
	m_wndvm7.Create(this,795, 210, 875, 235); 
	m_wndnt7.Create(this,795, 240, 875, 265); 
	m_wnddl7.Create(this,795, 270, 875, 295); 
	m_wnda7.Create(this,795, 300, 875, 325); 
	m_wndb7.Create(this,795, 330, 875, 355); 
	m_wndc7.Create(this,795, 360, 875, 385); 
	m_wndsd7.Create(this,795, 390, 875, 415); 
	m_wndan7.Create(this,795, 420, 875, 445); 
	m_wndtd7.Create(this,795, 450, 875, 475); 
	m_wnddd7.Create(this,795, 480, 875, 505); 
	m_wndSave.Create(this, _T("Save"), 625, 515, 705, 540);
	m_wndPrint.Create(this, _T("Print"), 710, 515, 790, 540);
	m_wndClose.Create(this, _T("Close"), 795, 515, 875, 540);

}
void CPhieuChamSocBenhNhanSauKhiMo2::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOperation.SetCheckValue(true);
	m_wndOperation.LimitText(1024);
	m_wndDate.SetMax(CDate(pMF->GetSysDate()));
	m_wndDate.SetCheckValue(true);
	m_wndgio1.SetLimitText(1024);
	m_wndgio1.SetCheckValue(true);
	m_wndda1.SetLimitText(1024);
	m_wndda1.SetCheckValue(true);
	m_wndtg1.SetLimitText(1024);
	m_wndtg1.SetCheckValue(true);
	m_wnddau1.SetLimitText(1024);
	m_wnddau1.SetCheckValue(true);
	m_wndvm1.SetLimitText(1024);
	m_wndvm1.SetCheckValue(true);
	m_wndnt1.SetLimitText(1024);
	m_wndnt1.SetCheckValue(true);
	m_wnddl1.SetLimitText(1024);
	m_wnddl1.SetCheckValue(true);
	m_wnda1.SetLimitText(1024);
	m_wnda1.SetCheckValue(true);
	m_wndb1.SetLimitText(1024);
	m_wndb1.SetCheckValue(true);
	m_wndc1.SetLimitText(1024);
	m_wndc1.SetCheckValue(true);
	m_wndsd1.SetLimitText(1024);
	m_wndsd1.SetCheckValue(true);
	m_wndan1.SetLimitText(1024);
	m_wndan1.SetCheckValue(true);
	m_wndtd1.SetLimitText(1024);
	m_wndtd1.SetCheckValue(true);
	m_wnddd1.SetLimitText(1024);
	m_wnddd1.SetCheckValue(true);
	m_wndgio2.SetLimitText(1024);
	m_wndgio2.SetCheckValue(true);
	m_wndda2.SetLimitText(1024);
	m_wndda2.SetCheckValue(true);
	m_wndtg2.SetLimitText(1024);
	m_wndtg2.SetCheckValue(true);
	m_wnddau2.SetLimitText(1024);
	m_wnddau2.SetCheckValue(true);
	m_wndvm2.SetLimitText(1024);
	m_wndvm2.SetCheckValue(true);
	m_wndnt2.SetLimitText(1024);
	m_wndnt2.SetCheckValue(true);
	m_wnddl2.SetLimitText(1024);
	m_wnddl2.SetCheckValue(true);
	m_wnda2.SetLimitText(1024);
	m_wnda2.SetCheckValue(true);
	m_wndb2.SetLimitText(1024);
	m_wndb2.SetCheckValue(true);
	m_wndc2.SetLimitText(1024);
	m_wndc2.SetCheckValue(true);
	m_wndsd2.SetLimitText(1024);
	m_wndsd2.SetCheckValue(true);
	m_wndan2.SetLimitText(1024);
	m_wndan2.SetCheckValue(true);
	m_wndtd2.SetLimitText(1024);
	m_wndtd2.SetCheckValue(true);
	m_wnddd2.SetLimitText(1024);
	m_wnddd2.SetCheckValue(true);
	m_wndgio3.SetLimitText(1024);
	m_wndgio3.SetCheckValue(true);
	m_wndda3.SetLimitText(1024);
	m_wndda3.SetCheckValue(true);
	m_wndtg3.SetLimitText(1024);
	m_wndtg3.SetCheckValue(true);
	m_wnddau3.SetLimitText(1024);
	m_wnddau3.SetCheckValue(true);
	m_wndvm3.SetLimitText(1024);
	m_wndvm3.SetCheckValue(true);
	m_wndnt3.SetLimitText(1024);
	m_wndnt3.SetCheckValue(true);
	m_wnddl3.SetLimitText(1024);
	m_wnddl3.SetCheckValue(true);
	m_wnda3.SetLimitText(1024);
	m_wnda3.SetCheckValue(true);
	m_wndb3.SetLimitText(1024);
	m_wndb3.SetCheckValue(true);
	m_wndc3.SetLimitText(1024);
	m_wndc3.SetCheckValue(true);
	m_wndsd3.SetLimitText(1024);
	m_wndsd3.SetCheckValue(true);
	m_wndan3.SetLimitText(1024);
	m_wndan3.SetCheckValue(true);
	m_wndtd3.SetLimitText(1024);
	m_wndtd3.SetCheckValue(true);
	m_wnddd3.SetLimitText(1024);
	m_wnddd3.SetCheckValue(true);
	m_wndgio4.SetLimitText(1024);
	m_wndgio4.SetCheckValue(true);
	m_wndda4.SetLimitText(1024);
	m_wndda4.SetCheckValue(true);
	m_wndtg4.SetLimitText(1024);
	m_wndtg4.SetCheckValue(true);
	m_wnddau4.SetLimitText(1024);
	m_wnddau4.SetCheckValue(true);
	m_wndvm4.SetLimitText(1024);
	m_wndvm4.SetCheckValue(true);
	m_wndnt4.SetLimitText(1024);
	m_wndnt4.SetCheckValue(true);
	m_wnddl4.SetLimitText(1024);
	m_wnddl4.SetCheckValue(true);
	m_wnda4.SetLimitText(1024);
	m_wnda4.SetCheckValue(true);
	m_wndb4.SetLimitText(1024);
	m_wndb4.SetCheckValue(true);
	m_wndc4.SetLimitText(1024);
	m_wndc4.SetCheckValue(true);
	m_wndsd4.SetLimitText(1024);
	m_wndsd4.SetCheckValue(true);
	m_wndan4.SetLimitText(1024);
	m_wndan4.SetCheckValue(true);
	m_wndtd4.SetLimitText(1024);
	m_wndtd4.SetCheckValue(true);
	m_wnddd4.SetLimitText(1024);
	m_wnddd4.SetCheckValue(true);
	m_wndgio5.SetLimitText(1024);
	m_wndgio5.SetCheckValue(true);
	m_wndda5.SetLimitText(1024);
	m_wndda5.SetCheckValue(true);
	m_wndtg5.SetLimitText(1024);
	m_wndtg5.SetCheckValue(true);
	m_wnddau5.SetLimitText(1024);
	m_wnddau5.SetCheckValue(true);
	m_wndvm5.SetLimitText(1024);
	m_wndvm5.SetCheckValue(true);
	m_wndnt5.SetLimitText(1024);
	m_wndnt5.SetCheckValue(true);
	m_wnddl5.SetLimitText(1024);
	m_wnddl5.SetCheckValue(true);
	m_wnda5.SetLimitText(1024);
	m_wnda5.SetCheckValue(true);
	m_wndb5.SetLimitText(1024);
	m_wndb5.SetCheckValue(true);
	m_wndc5.SetLimitText(1024);
	m_wndc5.SetCheckValue(true);
	m_wndsd5.SetLimitText(1024);
	m_wndsd5.SetCheckValue(true);
	m_wndan5.SetLimitText(1024);
	m_wndan5.SetCheckValue(true);
	m_wndtd5.SetLimitText(1024);
	m_wndtd5.SetCheckValue(true);
	m_wnddd5.SetLimitText(1024);
	m_wnddd5.SetCheckValue(true);
	m_wndgio6.SetLimitText(1024);
	m_wndgio6.SetCheckValue(true);
	m_wndda6.SetLimitText(1024);
	m_wndda6.SetCheckValue(true);
	m_wndtg6.SetLimitText(1024);
	m_wndtg6.SetCheckValue(true);
	m_wnddau6.SetLimitText(1024);
	m_wnddau6.SetCheckValue(true);
	m_wndvm6.SetLimitText(1024);
	m_wndvm6.SetCheckValue(true);
	m_wndnt6.SetLimitText(1024);
	m_wndnt6.SetCheckValue(true);
	m_wnddl6.SetLimitText(1024);
	m_wnddl6.SetCheckValue(true);
	m_wnda6.SetLimitText(1024);
	m_wnda6.SetCheckValue(true);
	m_wndb6.SetLimitText(1024);
	m_wndb6.SetCheckValue(true);
	m_wndc6.SetLimitText(1024);
	m_wndc6.SetCheckValue(true);
	m_wndsd6.SetLimitText(1024);
	m_wndsd6.SetCheckValue(true);
	m_wndan6.SetLimitText(1024);
	m_wndan6.SetCheckValue(true);
	m_wndtd6.SetLimitText(1024);
	m_wndtd6.SetCheckValue(true);
	m_wnddd6.SetLimitText(1024);
	m_wnddd6.SetCheckValue(true);
	m_wndgio7.SetLimitText(1024);
	m_wndgio7.SetCheckValue(true);
	m_wndda7.SetLimitText(1024);
	m_wndda7.SetCheckValue(true);
	m_wndtg7.SetLimitText(1024);
	m_wndtg7.SetCheckValue(true);
	m_wnddau7.SetLimitText(1024);
	m_wnddau7.SetCheckValue(true);
	m_wndvm7.SetLimitText(1024);
	m_wndvm7.SetCheckValue(true);
	m_wndnt7.SetLimitText(1024);
	m_wndnt7.SetCheckValue(true);
	m_wnddl7.SetLimitText(1024);
	m_wnddl7.SetCheckValue(true);
	m_wnda7.SetLimitText(1024);
	m_wnda7.SetCheckValue(true);
	m_wndb7.SetLimitText(1024);
	m_wndb7.SetCheckValue(true);
	m_wndc7.SetLimitText(1024);
	m_wndc7.SetCheckValue(true);
	m_wndsd7.SetLimitText(1024);
	m_wndsd7.SetCheckValue(true);
	m_wndan7.SetLimitText(1024);
	m_wndan7.SetCheckValue(true);
	m_wndtd7.SetLimitText(1024);
	m_wndtd7.SetCheckValue(true);
	m_wnddd7.SetLimitText(1024);
	m_wnddd7.SetCheckValue(true);



}
void CPhieuChamSocBenhNhanSauKhiMo2::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndOperation.SetEvent(WE_SELENDOK, _OnOperationSelendokFnc);
	//m_wndOperation.SetEvent(WE_SETFOCUS, _OnOperationSetfocusFnc);
	//m_wndOperation.SetEvent(WE_KILLFOCUS, _OnOperationKillfocusFnc);
	m_wndOperation.SetEvent(WE_SELCHANGE, _OnOperationSelectChangeFnc);
	m_wndOperation.SetEvent(WE_LOADDATA, _OnOperationLoadDataFnc);
	//m_wndOperation.SetEvent(WE_ADDNEW, _OnOperationAddNewFnc);
	//m_wndDate.SetEvent(WE_CHANGE, _OnDateChangeFnc);
	//m_wndDate.SetEvent(WE_SETFOCUS, _OnDateSetfocusFnc);
	//m_wndDate.SetEvent(WE_KILLFOCUS, _OnDateKillfocusFnc);
	m_wndDate.SetEvent(WE_CHECKVALUE, _OnDateCheckValueFnc);
	m_wnd6hdau.SetEvent(WE_CLICK, _On6hdauSelectFnc);
	m_wnd18htiep.SetEvent(WE_CLICK, _On18htiepSelectFnc);
	m_wndsau25h.SetEvent(WE_CLICK, _Onsau25hSelectFnc);
	//m_wndgio1.SetEvent(WE_CHANGE, _Ongio1ChangeFnc);
	//m_wndgio1.SetEvent(WE_SETFOCUS, _Ongio1SetfocusFnc);
	//m_wndgio1.SetEvent(WE_KILLFOCUS, _Ongio1KillfocusFnc);
	m_wndgio1.SetEvent(WE_CHECKVALUE, _Ongio1CheckValueFnc);
	//m_wndda1.SetEvent(WE_CHANGE, _Onda1ChangeFnc);
	//m_wndda1.SetEvent(WE_SETFOCUS, _Onda1SetfocusFnc);
	//m_wndda1.SetEvent(WE_KILLFOCUS, _Onda1KillfocusFnc);
	m_wndda1.SetEvent(WE_CHECKVALUE, _Onda1CheckValueFnc);
	//m_wndtg1.SetEvent(WE_CHANGE, _Ontg1ChangeFnc);
	//m_wndtg1.SetEvent(WE_SETFOCUS, _Ontg1SetfocusFnc);
	//m_wndtg1.SetEvent(WE_KILLFOCUS, _Ontg1KillfocusFnc);
	m_wndtg1.SetEvent(WE_CHECKVALUE, _Ontg1CheckValueFnc);
	//m_wnddau1.SetEvent(WE_CHANGE, _Ondau1ChangeFnc);
	//m_wnddau1.SetEvent(WE_SETFOCUS, _Ondau1SetfocusFnc);
	//m_wnddau1.SetEvent(WE_KILLFOCUS, _Ondau1KillfocusFnc);
	m_wnddau1.SetEvent(WE_CHECKVALUE, _Ondau1CheckValueFnc);
	//m_wndvm1.SetEvent(WE_CHANGE, _Onvm1ChangeFnc);
	//m_wndvm1.SetEvent(WE_SETFOCUS, _Onvm1SetfocusFnc);
	//m_wndvm1.SetEvent(WE_KILLFOCUS, _Onvm1KillfocusFnc);
	m_wndvm1.SetEvent(WE_CHECKVALUE, _Onvm1CheckValueFnc);
	//m_wndnt1.SetEvent(WE_CHANGE, _Onnt1ChangeFnc);
	//m_wndnt1.SetEvent(WE_SETFOCUS, _Onnt1SetfocusFnc);
	//m_wndnt1.SetEvent(WE_KILLFOCUS, _Onnt1KillfocusFnc);
	m_wndnt1.SetEvent(WE_CHECKVALUE, _Onnt1CheckValueFnc);
	//m_wnddl1.SetEvent(WE_CHANGE, _Ondl1ChangeFnc);
	//m_wnddl1.SetEvent(WE_SETFOCUS, _Ondl1SetfocusFnc);
	//m_wnddl1.SetEvent(WE_KILLFOCUS, _Ondl1KillfocusFnc);
	m_wnddl1.SetEvent(WE_CHECKVALUE, _Ondl1CheckValueFnc);
	//m_wnda1.SetEvent(WE_CHANGE, _Ona1ChangeFnc);
	//m_wnda1.SetEvent(WE_SETFOCUS, _Ona1SetfocusFnc);
	//m_wnda1.SetEvent(WE_KILLFOCUS, _Ona1KillfocusFnc);
	m_wnda1.SetEvent(WE_CHECKVALUE, _Ona1CheckValueFnc);
	//m_wndb1.SetEvent(WE_CHANGE, _Onb1ChangeFnc);
	//m_wndb1.SetEvent(WE_SETFOCUS, _Onb1SetfocusFnc);
	//m_wndb1.SetEvent(WE_KILLFOCUS, _Onb1KillfocusFnc);
	m_wndb1.SetEvent(WE_CHECKVALUE, _Onb1CheckValueFnc);
	//m_wndc1.SetEvent(WE_CHANGE, _Onc1ChangeFnc);
	//m_wndc1.SetEvent(WE_SETFOCUS, _Onc1SetfocusFnc);
	//m_wndc1.SetEvent(WE_KILLFOCUS, _Onc1KillfocusFnc);
	m_wndc1.SetEvent(WE_CHECKVALUE, _Onc1CheckValueFnc);
	//m_wndsd1.SetEvent(WE_CHANGE, _Onsd1ChangeFnc);
	//m_wndsd1.SetEvent(WE_SETFOCUS, _Onsd1SetfocusFnc);
	//m_wndsd1.SetEvent(WE_KILLFOCUS, _Onsd1KillfocusFnc);
	m_wndsd1.SetEvent(WE_CHECKVALUE, _Onsd1CheckValueFnc);
	//m_wndan1.SetEvent(WE_CHANGE, _Onan1ChangeFnc);
	//m_wndan1.SetEvent(WE_SETFOCUS, _Onan1SetfocusFnc);
	//m_wndan1.SetEvent(WE_KILLFOCUS, _Onan1KillfocusFnc);
	m_wndan1.SetEvent(WE_CHECKVALUE, _Onan1CheckValueFnc);
	//m_wndtd1.SetEvent(WE_CHANGE, _Ontd1ChangeFnc);
	//m_wndtd1.SetEvent(WE_SETFOCUS, _Ontd1SetfocusFnc);
	//m_wndtd1.SetEvent(WE_KILLFOCUS, _Ontd1KillfocusFnc);
	m_wndtd1.SetEvent(WE_CHECKVALUE, _Ontd1CheckValueFnc);
	//m_wnddd1.SetEvent(WE_CHANGE, _Ondd1ChangeFnc);
	//m_wnddd1.SetEvent(WE_SETFOCUS, _Ondd1SetfocusFnc);
	//m_wnddd1.SetEvent(WE_KILLFOCUS, _Ondd1KillfocusFnc);
	m_wnddd1.SetEvent(WE_CHECKVALUE, _Ondd1CheckValueFnc);
	//m_wndgio2.SetEvent(WE_CHANGE, _Ongio2ChangeFnc);
	//m_wndgio2.SetEvent(WE_SETFOCUS, _Ongio2SetfocusFnc);
	//m_wndgio2.SetEvent(WE_KILLFOCUS, _Ongio2KillfocusFnc);
	m_wndgio2.SetEvent(WE_CHECKVALUE, _Ongio2CheckValueFnc);
	//m_wndda2.SetEvent(WE_CHANGE, _Onda2ChangeFnc);
	//m_wndda2.SetEvent(WE_SETFOCUS, _Onda2SetfocusFnc);
	//m_wndda2.SetEvent(WE_KILLFOCUS, _Onda2KillfocusFnc);
	m_wndda2.SetEvent(WE_CHECKVALUE, _Onda2CheckValueFnc);
	//m_wndtg2.SetEvent(WE_CHANGE, _Ontg2ChangeFnc);
	//m_wndtg2.SetEvent(WE_SETFOCUS, _Ontg2SetfocusFnc);
	//m_wndtg2.SetEvent(WE_KILLFOCUS, _Ontg2KillfocusFnc);
	m_wndtg2.SetEvent(WE_CHECKVALUE, _Ontg2CheckValueFnc);
	//m_wnddau2.SetEvent(WE_CHANGE, _Ondau2ChangeFnc);
	//m_wnddau2.SetEvent(WE_SETFOCUS, _Ondau2SetfocusFnc);
	//m_wnddau2.SetEvent(WE_KILLFOCUS, _Ondau2KillfocusFnc);
	m_wnddau2.SetEvent(WE_CHECKVALUE, _Ondau2CheckValueFnc);
	//m_wndvm2.SetEvent(WE_CHANGE, _Onvm2ChangeFnc);
	//m_wndvm2.SetEvent(WE_SETFOCUS, _Onvm2SetfocusFnc);
	//m_wndvm2.SetEvent(WE_KILLFOCUS, _Onvm2KillfocusFnc);
	m_wndvm2.SetEvent(WE_CHECKVALUE, _Onvm2CheckValueFnc);
	//m_wndnt2.SetEvent(WE_CHANGE, _Onnt2ChangeFnc);
	//m_wndnt2.SetEvent(WE_SETFOCUS, _Onnt2SetfocusFnc);
	//m_wndnt2.SetEvent(WE_KILLFOCUS, _Onnt2KillfocusFnc);
	m_wndnt2.SetEvent(WE_CHECKVALUE, _Onnt2CheckValueFnc);
	//m_wnddl2.SetEvent(WE_CHANGE, _Ondl2ChangeFnc);
	//m_wnddl2.SetEvent(WE_SETFOCUS, _Ondl2SetfocusFnc);
	//m_wnddl2.SetEvent(WE_KILLFOCUS, _Ondl2KillfocusFnc);
	m_wnddl2.SetEvent(WE_CHECKVALUE, _Ondl2CheckValueFnc);
	//m_wnda2.SetEvent(WE_CHANGE, _Ona2ChangeFnc);
	//m_wnda2.SetEvent(WE_SETFOCUS, _Ona2SetfocusFnc);
	//m_wnda2.SetEvent(WE_KILLFOCUS, _Ona2KillfocusFnc);
	m_wnda2.SetEvent(WE_CHECKVALUE, _Ona2CheckValueFnc);
	//m_wndb2.SetEvent(WE_CHANGE, _Onb2ChangeFnc);
	//m_wndb2.SetEvent(WE_SETFOCUS, _Onb2SetfocusFnc);
	//m_wndb2.SetEvent(WE_KILLFOCUS, _Onb2KillfocusFnc);
	m_wndb2.SetEvent(WE_CHECKVALUE, _Onb2CheckValueFnc);
	//m_wndc2.SetEvent(WE_CHANGE, _Onc2ChangeFnc);
	//m_wndc2.SetEvent(WE_SETFOCUS, _Onc2SetfocusFnc);
	//m_wndc2.SetEvent(WE_KILLFOCUS, _Onc2KillfocusFnc);
	m_wndc2.SetEvent(WE_CHECKVALUE, _Onc2CheckValueFnc);
	//m_wndsd2.SetEvent(WE_CHANGE, _Onsd2ChangeFnc);
	//m_wndsd2.SetEvent(WE_SETFOCUS, _Onsd2SetfocusFnc);
	//m_wndsd2.SetEvent(WE_KILLFOCUS, _Onsd2KillfocusFnc);
	m_wndsd2.SetEvent(WE_CHECKVALUE, _Onsd2CheckValueFnc);
	//m_wndan2.SetEvent(WE_CHANGE, _Onan2ChangeFnc);
	//m_wndan2.SetEvent(WE_SETFOCUS, _Onan2SetfocusFnc);
	//m_wndan2.SetEvent(WE_KILLFOCUS, _Onan2KillfocusFnc);
	m_wndan2.SetEvent(WE_CHECKVALUE, _Onan2CheckValueFnc);
	//m_wndtd2.SetEvent(WE_CHANGE, _Ontd2ChangeFnc);
	//m_wndtd2.SetEvent(WE_SETFOCUS, _Ontd2SetfocusFnc);
	//m_wndtd2.SetEvent(WE_KILLFOCUS, _Ontd2KillfocusFnc);
	m_wndtd2.SetEvent(WE_CHECKVALUE, _Ontd2CheckValueFnc);
	//m_wnddd2.SetEvent(WE_CHANGE, _Ondd2ChangeFnc);
	//m_wnddd2.SetEvent(WE_SETFOCUS, _Ondd2SetfocusFnc);
	//m_wnddd2.SetEvent(WE_KILLFOCUS, _Ondd2KillfocusFnc);
	m_wnddd2.SetEvent(WE_CHECKVALUE, _Ondd2CheckValueFnc);
	//m_wndgio3.SetEvent(WE_CHANGE, _Ongio3ChangeFnc);
	//m_wndgio3.SetEvent(WE_SETFOCUS, _Ongio3SetfocusFnc);
	//m_wndgio3.SetEvent(WE_KILLFOCUS, _Ongio3KillfocusFnc);
	m_wndgio3.SetEvent(WE_CHECKVALUE, _Ongio3CheckValueFnc);
	//m_wndda3.SetEvent(WE_CHANGE, _Onda3ChangeFnc);
	//m_wndda3.SetEvent(WE_SETFOCUS, _Onda3SetfocusFnc);
	//m_wndda3.SetEvent(WE_KILLFOCUS, _Onda3KillfocusFnc);
	m_wndda3.SetEvent(WE_CHECKVALUE, _Onda3CheckValueFnc);
	//m_wndtg3.SetEvent(WE_CHANGE, _Ontg3ChangeFnc);
	//m_wndtg3.SetEvent(WE_SETFOCUS, _Ontg3SetfocusFnc);
	//m_wndtg3.SetEvent(WE_KILLFOCUS, _Ontg3KillfocusFnc);
	m_wndtg3.SetEvent(WE_CHECKVALUE, _Ontg3CheckValueFnc);
	//m_wnddau3.SetEvent(WE_CHANGE, _Ondau3ChangeFnc);
	//m_wnddau3.SetEvent(WE_SETFOCUS, _Ondau3SetfocusFnc);
	//m_wnddau3.SetEvent(WE_KILLFOCUS, _Ondau3KillfocusFnc);
	m_wnddau3.SetEvent(WE_CHECKVALUE, _Ondau3CheckValueFnc);
	//m_wndvm3.SetEvent(WE_CHANGE, _Onvm3ChangeFnc);
	//m_wndvm3.SetEvent(WE_SETFOCUS, _Onvm3SetfocusFnc);
	//m_wndvm3.SetEvent(WE_KILLFOCUS, _Onvm3KillfocusFnc);
	m_wndvm3.SetEvent(WE_CHECKVALUE, _Onvm3CheckValueFnc);
	//m_wndnt3.SetEvent(WE_CHANGE, _Onnt3ChangeFnc);
	//m_wndnt3.SetEvent(WE_SETFOCUS, _Onnt3SetfocusFnc);
	//m_wndnt3.SetEvent(WE_KILLFOCUS, _Onnt3KillfocusFnc);
	m_wndnt3.SetEvent(WE_CHECKVALUE, _Onnt3CheckValueFnc);
	//m_wnddl3.SetEvent(WE_CHANGE, _Ondl3ChangeFnc);
	//m_wnddl3.SetEvent(WE_SETFOCUS, _Ondl3SetfocusFnc);
	//m_wnddl3.SetEvent(WE_KILLFOCUS, _Ondl3KillfocusFnc);
	m_wnddl3.SetEvent(WE_CHECKVALUE, _Ondl3CheckValueFnc);
	//m_wnda3.SetEvent(WE_CHANGE, _Ona3ChangeFnc);
	//m_wnda3.SetEvent(WE_SETFOCUS, _Ona3SetfocusFnc);
	//m_wnda3.SetEvent(WE_KILLFOCUS, _Ona3KillfocusFnc);
	m_wnda3.SetEvent(WE_CHECKVALUE, _Ona3CheckValueFnc);
	//m_wndb3.SetEvent(WE_CHANGE, _Onb3ChangeFnc);
	//m_wndb3.SetEvent(WE_SETFOCUS, _Onb3SetfocusFnc);
	//m_wndb3.SetEvent(WE_KILLFOCUS, _Onb3KillfocusFnc);
	m_wndb3.SetEvent(WE_CHECKVALUE, _Onb3CheckValueFnc);
	//m_wndc3.SetEvent(WE_CHANGE, _Onc3ChangeFnc);
	//m_wndc3.SetEvent(WE_SETFOCUS, _Onc3SetfocusFnc);
	//m_wndc3.SetEvent(WE_KILLFOCUS, _Onc3KillfocusFnc);
	m_wndc3.SetEvent(WE_CHECKVALUE, _Onc3CheckValueFnc);
	//m_wndsd3.SetEvent(WE_CHANGE, _Onsd3ChangeFnc);
	//m_wndsd3.SetEvent(WE_SETFOCUS, _Onsd3SetfocusFnc);
	//m_wndsd3.SetEvent(WE_KILLFOCUS, _Onsd3KillfocusFnc);
	m_wndsd3.SetEvent(WE_CHECKVALUE, _Onsd3CheckValueFnc);
	//m_wndan3.SetEvent(WE_CHANGE, _Onan3ChangeFnc);
	//m_wndan3.SetEvent(WE_SETFOCUS, _Onan3SetfocusFnc);
	//m_wndan3.SetEvent(WE_KILLFOCUS, _Onan3KillfocusFnc);
	m_wndan3.SetEvent(WE_CHECKVALUE, _Onan3CheckValueFnc);
	//m_wndtd3.SetEvent(WE_CHANGE, _Ontd3ChangeFnc);
	//m_wndtd3.SetEvent(WE_SETFOCUS, _Ontd3SetfocusFnc);
	//m_wndtd3.SetEvent(WE_KILLFOCUS, _Ontd3KillfocusFnc);
	m_wndtd3.SetEvent(WE_CHECKVALUE, _Ontd3CheckValueFnc);
	//m_wnddd3.SetEvent(WE_CHANGE, _Ondd3ChangeFnc);
	//m_wnddd3.SetEvent(WE_SETFOCUS, _Ondd3SetfocusFnc);
	//m_wnddd3.SetEvent(WE_KILLFOCUS, _Ondd3KillfocusFnc);
	m_wnddd3.SetEvent(WE_CHECKVALUE, _Ondd3CheckValueFnc);
	//m_wndgio4.SetEvent(WE_CHANGE, _Ongio4ChangeFnc);
	//m_wndgio4.SetEvent(WE_SETFOCUS, _Ongio4SetfocusFnc);
	//m_wndgio4.SetEvent(WE_KILLFOCUS, _Ongio4KillfocusFnc);
	m_wndgio4.SetEvent(WE_CHECKVALUE, _Ongio4CheckValueFnc);
	//m_wndda4.SetEvent(WE_CHANGE, _Onda4ChangeFnc);
	//m_wndda4.SetEvent(WE_SETFOCUS, _Onda4SetfocusFnc);
	//m_wndda4.SetEvent(WE_KILLFOCUS, _Onda4KillfocusFnc);
	m_wndda4.SetEvent(WE_CHECKVALUE, _Onda4CheckValueFnc);
	//m_wndtg4.SetEvent(WE_CHANGE, _Ontg4ChangeFnc);
	//m_wndtg4.SetEvent(WE_SETFOCUS, _Ontg4SetfocusFnc);
	//m_wndtg4.SetEvent(WE_KILLFOCUS, _Ontg4KillfocusFnc);
	m_wndtg4.SetEvent(WE_CHECKVALUE, _Ontg4CheckValueFnc);
	//m_wnddau4.SetEvent(WE_CHANGE, _Ondau4ChangeFnc);
	//m_wnddau4.SetEvent(WE_SETFOCUS, _Ondau4SetfocusFnc);
	//m_wnddau4.SetEvent(WE_KILLFOCUS, _Ondau4KillfocusFnc);
	m_wnddau4.SetEvent(WE_CHECKVALUE, _Ondau4CheckValueFnc);
	//m_wndvm4.SetEvent(WE_CHANGE, _Onvm4ChangeFnc);
	//m_wndvm4.SetEvent(WE_SETFOCUS, _Onvm4SetfocusFnc);
	//m_wndvm4.SetEvent(WE_KILLFOCUS, _Onvm4KillfocusFnc);
	m_wndvm4.SetEvent(WE_CHECKVALUE, _Onvm4CheckValueFnc);
	//m_wndnt4.SetEvent(WE_CHANGE, _Onnt4ChangeFnc);
	//m_wndnt4.SetEvent(WE_SETFOCUS, _Onnt4SetfocusFnc);
	//m_wndnt4.SetEvent(WE_KILLFOCUS, _Onnt4KillfocusFnc);
	m_wndnt4.SetEvent(WE_CHECKVALUE, _Onnt4CheckValueFnc);
	//m_wnddl4.SetEvent(WE_CHANGE, _Ondl4ChangeFnc);
	//m_wnddl4.SetEvent(WE_SETFOCUS, _Ondl4SetfocusFnc);
	//m_wnddl4.SetEvent(WE_KILLFOCUS, _Ondl4KillfocusFnc);
	m_wnddl4.SetEvent(WE_CHECKVALUE, _Ondl4CheckValueFnc);
	//m_wnda4.SetEvent(WE_CHANGE, _Ona4ChangeFnc);
	//m_wnda4.SetEvent(WE_SETFOCUS, _Ona4SetfocusFnc);
	//m_wnda4.SetEvent(WE_KILLFOCUS, _Ona4KillfocusFnc);
	m_wnda4.SetEvent(WE_CHECKVALUE, _Ona4CheckValueFnc);
	//m_wndb4.SetEvent(WE_CHANGE, _Onb4ChangeFnc);
	//m_wndb4.SetEvent(WE_SETFOCUS, _Onb4SetfocusFnc);
	//m_wndb4.SetEvent(WE_KILLFOCUS, _Onb4KillfocusFnc);
	m_wndb4.SetEvent(WE_CHECKVALUE, _Onb4CheckValueFnc);
	//m_wndc4.SetEvent(WE_CHANGE, _Onc4ChangeFnc);
	//m_wndc4.SetEvent(WE_SETFOCUS, _Onc4SetfocusFnc);
	//m_wndc4.SetEvent(WE_KILLFOCUS, _Onc4KillfocusFnc);
	m_wndc4.SetEvent(WE_CHECKVALUE, _Onc4CheckValueFnc);
	//m_wndsd4.SetEvent(WE_CHANGE, _Onsd4ChangeFnc);
	//m_wndsd4.SetEvent(WE_SETFOCUS, _Onsd4SetfocusFnc);
	//m_wndsd4.SetEvent(WE_KILLFOCUS, _Onsd4KillfocusFnc);
	m_wndsd4.SetEvent(WE_CHECKVALUE, _Onsd4CheckValueFnc);
	//m_wndan4.SetEvent(WE_CHANGE, _Onan4ChangeFnc);
	//m_wndan4.SetEvent(WE_SETFOCUS, _Onan4SetfocusFnc);
	//m_wndan4.SetEvent(WE_KILLFOCUS, _Onan4KillfocusFnc);
	m_wndan4.SetEvent(WE_CHECKVALUE, _Onan4CheckValueFnc);
	//m_wndtd4.SetEvent(WE_CHANGE, _Ontd4ChangeFnc);
	//m_wndtd4.SetEvent(WE_SETFOCUS, _Ontd4SetfocusFnc);
	//m_wndtd4.SetEvent(WE_KILLFOCUS, _Ontd4KillfocusFnc);
	m_wndtd4.SetEvent(WE_CHECKVALUE, _Ontd4CheckValueFnc);
	//m_wnddd4.SetEvent(WE_CHANGE, _Ondd4ChangeFnc);
	//m_wnddd4.SetEvent(WE_SETFOCUS, _Ondd4SetfocusFnc);
	//m_wnddd4.SetEvent(WE_KILLFOCUS, _Ondd4KillfocusFnc);
	m_wnddd4.SetEvent(WE_CHECKVALUE, _Ondd4CheckValueFnc);
	//m_wndgio5.SetEvent(WE_CHANGE, _Ongio5ChangeFnc);
	//m_wndgio5.SetEvent(WE_SETFOCUS, _Ongio5SetfocusFnc);
	//m_wndgio5.SetEvent(WE_KILLFOCUS, _Ongio5KillfocusFnc);
	m_wndgio5.SetEvent(WE_CHECKVALUE, _Ongio5CheckValueFnc);
	//m_wndda5.SetEvent(WE_CHANGE, _Onda5ChangeFnc);
	//m_wndda5.SetEvent(WE_SETFOCUS, _Onda5SetfocusFnc);
	//m_wndda5.SetEvent(WE_KILLFOCUS, _Onda5KillfocusFnc);
	m_wndda5.SetEvent(WE_CHECKVALUE, _Onda5CheckValueFnc);
	//m_wndtg5.SetEvent(WE_CHANGE, _Ontg5ChangeFnc);
	//m_wndtg5.SetEvent(WE_SETFOCUS, _Ontg5SetfocusFnc);
	//m_wndtg5.SetEvent(WE_KILLFOCUS, _Ontg5KillfocusFnc);
	m_wndtg5.SetEvent(WE_CHECKVALUE, _Ontg5CheckValueFnc);
	//m_wnddau5.SetEvent(WE_CHANGE, _Ondau5ChangeFnc);
	//m_wnddau5.SetEvent(WE_SETFOCUS, _Ondau5SetfocusFnc);
	//m_wnddau5.SetEvent(WE_KILLFOCUS, _Ondau5KillfocusFnc);
	m_wnddau5.SetEvent(WE_CHECKVALUE, _Ondau5CheckValueFnc);
	//m_wndvm5.SetEvent(WE_CHANGE, _Onvm5ChangeFnc);
	//m_wndvm5.SetEvent(WE_SETFOCUS, _Onvm5SetfocusFnc);
	//m_wndvm5.SetEvent(WE_KILLFOCUS, _Onvm5KillfocusFnc);
	m_wndvm5.SetEvent(WE_CHECKVALUE, _Onvm5CheckValueFnc);
	//m_wndnt5.SetEvent(WE_CHANGE, _Onnt5ChangeFnc);
	//m_wndnt5.SetEvent(WE_SETFOCUS, _Onnt5SetfocusFnc);
	//m_wndnt5.SetEvent(WE_KILLFOCUS, _Onnt5KillfocusFnc);
	m_wndnt5.SetEvent(WE_CHECKVALUE, _Onnt5CheckValueFnc);
	//m_wnddl5.SetEvent(WE_CHANGE, _Ondl5ChangeFnc);
	//m_wnddl5.SetEvent(WE_SETFOCUS, _Ondl5SetfocusFnc);
	//m_wnddl5.SetEvent(WE_KILLFOCUS, _Ondl5KillfocusFnc);
	m_wnddl5.SetEvent(WE_CHECKVALUE, _Ondl5CheckValueFnc);
	//m_wnda5.SetEvent(WE_CHANGE, _Ona5ChangeFnc);
	//m_wnda5.SetEvent(WE_SETFOCUS, _Ona5SetfocusFnc);
	//m_wnda5.SetEvent(WE_KILLFOCUS, _Ona5KillfocusFnc);
	m_wnda5.SetEvent(WE_CHECKVALUE, _Ona5CheckValueFnc);
	//m_wndb5.SetEvent(WE_CHANGE, _Onb5ChangeFnc);
	//m_wndb5.SetEvent(WE_SETFOCUS, _Onb5SetfocusFnc);
	//m_wndb5.SetEvent(WE_KILLFOCUS, _Onb5KillfocusFnc);
	m_wndb5.SetEvent(WE_CHECKVALUE, _Onb5CheckValueFnc);
	//m_wndc5.SetEvent(WE_CHANGE, _Onc5ChangeFnc);
	//m_wndc5.SetEvent(WE_SETFOCUS, _Onc5SetfocusFnc);
	//m_wndc5.SetEvent(WE_KILLFOCUS, _Onc5KillfocusFnc);
	m_wndc5.SetEvent(WE_CHECKVALUE, _Onc5CheckValueFnc);
	//m_wndsd5.SetEvent(WE_CHANGE, _Onsd5ChangeFnc);
	//m_wndsd5.SetEvent(WE_SETFOCUS, _Onsd5SetfocusFnc);
	//m_wndsd5.SetEvent(WE_KILLFOCUS, _Onsd5KillfocusFnc);
	m_wndsd5.SetEvent(WE_CHECKVALUE, _Onsd5CheckValueFnc);
	//m_wndan5.SetEvent(WE_CHANGE, _Onan5ChangeFnc);
	//m_wndan5.SetEvent(WE_SETFOCUS, _Onan5SetfocusFnc);
	//m_wndan5.SetEvent(WE_KILLFOCUS, _Onan5KillfocusFnc);
	m_wndan5.SetEvent(WE_CHECKVALUE, _Onan5CheckValueFnc);
	//m_wndtd5.SetEvent(WE_CHANGE, _Ontd5ChangeFnc);
	//m_wndtd5.SetEvent(WE_SETFOCUS, _Ontd5SetfocusFnc);
	//m_wndtd5.SetEvent(WE_KILLFOCUS, _Ontd5KillfocusFnc);
	m_wndtd5.SetEvent(WE_CHECKVALUE, _Ontd5CheckValueFnc);
	//m_wnddd5.SetEvent(WE_CHANGE, _Ondd5ChangeFnc);
	//m_wnddd5.SetEvent(WE_SETFOCUS, _Ondd5SetfocusFnc);
	//m_wnddd5.SetEvent(WE_KILLFOCUS, _Ondd5KillfocusFnc);
	m_wnddd5.SetEvent(WE_CHECKVALUE, _Ondd5CheckValueFnc);
	//m_wndgio6.SetEvent(WE_CHANGE, _Ongio6ChangeFnc);
	//m_wndgio6.SetEvent(WE_SETFOCUS, _Ongio6SetfocusFnc);
	//m_wndgio6.SetEvent(WE_KILLFOCUS, _Ongio6KillfocusFnc);
	m_wndgio6.SetEvent(WE_CHECKVALUE, _Ongio6CheckValueFnc);
	//m_wndda6.SetEvent(WE_CHANGE, _Onda6ChangeFnc);
	//m_wndda6.SetEvent(WE_SETFOCUS, _Onda6SetfocusFnc);
	//m_wndda6.SetEvent(WE_KILLFOCUS, _Onda6KillfocusFnc);
	m_wndda6.SetEvent(WE_CHECKVALUE, _Onda6CheckValueFnc);
	//m_wndtg6.SetEvent(WE_CHANGE, _Ontg6ChangeFnc);
	//m_wndtg6.SetEvent(WE_SETFOCUS, _Ontg6SetfocusFnc);
	//m_wndtg6.SetEvent(WE_KILLFOCUS, _Ontg6KillfocusFnc);
	m_wndtg6.SetEvent(WE_CHECKVALUE, _Ontg6CheckValueFnc);
	//m_wnddau6.SetEvent(WE_CHANGE, _Ondau6ChangeFnc);
	//m_wnddau6.SetEvent(WE_SETFOCUS, _Ondau6SetfocusFnc);
	//m_wnddau6.SetEvent(WE_KILLFOCUS, _Ondau6KillfocusFnc);
	m_wnddau6.SetEvent(WE_CHECKVALUE, _Ondau6CheckValueFnc);
	//m_wndvm6.SetEvent(WE_CHANGE, _Onvm6ChangeFnc);
	//m_wndvm6.SetEvent(WE_SETFOCUS, _Onvm6SetfocusFnc);
	//m_wndvm6.SetEvent(WE_KILLFOCUS, _Onvm6KillfocusFnc);
	m_wndvm6.SetEvent(WE_CHECKVALUE, _Onvm6CheckValueFnc);
	//m_wndnt6.SetEvent(WE_CHANGE, _Onnt6ChangeFnc);
	//m_wndnt6.SetEvent(WE_SETFOCUS, _Onnt6SetfocusFnc);
	//m_wndnt6.SetEvent(WE_KILLFOCUS, _Onnt6KillfocusFnc);
	m_wndnt6.SetEvent(WE_CHECKVALUE, _Onnt6CheckValueFnc);
	//m_wnddl6.SetEvent(WE_CHANGE, _Ondl6ChangeFnc);
	//m_wnddl6.SetEvent(WE_SETFOCUS, _Ondl6SetfocusFnc);
	//m_wnddl6.SetEvent(WE_KILLFOCUS, _Ondl6KillfocusFnc);
	m_wnddl6.SetEvent(WE_CHECKVALUE, _Ondl6CheckValueFnc);
	//m_wnda6.SetEvent(WE_CHANGE, _Ona6ChangeFnc);
	//m_wnda6.SetEvent(WE_SETFOCUS, _Ona6SetfocusFnc);
	//m_wnda6.SetEvent(WE_KILLFOCUS, _Ona6KillfocusFnc);
	m_wnda6.SetEvent(WE_CHECKVALUE, _Ona6CheckValueFnc);
	//m_wndb6.SetEvent(WE_CHANGE, _Onb6ChangeFnc);
	//m_wndb6.SetEvent(WE_SETFOCUS, _Onb6SetfocusFnc);
	//m_wndb6.SetEvent(WE_KILLFOCUS, _Onb6KillfocusFnc);
	m_wndb6.SetEvent(WE_CHECKVALUE, _Onb6CheckValueFnc);
	//m_wndc6.SetEvent(WE_CHANGE, _Onc6ChangeFnc);
	//m_wndc6.SetEvent(WE_SETFOCUS, _Onc6SetfocusFnc);
	//m_wndc6.SetEvent(WE_KILLFOCUS, _Onc6KillfocusFnc);
	m_wndc6.SetEvent(WE_CHECKVALUE, _Onc6CheckValueFnc);
	//m_wndsd6.SetEvent(WE_CHANGE, _Onsd6ChangeFnc);
	//m_wndsd6.SetEvent(WE_SETFOCUS, _Onsd6SetfocusFnc);
	//m_wndsd6.SetEvent(WE_KILLFOCUS, _Onsd6KillfocusFnc);
	m_wndsd6.SetEvent(WE_CHECKVALUE, _Onsd6CheckValueFnc);
	//m_wndan6.SetEvent(WE_CHANGE, _Onan6ChangeFnc);
	//m_wndan6.SetEvent(WE_SETFOCUS, _Onan6SetfocusFnc);
	//m_wndan6.SetEvent(WE_KILLFOCUS, _Onan6KillfocusFnc);
	m_wndan6.SetEvent(WE_CHECKVALUE, _Onan6CheckValueFnc);
	//m_wndtd6.SetEvent(WE_CHANGE, _Ontd6ChangeFnc);
	//m_wndtd6.SetEvent(WE_SETFOCUS, _Ontd6SetfocusFnc);
	//m_wndtd6.SetEvent(WE_KILLFOCUS, _Ontd6KillfocusFnc);
	m_wndtd6.SetEvent(WE_CHECKVALUE, _Ontd6CheckValueFnc);
	//m_wnddd6.SetEvent(WE_CHANGE, _Ondd6ChangeFnc);
	//m_wnddd6.SetEvent(WE_SETFOCUS, _Ondd6SetfocusFnc);
	//m_wnddd6.SetEvent(WE_KILLFOCUS, _Ondd6KillfocusFnc);
	m_wnddd6.SetEvent(WE_CHECKVALUE, _Ondd6CheckValueFnc);
	//m_wndgio7.SetEvent(WE_CHANGE, _Ongio7ChangeFnc);
	//m_wndgio7.SetEvent(WE_SETFOCUS, _Ongio7SetfocusFnc);
	//m_wndgio7.SetEvent(WE_KILLFOCUS, _Ongio7KillfocusFnc);
	m_wndgio7.SetEvent(WE_CHECKVALUE, _Ongio7CheckValueFnc);
	//m_wndda7.SetEvent(WE_CHANGE, _Onda7ChangeFnc);
	//m_wndda7.SetEvent(WE_SETFOCUS, _Onda7SetfocusFnc);
	//m_wndda7.SetEvent(WE_KILLFOCUS, _Onda7KillfocusFnc);
	m_wndda7.SetEvent(WE_CHECKVALUE, _Onda7CheckValueFnc);
	//m_wndtg7.SetEvent(WE_CHANGE, _Ontg7ChangeFnc);
	//m_wndtg7.SetEvent(WE_SETFOCUS, _Ontg7SetfocusFnc);
	//m_wndtg7.SetEvent(WE_KILLFOCUS, _Ontg7KillfocusFnc);
	m_wndtg7.SetEvent(WE_CHECKVALUE, _Ontg7CheckValueFnc);
	//m_wnddau7.SetEvent(WE_CHANGE, _Ondau7ChangeFnc);
	//m_wnddau7.SetEvent(WE_SETFOCUS, _Ondau7SetfocusFnc);
	//m_wnddau7.SetEvent(WE_KILLFOCUS, _Ondau7KillfocusFnc);
	m_wnddau7.SetEvent(WE_CHECKVALUE, _Ondau7CheckValueFnc);
	//m_wndvm7.SetEvent(WE_CHANGE, _Onvm7ChangeFnc);
	//m_wndvm7.SetEvent(WE_SETFOCUS, _Onvm7SetfocusFnc);
	//m_wndvm7.SetEvent(WE_KILLFOCUS, _Onvm7KillfocusFnc);
	m_wndvm7.SetEvent(WE_CHECKVALUE, _Onvm7CheckValueFnc);
	//m_wndnt7.SetEvent(WE_CHANGE, _Onnt7ChangeFnc);
	//m_wndnt7.SetEvent(WE_SETFOCUS, _Onnt7SetfocusFnc);
	//m_wndnt7.SetEvent(WE_KILLFOCUS, _Onnt7KillfocusFnc);
	m_wndnt7.SetEvent(WE_CHECKVALUE, _Onnt7CheckValueFnc);
	//m_wnddl7.SetEvent(WE_CHANGE, _Ondl7ChangeFnc);
	//m_wnddl7.SetEvent(WE_SETFOCUS, _Ondl7SetfocusFnc);
	//m_wnddl7.SetEvent(WE_KILLFOCUS, _Ondl7KillfocusFnc);
	m_wnddl7.SetEvent(WE_CHECKVALUE, _Ondl7CheckValueFnc);
	//m_wnda7.SetEvent(WE_CHANGE, _Ona7ChangeFnc);
	//m_wnda7.SetEvent(WE_SETFOCUS, _Ona7SetfocusFnc);
	//m_wnda7.SetEvent(WE_KILLFOCUS, _Ona7KillfocusFnc);
	m_wnda7.SetEvent(WE_CHECKVALUE, _Ona7CheckValueFnc);
	//m_wndb7.SetEvent(WE_CHANGE, _Onb7ChangeFnc);
	//m_wndb7.SetEvent(WE_SETFOCUS, _Onb7SetfocusFnc);
	//m_wndb7.SetEvent(WE_KILLFOCUS, _Onb7KillfocusFnc);
	m_wndb7.SetEvent(WE_CHECKVALUE, _Onb7CheckValueFnc);
	//m_wndc7.SetEvent(WE_CHANGE, _Onc7ChangeFnc);
	//m_wndc7.SetEvent(WE_SETFOCUS, _Onc7SetfocusFnc);
	//m_wndc7.SetEvent(WE_KILLFOCUS, _Onc7KillfocusFnc);
	m_wndc7.SetEvent(WE_CHECKVALUE, _Onc7CheckValueFnc);
	//m_wndsd7.SetEvent(WE_CHANGE, _Onsd7ChangeFnc);
	//m_wndsd7.SetEvent(WE_SETFOCUS, _Onsd7SetfocusFnc);
	//m_wndsd7.SetEvent(WE_KILLFOCUS, _Onsd7KillfocusFnc);
	m_wndsd7.SetEvent(WE_CHECKVALUE, _Onsd7CheckValueFnc);
	//m_wndan7.SetEvent(WE_CHANGE, _Onan7ChangeFnc);
	//m_wndan7.SetEvent(WE_SETFOCUS, _Onan7SetfocusFnc);
	//m_wndan7.SetEvent(WE_KILLFOCUS, _Onan7KillfocusFnc);
	m_wndan7.SetEvent(WE_CHECKVALUE, _Onan7CheckValueFnc);
	//m_wndtd7.SetEvent(WE_CHANGE, _Ontd7ChangeFnc);
	//m_wndtd7.SetEvent(WE_SETFOCUS, _Ontd7SetfocusFnc);
	//m_wndtd7.SetEvent(WE_KILLFOCUS, _Ontd7KillfocusFnc);
	m_wndtd7.SetEvent(WE_CHECKVALUE, _Ontd7CheckValueFnc);
	//m_wnddd7.SetEvent(WE_CHANGE, _Ondd7ChangeFnc);
	//m_wnddd7.SetEvent(WE_SETFOCUS, _Ondd7SetfocusFnc);
	//m_wnddd7.SetEvent(WE_KILLFOCUS, _Ondd7KillfocusFnc);
	m_wnddd7.SetEvent(WE_CHECKVALUE, _Ondd7CheckValueFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddPhieuChamSocBenhNhanSauKhiMo2Fnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditPhieuChamSocBenhNhanSauKhiMo2Fnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeletePhieuChamSocBenhNhanSauKhiMo2Fnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSavePhieuChamSocBenhNhanSauKhiMo2Fnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelPhieuChamSocBenhNhanSauKhiMo2Fnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);

}
void CPhieuChamSocBenhNhanSauKhiMo2::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndOperation.GetDlgCtrlID(), m_szOperationKey);
	DDX_TextEx(pDX, m_wndDate.GetDlgCtrlID(), m_szDate);
	DDX_Radio(pDX, m_wnd6hdau.GetDlgCtrlID(), m_n6hdau);
	DDX_Radio(pDX, m_wnd18htiep.GetDlgCtrlID(), m_n18htiep);
	DDX_Radio(pDX, m_wndsau25h.GetDlgCtrlID(), m_nsau25h);
	DDX_Text(pDX, m_wndgio1.GetDlgCtrlID(), m_szgio1);
	DDX_Text(pDX, m_wndda1.GetDlgCtrlID(), m_szda1);
	DDX_Text(pDX, m_wndtg1.GetDlgCtrlID(), m_sztg1);
	DDX_Text(pDX, m_wnddau1.GetDlgCtrlID(), m_szdau1);
	DDX_Text(pDX, m_wndvm1.GetDlgCtrlID(), m_szvm1);
	DDX_Text(pDX, m_wndnt1.GetDlgCtrlID(), m_sznt1);
	DDX_Text(pDX, m_wnddl1.GetDlgCtrlID(), m_szdl1);
	DDX_Text(pDX, m_wnda1.GetDlgCtrlID(), m_sza1);
	DDX_Text(pDX, m_wndb1.GetDlgCtrlID(), m_szb1);
	DDX_Text(pDX, m_wndc1.GetDlgCtrlID(), m_szc1);
	DDX_Text(pDX, m_wndsd1.GetDlgCtrlID(), m_szsd1);
	DDX_Text(pDX, m_wndan1.GetDlgCtrlID(), m_szan1);
	DDX_Text(pDX, m_wndtd1.GetDlgCtrlID(), m_sztd1);
	DDX_Text(pDX, m_wnddd1.GetDlgCtrlID(), m_szdd1);
	DDX_Text(pDX, m_wndgio2.GetDlgCtrlID(), m_szgio2);
	DDX_Text(pDX, m_wndda2.GetDlgCtrlID(), m_szda2);
	DDX_Text(pDX, m_wndtg2.GetDlgCtrlID(), m_sztg2);
	DDX_Text(pDX, m_wnddau2.GetDlgCtrlID(), m_szdau2);
	DDX_Text(pDX, m_wndvm2.GetDlgCtrlID(), m_szvm2);
	DDX_Text(pDX, m_wndnt2.GetDlgCtrlID(), m_sznt2);
	DDX_Text(pDX, m_wnddl2.GetDlgCtrlID(), m_szdl2);
	DDX_Text(pDX, m_wnda2.GetDlgCtrlID(), m_sza2);
	DDX_Text(pDX, m_wndb2.GetDlgCtrlID(), m_szb2);
	DDX_Text(pDX, m_wndc2.GetDlgCtrlID(), m_szc2);
	DDX_Text(pDX, m_wndsd2.GetDlgCtrlID(), m_szsd2);
	DDX_Text(pDX, m_wndan2.GetDlgCtrlID(), m_szan2);
	DDX_Text(pDX, m_wndtd2.GetDlgCtrlID(), m_sztd2);
	DDX_Text(pDX, m_wnddd2.GetDlgCtrlID(), m_szdd2);
	DDX_Text(pDX, m_wndgio3.GetDlgCtrlID(), m_szgio3);
	DDX_Text(pDX, m_wndda3.GetDlgCtrlID(), m_szda3);
	DDX_Text(pDX, m_wndtg3.GetDlgCtrlID(), m_sztg3);
	DDX_Text(pDX, m_wnddau3.GetDlgCtrlID(), m_szdau3);
	DDX_Text(pDX, m_wndvm3.GetDlgCtrlID(), m_szvm3);
	DDX_Text(pDX, m_wndnt3.GetDlgCtrlID(), m_sznt3);
	DDX_Text(pDX, m_wnddl3.GetDlgCtrlID(), m_szdl3);
	DDX_Text(pDX, m_wnda3.GetDlgCtrlID(), m_sza3);
	DDX_Text(pDX, m_wndb3.GetDlgCtrlID(), m_szb3);
	DDX_Text(pDX, m_wndc3.GetDlgCtrlID(), m_szc3);
	DDX_Text(pDX, m_wndsd3.GetDlgCtrlID(), m_szsd3);
	DDX_Text(pDX, m_wndan3.GetDlgCtrlID(), m_szan3);
	DDX_Text(pDX, m_wndtd3.GetDlgCtrlID(), m_sztd3);
	DDX_Text(pDX, m_wnddd3.GetDlgCtrlID(), m_szdd3);
	DDX_Text(pDX, m_wndgio4.GetDlgCtrlID(), m_szgio4);
	DDX_Text(pDX, m_wndda4.GetDlgCtrlID(), m_szda4);
	DDX_Text(pDX, m_wndtg4.GetDlgCtrlID(), m_sztg4);
	DDX_Text(pDX, m_wnddau4.GetDlgCtrlID(), m_szdau4);
	DDX_Text(pDX, m_wndvm4.GetDlgCtrlID(), m_szvm4);
	DDX_Text(pDX, m_wndnt4.GetDlgCtrlID(), m_sznt4);
	DDX_Text(pDX, m_wnddl4.GetDlgCtrlID(), m_szdl4);
	DDX_Text(pDX, m_wnda4.GetDlgCtrlID(), m_sza4);
	DDX_Text(pDX, m_wndb4.GetDlgCtrlID(), m_szb4);
	DDX_Text(pDX, m_wndc4.GetDlgCtrlID(), m_szc4);
	DDX_Text(pDX, m_wndsd4.GetDlgCtrlID(), m_szsd4);
	DDX_Text(pDX, m_wndan4.GetDlgCtrlID(), m_szan4);
	DDX_Text(pDX, m_wndtd4.GetDlgCtrlID(), m_sztd4);
	DDX_Text(pDX, m_wnddd4.GetDlgCtrlID(), m_szdd4);
	DDX_Text(pDX, m_wndgio5.GetDlgCtrlID(), m_szgio5);
	DDX_Text(pDX, m_wndda5.GetDlgCtrlID(), m_szda5);
	DDX_Text(pDX, m_wndtg5.GetDlgCtrlID(), m_sztg5);
	DDX_Text(pDX, m_wnddau5.GetDlgCtrlID(), m_szdau5);
	DDX_Text(pDX, m_wndvm5.GetDlgCtrlID(), m_szvm5);
	DDX_Text(pDX, m_wndnt5.GetDlgCtrlID(), m_sznt5);
	DDX_Text(pDX, m_wnddl5.GetDlgCtrlID(), m_szdl5);
	DDX_Text(pDX, m_wnda5.GetDlgCtrlID(), m_sza5);
	DDX_Text(pDX, m_wndb5.GetDlgCtrlID(), m_szb5);
	DDX_Text(pDX, m_wndc5.GetDlgCtrlID(), m_szc5);
	DDX_Text(pDX, m_wndsd5.GetDlgCtrlID(), m_szsd5);
	DDX_Text(pDX, m_wndan5.GetDlgCtrlID(), m_szan5);
	DDX_Text(pDX, m_wndtd5.GetDlgCtrlID(), m_sztd5);
	DDX_Text(pDX, m_wnddd5.GetDlgCtrlID(), m_szdd5);
	DDX_Text(pDX, m_wndgio6.GetDlgCtrlID(), m_szgio6);
	DDX_Text(pDX, m_wndda6.GetDlgCtrlID(), m_szda6);
	DDX_Text(pDX, m_wndtg6.GetDlgCtrlID(), m_sztg6);
	DDX_Text(pDX, m_wnddau6.GetDlgCtrlID(), m_szdau6);
	DDX_Text(pDX, m_wndvm6.GetDlgCtrlID(), m_szvm6);
	DDX_Text(pDX, m_wndnt6.GetDlgCtrlID(), m_sznt6);
	DDX_Text(pDX, m_wnddl6.GetDlgCtrlID(), m_szdl6);
	DDX_Text(pDX, m_wnda6.GetDlgCtrlID(), m_sza6);
	DDX_Text(pDX, m_wndb6.GetDlgCtrlID(), m_szb6);
	DDX_Text(pDX, m_wndc6.GetDlgCtrlID(), m_szc6);
	DDX_Text(pDX, m_wndsd6.GetDlgCtrlID(), m_szsd6);
	DDX_Text(pDX, m_wndan6.GetDlgCtrlID(), m_szan6);
	DDX_Text(pDX, m_wndtd6.GetDlgCtrlID(), m_sztd6);
	DDX_Text(pDX, m_wnddd6.GetDlgCtrlID(), m_szdd6);
	DDX_Text(pDX, m_wndgio7.GetDlgCtrlID(), m_szgio7);
	DDX_Text(pDX, m_wndda7.GetDlgCtrlID(), m_szda7);
	DDX_Text(pDX, m_wndtg7.GetDlgCtrlID(), m_sztg7);
	DDX_Text(pDX, m_wnddau7.GetDlgCtrlID(), m_szdau7);
	DDX_Text(pDX, m_wndvm7.GetDlgCtrlID(), m_szvm7);
	DDX_Text(pDX, m_wndnt7.GetDlgCtrlID(), m_sznt7);
	DDX_Text(pDX, m_wnddl7.GetDlgCtrlID(), m_szdl7);
	DDX_Text(pDX, m_wnda7.GetDlgCtrlID(), m_sza7);
	DDX_Text(pDX, m_wndb7.GetDlgCtrlID(), m_szb7);
	DDX_Text(pDX, m_wndc7.GetDlgCtrlID(), m_szc7);
	DDX_Text(pDX, m_wndsd7.GetDlgCtrlID(), m_szsd7);
	DDX_Text(pDX, m_wndan7.GetDlgCtrlID(), m_szan7);
	DDX_Text(pDX, m_wndtd7.GetDlgCtrlID(), m_sztd7);
	DDX_Text(pDX, m_wnddd7.GetDlgCtrlID(), m_szdd7);

}
void CPhieuChamSocBenhNhanSauKhiMo2::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("Operation")] =  m_szOperationKey;
	m_jData[_T("Date")] =  m_szDate;
	m_jData[_T("6hdau")] =  m_n6hdau;
	m_jData[_T("18htiep")] =  m_n18htiep;
	m_jData[_T("sau25h")] =  m_nsau25h;
	m_jData[_T("gio1")] =  m_szgio1;
	m_jData[_T("da1")] =  m_szda1;
	m_jData[_T("tg1")] =  m_sztg1;
	m_jData[_T("dau1")] =  m_szdau1;
	m_jData[_T("vm1")] =  m_szvm1;
	m_jData[_T("nt1")] =  m_sznt1;
	m_jData[_T("dl1")] =  m_szdl1;
	m_jData[_T("a1")] =  m_sza1;
	m_jData[_T("b1")] =  m_szb1;
	m_jData[_T("c1")] =  m_szc1;
	m_jData[_T("sd1")] =  m_szsd1;
	m_jData[_T("an1")] =  m_szan1;
	m_jData[_T("td1")] =  m_sztd1;
	m_jData[_T("dd1")] =  m_szdd1;
	m_jData[_T("gio2")] =  m_szgio2;
	m_jData[_T("da2")] =  m_szda2;
	m_jData[_T("tg2")] =  m_sztg2;
	m_jData[_T("dau2")] =  m_szdau2;
	m_jData[_T("vm2")] =  m_szvm2;
	m_jData[_T("nt2")] =  m_sznt2;
	m_jData[_T("dl2")] =  m_szdl2;
	m_jData[_T("a2")] =  m_sza2;
	m_jData[_T("b2")] =  m_szb2;
	m_jData[_T("c2")] =  m_szc2;
	m_jData[_T("sd2")] =  m_szsd2;
	m_jData[_T("an2")] =  m_szan2;
	m_jData[_T("td2")] =  m_sztd2;
	m_jData[_T("dd2")] =  m_szdd2;
	m_jData[_T("gio3")] =  m_szgio3;
	m_jData[_T("da3")] =  m_szda3;
	m_jData[_T("tg3")] =  m_sztg3;
	m_jData[_T("dau3")] =  m_szdau3;
	m_jData[_T("vm3")] =  m_szvm3;
	m_jData[_T("nt3")] =  m_sznt3;
	m_jData[_T("dl3")] =  m_szdl3;
	m_jData[_T("a3")] =  m_sza3;
	m_jData[_T("b3")] =  m_szb3;
	m_jData[_T("c3")] =  m_szc3;
	m_jData[_T("sd3")] =  m_szsd3;
	m_jData[_T("an3")] =  m_szan3;
	m_jData[_T("td3")] =  m_sztd3;
	m_jData[_T("dd3")] =  m_szdd3;
	m_jData[_T("gio4")] =  m_szgio4;
	m_jData[_T("da4")] =  m_szda4;
	m_jData[_T("tg4")] =  m_sztg4;
	m_jData[_T("dau4")] =  m_szdau4;
	m_jData[_T("vm4")] =  m_szvm4;
	m_jData[_T("nt4")] =  m_sznt4;
	m_jData[_T("dl4")] =  m_szdl4;
	m_jData[_T("a4")] =  m_sza4;
	m_jData[_T("b4")] =  m_szb4;
	m_jData[_T("c4")] =  m_szc4;
	m_jData[_T("sd4")] =  m_szsd4;
	m_jData[_T("an4")] =  m_szan4;
	m_jData[_T("td4")] =  m_sztd4;
	m_jData[_T("dd4")] =  m_szdd4;
	m_jData[_T("gio5")] =  m_szgio5;
	m_jData[_T("da5")] =  m_szda5;
	m_jData[_T("tg5")] =  m_sztg5;
	m_jData[_T("dau5")] =  m_szdau5;
	m_jData[_T("vm5")] =  m_szvm5;
	m_jData[_T("nt5")] =  m_sznt5;
	m_jData[_T("dl5")] =  m_szdl5;
	m_jData[_T("a5")] =  m_sza5;
	m_jData[_T("b5")] =  m_szb5;
	m_jData[_T("c5")] =  m_szc5;
	m_jData[_T("sd5")] =  m_szsd5;
	m_jData[_T("an5")] =  m_szan5;
	m_jData[_T("td5")] =  m_sztd5;
	m_jData[_T("dd5")] =  m_szdd5;
	m_jData[_T("gio6")] =  m_szgio6;
	m_jData[_T("da6")] =  m_szda6;
	m_jData[_T("tg6")] =  m_sztg6;
	m_jData[_T("dau6")] =  m_szdau6;
	m_jData[_T("vm6")] =  m_szvm6;
	m_jData[_T("nt6")] =  m_sznt6;
	m_jData[_T("dl6")] =  m_szdl6;
	m_jData[_T("a6")] =  m_sza6;
	m_jData[_T("b6")] =  m_szb6;
	m_jData[_T("c6")] =  m_szc6;
	m_jData[_T("sd6")] =  m_szsd6;
	m_jData[_T("an6")] =  m_szan6;
	m_jData[_T("td6")] =  m_sztd6;
	m_jData[_T("dd6")] =  m_szdd6;
	m_jData[_T("gio7")] =  m_szgio7;
	m_jData[_T("da7")] =  m_szda7;
	m_jData[_T("tg7")] =  m_sztg7;
	m_jData[_T("dau7")] =  m_szdau7;
	m_jData[_T("vm7")] =  m_szvm7;
	m_jData[_T("nt7")] =  m_sznt7;
	m_jData[_T("dl7")] =  m_szdl7;
	m_jData[_T("a7")] =  m_sza7;
	m_jData[_T("b7")] =  m_szb7;
	m_jData[_T("c7")] =  m_szc7;
	m_jData[_T("sd7")] =  m_szsd7;
	m_jData[_T("an7")] =  m_szan7;
	m_jData[_T("td7")] =  m_sztd7;
	m_jData[_T("dd7")] =  m_szdd7;
	}
	else
	{
			
	m_jData[_T("Operation")].GetValue(m_szOperationKey);
	m_jData[_T("Date")].GetValue(m_szDate);
	m_jData[_T("6hdau")].GetValue(m_n6hdau);
	m_jData[_T("18htiep")].GetValue(m_n18htiep);
	m_jData[_T("sau25h")].GetValue(m_nsau25h);
	m_jData[_T("gio1")].GetValue(m_szgio1);
	m_jData[_T("da1")].GetValue(m_szda1);
	m_jData[_T("tg1")].GetValue(m_sztg1);
	m_jData[_T("dau1")].GetValue(m_szdau1);
	m_jData[_T("vm1")].GetValue(m_szvm1);
	m_jData[_T("nt1")].GetValue(m_sznt1);
	m_jData[_T("dl1")].GetValue(m_szdl1);
	m_jData[_T("a1")].GetValue(m_sza1);
	m_jData[_T("b1")].GetValue(m_szb1);
	m_jData[_T("c1")].GetValue(m_szc1);
	m_jData[_T("sd1")].GetValue(m_szsd1);
	m_jData[_T("an1")].GetValue(m_szan1);
	m_jData[_T("td1")].GetValue(m_sztd1);
	m_jData[_T("dd1")].GetValue(m_szdd1);
	m_jData[_T("gio2")].GetValue(m_szgio2);
	m_jData[_T("da2")].GetValue(m_szda2);
	m_jData[_T("tg2")].GetValue(m_sztg2);
	m_jData[_T("dau2")].GetValue(m_szdau2);
	m_jData[_T("vm2")].GetValue(m_szvm2);
	m_jData[_T("nt2")].GetValue(m_sznt2);
	m_jData[_T("dl2")].GetValue(m_szdl2);
	m_jData[_T("a2")].GetValue(m_sza2);
	m_jData[_T("b2")].GetValue(m_szb2);
	m_jData[_T("c2")].GetValue(m_szc2);
	m_jData[_T("sd2")].GetValue(m_szsd2);
	m_jData[_T("an2")].GetValue(m_szan2);
	m_jData[_T("td2")].GetValue(m_sztd2);
	m_jData[_T("dd2")].GetValue(m_szdd2);
	m_jData[_T("gio3")].GetValue(m_szgio3);
	m_jData[_T("da3")].GetValue(m_szda3);
	m_jData[_T("tg3")].GetValue(m_sztg3);
	m_jData[_T("dau3")].GetValue(m_szdau3);
	m_jData[_T("vm3")].GetValue(m_szvm3);
	m_jData[_T("nt3")].GetValue(m_sznt3);
	m_jData[_T("dl3")].GetValue(m_szdl3);
	m_jData[_T("a3")].GetValue(m_sza3);
	m_jData[_T("b3")].GetValue(m_szb3);
	m_jData[_T("c3")].GetValue(m_szc3);
	m_jData[_T("sd3")].GetValue(m_szsd3);
	m_jData[_T("an3")].GetValue(m_szan3);
	m_jData[_T("td3")].GetValue(m_sztd3);
	m_jData[_T("dd3")].GetValue(m_szdd3);
	m_jData[_T("gio4")].GetValue(m_szgio4);
	m_jData[_T("da4")].GetValue(m_szda4);
	m_jData[_T("tg4")].GetValue(m_sztg4);
	m_jData[_T("dau4")].GetValue(m_szdau4);
	m_jData[_T("vm4")].GetValue(m_szvm4);
	m_jData[_T("nt4")].GetValue(m_sznt4);
	m_jData[_T("dl4")].GetValue(m_szdl4);
	m_jData[_T("a4")].GetValue(m_sza4);
	m_jData[_T("b4")].GetValue(m_szb4);
	m_jData[_T("c4")].GetValue(m_szc4);
	m_jData[_T("sd4")].GetValue(m_szsd4);
	m_jData[_T("an4")].GetValue(m_szan4);
	m_jData[_T("td4")].GetValue(m_sztd4);
	m_jData[_T("dd4")].GetValue(m_szdd4);
	m_jData[_T("gio5")].GetValue(m_szgio5);
	m_jData[_T("da5")].GetValue(m_szda5);
	m_jData[_T("tg5")].GetValue(m_sztg5);
	m_jData[_T("dau5")].GetValue(m_szdau5);
	m_jData[_T("vm5")].GetValue(m_szvm5);
	m_jData[_T("nt5")].GetValue(m_sznt5);
	m_jData[_T("dl5")].GetValue(m_szdl5);
	m_jData[_T("a5")].GetValue(m_sza5);
	m_jData[_T("b5")].GetValue(m_szb5);
	m_jData[_T("c5")].GetValue(m_szc5);
	m_jData[_T("sd5")].GetValue(m_szsd5);
	m_jData[_T("an5")].GetValue(m_szan5);
	m_jData[_T("td5")].GetValue(m_sztd5);
	m_jData[_T("dd5")].GetValue(m_szdd5);
	m_jData[_T("gio6")].GetValue(m_szgio6);
	m_jData[_T("da6")].GetValue(m_szda6);
	m_jData[_T("tg6")].GetValue(m_sztg6);
	m_jData[_T("dau6")].GetValue(m_szdau6);
	m_jData[_T("vm6")].GetValue(m_szvm6);
	m_jData[_T("nt6")].GetValue(m_sznt6);
	m_jData[_T("dl6")].GetValue(m_szdl6);
	m_jData[_T("a6")].GetValue(m_sza6);
	m_jData[_T("b6")].GetValue(m_szb6);
	m_jData[_T("c6")].GetValue(m_szc6);
	m_jData[_T("sd6")].GetValue(m_szsd6);
	m_jData[_T("an6")].GetValue(m_szan6);
	m_jData[_T("td6")].GetValue(m_sztd6);
	m_jData[_T("dd6")].GetValue(m_szdd6);
	m_jData[_T("gio7")].GetValue(m_szgio7);
	m_jData[_T("da7")].GetValue(m_szda7);
	m_jData[_T("tg7")].GetValue(m_sztg7);
	m_jData[_T("dau7")].GetValue(m_szdau7);
	m_jData[_T("vm7")].GetValue(m_szvm7);
	m_jData[_T("nt7")].GetValue(m_sznt7);
	m_jData[_T("dl7")].GetValue(m_szdl7);
	m_jData[_T("a7")].GetValue(m_sza7);
	m_jData[_T("b7")].GetValue(m_szb7);
	m_jData[_T("c7")].GetValue(m_szc7);
	m_jData[_T("sd7")].GetValue(m_szsd7);
	m_jData[_T("an7")].GetValue(m_szan7);
	m_jData[_T("td7")].GetValue(m_sztd7);
	m_jData[_T("dd7")].GetValue(m_szdd7);
	}

}
void CPhieuChamSocBenhNhanSauKhiMo2::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CPhieuChamSocBenhNhanSauKhiMo2::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CPhieuChamSocBenhNhanSauKhiMo2::SetDefaultValues(){

	m_szOperationKey.Empty();
	m_szDate.Empty();
	m_n6hdau=0;
	m_n18htiep=0;
	m_nsau25h=0;
	m_szgio1.Empty();
	m_szda1.Empty();
	m_sztg1.Empty();
	m_szdau1.Empty();
	m_szvm1.Empty();
	m_sznt1.Empty();
	m_szdl1.Empty();
	m_sza1.Empty();
	m_szb1.Empty();
	m_szc1.Empty();
	m_szsd1.Empty();
	m_szan1.Empty();
	m_sztd1.Empty();
	m_szdd1.Empty();
	m_szgio2.Empty();
	m_szda2.Empty();
	m_sztg2.Empty();
	m_szdau2.Empty();
	m_szvm2.Empty();
	m_sznt2.Empty();
	m_szdl2.Empty();
	m_sza2.Empty();
	m_szb2.Empty();
	m_szc2.Empty();
	m_szsd2.Empty();
	m_szan2.Empty();
	m_sztd2.Empty();
	m_szdd2.Empty();
	m_szgio3.Empty();
	m_szda3.Empty();
	m_sztg3.Empty();
	m_szdau3.Empty();
	m_szvm3.Empty();
	m_sznt3.Empty();
	m_szdl3.Empty();
	m_sza3.Empty();
	m_szb3.Empty();
	m_szc3.Empty();
	m_szsd3.Empty();
	m_szan3.Empty();
	m_sztd3.Empty();
	m_szdd3.Empty();
	m_szgio4.Empty();
	m_szda4.Empty();
	m_sztg4.Empty();
	m_szdau4.Empty();
	m_szvm4.Empty();
	m_sznt4.Empty();
	m_szdl4.Empty();
	m_sza4.Empty();
	m_szb4.Empty();
	m_szc4.Empty();
	m_szsd4.Empty();
	m_szan4.Empty();
	m_sztd4.Empty();
	m_szdd4.Empty();
	m_szgio5.Empty();
	m_szda5.Empty();
	m_sztg5.Empty();
	m_szdau5.Empty();
	m_szvm5.Empty();
	m_sznt5.Empty();
	m_szdl5.Empty();
	m_sza5.Empty();
	m_szb5.Empty();
	m_szc5.Empty();
	m_szsd5.Empty();
	m_szan5.Empty();
	m_sztd5.Empty();
	m_szdd5.Empty();
	m_szgio6.Empty();
	m_szda6.Empty();
	m_sztg6.Empty();
	m_szdau6.Empty();
	m_szvm6.Empty();
	m_sznt6.Empty();
	m_szdl6.Empty();
	m_sza6.Empty();
	m_szb6.Empty();
	m_szc6.Empty();
	m_szsd6.Empty();
	m_szan6.Empty();
	m_sztd6.Empty();
	m_szdd6.Empty();
	m_szgio7.Empty();
	m_szda7.Empty();
	m_sztg7.Empty();
	m_szdau7.Empty();
	m_szvm7.Empty();
	m_sznt7.Empty();
	m_szdl7.Empty();
	m_sza7.Empty();
	m_szb7.Empty();
	m_szc7.Empty();
	m_szsd7.Empty();
	m_szan7.Empty();
	m_sztd7.Empty();
	m_szdd7.Empty();

}
int CPhieuChamSocBenhNhanSauKhiMo2::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
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
void CPhieuChamSocBenhNhanSauKhiMo2::OnOperationSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPhieuChamSocBenhNhanSauKhiMo2::OnOperationSelendok(){
	 
}
/*void CPhieuChamSocBenhNhanSauKhiMo2::OnOperationSetfocus(){
	
}*/
/*void CPhieuChamSocBenhNhanSauKhiMo2::OnOperationKillfocus(){
	
}*/
long CPhieuChamSocBenhNhanSauKhiMo2::OnOperationLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;
	if(m_wndOperation.IsSearchKey() && !m_szOperationKey.IsEmpty()){
	 szWhere.Format(_T(" and id='%s' "), m_szOperationKey
};
	m_wndOperation.DeleteAllItems(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT fld1 as id, fld2 as name FROM tbl WHERE 1=1 %s ORDER BY id "), szWhere
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndOperation.AddItems(
		rs.MoveNext();
	}
	return nCount;
*/
	return 0;
}
/*void CPhieuChamSocBenhNhanSauKhiMo2::OnOperationAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::OnDateChange(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::OnDateSetfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::OnDateKillfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::OnDateCheckValue(){
	return 0;
} 
void CPhieuChamSocBenhNhanSauKhiMo2::On6hdauSelect(){
	
}
void CPhieuChamSocBenhNhanSauKhiMo2::On18htiepSelect(){
	
}
void CPhieuChamSocBenhNhanSauKhiMo2::Onsau25hSelect(){
	
}
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ongio1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onda1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontg1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondau1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onvm1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onnt1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondl1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ona1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onb1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onc1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onsd1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onan1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontd1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd1Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd1Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd1Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondd1CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ongio2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onda2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontg2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondau2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onvm2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onnt2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondl2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ona2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onb2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onc2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onsd2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onan2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontd2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd2Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd2Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd2Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondd2CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ongio3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onda3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontg3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondau3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onvm3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onnt3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondl3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ona3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onb3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onc3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onsd3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onan3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontd3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd3Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd3Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd3Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondd3CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ongio4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onda4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontg4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondau4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onvm4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onnt4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondl4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ona4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onb4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onc4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onsd4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onan4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontd4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd4Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd4Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd4Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondd4CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ongio5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onda5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontg5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondau5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onvm5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onnt5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondl5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ona5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onb5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onc5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onsd5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onan5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontd5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd5Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd5Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd5Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondd5CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ongio6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onda6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontg6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondau6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onvm6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onnt6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondl6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ona6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onb6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onc6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onsd6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onan6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontd6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd6Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd6Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd6Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondd6CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ongio7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ongio7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onda7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onda7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontg7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontg7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondau7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondau7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onvm7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onvm7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onnt7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onnt7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondl7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondl7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ona7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ona7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onb7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onb7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onc7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onc7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onsd7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onsd7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Onan7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Onan7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ontd7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ontd7CheckValue(){
	return 0;
} 
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd7Change(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd7Setfocus(){
	
} */
/*void CPhieuChamSocBenhNhanSauKhiMo2::Ondd7Killfocus(){
	
} */
int CPhieuChamSocBenhNhanSauKhiMo2::Ondd7CheckValue(){
	return 0;
} 
void CPhieuChamSocBenhNhanSauKhiMo2::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPhieuChamSocBenhNhanSauKhiMo2::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CPhieuChamSocBenhNhanSauKhiMo2::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CPhieuChamSocBenhNhanSauKhiMo2::OnAddPhieuChamSocBenhNhanSauKhiMo2(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPhieuChamSocBenhNhanSauKhiMo2::OnEditPhieuChamSocBenhNhanSauKhiMo2(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPhieuChamSocBenhNhanSauKhiMo2::OnDeletePhieuChamSocBenhNhanSauKhiMo2(){
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
 		OnCancelPhieuChamSocBenhNhanSauKhiMo2();
 	}
	return 0;
}
int CPhieuChamSocBenhNhanSauKhiMo2::OnSavePhieuChamSocBenhNhanSauKhiMo2(){
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
 		//OnPhieuChamSocBenhNhanSauKhiMo2ListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CPhieuChamSocBenhNhanSauKhiMo2::OnCancelPhieuChamSocBenhNhanSauKhiMo2(){
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
int CPhieuChamSocBenhNhanSauKhiMo2::OnPhieuChamSocBenhNhanSauKhiMo2ListLoadData(){
	return 0;
}
