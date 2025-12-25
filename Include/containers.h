#ifndef _CONTAINERS_H_
#define _CONTAINERS_H_

#include <windows.h>
#include <assert.h>
typedef unsigned long ulong;
// ----- Double Linked List ------------------------------------------------

template <class T>
class CTList
{
public:
	CTList();
	~CTList();	//Calls ClearList() so data stored in the list must be erased
				//manually before deleting CTList object (ex: with FullDelete())
	CTList(const CTList &lst);
	CTList& operator=(const CTList &lst);

	T& GetHead();
	T& GetTail();

	void AddHead(const T &Data); 
	void AddTail(const T &Data);

	//Remove functions doesn't delete data stored in the list (if pointers)!
	T RemoveHead();
	T RemoveTail();

	//Removes nodes with Data==data but without deleting data
	void Remove(const T &Data);
	//Removes nodes with Data==data and deletes data
	//(only to be used if data are pointers returned by 'new' operator)
	void RemoveData(const T &Data);

	//Clears the list but without deleting its data content. If data are pointers
	//and you want to delete them then use the ClearData function.
	void Clear();

	//This function is a helper for quick delete of all data
	//stored in the list and the list itself:
	//(only to be used if data are pointers returned by 'new' operator)
	void ClearData();

	bool IsEmpty();
	ulong GetCount();

	//Iterator functions
	//example:
	//	if(!lst.IsEmpty()) {
	//		data = lst.GetHead();
	//		while(!lst.IsLast())
	//			data = lst.GetNext();
	//	}
	T& GetNext();
	T& GetPrev();
	bool IsLast();
	bool IsFirst();

private:
	struct Node
	{
		T Data;
		Node *prev;
		Node *next;
	};
	Node  *head, *tail, *temp, *pos;
	ulong m_nCount;
};

// ----- FIFO Buffer -------------------------------------------------------

template <class T>
class CTQueue : public CTList<T>
{
public:
	
	void Push(const T &data){AddTail(data);}
	T Pop(){return RemoveHead();}
};

// ----- STACK Buffer ------------------------------------------------------

template <class T>
class CTStack : public CTList<T>
{
public:

	void Push(const T &data){AddHead(data);}
	T Pop(){return RemoveHead();}
};

// ----- Dynamic ARRAY -----------------------------------------------------
#include "afxtempl.h"

#define CTARRAY_START_SIZE 64
template <class T>
class CTArray
{
public:
	CTArray();
	CTArray(ulong nSize);	//Allocates nSize as the array starting size
	CTArray(const CTArray &pA);
	~CTArray();

	ulong Add(const T &data);	//returns position in the array
	void  InsertAt(ulong index, const T& data);
	void  SetAt(ulong index, const T& data);
	void  RemoveAt(ulong index);
	void  RemoveAll();
	void  GrowTo(ulong size);	//grows only if size > m_nSize
	void  Reserve(ulong num);	//reserve the first num positions and sets
								//m_nCount = num
	ulong	Size() const {return m_nCount;}	//m_nSize is hidden. For the programmer
	ulong	GetCount() { return m_nCount; } 
										//the array size is = to m_nCount
	void Clear();				//deletes the array
	void ClearData();			//deletes the array and its content (use carefully)

	T& operator[](ulong index);
	const T& operator[](ulong index) const;
	CTArray& operator=(const CTArray &pA);

private:
	void CalcNewSize();					//calculates new m_nSize
	void NewSize(ulong finalSize);	//expands array

	T *m_pData;
	ulong m_nSize;
	ulong m_nCount;
};

//--------------------------------------------------------------------------
//                       INLINE FUNCTIONS DEFINITION
//--------------------------------------------------------------------------

//= CTArray ================================================================

template <class T>
inline CTArray<T>::CTArray()
{
	m_pData = NULL;
	m_nSize = 0;
	m_nCount = 0;
}

template <class T>
inline CTArray<T>::CTArray(ulong nSize)
{
	m_pData = NULL;
	m_nSize = 0;
	m_nCount = 0;

	if(nSize > m_nSize)
	{
		m_nSize = nSize;
		NewSize(nSize);
	}
}

template <class T>
inline CTArray<T>::CTArray(const CTArray<T> &pA)
{
	m_pData = NULL;
	if(m_pData != pA.m_pData)
	{
		m_nSize = pA.m_nCount;
		m_nCount = pA.m_nCount;
		NewSize(m_nSize);
		for(ulong i=0; i < m_nCount; i++)
			m_pData[i] = pA.m_pData[i];
	}
	else
	{
		m_nSize = 0;
		m_nCount = 0;
	}
}

