#ifndef HMSRETAILDLG
#define HMSRETAILDLG
#include "GuiDialog.h"
#include "HMSSaleOrderList.h"
class CHMSRetailDialog: public CGuiDialog{
	void OnCreateComponents(){
		CHMSSaleOrderList* pView = new CHMSSaleOrderList();
		pView->Create(this);
	}	
};
#endif