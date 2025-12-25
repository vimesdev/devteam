#include "stdafx.h"
#include "VIMESPictureView.h"
#include "MainFrm.h"
//#include <gdiplus.h>


//using namespace Gdiplus;
//static Bitmap *mBitmap=NULL;



static void _OnBlackandWhiteSelectFnc(CWnd *pWnd){
	 ((CVIMESPictureView*)pWnd)->OnBlackandWhiteSelect();
}
static void _OnInvertColorSelectFnc(CWnd *pWnd){
	 ((CVIMESPictureView*)pWnd)->OnInvertColorSelect();
}
static void _OnGreenSelectFnc(CWnd *pWnd){
	CVIMESPictureView *pVw = (CVIMESPictureView *)pWnd;
	pVw->OnGreenSelect();
} 
static void _OnBlueSelectFnc(CWnd *pWnd){
	CVIMESPictureView *pVw = (CVIMESPictureView *)pWnd;
	pVw->OnBlueSelect();
} 
static void _OnRedSelectFnc(CWnd *pWnd){
	CVIMESPictureView *pVw = (CVIMESPictureView *)pWnd;
	pVw->OnRedSelect();
} 
/*static void _OnCommentChangeFnc(CWnd *pWnd){
	((CVIMESPictureView *)pWnd)->OnCommentChange();
} */
/*static void _OnCommentSetfocusFnc(CWnd *pWnd){
	((CVIMESPictureView *)pWnd)->OnCommentSetfocus();} */ 
/*static void _OnCommentKillfocusFnc(CWnd *pWnd){
	((CVIMESPictureView *)pWnd)->OnCommentKillfocus();
} */
static int _OnCommentCheckValueFnc(CWnd *pWnd){
	return ((CVIMESPictureView *)pWnd)->OnCommentCheckValue();
} 
static void _OnApplySelectFnc(CWnd *pWnd){
	CVIMESPictureView *pVw = (CVIMESPictureView *)pWnd;
	pVw->OnApplySelect();
} 
static void _OnRestoreSelectFnc(CWnd *pWnd){
	CVIMESPictureView *pVw = (CVIMESPictureView *)pWnd;
	pVw->OnRestoreSelect();
} 
static void _OnContrastSelectFnc(CWnd *pWnd){
	CVIMESPictureView *pVw = (CVIMESPictureView *)pWnd;
	pVw->OnContrastSelect();
} 
static void _OnLastSelectFnc(CWnd *pWnd){
	CVIMESPictureView *pVw = (CVIMESPictureView *)pWnd;
	pVw->OnLastSelect();
} 
static void _OnNextSelectFnc(CWnd *pWnd){
	CVIMESPictureView *pVw = (CVIMESPictureView *)pWnd;
	pVw->OnNextSelect();
} 
static void _OnBlurSelectFnc(CWnd *pWnd){
	 ((CVIMESPictureView*)pWnd)->OnBlurSelect();
} 
static void _OnSharpnessSelectFnc(CWnd *pWnd){
	 ((CVIMESPictureView*)pWnd)->OnSharpnessSelect();
} 
/*static void _OnDimensionsChangeFnc(CWnd *pWnd){
	((CVIMESPictureView *)pWnd)->OnDimensionsChange();
} */
/*static void _OnDimensionsSetfocusFnc(CWnd *pWnd){
	((CVIMESPictureView *)pWnd)->OnDimensionsSetfocus();} */ 
/*static void _OnDimensionsKillfocusFnc(CWnd *pWnd){
	((CVIMESPictureView *)pWnd)->OnDimensionsKillfocus();
} */
static int _OnDimensionsCheckValueFnc(CWnd *pWnd){
	return ((CVIMESPictureView *)pWnd)->OnDimensionsCheckValue();
} 
/*static void _OnCurrentImageChangeFnc(CWnd *pWnd){
	((CVIMESPictureView *)pWnd)->OnCurrentImageChange();
} */
/*static void _OnCurrentImageSetfocusFnc(CWnd *pWnd){
	((CVIMESPictureView *)pWnd)->OnCurrentImageSetfocus();} */ 
