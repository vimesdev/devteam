#include "HMSFeeTabs.h"
static void _OnFeeTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSFeeTabSetup*)pWnd->GetParent())->OnFeeTabSelectChange(nOld, nNew);
} 


CHMSFeeTabSetup::CHMSFeeTabSetup(){
}
CHMSFeeTabSetup::~CHMSFeeTabSetup(){
}
void CHMSFeeTabSetup::OnInitializes(){
	m_wndParaList.Create(this);
	m_wndExamType.Create(this);
	m_wndOtherFee.Create(this);
	m_wndFoodFee.Create(this);
	m_wndOperation.Create(this);
	m_wndDynBedMap.Create(this);
	Add(_T("Examination Fee"), &m_wndExamType);
	Add(_T("Operation Fee"), &m_wndOperation);
	Add(_T("Paraclinical Fee"), &m_wndParaList);
	Add(_T("Other Fee"), &m_wndOtherFee);
	Add(_T("Tiền ăn"), &m_wndFoodFee);
	Add(_T("Giường động"), &m_wndDynBedMap);
	//SetEvent(WE_SELCHANGE, _OnFeeTabSelectChangeFnc);
}

void CHMSFeeTabSetup::OnFeeTabSelectChange(int nOld, int nNew){
	if(nNew < 0) return;
	switch(nNew){
	case 0:
		m_wndExamType.OnExamTypeListLoadData();
		break;
	case 1:
		//m_wndParaList.Set
		break;
	case 2:
		m_wndOperation.OnFeeListLoadData();
		break;
	case 3:
		m_wndOtherFee.OnListLoadData();
	}
}