#include "HMSDocumentPreviewDialog.h"
#include "MainFrm.h"
static long _OnListLoadDataFnc(CWnd *pWnd){
	return ((CHMSDocumentPreviewDialog*)pWnd)->OnListLoadData();
} 
static void _OnListDblClickFnc(CWnd *pWnd){
	((CHMSDocumentPreviewDialog*)pWnd)->OnListDblClick();
} 
static void _OnListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSDocumentPreviewDialog*)pWnd)->OnListSelectChange(nOldItem, nNewItem);
} 
static int _OnListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSDocumentPreviewDialog*)pWnd)->OnListDeleteItem();
} 
static void _OnViewSelectFnc(CWnd *pWnd){
	CHMSDocumentPreviewDialog *pVw = (CHMSDocumentPreviewDialog *)pWnd;
	pVw->OnViewSelect();
} 
static void _OnViewSelectionSelectFnc(CWnd *pWnd){
	CHMSDocumentPreviewDialog *pVw = (CHMSDocumentPreviewDialog *)pWnd;
	pVw->OnViewSelectionSelect();
} 
static void _OnViewAllSelectFnc(CWnd *pWnd){
	CHMSDocumentPreviewDialog *pVw = (CHMSDocumentPreviewDialog *)pWnd;
	pVw->OnViewAllSelect();
} 
static int _OnAddHMSDocumentPreviewDialogFnc(CWnd *pWnd){
	 return ((CHMSDocumentPreviewDialog*)pWnd)->OnAddHMSDocumentPreviewDialog();
} 
static int _OnEditHMSDocumentPreviewDialogFnc(CWnd *pWnd){
	 return ((CHMSDocumentPreviewDialog*)pWnd)->OnEditHMSDocumentPreviewDialog();
} 
static int _OnDeleteHMSDocumentPreviewDialogFnc(CWnd *pWnd){
	 return ((CHMSDocumentPreviewDialog*)pWnd)->OnDeleteHMSDocumentPreviewDialog();
} 
static int _OnSaveHMSDocumentPreviewDialogFnc(CWnd *pWnd){
	 return ((CHMSDocumentPreviewDialog*)pWnd)->OnSaveHMSDocumentPreviewDialog();
} 
static int _OnCancelHMSDocumentPreviewDialogFnc(CWnd *pWnd){
	 return ((CHMSDocumentPreviewDialog*)pWnd)->OnCancelHMSDocumentPreviewDialog();
} 
CHMSDocumentPreviewDialog::CHMSDocumentPreviewDialog(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 505;
	m_nDlgHeight = 305;
	m_szTitle = _T("TI\x1EC0N S\x1EEC KH\xC1M");
	SetDefaultValues();
}
CHMSDocumentPreviewDialog::~CHMSDocumentPreviewDialog(){
}
void CHMSDocumentPreviewDialog::OnCreateComponents(){
	m_wndDocumentList.Create(this, _T("Document List"), 5, 5, 620, 520);
	m_wndList.Create(this,10, 30, 610, 515); 
	m_wndView.Create(this, _T("View"), 260, 530, 365, 555);
	//m_wndViewSelection.Create(this, _T("View Selection"), 300, 270, 395, 295);
	//m_wndViewAll.Create(this, _T("View All"), 400, 270, 495, 295);
}
void CHMSDocumentPreviewDialog::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);