/*static void _OnCurrentImageKillfocusFnc(CWnd *pWnd){
	((CVIMESPictureView *)pWnd)->OnCurrentImageKillfocus();
} */
static int _OnCurrentImageCheckValueFnc(CWnd *pWnd){
	return ((CVIMESPictureView *)pWnd)->OnCurrentImageCheckValue();
} 
static int _OnAddVIMESPictureViewFnc(CWnd *pWnd){
	 return ((CVIMESPictureView*)pWnd)->OnAddVIMESPictureView();
} 
static int _OnEditVIMESPictureViewFnc(CWnd *pWnd){
	 return ((CVIMESPictureView*)pWnd)->OnEditVIMESPictureView();
} 
static int _OnDeleteVIMESPictureViewFnc(CWnd *pWnd){
	 return ((CVIMESPictureView*)pWnd)->OnDeleteVIMESPictureView();
} 
static int _OnSaveVIMESPictureViewFnc(CWnd *pWnd){
	 return ((CVIMESPictureView*)pWnd)->OnSaveVIMESPictureView();
} 
static int _OnCancelVIMESPictureViewFnc(CWnd *pWnd){
	 return ((CVIMESPictureView*)pWnd)->OnCancelVIMESPictureView();
} 
CVIMESPictureView::CVIMESPictureView(CWnd *pParent):
	CGuiDialog(pParent){

	m_nDlgWidth = 1005;
	m_nDlgHeight = 645;
	SetDefaultValues();
}
CVIMESPictureView::~CVIMESPictureView(){
}
void CVIMESPictureView::OnCreateComponents(){
	m_wndGroupPricture.Create(this, _T("Pricture View"), 5, 5, 705, 605);
	m_wndSetup.Create(this, _T("Setup"), 710, 5, 995, 640);
	m_wndBrightness.Create(this, _T("Brightness"), 715, 35, 990, 245);
	m_wndGroupProperties.Create(this, _T("Imgae Properties"), 715, 375, 990, 585);
	m_wndBlackandWhite.Create(this, _T("Black and White"), 720, 345, 870, 370);
	m_wndInvertColor.Create(this, _T("Invert Color"), 720, 315, 870, 340);
	m_wndGreen.Create(TBS_HORZ|WS_CHILD|WS_VISIBLE, CRect(805, 150, 985, 175), this, _GetNextID());
	m_wndBlue.Create(TBS_HORZ|WS_CHILD|WS_VISIBLE, CRect(805, 210, 985, 235),this, _GetNextID());
	m_wndRed.Create(TBS_HORZ|WS_CHILD|WS_VISIBLE, CRect(805, 90, 985, 115), this, _GetNextID());
	m_wndCommentLabel.Create(this, _T("Comment"), 105, 610, 200, 635);
	m_wndComment.Create(this,205, 610, 605, 635);	
	m_wndContrast.Create(TBS_HORZ|WS_CHILD|WS_VISIBLE, CRect(805, 280, 985, 305), this, _GetNextID());
	m_wndLast.Create(this, _T("&Last"), 5, 610, 100, 635);
	m_wndNext.Create(this, _T("&Next"), 610, 610, 705, 635);
	m_wndBlueLabel.Create(this, _T("Blue"), 720, 210, 800, 235);
	m_wndGreenLabel.Create(this, _T("Green"), 720, 150, 800, 175);
	m_wndRedLabel.Create(this, _T("Red"), 720, 90, 800, 115);
	m_wndRedPost.Create(this, _T("RedPost"), 855, 60, 935, 85);
	m_wndGreenPost.Create(this, _T("GreenPost"), 855, 120, 935, 145);
	m_wndBluePost.Create(this, _T("BluePost"), 855, 180, 935, 205);
	m_wndContrastLabel.Create( this, _T("Contrast"),720, 280, 800, 305);
	m_wndContrastPostLabel.Create(this, _T("ContrastPost"), 855, 250, 935, 275);
	m_wndBlur.Create(this, _T("Blur"), 875, 315, 985, 340);
	m_wndSharpness.Create(this, _T("Sharpness"), 875, 345, 985, 370);
	m_wndDimensionsLabel.Create(this, _T("Dimensions"), 720, 405, 800, 430);
	m_wndDimensions.Create(this,805, 405, 985, 430); 
	m_wndCurrentImageLabel.Create(this, _T("Current Image"), 720, 435, 800, 460);
	m_wndCurrentImage.Create(this,805, 435, 985, 460); 
	m_wndApply.Create(this, _T("&Apply"), 760, 590, 860, 620);
	m_wndRestore.Create(this, _T("&Restore"), 865, 590, 965, 620);

}
void CVIMESPictureView::OnInitializeComponents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	EnableControls(FALSE);
	//EnableButtons(TRUE, 0, -1);
	m_wndComment.SetLimitText(35);
	m_wndComment.SetCheckValue(true);
	m_wndDimensions.SetLimitText(35);
	m_wndDimensions.SetCheckValue(true);
	m_wndCurrentImage.SetLimitText(35);
	m_wndCurrentImage.SetCheckValue(true);	

}
void CVIMESPictureView::OnSetWindowEvents(){
	m_wndBlackandWhite.SetEvent(WE_CLICK, _OnBlackandWhiteSelectFnc);
	m_wndInvertColor.SetEvent(WE_CLICK, _OnInvertColorSelectFnc);
	
	//m_wndGreen.SetEvent(WE_CLICK, _OnGreenSelectFnc);
	//m_wndBlue.SetEvent(WE_CLICK, _OnBlueSelectFnc);
	//m_wndRed.SetEvent(WE_CLICK, _OnRedSelectFnc);
	//m_wndComment.SetEvent(WE_CHANGE, _OnCommentChangeFnc);
	//m_wndComment.SetEvent(WE_SETFOCUS, _OnCommentSetfocusFnc);
	//m_wndComment.SetEvent(WE_KILLFOCUS, _OnCommentKillfocusFnc);
	m_wndComment.SetEvent(WE_CHECKVALUE, _OnCommentCheckValueFnc);
	m_wndApply.SetEvent(WE_CLICK, _OnApplySelectFnc);
	m_wndRestore.SetEvent(WE_CLICK, _OnRestoreSelectFnc);
	//m_wndContrast.SetEvent(WE_CLICK, _OnContrastSelectFnc);
	m_wndLast.SetEvent(WE_CLICK, _OnLastSelectFnc);
	m_wndNext.SetEvent(WE_CLICK, _OnNextSelectFnc);

	m_wndBlur.SetEvent(WE_CLICK, _OnBlurSelectFnc);
	m_wndSharpness.SetEvent(WE_CLICK, _OnSharpnessSelectFnc);
	//m_wndDimensions.SetEvent(WE_CHANGE, _OnDimensionsChangeFnc);
	//m_wndDimensions.SetEvent(WE_SETFOCUS, _OnDimensionsSetfocusFnc);
	//m_wndDimensions.SetEvent(WE_KILLFOCUS, _OnDimensionsKillfocusFnc);
	m_wndDimensions.SetEvent(WE_CHECKVALUE, _OnDimensionsCheckValueFnc);
	//m_wndCurrentImage.SetEvent(WE_CHANGE, _OnCurrentImageChangeFnc);
	//m_wndCurrentImage.SetEvent(WE_SETFOCUS, _OnCurrentImageSetfocusFnc);
	//m_wndCurrentImage.SetEvent(WE_KILLFOCUS, _OnCurrentImageKillfocusFnc);
	m_wndCurrentImage.SetEvent(WE_CHECKVALUE, _OnCurrentImageCheckValueFnc);

	m_wndBlueLabel.SetBkColor(RGB(0,0,255));
	m_wndGreenLabel.SetBkColor(RGB(0, 255, 0));
	m_wndRedLabel.SetBkColor(RGB(255, 0, 0));

	if(!m_szFileName.IsEmpty()){
		CDC *pDC = GetDC();
		m_hMemDC = LoadImage(pDC->m_hDC, m_szFileName, m_Rect);	
		ReleaseDC(pDC);
		m_wndComment.EnableWindow(true);
		m_wndComment.SetFocus();
	}

	
	m_wndRed.SetRange(-255, 255, TRUE);
	m_wndRed.SetPos(0);
	m_wndRedPost.SetWindowText(_T("0"));
	m_wndBlue.SetRange(-255, 255, TRUE);
	m_wndBlue.SetPos(0);
	m_wndBluePost.SetWindowText(_T("0"));

	m_wndGreen.SetRange(-255, 255, TRUE);
	m_wndGreen.SetPos(0);
	m_wndGreenPost.SetWindowText(_T("0"));

	m_wndContrast.SetRange(0, 200, TRUE);
	m_wndContrast.SetPos(100);	
	m_wndContrastPostLabel.SetWindowText(_T("100"));

	m_wndRedPost.ModifyStyle(0,ES_CENTER);
	m_wndBluePost.ModifyStyle(0, ES_CENTER);
	m_wndGreenPost.ModifyStyle(0, ES_CENTER);
	m_wndContrastPostLabel.ModifyStyle(0, ES_CENTER);

}
void CVIMESPictureView::OnDoDataExchange(CDataExchange* pDX){
	DDX_Check(pDX, m_wndBlackandWhite.GetDlgCtrlID(), m_bBlackandWhite);
	DDX_Check(pDX, m_wndInvertColor.GetDlgCtrlID(), m_bInvertColor);
	DDX_Text(pDX, m_wndComment.GetDlgCtrlID(), m_szComment);
	DDX_Check(pDX, m_wndBlur.GetDlgCtrlID(), m_bBlur);
	DDX_Check(pDX, m_wndSharpness.GetDlgCtrlID(), m_bSharpness);
	DDX_Text(pDX, m_wndDimensions.GetDlgCtrlID(), m_szDimensions);
	DDX_Text(pDX, m_wndCurrentImage.GetDlgCtrlID(), m_szCurrentImage);
	
	DDX_Text(pDX, m_wndBluePost.GetDlgCtrlID(), m_nBluePost);
	DDX_Text(pDX, m_wndRedPost.GetDlgCtrlID(), m_nRedPost);
	DDX_Text(pDX, m_wndGreenPost.GetDlgCtrlID(), m_nGreenPost);
	DDX_Text(pDX, m_wndContrastPostLabel.GetDlgCtrlID(), m_nContrastPost);
	
	DDX_Slider(pDX, m_wndBlue.GetDlgCtrlID(), m_nBlue);
	DDX_Slider(pDX, m_wndRed.GetDlgCtrlID(), m_nRed);
	DDX_Slider(pDX, m_wndGreen.GetDlgCtrlID(), m_nGreen);
	DDX_Slider(pDX, m_wndContrast.GetDlgCtrlID(), m_nContrast);

}

