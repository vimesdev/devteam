#ifndef XMLDOCUMENT_H
#define XMLDOCUMENT_H

#include <vector>
#include <string.h>

#include <libxml/parser.h>

class CXMLNode;

class  _declspec(dllexport) CXMLDocument
{
public:
	CXMLDocument(void);
	~CXMLDocument(void);

//Attributes
private:
	xmlDoc		*m_pDoc;
	CXMLNode    *m_pRoot;

//Operations
private:
	void		UnloadData();

public:
	bool		LoadFile(std::string strFilename);
	CXMLNode*	GetRoot();
};

#endif