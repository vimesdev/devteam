#include "HMSTreatmentHtmlTMDialog.h"
#include "TMRecordSummary.h"
#include "HMSDischargeDialog.h"
#include "HMSPatientDeathDialog.h"

CGuiView* CHMSTreatmentHtmlTMDialog::CreateView(LPCTSTR szViewName)
{
	CGuiView* pView = NULL;
	if (!m_mapViews.Lookup(szViewName, pView))
	{
		CString szName(szViewName);
		if (szName == L"VIEW_CTMRecordSummary")
			pView = new CTMRecordSummary(m_nDocumentNo);

		

		//if (szName == L"VIEW_CHMSPatientDeathDialog")
		//	pView = new CHMSPatientDeathDialog(this);

		
		if (pView)
		{
			m_mapViews[szViewName] = pView;
		}
	}
	return pView;
}

