#ifndef HMSFEETABS_H
#define HMSFEETABS_H
#include "GuiUtils.h"
#include "GuiTabCtrl.h"
#include "HMSParaclinicalListSetup.h"
#include "HMSExaminationTypeSetup.h"
#include "HMSOtherFeeSetup.h"
#include "HMSOperationListSetup.h"


class AFX_EXT_CLASS CHMSFeeTabSetup : public CGuiTabCtrl{
protected:

public:
	CHMSParaclinicalListSetup		m_wndParaList;
	CHMSOperationListSetup	m_wndOperation;
	CHMSExaminationTypeSetup	m_wndExamType;
	CHMSOtherFeeSetup		m_wndOtherFee;

	CHMSFeeTabSetup();
	~CHMSFeeTabSetup();
	void OnInitializes();
	void	OnFeeTabSelectChange(int nOld, int nNew); 

};
#endif
