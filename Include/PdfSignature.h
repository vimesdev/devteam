#ifndef PDFSIGNATURE_H
#define PDFSIGNATURE_H

#include <afxwin.h>
#include <wincrypt.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <time.h>
#include <atlimage.h>
#include <afxtempl.h>
#include <afxext.h>
#include <vector>

namespace litePDF {
	class TLitePDF;
};

typedef struct tagSignatureData
{
	CString szFile;
	CString szUserId;
	CString szPdfName;
	CString szRptName;
	CString szSignID;
	CString szForm;
	CString szType;
	CString szCategory;
	CString szDocno;
	CString szOrderId;
	CString szReference;
	CString szDesc;
	CString szNote;
    bool bDigiSign;
} SignatureData;


typedef struct tagSignBatch
{
    CString szSignID;
    CString szSignField;
    CString szTitle;
    CString szComment;
    int nSignNumber;
    tagSignBatch() { 
		nSignNumber = 0;
	}
} SignBatch;

class CReport;

#define SIGNATURE_NOTIFY 0x800000

class  AFX_EXT_CLASS CPdfSignature
{
	
public:
	unsigned int lastSignatureIndex;
	litePDF::TLitePDF* m_pLitePDF;
	
	char *bytes;
	int bytes_len;
	CRYPT_SIGN_MESSAGE_PARA  SigParams;
	PCCERT_CONTEXT m_pCertContext;
	unsigned int  m_nSignatureLength;
	HCERTSTORE	m_hCertStore;
	
	BOOL		m_bServerSignature;
	CString		m_szSignatureID;
	CString		m_szSigner;
	CString		m_szSerial;
	CString		m_szSignedDate;
	CImage		m_img;
	CString		m_szUserSerial;
	CString		m_szUserID;
	__int64		m_nSignTime;
	CString		m_szReason;
	CString		m_szLocation;
	CString		m_szSignField;
	CString		m_szSignKey;
	CString		m_szDescription;
	long		m_nDocumentNo;
	bool		m_bCancel;
	CString		m_szFile;
	CString		m_szPdfName;
	CString		m_szStatus;
	bool		m_bIncludeSignDate;
	CString m_szSignPartner;
	CString m_szSignUserID;
	CString m_szSignPasswd;
    BOOL	m_bSignTitle;
    CString m_szComment;
    int		m_nSignNumber;
	CWnd* m_pParentWnd;
    CReport *m_pRpt;

	CPdfSignature(CWnd* pParent=NULL);
	~CPdfSignature();	
	
	bool	CreateSignature(LPCTSTR lpszFile, SignatureData* sign_data);

	bool Signature(LPCTSTR lpszFile, LPCTSTR lpszSignatureID,
                   LPCTSTR lpszSignName, int page, CRect rc, bool bUpload,
                   CWnd *pPrinter = NULL, bool isDigiSign = false,
              CMap<CString, LPCTSTR, std::string, std::string> *signIDS = NULL);
    
	bool SignatureBatch(std::vector<SignBatch> signIDS);
    
	bool	Cancel(LPCTSTR lpszSignatureID, LPCTSTR lpszSignField, LPCTSTR lpszFile=_T(""));

    bool DownloadAndPreview(LPCTSTR lpszSignatureID, bool bPreview,LPCTSTR lpszDir = _T(""), int nNumberOfCopies=1);

    bool DownloadAndSign(std::vector<CString> signatureIDs, bool bPreview, bool bAutoClose=false);
    bool DownloadPdf(LPCTSTR lpszSignatureID);

	CString GetSignatureID(){ return m_szSignatureID;}
	bool	UpdateSerial(LPCTSTR lpszSignPasswd);
	void	UpdateFinish(LPCTSTR lpszSignID, std::string file, std::string data, bool bStore);
    void	DrawSignature(HDC hDC, RECT rect, LPCTSTR lpszDesc, HBITMAP hSign);
	static void __stdcall appendSignatureData(const char *bytes,unsigned int bytes_len,void *user_data);
	static void __stdcall finishSignature(char *signature,unsigned int *signature_len,void *user_data);
	void loadCertificateStore(HANDLE *hStore);	
	void AddData(const char *pBytes, unsigned int pBytes_len);
	bool PrepareSignature();
	void Finish(char *signature, unsigned int *signature_len);
	unsigned int CreateSignatureField(litePDF::TLitePDF &litePDF,
		const char *signatureName,
		__int64 dateOfSign,
		unsigned int annotationResourceID,
		unsigned int annotationPageIndex,
		RECT annotationPosition_mm,
		unsigned int annotationFlags,
		int signatureLen);

