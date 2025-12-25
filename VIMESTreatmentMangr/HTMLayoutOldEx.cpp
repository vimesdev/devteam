#include "HTMLayoutOldEx.h"
#include <GuiUtils.h>
#include "HMSSelectionListDialog.h"
#include "HMSMainFrame.h"
#include "HMSNoteDialog.h"
#include "HMSSurgeryOperationHtmlDialog.h"

BOOL CHTMLayoutOldEx::on_event(HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason) {
	BOOL res = CHTMLayoutOld::on_event(he, target, type, reason);
	dom::element el = target;
	if (el.get_ctl_type() == CTL_RADIO)
	{
		if (m_szType == _T("DT_DINHDUONG"))
		{
			CalcNutriPoint();
		}
	}
	return res;
}

double CHTMLayoutOldEx::GetTongTruotNga()
{

	dom::element root = GetRootElement();
	htmlayout::named_values values;
	double ttl = 0;
	CString tmpStr, szTable_name;
	if (htmlayout::get_values(root, values))
	{
		std::wstring s;

		for (htmlayout::named_values::const_iterator it = values.begin(); it != values.end(); ++it)
		{
			s += (*it).first;
			s += L"=";
			s += (*it).second.to_string();
			s += L"\n";
			std::wstring name = (*it).first;
			std::wstring value = (*it).second.to_string();
			dom::element t = root.find_first("[name='%S']", name.c_str());

			if (!t.get_style_attribute("behavior"))
				continue;

			if (t.get_ctl_type() == CTL_RADIO)
			{

				selected_cb selected;
				root.find_all(&selected, "[type='radio'][name='%S']", name.c_str());

				for (unsigned int n = 0; n < selected.elements.size(); ++n)
				{
					dom::element& e = selected.elements[n];
					const wchar_t* checked = e.get_attribute("checked");
					const wchar_t* val = e.get_attribute("value");
					if (checked != NULL && wcscmp(checked, L"true") == 0)
					{
						value = val;
						ttl += str2double(value.c_str());
						break;
					}

				}

			}
			if (t.get_ctl_type() == CTL_CHECKBOX)
			{
				value = t.get_value().to_string();
				_tprintf(_T("\r\nvalue=%s"), value.c_str());
				if (value == L"true")
					ttl += str2int(t.text().c_str());
			}
			tmpStr = CString(name.c_str());
			if (tmpStr.Find(_T("NGUYCO")) == 0)
			{
				SetValue(tmpStr, _T("false"));
			}
			_tprintf(_T("\r\n%s: %s"), name.c_str(), value.c_str());
		}

		printf("\r\nTotal = %d", ttl);

	}

	SetValue(L"TongSo", int2str(ttl));
	if (ttl >= 6 && ttl <= 13)
		tmpStr = _T("Mức 1");
	if (ttl > 13)
		tmpStr = _T("Mức 2");

	SetValue(L"MucDo", tmpStr);
	if (ttl < 25)
	{
		tmpStr = _T("NGUYCO_KHONG");
	}
	else if (ttl > 45)
	{
		tmpStr = _T("NGUYCO_CAO");
	}
	else
	{
		tmpStr = _T("NGUYCO_TB");
	}
	SetValue(tmpStr, _T("true"));
	szTable_name.Format(_T("BANG_%s"), tmpStr);
	dom::element tbl;
	tbl = root.find_first("[name=BANG_NGUYCO_KHONG]");
	tbl.set_attribute("style", L"display:none");
	tbl = root.find_first("[name=BANG_NGUYCO_TB]");
	tbl.set_attribute("style", L"display:none");
	tbl = root.find_first("[name=BANG_NGUYCO_CAO]");
	tbl.set_attribute("style", L"display:none");
	tbl = root.find_first("[name=%S]", szTable_name);
	tbl.set_attribute("style", L"display:block");
	return ttl;

}


BOOL CHTMLayoutOldEx::handle_mouse(HELEMENT he, MOUSE_PARAMS& params)
{
	dom::element e(he);
	dom::element t(params.target);

	if (params.cmd == MOUSE_CLICK)
	{
		if (params.button_state == PROP_MOUSE_BUTTON)
		{
			if (t.is_valid())
			{
				CTL_TYPE ct = t.get_ctl_type();
				if (ct == CTL_NO || ct == CTL_UNKNOWN)
				{
					OnMouseRightClick(params.pos, m_szType);
				}
			}
		}

	}
	return on_mouse(he, params.target, params.cmd, params.pos, params.button_state, params.alt_state);
}