void CVIMESPictureView::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CVIMESPictureView::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CVIMESPictureView::SetDefaultValues(){

	m_bBlackandWhite=FALSE;
	m_bInvertColor=FALSE;
	m_szComment.Empty();
	m_bBlur=FALSE;
	m_bSharpness=FALSE;
	m_szDimensions.Empty();
	m_szCurrentImage.Empty();

}
int CVIMESPictureView::SetMode(int nMode){
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
void CVIMESPictureView::OnBlackandWhiteSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//if(m_bBlackandWhite)
	{
		DisplayBlackAndWhite(m_hMemDC, m_Rect);
		m_wndRed.EnableWindow(FALSE);
		m_wndGreen.EnableWindow(FALSE);
		m_wndBlue.EnableWindow(FALSE);
	}
	
}
void CVIMESPictureView::OnInvertColorSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	DisplayInvertColor(m_hMemDC, m_Rect);
	
}
void CVIMESPictureView::OnGreenSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPictureView::OnBlueSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPictureView::OnRedSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
/*void CVIMESPictureView::OnCommentChange(){
	
} */
/*void CVIMESPictureView::OnCommentSetfocus(){
	
} */
/*void CVIMESPictureView::OnCommentKillfocus(){
	
} */
int CVIMESPictureView::OnCommentCheckValue(){
	return 0;
} 
void CVIMESPictureView::OnApplySelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	//BITMAPINFO bi;
	//BOOL bRes;
	//char *buf;
	//
	//// Bitmap header
	//bi.bmiHeader.biSize = sizeof(bi.bmiHeader);
	//bi.bmiHeader.biWidth = m_nWidthImage;
	//bi.bmiHeader.biHeight = m_nHeightImage;
	//bi.bmiHeader.biPlanes = 1;
	//bi.bmiHeader.biBitCount = 32;
	//bi.bmiHeader.biCompression = BI_RGB;
	//bi.bmiHeader.biSizeImage = m_nWidth * 4 * m_nHeight;
	//bi.bmiHeader.biClrUsed = 0;
	//bi.bmiHeader.biClrImportant = 0;

	//// Buffer
	//buf = (char *) malloc(m_nWidthImage * 4 * m_nHeightImage);
	//
	//bRes = GetDIBits(m_hMemDC, m_hBitmap, 0, m_nHeightImage, buf, &bi,
	//				   DIB_RGB_COLORS);	

	//SetDIBits(m_hMemDC, m_hBitmap, 0, bRes, buf,  &bi,
	//				   DIB_RGB_COLORS);	
	//free(buf);

	//CLSID jpgClsid;
	//GetEncoderClsid(L"image/jpeg", &jpgClsid);

	//// Get the R G B and Contrast value 
	//m_nRed = m_wndRed.GetPos();
	//m_nGreen = m_wndGreen.GetPos();
	//m_nBlue = m_wndBlue.GetPos();
	//m_nContrast = m_wndContrast.GetPos();

	//// For Brightness
	//if (m_nRed || m_nGreen || m_nBlue )
	//{
	//	CDC *pDC = GetDC();
	//	DisplayBrightness(m_hMemDC, m_Rect, m_nRed, m_nGreen, m_nBlue);
	//	ReleaseDC(pDC);
	//}

	//// Contrast
	//if (100 != m_nContrast)
	//{
	//	CDC *pDC = GetDC();
	//	DisplayContrast(pDC->m_hDC, m_Rect, m_nContrast);		
	//	ReleaseDC(pDC);
	//}

	//if(m_hBitmap != NULL){		
	//	Bitmap bmp(m_hBitmap, 0);
	//	bmp.Save(_T("C:\\Ptmp.jpg"), &jpgClsid, NULL);
	//}

	OnOK();
} 
void CVIMESPictureView::OnRestoreSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CDC *pDC = GetDC();	

	// Reset all controls
	m_wndBlackandWhite.SetCheck(BST_UNCHECKED);
	m_wndInvertColor.SetCheck(BST_UNCHECKED);

	m_wndBlur.SetCheck(BST_UNCHECKED);
	m_wndSharpness.SetCheck(BST_UNCHECKED);
	
	m_wndRed.SetRange(-255, 255, TRUE);
	m_wndRed.SetPos(0);
	m_wndRedPost.SetWindowText(_T("0"));
	m_wndBlue.SetRange(-255, 255, TRUE);
	m_wndBlue.SetPos(0);
	m_wndBluePost.SetWindowText(_T("0"));

	m_wndGreen.SetRange(-255, 255, TRUE);
	m_wndGreen.SetPos(0);
	m_wndGreenPost.SetWindowText(_T("0"));

	m_wndContrast.SetRange(0, 200, TRUE);
	m_wndContrast.SetPos(100);	
	m_wndContrastPostLabel.SetWindowText(_T("100"));

	
	// Enable color slider bar
	/*m_wndRed.EnableWindow();
	m_wndGreen.EnableWindow();
	m_wndBlue.EnableWindow();*/

	m_hMemDC = LoadImage(pDC->m_hDC, m_szFileName, m_Rect);	
	ReleaseDC(pDC);
	//UpdateData(false);
} 
void CVIMESPictureView::OnContrastSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPictureView::OnLastSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPictureView::OnNextSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CVIMESPictureView::OnBlurSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_bBlur)
	{
		DisplayBlur(m_hMemDC, m_Rect);
		m_bBlur = false;
	}
	else
	{
		m_bBlur = true;
	}
}
void CVIMESPictureView::OnSharpnessSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	if (m_bSharpness)
	{
		DisplaySharpness(m_hMemDC, m_Rect);
		m_bSharpness = false;
	}
	else
	{
		m_bSharpness = true;
	}	
	
}
/*void CVIMESPictureView::OnDimensionsChange(){
	
} */
/*void CVIMESPictureView::OnDimensionsSetfocus(){
	
} */
/*void CVIMESPictureView::OnDimensionsKillfocus(){
	
} */
int CVIMESPictureView::OnDimensionsCheckValue(){
	return 0;
} 
/*void CVIMESPictureView::OnCurrentImageChange(){
	
} */
/*void CVIMESPictureView::OnCurrentImageSetfocus(){
	
} */
/*void CVIMESPictureView::OnCurrentImageKillfocus(){
	
} */
int CVIMESPictureView::OnCurrentImageCheckValue(){
	return 0;
} 
int CVIMESPictureView::OnAddVIMESPictureView(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)  
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_ADD);
	return 0; 
}
int CVIMESPictureView::OnEditVIMESPictureView(){
 	if(GetMode() != VM_VIEW) 
 		return -1; 
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd(); 
 	SetMode(VM_EDIT);
	return 0;  
}
int CVIMESPictureView::OnDeleteVIMESPictureView(){
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
 		OnCancelVIMESPictureView(); 
 	}
	return 0;
}
int CVIMESPictureView::OnSaveVIMESPictureView(){
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
 		//OnVIMESPictureViewListLoadData(); 
 		SetMode(VM_VIEW); 
 	} 
 	else 
 	{ 
 	} 
 	return ret; 
 	return 0; 
}
int CVIMESPictureView::OnCancelVIMESPictureView(){
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
int CVIMESPictureView::OnVIMESPictureViewListLoadData(){
	return 0;
}
void CVIMESPictureView::DisplayBrightness(HDC hMemDC, RECT &r, int nRedVal, int nGreenVal, int nBlueVal)
{
	BITMAPINFO bi;
	BOOL bRes;
	char *buf;
	
	// Bitmap header
	bi.bmiHeader.biSize = sizeof(bi.bmiHeader);
	bi.bmiHeader.biWidth = m_nWidth;
	bi.bmiHeader.biHeight = m_nHeight;
	bi.bmiHeader.biPlanes = 1;
	bi.bmiHeader.biBitCount = 32;
	bi.bmiHeader.biCompression = BI_RGB;
	bi.bmiHeader.biSizeImage = m_nWidth * 4 * m_nHeight;
	bi.bmiHeader.biClrUsed = 0;
	bi.bmiHeader.biClrImportant = 0;

	// Buffer
	buf = (char *) malloc(m_nWidth * 4 * m_nHeight);

	// Don't use getPixel and SetPixel.It's very slow.
	// Get the all scanline.
	bRes = GetDIBits(hMemDC, m_hBitmap, 0, m_nHeight, buf, &bi,
					   DIB_RGB_COLORS);	
	long nCount=0;	
	for (int i=0; i<m_nHeight; ++i)
	{
		for (int j=0; j<m_nWidth; ++j)
		{
			long lVal=0;
			memcpy(&lVal, &buf[nCount], 4);

			// Get the reverse order
			int b = GetRValue(lVal);
			int g = GetGValue(lVal);
			int r = GetBValue(lVal);
			
			// Red
			r += nRedVal;
			if (r >255)
			{
				r = 255;
			}
			if (r <0)
			{
				r = 0;
			}

			// Green
			g += nGreenVal;
			if (g>255)
			{
				g = 255;
			}
			if (g<0)
			{
				g = 0;
			}

			// Blue
			b += nBlueVal;
			if (b >255)
			{
				b = 255;
			}
			if (b<0)
			{
				b = 0;
			}
			
			// Store reverse order
			lVal = RGB(b, g, r);
			memcpy(&buf[nCount], &lVal, 4);

			// Increment with 4. RGB color take 4 bytes.The high-order byte must be zero
			// See in MSDN COLORREF
			nCount+=4;
		}
	}

	// Set again
	SetDIBits(hMemDC, m_hBitmap, 0, bRes, buf,  &bi,
					   DIB_RGB_COLORS);	
	free(buf);

	RECT tmpRect = r;
	tmpRect.right += 20;
	tmpRect.bottom += 30;

	InvalidateRect(&tmpRect, FALSE);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// Method name	: DisplayContrast
// Arguments	:
//	1) HDC hMemDC		-- Device context
//	2) RECT &r			-- Rectangle position
//	3) int nContrastVal -- Contrast value(Value between 0 to 200)
// Return type	: void
// Description  : It have 2 type. 1) Low contrast 2) High contrast
// Formula		: Color = ((Color-128)*nContrastVal)/100 +128;
// Precondition	: 1)gdiplus should be intialize 2) Image should be load
// Postcondition: 
/////////////////////////////////////////////////////////////////////////////////////////////////
void CVIMESPictureView::DisplayContrast(HDC hMemDC, RECT &r, int nContrastVal)
{
	BITMAPINFO bi;
	BOOL bRes;
	char *buf;
	
	// Bitmap header
	bi.bmiHeader.biSize = sizeof(bi.bmiHeader);
	bi.bmiHeader.biWidth = m_nWidth;
	bi.bmiHeader.biHeight = m_nHeight;
	bi.bmiHeader.biPlanes = 1;
	bi.bmiHeader.biBitCount = 32;
	bi.bmiHeader.biCompression = BI_RGB;
	bi.bmiHeader.biSizeImage = m_nWidth * 4 * m_nHeight;
	bi.bmiHeader.biClrUsed = 0;
	bi.bmiHeader.biClrImportant = 0;

	buf = (char *) malloc(m_nWidth * 4 * m_nHeight);
	bRes = GetDIBits(hMemDC, m_hBitmap, 0, m_nHeight, buf, &bi,
					   DIB_RGB_COLORS);	

	long nCount=0;	
	for (int i=0; i<m_nHeight; ++i)
	{
		for (int j=0; j<m_nWidth; ++j)
		{			
			long lVal=0;
			memcpy(&lVal, &buf[nCount], 4);
			// Get from buffer in reverse order
			int b = GetRValue(lVal);
			int g = GetGValue(lVal);
			int r = GetBValue(lVal);

			r = ((r-128)*nContrastVal)/100 +128;
			g = ((g-128)*nContrastVal)/100 +128;
			b = ((b-128)*nContrastVal)/100 +128;			
			
			// Red
			if (r >255)
			{
				r = 255;
			}
			if (r <0)
			{
				r = 0;
			}
			
			// Green
			if (g>255)
			{
				g = 255;
			}
			if (g<0)
			{
				g = 0;
			}

			// Blue			
			if (b >255)
			{
				b = 255;
			}
			if (b<0)
			{
				b = 0;
			}

			// Store in reverse order			
			lVal = RGB((int)b, (int)g, (int)r);
			
			memcpy(&buf[nCount], &lVal, 4);

			nCount+=4;
		}
	}

	SetDIBits(hMemDC, m_hBitmap, 0, bRes, buf,  &bi,
				   DIB_RGB_COLORS);
	free(buf);

	RECT tmpRect = r;
	tmpRect.right += 20;
	tmpRect.bottom += 30;
	_tprintf(_T("\r\nContrast:%d"), m_nContrast);
	InvalidateRect(&tmpRect, FALSE);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// Method name	: DisplayBlackAndWhite
// Arguments	: 
//	1) HDC hMemDC	-- Device context
//	2) RECT &r		-- Rectangle poisition
// Return type	: void
// Description	: If Red, Green, Blue value is same, that picture look like black and white.
// Formula		: lVal = (R+G+B)/3; R = lVal; G=lVal; B=lVal;
// Precondition	: 1)gdiplus should be intialize
// Postcondition: None
/////////////////////////////////////////////////////////////////////////////////////////////////
void CVIMESPictureView::DisplayBlackAndWhite(HDC hMemDC, RECT &r)
{
	BITMAPINFO bi;
	BOOL bRes;
	char *buf;
	
	// Bitmap header
	bi.bmiHeader.biSize = sizeof(bi.bmiHeader);
	bi.bmiHeader.biWidth = m_nWidth;
	bi.bmiHeader.biHeight = m_nHeight;
	bi.bmiHeader.biPlanes = 1;
	bi.bmiHeader.biBitCount = 32;
	bi.bmiHeader.biCompression = BI_RGB;
	bi.bmiHeader.biSizeImage = m_nWidth * 4 * m_nHeight;
	bi.bmiHeader.biClrUsed = 0;
	bi.bmiHeader.biClrImportant = 0;

	buf = (char *) malloc(m_nWidth * 4 * m_nHeight);
	bRes = GetDIBits(hMemDC, m_hBitmap, 0, m_nHeight, buf, &bi,
					   DIB_RGB_COLORS);	
	long nCount=0;	
	for (int i=0; i<m_nHeight; ++i)
	{
		for (int j=0; j<m_nWidth; ++j)
		{
			long lVal=0;
			memcpy(&lVal, &buf[nCount], 4);
			// Get the color value from buffer
			int b = GetRValue(lVal);
			int g = GetGValue(lVal);
			int r = GetBValue(lVal);

			// get the average color value
			lVal = (r+g+b)/3;

			// assign to RGB color			
			lVal = RGB(lVal, lVal, lVal);
			memcpy(&buf[nCount], &lVal, 4);

			nCount+=4;
		}
	}

	SetDIBits(hMemDC, m_hBitmap, 0, bRes, buf,  &bi,
					   DIB_RGB_COLORS);
	
	free(buf);

	RECT tmpRect = r;
	tmpRect.right += 20;
	tmpRect.bottom += 30;
	
	InvalidateRect(&tmpRect, FALSE);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// Method name	: DisplayInvertColor
// Arguments	:
//	1) HDC hMemDC	-- Device context
//	2) RECT &r		-- Rectangle poisition
// Return type	: void
// Formula		: Color = 255 - Color; if (Color<0) color = 0; if (Color>255) Color = 255;
// Precondition	: 1)gdiplus should be intialize
// Postcondition: None
/////////////////////////////////////////////////////////////////////////////////////////////////
void CVIMESPictureView::DisplayInvertColor(HDC hMemDC, RECT &r)
{
	BITMAPINFO bi;
	BOOL bRes;
	char *buf;
	// Bitmap header
	bi.bmiHeader.biSize = sizeof(bi.bmiHeader);
	bi.bmiHeader.biWidth = m_nWidth;
	bi.bmiHeader.biHeight = m_nHeight;
	bi.bmiHeader.biPlanes = 1;
	bi.bmiHeader.biBitCount = 32;
	bi.bmiHeader.biCompression = BI_RGB;
	bi.bmiHeader.biSizeImage = m_nWidth * 4 * m_nHeight;
	bi.bmiHeader.biClrUsed = 0;
	bi.bmiHeader.biClrImportant = 0;

	buf = (char *) malloc(m_nWidth * 4 * m_nHeight);
	bRes = GetDIBits(hMemDC, m_hBitmap, 0, m_nHeight, buf, &bi,
					   DIB_RGB_COLORS);	
	long nCount=0;	
	for (int i=0; i<m_nHeight; ++i)
	{
		for (int j=0; j<m_nWidth; ++j)
		{
			long lVal=0;
			memcpy(&lVal, &buf[nCount], 4);
			int b = 255-GetRValue(lVal);
			int g = 255-GetGValue(lVal);
			int r = 255-GetBValue(lVal);
			
			lVal = RGB(b, g, r);
			
			memcpy(&buf[nCount], &lVal, 4);

			nCount+=4;
		}
	}

	SetDIBits(hMemDC, m_hBitmap, 0, bRes, buf,  &bi,
					   DIB_RGB_COLORS);		
	free(buf);

	RECT tmpRect = r;
	tmpRect.right += 20;
	tmpRect.bottom+= 30;
	
	InvalidateRect(&tmpRect, FALSE);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// Method name	: DisplayBlur
// Arguments	:
//	1) HDC hMemDC -- Device context
//	2) RECT &r    -- Rectangle position
// Return type	: void
// Formula		: (C1+C2+C3+C4+C5)/5 (Get the nearby pixel. add and get the average)
// Precondition	: 1)gdiplus should be intialize
// Postcondition: None
/////////////////////////////////////////////////////////////////////////////////////////////////
void CVIMESPictureView::DisplayBlur(HDC hMemDC, RECT &r)
{
	BITMAPINFO bi;
	BOOL bRes;
	char *pOriBuf; // pointer to a original buffer
	// Bitmap header
	bi.bmiHeader.biSize = sizeof(bi.bmiHeader);
	bi.bmiHeader.biWidth = m_nWidth;
	bi.bmiHeader.biHeight = m_nHeight;
	bi.bmiHeader.biPlanes = 1;
	bi.bmiHeader.biBitCount = 32;
	bi.bmiHeader.biCompression = BI_RGB;
	bi.bmiHeader.biSizeImage = m_nWidth * 4 * m_nHeight;
	bi.bmiHeader.biClrUsed = 0;
	bi.bmiHeader.biClrImportant = 0;
	
	pOriBuf = (char *) malloc(m_nWidth * 4 * m_nHeight);
	// Store new value into tempravary buffer
	char *tmpBuf = (char *) malloc(m_nWidth * 4 * m_nHeight);
	bRes = GetDIBits(hMemDC, m_hBitmap, 0, m_nHeight, pOriBuf, &bi,
					   DIB_RGB_COLORS);	
	long nCount=0;
	long c1, c2, c3, c4, c5;

	// Retrive from original buffer
	// Caluculate the value and store new value into tmpBuf
	for (int i=0; i<m_nHeight; ++i)
	{
		for (int j=0; j<m_nWidth; ++j)
		{
			long lVal=0;
			memcpy(&lVal, &pOriBuf[nCount], 4);
			int b = GetRValue(lVal);
			int g = GetGValue(lVal);
			int r = GetBValue(lVal);

			c1 = r;
			// Red
			if ((nCount < ((m_nHeight-1)*m_nWidth*4l)) && (nCount > (m_nWidth*4)))
			{
				memcpy(&lVal, &pOriBuf[nCount-(m_nWidth*4l)], 4);
				c2 = GetBValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount+4], 4);
				c3 = GetBValue(lVal);

				memcpy(&lVal, &pOriBuf[(nCount+(m_nWidth*4l))], 4);
				c4 = GetBValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount-4], 4);
				c5 = GetBValue(lVal);
				
				r = (c1+c2+c3+c4+c5)/5;
			}

			// Green
			c1 = g;
			if ((nCount < ((m_nHeight-1)*m_nWidth*4l)) && (nCount > (m_nWidth*4)))
			{
				memcpy(&lVal, &pOriBuf[(nCount-(m_nWidth*4l))], 4);
				c2 = GetGValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount+4], 4);
				c3 = GetGValue(lVal);

				memcpy(&lVal, &pOriBuf[(nCount+(m_nWidth*4l))], 4);
				c4 = GetGValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount-4], 4);
				c5 = GetGValue(lVal);

				g = (c1+c2+c3+c4+c5)/5;
			}

			// Blue
			c1 = b;
			if ((nCount < ((m_nHeight-1)*m_nWidth*4l)) && (nCount > (m_nWidth*4)))
			{
				memcpy(&lVal, &pOriBuf[(nCount-(m_nWidth*4l))], 4);
				c2 = GetRValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount+4], 4);
				c3 = GetRValue(lVal);

				memcpy(&lVal, &pOriBuf[(nCount+(m_nWidth*4l))], 4);
				c4 = GetRValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount-4], 4);
				c5 = GetRValue(lVal);

				b = (c1+c2+c3+c4+c5)/5;
			}

			// Store in reverse order
			lVal = RGB(b, g, r);
			
			memcpy(&tmpBuf[nCount], &lVal, 4);

			nCount+=4;
		}
	}

	// Store tmpBuf
	SetDIBits(hMemDC, m_hBitmap, 0, bRes, tmpBuf,  &bi,
					   DIB_RGB_COLORS);		
	free(pOriBuf);
	free(tmpBuf);

	RECT tmpRect = r;
	tmpRect.right += 20;
	tmpRect.bottom+= 30;
	
	InvalidateRect(&tmpRect, FALSE);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// Method name	: DisplaySharpness
