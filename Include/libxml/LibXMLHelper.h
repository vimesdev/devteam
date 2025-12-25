//////////////////////////////////////////////////////////////////////
//
// File : LibXMLHelper.h
//
//     Version : 1.9 ( 20-Feb-2010 )
// Description : Helper class for LibXML. ( http://xmlsoft.org/ )
//
//    Author : Mathias Svensson ( http://www.result42.com )
// Copyright : 2008-2010 - Mathias Svensson
//   Licence : Free to use and modify as long this header is left as is.
//
//  Platform : Windows - Win32 - 32bit - 64bit
//
//  Warranty : None what so ever. Use at own risk.
//
//   Credits : CLibXMLHelper uses CStringParser ( http://www.codeproject.com/KB/string/splitstring.aspx by Remon )
//
//  Change Log : See .cpp file
//////////////////////////////////////////////////////////////////////

#ifndef _LIBXMLHelper_H_
#define _LIBXMLHelper_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <libxml/tree.h>

#ifndef ZSTLDEF
	#include "ZSTLDef.h"

//
// If ZSTLDef.h is missing uncomment the code below
//
//   #include <map>
//   #include <string>
//   #define STL_MAP std::map
//   #define STL_string std::string
//   #define STL_wstring std::wstring
//
//   #ifdef _UNICODE
//   typedef STL_wstring  STLString;
//   #else
//   typedef STL_string	 STLString;
//   #endif

#endif

class AFX_EXT_CLASS CLibXMLHelper  
{
public:

	static BOOL			RemoveElement( xmlNodePtr node , const STLString& strElement );
	static BOOL			RemoveElement( xmlNodePtr node , const STLString& strElement , const STLString& strAttribute );
	static BOOL			RemoveElement( xmlNodePtr node , const STLString& strElement , const STLString& strAttribute , const STLString& strValue );
	static BOOL			RemoveElement( xmlNodePtr node , const STLString& strElement , STL_MAP< STLString, STLString >& vAttributeAndValues );
	static BOOL			RemoveElement( xmlNodePtr nodeRemove );

	static xmlNodePtr	FindElement( xmlNodePtr node , const STLString& strElement , STL_MAP< STLString, STLString >& vAttributeAndValues );
	static xmlNodePtr   FindElement( xmlNodePtr node , const STLString& strElement , const STLString& strAttribute , const STLString& strValue );
	static xmlNodePtr	FindElement( xmlNodePtr node , const STLString& strElement , const STLString& strAttribute );
	static xmlNodePtr	FindElement( xmlNodePtr node , const STLString& strElement );		// find an element relative to the same node levels. ( parallell node )

	static xmlNodePtr   FindChildElement( xmlNodePtr node , const STLString& strElement , const STLString& strAttribute , const STLString& strValue );
	static xmlNodePtr	FindChildElement( xmlNodePtr node , const STLString& strElement );	// Find a Child Element
	static xmlNodePtr	FindChildElement( xmlNodePtr node );	// Find a Child Element

	static xmlNodePtr	GetNextElement( xmlNodePtr node , const STLString& strElement ); 
	static xmlNodePtr	GetNextElement( xmlNodePtr node );

	static BOOL       GetAttribute( xmlAttrPtr node , char* strKey ,long lKeyMaxSize ,  char* strValue , long lValueMaxSize );
	static BOOL			  GetAttribute( xmlAttrPtr node , WCHAR* strKey ,long lKeyMaxSize ,  WCHAR* strValue , long lValueMaxSize );
	static xmlAttrPtr	GetNextAttribute( xmlAttrPtr node );
	static xmlAttrPtr	GetAttributes( xmlNodePtr node );
  static xmlAttrPtr	HasAttributes( xmlNodePtr node, WCHAR* name);
  static xmlAttrPtr	HasAttributes( xmlNodePtr node, char* name);


	static STLString  GetElementName( xmlNodePtr node );
	static STLString	GetElementText( xmlNodePtr node ); // get element content
	static STLString  GetContentText( xmlNodePtr node );

