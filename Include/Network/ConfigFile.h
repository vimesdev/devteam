#ifndef _CONFIGFILE_H
#define _CONFIGFILE_H

#include <list>

class Config
{
protected:

	char	m_strFile[254];
	struct DATACONFIG{
		char name[35];
		char value[254];
	};

public:
	std::list<DATACONFIG>::iterator iter;
	std::list<DATACONFIG> m_lstData;
	Config(const char*	strFile);
	~Config(void);
	bool	Load();
	bool	Find(const char* key, char* rValue);
	void	SetValue(const char* key, const char* newValue);
	bool	Save();
};

#endif