// Arguments	:
//	1) HDC hMemDC -- Device context
//	2) RECT &r    -- Rectangle position
// Return type	: void
// Formula		: (C1*5) - (C2+C3+C4+C5)
// Precondition	: 1)gdiplus should be intialize
// Postcondition: None
/////////////////////////////////////////////////////////////////////////////////////////////////
void CVIMESPictureView::DisplaySharpness(HDC hMemDC, RECT &r)
{
	BITMAPINFO bi;
	BOOL bRes;
	char *pOriBuf; // Original buffer
	// Bitmap header
	bi.bmiHeader.biSize = sizeof(bi.bmiHeader);
	bi.bmiHeader.biWidth = m_nWidth;
	bi.bmiHeader.biHeight = m_nHeight;
	bi.bmiHeader.biPlanes = 1;
	bi.bmiHeader.biBitCount = 32;
	bi.bmiHeader.biCompression = BI_RGB;
	bi.bmiHeader.biSizeImage = m_nWidth * 4 * m_nHeight;
	bi.bmiHeader.biClrUsed = 0;
	bi.bmiHeader.biClrImportant = 0;

	pOriBuf = (char *) malloc(m_nWidth * 4 * m_nHeight);
	char *tmpBuf = (char *) malloc(m_nWidth * 4 * m_nHeight);

	bRes = GetDIBits(hMemDC, m_hBitmap, 0, m_nHeight, pOriBuf, &bi,
					   DIB_RGB_COLORS);	
	long nCount=0;
	long c1, c2, c3, c4, c5;

	// Retrive from original buffer
	// Caluculate the value and store new value into tmpBuf
	for (int i=0; i<m_nHeight; ++i)
	{
		for (int j=0; j<m_nWidth; ++j)
		{
			long lVal=0;
			memcpy(&lVal, &pOriBuf[nCount], 4);
			int b = GetRValue(lVal);
			int g = GetGValue(lVal);
			int r = GetBValue(lVal);

			c1 = r;
			// Red
			if ((nCount < ((m_nHeight-1)*m_nWidth*4l)) && (nCount > (m_nWidth*4)))
			{
				memcpy(&lVal, &pOriBuf[nCount-(m_nWidth*4l)], 4);
				c2 = GetBValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount+4], 4);
				c3 = GetBValue(lVal);

				memcpy(&lVal, &pOriBuf[(nCount+(m_nWidth*4l))], 4);
				c4 = GetBValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount-4], 4);
				c5 = GetBValue(lVal);
				
				r = (c1*5) - (c2+c3+c4+c5);
			}

			// Green
			c1 = g;
			if ((nCount < ((m_nHeight-1)*m_nWidth*4l)) && (nCount > (m_nWidth*4)))
			{
				memcpy(&lVal, &pOriBuf[(nCount-(m_nWidth*4l))], 4);
				c2 = GetGValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount+4], 4);
				c3 = GetGValue(lVal);

				memcpy(&lVal, &pOriBuf[(nCount+(m_nWidth*4l))], 4);
				c4 = GetGValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount-4], 4);
				c5 = GetGValue(lVal);

				g = (c1*5) - (c2+c3+c4+c5);
			}

			// Blue
			c1 = b;
			if ((nCount < ((m_nHeight-1)*m_nWidth*4l)) && (nCount > (m_nWidth*4)))
			{
				memcpy(&lVal, &pOriBuf[(nCount-(m_nWidth*4l))], 4);
				c2 = GetRValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount+4], 4);
				c3 = GetRValue(lVal);

				memcpy(&lVal, &pOriBuf[(nCount+(m_nWidth*4l))], 4);
				c4 = GetRValue(lVal);

				memcpy(&lVal, &pOriBuf[nCount-4], 4);
				c5 = GetRValue(lVal);

				b = (c1*5) - (c2+c3+c4+c5);
			}

			// Red
			if (r >255)
			{
				r = 255;
			}
			if (r <0)
			{
				r = 0;
			}
			
			// Green
			if (g>255)
			{
				g = 255;
			}
			if (g<0)
			{
				g = 0;
			}

			// Blue			
			if (b >255)
			{
				b = 255;
			}
			if (b<0)
			{
				b = 0;
			}

			// Store in reverse order
			lVal = RGB(b, g, r);
			
			memcpy(&tmpBuf[nCount], &lVal, 4);

			nCount+=4;
		}
	}

	// Store tmpBuf
	SetDIBits(hMemDC, m_hBitmap, 0, bRes, tmpBuf,  &bi,
					   DIB_RGB_COLORS);		
	free(pOriBuf);
	free(tmpBuf);

	RECT tmpRect = r;
	tmpRect.right += 20;
	tmpRect.bottom+= 30;
	
	InvalidateRect(&tmpRect, FALSE);
}
void CVIMESPictureView::ScaleTransformZoom(HDC hdc)
{
   //Graphics graphics(hdc);
   //Pen pen(Color(255, 0, 0, 255));

   //graphics.TranslateTransform(80.0f, 80.0f);               // first translate
   //graphics.ScaleTransform(3.0f, 1.0f, MatrixOrderAppend);  // then scale
   //graphics.DrawEllipse(&pen, 0, 0, 50, 50);
}
//void CVIMESPictureView::OnCustomdrawSliderRed(NMHDR* pNMHDR, LRESULT* pResult) 
//{
//	NMCUSTOMDRAW nmcd = *(LPNMCUSTOMDRAW)pNMHDR;
//
//    if ( nmcd.dwDrawStage == CDDS_PREPAINT )
//    {
//        *pResult = CDRF_NOTIFYITEMDRAW ;
//        return;
//    }
//    
//	if ( nmcd.dwDrawStage == CDDS_ITEMPREPAINT )
//    {
//        if ( nmcd.dwItemSpec == TBCD_THUMB )
//        {
//            CDC* pDC = CDC::FromHandle( nmcd.hdc );
//			CBrush brush(RGB(255, 0, 0));
//			CPen pen(PS_SOLID, 1, RGB(255, 0, 0));
//            pDC->SelectObject( brush );
//            pDC->SelectObject( pen );
//            pDC->Ellipse( &(nmcd.rc) );
//            pDC->Detach();
//            *pResult = CDRF_SKIPDEFAULT;
//        }
//    } 
//}
//
//void CVIMESPictureView::OnCustomdrawSliderGreen(NMHDR* pNMHDR, LRESULT* pResult) 
//{
//	NMCUSTOMDRAW nmcd = *(LPNMCUSTOMDRAW)pNMHDR;
//
//    if ( nmcd.dwDrawStage == CDDS_PREPAINT )
//    {
//        *pResult = CDRF_NOTIFYITEMDRAW ;
//        return;
//    }
//    
//	if ( nmcd.dwDrawStage == CDDS_ITEMPREPAINT )
//    {
//        if ( nmcd.dwItemSpec == TBCD_THUMB )
//        {
//            CDC* pDC = CDC::FromHandle( nmcd.hdc );
//			CBrush brush(RGB(0, 255, 0));
//			CPen pen(PS_SOLID, 1, RGB(0, 255, 0));
//            pDC->SelectObject( brush );
//            pDC->SelectObject( pen );
//            pDC->Ellipse( &(nmcd.rc) );
//            pDC->Detach();
//            *pResult = CDRF_SKIPDEFAULT;
//        }
//    }
//}
//
//void CVIMESPictureView::OnCustomdrawSliderBlue(NMHDR* pNMHDR, LRESULT* pResult) 
//{	
//	NMCUSTOMDRAW nmcd = *(LPNMCUSTOMDRAW)pNMHDR;
//
//    if ( nmcd.dwDrawStage == CDDS_PREPAINT )
//    {
//        *pResult = CDRF_NOTIFYITEMDRAW ;
//        return;
//    }
//    
//	if ( nmcd.dwDrawStage == CDDS_ITEMPREPAINT )
//    {
//        if ( nmcd.dwItemSpec == TBCD_THUMB )
//        {
//            CDC* pDC = CDC::FromHandle( nmcd.hdc );
//			CBrush brush(RGB(0, 0, 255));
//			CPen pen(PS_SOLID, 1, RGB(0, 0, 255));
//            pDC->SelectObject( brush );
//            pDC->SelectObject( pen );
//            pDC->Ellipse( &(nmcd.rc) );
//            pDC->Detach();
//            *pResult = CDRF_SKIPDEFAULT;
//        }
//    }
//}
//

