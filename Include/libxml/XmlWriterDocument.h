#ifndef XMLWRITERDOCUMENT_H
#define XMLWRITERDOCUMENT_H

#include <vector>
using namespace std;

#include <string.h>

#include <libxml/encoding.h>
#include <libxml/xmlwriter.h>

class CXMLNode;

class  _declspec(dllexport) CXMLWriterDocument
{
public:
	CXMLWriterDocument(void);
	~CXMLWriterDocument(void);



//Operations
private:
	xmlChar* ConvertInput(const char *in, const char *encoding);
	int WriteNode(CXMLNode* pNode, xmlTextWriterPtr writer);

public:
	void WriteFile(std::string strFileName, CXMLNode* pRoot);
};

#endif