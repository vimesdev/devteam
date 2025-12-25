#ifndef FML_H
#define FML_H


#include <string>
#include <vector>
#include "base64.h"
#include <sys/stat.h>
#include "icons.h"
#include <afxwin.h>
#include "GuiUtils.h"

#define nullptr NULL


typedef void (*_OnBeginPrinting)(CDC* pDC, CPrintInfo* pInfo);
typedef void (*_OnPrint)(CDC* pDC, CPrintInfo* pInfo);

namespace fml {
	//	using WideStringConvertor =
	//		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>, wchar_t>;

	inline std::wstring Utf8ToWideString(const std::string& utf8_string) {
		if (utf8_string.empty()) {
			return std::wstring();
		}

		size_t src_length = static_cast<int>(utf8_string.size());
		size_t target_length =
			::MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, utf8_string.data(),
				src_length, nullptr, 0);

		std::wstring utf16_string;
		if (target_length <= 0 || target_length > utf16_string.max_size()) {
			return utf16_string;
		}
		utf16_string.resize(target_length);
		size_t converted_length =
			::MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, utf8_string.data(),
				src_length, (LPWSTR)utf16_string.data(), target_length);
		if (converted_length == 0) {
			return std::wstring();
		}
		return utf16_string;
	}

	inline std::string WideStringToUtf8(const std::wstring& utf16_string) {
		if (utf16_string.empty()) {
			return std::string();
		}

		size_t src_length = static_cast<int>(utf16_string.size());
		size_t target_length =
			::WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, utf16_string.data(),
				src_length, nullptr, 0, nullptr, nullptr);

		std::string utf8_string;
		if (target_length <= 0 || target_length > utf8_string.max_size()) {
			return utf8_string;
		}
		utf8_string.resize(target_length);
		size_t converted_length = ::WideCharToMultiByte(
			CP_UTF8, WC_ERR_INVALID_CHARS, utf16_string.data(), src_length,
			(LPSTR) utf8_string.data(), target_length, nullptr, nullptr);
		if (converted_length == 0) {
			return std::string();
		}
		return utf8_string;
	}
	inline std::wstring MakeLowerString(std::wstring str)
	{
		CString strLower;
		StringLower(str.c_str(), strLower);
		return std::wstring(strLower);
	}

	inline std::wstring MakeUpperString(std::wstring str)
	{
		CString strLower;
		StringUpper(str.c_str(), strLower);
		return std::wstring(strLower);
	}

	inline LPCTSTR SqlDate(LPCTSTR szData, LPCTSTR szFormat = L"YYYY-MM-DD") {
		CString sql;
		sql.Format(_T(" TO_DATE('%s', '%s')"), szData, szFormat);
		return sql;
	}
	inline LPCTSTR SqlTimestamp(LPCTSTR szData, LPCTSTR szFormat = L"YYYY-MM-DD HH24:MI:SS.FF3\"Z\"") {
		CString sql;
		sql.Format(_T(" TO_TIMESTAMP('%s', '%s')"), szData, szFormat);
		return sql;
	}
	inline LPCTSTR SqlBetweenDate(LPCTSTR szDate1, LPCTSTR szDate2, LPCTSTR szFormat = L"YYYY-MM-DD") {
		CString sql;
		CString strDate(szDate1);
		CString strDate2(szDate2);
		sql.Format(_T(" TO_TIMESTAMP('%s 00:00:00.0000', '%s HH24:MI:SS.MS') AND TO_TIMESTAMP('%s 23:59:59.9999', '%s  HH24:MI:SS.MS') "), strDate.Left(10), szFormat, strDate2.Left(10), szFormat);
		return sql;
	}

	inline LPCTSTR SqlInDate(LPCTSTR szDate,  LPCTSTR szFormat = L"YYYY-MM-DD") {
		CString sql;
		CString strDate(szDate);
		sql.Format(_T(" TO_TIMESTAMP('%s 00:00:00.0000', '%s HH24:MI:SS.MS') AND TO_TIMESTAMP('%s 23:59:59.9999', '%s  HH24:MI:SS.MS') "), strDate.Left(10), szFormat, strDate.Left(10), szFormat);
		return sql;
	}

	inline LPCTSTR SqlBetweenTimestamp(LPCTSTR szDate1, LPCTSTR szDate2, LPCTSTR szFormat = L"YYYY-MM-DD HH24:MI:SS") {
		CString sql;
		sql.Format(_T(" TO_TIMESTAMP('%s', '%s') AND TO_TIMESTAMP('%s', '%s') "), szDate1, szFormat, szDate2, szFormat);
		return sql;
	}





	inline std::string  Trim(const std::string& s)
	{
		std::string::const_iterator it = s.begin();
		while (it != s.end() && isspace(*it))
			it++;

		std::string::const_reverse_iterator rit = s.rbegin();
		while (rit.base() != it && isspace(*rit))
			rit++;

		return std::string(it, rit.base());
	}

	inline std::vector<std::string>  SplitString(const std::string& str,
		const std::string& delimiter)
	{
		std::vector<std::string> strings;

		std::string::size_type pos = 0;
		std::string::size_type prev = 0;
		while ((pos = str.find(delimiter, prev)) != std::string::npos)
		{
			strings.push_back(str.substr(prev, pos - prev));
			prev = pos + 1;
		}

		// To get the last substring (or only, if delimiter is not found)
		strings.push_back(str.substr(prev));

		return strings;
	}
	inline std::string  ReplaceAll(std::string str, const std::string& from, const std::string& to) {
		size_t start_pos = 0;
		while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
			str.replace(start_pos, from.length(), to);
			start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
		}
		return str;
	}


	inline std::wstring  Trim(const std::wstring& s)
	{
		std::wstring::const_iterator it = s.begin();
		while (it != s.end() && isspace(*it))
			it++;

		std::wstring::const_reverse_iterator rit = s.rbegin();
		while (rit.base() != it && isspace(*rit))
			rit++;

		return std::wstring(it, rit.base());
	}

	inline std::vector<std::wstring>  SplitString(const std::wstring& str,
		const std::wstring& delimiter)
	{
		std::vector<std::wstring> strings;

		std::wstring::size_type pos = 0;
		std::wstring::size_type prev = 0;
		while ((pos = str.find(delimiter, prev)) != std::wstring::npos)
		{
			strings.push_back(str.substr(prev, pos - prev));
			prev = pos + 1;
		}

		// To get the last substring (or only, if delimiter is not found)
		strings.push_back(str.substr(prev));

		return strings;
	}
	inline std::wstring  ReplaceAll(std::wstring str, const std::wstring& from, const std::wstring& to) {
		size_t start_pos = 0;
		while ((start_pos = str.find(from, start_pos)) != std::wstring::npos) {
			str.replace(start_pos, from.length(), to);
			start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
		}
		return str;
	}



	inline std::wstring EscapeQuote(std::wstring szString) {
		std::wstring szData = szString;
		szData = ReplaceAll(szData, std::wstring(L"'"), std::wstring(L"''"));
		szData = ReplaceAll(szData, std::wstring(L"''''"), std::wstring(L"''"));
		return szData;
	}


	inline void String2Array(std::wstring szData, std::vector<std::wstring>& strList, size_t nSize)
	{
		strList.clear();
		if (szData.empty())
			return;
		std::wstring szString = EscapeQuote(szData);
		if (nSize > szString.size())
		{
			strList.push_back(szString);
			return;
		}
		std::wstring tmpStr;
		int nByte = nSize;
		int nPos = 0;
		int nLength = szString.size();
		for (;;)
		{
			if (nPos + nByte > nLength)
			{
				nByte = nLength - nPos;
			}
			tmpStr = szString.substr(nPos, nByte);
			strList.push_back(tmpStr);
			nPos += nByte;
			if (nPos >= nLength)
				break;
		}

	}

	inline bool FileExist(const std::string& filename) {
		struct stat buffer;   
		return (stat(filename.c_str(), &buffer) == 0); 
	}

	inline bool FileExist(const std::wstring& filename) {
		struct stat buffer;   
		std::string name = WideStringToUtf8(filename);
		return (stat(name.c_str(), &buffer) == 0); 
	}

	inline std::string GetFileName(std::string const & path)
	{
		return path.substr(path.find_last_of("/\\") + 1);
	}
	inline std::wstring GetFileName(std::wstring const & path)
	{
		return path.substr(path.find_last_of(L"/\\") + 1);
	}

	inline void CreateDirectoryRecursively(const std::wstring& directory) {
		static const std::wstring separators(L"\\/");

		// If the specified directory name doesn't exist, do our thing
		DWORD fileAttributes = ::GetFileAttributesW(directory.c_str());
		if (fileAttributes == INVALID_FILE_ATTRIBUTES) {

			// Recursively do it all again for the parent directory, if any
			std::size_t slashIndex = directory.find_last_of(separators);
			if (slashIndex != std::wstring::npos) {
				CreateDirectoryRecursively(directory.substr(0, slashIndex));
			}

			// Create the last directory on the path (the recursive calls will have taken
			// care of the parent directories by now)
			BOOL result = ::CreateDirectoryW(directory.c_str(), nullptr);
			if (result == FALSE) {
				throw std::runtime_error("Could not create directory");
			}

		}
		else { // Specified directory name already exists as a file or directory

			bool isDirectoryOrJunction =
				((fileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0) ||
				((fileAttributes & FILE_ATTRIBUTE_REPARSE_POINT) != 0);

			if (!isDirectoryOrJunction) {
				throw std::runtime_error(
					"Could not create directory because a file with the same name exists"
					);
			}

		}
	}

	HICON CreateIcon(IconData iconData, COLORREF color = RGB(0, 0, 0),
                            CSize iconSize = CSize(16, 16));


	inline std::string base64_encode(std::string msg) {
		return EncodeBase64((const unsigned char*)msg.c_str(), msg.length());
	}

	inline std::string base64_decode(std::string b64) {
		return DecodeBase64(b64);
	}

	std::string extend_key(std::string msg, std::string key);
    std::string encrypt_vigenere(std::string msg, std::string key);
    std::string decrypt_vigenere(std::string msg, std::string key);
    std::string sanitize_utf8(std::string str);
    std::string encrypt(std::string msg, std::string key);
    std::string decrypt(std::string msg, std::string key);

	void log(LPCTSTR lpszFormat, ...);
    void error(LPCTSTR lpszFormat, ...);


} // namespace fml

