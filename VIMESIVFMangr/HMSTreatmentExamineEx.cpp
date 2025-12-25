#include "HMSTreatmentExamineEx.h"
#include "MainFrm.h"
static long _OnExamineListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentExamineEx*)pWnd)->OnExamineListLoadData();
} 
static void _OnExamineListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx*)pWnd)->OnExamineListDblClick();
} 
static void _OnExamineListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentExamineEx*)pWnd)->OnExamineListSelectChange(nOldItem, nNewItem);
} 
static int _OnExamineListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnExamineListDeleteItem();
}

static int _OnExamineListRefreshItemFnc(CWnd *pWnd){
	((CHMSTreatmentExamineEx*)pWnd)->RefreshData();
	 return 0;
}

static int _OnAddHMSTreatmentExamineExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnAddHMSTreatmentExamineEx();
} 
static int _OnEditHMSTreatmentExamineExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnEditHMSTreatmentExamineEx();
} 
static int _OnDeleteHMSTreatmentExamineExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnDeleteHMSTreatmentExamineEx();
} 
static int _OnSaveHMSTreatmentExamineExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnSaveHMSTreatmentExamineEx();
} 
static int _OnCancelHMSTreatmentExamineExFnc(CWnd *pWnd){
	 return ((CHMSTreatmentExamineEx*)pWnd)->OnCancelHMSTreatmentExamineEx();
} 
CHMSTreatmentExamineEx::CHMSTreatmentExamineEx(){

	m_nDlgWidth = 679;
	m_nDlgHeight = 643;
	SetDefaultValues();
}
CHMSTreatmentExamineEx::~CHMSTreatmentExamineEx(){
}
void CHMSTreatmentExamineEx::OnCreateComponents(){
	m_wndExamineList.Create(this,5, 5, 605, 580); 

}
void CHMSTreatmentExamineEx::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndExamineList.InsertColumn(0, _T("Description"), CFMT_TEXT, 575);

}
void CHMSTreatmentExamineEx::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndExamineList.SetEvent(WE_SELCHANGE, _OnExamineListSelectChangeFnc);
	m_wndExamineList.SetEvent(WE_LOADDATA, _OnExamineListLoadDataFnc);
	m_wndExamineList.SetEvent(WE_DBLCLICK, _OnExamineListDblClickFnc);
//	m_wndExamineList.AddEvent(1, _T("Delete"), _OnExamineListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndExamineList.AddEvent(1, _T("Refresh"), _OnExamineListRefreshItemFnc);
/*
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSTreatmentExamineExFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSTreatmentExamineExFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSTreatmentExamineExFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSTreatmentExamineExFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSTreatmentExamineExFnc, 0, 'T', VK_CONTROL);
*/
	SetMode(VM_NONE);

}
void CHMSTreatmentExamineEx::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSTreatmentExamineEx::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentExamineEx::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentExamineEx::SetDefaultValues(){


}
int CHMSTreatmentExamineEx::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiView::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode){
 		case VM_ADD: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			SetDefaultValues();
 			break;
 		case VM_EDIT: 
 			EnableControls(TRUE);
 			EnableButtons(TRUE, 3, 4, -1);
 			break;
 		case VM_VIEW: 
 			EnableControls(FALSE);
 			EnableButtons(FALSE, 3, 4, -1);
 			break;
 		case VM_NONE: 
 			EnableControls(FALSE);
 			EnableButtons(TRUE, 0, 6, -1);
 			SetDefaultValues();
 			break;
 		};
 		UpdateData(FALSE);
 		return nOldMode;
}
void CHMSTreatmentExamineEx::OnExamineListDblClick(){
	
} 
void CHMSTreatmentExamineEx::OnExamineListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentExamineEx::OnExamineListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 


