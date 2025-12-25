#include "HMSTreatmentCareInputDialog.h"
#include "HMSTreatmentCareDialog.h"
#include "MainFrm.h"
#include "HMSReasonDialog.h"
#include "PhieuChamSocBenhNhanTruocPhauThuat.h"
#include "HMSTreatmentHtmlDialog.h"
#include "HMSCareInputHtmlDialog.h"
#include "HMSSelectionListDialog.h"
#include "HMSReportForms/PrintForms.h"
#include "HMSCareInputHtmlDialog.h"
#include "HMSSelectionListDialog.h"
#include "HMSReportForms/PrintForms.h"

using namespace Gdiplus;
// khai bao in bieu do chuc nang song

typedef struct tagCHUCNANGSONG{
	CString ngay;
	CString gio;
	int		mach;
	float	nhietdo;
} CHUCNANGSONG;

typedef struct tagDRAWDATE{
	CString date;
	float x;
	float width;
}DRAWDATE;

class ChartObject2 :public CReportItem 
{
public:
	int m_nCols;
	int m_nRows;
	CArray<float,float> m_lstMach;
	CArray<float,float> m_lstNhietdo;
	CArray<CHUCNANGSONG, CHUCNANGSONG> m_lstChucnang;
	ChartObject2(CReportItem* obj){
		this->Copy(obj);
		m_nCols = 20;
		m_nRows = 70;
	}
	~ChartObject2(){}

	
	void AddValue(CString ngay, CString gio, int mach, float nhietdo)
	{
		CHUCNANGSONG cs;

		cs.ngay = ngay;
		cs.gio = gio;
		cs.mach = mach;
		cs.nhietdo = nhietdo;
		m_lstChucnang.Add(cs);

	}

	virtual void	Print(CDC* pDC, CRect rect, float nZoom = 1){
		
		//printf("chart object");
		CReportItem::Print(pDC, rect, nZoom);

		CRect rc = m_rect;
		rc.MoveToXY(0,0);
		CDC memDC;
		
		CDC *dcScreen =  CDC::FromHandle(::GetDC(GetDesktopWindow()));

		memDC.CreateCompatibleDC(pDC);		
		

		int ixp=pDC->GetDeviceCaps(LOGPIXELSX);
		int iyp=pDC->GetDeviceCaps(LOGPIXELSY);

	
		int ixd=dcScreen->GetDeviceCaps(LOGPIXELSX);
		int iyd=dcScreen->GetDeviceCaps(LOGPIXELSY);
            
		float scale = (float)(1.0*iyd/(float)iyp)+0.0065;
		//scale = iyd/(float)iyp;
		CBitmap bmp;
		bmp.CreateCompatibleBitmap(pDC, rc.Width(), rc.Height());
		memDC.SelectObject(&bmp);
		Bitmap bm(rc.Width(), rc.Height());
		Graphics gr(memDC.m_hDC);

		gr.SetSmoothingMode(SmoothingModeHighQuality);
		
		if(pDC->IsPrinting())
		{
			gr.ScaleTransform((REAL)scale, (REAL)scale);
		}
		
		
		Pen pen(Color(192, 192, 192), 0.5);
		Pen penBold(Color(64, 64, 64), 1);


		float w, h, x, y;
		
		int nFaceSize = 8;
		Gdiplus::Font myFont(m_szFaceName, nFaceSize);
		PointF origin(0.0f, 0.0f);
		SolidBrush blackBrush(Color(255, 0, 0, 0));

   
		//Draw
		SolidBrush br(Color(255,255,255));		
		gr.FillRectangle(&br, 0, 0, rc.Width(), rc.Height());
		gr.DrawRectangle(&pen, 0, 0, rc.Width()-1, rc.Height()-1);

		
		x = 0;
		y = 0;
		
		w = (float)rc.Width()/m_nCols;
		h = (float)(rc.Height()-50)/m_nRows;
		Gdiplus::Font font(pDC->m_hDC);
		
		gr.DrawRectangle(&pen, 0, 0, rc.Width()-1, 25);
		for (int i =0; i < m_nCols; i++)
		{
			gr.DrawLine(&penBold, Point(x,y+25), Point(x, y+rc.Height()));
			if(i < m_lstChucnang.GetCount())
			{
				CHUCNANGSONG cs = m_lstChucnang.GetAt(i);
				origin = PointF(x+2,y+30);
				const RectF rcLayout = RectF(x, y+30.0, w, 25.0);
				StringFormat fmt;
				fmt.SetAlignment(StringAlignmentCenter);
				gr.DrawString(cs.gio,cs.gio.GetLength(),&myFont,rcLayout, &fmt,&blackBrush);
			}
			x += w;
		}
		x = 0;
		y += 50;
		for (int j =0; j < m_nRows; j++)
		{
			if(j%10==0)
				gr.DrawLine(&penBold, Point(x,y), Point(x+rc.Width(), y));
			else
				gr.DrawLine(&pen, Point(x,y), Point(x+rc.Width(), y));
			y+=h;
		}
		
		float w2 = w/2;
		float x1, x2;
		float y1, y2;
		
		Pen penLine(Color(255,0,0), 2);
		Pen penLine2(Color(0, 0, 255), 2);
		Pen penLine1X(Color(255,0,0), 3);
		Pen penLine2X(Color(0, 0, 255), 3);
		
		x1 = w2;
		for (int i =0; i < m_lstChucnang.GetCount()-1; i++)
		{
			CHUCNANGSONG cs = m_lstChucnang[i];
			CHUCNANGSONG cs2 = m_lstChucnang[i+1];
			float y1 = rc.Height()- (cs.nhietdo*10-350)*h;
			float y2 = rc.Height() -(cs2.nhietdo*10-350)*h;
			x2 = x1+w;
			 
			SolidBrush br2(Color(0,0,255));
			gr.FillEllipse(&br2, x1-4, y1-4, 8.0, 8.0);
			gr.DrawLine(&penLine2, PointF(x1, y1), PointF(x2, y2));
			gr.FillEllipse(&br2, x2-4, y2-4, 8.0, 8.0);
			/*x mark*/
			/*
			gr.DrawLine(&penLine2X, PointF(x2-5, y2-5), PointF(x2+5, y2+5));
			gr.DrawLine(&penLine2X, PointF(x2-5, y2+5), PointF(x2+5, y2-5));
			*/
			x1 += w;
		}

		penLine.SetDashStyle(DashStyleDashDotDot);
		x1 = w2;
		for (int i =0; i < m_lstChucnang.GetCount()-1; i++)
		{
			CHUCNANGSONG cs = m_lstChucnang[i];
			CHUCNANGSONG cs2 = m_lstChucnang[i+1];
			float y1 = rc.Height()- (cs.mach*10-400)*h/20;
			float y2 = rc.Height() -(cs2.mach*10-400)*h/20;
			x2 = x1+w;

			SolidBrush br2(Color(255,0,0));
			//gr.FillEllipse(&br2, x1-3, y1-3, 6.0, 6.0);
			gr.DrawLine(&penLine, PointF(x1, y1), PointF(x2, y2));
			//gr.FillEllipse(&br2, x2-3, y2-3, 6.0, 6.0);
			/*x mark*/
			gr.DrawLine(&penLine1X, PointF(x2-5, y2-5), PointF(x2+5, y2+5));
			gr.DrawLine(&penLine1X, PointF(x2-5, y2+5), PointF(x2+5, y2-5));
			x1 += w;
		}
		
		gr.DrawRectangle(&penBold, 0, 0, rc.Width()-1, 25);
		
		
		
		CArray<DRAWDATE, DRAWDATE> lstDrawDate;
		float width = 0;
		CString szOldDate=_T(""), szDate;

		x = 0;
		int i = 0;
		for (int i =0; i < m_lstChucnang.GetCount(); i++)
		{
			CHUCNANGSONG cs = m_lstChucnang[i];
			szDate = cs.ngay;
			bool found = false;
			for(int j =0; j < lstDrawDate.GetCount(); j++)
			{
				DRAWDATE dd = lstDrawDate[j];
				if(dd.date == szDate)
				{
					found = true;
					break;
				}
			}
			if(!found)
			{
				DRAWDATE dd;
				dd.date = szDate;
				dd.x = x;
				width = 0;
				for (int j =0; j < m_lstChucnang.GetCount(); j++)
				{
					CHUCNANGSONG cs = m_lstChucnang[j];
					if(cs.ngay == szDate)
					{
						width += w;
					}
				}
				dd.width = width;
				lstDrawDate.Add(dd);
			}
			x+=w;
			
			
		}
		for(int i =0; i < lstDrawDate.GetCount(); i++)
		{
			DRAWDATE dd = lstDrawDate[i];
			//printf("\r\n%d: x=%f: width=%f\r\n", i, dd.x, dd.width);
			x = dd.x;
			width = dd.width;
			szDate = dd.date;

			const RectF rcLayout = RectF(x, 5.0, width, 25.0);
			gr.DrawRectangle(&penBold, (REAL)x, (REAL)0, (REAL)width, (REAL)25);
						
			StringFormat fmt;
			fmt.SetAlignment(StringAlignmentCenter);
			gr.DrawString(szDate, szDate.GetLength(),&myFont, rcLayout, &fmt, &blackBrush);
		}		
		rc = m_rect;
		rc.OffsetRect(rect.left, rect.top);
		pDC->BitBlt(rc.left, rc.top, rc.Width(), rc.Height(), &memDC, 0, 0, SRCCOPY);

		::ReleaseDC(GetDesktopWindow(), dcScreen->m_hDC);
	}
};

