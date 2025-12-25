#ifndef MAP_H
#define MAP_H
#include <assert.h>
#include "List.h"


template<class KEY, class VALUE>
class Map{
public:
	Map();
	~Map();
	struct MapDataObject
	{
		const KEY key;
		VALUE value;
		MapDataObject(KEY keyval, VALUE val ) : key( keyval ), value(val)	{}
	};
	bool	IsEmpty();
	long	GetCount();
	long	GetSize();

	void	Add(KEY key, VALUE newValue);
	void	SetAt(KEY key, VALUE newValue);
	bool	RemoveKey(KEY key);
	void	RemoveAll();
	VALUE& operator[](KEY key);
	bool	Lookup(KEY key, VALUE& rValue);
	void	GetAt(int nIndex, KEY &key, VALUE& rValue);
protected:
	List<MapDataObject*> m_map;
};



template<class KEY, class VALUE>
Map<KEY,VALUE>::Map(){
}
template<class KEY, class VALUE>
Map<KEY,VALUE>::~Map(){
	m_map.CleanData();
}
template<class KEY, class VALUE>
bool Map<KEY,VALUE>::IsEmpty()
{
	if(m_map.GetCount() > 0)
		return true;
	return false;
}
template<class KEY, class VALUE>
long Map<KEY,VALUE>::GetCount()
{
	return m_map.GetCount();
}
template<class KEY, class VALUE>
long Map<KEY,VALUE>::GetSize(){
	return m_map.GetSize();
}

template<class KEY, class VALUE>
void Map<KEY,VALUE>::Add(KEY key, VALUE newValue)
{
	MapDataObject *obj = new MapDataObject(key, newValue);
	m_map.Add(obj);
}

template<class KEY, class VALUE>
void Map<KEY,VALUE>::SetAt(KEY key, VALUE newValue)
{
	for (long i =0; i < m_map.GetCount(); i++)
	{
		MapDataObject *obj = m_map[i];
	
		if(obj->key == key)
		{
			obj->value = newValue;
			break;
		}
	}
}
template<class KEY, class VALUE>
bool Map<KEY,VALUE>::RemoveKey(KEY key)
{
	MapDataObject *obj;
	for (int i =0; i < m_map.GetCount(); i++)
	{
		obj = m_map[i];
		if(obj && obj->key == key)
		{
			delete obj;
			m_map.RemoveAt(i);
			return true;
		}
	}
	return false;
}
template<class KEY, class VALUE>
void Map<KEY,VALUE>::RemoveAll()
{
	m_map.CleanData();
}
template<class KEY, class VALUE>
VALUE& Map<KEY,VALUE>::operator[](KEY key)
{
	VALUE retVal;
	for (long i =0; i < m_map.GetCount(); i++)
	{
		MapDataObject *obj = m_map[i];
		if(obj->key == key)
		{
			retVal = obj->value;
			break;
		}
	}
	return retVal;
}
template<class KEY, class VALUE>
bool Map<KEY,VALUE>::Lookup(KEY key, VALUE& rValue)
{
	for (long i =0; i < m_map.GetCount(); i++)
	{
		MapDataObject *obj = m_map[i];
		if(obj->key == key)
		{
			rValue = obj->value;
			return true;
		}
	}
	return false;
}


template<class KEY, class VALUE>
void Map<KEY,VALUE>::GetAt(int nIndex, KEY &key, VALUE& rValue)
{
	assert(nIndex >=0 && nIndex < m_map.GetCount());
	MapDataObject *obj = m_map[nIndex];
	key = obj->key;
	rValue = obj->value;
}


static void testmap()
{

	Map<char*, int> map;
	map.Add("abc", 10);
	map.Add("ac", 12);
	map.Add("bc", 13);
	map.Add("as", 14);
	map.Add("ad", 123);
	map.RemoveKey("abc");
	int val;
	map.Lookup("ab", val);

}



#endif