long CHMSTreatmentExamineEx::OnExamineListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	if(pMF->m_nDocumentNo <= 0)
		return 0;
	m_wndExamineList.BeginLoad(); 
	int nCount = 0;
	szSQL.Format(_T("SELECT hsie_deptid as deptid, TO_CHAR(hsie_date, 'HH24:MI DD/MM/YYYY') as order_date, ") \
		_T(" get_username(hsie_doctor) as doctor, hsie_desc as description, hsie_para_res as para_res, ") \
		_T(" hsie_pulse as pulse, hsie_temperature as temperature, ") \
		_T(" HSIE_BLOODPRESSURE, HSIE_BLOODPRESSUREX, HSIE_BREATHINTERVAL, hsie_diet, hsie_nurseassistance  ") \
		_T(" FROM hms_siexam ") \
		_T(" WHERE hsie_docno=%ld and hsie_refidx=%ld and nvl(hsie_type,'DT')='DT' ORDER BY hsie_idx "), 
		pMF->m_nDocumentNo, pMF->m_nRefIndex);
	nCount = rs.ExecSQL(szSQL);
	CGridListItem* o = NULL;
	CGridListItem* o2 = NULL;
	CGridCell* cell = NULL;

	CString szDesc;
	CString tmpStr;
	CString szData;
	while(!rs.IsEOF()){ 
		rs.GetValue(_T("description"), szDesc);
		//if(!szDesc.IsEmpty())
		{
			o = new CGridListItem();

			o2 = new CGridListItem(RGB(230, 230, 230), RGB(0, 128, 192));
			rs.GetValue(_T("deptid"), szData);
			tmpStr.Format(_T("Khoa: %s"), szData);
			o2->Add(tmpStr, 200);
			rs.GetValue(_T("order_date"), szData);
			tmpStr.Format(_T("Ng\xE0y: %s"), szData);
			o2->Add(tmpStr, 150);

			rs.GetValue(_T("doctor"), szData);
			tmpStr.Format(_T("\x42\xE1\x63 s\x129: %s"), szData);
			o2->Add(tmpStr, 500);
			cell = new CGridCell();
			cell->AddRow(o2);
	
			int pulse, bloodpreL, bloodpreH, breathInterval;
			float temperature;
			CString szDiet, szNurseAssistance;

			rs.GetValue(_T("pulse"), pulse);
			rs.GetValue(_T("temperature"), temperature);
			rs.GetValue(_T("HSIE_BLOODPRESSURE"), bloodpreL);
			rs.GetValue(_T("HSIE_BLOODPRESSUREX"), bloodpreH);
			rs.GetValue(_T("HSIE_BREATHINTERVAL"), breathInterval);
			rs.GetValue(_T("para_res"), szData);
			rs.GetValue(_T("hsie_diet"), szDiet);
			rs.GetValue(_T("hsie_nurseassistance"), szNurseAssistance);
		
			CString szFuncs;
			szFuncs.Empty();
			if(pulse > 0)
			{
				szFuncs.AppendFormat(_T("  M: %d;"), pulse);
			}
			if(temperature > 0)
			{
				szFuncs.AppendFormat(_T("  T<sup>o</sup>: %.1f<sup>o</sup>;"), temperature);
			}
			
			if(bloodpreL+bloodpreH > 0)
			{

				szFuncs.AppendFormat(_T("  HA: %d/%d;"), bloodpreL, bloodpreH);
			}
			if(breathInterval > 0)
			{
				szFuncs.AppendFormat(_T("  NT: %d"), breathInterval);
			}
			
			if(!szFuncs.IsEmpty())
			{
				tmpStr.Format(_T("<b><i>\x43h\x1EE9\x63 n\x103ng s\x1ED1ng</i></b><br>  %s<br><b><i>\x44i\x1EC5n \x62i\x1EBFn</i></b><br>%s"), szFuncs, szDesc);
			}
			else
				tmpStr.Format(_T("<b><i>\x44i\x1EC5n \x62i\x1EBFn</i></b><br>%s"),szDesc);

			if(!szData.IsEmpty())
			{
				tmpStr.AppendFormat(_T("<br><b><i>K\x1EBFt qu\x1EA3 \x63\x1EADn l\xE2m s\xE0ng</i></b><br><i>%s</i>"),szData);
			}
			
			if(!szDiet.IsEmpty() || !szNurseAssistance.IsEmpty())
			{
				if(!szDiet.IsEmpty() && IsDigit(szDiet))
				{
					szDiet = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
				}
				if(!szNurseAssistance.IsEmpty() && IsDigit(szNurseAssistance))
				{
					szNurseAssistance = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssistance);
				}
				
				if(!szNurseAssistance.IsEmpty())
				{
					if(!szDiet.IsEmpty())
						szDiet.AppendFormat(_T("<br>"));
					szDiet.AppendFormat(_T("%s"), szNurseAssistance);
				}
				tmpStr.AppendFormat(_T("<br><b><i>\x43h\x1EBF \x111\x1ED9 \x103n v\xE0 h\x1ED9 l\xFD</i></b><br>%s"), szDiet);
			}
			tmpStr.Replace(_T("\r\n"), _T("<br>"));
			o2 = new CGridListItem();
			o2->Add(tmpStr, 575, CELLTYPE_HTML, DT_LEFT|DT_WORDBREAK);
			cell->AddRow(o2);

			o->Add(cell);

			m_wndExamineList.Add(o);
		}

		rs.MoveNext();
	}
	m_wndExamineList.EndLoad(); 
	return nCount;

}
int CHMSTreatmentExamineEx::OnAddHMSTreatmentExamineEx(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentExamineEx::OnEditHMSTreatmentExamineEx(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentExamineEx::OnDeleteHMSTreatmentExamineEx(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelHMSTreatmentExamineEx();
 	}
	return 0;
}
int CHMSTreatmentExamineEx::OnSaveHMSTreatmentExamineEx(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(GetMode() == VM_ADD){
 		//szSQL = m_tblTbl.GetInsertSQL();
 	}
 	else if(GetMode() == VM_EDIT){
 		CString szWhere;
 		szWhere.Format(_T(" WHERE"));
 		//szSQL = m_tblTbl.GetUpdateSQL(_T("createdby,createddate"));
 		szSQL += szWhere;
 	}
 _fmsg(_T("%s"), szSQL);
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret > 0)
 	{
 		//OnHMSTreatmentExamineExListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentExamineEx::OnCancelHMSTreatmentExamineEx(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CHMSTreatmentExamineEx::OnHMSTreatmentExamineExListLoadData(){
	return 0;
}


void CHMSTreatmentExamineEx::RefreshData()
{
	_tprintf(_T("\r\nRefresh"));
	OnExamineListLoadData();
}

void CHMSTreatmentExamineEx::OnResizeLayout()
{
	AddLayoutControls(WS_RESIZEX|WS_RESIZEY, 0, 0, 100, 100,&m_wndExamineList,NULL);

}