static void _OnMonthSelectChangeFnc(CWnd *pWnd, int nOldItemSel, int nNewItemSel){
	((CHMSTreatmentCareDialog* )pWnd)->OnMonthSelectChange(nOldItemSel, nNewItemSel);
} 
static void _OnMonthSelendokFnc(CWnd *pWnd){
	((CHMSTreatmentCareDialog *)pWnd)->OnMonthSelendok();
}
/*static void _OnMonthSetfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareDialog *)pWnd)->OnMonthKillfocus();
}*/
/*static void _OnMonthKillfocusFnc(CWnd *pWnd){
	((CHMSTreatmentCareDialog *)pWnd)->OnMonthKillfocus();
}*/
static long _OnMonthLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareDialog *)pWnd)->OnMonthLoadData();
}
/*static void _OnMonthAddNewFnc(CWnd *pWnd){
	((CHMSTreatmentCareDialog *)pWnd)->OnMonthAddNew();
}*/
static long _OnTreatListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareDialog*)pWnd)->OnTreatListLoadData();
} 
static void _OnTreatListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentCareDialog*)pWnd)->OnTreatListDblClick();
} 
static void _OnTreatListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentCareDialog*)pWnd)->OnTreatListSelectChange(nOldItem, nNewItem);
} 
static int _OnTreatListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareDialog*)pWnd)->OnTreatListDeleteItem();
}

static int _OnTreatListDrugOrderCopyItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareDialog*)pWnd)->OnTreatListDrugOrderCopyItem();
}


static int _OnTreatListDrugOrderAdviceItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareDialog*)pWnd)->OnTreatListDrugOrderAdviceItem();
}


static long _OnDateListLoadDataFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareDialog*)pWnd)->OnDateListLoadData();
} 
static void _OnDateListDblClickFnc(CWnd *pWnd){
	((CHMSTreatmentCareDialog*)pWnd)->OnDateListDblClick();
} 
static void _OnDateListSelectChangeFnc(CWnd *pWnd, int nOldItem, int nNewItem){
	((CHMSTreatmentCareDialog*)pWnd)->OnDateListSelectChange(nOldItem, nNewItem);
} 
static int _OnDateListDeleteItemFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareDialog*)pWnd)->OnDateListDeleteItem();
} 
static void _OnCareSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareDialog *pVw = (CHMSTreatmentCareDialog *)pWnd;
	pVw->OnCareSelect();
} 


static void _OnBeforeOptSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareDialog *pVw = (CHMSTreatmentCareDialog *)pWnd;
	pVw->OnBeforeOptSelect();
}


static void _OnCareAfterOptSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareDialog *pVw = (CHMSTreatmentCareDialog *)pWnd;
	pVw->OnCareAfterOptSelect();
}

static void _OnCareOfNurseSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareDialog *pVw = (CHMSTreatmentCareDialog *)pWnd;
	pVw->OnCareOfNurseSelect();
}

static void _OnPrintSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareDialog *pVw = (CHMSTreatmentCareDialog *)pWnd;
	pVw->OnPrintSelect();
} 
static void _OnCloseSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareDialog *pVw = (CHMSTreatmentCareDialog *)pWnd;
	pVw->OnCloseSelect();
}

static void _OnLockSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareDialog *pVw = (CHMSTreatmentCareDialog *)pWnd;
	pVw->OnLockSelect();
}

static void _OnUnLockSelectFnc(CWnd *pWnd){
	CHMSTreatmentCareDialog *pVw = (CHMSTreatmentCareDialog *)pWnd;
	pVw->OnUnLockSelect();
}

static int _OnShowHistoryFnc(CWnd *pWnd){
	return ((CHMSTreatmentCareDialog*)pWnd)->OnShowHistory();
}

static int _OnAddHMSTreatmentCareDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareDialog*)pWnd)->OnAddHMSTreatmentCareDialog();
} 
static int _OnEditHMSTreatmentCareDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareDialog*)pWnd)->OnEditHMSTreatmentCareDialog();
} 
static int _OnDeleteHMSTreatmentCareDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareDialog*)pWnd)->OnDeleteHMSTreatmentCareDialog();
} 
static int _OnSaveHMSTreatmentCareDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareDialog*)pWnd)->OnSaveHMSTreatmentCareDialog();
} 
static int _OnCancelHMSTreatmentCareDialogFnc(CWnd *pWnd){
	 return ((CHMSTreatmentCareDialog*)pWnd)->OnCancelHMSTreatmentCareDialog();
}
static void _OnTruotngaformSelectFnc(CWnd *pWnd)
{
	CHMSTreatmentCareDialog *pVw = (CHMSTreatmentCareDialog *)pWnd;
	pVw->OnTruotngaformSelect();
}

static int _OnCopyTreatmentCareFnc(CWnd* pWnd) {
	return ((CHMSTreatmentCareDialog*)pWnd)->OnCopyTreatmentCare();
}

