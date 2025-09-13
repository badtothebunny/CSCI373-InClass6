/*
 *      Author: MaksiKutrolli
 */

#ifndef PRIORITYQUEUEINTERFACE_PRIORITYQUEUEG_H_
#define PRIORITYQUEUEINTERFACE_PRIORITYQUEUEG_H_

template <typename E, typename C, typename R> // Element, comparator and Exception
class PriorityQueueG{
public:
	virtual ~ PriorityQueueG() = default;

	virtual int size() const = 0; // number of elements
	virtual bool isEmpty() const = 0; // is the queue empty?
	virtual void insert(const E& e) = 0; // insert element
	virtual const E& min() const throw(R) = 0; // minimum element
	virtual void removeMin() throw(R) = 0; // remove minimum


};



#endif /* PRIORITYQUEUEINTERFACE_PRIORITYQUEUEG_H_ */
