#ifndef HMSSIGNATURE_H
#define HMSSIGNATURE_H
#include "ReportDocument.h"

class AFX_EXT_CLASS CHMSSignature
{
protected:
public:
	CString m_szPath;
	CString m_szHost;
	int		m_nPort;
	CString m_szUserName;
	CString m_szPassword;

	CHMSSignature(void);
	~CHMSSignature(void);
	void FptConfig(CString szHost, int nPort, CString szUserName, CString szPassword);

	bool SavePDF(CReport* rpt);
	bool SignaturePDF(CString szInputFile, CString szOutputFile, bool bOpenFile=false);
	bool SignaturePDF2(CString szURL, CString szInputFile, CString szOutputFile, CString& szError);
	bool SignaturePDF2WithSignFielName(CString szURL, CString szInputFile, CString szOutputFile,CString szSignFieldName, CString& szError);
	
	bool SignatureXMLFile(CString szURL, CString szInputFile, CString szOutputFile, CString& szBase64);
	
	

	bool FtpDownload(CString szRemoteFile, CString szLocalFile);
	bool FtpUpload(CString szLocalFile, CString szRemoteFile);

	bool SignatureFeeInvoice(CReport* rpt, long nDocumentNo, long nInvoiceNo, CString szType, bool bOpenFile=false);	
	bool SignatureFeeInvoiceView(long nDocumentNo, long nInvoiceNo, CString szFileName, bool bOpenFile=false);
	bool SignatureDocPDF(CReport* rpt, long nDocumentNo, long nInvoiceNo, CString szType, bool bOpenFile=false);
	bool ReSignatureDocPDFNextUser(long nDocumentNo, long nInvoiceNo, CString szType,CString szSignName, bool bOpenFile =false);
	bool SignatureSheet(CReport* rpt, CString szNameInput, CString szType, bool bOpenFile);

	long UploadFile(LPCTSTR lpszName, LPCTSTR lpszFileName);
	bool DownloadFile(LPCTSTR lpszName, LPCTSTR lpszFileName);


};

#endif