template <class T>
inline CTArray<T>& CTArray<T>::operator=(const CTArray<T>& pA)
{
	if(m_pData != pA.m_pData)
	{
		Clear();
		if(pA.m_pData)
		{
			m_nSize = pA.m_nCount;
			m_nCount = pA.m_nCount;
			NewSize(m_nSize);
			for(ulong i=0; i < m_nCount; i++)
				m_pData[i] = pA.m_pData[i];
		}
	}
	return *this;
}

template <class T>
inline CTArray<T>::~CTArray()
{
	Clear();
}

template <class T>
inline ulong CTArray<T>::Add(const T &data)
{
	if(m_nCount >= m_nSize)
	{
		CalcNewSize();
		NewSize(m_nSize);
	}
	m_pData[m_nCount] = data;
	return m_nCount++;
}


template <class T>
inline void CTArray<T>::SetAt(ulong index, const T &data)
{
	assert(index >= 0);
	assert(index < m_nCount);
	if(index >= 0 && index < m_nCount)
		m_pData[index] = data;
}

template <class T>
inline void CTArray<T>::InsertAt(ulong index, const T &data)
{
	assert(index >= 0);
	assert(index < m_nSize);
	if(index >= 0 && index < m_nSize)
	{
	//	if(m_nCount + index >= m_nSize)
		Add(data);		
		if(index <= m_nCount)
		{
			ulong moveCount = m_nSize - index-1;
			if(moveCount)
			{
				memmove(m_pData + index+1, m_pData + index, (size_t) moveCount*sizeof(T));
				memset(m_pData + m_nCount, 0, sizeof(T));
				SetAt(index, data);
			}
		}
	}
}

template <class T>
inline void CTArray<T>::RemoveAt(ulong index)
{
	assert(index >= 0);
	assert(index < m_nCount);
	if(index < 0 || (index >= m_nCount))
		return;
	ulong moveCount = m_nSize - (index + 1);
	(m_pData + index)->~T();
	if(moveCount)
	{
		memmove(m_pData + index, m_pData + index + 1, (size_t) moveCount*sizeof(T));
		m_nSize -= 1;
		m_nCount -= 1;
	}

}


template <class T>
inline void CTArray<T>::RemoveAll()
{
	ClearData();
}

template <class T>
inline void CTArray<T>::GrowTo(ulong size)
{
	if(size > m_nSize)
	{
		m_nSize = size;
		NewSize(size);
	}
}

template <class T>
inline void CTArray<T>::Reserve(ulong num)
{
	if(num > m_nCount)
	{
		if(num > m_nSize)
		{
			m_nSize = num;
			NewSize(num);
		}
		m_nCount = num;
	}
}

template <class T>
inline void CTArray<T>::CalcNewSize()
{
	if(m_nSize)
		m_nSize += m_nSize;		//exponential grow
	else
		m_nSize = CTARRAY_START_SIZE;
}

template <class T>
inline void CTArray<T>::NewSize(ulong finalSize)
{
	assert(finalSize);
	assert(finalSize >= m_nCount);
	if(m_pData)
	{
		T *temp = new T[finalSize];
		for(ulong i=0; i < m_nCount; i++)
			temp[i] = m_pData[i];
		delete[] m_pData;
		m_pData = temp;
	}
	else
		m_pData = new T[finalSize];
}

template <class T>
inline void CTArray<T>::Clear()
{
	if(m_pData)
	{
		delete[] m_pData;
		m_pData = NULL;
		m_nCount = 0;
		m_nSize = 0;
	}
}

template <class T>
inline void CTArray<T>::ClearData()
{
	if(m_pData)
	{
	//	for(ulong i=0; i < m_nCount; i++)
	//		delete m_pData[i];
		delete[] m_pData;
		m_pData = NULL;
		m_nCount = 0;
		m_nSize = 0;
	}
}

template <class T>
inline T& CTArray<T>::operator[](ulong index)
{
	assert(m_pData);
	assert(index >= 0);
	assert(index < m_nCount);
	return m_pData[index];
}

template <class T>
inline const T& CTArray<T>::operator[](ulong index) const
{
	assert(m_pData);
	assert(index >= 0);
	assert(index < m_nCount);
	return m_pData[index];
}

//= CTList =================================================================

template <class T>
inline CTList<T>::CTList()
{
	head = NULL;
	tail = NULL;
	temp = NULL;
	pos = NULL;
	m_nCount = 0;
}

template <class T>
inline CTList<T>::~CTList()
{
	Clear();
}

