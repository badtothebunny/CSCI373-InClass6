#include "Point2DSTL.h"
#include "PriorityQueueException.h"
#include "ListPQueue.h"
#include <iostream>

int main()
{
	ListPQueue<Point2DSTL, LeftRight, PriorityQueueException> pl;
	pl.insert(Point2DSTL(2,7));
	pl.insert(Point2DSTL(1,5));
	pl.insert(Point2DSTL(3,8));
	pl.insert(Point2DSTL(-2,17));
	while (!pl.isEmpty())
	{
		std::cout<<pl.min()<<std::endl;
		pl.removeMin();
	}
	return 0;
}
