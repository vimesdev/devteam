#include "Colistin_calculator.h"
#include "LayoutUtils.h"
#include <tchar.h>
using namespace htmlayout;

CColistin_calculator::CColistin_calculator(HWND hwnd, HELEMENT he)
{
	m_hWnd = hwnd;
	m_he = he;
}

void CColistin_calculator::process()
{
	dom::element sel(m_he), root = dom::element::root_element(m_hWnd), el;
	std::wstring str;
	CLayoutUtils util;
	if (util.check_attribute(m_he, "name") > 0)
	{
		str = sel.get_attribute("name");
	}
	if (str.empty())
	{
		//for select tag
		dom::element p(sel.parent());
		if (util.check_attribute(p, "name") > 0)
		{
			str = p.get_attribute("name");
		}
		else
		{
			return;
		}
	}
	if (str.compare(L"CANNANG") == 0)
	{
		json::value v((long)calc_clcr());
		el = root.find_first("[name=%s]", "CLCR");
		if (el.is_valid())
		{
			el.set_value(v);
		}
	}
	if (str.compare(L"COLISTIN_CSS") == 0)
	{
		json::value v(calc_inject_dose());
		el = root.find_first("[name=%s]", "LIEUNAP");
		if (el.is_valid())
		{
			el.set_value(v);
		}
	}
	if (str.compare(L"KHONGLOCMAU") == 0)
	{
		json::value v(calc_maintain_dose());
		std::wstring s = v.to_string();
		printf("\ndose: %S", s.c_str());
		el = root.find_first("[name=%s]", "LIEUDUYTRI1");
		if (el.is_valid())
		{
			if (sel.get_state(STATE_CHECKED))
			{
				el.set_value(v);
			}
			else
			{
				el.set_value(json::value(_T("")));
			}
		}
	}	
}

double CColistin_calculator::calc_clcr()
{
	double nClcr = 0, nWeight, nAge, nCr, k = 0.85;
	std::wstring str;

	dom::element el, root = dom::element::root_element(m_hWnd);
	el = root.find_first("[name=%s]", "CANNANG");
	str = el.get_value().to_string();
	nWeight = _wtol(str.c_str());

	el = root.find_first("[name=%s]", "AGE");
	str = el.get_value().to_string();
	nAge = _wtol(str.c_str());

	el = root.find_first("[name=%s]", "CREATININ");
	str = el.get_value().to_string();
	nCr = _wtol(str.c_str());

	el = root.find_first("[name=%s]", "GENDER");
	str = el.get_value().to_string();
	if (str == L"Nam") k = 1;

	nClcr = ((140 - nAge) * nWeight * k) / (nCr * 0.815);
	return nClcr;
}
const char* CColistin_calculator::calc_inject_dose()
{
	std::wstring str;
	//std::string res;
	LPCSTR res = 0;
	int nWeight = 0;
	dom::element el, root = dom::element::root_element(m_hWnd);

	el = root.find_first("[name=%s]", "CANNANG");
	str = el.get_value().to_string();
	nWeight = _wtol(str.c_str());

	el = root.find_first("[name=%s]", "COLISTIN_CSS");
	str = el.get_value().to_string();
	if (str == L"1 mg/L")	
	{
		if (nWeight <= 55) res = "3MIU";
		else if (nWeight <= 70) res = "4MIU";
		else res = "5MIU";
	}
	if (str == L"1,5 mg/L")	
	{
		if (nWeight < 50) res = "4MIU";
		else if (nWeight < 60) res = "5MIU";
		else if (nWeight < 70) res = "6MIU";
		else res = "7MIU";
	}
	if (str == L"2 mg/L")	
	{
		if (nWeight < 45) res = "5MIU";
		else if (nWeight < 54) res = "6MIU";
		else if (nWeight < 61) res = "7MIU";
		else if (nWeight < 70) res = "8MIU";
		else res = "9MIU";
	}
	return res;
}

const char* CColistin_calculator::calc_maintain_dose()
{
	std::wstring str;
	//std::string res;
	LPCSTR res = 0;
	dom::element el, root = dom::element::root_element(m_hWnd);
	long nClcr = 0;

	el = root.find_first("[name=%s]", "CLCR");
	str = el.get_value().to_string();
	nClcr = _wtol(str.c_str());

	el = root.find_first("[name=%s]", "COLISTIN_CSS");
	str = el.get_value().to_string();

	if (str == L"1 mg/L")	
	{
		if (nClcr < 20) res = "2MIU";
		else if (nClcr <= 50) res = "3MIU";
		else if (nClcr <= 70) res = "4MIU";
		else if (nClcr <= 90) res = "5MIU";
		else if (nClcr <= 105) res = "6MIU";
		else if (nClcr <= 115) res = "7MIU";
		else if (nClcr <= 127) res = "8MIU";
		else res = "9MIU";
	}
	if (str == L"1,5 mg/L")	
	{
		if (nClcr < 10) res = "3MIU";
		else if (nClcr <= 30) res = "4MIU";
		else if (nClcr <= 50) res = "5MIU";
		else if (nClcr <= 65) res = "6MIU";
		else if (nClcr <= 80) res = "7MIU";
		else if (nClcr <= 90) res = "8MIU";
		else if (nClcr <= 100) res = "9MIU";
		else if (nClcr <= 110) res = "10MIU";
		else res = "11MIU";
	}
	if (str == L"2 mg/L")	
	{
		if (nClcr < 15) res = "4MIU";
		else if (nClcr < 30) res = "5MIU";
		else if (nClcr < 50) res = "6MIU";
		else if (nClcr < 60) res = "7MIU";
		else if (nClcr < 65) res = "8MIU";
		else if (nClcr <= 75) res = "9MIU";
		else if (nClcr <= 85) res = "10MIU";
		else if (nClcr <= 92) res = "11MIU";
		else res = "12MIU";
	}
	return res;
}
