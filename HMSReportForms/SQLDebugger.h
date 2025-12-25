#include "GuiUtils.h"
class AFX_EXT_CLASS CSQLDebugger{
public:
	CSQLDebugger(CString szSQL){
		CT2A str(szSQL, CP_UTF8);
		SetConsoleOutputCP(CP_UTF8);
		printf("\nszSQL: %s", str.m_psz);
	};
};