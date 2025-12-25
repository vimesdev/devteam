#ifndef HMSFEETABS_H
#define HMSFEETABS_H
#include "GuiUtils.h"
#include "GuiTabCtrl.h"
#include "HMSParaclinicalListSetup.h"
#include "HMSExaminationTypeSetup.h"
#include "HMSOtherFeeSetup.h"
#include "HMSFoodFeeSetup.h"
#include "HMSOperationListSetup.h"
#include "HMSDynBedMap.h"

class CHMSFeeTabSetup : public CGuiTabCtrl{
protected:

public:
	CHMSParaclinicalListSetup		m_wndParaList;
	CHMSOperationListSetup	m_wndOperation;
	CHMSExaminationTypeSetup	m_wndExamType;
	CHMSOtherFeeSetup		m_wndOtherFee;
	CHMSFoodFeeSetup		m_wndFoodFee;
	CHMSDynBedMap			m_wndDynBedMap;
	CHMSFeeTabSetup();
	~CHMSFeeTabSetup();
	void OnInitializes();
	void	OnFeeTabSelectChange(int nOld, int nNew); 

};
#endif