	static	bool		SetContentText( xmlNodePtr node , const STLString& strText );

	static BOOL      GetValueStr( STLString& strResult , xmlNodePtr node , const STLString& strAttributeName );
	static STLString GetValueStr( xmlNodePtr node , const STLString& strAttributeName );
	static long			 GetValueLong( xmlNodePtr node , const STLString& strAttributeName );
	static INT64		 GetValueInt64( xmlNodePtr node , const STLString& strAttributeName );
	static COLORREF	 GetValueColor( xmlNodePtr node, const STLString& strAttributeName );

	static bool			GetValueLong(long* ptValue, xmlNodePtr node , const STLString& strAttributeName );
	static bool			GetValueInt64(INT64* ptValue, xmlNodePtr node , const STLString& strAttributeName );

  static BOOL     GetMultiValueStr(xmlNodePtr node, const STL_VECTOR<STLString>& vAttributes, STL_MAP<STLString,STLString>& mapValues);

	static BOOL			SetValue( xmlNodePtr node , const STLString& strAttributeName , const STLString& strValue , bool bCreate = false );
	static BOOL			SetValue( xmlNodePtr node , const STLString& strAttributeName , DWORD dwValue , bool bCreate = false );
	static BOOL			SetValue( xmlNodePtr node , const STLString& strAttributeName , long lValue , bool bCreate = false );
	static BOOL			SetValue( xmlNodePtr node , const STLString& strAttributeName , int iValue , bool bCreate = false );
	static BOOL			SetValue( xmlNodePtr node , const STLString& strAttributeName , INT64 nValue , bool bCreate = false );
	static BOOL			SetValueColor( xmlNodePtr node , const STLString& strAttributeName , DWORD dwValue, bool bPrefix, bool bCreate = false );

	static BOOL			SetValue( xmlNodePtr node , const TCHAR* strAttributeName , const TCHAR* strValue , bool bCreate = false );
	static BOOL			SetValue( xmlNodePtr node , const TCHAR* strAttributeName , DWORD dwValue , bool bCreate = false );
	static BOOL			SetValue( xmlNodePtr node , const TCHAR* strAttributeName , long lValue , bool bCreate = false );
	static BOOL			SetValue( xmlNodePtr node , const TCHAR* strAttributeName , int  iValue , bool bCreate = false );
	static BOOL			SetValue( xmlNodePtr node , const TCHAR* strAttributeName , INT64 nValue , bool bCreate = false );
	static BOOL			SetValueColor( xmlNodePtr node , const TCHAR* strAttributeName , DWORD dwValue ,bool bPrefix, bool bCreate = false );

  static xmlNodePtr   InsertChildElement( xmlNodePtr pParent , xmlNodePtr pNodeToInsert , const TCHAR* strNewContent = NULL );
	
	static xmlNodePtr	CreateChildElement( xmlNodePtr pParent , const STLString& strElement , const TCHAR* strElementContent = NULL );

	// this version might be MORE corrcet..but the version about work.. check if this version can be replaced with the one above
	// different is that FindChildElement is used inside instead of FindElement
	static xmlNodePtr	CreateChildElementEx( xmlNodePtr pParent , const STLString& strElement , const TCHAR* strElementContent = NULL );

  enum CopyOption
  {
    CopyAlwaysAdd, // Do not checking if value exists. can insert duplicates
    CopyNew,       // Only if attribute does not already exists.
    CopyOverride,  // If value already exists. replace
  };
  static BOOL			CopyAttributes( xmlNodePtr pNewNode , xmlNodePtr pNode, CopyOption option = CopyAlwaysAdd);

	// will return eg. "config/layout/gridlines/hlines" 
	static STLString GetElementPath( xmlNodePtr pNode );

	static int  xmlBase64Encode(std::string inputString, STLString& outputString);
	static int  xml2String(xmlDocPtr, std::string& outputString);
	static int  xml2Base64String(xmlDocPtr, STLString& outputString);

	static	void	xmlEnableWriteHeaderContent(int writeOpt);	
	
	
};

#endif
