#ifndef HMSAdviseColistin_H
#define HMSAdviseColistin_H
#include "HTMLForms.h"

class AFX_EXT_CLASS CHMSAdviseColistin: public CHTMLForms
{
public:
	CHMSAdviseColistin(void);
	~CHMSAdviseColistin(void);
	void	OnInitializes();
	void	GetData();
	void OnCreateOptions(CString szTag);
	void OnOptionSelect(OptionItem* item);
	void ShowPrescription(BOOL bShow, CString szOrderDate);
	virtual BOOL	handle_event (HELEMENT he, BEHAVIOR_EVENT_PARAMS& params ) ;
	virtual BOOL	handle_key    (HELEMENT he, KEY_PARAMS& params ) ;
};

#endif