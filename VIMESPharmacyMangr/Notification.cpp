#include ".\notification.h"

CNotification::CNotification(void)
{
}

CNotification::~CNotification(void)
{
}
BEGIN_MESSAGE_MAP(CNotification, CGuiView)
	ON_WM_PAINT()
END_MESSAGE_MAP()

void CNotification::OnPaint()
{
	CPaintDC dc(this); // device context for painting
}
