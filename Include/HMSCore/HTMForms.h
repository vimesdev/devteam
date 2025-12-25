#ifndef HTMLFORMS_H
#define HTMLFORMS_H

#pragma once
#include "HTMLayoutCtrl.h"
#include <afxtempl.h>



//#include "HTMLForms.h"
//
//class CHTMDialog: public CGuiDialog{
//public:
//	CHTMForms m_forms;
//	CHTMDialog(CWnd *pParent): CGuiDialog(pParent){};
//	~CHTMDialog(){};
//
//	void OnCreateComponents()
//	{
//		m_forms.Create(WS_CHILD|WS_VISIBLE, CRect(5, 5, 600, 480), this, 0);
//		m_forms.Load(L"C:\\Temp\\Phieuchidingcolistin.html");
//		
//	}
//	BOOL PreTranslateMessage(MSG *pMsg)
//	{
//		return CDialog::PreTranslateMessage(pMsg);
//	}
//	
//};

// CHTMForms


class AFX_EXT_CLASS OptionItem{
public:
	OptionItem(CString szId, CString szText, bool isSelected=false):
	  m_bSelected(isSelected), m_szId(szId), m_szText(szText){
		
	}
	~OptionItem(){}
	CString m_szId;
	CString m_szText;
	bool m_bSelected;
		
};

class AFX_EXT_CLASS OptionList{
public:
	CArray<OptionItem*, OptionItem*> m_items;
	OptionList(){
	}
	~OptionList(){}
	int Add(OptionItem* newItem)
	{
		return m_items.Add(newItem);
	}
	void Remove(int nIndex)
	{
		m_items.RemoveAt(nIndex);
	}
	void RemoveAll()
	{
		for (int i =0; i < m_items.GetCount(); i++)
		{
			OptionItem* o = m_items[i];
			delete o;
		}
		m_items.RemoveAll();
	}

	OptionItem* GetAt(int nIndex)
	{
		return m_items[nIndex];
	}
	int GetCount(){
		return m_items.GetCount();
	}

};

typedef struct tagHTMFormData{
	long		m_nPatientNo;
	long		m_nDocumentNo;
	CString		m_szDeptID;
	CString		m_szRecordNo;
	int			m_nRefIdx;
	int			m_nTreatTime;
	int			m_nRoomID;
	long		m_nOrderId;
	CString		m_szReference;
	tagHTMFormData(){
		m_nPatientNo = 0;
		m_nDocumentNo = 0;
		m_nRefIdx = 0;
		m_nTreatTime = 0;
		m_nOrderId = 0;
		m_nRoomID = 0;
		m_szDeptID.Empty();
		m_szReference.Empty();
		m_szRecordNo.Empty();
	}
} HTMFormData;

class  AFX_EXT_CLASS CHTMForms : CHTMLayoutCtrl
	
	
{
  DECLARE_DYNAMIC(CHTMForms)
	
  PrintEx* m_pPrinter; //HTMLLayout print manager
  CRect m_rcPrintArea; //print area in printer device units
  int m_scaled_width;  //scaled width of the print area for 1:1 scale

  double m_margin_left; //page margins in inches
  double m_margin_top;
  double m_margin_right;
  double m_margin_bottom;

  CSize  m_measured;

	LPCBYTE		m_pHtmlBuffer;
	DWORD		m_nHtmlSize;
	named_values*  m_pvalues;
	json::string   m_base_url;
    int            m_return_id;

	CString m_szHtmlFile;

  //Readonly fields
	CStringArray	m_ROFields;
	CMap<CString, LPCTSTR, OptionList*, OptionList*> m_options;
	CMap<CString, LPCTSTR, CString, CString>	m_data;
	//Tên view cần load dữ liệu
	CString		m_szTableView;
	//Tên bảng cần lưu trữ dữ liệu
	CString		m_szTableName;
	//Tên trường khoa chính
	CString		m_szFieldKey;
public:
	
	//Mã duy nhất hệ thống cần lưu( docno,...)
	CString		m_szUID;
	//Thêm điều kiện where trong trường hợp cần thiết
	CString		m_szWhere;
	
	CString		m_szType;
	CString		m_szForm;

	HTMFormData m_fKey;

	CHTMForms();
	virtual ~CHTMForms();
	BOOL	Create(CWnd* pParent, int x, int y, int w, int h);
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual void OnPrepareDC(CDC* pDC, CPrintInfo* pInfo = NULL);
	virtual void OnInitializes();

	afx_msg void OnFilePrintPreview();
	afx_msg void OnFilePrint();
	void	EnableControls(bool bFlag=true);
	void	EnableControl(LPCTSTR lpszName, bool bEnable);
	void	UpdateData(bool baveAndValidate=true);
	BOOL	Save(LPCTSTR lpszFile);
	void	OnAfterLoadData();
	bool	SetValue(LPCTSTR lpszName, CString szValue);
	void	GetValue(LPCTSTR lpszName, CString& szValue);

	//Load file html
	bool	Load(LPCTSTR lpszFile);
	//Ham load file va in(truong hop dac biet file in <> file view)
	bool	PrintFromFile(LPCTSTR lpszFile);
	//Hàm get data từ server load lên form
	virtual void	GetData();
	//Ham lấy dữ liệu từ form lưu trữ lên server
	virtual bool	PostData();
	virtual void	OnOptionSelect(OptionItem* selected){};
	dom::element Find(LPCTSTR lpszName);
	bool IsReadOnly(LPCTSTR szField);
	bool GetHtmlResource(LPCTSTR pszName, /*out*/PBYTE& pb, /*out*/DWORD& cb, HMODULE hModule);
	
