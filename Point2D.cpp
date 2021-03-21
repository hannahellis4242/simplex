#include "Point2D.h"

namespace simplex
{
Point2D::Point2D(const double x, const double y)
	:x_(x),y_(y){}
double x() const
{
	return x_;
}
double y() const
{
	return y_;
}
}