CHMSTreatmentCareDialog::CHMSTreatmentCareDialog(CWnd *pParent, int nMode, long nDocumentNo):
	CGuiDialog(pParent){
		CGuiDialog::SetMode(nMode);
	m_nDlgWidth = 965;
	m_nDlgHeight = 605;
	SetDefaultValues();
	m_nDocumentNo = nDocumentNo;
}
CHMSTreatmentCareDialog::~CHMSTreatmentCareDialog()
{
}
void CHMSTreatmentCareDialog::OnCreateComponents()
{
    CMainFrame *pMF = (CMainFrame *)AfxGetMainWnd();
	CRect rect;
	GetDesktopWindow()->GetClientRect(&rect);
    pMF->GetClientRect(&rect);
    float scale = 1.0;
    if (rect.Width() > 1024)
    {
        scale = rect.Width() / 1024.0;
    }
    scale = min(scale, 1.25);
    m_scale = scale;

	
	m_wndTreatmentInformation.Create(this, _T("Treatment Information"), 305, 5, 1000*m_scale, 600);
	m_wndMonthLabel.Create(this, _T("Month"), 5, 5, 85, 30);
	m_wndMonth.Create(this,90, 5, 300, 30); 
	
	m_wndDateList.Create(this, 5, 35, 300, 595);
	m_wndTreatList.Create(this,310, 35, 1000 *m_scale, 595);
	
	int y1 = 605, y2 = 630;
	//y1 = rect.Height()-25;
	//y2 = rect.Height();

	m_wndCare.Create(this, _T("&Add"), 195, y1, 275, y2);
	m_wndBeforeOpt.Create(this, _T("CS trước mổ"), 280, y1, 360, y2);
	m_wndCareAfterOpt.Create(this, _T("CS sau mổ"), 365, y1, 485, y2);
	m_wndCareOfNurse.Create(this, _T("CS của điều dưỡng"), 490, y1, 600, y2);
	m_wndPrint.Create(this, _T("&Print"), 605, y1, 685, y2);
	m_wndClose.Create(this, _T("Close"), 880, y1, 960, y2);
	m_wndTruotngaform.Create(this, _T("Mẫu trượt ngã"), 721, y1, 840, y2);	

	m_wndParaclinic.Create(this, _T(""), 0, 0, 0, 0);
	m_wndParaclinic.ShowWindow(SW_HIDE);
	m_wndParaclinic.EnableWindow(FALSE);
	m_wndSurgeryOpt.Create(this, _T(""), 0, 0, 0, 0);
	m_wndSurgeryOpt.ShowWindow(SW_HIDE);
	m_wndSurgeryOpt.EnableWindow(FALSE);
	m_wndLock.Create(this, _T(""), 0, 0, 0, 0);
	m_wndLock.ShowWindow(SW_HIDE);
	m_wndLock.EnableWindow(FALSE);
	m_wndUnLock.Create(this, _T(""), 0, 0, 0, 0);
	m_wndUnLock.ShowWindow(SW_HIDE);
	m_wndUnLock.EnableWindow(FALSE);

	
	
    
}
void CHMSTreatmentCareDialog::OnInitializeComponents()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	m_wndMonth.SetCheckValue(true);
	m_wndMonth.LimitText(35);

	m_wndMonth.InsertColumn(0, _T("Month"), CFMT_TEXT, 150);
	m_wndMonth.Format(1, 0);

	m_wndTreatList.InsertColumn(1, _T("Diễn biến"), CFMT_TEXT|CFMT_FIXSIZE, 300*m_scale);
	m_wndTreatList.InsertColumn(2, _T("Theo dõi chăm sóc"), CFMT_TEXT|CFMT_FIXSIZE, 300*m_scale);
	m_wndTreatList.InsertColumn(3, _T("Hộ lý, điều dưỡng"), CFMT_TEXT|CFMT_FIXSIZE, 150*m_scale);

	m_wndDateList.InsertColumn(0, _T("Số phiếu"), CFMT_NUMBER, 65);
	m_wndDateList.InsertColumn(1, _T("Ngày giờ"), CFMT_DATETIME, 110);
	m_wndDateList.InsertColumn(2, _T(""), CFMT_TEXT, 0);//idx
	m_wndDateList.InsertColumn(3, _T("User"), CFMT_TEXT, 0);//idx
	m_wndDateList.InsertColumn(4, _T("Status"), CFMT_TEXT, 0);//idx
	m_wndDateList.InsertColumn(5, _T("Trạng thái ký"), CFMT_TEXT, 80);//idx
	m_wndDateList.InsertColumn(6, _T("Type"), CFMT_TEXT, 60);//idx
	m_nTreattime = pMF->GetTreatTime();
}
void CHMSTreatmentCareDialog::OnSetWindowEvents(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	m_wndMonth.SetEvent(WE_SELENDOK, _OnMonthSelendokFnc);
	//m_wndMonth.SetEvent(WE_SETFOCUS, _OnMonthSetfocusFnc);
	//m_wndMonth.SetEvent(WE_KILLFOCUS, _OnMonthKillfocusFnc);
	m_wndMonth.SetEvent(WE_SELCHANGE, _OnMonthSelectChangeFnc);
	m_wndMonth.SetEvent(WE_LOADDATA, _OnMonthLoadDataFnc);
	//m_wndMonth.SetEvent(WE_ADDNEW, _OnMonthCareNewFnc);
	m_wndTreatList.SetEvent(WE_SELCHANGE, _OnTreatListSelectChangeFnc);
	m_wndTreatList.SetEvent(WE_LOADDATA, _OnTreatListLoadDataFnc);
	m_wndTreatList.SetEvent(WE_DBLCLICK, _OnTreatListDblClickFnc);

	m_wndTreatList.AddEvent(1, _T("Delete"), _OnTreatListDeleteItemFnc);

	m_wndDateList.SetEvent(WE_SELCHANGE, _OnDateListSelectChangeFnc);
	m_wndDateList.SetEvent(WE_LOADDATA, _OnDateListLoadDataFnc);
	m_wndDateList.SetEvent(WE_DBLCLICK, _OnDateListDblClickFnc);
	
	m_wndDateList.AddEvent(1, _T("Delete"), _OnDateListDeleteItemFnc);
	m_wndDateList.AddEvent(0, _T("-"), NULL);
	m_wndDateList.AddEvent(2, _T("Show History"), _OnShowHistoryFnc, 0, 0, 0);

	m_wndDateList.AddEvent(0, _T("-"), NULL);
	m_wndDateList.AddEvent(3, _T("Copy phiếu sang bệnh trình"), _OnCopyTreatmentCareFnc);

	m_wndCare.SetEvent(WE_CLICK, _OnCareSelectFnc);
	m_wndBeforeOpt.SetEvent(WE_CLICK, _OnBeforeOptSelectFnc);
	m_wndCareAfterOpt.SetEvent(WE_CLICK, _OnCareAfterOptSelectFnc);
	m_wndCareOfNurse.SetEvent(WE_CLICK, _OnCareOfNurseSelectFnc);
	m_wndPrint.SetEvent(WE_CLICK, _OnPrintSelectFnc);
	m_wndClose.SetEvent(WE_CLICK, _OnCloseSelectFnc);
	m_wndLock.SetEvent(WE_CLICK, _OnLockSelectFnc);
	m_wndUnLock.SetEvent(WE_CLICK, _OnUnLockSelectFnc);
	m_wndTruotngaform.SetEvent(WE_CLICK, _OnTruotngaformSelectFnc);
	int nMode = GetMode();
	SetMode(nMode);
	//_msg(_T("%d"),nMode);
	OnDateListLoadData();
	
	m_wndMonth.EnableWindow(TRUE);
	if(pMF->m_szStatus == _T("T"))
		m_wndCare.EnableWindow(FALSE);

}
void CHMSTreatmentCareDialog::OnDoDataExchange(CDataExchange* pDX){
	DDX_TextEx(pDX, m_wndMonth.GetDlgCtrlID(), m_szMonthKey);

}
void CHMSTreatmentCareDialog::GetDataToScreen(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	szSQL.Format(_T("SELECT * FROM "));
	rs.ExecSQL(szSQL);

}
void CHMSTreatmentCareDialog::GetScreenToData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

}
void CHMSTreatmentCareDialog::SetDefaultValues(){

	m_szMonthKey.Empty();

}
int CHMSTreatmentCareDialog::SetMode(int nMode){
 		int nOldMode = GetMode();
 		CGuiDialog::SetMode(nMode);
 		CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 		CString szSQL;
 		CRecord rs(&pMF->m_db);
  		switch(nMode)
		{
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
 			EnableButtons(FALSE, -1);
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
void CHMSTreatmentCareDialog::OnMonthSelectChange(int nOldItemSel, int nNewItemSel){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
void CHMSTreatmentCareDialog::OnMonthSelendok(){
	UpdateData(TRUE);
	OnDateListLoadData();
}
/*void CHMSTreatmentCareDialog::OnMonthSetfocus(){
	
}*/
/*void CHMSTreatmentCareDialog::OnMonthKillfocus(){
	
}*/
long CHMSTreatmentCareDialog::OnMonthLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL, szWhere;

	
	///
	if(m_wndMonth.IsSearchKey() && !m_szMonthKey.IsEmpty()){
		szWhere.Format(_T(" and month='%s' "), m_szMonthKey);
	};

	szSQL.Format(_T(" SELECT *") \
_T(" FROM") \
_T("   ( SELECT DISTINCT to_char(hci_date,'MM/YYYY') AS MONTH") \
_T("   FROM HMS_CAREINFO") \
_T("   WHERE hci_docno = %ld") \
_T("   ) tbl") \
_T(" WHERE 1=1 %s ORDER BY month ") , m_nDocumentNo, szWhere);


	m_wndMonth.DeleteAllItems(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	m_wndMonth.AddItems(_T("Tất cả"), NULL);
	while(!rs.IsEOF()){ 
		m_wndMonth.AddItems(
			rs.GetValue(_T("month")), 
			NULL);
		rs.MoveNext();
	}
	return nCount;

}
void CHMSTreatmentCareDialog::OnTruotngaformSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
	if(m_nDocumentNo <= 0)
		return;

	//pMF->m_szType = _T("DT_TRUOTNGA");
	CHMSTreatmentHtmlDialog dlg(this, _T("DT_TRUOTNGA"), true);
	dlg.m_szType = L"TN";
	dlg.m_szFile = L"DT_TRUOTNGA.HTML";
	dlg.SetMode(VM_ADD);
	if(dlg.DoModal() == IDOK)
	{
	}
	
	/*CHMSTreatmentHtmlDialog dlg(this, _T(""));
	if(dlg.DoModal() == IDOK)
	{

	}*/

	
} 
/*void CHMSTreatmentCareDialog::OnMonthAddNew(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} */
void CHMSTreatmentCareDialog::OnTreatListDblClick(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndTreatList.GetCurSel();
	if (nSel < 0) return;
	CString tmpStr;
	long nUID = str2long(m_wndTreatList.GetItemText(nSel, 2));
	// neu da ky so thi chi view ko cho sua
	int nMode;
	if (IsSigned(m_nUID))
	{
		tmpStr.Format(_T("Tờ chăm sóc đã ký số, bạn không được phép sửa .Muốn sửa hãy bỏ ký số, Bạn có chắc chắn bỏ ký số không? (Y/N)"));

		int retMsg = ShowMessageBox(tmpStr, MB_YESNO | MB_DEFBUTTON2);
		if (retMsg == IDYES)
		{
			CPrintForms printer;
			printer.TM_OnPrintPhieuChamSoc(m_nDocumentNo, m_nUID,true);
			if (m_szType == _T("CSC1") || m_szType == _T("CSC2"))
			{
				CString szRptName;
				CReport rpt;
				szRptName = m_szType + _T(".RPT");


				if (pMF->OnPostGenDocX(&rpt, _T("phieuchamsoc"), m_nDocumentNo, m_nUID, szRptName, _T(""), _T("")))
					return;
			}
			else
			{
				CPrintForms printer;
				printer.TM_OnPrintPhieuChamSoc(m_nDocumentNo, m_nUID, true);
				printer.TM_OnPrintPhieuChamSoc(m_nDocumentNo, m_nUID);
			}
			return;
		}

		nMode = VM_VIEW;

	}
	else
		nMode = VM_EDIT;




	if (m_szType != _T("CSC1") && m_szType != _T("CSC2"))
	{
		CHMSTreatmentCareInputDialog dlg(this, nMode, m_nDocumentNo, m_nUID);

		if (dlg.DoModal() == IDOK)
		{
			int nSel = m_wndDateList.GetCurSel();
			OnDateListLoadData();
			m_wndDateList.SetCurSel(nSel);
		}
	}
	else
	{
		// kiem tra neu ma khac user
		if (pMF->GetCurrentUser() != m_szCreatedby)
			nMode = VM_VIEW;

		bool bIsedit = false;
		if (nMode == VM_EDIT)
			bIsedit = true;
		CHMSCareInputHtmlDialog dlg(this, m_szType, nMode, bIsedit, _T(""));
		dlg.m_nOptIdx = m_nUID;
		dlg.m_nOrderID = m_nUID;
		
		if (dlg.DoModal() == IDOK)
		{
			m_bType = FALSE;
			OnDateListLoadData();
			int nSel = m_wndDateList.GetCurSel();
			OnDateListSelectChange(0, nSel);
		}
	}
} 


void CHMSTreatmentCareDialog::OnTreatListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	
} 
int CHMSTreatmentCareDialog::OnTreatListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nSel = m_wndTreatList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString tmpStr;
	CString szSQL;
	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không cho phép xóa đề mục"));
		return 0;
	}
	
		int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xóa phiếu đã chọn không?"), MB_YESNO);
		if(ret == IDNO)
			return 0;
		szSQL.Format(_T("HMS_CAREINFO_DELETE(%ld, %ld, '%s') "),m_nDocumentNo,m_nUID, pMF->GetCurrentUser());
		ret = str2int(pMF->ExecDML(szSQL));
		if(ret <= 0)
		{
			if(ret < -1)
			{
				ShowMessageBox(_T("Phiếu đã được thêm cận lâm sàng, PTTT hoặc thuốc, Không cho phép xóa"));
			}
			else
				ShowMessageBox(_T("Không xóa được phiếu điều trị"));
		}
		OnTreatListLoadData();
	 return 0;
} 