void CHTMLayoutOldEx::OnMouseRightClick(CPoint pt, CString szType)
{
	CGuiMenu menu(this), submenu(this);
	int nId = 0;
	OnHtmlMenuCreate(&menu, szType);
	if (menu.GetMenuItemCount() > 0)
	{
		ClientToScreen(&pt);
		nId = menu.TrackPopupMenu(TPM_RETURNCMD | TPM_LEFTALIGN | TPM_TOPALIGN, pt.x, pt.y, this);
	}
	if (nId <= 0)
	{
		return;
	}
	OnHtmlMenuSelect(szType, nId);
}

void CHTMLayoutOldEx::OnHtmlMenuCreate(CGuiMenu* pMenu, CString szType)
{
	CGuiMenu submenu(this);
	_tprintf(_T("\nszType:%s"), szType);
	if (szType.Find(M_CANTHIEP_DMV) == 0)
	{
		submenu.CreatePopupMenu();
		submenu.AppendMenu(MF_BYCOMMAND, 1, _T("D/c chẩn đoán"));
		submenu.AppendMenu(MF_SEPARATOR);
		submenu.AppendMenu(MF_BYCOMMAND, 2, _T("D/c can thiệp"));
		pMenu->CreatePopupMenu();
		pMenu->AppendMenu(MF_POPUP, (UINT_PTR)submenu.m_hMenu, _T("Thêm"));
	}
	if (szType == _T("DT_DINHDUONG"))
	{
		pMenu->CreatePopupMenu();
		pMenu->AppendMenu(MF_BYCOMMAND, 1, _T("Thêm phiếu khám CK"));
		submenu.AppendMenu(MF_SEPARATOR);
		pMenu->AppendMenu(MF_BYCOMMAND, 2, _T("In phiếu khám CK"));
	}
}
void CHTMLayoutOldEx::OnHtmlMenuSelect(CString szType, int nId)
{
	CHMSMainFrame* pMF = (CHMSMainFrame*) AfxGetMainWnd();
	if (szType.Find(M_CANTHIEP_DMV) == 0)
	{
		CString szSQL, szSelection, szValue;
		switch (nId)
		{
		case 1:
			szSelection = _T("htmform_tools_diagnosis");
			break;
		case 2:
			szSelection = _T("htmform_tools_intervention");
			break;
		}
		if (!szSelection.IsEmpty())
		{
			szSQL.Format(_T("select ss_code as id, ss_desc as name ") \
				_T(" from sys_sel where ss_id = '%s'")
				, szSelection);
			CHMSSelectionListDialog dlg(this);
			dlg.m_szSQL = szSQL;
			if (dlg.DoModal() == IDOK)
			{
				for (int i = 0; i < dlg.m_arraySelection.GetCount(); i++)
				{
					if (!szValue.IsEmpty())
					{
						szValue += _T("\n");
					}
					szValue.AppendFormat(_T("%s"), dlg.GetSelectionName(i));
				}
				if (nId == 1)
				{
					szSelection = _T("dungcu_chandoan");
				}
				else if (nId == 2)
				{
					szSelection = _T("dungcu_canthhiep");
				}
				if (!szSelection.IsEmpty())
				{
					SetValue(szSelection, szValue);
				}
			}
		}
	}
	if (szType == _T("DT_DINHDUONG"))
	{
		if (nId == 1)
		{
			CHMSNoteDialog dlg(this, VM_ADD);
			if (dlg.DoModal() == IDOK)
			{
				CString szSQL, szToDept = _T("C11");
				szSQL.Format(
					_T("HMS_SE_ORDER_ADD('%s',%ld,'%s','%s','%s','%s',%d,%ld)")
					, pMF->GetCurrentUser(), m_nDocumentNo, szType, pMF->GetCurrentDepartmentID()
					, szToDept, dlg.m_szNote, pMF->m_nRefIndex, m_nOptIdx);
				pMF->ExecDML(szSQL);
			}
		}
		if (nId == 2)
		{
			CHMSSurgeryOperationHtmlDialog dlg(this, _T("DT_PHIEUKHAMCHUYENKHOA"), FALSE, M_DINHDUONG);
			dlg.m_nOptIdx = m_nOptIdx;
			dlg.DoModal();
		}
	}
}

