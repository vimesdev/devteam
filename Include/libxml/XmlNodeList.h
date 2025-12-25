#ifndef XMLNODELIST_H
#define XMLNODELIST_H

#include <vector>
using namespace std;

class CXMLNode;

class  _declspec(dllexport) CXMLNodeList
{
public:
	CXMLNodeList(void){};
	~CXMLNodeList(void){};

//Attributes
private:
	std::vector<CXMLNode*>			m_ListNodes;

//Operations
public:
	void AddNode(CXMLNode* pNode)					{ m_ListNodes.push_back( pNode );  }
	vector<int>::size_type Count()					{ return m_ListNodes.size();  }
	CXMLNode* GetAt(vector<int>::size_type index )	{ return m_ListNodes.at(index); }
};

#endif