#ifndef LIST_H
#define LIST_H
#include <stdio.h>

template<class T>
class List{
public:
	class Node{
	public:
		T	data;
		Node	*prev, *next;
		Node(T dta, Node *n, Node *p){ prev = p; next = n; data=dta;};
		Node(){ prev = NULL; next = NULL; };
	};

	List();
	virtual ~List();
	T&		Add(T data, bool bFirst=false);
	T&		GetAt(long nIndex);
	T&		InsertAt(long nIndex, T data, bool bBefore=false);
	void	SetAt(long nIndex, T data);
	void	RemoveAll();
	bool	RemoveAt(long nIndex);
	bool	Containts(T data);
	long	Find(T data);
	long	GetSize();
	long	GetCount();
	void	CleanData();
	T&		operator[](long nIndex);
	void	operator=(List<T> &dataList);
	Node*	GetFirst();
	Node*	GetLast();
	Node*	GetNext();
	Node*	GetPrev();
	T&		GetData();
protected:
	Node *m_pFirst;
	Node *m_pLast;
	Node *m_pAccess;
	long	m_nAccessNumber;
	long	m_nSize;
	bool	m_bFreeData;
	Node*	GetPos(long nIndex);


};


template<typename T>
class Stack
{
protected:
	class StackNode
	{
	public:
	  T data;
	  StackNode* next;
	};

	StackNode* m_stackTop; //points to top of stack
	long       m_nSize;

public:
	//constructor and destructor
	 Stack();
	 Stack(Stack& s);
	 ~Stack();
    //stack operator
    bool IsEmpty()const;
	void Push(T newData );
    void Pop();
	void Pop(T& data);
	void GetTop(T& data);
	long GetSize();
	void PopAll();
};//end class


template<typename T>
class Queue
{
protected:
	class QueueNode
	{
	public:
	  T data;
	  QueueNode* next;
	};

	QueueNode* m_queueTop; //points to top of Queue
	QueueNode* m_queueLast; //points to top of Queue
	long       m_nSize;

public:
	//constructor and destructor
	 Queue();
	 Queue(Queue& s);
	 ~Queue();
    //Queue operator
   	bool IsEmpty()const;
	void Push(T newData );
   	void Pop();
	void Pop(T& data);
	void GetTop(T& data);
	long GetSize();
	void PopAll();
};//end class


template<class T>
List<T>::List(){
	m_nSize = 0;
	m_pFirst = NULL;
	m_pLast = NULL;
	m_pAccess = NULL;
	m_nAccessNumber = 0;
	m_bFreeData = false;
}
template<class T>
List<T>::~List(){
	while(m_nSize) RemoveAt(0);
}
template<class T>
T&	List<T>::Add(T data, bool bFirst){
	Node *newNode;
	if(bFirst)
	{
		newNode = new Node(data, m_pFirst, NULL);
		if(m_pFirst)
		{
			m_pFirst->prev = newNode;
			m_pFirst = newNode;
		}
		else
			m_pFirst = m_pLast = newNode;
		m_nSize++;
		return (m_pFirst->data);
	}
	else
	{
		newNode = new Node(data, NULL, m_pLast);
		if(m_pLast)
		{
			m_pLast->next = newNode;
			m_pLast = newNode;
		}
		else
			m_pFirst = m_pLast = newNode;

		m_nSize++;
		return (m_pLast->data);
	}
}
template<class T>
T&	List<T>::GetAt(long nIndex)
{
	int rIndex = nIndex;
	Node *pNode = GetPos(nIndex);
	if(pNode == NULL)
	{
		fprintf(stderr, "Returning NULL Data\n");
		return ( (T &) *pNode );
	}
	return ( pNode->data );

}


