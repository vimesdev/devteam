#include <afxwin.h>
#include ".\HMSAdviseColistin.h"
#include "GuiMainFrame.h"
#include "LayoutUtils.h"
#include "ImageViewer.h"

CHMSAdviseColistin::CHMSAdviseColistin(void)
{
}

CHMSAdviseColistin::~CHMSAdviseColistin(void)
{
}

void CHMSAdviseColistin::OnInitializes()
{
	Load(_T(".\\Reports\\HMS\\PHIEUCHIDINH_COLISTIN.HTML"));
	//Khoi tao gia tri item trong combobox
	OptionList* options = new OptionList();
	options->Add(new OptionItem(L"1 mg/L", L"1 mg/L"));
	options->Add(new OptionItem(L"1.5 mg/L", L"1.5 mg/L"));
	options->Add(new OptionItem(L"2 mg/L", L"2 mg/L"));
	AddOption(L"colistin_css", options);
}


void CHMSAdviseColistin::GetData()
{
	CHTMLForms::GetData();
	//Set các giá trị theo định dạng mong muốn. dữ liệu lấy từ m_data;
	CString szCreatedDate = m_data[L"CREATEDDATE"];
	CString tmpStr;
	CDateTime tm;
	tm.ParseDateTime(szCreatedDate);
	CDate dte = tm.GetDate();
	tmpStr.Format(_T("Ngày %.2d tháng %.2d năm %.4d"), dte.GetDay(), dte.GetMonth(), dte.GetYear());
	SetValue(L"CREATEDDATE", tmpStr);
}
void CHMSAdviseColistin::OnCreateOptions(CString szTag)
{
//	_tprintf(L"\r\nOnCreateOptions: %s", szTag);


	CString szSQL;
		CGuiMainFrame* pMF = (CGuiMainFrame*) AfxGetMainWnd();
		CRecord rs(&pMF->m_db);
		if(szTag == L"THUOCSUDUNG")
		{
			szSQL.Format(_T("select mpc_product_class_id, mpc_name from m_product_class WHERE  mpc_isactive='Y' and mpc_advise ='Y' ORDER BY mpc_name "));
//_tprintf(_T("\r\n%s"), szSQL);
			rs.ExecSQL(szSQL);

			OptionList* options = new OptionList();
			options->Add(new OptionItem(_T(""), _T("")));

			while(!rs.IsEOF())
			{
				CString szId, szName;
				rs.GetValue(_T("mpc_product_class_id"), szId);
				rs.GetValue(_T("mpc_name"), szName);
				options->Add(new OptionItem(szId, szName));
				rs.MoveNext();
			}
			AddOption(szTag, options);
		}

	/*
		if(szTag == L"colistin_css")
		{
			OptionList* options = new OptionList();
			options->Add(new OptionItem(L"1 mg/L", L"1 mg/L"));
			options->Add(new OptionItem(L"1.5 mg/L", L"1.5 mg/L"));
			options->Add(new OptionItem(L"2 mg/L", L"2 mg/L"));
			AddOption(L"colistin_css", options);
		}
	*/
		dom::element el = Find(L"colistin_css");
		if(!el.is_valid())
			return;
		
		if(szTag == L"lieunap")
		{
			//printf("\r\n%s", el.get_html().c_str());
			el = el.find_first("caption");
			//printf("\r\n%s", el.get_html().c_str());
			if(el.is_valid())
			{
				std::wstring id(el.get_attribute("id"));
				OptionList* options = new OptionList();
				if(id == L"1 mg/L")
				{
					options->Add(new OptionItem(L"3 MUI", L"3 MUI"));
					options->Add(new OptionItem(L"4 MUI", L"4 MUI"));
					options->Add(new OptionItem(L"5 MUI", L"5 MUI"));
					AddOption(szTag, options);
				}
				
				if(id == L"1.5 mg/L")
				{
					options->Add(new OptionItem(L"4 MUI", L"4 MUI"));
					options->Add(new OptionItem(L"5 MUI", L"5 MUI"));
					options->Add(new OptionItem(L"6 MUI", L"6 MUI"));
					options->Add(new OptionItem(L"7 MUI", L"7 MUI"));
					AddOption(szTag, options);
				}
				if(id == L"2 mg/L")
				{
					options->Add(new OptionItem(L"5 MUI", L"5 MUI"));
					options->Add(new OptionItem(L"6 MUI", L"6 MUI"));
					options->Add(new OptionItem(L"7 MUI", L"7 MUI"));
					options->Add(new OptionItem(L"8 MUI", L"8 MUI"));
					options->Add(new OptionItem(L"9 MUI", L"9 MUI"));
					AddOption(szTag, options);
				}
			}
		}

		if(szTag == L"lieu_duytri")
		{
			//printf("\r\n%s", el.get_html().c_str());
			el = el.find_first("caption");
			//printf("\r\n%s", el.get_html().c_str());
			if(el.is_valid())
			{
				std::wstring id(el.get_attribute("id"));
				OptionList* options = new OptionList();
				if(id == L"1 mg/L")
				{
					options->Add(new OptionItem(L"2 MUI", L"2 MUI"));
					options->Add(new OptionItem(L"3 MUI", L"3 MUI"));
					options->Add(new OptionItem(L"4 MUI", L"4 MUI"));
					options->Add(new OptionItem(L"5 MUI", L"5 MUI"));
					options->Add(new OptionItem(L"6 MUI", L"6 MUI"));
					options->Add(new OptionItem(L"7 MUI", L"7 MUI"));
					options->Add(new OptionItem(L"8 MUI", L"8 MUI"));
					options->Add(new OptionItem(L"9 MUI", L"9 MUI"));
					
					AddOption(szTag, options);
				}
				
				if(id == L"1.5 mg/L")
				{
					options->Add(new OptionItem(L"3 MUI", L"3 MUI"));
					options->Add(new OptionItem(L"4 MUI", L"4 MUI"));
					options->Add(new OptionItem(L"5 MUI", L"5 MUI"));
					options->Add(new OptionItem(L"6 MUI", L"6 MUI"));
					options->Add(new OptionItem(L"7 MUI", L"7 MUI"));
					options->Add(new OptionItem(L"8 MUI", L"8 MUI"));
					options->Add(new OptionItem(L"9 MUI", L"9 MUI"));
					options->Add(new OptionItem(L"10 MUI", L"10 MUI"));
					options->Add(new OptionItem(L"11 MUI", L"11 MUI"));
					options->Add(new OptionItem(L"12 MUI", L"12 MUI"));
					AddOption(szTag, options);
				}
				if(id == L"2 mg/L")
				{
					options->Add(new OptionItem(L"4 MUI", L"4 MUI"));
					options->Add(new OptionItem(L"5 MUI", L"5 MUI"));
					options->Add(new OptionItem(L"6 MUI", L"6 MUI"));
					options->Add(new OptionItem(L"7 MUI", L"7 MUI"));		
					options->Add(new OptionItem(L"8 MUI", L"8 MUI"));
					options->Add(new OptionItem(L"9 MUI", L"9 MUI"));
					options->Add(new OptionItem(L"10 MUI", L"10 MUI"));
					options->Add(new OptionItem(L"11 MUI", L"11 MUI"));
					options->Add(new OptionItem(L"12 MUI", L"12 MUI"));
					AddOption(szTag, options);
				}
			}
		}
}