	void AddOption(LPCTSTR lpszName, OptionList* options);
	void InitSelection(LPCTSTR lpszName, LPCTSTR lpszSection);
	void SetTableName(LPCTSTR lpszTable);
protected:
  virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
  virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
  virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
  virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
  virtual BOOL on_event(HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason ); 
  virtual BOOL OnEvent(HELEMENT he, HELEMENT target, BEHAVIOR_EVENTS type, UINT_PTR reason ); 
  
  virtual void OnCreateOptions(CString szName){}
  DECLARE_MESSAGE_MAP()

public:
  // Generic creator
  virtual BOOL Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID);

  // Generic creator allowing extended style bits
  virtual BOOL CreateEx(DWORD dwExStyle, DWORD dwStyle, const RECT& rect,
    CWnd* pParentWnd, UINT nID);

  // Load html from memory buffer
  bool LoadHtml(LPCBYTE pb, DWORD nBytes);
  // load html from resource by name
  bool LoadHtmlResource(LPCTSTR pszName, HMODULE hModule = NULL);
  // load html from resource by id
  bool LoadHtmlResource(DWORD resID, HMODULE hModule = NULL);

  // Overridables
  
  // custom behavior notifications, see behaviors/notifications.h
  virtual LRESULT OnBehaviorNotify(UINT uMsg, WPARAM wParam, LPARAM lParam);

  // non-HTMLayout notifications
  virtual LRESULT OnHtmlGenericNotifications(UINT uMsg, WPARAM wParam, LPARAM lParam);
  
  // create control for <INPUT>, <WIDGET>, <TEXTAREA>, <SELECT>
  virtual LRESULT OnCreateControl(LPNMHL_CREATE_CONTROL pnmcc);
  
  // post-control-creation notification. Good place to set additional styles for builtin controls
  virtual LRESULT OnControlCreated(LPNMHL_CREATE_CONTROL pnmcc);

  // your chance to destroy child control in your own way. ::DestroyWindow used by default
  virtual LRESULT OnDestroyControl(LPNMHL_DESTROY_CONTROL pnmhl);

  // All hyperlink notifications generated by the hyperlink behavior.
  virtual LRESULT OnHyperLink(NMHL_HYPERLINK* pnmhl);
    virtual LRESULT OnHyperLinkEnter(NMHL_HYPERLINK* pnmhl);
    virtual LRESULT OnHyperLinkLeave(NMHL_HYPERLINK* pnmhl);
    virtual LRESULT OnHyperLinkClick(NMHL_HYPERLINK* pnmhl);

  // Override this to load data (images or css sheets) from places other than this app resources.
  virtual LRESULT OnLoadData(LPNMHL_LOAD_DATA pnmld);
  
  // Data arrived. Handle this if you want to store them somewhere for future use.
  virtual LRESULT OnDataLoaded(LPNMHL_DATA_LOADED pnmld);
  
  // All resources are in place.
  virtual LRESULT OnDocumentComplete();
  
  // Attach your own behavior to the element
  virtual LRESULT OnAttachBehavior( LPNMHL_ATTACH_BEHAVIOR lpab );



// DOM helpers
  int     GetAttrInt(HELEMENT he, LPCSTR attrName, int defaultValue = 0);
  CString GetElementType(HELEMENT he);
  CString GetAttr(HELEMENT he, LPCSTR attrName);
  bool    HasAttr(HELEMENT he, LPCSTR attrName);

protected:

  // HTMLayout callback
  static LRESULT CALLBACK callback(UINT uMsg, WPARAM wParam, LPARAM lParam, LPVOID vParam);
  
  void SetCallback();
 
  virtual LRESULT WindowProc( UINT message, WPARAM wParam, LPARAM lParam);
  virtual LRESULT OnHtmlNotify(UINT uMsg, WPARAM wParam, LPARAM lParam);
  
  virtual LRESULT OnHtmlCommand(NMHL_COMMAND_CLICK *pnmCommand) ;
  
  LRESULT LoadResourceData(LPNMHL_LOAD_DATA pnmld);

  
  virtual BOOL	handle_event (HELEMENT he, BEHAVIOR_EVENT_PARAMS& params ) ;
  virtual BOOL	handle_key    (HELEMENT he, KEY_PARAMS& params ) ;
  virtual BOOL	handle_mouse  (HELEMENT he, MOUSE_PARAMS& params ) ;

  virtual void OnElementEvent(dom::element el);
  

public:
	HELEMENT	GetRootElement();
	virtual BOOL PreTranslateMessage( MSG* pMsg );
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnNcDestroy();
};

// HTML command map macros:
#define BEGIN_HTML_COMMAND_MAP \
        virtual LRESULT OnHtmlCommand(NMHL_COMMAND_CLICK *pnmCommand) {

#define ON_HTML_COMMAND(WStrHtmlElementId, Proc) \
        if( wcscmp(WStrHtmlElementId,pnmCommand->szElementID) == 0 ) \
        {  Proc(); return 0; }

#define END_HTML_COMMAND_MAP \
        return 0; }

#pragma comment(lib, "../lib/HTMLayout.lib")

#endif