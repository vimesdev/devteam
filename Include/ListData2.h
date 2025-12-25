#ifndef LISTDATA_H
#define LISTDATA_H
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//	Copyright(C) Medical Informatic Technology And Equipment Join Stock Company. 2008-2010.							  
//	All rights reserved.
//	This program is protected by Viet nam and international treaties.  
//	Unauthorized reproduction or distribution of this program, 
//	or any portion of it, may result in severe civil and criminal penalties, 
//	and will be prosecuted to the maximum extent possible under the law.
//	This file is a part of the GUI(Graphical User Interface) class library.
//	(c) 2006-2008 Hay Hoang Van, All rights reserved.
//	CONTACT INFORMATION:
//	hayhv@miteco.com.vn or hayhv@yahoo.com
//	http://www.miteco.com.vn
//
//	Ban quyen cua Cong Ty Co Phan Thiet Bi Va Cong Nghe Tin Hoc Y Te (MITECO).
//	Do Cuc Ban Quyen, Bo VHTT nuoc Cong hoa xa hoi chu nghia Viet Nam cap.
//	Chuong trinh phan mem nay duoc Luat phap Viet Nam va quoc te bao ho.
//	San xuat, su dung hoac phan phoi trai phep toan bo hoac mot phan cua phan men nay se
//	chiu cac hinh phat va hinh su hoac dan su, co the len den muc toi da dung theo Luat qui dinh.
//	File nay la mot phan cua thu vien lap trinh (GUI). Ban quyen cua Hoang Van Hay. 2006-2008
//	THONG TIN LIEN HE:
//	hayhv@miteco.com.vn hoac hayhv@yahoo.com
//	http://www.miteco.com.vn
//////////////////////////////////////////////////////////////////////////////////////////////////////////



#include "stdio.h"
#include "string.h"
#include "assert.h"
#include "stdlib.h"


template<typename TYPE>
class CStack
{
protected:
	class StackNode
	{
	public:
	  TYPE data;
	  StackNode* next;
	};

	StackNode* m_stackTop; //points to top of stack
	long       m_nSize;

public:
	//constructor and destructor
	 CStack();
	 CStack(CStack& s);
	 ~CStack();
    //stack operator
    	bool IsEmpty()const;
	void Push(TYPE newData );
    	void Pop();
	void Pop(TYPE& data);
	void GetTop(TYPE& data);
	long GetSize();
	void PopAll();
};//end class


template<typename TYPE>
class CQueue
{
protected:
	class QueueNode
	{
	public:
	  TYPE data;
	  QueueNode* next;
	};

	QueueNode* m_queueTop; //points to top of Queue
	QueueNode* m_queueLast; //points to top of Queue
	long       m_nSize;

public:
	//constructor and destructor
	 CQueue();
	 CQueue(CQueue& s);
	 ~CQueue();
    //Queue operator
    	bool IsEmpty()const;
	void Push(TYPE newData );
    	void Pop();
	void Pop(TYPE& data);
	void GetTop(TYPE& data);
	long GetSize();
	void PopAll();
};//end class

#endif
