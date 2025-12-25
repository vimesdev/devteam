//////////////////////////////////////////////////////////////////////////
//
// File : zSTLDef.h
//
// Version     : 1.0 ( 20-Okt-2005 )
// Description : Settings up STL macros. Including STL and using the macros that are setup here will 
//               make your project eaiser to work with different STL implmentations. 
//               or for example it will also be easy to replace all std::vector in your entire project 
//               to your own vector class that you inherited from std::vector but added more function to.
//
//               STLString is defined to be a std::wstring on UNICODE build, else it will the normal std::string 
//
//
//    Author : Mathias Svensson  ( http://www.result42.com )
// Copyright : 2005,2006 - Mathias Svensson
//   Licence : Free to use and modify as long this header is left as is.
//
//  Warranty : None what so ever. Use at own risk.
//
//////////////////////////////////////////////////////////////////////////

//  Do not use "using namespace std" if you really need to. 
//  It will often create more problems that it solves.


// Comment out the one that you do not need
#ifndef ZSTLDEF_H_
#define ZSTLDEF_H_

#pragma once

#include <vector>
#include <map>
#include <list>
#include <hash_map>
#include <stack>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <iterator>
// MS STL 
#if _MSC_VER < 1300
#define STL_HASHMAP std::hash_map
#else
#define STL_HASHMAP stdext::hash_map
#endif

#define STL_MAP std::map
#define STL_MULTIMAP std::multimap
#define STL_VECTOR std::vector
#define STL_LIST std::list
#define STL_SET std::set
#define STL_SLIST std::slist
#define STL_PAIR std::pair
#define STL_string std::string
#define STL_wstring std::wstring
#define STL_STACK std::stack
#define STL_QUEUE std::queue
#define STL_DEQUE std::deque
#define STL_PRIOQUEUE std::priority_queue

#define STL_reverse std::reverse
#define STL_copy std::copy
#define STL_find std::find
#define STL_STD std::

#ifdef _UNICODE
	typedef STL_wstring  STLString;
#else
	typedef STL_string	 STLString;
#endif

#endif
