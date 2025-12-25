#ifndef FILE_H
#define FILE_H
#include <windows.h>
#include "Define.h"
#include "Time.h"
#include <vector>
#include <string>
using namespace std;


struct FileStatus
{

	Time	m_ctime;          // creation date/time of file
	Time	m_mtime;          // last modification date/time of file
	Time	m_atime;          // last access date/time of file
	size_t	m_size;            // logical size_t of file in jbytes
	BYTE	m_attribute;       // logical OR of CFile::Attribute enum values
	BYTE	m_padding;        // pad the structure to a WORD
	char*	m_szFullName[PATH_LENGTH]; // absolute path name
};

class File
{
protected:
	FILE*	m_hFile;
	size_t	m_nLength;
	int		m_aFileAttr;
	char	m_szFileName[PATH_LENGTH];
	char	m_szMode[128];
public:

	enum Attribute {
		normal		= 0x00,
		readOnly	= 0x01,
		hidden		= 0x02,
		system		= 0x04,
		volume		= 0x08,
		directory	= 0x10,
		archive		= 0x20
	};


	File(void);
	File(FILE* hFile);
	File(const char* szFileName, const char* szMode);
	~File(void);
	int		Open(const char *szFileName, const char* szMode);
	int		Open(const wchar_t *szFileName, const char* szMode);
	void	Close();
	size_t	GetLength();
	void	SetLength(size_t size_t);
	void	SeekToBegin();
	size_t	Seek(size_t	pos, short flag);
	size_t	SeekToEnd();
	size_t	GetPosition();
	bool	IsOpen();
	bool	IsDirectory();
	bool	IsExist(char* szFileName);
	size_t	Read(BYTE* data, size_t read_size);
	size_t	Write(const BYTE* data, size_t read_size);
	void	Flush();
	bool	GetStatus(FileStatus status);
	bool	SetStatus(FileStatus status);
	bool	Rename(const char* szOldName, const char* szNewName);
	bool	Remove(const char* szFileName);
	const char*	GetFileName();
	const char*	GetPathName();
	const char*	GetFileTitle();
	const char*	GetFileExt();
	
	

};


//------------------------------------------------------------------------------
// Directory class
//------------------------------------------------------------------------------
class Directory
{
 public:
  Directory(const string& strPath);
  
  void Open();
  void Close();

  // Resynch the class contents with the actual content of the directory
  int Update();
  
  const vector<string>& GetFiles() const;
  const vector<string>& GetSubDirs() const;

private:
  string m_strPath;

  vector<string> m_vFiles;
  vector<string> m_vSubDirs;

#ifdef HAVE_OPENDIR
  DIR* m_pDir;
#endif
};





#endif
