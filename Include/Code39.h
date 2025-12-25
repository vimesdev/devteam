// Code39.h: interface for the CCode39 class.
//
//	Copyright 2002 Neil Van Eps
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CODE39_H__6FE17747_EADF_4E89_9DCF_7688B04897BC__INCLUDED_)
#define AFX_CODE39_H__6FE17747_EADF_4E89_9DCF_7688B04897BC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "BarcodeBase.h"

class CCode39 : public CBarcode  
{
public:
	void BitmapToClipboard();
	void DrawBitmap();
	CCode39();
	virtual ~CCode39();
private:
	void	DrawPattern(CString csPattern);
	CString	RetrievePattern( char c );	

};

#endif // !defined(AFX_CODE39_H__6FE17747_EADF_4E89_9DCF_7688B04897BC__INCLUDED_)