BEGIN_MESSAGE_MAP(CVIMESPictureView, CGuiDialog)
//	//{{AFX_MSG_MAP(CVIMESPictureView)	
//	ON_NOTIFY_REFLECT(NM_CUSTOMDRAW, OnCustomdrawSliderRed)	
//	ON_NOTIFY_REFLECT(NM_CUSTOMDRAW, OnCustomdrawSliderGreen)
//	ON_NOTIFY_REFLECT(NM_CUSTOMDRAW, OnCustomdrawSliderBlue)
////	ON_WM_VSCROLL()
//	ON_WM_HSCROLL()
//	//}}AFX_MSG_MAP
	ON_WM_PAINT()
	ON_WM_HSCROLL()
	ON_WM_VSCROLL()
END_MESSAGE_MAP()

void CVIMESPictureView::OnPaint()
{ 
	CPaintDC dc(this); // device context for painting
	BitBlt(dc.m_hDC, m_Rect.left, m_Rect.top,
					m_nWidth, m_nHeight,
					m_hMemDC, 0, 0, SRCCOPY);
	
	CDialog::OnPaint();	
}
int CVIMESPictureView::GetImageWidth()
{
	return m_nWidth;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// Method name	: GetImageHeight
// Arguments	: void
// Return type	: int
// Description	: Gets the image Height, in pixels, of this image
// Precondition	: Image should be load
// Postcondition:
/////////////////////////////////////////////////////////////////////////////////////////////////
int CVIMESPictureView::GetImageHeight()
{
	return m_nHeight;
}
HDC CVIMESPictureView::LoadImage(HDC hDC, CString pszImageName, RECT &r)
{
	if (m_hBitmap)
	{
		DeleteObject(m_hBitmap);
		m_hBitmap = NULL;
	}


	HDC hMemDC = CreateCompatibleDC(hDC);	

	if (!pszImageName.IsEmpty())
	{
		
		//SetWindowText(pszImageName);
		m_bLoadImage = true;	

		CDC *pDC = GetDC();		
		
		if (NULL != m_hMemDC)
		{
			DeleteDC(m_hMemDC);
			m_hMemDC = NULL;
		}

		// Load the image and get the memory device context.
		
		Image image(pszImageName);
		Pen pen(Color(255, 0, 0, 255));

		m_nWidthImage  = image.GetWidth();
		m_nHeightImage = image.GetHeight();
		m_szDimensions.Format(_T("%d x %d "), image.GetWidth(), image.GetHeight());
		m_szCurrentImage = _T("1");

		m_wndGroupPricture.GetClientRect(&m_Rect);		
		m_Rect.left = m_Rect.left + 10;
		m_Rect.top = m_Rect.top + 30;
		m_Rect.right = m_Rect.right - 7;
		m_Rect.bottom = m_Rect.bottom - 27;
	
		m_nWidth = m_Rect.right;
		m_nHeight = m_Rect.bottom ;

		//m_nWidth = image.GetWidth();
		//m_nHeight = image.GetHeight();

		m_hBitmap = CreateCompatibleBitmap(hDC, m_nWidth, m_nHeight);
		SelectObject(hMemDC, m_hBitmap);

		Graphics g(hMemDC);
		Rect rect(0, 0, m_nWidth, m_nHeight);
		
		g.DrawImage(&image, rect);
		
		RECT tmpRect = r;
		tmpRect.right += 20;
		tmpRect.bottom+= 30;

		InvalidateRect(&tmpRect, FALSE);
	}	
	
	UpdateData(false);
	return hMemDC;
}

void CVIMESPictureView::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default
	CDC *pDC = GetDC();
	CString tszBuf;
	// Red	
	//UpdateData(true);
	m_nRed = m_wndRed.GetPos();
	m_nGreen = m_wndGreen.GetPos();
	m_nBlue = m_wndBlue.GetPos();
	m_nContrast = m_wndContrast.GetPos();

	if(m_wndRed.m_hWnd == pScrollBar->m_hWnd){
		tszBuf.Format(_T("%d"),m_nRed);
		m_wndRedPost.SetWindowText(tszBuf);		
		DisplayBrightness(m_hMemDC, m_Rect, m_nRed, m_nGreen, m_nBlue);
		ReleaseDC(pDC);		
	}
	else	// Green
	if(m_wndGreen.m_hWnd == pScrollBar->m_hWnd){
		tszBuf.Format(_T("%d"),m_nGreen);
		m_wndGreenPost.SetWindowText(tszBuf);		
		DisplayBrightness(m_hMemDC, m_Rect, m_nRed, m_nGreen, m_nBlue);
		ReleaseDC(pDC);
	} else	// Blue
	if(m_wndBlue.m_hWnd == pScrollBar->m_hWnd){
		tszBuf.Format(_T("%d"),m_nBlue);
		m_wndBluePost.SetWindowText(tszBuf);		
		DisplayBrightness(m_hMemDC, m_Rect, m_nRed, m_nGreen, m_nBlue);
		ReleaseDC(pDC);
	} else 	// Contrast
	if(m_wndContrast.m_hWnd == pScrollBar->m_hWnd){
		tszBuf.Format(_T("%d"),m_wndContrast.GetPos());
		m_wndContrastPostLabel.SetWindowText(tszBuf);	
		//if (100 != m_nContrast)
		{			
			DisplayContrast(pDC->m_hDC, m_Rect, m_nContrast);		
			ReleaseDC(pDC);
		}
	}

	//UpdateData(false);	
    //_tprintf(_T("\r\n\%s"), tszBuf);	
	//CGuiDialog::OnHScroll(nSBCode, nPos, pScrollBar);
}