template<class T>
typename List<T>::Node* 
List<T>::GetPos(long nIndex)
{
	Node *pNode = NULL;
	Node *pFirst, *pLast;
	int r1, r2;
	long rIndex = nIndex;
	if(nIndex >= m_nSize || nIndex < 0)
	{
		return NULL;
	}
	if(m_nAccessNumber > 0 && m_nAccessNumber == nIndex)
		return m_pAccess;
	pFirst = m_pFirst;
	pLast = m_pLast;
	r1 = 0;
	r2 = m_nSize;
	if(m_nAccessNumber <= nIndex)
	{
		if(m_pAccess != NULL)
			pFirst = m_pAccess;
		r1 = m_nAccessNumber;
	}
	else
	{
		if(m_pAccess != NULL)
			pLast = m_pAccess;
		r2 = m_nAccessNumber;
	}

	int n;	

	if(rIndex-r1 <= (r2-r1)/2)
	{
		pNode = pFirst;
		n = r1;
		while(++n <= rIndex)
		{
			pNode = pNode->next;
		}
	}
	else
	{
		
		pNode = pLast;
		n = r2;
		while(--n > rIndex)
		{
			pNode = pNode->prev;
		}
	}

	m_pAccess = pNode;
	m_nAccessNumber = rIndex;
	return pNode;
}

template<class T>
T&	List<T>::InsertAt(long nIndex, T data, bool bBefore)
{
	if(nIndex <= 0)
		return Add(data, true);
	if(nIndex >= m_nSize)
		return Add(data);

	Node *pOldNode = GetPos(nIndex);
	if(pOldNode)
	{
		Node *newNode = new Node(data, pOldNode, pOldNode->prev);
		if(newNode->prev)
		{
			newNode->prev->next = newNode;
		}
		else
			m_pFirst = newNode;

		if(newNode->next)
			newNode->next->prev = newNode;
		else
			m_pLast = newNode;
		m_nSize++;
		return pOldNode->data;

	}
	
}

template<class T>
T&	List<T>::operator[](long nIndex){
	return GetAt(nIndex);
}
template<class T>
void List<T>::SetAt(long nIndex, T data)
{
	T oldData = GetAt(nIndex);
	if(m_pAccess != NULL)
	{
		m_pAccess->data = data;
	}
}
template<class T>
void List<T>::RemoveAll()
{
	while(m_nSize){
		RemoveAt(0);
	}

}
template<class T>
bool List<T>::RemoveAt(long nIndex)
{
	Node	*pNode = NULL;
	if( nIndex >= m_nSize )
	{
		return false;
	}
	pNode = GetPos(nIndex);
	
	if(pNode == NULL)
		return false;
	if(pNode->prev)
		pNode->prev->next = pNode->next;
	else
		m_pFirst = pNode->next;

	if(pNode->next)
		pNode->next->prev = pNode->prev;
	else
		m_pLast = pNode->prev;
	
	if(pNode != NULL){
		delete pNode; pNode = NULL;
	}
	m_pAccess = m_pFirst;
	m_nAccessNumber = 0;
	m_nSize--;
	return true;

}
template<class T>
long List<T>::GetSize()
{
	return m_nSize;
}

template<class T>
long List<T>::GetCount()
{
	return m_nSize;
}
template<class T>
void List<T>::operator=(List<T> &listData)
{
	for (long i = 0; i < listData.GetSize(); i++)
	{
		T data = listData.GetAt(i);
		Add(data);
	}
}

template<class T>
void List<T>::CleanData()
{
	T data;
	for (int i =0; i < m_nSize; i++)
	{
		data = GetAt(i);
		delete data;
	}
}

template<class T>
long List<T>::Find(T data)
{
	Node *n = m_pFirst;
	for (long i =0; i < m_nSize; i++) 
	{
		if ((n->data)==data) 
		{
			m_pAccess = n;
			m_nAccessNumber = i;

			return i;
		}
		n = n->next;
    }
	return -1;
}
template<class T>
bool List<T>::Containts(T data)
{
	if(Find(data) < 0)
		return false;
	return true;
}




template<class T>
typename List<T>::Node* 
List<T>::GetFirst()
{
	m_pAccess = m_pFirst;
	return m_pFirst;
}
template<class T>
typename List<T>::Node* 
List<T>::GetLast()
{
	m_pAccess = m_pLast;
	return m_pLast;
}