#define COLOR_CAPTION RGB(64,128,192)
#define COLOR_GROUP RGB(225, 225, 225)
#define COLOR_GROUP1 RGB(192,192,255)
#define COLOR_GROUP2 RGB(192,192,255)

long CHMSTreatmentCareDialog::OnTreatListLoadData(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL;
	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;
	
	

	CString szPulse, szTemperature, szDisease, szTreatment, szDiet;
	CString tmpStr;
	int nItem=0;
	long nOID;
	int nIndex = 0;
	m_wndTreatList.BeginLoad();
	
	CGridListItem* o = new CGridListItem();
	CGridListItem* o2 = NULL;
	CGridCell* cell = new CGridCell();
	
	

	szSQL.Format(_T("SELECT get_username(hci_nurse) as hci_doctor, hci_pulse, hci_temperature, ") \
		_T(" hci_disease, hci_care, ") \
		_T(" hci_bloodpressure, hci_bloodpressurex, hci_breathinterval, hci_sp02,  ") \
		_T(" trunc_date(hci_date) AS hci_date, hsie_diet, HSIE_NURSEASSISTANCE, NVL(hci_treatidx, 0) as treat_idx ") \
		_T(" FROM HMS_CAREINFO ") \
		_T(" LEFT JOIN HMS_SIEXAM ON (hsie_idx = hci_treatidx and hsie_docno = hci_docno)") \
		_T(" WHERE hci_docno=%ld and hci_idx=%ld ") \
		_T(" ORDER BY trunc(hci_date), hci_idx "),
		m_nDocumentNo, m_nUID);
	rs.ExecSQL(szSQL);
	//_msg(_T("%s"), szSQL);

	

	CString szDoctor, szNewDate, szOldDate, szNurse, szNurseAssist, szDietAssist, szCNS;
	CString szCare;
	int nPulse;
	double nTemperature;
	int nBloodPreL;
	int nBloodPreH;
	int nBreathInterval;
	int nSP02;
	long nTreatIdx = 0;
	while(!rs.IsEOF())
	{
		rs.GetValue(_T("hci_pulse"), nPulse);
		rs.GetValue(_T("hci_temperature"), nTemperature);
		rs.GetValue(_T("hci_BLOODPRESSURE"), nBloodPreL);
		rs.GetValue(_T("hci_BLOODPRESSUREX"), nBloodPreH);
		rs.GetValue(_T("hci_BREATHINTERVAL"), nBreathInterval);
		rs.GetValue(_T("hci_disease"), szDisease);
		rs.GetValue(_T("hci_doctor"), szDoctor);
		rs.GetValue(_T("hci_care"), szCare);
		rs.GetValue(_T("hci_sp02"), nSP02);

		CString szFuncs;
		szFuncs.Empty();
		szCNS.Empty();
		if(nPulse > 0)
		{
			szFuncs.AppendFormat(_T(" M: %d; \r\n"), nPulse);
		}
		if(nTemperature > 0)
		{
			szFuncs.AppendFormat(_T(" T: %.1f; \r\n"), nTemperature);
		}

		if(nBloodPreL+nBloodPreH > 0)
		{

			szFuncs.AppendFormat(_T(" HA: %d/%d; \r\n"), nBloodPreL, nBloodPreH);
		}
		if(nBreathInterval > 0)
		{
			szFuncs.AppendFormat(_T(" NT: %d; \r\n"), nBreathInterval);
		}
		if(nSP02 > 0)
		{
			szFuncs.AppendFormat(_T(" SP02: %d; \r\n"), nSP02);
		}

		if(!szFuncs.IsEmpty())
		{
			szCNS.AppendFormat(_T("Chức năng sống: \r\n%s"), szFuncs);
		}

		if (!szDisease.IsEmpty())
		{
			szCNS.AppendFormat(_T("\r\nDiễn biến: \r\n %s"), szDisease);
		}
		rs.GetValue(_T("hci_date"), szNewDate);

		//if(szNewDate != szOldDate)


		rs.GetValue(_T("hsie_nurseassistance"),szNurseAssist);
		rs.GetValue(_T("hsie_diet"), szDiet);
		rs.GetValue(_T("treat_idx"), nTreatIdx);
		//if (szNurseAssist.IsEmpty() || szDiet.IsEmpty())
		if (nTreatIdx == 0)
		{
			szSQL.Format(_T("SELECT hsie_diet, hsie_nurseassistance ") \
				_T(" FROM hms_siexam WHERE hsie_docno=%ld ") \
				_T(" and trunc_date(hsie_date) = TO_DATE('%s', 'YYYY-MM-DD HH24:MI:SS') ") \
				_T(" order by hsie_date desc"), m_nDocumentNo, szNewDate);
			rs2.ExecSQL(szSQL);
			rs2.GetValue(_T("hsie_nurseassistance"),szNurseAssist);
			rs2.GetValue(_T("hsie_diet"), szDiet);
		}
		tmpStr = pMF->GetSelectionString(_T("HMS_DIET_MODE"), szDiet);
		if(!tmpStr.IsEmpty())
		{
			szDiet = tmpStr;
		}
		tmpStr = pMF->GetSelectionString(_T("HMS_CHEDOHOLY"), szNurseAssist);
		if (!tmpStr.IsEmpty())
		{
			szNurseAssist = tmpStr;
		}
		szDietAssist.Format(_T("\r\n\r\nChế độ ăn và hộ lý:\r\n %s\r\n %s "), szDiet, szNurseAssist);
		szOldDate = szNewDate;

		szDietAssist.AppendFormat(_T("\r\n\r\n%s"), szDoctor);
		m_wndTreatList.AddItems(szCNS, szCare, szDietAssist);
		szDietAssist = _T("");
		rs.MoveNext();
	}


	
	m_wndTreatList.EndLoad();
	
	return 0;
}
void CHMSTreatmentCareDialog::OnDateListDblClick(){

	
} 

void CHMSTreatmentCareDialog::OnDateListSelectChange(int nOldItem, int nNewItem){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	//m_wndBeforeOpt.EnableWindow(FALSE);
	m_wndSurgeryOpt.EnableWindow(FALSE);
	m_wndParaclinic.EnableWindow(FALSE);
	if(nNewItem < 0)
	{
		return;
	}
	m_nUID = str2long(m_wndDateList.GetItemText(nNewItem, 2));
	CString szLocked = m_wndDateList.GetItemText(nNewItem, 3);
	m_szCreatedby = m_wndDateList.GetItemText(nNewItem, 3);

	m_szType = m_wndDateList.GetItemText(nNewItem, 6);
	//if(nNewItem != nOldItem)
	{
		OnTreatListLoadData();
	}
	if(szLocked == _T("Y"))
	{
		m_wndLock.EnableWindow(FALSE);
		m_wndUnLock.EnableWindow(TRUE);
	}
	else
	{
		m_wndLock.EnableWindow(TRUE);
		m_wndUnLock.EnableWindow(FALSE);
	}
	
} 
int CHMSTreatmentCareDialog::OnDateListDeleteItem(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;
	CString tmpStr;
	CString szSQL;

	if(IsLocked())
	{
		ShowMessageBox(_T("Phiếu đã được khóa. Không cho phép xóa đề mục"));
		return 0;
	}
	int ret = ShowMessageBox(_T("Bạn có chắc chắn muốn xóa phiếu đã chọn không?"), MB_YESNO);
	if(ret == IDNO)
		return 0;
	szSQL.Format(_T("HMS_CAREINFO_DELETE(%ld, %ld, '%s') "),m_nDocumentNo,m_nUID, pMF->GetCurrentUser());
	ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
			if(ret < -1)
			{
				ShowMessageBox(_T("Phiếu đã được thêm cận lâm sàng, PTTT hoặc thuốc, Không cho phép xóa"));
			}
			else
				ShowMessageBox(_T("Không xóa được phiếu điều trị"));
		return 0;
	}
	OnDateListLoadData();
	m_wndTreatList.DeleteAllItems();
	 return 0;
} 
long CHMSTreatmentCareDialog::OnDateListLoadData(){
	
	
	int nCount = 0;
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	CString tmpStr, szDate, szWhere;
	szWhere.Empty();
	if(m_szMonthKey == _T("Tất cả"))
	{
	}
	else if(!m_szMonthKey.IsEmpty())
	{
		szWhere.Format(_T(" and TO_CHAR(hci_date, 'MM/YYYY')='%s'"), m_szMonthKey);
	}
	szWhere.AppendFormat(_T(" and hci_type IN ('CS', 'CSC1', 'CSC2') "));
	if(pMF->IsOutPatient() || pMF->IsCancerPatient() || (pMF->GetTreatTime()>0))
	{
		szWhere.AppendFormat(_T("and (hci_treattime=0 or hci_treattime=%d) "), pMF->GetTreatTime());
		
	}
	szSQL.Format(
		_T("SELECT hci_idx as treat_uid, TO_CHAR(hci_date, 'YYYY-MM-DD HH24:MI') as treat_date, hci_locked as islocked, ") \
		_T("	hci_type, hci_nurse")
		_T(" FROM HMS_CAREINFO ") \
		_T(" WHERE  hci_deptid not in ('C1.1', 'C1.2', 'C1.3', 'TYC', 'TTHTSS') and hci_docno = %ld %s  ") \
		_T(" ORDER BY hci_idx "), m_nDocumentNo, szWhere);
	
	m_wndDateList.BeginLoad(); 
	rs.ExecSQL(szSQL);
	int nIndex = 1;
	CString szLocked;
	while(!rs.IsEOF())
	{
		tmpStr.Format(_T("%d"), nIndex++);
		rs.GetValue(_T("islocked"), szLocked);
		bool isSig = IsSigned(str2long(rs.GetValue(_T("treat_uid"))));
		CString szSig;
		if (isSig)
			szSig = _T("Đã ký số");
		else
			szSig = _T("Chưa ký số");
		int nItem = m_wndDateList.AddItems(
			rs.GetValue(_T("treat_uid")), 
			rs.GetValue(_T("treat_date")), 
			rs.GetValue(_T("treat_uid")), 
			rs.GetValue(_T("hci_nurse")),
			rs.GetValue(_T("islocked")), 
			szSig,
			rs.GetValue(_T("hci_type")),
			NULL);

		if(szLocked == _T("Y"))
		{
			m_wndDateList.SetItemBkColor(nItem, RGB(200, 200, 200));
		}
		if (isSig)
			m_wndDateList.SetItemBkColor(nItem, RGB(150, 200, 0));
		rs.MoveNext();
	}
		
	m_wndDateList.EndLoad(); 

	int nItem = m_wndDateList.GetItemCount()-1;
	m_nUID = str2long(m_wndDateList.GetItemText(nItem, 2));
	m_wndDateList.SetCurSel(nItem);

	OnTreatListLoadData();
	
/*
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CRecord rs(&pMF->m_db);
	CString szSQL;
	m_wndDateList.BeginLoad(); 
	int nCount = 0;
	nCount = rs.ExecSQL(szSQL);
	while(!rs.IsEOF()){ 
		m_wndDateList.AddItems(
			rs.GetValue(_T("Index")), 
			rs.GetValue(_T("Date")), NULL);
		rs.MoveNext();
	}
	m_wndDateList.EndLoad(); 
	return nCount;
*/
	return 0;
}

