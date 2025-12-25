#include "HMSOverview.h"
#include "MainFrm.h"
#include "fml.h"
#include "RestClient.h"
int   kCurlSession = 0;
std::string kCertificationAuthorityFile = "";
std::mutex  kMtxCurlSession;




static void _OnTabSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CHMSOverview*)pWnd)->OnTabSelectChange(nOld, nNew);
} 
static int _OnAddHMSOverviewFnc(CWnd *pWnd){
	 return ((CHMSOverview*)pWnd)->OnAddHMSOverview();
} 
static int _OnEditHMSOverviewFnc(CWnd *pWnd){
	 return ((CHMSOverview*)pWnd)->OnEditHMSOverview();
} 
static int _OnDeleteHMSOverviewFnc(CWnd *pWnd){
	 return ((CHMSOverview*)pWnd)->OnDeleteHMSOverview();
} 
static int _OnSaveHMSOverviewFnc(CWnd *pWnd){
	 return ((CHMSOverview*)pWnd)->OnSaveHMSOverview();
} 
static int _OnCancelHMSOverviewFnc(CWnd *pWnd){
	 return ((CHMSOverview*)pWnd)->OnCancelHMSOverview();
} 
CHMSOverview::CHMSOverview(){

	m_nDlgWidth = 630;
	m_nDlgHeight = 570;
	SetDefaultValues();
}
CHMSOverview::~CHMSOverview(){
}
void CHMSOverview::OnCreateComponents(){
	m_wndOverview.Create(WS_CHILD|WS_VISIBLE, CRect(5, 5, 625, 320), this, GetDlgCtrlID()+1);
	m_wndTab.Create(this,5, 325, 625, 565); 

}
void CHMSOverview::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    m_wndTemplates.Create(this);
    m_wndTemplates.m_szType = L"MB";
    m_wndFall.Create(this);
    m_wndFall.m_szType = L"TN";
    m_wndNutrition.Create(this);
    m_wndNutrition.m_szType = L"DD";

    m_wndTab.Add(L"Mẫu biểu", &m_wndTemplates);
    m_wndTab.Add(L"Đánh giá trượt ngã", &m_wndFall);
    m_wndTab.Add(L"Sàng lọc dinh dưỡng", &m_wndNutrition);

    m_wndOverview.Load(L"./HTML/DT_OVERVIEW.html");

    m_wndTab.SetCurSel(0);
}
void CHMSOverview::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndTab.SetEvent(WE_SELCHANGE, _OnTabSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddHMSOverviewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditHMSOverviewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteHMSOverviewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveHMSOverviewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelHMSOverviewFnc, 0, 'T', VK_CONTROL);
    GetDataToScreen();

}
void CHMSOverview::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSOverview::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}