template<class T>
typename List<T>::Node* 
List<T>::GetNext()
{
	if(m_pAccess == NULL)
		return NULL;
	m_pAccess = m_pAccess->next;
	return m_pAccess;
}

template<class T>
typename List<T>::Node* 
List<T>::GetPrev()
{
	if(m_pAccess == NULL)
		return NULL;
	m_pAccess = m_pAccess->prev;
	return m_pAccess;
}

template<class T>
T& List<T>::GetData()
{
	if(m_pAccess != NULL)
		return m_pAccess->data;

}


/***************************************************************
*Members of stack
***************************************************************/
template<typename T>
Stack<T>::Stack() : m_stackTop(NULL)
{
  m_nSize =0;
}// end default constructor

template<typename T>
Stack<T>::Stack(Stack& stack)
{
  if(stack.m_stackTop == NULL)
  {
	m_stackTop = NULL; // original list is empty
	m_nSize = 0;
  }
  else
  { //copy first node
	 m_stackTop = new StackNode;
	 assert(m_stackTop != NULL);
	 m_stackTop->data = stack.m_stackTop->data;
	 //copy rest of list
	 StackNode* newNode = m_stackTop;// new list pointer
	 for(StackNode* pNode = stack.m_stackTop->next;
	               pNode != NULL;
				   pNode = pNode->next)
	{
       newNode->next = new StackNode;
	   assert(newNode != NULL);
	   newNode = newNode->next;
	   newNode->data = pNode->data;
	}// end for
	m_nSize = stack.GetSize();
	newNode->next = NULL;
  }//end if
}// end copy constructor

template<typename T>
Stack<T>::~Stack()
{
  Pop();
  while(!IsEmpty())
    Pop();
}//end destructor

template<typename T>
bool Stack<T>::IsEmpty()const
{
  return bool(m_stackTop == NULL);
}// end IsEmpty

template<typename T>
void Stack<T>::Push(T newData /*,bool& bSuccess*/)
{
  //create a new node
  StackNode* newNode = new StackNode;
  bool bSuccess = bool(newNode != NULL); //check allocation

  if(bSuccess)
  { 
     newNode->data = newData;

	 //insert the new node
	 newNode->next = m_stackTop;
	 m_stackTop = newNode;
	 ++m_nSize;
  } // end if
} // end push

template<typename T>
void Stack<T>::Pop()
{
  bool bSuccess = bool(!IsEmpty());
  if(bSuccess)
  { // stack is not empty; delete top
    StackNode* temp = m_stackTop;
	m_stackTop = m_stackTop->next;
	temp->next = NULL; 
	delete temp;
	--m_nSize;
  } // end if
}// end Pop

template<typename T>
void Stack<T>::Pop(T& data)
{
   bool bSuccess = bool(!IsEmpty());
   if(bSuccess)
   { //stack is not empty; retrieve and delete top
      data = m_stackTop->data;
	  StackNode* temp = m_stackTop;
	  m_stackTop = m_stackTop->next;

	  // return deleted node to system
	  temp->next = NULL; 
	  delete temp;
	  --m_nSize;
   } // end if
} // end Pop

template<typename T>
void Stack<T>::GetTop(T& data)
{
   bool bSuccess = bool(!IsEmpty());
   if(bSuccess)
   {
     data = m_stackTop->data;
   }
}// end GetTop



template<typename T>
long Stack<T>::GetSize()
{
  return m_nSize;
}// end GetSize

template<typename T>
void Stack<T>::PopAll()
{
  while(!IsEmpty())
	  Pop();
}// end PopAll