void CHMSTreatmentCareDialog::OnCareSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	int nRet = 0;
	if(!pMF->IsActiveDocument())
	{
		int n = CompareDate(pMF->GetSysDate(), pMF->m_wndPatientDocument.m_szDischargeDate.Left(10));

		if(n > 5)
		{
			ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
			return;
		}
	}
	nRet = pMF->CheckNutriExamSchedule();
	if (nRet !=0)
		return;
	
	//if(pMF->m_CompanyInfo.sc_id == _T("27009"))
	{
		//CHMSCareSelectionDlg dlg(this);
		//dlg.DoModal();
		CGuiMenu menu(this);
		menu.CreatePopupMenu();
		menu.AppendMenu(MF_BYPOSITION, 1, _T("Thêm phiếu chăm sóc"));
		menu.AppendMenu(MF_BYPOSITION, 2, _T("Thêm phiếu CS cấp 1"));
		menu.AppendMenu(MF_BYPOSITION, 3, _T("Thêm phiếu CS cấp 2-3 "));

		CPoint pt;
		CRect rect;
		m_wndCare.GetWindowRect(&rect);
		pt.x = rect.left;
		pt.y = rect.top - 2;
		CString szType;
		int ret = menu.TrackPopupMenu(TPM_NONOTIFY | TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTBUTTON, pt.x, pt.y, this);
		switch (ret) {
		case 1:
		{
			CHMSTreatmentCareInputDialog dlg(this, VM_ADD, m_nDocumentNo);
			if (dlg.DoModal() == IDOK)
			{
				OnDateListLoadData();
				int nSel = m_wndDateList.GetCurSel();
				OnDateListSelectChange(0, nSel);
			}
		}break;
		case 2:
			szType = _T("CSC1");
			OnAddCSC123(szType);
			break;
		case 3:
			szType = _T("CSC2");
			OnAddCSC123(szType);
			break;
		}
	}
	

}

void CHMSTreatmentCareDialog::OnAddCSC123(CString szType)
{
	// goi dilog load CSc1 len 
	// goi ham them moi 
	CHMSCareInputHtmlDialog dlg(this, szType, VM_ADD, TRUE, _T(""));
	if (dlg.DoModal() == IDOK)
	{
		m_bType = FALSE;
		OnDateListLoadData();
		int nSel = m_wndDateList.GetCurSel();
		OnDateListSelectChange(0, nSel);
	}
}

void CHMSTreatmentCareDialog::OnBeforeOptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	/*if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}*/

	CPhieuChamSocBenhNhanTruocPhauThuat dlg(this, VM_EDIT, m_nDocumentNo, pMF->m_nRefIndex);
	if(dlg.DoModal() == IDOK)
	{
	}
}


#include "PhieuChamSocNguoiBenhCuaDieuDuong.h"
#include "PhieuChamSocBenhNhanSauKhiMo.h"
#include "PhieuChamSocNguoiBenhCuaDieuDuongB3.h"
void CHMSTreatmentCareDialog::OnCareAfterOptSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	/*if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}*/

	CPhieuChamSocBenhNhanSauKhiMo dlg(this, VM_EDIT, m_nDocumentNo, pMF->m_nRefIndex);
	if(dlg.DoModal() == IDOK)
	{
	}
}

void CHMSTreatmentCareDialog::OnCareOfNurseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();

	/*if(!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return;
	}*/
	
	if(pMF->GetCurrentDepartmentID() == _T("B3-A") || pMF->GetCurrentDepartmentID() == _T("B3-B") || pMF->GetCurrentDepartmentID() == _T("B3-C"))
		{
			CPhieuChamSocNguoiBenhCuaDieuDuongB3 dlg(this, VM_EDIT, m_nDocumentNo, pMF->m_nRefIndex);
			if(dlg.DoModal() == IDOK)
			{
			}
		}
	else
		{
			CPhieuChamSocNguoiBenhCuaDieuDuong dlg(this, VM_EDIT, m_nDocumentNo, pMF->m_nRefIndex);
			if(dlg.DoModal() == IDOK)
			{
			}
		}
}

#include "HMSReportForms/PrintForms.h"

void CHMSTreatmentCareDialog::OnPrintSelect()
{
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CPrintForms printer;

	CGuiMenu menu(this);
	menu.CreatePopupMenu();
	menu.AppendMenu(MF_BYPOSITION, 1, _T("In tờ chăm sóc"));
	menu.AppendMenu(MF_BYPOSITION, 2, _T("In tờ chăm sóc tổng hợp"));
	menu.AppendMenu(MF_BYPOSITION, 4, _T("In tờ CS cấp 1 tổng"));
	menu.AppendMenu(MF_BYPOSITION, 5, _T("In tờ CS cấp 2-3 tổng"));
	menu.AppendMenu(MF_BYPOSITION, 3, _T("In phiếu theo dõi mạch nhiệt độ huyết áp"));
	CString szRptName;
	CPoint pt;
	CRect rect;
	m_wndPrint.GetWindowRect(&rect);
	pt.x = rect.left;
	pt.y = rect.top - 2;
	int ret = menu.TrackPopupMenu(TPM_NONOTIFY | TPM_RETURNCMD | TPM_BOTTOMALIGN | TPM_RIGHTBUTTON, pt.x, pt.y, this);
	switch (ret) {
	case 1:

		if (m_szType == _T("CSC1") || m_szType == _T("CSC2"))
		{
			CString szRptName;
			CReport rpt;
			szRptName = m_szType + _T(".RPT");

			
			if (pMF->OnPostGenDocX(&rpt, _T("tochamsoc_108"), m_nDocumentNo, m_nUID, szRptName, _T(""), _T("")))
				return;
		}
		else
		{
			
			printer.TM_OnPrintPhieuChamSoc(m_nDocumentNo, m_nUID, true);
		}

		break;
	case 2:
		printer.TM_OnPrintPhieuChamSoc(m_nDocumentNo, m_nUID, false);
		break;
	case 3:
		PrintFollowTemperaturePressure_V2(m_nDocumentNo);
		break;
	case 4:
		szRptName = _T("CSC1ALL.RPT");
		PrintPhieuChamSoc(szRptName, _T("CSC1"));
		break;
	case 5:
		szRptName = _T("CSC2ALL.RPT");
		PrintPhieuChamSoc(szRptName, _T("CSC2"));
		break;
	}
	
} 

