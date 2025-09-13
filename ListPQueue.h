#include "PriorityQueueG.h"
#include <iostream>
#include<list>

template<typename Data, typename Comp, typename Ex> //Comp - comparator || Ex - Exception
class ListPQueue:public PriorityQueueG<Data, Comp, Ex>
{
	private:
		std::list<Data> L;
		Comp comparator;
	public:
		int size() const; // number of elements
		bool isEmpty() const; // is the queue empty?
		void insert(const Data& e); // insert element
		const Data& min() const throw(Ex); // minimum element
		void removeMin() throw(Ex); // remove minimum

};
