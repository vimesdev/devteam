#ifndef NOTIFICATION_H
#define NOTIFICATION_H
#include "GuiView.h"

class CNotification: public CGuiView
{
public:
	CNotification(void);
	~CNotification(void);
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};

#endif