BOOL CHTMLayoutOldEx::handle_focus(HELEMENT he, FOCUS_PARAMS& params)
{
	_tprintf(_T("\nfocus"));
	dom::element e(params.target);
	CString szName;
	if (e.is_valid())
	{
		if (HasAttr(e, "name"))
		{
			szName = GetAttr(e, "name");
		}
		if (szName == _T("bmi"))
		{
			CalcBMI(e);
		}
	}
	return on_focus(he, params.target, params.cmd);
}

void CHTMLayoutOldEx::CalcBMI(dom::element& e)
{
	UpdateData(true);
	dom::element eh, ew;
	double h = 0, w = 0, bmi = 0;
	CString szBMI;
	eh = Find(_T("chieu_cao"));
	ew = Find(_T("can_nang"));
	if (eh.is_valid())
	{
		if (HasAttr(eh, "value"))
		{
			h = str2double(GetAttr(eh, "value"));
		}
	}
	if (ew.is_valid())
	{
		if (HasAttr(ew, "value"))
		{
			w = str2double(GetAttr(ew, "value"));
		}
	}
	if (h * w > 0)
	{
		h = h / 100;
		bmi = w / (h * h);
		szBMI.Format(_T("%.2f"), bmi);
		e.set_value((LPCTSTR)szBMI);
	}
}

void CHTMLayoutOldEx::CalcNutriPoint()
{
	UpdateData();
	if (m_szType != _T("DT_DINHDUONG"))
	{
		return;
	}
	CStringArray arrRadio;
	CString szPts;
	int nPts = 0;
	arrRadio.Add(_T("sut_can"));
	arrRadio.Add(_T("doi_khau_phan"));
	arrRadio.Add(_T("tieu_hoa"));
	arrRadio.Add(_T("hoat_dong"));
	arrRadio.Add(_T("stress_chuyen_hoa"));
	arrRadio.Add(_T("thuc_the"));
	for (int i = 0; i < arrRadio.GetCount(); i++)
	{
		GetValue(arrRadio[i], szPts);
		nPts += str2int(szPts);
	}
	if (nPts <= 3)
	{
		szPts = _T("SGA-C");
	}
	else if (nPts <= 8)
	{
		szPts = _T("SGA-B");
	}
	else
	{
		szPts = _T("SGA-A");
	}
	SetValue(_T("SGA_danh_gia"), szPts);
}

bool CHTMLayoutOldEx::LoadData_V2()
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	CString szWhere, szSQL;
	CString tmpStr;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	int nTreatTime = m_nOptIdx;

	if (nTreatTime <= 1)
		szWhere.Format(_T(" and (hde_treattime=%d or hde_treattime=0) "), nTreatTime);
	else
		szWhere.Format(_T(" and (hde_treattime=%d) "), nTreatTime);


	CString szFilter;
	szFilter.Empty();
	CString szSpecialInfo;
	bool res = pMF->GetEMRData(m_nDocumentNo, nTreatTime, _T("BENH_AN_CHUYEN_KHOA"), m_szForm, szFilter, szSpecialInfo);
	if (!res)
	{
		szSQL.Format(_T("SELECT to_char(hde_value) as hde_value FROM hms_doc_emr ") \
			_T(" WHERE hde_docno=%ld and hde_type IN('BENH_AN_CHUYEN_KHOA') ") \
			_T(" %s ") \
			_T(" ORDER BY hde_type, hde_refidx "), m_nDocumentNo, szWhere);
		rsl.ExecSQL(szSQL);


		while (!rsl.IsEOF())
		{
			rsl.GetValue(_T("hde_value"), tmpStr);
			szSpecialInfo.AppendFormat(_T("%s"), tmpStr);
			rsl.MoveNext();
		}
	}

	JSONVALUE jsData;
	jsData.Parse(szSpecialInfo);
	if (!szSpecialInfo.IsEmpty())
	{
		for (int i = 0; i < jsData.Size(); i++)
		{

			std::wstring name;
			name = jsData.order[i];
			tmpStr.Empty();
			jsData[name.c_str()].GetValue(tmpStr);
			SetValue(name.c_str(), tmpStr);
		}
	}
	return true;
}