#ifndef _countof
#define _countof(array) (sizeof(array)/sizeof(array[0]))
#endif
#ifndef SAFE_DELETE
#define SAFE_DELETE(ptr) if (ptr) { delete ptr; ptr = NULL; }
#endif
#define SAFE_DELETE_ARRAY(p) if(p) {delete [] p ;p = NULL ;}


extern CString kPdfPrinter;
extern CString kXPSPrinter;
extern BOOL kPdfPrinting;
extern BOOL kHasPdfPrinter;
extern CString kPdfOutput;
extern CString kReportName;
extern CString kPdfPath;



UINT AFXAPI AfxGetFileName(LPCTSTR szPathName, LPTSTR szTitle, UINT nMax);
UINT AFXAPI AfxGetFileTitle(LPCTSTR szPathName, LPTSTR szTitle, UINT nMax);
BOOL CALLBACK _AfxAbortProc(HDC, int);
BOOL HasPdfPrinter();
BOOL WaitForPrinting(LPCTSTR szPrinter);
/////////////////////////////////////////////////////////////////////////////
// Printing Dialog

class CPrintingDialog : public CDialog
{
public:
	//{{AFX_DATA(CPrintingDialog)
	enum { IDD = AFX_IDD_PRINTDLG };
	//}}AFX_DATA
	CPrintingDialog::CPrintingDialog(CWnd* pParent)
	{
		Create(CPrintingDialog::IDD, pParent);      // modeless !
		//	_afxWinState->m_bUserAbort = FALSE;
	}
	virtual ~CPrintingDialog() { }

	virtual BOOL OnInitDialog();
	virtual void OnCancel();
};

#endif