	void Clear(void);	
	bool SignToFile(litePDF::TLitePDF &litePDF,
		const char *fileName,
		const char *signatureName, int page, CRect rc);
	
	void SignToFileEx(litePDF::TLitePDF &litePDF,
		const char *fileName,
		const char *signatureName,
		__int64 dateOfSign,
		unsigned int annotationResourceID,
		unsigned int annotationPageIndex,
		RECT annotationPosition_mm,
		unsigned int annotationFlags,
		int signatureLen);
	bool SignToData(litePDF::TLitePDF &litePDF,
		BYTE *data,
		unsigned int *dataLength,
		const char *signatureName);
	
	bool SignToDataEx(litePDF::TLitePDF &litePDF,
		BYTE *data,
		unsigned int *dataLength,
		const char *signatureName,
		__int64 dateOfSign,
		unsigned int annotationResourceID,
		unsigned int annotationPageIndex,
		RECT annotationPosition_mm,
		unsigned int annotationFlags,
		int signatureLen);	
	unsigned int createResource(litePDF::TLitePDF &litePDF, RECT rect, LPCTSTR lpszDesc, HBITMAP hSign=NULL);
	HBITMAP GetSignatureImage(LPCTSTR lpszSerial);
	std::string GetSignatureImageBase64(LPCTSTR lpszSerial);
	void ShowCertificate(LPCTSTR lpszName);
    bool IsSignedField(LPCTSTR lpszSignatureId, LPCTSTR lpszSignField);
    int CheckPdfSignedField(unsigned char *data, UINT nLength,LPCTSTR lpszSignField);
    bool CheckAndUpdateFinish(LPCTSTR lpszSignatureId);

};

////////////////////////////////////////////////////////////////////////////////
// A simple container for rect position, and a base class for the user-objects.
//
class CPdfSignObject: public CObject
{
public:
	
    CPdfSignObject() { m_rectPosition.SetRectEmpty (); }
	CPdfSignObject( LPCRECT lpSrcRect, COLORREF rgb) { m_rectPosition = lpSrcRect; m_color = rgb;}
    ~CPdfSignObject() {;}

    LPCRECT GetRect () { return m_rectPosition;}
    void SetRect (LPCRECT lpSrcRect) { m_rectPosition = lpSrcRect;}
	virtual void Draw (CDC* pDC) {
        pDC->FillSolidRect (GetRect(), m_color);
    }
protected:
    CRect m_rectPosition;
	COLORREF m_color;
};


////////////////////////////////////////////////////////////////////////////////
// This class use some of CRectTracker functions, (hit, draw, cursor...)
// to be compatible with the Microsoft tracker drawing.
//
class CMultiRectTracker : public CRectTracker 
{
// Constructors/Destructor
public:
	CMultiRectTracker();
	virtual ~CMultiRectTracker();
// API
public:
    // Very similar to CRectTracker functions
    void Draw(CDC* pDC);
	int HitTest( CPoint point );
    int HitTestHandles(CPoint point);
	BOOL SetCursor(CWnd* pWnd, UINT nHitTest);
	BOOL Track( CWnd* pWnd, CPoint point,
                BOOL bAllowInvert = FALSE, CWnd* pWndClipTo = NULL );

    // Specific to the CMultiRectTracker
    void Add( CPdfSignObject* pObject );
    void RemoveAll();
	bool IsEmpty() { return (m_Objects.GetSize() == 0); }

// Internal functions
protected:
    
    // The most important function !
    BOOL MultiTrackHandle ( CWnd* pWnd, CPoint point, CWnd* pWndClipTo );
    
    void CopyPositions (); // Get a copy of the rectangles
    void UpdateObjects (); // Update the objects positions, from copied rectangles
    void ClearPositions (); // erase the rectangle's copy


// Internal datas
protected:
    CArray <CPdfSignObject*, CPdfSignObject*> m_Objects; // Array of objects pointers
    CPdfSignObject* m_pObject; // temporary pointer used if the hit is on an object.

    CArray <CRect*, CRect*> m_CopyPosition; // array of rectangles, objects position copy.

};

void DrawSignature(HDC hDC, RECT rect, LPCTSTR lpszDesc, HBITMAP hSign);
void DrawSignature(CDC *pDC, CRect rcItem, HBITMAP hBitmap, LPCTSTR lpszDesc, int fontSize=10, UINT textAlign=DT_LEFT, int validSize=20);
#endif