template <class T>
inline CTList<T>::CTList(const CTList<T> &lst)
{
	Node* np;
	
	head = NULL;
	tail = NULL;
	temp = NULL;
	pos = NULL;
	m_nCount = 0;
	
	if(head != lst.head)
	{
		np = lst.head;
		while (np)
		{
			temp = new Node;
			temp->Data = np->Data;
			temp->prev = tail;
			if(tail)
				tail->next = temp;
			else
				head = temp;
			tail = temp;
			np = np->next;
		}
		tail->next = NULL;
		m_nCount = lst.m_nCount;
	}
}

template <class T>
inline CTList<T>& CTList<T>::operator=(const CTList<T> &lst)
{
	Node *np;
	
	if(head != lst.head)
	{
		Clear();
		np = lst.head;
		while (np)
		{
			temp = new Node;
			temp->Data = np->Data;
			temp->prev = tail;
			if(tail)
				tail->next = temp;
			else
				head = temp;
			tail = temp;
			np = np->next;
		}
		if(tail)
		{
			tail->next = NULL;
			m_nCount = lst.m_nCount;
		}
	}
	return *this;
}

template <class T>
inline T& CTList<T>::GetHead()
{
	assert(head);
	pos = head;
	return head->Data;
}

template <class T>
inline T& CTList<T>::GetTail()
{
	assert(tail);
	pos = tail;
	return tail->Data;
}

template <class T>
inline T CTList<T>::RemoveHead()
{
	assert(head);
	temp = head;
	head = head->next;
	if(!head)
		tail = NULL;
	else
		head->prev = NULL;
	T tp = temp->Data;
	delete temp;
	m_nCount--;
	return tp;
}

template <class T>
inline T CTList<T>::RemoveTail()
{
	assert(tail);
	temp = tail;
	tail = tail->prev;
	if(!tail)
		head = NULL;
	else
		tail->next = NULL;
	T tp = temp->Data;
	delete temp;
	m_nCount--;
	return tp;
}

template <class T>
inline void CTList<T>::Remove(const T &Data)
{
	temp = head;
	Node *prev, *next;

	//Removes all data nodes from the list
	while(temp)
	{
		if(temp->Data == Data)
		{
			prev = temp->prev;
			next = temp->next;
			if(prev)
				prev->next = next;
			else
				head = next;
			if(next)
				next->prev = prev;
			else
				tail = prev;
			delete temp;
			m_nCount--;
			temp = next;
		}
		else
			temp = temp->next;
	}
}

template <class T>
inline void CTList<T>::RemoveData(const T &Data)
{
	temp = head;
	Node *prev, *next;

	//Removes all data nodes from the list including data itself
	while(temp)
	{
		if(temp->Data == Data)
		{
			prev = temp->prev;
			next = temp->next;
			if(prev)
				prev->next = next;
			else
				head = next;
			if(next)
				next->prev = prev;
			else
				tail = prev;
			//delete temp->Data;
			delete temp;
			m_nCount--;
			temp = next;
		}
		else
			temp = temp->next;
	}
}

template <class T>
inline void CTList<T>::AddHead(const T &data)
{
	temp = new Node;
	temp->next = head;
	temp->prev = NULL;
	temp->Data = data;
	if(head)
		head->prev = temp;
	else
		tail = temp;
	head = temp;
	m_nCount++;
}

template <class T>
inline void CTList<T>::AddTail(const T &data)
{
	temp = new Node;
	temp->next = NULL;
	temp->prev = tail;
	temp->Data = data;
	if(tail)
		tail->next = temp;
	else
		head = temp;
	tail = temp;
	m_nCount++;
}

template <class T>
inline void CTList<T>::Clear()
{
	while(head)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
	tail = NULL;
	m_nCount = 0;
}

template <class T>
inline void CTList<T>::ClearData()
{
	while(head)
	{
		temp = head;
		head = head->next;
		delete temp->Data;
		delete temp;
	}
	tail = NULL;
	m_nCount = 0;
}

template <class T>
inline bool CTList<T>::IsEmpty()
{
	return m_nCount == 0;
}

template <class T>
inline ulong CTList<T>::GetCount()
{
	return m_nCount;
}

template <class T>
inline T& CTList<T>::GetNext()
{
	assert(pos);
	pos = pos->next;
	assert(pos);
	return pos->Data;
}

template <class T>
inline T& CTList<T>::GetPrev()
{
	assert(pos);
	pos = pos->prev;
	assert(pos);
	return pos->Data;
}

template <class T>
inline bool CTList<T>::IsLast()
{
	assert(pos);
	return !pos->next;
}

template <class T>
inline bool CTList<T>::IsFirst()
{
	assert(pos);
	return !pos->prev;
}

#endif
