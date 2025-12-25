#ifndef XMLATTRIBUTE_H
#define XMLATTRIBUTE_H

#include <vector>
#include <string.h>

class  _declspec(dllexport)
 CXMLAttribute
{
public:
	CXMLAttribute(void)
	{ 
		m_sName = "";
		m_sValue = "";
	};

	CXMLAttribute(std::string name, std::string value)
	{
		m_sName = name;
		m_sValue = value;
	}

	~CXMLAttribute(void){};

//Attributes
private:
	std::string m_sName;
	std::string m_sValue;

public:
	std::string GetName()	{ return m_sName; }
	std::string GetValue()	{ return m_sValue; }

};

#endif