//	m_wndList.SetCheckBox(true);
	m_wndList.InsertColumn(0, _T("Index"), CFMT_NUMBER, 40);
	m_wndList.InsertColumn(1, _T("Doc No"), CFMT_NUMBER, 80);
	m_wndList.InsertColumn(2, _T("Admit Date"), CFMT_DATE, 80);
	m_wndList.InsertColumn(3, _T("End Date"), CFMT_DATE, 80);
	m_wndList.InsertColumn(4, _T("ICD"), CFMT_TEXT, 70);
	m_wndList.InsertColumn(5, _T("Diagnostic"), CFMT_TEXT, 180);
	m_wndList.InsertColumn(6, _T("Doctor"), CFMT_TEXT, 150);

}
void CHMSDocumentPreviewDialog::OnSetWindowEvents()
{
	m_wndList.SetEvent(WE_SELCHANGE, _OnListSelectChangeFnc);
	m_wndList.SetEvent(WE_LOADDATA, _OnListLoadDataFnc);
	m_wndList.SetEvent(WE_DBLCLICK, _OnListDblClickFnc);
	//m_wndList.AddEvent(1, _T("Delete"), _OnListDeleteItemFnc, 0, VK_DELETE, 0);
	m_wndView.SetEvent(WE_CLICK, _OnViewSelectFnc);
	m_wndViewSelection.SetEvent(WE_CLICK, _OnViewSelectionSelectFnc);
	m_wndViewAll.SetEvent(WE_CLICK, _OnViewAllSelectFnc);
	OnListLoadData();
}
void CHMSDocumentPreviewDialog::OnDoDataExchange(CDataExchange* pDX){

}
void CHMSDocumentPreviewDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSDocumentPreviewDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSDocumentPreviewDialog::SetDefaultValues(){


}
int CHMSDocumentPreviewDialog::SetMode(int nMode){
 		int nOldMode = GetMode(); 
 		CGuiDialog::SetMode(nMode); 
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
void CHMSDocumentPreviewDialog::OnListDblClick(){
	OnViewSelect();
} 
void CHMSDocumentPreviewDialog::OnListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (nNewItem < 0)
		return;
	m_nDocNo = ToLong(m_wndList.GetItemText(nNewItem, 1));
} 
int CHMSDocumentPreviewDialog::OnListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CHMSDocumentPreviewDialog::OnListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, tmpStr;
	szSQL.Format(_T(" SELECT  hd_docno as docno,") \
					_T("         hd_admitdate as indate,") \
					_T("         hd_enddate as enddate, hd_doctor as doctor,") \
					_T("         hd_icd as icd, hd_diagnostic as diagnostic") \
					_T(" FROM hms_doc") \
					_T(" WHERE hd_patientno = %ld ORDER BY hd_admitdate desc, hd_docno"), pMF->m_nPatientNo);
	m_wndList.BeginLoad(); 
	int nCount, nIdx = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		nIdx++;
		tmpStr.Format(_T("%d"), nIdx);
		m_wndList.AddItems(
			tmpStr, 
			rs.GetValue(_T("DocNo")), 
			rs.GetValue(_T("indate")), 
			rs.GetValue(_T("EndDate")), 
			rs.GetValue(_T("ICD")),
			rs.GetValue(_T("diagnostic")),
			pMF->GetDoctorName(rs.GetValue(_T("doctor"))), NULL);
		rs.MoveNext();
	}
	m_wndList.EndLoad(); 
	return nCount;
}
void CHMSDocumentPreviewDialog::OnViewSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();	
	OnPrintExaminationSheet(m_nDocNo);
} 
void CHMSDocumentPreviewDialog::OnViewSelectionSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//docno_list.clear();
	//for (int i = 0;i<m_wndList.GetItemCount();i++)
	//{
	//	if (m_wndList.GetCheck(i))
	//		docno_list.push_back(ToLong(m_wndList.GetItemText(i, 1)));
	//}
	//pMF->OnPrintExaminationSheet2(docno_list);
} 
void CHMSDocumentPreviewDialog::OnViewAllSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	/*docno_list.clear();
	for (int i = 0;i<m_wndList.GetItemCount();i++)
	{
		docno_list.push_back(ToLong(m_wndList.GetItemText(i, 1)));
	}
	pMF->OnPrintExaminationSheet2(docno_list);	*/
} 
int CHMSDocumentPreviewDialog::OnAddHMSDocumentPreviewDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CHMSDocumentPreviewDialog::OnEditHMSDocumentPreviewDialog(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSDocumentPreviewDialog::OnDeleteHMSDocumentPreviewDialog(){
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
 		OnCancelHMSDocumentPreviewDialog(); 
 	}
	return 0;
}
int CHMSDocumentPreviewDialog::OnSaveHMSDocumentPreviewDialog(){
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
 		//OnHMSDocumentPreviewDialogListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CHMSDocumentPreviewDialog::OnCancelHMSDocumentPreviewDialog(){
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
int CHMSDocumentPreviewDialog::OnHMSDocumentPreviewDialogListLoadData(){
	return 0;
}
void CHMSDocumentPreviewDialog::OnPrintExaminationSheet(int nDocumentNo, bool bPrintPrescription, bool bPreview, bool bDirect, bool bRequest)
{	CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd(); 
	vector<long>::iterator iter;
	CString szSQL;
	CString szName;
	CReport rpt;
	long nOrderID, oldOrderID = 0;
	int nRoomID, nOldRoomID = -1;
	CString szUsage, szItemID;
	int nItem = 0;



	CRecord rs(&pMF->m_db);
	CRecord rsr(&pMF->m_db);
	CRecord rsi(&pMF->m_db);
	CRecord rsf(&pMF->m_db);
	CRecord rsu(&pMF->m_db);

	CReportSection* detail=NULL;
	CReportSection* testDetail=NULL;
	CReportSection* grp=NULL;
	CReportSection* grpt2=NULL;
	CString tmpStr, szTemp, szDoctor, szDiagnotic, szSex, szDoctorRs;
	CString szRemark, szConclusion, szResult, szID;
	long nPatientNo;

	if (bRequest)
	{
		if(!rpt.Init(_T("Reports\\HMS\\BENHAN\\PHIEUKHAMBENH_YC.RPT")))
			return;
	}
	else
	{
		if(!rpt.Init(_T("Reports\\HMS\\BENHAN\\PHIEUKHAMBENH.RPT")))
			return;
	}

	grp = rpt.GetGroupHeader(1);
	detail = rpt.AddDetail(grp);
//Lay thong tin benh nhan
	
	szSQL.Format(_T("  select trim(hp_surname||' '||hp_midname||' '||hp_firstname) as PatientName,") \
				_T("            hms_getage(trunc_date(hd_admitdate), hp_birthdate) as Age, ") \
				_T("            Get_SysSel_desc('sys_sex', hp_sex) as Sex,") \
				_T("            hms_getaddress(nvl(hd_provid, hp_provid), nvl(hd_distid, hp_distid), nvl(hd_villid, hp_villid)) as Address,") \
				_T("            hd_contactaddr as dtladdress,") \
				_T("            hp_workplace as workplace,") \
				_T("            case when length(hd_icd) > 0 then (select distinct hi_name from hms_icd where hi_icd=hd_icd) else cast('' as NVARCHAR2(1)) end as diagnostic,") \
				_T("            hd_admitdate as examdate, hd_indept,") \
				_T("            GET_SYSSEL_DESC('hms_rank', hp_rank) as ranks,") \
				_T("            GET_SYSSEL_DESC('hms_position', hp_position) as position,") \
				_T("            hd_doctor as doctor,") \
				_T("            hc_cardno as cardno,") \
				_T("            ho_desc as objname,") \
				_T("            hp_patientno as patientno, hd_admitdept ") \
				_T("      FROM hms_patient") \
				_T("      LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
				_T("      LEFT JOIN hms_object ON(ho_id=hd_object)") \
				_T("      LEFT JOIN hms_card ON(hc_patientno=hp_patientno AND hc_idx=hd_cardidx AND hc_cardno=hd_cardno)") \
				_T("      WHERE hd_docno=%ld"), nDocumentNo);

	rs.ExecSQL(szSQL);
	//_fmsg(_T("%s"), szSQL);
	if(rs.IsEOF())
	{
		ShowMessageBox(_T("No data"));
		return;
	}

	
	//rpt.SetPrintCallback(_OnCheckPrintExaminationSheetFnc);

	rs.GetValue(_T("sexid"), szSex);
	rs.GetValue(_T("doctor"), szDoctorRs);
	rs.GetValue(_T("patientno"), nPatientNo);

	detail->SetValue(_T("health_service"), pMF->m_CompanyInfo.sc_pname);
	detail->SetValue(_T("hospital_name"), pMF->m_CompanyInfo.sc_name);
//			tmpStr.Format(_T("Kho\x61 kh\xE1m \x62\x1EC7nh %s"), rs.GetValue(_T("hd_ward")));
	rs.GetValue(_T("hd_admitdept"), tmpStr);
	StringUpper(pMF->GetDepartmentName(tmpStr), szName);
	detail->SetValue(_T("Department"), szName);
	detail->SetValue(_T("DocumentNo"), nDocumentNo);
	szName = detail->GetValue(_T("examdate"));
	tmpStr.Format(szName, rs.GetValue(_T("examdate")).Mid(11,5), CDate::Convert(rs.GetValue(_T("examdate")), yyyymmdd, ddmmyyyy));				detail->SetValue(_T("ExamDate"), tmpStr);

	StringUpper(rs.GetValue(_T("PatientName")), tmpStr);

	detail->SetValue(_T("PatientName"), tmpStr);
	detail->SetValue(_T("Age"), rs.GetValue(_T("Age")));
	detail->SetValue(_T("Object"), rs.GetValue(_T("objname")));

	//detail->SetValue(_T("Sex"), rs.GetValue(_T("Sex"))==_T("F")?_xArray[2]:_xArray[3]);
	detail->SetValue(_T("Sex"), rs.GetValue(_T("Sex")));
	detail->SetValue(_T("Address"), rs.GetValue(_T("Address")));
	detail->SetValue(_T("AddressDtl"), rs.GetValue(_T("DtlAddress")));
	detail->SetValue(_T("Workplace"), rs.GetValue(_T("Workplace")));
	detail->SetValue(_T("Rank"), rs.GetValue(_T("ranks")));
	detail->SetValue(_T("Position"), rs.GetValue(_T("position")));
	detail->SetValue(_T("CardNo"), rs.GetValue(_T("CardNo")));
	detail->SetValue(_T("InDept"), rs.GetValue(_T("hd_indept")));

	szDiagnotic = rs.GetValue(_T("diagnostic"));
	detail->SetValue(_T("Diagnostic"), rs.GetValue(_T("diagnostic")));

	//Lay thong tin phieu kham
	szSQL.Format(_T("SELECT he_roomid, he_deptid, ") \
		         _T("trim(he_medical) as medical, ") \
				 _T("trim(he_examine) as examine, he_diagnostic ") \
		         _T("FROM hms_exam WHERE he_docno=%ld ORDER BY he_receptidx"), nDocumentNo);
	rs.ExecSQL(szSQL);

	CString szRoomName;
	szRoomName.Empty();

	while (!rs.IsEOF())
	{			
		if (szRoomName.IsEmpty())
		{
			rs.GetValue(_T("he_roomid"), nRoomID);
			rs.GetValue(_T("he_deptid"), tmpStr);
			szRoomName.Format(_T("%s"), pMF->GetRoomName(tmpStr, nRoomID));
			detail->SetValue(_T("RoomName"), szRoomName);
		}

		tmpStr = detail->GetValue(_T("Pathological"));
		if (!tmpStr.IsEmpty())
			tmpStr += _T("\r\n");
		tmpStr.AppendFormat(_T("%s"), rs.GetValue(_T("medical")));
		if (!tmpStr.IsEmpty())
			detail->SetValue(_T("Pathological"), tmpStr);

		tmpStr = detail->GetValue(_T("Summarizetest"));
		if (!tmpStr.IsEmpty())
			tmpStr += _T("\r\n");
		tmpStr.AppendFormat(_T("%s"), rs.GetValue(_T("he_diagnostic")));
		if (!tmpStr.IsEmpty())
			detail->SetValue(_T("Summarizetest"), tmpStr);

		tmpStr = detail->GetValue(_T("Body"));
		if (!tmpStr.IsEmpty())
			tmpStr += _T("\r\n");
		tmpStr.AppendFormat(_T("%s"), rs.GetValue(_T("examine")));
		if (!tmpStr.IsEmpty())
			detail->SetValue(_T("Body"), tmpStr);

		rs.MoveNext();
	}

	tmpStr.Empty();
	szRoomName.Empty();
	nRoomID = 0;

	szSQL.Format(_T(" SELECT * FROM") \
				_T(" (") \
				_T("  SELECT * FROM hms_exam ") \
				_T("  WHERE he_docno=%ld") \
				_T("        AND (he_pulse+he_temperature+he_bloodpressure+") \
				_T("             he_bloodpressurex+he_breathinterval+he_weight+he_height) > 0") \
				_T("  ORDER BY he_receptno desc") \
				_T(" )") \
				_T(" WHERE rownum < 2"), m_nDocNo);

	rs.ExecSQL(szSQL);

	int herthInterva=0, bpress=0, bpressx=0, temparature=0, breathinterval=0, weight=0, height=0;
	
	CString szPathological, szPartBody, szBody, szOwner, szFamily, szSummarizeTest, szFNorm, szMNorm, szUnit;

	if (!rs.IsEOF()){
		//Nhip tim
		rs.GetValue(_T("he_pulse"), tmpStr);
		if(tmpStr == _T("0")) tmpStr= _T(" ");
		detail->Format(_T("Hrtinterval"), tmpStr);

		//Nhiet do
		rs.GetValue(_T("he_temperature"), tmpStr);
		if(tmpStr == _T("0")) tmpStr= _T(" ");
		detail->Format(_T("Temperature"), tmpStr);
		

		rs.GetValue(_T("he_bloodpressure"), tmpStr);
		rs.GetValue(_T("he_bloodpressurex"), szName);
		if(tmpStr == _T("0")) tmpStr= _T(" ");
		if(szName == _T("0")) szName= _T(" ");
		detail->Format(_T("Bpress"), tmpStr, szName);
		
		
		rs.GetValue(_T("he_breathinterval"), tmpStr);
		if(tmpStr == _T("0")) tmpStr= _T(" ");
		detail->Format(_T("Breathinterval"), tmpStr);


		
		rs.GetValue(_T("he_height"), tmpStr);
		if(tmpStr == _T("0")) tmpStr= _T(" ");
		detail->Format(_T("Height"), tmpStr);

		
		rs.GetValue(_T("he_weight"), tmpStr);
		if(tmpStr == _T("0")) tmpStr= _T(" ");
		detail->Format(_T("Weight"), tmpStr);

	}
	else
	{
		detail->Format(_T("Hrtinterval"), _T(""));
		//Nhiet do
		detail->Format(_T("Temperature"), _T(""));
		detail->Format(_T("Bpress"), _T(""), _T(""));
		detail->Format(_T("Breathinterval"), _T(""));
		detail->Format(_T("Height"), _T(""));
		detail->Format(_T("Weight"), _T(""));
	}

	szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld and hdh_docno=%ld "), nPatientNo, nDocumentNo);
	rs.ExecSQL(szSQL);
	if(rs.IsEOF())
	{
		szSQL.Format(_T("SELECT * FROM hms_disease_hist WHERE hdh_patientno=%ld and (hdh_docno = 0 or hdh_docno is null) "), nPatientNo);
		rs.ExecSQL(szSQL);
	}
	if(!rs.IsEOF()){
		detail->SetValue(_T("Owner"), rs.GetValue(_T("hdh_owner")));
		detail->SetValue(_T("Family"), rs.GetValue(_T("hdh_family")));
	}

	grp = rpt.GetGroupHeader(13);
	if (grp)
	{
		testDetail = rpt.AddDetail(grp);
		//detail->SetValue(_T("xxx"), _T("XXX"));
	}

	// Ket luan benh
	grp = rpt.GetGroupHeader(6);
	detail = rpt.AddDetail(grp);

	szSQL.Format(_T("select hd_conclusion, ") \
					_T("hd_doctor, ") \
				    _T("(select distinct su_name from sys_user where hd_doctor=su_userid) as doctorname ") \
					_T("from hms_doc where hd_docno=%ld "), nDocumentNo);
	rs.ExecSQL(szSQL);

	rs.GetValue(_T("hd_doctor"), szDoctor);
	szConclusion = szDiagnotic;

//	if(!szConclusion.IsEmpty())
//		szConclusion += _T("\r\n");
	szConclusion.Format(_T("%s"), rs.GetValue(_T("hd_conclusion")));
	detail->SetValue(_T("Conclusion"), szConclusion);
	detail->SetValue(_T("hd_icd10"), rs.GetValue(_T("ICD10")));


	//In don thuoc
	if(bPrintPrescription)
	{
		// Ket luan benh

		grp = rpt.GetGroupHeader(12);
		if (grp)
			rpt.AddDetail(grp);

		szSQL.Format(_T("SELECT hpo_orderid as orderid, ") \
					_T("hpo_orderstatus, ") \
					_T("hpo_doctor, ") \
					_T("hpo_storage_id, ") \
					_T("hpo_orderdate, ") \
					_T("hpo_roomid as roomid, ") \
					_T("hpo_advice as advice, ") \
					_T("get_storagename(hpo_storage_id) as stockname ") \
					_T("FROM hms_pharmaorder ") \
					_T("WHERE hpo_docno=%ld AND hpo_ordertype='P' ") \
					_T(" and hpo_doctype ='PPO' ") \
					_T("ORDER BY hpo_doctor, hpo_roomid, hpo_orderid "), nDocumentNo);

		rs.ExecSQL(szSQL);

		//_msg(_T("%s"), szSQL);
		CString szDoctorOld;
		bool bCheck = false;

		while (!rs.IsEOF())
		{
			rs.GetValue(_T("roomid"), nRoomID);
			rs.GetValue(_T("orderid"), nOrderID);
			rs.GetValue(_T("hpo_doctor"), szDoctor);

			if (!szDoctor.IsEmpty() && szDoctor != szDoctorOld)
			{
				/*szSQL.Format(_T("SELECT hrl_name as name FROM hms_roomlist WHERE hrl_deptid='%s' AND hrl_id=%d"),
							m_szDept, nRoomID);
				rsr.ExecSQL(szSQL);*/

				/*grp = rpt.GetGroupHeader(7);
				detail = rpt.AddDetail(grp);
				detail->SetValue(_T("Doctor"), GetDoctorName(szDoctor));*/				

				/*szSQL.Format(_T("SELECT he_icd10 as icd, ") \
							_T("he_diagnostic || ' [' || he_icd10 ||']' as Diagnostic ") \
							_T("FROM hms_exam ") \
							_T("WHERE he_docno=%ld ") \
							_T("AND he_receptidx=(SELECT he_receptidx FROM hms_exam WHERE he_docno=%ld AND he_deptid='%s' AND he_roomid=%d AND rownum < 2)"),
							nDocumentNo, nDocumentNo, m_szDept, nRoomID);
				rsi.ExecSQL(szSQL);


				if (!rsi.IsEOF())
				{
					tmpStr = rsi.GetValue(_T("Diagnostic"));
					if (!tmpStr.IsEmpty())
						detail->SetValue(_T("ICD"), tmpStr);
				}*/

				szDoctorOld = szDoctor;
				nItem = 0;
				bCheck = true;
			}


			grp = rpt.GetGroupHeader(8);
			detail = rpt.AddDetail(grp);

			//if (nOrderID > 0 && nOrderID != oldOrderID)
			//{
			//	grp = rpt.GetGroupHeader(7);
			//	detail = rpt.AddDetail(grp);
			//	if (!rs.GetValue(_T("advice")).IsEmpty())
			//	{
			//		grp = rpt.GetGroupHeader(10);
			//		detail = rpt.AddDetail(grp);
			//		detail->SetValue(_T("Advice"), rs.GetValue(_T("advice")));
			//	}
			//	//detail->SetValue(_T("Advice"), rs.GetValue(_T("advice")));
			//	oldOrderID = nOrderID;
			//	nItem = 0;
			//}

			szSQL.Format(_T("SELECT hpol_line, hpol_product_id, hpol_productname, hpol_productuom, ") \
						_T(" sum(hpol_qtyissue) as hpol_qtyorder, ")\
						_T(" sum(hpol_qtyissue*hpol_unitprice) as hpol_amount ") \
						_T(" FROM hms_pharmaorderline_view WHERE hpol_orderid=%ld ") \
						_T(" GROUP BY hpol_line, hpol_product_id,hpol_productname, hpol_productuom ") \
						_T(" ORDER BY hpol_line"), nOrderID);

			rsf.ExecSQL(szSQL);

			while (!rsf.IsEOF())
			{
				grp = rpt.GetGroupHeader(10);
				detail = rpt.AddDetail(grp);

				tmpStr.Format(_T("%d"), ++nItem);
				detail->SetValue(_T("1"), tmpStr);
				rsf.GetValue(_T("hpol_productname"), tmpStr);
				detail->SetValue(_T("2"), tmpStr);
				rsf.GetValue(_T("hpol_productuom"), tmpStr);
				detail->SetValue(_T("3"), tmpStr);
				rsf.GetValue(_T("hpol_qtyorder"), tmpStr);
				detail->SetValue(_T("4"), tmpStr);

				long nProductID;
				rsf.GetValue(_T("hpol_product_id"), nProductID);

				szSQL.Format(_T("SELECT hpou_dousage ") \
					_T("FROM hms_pharmaorder_usage ") \
					_T("WHERE hpou_orderid=%ld and hpou_product_id=%ld "), 
							nOrderID, nProductID);
				rsu.ExecSQL(szSQL);
				szUsage.Empty();
				if (!rsu.IsEOF())
					rsu.GetValue(_T("hpou_dousage"), szUsage);
				if (!szUsage.IsEmpty())
				{
					grp = rpt.GetGroupHeader(9);
					detail = rpt.AddDetail(grp);
					detail->SetValue(_T("Indication"), szUsage);
				}
				rsf.MoveNext();
			}
			rs.MoveNext();

			if (bCheck)
			{
				grp = rpt.GetGroupHeader(7);
				detail = rpt.AddDetail(grp);
				detail->SetValue(_T("Doctor"), pMF->GetDoctorName(szDoctor));
				bCheck = false;
			}
		}
	}
				
	int nLine = 0;
	int nIndex = 1;

	szSQL.Format(_T("SELECT distinct hfg_name as groupname, ") \
				_T("hfg_id as groupid, hpc_status ") \
				_T("FROM hms_testorder ") \
				_T("LEFT JOIN hms_fee_group ON(hfg_id=hpc_groupid) ") \
				_T("WHERE hpc_docno=%ld ") \
				_T("and hpc_status IN('T','S') "), nDocumentNo);

	rs.ExecSQL(szSQL);


	int lineIdx = -1;
	CString szPrintMethod, szStatusOrder;
	if(!rs.IsEOF())
	{

		grp = rpt.GetGroupHeader(2);
		detail = rpt.AddDetail(grp);

		grp = rpt.GetGroupHeader(3);
		detail = rpt.AddDetail(grp);
		detail->GetItem(_T("OrderName"))->SetBold(true);
		tmpStr.Format(_T("%d. \x58\xE9t nghi\x1EC7m"), nIndex++);
		detail->SetValue(_T("OrderName"), tmpStr);

		nLine = 1;
		//xet nghiem cap 2
		while(!rs.IsEOF())
		{
			szPrintMethod = rs.GetValue(_T("printmethod"));
			tmpStr.Format(_T(" * %s"), rs.GetValue(_T("GroupName")));
			grp = rpt.GetGroupHeader(3);
			detail = rpt.AddDetail(grp);
			detail->GetItem(0)->SetStyle(REPORT_BORDER);

			rs.GetValue(_T("hpc_status"), szStatusOrder);				
			
			detail->SetValue(_T("OrderName"), tmpStr);
			szSQL.Format(_T("SELECT hfl_groupid as groupid, hfl_name as name, hfl_unit as unit, ") \
						_T(" hfl_index1 as fnorm, hfl_index2 as mnorm, hpcl_result as result, hpcl_note as note ") \
						_T("FROM hms_testorder LEFT JOIN hms_testorderline ON(hpcl_orderid=hpc_orderid) ") \
						_T("LEFT JOIN hms_fee_list ON(hfl_typeid='T' AND hpcl_itemid=hfl_feeid) ") \
						_T("WHERE hpc_docno=%ld AND hpc_groupid='%s' ORDER BY hfl_groupid, hpcl_orderlineid"),nDocumentNo,  rs.GetValue(_T("groupid")));
			nLine=1;
			rsf.ExecSQL(szSQL);
			// print result
			while(!rsf.IsEOF())
			{
				grp = rpt.GetGroupHeader(5);
				detail = rpt.AddDetail(grp);
				tmpStr.Format(_T("%d"), nLine++);
				detail->SetValue(_T("Col1"), tmpStr);
				rsf.GetValue(_T("fnorm"), szFNorm);
				rsf.GetValue(_T("mnorm"), szMNorm);
				rsf.GetValue(_T("unit"), szUnit);				

				if (szFNorm.IsEmpty() || szMNorm.IsEmpty() && szUnit.IsEmpty())
					tmpStr.Empty();
				else{
					if(szSex == _T("F"))
						tmpStr.Format(_T("%s"), rsf.GetValue(_T("fnorm")));
					else
						tmpStr.Format(_T("%s"), rsf.GetValue(_T("mnorm")));
				}

				detail->SetValue(_T("Col4"), tmpStr);
				detail->SetValue(_T("Col2"), rsf.GetValue(_T("name")));
				detail->SetValue(_T("Col3"), rsf.GetValue(_T("unit")));				
				
				if(szStatusOrder == _T("T")){
					detail->SetValue(_T("Col5"), rsf.GetValue(_T("result")));
					detail->SetValue(_T("Col6"), rsf.GetValue(_T("note")));
				}

				rsf.MoveNext();
			}

/*
			int nTotalItem = (rsf.GetRecordCount()+1)/2;
			int i =0;
			int nCurLine = nLine;
			if(nTotalItem > 0)
				nCurLine+=1;
			for (i =0; i < nTotalItem; i++)
			{
				detail = rpt.AddDetail(grp);
				nLine++;
				detail->SetValue(_T("Col1"), rsf.GetValue(_T("desc")));
				detail->SetValue(_T("Col2"), rsf.GetValue(_T("result")));
				rsf.MoveNext();
			}

			for (i = 0; i < nTotalItem; i++){
				detail = rpt.GetDetail(nCurLine+i);
				if(!rsf.IsEOF())
				{
					detail->SetValue(_T("Col3"), rsf.GetValue(_T("desc")));
					detail->SetValue(_T("Col4"), rsf.GetValue(_T("result")));
					rsf.MoveNext();
				}
				else
				{
					detail->SetValue(_T("Col3"), _T(""));
					detail->SetValue(_T("Col4"), _T(""));
				}
			}
*/
			
			rs.MoveNext();
		}
	}

	CString szSummaryResult;
	szSummaryResult.Empty();
	
	szSQL.Format(_T(" SELECT hpc_orderid, ") \
				_T("         hfg_id as groupid, ") \
				_T("         hpcl_note as note,") \
				_T("         hfl_name as ordername,") \
				_T("         Tbl.hpr_desc as result") \
				_T("  FROM hms_pacsorder") \
				_T("  LEFT JOIN hms_pacsorderline ON(hpc_orderid=hpcl_orderid)") \
				_T("  LEFT JOIN") \
				_T("  (") \
				_T("     SELECT * FROM hms_pacs_result") \
				_T("     WHERE lower(trim(hpr_name))='conclusion'") \
				_T("  ) Tbl ON(Tbl.hpr_orderid=hpcl_orderid AND Tbl.hpr_itemid=hpcl_itemid)") \
				_T("  LEFT JOIN hms_fee_group ON(hfg_id=hpc_groupid)") \
				_T("  LEFT JOIN hms_fee_list ON(hfl_typeid='T' and hfl_feeid=hpcl_itemid)") \
				_T("  WHERE hpc_docno=%ld AND hpc_status<>'O' AND substr(hfg_id, 1, 2)='B2'") \
				_T("  ORDER by hpc_orderid, hfg_id"), nDocumentNo);

	//_debug(_T("%s"), szSQL);


	rs.ExecSQL(szSQL);
	
	grpt2 = rpt.GetGroupHeader(4);
	grp = rpt.GetGroupHeader(3);


	szRemark.Empty();
	szConclusion.Empty();
	//long oldOrderID=0;

	nOrderID = oldOrderID = 0;

	if (!rs.IsEOF())
	{
		grp = rpt.GetGroupHeader(3);
		detail = rpt.AddDetail(grp);
		detail->GetItem(_T("OrderName"))->SetBold(true);
		tmpStr.Format(_T("%d. \x43h\x1EA9n \x111o\xE1n h\xECnh \x1EA3nh"), nIndex++);
		detail->SetValue(_T("OrderName"), tmpStr);
	}

	

	while(!rs.IsEOF())
	{
		szResult.Empty();
		//nLine++;
		//rs.GetValue(_T("id"), szID);
		//rs.GetValue(_T("hpc_orderid"), nOrderID);
/*
		if(szID == _T("09") && nOrderID != oldOrderID){
			rs.GetValue(_T("remark"), szRemark);
			rs.GetValue(_T("conclusion"), szConclusion);
			oldOrderID = nOrderID;
		}

		if(!szConclusion.IsEmpty() && oldOrderID != nOrderID )
		{
			detail = rpt.AddDetail(grp);
			detail->GetItem(_T("OrderName"))->SetFaceName(_T(".VnTime"));
			detail->GetItem(_T("OrderName"))->SetBold(true);
			detail->GetItem(_T("OrderName"))->SetBkColor(RGB(255, 255, 255));
			detail->SetValue(_T("OrderName"), _T("NhËn xÐt chung:")+szRemark);
			detail = rpt.AddDetail(grpt2);
			detail->GetItem(_T("ResultLabel"))->SetText(_T("KÕt luËn chung:"));
			detail->GetItem(_T("ResultLabel"))->SetBold(true);
			detail->SetValue(_T("TestResult"), szConclusion);

			szRemark.Empty();
			szConclusion.Empty();
		}
*/

		detail = rpt.AddDetail(grp);
		tmpStr.Format(_T(" * %s"), rs.GetValue(_T("ordername")));
		detail->SetValue(_T("OrderName"), tmpStr);

		rs.GetValue(_T("result"), szResult);

		if(!szResult.IsEmpty())
		{
			detail = rpt.AddDetail(grpt2);
			detail->SetValue(_T("TestResult"), szResult);

			if (!szSummaryResult.IsEmpty())
			{
				szSummaryResult.AppendFormat(_T("\r\n"));
			}
			szSummaryResult.AppendFormat(_T("+ %s: %s"), rs.GetValue(_T("ordername")), szResult);
		}
		rs.MoveNext();
	}
/*
	if(!szConclusion.IsEmpty())
	{
			detail = rpt.AddDetail(grp);
			detail->GetItem(_T("OrderName"))->SetFaceName(_T(".VnTime"));
			detail->GetItem(_T("OrderName"))->SetBold(true);
			detail->GetItem(_T("OrderName"))->SetBkColor(RGB(255, 255, 255));
			detail->SetValue(_T("OrderName"), _T("NhËn xÐt chung:")+szRemark);
			detail = rpt.AddDetail(grpt2);
			detail->GetItem(_T("ResultLabel"))->SetText(_T("KÕt luËn chung:"));
			detail->GetItem(_T("ResultLabel"))->SetBold(true);
			detail->SetValue(_T("TestResult"), szConclusion);
			szRemark.Empty();
			szConclusion.Empty();
	}
*/

	szSQL.Format(_T(" SELECT hpc_orderid, ") \
				_T("         hfg_id as groupid, ") \
				_T("         hpcl_note as note,") \
				_T("         hfl_name as ordername,") \
				_T("         Tbl.hpr_desc as result") \
				_T("  FROM hms_pacsorder") \
				_T("  LEFT JOIN hms_pacsorderline ON(hpc_orderid=hpcl_orderid)") \
				_T("  LEFT JOIN") \
				_T("  (") \
				_T("     SELECT * FROM hms_pacs_result") \
				_T("     WHERE lower(trim(hpr_name))='conclusion'") \
				_T("  ) Tbl ON(Tbl.hpr_orderid=hpcl_orderid AND Tbl.hpr_itemid=hpcl_itemid)") \
				_T("  LEFT JOIN hms_fee_group ON(hfg_id=hpc_groupid)") \
				_T("  LEFT JOIN hms_fee_list ON(hfl_typeid='T' and hfl_feeid=hpcl_itemid)") \
				_T("  WHERE hpc_docno=%ld AND hpc_status<>'O' AND substr(hfg_id, 1, 2)='B3'") \
				_T("  ORDER by hpc_orderid, hfg_id"), nDocumentNo);

	rs.ExecSQL(szSQL);
	grpt2 = rpt.GetGroupHeader(4);
	grp = rpt.GetGroupHeader(3);

	
	szRemark.Empty();
	szConclusion.Empty();

	if(!rs.IsEOF())
	{
		grp = rpt.GetGroupHeader(3);
		detail = rpt.AddDetail(grp);
		detail->GetItem(_T("OrderName"))->SetBold(true);
		tmpStr.Format(_T("%d. Th\x103m \x64\xF2 \x63h\x1EE9\x63 n\x103ng"), nIndex++);
		detail->SetValue(_T("OrderName"), tmpStr);
	}


	while (!rs.IsEOF())
	{
		szResult.Empty();
		//nLine++;
		//rs.GetValue(_T("id"), szID);
		//rs.GetValue(_T("hpc_orderid"), nOrderID);

		detail = rpt.AddDetail(grp);
		tmpStr.Format(_T(" * %s"), rs.GetValue(_T("ordername")));
		detail->SetValue(_T("OrderName"), tmpStr);

		rs.GetValue(_T("result"), szResult);

		if (!szResult.IsEmpty())
		{
			detail = rpt.AddDetail(grpt2);
			detail->SetValue(_T("TestResult"), szResult);
			if (!szSummaryResult.IsEmpty())
			{
				szSummaryResult.AppendFormat(_T("\r\n"));
			}
			szSummaryResult.AppendFormat(_T("+ %s: %s"), rs.GetValue(_T("ordername")), szResult);
		}
		rs.MoveNext();
	}

	if (!szSummaryResult.IsEmpty() && testDetail)
	{
		//MessageBox(szSummaryResult);
		//MessageBox(rpt.GetGroupHeader(13)->GetItem(0)->GetName());
		testDetail->SetValue(_T("SumTestResult"), szSummaryResult);
	}
	
	CReportItem *img = rpt.GetReportFooter()->GetItem(_T("Signature"));
	if(img)
	{
		img->SetHBITMAP(pMF->GetSignatureImage(szDoctorRs));
		img->SetFixedHeight(false);
	}
	
	//Ngay in bao cao
	CString szPrintDate, szSysDate, szDateTime, szTime;
	szSysDate = pMF->GetSysDate();
	szDateTime = pMF->GetSysTime();		

	tmpStr = rpt.GetReportFooter()->GetValue(_T("PrintDate"));
	szPrintDate.Format(tmpStr, szDateTime.Left(5), szSysDate.Right(2), szSysDate.Mid(5, 2), szSysDate.Left(4));
	rpt.GetReportFooter()->SetValue(_T("PrintDate"), szPrintDate);	
	
	rpt.GetReportFooter()->SetValue(_T("Doctor"), pMF->GetDoctorName(szDoctorRs));
	
	if(bPreview)
		rpt.PrintPreview();
	else
		rpt.Print(bDirect);
}



