#ifndef XMLNODE_H
#define XMLNODE_H

#include <vector>
using namespace std;

#include <string.h>

#include "libxml/parser.h"

class CXMLAttribute;
class CXMLNodeList;

using namespace std;

class _declspec(dllexport) CXMLNode
{
public:
	CXMLNode(void);
	CXMLNode(xmlNode* pNode);
	CXMLNode(std::string sName);
	~CXMLNode(void);

//Attributes
private:
	std::string					m_sName;
	std::string					m_sValue;
	//xmlNode* m_pNode;

public:
	std::vector<CXMLAttribute*>	m_ListAtts;
	std::vector<CXMLNode*>		m_ListChilds;

//Operations
public:
	void CreateDocumentNodes(xmlNode *pRoot );

private:
	void CreateDocumentChildNodes(xmlNode *pNode);

public:
	void			AddAttribute(std::string name, std::string value);
	void			AppendChild(CXMLNode *pNode);
	void			RemoveAllAttributes();
	void			RemoveAllChilds();
	CXMLNode*		GetFirstChild();
	CXMLNode*		GetLastChild();
	CXMLNode*		GetNode(std::string strNodeName);
	CXMLNodeList*	GetNodeList();
	CXMLNodeList*	GetNodeList(std::string strNodeName);
	std::string		GetAttribute(std::string strAttributeName);
	void			SetNodeValue(std::string strValue) { m_sValue = strValue; }

	std::string		GetNodeName()	{ return m_sName; }

	std::string		GetNodeValue()	{ return m_sValue; }

	bool			HasChild();
	bool			HasAttributes();

};

#endif