void CHMSTreatmentCareDialog::PrintPhieuChamSoc(CString szType, CString szTypeCS)
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();
	CString szPrintByDeptIndex, szDeptIDSelected;
	CReport rpt;
	CString szSQL, szWhere;
	CRecord rsl(&pMF->m_db);
	CString szDeptIDS;
	//szPrintByDeptIndex = pMF->GetConfigValue(_T("tm_print_followtemperaturepressure_bydept"));

	/*if(szPrintByDeptIndex == _T("Y"))
	{*/

	szSQL.Format(_T("SELECT hci_idx as id ,hci_nurse||'['||to_char(hci_date,'HH24:MI DD/MM/YYYY')||']' as name,hci_date as order_date,hci_deptid as description ") \
		_T(" FROM hms_careinfo ") \
		_T(" WHERE 1=1 and hci_docno = %ld") \
		_T("  and hci_type='%s'   ") \
		_T(" ORDER BY hci_date"), m_nDocumentNo, szTypeCS);

	/*szSQL.Format(_T("Select distinct hde_refidx as idx, hde_deptid as deptid ,sd_name as deptname ") \
		_T(" from hms_doc_emr ") \
		_T(" LEFT JOIN sys_dept on (sd_id = hde_deptid) ") \
		_T("	where hde_docno = %ld and hde_type='%s' %s  order by idx,deptid"), m_nDocumentNo, m_szType,szWhere);*/


	CHMSSelectionListDialog dlg(this);
	dlg.m_szSQL = szSQL;
	if (dlg.DoModal() == IDOK)
	{
		if (dlg.m_arraySelection.GetCount() > 0)
		{
			for (int i = 0; i < dlg.m_arraySelection.GetCount(); i++)
			{
				CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[i];
				if (!szDeptIDSelected.IsEmpty())
					szDeptIDSelected += _T(" , ");
				szDeptIDSelected.AppendFormat(_T(" %s "), si.szID);


				if (!szDeptIDS.IsEmpty())
					szDeptIDS += _T(" , ");
				szDeptIDS.AppendFormat(_T(" '%s' "), si.szName);



			}
			if (pMF->OnPostGenDocX(&rpt, _T("phieuchamsoc_108"), m_nDocumentNo, 0, szType, _T(""), szDeptIDSelected))
				return;
		}
	}


	//}

	//_msg(_T("%s %s"),szDeptIDSelected,szDeptIDS);

	//if(!szDeptIDS.IsEmpty())
	//	szSQL.Format(_T("Select hde_optidx as orderid ") \
	//	_T(" from hms_doc_emr ") \
	//	_T("	where hde_docno = %ld and hde_type='%s' and hde_deptid in (%s) ") \
	//	_T("    and hde_refidx in (%s) %s order by idx,deptid"), m_nDocumentNo,m_szType, szDeptIDS,szDeptIDSelected,szWhere);
	//else

	//	szSQL.Format(_T("Select hde_optidx as orderid ") \
	//	_T(" from hms_doc_emr ") \
	//	_T("	where hde_docno = %ld and hde_type='%s' %s "), m_nDocumentNo,m_szType,szWhere);

	//rsl.ExecSQL(szSQL);
	//CString szOrderIDs;
	//while(!rsl.IsEOF())
	//{
	//	if(!szOrderIDs.IsEmpty())
	//		szOrderIDs += _T(",");
	//	szOrderIDs.AppendFormat(_T("%s"),rsl.GetValue(_T("orderid")));
	//	rsl.MoveNext();
	//}


}

void CHMSTreatmentCareDialog::OnCloseSelect(){
	CMainFrame *pMF = (CMainFrame*) AfxGetMainWnd();
	CGuiDialog::OnCancel();
} 
int CHMSTreatmentCareDialog::OnAddHMSTreatmentCareDialog(){
 	if(GetMode() == VM_ADD || GetMode() == VM_EDIT)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_ADD);
	return 0;
}
int CHMSTreatmentCareDialog::OnEditHMSTreatmentCareDialog(){
 	if(GetMode() != VM_VIEW)
 		return -1;
 	CMainFrame *pMF = (CMainFrame *) AfxGetMainWnd();
 	SetMode(VM_EDIT);
	return 0;  
}
int CHMSTreatmentCareDialog::OnDeleteHMSTreatmentCareDialog(){
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
 		OnCancelHMSTreatmentCareDialog();
 	}
	return 0;
}
int CHMSTreatmentCareDialog::OnSaveHMSTreatmentCareDialog(){
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
 		//OnHMSTreatmentCareDialogListLoadData();
 		SetMode(VM_VIEW);
 	}
 	else
 	{
 	}
 	return ret;
 	return 0;
}
int CHMSTreatmentCareDialog::OnCancelHMSTreatmentCareDialog(){
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
int CHMSTreatmentCareDialog::OnHMSTreatmentCareDialogListLoadData(){
	return 0;
}

BOOL CHMSTreatmentCareDialog::OnCommand(WPARAM wParam, LPARAM lParam)
{
	// TODO: Add your specialized code here and/or call the base class
	UINT nCmd = (UINT) wParam;
	if(nCmd == CMD_REFRESHDATA)
	{
	}
	return CGuiDialog::OnCommand(wParam, lParam);
}

BOOL CHMSTreatmentCareDialog::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CGuiDialog::PreTranslateMessage(pMsg);
}


void CHMSTreatmentCareDialog::OnLockSelect()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;
	szSQL.Format(_T("HMS_CAREINFO_LOCK(%ld,%ld, '%s') "), m_nDocumentNo, m_nUID, pMF->GetCurrentUser());
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không xác nhận được"));
		return;
	}
	int nSel = m_wndDateList.GetCurSel();
	OnDateListLoadData();
	ShowMessageBox(_T("Phiếu đã được xác nhận"));
	m_wndDateList.SetCurSel(nSel);
	OnDateListSelectChange(-1, nSel);
	
}



void CHMSTreatmentCareDialog::OnUnLockSelect()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL;

	CHMSReasonDialog dlg(this);
	if(dlg.DoModal() != IDOK)
		return;
	CString szReason = dlg.m_szReason;

	szSQL.Format(_T("HMS_CAREINFO_UNLOCK(%ld,%ld, '%s', '%s') "), m_nDocumentNo, m_nUID, pMF->GetCurrentUser(), szReason);
	int ret = str2int(pMF->ExecDML(szSQL));
	if(ret <= 0)
	{
		ShowMessageBox(_T("Không bỏ được xác nhận"));
		return;
	}
	
	

	int nSel = m_wndDateList.GetCurSel();
	OnDateListLoadData();
	m_wndDateList.SetCurSel(nSel);
	OnDateListSelectChange(-1, nSel);

	ShowMessageBox(_T("Phiếu đã được bỏ xác nhận.Mọi sự thay đổi dữ liệu sẽ được lưu vào hệ thống để theo dõi"));
}



bool CHMSTreatmentCareDialog::IsLocked()
{
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();
	CString szSQL, szLocked;
	CRecord rs(&pMF->m_db);
	szSQL.Format(_T("SELECT hci_locked FROM HMS_CAREINFO WHERE hci_docno=%ld and hci_idx=%ld "), m_nDocumentNo, m_nUID);
	rs.ExecSQL(szSQL);
	rs.GetValue(_T("hci_locked"), szLocked);
	if(szLocked == _T("Y"))
		return true;
	return false;
}