/***************************************************************
*Members of Queue
***************************************************************/
template<typename T>
Queue<T>::Queue() : m_queueLast(NULL)
{
  m_nSize =0;
	m_queueTop = NULL;
	m_queueLast = NULL;
} // end default constructor
template<typename T>
Queue<T>::Queue(Queue& queue)
{
  if(queue.m_queueLast == NULL)
  {
	m_queueTop = NULL;
	m_queueLast = NULL;
	m_nSize = 0;
  }
  else
  { //copy first node
	 m_queueTop= new QueueNode;
	 assert(m_queueTop != NULL);
	 m_queueTop->data = queue.m_queueTop->data;
	 //copy rest of list
	 QueueNode* newNode = m_queueTop;// new list pointer
	 for(QueueNode* pNode = queue.m_queueTop->next;
	               pNode != NULL;
				   pNode = pNode->next)
	{
       newNode->next = new QueueNode;
	   assert(newNode != NULL);
	   newNode = newNode->next;
	   newNode->data = pNode->data;
	}// end for

	newNode->next = NULL;
	m_nSize = queue.GetSize();
  }//end if
}// end copy constructor




template<typename T>
Queue<T>::~Queue()
{
  Pop();
  while(!IsEmpty())
    Pop();
}//end destructor

template<typename T>
bool Queue<T>::IsEmpty()const
{
  return bool(m_queueTop == NULL);
}// end IsEmpty

template<typename T>
void Queue<T>::Push(T newData)
{
  //create a new node
  QueueNode* newNode = new QueueNode;
  bool bSuccess = bool(newNode != NULL); //check allocation

  if(bSuccess)
  { 
     newNode->data = newData;
	 //insert the new node
	if(m_queueLast)
	{
		m_queueLast->next = newNode;
		m_queueLast = m_queueLast->next;
	}
	else
		m_queueLast = m_queueTop = newNode;
	 newNode->next = NULL;
	 ++m_nSize;
  } // end if
} // end push

template<typename T>
void Queue<T>::Pop()
{
  bool bSuccess = bool(!IsEmpty());
  if(bSuccess)
  { 
    	QueueNode* temp = m_queueTop;
	m_queueTop = temp->next;
	temp->next = NULL;
	delete temp;
	--m_nSize;
  } // end if
}// end Pop

template<typename T>
void Queue<T>::Pop(T& data)
{
   bool bSuccess = bool(!IsEmpty());
   if(bSuccess)
   { //Queue is not empty; retrieve and delete top
	data = m_queueTop->data;
	QueueNode* temp = m_queueTop;
	m_queueTop = m_queueTop->next;
	// return deleted node to system
	temp->next = NULL; 
	delete temp;
	--m_nSize;
   } // end if
} // end Pop

template<typename T>
void Queue<T>::GetTop(T& data)
{
   bool bSuccess = bool(!IsEmpty());
   if(bSuccess)
   {
     data = m_queueTop->data;
   }
}// end GetTop


template<typename T>
long Queue<T>::GetSize()
{
  return m_nSize;
}// end GetSize

template<typename T>
void Queue<T>::PopAll()
{
  while(!IsEmpty())
	  Pop();
}// end PopAll


static void testlist()
{
	List<int> list;
	for (int i =0; i < 10; i++)
	{
		list.Add(i);
	}
	
	list.InsertAt(6, 100);
	for (int i =0; i < list.GetSize(); i ++)
		printf("\n %d", list.GetAt(i));

	list.InsertAt(6, 5000);
	printf("\n Insert at 5");
	for (int i =0; i < list.GetSize(); i ++)
		printf("\n %d", list.GetAt(i));
	
	list.RemoveAt(7);
	printf("\n Remove at 7");
	for (int i =0; i < list.GetSize(); i ++)
		printf("\n %d", list.GetAt(i));

	list.SetAt(4, 4000);
	printf("\n Set at 4");
	for (int i =0; i < list.GetSize(); i ++)
		printf("\n %d", list.GetAt(i));
//	list.RemoveAll();

//	printf("\n RemoveAll");
//	for (int i =0; i < list.GetSize(); i ++)
//		printf("\n %d", list.GetAt(i));

	printf("\n data %d", list.Containts(8));

printf("\r\nGetFirst");
List<int>::Node* pNode = list.GetFirst();
while(pNode){
	printf("\r\n%d", list.GetData());
	pNode = list.GetNext();	
}

}



#endif
