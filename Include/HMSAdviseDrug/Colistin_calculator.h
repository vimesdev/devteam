#ifndef COLISTIN_CALCULATOR_H
#define COLISTIN_CALCULATOR_H

#include "htmlayout.h"
class CColistin_calculator
{
protected:
	HWND m_hWnd;
	HELEMENT m_he;
public:
	CColistin_calculator(HWND hwnd, HELEMENT he);
	void process();
	double calc_clcr();
	const char* calc_inject_dose();
	const char* calc_maintain_dose();
};
#endif