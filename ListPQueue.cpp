#include "ListPQueue.h"

#include "Point2DSTL.h"
#include "PriorityQueueException.h"

template <typename D, typename C, typename E>
int ListPQueue<D,C,E>::size()const
{
	return L.size();
}

template <typename D, typename C, typename E>
bool ListPQueue<D,C,E>::isEmpty()const
{
	return L.empty();
}

template <typename D, typename C, typename E>
void ListPQueue<D,C,E>::insert(const D& e)
{	//Makes more sense to use a while loop.
	typename std::list<D>::iterator p ;
	for(p = L.begin(); p!= L.end(); p++)
	{
		 if (comparator(e,*p))
		 {
		 	break;
		 }
	}
	L.insert(p,e);
}

template <typename D, typename C, typename E>
const D& ListPQueue<D,C,E>::min() const throw(E)
{
	if (L.empty()) throw E("PQ is empty");
	return L.front();
}

template <typename D, typename C, typename E>
void ListPQueue<D,C,E>::removeMin() throw(E)
{
	if (L.empty()) throw E("PQ is empty");
	L.pop_front();
}

template class ListPQueue<Point2DSTL, LeftRight, PriorityQueueException>;