void CHMSOverview::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;

    

    dom::element root = m_wndOverview.GetRootElement();
    dom::element el = m_wndOverview.Find(L"content");
    utf8::ostream os;
    CString tmpStr;
    

    CRestClient http;
    std::string strUrl;
    std::string strData;
    CRestClient::HttpResponse response;

    CString szHost = pMF->GetProp(L"ReportHost");
    strUrl = fml::WideStringToUtf8(std::wstring(szHost));
    strUrl += "/warning";
    tmpStr.Format(_T("{\"docno\":%ld}"), pMF->m_nDocumentNo);
    strData = fml::WideStringToUtf8(std::wstring(tmpStr));
    http.Post(strUrl, http.m_Headers, strData, response);
    cout << response.iCode << ":" << response.strBody << endl;
    
    szSQL.Format(_T("SELECT * FROM hms_warning WHERE docno = %ld ORDER BY line"), pMF->m_nDocumentNo);
    rs.ExecSQL(szSQL);
    _debug(szSQL);
    tmpStr.Format(L"%ld", rs.GetRecordCount());
    m_wndOverview.SetValue(L"warning-count", tmpStr);
    while (!rs.IsEOF())
    {
        CString szDesc, szValue;
        rs.GetValue(L"description", szDesc);
        rs.GetValue(L"warning_value", szValue);
        os << L"<p>";
        os << L"<img class=\"icon\" alt=\"Icon\" src = \"data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAAACXBIWXMAAAsTAAALEwEAmpwYAAAFB0lEQVR4nO2YW0xcRRjHj7dGTbzEy5PR+GBifPBFE30oBUEoKhYrEUqh7MxesnIxFGhtKTvDlCKwZ85ugRbb0sa0hVoNbUVTgk1vqUQrBdOAtA1NC5Ziy92aULWUwJizcc7OurvsblnYJeFL/snJnm9mfv+dmTMXSVqMxViMoAcg5GGA6HaI6C2HsLJN/U1aKAExrYVYYaIAVnZJCyEAtr0OkDL1fwMQ02k9Vt6UwjkIIfcDRFs5dM2+fLZ9X4Fo4hc1RwrXAMWKkcOaS6xsuCeOjfbGOp41E0g2SOEY6aT6cYjpTQ7a2GRkbGSpQ98cNQkG6BAglU9K4RYQKZUcsoBuYXduRmoGJgYi2TqlRJjQdKsUTpGBrK8ATO9ywPafUzR4rnNnU5wGkDIJkf1VKVwCIHqMw8m7N7jBc8m1G8WhdFIKh4BISeJQhmLK+rvf82rg9+53HDk8X4fphyGFT863PwIx7eVAXx7J9ArPVX84S+gFpc9MyKMhMwARJRzmk7IyNn492qeB2/1vOXKFFbo4NPAW2/MQ09sc5Icz6S6gcWkmF4nvTp9eIy5ufwNS8eK8GwCYHuIQZBti08MRLpAJOqMG/z4wuLxTc0tqisSh1DCv8NCixPDG9cWUXe5MdBsqqzKhZiA1C7q9v/JroqOsNqEtdPm8wBNCHoRI6eQN7zmY63Gsmwp0mgHTugyPObUHcoW1gV40m2sfmnMDENnW8kYzSyvYrWtve4TLs6RrBvJRmsecP/tiWFZpuTihc+cUPqOw/GmIlVHeYPMx96HBhcpSNQO4PNVrXlOzXtx2/6HfVPbsnBkAmO7hjW2wETY5uMz7qluZohmgVcle8yYHl7FCOxEn9O45gYdEfk08qHS2J834vf98V5JmYEftzLkdbUniPmlKV2R9I8j47D6AlBbeSPXeAp8LVl3dB5qBuvqVPvO3frFe7IWzaptBw9chquOVm4jMBq7E+wRqPLJCM6A++8ofuhrPTJtlZ08UKxlBgTd8Kj8GkHKDV3z4O9dV1ZtONL+rGTjZ7H2DxwQ1fGsWzwyD5o3WJ2ZtAGJKeaX5snpQifILpvVMvGZAffanzD83olietVQcSvKs4I3E/hLA9A6vsPWnVX6BqLrQFqsZuNgW53e5H1tSRQMTBiS/fO//PqLNvLKyHZvc9jsz6VpXtGagryvG73LTwxGsfGehuEIfvyd4HbIlivud3y4k+A2haqwnSjMw1uM8H/tl/lICMxDnPgliZUVA8MmELIGIXuYV7D+UHRCAqomBCM2A+hxo+b1f54gGrgZ0NQkQtfDCOZ+Vs/F+3weVYGv8erTLwQdiuci/oVNkfw4gOs4Lnjq1Zt7h2X86fkInrtB/ZRDrCz4NQEy/4oUsVZhNDQXe/cHS1FAEQ1VInNAHZx46mC5VL2F5ge4O94OKv1K//auzAFudDVhbi3/rAPOgS+dXulwS67Ec5RE+ObnhAYBpB0/cWb92Vv+eCs4ncVqO920380M1+/PEXuhSD1Ueho6SLV7MjvbEhY2Bsd5Y9vGWCmcvWGiWC7yR2J8CiI7whKPf62c9ftVho5pQ4dtals+6vsYmo8vBx0xszzj/fUSrnQeVzezuDAeVUGliIJKtp84LYpXZOXkRHeMvzp/7KOSwzIvaW5PFuTDi0cBCERANQExtoQaCAYtS5yeUkCUAKYo4kcNVACvDKvy83CEtxmJI4R//AiBbAWtJSaNjAAAAAElFTkSuQmCC\" >";
        os << szDesc <<": ";
        os << L"<span>" << "<i>" << szValue << "</i>" << "</span>";
        os << L"</p>";
        rs.MoveNext();
    }

    szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno = %ld ORDER BY hdh_docno"), pMF->m_nPatientNo);

    rs.ExecSQL(szSQL);
    CString szOwner, szFamily, szDrugAllergy;

    while (!rs.IsEOF())
    {
        rs.GetValue(L"hdh_owner", tmpStr);
        if (!tmpStr.IsEmpty())
        {
            if (!szOwner.IsEmpty())
                szOwner.AppendFormat(L"; ");
            szOwner.AppendFormat(L"%s", tmpStr);
        }
        rs.GetValue(L"hdh_family", tmpStr);
        if (!tmpStr.IsEmpty())
        {
            if (!szFamily.IsEmpty())
                szFamily.AppendFormat(L"; ");
            szFamily.AppendFormat(L"%s", tmpStr);
        }
        rs.GetValue(L"hdh_drugallergy", tmpStr);
        if (!tmpStr.IsEmpty())
        {
            if (!szDrugAllergy.IsEmpty())
                szDrugAllergy.AppendFormat(L"; ");
            szDrugAllergy.AppendFormat(L"%s", tmpStr);
        }
        rs.MoveNext();
    }


    
    el.set_html(os.data(), os.length());
    el.update();
    /*
    dom::element t = root.find_first(L"%S", "tien_su_bt");
    t.set_value(fml::WideStringToUtf8(std::wstring(szOwner)));
    t = root.find_first(L"%S", "tien_su_gd");
    t.set_value(fml::WideStringToUtf8(std::wstring(szFamily)));
    t = root.find_first(L"%S", "tien_su_du");
    t.set_value(fml::WideStringToUtf8(std::wstring(szDrugAllergy)));
    */
    m_wndOverview.SetValue(L"tien_su_bt", szOwner);
    m_wndOverview.SetValue(L"tien_su_gd", szFamily);
    m_wndOverview.SetValue(L"tien_su_du", szDrugAllergy);

    m_wndOverview.RedrawWindow();
    

    SetMode(VM_VIEW);
}
void CHMSOverview::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSOverview::SetDefaultValues(){


}
int CHMSOverview::SetMode(int nMode){
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
void CHMSOverview::OnTabSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
    CHMSTemplates* pView = (CHMSTemplates*)m_wndTab.GetWindowAt(nNew);
    if (pView)
    {
        pView->RefreshData();
    }
} 
int CHMSOverview::OnAddHMSOverview(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
    int nSel = m_wndTab.GetCurSel();
    if (nSel < 0)
        return -1;
    
 	SetMode(VM_ADD);
	return 0;
}
int CHMSOverview::OnEditHMSOverview(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSOverview::OnDeleteHMSOverview(){
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
 		OnCancelHMSOverview();
 	}
	return 0;
}
int CHMSOverview::OnSaveHMSOverview(){
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
 		//OnHMSOverviewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSOverview::OnCancelHMSOverview(){
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
int CHMSOverview::OnHMSOverviewListLoadData(){
	return 0;
}


void CHMSOverview::OnResizeLayout()
{
    AddResize(&m_wndTab, 100, 100);
}

void CHMSOverview::RefreshData()
{
    GetDataToScreen();
    m_wndTemplates.RefreshData();

}