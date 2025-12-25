#include "IVFLabView.h"
#include "MainFrm.h"
#include "IVFLabPhieuTruDialog.h"
#include "IVFLabPhieuRaDialog.h"
#include "IVFSettingDialog.h"
#include "IVFSettingThungDialog.h"
#include "IVFPhieuTruTTDialog.h"
#include "IVFStorageView_v2.h"
#include "IVFSettingGiaDialog.h"
#include "IVFSettingCassetteDialog.h"
#include "IVFSettingEmbryoQualityDlg.h"

static void _OnTaskItemClickFnc(CWnd *pWnd){
	((CIVFLabView*)pWnd)->OnTaskItemSelect();
}

static long _OnTaskListLoadDataFnc(CWnd *pWnd){
	return ((CIVFLabView*)pWnd)->OnTaskListLoadData();
} 
static void _OnTaskListDblClickFnc(CWnd *pWnd){
	((CIVFLabView*)pWnd)->OnTaskListDblClick();
} 
static void _OnTaskListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CIVFLabView*)pWnd)->OnTaskListSelectChange(nOldItem, nNewItem);
} 
static int _OnTaskListDeleteItemFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnTaskListDeleteItem();
} 
static void _OnViewSelectChangeFnc(CWnd *pWnd, int nOld, int nNew){
	((CIVFLabView*)pWnd)->OnViewSelectChange(nOld, nNew);
} 
static int _OnAddIVFLabViewFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnAddIVFLabView();
} 
static int _OnEditIVFLabViewFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnEditIVFLabView();
} 
static int _OnDeleteIVFLabViewFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnDeleteIVFLabView();
} 
static int _OnSaveIVFLabViewFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnSaveIVFLabView();
} 
static int _OnCancelIVFLabViewFnc(CWnd *pWnd){
	 return ((CIVFLabView*)pWnd)->OnCancelIVFLabView();
} 
CIVFLabView::CIVFLabView(){

	m_nDlgWidth = 1024;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nTaskSelected = -1;
}
CIVFLabView::~CIVFLabView(){
	m_tasks.RemoveAll();
}
void CIVFLabView::OnCreateComponents(){
	int x = 85, nTaskID = 1;
	m_wndListPhieura.Create(this, CRect(x, 5, 960,600));
	m_wndListPhieutru.Create(this, CRect(x, 5, 960,600));
	m_wndListPhieuchuyen.Create(this, CRect(x, 5, 960,600));
	//m_wndListPhieuGiaHan.Create(this, CRect(x, 5, 960,600));
	m_wndListPhieudoNito.Create(this, CRect(x, 5, 960,600));
	m_wndStorageView.Create(this, CRect(x, 5, 960,600));
	m_wndListTaoPhoi.Create(this, CRect(x, 5, 960,600));
	//m_wndListHuy.Create(this, CRect(x, 5, 960, 600));

	//CreateTaskItem(_T("Theo dõi điều trị"), NULL, 0);
	CreateTaskItem(_T("Phiếu tạo phôi"), &m_wndListTaoPhoi, nTaskID++);
	CreateTaskItem(_T("Phiếu chuyển phôi"), &m_wndListPhieuchuyen, nTaskID++);
	CreateTaskItem(_T("Phiếu trữ"), &m_wndListPhieutru, nTaskID++);
	CreateTaskItem(_T("Phiếu rã & load"), &m_wndListPhieura, nTaskID++);
	//CreateTaskItem(_T("Phiếu gia hạn"), &m_wndListPhieuGiaHan, nTaskID++);
	CIVFLabPhieuList* pList;
	pList = new CIVFLabPhieuList(_T("GIA_HAN"));
	pList->Create(this, CRect(x, 5, 960,600));
	pList->OnInitDialog();
	CreateTaskItem(_T("Phiếu gia hạn"), pList, nTaskID++);

	pList = new CIVFLabPhieuList(_T("HUY"));
	pList->Create(this, CRect(x, 5, 960,600));
	pList->OnInitDialog();
	CreateTaskItem(_T("Phiếu hủy"), pList, nTaskID++);
	CreateTaskItem(_T("Theo dõi đổ nito"), &m_wndListPhieudoNito, nTaskID++);
	CreateTaskItem(_T("Kho trữ"), &m_wndStorageView, nTaskID++);
	CreateTaskItem(_T("Thiết lập"), NULL, nTaskID++);
}
void CIVFLabView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndView.Add(_T(""), &m_wndList);
	
	

}
void CIVFLabView::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
/*
	m_wndTaskList.Add(_T("Theo dõi điều trị nam"), _T(""));
	m_wndTaskList.Add(_T("Theo dõi điều trị nữ"), _T(""));
	m_wndTaskList.Add(_T("Phiếu trữ"), _T(""));
	m_wndTaskList.Add(_T("Phiếu rã"), _T(""));
	m_wndTaskList.Add(_T("Kho trữ"), _T(""));
//	m_wndTaskList.SetEvent(WE_SELCHANGE, _OnTaskListSelectChangeFnc);
//	m_wndTaskList.SetEvent(WE_LOADDATA, _OnTaskListLoadDataFnc);
//	m_wndTaskList.SetEvent(WE_DBLCLICK, _OnTaskListDblClickFnc);
//	m_wndTaskList.AddEvent(1, _T("Delete"), _OnTaskListDeleteItemFnc, 0, VK_DELETE, 0);
*/
	m_wndView.SetEvent(WE_SELCHANGE, _OnViewSelectChangeFnc);
	AddEvent(1, _T("Add	Ctrl+A"), _OnAddIVFLabViewFnc, 0, 'A', VK_CONTROL);
	AddEvent(2, _T("Edit	Ctrl+E"), _OnEditIVFLabViewFnc, 0, 'E', VK_CONTROL);
	AddEvent(3, _T("Delete	Ctrl+D"), _OnDeleteIVFLabViewFnc, 0, 'D', VK_CONTROL);
	AddEvent(4, _T("Save	Ctrl+S"), _OnSaveIVFLabViewFnc, 0, 'S', VK_CONTROL);
	AddEvent(0, _T("-"));
	AddEvent(5, _T("Cancel	Ctrl+T"), _OnCancelIVFLabViewFnc, 0, 'T', VK_CONTROL);
	SetMode(VM_NONE);
	RecalcLayout();
}
void CIVFLabView::OnDoDataExchange(CDataExchange* pDX){

}
void CIVFLabView::UpdateJson(BOOL bSave){
	if(bSave)
	{
			
	}
	else
	{
			
	}

}
void CIVFLabView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CIVFLabView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CIVFLabView::SetDefaultValues(){


}
int CIVFLabView::SetMode(int nMode){
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
 			
 			SetDefaultValues();
 			break;
 		};
		EnableButtons(FALSE, -1);
 		UpdateData(FALSE);
 		return nOldMode;
}
void CIVFLabView::OnTaskListDblClick(){
	
} 
void CIVFLabView::OnTaskListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabView::OnTaskListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	 return 0;
} 
long CIVFLabView::OnTaskListLoadData(){
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndTaskList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndTaskList.AddItems(
		rs.MoveNext();
	}
	m_wndTaskList.EndLoad(); 
	return nCount;
*/
	return 0;
}
void CIVFLabView::OnViewSelectChange(int nOld, int nNew){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CIVFLabView::OnAddIVFLabView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CIVFLabView::OnEditIVFLabView(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CIVFLabView::OnDeleteIVFLabView(){
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
 		OnCancelIVFLabView();
 	}
	return 0;
}
int CIVFLabView::OnSaveIVFLabView(){
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
 		//OnIVFLabViewListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CIVFLabView::OnCancelIVFLabView(){
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
int CIVFLabView::OnIVFLabViewListLoadData(){
	return 0;
}


void CIVFLabView::CreateTaskItem(CString szCaption, CWnd* pView, UINT nID)
{
	TaskInfo item;
	CGuiButton* pNewButton = new CGuiButton();
	pNewButton->Create(this, _T(""), 0, 0, 80, 70, nID);

	pNewButton->SetButtonInfo(NULL, szCaption, RGB(255, 255, 255), RGB(0, 128, 192), RGB(64, 128, 192), true);
	pNewButton->SetEvent(WE_CLICK,_OnTaskItemClickFnc);
	item.pButton = pNewButton;
	item.pView  = pView;
	item.nID = nID;
	item.szCaption = szCaption;
	if(pView) pView->ShowWindow(SW_HIDE);
	m_tasks.Add(item);
}

void CIVFLabView::RecalcLayout()
{
	CRect rect, rcTask, rc;
	GetClientRect(&rect);
	rcTask = rect;
	rcTask.right = rcTask.left+80;
	rc = rcTask;
	rc.bottom = rc.top+70;
	for (int i =0; i < m_tasks.GetCount(); i++)
	{
		TaskInfo o = m_tasks[i];
		CWnd *pWnd = o.pButton;
		pWnd->MoveWindow(rc);
		rc.OffsetRect(0, rc.Height()+1);
	}
	rc  = rect;
	rc.left += 80;
	for (int i =0; i < m_tasks.GetCount(); i++)
	{
		TaskInfo o = m_tasks[i];
		if(o.pView) o.pView->MoveWindow(rc);
	}

}


int CIVFLabView::GetTaskSelected()
{
	return m_nTaskSelected;
}
void CIVFLabView::SelectTask(int nIndex)
{
	if(nIndex < 0 || nIndex >= m_tasks.GetCount())
		return;
	for (int i =0; i < m_tasks.GetCount(); i++)
	{
		if(i == nIndex)
			continue;
		TaskInfo o = m_tasks[i];
		o.pButton->SetState(FALSE);
		o.pButton->SetButtonInfo(NULL, o.szCaption, RGB(255, 255, 255), RGB(0, 128, 192), RGB(64, 128, 192), true);
		o.pButton->Invalidate();
		if(o.pView) o.pView->ShowWindow(SW_HIDE);
	}
	m_nTaskSelected = nIndex;
	TaskInfo item = m_tasks[nIndex];
	item.pButton->SetState(TRUE);
	item.pButton->SetButtonInfo(NULL, item.szCaption, RGB(255, 255, 255), RGB(255, 128, 0), RGB(64, 128, 192), true);
	item.pButton->Invalidate();
	if(item.pView) item.pView->ShowWindow(SW_SHOW);
	

}
void CIVFLabView::OnTaskItemSelect()
{
	CWnd *pWnd = GetFocus();
	for (int i =0; i < m_tasks.GetCount(); i++)
	{
		TaskInfo o = m_tasks[i];
		if(o.pButton->GetSafeHwnd() == pWnd->GetSafeHwnd())
		{
			SelectTask(i);
			if(o.nID == 9)
			{
				OnSettingSelect();
			}
			break;
		}
	}

}

void CIVFLabView::OnSettingSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	CGuiMenu menu(this);
	CRect rect;
	int nPos;	
	menu.CreatePopupMenu();
	CString tmpStr;
	int nID = 1;
	menu.AppendMenu(MF_BYPOSITION, 1, _T("Loại phiếu"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	//Loại dùng chu cho chứa, rã,(Phôi hoặc tinh trùng, trứng)
	menu.AppendMenu(MF_BYPOSITION, 2, _T("Loại"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 3, _T("Loại con"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 4, _T("Phương pháp"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 5, _T("Môi trường"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 6, _T("Loại dụng cụ"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 7, _T("Dụng cụ"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 8, _T("Chất lượng"));


	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 9, _T("Danh mục kho"));

	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 10, _T("Danh mục thùng"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 11, _T("Danh mục giá"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 12, _T("Danh mục cassette"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 13, _T("Danh mục màu top"));
	menu.AppendMenu(MF_SEPARATOR, 0, _T("-"));
	menu.AppendMenu(MF_BYPOSITION, 14, _T("Danh mục chất lượng theo dõi phôi"));
	TaskInfo item = m_tasks[8];
	CGuiButton* pSetting = item.pButton;
	pSetting->GetWindowRect(&rect);
	nPos = menu.TrackPopupMenu(TPM_NONOTIFY|TPM_RETURNCMD|TPM_LEFTALIGN|TPM_BOTTOMALIGN, rect.left, rect.top, this);
	TCHAR title[128];
	MENUITEMINFO mii;
	mii.cbSize = sizeof(MENUITEMINFO);
	mii.fMask = MIIM_STRING;
	mii.dwTypeData = title;
	mii.cch = sizeof(title);
	GetMenuItemInfo(menu.GetSafeHmenu(), nPos, FALSE, &mii);
	switch(nPos){
	case 1:
	{
		CIVFSettingDialog dlg(this, _T("ivf_storage_loaiphieu"), _T(""), CString(title));
		dlg.DoModal();
	}
		break;
	case 2:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_loai"), _T("ivf_storage_loaiphieu"), CString(title));
			dlg.DoModal();
		}
		break;
	case 3:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_loaicon"), _T("ivf_storage_loai"), CString(title));
			dlg.DoModal();
		}
		break;
	case 4:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_phuongphap"), _T("ivf_storage_loai"), CString(title));
			dlg.DoModal();
		}break;
	case 5:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_moitruong"), _T("ivf_storage_loai"), CString(title));
			dlg.DoModal();
		}break;
	case 6:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_loaidungcu"), _T(""), CString(title));
			dlg.DoModal();
		}break;

	case 7:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_dungcu"), _T("ivf_storage_loaidungcu"), CString(title));
			dlg.DoModal();
		}break;
	case 8:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_chatluong"), _T(""), CString(title));
			dlg.DoModal();
		}break;
	case 9:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_location"), _T(""), CString(title));
			dlg.DoModal();
		}break;
	case 10:
		{
			CIVFSettingThungDialog dlg(this, _T("ivf_storage_thung"), _T("ivf_storage_location"));
			dlg.DoModal();
		}break;
	case 11:
		{
			CIVFSettingGiaDialog dlg(this, _T("ivf_storage_gia"), _T("ivf_storage_thung"));
			dlg.DoModal();
		}break;
	case 12:
		{
			CIVFSettingCassetteDialog dlg3(this, _T("ivf_storage_cassette"), _T("ivf_storage_gia"), CString(title));
			dlg3.DoModal();
		}break;
	case 13:
		{
			CIVFSettingDialog dlg(this, _T("ivf_storage_mautop"), _T(""),  CString(title));
			dlg.DoModal();
		}break;
	case 14:
		CIVFSettingEmbryoQualityDlg dlg(this);
		dlg.DoModal();
		break;
	};
}

BEGIN_MESSAGE_MAP(CIVFLabView, CGuiView)
	ON_WM_SIZE()
END_MESSAGE_MAP()

void CIVFLabView::OnSize(UINT nType, int cx, int cy)
{
	int nTaskId = GetTaskSelected();
	if (nTaskId < 0)
	{
		return CGuiView::OnSize(nType, cx, cy);
	}
	for (int i = 0 ; i < m_tasks.GetCount(); i++)
	{
		int x = 85;
		CRect rect;
		CWnd* pWnd = m_tasks.GetAt(i).pView;
		if (pWnd == NULL)
		{
			continue;
		}
		pWnd->GetClientRect(&rect);
		rect.left = x;
		rect.right = cx;
		rect.bottom = cy;
		pWnd->MoveWindow(&rect);
	}
	return CGuiView::OnSize(nType, cx, cy);
}