void CVIMESPictureView::OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	// TODO: Add your message handler code here and/or call default

	//CGuiDialog::OnVScroll(nSBCode, nPos, pScrollBar);
}
/*
bool CVIMESPictureView::SetBrightness(Bitmap* bmp, long nBrightness){
	if (nBrightness < -255 || nBrightness > 255)
		return false;

			// GDI+ still lies to us - the return format is BGR, NOT RGbmp->
	BitmapData bmData;
	Rect rect = Rect(0, 0, bmp->GetWidth(), bmp->GetHeight());
	bmp->LockBits(&rect, ImageLockModeRead|ImageLockModeWrite, PixelFormat24bppRGB, &bmData);

	int stride = bmData.Stride;
	
	UINT* Scan0 = (UINT*)bmData.Scan0;

	int nVal = 0;
	byte * p = (byte *)(void *)Scan0;

	int nOffset = stride - bmp->GetWidth()*3;
	int nWidth = bmp->GetWidth() * 3;
	for(int y=0;y<bmp->GetHeight();++y)
	{
		for(int x=0; x < nWidth; ++x )
		{
			nVal = (int) (p[0] + nBrightness);
			if (nVal < 0) nVal = 0;
			if (nVal > 255) nVal = 255;
			p[0] = (byte)nVal;
			++p;
		}
		p += nOffset;
	}
	bmp->UnlockBits(&bmData);
	return true;
}
bool CVIMESPictureView::SetContrast(Bitmap* bmp, int nContrast){
	if (nContrast < -100) return false;
	if (nContrast >  100) return false;

	double pixel = 0, contrast = (100.0+nContrast)/100.0;

	contrast *= contrast;

	int red, green, blue;
	Rect rect = Rect(0, 0, bmp->GetWidth(), bmp->GetHeight());
			
			// GDI+ still lies to us - the return format is BGR, NOT RGB.
	BitmapData bmData;
	bmp->LockBits(&rect, ImageLockModeRead|ImageLockModeWrite, PixelFormat24bppRGB, &bmData);

	int stride = bmData.Stride;
	UINT* Scan0 = (UINT*)bmData.Scan0;
	byte * p = (byte *)(void *)Scan0;

	int nOffset = stride - bmp->GetWidth()*3;

	for(int y=0;y<bmp->GetHeight();++y)
	{
		for(int x=0; x < bmp->GetWidth(); ++x )
		{
						blue = p[0];
						green = p[1];
						red = p[2];
				
						pixel = red/255.0;
						pixel -= 0.5;
						pixel *= contrast;
						pixel += 0.5;
						pixel *= 255;
						if (pixel < 0) pixel = 0;
						if (pixel > 255) pixel = 255;
						p[2] = (byte) pixel;

						pixel = green/255.0;
						pixel -= 0.5;
						pixel *= contrast;
						pixel += 0.5;
						pixel *= 255;
						if (pixel < 0) pixel = 0;
						if (pixel > 255) pixel = 255;
						p[1] = (byte) pixel;

						pixel = blue/255.0;
						pixel -= 0.5;
						pixel *= contrast;
						pixel += 0.5;
						pixel *= 255;
						if (pixel < 0) pixel = 0;
						if (pixel > 255) pixel = 255;
						p[0] = (byte) pixel;					

						p += 3;
		}
					p += nOffset;
	}

	bmp->UnlockBits(&bmData);
	return true;
}
*/
