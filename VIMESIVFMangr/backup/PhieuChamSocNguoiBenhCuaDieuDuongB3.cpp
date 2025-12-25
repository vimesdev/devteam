#include "PhieuChamSocNguoiBenhCuaDieuDuongB3.h"
#include "MainFrm.h"
static void _Ontu_diSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->Ontu_diSelect();
}
static void _Onxe_lanSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->Onxe_lanSelect();
}
static void _OngiuongSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OngiuongSelect();
}
static void _OncangSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OncangSelect();
}
static void _OngaySelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OngaySelect();
}
static void _OntrungbinhSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OntrungbinhSelect();
}
static void _OnbeophiSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnbeophiSelect();
}
/*static void _OnheightChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnheightChange();
} */
/*static void _OnheightSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnheightSetfocus();} */ 
/*static void _OnheightKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnheightKillfocus();
} */
static int _OnheightCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnheightCheckValue();
} 
/*static void _OnWeightChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnWeightChange();
} */
/*static void _OnWeightSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnWeightSetfocus();} */ 
/*static void _OnWeightKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnWeightKillfocus();
} */
static int _OnWeightCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnWeightCheckValue();
} 
static void _OnnhnoSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnhnoSelect();
}
static void _OnnhyesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnhyesSelect();
}
static void _OnhbsagnoSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnhbsagnoSelect();
}
static void _OnhbsagyesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnhbsagyesSelect();
}
static void _OnhcvnoSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnhcvnoSelect();
}
static void _OnhcvyesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnhcvyesSelect();
}
static void _OnlaonoSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnlaonoSelect();
}
static void _OnlaoyesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnlaoyesSelect();
}
static void _OnnruounoSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnruounoSelect();
}
static void _OnnruouyesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnruouyesSelect();
}
/*static void _OnbenhlytamthankinhChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnbenhlytamthankinhChange();
} */
/*static void _OnbenhlytamthankinhSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnbenhlytamthankinhSetfocus();} */ 
/*static void _OnbenhlytamthankinhKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnbenhlytamthankinhKillfocus();
} */
static int _OnbenhlytamthankinhCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnbenhlytamthankinhCheckValue();
} 
/*static void _OndiuongthuocChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OndiuongthuocChange();
} */
/*static void _OndiuongthuocSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OndiuongthuocSetfocus();} */ 
/*static void _OndiuongthuocKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OndiuongthuocKillfocus();
} */
static int _OndiuongthuocCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OndiuongthuocCheckValue();
} 
/*static void _OndiungkhacChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OndiungkhacChange();
} */
/*static void _OndiungkhacSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OndiungkhacSetfocus();} */ 
/*static void _OndiungkhacKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OndiungkhacKillfocus();
} */
static int _OndiungkhacCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OndiungkhacCheckValue();
} 
/*static void _OnbanthanChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnbanthanChange();
} */
/*static void _OnbanthanSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnbanthanSetfocus();} */ 
/*static void _OnbanthanKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnbanthanKillfocus();
} */
static int _OnbanthanCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnbanthanCheckValue();
} 
/*static void _OngiadinhChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OngiadinhChange();
} */
/*static void _OngiadinhSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OngiadinhSetfocus();} */ 
/*static void _OngiadinhKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OngiadinhKillfocus();
} */
static int _OngiadinhCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OngiadinhCheckValue();
} 
static void _OntinhtaoSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OntinhtaoSelect();
}
static void _OnlomoSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnlomoSelect();
}
static void _OnmeSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnmeSelect();
}
static void _OnhoptacSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnhoptacSelect();
}
static void _OnkhonghoptacSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnkhonghoptacSelect();
}
/*static void _OntamlykhacChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntamlykhacChange();
} */
/*static void _OntamlykhacSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntamlykhacSetfocus();} */ 
/*static void _OntamlykhacKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntamlykhacKillfocus();
} */
static int _OntamlykhacCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntamlykhacCheckValue();
} 
/*static void _OnhohapChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnhohapChange();
} */
/*static void _OnhohapSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnhohapSetfocus();} */ 
/*static void _OnhohapKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnhohapKillfocus();
} */
static int _OnhohapCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnhohapCheckValue();
} 
/*static void _OntietnieuChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntietnieuChange();
} */
/*static void _OntietnieuSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntietnieuSetfocus();} */ 
/*static void _OntietnieuKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntietnieuKillfocus();
} */
static int _OntietnieuCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntietnieuCheckValue();
} 
/*static void _OntimmachChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntimmachChange();
} */
/*static void _OntimmachSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntimmachSetfocus();} */ 
/*static void _OntimmachKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntimmachKillfocus();
} */
static int _OntimmachCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntimmachCheckValue();
} 
/*static void _OntieuhoaChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntieuhoaChange();
} */
/*static void _OntieuhoaSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntieuhoaSetfocus();} */ 
/*static void _OntieuhoaKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntieuhoaKillfocus();
} */
static int _OntieuhoaCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OntieuhoaCheckValue();
} 
static void _OnbinhthuongSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnbinhthuongSelect();
}
static void _OnngonmiengSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnngonmiengSelect();
}
static void _OnchananSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnchananSelect();
}
static void _OnmiengSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnmiengSelect();
}
static void _OnsondSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnsondSelect();
}
static void _OnddkhacSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnddkhacSelect();
}
static void _OndabtSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OndabtSelect();
}
static void _OnnhotnhatSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnhotnhatSelect();
}
static void _OntimtaiSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OntimtaiSelect();
}
static void _OnvangdaSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnvangdaSelect();
}
static void _OntidenoSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OntidenoSelect();
}
static void _OntideyesSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OntideyesSelect();
}
/*static void _OnlocationChangeFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnlocationChange();
} */
/*static void _OnlocationSetfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnlocationSetfocus();} */ 
/*static void _OnlocationKillfocusFnc(CWnd *pWnd){
	((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnlocationKillfocus();
} */
static int _OnlocationCheckValueFnc(CWnd *pWnd){
	return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd)->OnlocationCheckValue();
} 
static void _OnnghedlSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnghedlSelect();
}
static void _OnnghegsSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnghegsSelect();
}
static void _OnnghehtSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnghehtSelect();
}
static void _OnngheptSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnngheptSelect();
}
static void _OnnoidlSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnoidlSelect();
}
static void _OnnoigsSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnoigsSelect();
}
static void _OnnoihtSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnoihtSelect();
}
static void _OnnoiptSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnoiptSelect();
}
static void _OnnhindlSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnhindlSelect();
}
static void _OnnhingsSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnhingsSelect();
}
static void _OnnhinhtSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnhinhtSelect();
}
static void _OnnhinptSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnnhinptSelect();
}
static void _OnvsdlSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnvsdlSelect();
}
static void _OnvsgsSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnvsgsSelect();
}
static void _OnvshtSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnvshtSelect();
}
static void _OnvsptSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnvsptSelect();
}
static void _OnvddlSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnvddlSelect();
}
static void _OnvdgsSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnvdgsSelect();
}
static void _OnvdhtSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnvdhtSelect();
}
static void _OnvdptSelectFnc(CWnd *pWnd){
	 ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnvdptSelect();
}
static void _OnSaveSelectFnc(CWnd *pWnd){
	CPhieuChamSocNguoiBenhCuaDieuDuongB3 *pVw = (CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd;
	pVw->OnSaveSelect();
} 
static void _OnPrintSelectFnc(CWnd *pWnd){
	CPhieuChamSocNguoiBenhCuaDieuDuongB3 *pVw = (CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCancelSelectFnc(CWnd *pWnd){
	CPhieuChamSocNguoiBenhCuaDieuDuongB3 *pVw = (CPhieuChamSocNguoiBenhCuaDieuDuongB3 *)pWnd;
	pVw->OnCancelSelect();
} 
static int _OnAddPhieuChamSocNguoiBenhCuaDieuDuongB3Fnc(CWnd *pWnd){
	 return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnAddPhieuChamSocNguoiBenhCuaDieuDuongB3();
} 
static int _OnEditPhieuChamSocNguoiBenhCuaDieuDuongB3Fnc(CWnd *pWnd){
	 return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnEditPhieuChamSocNguoiBenhCuaDieuDuongB3();
} 
static int _OnDeletePhieuChamSocNguoiBenhCuaDieuDuongB3Fnc(CWnd *pWnd){
	 return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnDeletePhieuChamSocNguoiBenhCuaDieuDuongB3();
} 
static int _OnSavePhieuChamSocNguoiBenhCuaDieuDuongB3Fnc(CWnd *pWnd){
	 return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnSavePhieuChamSocNguoiBenhCuaDieuDuongB3();
} 
static int _OnCancelPhieuChamSocNguoiBenhCuaDieuDuongB3Fnc(CWnd *pWnd){
	 return ((CPhieuChamSocNguoiBenhCuaDieuDuongB3*)pWnd)->OnCancelPhieuChamSocNguoiBenhCuaDieuDuongB3();
} 
CPhieuChamSocNguoiBenhCuaDieuDuongB3::CPhieuChamSocNguoiBenhCuaDieuDuongB3(CWnd *pParent, int nMode, long nDocNo, int nRefIdx):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
		m_nDocumentNo = nDocNo;
		m_nRefIdx = nRefIdx;
		m_nDlgWidth = 1029;
		m_nDlgHeight = 773;
		SetDefaultValues();
}
CPhieuChamSocNguoiBenhCuaDieuDuongB3::~CPhieuChamSocNguoiBenhCuaDieuDuongB3(){
}
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnCreateComponents(){
	m_wndInformation.Create(this, _T("Information"), 5, 5, 905, 595);
	m_wndvan_chuyen.Create(this, _T("Vận chuyển"), 80, 30, 160, 55);
	m_wndtu_di.Create(this, _T("Tự đi"), 165, 30, 245, 55);
	m_wndxe_lan.Create(this, _T("Xe lăn"), 250, 30, 330, 55);
	m_wndgiuong.Create(this, _T("Giường"), 335, 30, 415, 55);
	m_wndcang.Create(this, _T("Cáng"), 420, 30, 500, 55);
	m_wndLabel_52.Create(this, _T("1. Ðánh giá chung:"), 80, 56, 210, 76);
	m_wndLabel_69.Create(this, _T("Thể trạng:"), 211, 56, 291, 76);
	m_wndLabel_70.Create(this, _T("Gầy"), 292, 56, 332, 76);
	m_wndgay.Create(this, _T(""), 333, 56, 355, 76);
	m_wndLabel_72.Create(this, _T("Trung bình"), 356, 56, 436, 76);
	m_wndtrungbinh.Create(this, _T(""), 437, 56, 459, 76);
	m_wndLabel_74.Create(this, _T("Béo phì"), 460, 56, 520, 76);
	m_wndbeophi.Create(this, _T(""), 521, 56, 543, 76);
	m_wndLabel_63.Create(this, _T("Chiều cao:"), 544, 56, 619, 76);
	m_wndheight.Create(this,620, 56, 650, 76); 
	m_wndLabel_65.Create(this, _T("m"), 651, 56, 676, 76);
	m_wndLabel_66.Create(this, _T("Cân nặng:"), 677, 56, 747, 76);
	m_wndWeight.Create(this,748, 56, 783, 76); 
	m_wndLabel_68.Create(this, _T("Kg"), 784, 56, 816, 76);
	m_wndLabel_76.Create(this, _T("2. Tiền sử"), 80, 77, 185, 97);
	m_wndLabel_162.Create(this, _T("Nghiện hút"), 186, 77, 261, 97);
	m_wndLabel_165.Create(this, _T("Không"), 262, 77, 312, 97);
	m_wndnhno.Create(this, _T(""), 313, 77, 335, 97);
	m_wndLabel_166.Create(this, _T("Có"), 336, 77, 376, 97);
	m_wndnhyes.Create(this, _T(""), 377, 77, 399, 97);
	m_wndLabel_167.Create(this, _T("HBsAg"), 400, 77, 460, 97);
	m_wndLabel_168.Create(this, _T("Không"), 461, 77, 511, 97);
	m_wndhbsagno.Create(this, _T(""), 512, 77, 534, 97);
	m_wndLabel_169.Create(this, _T("Có"), 535, 77, 585, 97);
	m_wndhbsagyes.Create(this, _T(""), 586, 77, 608, 97);
	m_wndLabel_172.Create(this, _T("HCV"), 609, 77, 664, 97);
	m_wndLabel_173.Create(this, _T("Không"), 666, 77, 716, 97);
	m_wndhcvno.Create(this, _T(""), 717, 77, 739, 97);
	m_wndLabel_174.Create(this, _T("Có"), 740, 77, 790, 97);
	m_wndhcvyes.Create(this, _T(""), 791, 77, 813, 97);
	m_wndLabel_77.Create(this, _T("Lao"), 80, 97, 115, 117);
	m_wndLabel_78.Create(this, _T("Không"), 116, 98, 166, 118);
	m_wndlaono.Create(this, _T(""), 167, 98, 189, 118);
	m_wndLabel_79.Create(this, _T("Có"), 190, 98, 230, 118);
	m_wndlaoyes.Create(this, _T(""), 231, 98, 253, 118);
	m_wndLabel_177.Create(this, _T("Nghiện rượu"), 252, 98, 352, 118);
	m_wndLabel_178.Create(this, _T("Không"), 353, 98, 403, 118);
	m_wndnruouno.Create(this, _T(""), 404, 98, 426, 118);
	m_wndLabel_179.Create(this, _T("Có"), 427, 98, 467, 118);
	m_wndnruouyes.Create(this, _T(""), 468, 98, 490, 118);
	m_wndLabel_182.Create(this, _T("Bệnh lý tâm thần kinh"), 491, 98, 641, 118);
	m_wndbenhlytamthankinh.Create(this,642, 98, 816, 118, 1, 0, 1);
	m_wndLabel_185.Create(this, _T("Dị ứng khác"), 491, 118, 641, 138);
	m_wndLabel_184.Create(this, _T("TS dị ứng thuốc"), 80, 119, 200, 139);
	m_wnddiuongthuoc.Create(this,201, 119, 490, 139, 1, 0, 1);
	m_wnddiungkhac.Create(this,642, 119, 816, 139, 1, 0, 1);
	m_wndLabel_82.Create(this, _T("TS bệnh: Bản thân"), 80, 140, 200, 160);
	m_wndbanthan.Create(this,201, 140, 490, 160, 1, 0, 1);
	m_wndLabel_186.Create(this, _T("Gia đình"), 491, 140, 641, 160);
	m_wndgiadinh.Create(this,642, 140, 816, 160, 1, 0, 1);
	m_wndLabel_84.Create(this, _T("3. Ðánh giá về tâm lý:"), 80, 161, 230, 181);
	m_wndLabel_85.Create(this, _T("* Tình trạng BN:"), 231, 161, 341, 181);
	m_wndLabel_86.Create(this, _T("Tỉnh táo"), 342, 161, 402, 181);
	m_wndtinhtao.Create(this, _T(""), 403, 161, 425, 181);
	m_wndLabel_88.Create(this, _T("Lơ mơ"), 426, 161, 476, 181);
	m_wndlomo.Create(this, _T(""), 477, 161, 499, 181);
	m_wndLabel_90.Create(this, _T("Mê"), 500, 161, 540, 181);
	m_wndme.Create(this, _T(""), 541, 161, 563, 181);
	m_wndLabel_189.Create(this, _T("Hợp tác"), 564, 161, 614, 181);
	m_wndhoptac.Create(this, _T(""), 615, 161, 637, 181);
	m_wndLabel_190.Create(this, _T("Không hợp tác"), 638, 161, 738, 181);
	m_wndkhonghoptac.Create(this, _T(""), 739, 161, 761, 181);
	m_wndLabel_193.Create(this, _T("Khác"), 80, 182, 200, 202);
	m_wndtamlykhac.Create(this,201, 182, 816, 202, 1, 0, 1);
	m_wndLabel_92.Create(this, _T("4: Ðánh giá về tim mạch, hô hấp và tiết niệu:"), 80, 203, 395, 223);
	m_wndLabel_93.Create(this, _T("Hô hấp"), 80, 224, 160, 244);
	m_wndhohap.Create(this,161, 224, 449, 244, 1, 0, 1);
	m_wndLabel_103.Create(this, _T("Tiết niệu"), 450, 224, 530, 244);
	m_wndtietnieu.Create(this,531, 224, 816, 244, 1, 0, 1);
	m_wndLabel_98.Create(this, _T("Tim mạch"), 80, 245, 160, 265);
	m_wndtimmach.Create(this,161, 245, 449, 265, 1, 0, 1);
	m_wndLabel_101.Create(this, _T("Tiêu hóa"), 450, 245, 530, 265);
	m_wndtieuhoa.Create(this,531, 245, 816, 265, 1, 0, 1);
	m_wndLabel_108.Create(this, _T("5. Ðánh giá về tiêu hóa và dinh dưỡng:"), 80, 266, 395, 286);
	m_wndLabel_109.Create(this, _T("Cảm giác khi ăn"), 80, 288, 192, 308);
	m_wndLabel_110.Create(this, _T("Bình thường"), 207, 288, 293, 308);
	m_wndbinhthuong.Create(this, _T(""), 292, 288, 314, 308);
	m_wndLabel_112.Create(this, _T("Ngon miệng"), 407, 288, 507, 308);
	m_wndngonmieng.Create(this, _T(""), 508, 288, 530, 308);
	m_wndLabel_114.Create(this, _T("Chán ăn"), 682, 288, 748, 308);
	m_wndchanan.Create(this, _T(""), 749, 288, 771, 308);
	m_wndLabel_116.Create(this, _T("Ðườing ăn, uống"), 80, 310, 192, 330);
	m_wndLabel_117.Create(this, _T("Miệng"), 207, 310, 293, 330);
	m_wndmieng.Create(this, _T(""), 293, 310, 315, 330);
	m_wndLabel_119.Create(this, _T("Sonde dạ dày"), 407, 310, 507, 330);
	m_wndsond.Create(this, _T(""), 508, 310, 530, 330);
	m_wndLabel_121.Create(this, _T("Khác"), 682, 310, 748, 330);
	m_wndddkhac.Create(this, _T(""), 749, 310, 771, 330);
	m_wndLabel_123.Create(this, _T("6. Ðánh giá về da, niêm mạc:"), 81, 332, 396, 352);
	m_wndLabel_124.Create(this, _T("Màu sắc"), 81, 354, 171, 374);
	m_wndLabel_125.Create(this, _T("Bình thường"), 209, 354, 294, 374);
	m_wnddabt.Create(this, _T(""), 294, 354, 316, 374);
	m_wndLabel_127.Create(this, _T("Nhợt nhạt"), 436, 354, 508, 374);
	m_wndnhotnhat.Create(this, _T(""), 509, 354, 531, 374);
	m_wndLabel_129.Create(this, _T("Tím tái"), 568, 354, 632, 374);
	m_wndtimtai.Create(this, _T(""), 634, 354, 656, 374);
	m_wndLabel_131.Create(this, _T("Vàng da"), 685, 354, 749, 374);
	m_wndvangda.Create(this, _T(""), 750, 354, 772, 374);
	m_wndLabel_133.Create(this, _T("Loét do tì đè"), 81, 376, 171, 396);
	m_wndLabel_134.Create(this, _T("Không"), 209, 376, 294, 396);
	m_wndtideno.Create(this, _T(""), 294, 376, 316, 396);
	m_wndLabel_136.Create(this, _T("Có"), 436, 376, 508, 396);
	m_wndtideyes.Create(this, _T(""), 509, 376, 531, 396);
	m_wndLabel_138.Create(this, _T("Vị trí:"), 81, 398, 130, 418);
	m_wndlocation.Create(this,131, 398, 816, 418, 1, 0, 1);
	m_wndLabel_151.Create(this, _T("7. Ðánh giá các hoạt động hàng ngày:"), 80, 420, 395, 440);
	m_wndLabel_152.Create(this, _T("Mức độ"), 80, 442, 209, 462);
	m_wndLabel_153.Create(this, _T("1: Ðộc lập"), 233, 442, 333, 462);
	m_wndLabel_154.Create(this, _T("2: Cần giám sát"), 361, 442, 486, 462);
	m_wndLabel_155.Create(this, _T("3: Cần hỗ trợ"), 513, 442, 613, 462);
	m_wndLabel_156.Create(this, _T("4: Phụ thuộc hoàn toàn"), 629, 442, 789, 462);
	m_wndLabel_157.Create(this, _T("Khả năng nghe"), 80, 464, 209, 484);
	m_wndnghedl.Create(this, _T(""), 268, 464, 290, 484);
	m_wndnghegs.Create(this, _T(""), 417, 464, 439, 484);
	m_wndngheht.Create(this, _T(""), 553, 464, 575, 484);
	m_wndnghept.Create(this, _T(""), 697, 464, 719, 484);
	m_wndLabel_158.Create(this, _T("Khả năng nói"), 80, 487, 209, 507);
	m_wndnoidl.Create(this, _T(""), 268, 487, 290, 507);
	m_wndnoigs.Create(this, _T(""), 417, 487, 439, 507);
	m_wndnoiht.Create(this, _T(""), 553, 487, 575, 507);
	m_wndnoipt.Create(this, _T(""), 697, 487, 719, 507);
	m_wndLabel_159.Create(this, _T("Khả năng nhìn"), 80, 510, 209, 530);
	m_wndnhindl.Create(this, _T(""), 268, 510, 290, 530);
	m_wndnhings.Create(this, _T(""), 417, 510, 439, 530);
	m_wndnhinht.Create(this, _T(""), 553, 510, 575, 530);
	m_wndnhinpt.Create(this, _T(""), 697, 510, 719, 530);
	m_wndLabel_160.Create(this, _T("Vệ sinh cá nhân"), 80, 533, 209, 553);
	m_wndvsdl.Create(this, _T(""), 268, 533, 290, 553);
	m_wndvsgs.Create(this, _T(""), 417, 533, 439, 553);
	m_wndvsht.Create(this, _T(""), 553, 533, 575, 553);
	m_wndvspt.Create(this, _T(""), 697, 533, 719, 553);
	m_wndLabel_161.Create(this, _T("Khả năng vận động"), 80, 556, 209, 576);
	m_wndvddl.Create(this, _T(""), 268, 556, 290, 576);
	m_wndvdgs.Create(this, _T(""), 417, 556, 439, 576);
	m_wndvdht.Create(this, _T(""), 553, 556, 575, 576);
	m_wndvdpt.Create(this, _T(""), 697, 556, 719, 576);
	m_wndSave.Create(this, _T("Save"), 655, 600, 735, 625);
	m_wndPrint.Create(this, _T("Print"), 740, 600, 820, 625);
	m_wndCancel.Create(this, _T("Cancel"), 825, 600, 905, 625);

}
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
// 	m_wndheight.SetLimitText(1024);
// 	m_wndheight.SetCheckValue(true);
// 	m_wndWeight.SetLimitText(1024);
// 	m_wndWeight.SetCheckValue(true);
// 	m_wndbenhlytamthankinh.SetLimitText(1024);
// 	m_wndbenhlytamthankinh.SetCheckValue(true);
// 	m_wnddiuongthuoc.SetLimitText(1024);
// 	m_wnddiuongthuoc.SetCheckValue(true);
// 	m_wnddiungkhac.SetLimitText(1024);
// 	m_wnddiungkhac.SetCheckValue(true);
// 	m_wndbanthan.SetLimitText(1024);
// 	m_wndbanthan.SetCheckValue(true);
// 	m_wndgiadinh.SetLimitText(1024);
// 	m_wndgiadinh.SetCheckValue(true);
// 	m_wndtamlykhac.SetLimitText(1024);
// 	m_wndtamlykhac.SetCheckValue(true);
// 	m_wndhohap.SetLimitText(1024);
// 	m_wndhohap.SetCheckValue(true);
// 	m_wndtietnieu.SetLimitText(1024);
// 	m_wndtietnieu.SetCheckValue(true);
// 	m_wndtimmach.SetLimitText(1024);
// 	m_wndtimmach.SetCheckValue(true);
// 	m_wndtieuhoa.SetLimitText(1024);
// 	m_wndtieuhoa.SetCheckValue(true);
// 	m_wndlocation.SetLimitText(1024);
// 	m_wndlocation.SetCheckValue(true);

}
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndtu_di.SetEvent(WE_CLICK, _Ontu_diSelectFnc);
	m_wndxe_lan.SetEvent(WE_CLICK, _Onxe_lanSelectFnc);
	m_wndgiuong.SetEvent(WE_CLICK, _OngiuongSelectFnc);
	m_wndcang.SetEvent(WE_CLICK, _OncangSelectFnc);
	m_wndgay.SetEvent(WE_CLICK, _OngaySelectFnc);
	m_wndtrungbinh.SetEvent(WE_CLICK, _OntrungbinhSelectFnc);
	m_wndbeophi.SetEvent(WE_CLICK, _OnbeophiSelectFnc);
	//m_wndheight.SetEvent(WE_CHANGE, _OnheightChangeFnc);
	//m_wndheight.SetEvent(WE_SETFOCUS, _OnheightSetfocusFnc);
	//m_wndheight.SetEvent(WE_KILLFOCUS, _OnheightKillfocusFnc);
	m_wndheight.SetEvent(WE_CHECKVALUE, _OnheightCheckValueFnc);
	//m_wndWeight.SetEvent(WE_CHANGE, _OnWeightChangeFnc);
	//m_wndWeight.SetEvent(WE_SETFOCUS, _OnWeightSetfocusFnc);
	//m_wndWeight.SetEvent(WE_KILLFOCUS, _OnWeightKillfocusFnc);
	m_wndWeight.SetEvent(WE_CHECKVALUE, _OnWeightCheckValueFnc);
	m_wndnhno.SetEvent(WE_CLICK, _OnnhnoSelectFnc);
	m_wndnhyes.SetEvent(WE_CLICK, _OnnhyesSelectFnc);
	m_wndhbsagno.SetEvent(WE_CLICK, _OnhbsagnoSelectFnc);
	m_wndhbsagyes.SetEvent(WE_CLICK, _OnhbsagyesSelectFnc);
	m_wndhcvno.SetEvent(WE_CLICK, _OnhcvnoSelectFnc);
	m_wndhcvyes.SetEvent(WE_CLICK, _OnhcvyesSelectFnc);
	m_wndlaono.SetEvent(WE_CLICK, _OnlaonoSelectFnc);
	m_wndlaoyes.SetEvent(WE_CLICK, _OnlaoyesSelectFnc);
	m_wndnruouno.SetEvent(WE_CLICK, _OnnruounoSelectFnc);
	m_wndnruouyes.SetEvent(WE_CLICK, _OnnruouyesSelectFnc);
	//m_wndbenhlytamthankinh.SetEvent(WE_CHANGE, _OnbenhlytamthankinhChangeFnc);
	//m_wndbenhlytamthankinh.SetEvent(WE_SETFOCUS, _OnbenhlytamthankinhSetfocusFnc);
	//m_wndbenhlytamthankinh.SetEvent(WE_KILLFOCUS, _OnbenhlytamthankinhKillfocusFnc);
	m_wndbenhlytamthankinh.SetEvent(WE_CHECKVALUE, _OnbenhlytamthankinhCheckValueFnc);
	//m_wnddiuongthuoc.SetEvent(WE_CHANGE, _OndiuongthuocChangeFnc);
	//m_wnddiuongthuoc.SetEvent(WE_SETFOCUS, _OndiuongthuocSetfocusFnc);
	//m_wnddiuongthuoc.SetEvent(WE_KILLFOCUS, _OndiuongthuocKillfocusFnc);
	m_wnddiuongthuoc.SetEvent(WE_CHECKVALUE, _OndiuongthuocCheckValueFnc);
	//m_wnddiungkhac.SetEvent(WE_CHANGE, _OndiungkhacChangeFnc);
	//m_wnddiungkhac.SetEvent(WE_SETFOCUS, _OndiungkhacSetfocusFnc);
	//m_wnddiungkhac.SetEvent(WE_KILLFOCUS, _OndiungkhacKillfocusFnc);
	m_wnddiungkhac.SetEvent(WE_CHECKVALUE, _OndiungkhacCheckValueFnc);
	//m_wndbanthan.SetEvent(WE_CHANGE, _OnbanthanChangeFnc);
	//m_wndbanthan.SetEvent(WE_SETFOCUS, _OnbanthanSetfocusFnc);
	//m_wndbanthan.SetEvent(WE_KILLFOCUS, _OnbanthanKillfocusFnc);
	m_wndbanthan.SetEvent(WE_CHECKVALUE, _OnbanthanCheckValueFnc);
	//m_wndgiadinh.SetEvent(WE_CHANGE, _OngiadinhChangeFnc);
	//m_wndgiadinh.SetEvent(WE_SETFOCUS, _OngiadinhSetfocusFnc);
	//m_wndgiadinh.SetEvent(WE_KILLFOCUS, _OngiadinhKillfocusFnc);
	m_wndgiadinh.SetEvent(WE_CHECKVALUE, _OngiadinhCheckValueFnc);
	m_wndtinhtao.SetEvent(WE_CLICK, _OntinhtaoSelectFnc);
	m_wndlomo.SetEvent(WE_CLICK, _OnlomoSelectFnc);
	m_wndme.SetEvent(WE_CLICK, _OnmeSelectFnc);
	m_wndhoptac.SetEvent(WE_CLICK, _OnhoptacSelectFnc);
	m_wndkhonghoptac.SetEvent(WE_CLICK, _OnkhonghoptacSelectFnc);
	//m_wndtamlykhac.SetEvent(WE_CHANGE, _OntamlykhacChangeFnc);
	//m_wndtamlykhac.SetEvent(WE_SETFOCUS, _OntamlykhacSetfocusFnc);
	//m_wndtamlykhac.SetEvent(WE_KILLFOCUS, _OntamlykhacKillfocusFnc);
	m_wndtamlykhac.SetEvent(WE_CHECKVALUE, _OntamlykhacCheckValueFnc);
	//m_wndhohap.SetEvent(WE_CHANGE, _OnhohapChangeFnc);
	//m_wndhohap.SetEvent(WE_SETFOCUS, _OnhohapSetfocusFnc);
	//m_wndhohap.SetEvent(WE_KILLFOCUS, _OnhohapKillfocusFnc);
	m_wndhohap.SetEvent(WE_CHECKVALUE, _OnhohapCheckValueFnc);
	//m_wndtietnieu.SetEvent(WE_CHANGE, _OntietnieuChangeFnc);
	//m_wndtietnieu.SetEvent(WE_SETFOCUS, _OntietnieuSetfocusFnc);
	//m_wndtietnieu.SetEvent(WE_KILLFOCUS, _OntietnieuKillfocusFnc);
	m_wndtietnieu.SetEvent(WE_CHECKVALUE, _OntietnieuCheckValueFnc);
	//m_wndtimmach.SetEvent(WE_CHANGE, _OntimmachChangeFnc);
	//m_wndtimmach.SetEvent(WE_SETFOCUS, _OntimmachSetfocusFnc);
	//m_wndtimmach.SetEvent(WE_KILLFOCUS, _OntimmachKillfocusFnc);
	m_wndtimmach.SetEvent(WE_CHECKVALUE, _OntimmachCheckValueFnc);
	//m_wndtieuhoa.SetEvent(WE_CHANGE, _OntieuhoaChangeFnc);
	//m_wndtieuhoa.SetEvent(WE_SETFOCUS, _OntieuhoaSetfocusFnc);
	//m_wndtieuhoa.SetEvent(WE_KILLFOCUS, _OntieuhoaKillfocusFnc);
	m_wndtieuhoa.SetEvent(WE_CHECKVALUE, _OntieuhoaCheckValueFnc);
	m_wndbinhthuong.SetEvent(WE_CLICK, _OnbinhthuongSelectFnc);
	m_wndngonmieng.SetEvent(WE_CLICK, _OnngonmiengSelectFnc);
	m_wndchanan.SetEvent(WE_CLICK, _OnchananSelectFnc);
	m_wndmieng.SetEvent(WE_CLICK, _OnmiengSelectFnc);
	m_wndsond.SetEvent(WE_CLICK, _OnsondSelectFnc);
	m_wndddkhac.SetEvent(WE_CLICK, _OnddkhacSelectFnc);
	m_wnddabt.SetEvent(WE_CLICK, _OndabtSelectFnc);
	m_wndnhotnhat.SetEvent(WE_CLICK, _OnnhotnhatSelectFnc);
	m_wndtimtai.SetEvent(WE_CLICK, _OntimtaiSelectFnc);
	m_wndvangda.SetEvent(WE_CLICK, _OnvangdaSelectFnc);
	m_wndtideno.SetEvent(WE_CLICK, _OntidenoSelectFnc);
	m_wndtideyes.SetEvent(WE_CLICK, _OntideyesSelectFnc);
	//m_wndlocation.SetEvent(WE_CHANGE, _OnlocationChangeFnc);
	//m_wndlocation.SetEvent(WE_SETFOCUS, _OnlocationSetfocusFnc);
	//m_wndlocation.SetEvent(WE_KILLFOCUS, _OnlocationKillfocusFnc);
	m_wndlocation.SetEvent(WE_CHECKVALUE, _OnlocationCheckValueFnc);
	m_wndnghedl.SetEvent(WE_CLICK, _OnnghedlSelectFnc);
	m_wndnghegs.SetEvent(WE_CLICK, _OnnghegsSelectFnc);
	m_wndngheht.SetEvent(WE_CLICK, _OnnghehtSelectFnc);
	m_wndnghept.SetEvent(WE_CLICK, _OnngheptSelectFnc);
	m_wndnoidl.SetEvent(WE_CLICK, _OnnoidlSelectFnc);
	m_wndnoigs.SetEvent(WE_CLICK, _OnnoigsSelectFnc);
	m_wndnoiht.SetEvent(WE_CLICK, _OnnoihtSelectFnc);
	m_wndnoipt.SetEvent(WE_CLICK, _OnnoiptSelectFnc);
	m_wndnhindl.SetEvent(WE_CLICK, _OnnhindlSelectFnc);
	m_wndnhings.SetEvent(WE_CLICK, _OnnhingsSelectFnc);
	m_wndnhinht.SetEvent(WE_CLICK, _OnnhinhtSelectFnc);
	m_wndnhinpt.SetEvent(WE_CLICK, _OnnhinptSelectFnc);
	m_wndvsdl.SetEvent(WE_CLICK, _OnvsdlSelectFnc);
	m_wndvsgs.SetEvent(WE_CLICK, _OnvsgsSelectFnc);
	m_wndvsht.SetEvent(WE_CLICK, _OnvshtSelectFnc);
	m_wndvspt.SetEvent(WE_CLICK, _OnvsptSelectFnc);
	m_wndvddl.SetEvent(WE_CLICK, _OnvddlSelectFnc);
	m_wndvdgs.SetEvent(WE_CLICK, _OnvdgsSelectFnc);
	m_wndvdht.SetEvent(WE_CLICK, _OnvdhtSelectFnc);
	m_wndvdpt.SetEvent(WE_CLICK, _OnvdptSelectFnc);
	m_wndSave.SetEvent(WE_CLICK, _OnSaveSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndCancel.SetEvent(WE_CLICK, _OnCancelSelectFnc);
	int nMode = GetMode();

	if(nMode == VM_VIEW || nMode == VM_EDIT)
		GetDataToScreen();

	SetMode(nMode);

}
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndtu_di.GetDlgCtrlID(), m_btu_di);
	DDX_Check(pDX, m_wndxe_lan.GetDlgCtrlID(), m_bxe_lan);
	DDX_Check(pDX, m_wndgiuong.GetDlgCtrlID(), m_bgiuong);
	DDX_Check(pDX, m_wndcang.GetDlgCtrlID(), m_bcang);
	DDX_Check(pDX, m_wndgay.GetDlgCtrlID(), m_bgay);
	DDX_Check(pDX, m_wndtrungbinh.GetDlgCtrlID(), m_btrungbinh);
	DDX_Check(pDX, m_wndbeophi.GetDlgCtrlID(), m_bbeophi);
	DDX_Text(pDX, m_wndheight.GetDlgCtrlID(), m_szheight);
	DDX_Text(pDX, m_wndWeight.GetDlgCtrlID(), m_szWeight);
	DDX_Check(pDX, m_wndnhno.GetDlgCtrlID(), m_bnhno);
	DDX_Check(pDX, m_wndnhyes.GetDlgCtrlID(), m_bnhyes);
	DDX_Check(pDX, m_wndhbsagno.GetDlgCtrlID(), m_bhbsagno);
	DDX_Check(pDX, m_wndhbsagyes.GetDlgCtrlID(), m_bhbsagyes);
	DDX_Check(pDX, m_wndhcvno.GetDlgCtrlID(), m_bhcvno);
	DDX_Check(pDX, m_wndhcvyes.GetDlgCtrlID(), m_bhcvyes);
	DDX_Check(pDX, m_wndlaono.GetDlgCtrlID(), m_blaono);
	DDX_Check(pDX, m_wndlaoyes.GetDlgCtrlID(), m_blaoyes);
	DDX_Check(pDX, m_wndnruouno.GetDlgCtrlID(), m_bnruouno);
	DDX_Check(pDX, m_wndnruouyes.GetDlgCtrlID(), m_bnruouyes);
	DDX_Text(pDX, m_wndbenhlytamthankinh.GetDlgCtrlID(), m_szbenhlytamthankinh);
	DDX_Text(pDX, m_wnddiuongthuoc.GetDlgCtrlID(), m_szdiuongthuoc);
	DDX_Text(pDX, m_wnddiungkhac.GetDlgCtrlID(), m_szdiungkhac);
	DDX_Text(pDX, m_wndbanthan.GetDlgCtrlID(), m_szbanthan);
	DDX_Text(pDX, m_wndgiadinh.GetDlgCtrlID(), m_szgiadinh);
	DDX_Check(pDX, m_wndtinhtao.GetDlgCtrlID(), m_btinhtao);
	DDX_Check(pDX, m_wndlomo.GetDlgCtrlID(), m_blomo);
	DDX_Check(pDX, m_wndme.GetDlgCtrlID(), m_bme);
	DDX_Check(pDX, m_wndhoptac.GetDlgCtrlID(), m_bhoptac);
	DDX_Check(pDX, m_wndkhonghoptac.GetDlgCtrlID(), m_bkhonghoptac);
	DDX_Text(pDX, m_wndtamlykhac.GetDlgCtrlID(), m_sztamlykhac);
	DDX_Text(pDX, m_wndhohap.GetDlgCtrlID(), m_szhohap);
	DDX_Text(pDX, m_wndtietnieu.GetDlgCtrlID(), m_sztietnieu);
	DDX_Text(pDX, m_wndtimmach.GetDlgCtrlID(), m_sztimmach);
	DDX_Text(pDX, m_wndtieuhoa.GetDlgCtrlID(), m_sztieuhoa);
	DDX_Check(pDX, m_wndbinhthuong.GetDlgCtrlID(), m_bbinhthuong);
	DDX_Check(pDX, m_wndngonmieng.GetDlgCtrlID(), m_bngonmieng);
	DDX_Check(pDX, m_wndchanan.GetDlgCtrlID(), m_bchanan);
	DDX_Check(pDX, m_wndmieng.GetDlgCtrlID(), m_bmieng);
	DDX_Check(pDX, m_wndsond.GetDlgCtrlID(), m_bsond);
	DDX_Check(pDX, m_wndddkhac.GetDlgCtrlID(), m_bddkhac);
	DDX_Check(pDX, m_wnddabt.GetDlgCtrlID(), m_bdabt);
	DDX_Check(pDX, m_wndnhotnhat.GetDlgCtrlID(), m_bnhotnhat);
	DDX_Check(pDX, m_wndtimtai.GetDlgCtrlID(), m_btimtai);
	DDX_Check(pDX, m_wndvangda.GetDlgCtrlID(), m_bvangda);
	DDX_Check(pDX, m_wndtideno.GetDlgCtrlID(), m_btideno);
	DDX_Check(pDX, m_wndtideyes.GetDlgCtrlID(), m_btideyes);
	DDX_Text(pDX, m_wndlocation.GetDlgCtrlID(), m_szlocation);
	DDX_Check(pDX, m_wndnghedl.GetDlgCtrlID(), m_bnghedl);
	DDX_Check(pDX, m_wndnghegs.GetDlgCtrlID(), m_bnghegs);
	DDX_Check(pDX, m_wndngheht.GetDlgCtrlID(), m_bngheht);
	DDX_Check(pDX, m_wndnghept.GetDlgCtrlID(), m_bnghept);
	DDX_Check(pDX, m_wndnoidl.GetDlgCtrlID(), m_bnoidl);
	DDX_Check(pDX, m_wndnoigs.GetDlgCtrlID(), m_bnoigs);
	DDX_Check(pDX, m_wndnoiht.GetDlgCtrlID(), m_bnoiht);
	DDX_Check(pDX, m_wndnoipt.GetDlgCtrlID(), m_bnoipt);
	DDX_Check(pDX, m_wndnhindl.GetDlgCtrlID(), m_bnhindl);
	DDX_Check(pDX, m_wndnhings.GetDlgCtrlID(), m_bnhings);
	DDX_Check(pDX, m_wndnhinht.GetDlgCtrlID(), m_bnhinht);
	DDX_Check(pDX, m_wndnhinpt.GetDlgCtrlID(), m_bnhinpt);
	DDX_Check(pDX, m_wndvsdl.GetDlgCtrlID(), m_bvsdl);
	DDX_Check(pDX, m_wndvsgs.GetDlgCtrlID(), m_bvsgs);
	DDX_Check(pDX, m_wndvsht.GetDlgCtrlID(), m_bvsht);
	DDX_Check(pDX, m_wndvspt.GetDlgCtrlID(), m_bvspt);
	DDX_Check(pDX, m_wndvddl.GetDlgCtrlID(), m_bvddl);
	DDX_Check(pDX, m_wndvdgs.GetDlgCtrlID(), m_bvdgs);
	DDX_Check(pDX, m_wndvdht.GetDlgCtrlID(), m_bvdht);
	DDX_Check(pDX, m_wndvdpt.GetDlgCtrlID(), m_bvdpt);

}
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	m_jData[_T("tu_di")] =  m_btu_di;
	m_jData[_T("xe_lan")] =  m_bxe_lan;
	m_jData[_T("giuong")] =  m_bgiuong;
	m_jData[_T("cang")] =  m_bcang;
	m_jData[_T("gay")] =  m_bgay;
	m_jData[_T("trungbinh")] =  m_btrungbinh;
	m_jData[_T("beophi")] =  m_bbeophi;
	m_jData[_T("height")] =  m_szheight;
	m_jData[_T("Weight")] =  m_szWeight;
	m_jData[_T("nhno")] =  m_bnhno;
	m_jData[_T("nhyes")] =  m_bnhyes;
	m_jData[_T("hbsagno")] =  m_bhbsagno;
	m_jData[_T("hbsagyes")] =  m_bhbsagyes;
	m_jData[_T("hcvno")] =  m_bhcvno;
	m_jData[_T("hcvyes")] =  m_bhcvyes;
	m_jData[_T("laono")] =  m_blaono;
	m_jData[_T("laoyes")] =  m_blaoyes;
	m_jData[_T("nruouno")] =  m_bnruouno;
	m_jData[_T("nruouyes")] =  m_bnruouyes;
	m_jData[_T("benhlytamthankinh")] =  m_szbenhlytamthankinh;
	m_jData[_T("diuongthuoc")] =  m_szdiuongthuoc;
	m_jData[_T("diungkhac")] =  m_szdiungkhac;
	m_jData[_T("banthan")] =  m_szbanthan;
	m_jData[_T("giadinh")] =  m_szgiadinh;
	m_jData[_T("tinhtao")] =  m_btinhtao;
	m_jData[_T("lomo")] =  m_blomo;
	m_jData[_T("me")] =  m_bme;
	m_jData[_T("hoptac")] =  m_bhoptac;
	m_jData[_T("khonghoptac")] =  m_bkhonghoptac;
	m_jData[_T("tamlykhac")] =  m_sztamlykhac;
	m_jData[_T("hohap")] =  m_szhohap;
	m_jData[_T("tietnieu")] =  m_sztietnieu;
	m_jData[_T("timmach")] =  m_sztimmach;
	m_jData[_T("tieuhoa")] =  m_sztieuhoa;
	m_jData[_T("binhthuong")] =  m_bbinhthuong;
	m_jData[_T("ngonmieng")] =  m_bngonmieng;
	m_jData[_T("chanan")] =  m_bchanan;
	m_jData[_T("mieng")] =  m_bmieng;
	m_jData[_T("sond")] =  m_bsond;
	m_jData[_T("ddkhac")] =  m_bddkhac;
	m_jData[_T("dabt")] =  m_bdabt;
	m_jData[_T("nhotnhat")] =  m_bnhotnhat;
	m_jData[_T("timtai")] =  m_btimtai;
	m_jData[_T("vangda")] =  m_bvangda;
	m_jData[_T("tideno")] =  m_btideno;
	m_jData[_T("tideyes")] =  m_btideyes;
	m_jData[_T("location")] =  m_szlocation;
	m_jData[_T("nghedl")] =  m_bnghedl;
	m_jData[_T("nghegs")] =  m_bnghegs;
	m_jData[_T("ngheht")] =  m_bngheht;
	m_jData[_T("nghept")] =  m_bnghept;
	m_jData[_T("noidl")] =  m_bnoidl;
	m_jData[_T("noigs")] =  m_bnoigs;
	m_jData[_T("noiht")] =  m_bnoiht;
	m_jData[_T("noipt")] =  m_bnoipt;
	m_jData[_T("nhindl")] =  m_bnhindl;
	m_jData[_T("nhings")] =  m_bnhings;
	m_jData[_T("nhinht")] =  m_bnhinht;
	m_jData[_T("nhinpt")] =  m_bnhinpt;
	m_jData[_T("vsdl")] =  m_bvsdl;
	m_jData[_T("vsgs")] =  m_bvsgs;
	m_jData[_T("vsht")] =  m_bvsht;
	m_jData[_T("vspt")] =  m_bvspt;
	m_jData[_T("vddl")] =  m_bvddl;
	m_jData[_T("vdgs")] =  m_bvdgs;
	m_jData[_T("vdht")] =  m_bvdht;
	m_jData[_T("vdpt")] =  m_bvdpt;
	}
	else
	{
			
	m_jData[_T("tu_di")].GetValue(m_btu_di);
	m_jData[_T("xe_lan")].GetValue(m_bxe_lan);
	m_jData[_T("giuong")].GetValue(m_bgiuong);
	m_jData[_T("cang")].GetValue(m_bcang);
	m_jData[_T("gay")].GetValue(m_bgay);
	m_jData[_T("trungbinh")].GetValue(m_btrungbinh);
	m_jData[_T("beophi")].GetValue(m_bbeophi);
	m_jData[_T("height")].GetValue(m_szheight);
	m_jData[_T("Weight")].GetValue(m_szWeight);
	m_jData[_T("nhno")].GetValue(m_bnhno);
	m_jData[_T("nhyes")].GetValue(m_bnhyes);
	m_jData[_T("hbsagno")].GetValue(m_bhbsagno);
	m_jData[_T("hbsagyes")].GetValue(m_bhbsagyes);
	m_jData[_T("hcvno")].GetValue(m_bhcvno);
	m_jData[_T("hcvyes")].GetValue(m_bhcvyes);
	m_jData[_T("laono")].GetValue(m_blaono);
	m_jData[_T("laoyes")].GetValue(m_blaoyes);
	m_jData[_T("nruouno")].GetValue(m_bnruouno);
	m_jData[_T("nruouyes")].GetValue(m_bnruouyes);
	m_jData[_T("benhlytamthankinh")].GetValue(m_szbenhlytamthankinh);
	m_jData[_T("diuongthuoc")].GetValue(m_szdiuongthuoc);
	m_jData[_T("diungkhac")].GetValue(m_szdiungkhac);
	m_jData[_T("banthan")].GetValue(m_szbanthan);
	m_jData[_T("giadinh")].GetValue(m_szgiadinh);
	m_jData[_T("tinhtao")].GetValue(m_btinhtao);
	m_jData[_T("lomo")].GetValue(m_blomo);
	m_jData[_T("me")].GetValue(m_bme);
	m_jData[_T("hoptac")].GetValue(m_bhoptac);
	m_jData[_T("khonghoptac")].GetValue(m_bkhonghoptac);
	m_jData[_T("tamlykhac")].GetValue(m_sztamlykhac);
	m_jData[_T("hohap")].GetValue(m_szhohap);
	m_jData[_T("tietnieu")].GetValue(m_sztietnieu);
	m_jData[_T("timmach")].GetValue(m_sztimmach);
	m_jData[_T("tieuhoa")].GetValue(m_sztieuhoa);
	m_jData[_T("binhthuong")].GetValue(m_bbinhthuong);
	m_jData[_T("ngonmieng")].GetValue(m_bngonmieng);
	m_jData[_T("chanan")].GetValue(m_bchanan);
	m_jData[_T("mieng")].GetValue(m_bmieng);
	m_jData[_T("sond")].GetValue(m_bsond);
	m_jData[_T("ddkhac")].GetValue(m_bddkhac);
	m_jData[_T("dabt")].GetValue(m_bdabt);
	m_jData[_T("nhotnhat")].GetValue(m_bnhotnhat);
	m_jData[_T("timtai")].GetValue(m_btimtai);
	m_jData[_T("vangda")].GetValue(m_bvangda);
	m_jData[_T("tideno")].GetValue(m_btideno);
	m_jData[_T("tideyes")].GetValue(m_btideyes);
	m_jData[_T("location")].GetValue(m_szlocation);
	m_jData[_T("nghedl")].GetValue(m_bnghedl);
	m_jData[_T("nghegs")].GetValue(m_bnghegs);
	m_jData[_T("ngheht")].GetValue(m_bngheht);
	m_jData[_T("nghept")].GetValue(m_bnghept);
	m_jData[_T("noidl")].GetValue(m_bnoidl);
	m_jData[_T("noigs")].GetValue(m_bnoigs);
	m_jData[_T("noiht")].GetValue(m_bnoiht);
	m_jData[_T("noipt")].GetValue(m_bnoipt);
	m_jData[_T("nhindl")].GetValue(m_bnhindl);
	m_jData[_T("nhings")].GetValue(m_bnhings);
	m_jData[_T("nhinht")].GetValue(m_bnhinht);
	m_jData[_T("nhinpt")].GetValue(m_bnhinpt);
	m_jData[_T("vsdl")].GetValue(m_bvsdl);
	m_jData[_T("vsgs")].GetValue(m_bvsgs);
	m_jData[_T("vsht")].GetValue(m_bvsht);
	m_jData[_T("vspt")].GetValue(m_bvspt);
	m_jData[_T("vddl")].GetValue(m_bvddl);
	m_jData[_T("vdgs")].GetValue(m_bvdgs);
	m_jData[_T("vdht")].GetValue(m_bvdht);
	m_jData[_T("vdpt")].GetValue(m_bvdpt);
	}

}
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szType;

	szSQL.Format(_T("SELECT * FROM hms_doc_emr_view WHERE hde_docno=%ld and hde_refidx=%ld and hde_type='PATIENT_CARE' "), m_nDocumentNo, m_nRefIdx);
	rs.ExecSQL(szSQL);

	if(!rs.IsEOF())
	{
		CString szData;
		rs.GetValue(_T("hde_value"), szData);
		rs.GetValue(_T("hde_createdby"), m_szCreatedBy);
		m_jData.Parse(szData);
		UpdateJson(FALSE);
	}
	else
	{
		SetDefaultValues();
	}

}
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	UpdateJson(TRUE);
}
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::SetDefaultValues(){

	m_btu_di=FALSE;
	m_bxe_lan=FALSE;
	m_bgiuong=FALSE;
	m_bcang=FALSE;
	m_bgay=FALSE;
	m_btrungbinh=FALSE;
	m_bbeophi=FALSE;
	m_szheight.Empty();
	m_szWeight.Empty();
	m_bnhno=FALSE;
	m_bnhyes=FALSE;
	m_bhbsagno=FALSE;
	m_bhbsagyes=FALSE;
	m_bhcvno=FALSE;
	m_bhcvyes=FALSE;
	m_blaono=FALSE;
	m_blaoyes=FALSE;
	m_bnruouno=FALSE;
	m_bnruouyes=FALSE;
	m_szbenhlytamthankinh.Empty();
	m_szdiuongthuoc.Empty();
	m_szdiungkhac.Empty();
	m_szbanthan.Empty();
	m_szgiadinh.Empty();
	m_btinhtao=FALSE;
	m_blomo=FALSE;
	m_bme=FALSE;
	m_bhoptac=FALSE;
	m_bkhonghoptac=FALSE;
	m_sztamlykhac.Empty();
	m_szhohap.Empty();
	m_sztietnieu.Empty();
	m_sztimmach.Empty();
	m_sztieuhoa.Empty();
	m_bbinhthuong=FALSE;
	m_bngonmieng=FALSE;
	m_bchanan=FALSE;
	m_bmieng=FALSE;
	m_bsond=FALSE;
	m_bddkhac=FALSE;
	m_bdabt=FALSE;
	m_bnhotnhat=FALSE;
	m_btimtai=FALSE;
	m_bvangda=FALSE;
	m_btideno=FALSE;
	m_btideyes=FALSE;
	m_szlocation.Empty();
	m_bnghedl=FALSE;
	m_bnghegs=FALSE;
	m_bngheht=FALSE;
	m_bnghept=FALSE;
	m_bnoidl=FALSE;
	m_bnoigs=FALSE;
	m_bnoiht=FALSE;
	m_bnoipt=FALSE;
	m_bnhindl=FALSE;
	m_bnhings=FALSE;
	m_bnhinht=FALSE;
	m_bnhinpt=FALSE;
	m_bvsdl=FALSE;
	m_bvsgs=FALSE;
	m_bvsht=FALSE;
	m_bvspt=FALSE;
	m_bvddl=FALSE;
	m_bvdgs=FALSE;
	m_bvdht=FALSE;
	m_bvdpt=FALSE;

}
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::SetMode(int nMode){
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
			EnableButtons(TRUE, 0, 1, 2, 4, -1);
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
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::Ontu_diSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::Onxe_lanSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OngiuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OncangSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OngaySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntrungbinhSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnbeophiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnheightChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnheightSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnheightKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnheightCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnWeightChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnWeightSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnWeightKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnWeightCheckValue(){
	return 0;
} 
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnhnoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnhyesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnhbsagnoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnhbsagyesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnhcvnoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnhcvyesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnlaonoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnlaoyesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnruounoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnruouyesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnbenhlytamthankinhChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnbenhlytamthankinhSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnbenhlytamthankinhKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnbenhlytamthankinhCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OndiuongthuocChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OndiuongthuocSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OndiuongthuocKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OndiuongthuocCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OndiungkhacChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OndiungkhacSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OndiungkhacKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OndiungkhacCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnbanthanChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnbanthanSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnbanthanKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnbanthanCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OngiadinhChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OngiadinhSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OngiadinhKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OngiadinhCheckValue(){
	return 0;
} 
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntinhtaoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnlomoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnmeSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnhoptacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnkhonghoptacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntamlykhacChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntamlykhacSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntamlykhacKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntamlykhacCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnhohapChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnhohapSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnhohapKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnhohapCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntietnieuChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntietnieuSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntietnieuKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntietnieuCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntimmachChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntimmachSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntimmachKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntimmachCheckValue(){
	return 0;
} 
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntieuhoaChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntieuhoaSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntieuhoaKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntieuhoaCheckValue(){
	return 0;
} 
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnbinhthuongSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnngonmiengSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnchananSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnmiengSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnsondSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnddkhacSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OndabtSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnhotnhatSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntimtaiSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnvangdaSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntidenoSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OntideyesSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnlocationChange(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnlocationSetfocus(){
	
} */
/*void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnlocationKillfocus(){
	
} */
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnlocationCheckValue(){
	return 0;
} 
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnghedlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnghegsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnghehtSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnngheptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnoidlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnoigsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnoihtSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnoiptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnhindlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnhingsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnhinhtSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnnhinptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnvsdlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnvsgsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnvshtSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnvsptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnvddlSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnvdgsSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnvdhtSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
	void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnvdptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
}
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnSaveSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if(OnSavePhieuChamSocNguoiBenhCuaDieuDuongB3() > 0)
	{
		ShowMessageBox(_T("Data saved"));
	}
	
} 
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnPrintSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CReport rpt;
	CRecord rs(&pMF->m_db);
	CReportSection *rptHeader = NULL,* rptGroup = NULL,* rptDetail;
	CString szSQL, tmpStr, szDate, szWhere, szDoctorDept, szSubSelect;
	int nIdx = 1;

	if (!rpt.Init(_T("Reports\\HMS\\TM_HOSOCHAMSOCNGUOIBENHCUADIEUDUONG_B3.RPT")))
		return;

	szSQL.Format(_T(" SELECT get_patientname(htr_docno)                 AS patientname,") \
		_T("   CAST(TO_CHAR(hp_birthdate, 'YYYY') AS INTEGER)  AS birthyear,") \
		_T("   hms_getsex(hp_sex)                              AS psex,") \
		_T("   htr_admitdate                                   AS admitdate,") \
		_T("   hms_getaddress(hp_provid, hp_distid, hp_villid) AS address,") \
		_T("   hd_telephone                                    AS telephone,") \
		_T("   htr_maindisease                                 AS maindisease,") \
		_T("   get_username(htr_doctor)                        AS doctor,") \
		_T("   get_username(hb_nurse)                          AS nurse,") \
		_T("   hd_relative                                     AS relative,") \
		_T("   hd_contacttel                                   AS contacttel,") \
		_T("   CASE WHEN htr_idx = 1 THEN hd_admitdept ELSE htr_tdeptid END AS indept,") \
		_T("   htr_recordno									   AS recordno") \
		_T(" FROM hms_treatment_record") \
		_T(" LEFT JOIN hms_patient") \
		_T(" ON(htr_patientno = hp_patientno)") \
		_T(" LEFT JOIN hms_doc") \
		_T(" ON(htr_docno = hd_docno)") \
		_T(" LEFT JOIN hms_bed") \
		_T(" ON(htr_docno    = hb_docno") \
		_T(" AND htr_idx     = hb_idx)") \
		_T(" WHERE htr_docno = %ld") \
		_T(" AND htr_idx     = %ld"), m_nDocumentNo, m_nRefIdx);
	_debug(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);

	rptDetail = rpt.AddDetail();

	rptDetail->SetValue(_T("HealthService"), pMF->m_CompanyInfo.sc_pname);
	rptDetail->SetValue(_T("HospitalName"), pMF->m_CompanyInfo.sc_name);
	rptDetail->SetValue(_T("Department"), pMF->GetDepartmentName(pMF->GetDepartmentID()));
	tmpStr.Format(_T("%ld"), m_nDocumentNo);
	rptDetail->SetValue(_T("DocumentNo"), tmpStr);
	rptDetail->SetValue(_T("Recordno"), rs.GetValue(_T("recordno")));
	rptDetail->SetValue(_T("PATIENTNAME"), rs.GetValue(_T("patientname")));
	rptDetail->SetValue(_T("Yearofbirth"), rs.GetValue(_T("birthyear")));
	rptDetail->SetValue(_T("Sex"), rs.GetValue(_T("psex")));
	rs.GetValue(_T("admitdate"), tmpStr);
	rptDetail->SetValue(_T("InDate"), CDateTime::Convert(tmpStr, yyyymmdd|hhmmss, ddmmyyyy|hhmmss));
	rptDetail->SetValue(_T("Address"), rs.GetValue(_T("address")));
	rptDetail->SetValue(_T("Phone"), rs.GetValue(_T("telephone")));

	rs.GetValue(_T("indept"), tmpStr);
	if(tmpStr == _T("C1.3"))
		rptDetail->SetValue(_T("khoacc"), _T("X"));
	else if(tmpStr == _T("C1.1") || tmpStr == _T("C1.2") || tmpStr == _T("TYC"))
		rptDetail->SetValue(_T("pk"), _T("X"));
	else
		rptDetail->SetValue(_T("vkkhac"), _T("X"));

	rptDetail->SetValue(_T("contact"), rs.GetValue(_T("relative")));
	rptDetail->SetValue(_T("contacttel"), rs.GetValue(_T("contacttel")));
	rptDetail->SetValue(_T("dieuduong"), rs.GetValue(_T("nurse")));
	rptDetail->SetValue(_T("doctorname"), rs.GetValue(_T("doctor")));

	if(m_btu_di == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tudi"), tmpStr);
	if(m_bxe_lan == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("xelan"), tmpStr);
	if(m_bgiuong == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("giuong"), tmpStr);
	if(m_bcang == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("cang"), tmpStr);

	if(m_bgay == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("gay"), tmpStr);
	if(m_btrungbinh == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("trungbinh"), tmpStr);
	if(m_bbeophi == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("beophi"), tmpStr);

	rptDetail->SetValue(_T("height"), m_szheight);
	rptDetail->SetValue(_T("Weight"), m_szWeight);

	if(m_bnhno == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhno"), tmpStr);
	if(m_bnhyes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhyes"), tmpStr);

	if(m_bhbsagno == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("hbsagno"), tmpStr);
	if(m_bhbsagyes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("hbsagyes"), tmpStr);

	if(m_bhcvno == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("hcvno"), tmpStr);
	if(m_bhcvyes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("hcvyes"), tmpStr);
	
	if(m_blaono == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("laono"), tmpStr);
	if(m_blaoyes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("laoyes"), tmpStr);

	if(m_bnruouno == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nruouno"), tmpStr);
	if(m_bnruouyes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nruouyes"), tmpStr);

	rptDetail->SetValue(_T("benhlytamthankinh"), m_szbenhlytamthankinh);
	rptDetail->SetValue(_T("diuongthuoc"), m_szdiuongthuoc);
	rptDetail->SetValue(_T("diungkhac"), m_szdiungkhac);
	rptDetail->SetValue(_T("banthan"), m_szbanthan);
	rptDetail->SetValue(_T("giadinh"), m_szgiadinh);

	if(m_btinhtao == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tinhtao"), tmpStr);
	if(m_blomo == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("lomo"), tmpStr);
	if(m_bme == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("me"), tmpStr);
	if(m_bhoptac == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("hoptac"), tmpStr);
	if(m_bkhonghoptac == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("khonghoptac"), tmpStr);
	rptDetail->SetValue(_T("tamlykhac"), m_sztamlykhac);

	rptDetail->SetValue(_T("hohap"), m_szhohap);
	rptDetail->SetValue(_T("tietnieu"), m_sztietnieu);
	rptDetail->SetValue(_T("timmach"), m_sztimmach);
	rptDetail->SetValue(_T("tieuhoa"), m_sztieuhoa);

	if(m_bbinhthuong == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("binhthuong"), tmpStr);
	if(m_bngonmieng == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ngonmieng"), tmpStr);
	if(m_bchanan == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("chanan"), tmpStr);
	if(m_bmieng == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("mieng"), tmpStr);
	if(m_bsond == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("sond"), tmpStr);
	if(m_bddkhac == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ddkhac"), tmpStr);

	if(m_bdabt == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("dabt"), tmpStr);
	if(m_bnhotnhat == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhotnhat"), tmpStr);
	if(m_btimtai == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("timtai"), tmpStr);
	if(m_bvangda == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vangda"), tmpStr);
	if(m_btideno == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tideno"), tmpStr);
	if(m_btideyes == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("tideyes"), tmpStr);
	rptDetail->SetValue(_T("location"), m_szlocation);

	if(m_bnghedl == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nghedl"), tmpStr);
	if(m_bnghegs == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nghegs"), tmpStr);
	if(m_bngheht == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("ngheht"), tmpStr);
	if(m_bnghept == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nghept"), tmpStr);

	if(m_bnoidl == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("noidl"), tmpStr);
	if(m_bnoigs == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("noigs"), tmpStr);
	if(m_bnoiht == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("noiht"), tmpStr);
	if(m_bnoipt == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("noipt"), tmpStr);

	if(m_bnhindl == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhindl"), tmpStr);
	if(m_bnhings == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhings"), tmpStr);
	if(m_bnhinht == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhinht"), tmpStr);
	if(m_bnhinpt == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("nhinpt"), tmpStr);

	if(m_bvsdl == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vsdl"), tmpStr);
	if(m_bvsgs == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vsgs"), tmpStr);
	if(m_bvsht == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vsht"), tmpStr);
	if(m_bvspt == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vspt"), tmpStr);

	if(m_bvddl == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vddl"), tmpStr);
	if(m_bvdgs == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vdgs"), tmpStr);
	if(m_bvdht == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vdht"), tmpStr);
	if(m_bvdpt == 1)
		tmpStr.Format(_T("X"));
	else
		tmpStr.Format(_T(" "));
	rptDetail->SetValue(_T("vdpt"), tmpStr);

	rptDetail->SetValue(_T("chandoan"), rs.GetValue(_T("maindisease")));

	szDate = pMF->GetSysDate();
	tmpStr.Format(rptDetail->GetValue(_T("PrintDate")), szDate.Mid(8, 2), szDate.Mid(5, 2), szDate.Left(4));
	rptDetail->SetValue(_T("PrintDate"), tmpStr);

	rptDetail->SetValue(_T("UserName"), pMF->GetDoctorName(m_szCreatedBy));

	rpt.PrintPreview();
} 
void CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnCancelSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnAddPhieuChamSocNguoiBenhCuaDieuDuongB3(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnEditPhieuChamSocNguoiBenhCuaDieuDuongB3(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnDeletePhieuChamSocNguoiBenhCuaDieuDuongB3(){
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
 		OnCancelPhieuChamSocNguoiBenhCuaDieuDuongB3();
 	}
	return 0;
}
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnSavePhieuChamSocNguoiBenhCuaDieuDuongB3(){
	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
		return -1;
	if(!IsValidateData())
		return -1;
	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CString szSQL;
	CString szData;
	m_jData.ToString(szData);

	szSQL.Format(_T("HMS_DOC_EMR_CREATE('PATIENT_CARE', %ld, '%s', %ld, %d, '%s', 'XXX', '%s') "),
		m_nDocumentNo, pMF->m_szDept, m_nRefIdx, 0, pMF->GetCurrentUser(), szData);

	int ret = str2int(pMF->ExecDML(szSQL));
	return ret;
	return 0;
}
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnCancelPhieuChamSocNguoiBenhCuaDieuDuongB3(){
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
int CPhieuChamSocNguoiBenhCuaDieuDuongB3::OnPhieuChamSocNguoiBenhCuaDieuDuongB3ListLoadData(){
	return 0;
}
