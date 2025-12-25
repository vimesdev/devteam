#include "StdAfx.h"
#include ".\layoutresource.h"
#include "libxml/LibXMLHelper.h"
#include "libxml/UTF8Conv.h"


LayoutResource::LayoutResource(void)
{
}

LayoutResource::~LayoutResource(void)
{

}

bool LayoutResource::LoadResource(const char* szString)
{
	xmlDocPtr doc = NULL;
	xmlNodePtr rootNode = NULL;
	xmlNodePtr node = NULL;
	xmlNodePtr nodeFound = NULL;

	doc = xmlNewDoc( (const xmlChar*)"1.0");
	
	return true;
}