long CHMSTreatmentCareDialog::OnShowHistory(){
	CMainFrame* pMF = (CMainFrame*) AfxGetMainWnd();

	CRecord rs(&pMF->m_db);
	CRecord rs2(&pMF->m_db);
	CString szSQL, szSQL2, szTemp;
	int nSel = m_wndDateList.GetCurSel();
	if(nSel < 0)
		return 0;

	m_wndTreatList.BeginLoad();
	m_wndTreatList.DeleteAllItems();
	
	CGridListItem* o = new CGridListItem();
	CGridListItem* o2 = NULL;
	CGridListItem* o3 = NULL;
	CGridCell* cell = new CGridCell();

	CGridListItem* head1 = new CGridListItem(COLOR_GROUP, RGB(0, 128, 192));
	head1->Add(_T("Ngày thay đổi"), 100);
	head1->Add(_T("Người sửa"), 200);
	head1->Add(_T("Thông tin thay đổi"), 350);
	head1->Add(_T("Lý do"), 100);
	cell->AddRow(head1);
	o->Add(cell);
	m_wndTreatList.Add(o);

	szSQL.Format(_T("SELECT Trim('%s: ' ") \
				_T("            || hci_pulse ") \
				_T("            || ' ' ") \
				_T("            || '%s: ' ") \
				_T("            || hci_temperature ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || hci_weight ") \
				_T("            || ' ' ") \
				_T("            || '%s: ' ") \
				_T("            || hci_height ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || hci_care) AS thongtinthaydoi, ") \
				_T("       hci_locked, ") \
				_T("       to_char(hci_updateddate, 'dd/mm/yyyy hh24:mi:ss') as updateddate, ") \
				_T("       GET_USERNAME(hci_updatedby) AS updatedby, ") \
				_T("       hcr_reason, ") \
				_T("       hcr_type, ") \
				_T("       hci_idx ") \
				_T("FROM   HMS_CAREINFO_hist ") \
				_T("       LEFT JOIN hms_cancel_reason ") \
				_T("              ON ( hcr_refno = hci_idx ") \
				_T("                   AND hcr_docno = hci_docno ) ") \
				_T("WHERE  hci_docno = %ld ") \
				_T("       AND hci_idx = %d ORDER BY hci_updateddate"), _T("Mạch"), _T("Nhiệt độ"), _T("Cân nặng"), _T("Chiều cao"), _T("Chế độ ăn"), m_nDocumentNo, m_nUID);
	_fmsg(_T("%s"), szSQL);
	rs.ExecSQL(szSQL);
	
	while(!rs.IsEOF())
	{
		o2 = new CGridListItem();
		o2->Add(rs.GetValue(_T("updateddate")), 100,CELLTYPE_STRING, DT_CENTER|DT_WORDBREAK);
		o2->Add(rs.GetValue(_T("updatedby")), 200,CELLTYPE_STRING, DT_CENTER);
		o2->Add(rs.GetValue(_T("thongtinthaydoi")), 350,CELLTYPE_STRING, DT_LEFT);
		o2->Add(rs.GetValue(_T("hcr_reason")), 100,CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		
		cell = new CGridCell();
		cell->AddRow(o2);

		o = new CGridListItem();
		o->Add(cell);
		m_wndTreatList.Add(o);

		rs.MoveNext();
	}

	szSQL2.Format(_T("SELECT Trim('%s: ' ") \
				_T("            || Get_username(hcr_createdby) ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || To_char(hcr_createddate, 'dd/mm/yyyy hh24:mi:ss') ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || hcr_reason ") \
				_T("            || Chr(13) ") \
				_T("            || '%s: ' ") \
				_T("            || hcr_type) AS thongtinthaydoi ") \
				_T("FROM   hms_cancel_reason ") \
				_T("WHERE  hcr_docno = %ld ") \
				_T("       AND hcr_refno = %d ORDER BY hcr_createddate"), _T("Người sửa"), _T("Ngày sửa"), _T("Lý do"), _T("Loại"), m_nDocumentNo, m_nUID);
	rs2.ExecSQL(szSQL2);


	CGridListItem* head2 = new CGridListItem(COLOR_GROUP, RGB(0, 128, 192));
	head2->Add(_T("Khóa/Mở khóa"), 100);
	cell = new CGridCell();
	cell->AddRow(head2);
	o = new CGridListItem();
	o->Add(cell);
	m_wndTreatList.Add(o);

	while(!rs2.IsEOF())
	{
		o3 = new CGridListItem();
		o3->Add(rs2.GetValue(_T("thongtinthaydoi")), 100,CELLTYPE_STRING, DT_LEFT|DT_WORDBREAK);
		cell = new CGridCell();
		cell->AddRow(o3);

		o = new CGridListItem();
		o->Add(cell);
		m_wndTreatList.Add(o);

		rs2.MoveNext();
	}
	m_wndTreatList.EndLoad();

	return 0;
}
void CHMSTreatmentCareDialog::PrintFollowTemperaturePressure_V2(long nDocumentNo)
{
	CGuiMainFrame *pMF = (CGuiMainFrame *) AfxGetMainWnd();
	
	CReportSection* rptDetail = NULL;
	CRecord rs(&pMF->m_db);
	CRecord rsl(&pMF->m_db);
	CString szTableName, szSQL, szDate, szReportTitle, szsysdate, tmpStr,szWhere,szOrderBy,szDeptIDSelected;
	int nBuyInStall = -1;
	
	szOrderBy.Format(_T(" order by htr_idx desc "));
	szWhere.Empty();
	

	/*
	szDeptIDSelected.Empty();
	// kiem tra option in gộp hay tách theo từng lượt các khoa
	CString szPrintByDeptIndex;
	szPrintByDeptIndex = GetConfigValue(_T("tm_print_followtemperaturepressure_bydept"));
	//szPrintByDeptIndex=_T("Y");
	if(szPrintByDeptIndex == _T("Y"))
	{
		szSQL.Format(_T("Select htr_idx, htr_deptid ,sd_name as deptname ") \
						_T(" from hms_treatment_record ") \
						_T(" LEFT JOIN sys_dept on (sd_id = htr_deptid) ") \
						_T("	where htr_docno = %ld order by htr_idx"), m_nDocumentNo);
		rsl.ExecSQL(szSQL);

		JSONVALUE jarray,jDetail,jSon;
		while(!rsl.IsEOF())
		{	
				jDetail[_T("id")]= rsl.GetValue(_T("htr_idx")) ;
				jDetail[_T("name")]= rsl.GetValue(_T("htr_deptid")) ;
				jDetail[_T("desc")]= rsl.GetValue(_T("deptname")) ;			
				jarray[_T("Result")].Push(jDetail);		
				rsl.MoveNext();
		}
		jSon =jarray.At(_T("Result"));

		if(jSon.Size() <=0)
			return;
		if(jSon.Size() >1)
		{

			CHMSSelectionListDialog dlg(this);
			dlg.m_json = jSon;
			if( dlg.DoModal() == IDOK )
			{
				if(dlg.m_arraySelection.GetCount() >0 ) 
				{
					for (int i =0; i < dlg.m_arraySelection.GetCount(); i++)
					{
						CHMSSelectionListDialog::SELITEM si = dlg.m_arraySelection[i];	
						if(!szDeptIDSelected.IsEmpty())
							szDeptIDSelected+= _T(" , ");
						szDeptIDSelected.AppendFormat(_T(" %s "),si.szID);
					}	
				}
			}
		}

	}
	if(!szDeptIDSelected.IsEmpty())
		szWhere.Format(_T(" and htr_idx in (%s) "),szDeptIDSelected);
	*/
	CArray<ChamSocInfoV2, ChamSocInfoV2& > arrChamSocInfo;
	

	szSQL.Format(_T(" SELECT hcr_docno as docno,") \
			_T("    trim(hp_surname||' '||hp_midname||' '||hp_firstname) as pname,") \
			_T("    hms_getage( trunc_date(hd_admitdate), hp_birthdate) as age,") \
			_T(" 	extract(year from hp_birthdate) as yearofbirth,") \
			_T("    sys_sel_getname('sys_sex', hp_sex) as sex,") \
			_T("	hd_cardno as cardno, ") \
			_T(" hms_getaddress(hp_provid,hp_distid,hp_villid) as address,") \
			_T(" nvl(hd_dtladdr, hp_dtladdr) as detailaddress, ") \
			_T("	hms_getobjectname(hd_object)                       AS object, ") \
			_T("    hcr_maindisease as diagnostic,") \
			_T("    trunc_date(hcr_admitdate) as admitdate,") \
			_T("    trunc_date(hcr_dischargedate) as dischargedate,") \
			_T("    htr_deptid,") \
			_T("    hb_roomid,") \
			_T("    hb_bedid,") \
			_T("    GET_DEPARTMENTNAME(htr_deptid) as deptname,") \
			_T("    hrl_name as roomname,") \
			_T("    hbl_name as bedname, ") \
			_T(" 	hc_regdate as regdate, ") \
			_T(" 	hc_expdate as expdate ") \
			_T(" FROM hms_patient") \
			_T(" LEFT JOIN hms_doc ON(hd_patientno=hp_patientno)") \
			_T(" LEFT JOIN hms_card ON(hc_patientno=hd_patientno AND hc_idx=hd_cardidx) ") \
			_T(" LEFT JOIN hms_clinical_record ON(hd_docno=hcr_docno)") \
			_T(" LEFT JOIN hms_treatment_record ON(htr_docno=hcr_docno )") \
			_T(" LEFT JOIN hms_bed ON(hb_docno=hcr_docno AND hb_deptid=htr_deptid and hb_refidx= htr_idx )") \
			_T(" LEFT JOIN hms_roomlist ON(hrl_deptid=hb_deptid and hrl_id=hb_roomid)") \
			_T(" LEFT JOIN hms_bedlist ON(hbl_deptid=hb_deptid and hbl_roomid=hb_roomid and hbl_id=hb_bedid)") \
			_T(" WHERE hd_docno=%ld  %s %s"), nDocumentNo,szWhere,szOrderBy);
	rs.ExecSQL(szSQL);

	CString szName, szFromDate, szToDate, szMinDate, szMaxDate;
	CDate dte;
	
	//Print Detail

	CRecord rsc(&pMF->m_db);

	// lấy tất cả các phiếu chăm sóc cho vào mảng, tính luôn nó thuộc page mấy index là bao nhiêu luôn để lúc sét biến cho dễ làm
	// kiem tra option xem la benh vien in giay ngang hay doc de goi ra so cot tuong ung
	CString szKhoGiay;
	//szKhoGiay = GetConfigValue(_T("tm_printfolow_ngang"));
	int nColumnPg= 20;
	if(szKhoGiay== _T("Y"))
		nColumnPg= 22;

	int nCount =0;
	int nPage=1;
	int nMaxPage=1;
	if(!szDeptIDSelected.IsEmpty())
		szWhere.Format(_T(" and hci_refidx in (%s)  "), szDeptIDSelected );
	szSQL.Format(_T(" select to_char(hci_date,'DD/MM') as orderdate, to_char(hci_date,'HH24:MI') as ordertime,") \
				_T(" 		hci_pulse as mach,") \
				_T(" 		hci_temperature as nhietdo,") \
				_T(" 		case when hci_bloodpressurex =0  then null else hci_bloodpressurex end as huyetap1, ") \
				_T(" 		case when hci_bloodpressure =0  then null else hci_bloodpressure end as huyetap2, ") \
				_T(" 		hci_breathinterval as nhiptho,") \
				_T("		case when coalesce(hci_weight,0) =0 then null else hci_weight end   as weight, ") \
				_T(" 		case when coalesce(hci_sp02,0) =0 then null else hci_sp02 end  as spO2, hci_daitien as daitien, hci_tieutien as tieutien, ") \
				_T("		GET_USERNAME(hci_createdby) as createdby ") \
				_T("  from hms_careinfo  ") \
				_T(" where hci_docno = %ld and HCI_TREATTIME = %d and hci_pulse >0 and hci_temperature >0 %s ") \
				_T(" order by hci_date") , nDocumentNo, m_nTreattime, szWhere);

	rsc.ExecSQL(szSQL);
	while(!rsc.IsEOF())
	{	
		if(nCount==nColumnPg)
		{
			nMaxPage++;
			nCount=0;
		}
		nCount++;
		ChamSocInfoV2 orderInfo;
		rsc.GetValue(_T("orderdate"),orderInfo.szDate);
		rsc.GetValue(_T("ordertime"),orderInfo.szTime);
		rsc.GetValue(_T("mach"),orderInfo.nMach);
		rsc.GetValue(_T("nhietdo"),orderInfo.nNhietDo);
		CString szHuyetAp1,szHuyetAp2;
		rsc.GetValue(_T("huyetap1"),szHuyetAp1);
		rsc.GetValue(_T("huyetap2"),szHuyetAp2);
		tmpStr.Empty();
		tmpStr= szHuyetAp2 + _T("/\r\n") +szHuyetAp1;
		orderInfo.szHuyetAp=tmpStr;
		rsc.GetValue(_T("nhiptho"),orderInfo.szNhiptho);
		rsc.GetValue(_T("spO2"),orderInfo.szSpO2);
		rsc.GetValue(_T("createdby"),orderInfo.szUserID);
		
		//float nWeiht=0;
		rsc.GetValue(_T("weight"),orderInfo.nCanNang);
		//if(nWeiht ==0)
		//	orderInfo.nCanNang = null;
		//else 
		//	orderInfo.nCanNang = nWeiht;
		rsc.GetValue(_T("nuoctieu"),orderInfo.szNuocTieu);
		rsc.GetValue(_T("phan"),orderInfo.szPhan);
		
		rsc.GetValue(_T("daitien"),orderInfo.szDaitien);
		rsc.GetValue(_T("tieutien"),orderInfo.szTieutien);

		orderInfo.nPage= nMaxPage;

		arrChamSocInfo.Add(orderInfo);
		
		rsc.MoveNext();
	}


		CReport rpt;
		
		if(!rpt.Init(_T("Reports/HMS/HMS_PHIEUTHEODOICHUCNANGSONG_V2.RPT"),true)) return;
		//Print Report Header
		rptDetail = rpt.GetReportHeader();


		
		rptDetail->SetValue(_T("HEALTH_SERVICE"), pMF->m_szHealthService);
		rptDetail->SetValue(_T("HOSPITAL_NAME"), pMF->m_szHospitalName);
		rptDetail->SetValue(_T("ReportTitle"), szReportTitle);
		rs.GetValue(_T("deptname"), tmpStr);
		rptDetail->SetValue(_T("DEPARTMENT"), tmpStr);
		//Print page header
		rs.GetValue(_T("pname"), tmpStr);
		rptDetail->SetValue(_T("PatientName"), tmpStr);

		rs.GetValue(_T("age"), tmpStr);
		rptDetail->SetValue(_T("Age"), tmpStr);

		rs.GetValue(_T("sex"), tmpStr);
		rptDetail->SetValue(_T("Sex"), tmpStr);

		rs.GetValue(_T("cardno"), tmpStr);
		rptDetail->SetValue(_T("CardNo"), tmpStr);
		

		if(!tmpStr.IsEmpty())
		{
			rptDetail->SetValue(_T("RegDate"), CDate::Convert(rs.GetValue(_T("regdate")), yyyymmdd, ddmmyyyy));
			rptDetail->SetValue(_T("ExpDate"), CDate::Convert(rs.GetValue(_T("expdate")), yyyymmdd, ddmmyyyy));
		}


		rs.GetValue(_T("address"), tmpStr);
		rptDetail->SetValue(_T("Address"), tmpStr);

		rs.GetValue(_T("bedname"), tmpStr);
		rptDetail->SetValue(_T("Bed"), tmpStr);

		rs.GetValue(_T("roomname"), tmpStr);
		rptDetail->SetValue(_T("RoomName"), tmpStr);

		rptDetail->SetValue(_T("object"), rs.GetValue(_T("object")));
		rptDetail->SetValue(_T("yearofbirth"), rs.GetValue(_T("yearofbirth")));

		tmpStr = CDate::Convert(rs.GetValue(_T("Admitdate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("AdmitDate"), tmpStr);

		rs.GetValue(_T("diagnostic"), tmpStr);
		rptDetail->SetValue(_T("Diagnostic"), tmpStr);

		tmpStr = CDate::Convert(rs.GetValue(_T("Dischargedate")), yyyymmdd, ddmmyyyy);
		rptDetail->SetValue(_T("DischargeDate"), tmpStr);
		
		rs.GetValue(_T("docno"), tmpStr);
		rptDetail->SetValue(_T("DocumentNo"), tmpStr);

		

		for (int nPage =1; nPage <= nMaxPage; nPage++){

				int nIndex=0;
				if(nPage >0)
					nIndex= nIndex*nPage;
				if(nPage >1)
				{
					rpt.AddDetail(rpt.GetReportHeader());
				}		
				rptDetail = rpt.AddDetail(0);
				CReportItem *obj = rptDetail->GetItem(L"chart");
				if(obj && !obj->m_szName.IsEmpty())
				{
					ChartObject2 *chart = new ChartObject2(obj);
					chart->m_nCols=nColumnPg;
					//chart->m_rect = obj->m_rect;
					for (int i =0; i <arrChamSocInfo.GetSize();i++)
					{
						ChamSocInfoV2 orderInfo;
						orderInfo= arrChamSocInfo[i];
						if(orderInfo.nPage !=nPage)
							continue;
						chart->AddValue(orderInfo.szDate,orderInfo.szTime, orderInfo.nMach, orderInfo.nNhietDo);
					}
					rptDetail->SetItem(L"chart", chart);
			
				}
				int nField=1;
				for (int i =0; i <arrChamSocInfo.GetSize();i++)
				{
					ChamSocInfoV2 orderInfo;
					orderInfo= arrChamSocInfo[i];
					if(orderInfo.nPage !=nPage)
						continue;
					tmpStr.Format(_T("%d."),nField);
					CString szFileName;
					CString tmpStr2;
					
					for (int j=1;j<=9;j++)
					{
						szFileName.Format(_T("%s%d"),tmpStr,j);
						if(j==1)
							rptDetail->SetValue(szFileName,orderInfo.szHuyetAp);
						if(j==2)
						{		
							
							FormatCurrency(orderInfo.nCanNang, tmpStr2);
							rptDetail->SetValue(szFileName,tmpStr2);
						}
						if(j==3)
						{
							FormatCurrencyStr(orderInfo.szNhiptho, tmpStr2);
							rptDetail->SetValue(szFileName,tmpStr2);
						}
						if(j==4)
							rptDetail->SetValue(szFileName,orderInfo.szSpO2);
						if(j==5)
							rptDetail->SetValue(szFileName,orderInfo.szNuocTieu);

						if(j==6)
							rptDetail->SetValue(szFileName,orderInfo.szPhan);

						if(j==7)
						{
							rptDetail->SetValue(szFileName,orderInfo.szDaitien);
						}
						if(j==8)
						{
							rptDetail->SetValue(szFileName,orderInfo.szTieutien);							
						}
						if(j==9)
						{
							rptDetail->SetValue(szFileName,orderInfo.szUserID);							
						}	
					}
					/*
					szFileName.Format(_T("Sig%d"),nField);
					//_msg(_T("%s"),szFileName);

					CReportItem *img = rptDetail->GetItem(szFileName);
					if(img)
					{
						img->SetFixedHeight(false);	
						HBITMAP hBitmap = GetSignatureImage(orderInfo.szUserID);
						if(hBitmap)
						{	
							img->SetHBITMAP(hBitmap);
							//img->SetRotate(270);
							
							::DeleteObject(hBitmap);
						}
					}	 
					*/
					nField++;
				}
		}

	
		//rptDetail = rpt.AddDetail(rpt.GetGroupFooter(2));
		////rptDetail = rpt.AddDetail(rpt.GetGroupFooter(1));
		//szsysdate = pMF->GetSysDate(); 
		//szDate.Format(rptDetail->GetValue(_T("PrintDate")),szsysdate.Mid(8,2),szsysdate.Mid(5,2),szsysdate.Left(4));
		//rptDetail->SetValue(_T("PrintDate"), szDate);
		rpt.PrintPreview();

}

int CHMSTreatmentCareDialog::OnCopyTreatmentCare()
{
	CMainFrame* pMF = (CMainFrame*)AfxGetMainWnd();

	int nSel = m_wndDateList.GetCurSel();
	if (nSel < 0)
		return 0;
	CString tmpStr;
	CString szSQL;

	if (!pMF->IsActiveDocument())
	{
		ShowMessageBox(_T("Hồ sơ đã đóng. Không cho phép thêm"));
		return -1;
	}

	if (!pMF->m_bIsDoctor)
	{
		ShowMessageBox(_T("Chức năng này dùng cho tài khoản của bác sĩ!"));
		return -2;
	}

	int ret = ShowMessageBox(_T("Bạn có muốn copy phiếu này sang bệnh trình không ạ?"), MB_YESNO);
	if (ret == IDNO)
		return 0;
	szSQL.Format(_T("hms_siexam_copy_from_tm_care(%ld, %ld, '%s', '%s', '%s') "), m_nDocumentNo, m_nUID, pMF->GetCurrentUser(), pMF->m_szDept, pMF->GetCurrentUser());
	ret = str2int(pMF->ExecDML(szSQL));

	if (ret > 0)
	{
		ShowMessageBox(_T("Job Done, hãy kiểm tra lại bên danh sách bệnh trình bác sĩ"));
	}
	else
	{
		ShowMessageBox(_T("Điều kiện copy không hợp lệ, thời gian phải sau khi bệnh nhân vào khoa!"));
	}
	return 0;
}

bool CHMSTreatmentCareDialog::IsSigned(long nID)
{
	CHMSMainFrame* pMF = (CHMSMainFrame*)AfxGetMainWnd();
	bool isSigned = false;
	CString szSQL, szStatus;
	// kiem tra trong bang ky so xem da ky chua
	szSQL.Format(_T("select count(*) as qty ") \
		_T(" from hms_signature ") \
		_T("	where docno = %ld and status='S' and rptname in ('tm_phieuchamsoc_detailone.rpt','csc1.rt','csc2.rt') and orderid =%ld "), pMF->m_nDocumentNo, nID);
	CRecord rs(&pMF->m_db);
	rs.ExecSQL(szSQL);
	if (rs.GetIntValue() > 0)
		isSigned = true;
	return isSigned;
}

void CHMSTreatmentCareDialog::OnResizeLayout()
{
    AddResize(&m_wndDateList, 100, 100);
    AddResize(&m_wndTreatmentInformation, 100, 100);
    AddResize(&m_wndTreatList, 100, 100);

    AddBottom(&m_wndCare);
    AddBottom(&m_wndBeforeOpt);
    AddBottom(&m_wndCareAfterOpt);
    AddBottom(&m_wndCareOfNurse);
    AddBottom(&m_wndTruotngaform);
    AddBottom(&m_wndPrint);
    AddBottom(&m_wndClose);
}