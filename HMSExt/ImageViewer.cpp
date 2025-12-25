#include "stdafx.h"
#include "ImageViewer.h"
#include "GuiMainFrame.h"
#include "GuiUtils.h"

static int _OnAddImageViewerFnc(CWnd *pWnd){
	 return ((CImageViewer*)pWnd)->OnAddImageViewer();
} 
static int _OnEditImageViewerFnc(CWnd *pWnd){
	 return ((CImageViewer*)pWnd)->OnEditImageViewer();
} 
static int _OnDeleteImageViewerFnc(CWnd *pWnd){
	 return ((CImageViewer*)pWnd)->OnDeleteImageViewer();
} 
static int _OnSaveImageViewerFnc(CWnd *pWnd){
	 return ((CImageViewer*)pWnd)->OnSaveImageViewer();
} 
static int _OnCancelImageViewerFnc(CWnd *pWnd){
	 return ((CImageViewer*)pWnd)->OnCancelImageViewer();
} 
CImageViewer::CImageViewer(CWnd *pParent, CString szFileTitle):
	CGuiDialog(pParent){

	m_nDlgWidth = 605;
	m_nDlgHeight = 505;
	SetDefaultValues();
	m_szFileTitle = szFileTitle;
}
CImageViewer::~CImageViewer(){
}
void CImageViewer::OnCreateComponents(){
	m_wndImage.Create(this, CRect(0, 0, 600, 500));
}
void CImageViewer::OnInitializeComponents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CImageViewer::OnSetWindowEvents(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CString szFilePath;
	szFilePath.Format(_T("%s/Reports/Images/%s.jpg"), pMF->GetCurrentDirectory(), m_szFileTitle);
	m_wndImage.SetFileName(szFilePath);

}
void CImageViewer::OnDoDataExchange(CDataExchange* pDX){

}
void CImageViewer::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CImageViewer::GetDataToScreen(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CImageViewer::GetScreenToData(){
	CGuiMainFrame *pMF = (CGuiMainFrame*) AfxGetMainWnd();

}
void CImageViewer::SetDefaultValues(){


}
int CImageViewer::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
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
int CImageViewer::OnAddImageViewer(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CImageViewer::OnEditImageViewer(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CImageViewer::OnDeleteImageViewer(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	CString szSQL;
 	if(ShowMessage(1, MB_YESNO|MB_ICONQUESTION|MB_DEFBUTTON2) == IDNO)
 		return -1;
 	szSQL.Format(_T("DELETE FROM  WHERE  AND") );
 	int ret = pMF->ExecSQL(szSQL);
 	if(ret >= 0){
 		SetMode(VM_NONE);
 		OnCancelImageViewer();
 	}
	return 0;
}
int CImageViewer::OnSaveImageViewer(){
 	if(GetMode() != VM_ADD && GetMode() != VM_EDIT)
 		return -1;
 	if(!IsValidateData())
 		return -1;
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
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
 		//OnImageViewerListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CImageViewer::OnCancelImageViewer(){
 	if(GetMode() == VM_EDIT)
 	{
 		SetMode(VM_VIEW);
 	} 
 	else 
 	{
 		SetMode(VM_NONE);
 	} 
 	CGuiMainFrame *pMF = (CGuiMainFrame *)AfxGetMainWnd();
 	return 0;
} 
int CImageViewer::OnImageViewerListLoadData(){
	return 0;
}