void CHMSAdviseColistin::OnOptionSelect(OptionItem* item)
{
	//_tprintf(L"\r\nSelected %s", item->m_szId);
}

void CHMSAdviseColistin::ShowPrescription(BOOL bShow, CString szFromDate)
{
	CGuiMainFrame* pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	dom::element el = Find(L"PRESCRIPTION");
	if(!el.is_valid())
	{
		//printf("\r\nInvalid element");
		return;
	}

	utf8::ostream os;
	os.clear();

	if(!bShow)
	{
		os << _T("");
		el.set_html(os.data(), os.length());
		el.update(true);
		return;
	}
	szSQL.Format(_T(" SELECT") \
_T("     hpo_orderid                AS orderid,") \
_T("     to_char(hpo_orderdate,'DD/MM/YYYY HH24:MI') AS order_date,") \
_T("     mp_name as name,") \
_T("     get_uomname(mp_uom_id)     AS unit,") \
_T("     hpol_qtyissue as qty") \
_T(" FROM") \
_T("     hms_ipharmaorder") \
_T("     LEFT JOIN hms_ipharmaorderline ON ( hpol_orderid = hpo_orderid )") \
_T("     LEFT JOIN m_product ON ( hpol_product_id = mp_product_id )") \
_T(" WHERE") \
_T("         hpo_docno = %ld") \
_T("     AND hpo_orderdate >= to_timestamp('%s', 'YYYY-MM-DD HH24:MI:SS') AND mp_org_id = 'PM'") \
_T(" ORDER BY") \
_T("     hpo_orderdate,") \
_T("     mp_name"), m_fKey.m_nDocumentNo, szFromDate);
	rs.ExecSQL(szSQL);

//_tprintf(_T("\r\n%s"), szSQL);

	CString tmpStr;

	os.clear();

	os << L"<table width=\"100%\" >";

	tmpStr.Format(_T(" <tr>") \
_T(" 			<th width=\"50px\" align=\"left\">Stt</th>") \
_T(" 			<th width=\"300px\" align=\"left\">Tên thuốc/HL</th>") \
_T(" 			<th width=\"100px\" align=\"left\">Đơn vị vị</th>") \
_T(" 			<th width=\"100px\" align=\"left\">Số lượng</th>") \
_T(" 			<th width=\"140px\" align=\"left\">Ngày dùng</th>") \
_T(" 		</tr>"));
	
	os << tmpStr;

	int nIndex = 1;
	CString szName, szUnit, szOrderDate;
	float nQty;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("name"), szName);
		rs.GetValue(_T("unit"), szUnit);
		rs.GetValue(_T("qty"), nQty);
		rs.GetValue(_T("order_date"), szOrderDate);

		tmpStr.Format(_T(" <tr>") \
_T(" 			<td width=\"50px\" align=\"left\">%d</td>") \
_T(" 			<td width=\"300px\" align=\"left\">%s</td>") \
_T(" 			<td width=\"100px\" align=\"left\">%s</td>") \
_T(" 			<td width=\"100px\" align=\"left\">%.2f</td>") \
_T(" 			<td width=\"140px\" align=\"left\">%s</td>") \
_T(" 		</tr>"), nIndex++, szName, szUnit, nQty, szOrderDate);

		os << tmpStr;
		rs.MoveNext();
	}
	os << L"</table>";
