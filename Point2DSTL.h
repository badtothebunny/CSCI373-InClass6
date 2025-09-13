/*
 *      Author: MaksiKutrolli
 */

#ifndef POINT2DSTL_H_
#define POINT2DSTL_H_

#include <iostream>
using namespace std;

class Point2DSTL{
	private:
		double x, y;

	public:
		Point2DSTL(){

		}

		Point2DSTL(double xcoord, double ycoord)
		{
			x = xcoord;
			y = ycoord;
		}

		double getX() const { return x; }
		double getY() const { return y; }
		friend ostream& operator<<(ostream& out, const Point2DSTL& q)
		{
			out << q.getX() << " " << q.getY();
			return out;
		}
};


class LeftRight
{
	public:
		bool operator()(const Point2DSTL& p, const Point2DSTL& q) const
		{
			return p.getX() < q.getX();
		}
};



#endif /* POINT2DSTL_H_ */
