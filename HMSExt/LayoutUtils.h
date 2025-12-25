#ifndef LAYOUTUTILS_H
#define LAYOUTUTILS_H

#include "htmlayout.h"

class CLayoutUtils
{
public:
	CLayoutUtils();
	//kiem_tra_thuoc_tinh
	int check_attribute(HELEMENT he, const char* attr);
	//bat_buoc_du_lieu
	int check_empty(HELEMENT he);
	//bat_buoc_du_lieu_tu_dong
	int check_empty(HWND hwnd);
	//tinh_toan
	void apply_formular(HWND hwnd, HELEMENT he, const char* form);
	/*
	const char* get_value(HELEMENT he);
	void set_value(HELEMENT he, const char* val);
	*/
	//Extension
	void set_focus(HELEMENT he);
	void show_tooltip(HELEMENT he);
};

#endif