//printf("\r\n%s", os.data());
	el.set_html(os.data(), os.length());
	el.update(true);
	RedrawWindow();
}



BOOL CHMSAdviseColistin::handle_event (HELEMENT he, BEHAVIOR_EVENT_PARAMS& params ) 
{ 
	if (params.cmd == BUTTON_STATE_CHANGED)
	{
		CLayoutUtils util;
		util.apply_formular(m_hWnd, he, "colistin");
	}
	if(params.cmd == SELECT_SELECTION_CHANGED)
	{
	}
	if(params.cmd == BUTTON_CLICK)
	{
		dom::element el(he);
		std::wstring str = el.get_attribute("name");

		if (str.compare(L"Bang3") == 0 || str.compare(L"Bang1") == 0 || str.compare(L"Bang2") == 0)
		{
			CImageViewer iv(this, str.c_str());
			iv.DoModal();
		}
	}
	return CHTMLForms::handle_event(he, params);
}

BOOL CHMSAdviseColistin::handle_key (HELEMENT he, KEY_PARAMS& params ) 
{
	if(params.cmd != KEY_DOWN)
		return FALSE;  
	dom::element root = dom::element::root_element(m_hWnd);

	dom::element el = he;
	switch(params.key_code)
	{
		case VK_TAB:
			CLayoutUtils util;
			util.apply_formular(m_hWnd, he, "colistin");
			break;
	}
	return CHTMLForms::handle_key(he, params);
}