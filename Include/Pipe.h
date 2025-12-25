#ifndef PIPE_H
#define PIPE_H
#include <afxwin.h>


class AFX_EXT_CLASS CPipe{
protected:
	HANDLE		m_hPipe; 
public:
	CPipe();
	~CPipe();
}
#endif