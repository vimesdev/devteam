#ifndef VECTOR_H
#define VECTOR_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "Define.h"

template<class T>
class Vector{

protected:
	T* 		m_pData;
	long 	m_nSize;
	long	m_nMaxSize;
	int		m_nGrowBy;
	void 	SetSize(long nNewSize);
	void 	SetAtGrowBy(long nIndex, T newElement);
public:
	Vector();
	~Vector();
	const 	T& GetAt(long nIndex) const;
	T& 		GetAt(long nIndex);
	void 	SetAt(long nIndex, T newElement);
	const T& operator[](long nIndex) const;
	T&		operator[](long nIndex);
	long 	Add(T newElement);
	void 	InsertAt(long nIndex, T newElement);
	long 	GetSize() const;
	long 	GetCount() const;
	bool 	IsEmpty() const;
	void 	RemoveAt(long nIndex);
	void 	RemoveAll();
	long	Find(T data);
	bool	Containts(T data);
};

/**************************************
*Members of class Vector
*
*************************************/


template<class T>
Vector<T>::Vector():
	m_pData(NULL)
{
	m_nSize = 0;
	m_nMaxSize = 0;
	m_nGrowBy = 10;
}

template<class T>
Vector<T>::~Vector(){
	RemoveAll();
}
template<class T>
long Vector<T>::GetCount() const
{
	return m_nSize;
}

template<class T>
long Vector<T>::GetSize() const
{
	return m_nSize;
}

template<class T>
bool Vector<T>::IsEmpty() const
{
	return (m_nSize==0);
}
template<class T>
void Vector<T>::RemoveAll()
{
	if (m_nSize > 0 && m_pData != NULL)
	{
		for(long i = 0; i < m_nSize; i++ )
			(m_pData + i)->~T();
		free(m_pData);	
	}
	m_nSize = m_nMaxSize = 0;
	m_pData = NULL;
}
template<class T>
T& Vector<T>::GetAt(long nIndex)
{
	assert(nIndex >= 0 && nIndex < m_nSize);
	return m_pData[nIndex];
}
template<class T>
const T& Vector<T>::GetAt(long nIndex) const
{
	assert(nIndex >= 0 && nIndex < m_nSize);
	return m_pData[nIndex];
}

template<class T>
void Vector<T>::SetAt(long nIndex, T newData)
{
	assert(nIndex >= 0 && nIndex < m_nSize);
	m_pData[nIndex] = newData;
}

template<class T>
long Vector<T>::Add(T newData)
{
	long nIndex = m_nSize;
	SetAtGrowBy(nIndex, newData);
	return nIndex;
}


template<class T>
const T& Vector<T>::operator[](long nIndex) const
{
	return GetAt(nIndex);
}

template<class T>
T& Vector<T>::operator[](long nIndex)
{
	return GetAt(nIndex);
}

template<class T>
void Vector<T>::SetSize(long nNewSize)
{
	if(m_pData == NULL)
	{
		m_pData = (T*) malloc(nNewSize*sizeof(T));
		memset(m_pData, 0, nNewSize*sizeof(T));
		m_nMaxSize = m_nSize = nNewSize;
	}
	else if(nNewSize > m_nMaxSize)
	{
		m_pData = (T*) realloc(m_pData, (m_nSize+1)*sizeof(T)*m_nGrowBy);
	}
}

template<class T>
void Vector<T>::SetAtGrowBy(long nIndex, T newData)
{
	if(nIndex >= m_nSize)
	{
		SetSize(nIndex+1);
	
	}
	m_pData[nIndex] = newData;
}


template<class T>
void Vector<T>::InsertAt(long nIndex, T newData)
{
	if(nIndex < 0) return;
	if(nIndex >= m_nSize)
	{
		SetSize(nIndex+1);
	}
	else
	{
		long nOldSize = m_nSize;
		SetSize(m_nSize+1);
		(m_pData + nOldSize + 1)->~T();
		memmove(m_pData + nIndex + 1, m_pData + nIndex,
			(nOldSize-nIndex) * sizeof(T));
		memset((void*)(m_pData + nIndex), 0, sizeof(T));
	}
	m_pData[nIndex++] = newData;		
}
template<class T>
void Vector<T>::RemoveAt(long nIndex)
{
	if(nIndex < 0 || nIndex >= m_nSize)
		return;
	long nMoveCount = m_nSize - (nIndex + 1);
	(m_pData+nIndex)->~T();
	if(nMoveCount)
		memmove( m_pData + nIndex, m_pData + nIndex + 1, nMoveCount*sizeof(T));
	m_nSize--;
}


template<class T>
long Vector<T>::Find(T data)
{
	for (long i =0; i < m_nSize; i++)
	{
		if(GetAt(i) == data)
			return i;
	}
	return -1;
}

template<class T>
bool Vector<T>::Containts(T data)
{
	for (long i =0; i < m_nSize; i++)
	{
		if(GetAt(i) == data)
			return true;
	}
	return false;
}

static void testarray()
{
printf("\nTesting Vector");
	Vector<int> arr;
	for (int i =0; i < 10; i++)
		arr.Add(i);
	for (int i =0; i < arr.GetCount(); i++)
		printf("\n %d", arr[i]);
printf("\nInsert At");
	arr.InsertAt(2, 200);
	for (int i =0; i < arr.GetCount(); i++)
		printf("\n %d", arr[i]);
printf("\nRemove At %d", arr.GetCount());

	arr.RemoveAt(0);
	for (int i =0; i < arr.GetCount(); i++)
		printf("\n %d", arr[i]);

	arr.RemoveAll();
printf("\nFind pos %ld", arr.Find(2));
printf("\nContaints %d", arr.Containts(8));

}




#endif

