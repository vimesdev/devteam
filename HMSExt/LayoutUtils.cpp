#include "LayoutUtils.h"
#include "Colistin_calculator.h"

using namespace htmlayout;

CLayoutUtils::CLayoutUtils()
{

}

//kiem_tra_thuoc_tinh
int CLayoutUtils::check_attribute(HELEMENT he, const char* attr)
{
	dom::element el(he);
	for (int i = 0; i < el.get_attribute_count(); i++)
	{
		if (strcmp(el.get_attribute_name(i), attr) == 0)
		{
			return 1;
		}
	}
	return 0;
}

//bat_buoc_du_lieu
int CLayoutUtils::check_empty(HELEMENT he)
{
	dom::element el(he);
	std::wstring str = el.text();
	if (str.empty())
	{
		return -1;
	}	
	return 0;
}

//bat_buoc_du_lieu_tu_dong
int CLayoutUtils::check_empty(HWND hwnd)
{
	named_values values;
	dom::element root = dom::element::root_element(hwnd);
	dom::element el;
	bool bIsEmpty = false;
	if(htmlayout::get_values(root, values ))
	{
		std::wstring s;
		for (named_values::const_iterator it = values.begin(); it != values.end() ; ++it )
		{
			/*
			//s += (*it).first;
			s = (*it).second.to_string();
			if (s.empty())
			{
				s = (*it).first;
				bIsEmpty = true;
				::MessageBoxW(GetActiveWindow(), s.c_str(),L"values are:", MB_OK);
				break;
			}
			*/
			s = (*it).first;
			printf("\nel: %S", s.c_str());
			el = root.find_first("[name=%S]", s.c_str());
			if (el.is_valid() && check_attribute(el, "required") > 0)
			{
				s = el.get_value().to_string();
				//s = (*it).second.to_string();
				printf("\nel val: %S", s.c_str());
				if (s.empty())
				{
					el.set_state(STATE_FOCUS);
					bIsEmpty = true;
					break;
				}
			}
		}
	}
	if (bIsEmpty)
	{
		return -1;
	}
	return 0;
}

//tinh_toan

void CLayoutUtils::apply_formular(HWND hwnd, HELEMENT he, const char* form)
{
	if (strcmp(form, "colistin") == 0)
	{
		CColistin_calculator cc(hwnd, he);
		cc.process();
	}
	return;
}

/*
const char* CLayoutUtils::get_value(HELEMENT he){return "";}
void CLayoutUtils::set_value(HELEMENT he, const char* val)
{
	json::value value(val);
	dom::element el(he);
	el.set_value(value);
}
*/
//Extension
void CLayoutUtils::set_focus(HELEMENT he)
{
	dom::element el(he);
	el.set_state(STATE_FOCUS);
	el.update();
	el.scroll_to_view();
}
void CLayoutUtils::show_tooltip(HELEMENT he){}
