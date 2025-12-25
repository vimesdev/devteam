#ifndef HMSTREATMENTHTMLTMDIALOG_H
#define HMSTREATMENTHTMLTMDIALOG_H

#include "HMSTreatmentHtmlDialog.h"


class CHMSTreatmentHtmlTMDialog :
    public CHMSTreatmentHtmlDialog
{
public:
    CHMSTreatmentHtmlTMDialog(CWnd* pParent, CString szType, bool bAddNew = false) :
        CHMSTreatmentHtmlDialog(pParent, szType, bAddNew)
    {
    }
    ~CHMSTreatmentHtmlTMDialog() {};

    CGuiView* CreateView(LPCTSTR szViewName);
};

#endif