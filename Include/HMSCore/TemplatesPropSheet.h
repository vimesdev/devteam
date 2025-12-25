#ifndef TEMPLATEPROPSHEET_H
#define TEMPLATEPROPSHEET_H
#include <vector>
#include "GuiDialog.h"

class AFX_EXT_CLASS CTemplatesPropSheet :
    public CGuiDialog
{
protected:
    std::vector<CDialog*> m_pages;
public:
    CTemplatesPropSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL);
    ~CTemplatesPropSheet();

    void OnCreateComponents();
    void AddPage(CDialog* pPage);

};


#endif